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
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm t_40 (ATerm), ATerm u_40 (ATerm));
ATerm Con_3 (ATerm, ATerm q_40 (ATerm), ATerm r_40 (ATerm), ATerm s_40 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm h_64 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm b_42 (ATerm));
ATerm Specification_1 (ATerm, ATerm d_42 (ATerm));
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm j_45 (ATerm));
ATerm Rec_2 (ATerm, ATerm c_43 (ATerm), ATerm d_43 (ATerm));
ATerm Let_2 (ATerm, ATerm e_43 (ATerm), ATerm f_43 (ATerm));
ATerm sboundin_3 (ATerm, ATerm k_45 (ATerm), ATerm l_45 (ATerm), ATerm m_45 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm b_43 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm d_48 (ATerm, ATerm (ATerm)), ATerm e_48 (ATerm), ATerm f_48 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm g_48 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm DeclareVariables_0 (ATerm);
ATerm RDtoSD_0 (ATerm);
ATerm MkCall_0 (ATerm);
ATerm MkCongDef_0 (ATerm);
ATerm MkCongDefs_0 (ATerm);
ATerm congdefs_0 (ATerm);
ATerm RulesToSdefs_0 (ATerm);
ATerm debug_1 (ATerm, ATerm v_51 (ATerm));
ATerm int_to_string_0 (ATerm);
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm FunType_2 (ATerm, ATerm f_42 (ATerm), ATerm g_42 (ATerm));
ATerm ConstType_1 (ATerm, ATerm e_42 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm j_42 (ATerm), ATerm k_42 (ATerm));
ATerm CheckCons_2 (ATerm, ATerm z_44 (ATerm), ATerm a_45 (ATerm));
ATerm manytd_1 (ATerm, ATerm p_65 (ATerm));
ATerm check_constructors_1 (ATerm, ATerm i_0 (ATerm));
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm i_46 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm r_42 (ATerm), ATerm s_42 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm f_45 (ATerm));
ATerm Var_1 (ATerm, ATerm n_42 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm v_47 (ATerm), ATerm w_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm b_48 (ATerm), ATerm c_48 (ATerm, ATerm (ATerm)));
ATerm Fst_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm p_47 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm q_61 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm v_61 (ATerm));
ATerm substitute_6 (ATerm, ATerm n_48 (ATerm), ATerm o_48 (ATerm, ATerm (ATerm)), ATerm p_48 (ATerm), ATerm q_48 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm r_48 (ATerm, ATerm (ATerm)), ATerm s_48 (ATerm));
ATerm substitute_5 (ATerm, ATerm u_48 (ATerm), ATerm v_48 (ATerm, ATerm (ATerm)), ATerm w_48 (ATerm), ATerm x_48 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm y_48 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm g_46 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm h_46 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm MsgR_0 (ATerm);
ATerm MsgE_0 (ATerm);
ATerm MsgU_0 (ATerm);
ATerm MsgS_0 (ATerm);
ATerm MkMsg_0 (ATerm);
ATerm err_msg_0 (ATerm);
ATerm Overlay_3 (ATerm, ATerm v_41 (ATerm), ATerm w_41 (ATerm), ATerm x_41 (ATerm));
ATerm Union_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm explode_term_0 (ATerm);
ATerm default_join_0 (ATerm);
ATerm SeqUnion_0 (ATerm);
ATerm cart_1 (ATerm, ATerm k_58 (ATerm));
ATerm seqs_join_0 (ATerm);
ATerm JoinScope_1 (ATerm, ATerm c_45 (ATerm));
ATerm UDjoin_0 (ATerm);
ATerm Cong_2 (ATerm, ATerm u_43 (ATerm), ATerm v_43 (ATerm));
ATerm use_term_0 (ATerm);
ATerm def_term_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm g_41 (ATerm), ATerm h_41 (ATerm), ATerm i_41 (ATerm));
ATerm BAM_3 (ATerm, ATerm n_40 (ATerm), ATerm o_40 (ATerm), ATerm p_40 (ATerm));
ATerm BA_2 (ATerm, ATerm l_40 (ATerm), ATerm m_40 (ATerm));
ATerm AM_2 (ATerm, ATerm j_40 (ATerm), ATerm k_40 (ATerm));
ATerm MA_2 (ATerm, ATerm h_40 (ATerm), ATerm i_40 (ATerm));
ATerm Match_1 (ATerm, ATerm c_44 (ATerm));
ATerm Build_1 (ATerm, ATerm d_44 (ATerm));
ATerm constructs_1 (ATerm, ATerm b_45 (ATerm));
ATerm use_def_0 (ATerm);
ATerm RDef_3 (ATerm, ATerm o_41 (ATerm), ATerm p_41 (ATerm), ATerm q_41 (ATerm));
ATerm SDef_3 (ATerm, ATerm g_43 (ATerm), ATerm h_43 (ATerm), ATerm i_43 (ATerm));
ATerm check_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm z_41 (ATerm));
ATerm Signature_1 (ATerm, ATerm y_41 (ATerm));
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
ATerm dist_scope_1 (ATerm, ATerm e_67 (ATerm));
ATerm one_dist_1 (ATerm, ATerm r_61 (ATerm));
ATerm env_oncetd_1 (ATerm, ATerm g_62 (ATerm));
ATerm lift_dynamic_rule_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm e_61 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm r_41 (ATerm));
ATerm Scope_2 (ATerm, ATerm g_44 (ATerm), ATerm h_44 (ATerm));
ATerm tboundin_3 (ATerm, ATerm g_45 (ATerm), ATerm h_45 (ATerm), ATerm i_45 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm b_55 (ATerm), ATerm c_55 (ATerm), ATerm d_55 (ATerm));
ATerm crush_3 (ATerm, ATerm r_56 (ATerm), ATerm s_56 (ATerm), ATerm t_56 (ATerm));
ATerm HdMember_1 (ATerm, ATerm g_56 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm m_66 (ATerm), ATerm n_66 (ATerm));
ATerm for_3 (ATerm, ATerm p_66 (ATerm), ATerm q_66 (ATerm), ATerm r_66 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm m_46 (ATerm), ATerm n_46 (ATerm), ATerm o_46 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm t_62 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm i_48 (ATerm), ATerm j_48 (ATerm));
ATerm alltd_1 (ATerm, ATerm v_64 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm m_58 (ATerm), ATerm n_58 (ATerm), ATerm o_58 (ATerm), ATerm p_58 (ATerm));
ATerm zip_1 (ATerm, ATerm r_58 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm k_48 (ATerm), ATerm l_48 (ATerm));
ATerm substitute_1 (ATerm, ATerm m_48 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm OLName_0 (ATerm);
ATerm OpName_0 (ATerm);
ATerm OpNames_0 (ATerm);
ATerm Names_0 (ATerm);
ATerm filter_1 (ATerm, ATerm h_54 (ATerm));
ATerm const_names_0 (ATerm);
ATerm vars_to_consts_0 (ATerm);
ATerm MkSpec_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Combine_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm z_54 (ATerm), ATerm a_55 (ATerm));
ATerm NormBSIG_0 (ATerm);
ATerm normalize_sigs_0 (ATerm);
ATerm NormBSP_0 (ATerm);
ATerm BSpecs_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm r_62 (ATerm));
ATerm DefineSugar_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm l_44 (ATerm), ATerm m_44 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm l_51 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm p_53 (ATerm), ATerm q_53 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_51 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_60 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm r_49 (ATerm));
ATerm map_1 (ATerm, ATerm c_60 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm v_65 (ATerm), ATerm w_65 (ATerm));
ATerm repeat_1 (ATerm, ATerm y_65 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm q_49 (ATerm));
ATerm Program_1 (ATerm, ATerm s_39 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm t_39 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_60 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_50 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm s_66 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm v_49 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm p_44 (ATerm), ATerm q_44 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm t_49 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_49 (ATerm));
ATerm iowrap_3 (ATerm, ATerm z_50 (ATerm), ATerm a_51 (ATerm), ATerm b_51 (ATerm));
ATerm iowrap_2 (ATerm, ATerm u_50 (ATerm), ATerm v_50 (ATerm));
ATerm iowrap_1 (ATerm, ATerm r_50 (ATerm));
ATerm frontend_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Expl_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
  g_8 = t;
  f_8 :
  if(match_cons(g_8, sym_Match_1))
    {
      h_8 = ATgetArgument(g_8, 0);
      {
        ATerm k_8 = NULL;
        ATerm m_8 = NULL;
        t = new_0(t);
        k_8 = t;
        {
          ATerm v_10 = NULL,w_10 = NULL,v_11 = NULL;
          t = new_0(t);
          m_8 = t;
          t = not_null(h_8);
          {
            ATerm j_0 (ATerm t)
            {
              ATerm x_10 = NULL,s_11 = NULL,u_11 = NULL;
              x_10 = t;
              x_4 :
              if(match_cons(x_10, sym_Explode_2))
                {
                  s_11 = ATgetArgument(x_10, 0);
                  u_11 = ATgetArgument(x_10, 1);
                  if(v_10 != NULL && v_10 != s_11)
                    _fail(s_11);
                  else
                    v_10 = s_11;
                  if(w_10 != NULL && w_10 != u_11)
                    _fail(u_11);
                  else
                    w_10 = u_11;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_8));
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1(t, j_0);
            v_11 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_8), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_11)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_8), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_8))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_8)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_8)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_10), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_10), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0))))))));
          }
        }
      }
    }
  else
    {
      if(match_cons(g_8, sym_Build_1))
        {
          h_8 = ATgetArgument(g_8, 0);
          {
            ATerm w_12 = NULL;
            ATerm g_14 = NULL,h_14 = NULL,s_14 = NULL;
            t = new_0(t);
            w_12 = t;
            t = not_null(h_8);
            {
              ATerm k_0 (ATerm t)
              {
                ATerm i_14 = NULL,j_14 = NULL,r_14 = NULL;
                i_14 = t;
                z_7 :
                if(match_cons(i_14, sym_Explode_2))
                  {
                    j_14 = ATgetArgument(i_14, 0);
                    r_14 = ATgetArgument(i_14, 1);
                    if(g_14 != NULL && g_14 != j_14)
                      _fail(j_14);
                    else
                      g_14 = j_14;
                    if(h_14 != NULL && h_14 != r_14)
                      _fail(r_14);
                    else
                      h_14 = r_14;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_12));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, k_0);
              s_14 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_12), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_14), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_14), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_12))), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_14)))));
            }
          }
        }
      else
        {
          if(match_cons(g_8, sym_ExplodeCong_2))
            {
              h_8 = ATgetArgument(g_8, 0);
              i_8 = ATgetArgument(g_8, 1);
              {
                ATerm g_15 = NULL;
                ATerm i_15 = NULL;
                t = new_0(t);
                g_15 = t;
                {
                  ATerm k_15 = NULL;
                  t = new_0(t);
                  i_15 = t;
                  {
                    ATerm m_15 = NULL;
                    t = new_0(t);
                    k_15 = t;
                    t = new_0(t);
                    m_15 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_15), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_15), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_15), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_15), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_15)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_15)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(h_8), (ATerm)ATmakeAppl(sym_Var_1, not_null(g_15)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_15))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(i_8), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_15)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_15))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_15)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_15)), (ATerm) ATmakeAppl(sym_Nil_0)))))));
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
ATerm Mapp2_0 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL;
  s_17 = t;
  r_17 :
  if(match_cons(s_17, sym_Match_1))
    {
      t_17 = ATgetArgument(s_17, 0);
      {
        ATerm t_8 = t;
        if(PushChoice()==0)
          {
            ATerm v_17 = NULL,w_17 = NULL,d_18 = NULL;
            t = not_null(t_17);
            {
              ATerm l_0 (ATerm t)
              {
                ATerm x_17 = NULL,y_17 = NULL,c_18 = NULL;
                x_17 = t;
                h_16 :
                if(match_cons(x_17, sym_App_2))
                  {
                    y_17 = ATgetArgument(x_17, 0);
                    c_18 = ATgetArgument(x_17, 1);
                    if(v_17 != NULL && v_17 != y_17)
                      _fail(y_17);
                    else
                      v_17 = y_17;
                    if(w_17 != NULL && w_17 != c_18)
                      _fail(c_18);
                    else
                      w_17 = c_18;
                    t = (ATerm) ATmakeAppl(sym_Wld_0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, l_0);
              d_18 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_18)), (ATerm) ATmakeAppl(sym_BA_2, not_null(v_17), not_null(w_17)));
            }
            PopChoice();
          }
        else
          {
            t = t_8;
            {
              ATerm g_18 = NULL;
              ATerm i_18 = NULL,l_18 = NULL;
              t = new_0(t);
              g_18 = t;
              t = not_null(t_17);
              {
                ATerm m_0 (ATerm t)
                {
                  ATerm j_18 = NULL,k_18 = NULL;
                  j_18 = t;
                  q_16 :
                  if(match_cons(j_18, sym_RootApp_1))
                    {
                      k_18 = ATgetArgument(j_18, 0);
                      if(i_18 != NULL && i_18 != k_18)
                        _fail(k_18);
                      else
                        i_18 = k_18;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_18));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, m_0);
                l_18 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_18), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_18)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_18))), not_null(i_18))));
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Mapp1_0 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
  a_19 = t;
  x_18 :
  if(match_cons(a_19, sym_Match_1))
    {
      b_19 = ATgetArgument(a_19, 0);
      y_18 :
      if(match_cons(b_19, sym_App_2))
        {
          c_19 = ATgetArgument(b_19, 0);
          z_18 = ATgetArgument(b_19, 1);
          t = (ATerm) ATmakeAppl(sym_BA_2, not_null(c_19), not_null(z_18));
        }
      else
        {
          if(match_cons(b_19, sym_RootApp_1))
            {
              c_19 = ATgetArgument(b_19, 0);
              t = not_null(c_19);
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Mapp0_0 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL;
  x_19 = t;
  w_19 :
  if(match_cons(x_19, sym_Match_1))
    {
      y_19 = ATgetArgument(x_19, 0);
      {
        ATerm d_20 = NULL,s_20 = NULL;
        t = not_null(y_19);
        {
          ATerm n_0 (ATerm t)
          {
            ATerm e_20 = NULL,q_20 = NULL,r_20 = NULL;
            e_20 = t;
            k_19 :
            if(match_cons(e_20, sym_RootApp_1))
              {
                q_20 = ATgetArgument(e_20, 0);
                l_19 :
                if(match_cons(q_20, sym_Match_1))
                  {
                    r_20 = ATgetArgument(q_20, 0);
                    if(d_20 != NULL && d_20 != r_20)
                      _fail(r_20);
                    else
                      d_20 = r_20;
                    t = not_null(d_20);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, n_0);
          s_20 = t;
          t = (ATerm) ATmakeAppl(sym_Match_1, not_null(s_20));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL;
  q_21 = t;
  o_21 :
  if(match_cons(q_21, sym_Build_1))
    {
      r_21 = ATgetArgument(q_21, 0);
      {
        ATerm u_8 = t;
        if(PushChoice()==0)
          {
            ATerm t_21 = NULL;
            ATerm v_21 = NULL,w_21 = NULL,a_22 = NULL;
            t = new_0(t);
            t_21 = t;
            t = not_null(r_21);
            {
              ATerm o_0 (ATerm t)
              {
                ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
                x_21 = t;
                b_21 :
                if(match_cons(x_21, sym_App_2))
                  {
                    y_21 = ATgetArgument(x_21, 0);
                    z_21 = ATgetArgument(x_21, 1);
                    if(v_21 != NULL && v_21 != y_21)
                      _fail(y_21);
                    else
                      v_21 = y_21;
                    if(w_21 != NULL && w_21 != z_21)
                      _fail(z_21);
                    else
                      w_21 = z_21;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_21));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, o_0);
              a_22 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_21), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(v_21), not_null(w_21), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_21)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_22))));
            }
            PopChoice();
          }
        else
          {
            t = u_8;
            {
              ATerm d_22 = NULL;
              ATerm f_22 = NULL,k_22 = NULL;
              t = new_0(t);
              d_22 = t;
              t = not_null(r_21);
              {
                ATerm p_0 (ATerm t)
                {
                  ATerm i_22 = NULL,j_22 = NULL;
                  i_22 = t;
                  h_21 :
                  if(match_cons(i_22, sym_RootApp_1))
                    {
                      j_22 = ATgetArgument(i_22, 0);
                      if(f_22 != NULL && f_22 != j_22)
                        _fail(j_22);
                      else
                        f_22 = j_22;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_22));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, p_0);
                k_22 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_22), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_22), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_22))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_22))));
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
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
  z_22 = t;
  w_22 :
  if(match_cons(z_22, sym_Build_1))
    {
      a_23 = ATgetArgument(z_22, 0);
      x_22 :
      if(match_cons(a_23, sym_App_2))
        {
          b_23 = ATgetArgument(a_23, 0);
          y_22 = ATgetArgument(a_23, 1);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_22)), not_null(b_23));
        }
      else
        {
          if(match_cons(a_23, sym_RootApp_1))
            {
              b_23 = ATgetArgument(a_23, 0);
              t = not_null(b_23);
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
  ATerm t_23 = NULL,u_23 = NULL;
  t_23 = t;
  s_23 :
  if(match_cons(t_23, sym_Build_1))
    {
      u_23 = ATgetArgument(t_23, 0);
      {
        ATerm v_8 = t;
        if(PushChoice()==0)
          {
            ATerm w_23 = NULL,x_23 = NULL,d_24 = NULL;
            t = not_null(u_23);
            {
              ATerm q_0 (ATerm t)
              {
                ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL;
                y_23 = t;
                k_23 :
                if(match_cons(y_23, sym_App_2))
                  {
                    z_23 = ATgetArgument(y_23, 0);
                    b_24 = ATgetArgument(y_23, 1);
                    l_23 :
                    if(match_cons(z_23, sym_Build_1))
                      {
                        a_24 = ATgetArgument(z_23, 0);
                        if(x_23 != NULL && x_23 != a_24)
                          _fail(a_24);
                        else
                          x_23 = a_24;
                        if(w_23 != NULL && w_23 != b_24)
                          _fail(b_24);
                        else
                          w_23 = b_24;
                        t = not_null(x_23);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, q_0);
              d_24 = t;
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(d_24));
            }
            PopChoice();
          }
        else
          {
            t = v_8;
            {
              ATerm g_24 = NULL,k_24 = NULL;
              t = not_null(u_23);
              {
                ATerm r_0 (ATerm t)
                {
                  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
                  h_24 = t;
                  p_23 :
                  if(match_cons(h_24, sym_RootApp_1))
                    {
                      i_24 = ATgetArgument(h_24, 0);
                      q_23 :
                      if(match_cons(i_24, sym_Build_1))
                        {
                          j_24 = ATgetArgument(i_24, 0);
                          if(g_24 != NULL && g_24 != j_24)
                            _fail(j_24);
                          else
                            g_24 = j_24;
                          t = not_null(g_24);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, r_0);
                k_24 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, not_null(k_24));
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
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL;
  m_25 = t;
  g_25 :
  if(match_cons(m_25, sym_Seqs_1))
    {
      n_25 = ATgetArgument(m_25, 0);
      h_25 :
      if(match_cons(n_25, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(n_25, sym_Cons_2))
            {
              k_25 = ATgetArgument(n_25, 0);
              l_25 = ATgetArgument(n_25, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_25), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(l_25)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(m_25, sym_Choices_1))
        {
          n_25 = ATgetArgument(m_25, 0);
          i_25 :
          if(match_cons(n_25, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(n_25, sym_Cons_2))
                {
                  k_25 = ATgetArgument(n_25, 0);
                  l_25 = ATgetArgument(n_25, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(k_25), (ATerm) ATmakeAppl(sym_Choices_1, not_null(l_25)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(m_25, sym_LChoices_1))
            {
              n_25 = ATgetArgument(m_25, 0);
              j_25 :
              if(match_cons(n_25, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(n_25, sym_Cons_2))
                    {
                      k_25 = ATgetArgument(n_25, 0);
                      l_25 = ATgetArgument(n_25, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(k_25), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(l_25)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(m_25, sym_Lets_2))
                {
                  n_25 = ATgetArgument(m_25, 0);
                  o_25 = ATgetArgument(m_25, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(n_25), not_null(o_25));
                }
              else
                {
                  if(match_cons(m_25, sym_BA_2))
                    {
                      n_25 = ATgetArgument(m_25, 0);
                      o_25 = ATgetArgument(m_25, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_25)), not_null(n_25));
                    }
                  else
                    {
                      if(match_cons(m_25, sym_MA_2))
                        {
                          n_25 = ATgetArgument(m_25, 0);
                          o_25 = ATgetArgument(m_25, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_25)), not_null(o_25));
                        }
                      else
                        {
                          if(match_cons(m_25, sym_AM_2))
                            {
                              n_25 = ATgetArgument(m_25, 0);
                              o_25 = ATgetArgument(m_25, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_25), (ATerm) ATmakeAppl(sym_Match_1, not_null(o_25)));
                            }
                          else
                            {
                              if(match_cons(m_25, sym_BAM_3))
                                {
                                  n_25 = ATgetArgument(m_25, 0);
                                  o_25 = ATgetArgument(m_25, 1);
                                  p_25 = ATgetArgument(m_25, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_25)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_25), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_25)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(m_25, sym_InfixApp_3))
                                    {
                                      n_25 = ATgetArgument(m_25, 0);
                                      o_25 = ATgetArgument(m_25, 1);
                                      p_25 = ATgetArgument(m_25, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(o_25), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_25), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_25), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm x_26 = NULL;
  x_26 = t;
  w_26 :
  if(!(match_cons(x_26, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm w_8 = t;
  if(PushChoice()==0)
    {
      ATerm s_0 (ATerm t)
      {
        ATerm x_8 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = x_8;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, s_0);
      PopChoice();
      _fail(t);
    }
  else
    t = w_8;
  return(t);
}
ATerm App_2 (ATerm t, ATerm t_40 (ATerm), ATerm u_40 (ATerm))
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
  c_27 = t;
  b_27 :
  if(match_cons(c_27, sym_App_2))
    {
      d_27 = ATgetArgument(c_27, 0);
      e_27 = ATgetArgument(c_27, 1);
      {
        ATerm h_27 = NULL;
        t = not_null(d_27);
        {
          ATerm j_27 = NULL;
          t = t_40(t);
          h_27 = t;
          t = not_null(e_27);
          t = u_40(t);
          j_27 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, not_null(h_27), not_null(j_27));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm q_40 (ATerm), ATerm r_40 (ATerm), ATerm s_40 (ATerm))
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
  t_27 = t;
  s_27 :
  if(match_cons(t_27, sym_Con_3))
    {
      u_27 = ATgetArgument(t_27, 0);
      v_27 = ATgetArgument(t_27, 1);
      w_27 = ATgetArgument(t_27, 2);
      {
        ATerm a_28 = NULL;
        t = not_null(u_27);
        {
          ATerm c_28 = NULL;
          t = q_40(t);
          a_28 = t;
          t = not_null(v_27);
          {
            ATerm j_28 = NULL;
            t = r_40(t);
            c_28 = t;
            t = not_null(w_27);
            t = s_40(t);
            j_28 = t;
            t = (ATerm) ATmakeAppl(sym_Con_3, not_null(a_28), not_null(c_28), not_null(j_28));
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
  ATerm y_8 = t;
  if(PushChoice()==0)
    {
      ATerm t_0 (ATerm t)
      {
        ATerm z_8 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = z_8;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, t_0);
      PopChoice();
      _fail(t);
    }
  else
    t = y_8;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
  u_28 = t;
  r_28 :
  if(match_cons(u_28, sym_SRule_1))
    {
      v_28 = ATgetArgument(u_28, 0);
      t_28 :
      if(match_cons(v_28, sym_Rule_3))
        {
          w_28 = ATgetArgument(v_28, 0);
          x_28 = ATgetArgument(v_28, 1);
          y_28 = ATgetArgument(v_28, 2);
          t = not_null(w_28);
          t = pureterm_0(t);
          t = not_null(x_28);
          t = buildterm_0(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_28)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_28), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_28)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(v_28, sym_StratRule_3))
            {
              w_28 = ATgetArgument(v_28, 0);
              x_28 = ATgetArgument(v_28, 1);
              y_28 = ATgetArgument(v_28, 2);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_28), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_28), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_28), (ATerm) ATmakeAppl(sym_Nil_0)))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm h_64 (ATerm))
{
  ATerm i_29 (ATerm t)
  {
    ATerm a_9 = t;
    if(PushChoice()==0)
      {
        t = h_64(t);
        PopChoice();
      }
    else
      {
        t = a_9;
        t = _one(t, i_29);
      }
    return(t);
  }
  t = i_29(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm x_29 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
  x_29 = t;
  v_29 :
  if(match_cons(x_29, sym_SRule_1))
    {
      c_30 = ATgetArgument(x_29, 0);
      w_29 :
      if(match_cons(c_30, sym_Rule_3))
        {
          d_30 = ATgetArgument(c_30, 0);
          e_30 = ATgetArgument(c_30, 1);
          f_30 = ATgetArgument(c_30, 2);
          {
            ATerm j_30 = NULL;
            ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,t_30 = NULL;
            t = new_0(t);
            j_30 = t;
            t = not_null(d_30);
            {
              ATerm z_30 = NULL,a_31 = NULL,o_31 = NULL;
              ATerm u_0 (ATerm t)
              {
                ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
                o_30 = t;
                m_29 :
                if(match_cons(o_30, sym_Con_3))
                  {
                    p_30 = ATgetArgument(o_30, 0);
                    r_30 = ATgetArgument(o_30, 1);
                    s_30 = ATgetArgument(o_30, 2);
                    n_29 :
                    if(match_cons(p_30, sym_Var_1))
                      {
                        q_30 = ATgetArgument(p_30, 0);
                        if(n_30 != NULL && n_30 != q_30)
                          _fail(q_30);
                        else
                          n_30 = q_30;
                        if(l_30 != NULL && l_30 != r_30)
                          _fail(r_30);
                        else
                          l_30 = r_30;
                        if(m_30 != NULL && m_30 != s_30)
                          _fail(s_30);
                        else
                          m_30 = s_30;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_30));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, u_0);
              t_30 = t;
              t = not_null(e_30);
              {
                ATerm v_0 (ATerm t)
                {
                  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,n_31 = NULL;
                  b_31 = t;
                  q_29 :
                  if(match_cons(b_31, sym_Con_3))
                    {
                      c_31 = ATgetArgument(b_31, 0);
                      g_31 = ATgetArgument(b_31, 1);
                      h_31 = ATgetArgument(b_31, 2);
                      r_29 :
                      if(match_cons(c_31, sym_Var_1))
                        {
                          d_31 = ATgetArgument(c_31, 0);
                          s_29 :
                          if(match_cons(h_31, sym_Call_2))
                            {
                              i_31 = ATgetArgument(h_31, 0);
                              n_31 = ATgetArgument(h_31, 1);
                              t_29 :
                              if(match_cons(n_31, sym_Nil_0))
                                {
                                  if(n_30 != NULL && n_30 != d_31)
                                    _fail(d_31);
                                  else
                                    n_30 = d_31;
                                  if(z_30 != NULL && z_30 != g_31)
                                    _fail(g_31);
                                  else
                                    z_30 = g_31;
                                  if(a_31 != NULL && a_31 != i_31)
                                    _fail(i_31);
                                  else
                                    a_31 = i_31;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_30));
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, v_0);
                o_31 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_30), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_30), not_null(o_31), (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_30), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(a_31), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(l_30), not_null(z_30), (ATerm) ATmakeAppl(sym_Id_0))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Var_1, not_null(n_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_30)))))));
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
  ATerm w_0 (ATerm t)
  {
    ATerm b_9 = t;
    if(PushChoice()==0)
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      {
        t = b_9;
        {
          ATerm c_9 = t;
          if(PushChoice()==0)
            {
              t = Scope_2(t, _id, desugarRule_0);
              PopChoice();
            }
          else
            {
              t = c_9;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, w_0);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm y_0 (ATerm t)
      {
        ATerm d_9 = t;
        if(PushChoice()==0)
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = d_9;
            {
              ATerm e_9 = t;
              if(PushChoice()==0)
                {
                  ATerm f_9 = t;
                  if(PushChoice()==0)
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = f_9;
                      {
                        ATerm g_9 = t;
                        if(PushChoice()==0)
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = g_9;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = e_9;
                  {
                    ATerm h_9 = t;
                    if(PushChoice()==0)
                      {
                        ATerm i_9 = t;
                        if(PushChoice()==0)
                          {
                            t = Mapp0_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = i_9;
                            {
                              ATerm j_9 = t;
                              if(PushChoice()==0)
                                {
                                  t = Mapp1_0(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = j_9;
                                  t = Mapp2_0(t);
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
            }
          }
        return(t);
      }
      t = repeat_1(t, y_0);
    }
    return(t);
  }
  t = topdown_1(t, x_0);
  return(t);
}
ATerm desugar_spec_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = SDef_3(t, _id, _id, desugar_0);
    return(t);
  }
  t = map_1(t, z_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm b_42 (ATerm))
{
  ATerm d_32 = NULL,e_32 = NULL;
  d_32 = t;
  c_32 :
  if(match_cons(d_32, sym_Strategies_1))
    {
      e_32 = ATgetArgument(d_32, 0);
      {
        ATerm g_32 = NULL;
        t = not_null(e_32);
        t = b_42(t);
        g_32 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(g_32));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm d_42 (ATerm))
{
  ATerm n_32 = NULL,o_32 = NULL;
  n_32 = t;
  m_32 :
  if(match_cons(n_32, sym_Specification_1))
    {
      o_32 = ATgetArgument(n_32, 0);
      {
        ATerm q_32 = NULL;
        t = not_null(o_32);
        t = d_42(t);
        q_32 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(q_32));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm w_32 = NULL,b_33 = NULL,c_33 = NULL;
  w_32 = t;
  v_32 :
  if(match_cons(w_32, sym_Cons_2))
    {
      b_33 = ATgetArgument(w_32, 0);
      c_33 = ATgetArgument(w_32, 1);
      t = not_null(b_33);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm j_45 (ATerm))
{
  ATerm k_9 = t;
  if(PushChoice()==0)
    {
      ATerm a_1 (ATerm t)
      {
        t = split_2(t, _id, j_45);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL;
            y_33 = t;
            p_33 :
            if(match_cons(y_33, sym_TCons_2))
              {
                z_33 = ATgetArgument(y_33, 0);
                h_34 = ATgetArgument(y_33, 1);
                q_33 :
                if(match_cons(z_33, sym_SDef_3))
                  {
                    a_34 = ATgetArgument(z_33, 0);
                    b_34 = ATgetArgument(z_33, 1);
                    c_34 = ATgetArgument(z_33, 2);
                    r_33 :
                    if(match_cons(h_34, sym_TCons_2))
                      {
                        i_34 = ATgetArgument(h_34, 0);
                        j_34 = ATgetArgument(h_34, 1);
                        s_33 :
                        if(match_cons(j_34, sym_TNil_0))
                          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(i_34), not_null(b_34), not_null(c_34));
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = zip_1(t, b_1);
        }
        return(t);
      }
      t = Let_2(t, a_1, _id);
      PopChoice();
    }
  else
    {
      t = k_9;
      {
        ATerm l_9 = t;
        if(PushChoice()==0)
          {
            ATerm c_1 (ATerm t)
            {
              t = split_2(t, _id, j_45);
              {
                ATerm d_1 (ATerm t)
                {
                  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL;
                  n_34 = t;
                  u_33 :
                  if(match_cons(n_34, sym_TCons_2))
                    {
                      o_34 = ATgetArgument(n_34, 0);
                      r_34 = ATgetArgument(n_34, 1);
                      v_33 :
                      if(match_cons(o_34, sym_VarDec_2))
                        {
                          p_34 = ATgetArgument(o_34, 0);
                          q_34 = ATgetArgument(o_34, 1);
                          w_33 :
                          if(match_cons(r_34, sym_TCons_2))
                            {
                              s_34 = ATgetArgument(r_34, 0);
                              t_34 = ATgetArgument(r_34, 1);
                              x_33 :
                              if(match_cons(t_34, sym_TNil_0))
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(s_34), not_null(q_34));
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = zip_1(t, d_1);
              }
              return(t);
            }
            t = SDef_3(t, _id, c_1, _id);
            PopChoice();
          }
        else
          {
            t = l_9;
            {
              ATerm e_1 (ATerm t)
              {
                t = j_45(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, e_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm c_43 (ATerm), ATerm d_43 (ATerm))
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
  d_35 = t;
  c_35 :
  if(match_cons(d_35, sym_Rec_2))
    {
      e_35 = ATgetArgument(d_35, 0);
      f_35 = ATgetArgument(d_35, 1);
      {
        ATerm i_35 = NULL;
        t = not_null(e_35);
        {
          ATerm k_35 = NULL;
          t = c_43(t);
          i_35 = t;
          t = not_null(f_35);
          t = d_43(t);
          k_35 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(i_35), not_null(k_35));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm e_43 (ATerm), ATerm f_43 (ATerm))
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
  x_35 = t;
  w_35 :
  if(match_cons(x_35, sym_Let_2))
    {
      y_35 = ATgetArgument(x_35, 0);
      z_35 = ATgetArgument(x_35, 1);
      {
        ATerm h_36 = NULL;
        t = not_null(y_35);
        {
          ATerm j_36 = NULL;
          t = e_43(t);
          h_36 = t;
          t = not_null(z_35);
          t = f_43(t);
          j_36 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(h_36), not_null(j_36));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm k_45 (ATerm), ATerm l_45 (ATerm), ATerm m_45 (ATerm))
{
  ATerm m_9 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, k_45, k_45);
      PopChoice();
    }
  else
    {
      t = m_9;
      {
        ATerm n_9 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, m_45, m_45, k_45);
            PopChoice();
          }
        else
          {
            t = n_9;
            t = Rec_2(t, m_45, k_45);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
  a_37 = t;
  z_36 :
  if(match_cons(a_37, sym_Rec_2))
    {
      b_37 = ATgetArgument(a_37, 0);
      c_37 = ATgetArgument(a_37, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_37), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL;
  w_39 = t;
  v_39 :
  if(match_cons(w_39, sym_SDef_3))
    {
      x_39 = ATgetArgument(w_39, 0);
      y_39 = ATgetArgument(w_39, 1);
      z_39 = ATgetArgument(w_39, 2);
      t = not_null(y_39);
      {
        ATerm f_1 (ATerm t)
        {
          ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
          d_40 = t;
          u_39 :
          if(match_cons(d_40, sym_VarDec_2))
            {
              e_40 = ATgetArgument(d_40, 0);
              f_40 = ATgetArgument(d_40, 1);
              t = not_null(e_40);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, f_1);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
  b_41 = t;
  a_41 :
  if(match_cons(b_41, sym_Let_2))
    {
      c_41 = ATgetArgument(b_41, 0);
      d_41 = ATgetArgument(b_41, 1);
      t = not_null(c_41);
      {
        ATerm g_1 (ATerm t)
        {
          ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL;
          j_41 = t;
          z_40 :
          if(match_cons(j_41, sym_SDef_3))
            {
              k_41 = ATgetArgument(j_41, 0);
              l_41 = ATgetArgument(j_41, 1);
              m_41 = ATgetArgument(j_41, 2);
              t = not_null(k_41);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, g_1);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm b_43 (ATerm))
{
  ATerm l_42 = NULL,m_42 = NULL;
  l_42 = t;
  i_42 :
  if(match_cons(l_42, sym_SVar_1))
    {
      m_42 = ATgetArgument(l_42, 0);
      {
        ATerm p_42 = NULL;
        t = not_null(m_42);
        t = b_43(t);
        p_42 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(p_42));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
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
  t = rename_4(t, SVar_1, h_1, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm d_48 (ATerm, ATerm (ATerm)), ATerm e_48 (ATerm), ATerm f_48 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm g_48 (ATerm, ATerm (ATerm)))
{
  ATerm w_42 = NULL;
  w_42 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_42), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  {
    ATerm z_42 (ATerm t)
    {
      ATerm i_1 (ATerm t)
      {
        ATerm q_9 = t;
        if(PushChoice()==0)
          {
            t = RnVar_1(t, d_48);
            PopChoice();
          }
        else
          {
            t = q_9;
            t = RnBinding_2(t, e_48, g_48);
            t = DistBinding_2(t, z_42, f_48);
          }
        return(t);
      }
      t = env_alltd_1(t, i_1);
      return(t);
    }
    t = z_42(t);
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
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL;
  l_43 = t;
  k_43 :
  if(match_cons(l_43, sym_SDef_3))
    {
      m_43 = ATgetArgument(l_43, 0);
      n_43 = ATgetArgument(l_43, 1);
      o_43 = ATgetArgument(l_43, 2);
      {
        ATerm s_43 = NULL;
        ATerm t_43 = NULL;
        t = not_null(o_43);
        t = tvars_0(t);
        t_43 = t;
        if(s_43 != NULL && s_43 != t_43)
          _fail(t_43);
        else
          s_43 = t_43;
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_43), not_null(n_43), (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_43), not_null(o_43)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RDtoSD_0 (ATerm t)
{
  ATerm b_44 = NULL,e_44 = NULL,f_44 = NULL,i_44 = NULL;
  b_44 = t;
  a_44 :
  if(match_cons(b_44, sym_RDef_3))
    {
      e_44 = ATgetArgument(b_44, 0);
      f_44 = ATgetArgument(b_44, 1);
      i_44 = ATgetArgument(b_44, 2);
      {
        ATerm o_44 = NULL;
        ATerm r_44 = NULL;
        t = not_null(i_44);
        t = tvars_0(t);
        r_44 = t;
        if(o_44 != NULL && o_44 != r_44)
          _fail(r_44);
        else
          o_44 = r_44;
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(e_44), not_null(f_44), (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_44), (ATerm) ATmakeAppl(sym_SRule_1, not_null(i_44))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkCall_0 (ATerm t)
{
  ATerm v_44 = NULL;
  v_44 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_44)), (ATerm) ATmakeAppl(sym_Nil_0));
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL;
  w_45 = t;
  u_45 :
  if(match_cons(w_45, sym_OpDecl_2))
    {
      x_45 = ATgetArgument(w_45, 0);
      y_45 = ATgetArgument(w_45, 1);
      v_45 :
      if(match_cons(y_45, sym_ConstType_1))
        {
          z_45 = ATgetArgument(y_45, 0);
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(x_45), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Cong_2, not_null(x_45), (ATerm) ATmakeAppl(sym_Nil_0)));
        }
      else
        {
          if(match_cons(y_45, sym_FunType_2))
            {
              z_45 = ATgetArgument(y_45, 0);
              a_46 = ATgetArgument(y_45, 1);
              {
                ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
                t = not_null(z_45);
                {
                  ATerm j_1 (ATerm t)
                  {
                    t = new_0(t);
                    {
                      ATerm k_1 (ATerm t)
                      {
                        ATerm k_46 = NULL;
                        k_46 = t;
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(k_46), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                        return(t);
                      }
                      t = split_2(t, k_1, _id);
                    }
                    return(t);
                  }
                  t = map_1(t, j_1);
                  t = unzip_0(t);
                  q_46 = t;
                  r_45 :
                  if(match_cons(q_46, sym_TCons_2))
                    {
                      r_46 = ATgetArgument(q_46, 0);
                      s_46 = ATgetArgument(q_46, 1);
                      s_45 :
                      if(match_cons(s_46, sym_TCons_2))
                        {
                          t_46 = ATgetArgument(s_46, 0);
                          u_46 = ATgetArgument(s_46, 1);
                          t_45 :
                          if(match_cons(u_46, sym_TNil_0))
                            {
                              ATerm x_46 = NULL;
                              ATerm y_46 = NULL;
                              t = not_null(t_46);
                              t = map_1(t, MkCall_0);
                              y_46 = t;
                              if(x_46 != NULL && x_46 != y_46)
                                _fail(y_46);
                              else
                                x_46 = y_46;
                              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(x_45), not_null(r_46), (ATerm) ATmakeAppl(sym_Cong_2, not_null(x_45), not_null(x_46)));
                            }
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
  ATerm h_47 = NULL,i_47 = NULL;
  h_47 = t;
  g_47 :
  if(match_cons(h_47, sym_Sorts_1))
    {
      i_47 = ATgetArgument(h_47, 0);
      t = (ATerm) ATmakeAppl(sym_Nil_0);
    }
  else
    {
      if(match_cons(h_47, sym_Constructors_1))
        {
          i_47 = ATgetArgument(h_47, 0);
          t = not_null(i_47);
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
  ATerm a_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL;
  a_48 = t;
  s_47 :
  if(match_cons(a_48, sym_Specification_1))
    {
      z_48 = ATgetArgument(a_48, 0);
      t_47 :
      if(match_cons(z_48, sym_Cons_2))
        {
          a_49 = ATgetArgument(z_48, 0);
          c_49 = ATgetArgument(z_48, 1);
          u_47 :
          if(match_cons(a_49, sym_Signature_1))
            {
              b_49 = ATgetArgument(a_49, 0);
              x_47 :
              if(match_cons(c_49, sym_Cons_2))
                {
                  d_49 = ATgetArgument(c_49, 0);
                  f_49 = ATgetArgument(c_49, 1);
                  y_47 :
                  if(match_cons(d_49, sym_Strategies_1))
                    {
                      e_49 = ATgetArgument(d_49, 0);
                      z_47 :
                      if(match_cons(f_49, sym_Nil_0))
                        {
                          ATerm i_49 = NULL;
                          ATerm j_49 = NULL,l_49 = NULL,n_49 = NULL;
                          ATerm r_9;
                          r_9 = t;
                          {
                            ATerm k_49 = NULL;
                            t = not_null(b_49);
                            t = congdefs_0(t);
                            k_49 = t;
                            if(j_49 != NULL && j_49 != k_49)
                              _fail(k_49);
                            else
                              j_49 = k_49;
                          }
                          t = r_9;
                          {
                            ATerm m_49 = NULL;
                            t = not_null(e_49);
                            {
                              ATerm l_1 (ATerm t)
                              {
                                ATerm s_9 = t;
                                if(PushChoice()==0)
                                  {
                                    t = RDtoSD_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = s_9;
                                    t = DeclareVariables_0(t);
                                  }
                                return(t);
                              }
                              t = map_1(t, l_1);
                              m_49 = t;
                              if(l_49 != NULL && l_49 != m_49)
                                _fail(m_49);
                              else
                                l_49 = m_49;
                            }
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_49), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_49), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = conc_0(t);
                            n_49 = t;
                            if(i_49 != NULL && i_49 != n_49)
                              _fail(n_49);
                            else
                              i_49 = n_49;
                          }
                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, not_null(b_49)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(i_49)), (ATerm) ATmakeAppl(sym_Nil_0))));
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm v_51 (ATerm))
{
  ATerm t_9;
  t_9 = t;
  {
    ATerm m_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm n_1 (ATerm t)
    {
      ATerm a_50 = NULL;
      ATerm c_50 = NULL;
      a_50 = t;
      {
        ATerm d_50 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = v_51(t);
        d_50 = t;
        if(c_50 != NULL && c_50 != d_50)
          _fail(d_50);
        else
          c_50 = d_50;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_50), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_50), (ATerm) ATmakeAppl(sym_Nil_0)));
      }
      return(t);
    }
    t = split_2(t, m_1, n_1);
    t = printnl_0(t);
  }
  t = t_9;
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm h_50 = NULL;
  h_50 = t;
  t = SSL_int_to_string(not_null(h_50));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm o_50 = NULL,q_50 = NULL,s_50 = NULL,t_50 = NULL,w_50 = NULL;
  o_50 = t;
  l_50 :
  if(match_cons(o_50, sym_TCons_2))
    {
      q_50 = ATgetArgument(o_50, 0);
      s_50 = ATgetArgument(o_50, 1);
      m_50 :
      if(match_cons(s_50, sym_TCons_2))
        {
          t_50 = ATgetArgument(s_50, 0);
          w_50 = ATgetArgument(s_50, 1);
          n_50 :
          if(match_cons(w_50, sym_TNil_0))
            {
              ATerm u_9 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(q_50), not_null(t_50));
                  PopChoice();
                }
              else
                {
                  t = u_9;
                  t = SSL_addr(not_null(q_50), not_null(t_50));
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
  ATerm o_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, o_1, add_0, p_1);
  return(t);
}
ATerm FunType_2 (ATerm t, ATerm f_42 (ATerm), ATerm g_42 (ATerm))
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL;
  h_51 = t;
  g_51 :
  if(match_cons(h_51, sym_FunType_2))
    {
      i_51 = ATgetArgument(h_51, 0);
      j_51 = ATgetArgument(h_51, 1);
      {
        ATerm o_51 = NULL;
        t = not_null(i_51);
        {
          ATerm q_51 = NULL;
          t = f_42(t);
          o_51 = t;
          t = not_null(j_51);
          t = g_42(t);
          q_51 = t;
          t = (ATerm) ATmakeAppl(sym_FunType_2, not_null(o_51), not_null(q_51));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ConstType_1 (ATerm t, ATerm e_42 (ATerm))
{
  ATerm z_51 = NULL,a_52 = NULL;
  z_51 = t;
  y_51 :
  if(match_cons(z_51, sym_ConstType_1))
    {
      a_52 = ATgetArgument(z_51, 0);
      {
        ATerm c_52 = NULL;
        t = not_null(a_52);
        t = e_42(t);
        c_52 = t;
        t = (ATerm) ATmakeAppl(sym_ConstType_1, not_null(c_52));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm OpDecl_2 (ATerm t, ATerm j_42 (ATerm), ATerm k_42 (ATerm))
{
  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
  k_52 = t;
  j_52 :
  if(match_cons(k_52, sym_OpDecl_2))
    {
      l_52 = ATgetArgument(k_52, 0);
      m_52 = ATgetArgument(k_52, 1);
      {
        ATerm p_52 = NULL;
        t = not_null(l_52);
        {
          ATerm r_52 = NULL;
          t = j_42(t);
          p_52 = t;
          t = not_null(m_52);
          t = k_42(t);
          r_52 = t;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, not_null(p_52), not_null(r_52));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CheckCons_2 (ATerm t, ATerm z_44 (ATerm), ATerm a_45 (ATerm))
{
  ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL;
  c_53 = t;
  b_53 :
  if(match_cons(c_53, sym_Op_2))
    {
      d_53 = ATgetArgument(c_53, 0);
      e_53 = ATgetArgument(c_53, 1);
      {
        ATerm l_53 = NULL;
        ATerm v_9 = t;
        if(PushChoice()==0)
          {
            t = a_45(t);
            {
              ATerm q_1 (ATerm t)
              {
                ATerm h_53 = NULL;
                ATerm r_1 (ATerm t)
                {
                  ATerm i_53 = NULL;
                  i_53 = t;
                  if(d_53 != NULL && d_53 != i_53)
                    _fail(i_53);
                  else
                    d_53 = i_53;
                  return(t);
                }
                ATerm s_1 (ATerm t)
                {
                  ATerm w_9 = t;
                  if(PushChoice()==0)
                    {
                      ATerm j_53 = NULL;
                      t = ConstType_1(t, _id);
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                      j_53 = t;
                      if(h_53 != NULL && h_53 != j_53)
                        _fail(j_53);
                      else
                        h_53 = j_53;
                      PopChoice();
                    }
                  else
                    {
                      t = w_9;
                      {
                        ATerm t_1 (ATerm t)
                        {
                          ATerm k_53 = NULL;
                          k_53 = t;
                          if(h_53 != NULL && h_53 != k_53)
                            _fail(k_53);
                          else
                            h_53 = k_53;
                          return(t);
                        }
                        t = FunType_2(t, t_1, _id);
                      }
                    }
                  return(t);
                }
                t = OpDecl_2(t, r_1, s_1);
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_53), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_53), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = zip_1(t, _id);
                return(t);
              }
              t = fetch_1(t, q_1);
            }
            PopChoice();
            _fail(t);
          }
        else
          t = v_9;
        {
          ATerm m_53 = NULL;
          t = not_null(e_53);
          t = length_0(t);
          t = int_to_string_0(t);
          m_53 = t;
          if(l_53 != NULL && l_53 != m_53)
            _fail(m_53);
          else
            l_53 = m_53;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_53), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("/", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_53), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
          t = concat_strings_0(t);
          t = debug_1(t, z_44);
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(d_53), not_null(e_53));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm manytd_1 (ATerm t, ATerm p_65 (ATerm))
{
  ATerm u_53 (ATerm t)
  {
    ATerm x_9 = t;
    if(PushChoice()==0)
      {
        t = p_65(t);
        {
          ATerm u_1 (ATerm t)
          {
            t = try_1(t, u_53);
            return(t);
          }
          t = _all(t, u_1);
        }
        PopChoice();
      }
    else
      {
        t = x_9;
        t = _some(t, u_53);
      }
    return(t);
  }
  t = u_53(t);
  return(t);
}
ATerm check_constructors_1 (ATerm t, ATerm i_0 (ATerm))
{
  ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL;
  a_54 = t;
  z_53 :
  if(match_cons(a_54, sym_RDef_3))
    {
      b_54 = ATgetArgument(a_54, 0);
      c_54 = ATgetArgument(a_54, 1);
      d_54 = ATgetArgument(a_54, 2);
      {
        ATerm i_54 = NULL;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: in rule ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_54), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        t = concat_strings_0(t);
        i_54 = t;
        t = not_null(d_54);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm w_1 (ATerm t)
            {
              t = not_null(i_54);
              return(t);
            }
            t = CheckCons_2(t, w_1, i_0);
            return(t);
          }
          t = manytd_1(t, v_1);
          t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(b_54), not_null(c_54), not_null(d_54));
        }
      }
    }
  else
    {
      if(match_cons(a_54, sym_SDef_3))
        {
          b_54 = ATgetArgument(a_54, 0);
          c_54 = ATgetArgument(a_54, 1);
          d_54 = ATgetArgument(a_54, 2);
          {
            ATerm n_54 = NULL;
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: in definition ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_54), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
            t = concat_strings_0(t);
            n_54 = t;
            t = not_null(d_54);
            {
              ATerm x_1 (ATerm t)
              {
                ATerm y_1 (ATerm t)
                {
                  t = not_null(n_54);
                  return(t);
                }
                t = CheckCons_2(t, y_1, i_0);
                return(t);
              }
              t = manytd_1(t, x_1);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(b_54), not_null(c_54), not_null(d_54));
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
  ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL;
  k_55 = t;
  w_54 :
  if(match_cons(k_55, sym_Specification_1))
    {
      l_55 = ATgetArgument(k_55, 0);
      x_54 :
      if(match_cons(l_55, sym_Cons_2))
        {
          m_55 = ATgetArgument(l_55, 0);
          r_55 = ATgetArgument(l_55, 1);
          y_54 :
          if(match_cons(m_55, sym_Signature_1))
            {
              n_55 = ATgetArgument(m_55, 0);
              e_55 :
              if(match_cons(n_55, sym_Cons_2))
                {
                  o_55 = ATgetArgument(n_55, 0);
                  q_55 = ATgetArgument(n_55, 1);
                  f_55 :
                  if(match_cons(o_55, sym_Constructors_1))
                    {
                      p_55 = ATgetArgument(o_55, 0);
                      g_55 :
                      if(match_cons(q_55, sym_Nil_0))
                        {
                          h_55 :
                          if(match_cons(r_55, sym_Cons_2))
                            {
                              s_55 = ATgetArgument(r_55, 0);
                              u_55 = ATgetArgument(r_55, 1);
                              i_55 :
                              if(match_cons(s_55, sym_Strategies_1))
                                {
                                  t_55 = ATgetArgument(s_55, 0);
                                  j_55 :
                                  if(match_cons(u_55, sym_Nil_0))
                                    {
                                      ATerm x_55 = NULL;
                                      t = not_null(t_55);
                                      {
                                        ATerm z_1 (ATerm t)
                                        {
                                          ATerm a_2 (ATerm t)
                                          {
                                            t = not_null(p_55);
                                            return(t);
                                          }
                                          t = check_constructors_1(t, a_2);
                                          return(t);
                                        }
                                        t = filter_1(t, z_1);
                                        x_55 = t;
                                        v_54 :
                                        if(match_cons(x_55, sym_Nil_0))
                                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Constructors_1, not_null(p_55)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(t_55)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
ATerm exp_overlays2_1 (ATerm t, ATerm i_46 (ATerm))
{
  ATerm b_2 (ATerm t)
  {
    ATerm y_9;
    y_9 = t;
    {
      ATerm z_9 = t;
      if(PushChoice()==0)
        {
          ATerm c_56 = NULL;
          t = i_46(t);
          c_56 = t;
          a_56 :
          if(!(match_cons(c_56, sym_Nil_0)))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        t = z_9;
    }
    t = y_9;
    {
      ATerm c_2 (ATerm t)
      {
        ATerm d_2 (ATerm t)
        {
          t = ExpOverlay_1(t, i_46);
          return(t);
        }
        t = try_1(t, d_2);
        return(t);
      }
      t = topdown_1(t, c_2);
    }
    return(t);
  }
  t = try_1(t, b_2);
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm n_56 = NULL,p_56 = NULL,q_56 = NULL;
  p_56 = t;
  m_56 :
  if(match_cons(p_56, sym_Var_1))
    {
      q_56 = ATgetArgument(p_56, 0);
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_56)), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    {
      if(match_cons(p_56, sym_Op_2))
        {
          q_56 = ATgetArgument(p_56, 0);
          n_56 = ATgetArgument(p_56, 1);
          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_56)), not_null(n_56));
        }
      else
        {
          if(match_cons(p_56, sym_Str_1))
            {
              q_56 = ATgetArgument(p_56, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(q_56)));
            }
          else
            {
              if(match_cons(p_56, sym_Int_1))
                {
                  q_56 = ATgetArgument(p_56, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(q_56)));
                }
              else
                {
                  if(match_cons(p_56, sym_Real_1))
                    {
                      q_56 = ATgetArgument(p_56, 0);
                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(q_56)));
                    }
                  else
                    {
                      if(match_cons(p_56, sym_BuildDefault_1))
                        {
                          q_56 = ATgetArgument(p_56, 0);
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
ATerm Op_2 (ATerm t, ATerm r_42 (ATerm), ATerm s_42 (ATerm))
{
  ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL;
  l_57 = t;
  k_57 :
  if(match_cons(l_57, sym_Op_2))
    {
      m_57 = ATgetArgument(l_57, 0);
      n_57 = ATgetArgument(l_57, 1);
      {
        ATerm q_57 = NULL;
        t = not_null(m_57);
        {
          ATerm s_57 = NULL;
          t = r_42(t);
          q_57 = t;
          t = not_null(n_57);
          t = s_42(t);
          s_57 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(q_57), not_null(s_57));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm trm_to_cong_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm f_2 (ATerm t)
    {
      t = map_1(t, trm_to_cong_0);
      return(t);
    }
    t = Op_2(t, _id, f_2);
    return(t);
  }
  t = try_1(t, e_2);
  t = Trm_to_Cong_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0 (ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL;
  d_58 = t;
  c_58 :
  if(match_cons(d_58, sym_Overlay_3))
    {
      e_58 = ATgetArgument(d_58, 0);
      f_58 = ATgetArgument(d_58, 1);
      g_58 = ATgetArgument(d_58, 2);
      {
        ATerm t_58 = NULL;
        t = not_null(f_58);
        {
          ATerm v_58 = NULL;
          ATerm g_2 (ATerm t)
          {
            ATerm l_58 = NULL;
            l_58 = t;
            t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(l_58), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))));
            return(t);
          }
          t = map_1(t, g_2);
          t_58 = t;
          {
            ATerm w_58 = NULL;
            t = not_null(g_58);
            t = trm_to_cong_0(t);
            w_58 = t;
            if(v_58 != NULL && v_58 != w_58)
              _fail(w_58);
            else
              v_58 = w_58;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(e_58), not_null(t_58), not_null(v_58));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm f_45 (ATerm))
{
  t = Scope_2(t, f_45, _id);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm n_42 (ATerm))
{
  ATerm e_59 = NULL,f_59 = NULL;
  e_59 = t;
  d_59 :
  if(match_cons(e_59, sym_Var_1))
    {
      f_59 = ATgetArgument(e_59, 0);
      {
        ATerm h_59 = NULL;
        t = not_null(f_59);
        t = n_42(t);
        h_59 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_59));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm v_47 (ATerm), ATerm w_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL;
  s_59 = t;
  o_59 :
  if(match_cons(s_59, sym_TCons_2))
    {
      t_59 = ATgetArgument(s_59, 0);
      u_59 = ATgetArgument(s_59, 1);
      p_59 :
      if(match_cons(u_59, sym_TCons_2))
        {
          v_59 = ATgetArgument(u_59, 0);
          w_59 = ATgetArgument(u_59, 1);
          q_59 :
          if(match_cons(w_59, sym_TCons_2))
            {
              x_59 = ATgetArgument(w_59, 0);
              y_59 = ATgetArgument(w_59, 1);
              r_59 :
              if(match_cons(y_59, sym_TNil_0))
                {
                  t = not_null(t_59);
                  {
                    ATerm h_2 (ATerm t)
                    {
                      ATerm e_60 = NULL;
                      e_60 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_60), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_59), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = v_47(t);
                      return(t);
                    }
                    ATerm i_2 (ATerm t)
                    {
                      ATerm g_60 = NULL;
                      g_60 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_60), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_59), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = v_47(t);
                      return(t);
                    }
                    t = w_47(t, h_2, i_2, _id);
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
ATerm RnBinding_2 (ATerm t, ATerm b_48 (ATerm), ATerm c_48 (ATerm, ATerm (ATerm)))
{
  ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL;
  y_60 = t;
  v_60 :
  if(match_cons(y_60, sym_TCons_2))
    {
      z_60 = ATgetArgument(y_60, 0);
      a_61 = ATgetArgument(y_60, 1);
      w_60 :
      if(match_cons(a_61, sym_TCons_2))
        {
          b_61 = ATgetArgument(a_61, 0);
          c_61 = ATgetArgument(a_61, 1);
          x_60 :
          if(match_cons(c_61, sym_TNil_0))
            {
              ATerm h_61 = NULL;
              t = not_null(z_60);
              {
                ATerm j_61 = NULL;
                t = b_48(t);
                h_61 = t;
                {
                  ATerm l_61 = NULL,o_61 = NULL;
                  t = map_1(t, new_0);
                  j_61 = t;
                  {
                    ATerm n_61 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_61), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    n_61 = t;
                    if(l_61 != NULL && l_61 != n_61)
                      _fail(n_61);
                    else
                      l_61 = n_61;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_61), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm s_61 = NULL;
                      t = conc_0(t);
                      o_61 = t;
                      {
                        ATerm t_61 = NULL;
                        t = not_null(z_60);
                        {
                          ATerm j_2 (ATerm t)
                          {
                            t = not_null(j_61);
                            return(t);
                          }
                          t = c_48(t, j_2);
                          t_61 = t;
                          if(s_61 != NULL && s_61 != t_61)
                            _fail(t_61);
                          else
                            s_61 = t_61;
                        }
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_61), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm e_62 = NULL,f_62 = NULL,i_62 = NULL;
  e_62 = t;
  d_62 :
  if(match_cons(e_62, sym_TCons_2))
    {
      f_62 = ATgetArgument(e_62, 0);
      i_62 = ATgetArgument(e_62, 1);
      t = not_null(f_62);
    }
  else
    _fail(t);
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm p_47 (ATerm, ATerm (ATerm)))
{
  ATerm q_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL;
  q_62 = t;
  n_62 :
  if(match_cons(q_62, sym_TCons_2))
    {
      v_62 = ATgetArgument(q_62, 0);
      w_62 = ATgetArgument(q_62, 1);
      o_62 :
      if(match_cons(w_62, sym_TCons_2))
        {
          x_62 = ATgetArgument(w_62, 0);
          y_62 = ATgetArgument(w_62, 1);
          p_62 :
          if(match_cons(y_62, sym_TNil_0))
            {
              t = not_null(v_62);
              {
                ATerm k_2 (ATerm t)
                {
                  ATerm l_2 (ATerm t)
                  {
                    t = not_null(x_62);
                    return(t);
                  }
                  t = split_2(t, _id, l_2);
                  t = lookup_0(t);
                  return(t);
                }
                t = p_47(t, k_2);
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
ATerm all_dist_1 (ATerm t, ATerm q_61 (ATerm))
{
  ATerm h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL;
  h_63 = t;
  e_63 :
  if(match_cons(h_63, sym_TCons_2))
    {
      i_63 = ATgetArgument(h_63, 0);
      j_63 = ATgetArgument(h_63, 1);
      f_63 :
      if(match_cons(j_63, sym_TCons_2))
        {
          k_63 = ATgetArgument(j_63, 0);
          l_63 = ATgetArgument(j_63, 1);
          g_63 :
          if(match_cons(l_63, sym_TNil_0))
            {
              t = not_null(i_63);
              {
                ATerm m_2 (ATerm t)
                {
                  ATerm o_63 = NULL;
                  o_63 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_63), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = q_61(t);
                  return(t);
                }
                t = _all(t, m_2);
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
ATerm env_alltd_1 (ATerm t, ATerm v_61 (ATerm))
{
  ATerm s_63 (ATerm t)
  {
    ATerm a_10 = t;
    if(PushChoice()==0)
      {
        t = v_61(t);
        PopChoice();
      }
    else
      {
        t = a_10;
        t = all_dist_1(t, s_63);
      }
    return(t);
  }
  t = s_63(t);
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm n_48 (ATerm), ATerm o_48 (ATerm, ATerm (ATerm)), ATerm p_48 (ATerm), ATerm q_48 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm r_48 (ATerm, ATerm (ATerm)), ATerm s_48 (ATerm))
{
  ATerm x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL;
  t = subs_args_0(t);
  x_63 = t;
  u_63 :
  if(match_cons(x_63, sym_TCons_2))
    {
      y_63 = ATgetArgument(x_63, 0);
      z_63 = ATgetArgument(x_63, 1);
      v_63 :
      if(match_cons(z_63, sym_TCons_2))
        {
          a_64 = ATgetArgument(z_63, 0);
          b_64 = ATgetArgument(z_63, 1);
          w_63 :
          if(match_cons(b_64, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_64), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm f_64 (ATerm t)
                {
                  ATerm n_2 (ATerm t)
                  {
                    ATerm b_10 = t;
                    if(PushChoice()==0)
                      {
                        t = RnVar_1(t, o_48);
                        PopChoice();
                      }
                    else
                      {
                        t = b_10;
                        {
                          ATerm c_10 = t;
                          if(PushChoice()==0)
                            {
                              t = Fst_0(t);
                              {
                                ATerm o_2 (ATerm t)
                                {
                                  t = not_null(y_63);
                                  return(t);
                                }
                                t = SubsVar_2(t, n_48, o_2);
                                t = s_48(t);
                              }
                              PopChoice();
                            }
                          else
                            {
                              t = c_10;
                              t = RnBinding_2(t, p_48, r_48);
                              t = DistBinding_2(t, f_64, q_48);
                            }
                        }
                      }
                    return(t);
                  }
                  t = env_alltd_1(t, n_2);
                  return(t);
                }
                t = f_64(t);
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
ATerm substitute_5 (ATerm t, ATerm u_48 (ATerm), ATerm v_48 (ATerm, ATerm (ATerm)), ATerm w_48 (ATerm), ATerm x_48 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm y_48 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, u_48, v_48, w_48, x_48, y_48, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, tpaste_1);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm g_46 (ATerm))
{
  ATerm p_64 = NULL,q_64 = NULL,r_64 = NULL;
  p_64 = t;
  o_64 :
  if(match_cons(p_64, sym_Op_2))
    {
      q_64 = ATgetArgument(p_64, 0);
      r_64 = ATgetArgument(p_64, 1);
      {
        ATerm u_64 = NULL,x_64 = NULL;
        t = g_46(t);
        {
          ATerm p_2 (ATerm t)
          {
            ATerm d_10;
            d_10 = t;
            {
              ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL;
              y_64 = t;
              n_64 :
              if(match_cons(y_64, sym_Overlay_3))
                {
                  z_64 = ATgetArgument(y_64, 0);
                  a_65 = ATgetArgument(y_64, 1);
                  b_65 = ATgetArgument(y_64, 2);
                  {
                    ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL,g_65 = NULL;
                    if(q_64 != NULL && q_64 != z_64)
                      _fail(z_64);
                    else
                      q_64 = z_64;
                    if(c_65 != NULL && c_65 != a_65)
                      _fail(a_65);
                    else
                      c_65 = a_65;
                    if(d_65 != NULL && d_65 != b_65)
                      _fail(b_65);
                    else
                      d_65 = b_65;
                    {
                      ATerm e_10;
                      e_10 = t;
                      {
                        ATerm f_65 = NULL;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_64), (ATerm) ATmakeAppl(sym_TNil_0)));
                        t = zip_1(t, _id);
                        f_65 = t;
                        if(e_65 != NULL && e_65 != f_65)
                          _fail(f_65);
                        else
                          e_65 = f_65;
                      }
                      t = e_10;
                      {
                        ATerm h_65 = NULL;
                        t = not_null(e_65);
                        g_65 = t;
                        if(u_64 != NULL && u_64 != g_65)
                          _fail(g_65);
                        else
                          u_64 = g_65;
                        t = not_null(d_65);
                        h_65 = t;
                        if(x_64 != NULL && x_64 != h_65)
                          _fail(h_65);
                        else
                          x_64 = h_65;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_65), (ATerm) ATmakeAppl(sym_TNil_0)));
                      }
                    }
                  }
                }
              else
                _fail(t);
            }
            t = d_10;
            return(t);
          }
          t = fetch_1(t, p_2);
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_64), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = tsubstitute_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm exp_overlays1_1 (ATerm t, ATerm h_46 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    ATerm f_10;
    f_10 = t;
    {
      ATerm g_10 = t;
      if(PushChoice()==0)
        {
          ATerm o_65 = NULL;
          t = h_46(t);
          o_65 = t;
          n_65 :
          if(!(match_cons(o_65, sym_Nil_0)))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        t = g_10;
    }
    t = f_10;
    {
      ATerm r_2 (ATerm t)
      {
        ATerm s_2 (ATerm t)
        {
          t = ExpOverlay_1(t, h_46);
          return(t);
        }
        t = repeat_1(t, s_2);
        return(t);
      }
      t = topdown_1(t, r_2);
    }
    return(t);
  }
  t = try_1(t, q_2);
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL;
  i_66 = t;
  a_66 :
  if(match_cons(i_66, sym_Specification_1))
    {
      j_66 = ATgetArgument(i_66, 0);
      b_66 :
      if(match_cons(j_66, sym_Cons_2))
        {
          k_66 = ATgetArgument(j_66, 0);
          t_66 = ATgetArgument(j_66, 1);
          c_66 :
          if(match_cons(k_66, sym_Signature_1))
            {
              l_66 = ATgetArgument(k_66, 0);
              d_66 :
              if(match_cons(t_66, sym_Cons_2))
                {
                  u_66 = ATgetArgument(t_66, 0);
                  w_66 = ATgetArgument(t_66, 1);
                  e_66 :
                  if(match_cons(u_66, sym_Overlays_1))
                    {
                      v_66 = ATgetArgument(u_66, 0);
                      f_66 :
                      if(match_cons(w_66, sym_Cons_2))
                        {
                          x_66 = ATgetArgument(w_66, 0);
                          z_66 = ATgetArgument(w_66, 1);
                          g_66 :
                          if(match_cons(x_66, sym_Strategies_1))
                            {
                              y_66 = ATgetArgument(x_66, 0);
                              h_66 :
                              if(match_cons(z_66, sym_Nil_0))
                                {
                                  ATerm f_67 = NULL;
                                  t = not_null(v_66);
                                  {
                                    ATerm h_67 = NULL;
                                    ATerm t_2 (ATerm t)
                                    {
                                      t = not_null(v_66);
                                      return(t);
                                    }
                                    t = exp_overlays1_1(t, t_2);
                                    f_67 = t;
                                    {
                                      ATerm i_67 = NULL,k_67 = NULL,m_67 = NULL;
                                      ATerm h_10;
                                      h_10 = t;
                                      {
                                        ATerm j_67 = NULL;
                                        t = not_null(v_66);
                                        t = map_1(t, Overlay_to_Congdef_0);
                                        j_67 = t;
                                        if(i_67 != NULL && i_67 != j_67)
                                          _fail(j_67);
                                        else
                                          i_67 = j_67;
                                      }
                                      t = h_10;
                                      {
                                        ATerm l_67 = NULL;
                                        t = not_null(y_66);
                                        {
                                          ATerm u_2 (ATerm t)
                                          {
                                            t = not_null(f_67);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, u_2);
                                          l_67 = t;
                                          if(k_67 != NULL && k_67 != l_67)
                                            _fail(l_67);
                                          else
                                            k_67 = l_67;
                                        }
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_67), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_67), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = conc_0(t);
                                        m_67 = t;
                                        if(h_67 != NULL && h_67 != m_67)
                                          _fail(m_67);
                                        else
                                          h_67 = m_67;
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, not_null(l_66)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(h_67)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  ATerm i_10;
  i_10 = t;
  {
    ATerm v_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, v_2, _id);
    t = printnl_0(t);
  }
  t = i_10;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm j_10;
  j_10 = t;
  t = error_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  t = j_10;
  return(t);
}
ATerm MsgR_0 (ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL;
  z_67 = t;
  v_67 :
  if(match_cons(z_67, sym_TCons_2))
    {
      a_68 = ATgetArgument(z_67, 0);
      b_68 = ATgetArgument(z_67, 1);
      w_67 :
      if(match_cons(b_68, sym_TCons_2))
        {
          c_68 = ATgetArgument(b_68, 0);
          d_68 = ATgetArgument(b_68, 1);
          x_67 :
          if(match_cons(d_68, sym_TCons_2))
            {
              e_68 = ATgetArgument(d_68, 0);
              f_68 = ATgetArgument(d_68, 1);
              y_67 :
              if(match_cons(f_68, sym_TNil_0))
                {
                  ATerm j_68 = NULL,l_68 = NULL;
                  ATerm k_10;
                  k_10 = t;
                  {
                    ATerm k_68 = NULL;
                    t = not_null(a_68);
                    t = MsgU_0(t);
                    k_68 = t;
                    if(j_68 != NULL && j_68 != k_68)
                      _fail(k_68);
                    else
                      j_68 = k_68;
                  }
                  t = k_10;
                  {
                    ATerm m_68 = NULL;
                    t = not_null(e_68);
                    t = MsgE_0(t);
                    m_68 = t;
                    if(l_68 != NULL && l_68 != m_68)
                      _fail(m_68);
                    else
                      l_68 = m_68;
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_68), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_68), (ATerm) ATmakeAppl(sym_Nil_0)));
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
  ATerm v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL;
  v_68 = t;
  t_68 :
  if(match_cons(v_68, sym_Nil_0))
    t = (ATerm) ATmakeAppl(sym_Nil_0);
  else
    {
      if(match_cons(v_68, sym_Cons_2))
        {
          w_68 = ATgetArgument(v_68, 0);
          x_68 = ATgetArgument(v_68, 1);
          u_68 :
          if(match_cons(x_68, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_68), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
          else
            {
              if(match_cons(x_68, sym_Cons_2))
                {
                  y_68 = ATgetArgument(x_68, 0);
                  z_68 = ATgetArgument(x_68, 1);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_68), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_68), not_null(z_68))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  ATerm m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL;
  m_69 = t;
  k_69 :
  if(match_cons(m_69, sym_Nil_0))
    t = (ATerm) ATmakeAppl(sym_Nil_0);
  else
    {
      if(match_cons(m_69, sym_Cons_2))
        {
          n_69 = ATgetArgument(m_69, 0);
          o_69 = ATgetArgument(m_69, 1);
          l_69 :
          if(match_cons(o_69, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_69), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
          else
            {
              if(match_cons(o_69, sym_Cons_2))
                {
                  p_69 = ATgetArgument(o_69, 0);
                  q_69 = ATgetArgument(o_69, 1);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_69), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_69), not_null(q_69))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL;
  f_70 = t;
  b_70 :
  if(match_cons(f_70, sym_TCons_2))
    {
      g_70 = ATgetArgument(f_70, 0);
      h_70 = ATgetArgument(f_70, 1);
      c_70 :
      if(match_cons(h_70, sym_TCons_2))
        {
          i_70 = ATgetArgument(h_70, 0);
          j_70 = ATgetArgument(h_70, 1);
          d_70 :
          if(match_cons(j_70, sym_TCons_2))
            {
              k_70 = ATgetArgument(j_70, 0);
              l_70 = ATgetArgument(j_70, 1);
              e_70 :
              if(match_cons(l_70, sym_TNil_0))
                {
                  ATerm p_70 = NULL,r_70 = NULL;
                  ATerm l_10;
                  l_10 = t;
                  {
                    ATerm q_70 = NULL;
                    t = not_null(g_70);
                    t = MsgU_0(t);
                    q_70 = t;
                    if(p_70 != NULL && p_70 != q_70)
                      _fail(q_70);
                    else
                      p_70 = q_70;
                  }
                  t = l_10;
                  {
                    ATerm s_70 = NULL;
                    t = not_null(k_70);
                    t = MsgE_0(t);
                    s_70 = t;
                    if(r_70 != NULL && r_70 != s_70)
                      _fail(s_70);
                    else
                      r_70 = s_70;
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_70), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_70), (ATerm) ATmakeAppl(sym_Nil_0)));
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
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL;
  d_71 = t;
  c_71 :
  if(match_cons(d_71, sym_RDef_3))
    {
      e_71 = ATgetArgument(d_71, 0);
      f_71 = ATgetArgument(d_71, 1);
      g_71 = ATgetArgument(d_71, 2);
      {
        ATerm k_71 = NULL;
        ATerm l_71 = NULL;
        t = not_null(g_71);
        t = map_1(t, MsgR_0);
        t = concat_0(t);
        l_71 = t;
        if(k_71 != NULL && k_71 != l_71)
          _fail(l_71);
        else
          k_71 = l_71;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error in rule ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_71), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue)), not_null(k_71))));
      }
    }
  else
    {
      if(match_cons(d_71, sym_SDef_3))
        {
          e_71 = ATgetArgument(d_71, 0);
          f_71 = ATgetArgument(d_71, 1);
          g_71 = ATgetArgument(d_71, 2);
          {
            ATerm p_71 = NULL;
            ATerm q_71 = NULL;
            t = not_null(g_71);
            t = map_1(t, MsgS_0);
            t = concat_0(t);
            q_71 = t;
            if(p_71 != NULL && p_71 != q_71)
              _fail(q_71);
            else
              p_71 = q_71;
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error in definition ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_71), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue)), not_null(p_71))));
          }
        }
      else
        {
          if(match_cons(d_71, sym_Overlay_3))
            {
              e_71 = ATgetArgument(d_71, 0);
              f_71 = ATgetArgument(d_71, 1);
              g_71 = ATgetArgument(d_71, 2);
              {
                ATerm u_71 = NULL;
                ATerm v_71 = NULL;
                t = not_null(g_71);
                t = map_1(t, MsgR_0);
                t = concat_0(t);
                v_71 = t;
                if(u_71 != NULL && u_71 != v_71)
                  _fail(v_71);
                else
                  u_71 = v_71;
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error in overlay ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_71), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue)), not_null(u_71))));
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
ATerm Overlay_3 (ATerm t, ATerm v_41 (ATerm), ATerm w_41 (ATerm), ATerm x_41 (ATerm))
{
  ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL;
  i_72 = t;
  h_72 :
  if(match_cons(i_72, sym_Overlay_3))
    {
      j_72 = ATgetArgument(i_72, 0);
      k_72 = ATgetArgument(i_72, 1);
      l_72 = ATgetArgument(i_72, 2);
      {
        ATerm p_72 = NULL;
        t = not_null(j_72);
        {
          ATerm r_72 = NULL;
          t = v_41(t);
          p_72 = t;
          t = not_null(k_72);
          {
            ATerm t_72 = NULL;
            t = w_41(t);
            r_72 = t;
            t = not_null(l_72);
            t = x_41(t);
            t_72 = t;
            t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(p_72), not_null(r_72), not_null(t_72));
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
  ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL;
  p_73 = t;
  e_73 :
  if(match_cons(p_73, sym_TCons_2))
    {
      q_73 = ATgetArgument(p_73, 0);
      y_73 = ATgetArgument(p_73, 1);
      f_73 :
      if(match_cons(q_73, sym_TCons_2))
        {
          r_73 = ATgetArgument(q_73, 0);
          s_73 = ATgetArgument(q_73, 1);
          g_73 :
          if(match_cons(s_73, sym_TCons_2))
            {
              t_73 = ATgetArgument(s_73, 0);
              u_73 = ATgetArgument(s_73, 1);
              h_73 :
              if(match_cons(u_73, sym_TCons_2))
                {
                  v_73 = ATgetArgument(u_73, 0);
                  w_73 = ATgetArgument(u_73, 1);
                  i_73 :
                  if(match_cons(w_73, sym_TNil_0))
                    {
                      j_73 :
                      if(match_cons(y_73, sym_TCons_2))
                        {
                          z_73 = ATgetArgument(y_73, 0);
                          g_74 = ATgetArgument(y_73, 1);
                          k_73 :
                          if(match_cons(z_73, sym_TCons_2))
                            {
                              a_74 = ATgetArgument(z_73, 0);
                              b_74 = ATgetArgument(z_73, 1);
                              l_73 :
                              if(match_cons(b_74, sym_TCons_2))
                                {
                                  c_74 = ATgetArgument(b_74, 0);
                                  d_74 = ATgetArgument(b_74, 1);
                                  m_73 :
                                  if(match_cons(d_74, sym_TCons_2))
                                    {
                                      e_74 = ATgetArgument(d_74, 0);
                                      f_74 = ATgetArgument(d_74, 1);
                                      n_73 :
                                      if(match_cons(f_74, sym_TNil_0))
                                        {
                                          o_73 :
                                          if(match_cons(g_74, sym_TNil_0))
                                            {
                                              ATerm n_74 = NULL,p_74 = NULL,r_74 = NULL;
                                              ATerm m_10;
                                              m_10 = t;
                                              {
                                                ATerm o_74 = NULL;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                t = union_0(t);
                                                o_74 = t;
                                                if(n_74 != NULL && n_74 != o_74)
                                                  _fail(o_74);
                                                else
                                                  n_74 = o_74;
                                              }
                                              t = m_10;
                                              {
                                                ATerm n_10;
                                                n_10 = t;
                                                {
                                                  ATerm q_74 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = union_0(t);
                                                  q_74 = t;
                                                  if(p_74 != NULL && p_74 != q_74)
                                                    _fail(q_74);
                                                  else
                                                    p_74 = q_74;
                                                }
                                                t = n_10;
                                                {
                                                  ATerm s_74 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = union_0(t);
                                                  s_74 = t;
                                                  if(r_74 != NULL && r_74 != s_74)
                                                    _fail(s_74);
                                                  else
                                                    r_74 = s_74;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_74), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL;
  b_75 = t;
  y_74 :
  if(match_cons(b_75, sym_TCons_2))
    {
      c_75 = ATgetArgument(b_75, 0);
      d_75 = ATgetArgument(b_75, 1);
      a_75 :
      if(match_cons(d_75, sym_TCons_2))
        {
          e_75 = ATgetArgument(d_75, 0);
          f_75 = ATgetArgument(d_75, 1);
          t = not_null(e_75);
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
  ATerm l_75 = NULL;
  l_75 = t;
  t = SSL_explode_term(not_null(l_75));
  return(t);
}
ATerm default_join_0 (ATerm t)
{
  t = explode_term_0(t);
  t = Snd_0(t);
  {
    ATerm w_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
      return(t);
    }
    ATerm x_2 (ATerm t)
    {
      t = cart_1(t, Union_0);
      return(t);
    }
    t = foldr_2(t, w_2, x_2);
  }
  return(t);
}
ATerm SeqUnion_0 (ATerm t)
{
  ATerm f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL,k_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL;
  f_76 = t;
  t_75 :
  if(match_cons(f_76, sym_TCons_2))
    {
      g_76 = ATgetArgument(f_76, 0);
      n_76 = ATgetArgument(f_76, 1);
      u_75 :
      if(match_cons(g_76, sym_TCons_2))
        {
          h_76 = ATgetArgument(g_76, 0);
          i_76 = ATgetArgument(g_76, 1);
          v_75 :
          if(match_cons(i_76, sym_TCons_2))
            {
              j_76 = ATgetArgument(i_76, 0);
              k_76 = ATgetArgument(i_76, 1);
              w_75 :
              if(match_cons(k_76, sym_TCons_2))
                {
                  l_76 = ATgetArgument(k_76, 0);
                  m_76 = ATgetArgument(k_76, 1);
                  x_75 :
                  if(match_cons(m_76, sym_TNil_0))
                    {
                      y_75 :
                      if(match_cons(n_76, sym_TCons_2))
                        {
                          o_76 = ATgetArgument(n_76, 0);
                          v_76 = ATgetArgument(n_76, 1);
                          z_75 :
                          if(match_cons(o_76, sym_TCons_2))
                            {
                              p_76 = ATgetArgument(o_76, 0);
                              q_76 = ATgetArgument(o_76, 1);
                              a_76 :
                              if(match_cons(q_76, sym_TCons_2))
                                {
                                  r_76 = ATgetArgument(q_76, 0);
                                  s_76 = ATgetArgument(q_76, 1);
                                  b_76 :
                                  if(match_cons(s_76, sym_TCons_2))
                                    {
                                      t_76 = ATgetArgument(s_76, 0);
                                      u_76 = ATgetArgument(s_76, 1);
                                      c_76 :
                                      if(match_cons(u_76, sym_TNil_0))
                                        {
                                          d_76 :
                                          if(match_cons(v_76, sym_TNil_0))
                                            {
                                              ATerm d_77 = NULL,h_77 = NULL,j_77 = NULL;
                                              ATerm o_10;
                                              o_10 = t;
                                              {
                                                ATerm e_77 = NULL,g_77 = NULL;
                                                ATerm f_77 = NULL;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_76), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                t = diff_0(t);
                                                f_77 = t;
                                                if(e_77 != NULL && e_77 != f_77)
                                                  _fail(f_77);
                                                else
                                                  e_77 = f_77;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_77), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                t = union_0(t);
                                                g_77 = t;
                                                if(d_77 != NULL && d_77 != g_77)
                                                  _fail(g_77);
                                                else
                                                  d_77 = g_77;
                                              }
                                              t = o_10;
                                              {
                                                ATerm p_10;
                                                p_10 = t;
                                                {
                                                  ATerm i_77 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_76), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = union_0(t);
                                                  i_77 = t;
                                                  if(h_77 != NULL && h_77 != i_77)
                                                    _fail(i_77);
                                                  else
                                                    h_77 = i_77;
                                                }
                                                t = p_10;
                                                {
                                                  ATerm k_77 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_76), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = union_0(t);
                                                  k_77 = t;
                                                  if(j_77 != NULL && j_77 != k_77)
                                                    _fail(k_77);
                                                  else
                                                    j_77 = k_77;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_77), (ATerm) ATmakeAppl(sym_TNil_0))));
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
ATerm cart_1 (ATerm t, ATerm k_58 (ATerm))
{
  ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL;
  w_77 = t;
  t_77 :
  if(match_cons(w_77, sym_TCons_2))
    {
      x_77 = ATgetArgument(w_77, 0);
      y_77 = ATgetArgument(w_77, 1);
      u_77 :
      if(match_cons(y_77, sym_TCons_2))
        {
          z_77 = ATgetArgument(y_77, 0);
          a_78 = ATgetArgument(y_77, 1);
          v_77 :
          if(match_cons(a_78, sym_TNil_0))
            {
              t = not_null(x_77);
              {
                ATerm y_2 (ATerm t)
                {
                  ATerm e_78 = NULL;
                  e_78 = t;
                  t = not_null(z_77);
                  {
                    ATerm z_2 (ATerm t)
                    {
                      ATerm g_78 = NULL;
                      g_78 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_78), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = k_58(t);
                      return(t);
                    }
                    t = map_1(t, z_2);
                  }
                  return(t);
                }
                t = map_1(t, y_2);
                {
                  ATerm a_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = foldr_2(t, a_3, union_0);
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
  ATerm b_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = cart_1(t, SeqUnion_0);
    return(t);
  }
  t = foldr_2(t, b_3, c_3);
  return(t);
}
ATerm JoinScope_1 (ATerm t, ATerm c_45 (ATerm))
{
  ATerm v_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL,a_79 = NULL,b_79 = NULL,c_79 = NULL;
  v_78 = t;
  r_78 :
  if(match_cons(v_78, sym_TCons_2))
    {
      w_78 = ATgetArgument(v_78, 0);
      x_78 = ATgetArgument(v_78, 1);
      s_78 :
      if(match_cons(x_78, sym_TCons_2))
        {
          y_78 = ATgetArgument(x_78, 0);
          a_79 = ATgetArgument(x_78, 1);
          t_78 :
          if(match_cons(a_79, sym_TCons_2))
            {
              b_79 = ATgetArgument(a_79, 0);
              c_79 = ATgetArgument(a_79, 1);
              u_78 :
              if(match_cons(c_79, sym_TNil_0))
                {
                  ATerm g_79 = NULL,k_79 = NULL;
                  ATerm q_10;
                  q_10 = t;
                  {
                    ATerm h_79 = NULL,j_79 = NULL;
                    ATerm i_79 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TNil_0);
                    t = c_45(t);
                    i_79 = t;
                    if(h_79 != NULL && h_79 != i_79)
                      _fail(i_79);
                    else
                      h_79 = i_79;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_79), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = diff_0(t);
                    j_79 = t;
                    if(g_79 != NULL && g_79 != j_79)
                      _fail(j_79);
                    else
                      g_79 = j_79;
                  }
                  t = q_10;
                  {
                    ATerm l_79 = NULL,p_79 = NULL;
                    ATerm m_79 = NULL,o_79 = NULL;
                    ATerm n_79 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TNil_0);
                    t = c_45(t);
                    n_79 = t;
                    if(m_79 != NULL && m_79 != n_79)
                      _fail(n_79);
                    else
                      m_79 = n_79;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_79), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = isect_0(t);
                    o_79 = t;
                    if(l_79 != NULL && l_79 != o_79)
                      _fail(o_79);
                    else
                      l_79 = o_79;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_79), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_79), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = conc_0(t);
                    p_79 = t;
                    if(k_79 != NULL && k_79 != p_79)
                      _fail(p_79);
                    else
                      k_79 = p_79;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_79), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_79), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm k_80 = NULL,l_80 = NULL,m_80 = NULL,n_80 = NULL;
  k_80 = t;
  j_80 :
  if(match_cons(k_80, sym_Seqs_1))
    {
      l_80 = ATgetArgument(k_80, 0);
      t = not_null(l_80);
      t = seqs_join_0(t);
    }
  else
    {
      if(match_cons(k_80, sym_Seq_2))
        {
          l_80 = ATgetArgument(k_80, 0);
          m_80 = ATgetArgument(k_80, 1);
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_80), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_80), (ATerm) ATmakeAppl(sym_Nil_0)));
          t = seqs_join_0(t);
        }
      else
        {
          if(match_cons(k_80, sym_Rule_3))
            {
              l_80 = ATgetArgument(k_80, 0);
              m_80 = ATgetArgument(k_80, 1);
              n_80 = ATgetArgument(k_80, 2);
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_80), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_80), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_80), (ATerm) ATmakeAppl(sym_Nil_0))));
              t = seqs_join_0(t);
            }
          else
            {
              if(match_cons(k_80, sym_StratRule_3))
                {
                  l_80 = ATgetArgument(k_80, 0);
                  m_80 = ATgetArgument(k_80, 1);
                  n_80 = ATgetArgument(k_80, 2);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_80), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_80), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_80), (ATerm) ATmakeAppl(sym_Nil_0))));
                  t = seqs_join_0(t);
                }
              else
                {
                  if(match_cons(k_80, sym_MA_2))
                    {
                      l_80 = ATgetArgument(k_80, 0);
                      m_80 = ATgetArgument(k_80, 1);
                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_80), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_80), (ATerm) ATmakeAppl(sym_Nil_0)));
                      t = seqs_join_0(t);
                    }
                  else
                    {
                      if(match_cons(k_80, sym_AM_2))
                        {
                          l_80 = ATgetArgument(k_80, 0);
                          m_80 = ATgetArgument(k_80, 1);
                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_80), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_80), (ATerm) ATmakeAppl(sym_Nil_0)));
                          t = seqs_join_0(t);
                        }
                      else
                        {
                          if(match_cons(k_80, sym_BA_2))
                            {
                              l_80 = ATgetArgument(k_80, 0);
                              m_80 = ATgetArgument(k_80, 1);
                              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_80), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_80), (ATerm) ATmakeAppl(sym_Nil_0)));
                              t = seqs_join_0(t);
                            }
                          else
                            {
                              if(match_cons(k_80, sym_BAM_3))
                                {
                                  l_80 = ATgetArgument(k_80, 0);
                                  m_80 = ATgetArgument(k_80, 1);
                                  n_80 = ATgetArgument(k_80, 2);
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_80), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_80), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_80), (ATerm) ATmakeAppl(sym_Nil_0))));
                                  t = seqs_join_0(t);
                                }
                              else
                                {
                                  if(match_cons(k_80, sym_Cong_2))
                                    {
                                      l_80 = ATgetArgument(k_80, 0);
                                      m_80 = ATgetArgument(k_80, 1);
                                      t = not_null(m_80);
                                      t = seqs_join_0(t);
                                    }
                                  else
                                    {
                                      if(match_cons(k_80, sym_Scope_2))
                                        {
                                          l_80 = ATgetArgument(k_80, 0);
                                          m_80 = ATgetArgument(k_80, 1);
                                          t = not_null(m_80);
                                          {
                                            ATerm d_3 (ATerm t)
                                            {
                                              ATerm e_3 (ATerm t)
                                              {
                                                t = not_null(l_80);
                                                return(t);
                                              }
                                              t = JoinScope_1(t, e_3);
                                              return(t);
                                            }
                                            t = map_1(t, d_3);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(k_80, sym_Overlay_3))
                                            {
                                              l_80 = ATgetArgument(k_80, 0);
                                              m_80 = ATgetArgument(k_80, 1);
                                              n_80 = ATgetArgument(k_80, 2);
                                              {
                                                ATerm n_81 = NULL;
                                                ATerm o_81 = NULL;
                                                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_80), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_80), (ATerm) ATmakeAppl(sym_Nil_0)));
                                                t = seqs_join_0(t);
                                                o_81 = t;
                                                if(n_81 != NULL && n_81 != o_81)
                                                  _fail(o_81);
                                                else
                                                  n_81 = o_81;
                                                t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(l_80), not_null(m_80), not_null(n_81));
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
ATerm Cong_2 (ATerm t, ATerm u_43 (ATerm), ATerm v_43 (ATerm))
{
  ATerm f_82 = NULL,g_82 = NULL,h_82 = NULL;
  f_82 = t;
  e_82 :
  if(match_cons(f_82, sym_Cong_2))
    {
      g_82 = ATgetArgument(f_82, 0);
      h_82 = ATgetArgument(f_82, 1);
      {
        ATerm k_82 = NULL;
        t = not_null(g_82);
        {
          ATerm o_82 = NULL;
          t = u_43(t);
          k_82 = t;
          t = not_null(h_82);
          t = v_43(t);
          o_82 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(k_82), not_null(o_82));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm use_term_0 (ATerm t)
{
  ATerm v_82 = NULL;
  ATerm x_82 = NULL;
  v_82 = t;
  {
    ATerm y_82 = NULL;
    t = not_null(v_82);
    t = tvars_0(t);
    y_82 = t;
    if(x_82 != NULL && x_82 != y_82)
      _fail(y_82);
    else
      x_82 = y_82;
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(x_82), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
  }
  return(t);
}
ATerm def_term_0 (ATerm t)
{
  ATerm d_83 = NULL;
  ATerm f_83 = NULL;
  d_83 = t;
  {
    ATerm g_83 = NULL;
    t = not_null(d_83);
    t = tvars_0(t);
    g_83 = t;
    if(f_83 != NULL && f_83 != g_83)
      _fail(g_83);
    else
      f_83 = g_83;
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_83), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
  }
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm g_41 (ATerm), ATerm h_41 (ATerm), ATerm i_41 (ATerm))
{
  ATerm o_83 = NULL,p_83 = NULL,q_83 = NULL,r_83 = NULL;
  o_83 = t;
  n_83 :
  if(match_cons(o_83, sym_Rule_3))
    {
      p_83 = ATgetArgument(o_83, 0);
      q_83 = ATgetArgument(o_83, 1);
      r_83 = ATgetArgument(o_83, 2);
      {
        ATerm v_83 = NULL;
        t = not_null(p_83);
        {
          ATerm x_83 = NULL;
          t = g_41(t);
          v_83 = t;
          t = not_null(q_83);
          {
            ATerm z_83 = NULL;
            t = h_41(t);
            x_83 = t;
            t = not_null(r_83);
            t = i_41(t);
            z_83 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_83), not_null(x_83), not_null(z_83));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BAM_3 (ATerm t, ATerm n_40 (ATerm), ATerm o_40 (ATerm), ATerm p_40 (ATerm))
{
  ATerm k_84 = NULL,l_84 = NULL,m_84 = NULL,n_84 = NULL;
  k_84 = t;
  j_84 :
  if(match_cons(k_84, sym_BAM_3))
    {
      l_84 = ATgetArgument(k_84, 0);
      m_84 = ATgetArgument(k_84, 1);
      n_84 = ATgetArgument(k_84, 2);
      {
        ATerm r_84 = NULL;
        t = not_null(l_84);
        {
          ATerm t_84 = NULL;
          t = n_40(t);
          r_84 = t;
          t = not_null(m_84);
          {
            ATerm v_84 = NULL;
            t = o_40(t);
            t_84 = t;
            t = not_null(n_84);
            t = p_40(t);
            v_84 = t;
            t = (ATerm) ATmakeAppl(sym_BAM_3, not_null(r_84), not_null(t_84), not_null(v_84));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BA_2 (ATerm t, ATerm l_40 (ATerm), ATerm m_40 (ATerm))
{
  ATerm f_85 = NULL,g_85 = NULL,h_85 = NULL;
  f_85 = t;
  e_85 :
  if(match_cons(f_85, sym_BA_2))
    {
      g_85 = ATgetArgument(f_85, 0);
      h_85 = ATgetArgument(f_85, 1);
      {
        ATerm k_85 = NULL;
        t = not_null(g_85);
        {
          ATerm m_85 = NULL;
          t = l_40(t);
          k_85 = t;
          t = not_null(h_85);
          t = m_40(t);
          m_85 = t;
          t = (ATerm) ATmakeAppl(sym_BA_2, not_null(k_85), not_null(m_85));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm AM_2 (ATerm t, ATerm j_40 (ATerm), ATerm k_40 (ATerm))
{
  ATerm v_85 = NULL,w_85 = NULL,x_85 = NULL;
  v_85 = t;
  u_85 :
  if(match_cons(v_85, sym_AM_2))
    {
      w_85 = ATgetArgument(v_85, 0);
      x_85 = ATgetArgument(v_85, 1);
      {
        ATerm a_86 = NULL;
        t = not_null(w_85);
        {
          ATerm c_86 = NULL;
          t = j_40(t);
          a_86 = t;
          t = not_null(x_85);
          t = k_40(t);
          c_86 = t;
          t = (ATerm) ATmakeAppl(sym_AM_2, not_null(a_86), not_null(c_86));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MA_2 (ATerm t, ATerm h_40 (ATerm), ATerm i_40 (ATerm))
{
  ATerm l_86 = NULL,m_86 = NULL,n_86 = NULL;
  l_86 = t;
  k_86 :
  if(match_cons(l_86, sym_MA_2))
    {
      m_86 = ATgetArgument(l_86, 0);
      n_86 = ATgetArgument(l_86, 1);
      {
        ATerm q_86 = NULL;
        t = not_null(m_86);
        {
          ATerm s_86 = NULL;
          t = h_40(t);
          q_86 = t;
          t = not_null(n_86);
          t = i_40(t);
          s_86 = t;
          t = (ATerm) ATmakeAppl(sym_MA_2, not_null(q_86), not_null(s_86));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm c_44 (ATerm))
{
  ATerm a_87 = NULL,b_87 = NULL;
  a_87 = t;
  z_86 :
  if(match_cons(a_87, sym_Match_1))
    {
      b_87 = ATgetArgument(a_87, 0);
      {
        ATerm d_87 = NULL;
        t = not_null(b_87);
        t = c_44(t);
        d_87 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(d_87));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm d_44 (ATerm))
{
  ATerm k_87 = NULL,l_87 = NULL;
  k_87 = t;
  j_87 :
  if(match_cons(k_87, sym_Build_1))
    {
      l_87 = ATgetArgument(k_87, 0);
      {
        ATerm n_87 = NULL;
        t = not_null(l_87);
        t = d_44(t);
        n_87 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(n_87));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm constructs_1 (ATerm t, ATerm b_45 (ATerm))
{
  ATerm r_10 = t;
  if(PushChoice()==0)
    {
      t = Build_1(t, use_term_0);
      PopChoice();
    }
  else
    {
      t = r_10;
      {
        ATerm s_10 = t;
        if(PushChoice()==0)
          {
            t = Match_1(t, def_term_0);
            PopChoice();
          }
        else
          {
            t = s_10;
            {
              ATerm t_10 = t;
              if(PushChoice()==0)
                {
                  t = MA_2(t, def_term_0, b_45);
                  PopChoice();
                }
              else
                {
                  t = t_10;
                  {
                    ATerm u_10 = t;
                    if(PushChoice()==0)
                      {
                        t = AM_2(t, b_45, def_term_0);
                        PopChoice();
                      }
                    else
                      {
                        t = u_10;
                        {
                          ATerm y_10 = t;
                          if(PushChoice()==0)
                            {
                              t = BA_2(t, b_45, use_term_0);
                              PopChoice();
                            }
                          else
                            {
                              t = y_10;
                              {
                                ATerm z_10 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BAM_3(t, b_45, use_term_0, def_term_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = z_10;
                                    {
                                      ATerm a_11 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Scope_2(t, _id, b_45);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = a_11;
                                          {
                                            ATerm b_11 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = Rule_3(t, def_term_0, use_term_0, b_45);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = b_11;
                                                {
                                                  ATerm c_11 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = Overlay_3(t, _id, _id, use_term_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = c_11;
                                                      {
                                                        ATerm f_3 (ATerm t)
                                                        {
                                                          t = map_1(t, b_45);
                                                          return(t);
                                                        }
                                                        t = Cong_2(t, _id, f_3);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm d_11 = t;
  if(PushChoice()==0)
    {
      t = constructs_1(t, use_def_0);
      PopChoice();
    }
  else
    {
      t = d_11;
      t = _all(t, use_def_0);
    }
  {
    ATerm e_11 = t;
    if(PushChoice()==0)
      {
        t = UDjoin_0(t);
        PopChoice();
      }
    else
      {
        t = e_11;
        t = default_join_0(t);
      }
  }
  return(t);
}
ATerm RDef_3 (ATerm t, ATerm o_41 (ATerm), ATerm p_41 (ATerm), ATerm q_41 (ATerm))
{
  ATerm x_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL;
  x_87 = t;
  w_87 :
  if(match_cons(x_87, sym_RDef_3))
    {
      y_87 = ATgetArgument(x_87, 0);
      z_87 = ATgetArgument(x_87, 1);
      a_88 = ATgetArgument(x_87, 2);
      {
        ATerm e_88 = NULL;
        t = not_null(y_87);
        {
          ATerm g_88 = NULL;
          t = o_41(t);
          e_88 = t;
          t = not_null(z_87);
          {
            ATerm i_88 = NULL;
            t = p_41(t);
            g_88 = t;
            t = not_null(a_88);
            t = q_41(t);
            i_88 = t;
            t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(e_88), not_null(g_88), not_null(i_88));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm g_43 (ATerm), ATerm h_43 (ATerm), ATerm i_43 (ATerm))
{
  ATerm t_88 = NULL,u_88 = NULL,v_88 = NULL,x_88 = NULL;
  t_88 = t;
  s_88 :
  if(match_cons(t_88, sym_SDef_3))
    {
      u_88 = ATgetArgument(t_88, 0);
      v_88 = ATgetArgument(t_88, 1);
      x_88 = ATgetArgument(t_88, 2);
      {
        ATerm b_89 = NULL;
        t = not_null(u_88);
        {
          ATerm d_89 = NULL;
          t = g_43(t);
          b_89 = t;
          t = not_null(v_88);
          {
            ATerm f_89 = NULL;
            t = h_43(t);
            d_89 = t;
            t = not_null(x_88);
            t = i_43(t);
            f_89 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(b_89), not_null(d_89), not_null(f_89));
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
  ATerm f_11 = t;
  if(PushChoice()==0)
    {
      ATerm g_3 (ATerm t)
      {
        t = use_def_0(t);
        {
          ATerm g_11 = t;
          if(PushChoice()==0)
            {
              ATerm h_3 (ATerm t)
              {
                ATerm i_3 (ATerm t)
                {
                  ATerm j_3 (ATerm t)
                  {
                    t = TCons_2(t, Nil_0, TNil_0);
                    return(t);
                  }
                  t = TCons_2(t, _id, j_3);
                  return(t);
                }
                t = TCons_2(t, Nil_0, i_3);
                return(t);
              }
              t = Cons_2(t, h_3, Nil_0);
              PopChoice();
              _fail(t);
            }
          else
            t = g_11;
        }
        return(t);
      }
      t = SDef_3(t, _id, _id, g_3);
      t = err_msg_0(t);
      PopChoice();
    }
  else
    {
      t = f_11;
      {
        ATerm h_11 = t;
        if(PushChoice()==0)
          {
            ATerm k_3 (ATerm t)
            {
              t = use_def_0(t);
              {
                ATerm i_11 = t;
                if(PushChoice()==0)
                  {
                    ATerm l_3 (ATerm t)
                    {
                      ATerm m_3 (ATerm t)
                      {
                        ATerm n_3 (ATerm t)
                        {
                          t = TCons_2(t, Nil_0, TNil_0);
                          return(t);
                        }
                        t = TCons_2(t, _id, n_3);
                        return(t);
                      }
                      t = TCons_2(t, Nil_0, m_3);
                      return(t);
                    }
                    t = Cons_2(t, l_3, Nil_0);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = i_11;
              }
              return(t);
            }
            t = RDef_3(t, _id, _id, k_3);
            t = err_msg_0(t);
            PopChoice();
          }
        else
          {
            t = h_11;
            t = Overlay_3(t, _id, _id, _id);
            t = use_def_0(t);
            {
              ATerm j_11 = t;
              if(PushChoice()==0)
                {
                  ATerm o_3 (ATerm t)
                  {
                    ATerm p_3 (ATerm t)
                    {
                      ATerm q_3 (ATerm t)
                      {
                        ATerm r_3 (ATerm t)
                        {
                          t = TCons_2(t, Nil_0, TNil_0);
                          return(t);
                        }
                        t = TCons_2(t, Nil_0, r_3);
                        return(t);
                      }
                      t = TCons_2(t, Nil_0, q_3);
                      return(t);
                    }
                    t = Cons_2(t, p_3, Nil_0);
                    return(t);
                  }
                  t = Overlay_3(t, _id, _id, o_3);
                  PopChoice();
                  _fail(t);
                }
              else
                t = j_11;
              t = err_msg_0(t);
            }
          }
      }
    }
  return(t);
}
ATerm defs_use_def_0 (ATerm t)
{
  ATerm n_89 = NULL;
  t = filter_1(t, check_0);
  n_89 = t;
  l_89 :
  if(!(match_cons(n_89, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm Overlays_1 (ATerm t, ATerm z_41 (ATerm))
{
  ATerm r_89 = NULL,s_89 = NULL;
  r_89 = t;
  q_89 :
  if(match_cons(r_89, sym_Overlays_1))
    {
      s_89 = ATgetArgument(r_89, 0);
      {
        ATerm u_89 = NULL;
        t = not_null(s_89);
        t = z_41(t);
        u_89 = t;
        t = (ATerm) ATmakeAppl(sym_Overlays_1, not_null(u_89));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm y_41 (ATerm))
{
  ATerm c_90 = NULL,d_90 = NULL;
  c_90 = t;
  b_90 :
  if(match_cons(c_90, sym_Signature_1))
    {
      d_90 = ATgetArgument(c_90, 0);
      {
        ATerm f_90 = NULL;
        t = not_null(d_90);
        t = y_41(t);
        f_90 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, not_null(f_90));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm spec_use_def_0 (ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm t_3 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm u_3 (ATerm t)
    {
      ATerm v_3 (ATerm t)
      {
        t = Overlays_1(t, defs_use_def_0);
        return(t);
      }
      ATerm w_3 (ATerm t)
      {
        ATerm x_3 (ATerm t)
        {
          t = Strategies_1(t, defs_use_def_0);
          return(t);
        }
        t = Cons_2(t, x_3, Nil_0);
        return(t);
      }
      t = Cons_2(t, v_3, w_3);
      return(t);
    }
    t = Cons_2(t, t_3, u_3);
    return(t);
  }
  t = Specification_1(t, s_3);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm v_90 = NULL,w_90 = NULL,x_90 = NULL,y_90 = NULL,z_90 = NULL,a_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL,g_91 = NULL,h_91 = NULL,i_91 = NULL;
  v_90 = t;
  k_90 :
  if(match_cons(v_90, sym_TCons_2))
    {
      w_90 = ATgetArgument(v_90, 0);
      c_91 = ATgetArgument(v_90, 1);
      l_90 :
      if(match_cons(w_90, sym_TCons_2))
        {
          x_90 = ATgetArgument(w_90, 0);
          y_90 = ATgetArgument(w_90, 1);
          m_90 :
          if(match_cons(y_90, sym_TCons_2))
            {
              z_90 = ATgetArgument(y_90, 0);
              a_91 = ATgetArgument(y_90, 1);
              o_90 :
              if(match_cons(a_91, sym_TNil_0))
                {
                  p_90 :
                  if(match_cons(c_91, sym_TCons_2))
                    {
                      d_91 = ATgetArgument(c_91, 0);
                      i_91 = ATgetArgument(c_91, 1);
                      q_90 :
                      if(match_cons(d_91, sym_TCons_2))
                        {
                          e_91 = ATgetArgument(d_91, 0);
                          f_91 = ATgetArgument(d_91, 1);
                          r_90 :
                          if(match_cons(f_91, sym_TCons_2))
                            {
                              g_91 = ATgetArgument(f_91, 0);
                              h_91 = ATgetArgument(f_91, 1);
                              s_90 :
                              if(match_cons(h_91, sym_TNil_0))
                                {
                                  t_90 :
                                  if(match_cons(i_91, sym_TNil_0))
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_90), not_null(e_91)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_90), not_null(g_91)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm s_91 = NULL,t_91 = NULL,u_91 = NULL;
  s_91 = t;
  r_91 :
  if(match_cons(s_91, sym_Cons_2))
    {
      t_91 = ATgetArgument(s_91, 0);
      u_91 = ATgetArgument(s_91, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_91), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_91), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm a_92 = NULL;
  a_92 = t;
  z_91 :
  if(match_cons(a_92, sym_Nil_0))
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
  ATerm y_3 (ATerm t)
  {
    ATerm e_92 = NULL;
    e_92 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_92));
    return(t);
  }
  t = map_1(t, y_3);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm j_92 = NULL,l_92 = NULL,m_92 = NULL;
  j_92 = t;
  i_92 :
  if(match_cons(j_92, sym_Cons_2))
    {
      l_92 = ATgetArgument(j_92, 0);
      m_92 = ATgetArgument(j_92, 1);
      t = not_null(m_92);
    }
  else
    _fail(t);
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm u_92 = NULL,v_92 = NULL,w_92 = NULL,x_92 = NULL,y_92 = NULL;
  u_92 = t;
  r_92 :
  if(match_cons(u_92, sym_TCons_2))
    {
      v_92 = ATgetArgument(u_92, 0);
      w_92 = ATgetArgument(u_92, 1);
      s_92 :
      if(match_cons(w_92, sym_TCons_2))
        {
          x_92 = ATgetArgument(w_92, 0);
          y_92 = ATgetArgument(w_92, 1);
          t_92 :
          if(match_cons(y_92, sym_TNil_0))
            {
              t = not_null(v_92);
              {
                ATerm c_93 (ATerm t)
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
                            ATerm m_11;
                            m_11 = t;
                            {
                              ATerm z_3 (ATerm t)
                              {
                                t = not_null(x_92);
                                return(t);
                              }
                              t = HdMember_1(t, z_3);
                            }
                            t = m_11;
                            t = Cons_2(t, _id, c_93);
                            PopChoice();
                          }
                        else
                          {
                            t = l_11;
                            t = Tl_0(t);
                            t = c_93(t);
                          }
                      }
                    }
                  return(t);
                }
                t = c_93(t);
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
  ATerm h_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL,l_93 = NULL;
  h_93 = t;
  e_93 :
  if(match_cons(h_93, sym_TCons_2))
    {
      i_93 = ATgetArgument(h_93, 0);
      j_93 = ATgetArgument(h_93, 1);
      f_93 :
      if(match_cons(j_93, sym_TCons_2))
        {
          k_93 = ATgetArgument(j_93, 0);
          l_93 = ATgetArgument(j_93, 1);
          g_93 :
          if(match_cons(l_93, sym_TNil_0))
            {
              if(i_93 != NULL && i_93 != k_93)
                _fail(k_93);
              else
                i_93 = k_93;
            }
          else
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
  ATerm i_94 = NULL,j_94 = NULL,k_94 = NULL,l_94 = NULL,m_94 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL,q_94 = NULL;
  ATerm a_96 (ATerm t)
  {
    ATerm i_95 = NULL,k_95 = NULL,m_95 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_94), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm n_11 = t;
      if(PushChoice()==0)
        {
          t = eq_0(t);
          PopChoice();
          _fail(t);
        }
      else
        t = n_11;
      {
        ATerm o_11;
        o_11 = t;
        {
          ATerm j_95 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = g_0(t);
          j_95 = t;
          if(i_95 != NULL && i_95 != j_95)
            _fail(j_95);
          else
            i_95 = j_95;
        }
        t = o_11;
        {
          ATerm l_95 = NULL;
          t = not_null(o_94);
          t = tvars_0(t);
          l_95 = t;
          if(k_95 != NULL && k_95 != l_95)
            _fail(l_95);
          else
            k_95 = l_95;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_95), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_95), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = isect_0(t);
          {
            ATerm o_95 = NULL,q_95 = NULL,s_95 = NULL;
            t = strings_to_vars_0(t);
            m_95 = t;
            {
              ATerm p_11;
              p_11 = t;
              {
                ATerm p_95 = NULL;
                t = (ATerm) ATmakeAppl(sym_TNil_0);
                t = g_0(t);
                p_95 = t;
                if(o_95 != NULL && o_95 != p_95)
                  _fail(p_95);
                else
                  o_95 = p_95;
              }
              t = p_11;
              {
                ATerm r_95 = NULL;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_94), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_94), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = tvars_0(t);
                r_95 = t;
                if(q_95 != NULL && q_95 != r_95)
                  _fail(r_95);
                else
                  q_95 = r_95;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_95), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_95), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = isect_0(t);
                {
                  ATerm u_95 = NULL;
                  t = strings_to_vars_0(t);
                  s_95 = t;
                  {
                    ATerm x_95 = NULL;
                    t = new_0(t);
                    u_95 = t;
                    {
                      ATerm y_95 = NULL;
                      t = not_null(l_94);
                      t = h_0(t);
                      y_95 = t;
                      if(x_95 != NULL && x_95 != y_95)
                        _fail(y_95);
                      else
                        x_95 = y_95;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(x_95), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(m_95)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Str_1, not_null(u_95)), not_null(s_95))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_RDef_3, not_null(l_94), not_null(m_94), (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_94), not_null(p_94), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(l_94))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(m_95)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Str_1, not_null(u_95)), not_null(s_95)))), not_null(q_94)))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  k_94 = t;
  c_94 :
  if(match_cons(k_94, sym_RDef_3))
    {
      l_94 = ATgetArgument(k_94, 0);
      m_94 = ATgetArgument(k_94, 1);
      n_94 = ATgetArgument(k_94, 2);
      d_94 :
      if(match_cons(n_94, sym_Rule_3))
        {
          o_94 = ATgetArgument(n_94, 0);
          p_94 = ATgetArgument(n_94, 1);
          q_94 = ATgetArgument(n_94, 2);
          e_94 :
          if(match_cons(p_94, sym_Op_2))
            {
              i_94 = ATgetArgument(p_94, 0);
              j_94 = ATgetArgument(p_94, 1);
              f_94 :
              if(match_cons(j_94, sym_Nil_0))
                {
                  g_94 :
                  if(match_string(i_94, "Undefined"))
                    {
                      ATerm q_11 = t;
                      if(PushChoice()==0)
                        {
                          ATerm v_94 = NULL,x_94 = NULL,z_94 = NULL;
                          ATerm r_11;
                          r_11 = t;
                          {
                            ATerm w_94 = NULL;
                            t = (ATerm) ATmakeAppl(sym_TNil_0);
                            t = g_0(t);
                            w_94 = t;
                            if(v_94 != NULL && v_94 != w_94)
                              _fail(w_94);
                            else
                              v_94 = w_94;
                          }
                          t = r_11;
                          {
                            ATerm y_94 = NULL;
                            t = not_null(o_94);
                            t = tvars_0(t);
                            y_94 = t;
                            if(x_94 != NULL && x_94 != y_94)
                              _fail(y_94);
                            else
                              x_94 = y_94;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_94), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_94), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = isect_0(t);
                            {
                              ATerm b_95 = NULL;
                              t = strings_to_vars_0(t);
                              z_94 = t;
                              {
                                ATerm c_95 = NULL;
                                t = not_null(l_94);
                                t = h_0(t);
                                c_95 = t;
                                if(b_95 != NULL && b_95 != c_95)
                                  _fail(c_95);
                                else
                                  b_95 = c_95;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(b_95), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(z_94)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_RDef_3, not_null(l_94), not_null(m_94), (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_94), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(l_94))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(z_94)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_94), (ATerm) ATmakeAppl(sym_Fail_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
                              }
                            }
                          }
                          PopChoice();
                        }
                      else
                        {
                          t = q_11;
                          t = a_96(t);
                        }
                    }
                  else
                    t = a_96(t);
                }
              else
                {
                  h_94 :
                  t = a_96(t);
                }
            }
          else
            t = a_96(t);
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
  ATerm c_97 = NULL,d_97 = NULL,e_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL;
  c_97 = t;
  t_96 :
  if(match_cons(c_97, sym_TCons_2))
    {
      d_97 = ATgetArgument(c_97, 0);
      f_97 = ATgetArgument(c_97, 1);
      u_96 :
      if(match_cons(d_97, sym_DynamicRules_1))
        {
          e_97 = ATgetArgument(d_97, 0);
          v_96 :
          if(match_cons(f_97, sym_TCons_2))
            {
              g_97 = ATgetArgument(f_97, 0);
              h_97 = ATgetArgument(f_97, 1);
              w_96 :
              if(match_cons(h_97, sym_TNil_0))
                {
                  t = not_null(e_97);
                  {
                    ATerm a_4 (ATerm t)
                    {
                      ATerm b_4 (ATerm t)
                      {
                        t = not_null(g_97);
                        return(t);
                      }
                      ATerm c_4 (ATerm t)
                      {
                        ATerm k_97 = NULL;
                        k_97 = t;
                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(k_97))), (ATerm) ATmakeAppl(sym_Nil_0)));
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
        {
          if(match_cons(d_97, sym_OverrideDynamicRules_1))
            {
              e_97 = ATgetArgument(d_97, 0);
              x_96 :
              if(match_cons(f_97, sym_TCons_2))
                {
                  g_97 = ATgetArgument(f_97, 0);
                  h_97 = ATgetArgument(f_97, 1);
                  b_97 :
                  if(match_cons(h_97, sym_TNil_0))
                    {
                      t = not_null(e_97);
                      {
                        ATerm d_4 (ATerm t)
                        {
                          ATerm e_4 (ATerm t)
                          {
                            t = not_null(g_97);
                            return(t);
                          }
                          ATerm f_4 (ATerm t)
                          {
                            ATerm o_97 = NULL;
                            o_97 = t;
                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(o_97))), (ATerm) ATmakeAppl(sym_Nil_0)));
                            return(t);
                          }
                          t = SplitDynamicRule_2(t, e_4, f_4);
                          return(t);
                        }
                        t = map_1(t, d_4);
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
ATerm dist_scope_1 (ATerm t, ATerm e_67 (ATerm))
{
  ATerm b_98 = NULL,c_98 = NULL,d_98 = NULL,e_98 = NULL,f_98 = NULL,g_98 = NULL,h_98 = NULL;
  b_98 = t;
  x_97 :
  if(match_cons(b_98, sym_TCons_2))
    {
      c_98 = ATgetArgument(b_98, 0);
      f_98 = ATgetArgument(b_98, 1);
      y_97 :
      if(match_cons(c_98, sym_Scope_2))
        {
          d_98 = ATgetArgument(c_98, 0);
          e_98 = ATgetArgument(c_98, 1);
          z_97 :
          if(match_cons(f_98, sym_TCons_2))
            {
              g_98 = ATgetArgument(f_98, 0);
              h_98 = ATgetArgument(f_98, 1);
              a_98 :
              if(match_cons(h_98, sym_TNil_0))
                {
                  ATerm l_98 = NULL;
                  ATerm m_98 = NULL,o_98 = NULL;
                  ATerm n_98 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_98), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_98), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = union_0(t);
                  n_98 = t;
                  if(m_98 != NULL && m_98 != n_98)
                    _fail(n_98);
                  else
                    m_98 = n_98;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_98), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_98), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = e_67(t);
                  o_98 = t;
                  if(l_98 != NULL && l_98 != o_98)
                    _fail(o_98);
                  else
                    l_98 = o_98;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_98), not_null(l_98));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm one_dist_1 (ATerm t, ATerm r_61 (ATerm))
{
  ATerm x_98 = NULL,y_98 = NULL,z_98 = NULL,a_99 = NULL,b_99 = NULL;
  x_98 = t;
  u_98 :
  if(match_cons(x_98, sym_TCons_2))
    {
      y_98 = ATgetArgument(x_98, 0);
      z_98 = ATgetArgument(x_98, 1);
      v_98 :
      if(match_cons(z_98, sym_TCons_2))
        {
          a_99 = ATgetArgument(z_98, 0);
          b_99 = ATgetArgument(z_98, 1);
          w_98 :
          if(match_cons(b_99, sym_TNil_0))
            {
              t = not_null(y_98);
              {
                ATerm g_4 (ATerm t)
                {
                  ATerm e_99 = NULL;
                  e_99 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_99), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_99), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = r_61(t);
                  return(t);
                }
                t = _one(t, g_4);
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
ATerm env_oncetd_1 (ATerm t, ATerm g_62 (ATerm))
{
  ATerm i_99 (ATerm t)
  {
    ATerm t_11 = t;
    if(PushChoice()==0)
      {
        t = g_62(t);
        PopChoice();
      }
    else
      {
        t = t_11;
        t = one_dist_1(t, i_99);
      }
    return(t);
  }
  t = i_99(t);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm r_99 = NULL,s_99 = NULL,t_99 = NULL;
  r_99 = t;
  q_99 :
  if(match_cons(r_99, sym_Cons_2))
    {
      s_99 = ATgetArgument(r_99, 0);
      t_99 = ATgetArgument(r_99, 1);
      {
        ATerm w_99 = NULL;
        t = not_null(s_99);
        {
          ATerm y_99 = NULL,z_99 = NULL,f_100 = NULL;
          t = tvars_0(t);
          w_99 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_99), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_99), (ATerm) ATmakeAppl(sym_TNil_0)));
          {
            ATerm j_100 (ATerm t)
            {
              ATerm h_4 (ATerm t)
              {
                ATerm w_11 = t;
                if(PushChoice()==0)
                  {
                    t = dist_scope_1(t, j_100);
                    PopChoice();
                  }
                else
                  {
                    t = w_11;
                    {
                      ATerm a_100 = NULL,b_100 = NULL,c_100 = NULL,d_100 = NULL,e_100 = NULL;
                      t = split_dynamic_rules_0(t);
                      a_100 = t;
                      m_99 :
                      if(match_cons(a_100, sym_TCons_2))
                        {
                          b_100 = ATgetArgument(a_100, 0);
                          c_100 = ATgetArgument(a_100, 1);
                          n_99 :
                          if(match_cons(c_100, sym_TCons_2))
                            {
                              d_100 = ATgetArgument(c_100, 0);
                              e_100 = ATgetArgument(c_100, 1);
                              o_99 :
                              if(match_cons(e_100, sym_TNil_0))
                                {
                                  if(z_99 != NULL && z_99 != b_100)
                                    _fail(b_100);
                                  else
                                    z_99 = b_100;
                                  if(y_99 != NULL && y_99 != d_100)
                                    _fail(d_100);
                                  else
                                    y_99 = d_100;
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(z_99));
                                }
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
              t = env_oncetd_1(t, h_4);
              return(t);
            }
            t = j_100(t);
            f_100 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_100), not_null(y_99)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_99), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = conc_0(t);
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm e_61 (ATerm))
{
  ATerm m_100 (ATerm t)
  {
    t = e_61(t);
    {
      ATerm x_11 = t;
      if(PushChoice()==0)
        {
          t = Nil_0(t);
          PopChoice();
        }
      else
        {
          t = x_11;
          t = Cons_2(t, _id, m_100);
        }
    }
    return(t);
  }
  t = m_100(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    t = repeat_1(t, lift_dynamic_rule_0);
    return(t);
  }
  t = listtd_1(t, i_4);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm s_100 = NULL,t_100 = NULL,u_100 = NULL,v_100 = NULL,w_100 = NULL;
  s_100 = t;
  p_100 :
  if(match_cons(s_100, sym_DynRuleScope_2))
    {
      t_100 = ATgetArgument(s_100, 0);
      w_100 = ATgetArgument(s_100, 1);
      q_100 :
      if(match_cons(t_100, sym_Nil_0))
        t = not_null(w_100);
      else
        {
          if(match_cons(t_100, sym_Cons_2))
            {
              u_100 = ATgetArgument(t_100, 0);
              v_100 = ATgetArgument(t_100, 1);
              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(u_100))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_DynRuleScope_2, not_null(v_100), not_null(w_100)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  ATerm j_4 (ATerm t)
  {
    t = try_1(t, DefDynamicRuleScope_0);
    return(t);
  }
  t = topdown_1(t, j_4);
  return(t);
}
ATerm LiftDynamicRules_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    ATerm l_4 (ATerm t)
    {
      ATerm m_4 (ATerm t)
      {
        ATerm n_4 (ATerm t)
        {
          ATerm o_4 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, o_4);
          return(t);
        }
        t = Cons_2(t, n_4, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, m_4);
      return(t);
    }
    t = Cons_2(t, _id, l_4);
    return(t);
  }
  t = Specification_1(t, k_4);
  return(t);
}
ATerm DefScopeDefault_0 (ATerm t)
{
  ATerm h_101 = NULL,i_101 = NULL;
  h_101 = t;
  g_101 :
  if(match_cons(h_101, sym_ScopeDefault_1))
    {
      i_101 = ATgetArgument(h_101, 0);
      {
        ATerm k_101 = NULL;
        ATerm l_101 = NULL;
        t = not_null(i_101);
        t = tvars_0(t);
        l_101 = t;
        if(k_101 != NULL && k_101 != l_101)
          _fail(l_101);
        else
          k_101 = l_101;
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_101), not_null(i_101));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm r_41 (ATerm))
{
  ATerm s_101 = NULL,u_101 = NULL;
  s_101 = t;
  r_101 :
  if(match_cons(s_101, sym_DynamicRules_1))
    {
      u_101 = ATgetArgument(s_101, 0);
      {
        ATerm w_101 = NULL;
        t = not_null(u_101);
        t = r_41(t);
        w_101 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(w_101));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm g_44 (ATerm), ATerm h_44 (ATerm))
{
  ATerm e_102 = NULL,f_102 = NULL,g_102 = NULL;
  e_102 = t;
  d_102 :
  if(match_cons(e_102, sym_Scope_2))
    {
      f_102 = ATgetArgument(e_102, 0);
      g_102 = ATgetArgument(e_102, 1);
      {
        ATerm k_102 = NULL;
        t = not_null(f_102);
        {
          ATerm m_102 = NULL;
          t = g_44(t);
          k_102 = t;
          t = not_null(g_102);
          t = h_44(t);
          m_102 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_102), not_null(m_102));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm g_45 (ATerm), ATerm h_45 (ATerm), ATerm i_45 (ATerm))
{
  ATerm y_11 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, i_45, g_45);
      PopChoice();
    }
  else
    {
      t = y_11;
      t = DynamicRules_1(t, g_45);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm t_102 = NULL,u_102 = NULL;
  t_102 = t;
  s_102 :
  if(match_cons(t_102, sym_DynamicRules_1))
    {
      u_102 = ATgetArgument(t_102, 0);
      t = not_null(u_102);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL,g_103 = NULL,h_103 = NULL;
  d_103 = t;
  a_103 :
  if(match_cons(d_103, sym_Scope_2))
    {
      e_103 = ATgetArgument(d_103, 0);
      c_103 = ATgetArgument(d_103, 1);
      t = not_null(e_103);
    }
  else
    {
      if(match_cons(d_103, sym_LRule_1))
        {
          e_103 = ATgetArgument(d_103, 0);
          b_103 :
          if(match_cons(e_103, sym_Rule_3))
            {
              f_103 = ATgetArgument(e_103, 0);
              g_103 = ATgetArgument(e_103, 1);
              h_103 = ATgetArgument(e_103, 2);
              t = not_null(f_103);
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
  ATerm s_103 = NULL,t_103 = NULL;
  s_103 = t;
  r_103 :
  if(match_cons(s_103, sym_Var_1))
    {
      t_103 = ATgetArgument(s_103, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_103), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm a_104 = NULL,b_104 = NULL,c_104 = NULL,d_104 = NULL,e_104 = NULL;
  a_104 = t;
  x_103 :
  if(match_cons(a_104, sym_TCons_2))
    {
      b_104 = ATgetArgument(a_104, 0);
      c_104 = ATgetArgument(a_104, 1);
      y_103 :
      if(match_cons(c_104, sym_TCons_2))
        {
          d_104 = ATgetArgument(c_104, 0);
          e_104 = ATgetArgument(c_104, 1);
          z_103 :
          if(match_cons(e_104, sym_TNil_0))
            {
              t = not_null(b_104);
              {
                ATerm i_104 (ATerm t)
                {
                  ATerm z_11 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(d_104);
                      PopChoice();
                    }
                  else
                    {
                      t = z_11;
                      {
                        ATerm a_12 = t;
                        if(PushChoice()==0)
                          {
                            ATerm p_4 (ATerm t)
                            {
                              t = not_null(d_104);
                              return(t);
                            }
                            t = HdMember_1(t, p_4);
                            t = i_104(t);
                            PopChoice();
                          }
                        else
                          {
                            t = a_12;
                            t = Cons_2(t, _id, i_104);
                          }
                      }
                    }
                  return(t);
                }
                t = i_104(t);
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
ATerm foldr_3 (ATerm t, ATerm b_55 (ATerm), ATerm c_55 (ATerm), ATerm d_55 (ATerm))
{
  ATerm b_12 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = b_55(t);
      PopChoice();
    }
  else
    {
      t = b_12;
      {
        ATerm n_104 = NULL,o_104 = NULL,p_104 = NULL;
        n_104 = t;
        m_104 :
        if(match_cons(n_104, sym_Cons_2))
          {
            o_104 = ATgetArgument(n_104, 0);
            p_104 = ATgetArgument(n_104, 1);
            {
              ATerm s_104 = NULL,u_104 = NULL;
              ATerm c_12;
              c_12 = t;
              {
                ATerm t_104 = NULL;
                t = not_null(o_104);
                t = d_55(t);
                t_104 = t;
                if(s_104 != NULL && s_104 != t_104)
                  _fail(t_104);
                else
                  s_104 = t_104;
              }
              t = c_12;
              {
                ATerm v_104 = NULL;
                t = not_null(p_104);
                t = foldr_3(t, b_55, c_55, d_55);
                v_104 = t;
                if(u_104 != NULL && u_104 != v_104)
                  _fail(v_104);
                else
                  u_104 = v_104;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_104), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_104), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = c_55(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm r_56 (ATerm), ATerm s_56 (ATerm), ATerm t_56 (ATerm))
{
  ATerm f_105 = NULL;
  ATerm h_105 = NULL;
  f_105 = t;
  {
    ATerm i_105 = NULL;
    ATerm k_105 = NULL,l_105 = NULL,m_105 = NULL,n_105 = NULL,o_105 = NULL;
    t = not_null(f_105);
    i_105 = t;
    t = SSL_explode_term(not_null(i_105));
    k_105 = t;
    c_105 :
    if(match_cons(k_105, sym_TCons_2))
      {
        l_105 = ATgetArgument(k_105, 0);
        m_105 = ATgetArgument(k_105, 1);
        d_105 :
        if(match_cons(m_105, sym_TCons_2))
          {
            n_105 = ATgetArgument(m_105, 0);
            o_105 = ATgetArgument(m_105, 1);
            e_105 :
            if(match_cons(o_105, sym_TNil_0))
              {
                if(h_105 != NULL && h_105 != n_105)
                  _fail(n_105);
                else
                  h_105 = n_105;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(h_105);
    t = foldr_3(t, r_56, s_56, t_56);
  }
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm g_56 (ATerm))
{
  ATerm v_105 = NULL,w_105 = NULL,x_105 = NULL;
  v_105 = t;
  u_105 :
  if(match_cons(v_105, sym_Cons_2))
    {
      w_105 = ATgetArgument(v_105, 0);
      x_105 = ATgetArgument(v_105, 1);
      t = g_56(t);
      {
        ATerm q_4 (ATerm t)
        {
          ATerm a_106 = NULL;
          a_106 = t;
          if(w_105 != NULL && w_105 != a_106)
            _fail(a_106);
          else
            w_105 = a_106;
          return(t);
        }
        t = fetch_1(t, q_4);
        t = not_null(x_105);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm i_106 = NULL,j_106 = NULL,k_106 = NULL,l_106 = NULL,m_106 = NULL,n_106 = NULL,o_106 = NULL;
  i_106 = t;
  e_106 :
  if(match_cons(i_106, sym_TCons_2))
    {
      j_106 = ATgetArgument(i_106, 0);
      k_106 = ATgetArgument(i_106, 1);
      f_106 :
      if(match_cons(k_106, sym_TCons_2))
        {
          l_106 = ATgetArgument(k_106, 0);
          o_106 = ATgetArgument(k_106, 1);
          g_106 :
          if(match_cons(l_106, sym_Cons_2))
            {
              m_106 = ATgetArgument(l_106, 0);
              n_106 = ATgetArgument(l_106, 1);
              h_106 :
              if(match_cons(o_106, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_106), not_null(j_106)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_106), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm j_107 = NULL,k_107 = NULL,l_107 = NULL,m_107 = NULL,n_107 = NULL,o_107 = NULL,p_107 = NULL;
  j_107 = t;
  f_107 :
  if(match_cons(j_107, sym_Cons_2))
    {
      k_107 = ATgetArgument(j_107, 0);
      p_107 = ATgetArgument(j_107, 1);
      g_107 :
      if(match_cons(k_107, sym_TCons_2))
        {
          l_107 = ATgetArgument(k_107, 0);
          m_107 = ATgetArgument(k_107, 1);
          h_107 :
          if(match_cons(m_107, sym_TCons_2))
            {
              n_107 = ATgetArgument(m_107, 0);
              o_107 = ATgetArgument(m_107, 1);
              i_107 :
              if(match_cons(o_107, sym_TNil_0))
                {
                  ATerm t_107 = NULL,u_107 = NULL,c_108 = NULL,k_108 = NULL;
                  ATerm d_12;
                  d_12 = t;
                  {
                    ATerm v_107 = NULL;
                    ATerm x_107 = NULL,y_107 = NULL,z_107 = NULL,a_108 = NULL,b_108 = NULL;
                    t = not_null(n_107);
                    v_107 = t;
                    t = SSL_explode_term(not_null(v_107));
                    x_107 = t;
                    w_106 :
                    if(match_cons(x_107, sym_TCons_2))
                      {
                        y_107 = ATgetArgument(x_107, 0);
                        z_107 = ATgetArgument(x_107, 1);
                        x_106 :
                        if(match_cons(z_107, sym_TCons_2))
                          {
                            a_108 = ATgetArgument(z_107, 0);
                            b_108 = ATgetArgument(z_107, 1);
                            y_106 :
                            if(match_cons(b_108, sym_TNil_0))
                              {
                                if(t_107 != NULL && t_107 != y_107)
                                  _fail(y_107);
                                else
                                  t_107 = y_107;
                                if(u_107 != NULL && u_107 != a_108)
                                  _fail(a_108);
                                else
                                  u_107 = a_108;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = d_12;
                  {
                    ATerm e_12;
                    e_12 = t;
                    {
                      ATerm d_108 = NULL;
                      ATerm f_108 = NULL,g_108 = NULL,h_108 = NULL,i_108 = NULL,j_108 = NULL;
                      t = not_null(l_107);
                      d_108 = t;
                      t = SSL_explode_term(not_null(d_108));
                      f_108 = t;
                      b_107 :
                      if(match_cons(f_108, sym_TCons_2))
                        {
                          g_108 = ATgetArgument(f_108, 0);
                          h_108 = ATgetArgument(f_108, 1);
                          c_107 :
                          if(match_cons(h_108, sym_TCons_2))
                            {
                              i_108 = ATgetArgument(h_108, 0);
                              j_108 = ATgetArgument(h_108, 1);
                              d_107 :
                              if(match_cons(j_108, sym_TNil_0))
                                {
                                  if(t_107 != NULL && t_107 != g_108)
                                    _fail(g_108);
                                  else
                                    t_107 = g_108;
                                  if(c_108 != NULL && c_108 != i_108)
                                    _fail(i_108);
                                  else
                                    c_108 = i_108;
                                }
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
                      ATerm l_108 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_108), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_107), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      l_108 = t;
                      if(k_108 != NULL && k_108 != l_108)
                        _fail(l_108);
                      else
                        k_108 = l_108;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_108), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_107), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm x_108 = NULL,y_108 = NULL,z_108 = NULL,a_109 = NULL,b_109 = NULL,c_109 = NULL,d_109 = NULL;
  x_108 = t;
  t_108 :
  if(match_cons(x_108, sym_Cons_2))
    {
      y_108 = ATgetArgument(x_108, 0);
      d_109 = ATgetArgument(x_108, 1);
      u_108 :
      if(match_cons(y_108, sym_TCons_2))
        {
          z_108 = ATgetArgument(y_108, 0);
          a_109 = ATgetArgument(y_108, 1);
          v_108 :
          if(match_cons(a_109, sym_TCons_2))
            {
              b_109 = ATgetArgument(a_109, 0);
              c_109 = ATgetArgument(a_109, 1);
              w_108 :
              if(match_cons(c_109, sym_TNil_0))
                {
                  ATerm f_109 = NULL;
                  if(z_108 != NULL && z_108 != b_109)
                    _fail(b_109);
                  else
                    z_108 = b_109;
                  if(f_109 != NULL && f_109 != d_109)
                    _fail(d_109);
                  else
                    f_109 = d_109;
                  t = not_null(f_109);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm m_66 (ATerm), ATerm n_66 (ATerm))
{
  ATerm h_109 (ATerm t)
  {
    ATerm f_12 = t;
    if(PushChoice()==0)
      {
        t = m_66(t);
        PopChoice();
      }
    else
      {
        t = f_12;
        t = n_66(t);
        t = h_109(t);
      }
    return(t);
  }
  t = h_109(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm p_66 (ATerm), ATerm q_66 (ATerm), ATerm r_66 (ATerm))
{
  t = p_66(t);
  t = while_not_2(t, q_66, r_66);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm g_12 = t;
  if(PushChoice()==0)
    {
      ATerm r_4 (ATerm t)
      {
        ATerm n_109 = NULL;
        n_109 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_109), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        ATerm u_4 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, u_4);
        return(t);
      }
      ATerm t_4 (ATerm t)
      {
        ATerm h_12 = t;
        if(PushChoice()==0)
          {
            ATerm v_4 (ATerm t)
            {
              ATerm w_4 (ATerm t)
              {
                ATerm i_12 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = i_12;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, w_4, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, v_4);
            PopChoice();
          }
        else
          {
            t = h_12;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, r_4, s_4, t_4);
      PopChoice();
    }
  else
    {
      t = g_12;
      {
        ATerm p_109 = NULL,q_109 = NULL,r_109 = NULL,s_109 = NULL,t_109 = NULL;
        p_109 = t;
        k_109 :
        if(match_cons(p_109, sym_TCons_2))
          {
            q_109 = ATgetArgument(p_109, 0);
            r_109 = ATgetArgument(p_109, 1);
            l_109 :
            if(match_cons(r_109, sym_TCons_2))
              {
                s_109 = ATgetArgument(r_109, 0);
                t_109 = ATgetArgument(r_109, 1);
                m_109 :
                if(match_cons(t_109, sym_TNil_0))
                  {
                    t = not_null(q_109);
                    {
                      ATerm z_109 (ATerm t)
                      {
                        ATerm j_12 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = j_12;
                            {
                              ATerm k_12 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm y_4 (ATerm t)
                                  {
                                    t = not_null(s_109);
                                    return(t);
                                  }
                                  t = HdMember_1(t, y_4);
                                  t = z_109(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = k_12;
                                  t = Cons_2(t, _id, z_109);
                                }
                            }
                          }
                        return(t);
                      }
                      t = z_109(t);
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
ATerm free_vars_3 (ATerm t, ATerm m_46 (ATerm), ATerm n_46 (ATerm), ATerm o_46 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm d_110 (ATerm t)
  {
    ATerm l_12 = t;
    if(PushChoice()==0)
      {
        t = m_46(t);
        PopChoice();
      }
    else
      {
        t = l_12;
        {
          ATerm m_12 = t;
          if(PushChoice()==0)
            {
              ATerm b_110 = NULL;
              ATerm n_12;
              n_12 = t;
              {
                ATerm c_110 = NULL;
                t = n_46(t);
                c_110 = t;
                if(b_110 != NULL && b_110 != c_110)
                  _fail(c_110);
                else
                  b_110 = c_110;
              }
              t = n_12;
              {
                ATerm z_4 (ATerm t)
                {
                  ATerm b_5 (ATerm t)
                  {
                    t = not_null(b_110);
                    return(t);
                  }
                  t = split_2(t, d_110, b_5);
                  t = diff_0(t);
                  return(t);
                }
                ATerm a_5 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = o_46(t, z_4, d_110, a_5);
                {
                  ATerm c_5 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = crush_3(t, c_5, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = m_12;
              {
                ATerm d_5 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = crush_3(t, d_5, union_0, d_110);
              }
            }
        }
      }
    return(t);
  }
  t = d_110(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm o_12 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = o_12;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, e_5, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm j_110 = NULL,k_110 = NULL,l_110 = NULL,m_110 = NULL,n_110 = NULL;
  j_110 = t;
  h_110 :
  if(match_cons(j_110, sym_LRule_1))
    {
      k_110 = ATgetArgument(j_110, 0);
      i_110 :
      if(match_cons(k_110, sym_Rule_3))
        {
          l_110 = ATgetArgument(k_110, 0);
          m_110 = ATgetArgument(k_110, 1);
          n_110 = ATgetArgument(k_110, 2);
          {
            ATerm r_110 = NULL;
            ATerm s_110 = NULL;
            t = not_null(l_110);
            t = tvars_0(t);
            s_110 = t;
            if(r_110 != NULL && r_110 != s_110)
              _fail(s_110);
            else
              r_110 = s_110;
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(r_110), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(l_110), not_null(m_110), not_null(n_110))));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm t_62 (ATerm))
{
  ATerm v_110 (ATerm t)
  {
    t = _all(t, v_110);
    t = t_62(t);
    return(t);
  }
  t = v_110(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm g_5 (ATerm t)
    {
      ATerm p_12 = t;
      if(PushChoice()==0)
        {
          t = DefLRule_0(t);
          PopChoice();
        }
      else
        {
          t = p_12;
          t = DefScopeDefault_0(t);
        }
      return(t);
    }
    t = try_1(t, g_5);
    return(t);
  }
  t = bottomup_1(t, f_5);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm y_110 = NULL,z_110 = NULL;
  y_110 = t;
  x_110 :
  if(match_cons(y_110, sym_Var_1))
    {
      z_110 = ATgetArgument(y_110, 0);
      t = not_null(z_110);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm h_111 = NULL,i_111 = NULL,j_111 = NULL,k_111 = NULL,l_111 = NULL,n_111 = NULL,o_111 = NULL;
  h_111 = t;
  d_111 :
  if(match_cons(h_111, sym_TCons_2))
    {
      i_111 = ATgetArgument(h_111, 0);
      j_111 = ATgetArgument(h_111, 1);
      e_111 :
      if(match_cons(j_111, sym_TCons_2))
        {
          k_111 = ATgetArgument(j_111, 0);
          o_111 = ATgetArgument(j_111, 1);
          f_111 :
          if(match_cons(k_111, sym_Cons_2))
            {
              l_111 = ATgetArgument(k_111, 0);
              n_111 = ATgetArgument(k_111, 1);
              g_111 :
              if(match_cons(o_111, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_111), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_111), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm a_112 = NULL,b_112 = NULL,c_112 = NULL,d_112 = NULL,e_112 = NULL,f_112 = NULL,g_112 = NULL,h_112 = NULL,i_112 = NULL,j_112 = NULL,k_112 = NULL;
  a_112 = t;
  t_111 :
  if(match_cons(a_112, sym_TCons_2))
    {
      b_112 = ATgetArgument(a_112, 0);
      c_112 = ATgetArgument(a_112, 1);
      u_111 :
      if(match_cons(c_112, sym_TCons_2))
        {
          d_112 = ATgetArgument(c_112, 0);
          k_112 = ATgetArgument(c_112, 1);
          v_111 :
          if(match_cons(d_112, sym_Cons_2))
            {
              e_112 = ATgetArgument(d_112, 0);
              j_112 = ATgetArgument(d_112, 1);
              w_111 :
              if(match_cons(e_112, sym_TCons_2))
                {
                  f_112 = ATgetArgument(e_112, 0);
                  g_112 = ATgetArgument(e_112, 1);
                  x_111 :
                  if(match_cons(g_112, sym_TCons_2))
                    {
                      h_112 = ATgetArgument(g_112, 0);
                      i_112 = ATgetArgument(g_112, 1);
                      y_111 :
                      if(match_cons(i_112, sym_TNil_0))
                        {
                          z_111 :
                          if(match_cons(k_112, sym_TNil_0))
                            {
                              ATerm m_112 = NULL;
                              if(b_112 != NULL && b_112 != f_112)
                                _fail(f_112);
                              else
                                b_112 = f_112;
                              if(m_112 != NULL && m_112 != h_112)
                                _fail(h_112);
                              else
                                m_112 = h_112;
                              t = not_null(m_112);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm q_12 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = q_12;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm i_48 (ATerm), ATerm j_48 (ATerm))
{
  ATerm s_112 = NULL;
  ATerm u_112 = NULL;
  s_112 = t;
  {
    ATerm w_112 = NULL;
    t = i_48(t);
    u_112 = t;
    t = j_48(t);
    w_112 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_112), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_112), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm v_64 (ATerm))
{
  ATerm b_113 (ATerm t)
  {
    ATerm r_12 = t;
    if(PushChoice()==0)
      {
        t = v_64(t);
        PopChoice();
      }
    else
      {
        t = r_12;
        t = _all(t, b_113);
      }
    return(t);
  }
  t = b_113(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm g_113 = NULL,h_113 = NULL,i_113 = NULL,j_113 = NULL,k_113 = NULL;
  g_113 = t;
  d_113 :
  if(match_cons(g_113, sym_TCons_2))
    {
      h_113 = ATgetArgument(g_113, 0);
      i_113 = ATgetArgument(g_113, 1);
      e_113 :
      if(match_cons(i_113, sym_TCons_2))
        {
          j_113 = ATgetArgument(i_113, 0);
          k_113 = ATgetArgument(i_113, 1);
          f_113 :
          if(match_cons(k_113, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_113), not_null(j_113));
          else
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
  ATerm v_113 = NULL,w_113 = NULL,x_113 = NULL,y_113 = NULL,z_113 = NULL,a_114 = NULL,b_114 = NULL,c_114 = NULL,d_114 = NULL;
  v_113 = t;
  p_113 :
  if(match_cons(v_113, sym_TCons_2))
    {
      w_113 = ATgetArgument(v_113, 0);
      z_113 = ATgetArgument(v_113, 1);
      q_113 :
      if(match_cons(w_113, sym_Cons_2))
        {
          x_113 = ATgetArgument(w_113, 0);
          y_113 = ATgetArgument(w_113, 1);
          r_113 :
          if(match_cons(z_113, sym_TCons_2))
            {
              a_114 = ATgetArgument(z_113, 0);
              d_114 = ATgetArgument(z_113, 1);
              s_113 :
              if(match_cons(a_114, sym_Cons_2))
                {
                  b_114 = ATgetArgument(a_114, 0);
                  c_114 = ATgetArgument(a_114, 1);
                  u_113 :
                  if(match_cons(d_114, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(x_113), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_114), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(y_113), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_114), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm p_114 = NULL,q_114 = NULL,r_114 = NULL,s_114 = NULL,u_114 = NULL;
  p_114 = t;
  k_114 :
  if(match_cons(p_114, sym_TCons_2))
    {
      q_114 = ATgetArgument(p_114, 0);
      r_114 = ATgetArgument(p_114, 1);
      l_114 :
      if(match_cons(q_114, sym_Nil_0))
        {
          m_114 :
          if(match_cons(r_114, sym_TCons_2))
            {
              s_114 = ATgetArgument(r_114, 0);
              u_114 = ATgetArgument(r_114, 1);
              n_114 :
              if(match_cons(s_114, sym_Nil_0))
                {
                  o_114 :
                  if(match_cons(u_114, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm m_58 (ATerm), ATerm n_58 (ATerm), ATerm o_58 (ATerm), ATerm p_58 (ATerm))
{
  ATerm w_114 (ATerm t)
  {
    ATerm s_12 = t;
    if(PushChoice()==0)
      {
        t = m_58(t);
        PopChoice();
      }
    else
      {
        t = s_12;
        t = n_58(t);
        {
          ATerm h_5 (ATerm t)
          {
            t = TCons_2(t, w_114, TNil_0);
            return(t);
          }
          t = TCons_2(t, p_58, h_5);
          t = o_58(t);
        }
      }
    return(t);
  }
  t = w_114(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm r_58 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, r_58);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm e_115 = NULL,f_115 = NULL,g_115 = NULL,i_115 = NULL,j_115 = NULL,k_115 = NULL,l_115 = NULL;
  e_115 = t;
  a_115 :
  if(match_cons(e_115, sym_TCons_2))
    {
      f_115 = ATgetArgument(e_115, 0);
      g_115 = ATgetArgument(e_115, 1);
      b_115 :
      if(match_cons(g_115, sym_TCons_2))
        {
          i_115 = ATgetArgument(g_115, 0);
          j_115 = ATgetArgument(g_115, 1);
          c_115 :
          if(match_cons(j_115, sym_TNil_0))
            {
              ATerm n_115 = NULL;
              if(n_115 != NULL && n_115 != i_115)
                _fail(i_115);
              else
                n_115 = i_115;
            }
          else
            {
              if(match_cons(j_115, sym_TCons_2))
                {
                  k_115 = ATgetArgument(j_115, 0);
                  l_115 = ATgetArgument(j_115, 1);
                  d_115 :
                  if(match_cons(l_115, sym_TNil_0))
                    {
                      ATerm t_115 = NULL;
                      ATerm u_115 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_115), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_115), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      u_115 = t;
                      if(t_115 != NULL && t_115 != u_115)
                        _fail(u_115);
                      else
                        t_115 = u_115;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_115), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_115), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm k_48 (ATerm), ATerm l_48 (ATerm))
{
  ATerm c_116 = NULL,d_116 = NULL,e_116 = NULL,f_116 = NULL,g_116 = NULL;
  t = subs_args_0(t);
  c_116 = t;
  z_115 :
  if(match_cons(c_116, sym_TCons_2))
    {
      d_116 = ATgetArgument(c_116, 0);
      e_116 = ATgetArgument(c_116, 1);
      a_116 :
      if(match_cons(e_116, sym_TCons_2))
        {
          f_116 = ATgetArgument(e_116, 0);
          g_116 = ATgetArgument(e_116, 1);
          b_116 :
          if(match_cons(g_116, sym_TNil_0))
            {
              t = not_null(f_116);
              {
                ATerm i_5 (ATerm t)
                {
                  ATerm j_5 (ATerm t)
                  {
                    t = not_null(d_116);
                    return(t);
                  }
                  t = SubsVar_2(t, k_48, j_5);
                  t = l_48(t);
                  return(t);
                }
                t = alltd_1(t, i_5);
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
ATerm substitute_1 (ATerm t, ATerm m_48 (ATerm))
{
  t = substitute_2(t, m_48, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm OLName_0 (ATerm t)
{
  ATerm n_116 = NULL,o_116 = NULL,p_116 = NULL,q_116 = NULL;
  n_116 = t;
  l_116 :
  if(match_cons(n_116, sym_Overlay_3))
    {
      o_116 = ATgetArgument(n_116, 0);
      p_116 = ATgetArgument(n_116, 1);
      q_116 = ATgetArgument(n_116, 2);
      m_116 :
      if(match_cons(p_116, sym_Nil_0))
        t = not_null(o_116);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm OpName_0 (ATerm t)
{
  ATerm z_116 = NULL,a_117 = NULL,b_117 = NULL,c_117 = NULL;
  z_116 = t;
  v_116 :
  if(match_cons(z_116, sym_OpDecl_2))
    {
      a_117 = ATgetArgument(z_116, 0);
      b_117 = ATgetArgument(z_116, 1);
      w_116 :
      if(match_cons(b_117, sym_ConstType_1))
        {
          c_117 = ATgetArgument(b_117, 0);
          t = not_null(a_117);
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
  ATerm i_117 = NULL,j_117 = NULL;
  i_117 = t;
  h_117 :
  if(match_cons(i_117, sym_Constructors_1))
    {
      j_117 = ATgetArgument(i_117, 0);
      t = not_null(j_117);
      t = filter_1(t, OpName_0);
    }
  else
    _fail(t);
  return(t);
}
ATerm Names_0 (ATerm t)
{
  ATerm p_117 = NULL,q_117 = NULL;
  p_117 = t;
  o_117 :
  if(match_cons(p_117, sym_Signature_1))
    {
      q_117 = ATgetArgument(p_117, 0);
      t = not_null(q_117);
      t = filter_1(t, OpNames_0);
      t = concat_0(t);
    }
  else
    {
      if(match_cons(p_117, sym_Overlays_1))
        {
          q_117 = ATgetArgument(p_117, 0);
          t = not_null(q_117);
          t = filter_1(t, OLName_0);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm h_54 (ATerm))
{
  ATerm t_12 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = t_12;
      {
        ATerm u_12 = t;
        if(PushChoice()==0)
          {
            ATerm k_5 (ATerm t)
            {
              t = filter_1(t, h_54);
              return(t);
            }
            t = Cons_2(t, h_54, k_5);
            PopChoice();
          }
        else
          {
            t = u_12;
            {
              ATerm x_117 = NULL,y_117 = NULL,z_117 = NULL;
              x_117 = t;
              w_117 :
              if(match_cons(x_117, sym_Cons_2))
                {
                  y_117 = ATgetArgument(x_117, 0);
                  z_117 = ATgetArgument(x_117, 1);
                  t = not_null(z_117);
                  t = filter_1(t, h_54);
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
  ATerm l_5 (ATerm t)
  {
    t = const_names_0(t);
    {
      ATerm m_5 (ATerm t)
      {
        ATerm n_5 (ATerm t)
        {
          ATerm d_118 = NULL;
          d_118 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(d_118), (ATerm) ATmakeAppl(sym_Nil_0));
          return(t);
        }
        t = split_2(t, _id, n_5);
        return(t);
      }
      t = map_1(t, m_5);
    }
    return(t);
  }
  t = split_2(t, l_5, _id);
  t = tsubs_0(t);
  return(t);
}
ATerm MkSpec_0 (ATerm t)
{
  ATerm n_118 = NULL,o_118 = NULL,p_118 = NULL,r_118 = NULL,s_118 = NULL,t_118 = NULL,u_118 = NULL;
  n_118 = t;
  h_118 :
  if(match_cons(n_118, sym_TCons_2))
    {
      o_118 = ATgetArgument(n_118, 0);
      p_118 = ATgetArgument(n_118, 1);
      k_118 :
      if(match_cons(p_118, sym_TCons_2))
        {
          r_118 = ATgetArgument(p_118, 0);
          s_118 = ATgetArgument(p_118, 1);
          l_118 :
          if(match_cons(s_118, sym_TCons_2))
            {
              t_118 = ATgetArgument(s_118, 0);
              u_118 = ATgetArgument(s_118, 1);
              m_118 :
              if(match_cons(u_118, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Constructors_1, not_null(o_118)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Overlays_1, not_null(r_118)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(t_118)), (ATerm) ATmakeAppl(sym_Nil_0)))));
              else
                _fail(t);
            }
          else
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
  ATerm d_119 = NULL,e_119 = NULL,f_119 = NULL,g_119 = NULL,h_119 = NULL;
  d_119 = t;
  a_119 :
  if(match_cons(d_119, sym_TCons_2))
    {
      e_119 = ATgetArgument(d_119, 0);
      f_119 = ATgetArgument(d_119, 1);
      b_119 :
      if(match_cons(f_119, sym_TCons_2))
        {
          g_119 = ATgetArgument(f_119, 0);
          h_119 = ATgetArgument(f_119, 1);
          c_119 :
          if(match_cons(h_119, sym_TNil_0))
            {
              t = not_null(e_119);
              {
                ATerm o_5 (ATerm t)
                {
                  t = not_null(g_119);
                  return(t);
                }
                t = at_end_1(t, o_5);
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
  ATerm a_120 = NULL,b_120 = NULL,c_120 = NULL,d_120 = NULL,e_120 = NULL,f_120 = NULL,g_120 = NULL,h_120 = NULL,i_120 = NULL,j_120 = NULL,k_120 = NULL,l_120 = NULL,m_120 = NULL,n_120 = NULL,o_120 = NULL,p_120 = NULL,q_120 = NULL;
  a_120 = t;
  p_119 :
  if(match_cons(a_120, sym_TCons_2))
    {
      b_120 = ATgetArgument(a_120, 0);
      i_120 = ATgetArgument(a_120, 1);
      q_119 :
      if(match_cons(b_120, sym_TCons_2))
        {
          c_120 = ATgetArgument(b_120, 0);
          d_120 = ATgetArgument(b_120, 1);
          r_119 :
          if(match_cons(d_120, sym_TCons_2))
            {
              e_120 = ATgetArgument(d_120, 0);
              f_120 = ATgetArgument(d_120, 1);
              s_119 :
              if(match_cons(f_120, sym_TCons_2))
                {
                  g_120 = ATgetArgument(f_120, 0);
                  h_120 = ATgetArgument(f_120, 1);
                  t_119 :
                  if(match_cons(h_120, sym_TNil_0))
                    {
                      u_119 :
                      if(match_cons(i_120, sym_TCons_2))
                        {
                          j_120 = ATgetArgument(i_120, 0);
                          q_120 = ATgetArgument(i_120, 1);
                          v_119 :
                          if(match_cons(j_120, sym_TCons_2))
                            {
                              k_120 = ATgetArgument(j_120, 0);
                              l_120 = ATgetArgument(j_120, 1);
                              w_119 :
                              if(match_cons(l_120, sym_TCons_2))
                                {
                                  m_120 = ATgetArgument(l_120, 0);
                                  n_120 = ATgetArgument(l_120, 1);
                                  x_119 :
                                  if(match_cons(n_120, sym_TCons_2))
                                    {
                                      o_120 = ATgetArgument(n_120, 0);
                                      p_120 = ATgetArgument(n_120, 1);
                                      y_119 :
                                      if(match_cons(p_120, sym_TNil_0))
                                        {
                                          z_119 :
                                          if(match_cons(q_120, sym_TNil_0))
                                            {
                                              ATerm x_120 = NULL,z_120 = NULL,b_121 = NULL;
                                              ATerm v_12;
                                              v_12 = t;
                                              {
                                                ATerm y_120 = NULL;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_120), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_120), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                t = conc_0(t);
                                                y_120 = t;
                                                if(x_120 != NULL && x_120 != y_120)
                                                  _fail(y_120);
                                                else
                                                  x_120 = y_120;
                                              }
                                              t = v_12;
                                              {
                                                ATerm x_12;
                                                x_12 = t;
                                                {
                                                  ATerm a_121 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_120), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_120), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  a_121 = t;
                                                  if(z_120 != NULL && z_120 != a_121)
                                                    _fail(a_121);
                                                  else
                                                    z_120 = a_121;
                                                }
                                                t = x_12;
                                                {
                                                  ATerm c_121 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_120), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_120), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  c_121 = t;
                                                  if(b_121 != NULL && b_121 != c_121)
                                                    _fail(c_121);
                                                  else
                                                    b_121 = c_121;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_120), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_120), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_121), (ATerm) ATmakeAppl(sym_TNil_0))));
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
ATerm foldr_2 (ATerm t, ATerm z_54 (ATerm), ATerm a_55 (ATerm))
{
  ATerm y_12 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = z_54(t);
      PopChoice();
    }
  else
    {
      t = y_12;
      {
        ATerm k_121 = NULL,l_121 = NULL,m_121 = NULL;
        k_121 = t;
        j_121 :
        if(match_cons(k_121, sym_Cons_2))
          {
            l_121 = ATgetArgument(k_121, 0);
            m_121 = ATgetArgument(k_121, 1);
            {
              ATerm p_121 = NULL;
              ATerm q_121 = NULL;
              t = not_null(m_121);
              t = foldr_2(t, z_54, a_55);
              q_121 = t;
              if(p_121 != NULL && p_121 != q_121)
                _fail(q_121);
              else
                p_121 = q_121;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_121), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_121), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = a_55(t);
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
  ATerm w_121 = NULL,x_121 = NULL;
  w_121 = t;
  v_121 :
  if(match_cons(w_121, sym_Constructors_1))
    {
      x_121 = ATgetArgument(w_121, 0);
      t = not_null(x_121);
    }
  else
    {
      if(match_cons(w_121, sym_Sorts_1))
        {
          x_121 = ATgetArgument(w_121, 0);
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
  ATerm i_122 = NULL,j_122 = NULL;
  i_122 = t;
  h_122 :
  if(match_cons(i_122, sym_Signature_1))
    {
      j_122 = ATgetArgument(i_122, 0);
      {
        ATerm l_122 = NULL;
        ATerm m_122 = NULL;
        t = not_null(j_122);
        t = normalize_sigs_0(t);
        m_122 = t;
        if(l_122 != NULL && l_122 != m_122)
          _fail(m_122);
        else
          l_122 = m_122;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_122), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
      }
    }
  else
    {
      if(match_cons(i_122, sym_Strategies_1))
        {
          j_122 = ATgetArgument(i_122, 0);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_122), (ATerm) ATmakeAppl(sym_TNil_0))));
        }
      else
        {
          if(match_cons(i_122, sym_Rules_1))
            {
              j_122 = ATgetArgument(i_122, 0);
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_122), (ATerm) ATmakeAppl(sym_TNil_0))));
            }
          else
            {
              if(match_cons(i_122, sym_Overlays_1))
                {
                  j_122 = ATgetArgument(i_122, 0);
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_122), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm b_123 = NULL,c_123 = NULL;
  b_123 = t;
  a_123 :
  if(match_cons(b_123, sym_Specification_1))
    {
      c_123 = ATgetArgument(b_123, 0);
      t = not_null(c_123);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm r_62 (ATerm))
{
  ATerm f_123 (ATerm t)
  {
    t = r_62(t);
    t = _all(t, f_123);
    return(t);
  }
  t = f_123(t);
  return(t);
}
ATerm DefineSugar_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm q_5 (ATerm t)
    {
      ATerm i_123 = NULL,j_123 = NULL;
      i_123 = t;
      h_123 :
      if(match_cons(i_123, sym_DefaultVarDec_1))
        {
          j_123 = ATgetArgument(i_123, 0);
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(j_123), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        _fail(t);
      return(t);
    }
    t = try_1(t, q_5);
    return(t);
  }
  t = topdown_1(t, p_5);
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
    ATerm z_12;
    z_12 = t;
    t = spec_use_def_0(t);
    t = z_12;
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
          t = Cons_2(t, u_5, Nil_0);
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
  ATerm n_123 = NULL;
  n_123 = t;
  m_123 :
  if(!(match_cons(n_123, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm l_44 (ATerm), ATerm m_44 (ATerm))
{
  ATerm s_123 = NULL,t_123 = NULL,u_123 = NULL;
  s_123 = t;
  r_123 :
  if(match_cons(s_123, sym_TCons_2))
    {
      t_123 = ATgetArgument(s_123, 0);
      u_123 = ATgetArgument(s_123, 1);
      {
        ATerm y_123 = NULL;
        t = not_null(t_123);
        {
          ATerm a_124 = NULL;
          t = l_44(t);
          y_123 = t;
          t = not_null(u_123);
          t = m_44(t);
          a_124 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_123), not_null(a_124));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm h_124 = NULL;
  ATerm a_13;
  a_13 = t;
  {
    ATerm v_5 (ATerm t)
    {
      ATerm i_124 = NULL,j_124 = NULL;
      i_124 = t;
      g_124 :
      if(match_cons(i_124, sym_Program_1))
        {
          j_124 = ATgetArgument(i_124, 0);
          if(h_124 != NULL && h_124 != j_124)
            _fail(j_124);
          else
            h_124 = j_124;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, v_5);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_124), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = a_13;
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
  ATerm q_124 = NULL,r_124 = NULL;
  ATerm w_5 (ATerm t)
  {
    ATerm x_5 (ATerm t)
    {
      ATerm b_13 = t;
      if(PushChoice()==0)
        {
          ATerm z_5 (ATerm t)
          {
            ATerm s_124 = NULL;
            s_124 = t;
            l_124 :
            if(!(match_cons(s_124, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, z_5);
          PopChoice();
          _fail(t);
        }
      else
        t = b_13;
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
          ATerm t_124 = NULL,u_124 = NULL;
          t_124 = t;
          n_124 :
          if(match_cons(t_124, sym_Runtime_1))
            {
              u_124 = ATgetArgument(t_124, 0);
              if(r_124 != NULL && r_124 != u_124)
                _fail(u_124);
              else
                r_124 = u_124;
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
      {
        ATerm d_6 (ATerm t)
        {
          ATerm f_6 (ATerm t)
          {
            ATerm v_124 = NULL,w_124 = NULL;
            v_124 = t;
            p_124 :
            if(match_cons(v_124, sym_Program_1))
              {
                w_124 = ATgetArgument(v_124, 0);
                if(q_124 != NULL && q_124 != w_124)
                  _fail(w_124);
                else
                  q_124 = w_124;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, f_6);
          return(t);
        }
        ATerm e_6 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, d_6, e_6);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_124), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_124), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, w_5);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm d_125 = NULL,e_125 = NULL,f_125 = NULL,g_125 = NULL,h_125 = NULL;
  d_125 = t;
  a_125 :
  if(match_cons(d_125, sym_TCons_2))
    {
      e_125 = ATgetArgument(d_125, 0);
      f_125 = ATgetArgument(d_125, 1);
      b_125 :
      if(match_cons(f_125, sym_TCons_2))
        {
          g_125 = ATgetArgument(f_125, 0);
          h_125 = ATgetArgument(f_125, 1);
          c_125 :
          if(match_cons(h_125, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(e_125), not_null(g_125));
          else
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
  ATerm p_125 = NULL,q_125 = NULL,r_125 = NULL,s_125 = NULL,t_125 = NULL;
  p_125 = t;
  m_125 :
  if(match_cons(p_125, sym_TCons_2))
    {
      q_125 = ATgetArgument(p_125, 0);
      r_125 = ATgetArgument(p_125, 1);
      n_125 :
      if(match_cons(r_125, sym_TCons_2))
        {
          s_125 = ATgetArgument(r_125, 0);
          t_125 = ATgetArgument(r_125, 1);
          o_125 :
          if(match_cons(t_125, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(q_125), not_null(s_125));
          else
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
  ATerm b_126 = NULL;
  ATerm c_13;
  c_13 = t;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm d_13 = t;
      if(PushChoice()==0)
        {
          ATerm i_6 (ATerm t)
          {
            ATerm c_126 = NULL,d_126 = NULL;
            c_126 = t;
            y_125 :
            if(match_cons(c_126, sym_Output_1))
              {
                d_126 = ATgetArgument(c_126, 0);
                if(b_126 != NULL && b_126 != d_126)
                  _fail(d_126);
                else
                  b_126 = d_126;
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
          t = d_13;
          {
            ATerm e_126 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            e_126 = t;
            if(b_126 != NULL && b_126 != e_126)
              _fail(e_126);
            else
              b_126 = e_126;
          }
        }
      return(t);
    }
    ATerm h_6 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, g_6, h_6);
  }
  t = c_13;
  {
    ATerm j_6 (ATerm t)
    {
      ATerm k_6 (ATerm t)
      {
        ATerm l_6 (ATerm t)
        {
          t = not_null(b_126);
          return(t);
        }
        t = split_2(t, l_6, _id);
        return(t);
      }
      t = TCons_2(t, k_6, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, j_6);
    {
      ATerm e_13 = t;
      if(PushChoice()==0)
        {
          ATerm m_6 (ATerm t)
          {
            ATerm o_6 (ATerm t)
            {
              ATerm f_126 = NULL;
              f_126 = t;
              a_126 :
              if(!(match_cons(f_126, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, o_6);
            return(t);
          }
          ATerm n_6 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, m_6, n_6);
          PopChoice();
        }
      else
        {
          t = e_13;
          {
            ATerm p_6 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, p_6);
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
ATerm apply_strategy_1 (ATerm t, ATerm l_51 (ATerm))
{
  ATerm n_126 = NULL,p_126 = NULL,q_126 = NULL,r_126 = NULL,s_126 = NULL,t_126 = NULL;
  ATerm f_13;
  f_13 = t;
  t = dtime_0(t);
  t = f_13;
  t = l_51(t);
  {
    ATerm g_13;
    g_13 = t;
    {
      ATerm o_126 = NULL;
      t = dtime_0(t);
      o_126 = t;
      if(n_126 != NULL && n_126 != o_126)
        _fail(o_126);
      else
        n_126 = o_126;
    }
    t = g_13;
    p_126 = t;
    k_126 :
    if(match_cons(p_126, sym_TCons_2))
      {
        q_126 = ATgetArgument(p_126, 0);
        r_126 = ATgetArgument(p_126, 1);
        l_126 :
        if(match_cons(r_126, sym_TCons_2))
          {
            s_126 = ATgetArgument(r_126, 0);
            t_126 = ATgetArgument(r_126, 1);
            m_126 :
            if(match_cons(t_126, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(n_126)), not_null(q_126)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_126), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm z_126 = NULL;
  z_126 = t;
  t = SSL_ReadFromFile(not_null(z_126));
  return(t);
}
ATerm split_2 (ATerm t, ATerm p_53 (ATerm), ATerm q_53 (ATerm))
{
  ATerm f_127 = NULL;
  ATerm h_127 = NULL,j_127 = NULL;
  f_127 = t;
  {
    ATerm h_13;
    h_13 = t;
    {
      ATerm i_127 = NULL;
      t = not_null(f_127);
      t = p_53(t);
      i_127 = t;
      if(h_127 != NULL && h_127 != i_127)
        _fail(i_127);
      else
        h_127 = i_127;
    }
    t = h_13;
    {
      ATerm k_127 = NULL;
      t = not_null(f_127);
      t = q_53(t);
      k_127 = t;
      if(j_127 != NULL && j_127 != k_127)
        _fail(k_127);
      else
        j_127 = k_127;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_127), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_127), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm r_127 = NULL;
  ATerm i_13;
  i_13 = t;
  {
    ATerm j_13 = t;
    if(PushChoice()==0)
      {
        ATerm q_6 (ATerm t)
        {
          ATerm s_127 = NULL,t_127 = NULL;
          s_127 = t;
          p_127 :
          if(match_cons(s_127, sym_Input_1))
            {
              t_127 = ATgetArgument(s_127, 0);
              if(r_127 != NULL && r_127 != t_127)
                _fail(t_127);
              else
                r_127 = t_127;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, q_6);
        PopChoice();
      }
    else
      {
        t = j_13;
        {
          ATerm u_127 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          u_127 = t;
          if(r_127 != NULL && r_127 != u_127)
            _fail(u_127);
          else
            r_127 = u_127;
        }
      }
  }
  t = i_13;
  {
    ATerm r_6 (ATerm t)
    {
      t = not_null(r_127);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, r_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm y_127 = NULL;
  y_127 = t;
  x_127 :
  if(!(match_cons(y_127, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_51 (ATerm))
{
  ATerm s_6 (ATerm t)
  {
    ATerm k_13 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = k_13;
        {
          ATerm l_13 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = l_13;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, s_6);
  t = k_51(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_128 = NULL;
  a_128 = t;
  t = SSL_table_create(not_null(a_128));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm e_128 = NULL;
  e_128 = t;
  {
    ATerm m_13;
    m_13 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_128), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = m_13;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm m_128 = NULL,n_128 = NULL,o_128 = NULL,p_128 = NULL,q_128 = NULL;
  q_128 = t;
  k_128 :
  if(match_cons(q_128, sym_Cons_2))
    {
      m_128 = ATgetArgument(q_128, 0);
      n_128 = ATgetArgument(q_128, 1);
      l_128 :
      if(match_cons(n_128, sym_Cons_2))
        {
          o_128 = ATgetArgument(n_128, 0);
          p_128 = ATgetArgument(n_128, 1);
          {
            ATerm u_128 = NULL;
            t = not_null(m_128);
            t = d_0(t);
            {
              ATerm v_128 = NULL;
              t = not_null(o_128);
              t = e_0(t);
              v_128 = t;
              if(u_128 != NULL && u_128 != v_128)
                _fail(v_128);
              else
                u_128 = v_128;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_128), not_null(p_128));
            }
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(q_128, "register-usage-info"))
        t = register_usage_1(t, f_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm n_13 = t;
  if(PushChoice()==0)
    {
      ATerm t_6 (ATerm t)
      {
        ATerm k_129 = NULL;
        k_129 = t;
        z_128 :
        if(!(match_string(k_129, "-S")))
          {
            if(!(match_string(k_129, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm u_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm v_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, t_6, u_6, v_6);
      PopChoice();
    }
  else
    {
      t = n_13;
      {
        ATerm o_13 = t;
        if(PushChoice()==0)
          {
            ATerm w_6 (ATerm t)
            {
              ATerm l_129 = NULL;
              l_129 = t;
              a_129 :
              if(!(match_string(l_129, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm x_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm y_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, w_6, x_6, y_6);
            PopChoice();
          }
        else
          {
            t = o_13;
            {
              ATerm p_13 = t;
              if(PushChoice()==0)
                {
                  ATerm z_6 (ATerm t)
                  {
                    ATerm m_129 = NULL;
                    m_129 = t;
                    b_129 :
                    if(!(match_string(m_129, "-v")))
                      {
                        if(!(match_string(m_129, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm a_7 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm b_7 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, z_6, a_7, b_7);
                  PopChoice();
                }
              else
                {
                  t = p_13;
                  {
                    ATerm q_13 = t;
                    if(PushChoice()==0)
                      {
                        ATerm c_7 (ATerm t)
                        {
                          ATerm n_129 = NULL;
                          n_129 = t;
                          c_129 :
                          if(!(match_string(n_129, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm d_7 (ATerm t)
                        {
                          ATerm o_129 = NULL;
                          o_129 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(o_129));
                          return(t);
                        }
                        ATerm e_7 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, c_7, d_7, e_7);
                        PopChoice();
                      }
                    else
                      {
                        t = q_13;
                        {
                          ATerm r_13 = t;
                          if(PushChoice()==0)
                            {
                              ATerm f_7 (ATerm t)
                              {
                                ATerm q_129 = NULL;
                                q_129 = t;
                                e_129 :
                                if(!(match_string(q_129, "-i")))
                                  {
                                    if(!(match_string(q_129, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm g_7 (ATerm t)
                              {
                                ATerm r_129 = NULL;
                                r_129 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_129));
                                return(t);
                              }
                              ATerm h_7 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, f_7, g_7, h_7);
                              PopChoice();
                            }
                          else
                            {
                              t = r_13;
                              {
                                ATerm s_13 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm i_7 (ATerm t)
                                    {
                                      ATerm t_129 = NULL;
                                      t_129 = t;
                                      g_129 :
                                      if(!(match_string(t_129, "-o")))
                                        {
                                          if(!(match_string(t_129, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm j_7 (ATerm t)
                                    {
                                      ATerm u_129 = NULL;
                                      u_129 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_129));
                                      return(t);
                                    }
                                    ATerm k_7 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, i_7, j_7, k_7);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = s_13;
                                    {
                                      ATerm t_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm l_7 (ATerm t)
                                          {
                                            ATerm w_129 = NULL;
                                            w_129 = t;
                                            i_129 :
                                            if(!(match_string(w_129, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm m_7 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm n_7 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, l_7, m_7, n_7);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = t_13;
                                          {
                                            ATerm o_7 (ATerm t)
                                            {
                                              ATerm x_129 = NULL;
                                              x_129 = t;
                                              j_129 :
                                              if(!(match_string(x_129, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm p_7 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm q_7 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, o_7, p_7, q_7);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm c_130 = NULL;
  c_130 = t;
  t = SSL_table_destroy(not_null(c_130));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm g_130 = NULL;
  g_130 = t;
  t = SSL_exit(not_null(g_130));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm k_130 = NULL;
  k_130 = t;
  t = SSL_implode_string(not_null(k_130));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_60 (ATerm))
{
  ATerm n_130 (ATerm t)
  {
    ATerm u_13 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, n_130);
        PopChoice();
      }
    else
      {
        t = u_13;
        t = Nil_0(t);
        t = q_60(t);
      }
    return(t);
  }
  t = n_130(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm v_13 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = v_13;
      {
        ATerm q_130 = NULL,r_130 = NULL,s_130 = NULL;
        q_130 = t;
        p_130 :
        if(match_cons(q_130, sym_Cons_2))
          {
            r_130 = ATgetArgument(q_130, 0);
            s_130 = ATgetArgument(q_130, 1);
            t = not_null(r_130);
            {
              ATerm r_7 (ATerm t)
              {
                t = not_null(s_130);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, r_7);
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
  ATerm y_130 = NULL;
  y_130 = t;
  t = SSL_explode_string(not_null(y_130));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm r_49 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_60 (ATerm))
{
  ATerm b_131 (ATerm t)
  {
    ATerm w_13 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = w_13;
        t = Cons_2(t, c_60, b_131);
      }
    return(t);
  }
  t = b_131(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm h_131 = NULL,i_131 = NULL,j_131 = NULL,k_131 = NULL,l_131 = NULL;
  h_131 = t;
  d_131 :
  if(match_cons(h_131, sym_TCons_2))
    {
      i_131 = ATgetArgument(h_131, 0);
      j_131 = ATgetArgument(h_131, 1);
      e_131 :
      if(match_cons(i_131, sym_Nil_0))
        {
          f_131 :
          if(match_cons(j_131, sym_TCons_2))
            {
              k_131 = ATgetArgument(j_131, 0);
              l_131 = ATgetArgument(j_131, 1);
              g_131 :
              if(match_cons(l_131, sym_TNil_0))
                t = not_null(k_131);
              else
                _fail(t);
            }
          else
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
  ATerm t_131 = NULL,u_131 = NULL,v_131 = NULL,w_131 = NULL,x_131 = NULL,y_131 = NULL,z_131 = NULL;
  t_131 = t;
  p_131 :
  if(match_cons(t_131, sym_TCons_2))
    {
      u_131 = ATgetArgument(t_131, 0);
      x_131 = ATgetArgument(t_131, 1);
      q_131 :
      if(match_cons(u_131, sym_Cons_2))
        {
          v_131 = ATgetArgument(u_131, 0);
          w_131 = ATgetArgument(u_131, 1);
          r_131 :
          if(match_cons(x_131, sym_TCons_2))
            {
              y_131 = ATgetArgument(x_131, 0);
              z_131 = ATgetArgument(x_131, 1);
              s_131 :
              if(match_cons(z_131, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_131), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_131), not_null(y_131)), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm v_65 (ATerm), ATerm w_65 (ATerm))
{
  ATerm f_132 (ATerm t)
  {
    ATerm x_13 = t;
    if(PushChoice()==0)
      {
        t = v_65(t);
        t = f_132(t);
        PopChoice();
      }
    else
      {
        t = x_13;
        t = w_65(t);
      }
    return(t);
  }
  t = f_132(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm y_65 (ATerm))
{
  t = repeat_2(t, y_65, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm h_132 = NULL;
  h_132 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_132), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm q_49 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_39 (ATerm))
{
  ATerm n_132 = NULL,p_132 = NULL;
  n_132 = t;
  m_132 :
  if(match_cons(n_132, sym_Program_1))
    {
      p_132 = ATgetArgument(n_132, 0);
      {
        ATerm r_132 = NULL;
        t = not_null(p_132);
        t = s_39(t);
        r_132 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_132));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm z_132 = NULL;
  ATerm s_7 (ATerm t)
  {
    ATerm t_7 (ATerm t)
    {
      ATerm a_133 = NULL;
      a_133 = t;
      if(z_132 != NULL && z_132 != a_133)
        _fail(a_133);
      else
        z_132 = a_133;
      return(t);
    }
    t = Program_1(t, t_7);
    return(t);
  }
  t = option_defined_1(t, s_7);
  {
    ATerm u_7 (ATerm t)
    {
      ATerm b_133 = NULL;
      ATerm c_133 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm v_7 (ATerm t)
        {
          t = not_null(z_132);
          return(t);
        }
        t = short_description_1(t, v_7);
        t = concat_strings_0(t);
        c_133 = t;
        if(b_133 != NULL && b_133 != c_133)
          _fail(c_133);
        else
          b_133 = c_133;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_133), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, u_7);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm w_7 (ATerm t)
      {
        ATerm d_133 = NULL;
        d_133 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_133), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, w_7);
      {
        ATerm x_7 (ATerm t)
        {
          ATerm f_133 = NULL;
          ATerm g_133 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm y_7 (ATerm t)
            {
              t = not_null(z_132);
              return(t);
            }
            t = long_description_1(t, y_7);
            t = concat_strings_0(t);
            g_133 = t;
            if(f_133 != NULL && f_133 != g_133)
              _fail(g_133);
            else
              f_133 = g_133;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_133), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, x_7);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm q_133 = NULL,r_133 = NULL,s_133 = NULL,t_133 = NULL,u_133 = NULL;
  q_133 = t;
  m_133 :
  if(match_cons(q_133, sym_TCons_2))
    {
      r_133 = ATgetArgument(q_133, 0);
      s_133 = ATgetArgument(q_133, 1);
      n_133 :
      if(match_cons(s_133, sym_TCons_2))
        {
          t_133 = ATgetArgument(s_133, 0);
          u_133 = ATgetArgument(s_133, 1);
          o_133 :
          if(match_cons(u_133, sym_TNil_0))
            {
              ATerm y_13;
              y_13 = t;
              t = SSL_printnl(not_null(r_133), not_null(t_133));
              t = y_13;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm t_39 (ATerm))
{
  ATerm b_134 = NULL,c_134 = NULL;
  b_134 = t;
  a_134 :
  if(match_cons(b_134, sym_Undefined_1))
    {
      c_134 = ATgetArgument(b_134, 0);
      {
        ATerm e_134 = NULL;
        t = not_null(c_134);
        t = t_39(t);
        e_134 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_134));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm k_60 (ATerm))
{
  ATerm i_134 (ATerm t)
  {
    ATerm z_13 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, k_60, _id);
        PopChoice();
      }
    else
      {
        t = z_13;
        t = Cons_2(t, _id, i_134);
      }
    return(t);
  }
  t = i_134(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_50 (ATerm))
{
  t = fetch_1(t, p_50);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_134 = NULL;
  k_134 = t;
  j_134 :
  if(!(match_cons(k_134, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm s_66 (ATerm))
{
  ATerm a_14 = t;
  if(PushChoice()==0)
    {
      t = s_66(t);
      PopChoice();
    }
  else
    t = a_14;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_134 = NULL,q_134 = NULL,r_134 = NULL,s_134 = NULL,t_134 = NULL;
  p_134 = t;
  m_134 :
  if(match_cons(p_134, sym_TCons_2))
    {
      q_134 = ATgetArgument(p_134, 0);
      r_134 = ATgetArgument(p_134, 1);
      n_134 :
      if(match_cons(r_134, sym_TCons_2))
        {
          s_134 = ATgetArgument(r_134, 0);
          t_134 = ATgetArgument(r_134, 1);
          o_134 :
          if(match_cons(t_134, sym_TNil_0))
            t = SSL_table_get(not_null(q_134), not_null(s_134));
          else
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
  ATerm d_135 = NULL,e_135 = NULL,f_135 = NULL,g_135 = NULL,h_135 = NULL,i_135 = NULL,j_135 = NULL;
  d_135 = t;
  z_134 :
  if(match_cons(d_135, sym_TCons_2))
    {
      e_135 = ATgetArgument(d_135, 0);
      f_135 = ATgetArgument(d_135, 1);
      a_135 :
      if(match_cons(f_135, sym_TCons_2))
        {
          g_135 = ATgetArgument(f_135, 0);
          h_135 = ATgetArgument(f_135, 1);
          b_135 :
          if(match_cons(h_135, sym_TCons_2))
            {
              i_135 = ATgetArgument(h_135, 0);
              j_135 = ATgetArgument(h_135, 1);
              c_135 :
              if(match_cons(j_135, sym_TNil_0))
                {
                  ATerm b_14;
                  b_14 = t;
                  {
                    ATerm n_135 = NULL;
                    ATerm o_135 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_135), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_135), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm c_14 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = c_14;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      o_135 = t;
                      if(n_135 != NULL && n_135 != o_135)
                        _fail(o_135);
                      else
                        n_135 = o_135;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_135), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_135), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_135), not_null(n_135)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = b_14;
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm v_49 (ATerm))
{
  ATerm s_135 = NULL;
  ATerm t_135 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = v_49(t);
  t_135 = t;
  if(s_135 != NULL && s_135 != t_135)
    _fail(t_135);
  else
    s_135 = t_135;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_135), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm z_135 = NULL,a_136 = NULL,b_136 = NULL;
  b_136 = t;
  y_135 :
  if(match_cons(b_136, sym_Cons_2))
    {
      z_135 = ATgetArgument(b_136, 0);
      a_136 = ATgetArgument(b_136, 1);
      {
        ATerm e_136 = NULL;
        t = not_null(z_135);
        t = a_0(t);
        {
          ATerm f_136 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = b_0(t);
          f_136 = t;
          if(e_136 != NULL && e_136 != f_136)
            _fail(f_136);
          else
            e_136 = f_136;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_136), not_null(a_136));
        }
      }
    }
  else
    {
      if(match_string(b_136, "register-usage-info"))
        t = register_usage_1(t, c_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm a_8 (ATerm t)
  {
    ATerm k_136 = NULL;
    k_136 = t;
    j_136 :
    if(!(match_string(k_136, "--help")))
      {
        if(!(match_string(k_136, "-h")))
          {
            if(!(match_string(k_136, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm b_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm c_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, a_8, b_8, c_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm n_136 = NULL,o_136 = NULL,p_136 = NULL;
  n_136 = t;
  m_136 :
  if(match_cons(n_136, sym_Cons_2))
    {
      o_136 = ATgetArgument(n_136, 0);
      p_136 = ATgetArgument(n_136, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_136)), not_null(p_136));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm p_44 (ATerm), ATerm q_44 (ATerm))
{
  ATerm x_136 = NULL,y_136 = NULL,z_136 = NULL;
  x_136 = t;
  w_136 :
  if(match_cons(x_136, sym_Cons_2))
    {
      y_136 = ATgetArgument(x_136, 0);
      z_136 = ATgetArgument(x_136, 1);
      {
        ATerm c_137 = NULL;
        t = not_null(y_136);
        {
          ATerm e_137 = NULL;
          t = p_44(t);
          c_137 = t;
          t = not_null(z_136);
          t = q_44(t);
          e_137 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_137), not_null(e_137));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm l_137 = NULL;
  l_137 = t;
  k_137 :
  if(!(match_cons(l_137, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm t_49 (ATerm))
{
  ATerm d_14;
  d_14 = t;
  {
    ATerm d_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = t_49(t);
      return(t);
    }
    t = try_1(t, d_8);
  }
  t = d_14;
  {
    ATerm e_8 (ATerm t)
    {
      ATerm n_137 = NULL;
      n_137 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_137));
      return(t);
    }
    ATerm j_8 (ATerm t)
    {
      ATerm e_14 = t;
      if(PushChoice()==0)
        {
          ATerm f_14 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = f_14;
              t = t_49(t);
              t = Cons_2(t, _id, j_8);
            }
          PopChoice();
        }
      else
        {
          t = e_14;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, e_8, j_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_137 = NULL,x_137 = NULL,y_137 = NULL;
  ATerm k_14;
  k_14 = t;
  {
    ATerm z_137 = NULL,a_138 = NULL,b_138 = NULL,c_138 = NULL,d_138 = NULL,e_138 = NULL,f_138 = NULL;
    z_137 = t;
    s_137 :
    if(match_cons(z_137, sym_TCons_2))
      {
        a_138 = ATgetArgument(z_137, 0);
        b_138 = ATgetArgument(z_137, 1);
        t_137 :
        if(match_cons(b_138, sym_TCons_2))
          {
            c_138 = ATgetArgument(b_138, 0);
            d_138 = ATgetArgument(b_138, 1);
            u_137 :
            if(match_cons(d_138, sym_TCons_2))
              {
                e_138 = ATgetArgument(d_138, 0);
                f_138 = ATgetArgument(d_138, 1);
                v_137 :
                if(match_cons(f_138, sym_TNil_0))
                  {
                    if(w_137 != NULL && w_137 != a_138)
                      _fail(a_138);
                    else
                      w_137 = a_138;
                    if(x_137 != NULL && x_137 != c_138)
                      _fail(c_138);
                    else
                      x_137 = c_138;
                    if(y_137 != NULL && y_137 != e_138)
                      _fail(e_138);
                    else
                      y_137 = e_138;
                    t = SSL_table_put(not_null(w_137), not_null(x_137), not_null(y_137));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = k_14;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_49 (ATerm))
{
  ATerm i_138 = NULL;
  ATerm l_14;
  l_14 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = l_14;
  {
    ATerm l_8 (ATerm t)
    {
      ATerm m_14 = t;
      if(PushChoice()==0)
        {
          t = s_49(t);
          PopChoice();
        }
      else
        {
          t = m_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, l_8);
    {
      ATerm n_8 (ATerm t)
      {
        ATerm n_14 = t;
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
            t = n_14;
            {
              ATerm o_8 (ATerm t)
              {
                ATerm p_8 (ATerm t)
                {
                  ATerm j_138 = NULL;
                  j_138 = t;
                  if(i_138 != NULL && i_138 != j_138)
                    _fail(j_138);
                  else
                    i_138 = j_138;
                  return(t);
                }
                t = Undefined_1(t, p_8);
                return(t);
              }
              t = option_defined_1(t, o_8);
              {
                ATerm o_14;
                o_14 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_138), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = o_14;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, n_8);
      {
        ATerm p_14;
        p_14 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = p_14;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm z_50 (ATerm), ATerm a_51 (ATerm), ATerm b_51 (ATerm))
{
  ATerm q_8 (ATerm t)
  {
    ATerm q_14 = t;
    if(PushChoice()==0)
      {
        t = a_51(t);
        PopChoice();
      }
    else
      {
        t = q_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, q_8);
  t = store_options_0(t);
  {
    ATerm t_14 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, b_51);
        PopChoice();
      }
    else
      {
        t = t_14;
        {
          ATerm u_14 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, z_50);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = u_14;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm u_50 (ATerm), ATerm v_50 (ATerm))
{
  t = iowrap_3(t, u_50, v_50, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm r_50 (ATerm))
{
  ATerm r_8 (ATerm t)
  {
    ATerm s_8 (ATerm t)
    {
      t = TCons_2(t, r_50, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, s_8);
    return(t);
  }
  t = iowrap_2(t, r_8, _fail);
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
