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
ATerm App_2 (ATerm, ATerm a_40 (ATerm), ATerm b_40 (ATerm));
ATerm Con_3 (ATerm, ATerm x_39 (ATerm), ATerm y_39 (ATerm), ATerm z_39 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm x_62 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm h_41 (ATerm));
ATerm Specification_1 (ATerm, ATerm j_41 (ATerm));
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm p_44 (ATerm));
ATerm Rec_2 (ATerm, ATerm i_42 (ATerm), ATerm j_42 (ATerm));
ATerm Let_2 (ATerm, ATerm k_42 (ATerm), ATerm l_42 (ATerm));
ATerm sboundin_3 (ATerm, ATerm q_44 (ATerm), ATerm r_44 (ATerm), ATerm s_44 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm h_42 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm j_47 (ATerm, ATerm (ATerm)), ATerm k_47 (ATerm), ATerm l_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_47 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm DeclareVariables_0 (ATerm);
ATerm RDtoSD_0 (ATerm);
ATerm MkCall_0 (ATerm);
ATerm MkCongDef_0 (ATerm);
ATerm MkCongDefs_0 (ATerm);
ATerm congdefs_0 (ATerm);
ATerm RulesToSdefs_0 (ATerm);
ATerm debug_1 (ATerm, ATerm l_50 (ATerm));
ATerm int_to_string_0 (ATerm);
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm FunType_2 (ATerm, ATerm l_41 (ATerm), ATerm m_41 (ATerm));
ATerm ConstType_1 (ATerm, ATerm k_41 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm p_41 (ATerm), ATerm q_41 (ATerm));
ATerm CheckCons_2 (ATerm, ATerm f_44 (ATerm), ATerm g_44 (ATerm));
ATerm manytd_1 (ATerm, ATerm f_64 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm check_constructors_1 (ATerm, ATerm c_0 (ATerm));
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm o_45 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm x_41 (ATerm), ATerm y_41 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm l_44 (ATerm));
ATerm Var_1 (ATerm, ATerm t_41 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm b_47 (ATerm), ATerm c_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm h_47 (ATerm), ATerm i_47 (ATerm, ATerm (ATerm)));
ATerm Fst_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm v_46 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm g_60 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm l_60 (ATerm));
ATerm substitute_6 (ATerm, ATerm t_47 (ATerm), ATerm u_47 (ATerm, ATerm (ATerm)), ATerm v_47 (ATerm), ATerm w_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm x_47 (ATerm, ATerm (ATerm)), ATerm y_47 (ATerm));
ATerm substitute_5 (ATerm, ATerm a_48 (ATerm), ATerm b_48 (ATerm, ATerm (ATerm)), ATerm c_48 (ATerm), ATerm d_48 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm e_48 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm m_45 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm n_45 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm MsgR_0 (ATerm);
ATerm MsgE_0 (ATerm);
ATerm MsgU_0 (ATerm);
ATerm MsgS_0 (ATerm);
ATerm MkMsg_0 (ATerm);
ATerm err_msg_0 (ATerm);
ATerm Overlay_3 (ATerm, ATerm b_41 (ATerm), ATerm c_41 (ATerm), ATerm d_41 (ATerm));
ATerm Union_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm explode_term_0 (ATerm);
ATerm default_join_0 (ATerm);
ATerm SeqUnion_0 (ATerm);
ATerm cart_1 (ATerm, ATerm a_57 (ATerm));
ATerm seqs_join_0 (ATerm);
ATerm JoinScope_1 (ATerm, ATerm i_44 (ATerm));
ATerm UDjoin_0 (ATerm);
ATerm Cong_2 (ATerm, ATerm a_43 (ATerm), ATerm b_43 (ATerm));
ATerm use_term_0 (ATerm);
ATerm def_term_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm m_40 (ATerm), ATerm n_40 (ATerm), ATerm o_40 (ATerm));
ATerm BAM_3 (ATerm, ATerm u_39 (ATerm), ATerm v_39 (ATerm), ATerm w_39 (ATerm));
ATerm BA_2 (ATerm, ATerm s_39 (ATerm), ATerm t_39 (ATerm));
ATerm AM_2 (ATerm, ATerm q_39 (ATerm), ATerm r_39 (ATerm));
ATerm MA_2 (ATerm, ATerm o_39 (ATerm), ATerm p_39 (ATerm));
ATerm Match_1 (ATerm, ATerm i_43 (ATerm));
ATerm Build_1 (ATerm, ATerm j_43 (ATerm));
ATerm constructs_1 (ATerm, ATerm h_44 (ATerm));
ATerm use_def_0 (ATerm);
ATerm RDef_3 (ATerm, ATerm u_40 (ATerm), ATerm v_40 (ATerm), ATerm w_40 (ATerm));
ATerm SDef_3 (ATerm, ATerm m_42 (ATerm), ATerm n_42 (ATerm), ATerm o_42 (ATerm));
ATerm check_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm f_41 (ATerm));
ATerm Signature_1 (ATerm, ATerm e_41 (ATerm));
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
ATerm SplitDynamicRule_2 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm));
ATerm split_dynamic_rules_0 (ATerm);
ATerm dist_scope_1 (ATerm, ATerm u_65 (ATerm));
ATerm one_dist_1 (ATerm, ATerm h_60 (ATerm));
ATerm env_oncetd_1 (ATerm, ATerm w_60 (ATerm));
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm l_64 (ATerm), ATerm m_64 (ATerm));
ATerm repeat_1 (ATerm, ATerm o_64 (ATerm));
ATerm listtd_1 (ATerm, ATerm u_59 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm x_40 (ATerm));
ATerm Scope_2 (ATerm, ATerm m_43 (ATerm), ATerm n_43 (ATerm));
ATerm tboundin_3 (ATerm, ATerm m_44 (ATerm), ATerm n_44 (ATerm), ATerm o_44 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm r_53 (ATerm), ATerm s_53 (ATerm), ATerm t_53 (ATerm));
ATerm crush_3 (ATerm, ATerm h_55 (ATerm), ATerm i_55 (ATerm), ATerm j_55 (ATerm));
ATerm HdMember_1 (ATerm, ATerm w_54 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm c_65 (ATerm), ATerm d_65 (ATerm));
ATerm for_3 (ATerm, ATerm f_65 (ATerm), ATerm g_65 (ATerm), ATerm h_65 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm s_45 (ATerm), ATerm t_45 (ATerm), ATerm u_45 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm j_61 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm o_47 (ATerm), ATerm p_47 (ATerm));
ATerm alltd_1 (ATerm, ATerm l_63 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm e_57 (ATerm), ATerm f_57 (ATerm));
ATerm zip_1 (ATerm, ATerm h_57 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm q_47 (ATerm), ATerm r_47 (ATerm));
ATerm substitute_1 (ATerm, ATerm s_47 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm OLName_0 (ATerm);
ATerm OpName_0 (ATerm);
ATerm OpNames_0 (ATerm);
ATerm Names_0 (ATerm);
ATerm filter_1 (ATerm, ATerm x_52 (ATerm));
ATerm const_names_0 (ATerm);
ATerm vars_to_consts_0 (ATerm);
ATerm MkSpec_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Combine_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm p_53 (ATerm), ATerm q_53 (ATerm));
ATerm at_end_1 (ATerm, ATerm g_59 (ATerm));
ATerm concat_0 (ATerm);
ATerm NormBSIG_0 (ATerm);
ATerm normalize_sigs_0 (ATerm);
ATerm NormBSP_0 (ATerm);
ATerm map_1 (ATerm, ATerm s_58 (ATerm));
ATerm BSpecs_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm h_61 (ATerm));
ATerm DefineSugar_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm r_43 (ATerm), ATerm s_43 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_65 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm b_50 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm f_52 (ATerm), ATerm g_52 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm a_39 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm a_59 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_49 (ATerm));
ATerm need_help_1 (ATerm, ATerm a_50 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm y_48 (ATerm), ATerm z_48 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm a_49 (ATerm), ATerm b_49 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm v_43 (ATerm), ATerm w_43 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_48 (ATerm));
ATerm iowrap_3 (ATerm, ATerm p_49 (ATerm), ATerm q_49 (ATerm), ATerm r_49 (ATerm));
ATerm iowrap_2 (ATerm, ATerm k_49 (ATerm), ATerm l_49 (ATerm));
ATerm iowrap_1 (ATerm, ATerm h_49 (ATerm));
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
        ATerm l_7 = NULL;
        ATerm n_7 = NULL;
        t = new_0(t);
        l_7 = t;
        {
          ATerm p_7 = NULL,q_7 = NULL,u_7 = NULL;
          t = new_0(t);
          n_7 = t;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_7), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_7)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_7), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_7))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_7)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(l_7)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_7), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_7), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0))))))));
          }
        }
      }
    }
  else
    {
      if(match_cons(h_7, sym_Build_1))
        {
          i_7 = ATgetArgument(h_7, 0);
          {
            ATerm e_10 = NULL;
            ATerm a_11 = NULL,c_11 = NULL,e_12 = NULL;
            t = new_0(t);
            e_10 = t;
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
                ATerm q_13 = NULL;
                ATerm z_13 = NULL;
                t = new_0(t);
                q_13 = t;
                {
                  ATerm b_14 = NULL;
                  t = new_0(t);
                  z_13 = t;
                  {
                    ATerm n_14 = NULL;
                    t = new_0(t);
                    b_14 = t;
                    t = new_0(t);
                    n_14 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_13), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_13), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_14), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_14), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_13)), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_14)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(i_7), (ATerm)ATmakeAppl(sym_Var_1, not_null(q_13)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_13))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(j_7), (ATerm)ATmakeAppl(sym_Var_1, not_null(b_14)), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_14))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_13)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_14)), (ATerm) ATmakeAppl(sym_Nil_0)))))));
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
  ATerm l_15 = NULL,m_15 = NULL;
  l_15 = t;
  k_15 :
  if(match_cons(l_15, sym_Build_1))
    {
      m_15 = ATgetArgument(l_15, 0);
      {
        ATerm o_15 = NULL;
        ATerm q_15 = NULL,r_15 = NULL,w_16 = NULL;
        t = new_0(t);
        o_15 = t;
        t = not_null(m_15);
        {
          ATerm f_0 (ATerm t)
          {
            ATerm s_15 = NULL,y_15 = NULL,s_16 = NULL;
            s_15 = t;
            g_15 :
            if(match_cons(s_15, sym_App_2))
              {
                y_15 = ATgetArgument(s_15, 0);
                s_16 = ATgetArgument(s_15, 1);
                if(q_15 != NULL && q_15 != y_15)
                  _fail(y_15);
                else
                  q_15 = y_15;
                if(r_15 != NULL && r_15 != s_16)
                  _fail(s_16);
                else
                  r_15 = s_16;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_15));
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, f_0);
          w_16 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_15), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(q_15), not_null(r_15), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_15))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_16))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp1_0 (ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
  f_17 = t;
  d_17 :
  if(match_cons(f_17, sym_Build_1))
    {
      g_17 = ATgetArgument(f_17, 0);
      e_17 :
      if(match_cons(g_17, sym_App_2))
        {
          h_17 = ATgetArgument(g_17, 0);
          i_17 = ATgetArgument(g_17, 1);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_17)), not_null(h_17));
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
  ATerm s_17 = NULL,t_17 = NULL;
  s_17 = t;
  r_17 :
  if(match_cons(s_17, sym_Build_1))
    {
      t_17 = ATgetArgument(s_17, 0);
      {
        ATerm v_17 = NULL,w_17 = NULL,b_18 = NULL;
        t = not_null(t_17);
        {
          ATerm g_0 (ATerm t)
          {
            ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
            x_17 = t;
            o_17 :
            if(match_cons(x_17, sym_App_2))
              {
                y_17 = ATgetArgument(x_17, 0);
                a_18 = ATgetArgument(x_17, 1);
                p_17 :
                if(match_cons(y_17, sym_Build_1))
                  {
                    z_17 = ATgetArgument(y_17, 0);
                    if(w_17 != NULL && w_17 != z_17)
                      _fail(z_17);
                    else
                      w_17 = z_17;
                    if(v_17 != NULL && v_17 != a_18)
                      _fail(a_18);
                    else
                      v_17 = a_18;
                    t = not_null(w_17);
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
  ATerm d_19 = NULL,e_19 = NULL,i_19 = NULL,j_19 = NULL,x_19 = NULL,y_19 = NULL;
  i_19 = t;
  t_18 :
  if(match_cons(i_19, sym_Seqs_1))
    {
      j_19 = ATgetArgument(i_19, 0);
      u_18 :
      if(match_cons(j_19, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(j_19, sym_Cons_2))
            {
              d_19 = ATgetArgument(j_19, 0);
              e_19 = ATgetArgument(j_19, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_19), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(e_19)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(i_19, sym_Choices_1))
        {
          j_19 = ATgetArgument(i_19, 0);
          b_19 :
          if(match_cons(j_19, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(j_19, sym_Cons_2))
                {
                  d_19 = ATgetArgument(j_19, 0);
                  e_19 = ATgetArgument(j_19, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(d_19), (ATerm) ATmakeAppl(sym_Choices_1, not_null(e_19)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(i_19, sym_LChoices_1))
            {
              j_19 = ATgetArgument(i_19, 0);
              c_19 :
              if(match_cons(j_19, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(j_19, sym_Cons_2))
                    {
                      d_19 = ATgetArgument(j_19, 0);
                      e_19 = ATgetArgument(j_19, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(d_19), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(e_19)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(i_19, sym_Lets_2))
                {
                  j_19 = ATgetArgument(i_19, 0);
                  x_19 = ATgetArgument(i_19, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(j_19), not_null(x_19));
                }
              else
                {
                  if(match_cons(i_19, sym_BA_2))
                    {
                      j_19 = ATgetArgument(i_19, 0);
                      x_19 = ATgetArgument(i_19, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_19)), not_null(j_19));
                    }
                  else
                    {
                      if(match_cons(i_19, sym_MA_2))
                        {
                          j_19 = ATgetArgument(i_19, 0);
                          x_19 = ATgetArgument(i_19, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_19)), not_null(x_19));
                        }
                      else
                        {
                          if(match_cons(i_19, sym_AM_2))
                            {
                              j_19 = ATgetArgument(i_19, 0);
                              x_19 = ATgetArgument(i_19, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_19), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_19)));
                            }
                          else
                            {
                              if(match_cons(i_19, sym_BAM_3))
                                {
                                  j_19 = ATgetArgument(i_19, 0);
                                  x_19 = ATgetArgument(i_19, 1);
                                  y_19 = ATgetArgument(i_19, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_19)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_19), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(y_19)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(i_19, sym_InfixApp_3))
                                    {
                                      j_19 = ATgetArgument(i_19, 0);
                                      x_19 = ATgetArgument(i_19, 1);
                                      y_19 = ATgetArgument(i_19, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(x_19), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_19), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_19), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm q_21 = NULL;
  q_21 = t;
  p_21 :
  if(!(match_cons(q_21, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm f_8 = t;
  if(PushChoice()==0)
    {
      ATerm h_0 (ATerm t)
      {
        ATerm g_8 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = g_8;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, h_0);
      PopChoice();
      _fail(t);
    }
  else
    t = f_8;
  return(t);
}
ATerm App_2 (ATerm t, ATerm a_40 (ATerm), ATerm b_40 (ATerm))
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
  v_21 = t;
  u_21 :
  if(match_cons(v_21, sym_App_2))
    {
      w_21 = ATgetArgument(v_21, 0);
      x_21 = ATgetArgument(v_21, 1);
      {
        ATerm a_22 = NULL;
        t = not_null(w_21);
        {
          ATerm c_22 = NULL;
          t = a_40(t);
          a_22 = t;
          t = not_null(x_21);
          t = b_40(t);
          c_22 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, not_null(a_22), not_null(c_22));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm x_39 (ATerm), ATerm y_39 (ATerm), ATerm z_39 (ATerm))
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL;
  m_22 = t;
  l_22 :
  if(match_cons(m_22, sym_Con_3))
    {
      n_22 = ATgetArgument(m_22, 0);
      o_22 = ATgetArgument(m_22, 1);
      p_22 = ATgetArgument(m_22, 2);
      {
        ATerm t_22 = NULL;
        t = not_null(n_22);
        {
          ATerm w_22 = NULL;
          t = x_39(t);
          t_22 = t;
          t = not_null(o_22);
          {
            ATerm y_22 = NULL;
            t = y_39(t);
            w_22 = t;
            t = not_null(p_22);
            t = z_39(t);
            y_22 = t;
            t = (ATerm) ATmakeAppl(sym_Con_3, not_null(t_22), not_null(w_22), not_null(y_22));
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
  ATerm h_8 = t;
  if(PushChoice()==0)
    {
      ATerm i_0 (ATerm t)
      {
        ATerm i_8 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = i_8;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, i_0);
      PopChoice();
      _fail(t);
    }
  else
    t = h_8;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm i_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL;
  i_23 = t;
  g_23 :
  if(match_cons(i_23, sym_SRule_1))
    {
      k_23 = ATgetArgument(i_23, 0);
      h_23 :
      if(match_cons(k_23, sym_Rule_3))
        {
          l_23 = ATgetArgument(k_23, 0);
          m_23 = ATgetArgument(k_23, 1);
          n_23 = ATgetArgument(k_23, 2);
          t = not_null(l_23);
          t = pureterm_0(t);
          t = not_null(m_23);
          t = buildterm_0(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_23)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_23), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_23)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(k_23, sym_StratRule_3))
            {
              l_23 = ATgetArgument(k_23, 0);
              m_23 = ATgetArgument(k_23, 1);
              n_23 = ATgetArgument(k_23, 2);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_23), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_23), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_23), (ATerm) ATmakeAppl(sym_Nil_0)))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm x_62 (ATerm))
{
  ATerm y_23 (ATerm t)
  {
    ATerm j_8 = t;
    if(PushChoice()==0)
      {
        t = x_62(t);
        PopChoice();
      }
    else
      {
        t = j_8;
        t = _one(t, y_23);
      }
    return(t);
  }
  t = y_23(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL;
  n_24 = t;
  l_24 :
  if(match_cons(n_24, sym_SRule_1))
    {
      o_24 = ATgetArgument(n_24, 0);
      m_24 :
      if(match_cons(o_24, sym_Rule_3))
        {
          p_24 = ATgetArgument(o_24, 0);
          q_24 = ATgetArgument(o_24, 1);
          r_24 = ATgetArgument(o_24, 2);
          {
            ATerm v_24 = NULL;
            ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL,f_25 = NULL;
            t = new_0(t);
            v_24 = t;
            t = not_null(p_24);
            {
              ATerm h_25 = NULL,i_25 = NULL,q_25 = NULL;
              ATerm j_0 (ATerm t)
              {
                ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL;
                a_25 = t;
                c_24 :
                if(match_cons(a_25, sym_Con_3))
                  {
                    b_25 = ATgetArgument(a_25, 0);
                    d_25 = ATgetArgument(a_25, 1);
                    e_25 = ATgetArgument(a_25, 2);
                    d_24 :
                    if(match_cons(b_25, sym_Var_1))
                      {
                        c_25 = ATgetArgument(b_25, 0);
                        if(z_24 != NULL && z_24 != c_25)
                          _fail(c_25);
                        else
                          z_24 = c_25;
                        if(x_24 != NULL && x_24 != d_25)
                          _fail(d_25);
                        else
                          x_24 = d_25;
                        if(y_24 != NULL && y_24 != e_25)
                          _fail(e_25);
                        else
                          y_24 = e_25;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_24));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, j_0);
              f_25 = t;
              t = not_null(q_24);
              {
                ATerm k_0 (ATerm t)
                {
                  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL;
                  j_25 = t;
                  g_24 :
                  if(match_cons(j_25, sym_Con_3))
                    {
                      k_25 = ATgetArgument(j_25, 0);
                      m_25 = ATgetArgument(j_25, 1);
                      n_25 = ATgetArgument(j_25, 2);
                      h_24 :
                      if(match_cons(k_25, sym_Var_1))
                        {
                          l_25 = ATgetArgument(k_25, 0);
                          i_24 :
                          if(match_cons(n_25, sym_Call_2))
                            {
                              o_25 = ATgetArgument(n_25, 0);
                              p_25 = ATgetArgument(n_25, 1);
                              j_24 :
                              if(match_cons(p_25, sym_Nil_0))
                                {
                                  if(z_24 != NULL && z_24 != l_25)
                                    _fail(l_25);
                                  else
                                    z_24 = l_25;
                                  if(h_25 != NULL && h_25 != m_25)
                                    _fail(m_25);
                                  else
                                    h_25 = m_25;
                                  if(i_25 != NULL && i_25 != o_25)
                                    _fail(o_25);
                                  else
                                    i_25 = o_25;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_24));
                                }
                              else
                                _fail(t);
                            }
                          else
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
                q_25 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_24), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_25), not_null(q_25), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_24), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(i_25), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_24), not_null(h_25), (ATerm) ATmakeAppl(sym_Id_0))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_24)))))));
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
    ATerm k_8 = t;
    if(PushChoice()==0)
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      {
        t = k_8;
        {
          ATerm l_8 = t;
          if(PushChoice()==0)
            {
              t = Scope_2(t, _id, desugarRule_0);
              PopChoice();
            }
          else
            {
              t = l_8;
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
        ATerm m_8 = t;
        if(PushChoice()==0)
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = m_8;
            {
              ATerm n_8 = t;
              if(PushChoice()==0)
                {
                  ATerm o_8 = t;
                  if(PushChoice()==0)
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = o_8;
                      {
                        ATerm p_8 = t;
                        if(PushChoice()==0)
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = p_8;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = n_8;
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
ATerm Strategies_1 (ATerm t, ATerm h_41 (ATerm))
{
  ATerm c_26 = NULL,d_26 = NULL;
  c_26 = t;
  b_26 :
  if(match_cons(c_26, sym_Strategies_1))
    {
      d_26 = ATgetArgument(c_26, 0);
      {
        ATerm f_26 = NULL;
        t = not_null(d_26);
        t = h_41(t);
        f_26 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(f_26));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm j_41 (ATerm))
{
  ATerm m_26 = NULL,n_26 = NULL;
  m_26 = t;
  l_26 :
  if(match_cons(m_26, sym_Specification_1))
    {
      n_26 = ATgetArgument(m_26, 0);
      {
        ATerm p_26 = NULL;
        t = not_null(n_26);
        t = j_41(t);
        p_26 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(p_26));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL;
  v_26 = t;
  u_26 :
  if(match_cons(v_26, sym_Cons_2))
    {
      w_26 = ATgetArgument(v_26, 0);
      x_26 = ATgetArgument(v_26, 1);
      t = not_null(w_26);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm p_44 (ATerm))
{
  ATerm q_8 = t;
  if(PushChoice()==0)
    {
      ATerm p_0 (ATerm t)
      {
        t = split_2(t, _id, p_44);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL;
            q_27 = t;
            c_27 :
            if(match_cons(q_27, sym_TCons_2))
              {
                r_27 = ATgetArgument(q_27, 0);
                v_27 = ATgetArgument(q_27, 1);
                d_27 :
                if(match_cons(r_27, sym_SDef_3))
                  {
                    s_27 = ATgetArgument(r_27, 0);
                    t_27 = ATgetArgument(r_27, 1);
                    u_27 = ATgetArgument(r_27, 2);
                    e_27 :
                    if(match_cons(v_27, sym_TCons_2))
                      {
                        w_27 = ATgetArgument(v_27, 0);
                        x_27 = ATgetArgument(v_27, 1);
                        f_27 :
                        if(match_cons(x_27, sym_TNil_0))
                          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(w_27), not_null(t_27), not_null(u_27));
                        else
                          _fail(t);
                      }
                    else
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
      t = q_8;
      {
        ATerm r_8 = t;
        if(PushChoice()==0)
          {
            ATerm r_0 (ATerm t)
            {
              t = split_2(t, _id, p_44);
              {
                ATerm s_0 (ATerm t)
                {
                  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL;
                  c_28 = t;
                  h_27 :
                  if(match_cons(c_28, sym_TCons_2))
                    {
                      d_28 = ATgetArgument(c_28, 0);
                      g_28 = ATgetArgument(c_28, 1);
                      i_27 :
                      if(match_cons(d_28, sym_VarDec_2))
                        {
                          e_28 = ATgetArgument(d_28, 0);
                          f_28 = ATgetArgument(d_28, 1);
                          j_27 :
                          if(match_cons(g_28, sym_TCons_2))
                            {
                              h_28 = ATgetArgument(g_28, 0);
                              i_28 = ATgetArgument(g_28, 1);
                              p_27 :
                              if(match_cons(i_28, sym_TNil_0))
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(h_28), not_null(f_28));
                              else
                                _fail(t);
                            }
                          else
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
            t = r_8;
            {
              ATerm t_0 (ATerm t)
              {
                t = p_44(t);
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
ATerm Rec_2 (ATerm t, ATerm i_42 (ATerm), ATerm j_42 (ATerm))
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
  t_28 = t;
  s_28 :
  if(match_cons(t_28, sym_Rec_2))
    {
      u_28 = ATgetArgument(t_28, 0);
      v_28 = ATgetArgument(t_28, 1);
      {
        ATerm y_28 = NULL;
        t = not_null(u_28);
        {
          ATerm a_29 = NULL;
          t = i_42(t);
          y_28 = t;
          t = not_null(v_28);
          t = j_42(t);
          a_29 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(y_28), not_null(a_29));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm k_42 (ATerm), ATerm l_42 (ATerm))
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
          ATerm u_29 = NULL;
          t = k_42(t);
          s_29 = t;
          t = not_null(p_29);
          t = l_42(t);
          u_29 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(s_29), not_null(u_29));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm q_44 (ATerm), ATerm r_44 (ATerm), ATerm s_44 (ATerm))
{
  ATerm s_8 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, q_44, q_44);
      PopChoice();
    }
  else
    {
      t = s_8;
      {
        ATerm t_8 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, s_44, s_44, q_44);
            PopChoice();
          }
        else
          {
            t = t_8;
            t = Rec_2(t, s_44, q_44);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm b_30 = NULL,g_30 = NULL,h_30 = NULL;
  b_30 = t;
  a_30 :
  if(match_cons(b_30, sym_Rec_2))
    {
      g_30 = ATgetArgument(b_30, 0);
      h_30 = ATgetArgument(b_30, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_30), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm v_30 = NULL,y_30 = NULL,a_31 = NULL,b_31 = NULL;
  v_30 = t;
  u_30 :
  if(match_cons(v_30, sym_SDef_3))
    {
      y_30 = ATgetArgument(v_30, 0);
      a_31 = ATgetArgument(v_30, 1);
      b_31 = ATgetArgument(v_30, 2);
      t = not_null(a_31);
      {
        ATerm u_0 (ATerm t)
        {
          ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
          f_31 = t;
          p_30 :
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
        t = map_1(t, u_0);
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
        ATerm v_0 (ATerm t)
        {
          ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
          u_31 = t;
          n_31 :
          if(match_cons(u_31, sym_SDef_3))
            {
              v_31 = ATgetArgument(u_31, 0);
              w_31 = ATgetArgument(u_31, 1);
              x_31 = ATgetArgument(u_31, 2);
              t = not_null(v_31);
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
ATerm SVar_1 (ATerm t, ATerm h_42 (ATerm))
{
  ATerm k_32 = NULL,l_32 = NULL;
  k_32 = t;
  j_32 :
  if(match_cons(k_32, sym_SVar_1))
    {
      l_32 = ATgetArgument(k_32, 0);
      {
        ATerm n_32 = NULL;
        t = not_null(l_32);
        t = h_42(t);
        n_32 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(n_32));
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
    ATerm u_8 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = u_8;
        {
          ATerm v_8 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = v_8;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, w_0, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm j_47 (ATerm, ATerm (ATerm)), ATerm k_47 (ATerm), ATerm l_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_47 (ATerm, ATerm (ATerm)))
{
  ATerm a_33 = NULL;
  a_33 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  {
    ATerm d_33 (ATerm t)
    {
      ATerm x_0 (ATerm t)
      {
        ATerm w_8 = t;
        if(PushChoice()==0)
          {
            t = RnVar_1(t, j_47);
            PopChoice();
          }
        else
          {
            t = w_8;
            t = RnBinding_2(t, k_47, m_47);
            t = DistBinding_2(t, d_33, l_47);
          }
        return(t);
      }
      t = env_alltd_1(t, x_0);
      return(t);
    }
    t = d_33(t);
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
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL,o_33 = NULL;
  h_33 = t;
  g_33 :
  if(match_cons(h_33, sym_SDef_3))
    {
      i_33 = ATgetArgument(h_33, 0);
      j_33 = ATgetArgument(h_33, 1);
      o_33 = ATgetArgument(h_33, 2);
      {
        ATerm s_33 = NULL;
        t = not_null(o_33);
        t = tvars_0(t);
        s_33 = t;
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(i_33), not_null(j_33), (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_33), not_null(o_33)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RDtoSD_0 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL;
  z_33 = t;
  y_33 :
  if(match_cons(z_33, sym_RDef_3))
    {
      a_34 = ATgetArgument(z_33, 0);
      b_34 = ATgetArgument(z_33, 1);
      c_34 = ATgetArgument(z_33, 2);
      {
        ATerm g_34 = NULL;
        t = not_null(c_34);
        t = tvars_0(t);
        g_34 = t;
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(a_34), not_null(b_34), (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_34), (ATerm) ATmakeAppl(sym_SRule_1, not_null(c_34))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkCall_0 (ATerm t)
{
  ATerm l_34 = NULL;
  l_34 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_34)), (ATerm) ATmakeAppl(sym_Nil_0));
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL;
  c_35 = t;
  a_35 :
  if(match_cons(c_35, sym_OpDecl_2))
    {
      d_35 = ATgetArgument(c_35, 0);
      e_35 = ATgetArgument(c_35, 1);
      b_35 :
      if(match_cons(e_35, sym_ConstType_1))
        {
          f_35 = ATgetArgument(e_35, 0);
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_35), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Cong_2, not_null(d_35), (ATerm) ATmakeAppl(sym_Nil_0)));
        }
      else
        {
          if(match_cons(e_35, sym_FunType_2))
            {
              f_35 = ATgetArgument(e_35, 0);
              g_35 = ATgetArgument(e_35, 1);
              {
                ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,w_35 = NULL;
                t = not_null(f_35);
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
                  o_35 = t;
                  t_34 :
                  if(match_cons(o_35, sym_TCons_2))
                    {
                      p_35 = ATgetArgument(o_35, 0);
                      q_35 = ATgetArgument(o_35, 1);
                      u_34 :
                      if(match_cons(q_35, sym_TCons_2))
                        {
                          r_35 = ATgetArgument(q_35, 0);
                          w_35 = ATgetArgument(q_35, 1);
                          v_34 :
                          if(match_cons(w_35, sym_TNil_0))
                            {
                              ATerm f_36 = NULL;
                              t = not_null(r_35);
                              t = map_1(t, MkCall_0);
                              f_36 = t;
                              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_35), not_null(p_35), (ATerm) ATmakeAppl(sym_Cong_2, not_null(d_35), not_null(f_36)));
                            }
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
  ATerm z_38 = NULL,b_39 = NULL;
  z_38 = t;
  n_37 :
  if(match_cons(z_38, sym_Sorts_1))
    {
      b_39 = ATgetArgument(z_38, 0);
      t = (ATerm) ATmakeAppl(sym_Nil_0);
    }
  else
    {
      if(match_cons(z_38, sym_Constructors_1))
        {
          b_39 = ATgetArgument(z_38, 0);
          t = not_null(b_39);
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
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
  e_40 = t;
  k_39 :
  if(match_cons(e_40, sym_Specification_1))
    {
      f_40 = ATgetArgument(e_40, 0);
      l_39 :
      if(match_cons(f_40, sym_Cons_2))
        {
          g_40 = ATgetArgument(f_40, 0);
          i_40 = ATgetArgument(f_40, 1);
          m_39 :
          if(match_cons(g_40, sym_Signature_1))
            {
              h_40 = ATgetArgument(g_40, 0);
              n_39 :
              if(match_cons(i_40, sym_Cons_2))
                {
                  j_40 = ATgetArgument(i_40, 0);
                  l_40 = ATgetArgument(i_40, 1);
                  c_40 :
                  if(match_cons(j_40, sym_Strategies_1))
                    {
                      k_40 = ATgetArgument(j_40, 0);
                      d_40 :
                      if(match_cons(l_40, sym_Nil_0))
                        {
                          ATerm r_40 = NULL;
                          t = not_null(h_40);
                          {
                            ATerm t_40 = NULL;
                            t = congdefs_0(t);
                            r_40 = t;
                            t = not_null(k_40);
                            {
                              ATerm z_40 = NULL;
                              ATerm a_1 (ATerm t)
                              {
                                ATerm x_8 = t;
                                if(PushChoice()==0)
                                  {
                                    t = RDtoSD_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = x_8;
                                    t = DeclareVariables_0(t);
                                  }
                                return(t);
                              }
                              t = map_1(t, a_1);
                              t_40 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_40), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_40), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = conc_0(t);
                              z_40 = t;
                              t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, not_null(h_40)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(z_40)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
ATerm debug_1 (ATerm t, ATerm l_50 (ATerm))
{
  ATerm y_8;
  y_8 = t;
  {
    ATerm b_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm c_1 (ATerm t)
    {
      ATerm u_41 = NULL;
      ATerm w_41 = NULL;
      u_41 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = l_50(t);
      w_41 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_41), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_41), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, b_1, c_1);
    t = printnl_0(t);
  }
  t = y_8;
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm d_42 = NULL;
  d_42 = t;
  t = SSL_int_to_string(not_null(d_42));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL;
  s_42 = t;
  p_42 :
  if(match_cons(s_42, sym_TCons_2))
    {
      t_42 = ATgetArgument(s_42, 0);
      u_42 = ATgetArgument(s_42, 1);
      q_42 :
      if(match_cons(u_42, sym_TCons_2))
        {
          v_42 = ATgetArgument(u_42, 0);
          w_42 = ATgetArgument(u_42, 1);
          r_42 :
          if(match_cons(w_42, sym_TNil_0))
            {
              ATerm z_8 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(t_42), not_null(v_42));
                  PopChoice();
                }
              else
                {
                  t = z_8;
                  t = SSL_addr(not_null(t_42), not_null(v_42));
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
  ATerm d_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm e_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, d_1, add_0, e_1);
  return(t);
}
ATerm FunType_2 (ATerm t, ATerm l_41 (ATerm), ATerm m_41 (ATerm))
{
  ATerm g_43 = NULL,h_43 = NULL,k_43 = NULL;
  g_43 = t;
  f_43 :
  if(match_cons(g_43, sym_FunType_2))
    {
      h_43 = ATgetArgument(g_43, 0);
      k_43 = ATgetArgument(g_43, 1);
      {
        ATerm p_43 = NULL;
        t = not_null(h_43);
        {
          ATerm t_43 = NULL;
          t = l_41(t);
          p_43 = t;
          t = not_null(k_43);
          t = m_41(t);
          t_43 = t;
          t = (ATerm) ATmakeAppl(sym_FunType_2, not_null(p_43), not_null(t_43));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ConstType_1 (ATerm t, ATerm k_41 (ATerm))
{
  ATerm e_44 = NULL,k_44 = NULL;
  e_44 = t;
  d_44 :
  if(match_cons(e_44, sym_ConstType_1))
    {
      k_44 = ATgetArgument(e_44, 0);
      {
        ATerm u_44 = NULL;
        t = not_null(k_44);
        t = k_41(t);
        u_44 = t;
        t = (ATerm) ATmakeAppl(sym_ConstType_1, not_null(u_44));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm OpDecl_2 (ATerm t, ATerm p_41 (ATerm), ATerm q_41 (ATerm))
{
  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL;
  c_45 = t;
  b_45 :
  if(match_cons(c_45, sym_OpDecl_2))
    {
      d_45 = ATgetArgument(c_45, 0);
      e_45 = ATgetArgument(c_45, 1);
      {
        ATerm h_45 = NULL;
        t = not_null(d_45);
        {
          ATerm j_45 = NULL;
          t = p_41(t);
          h_45 = t;
          t = not_null(e_45);
          t = q_41(t);
          j_45 = t;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, not_null(h_45), not_null(j_45));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CheckCons_2 (ATerm t, ATerm f_44 (ATerm), ATerm g_44 (ATerm))
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
  c_46 = t;
  b_46 :
  if(match_cons(c_46, sym_Op_2))
    {
      d_46 = ATgetArgument(c_46, 0);
      e_46 = ATgetArgument(c_46, 1);
      {
        ATerm l_46 = NULL;
        ATerm a_9 = t;
        if(PushChoice()==0)
          {
            t = g_44(t);
            {
              ATerm f_1 (ATerm t)
              {
                ATerm h_46 = NULL;
                ATerm g_1 (ATerm t)
                {
                  ATerm i_46 = NULL;
                  i_46 = t;
                  if(d_46 != NULL && d_46 != i_46)
                    _fail(i_46);
                  else
                    d_46 = i_46;
                  return(t);
                }
                ATerm h_1 (ATerm t)
                {
                  ATerm b_9 = t;
                  if(PushChoice()==0)
                    {
                      ATerm j_46 = NULL;
                      t = ConstType_1(t, _id);
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                      j_46 = t;
                      if(h_46 != NULL && h_46 != j_46)
                        _fail(j_46);
                      else
                        h_46 = j_46;
                      PopChoice();
                    }
                  else
                    {
                      t = b_9;
                      {
                        ATerm i_1 (ATerm t)
                        {
                          ATerm k_46 = NULL;
                          k_46 = t;
                          if(h_46 != NULL && h_46 != k_46)
                            _fail(k_46);
                          else
                            h_46 = k_46;
                          return(t);
                        }
                        t = FunType_2(t, i_1, _id);
                      }
                    }
                  return(t);
                }
                t = OpDecl_2(t, g_1, h_1);
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_46), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_46), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = zip_1(t, _id);
                return(t);
              }
              t = fetch_1(t, f_1);
            }
            PopChoice();
            _fail(t);
          }
        else
          t = a_9;
        t = not_null(e_46);
        t = length_0(t);
        t = int_to_string_0(t);
        l_46 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_46), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("/", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_46), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
        t = concat_strings_0(t);
        t = debug_1(t, f_44);
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(d_46), not_null(e_46));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm manytd_1 (ATerm t, ATerm f_64 (ATerm))
{
  ATerm s_46 (ATerm t)
  {
    ATerm c_9 = t;
    if(PushChoice()==0)
      {
        t = f_64(t);
        {
          ATerm j_1 (ATerm t)
          {
            t = try_1(t, s_46);
            return(t);
          }
          t = _all(t, j_1);
        }
        PopChoice();
      }
    else
      {
        t = c_9;
        t = _some(t, s_46);
      }
    return(t);
  }
  t = s_46(t);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm u_46 = NULL;
  u_46 = t;
  t = SSL_implode_string(not_null(u_46));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm z_46 = NULL;
  z_46 = t;
  t = SSL_explode_string(not_null(z_46));
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
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL;
  h_48 = t;
  g_48 :
  if(match_cons(h_48, sym_RDef_3))
    {
      i_48 = ATgetArgument(h_48, 0);
      j_48 = ATgetArgument(h_48, 1);
      k_48 = ATgetArgument(h_48, 2);
      {
        ATerm o_48 = NULL;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: in rule ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        t = concat_strings_0(t);
        o_48 = t;
        t = not_null(k_48);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm l_1 (ATerm t)
            {
              t = not_null(o_48);
              return(t);
            }
            t = CheckCons_2(t, l_1, c_0);
            return(t);
          }
          t = manytd_1(t, k_1);
          t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(i_48), not_null(j_48), not_null(k_48));
        }
      }
    }
  else
    {
      if(match_cons(h_48, sym_SDef_3))
        {
          i_48 = ATgetArgument(h_48, 0);
          j_48 = ATgetArgument(h_48, 1);
          k_48 = ATgetArgument(h_48, 2);
          {
            ATerm t_48 = NULL;
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: in definition ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
            t = concat_strings_0(t);
            t_48 = t;
            t = not_null(k_48);
            {
              ATerm m_1 (ATerm t)
              {
                ATerm n_1 (ATerm t)
                {
                  t = not_null(t_48);
                  return(t);
                }
                t = CheckCons_2(t, n_1, c_0);
                return(t);
              }
              t = manytd_1(t, m_1);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(i_48), not_null(j_48), not_null(k_48));
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
  ATerm y_49 = NULL,z_49 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL;
  y_49 = t;
  m_49 :
  if(match_cons(y_49, sym_Specification_1))
    {
      z_49 = ATgetArgument(y_49, 0);
      n_49 :
      if(match_cons(z_49, sym_Cons_2))
        {
          c_50 = ATgetArgument(z_49, 0);
          h_50 = ATgetArgument(z_49, 1);
          o_49 :
          if(match_cons(c_50, sym_Signature_1))
            {
              d_50 = ATgetArgument(c_50, 0);
              s_49 :
              if(match_cons(d_50, sym_Cons_2))
                {
                  e_50 = ATgetArgument(d_50, 0);
                  g_50 = ATgetArgument(d_50, 1);
                  t_49 :
                  if(match_cons(e_50, sym_Constructors_1))
                    {
                      f_50 = ATgetArgument(e_50, 0);
                      u_49 :
                      if(match_cons(g_50, sym_Nil_0))
                        {
                          v_49 :
                          if(match_cons(h_50, sym_Cons_2))
                            {
                              i_50 = ATgetArgument(h_50, 0);
                              k_50 = ATgetArgument(h_50, 1);
                              w_49 :
                              if(match_cons(i_50, sym_Strategies_1))
                                {
                                  j_50 = ATgetArgument(i_50, 0);
                                  x_49 :
                                  if(match_cons(k_50, sym_Nil_0))
                                    {
                                      ATerm o_50 = NULL;
                                      t = not_null(j_50);
                                      {
                                        ATerm o_1 (ATerm t)
                                        {
                                          ATerm p_1 (ATerm t)
                                          {
                                            t = not_null(f_50);
                                            return(t);
                                          }
                                          t = check_constructors_1(t, p_1);
                                          return(t);
                                        }
                                        t = filter_1(t, o_1);
                                        o_50 = t;
                                        j_49 :
                                        if(match_cons(o_50, sym_Nil_0))
                                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Constructors_1, not_null(f_50)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(j_50)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
ATerm exp_overlays2_1 (ATerm t, ATerm o_45 (ATerm))
{
  ATerm q_1 (ATerm t)
  {
    ATerm d_9;
    d_9 = t;
    {
      ATerm e_9 = t;
      if(PushChoice()==0)
        {
          ATerm s_50 = NULL;
          t = o_45(t);
          s_50 = t;
          r_50 :
          if(!(match_cons(s_50, sym_Nil_0)))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        t = e_9;
    }
    t = d_9;
    {
      ATerm r_1 (ATerm t)
      {
        ATerm s_1 (ATerm t)
        {
          t = ExpOverlay_1(t, o_45);
          return(t);
        }
        t = try_1(t, s_1);
        return(t);
      }
      t = topdown_1(t, r_1);
    }
    return(t);
  }
  t = try_1(t, q_1);
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL;
  b_51 = t;
  z_50 :
  if(match_cons(b_51, sym_Var_1))
    {
      c_51 = ATgetArgument(b_51, 0);
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_51)), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    {
      if(match_cons(b_51, sym_Op_2))
        {
          c_51 = ATgetArgument(b_51, 0);
          a_51 = ATgetArgument(b_51, 1);
          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_51)), not_null(a_51));
        }
      else
        {
          if(match_cons(b_51, sym_Str_1))
            {
              c_51 = ATgetArgument(b_51, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(c_51)));
            }
          else
            {
              if(match_cons(b_51, sym_Int_1))
                {
                  c_51 = ATgetArgument(b_51, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(c_51)));
                }
              else
                {
                  if(match_cons(b_51, sym_Real_1))
                    {
                      c_51 = ATgetArgument(b_51, 0);
                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(c_51)));
                    }
                  else
                    {
                      if(match_cons(b_51, sym_BuildDefault_1))
                        {
                          c_51 = ATgetArgument(b_51, 0);
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
ATerm Op_2 (ATerm t, ATerm x_41 (ATerm), ATerm y_41 (ATerm))
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL;
  u_51 = t;
  t_51 :
  if(match_cons(u_51, sym_Op_2))
    {
      v_51 = ATgetArgument(u_51, 0);
      w_51 = ATgetArgument(u_51, 1);
      {
        ATerm z_51 = NULL;
        t = not_null(v_51);
        {
          ATerm b_52 = NULL;
          t = x_41(t);
          z_51 = t;
          t = not_null(w_51);
          t = y_41(t);
          b_52 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(z_51), not_null(b_52));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm trm_to_cong_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm u_1 (ATerm t)
    {
      t = map_1(t, trm_to_cong_0);
      return(t);
    }
    t = Op_2(t, _id, u_1);
    return(t);
  }
  t = try_1(t, t_1);
  t = Trm_to_Cong_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0 (ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL;
  o_52 = t;
  n_52 :
  if(match_cons(o_52, sym_Overlay_3))
    {
      p_52 = ATgetArgument(o_52, 0);
      q_52 = ATgetArgument(o_52, 1);
      r_52 = ATgetArgument(o_52, 2);
      {
        ATerm y_52 = NULL;
        t = not_null(q_52);
        {
          ATerm a_53 = NULL;
          ATerm v_1 (ATerm t)
          {
            ATerm v_52 = NULL;
            v_52 = t;
            t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(v_52), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))));
            return(t);
          }
          t = map_1(t, v_1);
          y_52 = t;
          t = not_null(r_52);
          t = trm_to_cong_0(t);
          a_53 = t;
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(p_52), not_null(y_52), not_null(a_53));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm l_44 (ATerm))
{
  t = Scope_2(t, l_44, _id);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm t_41 (ATerm))
{
  ATerm j_53 = NULL,k_53 = NULL;
  j_53 = t;
  i_53 :
  if(match_cons(j_53, sym_Var_1))
    {
      k_53 = ATgetArgument(j_53, 0);
      {
        ATerm m_53 = NULL;
        t = not_null(k_53);
        t = t_41(t);
        m_53 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_53));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm b_47 (ATerm), ATerm c_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
  c_54 = t;
  y_53 :
  if(match_cons(c_54, sym_TCons_2))
    {
      d_54 = ATgetArgument(c_54, 0);
      e_54 = ATgetArgument(c_54, 1);
      z_53 :
      if(match_cons(e_54, sym_TCons_2))
        {
          f_54 = ATgetArgument(e_54, 0);
          g_54 = ATgetArgument(e_54, 1);
          a_54 :
          if(match_cons(g_54, sym_TCons_2))
            {
              h_54 = ATgetArgument(g_54, 0);
              i_54 = ATgetArgument(g_54, 1);
              b_54 :
              if(match_cons(i_54, sym_TNil_0))
                {
                  t = not_null(d_54);
                  {
                    ATerm w_1 (ATerm t)
                    {
                      ATerm m_54 = NULL;
                      m_54 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_54), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_54), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = b_47(t);
                      return(t);
                    }
                    ATerm x_1 (ATerm t)
                    {
                      ATerm o_54 = NULL;
                      o_54 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_54), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_54), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = b_47(t);
                      return(t);
                    }
                    t = c_47(t, w_1, x_1, _id);
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
ATerm RnBinding_2 (ATerm t, ATerm h_47 (ATerm), ATerm i_47 (ATerm, ATerm (ATerm)))
{
  ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL;
  k_55 = t;
  d_55 :
  if(match_cons(k_55, sym_TCons_2))
    {
      l_55 = ATgetArgument(k_55, 0);
      m_55 = ATgetArgument(k_55, 1);
      f_55 :
      if(match_cons(m_55, sym_TCons_2))
        {
          n_55 = ATgetArgument(m_55, 0);
          o_55 = ATgetArgument(m_55, 1);
          g_55 :
          if(match_cons(o_55, sym_TNil_0))
            {
              ATerm r_55 = NULL;
              t = not_null(l_55);
              {
                ATerm t_55 = NULL;
                t = h_47(t);
                r_55 = t;
                {
                  ATerm v_55 = NULL;
                  t = map_1(t, new_0);
                  t_55 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_55), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm x_55 = NULL;
                    t = zip_1(t, _id);
                    v_55 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_55), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm z_55 = NULL;
                      t = conc_0(t);
                      x_55 = t;
                      t = not_null(l_55);
                      {
                        ATerm y_1 (ATerm t)
                        {
                          t = not_null(t_55);
                          return(t);
                        }
                        t = i_47(t, y_1);
                        z_55 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_55), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL;
  j_56 = t;
  i_56 :
  if(match_cons(j_56, sym_TCons_2))
    {
      k_56 = ATgetArgument(j_56, 0);
      l_56 = ATgetArgument(j_56, 1);
      t = not_null(k_56);
    }
  else
    _fail(t);
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm v_46 (ATerm, ATerm (ATerm)))
{
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL;
  t_56 = t;
  q_56 :
  if(match_cons(t_56, sym_TCons_2))
    {
      u_56 = ATgetArgument(t_56, 0);
      v_56 = ATgetArgument(t_56, 1);
      r_56 :
      if(match_cons(v_56, sym_TCons_2))
        {
          w_56 = ATgetArgument(v_56, 0);
          x_56 = ATgetArgument(v_56, 1);
          s_56 :
          if(match_cons(x_56, sym_TNil_0))
            {
              t = not_null(u_56);
              {
                ATerm z_1 (ATerm t)
                {
                  ATerm a_2 (ATerm t)
                  {
                    t = not_null(w_56);
                    return(t);
                  }
                  t = split_2(t, _id, a_2);
                  t = lookup_0(t);
                  return(t);
                }
                t = v_46(t, z_1);
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
ATerm all_dist_1 (ATerm t, ATerm g_60 (ATerm))
{
  ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL;
  n_57 = t;
  k_57 :
  if(match_cons(n_57, sym_TCons_2))
    {
      o_57 = ATgetArgument(n_57, 0);
      p_57 = ATgetArgument(n_57, 1);
      l_57 :
      if(match_cons(p_57, sym_TCons_2))
        {
          q_57 = ATgetArgument(p_57, 0);
          r_57 = ATgetArgument(p_57, 1);
          m_57 :
          if(match_cons(r_57, sym_TNil_0))
            {
              t = not_null(o_57);
              {
                ATerm b_2 (ATerm t)
                {
                  ATerm u_57 = NULL;
                  u_57 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_57), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_57), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = g_60(t);
                  return(t);
                }
                t = _all(t, b_2);
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
ATerm env_alltd_1 (ATerm t, ATerm l_60 (ATerm))
{
  ATerm y_57 (ATerm t)
  {
    ATerm f_9 = t;
    if(PushChoice()==0)
      {
        t = l_60(t);
        PopChoice();
      }
    else
      {
        t = f_9;
        t = all_dist_1(t, y_57);
      }
    return(t);
  }
  t = y_57(t);
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm t_47 (ATerm), ATerm u_47 (ATerm, ATerm (ATerm)), ATerm v_47 (ATerm), ATerm w_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm x_47 (ATerm, ATerm (ATerm)), ATerm y_47 (ATerm))
{
  ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL;
  t = subs_args_0(t);
  d_58 = t;
  a_58 :
  if(match_cons(d_58, sym_TCons_2))
    {
      e_58 = ATgetArgument(d_58, 0);
      f_58 = ATgetArgument(d_58, 1);
      b_58 :
      if(match_cons(f_58, sym_TCons_2))
        {
          g_58 = ATgetArgument(f_58, 0);
          h_58 = ATgetArgument(f_58, 1);
          c_58 :
          if(match_cons(h_58, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm l_58 (ATerm t)
                {
                  ATerm c_2 (ATerm t)
                  {
                    ATerm g_9 = t;
                    if(PushChoice()==0)
                      {
                        t = RnVar_1(t, u_47);
                        PopChoice();
                      }
                    else
                      {
                        t = g_9;
                        {
                          ATerm h_9 = t;
                          if(PushChoice()==0)
                            {
                              t = Fst_0(t);
                              {
                                ATerm d_2 (ATerm t)
                                {
                                  t = not_null(e_58);
                                  return(t);
                                }
                                t = SubsVar_2(t, t_47, d_2);
                                t = y_47(t);
                              }
                              PopChoice();
                            }
                          else
                            {
                              t = h_9;
                              t = RnBinding_2(t, v_47, x_47);
                              t = DistBinding_2(t, l_58, w_47);
                            }
                        }
                      }
                    return(t);
                  }
                  t = env_alltd_1(t, c_2);
                  return(t);
                }
                t = l_58(t);
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
ATerm substitute_5 (ATerm t, ATerm a_48 (ATerm), ATerm b_48 (ATerm, ATerm (ATerm)), ATerm c_48 (ATerm), ATerm d_48 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm e_48 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, a_48, b_48, c_48, d_48, e_48, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, tpaste_1);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm m_45 (ATerm))
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL;
  v_58 = t;
  u_58 :
  if(match_cons(v_58, sym_Op_2))
    {
      w_58 = ATgetArgument(v_58, 0);
      x_58 = ATgetArgument(v_58, 1);
      {
        ATerm c_59 = NULL,d_59 = NULL;
        t = m_45(t);
        {
          ATerm e_2 (ATerm t)
          {
            ATerm i_9;
            i_9 = t;
            {
              ATerm e_59 = NULL,f_59 = NULL,i_59 = NULL,j_59 = NULL;
              e_59 = t;
              r_58 :
              if(match_cons(e_59, sym_Overlay_3))
                {
                  f_59 = ATgetArgument(e_59, 0);
                  i_59 = ATgetArgument(e_59, 1);
                  j_59 = ATgetArgument(e_59, 2);
                  {
                    ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL;
                    if(w_58 != NULL && w_58 != f_59)
                      _fail(f_59);
                    else
                      w_58 = f_59;
                    if(k_59 != NULL && k_59 != i_59)
                      _fail(i_59);
                    else
                      k_59 = i_59;
                    if(l_59 != NULL && l_59 != j_59)
                      _fail(j_59);
                    else
                      l_59 = j_59;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_58), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm o_59 = NULL;
                      t = zip_1(t, _id);
                      m_59 = t;
                      {
                        ATerm p_59 = NULL;
                        t = not_null(m_59);
                        o_59 = t;
                        if(c_59 != NULL && c_59 != o_59)
                          _fail(o_59);
                        else
                          c_59 = o_59;
                        t = not_null(l_59);
                        p_59 = t;
                        if(d_59 != NULL && d_59 != p_59)
                          _fail(p_59);
                        else
                          d_59 = p_59;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_59), (ATerm) ATmakeAppl(sym_TNil_0)));
                      }
                    }
                  }
                }
              else
                _fail(t);
            }
            t = i_9;
            return(t);
          }
          t = fetch_1(t, e_2);
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_59), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = tsubstitute_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm exp_overlays1_1 (ATerm t, ATerm n_45 (ATerm))
{
  ATerm f_2 (ATerm t)
  {
    ATerm j_9;
    j_9 = t;
    {
      ATerm k_9 = t;
      if(PushChoice()==0)
        {
          ATerm y_59 = NULL;
          t = n_45(t);
          y_59 = t;
          x_59 :
          if(!(match_cons(y_59, sym_Nil_0)))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        t = k_9;
    }
    t = j_9;
    {
      ATerm g_2 (ATerm t)
      {
        ATerm h_2 (ATerm t)
        {
          t = ExpOverlay_1(t, n_45);
          return(t);
        }
        t = repeat_1(t, h_2);
        return(t);
      }
      t = topdown_1(t, g_2);
    }
    return(t);
  }
  t = try_1(t, f_2);
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL;
  r_60 = t;
  f_60 :
  if(match_cons(r_60, sym_Specification_1))
    {
      s_60 = ATgetArgument(r_60, 0);
      i_60 :
      if(match_cons(s_60, sym_Cons_2))
        {
          t_60 = ATgetArgument(s_60, 0);
          v_60 = ATgetArgument(s_60, 1);
          j_60 :
          if(match_cons(t_60, sym_Signature_1))
            {
              u_60 = ATgetArgument(t_60, 0);
              k_60 :
              if(match_cons(v_60, sym_Cons_2))
                {
                  y_60 = ATgetArgument(v_60, 0);
                  a_61 = ATgetArgument(v_60, 1);
                  n_60 :
                  if(match_cons(y_60, sym_Overlays_1))
                    {
                      z_60 = ATgetArgument(y_60, 0);
                      o_60 :
                      if(match_cons(a_61, sym_Cons_2))
                        {
                          b_61 = ATgetArgument(a_61, 0);
                          d_61 = ATgetArgument(a_61, 1);
                          p_60 :
                          if(match_cons(b_61, sym_Strategies_1))
                            {
                              c_61 = ATgetArgument(b_61, 0);
                              q_60 :
                              if(match_cons(d_61, sym_Nil_0))
                                {
                                  ATerm l_61 = NULL;
                                  t = not_null(z_60);
                                  {
                                    ATerm n_61 = NULL;
                                    ATerm i_2 (ATerm t)
                                    {
                                      t = not_null(z_60);
                                      return(t);
                                    }
                                    t = exp_overlays1_1(t, i_2);
                                    l_61 = t;
                                    t = not_null(z_60);
                                    {
                                      ATerm p_61 = NULL;
                                      t = map_1(t, Overlay_to_Congdef_0);
                                      n_61 = t;
                                      t = not_null(c_61);
                                      {
                                        ATerm r_61 = NULL;
                                        ATerm j_2 (ATerm t)
                                        {
                                          t = not_null(l_61);
                                          return(t);
                                        }
                                        t = exp_overlays2_1(t, j_2);
                                        p_61 = t;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_61), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = conc_0(t);
                                        r_61 = t;
                                        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, not_null(u_60)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(r_61)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm l_9;
  l_9 = t;
  {
    ATerm k_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, k_2, _id);
    t = printnl_0(t);
  }
  t = l_9;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm m_9;
  m_9 = t;
  t = error_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  t = m_9;
  return(t);
}
ATerm MsgR_0 (ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL;
  f_62 = t;
  b_62 :
  if(match_cons(f_62, sym_TCons_2))
    {
      g_62 = ATgetArgument(f_62, 0);
      h_62 = ATgetArgument(f_62, 1);
      c_62 :
      if(match_cons(h_62, sym_TCons_2))
        {
          i_62 = ATgetArgument(h_62, 0);
          j_62 = ATgetArgument(h_62, 1);
          d_62 :
          if(match_cons(j_62, sym_TCons_2))
            {
              k_62 = ATgetArgument(j_62, 0);
              l_62 = ATgetArgument(j_62, 1);
              e_62 :
              if(match_cons(l_62, sym_TNil_0))
                {
                  ATerm p_62 = NULL;
                  t = not_null(g_62);
                  {
                    ATerm r_62 = NULL;
                    t = MsgU_0(t);
                    p_62 = t;
                    t = not_null(k_62);
                    t = MsgE_0(t);
                    r_62 = t;
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_62), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_62), (ATerm) ATmakeAppl(sym_Nil_0)));
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
  ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL,h_63 = NULL;
  d_63 = t;
  b_63 :
  if(match_cons(d_63, sym_Nil_0))
    t = (ATerm) ATmakeAppl(sym_Nil_0);
  else
    {
      if(match_cons(d_63, sym_Cons_2))
        {
          e_63 = ATgetArgument(d_63, 0);
          f_63 = ATgetArgument(d_63, 1);
          c_63 :
          if(match_cons(f_63, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_63), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
          else
            {
              if(match_cons(f_63, sym_Cons_2))
                {
                  g_63 = ATgetArgument(f_63, 0);
                  h_63 = ATgetArgument(f_63, 1);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_63), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_63), not_null(h_63))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL;
  w_63 = t;
  u_63 :
  if(match_cons(w_63, sym_Nil_0))
    t = (ATerm) ATmakeAppl(sym_Nil_0);
  else
    {
      if(match_cons(w_63, sym_Cons_2))
        {
          x_63 = ATgetArgument(w_63, 0);
          y_63 = ATgetArgument(w_63, 1);
          v_63 :
          if(match_cons(y_63, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_63), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
          else
            {
              if(match_cons(y_63, sym_Cons_2))
                {
                  z_63 = ATgetArgument(y_63, 0);
                  a_64 = ATgetArgument(y_63, 1);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_63), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_63), not_null(a_64))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL;
  v_64 = t;
  r_64 :
  if(match_cons(v_64, sym_TCons_2))
    {
      w_64 = ATgetArgument(v_64, 0);
      x_64 = ATgetArgument(v_64, 1);
      s_64 :
      if(match_cons(x_64, sym_TCons_2))
        {
          y_64 = ATgetArgument(x_64, 0);
          z_64 = ATgetArgument(x_64, 1);
          t_64 :
          if(match_cons(z_64, sym_TCons_2))
            {
              a_65 = ATgetArgument(z_64, 0);
              b_65 = ATgetArgument(z_64, 1);
              u_64 :
              if(match_cons(b_65, sym_TNil_0))
                {
                  ATerm m_65 = NULL;
                  t = not_null(w_64);
                  {
                    ATerm o_65 = NULL;
                    t = MsgU_0(t);
                    m_65 = t;
                    t = not_null(a_65);
                    t = MsgE_0(t);
                    o_65 = t;
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_65), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_65), (ATerm) ATmakeAppl(sym_Nil_0)));
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
  ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL;
  c_66 = t;
  b_66 :
  if(match_cons(c_66, sym_RDef_3))
    {
      d_66 = ATgetArgument(c_66, 0);
      e_66 = ATgetArgument(c_66, 1);
      f_66 = ATgetArgument(c_66, 2);
      {
        ATerm j_66 = NULL;
        t = not_null(f_66);
        t = map_1(t, MsgR_0);
        t = concat_0(t);
        j_66 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error in rule ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_66), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue)), not_null(j_66))));
      }
    }
  else
    {
      if(match_cons(c_66, sym_SDef_3))
        {
          d_66 = ATgetArgument(c_66, 0);
          e_66 = ATgetArgument(c_66, 1);
          f_66 = ATgetArgument(c_66, 2);
          {
            ATerm o_66 = NULL;
            t = not_null(f_66);
            t = map_1(t, MsgS_0);
            t = concat_0(t);
            o_66 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error in definition ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_66), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue)), not_null(o_66))));
          }
        }
      else
        {
          if(match_cons(c_66, sym_Overlay_3))
            {
              d_66 = ATgetArgument(c_66, 0);
              e_66 = ATgetArgument(c_66, 1);
              f_66 = ATgetArgument(c_66, 2);
              {
                ATerm t_66 = NULL;
                t = not_null(f_66);
                t = map_1(t, MsgR_0);
                t = concat_0(t);
                t_66 = t;
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error in overlay ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_66), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue)), not_null(t_66))));
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
ATerm Overlay_3 (ATerm t, ATerm b_41 (ATerm), ATerm c_41 (ATerm), ATerm d_41 (ATerm))
{
  ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL;
  g_67 = t;
  f_67 :
  if(match_cons(g_67, sym_Overlay_3))
    {
      h_67 = ATgetArgument(g_67, 0);
      i_67 = ATgetArgument(g_67, 1);
      j_67 = ATgetArgument(g_67, 2);
      {
        ATerm n_67 = NULL;
        t = not_null(h_67);
        {
          ATerm p_67 = NULL;
          t = b_41(t);
          n_67 = t;
          t = not_null(i_67);
          {
            ATerm r_67 = NULL;
            t = c_41(t);
            p_67 = t;
            t = not_null(j_67);
            t = d_41(t);
            r_67 = t;
            t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(n_67), not_null(p_67), not_null(r_67));
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
  ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL;
  m_68 = t;
  b_68 :
  if(match_cons(m_68, sym_TCons_2))
    {
      n_68 = ATgetArgument(m_68, 0);
      u_68 = ATgetArgument(m_68, 1);
      c_68 :
      if(match_cons(n_68, sym_TCons_2))
        {
          o_68 = ATgetArgument(n_68, 0);
          p_68 = ATgetArgument(n_68, 1);
          d_68 :
          if(match_cons(p_68, sym_TCons_2))
            {
              q_68 = ATgetArgument(p_68, 0);
              r_68 = ATgetArgument(p_68, 1);
              e_68 :
              if(match_cons(r_68, sym_TCons_2))
                {
                  s_68 = ATgetArgument(r_68, 0);
                  t_68 = ATgetArgument(r_68, 1);
                  f_68 :
                  if(match_cons(t_68, sym_TNil_0))
                    {
                      g_68 :
                      if(match_cons(u_68, sym_TCons_2))
                        {
                          v_68 = ATgetArgument(u_68, 0);
                          c_69 = ATgetArgument(u_68, 1);
                          h_68 :
                          if(match_cons(v_68, sym_TCons_2))
                            {
                              w_68 = ATgetArgument(v_68, 0);
                              x_68 = ATgetArgument(v_68, 1);
                              i_68 :
                              if(match_cons(x_68, sym_TCons_2))
                                {
                                  y_68 = ATgetArgument(x_68, 0);
                                  z_68 = ATgetArgument(x_68, 1);
                                  j_68 :
                                  if(match_cons(z_68, sym_TCons_2))
                                    {
                                      a_69 = ATgetArgument(z_68, 0);
                                      b_69 = ATgetArgument(z_68, 1);
                                      k_68 :
                                      if(match_cons(b_69, sym_TNil_0))
                                        {
                                          l_68 :
                                          if(match_cons(c_69, sym_TNil_0))
                                            {
                                              ATerm k_69 = NULL;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_68), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              {
                                                ATerm m_69 = NULL;
                                                t = union_0(t);
                                                k_69 = t;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_68), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                {
                                                  ATerm o_69 = NULL;
                                                  t = union_0(t);
                                                  m_69 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_69), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = union_0(t);
                                                  o_69 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_69), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm x_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL;
  x_69 = t;
  v_69 :
  if(match_cons(x_69, sym_TCons_2))
    {
      z_69 = ATgetArgument(x_69, 0);
      a_70 = ATgetArgument(x_69, 1);
      w_69 :
      if(match_cons(a_70, sym_TCons_2))
        {
          b_70 = ATgetArgument(a_70, 0);
          c_70 = ATgetArgument(a_70, 1);
          t = not_null(b_70);
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
  ATerm i_70 = NULL;
  i_70 = t;
  t = SSL_explode_term(not_null(i_70));
  return(t);
}
ATerm default_join_0 (ATerm t)
{
  t = explode_term_0(t);
  t = Snd_0(t);
  {
    ATerm l_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
      return(t);
    }
    ATerm m_2 (ATerm t)
    {
      t = cart_1(t, Union_0);
      return(t);
    }
    t = foldr_2(t, l_2, m_2);
  }
  return(t);
}
ATerm SeqUnion_0 (ATerm t)
{
  ATerm c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL;
  c_71 = t;
  r_70 :
  if(match_cons(c_71, sym_TCons_2))
    {
      d_71 = ATgetArgument(c_71, 0);
      l_71 = ATgetArgument(c_71, 1);
      s_70 :
      if(match_cons(d_71, sym_TCons_2))
        {
          e_71 = ATgetArgument(d_71, 0);
          f_71 = ATgetArgument(d_71, 1);
          t_70 :
          if(match_cons(f_71, sym_TCons_2))
            {
              g_71 = ATgetArgument(f_71, 0);
              h_71 = ATgetArgument(f_71, 1);
              u_70 :
              if(match_cons(h_71, sym_TCons_2))
                {
                  j_71 = ATgetArgument(h_71, 0);
                  k_71 = ATgetArgument(h_71, 1);
                  v_70 :
                  if(match_cons(k_71, sym_TNil_0))
                    {
                      w_70 :
                      if(match_cons(l_71, sym_TCons_2))
                        {
                          m_71 = ATgetArgument(l_71, 0);
                          t_71 = ATgetArgument(l_71, 1);
                          x_70 :
                          if(match_cons(m_71, sym_TCons_2))
                            {
                              n_71 = ATgetArgument(m_71, 0);
                              o_71 = ATgetArgument(m_71, 1);
                              y_70 :
                              if(match_cons(o_71, sym_TCons_2))
                                {
                                  p_71 = ATgetArgument(o_71, 0);
                                  q_71 = ATgetArgument(o_71, 1);
                                  z_70 :
                                  if(match_cons(q_71, sym_TCons_2))
                                    {
                                      r_71 = ATgetArgument(q_71, 0);
                                      s_71 = ATgetArgument(q_71, 1);
                                      a_71 :
                                      if(match_cons(s_71, sym_TNil_0))
                                        {
                                          b_71 :
                                          if(match_cons(t_71, sym_TNil_0))
                                            {
                                              ATerm a_72 = NULL;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              {
                                                ATerm c_72 = NULL;
                                                t = diff_0(t);
                                                a_72 = t;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_72), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                {
                                                  ATerm e_72 = NULL;
                                                  t = union_0(t);
                                                  c_72 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  {
                                                    ATerm g_72 = NULL;
                                                    t = union_0(t);
                                                    e_72 = t;
                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                    t = union_0(t);
                                                    g_72 = t;
                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_72), (ATerm) ATmakeAppl(sym_TNil_0))));
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
ATerm cart_1 (ATerm t, ATerm a_57 (ATerm))
{
  ATerm t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL;
  t_72 = t;
  q_72 :
  if(match_cons(t_72, sym_TCons_2))
    {
      u_72 = ATgetArgument(t_72, 0);
      v_72 = ATgetArgument(t_72, 1);
      r_72 :
      if(match_cons(v_72, sym_TCons_2))
        {
          w_72 = ATgetArgument(v_72, 0);
          x_72 = ATgetArgument(v_72, 1);
          s_72 :
          if(match_cons(x_72, sym_TNil_0))
            {
              t = not_null(u_72);
              {
                ATerm n_2 (ATerm t)
                {
                  ATerm c_73 = NULL;
                  c_73 = t;
                  t = not_null(w_72);
                  {
                    ATerm o_2 (ATerm t)
                    {
                      ATerm e_73 = NULL;
                      e_73 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = a_57(t);
                      return(t);
                    }
                    t = map_1(t, o_2);
                  }
                  return(t);
                }
                t = map_1(t, n_2);
                {
                  ATerm p_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = foldr_2(t, p_2, union_0);
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
  ATerm q_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = cart_1(t, SeqUnion_0);
    return(t);
  }
  t = foldr_2(t, q_2, r_2);
  return(t);
}
ATerm JoinScope_1 (ATerm t, ATerm i_44 (ATerm))
{
  ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL;
  t_73 = t;
  p_73 :
  if(match_cons(t_73, sym_TCons_2))
    {
      u_73 = ATgetArgument(t_73, 0);
      v_73 = ATgetArgument(t_73, 1);
      q_73 :
      if(match_cons(v_73, sym_TCons_2))
        {
          w_73 = ATgetArgument(v_73, 0);
          x_73 = ATgetArgument(v_73, 1);
          r_73 :
          if(match_cons(x_73, sym_TCons_2))
            {
              y_73 = ATgetArgument(x_73, 0);
              z_73 = ATgetArgument(x_73, 1);
              s_73 :
              if(match_cons(z_73, sym_TNil_0))
                {
                  ATerm d_74 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TNil_0);
                  {
                    ATerm f_74 = NULL;
                    t = i_44(t);
                    d_74 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm h_74 = NULL;
                      t = diff_0(t);
                      f_74 = t;
                      t = (ATerm) ATmakeAppl(sym_TNil_0);
                      {
                        ATerm j_74 = NULL;
                        t = i_44(t);
                        h_74 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                        {
                          ATerm l_74 = NULL;
                          t = isect_0(t);
                          j_74 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = conc_0(t);
                          l_74 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_74), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL;
  g_75 = t;
  f_75 :
  if(match_cons(g_75, sym_Seqs_1))
    {
      h_75 = ATgetArgument(g_75, 0);
      t = not_null(h_75);
      t = seqs_join_0(t);
    }
  else
    {
      if(match_cons(g_75, sym_Seq_2))
        {
          h_75 = ATgetArgument(g_75, 0);
          i_75 = ATgetArgument(g_75, 1);
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_75), (ATerm) ATmakeAppl(sym_Nil_0)));
          t = seqs_join_0(t);
        }
      else
        {
          if(match_cons(g_75, sym_Rule_3))
            {
              h_75 = ATgetArgument(g_75, 0);
              i_75 = ATgetArgument(g_75, 1);
              j_75 = ATgetArgument(g_75, 2);
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_75), (ATerm) ATmakeAppl(sym_Nil_0))));
              t = seqs_join_0(t);
            }
          else
            {
              if(match_cons(g_75, sym_StratRule_3))
                {
                  h_75 = ATgetArgument(g_75, 0);
                  i_75 = ATgetArgument(g_75, 1);
                  j_75 = ATgetArgument(g_75, 2);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_75), (ATerm) ATmakeAppl(sym_Nil_0))));
                  t = seqs_join_0(t);
                }
              else
                {
                  if(match_cons(g_75, sym_MA_2))
                    {
                      h_75 = ATgetArgument(g_75, 0);
                      i_75 = ATgetArgument(g_75, 1);
                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_75), (ATerm) ATmakeAppl(sym_Nil_0)));
                      t = seqs_join_0(t);
                    }
                  else
                    {
                      if(match_cons(g_75, sym_AM_2))
                        {
                          h_75 = ATgetArgument(g_75, 0);
                          i_75 = ATgetArgument(g_75, 1);
                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_75), (ATerm) ATmakeAppl(sym_Nil_0)));
                          t = seqs_join_0(t);
                        }
                      else
                        {
                          if(match_cons(g_75, sym_BA_2))
                            {
                              h_75 = ATgetArgument(g_75, 0);
                              i_75 = ATgetArgument(g_75, 1);
                              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_75), (ATerm) ATmakeAppl(sym_Nil_0)));
                              t = seqs_join_0(t);
                            }
                          else
                            {
                              if(match_cons(g_75, sym_BAM_3))
                                {
                                  h_75 = ATgetArgument(g_75, 0);
                                  i_75 = ATgetArgument(g_75, 1);
                                  j_75 = ATgetArgument(g_75, 2);
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_75), (ATerm) ATmakeAppl(sym_Nil_0))));
                                  t = seqs_join_0(t);
                                }
                              else
                                {
                                  if(match_cons(g_75, sym_Cong_2))
                                    {
                                      h_75 = ATgetArgument(g_75, 0);
                                      i_75 = ATgetArgument(g_75, 1);
                                      t = not_null(i_75);
                                      t = seqs_join_0(t);
                                    }
                                  else
                                    {
                                      if(match_cons(g_75, sym_Scope_2))
                                        {
                                          h_75 = ATgetArgument(g_75, 0);
                                          i_75 = ATgetArgument(g_75, 1);
                                          t = not_null(i_75);
                                          {
                                            ATerm s_2 (ATerm t)
                                            {
                                              ATerm t_2 (ATerm t)
                                              {
                                                t = not_null(h_75);
                                                return(t);
                                              }
                                              t = JoinScope_1(t, t_2);
                                              return(t);
                                            }
                                            t = map_1(t, s_2);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(g_75, sym_Overlay_3))
                                            {
                                              h_75 = ATgetArgument(g_75, 0);
                                              i_75 = ATgetArgument(g_75, 1);
                                              j_75 = ATgetArgument(g_75, 2);
                                              {
                                                ATerm j_76 = NULL;
                                                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_75), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_75), (ATerm) ATmakeAppl(sym_Nil_0)));
                                                t = seqs_join_0(t);
                                                j_76 = t;
                                                t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(h_75), not_null(i_75), not_null(j_76));
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
ATerm Cong_2 (ATerm t, ATerm a_43 (ATerm), ATerm b_43 (ATerm))
{
  ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL;
  b_77 = t;
  a_77 :
  if(match_cons(b_77, sym_Cong_2))
    {
      c_77 = ATgetArgument(b_77, 0);
      d_77 = ATgetArgument(b_77, 1);
      {
        ATerm g_77 = NULL;
        t = not_null(c_77);
        {
          ATerm i_77 = NULL;
          t = a_43(t);
          g_77 = t;
          t = not_null(d_77);
          t = b_43(t);
          i_77 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(g_77), not_null(i_77));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm use_term_0 (ATerm t)
{
  ATerm q_77 = NULL;
  ATerm s_77 = NULL;
  q_77 = t;
  t = tvars_0(t);
  s_77 = t;
  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(s_77), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
  return(t);
}
ATerm def_term_0 (ATerm t)
{
  ATerm z_77 = NULL;
  ATerm b_78 = NULL;
  z_77 = t;
  t = tvars_0(t);
  b_78 = t;
  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_78), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm m_40 (ATerm), ATerm n_40 (ATerm), ATerm o_40 (ATerm))
{
  ATerm l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL;
  l_78 = t;
  k_78 :
  if(match_cons(l_78, sym_Rule_3))
    {
      m_78 = ATgetArgument(l_78, 0);
      n_78 = ATgetArgument(l_78, 1);
      o_78 = ATgetArgument(l_78, 2);
      {
        ATerm t_78 = NULL;
        t = not_null(m_78);
        {
          ATerm v_78 = NULL;
          t = m_40(t);
          t_78 = t;
          t = not_null(n_78);
          {
            ATerm y_78 = NULL;
            t = n_40(t);
            v_78 = t;
            t = not_null(o_78);
            t = o_40(t);
            y_78 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_78), not_null(v_78), not_null(y_78));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BAM_3 (ATerm t, ATerm u_39 (ATerm), ATerm v_39 (ATerm), ATerm w_39 (ATerm))
{
  ATerm k_79 = NULL,n_79 = NULL,o_79 = NULL,p_79 = NULL;
  k_79 = t;
  j_79 :
  if(match_cons(k_79, sym_BAM_3))
    {
      n_79 = ATgetArgument(k_79, 0);
      o_79 = ATgetArgument(k_79, 1);
      p_79 = ATgetArgument(k_79, 2);
      {
        ATerm t_79 = NULL;
        t = not_null(n_79);
        {
          ATerm w_79 = NULL;
          t = u_39(t);
          t_79 = t;
          t = not_null(o_79);
          {
            ATerm y_79 = NULL;
            t = v_39(t);
            w_79 = t;
            t = not_null(p_79);
            t = w_39(t);
            y_79 = t;
            t = (ATerm) ATmakeAppl(sym_BAM_3, not_null(t_79), not_null(w_79), not_null(y_79));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BA_2 (ATerm t, ATerm s_39 (ATerm), ATerm t_39 (ATerm))
{
  ATerm j_80 = NULL,k_80 = NULL,l_80 = NULL;
  j_80 = t;
  i_80 :
  if(match_cons(j_80, sym_BA_2))
    {
      k_80 = ATgetArgument(j_80, 0);
      l_80 = ATgetArgument(j_80, 1);
      {
        ATerm o_80 = NULL;
        t = not_null(k_80);
        {
          ATerm q_80 = NULL;
          t = s_39(t);
          o_80 = t;
          t = not_null(l_80);
          t = t_39(t);
          q_80 = t;
          t = (ATerm) ATmakeAppl(sym_BA_2, not_null(o_80), not_null(q_80));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm AM_2 (ATerm t, ATerm q_39 (ATerm), ATerm r_39 (ATerm))
{
  ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL;
  z_80 = t;
  y_80 :
  if(match_cons(z_80, sym_AM_2))
    {
      a_81 = ATgetArgument(z_80, 0);
      b_81 = ATgetArgument(z_80, 1);
      {
        ATerm e_81 = NULL;
        t = not_null(a_81);
        {
          ATerm g_81 = NULL;
          t = q_39(t);
          e_81 = t;
          t = not_null(b_81);
          t = r_39(t);
          g_81 = t;
          t = (ATerm) ATmakeAppl(sym_AM_2, not_null(e_81), not_null(g_81));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MA_2 (ATerm t, ATerm o_39 (ATerm), ATerm p_39 (ATerm))
{
  ATerm p_81 = NULL,q_81 = NULL,r_81 = NULL;
  p_81 = t;
  o_81 :
  if(match_cons(p_81, sym_MA_2))
    {
      q_81 = ATgetArgument(p_81, 0);
      r_81 = ATgetArgument(p_81, 1);
      {
        ATerm u_81 = NULL;
        t = not_null(q_81);
        {
          ATerm w_81 = NULL;
          t = o_39(t);
          u_81 = t;
          t = not_null(r_81);
          t = p_39(t);
          w_81 = t;
          t = (ATerm) ATmakeAppl(sym_MA_2, not_null(u_81), not_null(w_81));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm i_43 (ATerm))
{
  ATerm e_82 = NULL,f_82 = NULL;
  e_82 = t;
  d_82 :
  if(match_cons(e_82, sym_Match_1))
    {
      f_82 = ATgetArgument(e_82, 0);
      {
        ATerm h_82 = NULL;
        t = not_null(f_82);
        t = i_43(t);
        h_82 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(h_82));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm j_43 (ATerm))
{
  ATerm p_82 = NULL,q_82 = NULL;
  p_82 = t;
  o_82 :
  if(match_cons(p_82, sym_Build_1))
    {
      q_82 = ATgetArgument(p_82, 0);
      {
        ATerm s_82 = NULL;
        t = not_null(q_82);
        t = j_43(t);
        s_82 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(s_82));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm constructs_1 (ATerm t, ATerm h_44 (ATerm))
{
  ATerm n_9 = t;
  if(PushChoice()==0)
    {
      t = Build_1(t, use_term_0);
      PopChoice();
    }
  else
    {
      t = n_9;
      {
        ATerm o_9 = t;
        if(PushChoice()==0)
          {
            t = Match_1(t, def_term_0);
            PopChoice();
          }
        else
          {
            t = o_9;
            {
              ATerm p_9 = t;
              if(PushChoice()==0)
                {
                  t = MA_2(t, def_term_0, h_44);
                  PopChoice();
                }
              else
                {
                  t = p_9;
                  {
                    ATerm q_9 = t;
                    if(PushChoice()==0)
                      {
                        t = AM_2(t, h_44, def_term_0);
                        PopChoice();
                      }
                    else
                      {
                        t = q_9;
                        {
                          ATerm r_9 = t;
                          if(PushChoice()==0)
                            {
                              t = BA_2(t, h_44, use_term_0);
                              PopChoice();
                            }
                          else
                            {
                              t = r_9;
                              {
                                ATerm s_9 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BAM_3(t, h_44, use_term_0, def_term_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = s_9;
                                    {
                                      ATerm t_9 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Scope_2(t, _id, h_44);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = t_9;
                                          {
                                            ATerm u_9 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = Rule_3(t, def_term_0, use_term_0, h_44);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = u_9;
                                                {
                                                  ATerm v_9 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = Overlay_3(t, _id, _id, use_term_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = v_9;
                                                      {
                                                        ATerm u_2 (ATerm t)
                                                        {
                                                          t = map_1(t, h_44);
                                                          return(t);
                                                        }
                                                        t = Cong_2(t, _id, u_2);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm w_9 = t;
  if(PushChoice()==0)
    {
      t = constructs_1(t, use_def_0);
      PopChoice();
    }
  else
    {
      t = w_9;
      t = _all(t, use_def_0);
    }
  {
    ATerm x_9 = t;
    if(PushChoice()==0)
      {
        t = UDjoin_0(t);
        PopChoice();
      }
    else
      {
        t = x_9;
        t = default_join_0(t);
      }
  }
  return(t);
}
ATerm RDef_3 (ATerm t, ATerm u_40 (ATerm), ATerm v_40 (ATerm), ATerm w_40 (ATerm))
{
  ATerm e_83 = NULL,f_83 = NULL,j_83 = NULL,k_83 = NULL;
  e_83 = t;
  d_83 :
  if(match_cons(e_83, sym_RDef_3))
    {
      f_83 = ATgetArgument(e_83, 0);
      j_83 = ATgetArgument(e_83, 1);
      k_83 = ATgetArgument(e_83, 2);
      {
        ATerm o_83 = NULL;
        t = not_null(f_83);
        {
          ATerm q_83 = NULL;
          t = u_40(t);
          o_83 = t;
          t = not_null(j_83);
          {
            ATerm s_83 = NULL;
            t = v_40(t);
            q_83 = t;
            t = not_null(k_83);
            t = w_40(t);
            s_83 = t;
            t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(o_83), not_null(q_83), not_null(s_83));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm m_42 (ATerm), ATerm n_42 (ATerm), ATerm o_42 (ATerm))
{
  ATerm d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL;
  d_84 = t;
  c_84 :
  if(match_cons(d_84, sym_SDef_3))
    {
      e_84 = ATgetArgument(d_84, 0);
      f_84 = ATgetArgument(d_84, 1);
      g_84 = ATgetArgument(d_84, 2);
      {
        ATerm k_84 = NULL;
        t = not_null(e_84);
        {
          ATerm m_84 = NULL;
          t = m_42(t);
          k_84 = t;
          t = not_null(f_84);
          {
            ATerm o_84 = NULL;
            t = n_42(t);
            m_84 = t;
            t = not_null(g_84);
            t = o_42(t);
            o_84 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_84), not_null(m_84), not_null(o_84));
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
  ATerm y_9 = t;
  if(PushChoice()==0)
    {
      ATerm v_2 (ATerm t)
      {
        t = use_def_0(t);
        {
          ATerm z_9 = t;
          if(PushChoice()==0)
            {
              ATerm w_2 (ATerm t)
              {
                ATerm x_2 (ATerm t)
                {
                  ATerm y_2 (ATerm t)
                  {
                    t = TCons_2(t, Nil_0, TNil_0);
                    return(t);
                  }
                  t = TCons_2(t, _id, y_2);
                  return(t);
                }
                t = TCons_2(t, Nil_0, x_2);
                return(t);
              }
              t = Cons_2(t, w_2, Nil_0);
              PopChoice();
              _fail(t);
            }
          else
            t = z_9;
        }
        return(t);
      }
      t = SDef_3(t, _id, _id, v_2);
      t = err_msg_0(t);
      PopChoice();
    }
  else
    {
      t = y_9;
      {
        ATerm a_10 = t;
        if(PushChoice()==0)
          {
            ATerm z_2 (ATerm t)
            {
              t = use_def_0(t);
              {
                ATerm b_10 = t;
                if(PushChoice()==0)
                  {
                    ATerm a_3 (ATerm t)
                    {
                      ATerm b_3 (ATerm t)
                      {
                        ATerm c_3 (ATerm t)
                        {
                          t = TCons_2(t, Nil_0, TNil_0);
                          return(t);
                        }
                        t = TCons_2(t, _id, c_3);
                        return(t);
                      }
                      t = TCons_2(t, Nil_0, b_3);
                      return(t);
                    }
                    t = Cons_2(t, a_3, Nil_0);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = b_10;
              }
              return(t);
            }
            t = RDef_3(t, _id, _id, z_2);
            t = err_msg_0(t);
            PopChoice();
          }
        else
          {
            t = a_10;
            t = Overlay_3(t, _id, _id, _id);
            t = use_def_0(t);
            {
              ATerm c_10 = t;
              if(PushChoice()==0)
                {
                  ATerm d_3 (ATerm t)
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
                        t = TCons_2(t, Nil_0, g_3);
                        return(t);
                      }
                      t = TCons_2(t, Nil_0, f_3);
                      return(t);
                    }
                    t = Cons_2(t, e_3, Nil_0);
                    return(t);
                  }
                  t = Overlay_3(t, _id, _id, d_3);
                  PopChoice();
                  _fail(t);
                }
              else
                t = c_10;
              t = err_msg_0(t);
            }
          }
      }
    }
  return(t);
}
ATerm defs_use_def_0 (ATerm t)
{
  ATerm v_84 = NULL;
  t = filter_1(t, check_0);
  v_84 = t;
  u_84 :
  if(!(match_cons(v_84, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm Overlays_1 (ATerm t, ATerm f_41 (ATerm))
{
  ATerm z_84 = NULL,a_85 = NULL;
  z_84 = t;
  y_84 :
  if(match_cons(z_84, sym_Overlays_1))
    {
      a_85 = ATgetArgument(z_84, 0);
      {
        ATerm c_85 = NULL;
        t = not_null(a_85);
        t = f_41(t);
        c_85 = t;
        t = (ATerm) ATmakeAppl(sym_Overlays_1, not_null(c_85));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm e_41 (ATerm))
{
  ATerm j_85 = NULL,k_85 = NULL;
  j_85 = t;
  i_85 :
  if(match_cons(j_85, sym_Signature_1))
    {
      k_85 = ATgetArgument(j_85, 0);
      {
        ATerm m_85 = NULL;
        t = not_null(k_85);
        t = e_41(t);
        m_85 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, not_null(m_85));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm spec_use_def_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm i_3 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm j_3 (ATerm t)
    {
      ATerm k_3 (ATerm t)
      {
        t = Overlays_1(t, defs_use_def_0);
        return(t);
      }
      ATerm l_3 (ATerm t)
      {
        ATerm m_3 (ATerm t)
        {
          t = Strategies_1(t, defs_use_def_0);
          return(t);
        }
        t = Cons_2(t, m_3, Nil_0);
        return(t);
      }
      t = Cons_2(t, k_3, l_3);
      return(t);
    }
    t = Cons_2(t, i_3, j_3);
    return(t);
  }
  t = Specification_1(t, h_3);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm b_86 = NULL,d_86 = NULL,e_86 = NULL,f_86 = NULL,g_86 = NULL,h_86 = NULL,i_86 = NULL,j_86 = NULL,k_86 = NULL,l_86 = NULL,n_86 = NULL,o_86 = NULL,p_86 = NULL;
  b_86 = t;
  r_85 :
  if(match_cons(b_86, sym_TCons_2))
    {
      d_86 = ATgetArgument(b_86, 0);
      i_86 = ATgetArgument(b_86, 1);
      s_85 :
      if(match_cons(d_86, sym_TCons_2))
        {
          e_86 = ATgetArgument(d_86, 0);
          f_86 = ATgetArgument(d_86, 1);
          t_85 :
          if(match_cons(f_86, sym_TCons_2))
            {
              g_86 = ATgetArgument(f_86, 0);
              h_86 = ATgetArgument(f_86, 1);
              u_85 :
              if(match_cons(h_86, sym_TNil_0))
                {
                  v_85 :
                  if(match_cons(i_86, sym_TCons_2))
                    {
                      j_86 = ATgetArgument(i_86, 0);
                      p_86 = ATgetArgument(i_86, 1);
                      w_85 :
                      if(match_cons(j_86, sym_TCons_2))
                        {
                          k_86 = ATgetArgument(j_86, 0);
                          l_86 = ATgetArgument(j_86, 1);
                          y_85 :
                          if(match_cons(l_86, sym_TCons_2))
                            {
                              n_86 = ATgetArgument(l_86, 0);
                              o_86 = ATgetArgument(l_86, 1);
                              z_85 :
                              if(match_cons(o_86, sym_TNil_0))
                                {
                                  a_86 :
                                  if(match_cons(p_86, sym_TNil_0))
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_86), not_null(k_86)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_86), not_null(n_86)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm y_86 = NULL,z_86 = NULL,a_87 = NULL;
  y_86 = t;
  x_86 :
  if(match_cons(y_86, sym_Cons_2))
    {
      z_86 = ATgetArgument(y_86, 0);
      a_87 = ATgetArgument(y_86, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_86), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_87), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm h_87 = NULL;
  h_87 = t;
  g_87 :
  if(match_cons(h_87, sym_Nil_0))
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
  ATerm n_3 (ATerm t)
  {
    ATerm k_87 = NULL;
    k_87 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_87));
    return(t);
  }
  t = map_1(t, n_3);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm q_87 = NULL,r_87 = NULL,s_87 = NULL;
  q_87 = t;
  p_87 :
  if(match_cons(q_87, sym_Cons_2))
    {
      r_87 = ATgetArgument(q_87, 0);
      s_87 = ATgetArgument(q_87, 1);
      t = not_null(s_87);
    }
  else
    _fail(t);
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm b_88 = NULL,c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL;
  b_88 = t;
  y_87 :
  if(match_cons(b_88, sym_TCons_2))
    {
      c_88 = ATgetArgument(b_88, 0);
      d_88 = ATgetArgument(b_88, 1);
      z_87 :
      if(match_cons(d_88, sym_TCons_2))
        {
          e_88 = ATgetArgument(d_88, 0);
          f_88 = ATgetArgument(d_88, 1);
          a_88 :
          if(match_cons(f_88, sym_TNil_0))
            {
              t = not_null(c_88);
              {
                ATerm j_88 (ATerm t)
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
                        ATerm f_10 = t;
                        if(PushChoice()==0)
                          {
                            ATerm g_10;
                            g_10 = t;
                            {
                              ATerm o_3 (ATerm t)
                              {
                                t = not_null(e_88);
                                return(t);
                              }
                              t = HdMember_1(t, o_3);
                            }
                            t = g_10;
                            t = Cons_2(t, _id, j_88);
                            PopChoice();
                          }
                        else
                          {
                            t = f_10;
                            t = Tl_0(t);
                            t = j_88(t);
                          }
                      }
                    }
                  return(t);
                }
                t = j_88(t);
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
  ATerm o_88 = NULL,p_88 = NULL,q_88 = NULL,r_88 = NULL,s_88 = NULL;
  o_88 = t;
  l_88 :
  if(match_cons(o_88, sym_TCons_2))
    {
      p_88 = ATgetArgument(o_88, 0);
      q_88 = ATgetArgument(o_88, 1);
      m_88 :
      if(match_cons(q_88, sym_TCons_2))
        {
          r_88 = ATgetArgument(q_88, 0);
          s_88 = ATgetArgument(q_88, 1);
          n_88 :
          if(match_cons(s_88, sym_TNil_0))
            {
              if(p_88 != NULL && p_88 != r_88)
                _fail(r_88);
              else
                p_88 = r_88;
            }
          else
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
  ATerm p_89 = NULL,q_89 = NULL,r_89 = NULL,s_89 = NULL,t_89 = NULL,u_89 = NULL,v_89 = NULL,w_89 = NULL,x_89 = NULL;
  ATerm g_91 (ATerm t)
  {
    ATerm p_90 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_89), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm h_10 = t;
      if(PushChoice()==0)
        {
          t = eq_0(t);
          PopChoice();
          _fail(t);
        }
      else
        t = h_10;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm r_90 = NULL;
        t = a_0(t);
        p_90 = t;
        t = not_null(v_89);
        {
          ATerm t_90 = NULL;
          t = tvars_0(t);
          r_90 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_90), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_90), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = isect_0(t);
          {
            ATerm v_90 = NULL;
            t = strings_to_vars_0(t);
            t_90 = t;
            t = (ATerm) ATmakeAppl(sym_TNil_0);
            {
              ATerm x_90 = NULL;
              t = a_0(t);
              v_90 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_89), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_89), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm z_90 = NULL;
                t = tvars_0(t);
                x_90 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_90), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_90), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = isect_0(t);
                {
                  ATerm b_91 = NULL;
                  t = strings_to_vars_0(t);
                  z_90 = t;
                  {
                    ATerm d_91 = NULL;
                    t = new_0(t);
                    b_91 = t;
                    t = not_null(s_89);
                    t = b_0(t);
                    d_91 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(d_91), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(t_90)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Str_1, not_null(b_91)), not_null(z_90))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_RDef_3, not_null(s_89), not_null(t_89), (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_89), not_null(w_89), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(s_89))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(t_90)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Str_1, not_null(b_91)), not_null(z_90)))), not_null(x_89)))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  r_89 = t;
  j_89 :
  if(match_cons(r_89, sym_RDef_3))
    {
      s_89 = ATgetArgument(r_89, 0);
      t_89 = ATgetArgument(r_89, 1);
      u_89 = ATgetArgument(r_89, 2);
      k_89 :
      if(match_cons(u_89, sym_Rule_3))
        {
          v_89 = ATgetArgument(u_89, 0);
          w_89 = ATgetArgument(u_89, 1);
          x_89 = ATgetArgument(u_89, 2);
          l_89 :
          if(match_cons(w_89, sym_Op_2))
            {
              p_89 = ATgetArgument(w_89, 0);
              q_89 = ATgetArgument(w_89, 1);
              m_89 :
              if(match_cons(q_89, sym_Nil_0))
                {
                  n_89 :
                  if(match_string(p_89, "Undefined"))
                    {
                      ATerm i_10 = t;
                      if(PushChoice()==0)
                        {
                          ATerm c_90 = NULL;
                          t = (ATerm) ATmakeAppl(sym_TNil_0);
                          {
                            ATerm e_90 = NULL;
                            t = a_0(t);
                            c_90 = t;
                            t = not_null(v_89);
                            {
                              ATerm g_90 = NULL;
                              t = tvars_0(t);
                              e_90 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_90), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_90), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = isect_0(t);
                              {
                                ATerm i_90 = NULL;
                                t = strings_to_vars_0(t);
                                g_90 = t;
                                t = not_null(s_89);
                                t = b_0(t);
                                i_90 = t;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(i_90), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(g_90)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_RDef_3, not_null(s_89), not_null(t_89), (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_89), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(s_89))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(g_90)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_89), (ATerm) ATmakeAppl(sym_Fail_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
                              }
                            }
                          }
                          PopChoice();
                        }
                      else
                        {
                          t = i_10;
                          t = g_91(t);
                        }
                    }
                  else
                    t = g_91(t);
                }
              else
                {
                  o_89 :
                  t = g_91(t);
                }
            }
          else
            t = g_91(t);
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
  ATerm d_92 = NULL,e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL,i_92 = NULL;
  d_92 = t;
  x_91 :
  if(match_cons(d_92, sym_TCons_2))
    {
      e_92 = ATgetArgument(d_92, 0);
      g_92 = ATgetArgument(d_92, 1);
      y_91 :
      if(match_cons(e_92, sym_DynamicRules_1))
        {
          f_92 = ATgetArgument(e_92, 0);
          z_91 :
          if(match_cons(g_92, sym_TCons_2))
            {
              h_92 = ATgetArgument(g_92, 0);
              i_92 = ATgetArgument(g_92, 1);
              a_92 :
              if(match_cons(i_92, sym_TNil_0))
                {
                  t = not_null(f_92);
                  {
                    ATerm p_3 (ATerm t)
                    {
                      ATerm q_3 (ATerm t)
                      {
                        t = not_null(h_92);
                        return(t);
                      }
                      ATerm r_3 (ATerm t)
                      {
                        ATerm l_92 = NULL;
                        l_92 = t;
                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(l_92))), (ATerm) ATmakeAppl(sym_Nil_0)));
                        return(t);
                      }
                      t = SplitDynamicRule_2(t, q_3, r_3);
                      return(t);
                    }
                    t = map_1(t, p_3);
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
          if(match_cons(e_92, sym_OverrideDynamicRules_1))
            {
              f_92 = ATgetArgument(e_92, 0);
              b_92 :
              if(match_cons(g_92, sym_TCons_2))
                {
                  h_92 = ATgetArgument(g_92, 0);
                  i_92 = ATgetArgument(g_92, 1);
                  c_92 :
                  if(match_cons(i_92, sym_TNil_0))
                    {
                      t = not_null(f_92);
                      {
                        ATerm s_3 (ATerm t)
                        {
                          ATerm t_3 (ATerm t)
                          {
                            t = not_null(h_92);
                            return(t);
                          }
                          ATerm u_3 (ATerm t)
                          {
                            ATerm q_92 = NULL;
                            q_92 = t;
                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(q_92))), (ATerm) ATmakeAppl(sym_Nil_0)));
                            return(t);
                          }
                          t = SplitDynamicRule_2(t, t_3, u_3);
                          return(t);
                        }
                        t = map_1(t, s_3);
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
ATerm dist_scope_1 (ATerm t, ATerm u_65 (ATerm))
{
  ATerm d_93 = NULL,e_93 = NULL,f_93 = NULL,g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL;
  d_93 = t;
  z_92 :
  if(match_cons(d_93, sym_TCons_2))
    {
      e_93 = ATgetArgument(d_93, 0);
      h_93 = ATgetArgument(d_93, 1);
      a_93 :
      if(match_cons(e_93, sym_Scope_2))
        {
          f_93 = ATgetArgument(e_93, 0);
          g_93 = ATgetArgument(e_93, 1);
          b_93 :
          if(match_cons(h_93, sym_TCons_2))
            {
              i_93 = ATgetArgument(h_93, 0);
              j_93 = ATgetArgument(h_93, 1);
              c_93 :
              if(match_cons(j_93, sym_TNil_0))
                {
                  ATerm n_93 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_93), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_93), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm q_93 = NULL;
                    t = union_0(t);
                    n_93 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_93), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_93), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = u_65(t);
                    q_93 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_93), not_null(q_93));
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
ATerm one_dist_1 (ATerm t, ATerm h_60 (ATerm))
{
  ATerm a_94 = NULL,b_94 = NULL,c_94 = NULL,d_94 = NULL,e_94 = NULL;
  a_94 = t;
  x_93 :
  if(match_cons(a_94, sym_TCons_2))
    {
      b_94 = ATgetArgument(a_94, 0);
      c_94 = ATgetArgument(a_94, 1);
      y_93 :
      if(match_cons(c_94, sym_TCons_2))
        {
          d_94 = ATgetArgument(c_94, 0);
          e_94 = ATgetArgument(c_94, 1);
          z_93 :
          if(match_cons(e_94, sym_TNil_0))
            {
              t = not_null(b_94);
              {
                ATerm v_3 (ATerm t)
                {
                  ATerm h_94 = NULL;
                  h_94 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_94), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_94), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = h_60(t);
                  return(t);
                }
                t = _one(t, v_3);
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
ATerm env_oncetd_1 (ATerm t, ATerm w_60 (ATerm))
{
  ATerm l_94 (ATerm t)
  {
    ATerm j_10 = t;
    if(PushChoice()==0)
      {
        t = w_60(t);
        PopChoice();
      }
    else
      {
        t = j_10;
        t = one_dist_1(t, l_94);
      }
    return(t);
  }
  t = l_94(t);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm u_94 = NULL,v_94 = NULL,w_94 = NULL;
  u_94 = t;
  t_94 :
  if(match_cons(u_94, sym_Cons_2))
    {
      v_94 = ATgetArgument(u_94, 0);
      w_94 = ATgetArgument(u_94, 1);
      {
        ATerm z_94 = NULL;
        t = not_null(v_94);
        {
          ATerm b_95 = NULL,c_95 = NULL,j_95 = NULL;
          t = tvars_0(t);
          z_94 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_94), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_94), (ATerm) ATmakeAppl(sym_TNil_0)));
          {
            ATerm n_95 (ATerm t)
            {
              ATerm w_3 (ATerm t)
              {
                ATerm k_10 = t;
                if(PushChoice()==0)
                  {
                    t = dist_scope_1(t, n_95);
                    PopChoice();
                  }
                else
                  {
                    t = k_10;
                    {
                      ATerm d_95 = NULL,e_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL;
                      t = split_dynamic_rules_0(t);
                      d_95 = t;
                      p_94 :
                      if(match_cons(d_95, sym_TCons_2))
                        {
                          e_95 = ATgetArgument(d_95, 0);
                          g_95 = ATgetArgument(d_95, 1);
                          q_94 :
                          if(match_cons(g_95, sym_TCons_2))
                            {
                              h_95 = ATgetArgument(g_95, 0);
                              i_95 = ATgetArgument(g_95, 1);
                              r_94 :
                              if(match_cons(i_95, sym_TNil_0))
                                {
                                  if(c_95 != NULL && c_95 != e_95)
                                    _fail(e_95);
                                  else
                                    c_95 = e_95;
                                  if(b_95 != NULL && b_95 != h_95)
                                    _fail(h_95);
                                  else
                                    b_95 = h_95;
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(c_95));
                                }
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
              t = env_oncetd_1(t, w_3);
              return(t);
            }
            t = n_95(t);
            j_95 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_95), not_null(b_95)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_94), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = conc_0(t);
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm l_64 (ATerm), ATerm m_64 (ATerm))
{
  ATerm q_95 (ATerm t)
  {
    ATerm l_10 = t;
    if(PushChoice()==0)
      {
        t = l_64(t);
        t = q_95(t);
        PopChoice();
      }
    else
      {
        t = l_10;
        t = m_64(t);
      }
    return(t);
  }
  t = q_95(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm o_64 (ATerm))
{
  t = repeat_2(t, o_64, _id);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm u_59 (ATerm))
{
  ATerm r_95 (ATerm t)
  {
    t = u_59(t);
    {
      ATerm m_10 = t;
      if(PushChoice()==0)
        {
          t = Nil_0(t);
          PopChoice();
        }
      else
        {
          t = m_10;
          t = Cons_2(t, _id, r_95);
        }
    }
    return(t);
  }
  t = r_95(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    t = repeat_1(t, lift_dynamic_rule_0);
    return(t);
  }
  t = listtd_1(t, x_3);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm w_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL,b_96 = NULL;
  w_95 = t;
  u_95 :
  if(match_cons(w_95, sym_DynRuleScope_2))
    {
      y_95 = ATgetArgument(w_95, 0);
      b_96 = ATgetArgument(w_95, 1);
      v_95 :
      if(match_cons(y_95, sym_Nil_0))
        t = not_null(b_96);
      else
        {
          if(match_cons(y_95, sym_Cons_2))
            {
              z_95 = ATgetArgument(y_95, 0);
              a_96 = ATgetArgument(y_95, 1);
              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(z_95))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_DynRuleScope_2, not_null(a_96), not_null(b_96)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  ATerm y_3 (ATerm t)
  {
    t = try_1(t, DefDynamicRuleScope_0);
    return(t);
  }
  t = topdown_1(t, y_3);
  return(t);
}
ATerm LiftDynamicRules_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm a_4 (ATerm t)
    {
      ATerm b_4 (ATerm t)
      {
        ATerm c_4 (ATerm t)
        {
          ATerm d_4 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, d_4);
          return(t);
        }
        t = Cons_2(t, c_4, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, b_4);
      return(t);
    }
    t = Cons_2(t, _id, a_4);
    return(t);
  }
  t = Specification_1(t, z_3);
  return(t);
}
ATerm DefScopeDefault_0 (ATerm t)
{
  ATerm m_96 = NULL,n_96 = NULL;
  m_96 = t;
  l_96 :
  if(match_cons(m_96, sym_ScopeDefault_1))
    {
      n_96 = ATgetArgument(m_96, 0);
      {
        ATerm p_96 = NULL;
        t = not_null(n_96);
        t = tvars_0(t);
        p_96 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_96), not_null(n_96));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm x_40 (ATerm))
{
  ATerm w_96 = NULL,x_96 = NULL;
  w_96 = t;
  v_96 :
  if(match_cons(w_96, sym_DynamicRules_1))
    {
      x_96 = ATgetArgument(w_96, 0);
      {
        ATerm z_96 = NULL;
        t = not_null(x_96);
        t = x_40(t);
        z_96 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(z_96));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm m_43 (ATerm), ATerm n_43 (ATerm))
{
  ATerm h_97 = NULL,i_97 = NULL,j_97 = NULL;
  h_97 = t;
  g_97 :
  if(match_cons(h_97, sym_Scope_2))
    {
      i_97 = ATgetArgument(h_97, 0);
      j_97 = ATgetArgument(h_97, 1);
      {
        ATerm o_97 = NULL;
        t = not_null(i_97);
        {
          ATerm q_97 = NULL;
          t = m_43(t);
          o_97 = t;
          t = not_null(j_97);
          t = n_43(t);
          q_97 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_97), not_null(q_97));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm m_44 (ATerm), ATerm n_44 (ATerm), ATerm o_44 (ATerm))
{
  ATerm n_10 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, o_44, m_44);
      PopChoice();
    }
  else
    {
      t = n_10;
      t = DynamicRules_1(t, m_44);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm y_97 = NULL,z_97 = NULL;
  y_97 = t;
  x_97 :
  if(match_cons(y_97, sym_DynamicRules_1))
    {
      z_97 = ATgetArgument(y_97, 0);
      t = not_null(z_97);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm g_98 = NULL,h_98 = NULL,i_98 = NULL,j_98 = NULL,k_98 = NULL,n_98 = NULL;
  h_98 = t;
  e_98 :
  if(match_cons(h_98, sym_Scope_2))
    {
      i_98 = ATgetArgument(h_98, 0);
      g_98 = ATgetArgument(h_98, 1);
      t = not_null(i_98);
    }
  else
    {
      if(match_cons(h_98, sym_LRule_1))
        {
          i_98 = ATgetArgument(h_98, 0);
          f_98 :
          if(match_cons(i_98, sym_Rule_3))
            {
              j_98 = ATgetArgument(i_98, 0);
              k_98 = ATgetArgument(i_98, 1);
              n_98 = ATgetArgument(i_98, 2);
              t = not_null(j_98);
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
  ATerm y_98 = NULL,z_98 = NULL;
  y_98 = t;
  x_98 :
  if(match_cons(y_98, sym_Var_1))
    {
      z_98 = ATgetArgument(y_98, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_98), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm g_99 = NULL,h_99 = NULL,i_99 = NULL,j_99 = NULL,k_99 = NULL;
  g_99 = t;
  d_99 :
  if(match_cons(g_99, sym_TCons_2))
    {
      h_99 = ATgetArgument(g_99, 0);
      i_99 = ATgetArgument(g_99, 1);
      e_99 :
      if(match_cons(i_99, sym_TCons_2))
        {
          j_99 = ATgetArgument(i_99, 0);
          k_99 = ATgetArgument(i_99, 1);
          f_99 :
          if(match_cons(k_99, sym_TNil_0))
            {
              t = not_null(h_99);
              {
                ATerm o_99 (ATerm t)
                {
                  ATerm o_10 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(j_99);
                      PopChoice();
                    }
                  else
                    {
                      t = o_10;
                      {
                        ATerm p_10 = t;
                        if(PushChoice()==0)
                          {
                            ATerm e_4 (ATerm t)
                            {
                              t = not_null(j_99);
                              return(t);
                            }
                            t = HdMember_1(t, e_4);
                            t = o_99(t);
                            PopChoice();
                          }
                        else
                          {
                            t = p_10;
                            t = Cons_2(t, _id, o_99);
                          }
                      }
                    }
                  return(t);
                }
                t = o_99(t);
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
ATerm foldr_3 (ATerm t, ATerm r_53 (ATerm), ATerm s_53 (ATerm), ATerm t_53 (ATerm))
{
  ATerm q_10 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = r_53(t);
      PopChoice();
    }
  else
    {
      t = q_10;
      {
        ATerm t_99 = NULL,u_99 = NULL,v_99 = NULL;
        t_99 = t;
        s_99 :
        if(match_cons(t_99, sym_Cons_2))
          {
            u_99 = ATgetArgument(t_99, 0);
            v_99 = ATgetArgument(t_99, 1);
            {
              ATerm y_99 = NULL;
              t = not_null(u_99);
              {
                ATerm a_100 = NULL;
                t = t_53(t);
                y_99 = t;
                t = not_null(v_99);
                t = foldr_3(t, r_53, s_53, t_53);
                a_100 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_99), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_100), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = s_53(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm h_55 (ATerm), ATerm i_55 (ATerm), ATerm j_55 (ATerm))
{
  ATerm l_100 = NULL;
  ATerm n_100 = NULL;
  l_100 = t;
  {
    ATerm o_100 = NULL;
    ATerm q_100 = NULL,r_100 = NULL,s_100 = NULL,t_100 = NULL,u_100 = NULL;
    t = not_null(l_100);
    o_100 = t;
    t = SSL_explode_term(not_null(o_100));
    q_100 = t;
    i_100 :
    if(match_cons(q_100, sym_TCons_2))
      {
        r_100 = ATgetArgument(q_100, 0);
        s_100 = ATgetArgument(q_100, 1);
        j_100 :
        if(match_cons(s_100, sym_TCons_2))
          {
            t_100 = ATgetArgument(s_100, 0);
            u_100 = ATgetArgument(s_100, 1);
            k_100 :
            if(match_cons(u_100, sym_TNil_0))
              {
                if(n_100 != NULL && n_100 != t_100)
                  _fail(t_100);
                else
                  n_100 = t_100;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(n_100);
    t = foldr_3(t, h_55, i_55, j_55);
  }
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm w_54 (ATerm))
{
  ATerm b_101 = NULL,c_101 = NULL,d_101 = NULL;
  b_101 = t;
  a_101 :
  if(match_cons(b_101, sym_Cons_2))
    {
      c_101 = ATgetArgument(b_101, 0);
      d_101 = ATgetArgument(b_101, 1);
      t = w_54(t);
      {
        ATerm f_4 (ATerm t)
        {
          ATerm g_101 = NULL;
          g_101 = t;
          if(c_101 != NULL && c_101 != g_101)
            _fail(g_101);
          else
            c_101 = g_101;
          return(t);
        }
        t = fetch_1(t, f_4);
        t = not_null(d_101);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm s_101 = NULL,t_101 = NULL,u_101 = NULL,v_101 = NULL,w_101 = NULL,x_101 = NULL,y_101 = NULL;
  s_101 = t;
  k_101 :
  if(match_cons(s_101, sym_TCons_2))
    {
      t_101 = ATgetArgument(s_101, 0);
      u_101 = ATgetArgument(s_101, 1);
      l_101 :
      if(match_cons(u_101, sym_TCons_2))
        {
          v_101 = ATgetArgument(u_101, 0);
          y_101 = ATgetArgument(u_101, 1);
          q_101 :
          if(match_cons(v_101, sym_Cons_2))
            {
              w_101 = ATgetArgument(v_101, 0);
              x_101 = ATgetArgument(v_101, 1);
              r_101 :
              if(match_cons(y_101, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_101), not_null(t_101)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_101), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm u_102 = NULL,v_102 = NULL,w_102 = NULL,x_102 = NULL,y_102 = NULL,z_102 = NULL,a_103 = NULL;
  u_102 = t;
  q_102 :
  if(match_cons(u_102, sym_Cons_2))
    {
      v_102 = ATgetArgument(u_102, 0);
      a_103 = ATgetArgument(u_102, 1);
      r_102 :
      if(match_cons(v_102, sym_TCons_2))
        {
          w_102 = ATgetArgument(v_102, 0);
          x_102 = ATgetArgument(v_102, 1);
          s_102 :
          if(match_cons(x_102, sym_TCons_2))
            {
              y_102 = ATgetArgument(x_102, 0);
              z_102 = ATgetArgument(x_102, 1);
              t_102 :
              if(match_cons(z_102, sym_TNil_0))
                {
                  ATerm e_103 = NULL,f_103 = NULL,n_103 = NULL,v_103 = NULL;
                  ATerm r_10;
                  r_10 = t;
                  {
                    ATerm g_103 = NULL;
                    ATerm i_103 = NULL,j_103 = NULL,k_103 = NULL,l_103 = NULL,m_103 = NULL;
                    t = not_null(y_102);
                    g_103 = t;
                    t = SSL_explode_term(not_null(g_103));
                    i_103 = t;
                    h_102 :
                    if(match_cons(i_103, sym_TCons_2))
                      {
                        j_103 = ATgetArgument(i_103, 0);
                        k_103 = ATgetArgument(i_103, 1);
                        i_102 :
                        if(match_cons(k_103, sym_TCons_2))
                          {
                            l_103 = ATgetArgument(k_103, 0);
                            m_103 = ATgetArgument(k_103, 1);
                            j_102 :
                            if(match_cons(m_103, sym_TNil_0))
                              {
                                if(e_103 != NULL && e_103 != j_103)
                                  _fail(j_103);
                                else
                                  e_103 = j_103;
                                if(f_103 != NULL && f_103 != l_103)
                                  _fail(l_103);
                                else
                                  f_103 = l_103;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = r_10;
                  {
                    ATerm o_103 = NULL;
                    ATerm q_103 = NULL,r_103 = NULL,s_103 = NULL,t_103 = NULL,u_103 = NULL;
                    t = not_null(w_102);
                    o_103 = t;
                    t = SSL_explode_term(not_null(o_103));
                    q_103 = t;
                    m_102 :
                    if(match_cons(q_103, sym_TCons_2))
                      {
                        r_103 = ATgetArgument(q_103, 0);
                        s_103 = ATgetArgument(q_103, 1);
                        n_102 :
                        if(match_cons(s_103, sym_TCons_2))
                          {
                            t_103 = ATgetArgument(s_103, 0);
                            u_103 = ATgetArgument(s_103, 1);
                            o_102 :
                            if(match_cons(u_103, sym_TNil_0))
                              {
                                if(e_103 != NULL && e_103 != r_103)
                                  _fail(r_103);
                                else
                                  e_103 = r_103;
                                if(n_103 != NULL && n_103 != t_103)
                                  _fail(t_103);
                                else
                                  n_103 = t_103;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_103), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_103), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    v_103 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_103), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_103), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm i_104 = NULL,j_104 = NULL,k_104 = NULL,l_104 = NULL,m_104 = NULL,n_104 = NULL,o_104 = NULL;
  i_104 = t;
  e_104 :
  if(match_cons(i_104, sym_Cons_2))
    {
      j_104 = ATgetArgument(i_104, 0);
      o_104 = ATgetArgument(i_104, 1);
      f_104 :
      if(match_cons(j_104, sym_TCons_2))
        {
          k_104 = ATgetArgument(j_104, 0);
          l_104 = ATgetArgument(j_104, 1);
          g_104 :
          if(match_cons(l_104, sym_TCons_2))
            {
              m_104 = ATgetArgument(l_104, 0);
              n_104 = ATgetArgument(l_104, 1);
              h_104 :
              if(match_cons(n_104, sym_TNil_0))
                {
                  ATerm q_104 = NULL;
                  if(k_104 != NULL && k_104 != m_104)
                    _fail(m_104);
                  else
                    k_104 = m_104;
                  if(q_104 != NULL && q_104 != o_104)
                    _fail(o_104);
                  else
                    q_104 = o_104;
                  t = not_null(q_104);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm c_65 (ATerm), ATerm d_65 (ATerm))
{
  ATerm s_104 (ATerm t)
  {
    ATerm s_10 = t;
    if(PushChoice()==0)
      {
        t = c_65(t);
        PopChoice();
      }
    else
      {
        t = s_10;
        t = d_65(t);
        t = s_104(t);
      }
    return(t);
  }
  t = s_104(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm f_65 (ATerm), ATerm g_65 (ATerm), ATerm h_65 (ATerm))
{
  t = f_65(t);
  t = while_not_2(t, g_65, h_65);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm t_10 = t;
  if(PushChoice()==0)
    {
      ATerm g_4 (ATerm t)
      {
        ATerm y_104 = NULL;
        y_104 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_104), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm h_4 (ATerm t)
      {
        ATerm j_4 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, j_4);
        return(t);
      }
      ATerm i_4 (ATerm t)
      {
        ATerm u_10 = t;
        if(PushChoice()==0)
          {
            ATerm k_4 (ATerm t)
            {
              ATerm l_4 (ATerm t)
              {
                ATerm v_10 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = v_10;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, l_4, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, k_4);
            PopChoice();
          }
        else
          {
            t = u_10;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, g_4, h_4, i_4);
      PopChoice();
    }
  else
    {
      t = t_10;
      {
        ATerm a_105 = NULL,b_105 = NULL,c_105 = NULL,d_105 = NULL,e_105 = NULL;
        a_105 = t;
        v_104 :
        if(match_cons(a_105, sym_TCons_2))
          {
            b_105 = ATgetArgument(a_105, 0);
            c_105 = ATgetArgument(a_105, 1);
            w_104 :
            if(match_cons(c_105, sym_TCons_2))
              {
                d_105 = ATgetArgument(c_105, 0);
                e_105 = ATgetArgument(c_105, 1);
                x_104 :
                if(match_cons(e_105, sym_TNil_0))
                  {
                    t = not_null(b_105);
                    {
                      ATerm j_105 (ATerm t)
                      {
                        ATerm w_10 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = w_10;
                            {
                              ATerm x_10 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm m_4 (ATerm t)
                                  {
                                    t = not_null(d_105);
                                    return(t);
                                  }
                                  t = HdMember_1(t, m_4);
                                  t = j_105(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = x_10;
                                  t = Cons_2(t, _id, j_105);
                                }
                            }
                          }
                        return(t);
                      }
                      t = j_105(t);
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
ATerm free_vars_3 (ATerm t, ATerm s_45 (ATerm), ATerm t_45 (ATerm), ATerm u_45 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm n_105 (ATerm t)
  {
    ATerm y_10 = t;
    if(PushChoice()==0)
      {
        t = s_45(t);
        PopChoice();
      }
    else
      {
        t = y_10;
        {
          ATerm z_10 = t;
          if(PushChoice()==0)
            {
              ATerm l_105 = NULL;
              ATerm b_11;
              b_11 = t;
              {
                ATerm m_105 = NULL;
                t = t_45(t);
                m_105 = t;
                if(l_105 != NULL && l_105 != m_105)
                  _fail(m_105);
                else
                  l_105 = m_105;
              }
              t = b_11;
              {
                ATerm n_4 (ATerm t)
                {
                  ATerm q_4 (ATerm t)
                  {
                    t = not_null(l_105);
                    return(t);
                  }
                  t = split_2(t, n_105, q_4);
                  t = diff_0(t);
                  return(t);
                }
                ATerm o_4 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = u_45(t, n_4, n_105, o_4);
                {
                  ATerm r_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = crush_3(t, r_4, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = z_10;
              {
                ATerm s_4 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = crush_3(t, s_4, union_0, n_105);
              }
            }
        }
      }
    return(t);
  }
  t = n_105(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm f_11 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = f_11;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, u_4, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm t_105 = NULL,u_105 = NULL,v_105 = NULL,w_105 = NULL,x_105 = NULL;
  t_105 = t;
  r_105 :
  if(match_cons(t_105, sym_LRule_1))
    {
      u_105 = ATgetArgument(t_105, 0);
      s_105 :
      if(match_cons(u_105, sym_Rule_3))
        {
          v_105 = ATgetArgument(u_105, 0);
          w_105 = ATgetArgument(u_105, 1);
          x_105 = ATgetArgument(u_105, 2);
          {
            ATerm b_106 = NULL;
            t = not_null(v_105);
            t = tvars_0(t);
            b_106 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_106), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_105), not_null(w_105), not_null(x_105))));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm j_61 (ATerm))
{
  ATerm f_106 (ATerm t)
  {
    t = _all(t, f_106);
    t = j_61(t);
    return(t);
  }
  t = f_106(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    ATerm w_4 (ATerm t)
    {
      ATerm g_11 = t;
      if(PushChoice()==0)
        {
          t = DefLRule_0(t);
          PopChoice();
        }
      else
        {
          t = g_11;
          t = DefScopeDefault_0(t);
        }
      return(t);
    }
    t = try_1(t, w_4);
    return(t);
  }
  t = bottomup_1(t, v_4);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm i_106 = NULL,j_106 = NULL;
  i_106 = t;
  h_106 :
  if(match_cons(i_106, sym_Var_1))
    {
      j_106 = ATgetArgument(i_106, 0);
      t = not_null(j_106);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm r_106 = NULL,s_106 = NULL,t_106 = NULL,u_106 = NULL,v_106 = NULL,w_106 = NULL,x_106 = NULL;
  r_106 = t;
  n_106 :
  if(match_cons(r_106, sym_TCons_2))
    {
      s_106 = ATgetArgument(r_106, 0);
      t_106 = ATgetArgument(r_106, 1);
      o_106 :
      if(match_cons(t_106, sym_TCons_2))
        {
          u_106 = ATgetArgument(t_106, 0);
          x_106 = ATgetArgument(t_106, 1);
          p_106 :
          if(match_cons(u_106, sym_Cons_2))
            {
              v_106 = ATgetArgument(u_106, 0);
              w_106 = ATgetArgument(u_106, 1);
              q_106 :
              if(match_cons(x_106, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_106), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_106), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm j_107 = NULL,k_107 = NULL,l_107 = NULL,m_107 = NULL,n_107 = NULL,o_107 = NULL,p_107 = NULL,q_107 = NULL,r_107 = NULL,s_107 = NULL,t_107 = NULL;
  j_107 = t;
  c_107 :
  if(match_cons(j_107, sym_TCons_2))
    {
      k_107 = ATgetArgument(j_107, 0);
      l_107 = ATgetArgument(j_107, 1);
      d_107 :
      if(match_cons(l_107, sym_TCons_2))
        {
          m_107 = ATgetArgument(l_107, 0);
          t_107 = ATgetArgument(l_107, 1);
          e_107 :
          if(match_cons(m_107, sym_Cons_2))
            {
              n_107 = ATgetArgument(m_107, 0);
              s_107 = ATgetArgument(m_107, 1);
              f_107 :
              if(match_cons(n_107, sym_TCons_2))
                {
                  o_107 = ATgetArgument(n_107, 0);
                  p_107 = ATgetArgument(n_107, 1);
                  g_107 :
                  if(match_cons(p_107, sym_TCons_2))
                    {
                      q_107 = ATgetArgument(p_107, 0);
                      r_107 = ATgetArgument(p_107, 1);
                      h_107 :
                      if(match_cons(r_107, sym_TNil_0))
                        {
                          i_107 :
                          if(match_cons(t_107, sym_TNil_0))
                            {
                              ATerm v_107 = NULL;
                              if(k_107 != NULL && k_107 != o_107)
                                _fail(o_107);
                              else
                                k_107 = o_107;
                              if(v_107 != NULL && v_107 != q_107)
                                _fail(q_107);
                              else
                                v_107 = q_107;
                              t = not_null(v_107);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm h_11 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = h_11;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm o_47 (ATerm), ATerm p_47 (ATerm))
{
  ATerm c_108 = NULL;
  ATerm e_108 = NULL;
  c_108 = t;
  {
    ATerm g_108 = NULL;
    t = o_47(t);
    e_108 = t;
    t = p_47(t);
    g_108 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_108), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_108), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm l_63 (ATerm))
{
  ATerm m_108 (ATerm t)
  {
    ATerm i_11 = t;
    if(PushChoice()==0)
      {
        t = l_63(t);
        PopChoice();
      }
    else
      {
        t = i_11;
        t = _all(t, m_108);
      }
    return(t);
  }
  t = m_108(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm r_108 = NULL,s_108 = NULL,t_108 = NULL,u_108 = NULL,v_108 = NULL;
  r_108 = t;
  o_108 :
  if(match_cons(r_108, sym_TCons_2))
    {
      s_108 = ATgetArgument(r_108, 0);
      t_108 = ATgetArgument(r_108, 1);
      p_108 :
      if(match_cons(t_108, sym_TCons_2))
        {
          u_108 = ATgetArgument(t_108, 0);
          v_108 = ATgetArgument(t_108, 1);
          q_108 :
          if(match_cons(v_108, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_108), not_null(u_108));
          else
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
  ATerm g_109 = NULL,h_109 = NULL,i_109 = NULL,j_109 = NULL,k_109 = NULL,l_109 = NULL,m_109 = NULL,n_109 = NULL,o_109 = NULL;
  g_109 = t;
  b_109 :
  if(match_cons(g_109, sym_TCons_2))
    {
      h_109 = ATgetArgument(g_109, 0);
      k_109 = ATgetArgument(g_109, 1);
      c_109 :
      if(match_cons(h_109, sym_Cons_2))
        {
          i_109 = ATgetArgument(h_109, 0);
          j_109 = ATgetArgument(h_109, 1);
          d_109 :
          if(match_cons(k_109, sym_TCons_2))
            {
              l_109 = ATgetArgument(k_109, 0);
              o_109 = ATgetArgument(k_109, 1);
              e_109 :
              if(match_cons(l_109, sym_Cons_2))
                {
                  m_109 = ATgetArgument(l_109, 0);
                  n_109 = ATgetArgument(l_109, 1);
                  f_109 :
                  if(match_cons(o_109, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(i_109), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_109), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(j_109), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_109), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm a_110 = NULL,b_110 = NULL,c_110 = NULL,d_110 = NULL,e_110 = NULL;
  a_110 = t;
  v_109 :
  if(match_cons(a_110, sym_TCons_2))
    {
      b_110 = ATgetArgument(a_110, 0);
      c_110 = ATgetArgument(a_110, 1);
      w_109 :
      if(match_cons(b_110, sym_Nil_0))
        {
          x_109 :
          if(match_cons(c_110, sym_TCons_2))
            {
              d_110 = ATgetArgument(c_110, 0);
              e_110 = ATgetArgument(c_110, 1);
              y_109 :
              if(match_cons(d_110, sym_Nil_0))
                {
                  z_109 :
                  if(match_cons(e_110, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm e_57 (ATerm), ATerm f_57 (ATerm))
{
  ATerm g_110 (ATerm t)
  {
    ATerm j_11 = t;
    if(PushChoice()==0)
      {
        t = c_57(t);
        PopChoice();
      }
    else
      {
        t = j_11;
        t = d_57(t);
        {
          ATerm x_4 (ATerm t)
          {
            t = TCons_2(t, g_110, TNil_0);
            return(t);
          }
          t = TCons_2(t, f_57, x_4);
          t = e_57(t);
        }
      }
    return(t);
  }
  t = g_110(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm h_57 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, h_57);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm o_110 = NULL,p_110 = NULL,q_110 = NULL,r_110 = NULL,s_110 = NULL,t_110 = NULL,u_110 = NULL;
  o_110 = t;
  k_110 :
  if(match_cons(o_110, sym_TCons_2))
    {
      p_110 = ATgetArgument(o_110, 0);
      q_110 = ATgetArgument(o_110, 1);
      l_110 :
      if(match_cons(q_110, sym_TCons_2))
        {
          r_110 = ATgetArgument(q_110, 0);
          s_110 = ATgetArgument(q_110, 1);
          m_110 :
          if(match_cons(s_110, sym_TNil_0))
            {
              ATerm w_110 = NULL;
              if(w_110 != NULL && w_110 != r_110)
                _fail(r_110);
              else
                w_110 = r_110;
            }
          else
            {
              if(match_cons(s_110, sym_TCons_2))
                {
                  t_110 = ATgetArgument(s_110, 0);
                  u_110 = ATgetArgument(s_110, 1);
                  n_110 :
                  if(match_cons(u_110, sym_TNil_0))
                    {
                      ATerm c_111 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_110), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_110), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      c_111 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_111), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_110), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm q_47 (ATerm), ATerm r_47 (ATerm))
{
  ATerm l_111 = NULL,m_111 = NULL,n_111 = NULL,o_111 = NULL,p_111 = NULL;
  t = subs_args_0(t);
  l_111 = t;
  i_111 :
  if(match_cons(l_111, sym_TCons_2))
    {
      m_111 = ATgetArgument(l_111, 0);
      n_111 = ATgetArgument(l_111, 1);
      j_111 :
      if(match_cons(n_111, sym_TCons_2))
        {
          o_111 = ATgetArgument(n_111, 0);
          p_111 = ATgetArgument(n_111, 1);
          k_111 :
          if(match_cons(p_111, sym_TNil_0))
            {
              t = not_null(o_111);
              {
                ATerm y_4 (ATerm t)
                {
                  ATerm z_4 (ATerm t)
                  {
                    t = not_null(m_111);
                    return(t);
                  }
                  t = SubsVar_2(t, q_47, z_4);
                  t = r_47(t);
                  return(t);
                }
                t = alltd_1(t, y_4);
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
ATerm substitute_1 (ATerm t, ATerm s_47 (ATerm))
{
  t = substitute_2(t, s_47, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm OLName_0 (ATerm t)
{
  ATerm w_111 = NULL,x_111 = NULL,y_111 = NULL,z_111 = NULL;
  w_111 = t;
  u_111 :
  if(match_cons(w_111, sym_Overlay_3))
    {
      x_111 = ATgetArgument(w_111, 0);
      y_111 = ATgetArgument(w_111, 1);
      z_111 = ATgetArgument(w_111, 2);
      v_111 :
      if(match_cons(y_111, sym_Nil_0))
        t = not_null(x_111);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm OpName_0 (ATerm t)
{
  ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL,j_112 = NULL;
  g_112 = t;
  e_112 :
  if(match_cons(g_112, sym_OpDecl_2))
    {
      h_112 = ATgetArgument(g_112, 0);
      i_112 = ATgetArgument(g_112, 1);
      f_112 :
      if(match_cons(i_112, sym_ConstType_1))
        {
          j_112 = ATgetArgument(i_112, 0);
          t = not_null(h_112);
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
  ATerm o_112 = NULL,p_112 = NULL;
  o_112 = t;
  n_112 :
  if(match_cons(o_112, sym_Constructors_1))
    {
      p_112 = ATgetArgument(o_112, 0);
      t = not_null(p_112);
      t = filter_1(t, OpName_0);
    }
  else
    _fail(t);
  return(t);
}
ATerm Names_0 (ATerm t)
{
  ATerm v_112 = NULL,w_112 = NULL;
  v_112 = t;
  u_112 :
  if(match_cons(v_112, sym_Signature_1))
    {
      w_112 = ATgetArgument(v_112, 0);
      t = not_null(w_112);
      t = filter_1(t, OpNames_0);
      t = concat_0(t);
    }
  else
    {
      if(match_cons(v_112, sym_Overlays_1))
        {
          w_112 = ATgetArgument(v_112, 0);
          t = not_null(w_112);
          t = filter_1(t, OLName_0);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm x_52 (ATerm))
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
        ATerm l_11 = t;
        if(PushChoice()==0)
          {
            ATerm a_5 (ATerm t)
            {
              t = filter_1(t, x_52);
              return(t);
            }
            t = Cons_2(t, x_52, a_5);
            PopChoice();
          }
        else
          {
            t = l_11;
            {
              ATerm d_113 = NULL,e_113 = NULL,f_113 = NULL;
              d_113 = t;
              c_113 :
              if(match_cons(d_113, sym_Cons_2))
                {
                  e_113 = ATgetArgument(d_113, 0);
                  f_113 = ATgetArgument(d_113, 1);
                  t = not_null(f_113);
                  t = filter_1(t, x_52);
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
  ATerm b_5 (ATerm t)
  {
    t = const_names_0(t);
    {
      ATerm c_5 (ATerm t)
      {
        ATerm d_5 (ATerm t)
        {
          ATerm j_113 = NULL;
          j_113 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(j_113), (ATerm) ATmakeAppl(sym_Nil_0));
          return(t);
        }
        t = split_2(t, _id, d_5);
        return(t);
      }
      t = map_1(t, c_5);
    }
    return(t);
  }
  t = split_2(t, b_5, _id);
  t = tsubs_0(t);
  return(t);
}
ATerm MkSpec_0 (ATerm t)
{
  ATerm r_113 = NULL,s_113 = NULL,t_113 = NULL,u_113 = NULL,v_113 = NULL,w_113 = NULL,x_113 = NULL;
  r_113 = t;
  n_113 :
  if(match_cons(r_113, sym_TCons_2))
    {
      s_113 = ATgetArgument(r_113, 0);
      t_113 = ATgetArgument(r_113, 1);
      o_113 :
      if(match_cons(t_113, sym_TCons_2))
        {
          u_113 = ATgetArgument(t_113, 0);
          v_113 = ATgetArgument(t_113, 1);
          p_113 :
          if(match_cons(v_113, sym_TCons_2))
            {
              w_113 = ATgetArgument(v_113, 0);
              x_113 = ATgetArgument(v_113, 1);
              q_113 :
              if(match_cons(x_113, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Constructors_1, not_null(s_113)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Overlays_1, not_null(u_113)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(w_113)), (ATerm) ATmakeAppl(sym_Nil_0)))));
              else
                _fail(t);
            }
          else
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
  ATerm g_114 = NULL,h_114 = NULL,i_114 = NULL,j_114 = NULL,k_114 = NULL;
  g_114 = t;
  d_114 :
  if(match_cons(g_114, sym_TCons_2))
    {
      h_114 = ATgetArgument(g_114, 0);
      i_114 = ATgetArgument(g_114, 1);
      e_114 :
      if(match_cons(i_114, sym_TCons_2))
        {
          j_114 = ATgetArgument(i_114, 0);
          k_114 = ATgetArgument(i_114, 1);
          f_114 :
          if(match_cons(k_114, sym_TNil_0))
            {
              t = not_null(h_114);
              {
                ATerm e_5 (ATerm t)
                {
                  t = not_null(j_114);
                  return(t);
                }
                t = at_end_1(t, e_5);
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
  ATerm d_115 = NULL,e_115 = NULL,f_115 = NULL,g_115 = NULL,h_115 = NULL,i_115 = NULL,j_115 = NULL,k_115 = NULL,l_115 = NULL,m_115 = NULL,n_115 = NULL,o_115 = NULL,p_115 = NULL,q_115 = NULL,r_115 = NULL,s_115 = NULL,t_115 = NULL;
  d_115 = t;
  s_114 :
  if(match_cons(d_115, sym_TCons_2))
    {
      e_115 = ATgetArgument(d_115, 0);
      l_115 = ATgetArgument(d_115, 1);
      t_114 :
      if(match_cons(e_115, sym_TCons_2))
        {
          f_115 = ATgetArgument(e_115, 0);
          g_115 = ATgetArgument(e_115, 1);
          u_114 :
          if(match_cons(g_115, sym_TCons_2))
            {
              h_115 = ATgetArgument(g_115, 0);
              i_115 = ATgetArgument(g_115, 1);
              v_114 :
              if(match_cons(i_115, sym_TCons_2))
                {
                  j_115 = ATgetArgument(i_115, 0);
                  k_115 = ATgetArgument(i_115, 1);
                  w_114 :
                  if(match_cons(k_115, sym_TNil_0))
                    {
                      x_114 :
                      if(match_cons(l_115, sym_TCons_2))
                        {
                          m_115 = ATgetArgument(l_115, 0);
                          t_115 = ATgetArgument(l_115, 1);
                          y_114 :
                          if(match_cons(m_115, sym_TCons_2))
                            {
                              n_115 = ATgetArgument(m_115, 0);
                              o_115 = ATgetArgument(m_115, 1);
                              z_114 :
                              if(match_cons(o_115, sym_TCons_2))
                                {
                                  p_115 = ATgetArgument(o_115, 0);
                                  q_115 = ATgetArgument(o_115, 1);
                                  a_115 :
                                  if(match_cons(q_115, sym_TCons_2))
                                    {
                                      r_115 = ATgetArgument(q_115, 0);
                                      s_115 = ATgetArgument(q_115, 1);
                                      b_115 :
                                      if(match_cons(s_115, sym_TNil_0))
                                        {
                                          c_115 :
                                          if(match_cons(t_115, sym_TNil_0))
                                            {
                                              ATerm a_116 = NULL;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_115), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_115), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              {
                                                ATerm c_116 = NULL;
                                                t = conc_0(t);
                                                a_116 = t;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_115), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_115), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                {
                                                  ATerm e_116 = NULL;
                                                  t = conc_0(t);
                                                  c_116 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_115), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_115), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  e_116 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_116), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_116), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_116), (ATerm) ATmakeAppl(sym_TNil_0))));
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
ATerm foldr_2 (ATerm t, ATerm p_53 (ATerm), ATerm q_53 (ATerm))
{
  ATerm m_11 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = p_53(t);
      PopChoice();
    }
  else
    {
      t = m_11;
      {
        ATerm n_116 = NULL,o_116 = NULL,p_116 = NULL;
        n_116 = t;
        m_116 :
        if(match_cons(n_116, sym_Cons_2))
          {
            o_116 = ATgetArgument(n_116, 0);
            p_116 = ATgetArgument(n_116, 1);
            {
              ATerm s_116 = NULL;
              t = not_null(p_116);
              t = foldr_2(t, p_53, q_53);
              s_116 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_116), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_116), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = q_53(t);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm w_116 (ATerm t)
  {
    ATerm n_11 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, w_116);
        PopChoice();
      }
    else
      {
        t = n_11;
        t = Nil_0(t);
        t = g_59(t);
      }
    return(t);
  }
  t = w_116(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm o_11 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = o_11;
      {
        ATerm z_116 = NULL,a_117 = NULL,b_117 = NULL;
        z_116 = t;
        y_116 :
        if(match_cons(z_116, sym_Cons_2))
          {
            a_117 = ATgetArgument(z_116, 0);
            b_117 = ATgetArgument(z_116, 1);
            t = not_null(a_117);
            {
              ATerm f_5 (ATerm t)
              {
                t = not_null(b_117);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, f_5);
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
  ATerm j_117 = NULL,k_117 = NULL;
  j_117 = t;
  i_117 :
  if(match_cons(j_117, sym_Constructors_1))
    {
      k_117 = ATgetArgument(j_117, 0);
      t = not_null(k_117);
    }
  else
    {
      if(match_cons(j_117, sym_Sorts_1))
        {
          k_117 = ATgetArgument(j_117, 0);
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
  ATerm v_117 = NULL,w_117 = NULL;
  v_117 = t;
  u_117 :
  if(match_cons(v_117, sym_Signature_1))
    {
      w_117 = ATgetArgument(v_117, 0);
      {
        ATerm y_117 = NULL;
        t = not_null(w_117);
        t = normalize_sigs_0(t);
        y_117 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_117), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
      }
    }
  else
    {
      if(match_cons(v_117, sym_Strategies_1))
        {
          w_117 = ATgetArgument(v_117, 0);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_117), (ATerm) ATmakeAppl(sym_TNil_0))));
        }
      else
        {
          if(match_cons(v_117, sym_Rules_1))
            {
              w_117 = ATgetArgument(v_117, 0);
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_117), (ATerm) ATmakeAppl(sym_TNil_0))));
            }
          else
            {
              if(match_cons(v_117, sym_Overlays_1))
                {
                  w_117 = ATgetArgument(v_117, 0);
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_117), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
                }
              else
                _fail(t);
            }
        }
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_58 (ATerm))
{
  ATerm i_118 (ATerm t)
  {
    ATerm p_11 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = p_11;
        t = Cons_2(t, s_58, i_118);
      }
    return(t);
  }
  t = i_118(t);
  return(t);
}
ATerm BSpecs_0 (ATerm t)
{
  ATerm l_118 = NULL,m_118 = NULL;
  l_118 = t;
  k_118 :
  if(match_cons(l_118, sym_Specification_1))
    {
      m_118 = ATgetArgument(l_118, 0);
      t = not_null(m_118);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm h_61 (ATerm))
{
  ATerm p_118 (ATerm t)
  {
    t = h_61(t);
    t = _all(t, p_118);
    return(t);
  }
  t = p_118(t);
  return(t);
}
ATerm DefineSugar_0 (ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm i_5 (ATerm t)
    {
      ATerm t_118 = NULL,u_118 = NULL;
      t_118 = t;
      r_118 :
      if(match_cons(t_118, sym_DefaultVarDec_1))
        {
          u_118 = ATgetArgument(t_118, 0);
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(u_118), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        _fail(t);
      return(t);
    }
    t = try_1(t, i_5);
    return(t);
  }
  t = topdown_1(t, g_5);
  return(t);
}
ATerm normalize_spec_0 (ATerm t)
{
  t = DefineSugar_0(t);
  t = BSpecs_0(t);
  t = map_1(t, NormBSP_0);
  {
    ATerm j_5 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
      return(t);
    }
    t = foldr_2(t, j_5, Combine_0);
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
    ATerm q_11;
    q_11 = t;
    t = spec_use_def_0(t);
    t = q_11;
    t = ExpandOverlays_0(t);
    t = CheckConstructors_0(t);
    t = RulesToSdefs_0(t);
    t = strename_0(t);
    {
      ATerm k_5 (ATerm t)
      {
        ATerm l_5 (ATerm t)
        {
          ATerm m_5 (ATerm t)
          {
            t = Strategies_1(t, desugar_spec_0);
            return(t);
          }
          t = Cons_2(t, m_5, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, l_5);
        return(t);
      }
      t = Specification_1(t, k_5);
    }
  }
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm y_118 = NULL;
  y_118 = t;
  x_118 :
  if(!(match_cons(y_118, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm r_43 (ATerm), ATerm s_43 (ATerm))
{
  ATerm d_119 = NULL,f_119 = NULL,g_119 = NULL;
  d_119 = t;
  c_119 :
  if(match_cons(d_119, sym_TCons_2))
    {
      f_119 = ATgetArgument(d_119, 0);
      g_119 = ATgetArgument(d_119, 1);
      {
        ATerm j_119 = NULL;
        t = not_null(f_119);
        {
          ATerm l_119 = NULL;
          t = r_43(t);
          j_119 = t;
          t = not_null(g_119);
          t = s_43(t);
          l_119 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_119), not_null(l_119));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm s_119 = NULL;
  ATerm r_11;
  r_11 = t;
  {
    ATerm n_5 (ATerm t)
    {
      ATerm t_119 = NULL,u_119 = NULL;
      t_119 = t;
      r_119 :
      if(match_cons(t_119, sym_Program_1))
        {
          u_119 = ATgetArgument(t_119, 0);
          if(s_119 != NULL && s_119 != u_119)
            _fail(u_119);
          else
            s_119 = u_119;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, n_5);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_119), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = r_11;
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
  ATerm x_119 = NULL;
  x_119 = t;
  t = SSL_exit(not_null(x_119));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm e_120 = NULL,f_120 = NULL,g_120 = NULL,h_120 = NULL,i_120 = NULL;
  e_120 = t;
  b_120 :
  if(match_cons(e_120, sym_TCons_2))
    {
      f_120 = ATgetArgument(e_120, 0);
      g_120 = ATgetArgument(e_120, 1);
      c_120 :
      if(match_cons(g_120, sym_TCons_2))
        {
          h_120 = ATgetArgument(g_120, 0);
          i_120 = ATgetArgument(g_120, 1);
          d_120 :
          if(match_cons(i_120, sym_TNil_0))
            {
              ATerm s_11;
              s_11 = t;
              t = SSL_printnl(not_null(f_120), not_null(h_120));
              t = s_11;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm i_65 (ATerm))
{
  ATerm t_11 = t;
  if(PushChoice()==0)
    {
      t = i_65(t);
      PopChoice();
    }
  else
    t = t_11;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm r_120 = NULL,s_120 = NULL;
  ATerm o_5 (ATerm t)
  {
    ATerm p_5 (ATerm t)
    {
      ATerm u_11 = t;
      if(PushChoice()==0)
        {
          ATerm r_5 (ATerm t)
          {
            ATerm t_120 = NULL;
            t_120 = t;
            m_120 :
            if(!(match_cons(t_120, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, r_5);
          PopChoice();
          _fail(t);
        }
      else
        t = u_11;
      return(t);
    }
    ATerm q_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, p_5, q_5);
    {
      ATerm s_5 (ATerm t)
      {
        ATerm u_5 (ATerm t)
        {
          ATerm u_120 = NULL,v_120 = NULL;
          u_120 = t;
          o_120 :
          if(match_cons(u_120, sym_Runtime_1))
            {
              v_120 = ATgetArgument(u_120, 0);
              if(s_120 != NULL && s_120 != v_120)
                _fail(v_120);
              else
                s_120 = v_120;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, u_5);
        return(t);
      }
      ATerm t_5 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, s_5, t_5);
      {
        ATerm v_5 (ATerm t)
        {
          ATerm x_5 (ATerm t)
          {
            ATerm w_120 = NULL,x_120 = NULL;
            w_120 = t;
            q_120 :
            if(match_cons(w_120, sym_Program_1))
              {
                x_120 = ATgetArgument(w_120, 0);
                if(r_120 != NULL && r_120 != x_120)
                  _fail(x_120);
                else
                  r_120 = x_120;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, x_5);
          return(t);
        }
        ATerm w_5 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, v_5, w_5);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_120), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_120), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, o_5);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm e_121 = NULL,f_121 = NULL,g_121 = NULL,h_121 = NULL,i_121 = NULL;
  e_121 = t;
  b_121 :
  if(match_cons(e_121, sym_TCons_2))
    {
      f_121 = ATgetArgument(e_121, 0);
      g_121 = ATgetArgument(e_121, 1);
      c_121 :
      if(match_cons(g_121, sym_TCons_2))
        {
          h_121 = ATgetArgument(g_121, 0);
          i_121 = ATgetArgument(g_121, 1);
          d_121 :
          if(match_cons(i_121, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(f_121), not_null(h_121));
          else
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
  ATerm q_121 = NULL,r_121 = NULL,s_121 = NULL,t_121 = NULL,u_121 = NULL;
  q_121 = t;
  n_121 :
  if(match_cons(q_121, sym_TCons_2))
    {
      r_121 = ATgetArgument(q_121, 0);
      s_121 = ATgetArgument(q_121, 1);
      o_121 :
      if(match_cons(s_121, sym_TCons_2))
        {
          t_121 = ATgetArgument(s_121, 0);
          u_121 = ATgetArgument(s_121, 1);
          p_121 :
          if(match_cons(u_121, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(r_121), not_null(t_121));
          else
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
  ATerm c_122 = NULL;
  ATerm v_11;
  v_11 = t;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm w_11 = t;
      if(PushChoice()==0)
        {
          ATerm a_6 (ATerm t)
          {
            ATerm d_122 = NULL,e_122 = NULL;
            d_122 = t;
            z_121 :
            if(match_cons(d_122, sym_Output_1))
              {
                e_122 = ATgetArgument(d_122, 0);
                if(c_122 != NULL && c_122 != e_122)
                  _fail(e_122);
                else
                  c_122 = e_122;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, a_6);
          PopChoice();
        }
      else
        {
          t = w_11;
          {
            ATerm f_122 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            f_122 = t;
            if(c_122 != NULL && c_122 != f_122)
              _fail(f_122);
            else
              c_122 = f_122;
          }
        }
      return(t);
    }
    ATerm z_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, y_5, z_5);
  }
  t = v_11;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm c_6 (ATerm t)
      {
        ATerm d_6 (ATerm t)
        {
          t = not_null(c_122);
          return(t);
        }
        t = split_2(t, d_6, _id);
        return(t);
      }
      t = TCons_2(t, c_6, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, b_6);
    {
      ATerm x_11 = t;
      if(PushChoice()==0)
        {
          ATerm e_6 (ATerm t)
          {
            ATerm g_6 (ATerm t)
            {
              ATerm g_122 = NULL;
              g_122 = t;
              b_122 :
              if(!(match_cons(g_122, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, g_6);
            return(t);
          }
          ATerm f_6 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, e_6, f_6);
          PopChoice();
        }
      else
        {
          t = x_11;
          {
            ATerm h_6 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, h_6);
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
ATerm apply_strategy_1 (ATerm t, ATerm b_50 (ATerm))
{
  ATerm o_122 = NULL,q_122 = NULL,r_122 = NULL,s_122 = NULL,t_122 = NULL,u_122 = NULL;
  ATerm y_11;
  y_11 = t;
  t = dtime_0(t);
  t = y_11;
  t = b_50(t);
  {
    ATerm z_11;
    z_11 = t;
    {
      ATerm p_122 = NULL;
      t = dtime_0(t);
      p_122 = t;
      if(o_122 != NULL && o_122 != p_122)
        _fail(p_122);
      else
        o_122 = p_122;
    }
    t = z_11;
    q_122 = t;
    l_122 :
    if(match_cons(q_122, sym_TCons_2))
      {
        r_122 = ATgetArgument(q_122, 0);
        s_122 = ATgetArgument(q_122, 1);
        m_122 :
        if(match_cons(s_122, sym_TCons_2))
          {
            t_122 = ATgetArgument(s_122, 0);
            u_122 = ATgetArgument(s_122, 1);
            n_122 :
            if(match_cons(u_122, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(o_122)), not_null(r_122)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_122), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm a_123 = NULL;
  a_123 = t;
  t = SSL_ReadFromFile(not_null(a_123));
  return(t);
}
ATerm split_2 (ATerm t, ATerm f_52 (ATerm), ATerm g_52 (ATerm))
{
  ATerm g_123 = NULL;
  ATerm i_123 = NULL;
  g_123 = t;
  {
    ATerm k_123 = NULL;
    t = f_52(t);
    i_123 = t;
    t = not_null(g_123);
    t = g_52(t);
    k_123 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_123), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_123), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm s_123 = NULL;
  ATerm a_12;
  a_12 = t;
  {
    ATerm b_12 = t;
    if(PushChoice()==0)
      {
        ATerm i_6 (ATerm t)
        {
          ATerm t_123 = NULL,u_123 = NULL;
          t_123 = t;
          q_123 :
          if(match_cons(t_123, sym_Input_1))
            {
              u_123 = ATgetArgument(t_123, 0);
              if(s_123 != NULL && s_123 != u_123)
                _fail(u_123);
              else
                s_123 = u_123;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, i_6);
        PopChoice();
      }
    else
      {
        t = b_12;
        {
          ATerm v_123 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          v_123 = t;
          if(s_123 != NULL && s_123 != v_123)
            _fail(v_123);
          else
            s_123 = v_123;
        }
      }
  }
  t = a_12;
  {
    ATerm j_6 (ATerm t)
    {
      t = not_null(s_123);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, j_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm z_123 = NULL;
  z_123 = t;
  y_123 :
  if(!(match_cons(z_123, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm a_39 (ATerm))
{
  ATerm d_124 = NULL,e_124 = NULL;
  d_124 = t;
  c_124 :
  if(match_cons(d_124, sym_Undefined_1))
    {
      e_124 = ATgetArgument(d_124, 0);
      {
        ATerm g_124 = NULL;
        t = not_null(e_124);
        t = a_39(t);
        g_124 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_124));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_124 = NULL;
  l_124 = t;
  k_124 :
  if(!(match_cons(l_124, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm a_59 (ATerm))
{
  ATerm m_124 (ATerm t)
  {
    ATerm c_12 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, a_59, _id);
        PopChoice();
      }
    else
      {
        t = c_12;
        t = Cons_2(t, _id, m_124);
      }
    return(t);
  }
  t = m_124(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_49 (ATerm))
{
  t = fetch_1(t, f_49);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm a_50 (ATerm))
{
  ATerm k_6 (ATerm t)
  {
    ATerm f_12 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = f_12;
        {
          ATerm g_12 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = g_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, k_6);
  t = a_50(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm s_124 = NULL,t_124 = NULL,u_124 = NULL;
  ATerm h_12;
  h_12 = t;
  {
    ATerm v_124 = NULL,w_124 = NULL,x_124 = NULL,y_124 = NULL,z_124 = NULL,a_125 = NULL,b_125 = NULL;
    v_124 = t;
    o_124 :
    if(match_cons(v_124, sym_TCons_2))
      {
        w_124 = ATgetArgument(v_124, 0);
        x_124 = ATgetArgument(v_124, 1);
        p_124 :
        if(match_cons(x_124, sym_TCons_2))
          {
            y_124 = ATgetArgument(x_124, 0);
            z_124 = ATgetArgument(x_124, 1);
            q_124 :
            if(match_cons(z_124, sym_TCons_2))
              {
                a_125 = ATgetArgument(z_124, 0);
                b_125 = ATgetArgument(z_124, 1);
                r_124 :
                if(match_cons(b_125, sym_TNil_0))
                  {
                    if(s_124 != NULL && s_124 != w_124)
                      _fail(w_124);
                    else
                      s_124 = w_124;
                    if(t_124 != NULL && t_124 != y_124)
                      _fail(y_124);
                    else
                      t_124 = y_124;
                    if(u_124 != NULL && u_124 != a_125)
                      _fail(a_125);
                    else
                      u_124 = a_125;
                    t = SSL_table_put(not_null(s_124), not_null(t_124), not_null(u_124));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = h_12;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_125 = NULL;
  e_125 = t;
  t = SSL_table_create(not_null(e_125));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm i_125 = NULL;
  i_125 = t;
  {
    ATerm i_12;
    i_12 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_125), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = i_12;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm y_48 (ATerm), ATerm z_48 (ATerm))
{
  ATerm o_125 = NULL,p_125 = NULL,q_125 = NULL;
  o_125 = t;
  n_125 :
  if(match_cons(o_125, sym_Cons_2))
    {
      p_125 = ATgetArgument(o_125, 0);
      q_125 = ATgetArgument(o_125, 1);
      {
        ATerm t_125 = NULL;
        t = not_null(p_125);
        t = y_48(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = z_48(t);
        t_125 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_125), not_null(q_125));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm a_49 (ATerm), ATerm b_49 (ATerm))
{
  ATerm b_126 = NULL,c_126 = NULL,d_126 = NULL,e_126 = NULL,f_126 = NULL;
  b_126 = t;
  z_125 :
  if(match_cons(b_126, sym_Cons_2))
    {
      c_126 = ATgetArgument(b_126, 0);
      d_126 = ATgetArgument(b_126, 1);
      a_126 :
      if(match_cons(d_126, sym_Cons_2))
        {
          e_126 = ATgetArgument(d_126, 0);
          f_126 = ATgetArgument(d_126, 1);
          {
            ATerm j_126 = NULL;
            t = not_null(c_126);
            t = a_49(t);
            t = not_null(e_126);
            t = b_49(t);
            j_126 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_126), not_null(f_126));
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
  ATerm j_12 = t;
  if(PushChoice()==0)
    {
      ATerm l_6 (ATerm t)
      {
        ATerm h_127 = NULL;
        h_127 = t;
        n_126 :
        if(!(match_string(h_127, "-S")))
          _fail(t);
        return(t);
      }
      ATerm m_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, l_6, m_6);
      PopChoice();
    }
  else
    {
      t = j_12;
      {
        ATerm k_12 = t;
        if(PushChoice()==0)
          {
            ATerm n_6 (ATerm t)
            {
              ATerm i_127 = NULL;
              i_127 = t;
              o_126 :
              if(!(match_string(i_127, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm o_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, n_6, o_6);
            PopChoice();
          }
        else
          {
            t = k_12;
            {
              ATerm l_12 = t;
              if(PushChoice()==0)
                {
                  ATerm p_6 (ATerm t)
                  {
                    ATerm j_127 = NULL;
                    j_127 = t;
                    p_126 :
                    if(!(match_string(j_127, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm q_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, p_6, q_6);
                  PopChoice();
                }
              else
                {
                  t = l_12;
                  {
                    ATerm m_12 = t;
                    if(PushChoice()==0)
                      {
                        ATerm r_6 (ATerm t)
                        {
                          ATerm k_127 = NULL;
                          k_127 = t;
                          q_126 :
                          if(!(match_string(k_127, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm s_6 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, r_6, s_6);
                        PopChoice();
                      }
                    else
                      {
                        t = m_12;
                        {
                          ATerm n_12 = t;
                          if(PushChoice()==0)
                            {
                              ATerm t_6 (ATerm t)
                              {
                                ATerm l_127 = NULL;
                                l_127 = t;
                                r_126 :
                                if(!(match_string(l_127, "--version")))
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
                              t = n_12;
                              {
                                ATerm o_12 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm v_6 (ATerm t)
                                    {
                                      ATerm m_127 = NULL;
                                      m_127 = t;
                                      s_126 :
                                      if(!(match_string(m_127, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm w_6 (ATerm t)
                                    {
                                      ATerm n_127 = NULL;
                                      n_127 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(n_127));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, v_6, w_6);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = o_12;
                                    {
                                      ATerm p_12 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm x_6 (ATerm t)
                                          {
                                            ATerm p_127 = NULL;
                                            p_127 = t;
                                            u_126 :
                                            if(!(match_string(p_127, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm y_6 (ATerm t)
                                          {
                                            ATerm q_127 = NULL;
                                            q_127 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(q_127));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, x_6, y_6);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = p_12;
                                          {
                                            ATerm q_12 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm z_6 (ATerm t)
                                                {
                                                  ATerm s_127 = NULL;
                                                  s_127 = t;
                                                  w_126 :
                                                  if(!(match_string(s_127, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm a_7 (ATerm t)
                                                {
                                                  ATerm t_127 = NULL;
                                                  t_127 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_127));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, z_6, a_7);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = q_12;
                                                {
                                                  ATerm r_12 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm b_7 (ATerm t)
                                                      {
                                                        ATerm v_127 = NULL;
                                                        v_127 = t;
                                                        y_126 :
                                                        if(!(match_string(v_127, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm c_7 (ATerm t)
                                                      {
                                                        ATerm w_127 = NULL;
                                                        w_127 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_127));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, b_7, c_7);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = r_12;
                                                      {
                                                        ATerm s_12 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm d_7 (ATerm t)
                                                            {
                                                              ATerm y_127 = NULL;
                                                              y_127 = t;
                                                              a_127 :
                                                              if(!(match_string(y_127, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm e_7 (ATerm t)
                                                            {
                                                              ATerm z_127 = NULL;
                                                              z_127 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_127));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, d_7, e_7);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = s_12;
                                                            {
                                                              ATerm t_12 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm f_7 (ATerm t)
                                                                  {
                                                                    ATerm b_128 = NULL;
                                                                    b_128 = t;
                                                                    c_127 :
                                                                    if(!(match_string(b_128, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm g_7 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, f_7, g_7);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = t_12;
                                                                  {
                                                                    ATerm u_12 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm k_7 (ATerm t)
                                                                        {
                                                                          ATerm c_128 = NULL;
                                                                          c_128 = t;
                                                                          d_127 :
                                                                          if(!(match_string(c_128, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm m_7 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, k_7, m_7);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = u_12;
                                                                        {
                                                                          ATerm v_12 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm o_7 (ATerm t)
                                                                              {
                                                                                ATerm d_128 = NULL;
                                                                                d_128 = t;
                                                                                e_127 :
                                                                                if(!(match_string(d_128, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm v_7 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, o_7, v_7);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = v_12;
                                                                              {
                                                                                ATerm w_12 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm w_7 (ATerm t)
                                                                                    {
                                                                                      ATerm e_128 = NULL;
                                                                                      e_128 = t;
                                                                                      f_127 :
                                                                                      if(!(match_string(e_128, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm x_7 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, w_7, x_7);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_12;
                                                                                    {
                                                                                      ATerm y_7 (ATerm t)
                                                                                      {
                                                                                        ATerm f_128 = NULL;
                                                                                        f_128 = t;
                                                                                        g_127 :
                                                                                        if(!(match_string(f_128, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm z_7 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, y_7, z_7);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm n_128 = NULL,o_128 = NULL,p_128 = NULL;
  n_128 = t;
  m_128 :
  if(match_cons(n_128, sym_Cons_2))
    {
      o_128 = ATgetArgument(n_128, 0);
      p_128 = ATgetArgument(n_128, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_128)), not_null(p_128));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_43 (ATerm), ATerm w_43 (ATerm))
{
  ATerm x_128 = NULL,y_128 = NULL,z_128 = NULL;
  x_128 = t;
  w_128 :
  if(match_cons(x_128, sym_Cons_2))
    {
      y_128 = ATgetArgument(x_128, 0);
      z_128 = ATgetArgument(x_128, 1);
      {
        ATerm c_129 = NULL;
        t = not_null(y_128);
        {
          ATerm e_129 = NULL;
          t = v_43(t);
          c_129 = t;
          t = not_null(z_128);
          t = w_43(t);
          e_129 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_129), not_null(e_129));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm k_129 = NULL;
  k_129 = t;
  j_129 :
  if(!(match_cons(k_129, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_48 (ATerm))
{
  ATerm a_8 (ATerm t)
  {
    ATerm m_129 = NULL;
    m_129 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_129));
    return(t);
  }
  ATerm b_8 (ATerm t)
  {
    ATerm x_12 = t;
    if(PushChoice()==0)
      {
        ATerm y_12 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = y_12;
            t = w_48(t);
            t = Cons_2(t, _id, b_8);
          }
        PopChoice();
      }
    else
      {
        t = x_12;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, a_8, b_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm p_49 (ATerm), ATerm q_49 (ATerm), ATerm r_49 (ATerm))
{
  ATerm c_8 (ATerm t)
  {
    ATerm z_12 = t;
    if(PushChoice()==0)
      {
        t = q_49(t);
        PopChoice();
      }
    else
      {
        t = z_12;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, c_8);
  t = store_options_0(t);
  {
    ATerm a_13 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, r_49);
        PopChoice();
      }
    else
      {
        t = a_13;
        {
          ATerm b_13 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, p_49);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = b_13;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm k_49 (ATerm), ATerm l_49 (ATerm))
{
  t = iowrap_3(t, k_49, l_49, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm h_49 (ATerm))
{
  ATerm d_8 (ATerm t)
  {
    ATerm e_8 (ATerm t)
    {
      t = TCons_2(t, h_49, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, e_8);
    return(t);
  }
  t = iowrap_2(t, d_8, _fail);
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
