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
ATerm App_2 (ATerm, ATerm f_39 (ATerm), ATerm g_39 (ATerm));
ATerm Con_3 (ATerm, ATerm c_39 (ATerm), ATerm d_39 (ATerm), ATerm e_39 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm o_61 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm m_40 (ATerm));
ATerm Specification_1 (ATerm, ATerm o_40 (ATerm));
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm p_43 (ATerm));
ATerm Rec_2 (ATerm, ATerm n_41 (ATerm), ATerm o_41 (ATerm));
ATerm Let_2 (ATerm, ATerm p_41 (ATerm), ATerm q_41 (ATerm));
ATerm sboundin_3 (ATerm, ATerm q_43 (ATerm), ATerm r_43 (ATerm), ATerm s_43 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm m_41 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm j_46 (ATerm, ATerm (ATerm)), ATerm k_46 (ATerm), ATerm l_46 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_46 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm DeclareVariables_0 (ATerm);
ATerm RDtoSD_0 (ATerm);
ATerm MkCall_0 (ATerm);
ATerm MkCongDef_0 (ATerm);
ATerm MkCongDefs_0 (ATerm);
ATerm congdefs_0 (ATerm);
ATerm RulesToSdefs_0 (ATerm);
ATerm debug_1 (ATerm, ATerm h_49 (ATerm));
ATerm int_to_string_0 (ATerm);
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm FunType_2 (ATerm, ATerm q_40 (ATerm), ATerm r_40 (ATerm));
ATerm ConstType_1 (ATerm, ATerm p_40 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm u_40 (ATerm), ATerm v_40 (ATerm));
ATerm CheckCons_2 (ATerm, ATerm f_43 (ATerm), ATerm g_43 (ATerm));
ATerm manytd_1 (ATerm, ATerm t_62 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm check_constructors_1 (ATerm, ATerm c_0 (ATerm));
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm o_44 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm c_41 (ATerm), ATerm d_41 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm l_43 (ATerm));
ATerm Var_1 (ATerm, ATerm y_40 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm b_46 (ATerm), ATerm c_46 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm new_0 (ATerm);
ATerm RnBinding_2 (ATerm, ATerm h_46 (ATerm), ATerm i_46 (ATerm, ATerm (ATerm)));
ATerm Fst_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm v_45 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm x_58 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm c_59 (ATerm));
ATerm substitute_6 (ATerm, ATerm t_46 (ATerm), ATerm u_46 (ATerm, ATerm (ATerm)), ATerm v_46 (ATerm), ATerm w_46 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm x_46 (ATerm, ATerm (ATerm)), ATerm y_46 (ATerm));
ATerm substitute_5 (ATerm, ATerm a_47 (ATerm), ATerm b_47 (ATerm, ATerm (ATerm)), ATerm c_47 (ATerm), ATerm d_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm e_47 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm m_44 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm n_44 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm MsgR_0 (ATerm);
ATerm MsgE_0 (ATerm);
ATerm MsgU_0 (ATerm);
ATerm MsgS_0 (ATerm);
ATerm MkMsg_0 (ATerm);
ATerm err_msg_0 (ATerm);
ATerm Overlay_3 (ATerm, ATerm g_40 (ATerm), ATerm h_40 (ATerm), ATerm i_40 (ATerm));
ATerm Union_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm explode_term_0 (ATerm);
ATerm default_join_0 (ATerm);
ATerm SeqUnion_0 (ATerm);
ATerm cart_1 (ATerm, ATerm s_55 (ATerm));
ATerm seqs_join_0 (ATerm);
ATerm JoinScope_1 (ATerm, ATerm i_43 (ATerm));
ATerm UDjoin_0 (ATerm);
ATerm Cong_2 (ATerm, ATerm f_42 (ATerm), ATerm g_42 (ATerm));
ATerm use_term_0 (ATerm);
ATerm def_term_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm r_39 (ATerm), ATerm s_39 (ATerm), ATerm t_39 (ATerm));
ATerm BAM_3 (ATerm, ATerm z_38 (ATerm), ATerm a_39 (ATerm), ATerm b_39 (ATerm));
ATerm BA_2 (ATerm, ATerm x_38 (ATerm), ATerm y_38 (ATerm));
ATerm AM_2 (ATerm, ATerm v_38 (ATerm), ATerm w_38 (ATerm));
ATerm MA_2 (ATerm, ATerm t_38 (ATerm), ATerm u_38 (ATerm));
ATerm Match_1 (ATerm, ATerm n_42 (ATerm));
ATerm Build_1 (ATerm, ATerm o_42 (ATerm));
ATerm constructs_1 (ATerm, ATerm h_43 (ATerm));
ATerm use_def_0 (ATerm);
ATerm RDef_3 (ATerm, ATerm z_39 (ATerm), ATerm a_40 (ATerm), ATerm b_40 (ATerm));
ATerm SDef_3 (ATerm, ATerm r_41 (ATerm), ATerm s_41 (ATerm), ATerm t_41 (ATerm));
ATerm check_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm k_40 (ATerm));
ATerm Signature_1 (ATerm, ATerm j_40 (ATerm));
ATerm spec_use_def_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm strings_to_vars_0 (ATerm);
ATerm isect_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm SplitDynamicRule_2 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm));
ATerm split_dynamic_rules_0 (ATerm);
ATerm dist_scope_1 (ATerm, ATerm i_64 (ATerm));
ATerm one_dist_1 (ATerm, ATerm y_58 (ATerm));
ATerm env_oncetd_1 (ATerm, ATerm n_59 (ATerm));
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm z_62 (ATerm), ATerm a_63 (ATerm));
ATerm repeat_1 (ATerm, ATerm c_63 (ATerm));
ATerm listtd_1 (ATerm, ATerm l_58 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm c_40 (ATerm));
ATerm Scope_2 (ATerm, ATerm r_42 (ATerm), ATerm s_42 (ATerm));
ATerm tboundin_3 (ATerm, ATerm m_43 (ATerm), ATerm n_43 (ATerm), ATerm o_43 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm m_52 (ATerm), ATerm n_52 (ATerm), ATerm o_52 (ATerm));
ATerm crush_3 (ATerm, ATerm d_54 (ATerm), ATerm e_54 (ATerm), ATerm f_54 (ATerm));
ATerm collect_kids_1 (ATerm, ATerm l_54 (ATerm));
ATerm HdMember_1 (ATerm, ATerm t_53 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm q_63 (ATerm), ATerm r_63 (ATerm));
ATerm for_3 (ATerm, ATerm t_63 (ATerm), ATerm u_63 (ATerm), ATerm v_63 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm s_44 (ATerm), ATerm t_44 (ATerm), ATerm u_44 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm a_60 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm o_46 (ATerm), ATerm p_46 (ATerm));
ATerm alltd_1 (ATerm, ATerm z_61 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm u_55 (ATerm), ATerm v_55 (ATerm), ATerm w_55 (ATerm), ATerm x_55 (ATerm));
ATerm zip_1 (ATerm, ATerm z_55 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm q_46 (ATerm), ATerm r_46 (ATerm));
ATerm substitute_1 (ATerm, ATerm s_46 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm OLName_0 (ATerm);
ATerm OpName_0 (ATerm);
ATerm OpNames_0 (ATerm);
ATerm Names_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm filter_1 (ATerm, ATerm q_51 (ATerm));
ATerm const_names_0 (ATerm);
ATerm vars_to_consts_0 (ATerm);
ATerm MkSpec_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Combine_0 (ATerm);
ATerm FoldR_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm j_52 (ATerm), ATerm k_52 (ATerm));
ATerm at_end_1 (ATerm, ATerm x_57 (ATerm));
ATerm concat_0 (ATerm);
ATerm NormBSIG_0 (ATerm);
ATerm normalize_sigs_0 (ATerm);
ATerm NormBSP_0 (ATerm);
ATerm map_1 (ATerm, ATerm i_57 (ATerm));
ATerm BSpecs_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm y_59 (ATerm));
ATerm DefineSugar_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm w_42 (ATerm), ATerm x_42 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_63 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm y_48 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm y_50 (ATerm), ATerm z_50 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm f_38 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm r_57 (ATerm));
ATerm option_defined_1 (ATerm, ATerm c_48 (ATerm));
ATerm need_help_1 (ATerm, ATerm x_48 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm v_47 (ATerm), ATerm w_47 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm x_47 (ATerm), ATerm y_47 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm a_43 (ATerm), ATerm b_43 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_47 (ATerm));
ATerm iowrap_3 (ATerm, ATerm m_48 (ATerm), ATerm n_48 (ATerm), ATerm o_48 (ATerm));
ATerm iowrap_2 (ATerm, ATerm h_48 (ATerm), ATerm i_48 (ATerm));
ATerm iowrap_1 (ATerm, ATerm e_48 (ATerm));
ATerm frontend_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Expl_0 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL;
  i_7 = t;
  h_7 :
  if(match_cons(i_7, sym_Match_1))
    {
      j_7 = ATgetArgument(i_7, 0);
      {
        ATerm m_7 = NULL,n_7 = NULL,q_7 = NULL,r_7 = NULL,c_10 = NULL;
        ATerm o_7 = NULL;
        ATerm p_7 = NULL;
        t = new_0(t);
        o_7 = t;
        if(m_7 != NULL && m_7 != o_7)
          _fail(o_7);
        else
          m_7 = o_7;
        t = new_0(t);
        p_7 = t;
        if(n_7 != NULL && n_7 != p_7)
          _fail(p_7);
        else
          n_7 = p_7;
        t = not_null(j_7);
        {
          ATerm d_0 (ATerm t)
          {
            ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
            s_7 = t;
            p_4 :
            if(match_cons(s_7, sym_Explode_2))
              {
                t_7 = ATgetArgument(s_7, 0);
                u_7 = ATgetArgument(s_7, 1);
                if(q_7 != NULL && q_7 != t_7)
                  _fail(t_7);
                else
                  q_7 = t_7;
                if(r_7 != NULL && r_7 != u_7)
                  _fail(u_7);
                else
                  r_7 = u_7;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_7));
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, d_0);
          c_10 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_7), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_10)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_7), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_7))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_7)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_7)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_7), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_7), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0))))))));
        }
      }
    }
  else
    {
      if(match_cons(i_7, sym_Build_1))
        {
          j_7 = ATgetArgument(i_7, 0);
          {
            ATerm f_10 = NULL,c_11 = NULL,d_11 = NULL,f_12 = NULL;
            ATerm a_11 = NULL;
            t = new_0(t);
            a_11 = t;
            if(f_10 != NULL && f_10 != a_11)
              _fail(a_11);
            else
              f_10 = a_11;
            t = not_null(j_7);
            {
              ATerm e_0 (ATerm t)
              {
                ATerm e_11 = NULL,d_12 = NULL,e_12 = NULL;
                e_11 = t;
                u_4 :
                if(match_cons(e_11, sym_Explode_2))
                  {
                    d_12 = ATgetArgument(e_11, 0);
                    e_12 = ATgetArgument(e_11, 1);
                    if(c_11 != NULL && c_11 != d_12)
                      _fail(d_12);
                    else
                      c_11 = d_12;
                    if(d_11 != NULL && d_11 != e_12)
                      _fail(e_12);
                    else
                      d_11 = e_12;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_10));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, e_0);
              f_12 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_10), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_11), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_11), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_10))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_12)))));
            }
          }
        }
      else
        {
          if(match_cons(i_7, sym_ExplodeCong_2))
            {
              j_7 = ATgetArgument(i_7, 0);
              k_7 = ATgetArgument(i_7, 1);
              {
                ATerm p_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL;
                ATerm k_14 = NULL;
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
                  {
                    ATerm n_14 = NULL;
                    t = new_0(t);
                    m_14 = t;
                    if(y_13 != NULL && y_13 != m_14)
                      _fail(m_14);
                    else
                      y_13 = m_14;
                    t = new_0(t);
                    n_14 = t;
                    if(z_13 != NULL && z_13 != n_14)
                      _fail(n_14);
                    else
                      z_13 = n_14;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_13), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_13), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_13), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_13), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_13)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_13)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(j_7), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_13)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_13))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(k_7), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_13)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_13))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_13)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_13)), (ATerm) ATmakeAppl(sym_Nil_0)))))));
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
  ATerm k_15 = NULL,l_15 = NULL;
  k_15 = t;
  j_15 :
  if(match_cons(k_15, sym_Build_1))
    {
      l_15 = ATgetArgument(k_15, 0);
      {
        ATerm n_15 = NULL,p_15 = NULL,q_15 = NULL,v_16 = NULL;
        ATerm o_15 = NULL;
        t = new_0(t);
        o_15 = t;
        if(n_15 != NULL && n_15 != o_15)
          _fail(o_15);
        else
          n_15 = o_15;
        t = not_null(l_15);
        {
          ATerm f_0 (ATerm t)
          {
            ATerm w_15 = NULL,q_16 = NULL,u_16 = NULL;
            w_15 = t;
            h_15 :
            if(match_cons(w_15, sym_App_2))
              {
                q_16 = ATgetArgument(w_15, 0);
                u_16 = ATgetArgument(w_15, 1);
                if(p_15 != NULL && p_15 != q_16)
                  _fail(q_16);
                else
                  p_15 = q_16;
                if(q_15 != NULL && q_15 != u_16)
                  _fail(u_16);
                else
                  q_15 = u_16;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_15));
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, f_0);
          v_16 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_15), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(p_15), not_null(q_15), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_15))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_16))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp1_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
  e_17 = t;
  c_17 :
  if(match_cons(e_17, sym_Build_1))
    {
      f_17 = ATgetArgument(e_17, 0);
      d_17 :
      if(match_cons(f_17, sym_App_2))
        {
          g_17 = ATgetArgument(f_17, 0);
          h_17 = ATgetArgument(f_17, 1);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_17)), not_null(g_17));
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
  ATerm r_17 = NULL,s_17 = NULL;
  r_17 = t;
  q_17 :
  if(match_cons(r_17, sym_Build_1))
    {
      s_17 = ATgetArgument(r_17, 0);
      {
        ATerm u_17 = NULL,v_17 = NULL,b_18 = NULL;
        t = not_null(s_17);
        {
          ATerm g_0 (ATerm t)
          {
            ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL;
            w_17 = t;
            n_17 :
            if(match_cons(w_17, sym_App_2))
              {
                x_17 = ATgetArgument(w_17, 0);
                z_17 = ATgetArgument(w_17, 1);
                o_17 :
                if(match_cons(x_17, sym_Build_1))
                  {
                    y_17 = ATgetArgument(x_17, 0);
                    if(v_17 != NULL && v_17 != y_17)
                      _fail(y_17);
                    else
                      v_17 = y_17;
                    if(u_17 != NULL && u_17 != z_17)
                      _fail(z_17);
                    else
                      u_17 = z_17;
                    t = not_null(v_17);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, g_0);
          b_18 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, not_null(b_18));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm c_19 = NULL,g_19 = NULL,h_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
  h_19 = t;
  s_18 :
  if(match_cons(h_19, sym_Seqs_1))
    {
      v_19 = ATgetArgument(h_19, 0);
      z_18 :
      if(match_cons(v_19, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(v_19, sym_Cons_2))
            {
              c_19 = ATgetArgument(v_19, 0);
              g_19 = ATgetArgument(v_19, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_19), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(g_19)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(h_19, sym_Choices_1))
        {
          v_19 = ATgetArgument(h_19, 0);
          a_19 :
          if(match_cons(v_19, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(v_19, sym_Cons_2))
                {
                  c_19 = ATgetArgument(v_19, 0);
                  g_19 = ATgetArgument(v_19, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(c_19), (ATerm) ATmakeAppl(sym_Choices_1, not_null(g_19)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(h_19, sym_LChoices_1))
            {
              v_19 = ATgetArgument(h_19, 0);
              b_19 :
              if(match_cons(v_19, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(v_19, sym_Cons_2))
                    {
                      c_19 = ATgetArgument(v_19, 0);
                      g_19 = ATgetArgument(v_19, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(c_19), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(g_19)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(h_19, sym_Lets_2))
                {
                  v_19 = ATgetArgument(h_19, 0);
                  w_19 = ATgetArgument(h_19, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(v_19), not_null(w_19));
                }
              else
                {
                  if(match_cons(h_19, sym_BA_2))
                    {
                      v_19 = ATgetArgument(h_19, 0);
                      w_19 = ATgetArgument(h_19, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_19)), not_null(v_19));
                    }
                  else
                    {
                      if(match_cons(h_19, sym_MA_2))
                        {
                          v_19 = ATgetArgument(h_19, 0);
                          w_19 = ATgetArgument(h_19, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_19)), not_null(w_19));
                        }
                      else
                        {
                          if(match_cons(h_19, sym_AM_2))
                            {
                              v_19 = ATgetArgument(h_19, 0);
                              w_19 = ATgetArgument(h_19, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_19), (ATerm) ATmakeAppl(sym_Match_1, not_null(w_19)));
                            }
                          else
                            {
                              if(match_cons(h_19, sym_BAM_3))
                                {
                                  v_19 = ATgetArgument(h_19, 0);
                                  w_19 = ATgetArgument(h_19, 1);
                                  x_19 = ATgetArgument(h_19, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_19)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_19), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_19)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(h_19, sym_InfixApp_3))
                                    {
                                      v_19 = ATgetArgument(h_19, 0);
                                      w_19 = ATgetArgument(h_19, 1);
                                      x_19 = ATgetArgument(h_19, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(w_19), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_19), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_19), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm p_21 = NULL;
  p_21 = t;
  o_21 :
  if(!(match_cons(p_21, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm x_8 = t;
  if(PushChoice()==0)
    {
      ATerm h_0 (ATerm t)
      {
        ATerm y_8 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = y_8;
            {
              ATerm r_21 = NULL;
              r_21 = t;
              q_21 :
              if(!(match_cons(r_21, sym_Wld_0)))
                _fail(t);
            }
          }
        return(t);
      }
      t = topdown_1(t, h_0);
      PopChoice();
      _fail(t);
    }
  else
    t = x_8;
  return(t);
}
ATerm App_2 (ATerm t, ATerm f_39 (ATerm), ATerm g_39 (ATerm))
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  w_21 = t;
  v_21 :
  if(match_cons(w_21, sym_App_2))
    {
      x_21 = ATgetArgument(w_21, 0);
      y_21 = ATgetArgument(w_21, 1);
      {
        ATerm b_22 = NULL;
        t = not_null(x_21);
        {
          ATerm d_22 = NULL;
          t = f_39(t);
          b_22 = t;
          t = not_null(y_21);
          t = g_39(t);
          d_22 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, not_null(b_22), not_null(d_22));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm c_39 (ATerm), ATerm d_39 (ATerm), ATerm e_39 (ATerm))
{
  ATerm n_22 = NULL,o_22 = NULL,q_22 = NULL,r_22 = NULL;
  n_22 = t;
  m_22 :
  if(match_cons(n_22, sym_Con_3))
    {
      o_22 = ATgetArgument(n_22, 0);
      q_22 = ATgetArgument(n_22, 1);
      r_22 = ATgetArgument(n_22, 2);
      {
        ATerm v_22 = NULL;
        t = not_null(o_22);
        {
          ATerm x_22 = NULL;
          t = c_39(t);
          v_22 = t;
          t = not_null(q_22);
          {
            ATerm z_22 = NULL;
            t = d_39(t);
            x_22 = t;
            t = not_null(r_22);
            t = e_39(t);
            z_22 = t;
            t = (ATerm) ATmakeAppl(sym_Con_3, not_null(v_22), not_null(x_22), not_null(z_22));
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
  ATerm z_8 = t;
  if(PushChoice()==0)
    {
      ATerm i_0 (ATerm t)
      {
        ATerm a_9 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = a_9;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, i_0);
      PopChoice();
      _fail(t);
    }
  else
    t = z_8;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
  k_23 = t;
  i_23 :
  if(match_cons(k_23, sym_SRule_1))
    {
      l_23 = ATgetArgument(k_23, 0);
      j_23 :
      if(match_cons(l_23, sym_Rule_3))
        {
          m_23 = ATgetArgument(l_23, 0);
          n_23 = ATgetArgument(l_23, 1);
          o_23 = ATgetArgument(l_23, 2);
          t = not_null(m_23);
          t = pureterm_0(t);
          t = not_null(n_23);
          t = buildterm_0(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_23)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_23), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_23)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(l_23, sym_StratRule_3))
            {
              m_23 = ATgetArgument(l_23, 0);
              n_23 = ATgetArgument(l_23, 1);
              o_23 = ATgetArgument(l_23, 2);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_23), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_23), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_23), (ATerm) ATmakeAppl(sym_Nil_0)))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm o_61 (ATerm))
{
  ATerm z_23 (ATerm t)
  {
    ATerm b_9 = t;
    if(PushChoice()==0)
      {
        t = o_61(t);
        PopChoice();
      }
    else
      {
        t = b_9;
        t = _one(t, z_23);
      }
    return(t);
  }
  t = z_23(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL;
  o_24 = t;
  m_24 :
  if(match_cons(o_24, sym_SRule_1))
    {
      p_24 = ATgetArgument(o_24, 0);
      n_24 :
      if(match_cons(p_24, sym_Rule_3))
        {
          q_24 = ATgetArgument(p_24, 0);
          r_24 = ATgetArgument(p_24, 1);
          s_24 = ATgetArgument(p_24, 2);
          {
            ATerm w_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,g_25 = NULL;
            ATerm x_24 = NULL;
            t = new_0(t);
            x_24 = t;
            if(w_24 != NULL && w_24 != x_24)
              _fail(x_24);
            else
              w_24 = x_24;
            t = not_null(q_24);
            {
              ATerm i_25 = NULL,j_25 = NULL,r_25 = NULL;
              ATerm j_0 (ATerm t)
              {
                ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
                b_25 = t;
                d_24 :
                if(match_cons(b_25, sym_Con_3))
                  {
                    c_25 = ATgetArgument(b_25, 0);
                    e_25 = ATgetArgument(b_25, 1);
                    f_25 = ATgetArgument(b_25, 2);
                    e_24 :
                    if(match_cons(c_25, sym_Var_1))
                      {
                        d_25 = ATgetArgument(c_25, 0);
                        if(a_25 != NULL && a_25 != d_25)
                          _fail(d_25);
                        else
                          a_25 = d_25;
                        if(y_24 != NULL && y_24 != e_25)
                          _fail(e_25);
                        else
                          y_24 = e_25;
                        if(z_24 != NULL && z_24 != f_25)
                          _fail(f_25);
                        else
                          z_24 = f_25;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_25));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, j_0);
              g_25 = t;
              t = not_null(r_24);
              {
                ATerm k_0 (ATerm t)
                {
                  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
                  k_25 = t;
                  h_24 :
                  if(match_cons(k_25, sym_Con_3))
                    {
                      l_25 = ATgetArgument(k_25, 0);
                      n_25 = ATgetArgument(k_25, 1);
                      o_25 = ATgetArgument(k_25, 2);
                      i_24 :
                      if(match_cons(l_25, sym_Var_1))
                        {
                          m_25 = ATgetArgument(l_25, 0);
                          j_24 :
                          if(match_cons(o_25, sym_Call_2))
                            {
                              p_25 = ATgetArgument(o_25, 0);
                              q_25 = ATgetArgument(o_25, 1);
                              k_24 :
                              if(match_cons(q_25, sym_Nil_0))
                                {
                                  if(a_25 != NULL && a_25 != m_25)
                                    _fail(m_25);
                                  else
                                    a_25 = m_25;
                                  if(i_25 != NULL && i_25 != n_25)
                                    _fail(n_25);
                                  else
                                    i_25 = n_25;
                                  if(j_25 != NULL && j_25 != p_25)
                                    _fail(p_25);
                                  else
                                    j_25 = p_25;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_24));
                                }
                              else
                                _fail(t);
                            }
                          else
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
                r_25 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_24), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_25), not_null(r_25), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_24), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(j_25), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(y_24), not_null(i_25), (ATerm) ATmakeAppl(sym_Id_0))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_24)))))));
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
  ATerm c_9 = t;
  if(PushChoice()==0)
    {
      ATerm d_9 = t;
      if(PushChoice()==0)
        {
          t = Rcon_0(t);
          t = desugarRule_0(t);
          PopChoice();
        }
      else
        {
          t = d_9;
          {
            ATerm e_9 = t;
            if(PushChoice()==0)
              {
                t = Scope_2(t, _id, desugarRule_0);
                PopChoice();
              }
            else
              {
                t = e_9;
                t = RtoS_0(t);
              }
          }
        }
      PopChoice();
    }
  else
    t = c_9;
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm l_0 (ATerm t)
  {
    ATerm f_9 = t;
    if(PushChoice()==0)
      {
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      t = f_9;
    {
      ATerm m_0 (ATerm t)
      {
        ATerm g_9 = t;
        if(PushChoice()==0)
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = g_9;
            {
              ATerm h_9 = t;
              if(PushChoice()==0)
                {
                  ATerm i_9 = t;
                  if(PushChoice()==0)
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = i_9;
                      {
                        ATerm j_9 = t;
                        if(PushChoice()==0)
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = j_9;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = h_9;
                  t = Expl_0(t);
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, m_0);
    }
    return(t);
  }
  t = topdown_1(t, l_0);
  return(t);
}
ATerm desugar_spec_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    t = SDef_3(t, _id, _id, desugar_0);
    return(t);
  }
  t = map_1(t, n_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm m_40 (ATerm))
{
  ATerm d_26 = NULL,e_26 = NULL;
  d_26 = t;
  c_26 :
  if(match_cons(d_26, sym_Strategies_1))
    {
      e_26 = ATgetArgument(d_26, 0);
      {
        ATerm g_26 = NULL;
        t = not_null(e_26);
        t = m_40(t);
        g_26 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(g_26));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm o_40 (ATerm))
{
  ATerm n_26 = NULL,o_26 = NULL;
  n_26 = t;
  m_26 :
  if(match_cons(n_26, sym_Specification_1))
    {
      o_26 = ATgetArgument(n_26, 0);
      {
        ATerm q_26 = NULL;
        t = not_null(o_26);
        t = o_40(t);
        q_26 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(q_26));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
  w_26 = t;
  v_26 :
  if(match_cons(w_26, sym_Cons_2))
    {
      x_26 = ATgetArgument(w_26, 0);
      y_26 = ATgetArgument(w_26, 1);
      t = not_null(x_26);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm p_43 (ATerm))
{
  ATerm k_9 = t;
  if(PushChoice()==0)
    {
      ATerm o_0 (ATerm t)
      {
        t = split_2(t, _id, p_43);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
            s_27 = t;
            i_27 :
            if(match_cons(s_27, sym_TCons_2))
              {
                t_27 = ATgetArgument(s_27, 0);
                x_27 = ATgetArgument(s_27, 1);
                j_27 :
                if(match_cons(t_27, sym_SDef_3))
                  {
                    u_27 = ATgetArgument(t_27, 0);
                    v_27 = ATgetArgument(t_27, 1);
                    w_27 = ATgetArgument(t_27, 2);
                    k_27 :
                    if(match_cons(x_27, sym_TCons_2))
                      {
                        y_27 = ATgetArgument(x_27, 0);
                        z_27 = ATgetArgument(x_27, 1);
                        l_27 :
                        if(match_cons(z_27, sym_TNil_0))
                          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_27), not_null(v_27), not_null(w_27));
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = zip_1(t, p_0);
        }
        return(t);
      }
      t = Let_2(t, o_0, _id);
      PopChoice();
    }
  else
    {
      t = k_9;
      {
        ATerm l_9 = t;
        if(PushChoice()==0)
          {
            ATerm q_0 (ATerm t)
            {
              t = split_2(t, _id, p_43);
              {
                ATerm r_0 (ATerm t)
                {
                  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
                  d_28 = t;
                  n_27 :
                  if(match_cons(d_28, sym_TCons_2))
                    {
                      e_28 = ATgetArgument(d_28, 0);
                      h_28 = ATgetArgument(d_28, 1);
                      o_27 :
                      if(match_cons(e_28, sym_VarDec_2))
                        {
                          f_28 = ATgetArgument(e_28, 0);
                          g_28 = ATgetArgument(e_28, 1);
                          p_27 :
                          if(match_cons(h_28, sym_TCons_2))
                            {
                              i_28 = ATgetArgument(h_28, 0);
                              j_28 = ATgetArgument(h_28, 1);
                              q_27 :
                              if(match_cons(j_28, sym_TNil_0))
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(i_28), not_null(g_28));
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = zip_1(t, r_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, q_0, _id);
            PopChoice();
          }
        else
          {
            t = l_9;
            {
              ATerm s_0 (ATerm t)
              {
                t = p_43(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, s_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm n_41 (ATerm), ATerm o_41 (ATerm))
{
  ATerm v_28 = NULL,y_28 = NULL,z_28 = NULL;
  v_28 = t;
  u_28 :
  if(match_cons(v_28, sym_Rec_2))
    {
      y_28 = ATgetArgument(v_28, 0);
      z_28 = ATgetArgument(v_28, 1);
      {
        ATerm c_29 = NULL;
        t = not_null(y_28);
        {
          ATerm e_29 = NULL;
          t = n_41(t);
          c_29 = t;
          t = not_null(z_28);
          t = o_41(t);
          e_29 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(c_29), not_null(e_29));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm p_41 (ATerm), ATerm q_41 (ATerm))
{
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
  n_29 = t;
  m_29 :
  if(match_cons(n_29, sym_Let_2))
    {
      o_29 = ATgetArgument(n_29, 0);
      p_29 = ATgetArgument(n_29, 1);
      {
        ATerm s_29 = NULL;
        t = not_null(o_29);
        {
          ATerm y_29 = NULL;
          t = p_41(t);
          s_29 = t;
          t = not_null(p_29);
          t = q_41(t);
          y_29 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(s_29), not_null(y_29));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm q_43 (ATerm), ATerm r_43 (ATerm), ATerm s_43 (ATerm))
{
  ATerm m_9 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, q_43, q_43);
      PopChoice();
    }
  else
    {
      t = m_9;
      {
        ATerm n_9 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, s_43, s_43, q_43);
            PopChoice();
          }
        else
          {
            t = n_9;
            t = Rec_2(t, s_43, q_43);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,p_30 = NULL;
  l_30 = t;
  g_30 :
  if(match_cons(l_30, sym_Rec_2))
    {
      m_30 = ATgetArgument(l_30, 0);
      p_30 = ATgetArgument(l_30, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_30), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL;
  y_30 = t;
  x_30 :
  if(match_cons(y_30, sym_SDef_3))
    {
      z_30 = ATgetArgument(y_30, 0);
      a_31 = ATgetArgument(y_30, 1);
      b_31 = ATgetArgument(y_30, 2);
      t = not_null(a_31);
      {
        ATerm t_0 (ATerm t)
        {
          ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
          f_31 = t;
          w_30 :
          if(match_cons(f_31, sym_VarDec_2))
            {
              g_31 = ATgetArgument(f_31, 0);
              h_31 = ATgetArgument(f_31, 1);
              t = not_null(g_31);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, t_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
  p_31 = t;
  o_31 :
  if(match_cons(p_31, sym_Let_2))
    {
      q_31 = ATgetArgument(p_31, 0);
      r_31 = ATgetArgument(p_31, 1);
      t = not_null(q_31);
      {
        ATerm u_0 (ATerm t)
        {
          ATerm u_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL;
          u_31 = t;
          n_31 :
          if(match_cons(u_31, sym_SDef_3))
            {
              z_31 = ATgetArgument(u_31, 0);
              a_32 = ATgetArgument(u_31, 1);
              b_32 = ATgetArgument(u_31, 2);
              t = not_null(z_31);
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
ATerm SVar_1 (ATerm t, ATerm m_41 (ATerm))
{
  ATerm s_32 = NULL,t_32 = NULL;
  s_32 = t;
  r_32 :
  if(match_cons(s_32, sym_SVar_1))
    {
      t_32 = ATgetArgument(s_32, 0);
      {
        ATerm v_32 = NULL;
        t = not_null(t_32);
        t = m_41(t);
        v_32 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(v_32));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
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
          ATerm p_9 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = p_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, v_0, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm j_46 (ATerm, ATerm (ATerm)), ATerm k_46 (ATerm), ATerm l_46 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_46 (ATerm, ATerm (ATerm)))
{
  ATerm a_33 = NULL;
  a_33 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  {
    ATerm h_33 (ATerm t)
    {
      ATerm w_0 (ATerm t)
      {
        ATerm q_9 = t;
        if(PushChoice()==0)
          {
            t = RnVar_1(t, j_46);
            PopChoice();
          }
        else
          {
            t = q_9;
            t = RnBinding_2(t, k_46, m_46);
            t = DistBinding_2(t, h_33, l_46);
          }
        return(t);
      }
      t = env_alltd_1(t, w_0);
      return(t);
    }
    t = h_33(t);
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
  ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL;
  l_33 = t;
  k_33 :
  if(match_cons(l_33, sym_SDef_3))
    {
      m_33 = ATgetArgument(l_33, 0);
      n_33 = ATgetArgument(l_33, 1);
      o_33 = ATgetArgument(l_33, 2);
      {
        ATerm s_33 = NULL;
        t = not_null(o_33);
        t = tvars_0(t);
        s_33 = t;
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_33), not_null(n_33), (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_33), not_null(o_33)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RDtoSD_0 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,f_34 = NULL,g_34 = NULL;
  z_33 = t;
  y_33 :
  if(match_cons(z_33, sym_RDef_3))
    {
      a_34 = ATgetArgument(z_33, 0);
      f_34 = ATgetArgument(z_33, 1);
      g_34 = ATgetArgument(z_33, 2);
      {
        ATerm k_34 = NULL;
        t = not_null(g_34);
        t = tvars_0(t);
        k_34 = t;
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(a_34), not_null(f_34), (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_34), (ATerm) ATmakeAppl(sym_SRule_1, not_null(g_34))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkCall_0 (ATerm t)
{
  ATerm q_34 = NULL;
  q_34 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_34)), (ATerm) ATmakeAppl(sym_Nil_0));
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL;
  n_35 = t;
  l_35 :
  if(match_cons(n_35, sym_OpDecl_2))
    {
      o_35 = ATgetArgument(n_35, 0);
      p_35 = ATgetArgument(n_35, 1);
      m_35 :
      if(match_cons(p_35, sym_ConstType_1))
        {
          q_35 = ATgetArgument(p_35, 0);
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_35), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Cong_2, not_null(o_35), (ATerm) ATmakeAppl(sym_Nil_0)));
        }
      else
        {
          if(match_cons(p_35, sym_FunType_2))
            {
              q_35 = ATgetArgument(p_35, 0);
              r_35 = ATgetArgument(p_35, 1);
              {
                ATerm g_38 = NULL,h_38 = NULL,p_38 = NULL;
                ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL;
                t = not_null(q_35);
                {
                  ATerm x_0 (ATerm t)
                  {
                    t = new_0(t);
                    {
                      ATerm y_0 (ATerm t)
                      {
                        ATerm i_38 = NULL;
                        i_38 = t;
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(i_38), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                        return(t);
                      }
                      t = split_2(t, y_0, _id);
                    }
                    return(t);
                  }
                  t = map_1(t, x_0);
                  t = unzip_0(t);
                  k_38 = t;
                  x_34 :
                  if(match_cons(k_38, sym_TCons_2))
                    {
                      l_38 = ATgetArgument(k_38, 0);
                      m_38 = ATgetArgument(k_38, 1);
                      c_35 :
                      if(match_cons(m_38, sym_TCons_2))
                        {
                          n_38 = ATgetArgument(m_38, 0);
                          o_38 = ATgetArgument(m_38, 1);
                          d_35 :
                          if(match_cons(o_38, sym_TNil_0))
                            {
                              if(g_38 != NULL && g_38 != l_38)
                                _fail(l_38);
                              else
                                g_38 = l_38;
                              if(h_38 != NULL && h_38 != n_38)
                                _fail(n_38);
                              else
                                h_38 = n_38;
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
                t = not_null(h_38);
                t = map_1(t, MkCall_0);
                p_38 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_35), not_null(g_38), (ATerm) ATmakeAppl(sym_Cong_2, not_null(o_35), not_null(p_38)));
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
  ATerm n_39 = NULL,o_39 = NULL;
  n_39 = t;
  m_39 :
  if(match_cons(n_39, sym_Sorts_1))
    {
      o_39 = ATgetArgument(n_39, 0);
      t = (ATerm) ATmakeAppl(sym_Nil_0);
    }
  else
    {
      if(match_cons(n_39, sym_Operations_1))
        {
          o_39 = ATgetArgument(n_39, 0);
          t = not_null(o_39);
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
  ATerm w_40 = NULL,x_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL;
  w_40 = t;
  e_40 :
  if(match_cons(w_40, sym_Specification_1))
    {
      x_40 = ATgetArgument(w_40, 0);
      f_40 :
      if(match_cons(x_40, sym_Cons_2))
        {
          z_40 = ATgetArgument(x_40, 0);
          b_41 = ATgetArgument(x_40, 1);
          l_40 :
          if(match_cons(z_40, sym_Signature_1))
            {
              a_41 = ATgetArgument(z_40, 0);
              n_40 :
              if(match_cons(b_41, sym_Cons_2))
                {
                  e_41 = ATgetArgument(b_41, 0);
                  g_41 = ATgetArgument(b_41, 1);
                  s_40 :
                  if(match_cons(e_41, sym_Strategies_1))
                    {
                      f_41 = ATgetArgument(e_41, 0);
                      t_40 :
                      if(match_cons(g_41, sym_Nil_0))
                        {
                          ATerm j_41 = NULL;
                          t = not_null(a_41);
                          {
                            ATerm l_41 = NULL;
                            t = congdefs_0(t);
                            j_41 = t;
                            t = not_null(f_41);
                            {
                              ATerm v_41 = NULL;
                              ATerm z_0 (ATerm t)
                              {
                                ATerm r_9 = t;
                                if(PushChoice()==0)
                                  {
                                    t = RDtoSD_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = r_9;
                                    t = DeclareVariables_0(t);
                                  }
                                return(t);
                              }
                              t = map_1(t, z_0);
                              l_41 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_41), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = conc_0(t);
                              v_41 = t;
                              t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, not_null(a_41)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(v_41)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
ATerm debug_1 (ATerm t, ATerm h_49 (ATerm))
{
  ATerm s_9;
  s_9 = t;
  {
    ATerm a_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm b_1 (ATerm t)
    {
      ATerm d_42 = NULL;
      ATerm h_42 = NULL;
      d_42 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = h_49(t);
      h_42 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_42), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_42), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, a_1, b_1);
    t = printnl_0(t);
  }
  t = s_9;
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm m_42 = NULL;
  m_42 = t;
  t = SSL_int_to_string(not_null(m_42));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_42 = NULL,d_43 = NULL,e_43 = NULL,k_43 = NULL,t_43 = NULL;
  z_42 = t;
  u_42 :
  if(match_cons(z_42, sym_TCons_2))
    {
      d_43 = ATgetArgument(z_42, 0);
      e_43 = ATgetArgument(z_42, 1);
      v_42 :
      if(match_cons(e_43, sym_TCons_2))
        {
          k_43 = ATgetArgument(e_43, 0);
          t_43 = ATgetArgument(e_43, 1);
          y_42 :
          if(match_cons(t_43, sym_TNil_0))
            {
              ATerm t_9 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(d_43), not_null(k_43));
                  PopChoice();
                }
              else
                {
                  t = t_9;
                  t = SSL_addr(not_null(d_43), not_null(k_43));
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
  ATerm u_9 = t;
  if(PushChoice()==0)
    {
      ATerm a_44 = NULL;
      a_44 = t;
      y_43 :
      if(match_cons(a_44, sym_Nil_0))
        t = (ATerm) ATmakeInt(0);
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = u_9;
      {
        ATerm b_44 = NULL;
        t = Tl_0(t);
        t = length_0(t);
        b_44 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_44), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = add_0(t);
      }
    }
  return(t);
}
ATerm FunType_2 (ATerm t, ATerm q_40 (ATerm), ATerm r_40 (ATerm))
{
  ATerm k_44 = NULL,p_44 = NULL,q_44 = NULL;
  k_44 = t;
  j_44 :
  if(match_cons(k_44, sym_FunType_2))
    {
      p_44 = ATgetArgument(k_44, 0);
      q_44 = ATgetArgument(k_44, 1);
      {
        ATerm x_44 = NULL;
        t = not_null(p_44);
        {
          ATerm z_44 = NULL;
          t = q_40(t);
          x_44 = t;
          t = not_null(q_44);
          t = r_40(t);
          z_44 = t;
          t = (ATerm) ATmakeAppl(sym_FunType_2, not_null(x_44), not_null(z_44));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ConstType_1 (ATerm t, ATerm p_40 (ATerm))
{
  ATerm h_45 = NULL,i_45 = NULL;
  h_45 = t;
  g_45 :
  if(match_cons(h_45, sym_ConstType_1))
    {
      i_45 = ATgetArgument(h_45, 0);
      {
        ATerm k_45 = NULL;
        t = not_null(i_45);
        t = p_40(t);
        k_45 = t;
        t = (ATerm) ATmakeAppl(sym_ConstType_1, not_null(k_45));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm OpDecl_2 (ATerm t, ATerm u_40 (ATerm), ATerm v_40 (ATerm))
{
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL;
  s_45 = t;
  r_45 :
  if(match_cons(s_45, sym_OpDecl_2))
    {
      t_45 = ATgetArgument(s_45, 0);
      u_45 = ATgetArgument(s_45, 1);
      {
        ATerm y_45 = NULL;
        t = not_null(t_45);
        {
          ATerm a_46 = NULL;
          t = u_40(t);
          y_45 = t;
          t = not_null(u_45);
          t = v_40(t);
          a_46 = t;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, not_null(y_45), not_null(a_46));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CheckCons_2 (ATerm t, ATerm f_43 (ATerm), ATerm g_43 (ATerm))
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL;
  l_47 = t;
  k_47 :
  if(match_cons(l_47, sym_Op_2))
    {
      m_47 = ATgetArgument(l_47, 0);
      n_47 = ATgetArgument(l_47, 1);
      {
        ATerm a_48 = NULL;
        ATerm v_9 = t;
        if(PushChoice()==0)
          {
            t = g_43(t);
            {
              ATerm c_1 (ATerm t)
              {
                ATerm q_47 = NULL;
                ATerm d_1 (ATerm t)
                {
                  ATerm r_47 = NULL;
                  r_47 = t;
                  if(m_47 != NULL && m_47 != r_47)
                    _fail(r_47);
                  else
                    m_47 = r_47;
                  return(t);
                }
                ATerm e_1 (ATerm t)
                {
                  ATerm w_9 = t;
                  if(PushChoice()==0)
                    {
                      ATerm s_47 = NULL;
                      t = ConstType_1(t, _id);
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                      s_47 = t;
                      if(q_47 != NULL && q_47 != s_47)
                        _fail(s_47);
                      else
                        q_47 = s_47;
                      PopChoice();
                    }
                  else
                    {
                      t = w_9;
                      {
                        ATerm f_1 (ATerm t)
                        {
                          ATerm z_47 = NULL;
                          z_47 = t;
                          if(q_47 != NULL && q_47 != z_47)
                            _fail(z_47);
                          else
                            q_47 = z_47;
                          return(t);
                        }
                        t = FunType_2(t, f_1, _id);
                      }
                    }
                  return(t);
                }
                t = OpDecl_2(t, d_1, e_1);
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_47), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_47), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = zip_1(t, _id);
                return(t);
              }
              t = fetch_1(t, c_1);
            }
            PopChoice();
            _fail(t);
          }
        else
          t = v_9;
        t = not_null(n_47);
        t = length_0(t);
        t = int_to_string_0(t);
        a_48 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_47), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("/", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
        t = concat_strings_0(t);
        t = debug_1(t, f_43);
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(m_47), not_null(n_47));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm manytd_1 (ATerm t, ATerm t_62 (ATerm))
{
  ATerm l_48 (ATerm t)
  {
    ATerm x_9 = t;
    if(PushChoice()==0)
      {
        t = t_62(t);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm y_9 = t;
            if(PushChoice()==0)
              {
                t = l_48(t);
                PopChoice();
              }
            else
              t = y_9;
            return(t);
          }
          t = _all(t, g_1);
        }
        PopChoice();
      }
    else
      {
        t = x_9;
        t = _some(t, l_48);
      }
    return(t);
  }
  t = l_48(t);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm q_48 = NULL;
  q_48 = t;
  t = SSL_implode_string(not_null(q_48));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm u_48 = NULL;
  u_48 = t;
  t = SSL_explode_string(not_null(u_48));
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
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL,i_49 = NULL;
  e_49 = t;
  d_49 :
  if(match_cons(e_49, sym_RDef_3))
    {
      f_49 = ATgetArgument(e_49, 0);
      g_49 = ATgetArgument(e_49, 1);
      i_49 = ATgetArgument(e_49, 2);
      {
        ATerm m_49 = NULL;
        ATerm n_49 = NULL;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: in rule ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        t = concat_strings_0(t);
        n_49 = t;
        if(m_49 != NULL && m_49 != n_49)
          _fail(n_49);
        else
          m_49 = n_49;
        t = not_null(i_49);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm i_1 (ATerm t)
            {
              t = not_null(m_49);
              return(t);
            }
            t = CheckCons_2(t, i_1, c_0);
            return(t);
          }
          t = manytd_1(t, h_1);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(f_49), not_null(g_49), not_null(i_49));
      }
    }
  else
    {
      if(match_cons(e_49, sym_SDef_3))
        {
          f_49 = ATgetArgument(e_49, 0);
          g_49 = ATgetArgument(e_49, 1);
          i_49 = ATgetArgument(e_49, 2);
          {
            ATerm r_49 = NULL;
            ATerm s_49 = NULL;
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: in definition ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
            t = concat_strings_0(t);
            s_49 = t;
            if(r_49 != NULL && r_49 != s_49)
              _fail(s_49);
            else
              r_49 = s_49;
            t = not_null(i_49);
            {
              ATerm j_1 (ATerm t)
              {
                ATerm k_1 (ATerm t)
                {
                  t = not_null(r_49);
                  return(t);
                }
                t = CheckCons_2(t, k_1, c_0);
                return(t);
              }
              t = manytd_1(t, j_1);
            }
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(f_49), not_null(g_49), not_null(i_49));
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm CheckConstructors_0 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL;
  i_50 = t;
  z_49 :
  if(match_cons(i_50, sym_Specification_1))
    {
      j_50 = ATgetArgument(i_50, 0);
      a_50 :
      if(match_cons(j_50, sym_Cons_2))
        {
          k_50 = ATgetArgument(j_50, 0);
          p_50 = ATgetArgument(j_50, 1);
          b_50 :
          if(match_cons(k_50, sym_Signature_1))
            {
              l_50 = ATgetArgument(k_50, 0);
              c_50 :
              if(match_cons(l_50, sym_Cons_2))
                {
                  m_50 = ATgetArgument(l_50, 0);
                  o_50 = ATgetArgument(l_50, 1);
                  d_50 :
                  if(match_cons(m_50, sym_Operations_1))
                    {
                      n_50 = ATgetArgument(m_50, 0);
                      e_50 :
                      if(match_cons(o_50, sym_Nil_0))
                        {
                          f_50 :
                          if(match_cons(p_50, sym_Cons_2))
                            {
                              q_50 = ATgetArgument(p_50, 0);
                              s_50 = ATgetArgument(p_50, 1);
                              g_50 :
                              if(match_cons(q_50, sym_Strategies_1))
                                {
                                  r_50 = ATgetArgument(q_50, 0);
                                  h_50 :
                                  if(match_cons(s_50, sym_Nil_0))
                                    {
                                      ATerm v_50 = NULL;
                                      t = not_null(r_50);
                                      {
                                        ATerm l_1 (ATerm t)
                                        {
                                          ATerm m_1 (ATerm t)
                                          {
                                            t = not_null(n_50);
                                            return(t);
                                          }
                                          t = check_constructors_1(t, m_1);
                                          return(t);
                                        }
                                        t = filter_1(t, l_1);
                                        v_50 = t;
                                        y_49 :
                                        if(!(match_cons(v_50, sym_Nil_0)))
                                          _fail(t);
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Operations_1, not_null(n_50)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(r_50)), (ATerm) ATmakeAppl(sym_Nil_0))));
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm exp_overlays2_1 (ATerm t, ATerm o_44 (ATerm))
{
  ATerm z_9 = t;
  if(PushChoice()==0)
    {
      ATerm a_10;
      a_10 = t;
      {
        ATerm b_10 = t;
        if(PushChoice()==0)
          {
            ATerm a_51 = NULL;
            t = o_44(t);
            a_51 = t;
            x_50 :
            if(!(match_cons(a_51, sym_Nil_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          t = b_10;
      }
      t = a_10;
      {
        ATerm n_1 (ATerm t)
        {
          ATerm o_1 (ATerm t)
          {
            t = ExpOverlay_1(t, o_44);
            return(t);
          }
          t = try_1(t, o_1);
          return(t);
        }
        t = topdown_1(t, n_1);
      }
      PopChoice();
    }
  else
    t = z_9;
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL;
  j_51 = t;
  h_51 :
  if(match_cons(j_51, sym_Var_1))
    {
      k_51 = ATgetArgument(j_51, 0);
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_51)), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    {
      if(match_cons(j_51, sym_Op_2))
        {
          k_51 = ATgetArgument(j_51, 0);
          i_51 = ATgetArgument(j_51, 1);
          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_51)), not_null(i_51));
        }
      else
        {
          if(match_cons(j_51, sym_Str_1))
            {
              k_51 = ATgetArgument(j_51, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(k_51)));
            }
          else
            {
              if(match_cons(j_51, sym_Int_1))
                {
                  k_51 = ATgetArgument(j_51, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(k_51)));
                }
              else
                {
                  if(match_cons(j_51, sym_Real_1))
                    {
                      k_51 = ATgetArgument(j_51, 0);
                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(k_51)));
                    }
                  else
                    {
                      if(match_cons(j_51, sym_BuildDefault_1))
                        {
                          k_51 = ATgetArgument(j_51, 0);
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
ATerm Op_2 (ATerm t, ATerm c_41 (ATerm), ATerm d_41 (ATerm))
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL;
  e_52 = t;
  d_52 :
  if(match_cons(e_52, sym_Op_2))
    {
      f_52 = ATgetArgument(e_52, 0);
      g_52 = ATgetArgument(e_52, 1);
      {
        ATerm q_52 = NULL;
        t = not_null(f_52);
        {
          ATerm s_52 = NULL;
          t = c_41(t);
          q_52 = t;
          t = not_null(g_52);
          t = d_41(t);
          s_52 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(q_52), not_null(s_52));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm trm_to_cong_0 (ATerm t)
{
  ATerm d_10 = t;
  if(PushChoice()==0)
    {
      ATerm p_1 (ATerm t)
      {
        t = map_1(t, trm_to_cong_0);
        return(t);
      }
      t = Op_2(t, _id, p_1);
      PopChoice();
    }
  else
    t = d_10;
  t = Trm_to_Cong_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL;
  b_53 = t;
  a_53 :
  if(match_cons(b_53, sym_Overlay_3))
    {
      c_53 = ATgetArgument(b_53, 0);
      d_53 = ATgetArgument(b_53, 1);
      e_53 = ATgetArgument(b_53, 2);
      {
        ATerm i_53 = NULL;
        t = not_null(e_53);
        t = trm_to_cong_0(t);
        i_53 = t;
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(c_53), not_null(d_53), not_null(i_53));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm l_43 (ATerm))
{
  t = Scope_2(t, l_43, _id);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm y_40 (ATerm))
{
  ATerm q_53 = NULL,r_53 = NULL;
  q_53 = t;
  p_53 :
  if(match_cons(q_53, sym_Var_1))
    {
      r_53 = ATgetArgument(q_53, 0);
      {
        ATerm u_53 = NULL;
        t = not_null(r_53);
        t = y_40(t);
        u_53 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_53));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm b_46 (ATerm), ATerm c_46 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm k_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL;
  k_54 = t;
  g_54 :
  if(match_cons(k_54, sym_TCons_2))
    {
      m_54 = ATgetArgument(k_54, 0);
      n_54 = ATgetArgument(k_54, 1);
      h_54 :
      if(match_cons(n_54, sym_TCons_2))
        {
          o_54 = ATgetArgument(n_54, 0);
          p_54 = ATgetArgument(n_54, 1);
          i_54 :
          if(match_cons(p_54, sym_TCons_2))
            {
              q_54 = ATgetArgument(p_54, 0);
              r_54 = ATgetArgument(p_54, 1);
              j_54 :
              if(match_cons(r_54, sym_TNil_0))
                {
                  t = not_null(m_54);
                  {
                    ATerm q_1 (ATerm t)
                    {
                      ATerm v_54 = NULL;
                      v_54 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_54), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_54), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = b_46(t);
                      return(t);
                    }
                    ATerm r_1 (ATerm t)
                    {
                      ATerm x_54 = NULL;
                      x_54 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_54), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_54), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = b_46(t);
                      return(t);
                    }
                    t = c_46(t, q_1, r_1, _id);
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm h_46 (ATerm), ATerm i_46 (ATerm, ATerm (ATerm)))
{
  ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL;
  l_55 = t;
  i_55 :
  if(match_cons(l_55, sym_TCons_2))
    {
      m_55 = ATgetArgument(l_55, 0);
      n_55 = ATgetArgument(l_55, 1);
      j_55 :
      if(match_cons(n_55, sym_TCons_2))
        {
          o_55 = ATgetArgument(n_55, 0);
          p_55 = ATgetArgument(n_55, 1);
          k_55 :
          if(match_cons(p_55, sym_TNil_0))
            {
              ATerm t_55 = NULL,a_56 = NULL,b_56 = NULL,h_56 = NULL;
              ATerm c_56 = NULL;
              t = not_null(m_55);
              {
                ATerm d_56 = NULL;
                t = h_46(t);
                c_56 = t;
                if(t_55 != NULL && t_55 != c_56)
                  _fail(c_56);
                else
                  t_55 = c_56;
                {
                  ATerm e_56 = NULL;
                  t = map_1(t, new_0);
                  d_56 = t;
                  if(a_56 != NULL && a_56 != d_56)
                    _fail(d_56);
                  else
                    a_56 = d_56;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_56), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm g_56 = NULL;
                    t = zip_1(t, _id);
                    e_56 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_56), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_55), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = conc_0(t);
                    g_56 = t;
                    if(b_56 != NULL && b_56 != g_56)
                      _fail(g_56);
                    else
                      b_56 = g_56;
                  }
                }
              }
              t = not_null(m_55);
              {
                ATerm s_1 (ATerm t)
                {
                  t = not_null(a_56);
                  return(t);
                }
                t = i_46(t, s_1);
                h_56 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_56), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_56), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL;
  r_56 = t;
  q_56 :
  if(match_cons(r_56, sym_TCons_2))
    {
      s_56 = ATgetArgument(r_56, 0);
      t_56 = ATgetArgument(r_56, 1);
      t = not_null(s_56);
    }
  else
    _fail(t);
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm v_45 (ATerm, ATerm (ATerm)))
{
  ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL;
  b_57 = t;
  y_56 :
  if(match_cons(b_57, sym_TCons_2))
    {
      c_57 = ATgetArgument(b_57, 0);
      d_57 = ATgetArgument(b_57, 1);
      z_56 :
      if(match_cons(d_57, sym_TCons_2))
        {
          e_57 = ATgetArgument(d_57, 0);
          f_57 = ATgetArgument(d_57, 1);
          a_57 :
          if(match_cons(f_57, sym_TNil_0))
            {
              t = not_null(c_57);
              {
                ATerm t_1 (ATerm t)
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = not_null(e_57);
                    return(t);
                  }
                  t = split_2(t, _id, u_1);
                  t = lookup_0(t);
                  return(t);
                }
                t = v_45(t, t_1);
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
ATerm all_dist_1 (ATerm t, ATerm x_58 (ATerm))
{
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,z_57 = NULL;
  t_57 = t;
  n_57 :
  if(match_cons(t_57, sym_TCons_2))
    {
      u_57 = ATgetArgument(t_57, 0);
      v_57 = ATgetArgument(t_57, 1);
      o_57 :
      if(match_cons(v_57, sym_TCons_2))
        {
          w_57 = ATgetArgument(v_57, 0);
          z_57 = ATgetArgument(v_57, 1);
          p_57 :
          if(match_cons(z_57, sym_TNil_0))
            {
              t = not_null(u_57);
              {
                ATerm v_1 (ATerm t)
                {
                  ATerm c_58 = NULL;
                  c_58 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_57), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = x_58(t);
                  return(t);
                }
                t = _all(t, v_1);
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
ATerm env_alltd_1 (ATerm t, ATerm c_59 (ATerm))
{
  ATerm g_58 (ATerm t)
  {
    ATerm e_10 = t;
    if(PushChoice()==0)
      {
        t = c_59(t);
        PopChoice();
      }
    else
      {
        t = e_10;
        t = all_dist_1(t, g_58);
      }
    return(t);
  }
  t = g_58(t);
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm t_46 (ATerm), ATerm u_46 (ATerm, ATerm (ATerm)), ATerm v_46 (ATerm), ATerm w_46 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm x_46 (ATerm, ATerm (ATerm)), ATerm y_46 (ATerm))
{
  ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL;
  t = subs_args_0(t);
  n_58 = t;
  i_58 :
  if(match_cons(n_58, sym_TCons_2))
    {
      o_58 = ATgetArgument(n_58, 0);
      p_58 = ATgetArgument(n_58, 1);
      j_58 :
      if(match_cons(p_58, sym_TCons_2))
        {
          q_58 = ATgetArgument(p_58, 0);
          r_58 = ATgetArgument(p_58, 1);
          k_58 :
          if(match_cons(r_58, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm w_58 (ATerm t)
                {
                  ATerm w_1 (ATerm t)
                  {
                    ATerm g_10 = t;
                    if(PushChoice()==0)
                      {
                        t = RnVar_1(t, u_46);
                        PopChoice();
                      }
                    else
                      {
                        t = g_10;
                        {
                          ATerm h_10 = t;
                          if(PushChoice()==0)
                            {
                              t = Fst_0(t);
                              {
                                ATerm x_1 (ATerm t)
                                {
                                  t = not_null(o_58);
                                  return(t);
                                }
                                t = SubsVar_2(t, t_46, x_1);
                                t = y_46(t);
                              }
                              PopChoice();
                            }
                          else
                            {
                              t = h_10;
                              t = RnBinding_2(t, v_46, x_46);
                              t = DistBinding_2(t, w_58, w_46);
                            }
                        }
                      }
                    return(t);
                  }
                  t = env_alltd_1(t, w_1);
                  return(t);
                }
                t = w_58(t);
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
ATerm substitute_5 (ATerm t, ATerm a_47 (ATerm), ATerm b_47 (ATerm, ATerm (ATerm)), ATerm c_47 (ATerm), ATerm d_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm e_47 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, a_47, b_47, c_47, d_47, e_47, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, tpaste_1);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm m_44 (ATerm))
{
  ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL;
  i_59 = t;
  h_59 :
  if(match_cons(i_59, sym_Op_2))
    {
      j_59 = ATgetArgument(i_59, 0);
      k_59 = ATgetArgument(i_59, 1);
      {
        ATerm p_59 = NULL,q_59 = NULL;
        t = m_44(t);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm i_10;
            i_10 = t;
            {
              ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL;
              r_59 = t;
              g_59 :
              if(match_cons(r_59, sym_Overlay_3))
                {
                  s_59 = ATgetArgument(r_59, 0);
                  t_59 = ATgetArgument(r_59, 1);
                  u_59 = ATgetArgument(r_59, 2);
                  {
                    ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL;
                    if(j_59 != NULL && j_59 != s_59)
                      _fail(s_59);
                    else
                      j_59 = s_59;
                    if(v_59 != NULL && v_59 != t_59)
                      _fail(t_59);
                    else
                      v_59 = t_59;
                    if(w_59 != NULL && w_59 != u_59)
                      _fail(u_59);
                    else
                      w_59 = u_59;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_59), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm d_60 = NULL;
                      t = zip_1(t, _id);
                      x_59 = t;
                      {
                        ATerm e_60 = NULL;
                        t = not_null(x_59);
                        d_60 = t;
                        if(p_59 != NULL && p_59 != d_60)
                          _fail(d_60);
                        else
                          p_59 = d_60;
                        t = not_null(w_59);
                        e_60 = t;
                        if(q_59 != NULL && q_59 != e_60)
                          _fail(e_60);
                        else
                          q_59 = e_60;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_59), (ATerm) ATmakeAppl(sym_TNil_0)));
                      }
                    }
                  }
                }
              else
                _fail(t);
            }
            t = i_10;
            return(t);
          }
          t = fetch_1(t, y_1);
        }
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_59), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = tsubstitute_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm exp_overlays1_1 (ATerm t, ATerm n_44 (ATerm))
{
  ATerm j_10 = t;
  if(PushChoice()==0)
    {
      ATerm k_10;
      k_10 = t;
      {
        ATerm l_10 = t;
        if(PushChoice()==0)
          {
            ATerm l_60 = NULL;
            t = n_44(t);
            l_60 = t;
            k_60 :
            if(!(match_cons(l_60, sym_Nil_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          t = l_10;
      }
      t = k_10;
      {
        ATerm z_1 (ATerm t)
        {
          ATerm a_2 (ATerm t)
          {
            t = ExpOverlay_1(t, n_44);
            return(t);
          }
          t = repeat_1(t, a_2);
          return(t);
        }
        t = topdown_1(t, z_1);
      }
      PopChoice();
    }
  else
    t = j_10;
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL;
  z_60 = t;
  r_60 :
  if(match_cons(z_60, sym_Specification_1))
    {
      a_61 = ATgetArgument(z_60, 0);
      s_60 :
      if(match_cons(a_61, sym_Cons_2))
        {
          b_61 = ATgetArgument(a_61, 0);
          d_61 = ATgetArgument(a_61, 1);
          t_60 :
          if(match_cons(b_61, sym_Signature_1))
            {
              c_61 = ATgetArgument(b_61, 0);
              u_60 :
              if(match_cons(d_61, sym_Cons_2))
                {
                  e_61 = ATgetArgument(d_61, 0);
                  g_61 = ATgetArgument(d_61, 1);
                  v_60 :
                  if(match_cons(e_61, sym_Overlays_1))
                    {
                      f_61 = ATgetArgument(e_61, 0);
                      w_60 :
                      if(match_cons(g_61, sym_Cons_2))
                        {
                          h_61 = ATgetArgument(g_61, 0);
                          j_61 = ATgetArgument(g_61, 1);
                          x_60 :
                          if(match_cons(h_61, sym_Strategies_1))
                            {
                              i_61 = ATgetArgument(h_61, 0);
                              y_60 :
                              if(match_cons(j_61, sym_Nil_0))
                                {
                                  ATerm n_61 = NULL,r_61 = NULL;
                                  ATerm q_61 = NULL;
                                  t = not_null(f_61);
                                  {
                                    ATerm b_2 (ATerm t)
                                    {
                                      t = not_null(f_61);
                                      return(t);
                                    }
                                    t = exp_overlays1_1(t, b_2);
                                    q_61 = t;
                                    if(n_61 != NULL && n_61 != q_61)
                                      _fail(q_61);
                                    else
                                      n_61 = q_61;
                                  }
                                  t = not_null(f_61);
                                  {
                                    ATerm t_61 = NULL;
                                    t = map_1(t, Overlay_to_Congdef_0);
                                    r_61 = t;
                                    t = not_null(i_61);
                                    {
                                      ATerm v_61 = NULL;
                                      ATerm c_2 (ATerm t)
                                      {
                                        t = not_null(n_61);
                                        return(t);
                                      }
                                      t = exp_overlays2_1(t, c_2);
                                      t_61 = t;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_61), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = conc_0(t);
                                      v_61 = t;
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, not_null(c_61)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(v_61)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  ATerm m_10;
  m_10 = t;
  {
    ATerm d_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, d_2, _id);
    t = printnl_0(t);
  }
  t = m_10;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm n_10;
  n_10 = t;
  t = error_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  t = n_10;
  return(t);
}
ATerm MsgR_0 (ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL;
  l_62 = t;
  h_62 :
  if(match_cons(l_62, sym_TCons_2))
    {
      m_62 = ATgetArgument(l_62, 0);
      n_62 = ATgetArgument(l_62, 1);
      i_62 :
      if(match_cons(n_62, sym_TCons_2))
        {
          o_62 = ATgetArgument(n_62, 0);
          p_62 = ATgetArgument(n_62, 1);
          j_62 :
          if(match_cons(p_62, sym_TCons_2))
            {
              q_62 = ATgetArgument(p_62, 0);
              r_62 = ATgetArgument(p_62, 1);
              k_62 :
              if(match_cons(r_62, sym_TNil_0))
                {
                  ATerm x_62 = NULL;
                  t = not_null(m_62);
                  {
                    ATerm d_63 = NULL;
                    t = MsgU_0(t);
                    x_62 = t;
                    t = not_null(q_62);
                    t = MsgE_0(t);
                    d_63 = t;
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_62), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_63), (ATerm) ATmakeAppl(sym_Nil_0)));
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
  ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL,x_63 = NULL,y_63 = NULL;
  n_63 = t;
  l_63 :
  if(match_cons(n_63, sym_Nil_0))
    t = (ATerm) ATmakeAppl(sym_Nil_0);
  else
    {
      if(match_cons(n_63, sym_Cons_2))
        {
          o_63 = ATgetArgument(n_63, 0);
          p_63 = ATgetArgument(n_63, 1);
          m_63 :
          if(match_cons(p_63, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_63), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
          else
            {
              if(match_cons(p_63, sym_Cons_2))
                {
                  x_63 = ATgetArgument(p_63, 0);
                  y_63 = ATgetArgument(p_63, 1);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_63), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_63), not_null(y_63))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  ATerm n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL;
  n_64 = t;
  l_64 :
  if(match_cons(n_64, sym_Nil_0))
    t = (ATerm) ATmakeAppl(sym_Nil_0);
  else
    {
      if(match_cons(n_64, sym_Cons_2))
        {
          o_64 = ATgetArgument(n_64, 0);
          p_64 = ATgetArgument(n_64, 1);
          m_64 :
          if(match_cons(p_64, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_64), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
          else
            {
              if(match_cons(p_64, sym_Cons_2))
                {
                  q_64 = ATgetArgument(p_64, 0);
                  r_64 = ATgetArgument(p_64, 1);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_64), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_64), not_null(r_64))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL;
  g_65 = t;
  c_65 :
  if(match_cons(g_65, sym_TCons_2))
    {
      h_65 = ATgetArgument(g_65, 0);
      i_65 = ATgetArgument(g_65, 1);
      d_65 :
      if(match_cons(i_65, sym_TCons_2))
        {
          j_65 = ATgetArgument(i_65, 0);
          k_65 = ATgetArgument(i_65, 1);
          e_65 :
          if(match_cons(k_65, sym_TCons_2))
            {
              l_65 = ATgetArgument(k_65, 0);
              m_65 = ATgetArgument(k_65, 1);
              f_65 :
              if(match_cons(m_65, sym_TNil_0))
                {
                  ATerm q_65 = NULL;
                  t = not_null(h_65);
                  {
                    ATerm s_65 = NULL;
                    t = MsgU_0(t);
                    q_65 = t;
                    t = not_null(l_65);
                    t = MsgE_0(t);
                    s_65 = t;
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_65), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_65), (ATerm) ATmakeAppl(sym_Nil_0)));
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
  ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL;
  e_66 = t;
  d_66 :
  if(match_cons(e_66, sym_RDef_3))
    {
      f_66 = ATgetArgument(e_66, 0);
      g_66 = ATgetArgument(e_66, 1);
      h_66 = ATgetArgument(e_66, 2);
      {
        ATerm l_66 = NULL;
        t = not_null(h_66);
        t = map_1(t, MsgR_0);
        t = concat_0(t);
        l_66 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error in rule ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_66), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue)), not_null(l_66))));
      }
    }
  else
    {
      if(match_cons(e_66, sym_SDef_3))
        {
          f_66 = ATgetArgument(e_66, 0);
          g_66 = ATgetArgument(e_66, 1);
          h_66 = ATgetArgument(e_66, 2);
          {
            ATerm q_66 = NULL;
            t = not_null(h_66);
            t = map_1(t, MsgS_0);
            t = concat_0(t);
            q_66 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error in definition ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_66), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue)), not_null(q_66))));
          }
        }
      else
        {
          if(match_cons(e_66, sym_Overlay_3))
            {
              f_66 = ATgetArgument(e_66, 0);
              g_66 = ATgetArgument(e_66, 1);
              h_66 = ATgetArgument(e_66, 2);
              {
                ATerm v_66 = NULL;
                t = not_null(h_66);
                t = map_1(t, MsgR_0);
                t = concat_0(t);
                v_66 = t;
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error in overlay ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_66), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue)), not_null(v_66))));
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
ATerm Overlay_3 (ATerm t, ATerm g_40 (ATerm), ATerm h_40 (ATerm), ATerm i_40 (ATerm))
{
  ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL;
  i_67 = t;
  h_67 :
  if(match_cons(i_67, sym_Overlay_3))
    {
      j_67 = ATgetArgument(i_67, 0);
      k_67 = ATgetArgument(i_67, 1);
      l_67 = ATgetArgument(i_67, 2);
      {
        ATerm p_67 = NULL;
        t = not_null(j_67);
        {
          ATerm r_67 = NULL;
          t = g_40(t);
          p_67 = t;
          t = not_null(k_67);
          {
            ATerm u_67 = NULL;
            t = h_40(t);
            r_67 = t;
            t = not_null(l_67);
            t = i_40(t);
            u_67 = t;
            t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(p_67), not_null(r_67), not_null(u_67));
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
  ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL;
  q_68 = t;
  e_68 :
  if(match_cons(q_68, sym_TCons_2))
    {
      r_68 = ATgetArgument(q_68, 0);
      y_68 = ATgetArgument(q_68, 1);
      f_68 :
      if(match_cons(r_68, sym_TCons_2))
        {
          s_68 = ATgetArgument(r_68, 0);
          t_68 = ATgetArgument(r_68, 1);
          g_68 :
          if(match_cons(t_68, sym_TCons_2))
            {
              u_68 = ATgetArgument(t_68, 0);
              v_68 = ATgetArgument(t_68, 1);
              h_68 :
              if(match_cons(v_68, sym_TCons_2))
                {
                  w_68 = ATgetArgument(v_68, 0);
                  x_68 = ATgetArgument(v_68, 1);
                  i_68 :
                  if(match_cons(x_68, sym_TNil_0))
                    {
                      j_68 :
                      if(match_cons(y_68, sym_TCons_2))
                        {
                          z_68 = ATgetArgument(y_68, 0);
                          h_69 = ATgetArgument(y_68, 1);
                          k_68 :
                          if(match_cons(z_68, sym_TCons_2))
                            {
                              a_69 = ATgetArgument(z_68, 0);
                              b_69 = ATgetArgument(z_68, 1);
                              l_68 :
                              if(match_cons(b_69, sym_TCons_2))
                                {
                                  c_69 = ATgetArgument(b_69, 0);
                                  e_69 = ATgetArgument(b_69, 1);
                                  n_68 :
                                  if(match_cons(e_69, sym_TCons_2))
                                    {
                                      f_69 = ATgetArgument(e_69, 0);
                                      g_69 = ATgetArgument(e_69, 1);
                                      o_68 :
                                      if(match_cons(g_69, sym_TNil_0))
                                        {
                                          p_68 :
                                          if(match_cons(h_69, sym_TNil_0))
                                            {
                                              ATerm o_69 = NULL;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_69), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              {
                                                ATerm q_69 = NULL;
                                                t = union_0(t);
                                                o_69 = t;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_69), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                {
                                                  ATerm s_69 = NULL;
                                                  t = union_0(t);
                                                  q_69 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_69), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = union_0(t);
                                                  s_69 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_69), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL;
  c_70 = t;
  a_70 :
  if(match_cons(c_70, sym_TCons_2))
    {
      d_70 = ATgetArgument(c_70, 0);
      e_70 = ATgetArgument(c_70, 1);
      b_70 :
      if(match_cons(e_70, sym_TCons_2))
        {
          f_70 = ATgetArgument(e_70, 0);
          g_70 = ATgetArgument(e_70, 1);
          t = not_null(f_70);
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
  ATerm m_70 = NULL;
  m_70 = t;
  t = SSL_explode_term(not_null(m_70));
  return(t);
}
ATerm default_join_0 (ATerm t)
{
  t = explode_term_0(t);
  t = Snd_0(t);
  {
    ATerm e_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
      return(t);
    }
    ATerm f_2 (ATerm t)
    {
      t = cart_1(t, Union_0);
      return(t);
    }
    t = foldr_2(t, e_2, f_2);
  }
  return(t);
}
ATerm SeqUnion_0 (ATerm t)
{
  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL;
  f_71 = t;
  u_70 :
  if(match_cons(f_71, sym_TCons_2))
    {
      g_71 = ATgetArgument(f_71, 0);
      n_71 = ATgetArgument(f_71, 1);
      v_70 :
      if(match_cons(g_71, sym_TCons_2))
        {
          h_71 = ATgetArgument(g_71, 0);
          i_71 = ATgetArgument(g_71, 1);
          w_70 :
          if(match_cons(i_71, sym_TCons_2))
            {
              j_71 = ATgetArgument(i_71, 0);
              k_71 = ATgetArgument(i_71, 1);
              x_70 :
              if(match_cons(k_71, sym_TCons_2))
                {
                  l_71 = ATgetArgument(k_71, 0);
                  m_71 = ATgetArgument(k_71, 1);
                  y_70 :
                  if(match_cons(m_71, sym_TNil_0))
                    {
                      z_70 :
                      if(match_cons(n_71, sym_TCons_2))
                        {
                          q_71 = ATgetArgument(n_71, 0);
                          x_71 = ATgetArgument(n_71, 1);
                          a_71 :
                          if(match_cons(q_71, sym_TCons_2))
                            {
                              r_71 = ATgetArgument(q_71, 0);
                              s_71 = ATgetArgument(q_71, 1);
                              b_71 :
                              if(match_cons(s_71, sym_TCons_2))
                                {
                                  t_71 = ATgetArgument(s_71, 0);
                                  u_71 = ATgetArgument(s_71, 1);
                                  c_71 :
                                  if(match_cons(u_71, sym_TCons_2))
                                    {
                                      v_71 = ATgetArgument(u_71, 0);
                                      w_71 = ATgetArgument(u_71, 1);
                                      d_71 :
                                      if(match_cons(w_71, sym_TNil_0))
                                        {
                                          e_71 :
                                          if(match_cons(x_71, sym_TNil_0))
                                            {
                                              ATerm e_72 = NULL;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              {
                                                ATerm g_72 = NULL;
                                                t = diff_0(t);
                                                e_72 = t;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_72), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                {
                                                  ATerm i_72 = NULL;
                                                  t = union_0(t);
                                                  g_72 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  {
                                                    ATerm k_72 = NULL;
                                                    t = union_0(t);
                                                    i_72 = t;
                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                    t = union_0(t);
                                                    k_72 = t;
                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_72), (ATerm) ATmakeAppl(sym_TNil_0))));
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
ATerm cart_1 (ATerm t, ATerm s_55 (ATerm))
{
  ATerm x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL;
  x_72 = t;
  u_72 :
  if(match_cons(x_72, sym_TCons_2))
    {
      y_72 = ATgetArgument(x_72, 0);
      z_72 = ATgetArgument(x_72, 1);
      v_72 :
      if(match_cons(z_72, sym_TCons_2))
        {
          a_73 = ATgetArgument(z_72, 0);
          b_73 = ATgetArgument(z_72, 1);
          w_72 :
          if(match_cons(b_73, sym_TNil_0))
            {
              t = not_null(y_72);
              {
                ATerm g_2 (ATerm t)
                {
                  ATerm e_73 = NULL;
                  e_73 = t;
                  t = not_null(a_73);
                  {
                    ATerm h_2 (ATerm t)
                    {
                      ATerm g_73 = NULL;
                      g_73 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = s_55(t);
                      return(t);
                    }
                    t = map_1(t, h_2);
                  }
                  return(t);
                }
                t = map_1(t, g_2);
                {
                  ATerm i_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = foldr_2(t, i_2, union_0);
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
  ATerm j_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = cart_1(t, SeqUnion_0);
    return(t);
  }
  t = foldr_2(t, j_2, k_2);
  return(t);
}
ATerm JoinScope_1 (ATerm t, ATerm i_43 (ATerm))
{
  ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL;
  v_73 = t;
  r_73 :
  if(match_cons(v_73, sym_TCons_2))
    {
      w_73 = ATgetArgument(v_73, 0);
      x_73 = ATgetArgument(v_73, 1);
      s_73 :
      if(match_cons(x_73, sym_TCons_2))
        {
          y_73 = ATgetArgument(x_73, 0);
          z_73 = ATgetArgument(x_73, 1);
          t_73 :
          if(match_cons(z_73, sym_TCons_2))
            {
              a_74 = ATgetArgument(z_73, 0);
              b_74 = ATgetArgument(z_73, 1);
              u_73 :
              if(match_cons(b_74, sym_TNil_0))
                {
                  ATerm f_74 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TNil_0);
                  {
                    ATerm h_74 = NULL;
                    t = i_43(t);
                    f_74 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm j_74 = NULL;
                      t = diff_0(t);
                      h_74 = t;
                      t = (ATerm) ATmakeAppl(sym_TNil_0);
                      {
                        ATerm l_74 = NULL;
                        t = i_43(t);
                        j_74 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                        {
                          ATerm n_74 = NULL;
                          t = isect_0(t);
                          l_74 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = conc_0(t);
                          n_74 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_74), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm i_75 = NULL,j_75 = NULL,k_75 = NULL,l_75 = NULL;
  i_75 = t;
  h_75 :
  if(match_cons(i_75, sym_Seqs_1))
    {
      j_75 = ATgetArgument(i_75, 0);
      t = not_null(j_75);
      t = seqs_join_0(t);
    }
  else
    {
      if(match_cons(i_75, sym_Seq_2))
        {
          j_75 = ATgetArgument(i_75, 0);
          k_75 = ATgetArgument(i_75, 1);
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_75), (ATerm) ATmakeAppl(sym_Nil_0)));
          t = seqs_join_0(t);
        }
      else
        {
          if(match_cons(i_75, sym_Rule_3))
            {
              j_75 = ATgetArgument(i_75, 0);
              k_75 = ATgetArgument(i_75, 1);
              l_75 = ATgetArgument(i_75, 2);
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_75), (ATerm) ATmakeAppl(sym_Nil_0))));
              t = seqs_join_0(t);
            }
          else
            {
              if(match_cons(i_75, sym_StratRule_3))
                {
                  j_75 = ATgetArgument(i_75, 0);
                  k_75 = ATgetArgument(i_75, 1);
                  l_75 = ATgetArgument(i_75, 2);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_75), (ATerm) ATmakeAppl(sym_Nil_0))));
                  t = seqs_join_0(t);
                }
              else
                {
                  if(match_cons(i_75, sym_MA_2))
                    {
                      j_75 = ATgetArgument(i_75, 0);
                      k_75 = ATgetArgument(i_75, 1);
                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_75), (ATerm) ATmakeAppl(sym_Nil_0)));
                      t = seqs_join_0(t);
                    }
                  else
                    {
                      if(match_cons(i_75, sym_AM_2))
                        {
                          j_75 = ATgetArgument(i_75, 0);
                          k_75 = ATgetArgument(i_75, 1);
                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_75), (ATerm) ATmakeAppl(sym_Nil_0)));
                          t = seqs_join_0(t);
                        }
                      else
                        {
                          if(match_cons(i_75, sym_BA_2))
                            {
                              j_75 = ATgetArgument(i_75, 0);
                              k_75 = ATgetArgument(i_75, 1);
                              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_75), (ATerm) ATmakeAppl(sym_Nil_0)));
                              t = seqs_join_0(t);
                            }
                          else
                            {
                              if(match_cons(i_75, sym_BAM_3))
                                {
                                  j_75 = ATgetArgument(i_75, 0);
                                  k_75 = ATgetArgument(i_75, 1);
                                  l_75 = ATgetArgument(i_75, 2);
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_75), (ATerm) ATmakeAppl(sym_Nil_0))));
                                  t = seqs_join_0(t);
                                }
                              else
                                {
                                  if(match_cons(i_75, sym_Cong_2))
                                    {
                                      j_75 = ATgetArgument(i_75, 0);
                                      k_75 = ATgetArgument(i_75, 1);
                                      t = not_null(k_75);
                                      t = seqs_join_0(t);
                                    }
                                  else
                                    {
                                      if(match_cons(i_75, sym_Scope_2))
                                        {
                                          j_75 = ATgetArgument(i_75, 0);
                                          k_75 = ATgetArgument(i_75, 1);
                                          t = not_null(k_75);
                                          {
                                            ATerm l_2 (ATerm t)
                                            {
                                              ATerm m_2 (ATerm t)
                                              {
                                                t = not_null(j_75);
                                                return(t);
                                              }
                                              t = JoinScope_1(t, m_2);
                                              return(t);
                                            }
                                            t = map_1(t, l_2);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(i_75, sym_Overlay_3))
                                            {
                                              j_75 = ATgetArgument(i_75, 0);
                                              k_75 = ATgetArgument(i_75, 1);
                                              l_75 = ATgetArgument(i_75, 2);
                                              {
                                                ATerm n_76 = NULL;
                                                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_75), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_75), (ATerm) ATmakeAppl(sym_Nil_0)));
                                                t = seqs_join_0(t);
                                                n_76 = t;
                                                t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(j_75), not_null(k_75), not_null(n_76));
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
ATerm Cong_2 (ATerm t, ATerm f_42 (ATerm), ATerm g_42 (ATerm))
{
  ATerm h_77 = NULL,i_77 = NULL,j_77 = NULL;
  h_77 = t;
  g_77 :
  if(match_cons(h_77, sym_Cong_2))
    {
      i_77 = ATgetArgument(h_77, 0);
      j_77 = ATgetArgument(h_77, 1);
      {
        ATerm n_77 = NULL;
        t = not_null(i_77);
        {
          ATerm q_77 = NULL;
          t = f_42(t);
          n_77 = t;
          t = not_null(j_77);
          t = g_42(t);
          q_77 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(n_77), not_null(q_77));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm use_term_0 (ATerm t)
{
  ATerm x_77 = NULL;
  ATerm b_78 = NULL;
  x_77 = t;
  t = tvars_0(t);
  b_78 = t;
  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(b_78), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
  return(t);
}
ATerm def_term_0 (ATerm t)
{
  ATerm h_78 = NULL;
  ATerm k_78 = NULL;
  h_78 = t;
  t = tvars_0(t);
  k_78 = t;
  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_78), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm r_39 (ATerm), ATerm s_39 (ATerm), ATerm t_39 (ATerm))
{
  ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL;
  u_78 = t;
  t_78 :
  if(match_cons(u_78, sym_Rule_3))
    {
      v_78 = ATgetArgument(u_78, 0);
      w_78 = ATgetArgument(u_78, 1);
      x_78 = ATgetArgument(u_78, 2);
      {
        ATerm b_79 = NULL;
        t = not_null(v_78);
        {
          ATerm d_79 = NULL;
          t = r_39(t);
          b_79 = t;
          t = not_null(w_78);
          {
            ATerm f_79 = NULL;
            t = s_39(t);
            d_79 = t;
            t = not_null(x_78);
            t = t_39(t);
            f_79 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_79), not_null(d_79), not_null(f_79));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BAM_3 (ATerm t, ATerm z_38 (ATerm), ATerm a_39 (ATerm), ATerm b_39 (ATerm))
{
  ATerm q_79 = NULL,r_79 = NULL,s_79 = NULL,t_79 = NULL;
  q_79 = t;
  p_79 :
  if(match_cons(q_79, sym_BAM_3))
    {
      r_79 = ATgetArgument(q_79, 0);
      s_79 = ATgetArgument(q_79, 1);
      t_79 = ATgetArgument(q_79, 2);
      {
        ATerm x_79 = NULL;
        t = not_null(r_79);
        {
          ATerm z_79 = NULL;
          t = z_38(t);
          x_79 = t;
          t = not_null(s_79);
          {
            ATerm b_80 = NULL;
            t = a_39(t);
            z_79 = t;
            t = not_null(t_79);
            t = b_39(t);
            b_80 = t;
            t = (ATerm) ATmakeAppl(sym_BAM_3, not_null(x_79), not_null(z_79), not_null(b_80));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BA_2 (ATerm t, ATerm x_38 (ATerm), ATerm y_38 (ATerm))
{
  ATerm l_80 = NULL,m_80 = NULL,n_80 = NULL;
  l_80 = t;
  k_80 :
  if(match_cons(l_80, sym_BA_2))
    {
      m_80 = ATgetArgument(l_80, 0);
      n_80 = ATgetArgument(l_80, 1);
      {
        ATerm q_80 = NULL;
        t = not_null(m_80);
        {
          ATerm s_80 = NULL;
          t = x_38(t);
          q_80 = t;
          t = not_null(n_80);
          t = y_38(t);
          s_80 = t;
          t = (ATerm) ATmakeAppl(sym_BA_2, not_null(q_80), not_null(s_80));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm AM_2 (ATerm t, ATerm v_38 (ATerm), ATerm w_38 (ATerm))
{
  ATerm c_81 = NULL,d_81 = NULL,e_81 = NULL;
  c_81 = t;
  b_81 :
  if(match_cons(c_81, sym_AM_2))
    {
      d_81 = ATgetArgument(c_81, 0);
      e_81 = ATgetArgument(c_81, 1);
      {
        ATerm h_81 = NULL;
        t = not_null(d_81);
        {
          ATerm j_81 = NULL;
          t = v_38(t);
          h_81 = t;
          t = not_null(e_81);
          t = w_38(t);
          j_81 = t;
          t = (ATerm) ATmakeAppl(sym_AM_2, not_null(h_81), not_null(j_81));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MA_2 (ATerm t, ATerm t_38 (ATerm), ATerm u_38 (ATerm))
{
  ATerm x_81 = NULL,y_81 = NULL,z_81 = NULL;
  x_81 = t;
  t_81 :
  if(match_cons(x_81, sym_MA_2))
    {
      y_81 = ATgetArgument(x_81, 0);
      z_81 = ATgetArgument(x_81, 1);
      {
        ATerm c_82 = NULL;
        t = not_null(y_81);
        {
          ATerm e_82 = NULL;
          t = t_38(t);
          c_82 = t;
          t = not_null(z_81);
          t = u_38(t);
          e_82 = t;
          t = (ATerm) ATmakeAppl(sym_MA_2, not_null(c_82), not_null(e_82));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm n_42 (ATerm))
{
  ATerm m_82 = NULL,n_82 = NULL;
  m_82 = t;
  l_82 :
  if(match_cons(m_82, sym_Match_1))
    {
      n_82 = ATgetArgument(m_82, 0);
      {
        ATerm p_82 = NULL;
        t = not_null(n_82);
        t = n_42(t);
        p_82 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(p_82));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm o_42 (ATerm))
{
  ATerm w_82 = NULL,x_82 = NULL;
  w_82 = t;
  v_82 :
  if(match_cons(w_82, sym_Build_1))
    {
      x_82 = ATgetArgument(w_82, 0);
      {
        ATerm z_82 = NULL;
        t = not_null(x_82);
        t = o_42(t);
        z_82 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(z_82));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm constructs_1 (ATerm t, ATerm h_43 (ATerm))
{
  ATerm o_10 = t;
  if(PushChoice()==0)
    {
      t = Build_1(t, use_term_0);
      PopChoice();
    }
  else
    {
      t = o_10;
      {
        ATerm p_10 = t;
        if(PushChoice()==0)
          {
            t = Match_1(t, def_term_0);
            PopChoice();
          }
        else
          {
            t = p_10;
            {
              ATerm q_10 = t;
              if(PushChoice()==0)
                {
                  t = MA_2(t, def_term_0, h_43);
                  PopChoice();
                }
              else
                {
                  t = q_10;
                  {
                    ATerm r_10 = t;
                    if(PushChoice()==0)
                      {
                        t = AM_2(t, h_43, def_term_0);
                        PopChoice();
                      }
                    else
                      {
                        t = r_10;
                        {
                          ATerm s_10 = t;
                          if(PushChoice()==0)
                            {
                              t = BA_2(t, h_43, use_term_0);
                              PopChoice();
                            }
                          else
                            {
                              t = s_10;
                              {
                                ATerm t_10 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BAM_3(t, h_43, use_term_0, def_term_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = t_10;
                                    {
                                      ATerm u_10 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Scope_2(t, _id, h_43);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = u_10;
                                          {
                                            ATerm v_10 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = Rule_3(t, def_term_0, use_term_0, h_43);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = v_10;
                                                {
                                                  ATerm w_10 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = Overlay_3(t, _id, _id, use_term_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = w_10;
                                                      {
                                                        ATerm n_2 (ATerm t)
                                                        {
                                                          t = map_1(t, h_43);
                                                          return(t);
                                                        }
                                                        t = Cong_2(t, _id, n_2);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm x_10 = t;
  if(PushChoice()==0)
    {
      t = constructs_1(t, use_def_0);
      PopChoice();
    }
  else
    {
      t = x_10;
      t = _all(t, use_def_0);
    }
  {
    ATerm y_10 = t;
    if(PushChoice()==0)
      {
        t = UDjoin_0(t);
        PopChoice();
      }
    else
      {
        t = y_10;
        t = default_join_0(t);
      }
  }
  return(t);
}
ATerm RDef_3 (ATerm t, ATerm z_39 (ATerm), ATerm a_40 (ATerm), ATerm b_40 (ATerm))
{
  ATerm j_83 = NULL,k_83 = NULL,l_83 = NULL,m_83 = NULL;
  j_83 = t;
  i_83 :
  if(match_cons(j_83, sym_RDef_3))
    {
      k_83 = ATgetArgument(j_83, 0);
      l_83 = ATgetArgument(j_83, 1);
      m_83 = ATgetArgument(j_83, 2);
      {
        ATerm q_83 = NULL;
        t = not_null(k_83);
        {
          ATerm s_83 = NULL;
          t = z_39(t);
          q_83 = t;
          t = not_null(l_83);
          {
            ATerm u_83 = NULL;
            t = a_40(t);
            s_83 = t;
            t = not_null(m_83);
            t = b_40(t);
            u_83 = t;
            t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(q_83), not_null(s_83), not_null(u_83));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm r_41 (ATerm), ATerm s_41 (ATerm), ATerm t_41 (ATerm))
{
  ATerm f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL;
  f_84 = t;
  e_84 :
  if(match_cons(f_84, sym_SDef_3))
    {
      g_84 = ATgetArgument(f_84, 0);
      h_84 = ATgetArgument(f_84, 1);
      i_84 = ATgetArgument(f_84, 2);
      {
        ATerm n_84 = NULL;
        t = not_null(g_84);
        {
          ATerm p_84 = NULL;
          t = r_41(t);
          n_84 = t;
          t = not_null(h_84);
          {
            ATerm s_84 = NULL;
            t = s_41(t);
            p_84 = t;
            t = not_null(i_84);
            t = t_41(t);
            s_84 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(n_84), not_null(p_84), not_null(s_84));
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
  ATerm z_10 = t;
  if(PushChoice()==0)
    {
      ATerm o_2 (ATerm t)
      {
        t = use_def_0(t);
        {
          ATerm b_11 = t;
          if(PushChoice()==0)
            {
              ATerm p_2 (ATerm t)
              {
                ATerm r_2 (ATerm t)
                {
                  ATerm n_85 = NULL;
                  n_85 = t;
                  y_84 :
                  if(!(match_cons(n_85, sym_Nil_0)))
                    _fail(t);
                  return(t);
                }
                ATerm s_2 (ATerm t)
                {
                  ATerm t_2 (ATerm t)
                  {
                    ATerm u_2 (ATerm t)
                    {
                      ATerm o_85 = NULL;
                      o_85 = t;
                      z_84 :
                      if(!(match_cons(o_85, sym_Nil_0)))
                        _fail(t);
                      return(t);
                    }
                    ATerm v_2 (ATerm t)
                    {
                      ATerm q_85 = NULL;
                      q_85 = t;
                      b_85 :
                      if(!(match_cons(q_85, sym_TNil_0)))
                        _fail(t);
                      return(t);
                    }
                    t = TCons_2(t, u_2, v_2);
                    return(t);
                  }
                  t = TCons_2(t, _id, t_2);
                  return(t);
                }
                t = TCons_2(t, r_2, s_2);
                return(t);
              }
              ATerm q_2 (ATerm t)
              {
                ATerm r_85 = NULL;
                r_85 = t;
                c_85 :
                if(!(match_cons(r_85, sym_Nil_0)))
                  _fail(t);
                return(t);
              }
              t = Cons_2(t, p_2, q_2);
              PopChoice();
              _fail(t);
            }
          else
            t = b_11;
        }
        return(t);
      }
      t = SDef_3(t, _id, _id, o_2);
      t = err_msg_0(t);
      PopChoice();
    }
  else
    {
      t = z_10;
      {
        ATerm f_11 = t;
        if(PushChoice()==0)
          {
            ATerm w_2 (ATerm t)
            {
              t = use_def_0(t);
              {
                ATerm g_11 = t;
                if(PushChoice()==0)
                  {
                    ATerm x_2 (ATerm t)
                    {
                      ATerm z_2 (ATerm t)
                      {
                        ATerm s_85 = NULL;
                        s_85 = t;
                        d_85 :
                        if(!(match_cons(s_85, sym_Nil_0)))
                          _fail(t);
                        return(t);
                      }
                      ATerm a_3 (ATerm t)
                      {
                        ATerm b_3 (ATerm t)
                        {
                          ATerm c_3 (ATerm t)
                          {
                            ATerm t_85 = NULL;
                            t_85 = t;
                            e_85 :
                            if(!(match_cons(t_85, sym_Nil_0)))
                              _fail(t);
                            return(t);
                          }
                          ATerm d_3 (ATerm t)
                          {
                            ATerm u_85 = NULL;
                            u_85 = t;
                            g_85 :
                            if(!(match_cons(u_85, sym_TNil_0)))
                              _fail(t);
                            return(t);
                          }
                          t = TCons_2(t, c_3, d_3);
                          return(t);
                        }
                        t = TCons_2(t, _id, b_3);
                        return(t);
                      }
                      t = TCons_2(t, z_2, a_3);
                      return(t);
                    }
                    ATerm y_2 (ATerm t)
                    {
                      ATerm v_85 = NULL;
                      v_85 = t;
                      h_85 :
                      if(!(match_cons(v_85, sym_Nil_0)))
                        _fail(t);
                      return(t);
                    }
                    t = Cons_2(t, x_2, y_2);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = g_11;
              }
              return(t);
            }
            t = RDef_3(t, _id, _id, w_2);
            t = err_msg_0(t);
            PopChoice();
          }
        else
          {
            t = f_11;
            t = Overlay_3(t, _id, _id, _id);
            t = use_def_0(t);
            {
              ATerm h_11 = t;
              if(PushChoice()==0)
                {
                  ATerm e_3 (ATerm t)
                  {
                    ATerm f_3 (ATerm t)
                    {
                      ATerm h_3 (ATerm t)
                      {
                        ATerm w_85 = NULL;
                        w_85 = t;
                        i_85 :
                        if(!(match_cons(w_85, sym_Nil_0)))
                          _fail(t);
                        return(t);
                      }
                      ATerm i_3 (ATerm t)
                      {
                        ATerm j_3 (ATerm t)
                        {
                          ATerm x_85 = NULL;
                          x_85 = t;
                          j_85 :
                          if(!(match_cons(x_85, sym_Nil_0)))
                            _fail(t);
                          return(t);
                        }
                        ATerm k_3 (ATerm t)
                        {
                          ATerm l_3 (ATerm t)
                          {
                            ATerm y_85 = NULL;
                            y_85 = t;
                            k_85 :
                            if(!(match_cons(y_85, sym_Nil_0)))
                              _fail(t);
                            return(t);
                          }
                          ATerm m_3 (ATerm t)
                          {
                            ATerm a_86 = NULL;
                            a_86 = t;
                            l_85 :
                            if(!(match_cons(a_86, sym_TNil_0)))
                              _fail(t);
                            return(t);
                          }
                          t = TCons_2(t, l_3, m_3);
                          return(t);
                        }
                        t = TCons_2(t, j_3, k_3);
                        return(t);
                      }
                      t = TCons_2(t, h_3, i_3);
                      return(t);
                    }
                    ATerm g_3 (ATerm t)
                    {
                      ATerm b_86 = NULL;
                      b_86 = t;
                      m_85 :
                      if(!(match_cons(b_86, sym_Nil_0)))
                        _fail(t);
                      return(t);
                    }
                    t = Cons_2(t, f_3, g_3);
                    return(t);
                  }
                  t = Overlay_3(t, _id, _id, e_3);
                  PopChoice();
                  _fail(t);
                }
              else
                t = h_11;
              t = err_msg_0(t);
            }
          }
      }
    }
  return(t);
}
ATerm defs_use_def_0 (ATerm t)
{
  ATerm d_86 = NULL;
  t = filter_1(t, check_0);
  d_86 = t;
  c_86 :
  if(!(match_cons(d_86, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm Overlays_1 (ATerm t, ATerm k_40 (ATerm))
{
  ATerm h_86 = NULL,i_86 = NULL;
  h_86 = t;
  g_86 :
  if(match_cons(h_86, sym_Overlays_1))
    {
      i_86 = ATgetArgument(h_86, 0);
      {
        ATerm l_86 = NULL;
        t = not_null(i_86);
        t = k_40(t);
        l_86 = t;
        t = (ATerm) ATmakeAppl(sym_Overlays_1, not_null(l_86));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm j_40 (ATerm))
{
  ATerm s_86 = NULL,t_86 = NULL;
  s_86 = t;
  r_86 :
  if(match_cons(s_86, sym_Signature_1))
    {
      t_86 = ATgetArgument(s_86, 0);
      {
        ATerm v_86 = NULL;
        t = not_null(t_86);
        t = j_40(t);
        v_86 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, not_null(v_86));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm spec_use_def_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm o_3 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm p_3 (ATerm t)
    {
      ATerm q_3 (ATerm t)
      {
        t = Overlays_1(t, defs_use_def_0);
        return(t);
      }
      ATerm r_3 (ATerm t)
      {
        ATerm s_3 (ATerm t)
        {
          t = Strategies_1(t, defs_use_def_0);
          return(t);
        }
        ATerm t_3 (ATerm t)
        {
          ATerm a_87 = NULL;
          a_87 = t;
          z_86 :
          if(!(match_cons(a_87, sym_Nil_0)))
            _fail(t);
          return(t);
        }
        t = Cons_2(t, s_3, t_3);
        return(t);
      }
      t = Cons_2(t, q_3, r_3);
      return(t);
    }
    t = Cons_2(t, o_3, p_3);
    return(t);
  }
  t = Specification_1(t, n_3);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm l_87 = NULL,m_87 = NULL,n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL,s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL;
  l_87 = t;
  c_87 :
  if(match_cons(l_87, sym_TCons_2))
    {
      m_87 = ATgetArgument(l_87, 0);
      r_87 = ATgetArgument(l_87, 1);
      d_87 :
      if(match_cons(m_87, sym_TCons_2))
        {
          n_87 = ATgetArgument(m_87, 0);
          o_87 = ATgetArgument(m_87, 1);
          e_87 :
          if(match_cons(o_87, sym_TCons_2))
            {
              p_87 = ATgetArgument(o_87, 0);
              q_87 = ATgetArgument(o_87, 1);
              f_87 :
              if(match_cons(q_87, sym_TNil_0))
                {
                  g_87 :
                  if(match_cons(r_87, sym_TCons_2))
                    {
                      s_87 = ATgetArgument(r_87, 0);
                      x_87 = ATgetArgument(r_87, 1);
                      h_87 :
                      if(match_cons(s_87, sym_TCons_2))
                        {
                          t_87 = ATgetArgument(s_87, 0);
                          u_87 = ATgetArgument(s_87, 1);
                          i_87 :
                          if(match_cons(u_87, sym_TCons_2))
                            {
                              v_87 = ATgetArgument(u_87, 0);
                              w_87 = ATgetArgument(u_87, 1);
                              j_87 :
                              if(match_cons(w_87, sym_TNil_0))
                                {
                                  k_87 :
                                  if(match_cons(x_87, sym_TNil_0))
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_87), not_null(t_87)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_87), not_null(v_87)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm f_88 = NULL,g_88 = NULL,h_88 = NULL;
  f_88 = t;
  e_88 :
  if(match_cons(f_88, sym_Cons_2))
    {
      g_88 = ATgetArgument(f_88, 0);
      h_88 = ATgetArgument(f_88, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_88), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_88), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm n_88 = NULL;
  n_88 = t;
  m_88 :
  if(match_cons(n_88, sym_Nil_0))
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
ATerm strings_to_vars_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm q_88 = NULL;
    q_88 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_88));
    return(t);
  }
  t = map_1(t, u_3);
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL;
  y_88 = t;
  v_88 :
  if(match_cons(y_88, sym_TCons_2))
    {
      z_88 = ATgetArgument(y_88, 0);
      a_89 = ATgetArgument(y_88, 1);
      w_88 :
      if(match_cons(a_89, sym_TCons_2))
        {
          b_89 = ATgetArgument(a_89, 0);
          c_89 = ATgetArgument(a_89, 1);
          x_88 :
          if(match_cons(c_89, sym_TNil_0))
            {
              ATerm f_89 = NULL;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_88), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_89), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = diff_0(t);
              f_89 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_88), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_89), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm n_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL,r_89 = NULL;
  n_89 = t;
  k_89 :
  if(match_cons(n_89, sym_TCons_2))
    {
      o_89 = ATgetArgument(n_89, 0);
      p_89 = ATgetArgument(n_89, 1);
      l_89 :
      if(match_cons(p_89, sym_TCons_2))
        {
          q_89 = ATgetArgument(p_89, 0);
          r_89 = ATgetArgument(p_89, 1);
          m_89 :
          if(match_cons(r_89, sym_TNil_0))
            {
              if(o_89 != NULL && o_89 != q_89)
                _fail(q_89);
              else
                o_89 = q_89;
            }
          else
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
  ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL,q_90 = NULL,r_90 = NULL,s_90 = NULL,t_90 = NULL,u_90 = NULL,v_90 = NULL;
  ATerm e_92 (ATerm t)
  {
    ATerm o_91 = NULL,p_91 = NULL,b_92 = NULL;
    ATerm q_91 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_90), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm i_11 = t;
      if(PushChoice()==0)
        {
          t = eq_0(t);
          PopChoice();
          _fail(t);
        }
      else
        t = i_11;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm s_91 = NULL;
        t = a_0(t);
        q_91 = t;
        t = not_null(t_90);
        {
          ATerm v_91 = NULL;
          t = tvars_0(t);
          s_91 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_91), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_91), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = isect_0(t);
          {
            ATerm w_91 = NULL;
            t = strings_to_vars_0(t);
            v_91 = t;
            if(o_91 != NULL && o_91 != v_91)
              _fail(v_91);
            else
              o_91 = v_91;
            t = (ATerm) ATmakeAppl(sym_TNil_0);
            {
              ATerm y_91 = NULL;
              t = a_0(t);
              w_91 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_90), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_90), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm a_92 = NULL;
                t = tvars_0(t);
                y_91 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_91), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_91), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = isect_0(t);
                t = strings_to_vars_0(t);
                a_92 = t;
                if(p_91 != NULL && p_91 != a_92)
                  _fail(a_92);
                else
                  p_91 = a_92;
              }
            }
          }
        }
      }
    }
    t = not_null(q_90);
    t = b_0(t);
    b_92 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(b_92), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(o_91)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue)), not_null(p_91)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_RDef_3, not_null(q_90), not_null(r_90), (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_90), not_null(u_90), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(q_90))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(o_91)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue)), not_null(p_91))), not_null(v_90)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    return(t);
  }
  p_90 = t;
  h_90 :
  if(match_cons(p_90, sym_RDef_3))
    {
      q_90 = ATgetArgument(p_90, 0);
      r_90 = ATgetArgument(p_90, 1);
      s_90 = ATgetArgument(p_90, 2);
      i_90 :
      if(match_cons(s_90, sym_Rule_3))
        {
          t_90 = ATgetArgument(s_90, 0);
          u_90 = ATgetArgument(s_90, 1);
          v_90 = ATgetArgument(s_90, 2);
          j_90 :
          if(match_cons(u_90, sym_Op_2))
            {
              n_90 = ATgetArgument(u_90, 0);
              o_90 = ATgetArgument(u_90, 1);
              k_90 :
              if(match_cons(o_90, sym_Nil_0))
                {
                  l_90 :
                  if(match_string(n_90, "Undefined"))
                    {
                      ATerm j_11 = t;
                      if(PushChoice()==0)
                        {
                          ATerm b_91 = NULL,h_91 = NULL;
                          ATerm c_91 = NULL;
                          t = (ATerm) ATmakeAppl(sym_TNil_0);
                          {
                            ATerm e_91 = NULL;
                            t = a_0(t);
                            c_91 = t;
                            t = not_null(t_90);
                            {
                              ATerm g_91 = NULL;
                              t = tvars_0(t);
                              e_91 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_91), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_91), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = isect_0(t);
                              t = strings_to_vars_0(t);
                              g_91 = t;
                              if(b_91 != NULL && b_91 != g_91)
                                _fail(g_91);
                              else
                                b_91 = g_91;
                            }
                          }
                          t = not_null(q_90);
                          t = b_0(t);
                          h_91 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(h_91), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(b_91)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_RDef_3, not_null(q_90), not_null(r_90), (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_90), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(q_90))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(b_91)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_90), (ATerm) ATmakeAppl(sym_Fail_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
                          PopChoice();
                        }
                      else
                        {
                          t = j_11;
                          t = e_92(t);
                        }
                    }
                  else
                    t = e_92(t);
                }
              else
                {
                  m_90 :
                  t = e_92(t);
                }
            }
          else
            t = e_92(t);
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
  ATerm a_93 = NULL,b_93 = NULL,c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL;
  a_93 = t;
  u_92 :
  if(match_cons(a_93, sym_TCons_2))
    {
      b_93 = ATgetArgument(a_93, 0);
      d_93 = ATgetArgument(a_93, 1);
      v_92 :
      if(match_cons(b_93, sym_DynamicRules_1))
        {
          c_93 = ATgetArgument(b_93, 0);
          w_92 :
          if(match_cons(d_93, sym_TCons_2))
            {
              e_93 = ATgetArgument(d_93, 0);
              f_93 = ATgetArgument(d_93, 1);
              x_92 :
              if(match_cons(f_93, sym_TNil_0))
                {
                  t = not_null(c_93);
                  {
                    ATerm v_3 (ATerm t)
                    {
                      ATerm w_3 (ATerm t)
                      {
                        t = not_null(e_93);
                        return(t);
                      }
                      ATerm x_3 (ATerm t)
                      {
                        ATerm i_93 = NULL;
                        i_93 = t;
                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(i_93))), (ATerm) ATmakeAppl(sym_Nil_0)));
                        return(t);
                      }
                      t = SplitDynamicRule_2(t, w_3, x_3);
                      return(t);
                    }
                    t = map_1(t, v_3);
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
          if(match_cons(b_93, sym_OverrideDynamicRules_1))
            {
              c_93 = ATgetArgument(b_93, 0);
              y_92 :
              if(match_cons(d_93, sym_TCons_2))
                {
                  e_93 = ATgetArgument(d_93, 0);
                  f_93 = ATgetArgument(d_93, 1);
                  z_92 :
                  if(match_cons(f_93, sym_TNil_0))
                    {
                      t = not_null(c_93);
                      {
                        ATerm y_3 (ATerm t)
                        {
                          ATerm z_3 (ATerm t)
                          {
                            t = not_null(e_93);
                            return(t);
                          }
                          ATerm a_4 (ATerm t)
                          {
                            ATerm n_93 = NULL;
                            n_93 = t;
                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(n_93))), (ATerm) ATmakeAppl(sym_Nil_0)));
                            return(t);
                          }
                          t = SplitDynamicRule_2(t, z_3, a_4);
                          return(t);
                        }
                        t = map_1(t, y_3);
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
ATerm dist_scope_1 (ATerm t, ATerm i_64 (ATerm))
{
  ATerm a_94 = NULL,b_94 = NULL,d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL;
  a_94 = t;
  w_93 :
  if(match_cons(a_94, sym_TCons_2))
    {
      b_94 = ATgetArgument(a_94, 0);
      f_94 = ATgetArgument(a_94, 1);
      x_93 :
      if(match_cons(b_94, sym_Scope_2))
        {
          d_94 = ATgetArgument(b_94, 0);
          e_94 = ATgetArgument(b_94, 1);
          y_93 :
          if(match_cons(f_94, sym_TCons_2))
            {
              g_94 = ATgetArgument(f_94, 0);
              h_94 = ATgetArgument(f_94, 1);
              z_93 :
              if(match_cons(h_94, sym_TNil_0))
                {
                  ATerm l_94 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_94), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_94), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm o_94 = NULL;
                    t = union_0(t);
                    l_94 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_94), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_94), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = i_64(t);
                    o_94 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_94), not_null(o_94));
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
ATerm one_dist_1 (ATerm t, ATerm y_58 (ATerm))
{
  ATerm y_94 = NULL,z_94 = NULL,a_95 = NULL,b_95 = NULL,c_95 = NULL;
  y_94 = t;
  v_94 :
  if(match_cons(y_94, sym_TCons_2))
    {
      z_94 = ATgetArgument(y_94, 0);
      a_95 = ATgetArgument(y_94, 1);
      w_94 :
      if(match_cons(a_95, sym_TCons_2))
        {
          b_95 = ATgetArgument(a_95, 0);
          c_95 = ATgetArgument(a_95, 1);
          x_94 :
          if(match_cons(c_95, sym_TNil_0))
            {
              t = not_null(z_94);
              {
                ATerm b_4 (ATerm t)
                {
                  ATerm f_95 = NULL;
                  f_95 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_95), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_95), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = y_58(t);
                  return(t);
                }
                t = _one(t, b_4);
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
ATerm env_oncetd_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm j_95 (ATerm t)
  {
    ATerm k_11 = t;
    if(PushChoice()==0)
      {
        t = n_59(t);
        PopChoice();
      }
    else
      {
        t = k_11;
        t = one_dist_1(t, j_95);
      }
    return(t);
  }
  t = j_95(t);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm u_95 = NULL,v_95 = NULL,x_95 = NULL;
  u_95 = t;
  t_95 :
  if(match_cons(u_95, sym_Cons_2))
    {
      v_95 = ATgetArgument(u_95, 0);
      x_95 = ATgetArgument(u_95, 1);
      {
        ATerm a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL;
        ATerm e_96 = NULL;
        t = not_null(v_95);
        {
          ATerm k_96 = NULL;
          t = tvars_0(t);
          e_96 = t;
          if(c_96 != NULL && c_96 != e_96)
            _fail(e_96);
          else
            c_96 = e_96;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_95), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_96), (ATerm) ATmakeAppl(sym_TNil_0)));
          {
            ATerm n_96 (ATerm t)
            {
              ATerm c_4 (ATerm t)
              {
                ATerm l_11 = t;
                if(PushChoice()==0)
                  {
                    t = dist_scope_1(t, n_96);
                    PopChoice();
                  }
                else
                  {
                    t = l_11;
                    {
                      ATerm f_96 = NULL,g_96 = NULL,h_96 = NULL,i_96 = NULL,j_96 = NULL;
                      t = split_dynamic_rules_0(t);
                      f_96 = t;
                      n_95 :
                      if(match_cons(f_96, sym_TCons_2))
                        {
                          g_96 = ATgetArgument(f_96, 0);
                          h_96 = ATgetArgument(f_96, 1);
                          o_95 :
                          if(match_cons(h_96, sym_TCons_2))
                            {
                              i_96 = ATgetArgument(h_96, 0);
                              j_96 = ATgetArgument(h_96, 1);
                              p_95 :
                              if(match_cons(j_96, sym_TNil_0))
                                {
                                  if(b_96 != NULL && b_96 != g_96)
                                    _fail(g_96);
                                  else
                                    b_96 = g_96;
                                  if(a_96 != NULL && a_96 != i_96)
                                    _fail(i_96);
                                  else
                                    a_96 = i_96;
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(b_96));
                                }
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
              t = env_oncetd_1(t, c_4);
              return(t);
            }
            t = n_96(t);
            k_96 = t;
            if(d_96 != NULL && d_96 != k_96)
              _fail(k_96);
            else
              d_96 = k_96;
          }
        }
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_96), not_null(a_96)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_95), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm z_62 (ATerm), ATerm a_63 (ATerm))
{
  ATerm s_96 (ATerm t)
  {
    ATerm m_11 = t;
    if(PushChoice()==0)
      {
        t = z_62(t);
        t = s_96(t);
        PopChoice();
      }
    else
      {
        t = m_11;
        t = a_63(t);
      }
    return(t);
  }
  t = s_96(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm c_63 (ATerm))
{
  t = repeat_2(t, c_63, _id);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm l_58 (ATerm))
{
  ATerm v_96 (ATerm t)
  {
    t = l_58(t);
    {
      ATerm n_11 = t;
      if(PushChoice()==0)
        {
          ATerm u_96 = NULL;
          u_96 = t;
          t_96 :
          if(!(match_cons(u_96, sym_Nil_0)))
            _fail(t);
          PopChoice();
        }
      else
        {
          t = n_11;
          t = Cons_2(t, _id, v_96);
        }
    }
    return(t);
  }
  t = v_96(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    t = repeat_1(t, lift_dynamic_rule_0);
    return(t);
  }
  t = listtd_1(t, d_4);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm b_97 = NULL,c_97 = NULL,d_97 = NULL,e_97 = NULL,f_97 = NULL;
  b_97 = t;
  z_96 :
  if(match_cons(b_97, sym_DynRuleScope_2))
    {
      c_97 = ATgetArgument(b_97, 0);
      f_97 = ATgetArgument(b_97, 1);
      a_97 :
      if(match_cons(c_97, sym_Nil_0))
        t = not_null(f_97);
      else
        {
          if(match_cons(c_97, sym_Cons_2))
            {
              d_97 = ATgetArgument(c_97, 0);
              e_97 = ATgetArgument(c_97, 1);
              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(d_97))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_DynRuleScope_2, not_null(e_97), not_null(f_97)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  ATerm e_4 (ATerm t)
  {
    ATerm o_11 = t;
    if(PushChoice()==0)
      {
        t = DefDynamicRuleScope_0(t);
        PopChoice();
      }
    else
      t = o_11;
    return(t);
  }
  t = topdown_1(t, e_4);
  return(t);
}
ATerm LiftDynamicRules_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm g_4 (ATerm t)
    {
      ATerm h_4 (ATerm t)
      {
        ATerm i_4 (ATerm t)
        {
          ATerm k_4 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, k_4);
          return(t);
        }
        ATerm j_4 (ATerm t)
        {
          ATerm n_97 = NULL;
          n_97 = t;
          m_97 :
          if(!(match_cons(n_97, sym_Nil_0)))
            _fail(t);
          return(t);
        }
        t = Cons_2(t, i_4, j_4);
        return(t);
      }
      t = Cons_2(t, _id, h_4);
      return(t);
    }
    t = Cons_2(t, _id, g_4);
    return(t);
  }
  t = Specification_1(t, f_4);
  return(t);
}
ATerm DefScopeDefault_0 (ATerm t)
{
  ATerm r_97 = NULL,s_97 = NULL;
  r_97 = t;
  q_97 :
  if(match_cons(r_97, sym_ScopeDefault_1))
    {
      s_97 = ATgetArgument(r_97, 0);
      {
        ATerm u_97 = NULL;
        t = not_null(s_97);
        t = tvars_0(t);
        u_97 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_97), not_null(s_97));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm c_40 (ATerm))
{
  ATerm b_98 = NULL,c_98 = NULL;
  b_98 = t;
  a_98 :
  if(match_cons(b_98, sym_DynamicRules_1))
    {
      c_98 = ATgetArgument(b_98, 0);
      {
        ATerm e_98 = NULL;
        t = not_null(c_98);
        t = c_40(t);
        e_98 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(e_98));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm r_42 (ATerm), ATerm s_42 (ATerm))
{
  ATerm m_98 = NULL,n_98 = NULL,o_98 = NULL;
  m_98 = t;
  l_98 :
  if(match_cons(m_98, sym_Scope_2))
    {
      n_98 = ATgetArgument(m_98, 0);
      o_98 = ATgetArgument(m_98, 1);
      {
        ATerm r_98 = NULL;
        t = not_null(n_98);
        {
          ATerm t_98 = NULL;
          t = r_42(t);
          r_98 = t;
          t = not_null(o_98);
          t = s_42(t);
          t_98 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(r_98), not_null(t_98));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm m_43 (ATerm), ATerm n_43 (ATerm), ATerm o_43 (ATerm))
{
  ATerm p_11 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, o_43, m_43);
      PopChoice();
    }
  else
    {
      t = p_11;
      t = DynamicRules_1(t, m_43);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm e_99 = NULL,f_99 = NULL;
  e_99 = t;
  d_99 :
  if(match_cons(e_99, sym_DynamicRules_1))
    {
      f_99 = ATgetArgument(e_99, 0);
      t = not_null(f_99);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm m_99 = NULL,n_99 = NULL,o_99 = NULL,q_99 = NULL,r_99 = NULL,s_99 = NULL;
  n_99 = t;
  k_99 :
  if(match_cons(n_99, sym_Scope_2))
    {
      o_99 = ATgetArgument(n_99, 0);
      m_99 = ATgetArgument(n_99, 1);
      t = not_null(o_99);
    }
  else
    {
      if(match_cons(n_99, sym_LRule_1))
        {
          o_99 = ATgetArgument(n_99, 0);
          l_99 :
          if(match_cons(o_99, sym_Rule_3))
            {
              q_99 = ATgetArgument(o_99, 0);
              r_99 = ATgetArgument(o_99, 1);
              s_99 = ATgetArgument(o_99, 2);
              t = not_null(q_99);
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
  ATerm c_100 = NULL,d_100 = NULL;
  c_100 = t;
  b_100 :
  if(match_cons(c_100, sym_Var_1))
    {
      d_100 = ATgetArgument(c_100, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_100), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm m_100 = NULL,n_100 = NULL,o_100 = NULL,p_100 = NULL,q_100 = NULL;
  m_100 = t;
  j_100 :
  if(match_cons(m_100, sym_TCons_2))
    {
      n_100 = ATgetArgument(m_100, 0);
      o_100 = ATgetArgument(m_100, 1);
      k_100 :
      if(match_cons(o_100, sym_TCons_2))
        {
          p_100 = ATgetArgument(o_100, 0);
          q_100 = ATgetArgument(o_100, 1);
          l_100 :
          if(match_cons(q_100, sym_TNil_0))
            {
              t = not_null(n_100);
              {
                ATerm v_100 (ATerm t)
                {
                  ATerm q_11 = t;
                  if(PushChoice()==0)
                    {
                      ATerm t_100 = NULL;
                      t_100 = t;
                      i_100 :
                      if(match_cons(t_100, sym_Nil_0))
                        t = not_null(p_100);
                      else
                        _fail(t);
                      PopChoice();
                    }
                  else
                    {
                      t = q_11;
                      {
                        ATerm r_11 = t;
                        if(PushChoice()==0)
                          {
                            ATerm l_4 (ATerm t)
                            {
                              t = not_null(p_100);
                              return(t);
                            }
                            t = HdMember_1(t, l_4);
                            t = v_100(t);
                            PopChoice();
                          }
                        else
                          {
                            t = r_11;
                            t = Cons_2(t, _id, v_100);
                          }
                      }
                    }
                  return(t);
                }
                t = v_100(t);
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
ATerm foldr_3 (ATerm t, ATerm m_52 (ATerm), ATerm n_52 (ATerm), ATerm o_52 (ATerm))
{
  ATerm l_101 (ATerm t)
  {
    ATerm c_101 = NULL,d_101 = NULL,e_101 = NULL;
    c_101 = t;
    b_101 :
    if(match_cons(c_101, sym_Nil_0))
      t = m_52(t);
    else
      {
        if(match_cons(c_101, sym_Cons_2))
          {
            d_101 = ATgetArgument(c_101, 0);
            e_101 = ATgetArgument(c_101, 1);
            {
              ATerm h_101 = NULL;
              t = not_null(d_101);
              {
                ATerm j_101 = NULL;
                t = o_52(t);
                h_101 = t;
                t = not_null(e_101);
                t = l_101(t);
                j_101 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_101), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_101), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = n_52(t);
              }
            }
          }
        else
          _fail(t);
      }
    return(t);
  }
  t = l_101(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm d_54 (ATerm), ATerm e_54 (ATerm), ATerm f_54 (ATerm))
{
  ATerm w_101 = NULL;
  ATerm y_101 = NULL;
  w_101 = t;
  {
    ATerm z_101 = NULL;
    ATerm b_102 = NULL,c_102 = NULL,d_102 = NULL,e_102 = NULL,f_102 = NULL;
    t = not_null(w_101);
    z_101 = t;
    t = SSL_explode_term(not_null(z_101));
    b_102 = t;
    t_101 :
    if(match_cons(b_102, sym_TCons_2))
      {
        c_102 = ATgetArgument(b_102, 0);
        d_102 = ATgetArgument(b_102, 1);
        u_101 :
        if(match_cons(d_102, sym_TCons_2))
          {
            e_102 = ATgetArgument(d_102, 0);
            f_102 = ATgetArgument(d_102, 1);
            v_101 :
            if(match_cons(f_102, sym_TNil_0))
              {
                if(y_101 != NULL && y_101 != e_102)
                  _fail(e_102);
                else
                  y_101 = e_102;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(y_101);
    t = foldr_3(t, d_54, e_54, f_54);
  }
  return(t);
}
ATerm collect_kids_1 (ATerm t, ATerm l_54 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = crush_3(t, m_4, union_0, l_54);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm t_53 (ATerm))
{
  ATerm m_102 = NULL,n_102 = NULL,o_102 = NULL;
  m_102 = t;
  l_102 :
  if(match_cons(m_102, sym_Cons_2))
    {
      n_102 = ATgetArgument(m_102, 0);
      o_102 = ATgetArgument(m_102, 1);
      t = t_53(t);
      {
        ATerm n_4 (ATerm t)
        {
          ATerm r_102 = NULL;
          r_102 = t;
          if(n_102 != NULL && n_102 != r_102)
            _fail(r_102);
          else
            n_102 = r_102;
          return(t);
        }
        t = fetch_1(t, n_4);
      }
      t = not_null(o_102);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm z_102 = NULL,a_103 = NULL,b_103 = NULL,c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL;
  z_102 = t;
  v_102 :
  if(match_cons(z_102, sym_TCons_2))
    {
      a_103 = ATgetArgument(z_102, 0);
      b_103 = ATgetArgument(z_102, 1);
      w_102 :
      if(match_cons(b_103, sym_TCons_2))
        {
          c_103 = ATgetArgument(b_103, 0);
          f_103 = ATgetArgument(b_103, 1);
          x_102 :
          if(match_cons(c_103, sym_Cons_2))
            {
              d_103 = ATgetArgument(c_103, 0);
              e_103 = ATgetArgument(c_103, 1);
              y_102 :
              if(match_cons(f_103, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_103), not_null(a_103)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_103), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm a_104 = NULL,b_104 = NULL,c_104 = NULL,d_104 = NULL,e_104 = NULL,f_104 = NULL,g_104 = NULL;
  a_104 = t;
  w_103 :
  if(match_cons(a_104, sym_Cons_2))
    {
      b_104 = ATgetArgument(a_104, 0);
      g_104 = ATgetArgument(a_104, 1);
      x_103 :
      if(match_cons(b_104, sym_TCons_2))
        {
          c_104 = ATgetArgument(b_104, 0);
          d_104 = ATgetArgument(b_104, 1);
          y_103 :
          if(match_cons(d_104, sym_TCons_2))
            {
              e_104 = ATgetArgument(d_104, 0);
              f_104 = ATgetArgument(d_104, 1);
              z_103 :
              if(match_cons(f_104, sym_TNil_0))
                {
                  ATerm k_104 = NULL,l_104 = NULL,t_104 = NULL,b_105 = NULL;
                  ATerm s_11;
                  s_11 = t;
                  {
                    ATerm m_104 = NULL;
                    ATerm o_104 = NULL,p_104 = NULL,q_104 = NULL,r_104 = NULL,s_104 = NULL;
                    t = not_null(e_104);
                    m_104 = t;
                    t = SSL_explode_term(not_null(m_104));
                    o_104 = t;
                    n_103 :
                    if(match_cons(o_104, sym_TCons_2))
                      {
                        p_104 = ATgetArgument(o_104, 0);
                        q_104 = ATgetArgument(o_104, 1);
                        o_103 :
                        if(match_cons(q_104, sym_TCons_2))
                          {
                            r_104 = ATgetArgument(q_104, 0);
                            s_104 = ATgetArgument(q_104, 1);
                            p_103 :
                            if(match_cons(s_104, sym_TNil_0))
                              {
                                if(k_104 != NULL && k_104 != p_104)
                                  _fail(p_104);
                                else
                                  k_104 = p_104;
                                if(l_104 != NULL && l_104 != r_104)
                                  _fail(r_104);
                                else
                                  l_104 = r_104;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = s_11;
                  {
                    ATerm u_104 = NULL;
                    ATerm w_104 = NULL,x_104 = NULL,y_104 = NULL,z_104 = NULL,a_105 = NULL;
                    t = not_null(c_104);
                    u_104 = t;
                    t = SSL_explode_term(not_null(u_104));
                    w_104 = t;
                    s_103 :
                    if(match_cons(w_104, sym_TCons_2))
                      {
                        x_104 = ATgetArgument(w_104, 0);
                        y_104 = ATgetArgument(w_104, 1);
                        t_103 :
                        if(match_cons(y_104, sym_TCons_2))
                          {
                            z_104 = ATgetArgument(y_104, 0);
                            a_105 = ATgetArgument(y_104, 1);
                            u_103 :
                            if(match_cons(a_105, sym_TNil_0))
                              {
                                if(k_104 != NULL && k_104 != x_104)
                                  _fail(x_104);
                                else
                                  k_104 = x_104;
                                if(t_104 != NULL && t_104 != z_104)
                                  _fail(z_104);
                                else
                                  t_104 = z_104;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_104), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_104), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    b_105 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_105), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_104), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm p_105 = NULL,q_105 = NULL,r_105 = NULL,t_105 = NULL,u_105 = NULL,v_105 = NULL,w_105 = NULL;
  p_105 = t;
  l_105 :
  if(match_cons(p_105, sym_Cons_2))
    {
      q_105 = ATgetArgument(p_105, 0);
      w_105 = ATgetArgument(p_105, 1);
      m_105 :
      if(match_cons(q_105, sym_TCons_2))
        {
          r_105 = ATgetArgument(q_105, 0);
          t_105 = ATgetArgument(q_105, 1);
          n_105 :
          if(match_cons(t_105, sym_TCons_2))
            {
              u_105 = ATgetArgument(t_105, 0);
              v_105 = ATgetArgument(t_105, 1);
              o_105 :
              if(match_cons(v_105, sym_TNil_0))
                {
                  ATerm y_105 = NULL;
                  if(r_105 != NULL && r_105 != u_105)
                    _fail(u_105);
                  else
                    r_105 = u_105;
                  if(y_105 != NULL && y_105 != w_105)
                    _fail(w_105);
                  else
                    y_105 = w_105;
                  t = not_null(y_105);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm q_63 (ATerm), ATerm r_63 (ATerm))
{
  ATerm a_106 (ATerm t)
  {
    ATerm t_11 = t;
    if(PushChoice()==0)
      {
        t = q_63(t);
        PopChoice();
      }
    else
      {
        t = t_11;
        t = r_63(t);
        t = a_106(t);
      }
    return(t);
  }
  t = a_106(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm t_63 (ATerm), ATerm u_63 (ATerm), ATerm v_63 (ATerm))
{
  t = t_63(t);
  t = while_not_2(t, u_63, v_63);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm u_11 = t;
  if(PushChoice()==0)
    {
      ATerm o_4 (ATerm t)
      {
        ATerm k_106 = NULL;
        k_106 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_106), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm q_4 (ATerm t)
      {
        ATerm s_4 (ATerm t)
        {
          ATerm t_4 (ATerm t)
          {
            ATerm n_106 = NULL;
            n_106 = t;
            c_106 :
            if(!(match_cons(n_106, sym_Nil_0)))
              _fail(t);
            return(t);
          }
          ATerm v_4 (ATerm t)
          {
            ATerm o_106 = NULL;
            o_106 = t;
            d_106 :
            if(!(match_cons(o_106, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, t_4, v_4);
          return(t);
        }
        t = TCons_2(t, _id, s_4);
        return(t);
      }
      ATerm r_4 (ATerm t)
      {
        ATerm v_11 = t;
        if(PushChoice()==0)
          {
            ATerm w_4 (ATerm t)
            {
              ATerm x_4 (ATerm t)
              {
                ATerm w_11 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = w_11;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              ATerm y_4 (ATerm t)
              {
                ATerm p_106 = NULL;
                p_106 = t;
                e_106 :
                if(!(match_cons(p_106, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, x_4, y_4);
              return(t);
            }
            t = TCons_2(t, _id, w_4);
            PopChoice();
          }
        else
          {
            t = v_11;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, o_4, q_4, r_4);
      PopChoice();
    }
  else
    {
      t = u_11;
      {
        ATerm q_106 = NULL,r_106 = NULL,s_106 = NULL,t_106 = NULL,u_106 = NULL;
        q_106 = t;
        h_106 :
        if(match_cons(q_106, sym_TCons_2))
          {
            r_106 = ATgetArgument(q_106, 0);
            s_106 = ATgetArgument(q_106, 1);
            i_106 :
            if(match_cons(s_106, sym_TCons_2))
              {
                t_106 = ATgetArgument(s_106, 0);
                u_106 = ATgetArgument(s_106, 1);
                j_106 :
                if(match_cons(u_106, sym_TNil_0))
                  {
                    t = not_null(r_106);
                    {
                      ATerm a_107 (ATerm t)
                      {
                        ATerm x_11 = t;
                        if(PushChoice()==0)
                          {
                            ATerm x_106 = NULL;
                            x_106 = t;
                            g_106 :
                            if(!(match_cons(x_106, sym_Nil_0)))
                              _fail(t);
                            PopChoice();
                          }
                        else
                          {
                            t = x_11;
                            {
                              ATerm y_11 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm z_4 (ATerm t)
                                  {
                                    t = not_null(t_106);
                                    return(t);
                                  }
                                  t = HdMember_1(t, z_4);
                                  t = a_107(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = y_11;
                                  t = Cons_2(t, _id, a_107);
                                }
                            }
                          }
                        return(t);
                      }
                      t = a_107(t);
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
ATerm free_vars_3 (ATerm t, ATerm s_44 (ATerm), ATerm t_44 (ATerm), ATerm u_44 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm e_107 (ATerm t)
  {
    ATerm z_11 = t;
    if(PushChoice()==0)
      {
        t = s_44(t);
        PopChoice();
      }
    else
      {
        t = z_11;
        {
          ATerm a_12 = t;
          if(PushChoice()==0)
            {
              ATerm c_107 = NULL;
              ATerm b_12;
              b_12 = t;
              {
                ATerm d_107 = NULL;
                t = t_44(t);
                d_107 = t;
                if(c_107 != NULL && c_107 != d_107)
                  _fail(d_107);
                else
                  c_107 = d_107;
              }
              t = b_12;
              {
                ATerm a_5 (ATerm t)
                {
                  ATerm c_5 (ATerm t)
                  {
                    t = not_null(c_107);
                    return(t);
                  }
                  t = split_2(t, e_107, c_5);
                  t = diff_0(t);
                  return(t);
                }
                ATerm b_5 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = u_44(t, a_5, e_107, b_5);
                t = collect_kids_1(t, _id);
              }
              PopChoice();
            }
          else
            {
              t = a_12;
              t = collect_kids_1(t, e_107);
            }
        }
      }
    return(t);
  }
  t = e_107(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm c_12 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = c_12;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, d_5, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm k_107 = NULL,l_107 = NULL,m_107 = NULL,n_107 = NULL,o_107 = NULL;
  k_107 = t;
  i_107 :
  if(match_cons(k_107, sym_LRule_1))
    {
      l_107 = ATgetArgument(k_107, 0);
      j_107 :
      if(match_cons(l_107, sym_Rule_3))
        {
          m_107 = ATgetArgument(l_107, 0);
          n_107 = ATgetArgument(l_107, 1);
          o_107 = ATgetArgument(l_107, 2);
          {
            ATerm s_107 = NULL;
            t = not_null(m_107);
            t = tvars_0(t);
            s_107 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_107), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(m_107), not_null(n_107), not_null(o_107))));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm a_60 (ATerm))
{
  ATerm w_107 (ATerm t)
  {
    t = _all(t, w_107);
    t = a_60(t);
    return(t);
  }
  t = w_107(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm g_12 = t;
    if(PushChoice()==0)
      {
        ATerm h_12 = t;
        if(PushChoice()==0)
          {
            t = DefLRule_0(t);
            PopChoice();
          }
        else
          {
            t = h_12;
            t = DefScopeDefault_0(t);
          }
        PopChoice();
      }
    else
      t = g_12;
    return(t);
  }
  t = bottomup_1(t, e_5);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm z_107 = NULL,a_108 = NULL;
  z_107 = t;
  y_107 :
  if(match_cons(z_107, sym_Var_1))
    {
      a_108 = ATgetArgument(z_107, 0);
      t = not_null(a_108);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm i_108 = NULL,j_108 = NULL,k_108 = NULL,l_108 = NULL,m_108 = NULL,n_108 = NULL,o_108 = NULL;
  i_108 = t;
  e_108 :
  if(match_cons(i_108, sym_TCons_2))
    {
      j_108 = ATgetArgument(i_108, 0);
      k_108 = ATgetArgument(i_108, 1);
      f_108 :
      if(match_cons(k_108, sym_TCons_2))
        {
          l_108 = ATgetArgument(k_108, 0);
          o_108 = ATgetArgument(k_108, 1);
          g_108 :
          if(match_cons(l_108, sym_Cons_2))
            {
              m_108 = ATgetArgument(l_108, 0);
              n_108 = ATgetArgument(l_108, 1);
              h_108 :
              if(match_cons(o_108, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_108), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_108), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm a_109 = NULL,b_109 = NULL,c_109 = NULL,d_109 = NULL,e_109 = NULL,f_109 = NULL,g_109 = NULL,h_109 = NULL,i_109 = NULL,j_109 = NULL,k_109 = NULL;
  a_109 = t;
  t_108 :
  if(match_cons(a_109, sym_TCons_2))
    {
      b_109 = ATgetArgument(a_109, 0);
      c_109 = ATgetArgument(a_109, 1);
      u_108 :
      if(match_cons(c_109, sym_TCons_2))
        {
          d_109 = ATgetArgument(c_109, 0);
          k_109 = ATgetArgument(c_109, 1);
          v_108 :
          if(match_cons(d_109, sym_Cons_2))
            {
              e_109 = ATgetArgument(d_109, 0);
              j_109 = ATgetArgument(d_109, 1);
              w_108 :
              if(match_cons(e_109, sym_TCons_2))
                {
                  f_109 = ATgetArgument(e_109, 0);
                  g_109 = ATgetArgument(e_109, 1);
                  x_108 :
                  if(match_cons(g_109, sym_TCons_2))
                    {
                      h_109 = ATgetArgument(g_109, 0);
                      i_109 = ATgetArgument(g_109, 1);
                      y_108 :
                      if(match_cons(i_109, sym_TNil_0))
                        {
                          z_108 :
                          if(match_cons(k_109, sym_TNil_0))
                            {
                              ATerm m_109 = NULL;
                              if(b_109 != NULL && b_109 != f_109)
                                _fail(f_109);
                              else
                                b_109 = f_109;
                              if(m_109 != NULL && m_109 != h_109)
                                _fail(h_109);
                              else
                                m_109 = h_109;
                              t = not_null(m_109);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm i_12 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = i_12;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm o_46 (ATerm), ATerm p_46 (ATerm))
{
  ATerm s_109 = NULL;
  ATerm u_109 = NULL,v_109 = NULL;
  s_109 = t;
  {
    ATerm w_109 = NULL;
    t = not_null(s_109);
    {
      ATerm x_109 = NULL;
      t = o_46(t);
      w_109 = t;
      if(u_109 != NULL && u_109 != w_109)
        _fail(w_109);
      else
        u_109 = w_109;
      t = p_46(t);
      x_109 = t;
      if(v_109 != NULL && v_109 != x_109)
        _fail(x_109);
      else
        v_109 = x_109;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_109), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_109), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm z_61 (ATerm))
{
  ATerm b_110 (ATerm t)
  {
    ATerm j_12 = t;
    if(PushChoice()==0)
      {
        t = z_61(t);
        PopChoice();
      }
    else
      {
        t = j_12;
        t = _all(t, b_110);
      }
    return(t);
  }
  t = b_110(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm g_110 = NULL,h_110 = NULL,i_110 = NULL,j_110 = NULL,k_110 = NULL;
  g_110 = t;
  d_110 :
  if(match_cons(g_110, sym_TCons_2))
    {
      h_110 = ATgetArgument(g_110, 0);
      i_110 = ATgetArgument(g_110, 1);
      e_110 :
      if(match_cons(i_110, sym_TCons_2))
        {
          j_110 = ATgetArgument(i_110, 0);
          k_110 = ATgetArgument(i_110, 1);
          f_110 :
          if(match_cons(k_110, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_110), not_null(j_110));
          else
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
  ATerm u_110 = NULL,v_110 = NULL,w_110 = NULL,x_110 = NULL,y_110 = NULL,z_110 = NULL,a_111 = NULL,b_111 = NULL,c_111 = NULL;
  u_110 = t;
  p_110 :
  if(match_cons(u_110, sym_TCons_2))
    {
      v_110 = ATgetArgument(u_110, 0);
      y_110 = ATgetArgument(u_110, 1);
      q_110 :
      if(match_cons(v_110, sym_Cons_2))
        {
          w_110 = ATgetArgument(v_110, 0);
          x_110 = ATgetArgument(v_110, 1);
          r_110 :
          if(match_cons(y_110, sym_TCons_2))
            {
              z_110 = ATgetArgument(y_110, 0);
              c_111 = ATgetArgument(y_110, 1);
              s_110 :
              if(match_cons(z_110, sym_Cons_2))
                {
                  a_111 = ATgetArgument(z_110, 0);
                  b_111 = ATgetArgument(z_110, 1);
                  t_110 :
                  if(match_cons(c_111, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(w_110), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_111), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(x_110), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_111), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm o_111 = NULL,p_111 = NULL,q_111 = NULL,r_111 = NULL,s_111 = NULL;
  o_111 = t;
  j_111 :
  if(match_cons(o_111, sym_TCons_2))
    {
      p_111 = ATgetArgument(o_111, 0);
      q_111 = ATgetArgument(o_111, 1);
      k_111 :
      if(match_cons(p_111, sym_Nil_0))
        {
          l_111 :
          if(match_cons(q_111, sym_TCons_2))
            {
              r_111 = ATgetArgument(q_111, 0);
              s_111 = ATgetArgument(q_111, 1);
              m_111 :
              if(match_cons(r_111, sym_Nil_0))
                {
                  n_111 :
                  if(match_cons(s_111, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm u_55 (ATerm), ATerm v_55 (ATerm), ATerm w_55 (ATerm), ATerm x_55 (ATerm))
{
  ATerm w_111 (ATerm t)
  {
    ATerm k_12 = t;
    if(PushChoice()==0)
      {
        t = u_55(t);
        PopChoice();
      }
    else
      {
        t = k_12;
        t = v_55(t);
        {
          ATerm f_5 (ATerm t)
          {
            ATerm g_5 (ATerm t)
            {
              ATerm v_111 = NULL;
              v_111 = t;
              u_111 :
              if(!(match_cons(v_111, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, w_111, g_5);
            return(t);
          }
          t = TCons_2(t, x_55, f_5);
          t = w_55(t);
        }
      }
    return(t);
  }
  t = w_111(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm z_55 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, z_55);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm e_112 = NULL,f_112 = NULL,g_112 = NULL,h_112 = NULL,i_112 = NULL,j_112 = NULL,k_112 = NULL;
  e_112 = t;
  a_112 :
  if(match_cons(e_112, sym_TCons_2))
    {
      f_112 = ATgetArgument(e_112, 0);
      g_112 = ATgetArgument(e_112, 1);
      b_112 :
      if(match_cons(g_112, sym_TCons_2))
        {
          h_112 = ATgetArgument(g_112, 0);
          i_112 = ATgetArgument(g_112, 1);
          c_112 :
          if(match_cons(i_112, sym_TNil_0))
            {
              ATerm m_112 = NULL;
              if(m_112 != NULL && m_112 != h_112)
                _fail(h_112);
              else
                m_112 = h_112;
            }
          else
            {
              if(match_cons(i_112, sym_TCons_2))
                {
                  j_112 = ATgetArgument(i_112, 0);
                  k_112 = ATgetArgument(i_112, 1);
                  d_112 :
                  if(match_cons(k_112, sym_TNil_0))
                    {
                      ATerm s_112 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_112), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_112), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      s_112 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_112), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_112), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm q_46 (ATerm), ATerm r_46 (ATerm))
{
  ATerm b_113 = NULL,c_113 = NULL,d_113 = NULL,e_113 = NULL,f_113 = NULL;
  t = subs_args_0(t);
  b_113 = t;
  y_112 :
  if(match_cons(b_113, sym_TCons_2))
    {
      c_113 = ATgetArgument(b_113, 0);
      d_113 = ATgetArgument(b_113, 1);
      z_112 :
      if(match_cons(d_113, sym_TCons_2))
        {
          e_113 = ATgetArgument(d_113, 0);
          f_113 = ATgetArgument(d_113, 1);
          a_113 :
          if(match_cons(f_113, sym_TNil_0))
            {
              t = not_null(e_113);
              {
                ATerm h_5 (ATerm t)
                {
                  ATerm i_5 (ATerm t)
                  {
                    t = not_null(c_113);
                    return(t);
                  }
                  t = SubsVar_2(t, q_46, i_5);
                  t = r_46(t);
                  return(t);
                }
                t = alltd_1(t, h_5);
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
ATerm substitute_1 (ATerm t, ATerm s_46 (ATerm))
{
  t = substitute_2(t, s_46, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm OLName_0 (ATerm t)
{
  ATerm m_113 = NULL,n_113 = NULL,o_113 = NULL,p_113 = NULL;
  m_113 = t;
  k_113 :
  if(match_cons(m_113, sym_Overlay_3))
    {
      n_113 = ATgetArgument(m_113, 0);
      o_113 = ATgetArgument(m_113, 1);
      p_113 = ATgetArgument(m_113, 2);
      l_113 :
      if(match_cons(o_113, sym_Nil_0))
        t = not_null(n_113);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm OpName_0 (ATerm t)
{
  ATerm w_113 = NULL,x_113 = NULL,y_113 = NULL,z_113 = NULL;
  w_113 = t;
  u_113 :
  if(match_cons(w_113, sym_OpDecl_2))
    {
      x_113 = ATgetArgument(w_113, 0);
      y_113 = ATgetArgument(w_113, 1);
      v_113 :
      if(match_cons(y_113, sym_ConstType_1))
        {
          z_113 = ATgetArgument(y_113, 0);
          t = not_null(x_113);
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
  ATerm e_114 = NULL,f_114 = NULL;
  e_114 = t;
  d_114 :
  if(match_cons(e_114, sym_Operations_1))
    {
      f_114 = ATgetArgument(e_114, 0);
      t = not_null(f_114);
      t = filter_1(t, OpName_0);
    }
  else
    _fail(t);
  return(t);
}
ATerm Names_0 (ATerm t)
{
  ATerm l_114 = NULL,m_114 = NULL;
  l_114 = t;
  k_114 :
  if(match_cons(l_114, sym_Signature_1))
    {
      m_114 = ATgetArgument(l_114, 0);
      t = not_null(m_114);
      t = filter_1(t, OpNames_0);
      t = concat_0(t);
    }
  else
    {
      if(match_cons(l_114, sym_Overlays_1))
        {
          m_114 = ATgetArgument(l_114, 0);
          t = not_null(m_114);
          t = filter_1(t, OLName_0);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm t_114 = NULL,u_114 = NULL,v_114 = NULL;
  t_114 = t;
  s_114 :
  if(match_cons(t_114, sym_Cons_2))
    {
      u_114 = ATgetArgument(t_114, 0);
      v_114 = ATgetArgument(t_114, 1);
      t = not_null(v_114);
    }
  else
    _fail(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm q_51 (ATerm))
{
  ATerm b_115 (ATerm t)
  {
    ATerm l_12 = t;
    if(PushChoice()==0)
      {
        ATerm a_115 = NULL;
        a_115 = t;
        z_114 :
        if(!(match_cons(a_115, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = l_12;
        {
          ATerm m_12 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, q_51, b_115);
              PopChoice();
            }
          else
            {
              t = m_12;
              t = Tl_0(t);
              t = b_115(t);
            }
        }
      }
    return(t);
  }
  t = b_115(t);
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
  ATerm j_5 (ATerm t)
  {
    t = const_names_0(t);
    {
      ATerm k_5 (ATerm t)
      {
        ATerm l_5 (ATerm t)
        {
          ATerm d_115 = NULL;
          d_115 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(d_115), (ATerm) ATmakeAppl(sym_Nil_0));
          return(t);
        }
        t = split_2(t, _id, l_5);
        return(t);
      }
      t = map_1(t, k_5);
    }
    return(t);
  }
  t = split_2(t, j_5, _id);
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm MkSpec_0 (ATerm t)
{
  ATerm l_115 = NULL,m_115 = NULL,n_115 = NULL,o_115 = NULL,p_115 = NULL,q_115 = NULL,r_115 = NULL;
  l_115 = t;
  h_115 :
  if(match_cons(l_115, sym_TCons_2))
    {
      m_115 = ATgetArgument(l_115, 0);
      n_115 = ATgetArgument(l_115, 1);
      i_115 :
      if(match_cons(n_115, sym_TCons_2))
        {
          o_115 = ATgetArgument(n_115, 0);
          p_115 = ATgetArgument(n_115, 1);
          j_115 :
          if(match_cons(p_115, sym_TCons_2))
            {
              q_115 = ATgetArgument(p_115, 0);
              r_115 = ATgetArgument(p_115, 1);
              k_115 :
              if(match_cons(r_115, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Operations_1, not_null(m_115)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Overlays_1, not_null(o_115)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(q_115)), (ATerm) ATmakeAppl(sym_Nil_0)))));
              else
                _fail(t);
            }
          else
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
  ATerm a_116 = NULL,c_116 = NULL,d_116 = NULL,e_116 = NULL,f_116 = NULL;
  a_116 = t;
  x_115 :
  if(match_cons(a_116, sym_TCons_2))
    {
      c_116 = ATgetArgument(a_116, 0);
      d_116 = ATgetArgument(a_116, 1);
      y_115 :
      if(match_cons(d_116, sym_TCons_2))
        {
          e_116 = ATgetArgument(d_116, 0);
          f_116 = ATgetArgument(d_116, 1);
          z_115 :
          if(match_cons(f_116, sym_TNil_0))
            {
              t = not_null(c_116);
              {
                ATerm m_5 (ATerm t)
                {
                  t = not_null(e_116);
                  return(t);
                }
                t = at_end_1(t, m_5);
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
  ATerm z_116 = NULL,a_117 = NULL,b_117 = NULL,c_117 = NULL,d_117 = NULL,e_117 = NULL,f_117 = NULL,g_117 = NULL,h_117 = NULL,i_117 = NULL,j_117 = NULL,k_117 = NULL,l_117 = NULL,m_117 = NULL,n_117 = NULL,o_117 = NULL,p_117 = NULL;
  z_116 = t;
  o_116 :
  if(match_cons(z_116, sym_TCons_2))
    {
      a_117 = ATgetArgument(z_116, 0);
      h_117 = ATgetArgument(z_116, 1);
      p_116 :
      if(match_cons(a_117, sym_TCons_2))
        {
          b_117 = ATgetArgument(a_117, 0);
          c_117 = ATgetArgument(a_117, 1);
          q_116 :
          if(match_cons(c_117, sym_TCons_2))
            {
              d_117 = ATgetArgument(c_117, 0);
              e_117 = ATgetArgument(c_117, 1);
              r_116 :
              if(match_cons(e_117, sym_TCons_2))
                {
                  f_117 = ATgetArgument(e_117, 0);
                  g_117 = ATgetArgument(e_117, 1);
                  s_116 :
                  if(match_cons(g_117, sym_TNil_0))
                    {
                      t_116 :
                      if(match_cons(h_117, sym_TCons_2))
                        {
                          i_117 = ATgetArgument(h_117, 0);
                          p_117 = ATgetArgument(h_117, 1);
                          u_116 :
                          if(match_cons(i_117, sym_TCons_2))
                            {
                              j_117 = ATgetArgument(i_117, 0);
                              k_117 = ATgetArgument(i_117, 1);
                              v_116 :
                              if(match_cons(k_117, sym_TCons_2))
                                {
                                  l_117 = ATgetArgument(k_117, 0);
                                  m_117 = ATgetArgument(k_117, 1);
                                  w_116 :
                                  if(match_cons(m_117, sym_TCons_2))
                                    {
                                      n_117 = ATgetArgument(m_117, 0);
                                      o_117 = ATgetArgument(m_117, 1);
                                      x_116 :
                                      if(match_cons(o_117, sym_TNil_0))
                                        {
                                          y_116 :
                                          if(match_cons(p_117, sym_TNil_0))
                                            {
                                              ATerm w_117 = NULL;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_117), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_117), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              {
                                                ATerm y_117 = NULL;
                                                t = conc_0(t);
                                                w_117 = t;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_117), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_117), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                {
                                                  ATerm a_118 = NULL;
                                                  t = conc_0(t);
                                                  y_117 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_117), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_117), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  a_118 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_117), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_117), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_118), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm i_118 = NULL,j_118 = NULL,k_118 = NULL;
  i_118 = t;
  h_118 :
  if(match_cons(i_118, sym_Cons_2))
    {
      j_118 = ATgetArgument(i_118, 0);
      k_118 = ATgetArgument(i_118, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_118), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_118), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm j_52 (ATerm), ATerm k_52 (ATerm))
{
  ATerm t_118 (ATerm t)
  {
    ATerm n_12 = t;
    if(PushChoice()==0)
      {
        ATerm r_118 = NULL;
        r_118 = t;
        p_118 :
        if(match_cons(r_118, sym_Nil_0))
          t = j_52(t);
        else
          _fail(t);
        PopChoice();
      }
    else
      {
        t = n_12;
        t = FoldR_0(t);
        {
          ATerm n_5 (ATerm t)
          {
            ATerm o_5 (ATerm t)
            {
              ATerm s_118 = NULL;
              s_118 = t;
              q_118 :
              if(!(match_cons(s_118, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, t_118, o_5);
            return(t);
          }
          t = TCons_2(t, _id, n_5);
          t = k_52(t);
        }
      }
    return(t);
  }
  t = t_118(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_57 (ATerm))
{
  ATerm y_118 (ATerm t)
  {
    ATerm o_12 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, y_118);
        PopChoice();
      }
    else
      {
        t = o_12;
        {
          ATerm x_118 = NULL;
          x_118 = t;
          w_118 :
          if(match_cons(x_118, sym_Nil_0))
            t = x_57(t);
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = y_118(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_119 = NULL,d_119 = NULL,e_119 = NULL;
  c_119 = t;
  b_119 :
  if(!(match_cons(c_119, sym_Nil_0)))
    {
      if(match_cons(c_119, sym_Cons_2))
        {
          d_119 = ATgetArgument(c_119, 0);
          e_119 = ATgetArgument(c_119, 1);
          t = not_null(d_119);
          {
            ATerm p_5 (ATerm t)
            {
              t = not_null(e_119);
              t = concat_0(t);
              return(t);
            }
            t = at_end_1(t, p_5);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm NormBSIG_0 (ATerm t)
{
  ATerm m_119 = NULL,n_119 = NULL;
  m_119 = t;
  l_119 :
  if(match_cons(m_119, sym_Operations_1))
    {
      n_119 = ATgetArgument(m_119, 0);
      t = not_null(n_119);
    }
  else
    {
      if(match_cons(m_119, sym_Sorts_1))
        {
          n_119 = ATgetArgument(m_119, 0);
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
  ATerm y_119 = NULL,z_119 = NULL;
  y_119 = t;
  x_119 :
  if(match_cons(y_119, sym_Signature_1))
    {
      z_119 = ATgetArgument(y_119, 0);
      {
        ATerm b_120 = NULL;
        t = not_null(z_119);
        t = normalize_sigs_0(t);
        b_120 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_120), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
      }
    }
  else
    {
      if(match_cons(y_119, sym_Strategies_1))
        {
          z_119 = ATgetArgument(y_119, 0);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_119), (ATerm) ATmakeAppl(sym_TNil_0))));
        }
      else
        {
          if(match_cons(y_119, sym_Rules_1))
            {
              z_119 = ATgetArgument(y_119, 0);
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_119), (ATerm) ATmakeAppl(sym_TNil_0))));
            }
          else
            {
              if(match_cons(y_119, sym_Overlays_1))
                {
                  z_119 = ATgetArgument(y_119, 0);
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_119), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
                }
              else
                _fail(t);
            }
        }
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_57 (ATerm))
{
  ATerm n_120 (ATerm t)
  {
    ATerm p_12 = t;
    if(PushChoice()==0)
      {
        ATerm m_120 = NULL;
        m_120 = t;
        l_120 :
        if(!(match_cons(m_120, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = p_12;
        t = Cons_2(t, i_57, n_120);
      }
    return(t);
  }
  t = n_120(t);
  return(t);
}
ATerm BSpecs_0 (ATerm t)
{
  ATerm q_120 = NULL,r_120 = NULL;
  q_120 = t;
  p_120 :
  if(match_cons(q_120, sym_Specification_1))
    {
      r_120 = ATgetArgument(q_120, 0);
      t = not_null(r_120);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm y_59 (ATerm))
{
  ATerm u_120 (ATerm t)
  {
    t = y_59(t);
    t = _all(t, u_120);
    return(t);
  }
  t = u_120(t);
  return(t);
}
ATerm DefineSugar_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm q_12 = t;
    if(PushChoice()==0)
      {
        ATerm x_120 = NULL,y_120 = NULL;
        x_120 = t;
        w_120 :
        if(match_cons(x_120, sym_DefaultVarDec_1))
          {
            y_120 = ATgetArgument(x_120, 0);
            t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(y_120), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))));
          }
        else
          _fail(t);
        PopChoice();
      }
    else
      t = q_12;
    return(t);
  }
  t = topdown_1(t, q_5);
  return(t);
}
ATerm normalize_spec_0 (ATerm t)
{
  t = DefineSugar_0(t);
  t = BSpecs_0(t);
  t = map_1(t, NormBSP_0);
  {
    ATerm r_5 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
      return(t);
    }
    t = foldr_2(t, r_5, Combine_0);
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
    ATerm r_12;
    r_12 = t;
    t = spec_use_def_0(t);
    t = r_12;
    t = ExpandOverlays_0(t);
    t = CheckConstructors_0(t);
    t = RulesToSdefs_0(t);
    t = strename_0(t);
    {
      ATerm s_5 (ATerm t)
      {
        ATerm t_5 (ATerm t)
        {
          ATerm u_5 (ATerm t)
          {
            t = Strategies_1(t, desugar_spec_0);
            return(t);
          }
          ATerm v_5 (ATerm t)
          {
            ATerm c_121 = NULL;
            c_121 = t;
            b_121 :
            if(!(match_cons(c_121, sym_Nil_0)))
              _fail(t);
            return(t);
          }
          t = Cons_2(t, u_5, v_5);
          return(t);
        }
        t = Cons_2(t, _id, t_5);
        return(t);
      }
      t = Specification_1(t, s_5);
    }
  }
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm e_121 = NULL;
  e_121 = t;
  d_121 :
  if(!(match_cons(e_121, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm w_42 (ATerm), ATerm x_42 (ATerm))
{
  ATerm j_121 = NULL,k_121 = NULL,l_121 = NULL;
  j_121 = t;
  i_121 :
  if(match_cons(j_121, sym_TCons_2))
    {
      k_121 = ATgetArgument(j_121, 0);
      l_121 = ATgetArgument(j_121, 1);
      {
        ATerm o_121 = NULL;
        t = not_null(k_121);
        {
          ATerm q_121 = NULL;
          t = w_42(t);
          o_121 = t;
          t = not_null(l_121);
          t = x_42(t);
          q_121 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_121), not_null(q_121));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm x_121 = NULL;
  ATerm s_12;
  s_12 = t;
  {
    ATerm w_5 (ATerm t)
    {
      ATerm y_121 = NULL,z_121 = NULL;
      y_121 = t;
      w_121 :
      if(match_cons(y_121, sym_Program_1))
        {
          z_121 = ATgetArgument(y_121, 0);
          if(x_121 != NULL && x_121 != z_121)
            _fail(z_121);
          else
            x_121 = z_121;
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1(t, w_5);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_121), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = s_12;
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
  ATerm c_122 = NULL;
  c_122 = t;
  t = SSL_exit(not_null(c_122));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm j_122 = NULL,k_122 = NULL,l_122 = NULL,m_122 = NULL,n_122 = NULL;
  j_122 = t;
  g_122 :
  if(match_cons(j_122, sym_TCons_2))
    {
      k_122 = ATgetArgument(j_122, 0);
      l_122 = ATgetArgument(j_122, 1);
      h_122 :
      if(match_cons(l_122, sym_TCons_2))
        {
          m_122 = ATgetArgument(l_122, 0);
          n_122 = ATgetArgument(l_122, 1);
          i_122 :
          if(match_cons(n_122, sym_TNil_0))
            {
              ATerm t_12;
              t_12 = t;
              t = SSL_printnl(not_null(k_122), not_null(m_122));
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
ATerm try_1 (ATerm t, ATerm w_63 (ATerm))
{
  ATerm u_12 = t;
  if(PushChoice()==0)
    {
      t = w_63(t);
      PopChoice();
    }
  else
    t = u_12;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm z_122 = NULL,a_123 = NULL;
  ATerm v_12 = t;
  if(PushChoice()==0)
    {
      ATerm x_5 (ATerm t)
      {
        ATerm w_12 = t;
        if(PushChoice()==0)
          {
            ATerm z_5 (ATerm t)
            {
              ATerm b_123 = NULL;
              b_123 = t;
              r_122 :
              if(!(match_cons(b_123, sym_Silent_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, z_5);
            PopChoice();
            _fail(t);
          }
        else
          t = w_12;
        return(t);
      }
      ATerm y_5 (ATerm t)
      {
        ATerm a_6 (ATerm t)
        {
          ATerm c_123 = NULL;
          c_123 = t;
          s_122 :
          if(!(match_cons(c_123, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, a_6);
        return(t);
      }
      t = TCons_2(t, x_5, y_5);
      {
        ATerm b_6 (ATerm t)
        {
          ATerm d_6 (ATerm t)
          {
            ATerm d_123 = NULL,e_123 = NULL;
            d_123 = t;
            u_122 :
            if(match_cons(d_123, sym_Runtime_1))
              {
                e_123 = ATgetArgument(d_123, 0);
                if(a_123 != NULL && a_123 != e_123)
                  _fail(e_123);
                else
                  a_123 = e_123;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, d_6);
          return(t);
        }
        ATerm c_6 (ATerm t)
        {
          ATerm e_6 (ATerm t)
          {
            ATerm f_123 = NULL;
            f_123 = t;
            v_122 :
            if(!(match_cons(f_123, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, e_6);
          return(t);
        }
        t = TCons_2(t, b_6, c_6);
        {
          ATerm f_6 (ATerm t)
          {
            ATerm h_6 (ATerm t)
            {
              ATerm g_123 = NULL,h_123 = NULL;
              g_123 = t;
              x_122 :
              if(match_cons(g_123, sym_Program_1))
                {
                  h_123 = ATgetArgument(g_123, 0);
                  if(z_122 != NULL && z_122 != h_123)
                    _fail(h_123);
                  else
                    z_122 = h_123;
                }
              else
                _fail(t);
              return(t);
            }
            t = fetch_1(t, h_6);
            return(t);
          }
          ATerm g_6 (ATerm t)
          {
            ATerm i_6 (ATerm t)
            {
              ATerm i_123 = NULL;
              i_123 = t;
              y_122 :
              if(!(match_cons(i_123, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, _id, i_6);
            return(t);
          }
          t = TCons_2(t, f_6, g_6);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_122), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_123), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      PopChoice();
    }
  else
    t = v_12;
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm p_123 = NULL,q_123 = NULL,r_123 = NULL,s_123 = NULL,t_123 = NULL;
  p_123 = t;
  m_123 :
  if(match_cons(p_123, sym_TCons_2))
    {
      q_123 = ATgetArgument(p_123, 0);
      r_123 = ATgetArgument(p_123, 1);
      n_123 :
      if(match_cons(r_123, sym_TCons_2))
        {
          s_123 = ATgetArgument(r_123, 0);
          t_123 = ATgetArgument(r_123, 1);
          o_123 :
          if(match_cons(t_123, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(q_123), not_null(s_123));
          else
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
  ATerm b_124 = NULL,c_124 = NULL,d_124 = NULL,e_124 = NULL,f_124 = NULL;
  b_124 = t;
  y_123 :
  if(match_cons(b_124, sym_TCons_2))
    {
      c_124 = ATgetArgument(b_124, 0);
      d_124 = ATgetArgument(b_124, 1);
      z_123 :
      if(match_cons(d_124, sym_TCons_2))
        {
          e_124 = ATgetArgument(d_124, 0);
          f_124 = ATgetArgument(d_124, 1);
          a_124 :
          if(match_cons(f_124, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(c_124), not_null(e_124));
          else
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
  ATerm r_124 = NULL;
  ATerm x_12;
  x_12 = t;
  {
    ATerm j_6 (ATerm t)
    {
      ATerm y_12 = t;
      if(PushChoice()==0)
        {
          ATerm l_6 (ATerm t)
          {
            ATerm s_124 = NULL,t_124 = NULL;
            s_124 = t;
            k_124 :
            if(match_cons(s_124, sym_Output_1))
              {
                t_124 = ATgetArgument(s_124, 0);
                if(r_124 != NULL && r_124 != t_124)
                  _fail(t_124);
                else
                  r_124 = t_124;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, l_6);
          PopChoice();
        }
      else
        {
          t = y_12;
          {
            ATerm u_124 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            u_124 = t;
            if(r_124 != NULL && r_124 != u_124)
              _fail(u_124);
            else
              r_124 = u_124;
          }
        }
      return(t);
    }
    ATerm k_6 (ATerm t)
    {
      ATerm m_6 (ATerm t)
      {
        ATerm v_124 = NULL;
        v_124 = t;
        m_124 :
        if(!(match_cons(v_124, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, _id, m_6);
      return(t);
    }
    t = TCons_2(t, j_6, k_6);
  }
  t = x_12;
  {
    ATerm n_6 (ATerm t)
    {
      ATerm o_6 (ATerm t)
      {
        ATerm q_6 (ATerm t)
        {
          t = not_null(r_124);
          return(t);
        }
        t = split_2(t, q_6, _id);
        return(t);
      }
      ATerm p_6 (ATerm t)
      {
        ATerm w_124 = NULL;
        w_124 = t;
        n_124 :
        if(!(match_cons(w_124, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, o_6, p_6);
      return(t);
    }
    t = TCons_2(t, _id, n_6);
    {
      ATerm z_12 = t;
      if(PushChoice()==0)
        {
          ATerm r_6 (ATerm t)
          {
            ATerm t_6 (ATerm t)
            {
              ATerm x_124 = NULL;
              x_124 = t;
              o_124 :
              if(!(match_cons(x_124, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, t_6);
            return(t);
          }
          ATerm s_6 (ATerm t)
          {
            ATerm u_6 (ATerm t)
            {
              ATerm y_124 = NULL;
              y_124 = t;
              p_124 :
              if(!(match_cons(y_124, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, WriteToBinaryFile_0, u_6);
            return(t);
          }
          t = TCons_2(t, r_6, s_6);
          PopChoice();
        }
      else
        {
          t = z_12;
          {
            ATerm v_6 (ATerm t)
            {
              ATerm w_6 (ATerm t)
              {
                ATerm z_124 = NULL;
                z_124 = t;
                q_124 :
                if(!(match_cons(z_124, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, WriteToTextFile_0, w_6);
              return(t);
            }
            t = TCons_2(t, _id, v_6);
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
ATerm apply_strategy_1 (ATerm t, ATerm y_48 (ATerm))
{
  ATerm h_125 = NULL,j_125 = NULL,k_125 = NULL,l_125 = NULL,m_125 = NULL,n_125 = NULL;
  ATerm a_13;
  a_13 = t;
  t = dtime_0(t);
  t = a_13;
  t = y_48(t);
  {
    ATerm b_13;
    b_13 = t;
    {
      ATerm i_125 = NULL;
      t = dtime_0(t);
      i_125 = t;
      if(h_125 != NULL && h_125 != i_125)
        _fail(i_125);
      else
        h_125 = i_125;
    }
    t = b_13;
    j_125 = t;
    e_125 :
    if(match_cons(j_125, sym_TCons_2))
      {
        k_125 = ATgetArgument(j_125, 0);
        l_125 = ATgetArgument(j_125, 1);
        f_125 :
        if(match_cons(l_125, sym_TCons_2))
          {
            m_125 = ATgetArgument(l_125, 0);
            n_125 = ATgetArgument(l_125, 1);
            g_125 :
            if(match_cons(n_125, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(h_125)), not_null(k_125)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_125), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm t_125 = NULL;
  t_125 = t;
  t = SSL_ReadFromFile(not_null(t_125));
  return(t);
}
ATerm split_2 (ATerm t, ATerm y_50 (ATerm), ATerm z_50 (ATerm))
{
  ATerm z_125 = NULL;
  ATerm c_126 = NULL;
  z_125 = t;
  {
    ATerm e_126 = NULL;
    t = y_50(t);
    c_126 = t;
    t = not_null(z_125);
    t = z_50(t);
    e_126 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_126), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_126), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm m_126 = NULL;
  ATerm c_13;
  c_13 = t;
  {
    ATerm d_13 = t;
    if(PushChoice()==0)
      {
        ATerm x_6 (ATerm t)
        {
          ATerm n_126 = NULL,o_126 = NULL;
          n_126 = t;
          k_126 :
          if(match_cons(n_126, sym_Input_1))
            {
              o_126 = ATgetArgument(n_126, 0);
              if(m_126 != NULL && m_126 != o_126)
                _fail(o_126);
              else
                m_126 = o_126;
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1(t, x_6);
        PopChoice();
      }
    else
      {
        t = d_13;
        {
          ATerm p_126 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          p_126 = t;
          if(m_126 != NULL && m_126 != p_126)
            _fail(p_126);
          else
            m_126 = p_126;
        }
      }
  }
  t = c_13;
  {
    ATerm y_6 (ATerm t)
    {
      t = not_null(m_126);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_126 = NULL;
  t_126 = t;
  s_126 :
  if(!(match_cons(t_126, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm f_38 (ATerm))
{
  ATerm x_126 = NULL,y_126 = NULL;
  x_126 = t;
  w_126 :
  if(match_cons(x_126, sym_Undefined_1))
    {
      y_126 = ATgetArgument(x_126, 0);
      {
        ATerm a_127 = NULL;
        t = not_null(y_126);
        t = f_38(t);
        a_127 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_127));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_127 = NULL;
  f_127 = t;
  e_127 :
  if(!(match_cons(f_127, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm r_57 (ATerm))
{
  ATerm g_127 (ATerm t)
  {
    ATerm e_13 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, r_57, _id);
        PopChoice();
      }
    else
      {
        t = e_13;
        t = Cons_2(t, _id, g_127);
      }
    return(t);
  }
  t = g_127(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm c_48 (ATerm))
{
  t = fetch_1(t, c_48);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm x_48 (ATerm))
{
  ATerm z_6 (ATerm t)
  {
    ATerm f_13 = t;
    if(PushChoice()==0)
      {
        ATerm j_127 = NULL;
        j_127 = t;
        h_127 :
        if(!(match_cons(j_127, sym_Help_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = f_13;
        {
          ATerm g_13 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = g_13;
              {
                ATerm k_127 = NULL;
                k_127 = t;
                i_127 :
                if(!(match_cons(k_127, sym_Version_0)))
                  _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, z_6);
  t = x_48(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_127 = NULL,r_127 = NULL,s_127 = NULL;
  ATerm h_13;
  h_13 = t;
  {
    ATerm t_127 = NULL,u_127 = NULL,v_127 = NULL,w_127 = NULL,x_127 = NULL,y_127 = NULL,z_127 = NULL;
    t_127 = t;
    m_127 :
    if(match_cons(t_127, sym_TCons_2))
      {
        u_127 = ATgetArgument(t_127, 0);
        v_127 = ATgetArgument(t_127, 1);
        n_127 :
        if(match_cons(v_127, sym_TCons_2))
          {
            w_127 = ATgetArgument(v_127, 0);
            x_127 = ATgetArgument(v_127, 1);
            o_127 :
            if(match_cons(x_127, sym_TCons_2))
              {
                y_127 = ATgetArgument(x_127, 0);
                z_127 = ATgetArgument(x_127, 1);
                p_127 :
                if(match_cons(z_127, sym_TNil_0))
                  {
                    if(q_127 != NULL && q_127 != u_127)
                      _fail(u_127);
                    else
                      q_127 = u_127;
                    if(r_127 != NULL && r_127 != w_127)
                      _fail(w_127);
                    else
                      r_127 = w_127;
                    if(s_127 != NULL && s_127 != y_127)
                      _fail(y_127);
                    else
                      s_127 = y_127;
                    t = SSL_table_put(not_null(q_127), not_null(r_127), not_null(s_127));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = h_13;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_128 = NULL;
  c_128 = t;
  t = SSL_table_create(not_null(c_128));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_128 = NULL;
  g_128 = t;
  {
    ATerm i_13;
    i_13 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_128), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = i_13;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm v_47 (ATerm), ATerm w_47 (ATerm))
{
  ATerm m_128 = NULL,n_128 = NULL,o_128 = NULL;
  m_128 = t;
  l_128 :
  if(match_cons(m_128, sym_Cons_2))
    {
      n_128 = ATgetArgument(m_128, 0);
      o_128 = ATgetArgument(m_128, 1);
      {
        ATerm r_128 = NULL;
        t = not_null(n_128);
        t = v_47(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = w_47(t);
        r_128 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_128), not_null(o_128));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm x_47 (ATerm), ATerm y_47 (ATerm))
{
  ATerm z_128 = NULL,a_129 = NULL,b_129 = NULL,c_129 = NULL,d_129 = NULL;
  z_128 = t;
  x_128 :
  if(match_cons(z_128, sym_Cons_2))
    {
      a_129 = ATgetArgument(z_128, 0);
      b_129 = ATgetArgument(z_128, 1);
      y_128 :
      if(match_cons(b_129, sym_Cons_2))
        {
          c_129 = ATgetArgument(b_129, 0);
          d_129 = ATgetArgument(b_129, 1);
          {
            ATerm h_129 = NULL;
            t = not_null(a_129);
            t = x_47(t);
            t = not_null(c_129);
            t = y_47(t);
            h_129 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_129), not_null(d_129));
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
  ATerm j_13 = t;
  if(PushChoice()==0)
    {
      ATerm a_7 (ATerm t)
      {
        ATerm f_130 = NULL;
        f_130 = t;
        l_129 :
        if(!(match_string(f_130, "-S")))
          _fail(t);
        return(t);
      }
      ATerm b_7 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, a_7, b_7);
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
              ATerm g_130 = NULL;
              g_130 = t;
              m_129 :
              if(!(match_string(g_130, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm d_7 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, c_7, d_7);
            PopChoice();
          }
        else
          {
            t = k_13;
            {
              ATerm l_13 = t;
              if(PushChoice()==0)
                {
                  ATerm e_7 (ATerm t)
                  {
                    ATerm h_130 = NULL;
                    h_130 = t;
                    n_129 :
                    if(!(match_string(h_130, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm f_7 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, e_7, f_7);
                  PopChoice();
                }
              else
                {
                  t = l_13;
                  {
                    ATerm m_13 = t;
                    if(PushChoice()==0)
                      {
                        ATerm g_7 (ATerm t)
                        {
                          ATerm i_130 = NULL;
                          i_130 = t;
                          o_129 :
                          if(!(match_string(i_130, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm l_7 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, g_7, l_7);
                        PopChoice();
                      }
                    else
                      {
                        t = m_13;
                        {
                          ATerm n_13 = t;
                          if(PushChoice()==0)
                            {
                              ATerm v_7 (ATerm t)
                              {
                                ATerm j_130 = NULL;
                                j_130 = t;
                                p_129 :
                                if(!(match_string(j_130, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm w_7 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, v_7, w_7);
                              PopChoice();
                            }
                          else
                            {
                              t = n_13;
                              {
                                ATerm o_13 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm x_7 (ATerm t)
                                    {
                                      ATerm k_130 = NULL;
                                      k_130 = t;
                                      q_129 :
                                      if(!(match_string(k_130, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm y_7 (ATerm t)
                                    {
                                      ATerm l_130 = NULL;
                                      l_130 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(l_130));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, x_7, y_7);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = o_13;
                                    {
                                      ATerm q_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm z_7 (ATerm t)
                                          {
                                            ATerm n_130 = NULL;
                                            n_130 = t;
                                            s_129 :
                                            if(!(match_string(n_130, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm a_8 (ATerm t)
                                          {
                                            ATerm o_130 = NULL;
                                            o_130 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(o_130));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, z_7, a_8);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = q_13;
                                          {
                                            ATerm r_13 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm b_8 (ATerm t)
                                                {
                                                  ATerm q_130 = NULL;
                                                  q_130 = t;
                                                  u_129 :
                                                  if(!(match_string(q_130, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm c_8 (ATerm t)
                                                {
                                                  ATerm r_130 = NULL;
                                                  r_130 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_130));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, b_8, c_8);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = r_13;
                                                {
                                                  ATerm s_13 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm d_8 (ATerm t)
                                                      {
                                                        ATerm t_130 = NULL;
                                                        t_130 = t;
                                                        w_129 :
                                                        if(!(match_string(t_130, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm e_8 (ATerm t)
                                                      {
                                                        ATerm u_130 = NULL;
                                                        u_130 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_130));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, d_8, e_8);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = s_13;
                                                      {
                                                        ATerm t_13 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm f_8 (ATerm t)
                                                            {
                                                              ATerm w_130 = NULL;
                                                              w_130 = t;
                                                              y_129 :
                                                              if(!(match_string(w_130, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm g_8 (ATerm t)
                                                            {
                                                              ATerm x_130 = NULL;
                                                              x_130 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_130));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, f_8, g_8);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = t_13;
                                                            {
                                                              ATerm u_13 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm h_8 (ATerm t)
                                                                  {
                                                                    ATerm z_130 = NULL;
                                                                    z_130 = t;
                                                                    a_130 :
                                                                    if(!(match_string(z_130, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm i_8 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, h_8, i_8);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = u_13;
                                                                  {
                                                                    ATerm v_13 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm j_8 (ATerm t)
                                                                        {
                                                                          ATerm a_131 = NULL;
                                                                          a_131 = t;
                                                                          b_130 :
                                                                          if(!(match_string(a_131, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm k_8 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, j_8, k_8);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = v_13;
                                                                        {
                                                                          ATerm w_13 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm l_8 (ATerm t)
                                                                              {
                                                                                ATerm b_131 = NULL;
                                                                                b_131 = t;
                                                                                c_130 :
                                                                                if(!(match_string(b_131, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm m_8 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, l_8, m_8);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = w_13;
                                                                              {
                                                                                ATerm a_14 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm n_8 (ATerm t)
                                                                                    {
                                                                                      ATerm c_131 = NULL;
                                                                                      c_131 = t;
                                                                                      d_130 :
                                                                                      if(!(match_string(c_131, "-h")))
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
                                                                                    t = a_14;
                                                                                    {
                                                                                      ATerm p_8 (ATerm t)
                                                                                      {
                                                                                        ATerm d_131 = NULL;
                                                                                        d_131 = t;
                                                                                        e_130 :
                                                                                        if(!(match_string(d_131, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm q_8 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, p_8, q_8);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm l_131 = NULL,m_131 = NULL,n_131 = NULL;
  l_131 = t;
  k_131 :
  if(match_cons(l_131, sym_Cons_2))
    {
      m_131 = ATgetArgument(l_131, 0);
      n_131 = ATgetArgument(l_131, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_131)), not_null(n_131));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm a_43 (ATerm), ATerm b_43 (ATerm))
{
  ATerm v_131 = NULL,w_131 = NULL,x_131 = NULL;
  v_131 = t;
  u_131 :
  if(match_cons(v_131, sym_Cons_2))
    {
      w_131 = ATgetArgument(v_131, 0);
      x_131 = ATgetArgument(v_131, 1);
      {
        ATerm a_132 = NULL;
        t = not_null(w_131);
        {
          ATerm c_132 = NULL;
          t = a_43(t);
          a_132 = t;
          t = not_null(x_131);
          t = b_43(t);
          c_132 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_132), not_null(c_132));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm i_132 = NULL;
  i_132 = t;
  h_132 :
  if(!(match_cons(i_132, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_47 (ATerm))
{
  ATerm r_8 (ATerm t)
  {
    ATerm l_132 = NULL;
    l_132 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_132));
    return(t);
  }
  ATerm s_8 (ATerm t)
  {
    ATerm b_14 = t;
    if(PushChoice()==0)
      {
        ATerm c_14 = t;
        if(PushChoice()==0)
          {
            ATerm n_132 = NULL;
            n_132 = t;
            k_132 :
            if(!(match_cons(n_132, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = c_14;
            t = t_47(t);
            t = Cons_2(t, _id, s_8);
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
  t = Cons_2(t, r_8, s_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm m_48 (ATerm), ATerm n_48 (ATerm), ATerm o_48 (ATerm))
{
  ATerm t_8 (ATerm t)
  {
    ATerm d_14 = t;
    if(PushChoice()==0)
      {
        t = n_48(t);
        PopChoice();
      }
    else
      {
        t = d_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, t_8);
  t = store_options_0(t);
  {
    ATerm e_14 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, o_48);
        PopChoice();
      }
    else
      {
        t = e_14;
        {
          ATerm f_14 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, m_48);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = f_14;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm h_48 (ATerm), ATerm i_48 (ATerm))
{
  t = iowrap_3(t, h_48, i_48, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm e_48 (ATerm))
{
  ATerm u_8 (ATerm t)
  {
    ATerm v_8 (ATerm t)
    {
      ATerm w_8 (ATerm t)
      {
        ATerm r_132 = NULL;
        r_132 = t;
        q_132 :
        if(!(match_cons(r_132, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, e_48, w_8);
      return(t);
    }
    t = TCons_2(t, _id, v_8);
    return(t);
  }
  t = iowrap_2(t, u_8, _fail);
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  t = iowrap_1(t, frontend_transformation_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, frontend_transformation_0);
  return(t);
}
