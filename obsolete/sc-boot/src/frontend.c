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
ATerm App_2 (ATerm, ATerm b_40 (ATerm), ATerm c_40 (ATerm));
ATerm Con_3 (ATerm, ATerm y_39 (ATerm), ATerm z_39 (ATerm), ATerm a_40 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm o_63 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm i_41 (ATerm));
ATerm Specification_1 (ATerm, ATerm k_41 (ATerm));
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm q_44 (ATerm));
ATerm Rec_2 (ATerm, ATerm j_42 (ATerm), ATerm k_42 (ATerm));
ATerm Let_2 (ATerm, ATerm l_42 (ATerm), ATerm m_42 (ATerm));
ATerm sboundin_3 (ATerm, ATerm r_44 (ATerm), ATerm s_44 (ATerm), ATerm t_44 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm i_42 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm k_47 (ATerm, ATerm (ATerm)), ATerm l_47 (ATerm), ATerm m_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm n_47 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm DeclareVariables_0 (ATerm);
ATerm RDtoSD_0 (ATerm);
ATerm MkCall_0 (ATerm);
ATerm MkCongDef_0 (ATerm);
ATerm MkCongDefs_0 (ATerm);
ATerm congdefs_0 (ATerm);
ATerm RulesToSdefs_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_51 (ATerm));
ATerm int_to_string_0 (ATerm);
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm FunType_2 (ATerm, ATerm m_41 (ATerm), ATerm n_41 (ATerm));
ATerm ConstType_1 (ATerm, ATerm l_41 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm q_41 (ATerm), ATerm r_41 (ATerm));
ATerm CheckCons_2 (ATerm, ATerm g_44 (ATerm), ATerm h_44 (ATerm));
ATerm manytd_1 (ATerm, ATerm w_64 (ATerm));
ATerm check_constructors_1 (ATerm, ATerm i_0 (ATerm));
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm p_45 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm y_41 (ATerm), ATerm z_41 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm m_44 (ATerm));
ATerm Var_1 (ATerm, ATerm u_41 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm c_47 (ATerm), ATerm d_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm i_47 (ATerm), ATerm j_47 (ATerm, ATerm (ATerm)));
ATerm Fst_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm w_46 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm x_60 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm c_61 (ATerm));
ATerm substitute_6 (ATerm, ATerm u_47 (ATerm), ATerm v_47 (ATerm, ATerm (ATerm)), ATerm w_47 (ATerm), ATerm x_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm y_47 (ATerm, ATerm (ATerm)), ATerm z_47 (ATerm));
ATerm substitute_5 (ATerm, ATerm b_48 (ATerm), ATerm c_48 (ATerm, ATerm (ATerm)), ATerm d_48 (ATerm), ATerm e_48 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm f_48 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm n_45 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm o_45 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm MsgR_0 (ATerm);
ATerm MsgE_0 (ATerm);
ATerm MsgU_0 (ATerm);
ATerm MsgS_0 (ATerm);
ATerm MkMsg_0 (ATerm);
ATerm err_msg_0 (ATerm);
ATerm Overlay_3 (ATerm, ATerm c_41 (ATerm), ATerm d_41 (ATerm), ATerm e_41 (ATerm));
ATerm Union_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm explode_term_0 (ATerm);
ATerm default_join_0 (ATerm);
ATerm SeqUnion_0 (ATerm);
ATerm cart_1 (ATerm, ATerm r_57 (ATerm));
ATerm seqs_join_0 (ATerm);
ATerm JoinScope_1 (ATerm, ATerm j_44 (ATerm));
ATerm UDjoin_0 (ATerm);
ATerm Cong_2 (ATerm, ATerm b_43 (ATerm), ATerm c_43 (ATerm));
ATerm use_term_0 (ATerm);
ATerm def_term_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm n_40 (ATerm), ATerm o_40 (ATerm), ATerm p_40 (ATerm));
ATerm BAM_3 (ATerm, ATerm v_39 (ATerm), ATerm w_39 (ATerm), ATerm x_39 (ATerm));
ATerm BA_2 (ATerm, ATerm t_39 (ATerm), ATerm u_39 (ATerm));
ATerm AM_2 (ATerm, ATerm r_39 (ATerm), ATerm s_39 (ATerm));
ATerm MA_2 (ATerm, ATerm p_39 (ATerm), ATerm q_39 (ATerm));
ATerm Match_1 (ATerm, ATerm j_43 (ATerm));
ATerm Build_1 (ATerm, ATerm k_43 (ATerm));
ATerm constructs_1 (ATerm, ATerm i_44 (ATerm));
ATerm use_def_0 (ATerm);
ATerm RDef_3 (ATerm, ATerm v_40 (ATerm), ATerm w_40 (ATerm), ATerm x_40 (ATerm));
ATerm SDef_3 (ATerm, ATerm n_42 (ATerm), ATerm o_42 (ATerm), ATerm p_42 (ATerm));
ATerm check_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm g_41 (ATerm));
ATerm Signature_1 (ATerm, ATerm f_41 (ATerm));
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
ATerm dist_scope_1 (ATerm, ATerm l_66 (ATerm));
ATerm one_dist_1 (ATerm, ATerm y_60 (ATerm));
ATerm env_oncetd_1 (ATerm, ATerm n_61 (ATerm));
ATerm lift_dynamic_rule_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm l_60 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm y_40 (ATerm));
ATerm Scope_2 (ATerm, ATerm n_43 (ATerm), ATerm o_43 (ATerm));
ATerm tboundin_3 (ATerm, ATerm n_44 (ATerm), ATerm o_44 (ATerm), ATerm p_44 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm i_54 (ATerm), ATerm j_54 (ATerm), ATerm k_54 (ATerm));
ATerm crush_3 (ATerm, ATerm y_55 (ATerm), ATerm z_55 (ATerm), ATerm a_56 (ATerm));
ATerm HdMember_1 (ATerm, ATerm n_55 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm t_65 (ATerm), ATerm u_65 (ATerm));
ATerm for_3 (ATerm, ATerm w_65 (ATerm), ATerm x_65 (ATerm), ATerm y_65 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm t_45 (ATerm), ATerm u_45 (ATerm), ATerm v_45 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm a_62 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm p_47 (ATerm), ATerm q_47 (ATerm));
ATerm alltd_1 (ATerm, ATerm c_64 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm t_57 (ATerm), ATerm u_57 (ATerm), ATerm v_57 (ATerm), ATerm w_57 (ATerm));
ATerm zip_1 (ATerm, ATerm y_57 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm r_47 (ATerm), ATerm s_47 (ATerm));
ATerm substitute_1 (ATerm, ATerm t_47 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm OLName_0 (ATerm);
ATerm OpName_0 (ATerm);
ATerm OpNames_0 (ATerm);
ATerm Names_0 (ATerm);
ATerm filter_1 (ATerm, ATerm o_53 (ATerm));
ATerm const_names_0 (ATerm);
ATerm vars_to_consts_0 (ATerm);
ATerm MkSpec_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Combine_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_54 (ATerm), ATerm h_54 (ATerm));
ATerm NormBSIG_0 (ATerm);
ATerm normalize_sigs_0 (ATerm);
ATerm NormBSP_0 (ATerm);
ATerm BSpecs_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm y_61 (ATerm));
ATerm DefineSugar_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm s_43 (ATerm), ATerm t_43 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm s_50 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm w_52 (ATerm), ATerm x_52 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_50 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_59 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm y_48 (ATerm));
ATerm map_1 (ATerm, ATerm j_59 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm c_65 (ATerm), ATerm d_65 (ATerm));
ATerm repeat_1 (ATerm, ATerm f_65 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm x_48 (ATerm));
ATerm Program_1 (ATerm, ATerm a_39 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm b_39 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_59 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_49 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm z_65 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm c_49 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm w_43 (ATerm), ATerm x_43 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm a_49 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm z_48 (ATerm));
ATerm iowrap_3 (ATerm, ATerm g_50 (ATerm), ATerm h_50 (ATerm), ATerm i_50 (ATerm));
ATerm iowrap_2 (ATerm, ATerm b_50 (ATerm), ATerm c_50 (ATerm));
ATerm iowrap_1 (ATerm, ATerm y_49 (ATerm));
ATerm frontend_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Expl_0 (ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL;
  p_7 = t;
  o_7 :
  if(match_cons(p_7, sym_Match_1))
    {
      q_7 = ATgetArgument(p_7, 0);
      {
        ATerm t_7 = NULL;
        ATerm c_10 = NULL;
        t = new_0(t);
        t_7 = t;
        {
          ATerm e_10 = NULL,f_10 = NULL,e_11 = NULL;
          t = new_0(t);
          c_10 = t;
          t = not_null(q_7);
          {
            ATerm j_0 (ATerm t)
            {
              ATerm a_11 = NULL,c_11 = NULL,d_11 = NULL;
              a_11 = t;
              x_4 :
              if(match_cons(a_11, sym_Explode_2))
                {
                  c_11 = ATgetArgument(a_11, 0);
                  d_11 = ATgetArgument(a_11, 1);
                  if(e_10 != NULL && e_10 != c_11)
                    _fail(c_11);
                  else
                    e_10 = c_11;
                  if(f_10 != NULL && f_10 != d_11)
                    _fail(d_11);
                  else
                    f_10 = d_11;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_7));
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1(t, j_0);
            e_11 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_7), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_11)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_10), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_10))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_10)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_7)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_10), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_10), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0))))))));
          }
        }
      }
    }
  else
    {
      if(match_cons(p_7, sym_Build_1))
        {
          q_7 = ATgetArgument(p_7, 0);
          {
            ATerm f_12 = NULL;
            ATerm p_13 = NULL,q_13 = NULL,b_14 = NULL;
            t = new_0(t);
            f_12 = t;
            t = not_null(q_7);
            {
              ATerm k_0 (ATerm t)
              {
                ATerm r_13 = NULL,z_13 = NULL,a_14 = NULL;
                r_13 = t;
                i_7 :
                if(match_cons(r_13, sym_Explode_2))
                  {
                    z_13 = ATgetArgument(r_13, 0);
                    a_14 = ATgetArgument(r_13, 1);
                    if(p_13 != NULL && p_13 != z_13)
                      _fail(z_13);
                    else
                      p_13 = z_13;
                    if(q_13 != NULL && q_13 != a_14)
                      _fail(a_14);
                    else
                      q_13 = a_14;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_12));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, k_0);
              b_14 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_12), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_13), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_13), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_12))), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_14)))));
            }
          }
        }
      else
        {
          if(match_cons(p_7, sym_ExplodeCong_2))
            {
              q_7 = ATgetArgument(p_7, 0);
              r_7 = ATgetArgument(p_7, 1);
              {
                ATerm p_14 = NULL;
                ATerm r_14 = NULL;
                t = new_0(t);
                p_14 = t;
                {
                  ATerm t_14 = NULL;
                  t = new_0(t);
                  r_14 = t;
                  {
                    ATerm v_14 = NULL;
                    t = new_0(t);
                    t_14 = t;
                    t = new_0(t);
                    v_14 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_14), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_14), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_14), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_14), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_14)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_14)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(q_7), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_14)), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_14))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(r_7), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_14)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_14))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_14)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_14)), (ATerm) ATmakeAppl(sym_Nil_0)))))));
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
  ATerm y_15 = NULL,y_16 = NULL;
  y_15 = t;
  s_15 :
  if(match_cons(y_15, sym_Build_1))
    {
      y_16 = ATgetArgument(y_15, 0);
      {
        ATerm a_17 = NULL;
        ATerm c_17 = NULL,d_17 = NULL,k_17 = NULL;
        t = new_0(t);
        a_17 = t;
        t = not_null(y_16);
        {
          ATerm l_0 (ATerm t)
          {
            ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
            e_17 = t;
            q_15 :
            if(match_cons(e_17, sym_App_2))
              {
                f_17 = ATgetArgument(e_17, 0);
                g_17 = ATgetArgument(e_17, 1);
                if(c_17 != NULL && c_17 != f_17)
                  _fail(f_17);
                else
                  c_17 = f_17;
                if(d_17 != NULL && d_17 != g_17)
                  _fail(g_17);
                else
                  d_17 = g_17;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_17));
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, l_0);
          k_17 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_17), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(c_17), not_null(d_17), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_17))), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_17))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp1_0 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL;
  t_17 = t;
  r_17 :
  if(match_cons(t_17, sym_Build_1))
    {
      u_17 = ATgetArgument(t_17, 0);
      s_17 :
      if(match_cons(u_17, sym_App_2))
        {
          v_17 = ATgetArgument(u_17, 0);
          w_17 = ATgetArgument(u_17, 1);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_17)), not_null(v_17));
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
  ATerm h_18 = NULL,i_18 = NULL;
  h_18 = t;
  g_18 :
  if(match_cons(h_18, sym_Build_1))
    {
      i_18 = ATgetArgument(h_18, 0);
      {
        ATerm k_18 = NULL,l_18 = NULL,q_18 = NULL;
        t = not_null(i_18);
        {
          ATerm m_0 (ATerm t)
          {
            ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL;
            m_18 = t;
            d_18 :
            if(match_cons(m_18, sym_App_2))
              {
                n_18 = ATgetArgument(m_18, 0);
                p_18 = ATgetArgument(m_18, 1);
                e_18 :
                if(match_cons(n_18, sym_Build_1))
                  {
                    o_18 = ATgetArgument(n_18, 0);
                    if(l_18 != NULL && l_18 != o_18)
                      _fail(o_18);
                    else
                      l_18 = o_18;
                    if(k_18 != NULL && k_18 != p_18)
                      _fail(p_18);
                    else
                      k_18 = p_18;
                    t = not_null(l_18);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, m_0);
          q_18 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, not_null(q_18));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
  k_20 = t;
  e_20 :
  if(match_cons(k_20, sym_Seqs_1))
    {
      n_20 = ATgetArgument(k_20, 0);
      f_20 :
      if(match_cons(n_20, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(n_20, sym_Cons_2))
            {
              i_20 = ATgetArgument(n_20, 0);
              j_20 = ATgetArgument(n_20, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_20), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(j_20)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(k_20, sym_Choices_1))
        {
          n_20 = ATgetArgument(k_20, 0);
          g_20 :
          if(match_cons(n_20, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(n_20, sym_Cons_2))
                {
                  i_20 = ATgetArgument(n_20, 0);
                  j_20 = ATgetArgument(n_20, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_20), (ATerm) ATmakeAppl(sym_Choices_1, not_null(j_20)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(k_20, sym_LChoices_1))
            {
              n_20 = ATgetArgument(k_20, 0);
              h_20 :
              if(match_cons(n_20, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(n_20, sym_Cons_2))
                    {
                      i_20 = ATgetArgument(n_20, 0);
                      j_20 = ATgetArgument(n_20, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(i_20), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(j_20)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(k_20, sym_Lets_2))
                {
                  n_20 = ATgetArgument(k_20, 0);
                  o_20 = ATgetArgument(k_20, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(n_20), not_null(o_20));
                }
              else
                {
                  if(match_cons(k_20, sym_BA_2))
                    {
                      n_20 = ATgetArgument(k_20, 0);
                      o_20 = ATgetArgument(k_20, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_20)), not_null(n_20));
                    }
                  else
                    {
                      if(match_cons(k_20, sym_MA_2))
                        {
                          n_20 = ATgetArgument(k_20, 0);
                          o_20 = ATgetArgument(k_20, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_20)), not_null(o_20));
                        }
                      else
                        {
                          if(match_cons(k_20, sym_AM_2))
                            {
                              n_20 = ATgetArgument(k_20, 0);
                              o_20 = ATgetArgument(k_20, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_20), (ATerm) ATmakeAppl(sym_Match_1, not_null(o_20)));
                            }
                          else
                            {
                              if(match_cons(k_20, sym_BAM_3))
                                {
                                  n_20 = ATgetArgument(k_20, 0);
                                  o_20 = ATgetArgument(k_20, 1);
                                  p_20 = ATgetArgument(k_20, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_20)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_20), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_20)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(k_20, sym_InfixApp_3))
                                    {
                                      n_20 = ATgetArgument(k_20, 0);
                                      o_20 = ATgetArgument(k_20, 1);
                                      p_20 = ATgetArgument(k_20, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(o_20), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_20), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_20), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm f_22 = NULL;
  f_22 = t;
  e_22 :
  if(!(match_cons(f_22, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm n_8 = t;
  if(PushChoice()==0)
    {
      ATerm n_0 (ATerm t)
      {
        ATerm o_8 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = o_8;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, n_0);
      PopChoice();
      _fail(t);
    }
  else
    t = n_8;
  return(t);
}
ATerm App_2 (ATerm t, ATerm b_40 (ATerm), ATerm c_40 (ATerm))
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL;
  k_22 = t;
  j_22 :
  if(match_cons(k_22, sym_App_2))
    {
      l_22 = ATgetArgument(k_22, 0);
      m_22 = ATgetArgument(k_22, 1);
      {
        ATerm p_22 = NULL;
        t = not_null(l_22);
        {
          ATerm r_22 = NULL;
          t = b_40(t);
          p_22 = t;
          t = not_null(m_22);
          t = c_40(t);
          r_22 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, not_null(p_22), not_null(r_22));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm y_39 (ATerm), ATerm z_39 (ATerm), ATerm a_40 (ATerm))
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
  c_23 = t;
  b_23 :
  if(match_cons(c_23, sym_Con_3))
    {
      d_23 = ATgetArgument(c_23, 0);
      e_23 = ATgetArgument(c_23, 1);
      f_23 = ATgetArgument(c_23, 2);
      {
        ATerm j_23 = NULL;
        t = not_null(d_23);
        {
          ATerm m_23 = NULL;
          t = y_39(t);
          j_23 = t;
          t = not_null(e_23);
          {
            ATerm o_23 = NULL;
            t = z_39(t);
            m_23 = t;
            t = not_null(f_23);
            t = a_40(t);
            o_23 = t;
            t = (ATerm) ATmakeAppl(sym_Con_3, not_null(j_23), not_null(m_23), not_null(o_23));
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
  ATerm p_8 = t;
  if(PushChoice()==0)
    {
      ATerm o_0 (ATerm t)
      {
        ATerm q_8 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = q_8;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, o_0);
      PopChoice();
      _fail(t);
    }
  else
    t = p_8;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL;
  a_24 = t;
  y_23 :
  if(match_cons(a_24, sym_SRule_1))
    {
      b_24 = ATgetArgument(a_24, 0);
      z_23 :
      if(match_cons(b_24, sym_Rule_3))
        {
          c_24 = ATgetArgument(b_24, 0);
          d_24 = ATgetArgument(b_24, 1);
          e_24 = ATgetArgument(b_24, 2);
          t = not_null(c_24);
          t = pureterm_0(t);
          t = not_null(d_24);
          t = buildterm_0(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_24)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_24), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_24)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(b_24, sym_StratRule_3))
            {
              c_24 = ATgetArgument(b_24, 0);
              d_24 = ATgetArgument(b_24, 1);
              e_24 = ATgetArgument(b_24, 2);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_24), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_24), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_24), (ATerm) ATmakeAppl(sym_Nil_0)))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm o_63 (ATerm))
{
  ATerm n_24 (ATerm t)
  {
    ATerm r_8 = t;
    if(PushChoice()==0)
      {
        t = o_63(t);
        PopChoice();
      }
    else
      {
        t = r_8;
        t = _one(t, n_24);
      }
    return(t);
  }
  t = n_24(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
  c_25 = t;
  a_25 :
  if(match_cons(c_25, sym_SRule_1))
    {
      d_25 = ATgetArgument(c_25, 0);
      b_25 :
      if(match_cons(d_25, sym_Rule_3))
        {
          e_25 = ATgetArgument(d_25, 0);
          f_25 = ATgetArgument(d_25, 1);
          g_25 = ATgetArgument(d_25, 2);
          {
            ATerm k_25 = NULL;
            ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,u_25 = NULL;
            t = new_0(t);
            k_25 = t;
            t = not_null(e_25);
            {
              ATerm w_25 = NULL,x_25 = NULL,f_26 = NULL;
              ATerm p_0 (ATerm t)
              {
                ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
                p_25 = t;
                r_24 :
                if(match_cons(p_25, sym_Con_3))
                  {
                    q_25 = ATgetArgument(p_25, 0);
                    s_25 = ATgetArgument(p_25, 1);
                    t_25 = ATgetArgument(p_25, 2);
                    s_24 :
                    if(match_cons(q_25, sym_Var_1))
                      {
                        r_25 = ATgetArgument(q_25, 0);
                        if(o_25 != NULL && o_25 != r_25)
                          _fail(r_25);
                        else
                          o_25 = r_25;
                        if(m_25 != NULL && m_25 != s_25)
                          _fail(s_25);
                        else
                          m_25 = s_25;
                        if(n_25 != NULL && n_25 != t_25)
                          _fail(t_25);
                        else
                          n_25 = t_25;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_25));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, p_0);
              u_25 = t;
              t = not_null(f_25);
              {
                ATerm q_0 (ATerm t)
                {
                  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL;
                  y_25 = t;
                  v_24 :
                  if(match_cons(y_25, sym_Con_3))
                    {
                      z_25 = ATgetArgument(y_25, 0);
                      b_26 = ATgetArgument(y_25, 1);
                      c_26 = ATgetArgument(y_25, 2);
                      w_24 :
                      if(match_cons(z_25, sym_Var_1))
                        {
                          a_26 = ATgetArgument(z_25, 0);
                          x_24 :
                          if(match_cons(c_26, sym_Call_2))
                            {
                              d_26 = ATgetArgument(c_26, 0);
                              e_26 = ATgetArgument(c_26, 1);
                              y_24 :
                              if(match_cons(e_26, sym_Nil_0))
                                {
                                  if(o_25 != NULL && o_25 != a_26)
                                    _fail(a_26);
                                  else
                                    o_25 = a_26;
                                  if(w_25 != NULL && w_25 != b_26)
                                    _fail(b_26);
                                  else
                                    w_25 = b_26;
                                  if(x_25 != NULL && x_25 != d_26)
                                    _fail(d_26);
                                  else
                                    x_25 = d_26;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_25));
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, q_0);
                f_26 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_25), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_25), not_null(f_26), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_25), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(x_25), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(m_25), not_null(w_25), (ATerm) ATmakeAppl(sym_Id_0))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Var_1, not_null(o_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_25)))))));
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
  ATerm r_0 (ATerm t)
  {
    ATerm s_8 = t;
    if(PushChoice()==0)
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      {
        t = s_8;
        {
          ATerm t_8 = t;
          if(PushChoice()==0)
            {
              t = Scope_2(t, _id, desugarRule_0);
              PopChoice();
            }
          else
            {
              t = t_8;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, r_0);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm t_0 (ATerm t)
      {
        ATerm u_8 = t;
        if(PushChoice()==0)
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = u_8;
            {
              ATerm v_8 = t;
              if(PushChoice()==0)
                {
                  ATerm w_8 = t;
                  if(PushChoice()==0)
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = w_8;
                      {
                        ATerm x_8 = t;
                        if(PushChoice()==0)
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = x_8;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = v_8;
                  t = Expl_0(t);
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, t_0);
    }
    return(t);
  }
  t = topdown_1(t, s_0);
  return(t);
}
ATerm desugar_spec_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    t = SDef_3(t, _id, _id, desugar_0);
    return(t);
  }
  t = map_1(t, u_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm i_41 (ATerm))
{
  ATerm r_26 = NULL,s_26 = NULL;
  r_26 = t;
  q_26 :
  if(match_cons(r_26, sym_Strategies_1))
    {
      s_26 = ATgetArgument(r_26, 0);
      {
        ATerm u_26 = NULL;
        t = not_null(s_26);
        t = i_41(t);
        u_26 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(u_26));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm k_41 (ATerm))
{
  ATerm b_27 = NULL,c_27 = NULL;
  b_27 = t;
  a_27 :
  if(match_cons(b_27, sym_Specification_1))
    {
      c_27 = ATgetArgument(b_27, 0);
      {
        ATerm e_27 = NULL;
        t = not_null(c_27);
        t = k_41(t);
        e_27 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(e_27));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm k_27 = NULL,q_27 = NULL,r_27 = NULL;
  k_27 = t;
  j_27 :
  if(match_cons(k_27, sym_Cons_2))
    {
      q_27 = ATgetArgument(k_27, 0);
      r_27 = ATgetArgument(k_27, 1);
      t = not_null(q_27);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm q_44 (ATerm))
{
  ATerm y_8 = t;
  if(PushChoice()==0)
    {
      ATerm v_0 (ATerm t)
      {
        t = split_2(t, _id, q_44);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL;
            g_28 = t;
            w_27 :
            if(match_cons(g_28, sym_TCons_2))
              {
                h_28 = ATgetArgument(g_28, 0);
                l_28 = ATgetArgument(g_28, 1);
                x_27 :
                if(match_cons(h_28, sym_SDef_3))
                  {
                    i_28 = ATgetArgument(h_28, 0);
                    j_28 = ATgetArgument(h_28, 1);
                    k_28 = ATgetArgument(h_28, 2);
                    y_27 :
                    if(match_cons(l_28, sym_TCons_2))
                      {
                        m_28 = ATgetArgument(l_28, 0);
                        n_28 = ATgetArgument(l_28, 1);
                        z_27 :
                        if(match_cons(n_28, sym_TNil_0))
                          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_28), not_null(j_28), not_null(k_28));
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = zip_1(t, w_0);
        }
        return(t);
      }
      t = Let_2(t, v_0, _id);
      PopChoice();
    }
  else
    {
      t = y_8;
      {
        ATerm z_8 = t;
        if(PushChoice()==0)
          {
            ATerm x_0 (ATerm t)
            {
              t = split_2(t, _id, q_44);
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
                  s_28 = t;
                  c_28 :
                  if(match_cons(s_28, sym_TCons_2))
                    {
                      t_28 = ATgetArgument(s_28, 0);
                      w_28 = ATgetArgument(s_28, 1);
                      d_28 :
                      if(match_cons(t_28, sym_VarDec_2))
                        {
                          u_28 = ATgetArgument(t_28, 0);
                          v_28 = ATgetArgument(t_28, 1);
                          e_28 :
                          if(match_cons(w_28, sym_TCons_2))
                            {
                              x_28 = ATgetArgument(w_28, 0);
                              y_28 = ATgetArgument(w_28, 1);
                              f_28 :
                              if(match_cons(y_28, sym_TNil_0))
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(x_28), not_null(v_28));
                              else
                                _fail(t);
                            }
                          else
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
            t = SDef_3(t, _id, x_0, _id);
            PopChoice();
          }
        else
          {
            t = z_8;
            {
              ATerm z_0 (ATerm t)
              {
                t = q_44(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, z_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm j_42 (ATerm), ATerm k_42 (ATerm))
{
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL;
  m_29 = t;
  l_29 :
  if(match_cons(m_29, sym_Rec_2))
    {
      n_29 = ATgetArgument(m_29, 0);
      o_29 = ATgetArgument(m_29, 1);
      {
        ATerm r_29 = NULL;
        t = not_null(n_29);
        {
          ATerm t_29 = NULL;
          t = j_42(t);
          r_29 = t;
          t = not_null(o_29);
          t = k_42(t);
          t_29 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(r_29), not_null(t_29));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm l_42 (ATerm), ATerm m_42 (ATerm))
{
  ATerm c_30 = NULL,h_30 = NULL,i_30 = NULL;
  c_30 = t;
  b_30 :
  if(match_cons(c_30, sym_Let_2))
    {
      h_30 = ATgetArgument(c_30, 0);
      i_30 = ATgetArgument(c_30, 1);
      {
        ATerm l_30 = NULL;
        t = not_null(h_30);
        {
          ATerm p_30 = NULL;
          t = l_42(t);
          l_30 = t;
          t = not_null(i_30);
          t = m_42(t);
          p_30 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(l_30), not_null(p_30));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm r_44 (ATerm), ATerm s_44 (ATerm), ATerm t_44 (ATerm))
{
  ATerm a_9 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, r_44, r_44);
      PopChoice();
    }
  else
    {
      t = a_9;
      {
        ATerm b_9 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, t_44, t_44, r_44);
            PopChoice();
          }
        else
          {
            t = b_9;
            t = Rec_2(t, t_44, r_44);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
  d_31 = t;
  c_31 :
  if(match_cons(d_31, sym_Rec_2))
    {
      e_31 = ATgetArgument(d_31, 0);
      f_31 = ATgetArgument(d_31, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_31), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL;
  n_31 = t;
  m_31 :
  if(match_cons(n_31, sym_SDef_3))
    {
      o_31 = ATgetArgument(n_31, 0);
      p_31 = ATgetArgument(n_31, 1);
      q_31 = ATgetArgument(n_31, 2);
      t = not_null(p_31);
      {
        ATerm a_1 (ATerm t)
        {
          ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
          u_31 = t;
          l_31 :
          if(match_cons(u_31, sym_VarDec_2))
            {
              v_31 = ATgetArgument(u_31, 0);
              w_31 = ATgetArgument(u_31, 1);
              t = not_null(v_31);
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
ATerm Bind1_0 (ATerm t)
{
  ATerm e_32 = NULL,j_32 = NULL,k_32 = NULL;
  e_32 = t;
  d_32 :
  if(match_cons(e_32, sym_Let_2))
    {
      j_32 = ATgetArgument(e_32, 0);
      k_32 = ATgetArgument(e_32, 1);
      t = not_null(j_32);
      {
        ATerm b_1 (ATerm t)
        {
          ATerm n_32 = NULL,o_32 = NULL,x_32 = NULL,y_32 = NULL;
          n_32 = t;
          c_32 :
          if(match_cons(n_32, sym_SDef_3))
            {
              o_32 = ATgetArgument(n_32, 0);
              x_32 = ATgetArgument(n_32, 1);
              y_32 = ATgetArgument(n_32, 2);
              t = not_null(o_32);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, b_1);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm i_42 (ATerm))
{
  ATerm h_33 = NULL,i_33 = NULL;
  h_33 = t;
  g_33 :
  if(match_cons(h_33, sym_SVar_1))
    {
      i_33 = ATgetArgument(h_33, 0);
      {
        ATerm k_33 = NULL;
        t = not_null(i_33);
        t = i_42(t);
        k_33 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(k_33));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm c_9 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = c_9;
        {
          ATerm d_9 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = d_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, c_1, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm k_47 (ATerm, ATerm (ATerm)), ATerm l_47 (ATerm), ATerm m_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm n_47 (ATerm, ATerm (ATerm)))
{
  ATerm t_33 = NULL;
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  {
    ATerm w_33 (ATerm t)
    {
      ATerm d_1 (ATerm t)
      {
        ATerm e_9 = t;
        if(PushChoice()==0)
          {
            t = RnVar_1(t, k_47);
            PopChoice();
          }
        else
          {
            t = e_9;
            t = RnBinding_2(t, l_47, n_47);
            t = DistBinding_2(t, w_33, m_47);
          }
        return(t);
      }
      t = env_alltd_1(t, d_1);
      return(t);
    }
    t = w_33(t);
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
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL;
  a_34 = t;
  z_33 :
  if(match_cons(a_34, sym_SDef_3))
    {
      b_34 = ATgetArgument(a_34, 0);
      c_34 = ATgetArgument(a_34, 1);
      d_34 = ATgetArgument(a_34, 2);
      {
        ATerm h_34 = NULL;
        t = not_null(d_34);
        t = tvars_0(t);
        h_34 = t;
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(b_34), not_null(c_34), (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_34), not_null(d_34)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RDtoSD_0 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL;
  o_34 = t;
  n_34 :
  if(match_cons(o_34, sym_RDef_3))
    {
      p_34 = ATgetArgument(o_34, 0);
      q_34 = ATgetArgument(o_34, 1);
      r_34 = ATgetArgument(o_34, 2);
      {
        ATerm v_34 = NULL;
        t = not_null(r_34);
        t = tvars_0(t);
        v_34 = t;
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(p_34), not_null(q_34), (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_34), (ATerm) ATmakeAppl(sym_SRule_1, not_null(r_34))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkCall_0 (ATerm t)
{
  ATerm e_35 = NULL;
  e_35 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_35)), (ATerm) ATmakeAppl(sym_Nil_0));
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL;
  g_36 = t;
  y_35 :
  if(match_cons(g_36, sym_OpDecl_2))
    {
      h_36 = ATgetArgument(g_36, 0);
      i_36 = ATgetArgument(g_36, 1);
      f_36 :
      if(match_cons(i_36, sym_ConstType_1))
        {
          j_36 = ATgetArgument(i_36, 0);
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(h_36), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Cong_2, not_null(h_36), (ATerm) ATmakeAppl(sym_Nil_0)));
        }
      else
        {
          if(match_cons(i_36, sym_FunType_2))
            {
              j_36 = ATgetArgument(i_36, 0);
              k_36 = ATgetArgument(i_36, 1);
              {
                ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL;
                t = not_null(j_36);
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = new_0(t);
                    {
                      ATerm f_1 (ATerm t)
                      {
                        ATerm c_39 = NULL;
                        c_39 = t;
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(c_39), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                        return(t);
                      }
                      t = split_2(t, f_1, _id);
                    }
                    return(t);
                  }
                  t = map_1(t, e_1);
                  t = unzip_0(t);
                  e_39 = t;
                  r_35 :
                  if(match_cons(e_39, sym_TCons_2))
                    {
                      f_39 = ATgetArgument(e_39, 0);
                      g_39 = ATgetArgument(e_39, 1);
                      s_35 :
                      if(match_cons(g_39, sym_TCons_2))
                        {
                          h_39 = ATgetArgument(g_39, 0);
                          i_39 = ATgetArgument(g_39, 1);
                          x_35 :
                          if(match_cons(i_39, sym_TNil_0))
                            {
                              ATerm l_39 = NULL;
                              t = not_null(h_39);
                              t = map_1(t, MkCall_0);
                              l_39 = t;
                              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(h_36), not_null(f_39), (ATerm) ATmakeAppl(sym_Cong_2, not_null(h_36), not_null(l_39)));
                            }
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
  ATerm j_40 = NULL,k_40 = NULL;
  j_40 = t;
  i_40 :
  if(match_cons(j_40, sym_Sorts_1))
    {
      k_40 = ATgetArgument(j_40, 0);
      t = (ATerm) ATmakeAppl(sym_Nil_0);
    }
  else
    {
      if(match_cons(j_40, sym_Constructors_1))
        {
          k_40 = ATgetArgument(j_40, 0);
          t = not_null(k_40);
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
  ATerm s_41 = NULL,t_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL;
  s_41 = t;
  a_41 :
  if(match_cons(s_41, sym_Specification_1))
    {
      t_41 = ATgetArgument(s_41, 0);
      b_41 :
      if(match_cons(t_41, sym_Cons_2))
        {
          v_41 = ATgetArgument(t_41, 0);
          x_41 = ATgetArgument(t_41, 1);
          h_41 :
          if(match_cons(v_41, sym_Signature_1))
            {
              w_41 = ATgetArgument(v_41, 0);
              j_41 :
              if(match_cons(x_41, sym_Cons_2))
                {
                  a_42 = ATgetArgument(x_41, 0);
                  c_42 = ATgetArgument(x_41, 1);
                  o_41 :
                  if(match_cons(a_42, sym_Strategies_1))
                    {
                      b_42 = ATgetArgument(a_42, 0);
                      p_41 :
                      if(match_cons(c_42, sym_Nil_0))
                        {
                          ATerm f_42 = NULL;
                          t = not_null(w_41);
                          {
                            ATerm h_42 = NULL;
                            t = congdefs_0(t);
                            f_42 = t;
                            t = not_null(b_42);
                            {
                              ATerm r_42 = NULL;
                              ATerm g_1 (ATerm t)
                              {
                                ATerm f_9 = t;
                                if(PushChoice()==0)
                                  {
                                    t = RDtoSD_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = f_9;
                                    t = DeclareVariables_0(t);
                                  }
                                return(t);
                              }
                              t = map_1(t, g_1);
                              h_42 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_42), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = conc_0(t);
                              r_42 = t;
                              t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, not_null(w_41)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(r_42)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
ATerm debug_1 (ATerm t, ATerm c_51 (ATerm))
{
  ATerm g_9;
  g_9 = t;
  {
    ATerm h_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm i_1 (ATerm t)
    {
      ATerm z_42 = NULL;
      ATerm d_43 = NULL;
      z_42 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = c_51(t);
      d_43 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_43), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_42), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, h_1, i_1);
    t = printnl_0(t);
  }
  t = g_9;
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm i_43 = NULL;
  i_43 = t;
  t = SSL_int_to_string(not_null(i_43));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL;
  v_43 = t;
  q_43 :
  if(match_cons(v_43, sym_TCons_2))
    {
      y_43 = ATgetArgument(v_43, 0);
      z_43 = ATgetArgument(v_43, 1);
      r_43 :
      if(match_cons(z_43, sym_TCons_2))
        {
          a_44 = ATgetArgument(z_43, 0);
          b_44 = ATgetArgument(z_43, 1);
          u_43 :
          if(match_cons(b_44, sym_TNil_0))
            {
              ATerm h_9 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(y_43), not_null(a_44));
                  PopChoice();
                }
              else
                {
                  t = h_9;
                  t = SSL_addr(not_null(y_43), not_null(a_44));
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
  ATerm j_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, j_1, add_0, k_1);
  return(t);
}
ATerm FunType_2 (ATerm t, ATerm m_41 (ATerm), ATerm n_41 (ATerm))
{
  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL;
  x_44 = t;
  w_44 :
  if(match_cons(x_44, sym_FunType_2))
    {
      y_44 = ATgetArgument(x_44, 0);
      z_44 = ATgetArgument(x_44, 1);
      {
        ATerm c_45 = NULL;
        t = not_null(y_44);
        {
          ATerm e_45 = NULL;
          t = m_41(t);
          c_45 = t;
          t = not_null(z_44);
          t = n_41(t);
          e_45 = t;
          t = (ATerm) ATmakeAppl(sym_FunType_2, not_null(c_45), not_null(e_45));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ConstType_1 (ATerm t, ATerm l_41 (ATerm))
{
  ATerm q_45 = NULL,r_45 = NULL;
  q_45 = t;
  l_45 :
  if(match_cons(q_45, sym_ConstType_1))
    {
      r_45 = ATgetArgument(q_45, 0);
      {
        ATerm x_45 = NULL;
        t = not_null(r_45);
        t = l_41(t);
        x_45 = t;
        t = (ATerm) ATmakeAppl(sym_ConstType_1, not_null(x_45));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm OpDecl_2 (ATerm t, ATerm q_41 (ATerm), ATerm r_41 (ATerm))
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
  f_46 = t;
  e_46 :
  if(match_cons(f_46, sym_OpDecl_2))
    {
      g_46 = ATgetArgument(f_46, 0);
      h_46 = ATgetArgument(f_46, 1);
      {
        ATerm k_46 = NULL;
        t = not_null(g_46);
        {
          ATerm m_46 = NULL;
          t = q_41(t);
          k_46 = t;
          t = not_null(h_46);
          t = r_41(t);
          m_46 = t;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, not_null(k_46), not_null(m_46));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CheckCons_2 (ATerm t, ATerm g_44 (ATerm), ATerm h_44 (ATerm))
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL;
  y_46 = t;
  x_46 :
  if(match_cons(y_46, sym_Op_2))
    {
      z_46 = ATgetArgument(y_46, 0);
      a_47 = ATgetArgument(y_46, 1);
      {
        ATerm h_48 = NULL;
        ATerm i_9 = t;
        if(PushChoice()==0)
          {
            t = h_44(t);
            {
              ATerm l_1 (ATerm t)
              {
                ATerm f_47 = NULL;
                ATerm m_1 (ATerm t)
                {
                  ATerm g_47 = NULL;
                  g_47 = t;
                  if(z_46 != NULL && z_46 != g_47)
                    _fail(g_47);
                  else
                    z_46 = g_47;
                  return(t);
                }
                ATerm n_1 (ATerm t)
                {
                  ATerm j_9 = t;
                  if(PushChoice()==0)
                    {
                      ATerm h_47 = NULL;
                      t = ConstType_1(t, _id);
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                      h_47 = t;
                      if(f_47 != NULL && f_47 != h_47)
                        _fail(h_47);
                      else
                        f_47 = h_47;
                      PopChoice();
                    }
                  else
                    {
                      t = j_9;
                      {
                        ATerm o_1 (ATerm t)
                        {
                          ATerm g_48 = NULL;
                          g_48 = t;
                          if(f_47 != NULL && f_47 != g_48)
                            _fail(g_48);
                          else
                            f_47 = g_48;
                          return(t);
                        }
                        t = FunType_2(t, o_1, _id);
                      }
                    }
                  return(t);
                }
                t = OpDecl_2(t, m_1, n_1);
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_47), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_47), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = zip_1(t, _id);
                return(t);
              }
              t = fetch_1(t, l_1);
            }
            PopChoice();
            _fail(t);
          }
        else
          t = i_9;
        t = not_null(a_47);
        t = length_0(t);
        t = int_to_string_0(t);
        h_48 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_46), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("/", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
        t = concat_strings_0(t);
        t = debug_1(t, g_44);
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(z_46), not_null(a_47));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm manytd_1 (ATerm t, ATerm w_64 (ATerm))
{
  ATerm o_48 (ATerm t)
  {
    ATerm k_9 = t;
    if(PushChoice()==0)
      {
        t = w_64(t);
        {
          ATerm p_1 (ATerm t)
          {
            t = try_1(t, o_48);
            return(t);
          }
          t = _all(t, p_1);
        }
        PopChoice();
      }
    else
      {
        t = k_9;
        t = _some(t, o_48);
      }
    return(t);
  }
  t = o_48(t);
  return(t);
}
ATerm check_constructors_1 (ATerm t, ATerm i_0 (ATerm))
{
  ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL,d_49 = NULL;
  u_48 = t;
  t_48 :
  if(match_cons(u_48, sym_RDef_3))
    {
      v_48 = ATgetArgument(u_48, 0);
      w_48 = ATgetArgument(u_48, 1);
      d_49 = ATgetArgument(u_48, 2);
      {
        ATerm h_49 = NULL;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: in rule ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        t = concat_strings_0(t);
        h_49 = t;
        t = not_null(d_49);
        {
          ATerm q_1 (ATerm t)
          {
            ATerm r_1 (ATerm t)
            {
              t = not_null(h_49);
              return(t);
            }
            t = CheckCons_2(t, r_1, i_0);
            return(t);
          }
          t = manytd_1(t, q_1);
          t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(v_48), not_null(w_48), not_null(d_49));
        }
      }
    }
  else
    {
      if(match_cons(u_48, sym_SDef_3))
        {
          v_48 = ATgetArgument(u_48, 0);
          w_48 = ATgetArgument(u_48, 1);
          d_49 = ATgetArgument(u_48, 2);
          {
            ATerm m_49 = NULL;
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: in definition ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
            t = concat_strings_0(t);
            m_49 = t;
            t = not_null(d_49);
            {
              ATerm s_1 (ATerm t)
              {
                ATerm t_1 (ATerm t)
                {
                  t = not_null(m_49);
                  return(t);
                }
                t = CheckCons_2(t, t_1, i_0);
                return(t);
              }
              t = manytd_1(t, s_1);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(v_48), not_null(w_48), not_null(d_49));
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
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL;
  l_50 = t;
  v_49 :
  if(match_cons(l_50, sym_Specification_1))
    {
      m_50 = ATgetArgument(l_50, 0);
      x_49 :
      if(match_cons(m_50, sym_Cons_2))
        {
          n_50 = ATgetArgument(m_50, 0);
          u_50 = ATgetArgument(m_50, 1);
          z_49 :
          if(match_cons(n_50, sym_Signature_1))
            {
              o_50 = ATgetArgument(n_50, 0);
              a_50 :
              if(match_cons(o_50, sym_Cons_2))
                {
                  p_50 = ATgetArgument(o_50, 0);
                  t_50 = ATgetArgument(o_50, 1);
                  d_50 :
                  if(match_cons(p_50, sym_Constructors_1))
                    {
                      q_50 = ATgetArgument(p_50, 0);
                      e_50 :
                      if(match_cons(t_50, sym_Nil_0))
                        {
                          f_50 :
                          if(match_cons(u_50, sym_Cons_2))
                            {
                              v_50 = ATgetArgument(u_50, 0);
                              x_50 = ATgetArgument(u_50, 1);
                              j_50 :
                              if(match_cons(v_50, sym_Strategies_1))
                                {
                                  w_50 = ATgetArgument(v_50, 0);
                                  k_50 :
                                  if(match_cons(x_50, sym_Nil_0))
                                    {
                                      ATerm a_51 = NULL;
                                      t = not_null(w_50);
                                      {
                                        ATerm u_1 (ATerm t)
                                        {
                                          ATerm v_1 (ATerm t)
                                          {
                                            t = not_null(q_50);
                                            return(t);
                                          }
                                          t = check_constructors_1(t, v_1);
                                          return(t);
                                        }
                                        t = filter_1(t, u_1);
                                        a_51 = t;
                                        u_49 :
                                        if(match_cons(a_51, sym_Nil_0))
                                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Constructors_1, not_null(q_50)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(w_50)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
ATerm exp_overlays2_1 (ATerm t, ATerm p_45 (ATerm))
{
  ATerm w_1 (ATerm t)
  {
    ATerm l_9;
    l_9 = t;
    {
      ATerm m_9 = t;
      if(PushChoice()==0)
        {
          ATerm f_51 = NULL;
          t = p_45(t);
          f_51 = t;
          e_51 :
          if(!(match_cons(f_51, sym_Nil_0)))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        t = m_9;
    }
    t = l_9;
    {
      ATerm x_1 (ATerm t)
      {
        ATerm y_1 (ATerm t)
        {
          t = ExpOverlay_1(t, p_45);
          return(t);
        }
        t = try_1(t, y_1);
        return(t);
      }
      t = topdown_1(t, x_1);
    }
    return(t);
  }
  t = try_1(t, w_1);
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL;
  o_51 = t;
  m_51 :
  if(match_cons(o_51, sym_Var_1))
    {
      p_51 = ATgetArgument(o_51, 0);
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_51)), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    {
      if(match_cons(o_51, sym_Op_2))
        {
          p_51 = ATgetArgument(o_51, 0);
          n_51 = ATgetArgument(o_51, 1);
          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_51)), not_null(n_51));
        }
      else
        {
          if(match_cons(o_51, sym_Str_1))
            {
              p_51 = ATgetArgument(o_51, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(p_51)));
            }
          else
            {
              if(match_cons(o_51, sym_Int_1))
                {
                  p_51 = ATgetArgument(o_51, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(p_51)));
                }
              else
                {
                  if(match_cons(o_51, sym_Real_1))
                    {
                      p_51 = ATgetArgument(o_51, 0);
                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(p_51)));
                    }
                  else
                    {
                      if(match_cons(o_51, sym_BuildDefault_1))
                        {
                          p_51 = ATgetArgument(o_51, 0);
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
ATerm Op_2 (ATerm t, ATerm y_41 (ATerm), ATerm z_41 (ATerm))
{
  ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL;
  h_52 = t;
  g_52 :
  if(match_cons(h_52, sym_Op_2))
    {
      i_52 = ATgetArgument(h_52, 0);
      j_52 = ATgetArgument(h_52, 1);
      {
        ATerm m_52 = NULL;
        t = not_null(i_52);
        {
          ATerm o_52 = NULL;
          t = y_41(t);
          m_52 = t;
          t = not_null(j_52);
          t = z_41(t);
          o_52 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(m_52), not_null(o_52));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm trm_to_cong_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm a_2 (ATerm t)
    {
      t = map_1(t, trm_to_cong_0);
      return(t);
    }
    t = Op_2(t, _id, a_2);
    return(t);
  }
  t = try_1(t, z_1);
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
        ATerm k_53 = NULL;
        t = not_null(d_53);
        {
          ATerm m_53 = NULL;
          ATerm b_2 (ATerm t)
          {
            ATerm i_53 = NULL;
            i_53 = t;
            t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(i_53), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))));
            return(t);
          }
          t = map_1(t, b_2);
          k_53 = t;
          t = not_null(e_53);
          t = trm_to_cong_0(t);
          m_53 = t;
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(c_53), not_null(k_53), not_null(m_53));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm m_44 (ATerm))
{
  t = Scope_2(t, m_44, _id);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm u_41 (ATerm))
{
  ATerm w_53 = NULL,x_53 = NULL;
  w_53 = t;
  v_53 :
  if(match_cons(w_53, sym_Var_1))
    {
      x_53 = ATgetArgument(w_53, 0);
      {
        ATerm z_53 = NULL;
        t = not_null(x_53);
        t = u_41(t);
        z_53 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_53));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm c_47 (ATerm), ATerm d_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL;
  p_54 = t;
  l_54 :
  if(match_cons(p_54, sym_TCons_2))
    {
      q_54 = ATgetArgument(p_54, 0);
      r_54 = ATgetArgument(p_54, 1);
      m_54 :
      if(match_cons(r_54, sym_TCons_2))
        {
          s_54 = ATgetArgument(r_54, 0);
          t_54 = ATgetArgument(r_54, 1);
          n_54 :
          if(match_cons(t_54, sym_TCons_2))
            {
              u_54 = ATgetArgument(t_54, 0);
              v_54 = ATgetArgument(t_54, 1);
              o_54 :
              if(match_cons(v_54, sym_TNil_0))
                {
                  t = not_null(q_54);
                  {
                    ATerm c_2 (ATerm t)
                    {
                      ATerm z_54 = NULL;
                      z_54 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_54), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_54), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = c_47(t);
                      return(t);
                    }
                    ATerm d_2 (ATerm t)
                    {
                      ATerm b_55 = NULL;
                      b_55 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_54), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = c_47(t);
                      return(t);
                    }
                    t = d_47(t, c_2, d_2, _id);
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
ATerm RnBinding_2 (ATerm t, ATerm i_47 (ATerm), ATerm j_47 (ATerm, ATerm (ATerm)))
{
  ATerm t_55 = NULL,u_55 = NULL,w_55 = NULL,x_55 = NULL,b_56 = NULL;
  t_55 = t;
  o_55 :
  if(match_cons(t_55, sym_TCons_2))
    {
      u_55 = ATgetArgument(t_55, 0);
      w_55 = ATgetArgument(t_55, 1);
      p_55 :
      if(match_cons(w_55, sym_TCons_2))
        {
          x_55 = ATgetArgument(w_55, 0);
          b_56 = ATgetArgument(w_55, 1);
          s_55 :
          if(match_cons(b_56, sym_TNil_0))
            {
              ATerm e_56 = NULL;
              t = not_null(u_55);
              {
                ATerm g_56 = NULL;
                t = i_47(t);
                e_56 = t;
                {
                  ATerm i_56 = NULL;
                  t = map_1(t, new_0);
                  g_56 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_56), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_56), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm k_56 = NULL;
                    t = zip_1(t, _id);
                    i_56 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_56), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_55), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm m_56 = NULL;
                      t = conc_0(t);
                      k_56 = t;
                      t = not_null(u_55);
                      {
                        ATerm e_2 (ATerm t)
                        {
                          t = not_null(g_56);
                          return(t);
                        }
                        t = j_47(t, e_2);
                        m_56 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_56), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_56), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
  w_56 = t;
  v_56 :
  if(match_cons(w_56, sym_TCons_2))
    {
      x_56 = ATgetArgument(w_56, 0);
      y_56 = ATgetArgument(w_56, 1);
      t = not_null(x_56);
    }
  else
    _fail(t);
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm w_46 (ATerm, ATerm (ATerm)))
{
  ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL;
  g_57 = t;
  d_57 :
  if(match_cons(g_57, sym_TCons_2))
    {
      h_57 = ATgetArgument(g_57, 0);
      i_57 = ATgetArgument(g_57, 1);
      e_57 :
      if(match_cons(i_57, sym_TCons_2))
        {
          j_57 = ATgetArgument(i_57, 0);
          k_57 = ATgetArgument(i_57, 1);
          f_57 :
          if(match_cons(k_57, sym_TNil_0))
            {
              t = not_null(h_57);
              {
                ATerm f_2 (ATerm t)
                {
                  ATerm g_2 (ATerm t)
                  {
                    t = not_null(j_57);
                    return(t);
                  }
                  t = split_2(t, _id, g_2);
                  t = lookup_0(t);
                  return(t);
                }
                t = w_46(t, f_2);
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
ATerm all_dist_1 (ATerm t, ATerm x_60 (ATerm))
{
  ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL;
  a_58 = t;
  q_57 :
  if(match_cons(a_58, sym_TCons_2))
    {
      b_58 = ATgetArgument(a_58, 0);
      c_58 = ATgetArgument(a_58, 1);
      s_57 :
      if(match_cons(c_58, sym_TCons_2))
        {
          d_58 = ATgetArgument(c_58, 0);
          e_58 = ATgetArgument(c_58, 1);
          z_57 :
          if(match_cons(e_58, sym_TNil_0))
            {
              t = not_null(b_58);
              {
                ATerm h_2 (ATerm t)
                {
                  ATerm h_58 = NULL;
                  h_58 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_58), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = x_60(t);
                  return(t);
                }
                t = _all(t, h_2);
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
ATerm env_alltd_1 (ATerm t, ATerm c_61 (ATerm))
{
  ATerm l_58 (ATerm t)
  {
    ATerm n_9 = t;
    if(PushChoice()==0)
      {
        t = c_61(t);
        PopChoice();
      }
    else
      {
        t = n_9;
        t = all_dist_1(t, l_58);
      }
    return(t);
  }
  t = l_58(t);
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm u_47 (ATerm), ATerm v_47 (ATerm, ATerm (ATerm)), ATerm w_47 (ATerm), ATerm x_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm y_47 (ATerm, ATerm (ATerm)), ATerm z_47 (ATerm))
{
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL;
  t = subs_args_0(t);
  q_58 = t;
  n_58 :
  if(match_cons(q_58, sym_TCons_2))
    {
      r_58 = ATgetArgument(q_58, 0);
      s_58 = ATgetArgument(q_58, 1);
      o_58 :
      if(match_cons(s_58, sym_TCons_2))
        {
          t_58 = ATgetArgument(s_58, 0);
          u_58 = ATgetArgument(s_58, 1);
          p_58 :
          if(match_cons(u_58, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm y_58 (ATerm t)
                {
                  ATerm i_2 (ATerm t)
                  {
                    ATerm o_9 = t;
                    if(PushChoice()==0)
                      {
                        t = RnVar_1(t, v_47);
                        PopChoice();
                      }
                    else
                      {
                        t = o_9;
                        {
                          ATerm p_9 = t;
                          if(PushChoice()==0)
                            {
                              t = Fst_0(t);
                              {
                                ATerm j_2 (ATerm t)
                                {
                                  t = not_null(r_58);
                                  return(t);
                                }
                                t = SubsVar_2(t, u_47, j_2);
                                t = z_47(t);
                              }
                              PopChoice();
                            }
                          else
                            {
                              t = p_9;
                              t = RnBinding_2(t, w_47, y_47);
                              t = DistBinding_2(t, y_58, x_47);
                            }
                        }
                      }
                    return(t);
                  }
                  t = env_alltd_1(t, i_2);
                  return(t);
                }
                t = y_58(t);
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
ATerm substitute_5 (ATerm t, ATerm b_48 (ATerm), ATerm c_48 (ATerm, ATerm (ATerm)), ATerm d_48 (ATerm), ATerm e_48 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm f_48 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, b_48, c_48, d_48, e_48, f_48, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, tpaste_1);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm n_45 (ATerm))
{
  ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL;
  g_59 = t;
  f_59 :
  if(match_cons(g_59, sym_Op_2))
    {
      h_59 = ATgetArgument(g_59, 0);
      i_59 = ATgetArgument(g_59, 1);
      {
        ATerm n_59 = NULL,o_59 = NULL;
        t = n_45(t);
        {
          ATerm k_2 (ATerm t)
          {
            ATerm q_9;
            q_9 = t;
            {
              ATerm p_59 = NULL,q_59 = NULL,t_59 = NULL,u_59 = NULL;
              p_59 = t;
              e_59 :
              if(match_cons(p_59, sym_Overlay_3))
                {
                  q_59 = ATgetArgument(p_59, 0);
                  t_59 = ATgetArgument(p_59, 1);
                  u_59 = ATgetArgument(p_59, 2);
                  {
                    ATerm v_59 = NULL,w_59 = NULL,z_59 = NULL;
                    if(h_59 != NULL && h_59 != q_59)
                      _fail(q_59);
                    else
                      h_59 = q_59;
                    if(v_59 != NULL && v_59 != t_59)
                      _fail(t_59);
                    else
                      v_59 = t_59;
                    if(w_59 != NULL && w_59 != u_59)
                      _fail(u_59);
                    else
                      w_59 = u_59;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_59), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm b_60 = NULL;
                      t = zip_1(t, _id);
                      z_59 = t;
                      {
                        ATerm c_60 = NULL;
                        t = not_null(z_59);
                        b_60 = t;
                        if(n_59 != NULL && n_59 != b_60)
                          _fail(b_60);
                        else
                          n_59 = b_60;
                        t = not_null(w_59);
                        c_60 = t;
                        if(o_59 != NULL && o_59 != c_60)
                          _fail(c_60);
                        else
                          o_59 = c_60;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_59), (ATerm) ATmakeAppl(sym_TNil_0)));
                      }
                    }
                  }
                }
              else
                _fail(t);
            }
            t = q_9;
            return(t);
          }
          t = fetch_1(t, k_2);
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_59), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = tsubstitute_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm exp_overlays1_1 (ATerm t, ATerm o_45 (ATerm))
{
  ATerm l_2 (ATerm t)
  {
    ATerm r_9;
    r_9 = t;
    {
      ATerm s_9 = t;
      if(PushChoice()==0)
        {
          ATerm j_60 = NULL;
          t = o_45(t);
          j_60 = t;
          i_60 :
          if(!(match_cons(j_60, sym_Nil_0)))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        t = s_9;
    }
    t = r_9;
    {
      ATerm m_2 (ATerm t)
      {
        ATerm n_2 (ATerm t)
        {
          t = ExpOverlay_1(t, o_45);
          return(t);
        }
        t = repeat_1(t, n_2);
        return(t);
      }
      t = topdown_1(t, m_2);
    }
    return(t);
  }
  t = try_1(t, l_2);
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL,p_61 = NULL,q_61 = NULL;
  e_61 = t;
  r_60 :
  if(match_cons(e_61, sym_Specification_1))
    {
      f_61 = ATgetArgument(e_61, 0);
      s_60 :
      if(match_cons(f_61, sym_Cons_2))
        {
          g_61 = ATgetArgument(f_61, 0);
          i_61 = ATgetArgument(f_61, 1);
          u_60 :
          if(match_cons(g_61, sym_Signature_1))
            {
              h_61 = ATgetArgument(g_61, 0);
              v_60 :
              if(match_cons(i_61, sym_Cons_2))
                {
                  j_61 = ATgetArgument(i_61, 0);
                  l_61 = ATgetArgument(i_61, 1);
                  w_60 :
                  if(match_cons(j_61, sym_Overlays_1))
                    {
                      k_61 = ATgetArgument(j_61, 0);
                      z_60 :
                      if(match_cons(l_61, sym_Cons_2))
                        {
                          m_61 = ATgetArgument(l_61, 0);
                          q_61 = ATgetArgument(l_61, 1);
                          a_61 :
                          if(match_cons(m_61, sym_Strategies_1))
                            {
                              p_61 = ATgetArgument(m_61, 0);
                              b_61 :
                              if(match_cons(q_61, sym_Nil_0))
                                {
                                  ATerm u_61 = NULL;
                                  t = not_null(k_61);
                                  {
                                    ATerm w_61 = NULL;
                                    ATerm o_2 (ATerm t)
                                    {
                                      t = not_null(k_61);
                                      return(t);
                                    }
                                    t = exp_overlays1_1(t, o_2);
                                    u_61 = t;
                                    t = not_null(k_61);
                                    {
                                      ATerm c_62 = NULL;
                                      t = map_1(t, Overlay_to_Congdef_0);
                                      w_61 = t;
                                      t = not_null(p_61);
                                      {
                                        ATerm e_62 = NULL;
                                        ATerm p_2 (ATerm t)
                                        {
                                          t = not_null(u_61);
                                          return(t);
                                        }
                                        t = exp_overlays2_1(t, p_2);
                                        c_62 = t;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_62), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = conc_0(t);
                                        e_62 = t;
                                        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, not_null(h_61)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(e_62)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  ATerm t_9;
  t_9 = t;
  {
    ATerm q_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, q_2, _id);
    t = printnl_0(t);
  }
  t = t_9;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm u_9;
  u_9 = t;
  t = error_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  t = u_9;
  return(t);
}
ATerm MsgR_0 (ATerm t)
{
  ATerm s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL;
  s_62 = t;
  o_62 :
  if(match_cons(s_62, sym_TCons_2))
    {
      t_62 = ATgetArgument(s_62, 0);
      u_62 = ATgetArgument(s_62, 1);
      p_62 :
      if(match_cons(u_62, sym_TCons_2))
        {
          v_62 = ATgetArgument(u_62, 0);
          w_62 = ATgetArgument(u_62, 1);
          q_62 :
          if(match_cons(w_62, sym_TCons_2))
            {
              x_62 = ATgetArgument(w_62, 0);
              y_62 = ATgetArgument(w_62, 1);
              r_62 :
              if(match_cons(y_62, sym_TNil_0))
                {
                  ATerm c_63 = NULL;
                  t = not_null(t_62);
                  {
                    ATerm e_63 = NULL;
                    t = MsgU_0(t);
                    c_63 = t;
                    t = not_null(x_62);
                    t = MsgE_0(t);
                    e_63 = t;
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_63), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_63), (ATerm) ATmakeAppl(sym_Nil_0)));
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
  ATerm q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL;
  q_63 = t;
  m_63 :
  if(match_cons(q_63, sym_Nil_0))
    t = (ATerm) ATmakeAppl(sym_Nil_0);
  else
    {
      if(match_cons(q_63, sym_Cons_2))
        {
          r_63 = ATgetArgument(q_63, 0);
          s_63 = ATgetArgument(q_63, 1);
          n_63 :
          if(match_cons(s_63, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_63), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
          else
            {
              if(match_cons(s_63, sym_Cons_2))
                {
                  t_63 = ATgetArgument(s_63, 0);
                  u_63 = ATgetArgument(s_63, 1);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_63), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_63), not_null(u_63))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  ATerm j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL;
  j_64 = t;
  h_64 :
  if(match_cons(j_64, sym_Nil_0))
    t = (ATerm) ATmakeAppl(sym_Nil_0);
  else
    {
      if(match_cons(j_64, sym_Cons_2))
        {
          k_64 = ATgetArgument(j_64, 0);
          l_64 = ATgetArgument(j_64, 1);
          i_64 :
          if(match_cons(l_64, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_64), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
          else
            {
              if(match_cons(l_64, sym_Cons_2))
                {
                  m_64 = ATgetArgument(l_64, 0);
                  n_64 = ATgetArgument(l_64, 1);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_64), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_64), not_null(n_64))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL;
  i_65 = t;
  a_65 :
  if(match_cons(i_65, sym_TCons_2))
    {
      j_65 = ATgetArgument(i_65, 0);
      k_65 = ATgetArgument(i_65, 1);
      b_65 :
      if(match_cons(k_65, sym_TCons_2))
        {
          l_65 = ATgetArgument(k_65, 0);
          m_65 = ATgetArgument(k_65, 1);
          g_65 :
          if(match_cons(m_65, sym_TCons_2))
            {
              n_65 = ATgetArgument(m_65, 0);
              o_65 = ATgetArgument(m_65, 1);
              h_65 :
              if(match_cons(o_65, sym_TNil_0))
                {
                  ATerm s_65 = NULL;
                  t = not_null(j_65);
                  {
                    ATerm b_66 = NULL;
                    t = MsgU_0(t);
                    s_65 = t;
                    t = not_null(n_65);
                    t = MsgE_0(t);
                    b_66 = t;
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_65), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_66), (ATerm) ATmakeAppl(sym_Nil_0)));
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
  ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL;
  p_66 = t;
  o_66 :
  if(match_cons(p_66, sym_RDef_3))
    {
      q_66 = ATgetArgument(p_66, 0);
      r_66 = ATgetArgument(p_66, 1);
      s_66 = ATgetArgument(p_66, 2);
      {
        ATerm w_66 = NULL;
        t = not_null(s_66);
        t = map_1(t, MsgR_0);
        t = concat_0(t);
        w_66 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error in rule ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_66), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue)), not_null(w_66))));
      }
    }
  else
    {
      if(match_cons(p_66, sym_SDef_3))
        {
          q_66 = ATgetArgument(p_66, 0);
          r_66 = ATgetArgument(p_66, 1);
          s_66 = ATgetArgument(p_66, 2);
          {
            ATerm b_67 = NULL;
            t = not_null(s_66);
            t = map_1(t, MsgS_0);
            t = concat_0(t);
            b_67 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error in definition ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_66), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue)), not_null(b_67))));
          }
        }
      else
        {
          if(match_cons(p_66, sym_Overlay_3))
            {
              q_66 = ATgetArgument(p_66, 0);
              r_66 = ATgetArgument(p_66, 1);
              s_66 = ATgetArgument(p_66, 2);
              {
                ATerm g_67 = NULL;
                t = not_null(s_66);
                t = map_1(t, MsgR_0);
                t = concat_0(t);
                g_67 = t;
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error in overlay ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_66), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue)), not_null(g_67))));
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
ATerm Overlay_3 (ATerm t, ATerm c_41 (ATerm), ATerm d_41 (ATerm), ATerm e_41 (ATerm))
{
  ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL;
  t_67 = t;
  s_67 :
  if(match_cons(t_67, sym_Overlay_3))
    {
      u_67 = ATgetArgument(t_67, 0);
      v_67 = ATgetArgument(t_67, 1);
      w_67 = ATgetArgument(t_67, 2);
      {
        ATerm a_68 = NULL;
        t = not_null(u_67);
        {
          ATerm c_68 = NULL;
          t = c_41(t);
          a_68 = t;
          t = not_null(v_67);
          {
            ATerm e_68 = NULL;
            t = d_41(t);
            c_68 = t;
            t = not_null(w_67);
            t = e_41(t);
            e_68 = t;
            t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(a_68), not_null(c_68), not_null(e_68));
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
  ATerm z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL;
  z_68 = t;
  o_68 :
  if(match_cons(z_68, sym_TCons_2))
    {
      a_69 = ATgetArgument(z_68, 0);
      h_69 = ATgetArgument(z_68, 1);
      p_68 :
      if(match_cons(a_69, sym_TCons_2))
        {
          b_69 = ATgetArgument(a_69, 0);
          c_69 = ATgetArgument(a_69, 1);
          q_68 :
          if(match_cons(c_69, sym_TCons_2))
            {
              d_69 = ATgetArgument(c_69, 0);
              e_69 = ATgetArgument(c_69, 1);
              r_68 :
              if(match_cons(e_69, sym_TCons_2))
                {
                  f_69 = ATgetArgument(e_69, 0);
                  g_69 = ATgetArgument(e_69, 1);
                  s_68 :
                  if(match_cons(g_69, sym_TNil_0))
                    {
                      t_68 :
                      if(match_cons(h_69, sym_TCons_2))
                        {
                          i_69 = ATgetArgument(h_69, 0);
                          p_69 = ATgetArgument(h_69, 1);
                          u_68 :
                          if(match_cons(i_69, sym_TCons_2))
                            {
                              j_69 = ATgetArgument(i_69, 0);
                              k_69 = ATgetArgument(i_69, 1);
                              v_68 :
                              if(match_cons(k_69, sym_TCons_2))
                                {
                                  l_69 = ATgetArgument(k_69, 0);
                                  m_69 = ATgetArgument(k_69, 1);
                                  w_68 :
                                  if(match_cons(m_69, sym_TCons_2))
                                    {
                                      n_69 = ATgetArgument(m_69, 0);
                                      o_69 = ATgetArgument(m_69, 1);
                                      x_68 :
                                      if(match_cons(o_69, sym_TNil_0))
                                        {
                                          y_68 :
                                          if(match_cons(p_69, sym_TNil_0))
                                            {
                                              ATerm x_69 = NULL;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_69), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              {
                                                ATerm z_69 = NULL;
                                                t = union_0(t);
                                                x_69 = t;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_69), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                {
                                                  ATerm b_70 = NULL;
                                                  t = union_0(t);
                                                  z_69 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_69), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = union_0(t);
                                                  b_70 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_70), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL;
  k_70 = t;
  i_70 :
  if(match_cons(k_70, sym_TCons_2))
    {
      l_70 = ATgetArgument(k_70, 0);
      m_70 = ATgetArgument(k_70, 1);
      j_70 :
      if(match_cons(m_70, sym_TCons_2))
        {
          n_70 = ATgetArgument(m_70, 0);
          o_70 = ATgetArgument(m_70, 1);
          t = not_null(n_70);
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
  ATerm v_70 = NULL;
  v_70 = t;
  t = SSL_explode_term(not_null(v_70));
  return(t);
}
ATerm default_join_0 (ATerm t)
{
  t = explode_term_0(t);
  t = Snd_0(t);
  {
    ATerm r_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
      return(t);
    }
    ATerm s_2 (ATerm t)
    {
      t = cart_1(t, Union_0);
      return(t);
    }
    t = foldr_2(t, r_2, s_2);
  }
  return(t);
}
ATerm SeqUnion_0 (ATerm t)
{
  ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL;
  p_71 = t;
  d_71 :
  if(match_cons(p_71, sym_TCons_2))
    {
      q_71 = ATgetArgument(p_71, 0);
      x_71 = ATgetArgument(p_71, 1);
      e_71 :
      if(match_cons(q_71, sym_TCons_2))
        {
          r_71 = ATgetArgument(q_71, 0);
          s_71 = ATgetArgument(q_71, 1);
          f_71 :
          if(match_cons(s_71, sym_TCons_2))
            {
              t_71 = ATgetArgument(s_71, 0);
              u_71 = ATgetArgument(s_71, 1);
              h_71 :
              if(match_cons(u_71, sym_TCons_2))
                {
                  v_71 = ATgetArgument(u_71, 0);
                  w_71 = ATgetArgument(u_71, 1);
                  i_71 :
                  if(match_cons(w_71, sym_TNil_0))
                    {
                      j_71 :
                      if(match_cons(x_71, sym_TCons_2))
                        {
                          y_71 = ATgetArgument(x_71, 0);
                          g_72 = ATgetArgument(x_71, 1);
                          k_71 :
                          if(match_cons(y_71, sym_TCons_2))
                            {
                              a_72 = ATgetArgument(y_71, 0);
                              b_72 = ATgetArgument(y_71, 1);
                              l_71 :
                              if(match_cons(b_72, sym_TCons_2))
                                {
                                  c_72 = ATgetArgument(b_72, 0);
                                  d_72 = ATgetArgument(b_72, 1);
                                  m_71 :
                                  if(match_cons(d_72, sym_TCons_2))
                                    {
                                      e_72 = ATgetArgument(d_72, 0);
                                      f_72 = ATgetArgument(d_72, 1);
                                      n_71 :
                                      if(match_cons(f_72, sym_TNil_0))
                                        {
                                          o_71 :
                                          if(match_cons(g_72, sym_TNil_0))
                                            {
                                              ATerm n_72 = NULL;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              {
                                                ATerm p_72 = NULL;
                                                t = diff_0(t);
                                                n_72 = t;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_72), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                {
                                                  ATerm r_72 = NULL;
                                                  t = union_0(t);
                                                  p_72 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_72), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  {
                                                    ATerm t_72 = NULL;
                                                    t = union_0(t);
                                                    r_72 = t;
                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_72), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                    t = union_0(t);
                                                    t_72 = t;
                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_72), (ATerm) ATmakeAppl(sym_TNil_0))));
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
ATerm cart_1 (ATerm t, ATerm r_57 (ATerm))
{
  ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL;
  g_73 = t;
  d_73 :
  if(match_cons(g_73, sym_TCons_2))
    {
      h_73 = ATgetArgument(g_73, 0);
      i_73 = ATgetArgument(g_73, 1);
      e_73 :
      if(match_cons(i_73, sym_TCons_2))
        {
          j_73 = ATgetArgument(i_73, 0);
          k_73 = ATgetArgument(i_73, 1);
          f_73 :
          if(match_cons(k_73, sym_TNil_0))
            {
              t = not_null(h_73);
              {
                ATerm t_2 (ATerm t)
                {
                  ATerm n_73 = NULL;
                  n_73 = t;
                  t = not_null(j_73);
                  {
                    ATerm u_2 (ATerm t)
                    {
                      ATerm p_73 = NULL;
                      p_73 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = r_57(t);
                      return(t);
                    }
                    t = map_1(t, u_2);
                  }
                  return(t);
                }
                t = map_1(t, t_2);
                {
                  ATerm v_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = foldr_2(t, v_2, union_0);
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
  ATerm w_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = cart_1(t, SeqUnion_0);
    return(t);
  }
  t = foldr_2(t, w_2, x_2);
  return(t);
}
ATerm JoinScope_1 (ATerm t, ATerm j_44 (ATerm))
{
  ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL;
  g_74 = t;
  c_74 :
  if(match_cons(g_74, sym_TCons_2))
    {
      h_74 = ATgetArgument(g_74, 0);
      i_74 = ATgetArgument(g_74, 1);
      d_74 :
      if(match_cons(i_74, sym_TCons_2))
        {
          j_74 = ATgetArgument(i_74, 0);
          k_74 = ATgetArgument(i_74, 1);
          e_74 :
          if(match_cons(k_74, sym_TCons_2))
            {
              l_74 = ATgetArgument(k_74, 0);
              m_74 = ATgetArgument(k_74, 1);
              f_74 :
              if(match_cons(m_74, sym_TNil_0))
                {
                  ATerm q_74 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TNil_0);
                  {
                    ATerm s_74 = NULL;
                    t = j_44(t);
                    q_74 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm u_74 = NULL;
                      t = diff_0(t);
                      s_74 = t;
                      t = (ATerm) ATmakeAppl(sym_TNil_0);
                      {
                        ATerm w_74 = NULL;
                        t = j_44(t);
                        u_74 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                        {
                          ATerm y_74 = NULL;
                          t = isect_0(t);
                          w_74 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = conc_0(t);
                          y_74 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_74), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL;
  t_75 = t;
  s_75 :
  if(match_cons(t_75, sym_Seqs_1))
    {
      u_75 = ATgetArgument(t_75, 0);
      t = not_null(u_75);
      t = seqs_join_0(t);
    }
  else
    {
      if(match_cons(t_75, sym_Seq_2))
        {
          u_75 = ATgetArgument(t_75, 0);
          v_75 = ATgetArgument(t_75, 1);
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_75), (ATerm) ATmakeAppl(sym_Nil_0)));
          t = seqs_join_0(t);
        }
      else
        {
          if(match_cons(t_75, sym_Rule_3))
            {
              u_75 = ATgetArgument(t_75, 0);
              v_75 = ATgetArgument(t_75, 1);
              w_75 = ATgetArgument(t_75, 2);
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_75), (ATerm) ATmakeAppl(sym_Nil_0))));
              t = seqs_join_0(t);
            }
          else
            {
              if(match_cons(t_75, sym_StratRule_3))
                {
                  u_75 = ATgetArgument(t_75, 0);
                  v_75 = ATgetArgument(t_75, 1);
                  w_75 = ATgetArgument(t_75, 2);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_75), (ATerm) ATmakeAppl(sym_Nil_0))));
                  t = seqs_join_0(t);
                }
              else
                {
                  if(match_cons(t_75, sym_MA_2))
                    {
                      u_75 = ATgetArgument(t_75, 0);
                      v_75 = ATgetArgument(t_75, 1);
                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_75), (ATerm) ATmakeAppl(sym_Nil_0)));
                      t = seqs_join_0(t);
                    }
                  else
                    {
                      if(match_cons(t_75, sym_AM_2))
                        {
                          u_75 = ATgetArgument(t_75, 0);
                          v_75 = ATgetArgument(t_75, 1);
                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_75), (ATerm) ATmakeAppl(sym_Nil_0)));
                          t = seqs_join_0(t);
                        }
                      else
                        {
                          if(match_cons(t_75, sym_BA_2))
                            {
                              u_75 = ATgetArgument(t_75, 0);
                              v_75 = ATgetArgument(t_75, 1);
                              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_75), (ATerm) ATmakeAppl(sym_Nil_0)));
                              t = seqs_join_0(t);
                            }
                          else
                            {
                              if(match_cons(t_75, sym_BAM_3))
                                {
                                  u_75 = ATgetArgument(t_75, 0);
                                  v_75 = ATgetArgument(t_75, 1);
                                  w_75 = ATgetArgument(t_75, 2);
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_75), (ATerm) ATmakeAppl(sym_Nil_0))));
                                  t = seqs_join_0(t);
                                }
                              else
                                {
                                  if(match_cons(t_75, sym_Cong_2))
                                    {
                                      u_75 = ATgetArgument(t_75, 0);
                                      v_75 = ATgetArgument(t_75, 1);
                                      t = not_null(v_75);
                                      t = seqs_join_0(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t_75, sym_Scope_2))
                                        {
                                          u_75 = ATgetArgument(t_75, 0);
                                          v_75 = ATgetArgument(t_75, 1);
                                          t = not_null(v_75);
                                          {
                                            ATerm y_2 (ATerm t)
                                            {
                                              ATerm z_2 (ATerm t)
                                              {
                                                t = not_null(u_75);
                                                return(t);
                                              }
                                              t = JoinScope_1(t, z_2);
                                              return(t);
                                            }
                                            t = map_1(t, y_2);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t_75, sym_Overlay_3))
                                            {
                                              u_75 = ATgetArgument(t_75, 0);
                                              v_75 = ATgetArgument(t_75, 1);
                                              w_75 = ATgetArgument(t_75, 2);
                                              {
                                                ATerm w_76 = NULL;
                                                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_75), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_75), (ATerm) ATmakeAppl(sym_Nil_0)));
                                                t = seqs_join_0(t);
                                                w_76 = t;
                                                t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(u_75), not_null(v_75), not_null(w_76));
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
ATerm Cong_2 (ATerm t, ATerm b_43 (ATerm), ATerm c_43 (ATerm))
{
  ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL;
  o_77 = t;
  n_77 :
  if(match_cons(o_77, sym_Cong_2))
    {
      p_77 = ATgetArgument(o_77, 0);
      q_77 = ATgetArgument(o_77, 1);
      {
        ATerm t_77 = NULL;
        t = not_null(p_77);
        {
          ATerm v_77 = NULL;
          t = b_43(t);
          t_77 = t;
          t = not_null(q_77);
          t = c_43(t);
          v_77 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(t_77), not_null(v_77));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm use_term_0 (ATerm t)
{
  ATerm c_78 = NULL;
  ATerm f_78 = NULL;
  c_78 = t;
  t = tvars_0(t);
  f_78 = t;
  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(f_78), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
  return(t);
}
ATerm def_term_0 (ATerm t)
{
  ATerm l_78 = NULL;
  ATerm n_78 = NULL;
  l_78 = t;
  t = tvars_0(t);
  n_78 = t;
  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_78), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm n_40 (ATerm), ATerm o_40 (ATerm), ATerm p_40 (ATerm))
{
  ATerm x_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL;
  x_78 = t;
  w_78 :
  if(match_cons(x_78, sym_Rule_3))
    {
      z_78 = ATgetArgument(x_78, 0);
      a_79 = ATgetArgument(x_78, 1);
      b_79 = ATgetArgument(x_78, 2);
      {
        ATerm f_79 = NULL;
        t = not_null(z_78);
        {
          ATerm h_79 = NULL;
          t = n_40(t);
          f_79 = t;
          t = not_null(a_79);
          {
            ATerm k_79 = NULL;
            t = o_40(t);
            h_79 = t;
            t = not_null(b_79);
            t = p_40(t);
            k_79 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_79), not_null(h_79), not_null(k_79));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BAM_3 (ATerm t, ATerm v_39 (ATerm), ATerm w_39 (ATerm), ATerm x_39 (ATerm))
{
  ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL;
  x_79 = t;
  w_79 :
  if(match_cons(x_79, sym_BAM_3))
    {
      y_79 = ATgetArgument(x_79, 0);
      z_79 = ATgetArgument(x_79, 1);
      a_80 = ATgetArgument(x_79, 2);
      {
        ATerm g_80 = NULL;
        t = not_null(y_79);
        {
          ATerm i_80 = NULL;
          t = v_39(t);
          g_80 = t;
          t = not_null(z_79);
          {
            ATerm k_80 = NULL;
            t = w_39(t);
            i_80 = t;
            t = not_null(a_80);
            t = x_39(t);
            k_80 = t;
            t = (ATerm) ATmakeAppl(sym_BAM_3, not_null(g_80), not_null(i_80), not_null(k_80));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BA_2 (ATerm t, ATerm t_39 (ATerm), ATerm u_39 (ATerm))
{
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL;
  w_80 = t;
  v_80 :
  if(match_cons(w_80, sym_BA_2))
    {
      x_80 = ATgetArgument(w_80, 0);
      y_80 = ATgetArgument(w_80, 1);
      {
        ATerm b_81 = NULL;
        t = not_null(x_80);
        {
          ATerm d_81 = NULL;
          t = t_39(t);
          b_81 = t;
          t = not_null(y_80);
          t = u_39(t);
          d_81 = t;
          t = (ATerm) ATmakeAppl(sym_BA_2, not_null(b_81), not_null(d_81));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm AM_2 (ATerm t, ATerm r_39 (ATerm), ATerm s_39 (ATerm))
{
  ATerm m_81 = NULL,n_81 = NULL,o_81 = NULL;
  m_81 = t;
  l_81 :
  if(match_cons(m_81, sym_AM_2))
    {
      n_81 = ATgetArgument(m_81, 0);
      o_81 = ATgetArgument(m_81, 1);
      {
        ATerm r_81 = NULL;
        t = not_null(n_81);
        {
          ATerm t_81 = NULL;
          t = r_39(t);
          r_81 = t;
          t = not_null(o_81);
          t = s_39(t);
          t_81 = t;
          t = (ATerm) ATmakeAppl(sym_AM_2, not_null(r_81), not_null(t_81));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MA_2 (ATerm t, ATerm p_39 (ATerm), ATerm q_39 (ATerm))
{
  ATerm c_82 = NULL,d_82 = NULL,e_82 = NULL;
  c_82 = t;
  b_82 :
  if(match_cons(c_82, sym_MA_2))
    {
      d_82 = ATgetArgument(c_82, 0);
      e_82 = ATgetArgument(c_82, 1);
      {
        ATerm h_82 = NULL;
        t = not_null(d_82);
        {
          ATerm j_82 = NULL;
          t = p_39(t);
          h_82 = t;
          t = not_null(e_82);
          t = q_39(t);
          j_82 = t;
          t = (ATerm) ATmakeAppl(sym_MA_2, not_null(h_82), not_null(j_82));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm j_43 (ATerm))
{
  ATerm r_82 = NULL,s_82 = NULL;
  r_82 = t;
  q_82 :
  if(match_cons(r_82, sym_Match_1))
    {
      s_82 = ATgetArgument(r_82, 0);
      {
        ATerm u_82 = NULL;
        t = not_null(s_82);
        t = j_43(t);
        u_82 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(u_82));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm k_43 (ATerm))
{
  ATerm b_83 = NULL,c_83 = NULL;
  b_83 = t;
  a_83 :
  if(match_cons(b_83, sym_Build_1))
    {
      c_83 = ATgetArgument(b_83, 0);
      {
        ATerm f_83 = NULL;
        t = not_null(c_83);
        t = k_43(t);
        f_83 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(f_83));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm constructs_1 (ATerm t, ATerm i_44 (ATerm))
{
  ATerm v_9 = t;
  if(PushChoice()==0)
    {
      t = Build_1(t, use_term_0);
      PopChoice();
    }
  else
    {
      t = v_9;
      {
        ATerm w_9 = t;
        if(PushChoice()==0)
          {
            t = Match_1(t, def_term_0);
            PopChoice();
          }
        else
          {
            t = w_9;
            {
              ATerm x_9 = t;
              if(PushChoice()==0)
                {
                  t = MA_2(t, def_term_0, i_44);
                  PopChoice();
                }
              else
                {
                  t = x_9;
                  {
                    ATerm y_9 = t;
                    if(PushChoice()==0)
                      {
                        t = AM_2(t, i_44, def_term_0);
                        PopChoice();
                      }
                    else
                      {
                        t = y_9;
                        {
                          ATerm z_9 = t;
                          if(PushChoice()==0)
                            {
                              t = BA_2(t, i_44, use_term_0);
                              PopChoice();
                            }
                          else
                            {
                              t = z_9;
                              {
                                ATerm a_10 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BAM_3(t, i_44, use_term_0, def_term_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = a_10;
                                    {
                                      ATerm b_10 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Scope_2(t, _id, i_44);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = b_10;
                                          {
                                            ATerm d_10 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = Rule_3(t, def_term_0, use_term_0, i_44);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = d_10;
                                                {
                                                  ATerm g_10 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = Overlay_3(t, _id, _id, use_term_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = g_10;
                                                      {
                                                        ATerm a_3 (ATerm t)
                                                        {
                                                          t = map_1(t, i_44);
                                                          return(t);
                                                        }
                                                        t = Cong_2(t, _id, a_3);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm h_10 = t;
  if(PushChoice()==0)
    {
      t = constructs_1(t, use_def_0);
      PopChoice();
    }
  else
    {
      t = h_10;
      t = _all(t, use_def_0);
    }
  {
    ATerm i_10 = t;
    if(PushChoice()==0)
      {
        t = UDjoin_0(t);
        PopChoice();
      }
    else
      {
        t = i_10;
        t = default_join_0(t);
      }
  }
  return(t);
}
ATerm RDef_3 (ATerm t, ATerm v_40 (ATerm), ATerm w_40 (ATerm), ATerm x_40 (ATerm))
{
  ATerm r_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL;
  r_83 = t;
  q_83 :
  if(match_cons(r_83, sym_RDef_3))
    {
      s_83 = ATgetArgument(r_83, 0);
      t_83 = ATgetArgument(r_83, 1);
      u_83 = ATgetArgument(r_83, 2);
      {
        ATerm b_84 = NULL;
        t = not_null(s_83);
        {
          ATerm d_84 = NULL;
          t = v_40(t);
          b_84 = t;
          t = not_null(t_83);
          {
            ATerm f_84 = NULL;
            t = w_40(t);
            d_84 = t;
            t = not_null(u_83);
            t = x_40(t);
            f_84 = t;
            t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(b_84), not_null(d_84), not_null(f_84));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm n_42 (ATerm), ATerm o_42 (ATerm), ATerm p_42 (ATerm))
{
  ATerm q_84 = NULL,r_84 = NULL,s_84 = NULL,t_84 = NULL;
  q_84 = t;
  p_84 :
  if(match_cons(q_84, sym_SDef_3))
    {
      r_84 = ATgetArgument(q_84, 0);
      s_84 = ATgetArgument(q_84, 1);
      t_84 = ATgetArgument(q_84, 2);
      {
        ATerm x_84 = NULL;
        t = not_null(r_84);
        {
          ATerm z_84 = NULL;
          t = n_42(t);
          x_84 = t;
          t = not_null(s_84);
          {
            ATerm b_85 = NULL;
            t = o_42(t);
            z_84 = t;
            t = not_null(t_84);
            t = p_42(t);
            b_85 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(x_84), not_null(z_84), not_null(b_85));
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
  ATerm j_10 = t;
  if(PushChoice()==0)
    {
      ATerm b_3 (ATerm t)
      {
        t = use_def_0(t);
        {
          ATerm k_10 = t;
          if(PushChoice()==0)
            {
              ATerm c_3 (ATerm t)
              {
                ATerm d_3 (ATerm t)
                {
                  ATerm e_3 (ATerm t)
                  {
                    t = TCons_2(t, Nil_0, TNil_0);
                    return(t);
                  }
                  t = TCons_2(t, _id, e_3);
                  return(t);
                }
                t = TCons_2(t, Nil_0, d_3);
                return(t);
              }
              t = Cons_2(t, c_3, Nil_0);
              PopChoice();
              _fail(t);
            }
          else
            t = k_10;
        }
        return(t);
      }
      t = SDef_3(t, _id, _id, b_3);
      t = err_msg_0(t);
      PopChoice();
    }
  else
    {
      t = j_10;
      {
        ATerm l_10 = t;
        if(PushChoice()==0)
          {
            ATerm f_3 (ATerm t)
            {
              t = use_def_0(t);
              {
                ATerm m_10 = t;
                if(PushChoice()==0)
                  {
                    ATerm g_3 (ATerm t)
                    {
                      ATerm h_3 (ATerm t)
                      {
                        ATerm i_3 (ATerm t)
                        {
                          t = TCons_2(t, Nil_0, TNil_0);
                          return(t);
                        }
                        t = TCons_2(t, _id, i_3);
                        return(t);
                      }
                      t = TCons_2(t, Nil_0, h_3);
                      return(t);
                    }
                    t = Cons_2(t, g_3, Nil_0);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = m_10;
              }
              return(t);
            }
            t = RDef_3(t, _id, _id, f_3);
            t = err_msg_0(t);
            PopChoice();
          }
        else
          {
            t = l_10;
            t = Overlay_3(t, _id, _id, _id);
            t = use_def_0(t);
            {
              ATerm n_10 = t;
              if(PushChoice()==0)
                {
                  ATerm j_3 (ATerm t)
                  {
                    ATerm k_3 (ATerm t)
                    {
                      ATerm l_3 (ATerm t)
                      {
                        ATerm m_3 (ATerm t)
                        {
                          t = TCons_2(t, Nil_0, TNil_0);
                          return(t);
                        }
                        t = TCons_2(t, Nil_0, m_3);
                        return(t);
                      }
                      t = TCons_2(t, Nil_0, l_3);
                      return(t);
                    }
                    t = Cons_2(t, k_3, Nil_0);
                    return(t);
                  }
                  t = Overlay_3(t, _id, _id, j_3);
                  PopChoice();
                  _fail(t);
                }
              else
                t = n_10;
              t = err_msg_0(t);
            }
          }
      }
    }
  return(t);
}
ATerm defs_use_def_0 (ATerm t)
{
  ATerm i_85 = NULL;
  t = filter_1(t, check_0);
  i_85 = t;
  h_85 :
  if(!(match_cons(i_85, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm Overlays_1 (ATerm t, ATerm g_41 (ATerm))
{
  ATerm m_85 = NULL,n_85 = NULL;
  m_85 = t;
  l_85 :
  if(match_cons(m_85, sym_Overlays_1))
    {
      n_85 = ATgetArgument(m_85, 0);
      {
        ATerm p_85 = NULL;
        t = not_null(n_85);
        t = g_41(t);
        p_85 = t;
        t = (ATerm) ATmakeAppl(sym_Overlays_1, not_null(p_85));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm f_41 (ATerm))
{
  ATerm w_85 = NULL,x_85 = NULL;
  w_85 = t;
  v_85 :
  if(match_cons(w_85, sym_Signature_1))
    {
      x_85 = ATgetArgument(w_85, 0);
      {
        ATerm z_85 = NULL;
        t = not_null(x_85);
        t = f_41(t);
        z_85 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, not_null(z_85));
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
        t = Cons_2(t, s_3, Nil_0);
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
  ATerm n_86 = NULL,p_86 = NULL,q_86 = NULL,r_86 = NULL,s_86 = NULL,u_86 = NULL,v_86 = NULL,w_86 = NULL,x_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL,b_87 = NULL;
  n_86 = t;
  e_86 :
  if(match_cons(n_86, sym_TCons_2))
    {
      p_86 = ATgetArgument(n_86, 0);
      v_86 = ATgetArgument(n_86, 1);
      f_86 :
      if(match_cons(p_86, sym_TCons_2))
        {
          q_86 = ATgetArgument(p_86, 0);
          r_86 = ATgetArgument(p_86, 1);
          g_86 :
          if(match_cons(r_86, sym_TCons_2))
            {
              s_86 = ATgetArgument(r_86, 0);
              u_86 = ATgetArgument(r_86, 1);
              h_86 :
              if(match_cons(u_86, sym_TNil_0))
                {
                  i_86 :
                  if(match_cons(v_86, sym_TCons_2))
                    {
                      w_86 = ATgetArgument(v_86, 0);
                      b_87 = ATgetArgument(v_86, 1);
                      j_86 :
                      if(match_cons(w_86, sym_TCons_2))
                        {
                          x_86 = ATgetArgument(w_86, 0);
                          y_86 = ATgetArgument(w_86, 1);
                          k_86 :
                          if(match_cons(y_86, sym_TCons_2))
                            {
                              z_86 = ATgetArgument(y_86, 0);
                              a_87 = ATgetArgument(y_86, 1);
                              l_86 :
                              if(match_cons(a_87, sym_TNil_0))
                                {
                                  m_86 :
                                  if(match_cons(b_87, sym_TNil_0))
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_86), not_null(x_86)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_86), not_null(z_86)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm l_87 = NULL,m_87 = NULL,n_87 = NULL;
  l_87 = t;
  k_87 :
  if(match_cons(l_87, sym_Cons_2))
    {
      m_87 = ATgetArgument(l_87, 0);
      n_87 = ATgetArgument(l_87, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_87), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_87), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm u_87 = NULL;
  u_87 = t;
  t_87 :
  if(match_cons(u_87, sym_Nil_0))
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
  ATerm t_3 (ATerm t)
  {
    ATerm x_87 = NULL;
    x_87 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_87));
    return(t);
  }
  t = map_1(t, t_3);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL;
  d_88 = t;
  b_88 :
  if(match_cons(d_88, sym_Cons_2))
    {
      e_88 = ATgetArgument(d_88, 0);
      f_88 = ATgetArgument(d_88, 1);
      t = not_null(f_88);
    }
  else
    _fail(t);
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm o_88 = NULL,p_88 = NULL,q_88 = NULL,r_88 = NULL,s_88 = NULL;
  o_88 = t;
  k_88 :
  if(match_cons(o_88, sym_TCons_2))
    {
      p_88 = ATgetArgument(o_88, 0);
      q_88 = ATgetArgument(o_88, 1);
      l_88 :
      if(match_cons(q_88, sym_TCons_2))
        {
          r_88 = ATgetArgument(q_88, 0);
          s_88 = ATgetArgument(q_88, 1);
          n_88 :
          if(match_cons(s_88, sym_TNil_0))
            {
              t = not_null(p_88);
              {
                ATerm w_88 (ATerm t)
                {
                  ATerm o_10 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = o_10;
                      {
                        ATerm p_10 = t;
                        if(PushChoice()==0)
                          {
                            ATerm q_10;
                            q_10 = t;
                            {
                              ATerm u_3 (ATerm t)
                              {
                                t = not_null(r_88);
                                return(t);
                              }
                              t = HdMember_1(t, u_3);
                            }
                            t = q_10;
                            t = Cons_2(t, _id, w_88);
                            PopChoice();
                          }
                        else
                          {
                            t = p_10;
                            t = Tl_0(t);
                            t = w_88(t);
                          }
                      }
                    }
                  return(t);
                }
                t = w_88(t);
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
  ATerm b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL;
  b_89 = t;
  y_88 :
  if(match_cons(b_89, sym_TCons_2))
    {
      c_89 = ATgetArgument(b_89, 0);
      d_89 = ATgetArgument(b_89, 1);
      z_88 :
      if(match_cons(d_89, sym_TCons_2))
        {
          e_89 = ATgetArgument(d_89, 0);
          f_89 = ATgetArgument(d_89, 1);
          a_89 :
          if(match_cons(f_89, sym_TNil_0))
            {
              if(c_89 != NULL && c_89 != e_89)
                _fail(e_89);
              else
                c_89 = e_89;
            }
          else
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
  ATerm c_90 = NULL,d_90 = NULL,e_90 = NULL,f_90 = NULL,g_90 = NULL,h_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL;
  ATerm t_91 (ATerm t)
  {
    ATerm c_91 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_90), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm r_10 = t;
      if(PushChoice()==0)
        {
          t = eq_0(t);
          PopChoice();
          _fail(t);
        }
      else
        t = r_10;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm e_91 = NULL;
        t = g_0(t);
        c_91 = t;
        t = not_null(i_90);
        {
          ATerm g_91 = NULL;
          t = tvars_0(t);
          e_91 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_91), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_91), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = isect_0(t);
          {
            ATerm i_91 = NULL;
            t = strings_to_vars_0(t);
            g_91 = t;
            t = (ATerm) ATmakeAppl(sym_TNil_0);
            {
              ATerm k_91 = NULL;
              t = g_0(t);
              i_91 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_90), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_90), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm m_91 = NULL;
                t = tvars_0(t);
                k_91 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_91), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_91), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = isect_0(t);
                {
                  ATerm o_91 = NULL;
                  t = strings_to_vars_0(t);
                  m_91 = t;
                  {
                    ATerm q_91 = NULL;
                    t = new_0(t);
                    o_91 = t;
                    t = not_null(f_90);
                    t = h_0(t);
                    q_91 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(q_91), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(g_91)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Str_1, not_null(o_91)), not_null(m_91))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_RDef_3, not_null(f_90), not_null(g_90), (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_90), not_null(j_90), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(f_90))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(g_91)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Str_1, not_null(o_91)), not_null(m_91)))), not_null(k_90)))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  e_90 = t;
  w_89 :
  if(match_cons(e_90, sym_RDef_3))
    {
      f_90 = ATgetArgument(e_90, 0);
      g_90 = ATgetArgument(e_90, 1);
      h_90 = ATgetArgument(e_90, 2);
      x_89 :
      if(match_cons(h_90, sym_Rule_3))
        {
          i_90 = ATgetArgument(h_90, 0);
          j_90 = ATgetArgument(h_90, 1);
          k_90 = ATgetArgument(h_90, 2);
          y_89 :
          if(match_cons(j_90, sym_Op_2))
            {
              c_90 = ATgetArgument(j_90, 0);
              d_90 = ATgetArgument(j_90, 1);
              z_89 :
              if(match_cons(d_90, sym_Nil_0))
                {
                  a_90 :
                  if(match_string(c_90, "Undefined"))
                    {
                      ATerm s_10 = t;
                      if(PushChoice()==0)
                        {
                          ATerm p_90 = NULL;
                          t = (ATerm) ATmakeAppl(sym_TNil_0);
                          {
                            ATerm r_90 = NULL;
                            t = g_0(t);
                            p_90 = t;
                            t = not_null(i_90);
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
                                t = not_null(f_90);
                                t = h_0(t);
                                v_90 = t;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(v_90), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(t_90)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_RDef_3, not_null(f_90), not_null(g_90), (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_90), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(f_90))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(t_90)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_90), (ATerm) ATmakeAppl(sym_Fail_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
                              }
                            }
                          }
                          PopChoice();
                        }
                      else
                        {
                          t = s_10;
                          t = t_91(t);
                        }
                    }
                  else
                    t = t_91(t);
                }
              else
                {
                  b_90 :
                  t = t_91(t);
                }
            }
          else
            t = t_91(t);
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
  ATerm q_92 = NULL,r_92 = NULL,s_92 = NULL,t_92 = NULL,u_92 = NULL,v_92 = NULL;
  q_92 = t;
  k_92 :
  if(match_cons(q_92, sym_TCons_2))
    {
      r_92 = ATgetArgument(q_92, 0);
      t_92 = ATgetArgument(q_92, 1);
      l_92 :
      if(match_cons(r_92, sym_DynamicRules_1))
        {
          s_92 = ATgetArgument(r_92, 0);
          m_92 :
          if(match_cons(t_92, sym_TCons_2))
            {
              u_92 = ATgetArgument(t_92, 0);
              v_92 = ATgetArgument(t_92, 1);
              n_92 :
              if(match_cons(v_92, sym_TNil_0))
                {
                  t = not_null(s_92);
                  {
                    ATerm v_3 (ATerm t)
                    {
                      ATerm w_3 (ATerm t)
                      {
                        t = not_null(u_92);
                        return(t);
                      }
                      ATerm x_3 (ATerm t)
                      {
                        ATerm y_92 = NULL;
                        y_92 = t;
                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(y_92))), (ATerm) ATmakeAppl(sym_Nil_0)));
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
          if(match_cons(r_92, sym_OverrideDynamicRules_1))
            {
              s_92 = ATgetArgument(r_92, 0);
              o_92 :
              if(match_cons(t_92, sym_TCons_2))
                {
                  u_92 = ATgetArgument(t_92, 0);
                  v_92 = ATgetArgument(t_92, 1);
                  p_92 :
                  if(match_cons(v_92, sym_TNil_0))
                    {
                      t = not_null(s_92);
                      {
                        ATerm y_3 (ATerm t)
                        {
                          ATerm z_3 (ATerm t)
                          {
                            t = not_null(u_92);
                            return(t);
                          }
                          ATerm a_4 (ATerm t)
                          {
                            ATerm c_93 = NULL;
                            c_93 = t;
                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(c_93))), (ATerm) ATmakeAppl(sym_Nil_0)));
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
ATerm dist_scope_1 (ATerm t, ATerm l_66 (ATerm))
{
  ATerm q_93 = NULL,r_93 = NULL,s_93 = NULL,t_93 = NULL,u_93 = NULL,v_93 = NULL,w_93 = NULL;
  q_93 = t;
  m_93 :
  if(match_cons(q_93, sym_TCons_2))
    {
      r_93 = ATgetArgument(q_93, 0);
      u_93 = ATgetArgument(q_93, 1);
      n_93 :
      if(match_cons(r_93, sym_Scope_2))
        {
          s_93 = ATgetArgument(r_93, 0);
          t_93 = ATgetArgument(r_93, 1);
          o_93 :
          if(match_cons(u_93, sym_TCons_2))
            {
              v_93 = ATgetArgument(u_93, 0);
              w_93 = ATgetArgument(u_93, 1);
              p_93 :
              if(match_cons(w_93, sym_TNil_0))
                {
                  ATerm a_94 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_93), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_93), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm c_94 = NULL;
                    t = union_0(t);
                    a_94 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_93), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_94), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = l_66(t);
                    c_94 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_93), not_null(c_94));
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
ATerm one_dist_1 (ATerm t, ATerm y_60 (ATerm))
{
  ATerm n_94 = NULL,o_94 = NULL,p_94 = NULL,q_94 = NULL,r_94 = NULL;
  n_94 = t;
  k_94 :
  if(match_cons(n_94, sym_TCons_2))
    {
      o_94 = ATgetArgument(n_94, 0);
      p_94 = ATgetArgument(n_94, 1);
      l_94 :
      if(match_cons(p_94, sym_TCons_2))
        {
          q_94 = ATgetArgument(p_94, 0);
          r_94 = ATgetArgument(p_94, 1);
          m_94 :
          if(match_cons(r_94, sym_TNil_0))
            {
              t = not_null(o_94);
              {
                ATerm b_4 (ATerm t)
                {
                  ATerm u_94 = NULL;
                  u_94 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_94), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_94), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = y_60(t);
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
ATerm env_oncetd_1 (ATerm t, ATerm n_61 (ATerm))
{
  ATerm y_94 (ATerm t)
  {
    ATerm t_10 = t;
    if(PushChoice()==0)
      {
        t = n_61(t);
        PopChoice();
      }
    else
      {
        t = t_10;
        t = one_dist_1(t, y_94);
      }
    return(t);
  }
  t = y_94(t);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm h_95 = NULL,i_95 = NULL,j_95 = NULL;
  h_95 = t;
  g_95 :
  if(match_cons(h_95, sym_Cons_2))
    {
      i_95 = ATgetArgument(h_95, 0);
      j_95 = ATgetArgument(h_95, 1);
      {
        ATerm m_95 = NULL;
        t = not_null(i_95);
        {
          ATerm o_95 = NULL,p_95 = NULL,v_95 = NULL;
          t = tvars_0(t);
          m_95 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_95), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_95), (ATerm) ATmakeAppl(sym_TNil_0)));
          {
            ATerm a_96 (ATerm t)
            {
              ATerm c_4 (ATerm t)
              {
                ATerm u_10 = t;
                if(PushChoice()==0)
                  {
                    t = dist_scope_1(t, a_96);
                    PopChoice();
                  }
                else
                  {
                    t = u_10;
                    {
                      ATerm q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL;
                      t = split_dynamic_rules_0(t);
                      q_95 = t;
                      c_95 :
                      if(match_cons(q_95, sym_TCons_2))
                        {
                          r_95 = ATgetArgument(q_95, 0);
                          s_95 = ATgetArgument(q_95, 1);
                          d_95 :
                          if(match_cons(s_95, sym_TCons_2))
                            {
                              t_95 = ATgetArgument(s_95, 0);
                              u_95 = ATgetArgument(s_95, 1);
                              e_95 :
                              if(match_cons(u_95, sym_TNil_0))
                                {
                                  if(p_95 != NULL && p_95 != r_95)
                                    _fail(r_95);
                                  else
                                    p_95 = r_95;
                                  if(o_95 != NULL && o_95 != t_95)
                                    _fail(t_95);
                                  else
                                    o_95 = t_95;
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(p_95));
                                }
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
            t = a_96(t);
            v_95 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_95), not_null(o_95)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_95), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = conc_0(t);
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm l_60 (ATerm))
{
  ATerm d_96 (ATerm t)
  {
    t = l_60(t);
    {
      ATerm v_10 = t;
      if(PushChoice()==0)
        {
          t = Nil_0(t);
          PopChoice();
        }
      else
        {
          t = v_10;
          t = Cons_2(t, _id, d_96);
        }
    }
    return(t);
  }
  t = d_96(t);
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
  ATerm i_96 = NULL,j_96 = NULL,k_96 = NULL,l_96 = NULL,m_96 = NULL;
  i_96 = t;
  g_96 :
  if(match_cons(i_96, sym_DynRuleScope_2))
    {
      j_96 = ATgetArgument(i_96, 0);
      m_96 = ATgetArgument(i_96, 1);
      h_96 :
      if(match_cons(j_96, sym_Nil_0))
        t = not_null(m_96);
      else
        {
          if(match_cons(j_96, sym_Cons_2))
            {
              k_96 = ATgetArgument(j_96, 0);
              l_96 = ATgetArgument(j_96, 1);
              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(k_96))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_DynRuleScope_2, not_null(l_96), not_null(m_96)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
    t = try_1(t, DefDynamicRuleScope_0);
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
          ATerm j_4 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, j_4);
          return(t);
        }
        t = Cons_2(t, i_4, Nil_0);
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
  ATerm x_96 = NULL,z_96 = NULL;
  x_96 = t;
  w_96 :
  if(match_cons(x_96, sym_ScopeDefault_1))
    {
      z_96 = ATgetArgument(x_96, 0);
      {
        ATerm b_97 = NULL;
        t = not_null(z_96);
        t = tvars_0(t);
        b_97 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_97), not_null(z_96));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm y_40 (ATerm))
{
  ATerm i_97 = NULL,j_97 = NULL;
  i_97 = t;
  h_97 :
  if(match_cons(i_97, sym_DynamicRules_1))
    {
      j_97 = ATgetArgument(i_97, 0);
      {
        ATerm l_97 = NULL;
        t = not_null(j_97);
        t = y_40(t);
        l_97 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(l_97));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm n_43 (ATerm), ATerm o_43 (ATerm))
{
  ATerm t_97 = NULL,u_97 = NULL,v_97 = NULL;
  t_97 = t;
  s_97 :
  if(match_cons(t_97, sym_Scope_2))
    {
      u_97 = ATgetArgument(t_97, 0);
      v_97 = ATgetArgument(t_97, 1);
      {
        ATerm y_97 = NULL;
        t = not_null(u_97);
        {
          ATerm a_98 = NULL;
          t = n_43(t);
          y_97 = t;
          t = not_null(v_97);
          t = o_43(t);
          a_98 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_97), not_null(a_98));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm n_44 (ATerm), ATerm o_44 (ATerm), ATerm p_44 (ATerm))
{
  ATerm w_10 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, p_44, n_44);
      PopChoice();
    }
  else
    {
      t = w_10;
      t = DynamicRules_1(t, n_44);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm k_98 = NULL,l_98 = NULL;
  k_98 = t;
  j_98 :
  if(match_cons(k_98, sym_DynamicRules_1))
    {
      l_98 = ATgetArgument(k_98, 0);
      t = not_null(l_98);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm s_98 = NULL,t_98 = NULL,u_98 = NULL,v_98 = NULL,w_98 = NULL,x_98 = NULL;
  t_98 = t;
  q_98 :
  if(match_cons(t_98, sym_Scope_2))
    {
      u_98 = ATgetArgument(t_98, 0);
      s_98 = ATgetArgument(t_98, 1);
      t = not_null(u_98);
    }
  else
    {
      if(match_cons(t_98, sym_LRule_1))
        {
          u_98 = ATgetArgument(t_98, 0);
          r_98 :
          if(match_cons(u_98, sym_Rule_3))
            {
              v_98 = ATgetArgument(u_98, 0);
              w_98 = ATgetArgument(u_98, 1);
              x_98 = ATgetArgument(u_98, 2);
              t = not_null(v_98);
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
  ATerm k_99 = NULL,l_99 = NULL;
  k_99 = t;
  j_99 :
  if(match_cons(k_99, sym_Var_1))
    {
      l_99 = ATgetArgument(k_99, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_99), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm s_99 = NULL,t_99 = NULL,u_99 = NULL,v_99 = NULL,w_99 = NULL;
  s_99 = t;
  p_99 :
  if(match_cons(s_99, sym_TCons_2))
    {
      t_99 = ATgetArgument(s_99, 0);
      u_99 = ATgetArgument(s_99, 1);
      q_99 :
      if(match_cons(u_99, sym_TCons_2))
        {
          v_99 = ATgetArgument(u_99, 0);
          w_99 = ATgetArgument(u_99, 1);
          r_99 :
          if(match_cons(w_99, sym_TNil_0))
            {
              t = not_null(t_99);
              {
                ATerm a_100 (ATerm t)
                {
                  ATerm x_10 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(v_99);
                      PopChoice();
                    }
                  else
                    {
                      t = x_10;
                      {
                        ATerm y_10 = t;
                        if(PushChoice()==0)
                          {
                            ATerm k_4 (ATerm t)
                            {
                              t = not_null(v_99);
                              return(t);
                            }
                            t = HdMember_1(t, k_4);
                            t = a_100(t);
                            PopChoice();
                          }
                        else
                          {
                            t = y_10;
                            t = Cons_2(t, _id, a_100);
                          }
                      }
                    }
                  return(t);
                }
                t = a_100(t);
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
ATerm foldr_3 (ATerm t, ATerm i_54 (ATerm), ATerm j_54 (ATerm), ATerm k_54 (ATerm))
{
  ATerm z_10 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = i_54(t);
      PopChoice();
    }
  else
    {
      t = z_10;
      {
        ATerm f_100 = NULL,g_100 = NULL,h_100 = NULL;
        f_100 = t;
        e_100 :
        if(match_cons(f_100, sym_Cons_2))
          {
            g_100 = ATgetArgument(f_100, 0);
            h_100 = ATgetArgument(f_100, 1);
            {
              ATerm k_100 = NULL;
              t = not_null(g_100);
              {
                ATerm m_100 = NULL;
                t = k_54(t);
                k_100 = t;
                t = not_null(h_100);
                t = foldr_3(t, i_54, j_54, k_54);
                m_100 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_100), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_100), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = j_54(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm y_55 (ATerm), ATerm z_55 (ATerm), ATerm a_56 (ATerm))
{
  ATerm x_100 = NULL;
  ATerm z_100 = NULL;
  x_100 = t;
  {
    ATerm a_101 = NULL;
    ATerm c_101 = NULL,d_101 = NULL,e_101 = NULL,f_101 = NULL,g_101 = NULL;
    t = not_null(x_100);
    a_101 = t;
    t = SSL_explode_term(not_null(a_101));
    c_101 = t;
    u_100 :
    if(match_cons(c_101, sym_TCons_2))
      {
        d_101 = ATgetArgument(c_101, 0);
        e_101 = ATgetArgument(c_101, 1);
        v_100 :
        if(match_cons(e_101, sym_TCons_2))
          {
            f_101 = ATgetArgument(e_101, 0);
            g_101 = ATgetArgument(e_101, 1);
            w_100 :
            if(match_cons(g_101, sym_TNil_0))
              {
                if(z_100 != NULL && z_100 != f_101)
                  _fail(f_101);
                else
                  z_100 = f_101;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(z_100);
    t = foldr_3(t, y_55, z_55, a_56);
  }
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm n_55 (ATerm))
{
  ATerm n_101 = NULL,o_101 = NULL,p_101 = NULL;
  n_101 = t;
  m_101 :
  if(match_cons(n_101, sym_Cons_2))
    {
      o_101 = ATgetArgument(n_101, 0);
      p_101 = ATgetArgument(n_101, 1);
      t = n_55(t);
      {
        ATerm l_4 (ATerm t)
        {
          ATerm s_101 = NULL;
          s_101 = t;
          if(o_101 != NULL && o_101 != s_101)
            _fail(s_101);
          else
            o_101 = s_101;
          return(t);
        }
        t = fetch_1(t, l_4);
        t = not_null(p_101);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm a_102 = NULL,b_102 = NULL,c_102 = NULL,h_102 = NULL,i_102 = NULL,j_102 = NULL,k_102 = NULL;
  a_102 = t;
  w_101 :
  if(match_cons(a_102, sym_TCons_2))
    {
      b_102 = ATgetArgument(a_102, 0);
      c_102 = ATgetArgument(a_102, 1);
      x_101 :
      if(match_cons(c_102, sym_TCons_2))
        {
          h_102 = ATgetArgument(c_102, 0);
          k_102 = ATgetArgument(c_102, 1);
          y_101 :
          if(match_cons(h_102, sym_Cons_2))
            {
              i_102 = ATgetArgument(h_102, 0);
              j_102 = ATgetArgument(h_102, 1);
              z_101 :
              if(match_cons(k_102, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_102), not_null(b_102)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_102), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm g_103 = NULL,h_103 = NULL,i_103 = NULL,j_103 = NULL,k_103 = NULL,l_103 = NULL,m_103 = NULL;
  g_103 = t;
  c_103 :
  if(match_cons(g_103, sym_Cons_2))
    {
      h_103 = ATgetArgument(g_103, 0);
      m_103 = ATgetArgument(g_103, 1);
      d_103 :
      if(match_cons(h_103, sym_TCons_2))
        {
          i_103 = ATgetArgument(h_103, 0);
          j_103 = ATgetArgument(h_103, 1);
          e_103 :
          if(match_cons(j_103, sym_TCons_2))
            {
              k_103 = ATgetArgument(j_103, 0);
              l_103 = ATgetArgument(j_103, 1);
              f_103 :
              if(match_cons(l_103, sym_TNil_0))
                {
                  ATerm q_103 = NULL,r_103 = NULL,z_103 = NULL,h_104 = NULL;
                  ATerm b_11;
                  b_11 = t;
                  {
                    ATerm s_103 = NULL;
                    ATerm u_103 = NULL,v_103 = NULL,w_103 = NULL,x_103 = NULL,y_103 = NULL;
                    t = not_null(k_103);
                    s_103 = t;
                    t = SSL_explode_term(not_null(s_103));
                    u_103 = t;
                    s_102 :
                    if(match_cons(u_103, sym_TCons_2))
                      {
                        v_103 = ATgetArgument(u_103, 0);
                        w_103 = ATgetArgument(u_103, 1);
                        t_102 :
                        if(match_cons(w_103, sym_TCons_2))
                          {
                            x_103 = ATgetArgument(w_103, 0);
                            y_103 = ATgetArgument(w_103, 1);
                            u_102 :
                            if(match_cons(y_103, sym_TNil_0))
                              {
                                if(q_103 != NULL && q_103 != v_103)
                                  _fail(v_103);
                                else
                                  q_103 = v_103;
                                if(r_103 != NULL && r_103 != x_103)
                                  _fail(x_103);
                                else
                                  r_103 = x_103;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = b_11;
                  {
                    ATerm a_104 = NULL;
                    ATerm c_104 = NULL,d_104 = NULL,e_104 = NULL,f_104 = NULL,g_104 = NULL;
                    t = not_null(i_103);
                    a_104 = t;
                    t = SSL_explode_term(not_null(a_104));
                    c_104 = t;
                    y_102 :
                    if(match_cons(c_104, sym_TCons_2))
                      {
                        d_104 = ATgetArgument(c_104, 0);
                        e_104 = ATgetArgument(c_104, 1);
                        z_102 :
                        if(match_cons(e_104, sym_TCons_2))
                          {
                            f_104 = ATgetArgument(e_104, 0);
                            g_104 = ATgetArgument(e_104, 1);
                            a_103 :
                            if(match_cons(g_104, sym_TNil_0))
                              {
                                if(q_103 != NULL && q_103 != d_104)
                                  _fail(d_104);
                                else
                                  q_103 = d_104;
                                if(z_103 != NULL && z_103 != f_104)
                                  _fail(f_104);
                                else
                                  z_103 = f_104;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_103), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_103), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    h_104 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_104), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_103), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm u_104 = NULL,v_104 = NULL,w_104 = NULL,x_104 = NULL,y_104 = NULL,z_104 = NULL,a_105 = NULL;
  u_104 = t;
  q_104 :
  if(match_cons(u_104, sym_Cons_2))
    {
      v_104 = ATgetArgument(u_104, 0);
      a_105 = ATgetArgument(u_104, 1);
      r_104 :
      if(match_cons(v_104, sym_TCons_2))
        {
          w_104 = ATgetArgument(v_104, 0);
          x_104 = ATgetArgument(v_104, 1);
          s_104 :
          if(match_cons(x_104, sym_TCons_2))
            {
              y_104 = ATgetArgument(x_104, 0);
              z_104 = ATgetArgument(x_104, 1);
              t_104 :
              if(match_cons(z_104, sym_TNil_0))
                {
                  ATerm c_105 = NULL;
                  if(w_104 != NULL && w_104 != y_104)
                    _fail(y_104);
                  else
                    w_104 = y_104;
                  if(c_105 != NULL && c_105 != a_105)
                    _fail(a_105);
                  else
                    c_105 = a_105;
                  t = not_null(c_105);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm t_65 (ATerm), ATerm u_65 (ATerm))
{
  ATerm e_105 (ATerm t)
  {
    ATerm f_11 = t;
    if(PushChoice()==0)
      {
        t = t_65(t);
        PopChoice();
      }
    else
      {
        t = f_11;
        t = u_65(t);
        t = e_105(t);
      }
    return(t);
  }
  t = e_105(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm w_65 (ATerm), ATerm x_65 (ATerm), ATerm y_65 (ATerm))
{
  t = w_65(t);
  t = while_not_2(t, x_65, y_65);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm g_11 = t;
  if(PushChoice()==0)
    {
      ATerm m_4 (ATerm t)
      {
        ATerm k_105 = NULL;
        k_105 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_105), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm n_4 (ATerm t)
      {
        ATerm p_4 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, p_4);
        return(t);
      }
      ATerm o_4 (ATerm t)
      {
        ATerm h_11 = t;
        if(PushChoice()==0)
          {
            ATerm q_4 (ATerm t)
            {
              ATerm r_4 (ATerm t)
              {
                ATerm i_11 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = i_11;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, r_4, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, q_4);
            PopChoice();
          }
        else
          {
            t = h_11;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, m_4, n_4, o_4);
      PopChoice();
    }
  else
    {
      t = g_11;
      {
        ATerm m_105 = NULL,n_105 = NULL,o_105 = NULL,p_105 = NULL,q_105 = NULL;
        m_105 = t;
        h_105 :
        if(match_cons(m_105, sym_TCons_2))
          {
            n_105 = ATgetArgument(m_105, 0);
            o_105 = ATgetArgument(m_105, 1);
            i_105 :
            if(match_cons(o_105, sym_TCons_2))
              {
                p_105 = ATgetArgument(o_105, 0);
                q_105 = ATgetArgument(o_105, 1);
                j_105 :
                if(match_cons(q_105, sym_TNil_0))
                  {
                    t = not_null(n_105);
                    {
                      ATerm v_105 (ATerm t)
                      {
                        ATerm j_11 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = j_11;
                            {
                              ATerm k_11 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm s_4 (ATerm t)
                                  {
                                    t = not_null(p_105);
                                    return(t);
                                  }
                                  t = HdMember_1(t, s_4);
                                  t = v_105(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = k_11;
                                  t = Cons_2(t, _id, v_105);
                                }
                            }
                          }
                        return(t);
                      }
                      t = v_105(t);
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
ATerm free_vars_3 (ATerm t, ATerm t_45 (ATerm), ATerm u_45 (ATerm), ATerm v_45 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm z_105 (ATerm t)
  {
    ATerm l_11 = t;
    if(PushChoice()==0)
      {
        t = t_45(t);
        PopChoice();
      }
    else
      {
        t = l_11;
        {
          ATerm m_11 = t;
          if(PushChoice()==0)
            {
              ATerm x_105 = NULL;
              ATerm n_11;
              n_11 = t;
              {
                ATerm y_105 = NULL;
                t = u_45(t);
                y_105 = t;
                if(x_105 != NULL && x_105 != y_105)
                  _fail(y_105);
                else
                  x_105 = y_105;
              }
              t = n_11;
              {
                ATerm t_4 (ATerm t)
                {
                  ATerm v_4 (ATerm t)
                  {
                    t = not_null(x_105);
                    return(t);
                  }
                  t = split_2(t, z_105, v_4);
                  t = diff_0(t);
                  return(t);
                }
                ATerm u_4 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = v_45(t, t_4, z_105, u_4);
                {
                  ATerm w_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = crush_3(t, w_4, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = m_11;
              {
                ATerm y_4 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = crush_3(t, y_4, union_0, z_105);
              }
            }
        }
      }
    return(t);
  }
  t = z_105(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm o_11 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = o_11;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, z_4, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm f_106 = NULL,g_106 = NULL,h_106 = NULL,i_106 = NULL,j_106 = NULL;
  f_106 = t;
  d_106 :
  if(match_cons(f_106, sym_LRule_1))
    {
      g_106 = ATgetArgument(f_106, 0);
      e_106 :
      if(match_cons(g_106, sym_Rule_3))
        {
          h_106 = ATgetArgument(g_106, 0);
          i_106 = ATgetArgument(g_106, 1);
          j_106 = ATgetArgument(g_106, 2);
          {
            ATerm n_106 = NULL;
            t = not_null(h_106);
            t = tvars_0(t);
            n_106 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_106), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(h_106), not_null(i_106), not_null(j_106))));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm a_62 (ATerm))
{
  ATerm r_106 (ATerm t)
  {
    t = _all(t, r_106);
    t = a_62(t);
    return(t);
  }
  t = r_106(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm b_5 (ATerm t)
    {
      ATerm p_11 = t;
      if(PushChoice()==0)
        {
          t = DefLRule_0(t);
          PopChoice();
        }
      else
        {
          t = p_11;
          t = DefScopeDefault_0(t);
        }
      return(t);
    }
    t = try_1(t, b_5);
    return(t);
  }
  t = bottomup_1(t, a_5);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm u_106 = NULL,v_106 = NULL;
  u_106 = t;
  t_106 :
  if(match_cons(u_106, sym_Var_1))
    {
      v_106 = ATgetArgument(u_106, 0);
      t = not_null(v_106);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm d_107 = NULL,e_107 = NULL,f_107 = NULL,g_107 = NULL,h_107 = NULL,i_107 = NULL,j_107 = NULL;
  d_107 = t;
  z_106 :
  if(match_cons(d_107, sym_TCons_2))
    {
      e_107 = ATgetArgument(d_107, 0);
      f_107 = ATgetArgument(d_107, 1);
      a_107 :
      if(match_cons(f_107, sym_TCons_2))
        {
          g_107 = ATgetArgument(f_107, 0);
          j_107 = ATgetArgument(f_107, 1);
          b_107 :
          if(match_cons(g_107, sym_Cons_2))
            {
              h_107 = ATgetArgument(g_107, 0);
              i_107 = ATgetArgument(g_107, 1);
              c_107 :
              if(match_cons(j_107, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_107), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_107), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm v_107 = NULL,w_107 = NULL,x_107 = NULL,y_107 = NULL,z_107 = NULL,a_108 = NULL,b_108 = NULL,c_108 = NULL,d_108 = NULL,e_108 = NULL,f_108 = NULL;
  v_107 = t;
  o_107 :
  if(match_cons(v_107, sym_TCons_2))
    {
      w_107 = ATgetArgument(v_107, 0);
      x_107 = ATgetArgument(v_107, 1);
      p_107 :
      if(match_cons(x_107, sym_TCons_2))
        {
          y_107 = ATgetArgument(x_107, 0);
          f_108 = ATgetArgument(x_107, 1);
          q_107 :
          if(match_cons(y_107, sym_Cons_2))
            {
              z_107 = ATgetArgument(y_107, 0);
              e_108 = ATgetArgument(y_107, 1);
              r_107 :
              if(match_cons(z_107, sym_TCons_2))
                {
                  a_108 = ATgetArgument(z_107, 0);
                  b_108 = ATgetArgument(z_107, 1);
                  s_107 :
                  if(match_cons(b_108, sym_TCons_2))
                    {
                      c_108 = ATgetArgument(b_108, 0);
                      d_108 = ATgetArgument(b_108, 1);
                      t_107 :
                      if(match_cons(d_108, sym_TNil_0))
                        {
                          u_107 :
                          if(match_cons(f_108, sym_TNil_0))
                            {
                              ATerm h_108 = NULL;
                              if(w_107 != NULL && w_107 != a_108)
                                _fail(a_108);
                              else
                                w_107 = a_108;
                              if(h_108 != NULL && h_108 != c_108)
                                _fail(c_108);
                              else
                                h_108 = c_108;
                              t = not_null(h_108);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm q_11 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = q_11;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm p_47 (ATerm), ATerm q_47 (ATerm))
{
  ATerm n_108 = NULL;
  ATerm q_108 = NULL;
  n_108 = t;
  {
    ATerm s_108 = NULL;
    t = p_47(t);
    q_108 = t;
    t = q_47(t);
    s_108 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_108), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_108), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm c_64 (ATerm))
{
  ATerm x_108 (ATerm t)
  {
    ATerm r_11 = t;
    if(PushChoice()==0)
      {
        t = c_64(t);
        PopChoice();
      }
    else
      {
        t = r_11;
        t = _all(t, x_108);
      }
    return(t);
  }
  t = x_108(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm d_109 = NULL,e_109 = NULL,f_109 = NULL,g_109 = NULL,h_109 = NULL;
  d_109 = t;
  a_109 :
  if(match_cons(d_109, sym_TCons_2))
    {
      e_109 = ATgetArgument(d_109, 0);
      f_109 = ATgetArgument(d_109, 1);
      b_109 :
      if(match_cons(f_109, sym_TCons_2))
        {
          g_109 = ATgetArgument(f_109, 0);
          h_109 = ATgetArgument(f_109, 1);
          c_109 :
          if(match_cons(h_109, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_109), not_null(g_109));
          else
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
  ATerm s_109 = NULL,t_109 = NULL,u_109 = NULL,v_109 = NULL,w_109 = NULL,x_109 = NULL,y_109 = NULL,z_109 = NULL,a_110 = NULL;
  s_109 = t;
  m_109 :
  if(match_cons(s_109, sym_TCons_2))
    {
      t_109 = ATgetArgument(s_109, 0);
      w_109 = ATgetArgument(s_109, 1);
      n_109 :
      if(match_cons(t_109, sym_Cons_2))
        {
          u_109 = ATgetArgument(t_109, 0);
          v_109 = ATgetArgument(t_109, 1);
          o_109 :
          if(match_cons(w_109, sym_TCons_2))
            {
              x_109 = ATgetArgument(w_109, 0);
              a_110 = ATgetArgument(w_109, 1);
              p_109 :
              if(match_cons(x_109, sym_Cons_2))
                {
                  y_109 = ATgetArgument(x_109, 0);
                  z_109 = ATgetArgument(x_109, 1);
                  q_109 :
                  if(match_cons(a_110, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(u_109), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_109), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(v_109), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_109), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm m_110 = NULL,n_110 = NULL,o_110 = NULL,p_110 = NULL,q_110 = NULL;
  m_110 = t;
  h_110 :
  if(match_cons(m_110, sym_TCons_2))
    {
      n_110 = ATgetArgument(m_110, 0);
      o_110 = ATgetArgument(m_110, 1);
      i_110 :
      if(match_cons(n_110, sym_Nil_0))
        {
          j_110 :
          if(match_cons(o_110, sym_TCons_2))
            {
              p_110 = ATgetArgument(o_110, 0);
              q_110 = ATgetArgument(o_110, 1);
              k_110 :
              if(match_cons(p_110, sym_Nil_0))
                {
                  l_110 :
                  if(match_cons(q_110, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm t_57 (ATerm), ATerm u_57 (ATerm), ATerm v_57 (ATerm), ATerm w_57 (ATerm))
{
  ATerm s_110 (ATerm t)
  {
    ATerm s_11 = t;
    if(PushChoice()==0)
      {
        t = t_57(t);
        PopChoice();
      }
    else
      {
        t = s_11;
        t = u_57(t);
        {
          ATerm c_5 (ATerm t)
          {
            t = TCons_2(t, s_110, TNil_0);
            return(t);
          }
          t = TCons_2(t, w_57, c_5);
          t = v_57(t);
        }
      }
    return(t);
  }
  t = s_110(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm y_57 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, y_57);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm a_111 = NULL,b_111 = NULL,c_111 = NULL,d_111 = NULL,e_111 = NULL,f_111 = NULL,g_111 = NULL;
  a_111 = t;
  w_110 :
  if(match_cons(a_111, sym_TCons_2))
    {
      b_111 = ATgetArgument(a_111, 0);
      c_111 = ATgetArgument(a_111, 1);
      x_110 :
      if(match_cons(c_111, sym_TCons_2))
        {
          d_111 = ATgetArgument(c_111, 0);
          e_111 = ATgetArgument(c_111, 1);
          y_110 :
          if(match_cons(e_111, sym_TNil_0))
            {
              ATerm i_111 = NULL;
              if(i_111 != NULL && i_111 != d_111)
                _fail(d_111);
              else
                i_111 = d_111;
            }
          else
            {
              if(match_cons(e_111, sym_TCons_2))
                {
                  f_111 = ATgetArgument(e_111, 0);
                  g_111 = ATgetArgument(e_111, 1);
                  z_110 :
                  if(match_cons(g_111, sym_TNil_0))
                    {
                      ATerm o_111 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_111), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_111), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      o_111 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_111), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_111), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm r_47 (ATerm), ATerm s_47 (ATerm))
{
  ATerm x_111 = NULL,y_111 = NULL,z_111 = NULL,a_112 = NULL,b_112 = NULL;
  t = subs_args_0(t);
  x_111 = t;
  u_111 :
  if(match_cons(x_111, sym_TCons_2))
    {
      y_111 = ATgetArgument(x_111, 0);
      z_111 = ATgetArgument(x_111, 1);
      v_111 :
      if(match_cons(z_111, sym_TCons_2))
        {
          a_112 = ATgetArgument(z_111, 0);
          b_112 = ATgetArgument(z_111, 1);
          w_111 :
          if(match_cons(b_112, sym_TNil_0))
            {
              t = not_null(a_112);
              {
                ATerm d_5 (ATerm t)
                {
                  ATerm e_5 (ATerm t)
                  {
                    t = not_null(y_111);
                    return(t);
                  }
                  t = SubsVar_2(t, r_47, e_5);
                  t = s_47(t);
                  return(t);
                }
                t = alltd_1(t, d_5);
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
ATerm substitute_1 (ATerm t, ATerm t_47 (ATerm))
{
  t = substitute_2(t, t_47, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm OLName_0 (ATerm t)
{
  ATerm j_112 = NULL,k_112 = NULL,l_112 = NULL,m_112 = NULL;
  j_112 = t;
  h_112 :
  if(match_cons(j_112, sym_Overlay_3))
    {
      k_112 = ATgetArgument(j_112, 0);
      l_112 = ATgetArgument(j_112, 1);
      m_112 = ATgetArgument(j_112, 2);
      i_112 :
      if(match_cons(l_112, sym_Nil_0))
        t = not_null(k_112);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm OpName_0 (ATerm t)
{
  ATerm t_112 = NULL,u_112 = NULL,v_112 = NULL,w_112 = NULL;
  t_112 = t;
  r_112 :
  if(match_cons(t_112, sym_OpDecl_2))
    {
      u_112 = ATgetArgument(t_112, 0);
      v_112 = ATgetArgument(t_112, 1);
      s_112 :
      if(match_cons(v_112, sym_ConstType_1))
        {
          w_112 = ATgetArgument(v_112, 0);
          t = not_null(u_112);
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
  ATerm b_113 = NULL,c_113 = NULL;
  b_113 = t;
  a_113 :
  if(match_cons(b_113, sym_Constructors_1))
    {
      c_113 = ATgetArgument(b_113, 0);
      t = not_null(c_113);
      t = filter_1(t, OpName_0);
    }
  else
    _fail(t);
  return(t);
}
ATerm Names_0 (ATerm t)
{
  ATerm i_113 = NULL,j_113 = NULL;
  i_113 = t;
  h_113 :
  if(match_cons(i_113, sym_Signature_1))
    {
      j_113 = ATgetArgument(i_113, 0);
      t = not_null(j_113);
      t = filter_1(t, OpNames_0);
      t = concat_0(t);
    }
  else
    {
      if(match_cons(i_113, sym_Overlays_1))
        {
          j_113 = ATgetArgument(i_113, 0);
          t = not_null(j_113);
          t = filter_1(t, OLName_0);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm o_53 (ATerm))
{
  ATerm t_11 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = t_11;
      {
        ATerm u_11 = t;
        if(PushChoice()==0)
          {
            ATerm f_5 (ATerm t)
            {
              t = filter_1(t, o_53);
              return(t);
            }
            t = Cons_2(t, o_53, f_5);
            PopChoice();
          }
        else
          {
            t = u_11;
            {
              ATerm q_113 = NULL,r_113 = NULL,s_113 = NULL;
              q_113 = t;
              p_113 :
              if(match_cons(q_113, sym_Cons_2))
                {
                  r_113 = ATgetArgument(q_113, 0);
                  s_113 = ATgetArgument(q_113, 1);
                  t = not_null(s_113);
                  t = filter_1(t, o_53);
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
  ATerm g_5 (ATerm t)
  {
    t = const_names_0(t);
    {
      ATerm h_5 (ATerm t)
      {
        ATerm i_5 (ATerm t)
        {
          ATerm w_113 = NULL;
          w_113 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(w_113), (ATerm) ATmakeAppl(sym_Nil_0));
          return(t);
        }
        t = split_2(t, _id, i_5);
        return(t);
      }
      t = map_1(t, h_5);
    }
    return(t);
  }
  t = split_2(t, g_5, _id);
  t = tsubs_0(t);
  return(t);
}
ATerm MkSpec_0 (ATerm t)
{
  ATerm e_114 = NULL,f_114 = NULL,g_114 = NULL,h_114 = NULL,i_114 = NULL,j_114 = NULL,k_114 = NULL;
  e_114 = t;
  a_114 :
  if(match_cons(e_114, sym_TCons_2))
    {
      f_114 = ATgetArgument(e_114, 0);
      g_114 = ATgetArgument(e_114, 1);
      b_114 :
      if(match_cons(g_114, sym_TCons_2))
        {
          h_114 = ATgetArgument(g_114, 0);
          i_114 = ATgetArgument(g_114, 1);
          c_114 :
          if(match_cons(i_114, sym_TCons_2))
            {
              j_114 = ATgetArgument(i_114, 0);
              k_114 = ATgetArgument(i_114, 1);
              d_114 :
              if(match_cons(k_114, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Constructors_1, not_null(f_114)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Overlays_1, not_null(h_114)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(j_114)), (ATerm) ATmakeAppl(sym_Nil_0)))));
              else
                _fail(t);
            }
          else
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
  ATerm t_114 = NULL,u_114 = NULL,v_114 = NULL,w_114 = NULL,x_114 = NULL;
  t_114 = t;
  q_114 :
  if(match_cons(t_114, sym_TCons_2))
    {
      u_114 = ATgetArgument(t_114, 0);
      v_114 = ATgetArgument(t_114, 1);
      r_114 :
      if(match_cons(v_114, sym_TCons_2))
        {
          w_114 = ATgetArgument(v_114, 0);
          x_114 = ATgetArgument(v_114, 1);
          s_114 :
          if(match_cons(x_114, sym_TNil_0))
            {
              t = not_null(u_114);
              {
                ATerm j_5 (ATerm t)
                {
                  t = not_null(w_114);
                  return(t);
                }
                t = at_end_1(t, j_5);
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
  ATerm q_115 = NULL,r_115 = NULL,s_115 = NULL,t_115 = NULL,u_115 = NULL,v_115 = NULL,w_115 = NULL,x_115 = NULL,y_115 = NULL,z_115 = NULL,a_116 = NULL,b_116 = NULL,c_116 = NULL,d_116 = NULL,e_116 = NULL,f_116 = NULL,g_116 = NULL;
  q_115 = t;
  f_115 :
  if(match_cons(q_115, sym_TCons_2))
    {
      r_115 = ATgetArgument(q_115, 0);
      y_115 = ATgetArgument(q_115, 1);
      g_115 :
      if(match_cons(r_115, sym_TCons_2))
        {
          s_115 = ATgetArgument(r_115, 0);
          t_115 = ATgetArgument(r_115, 1);
          h_115 :
          if(match_cons(t_115, sym_TCons_2))
            {
              u_115 = ATgetArgument(t_115, 0);
              v_115 = ATgetArgument(t_115, 1);
              i_115 :
              if(match_cons(v_115, sym_TCons_2))
                {
                  w_115 = ATgetArgument(v_115, 0);
                  x_115 = ATgetArgument(v_115, 1);
                  j_115 :
                  if(match_cons(x_115, sym_TNil_0))
                    {
                      k_115 :
                      if(match_cons(y_115, sym_TCons_2))
                        {
                          z_115 = ATgetArgument(y_115, 0);
                          g_116 = ATgetArgument(y_115, 1);
                          l_115 :
                          if(match_cons(z_115, sym_TCons_2))
                            {
                              a_116 = ATgetArgument(z_115, 0);
                              b_116 = ATgetArgument(z_115, 1);
                              m_115 :
                              if(match_cons(b_116, sym_TCons_2))
                                {
                                  c_116 = ATgetArgument(b_116, 0);
                                  d_116 = ATgetArgument(b_116, 1);
                                  n_115 :
                                  if(match_cons(d_116, sym_TCons_2))
                                    {
                                      e_116 = ATgetArgument(d_116, 0);
                                      f_116 = ATgetArgument(d_116, 1);
                                      o_115 :
                                      if(match_cons(f_116, sym_TNil_0))
                                        {
                                          p_115 :
                                          if(match_cons(g_116, sym_TNil_0))
                                            {
                                              ATerm n_116 = NULL;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_115), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_116), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              {
                                                ATerm p_116 = NULL;
                                                t = conc_0(t);
                                                n_116 = t;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_115), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_116), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                {
                                                  ATerm r_116 = NULL;
                                                  t = conc_0(t);
                                                  p_116 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_115), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_116), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  r_116 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_116), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_116), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_116), (ATerm) ATmakeAppl(sym_TNil_0))));
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
ATerm foldr_2 (ATerm t, ATerm g_54 (ATerm), ATerm h_54 (ATerm))
{
  ATerm v_11 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = g_54(t);
      PopChoice();
    }
  else
    {
      t = v_11;
      {
        ATerm a_117 = NULL,b_117 = NULL,c_117 = NULL;
        a_117 = t;
        z_116 :
        if(match_cons(a_117, sym_Cons_2))
          {
            b_117 = ATgetArgument(a_117, 0);
            c_117 = ATgetArgument(a_117, 1);
            {
              ATerm f_117 = NULL;
              t = not_null(c_117);
              t = foldr_2(t, g_54, h_54);
              f_117 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_117), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_117), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = h_54(t);
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
  ATerm m_117 = NULL,n_117 = NULL;
  m_117 = t;
  l_117 :
  if(match_cons(m_117, sym_Constructors_1))
    {
      n_117 = ATgetArgument(m_117, 0);
      t = not_null(n_117);
    }
  else
    {
      if(match_cons(m_117, sym_Sorts_1))
        {
          n_117 = ATgetArgument(m_117, 0);
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
  ATerm y_117 = NULL,z_117 = NULL;
  y_117 = t;
  x_117 :
  if(match_cons(y_117, sym_Signature_1))
    {
      z_117 = ATgetArgument(y_117, 0);
      {
        ATerm b_118 = NULL;
        t = not_null(z_117);
        t = normalize_sigs_0(t);
        b_118 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_118), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
      }
    }
  else
    {
      if(match_cons(y_117, sym_Strategies_1))
        {
          z_117 = ATgetArgument(y_117, 0);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_117), (ATerm) ATmakeAppl(sym_TNil_0))));
        }
      else
        {
          if(match_cons(y_117, sym_Rules_1))
            {
              z_117 = ATgetArgument(y_117, 0);
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_117), (ATerm) ATmakeAppl(sym_TNil_0))));
            }
          else
            {
              if(match_cons(y_117, sym_Overlays_1))
                {
                  z_117 = ATgetArgument(y_117, 0);
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_117), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm n_118 = NULL,o_118 = NULL;
  n_118 = t;
  m_118 :
  if(match_cons(n_118, sym_Specification_1))
    {
      o_118 = ATgetArgument(n_118, 0);
      t = not_null(o_118);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm y_61 (ATerm))
{
  ATerm r_118 (ATerm t)
  {
    t = y_61(t);
    t = _all(t, r_118);
    return(t);
  }
  t = r_118(t);
  return(t);
}
ATerm DefineSugar_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm l_5 (ATerm t)
    {
      ATerm u_118 = NULL,v_118 = NULL;
      u_118 = t;
      t_118 :
      if(match_cons(u_118, sym_DefaultVarDec_1))
        {
          v_118 = ATgetArgument(u_118, 0);
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(v_118), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        _fail(t);
      return(t);
    }
    t = try_1(t, l_5);
    return(t);
  }
  t = topdown_1(t, k_5);
  return(t);
}
ATerm normalize_spec_0 (ATerm t)
{
  t = DefineSugar_0(t);
  t = BSpecs_0(t);
  t = map_1(t, NormBSP_0);
  {
    ATerm m_5 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
      return(t);
    }
    t = foldr_2(t, m_5, Combine_0);
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
    ATerm w_11;
    w_11 = t;
    t = spec_use_def_0(t);
    t = w_11;
    t = ExpandOverlays_0(t);
    t = CheckConstructors_0(t);
    t = RulesToSdefs_0(t);
    t = strename_0(t);
    {
      ATerm n_5 (ATerm t)
      {
        ATerm o_5 (ATerm t)
        {
          ATerm p_5 (ATerm t)
          {
            t = Strategies_1(t, desugar_spec_0);
            return(t);
          }
          t = Cons_2(t, p_5, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, o_5);
        return(t);
      }
      t = Specification_1(t, n_5);
    }
  }
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm z_118 = NULL;
  z_118 = t;
  y_118 :
  if(!(match_cons(z_118, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm s_43 (ATerm), ATerm t_43 (ATerm))
{
  ATerm e_119 = NULL,f_119 = NULL,g_119 = NULL;
  e_119 = t;
  d_119 :
  if(match_cons(e_119, sym_TCons_2))
    {
      f_119 = ATgetArgument(e_119, 0);
      g_119 = ATgetArgument(e_119, 1);
      {
        ATerm j_119 = NULL;
        t = not_null(f_119);
        {
          ATerm l_119 = NULL;
          t = s_43(t);
          j_119 = t;
          t = not_null(g_119);
          t = t_43(t);
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
  ATerm x_11;
  x_11 = t;
  {
    ATerm q_5 (ATerm t)
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
    t = option_defined_1(t, q_5);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_119), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = x_11;
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
  ATerm b_120 = NULL,d_120 = NULL;
  ATerm r_5 (ATerm t)
  {
    ATerm s_5 (ATerm t)
    {
      ATerm y_11 = t;
      if(PushChoice()==0)
        {
          ATerm u_5 (ATerm t)
          {
            ATerm e_120 = NULL;
            e_120 = t;
            w_119 :
            if(!(match_cons(e_120, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, u_5);
          PopChoice();
          _fail(t);
        }
      else
        t = y_11;
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
          ATerm f_120 = NULL,g_120 = NULL;
          f_120 = t;
          y_119 :
          if(match_cons(f_120, sym_Runtime_1))
            {
              g_120 = ATgetArgument(f_120, 0);
              if(d_120 != NULL && d_120 != g_120)
                _fail(g_120);
              else
                d_120 = g_120;
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
      {
        ATerm y_5 (ATerm t)
        {
          ATerm a_6 (ATerm t)
          {
            ATerm h_120 = NULL,i_120 = NULL;
            h_120 = t;
            a_120 :
            if(match_cons(h_120, sym_Program_1))
              {
                i_120 = ATgetArgument(h_120, 0);
                if(b_120 != NULL && b_120 != i_120)
                  _fail(i_120);
                else
                  b_120 = i_120;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, a_6);
          return(t);
        }
        ATerm z_5 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, y_5, z_5);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_120), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_120), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, r_5);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm q_120 = NULL,r_120 = NULL,s_120 = NULL,t_120 = NULL,u_120 = NULL;
  q_120 = t;
  n_120 :
  if(match_cons(q_120, sym_TCons_2))
    {
      r_120 = ATgetArgument(q_120, 0);
      s_120 = ATgetArgument(q_120, 1);
      o_120 :
      if(match_cons(s_120, sym_TCons_2))
        {
          t_120 = ATgetArgument(s_120, 0);
          u_120 = ATgetArgument(s_120, 1);
          p_120 :
          if(match_cons(u_120, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(r_120), not_null(t_120));
          else
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
  ATerm c_121 = NULL,e_121 = NULL,f_121 = NULL,g_121 = NULL,h_121 = NULL;
  c_121 = t;
  z_120 :
  if(match_cons(c_121, sym_TCons_2))
    {
      e_121 = ATgetArgument(c_121, 0);
      f_121 = ATgetArgument(c_121, 1);
      a_121 :
      if(match_cons(f_121, sym_TCons_2))
        {
          g_121 = ATgetArgument(f_121, 0);
          h_121 = ATgetArgument(f_121, 1);
          b_121 :
          if(match_cons(h_121, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(e_121), not_null(g_121));
          else
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
  ATerm p_121 = NULL;
  ATerm z_11;
  z_11 = t;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm a_12 = t;
      if(PushChoice()==0)
        {
          ATerm d_6 (ATerm t)
          {
            ATerm q_121 = NULL,s_121 = NULL;
            q_121 = t;
            m_121 :
            if(match_cons(q_121, sym_Output_1))
              {
                s_121 = ATgetArgument(q_121, 0);
                if(p_121 != NULL && p_121 != s_121)
                  _fail(s_121);
                else
                  p_121 = s_121;
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
          t = a_12;
          {
            ATerm t_121 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            t_121 = t;
            if(p_121 != NULL && p_121 != t_121)
              _fail(t_121);
            else
              p_121 = t_121;
          }
        }
      return(t);
    }
    ATerm c_6 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, b_6, c_6);
  }
  t = z_11;
  {
    ATerm e_6 (ATerm t)
    {
      ATerm f_6 (ATerm t)
      {
        ATerm g_6 (ATerm t)
        {
          t = not_null(p_121);
          return(t);
        }
        t = split_2(t, g_6, _id);
        return(t);
      }
      t = TCons_2(t, f_6, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, e_6);
    {
      ATerm b_12 = t;
      if(PushChoice()==0)
        {
          ATerm h_6 (ATerm t)
          {
            ATerm j_6 (ATerm t)
            {
              ATerm u_121 = NULL;
              u_121 = t;
              o_121 :
              if(!(match_cons(u_121, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, j_6);
            return(t);
          }
          ATerm i_6 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, h_6, i_6);
          PopChoice();
        }
      else
        {
          t = b_12;
          {
            ATerm k_6 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, k_6);
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
ATerm apply_strategy_1 (ATerm t, ATerm s_50 (ATerm))
{
  ATerm c_122 = NULL,e_122 = NULL,f_122 = NULL,g_122 = NULL,i_122 = NULL,j_122 = NULL;
  ATerm c_12;
  c_12 = t;
  t = dtime_0(t);
  t = c_12;
  t = s_50(t);
  {
    ATerm d_12;
    d_12 = t;
    {
      ATerm d_122 = NULL;
      t = dtime_0(t);
      d_122 = t;
      if(c_122 != NULL && c_122 != d_122)
        _fail(d_122);
      else
        c_122 = d_122;
    }
    t = d_12;
    e_122 = t;
    z_121 :
    if(match_cons(e_122, sym_TCons_2))
      {
        f_122 = ATgetArgument(e_122, 0);
        g_122 = ATgetArgument(e_122, 1);
        a_122 :
        if(match_cons(g_122, sym_TCons_2))
          {
            i_122 = ATgetArgument(g_122, 0);
            j_122 = ATgetArgument(g_122, 1);
            b_122 :
            if(match_cons(j_122, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(c_122)), not_null(f_122)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_122), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm p_122 = NULL;
  p_122 = t;
  t = SSL_ReadFromFile(not_null(p_122));
  return(t);
}
ATerm split_2 (ATerm t, ATerm w_52 (ATerm), ATerm x_52 (ATerm))
{
  ATerm v_122 = NULL;
  ATerm x_122 = NULL;
  v_122 = t;
  {
    ATerm z_122 = NULL;
    t = w_52(t);
    x_122 = t;
    t = not_null(v_122);
    t = x_52(t);
    z_122 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_122), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_122), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm h_123 = NULL;
  ATerm e_12;
  e_12 = t;
  {
    ATerm g_12 = t;
    if(PushChoice()==0)
      {
        ATerm l_6 (ATerm t)
        {
          ATerm i_123 = NULL,j_123 = NULL;
          i_123 = t;
          f_123 :
          if(match_cons(i_123, sym_Input_1))
            {
              j_123 = ATgetArgument(i_123, 0);
              if(h_123 != NULL && h_123 != j_123)
                _fail(j_123);
              else
                h_123 = j_123;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, l_6);
        PopChoice();
      }
    else
      {
        t = g_12;
        {
          ATerm k_123 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          k_123 = t;
          if(h_123 != NULL && h_123 != k_123)
            _fail(k_123);
          else
            h_123 = k_123;
        }
      }
  }
  t = e_12;
  {
    ATerm m_6 (ATerm t)
    {
      t = not_null(h_123);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, m_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm o_123 = NULL;
  o_123 = t;
  n_123 :
  if(!(match_cons(o_123, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_50 (ATerm))
{
  ATerm n_6 (ATerm t)
  {
    ATerm h_12 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = h_12;
        {
          ATerm i_12 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = i_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, n_6);
  t = r_50(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_123 = NULL;
  q_123 = t;
  t = SSL_table_create(not_null(q_123));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm u_123 = NULL;
  u_123 = t;
  {
    ATerm j_12;
    j_12 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_123), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = j_12;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm c_124 = NULL,d_124 = NULL,e_124 = NULL,f_124 = NULL,g_124 = NULL;
  g_124 = t;
  a_124 :
  if(match_cons(g_124, sym_Cons_2))
    {
      c_124 = ATgetArgument(g_124, 0);
      d_124 = ATgetArgument(g_124, 1);
      b_124 :
      if(match_cons(d_124, sym_Cons_2))
        {
          e_124 = ATgetArgument(d_124, 0);
          f_124 = ATgetArgument(d_124, 1);
          {
            ATerm k_124 = NULL;
            t = not_null(c_124);
            t = d_0(t);
            t = not_null(e_124);
            t = e_0(t);
            k_124 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_124), not_null(f_124));
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(g_124, "register-usage-info"))
        t = register_usage_1(t, f_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm k_12 = t;
  if(PushChoice()==0)
    {
      ATerm o_6 (ATerm t)
      {
        ATerm a_125 = NULL;
        a_125 = t;
        p_124 :
        if(!(match_string(a_125, "-S")))
          {
            if(!(match_string(a_125, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm p_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm q_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, o_6, p_6, q_6);
      PopChoice();
    }
  else
    {
      t = k_12;
      {
        ATerm l_12 = t;
        if(PushChoice()==0)
          {
            ATerm r_6 (ATerm t)
            {
              ATerm b_125 = NULL;
              b_125 = t;
              q_124 :
              if(!(match_string(b_125, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm s_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm t_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, r_6, s_6, t_6);
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
                    ATerm c_125 = NULL;
                    c_125 = t;
                    r_124 :
                    if(!(match_string(c_125, "-v")))
                      {
                        if(!(match_string(c_125, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm v_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm w_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, u_6, v_6, w_6);
                  PopChoice();
                }
              else
                {
                  t = m_12;
                  {
                    ATerm n_12 = t;
                    if(PushChoice()==0)
                      {
                        ATerm x_6 (ATerm t)
                        {
                          ATerm d_125 = NULL;
                          d_125 = t;
                          s_124 :
                          if(!(match_string(d_125, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm y_6 (ATerm t)
                        {
                          ATerm e_125 = NULL;
                          e_125 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(e_125));
                          return(t);
                        }
                        ATerm z_6 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, x_6, y_6, z_6);
                        PopChoice();
                      }
                    else
                      {
                        t = n_12;
                        {
                          ATerm o_12 = t;
                          if(PushChoice()==0)
                            {
                              ATerm a_7 (ATerm t)
                              {
                                ATerm g_125 = NULL;
                                g_125 = t;
                                u_124 :
                                if(!(match_string(g_125, "-i")))
                                  {
                                    if(!(match_string(g_125, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm b_7 (ATerm t)
                              {
                                ATerm h_125 = NULL;
                                h_125 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_125));
                                return(t);
                              }
                              ATerm c_7 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, a_7, b_7, c_7);
                              PopChoice();
                            }
                          else
                            {
                              t = o_12;
                              {
                                ATerm p_12 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm d_7 (ATerm t)
                                    {
                                      ATerm j_125 = NULL;
                                      j_125 = t;
                                      w_124 :
                                      if(!(match_string(j_125, "-o")))
                                        {
                                          if(!(match_string(j_125, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm e_7 (ATerm t)
                                    {
                                      ATerm k_125 = NULL;
                                      k_125 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(k_125));
                                      return(t);
                                    }
                                    ATerm f_7 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, d_7, e_7, f_7);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = p_12;
                                    {
                                      ATerm q_12 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm g_7 (ATerm t)
                                          {
                                            ATerm m_125 = NULL;
                                            m_125 = t;
                                            y_124 :
                                            if(!(match_string(m_125, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm h_7 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm j_7 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, g_7, h_7, j_7);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = q_12;
                                          {
                                            ATerm k_7 (ATerm t)
                                            {
                                              ATerm n_125 = NULL;
                                              n_125 = t;
                                              z_124 :
                                              if(!(match_string(n_125, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm l_7 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm m_7 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, k_7, l_7, m_7);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm s_125 = NULL;
  s_125 = t;
  t = SSL_table_destroy(not_null(s_125));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm w_125 = NULL;
  w_125 = t;
  t = SSL_exit(not_null(w_125));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm a_126 = NULL;
  a_126 = t;
  t = SSL_implode_string(not_null(a_126));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_59 (ATerm))
{
  ATerm d_126 (ATerm t)
  {
    ATerm r_12 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, d_126);
        PopChoice();
      }
    else
      {
        t = r_12;
        t = Nil_0(t);
        t = x_59(t);
      }
    return(t);
  }
  t = d_126(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_12 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = s_12;
      {
        ATerm g_126 = NULL,h_126 = NULL,i_126 = NULL;
        g_126 = t;
        f_126 :
        if(match_cons(g_126, sym_Cons_2))
          {
            h_126 = ATgetArgument(g_126, 0);
            i_126 = ATgetArgument(g_126, 1);
            t = not_null(h_126);
            {
              ATerm n_7 (ATerm t)
              {
                t = not_null(i_126);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, n_7);
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
  ATerm o_126 = NULL;
  o_126 = t;
  t = SSL_explode_string(not_null(o_126));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm y_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm j_59 (ATerm))
{
  ATerm r_126 (ATerm t)
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
        t = Cons_2(t, j_59, r_126);
      }
    return(t);
  }
  t = r_126(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm x_126 = NULL,y_126 = NULL,z_126 = NULL,a_127 = NULL,b_127 = NULL;
  x_126 = t;
  t_126 :
  if(match_cons(x_126, sym_TCons_2))
    {
      y_126 = ATgetArgument(x_126, 0);
      z_126 = ATgetArgument(x_126, 1);
      u_126 :
      if(match_cons(y_126, sym_Nil_0))
        {
          v_126 :
          if(match_cons(z_126, sym_TCons_2))
            {
              a_127 = ATgetArgument(z_126, 0);
              b_127 = ATgetArgument(z_126, 1);
              w_126 :
              if(match_cons(b_127, sym_TNil_0))
                t = not_null(a_127);
              else
                _fail(t);
            }
          else
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
  ATerm j_127 = NULL,k_127 = NULL,l_127 = NULL,m_127 = NULL,n_127 = NULL,o_127 = NULL,p_127 = NULL;
  j_127 = t;
  f_127 :
  if(match_cons(j_127, sym_TCons_2))
    {
      k_127 = ATgetArgument(j_127, 0);
      n_127 = ATgetArgument(j_127, 1);
      g_127 :
      if(match_cons(k_127, sym_Cons_2))
        {
          l_127 = ATgetArgument(k_127, 0);
          m_127 = ATgetArgument(k_127, 1);
          h_127 :
          if(match_cons(n_127, sym_TCons_2))
            {
              o_127 = ATgetArgument(n_127, 0);
              p_127 = ATgetArgument(n_127, 1);
              i_127 :
              if(match_cons(p_127, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_127), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_127), not_null(o_127)), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm c_65 (ATerm), ATerm d_65 (ATerm))
{
  ATerm u_127 (ATerm t)
  {
    ATerm u_12 = t;
    if(PushChoice()==0)
      {
        t = c_65(t);
        t = u_127(t);
        PopChoice();
      }
    else
      {
        t = u_12;
        t = d_65(t);
      }
    return(t);
  }
  t = u_127(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm f_65 (ATerm))
{
  t = repeat_2(t, f_65, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm w_127 = NULL;
  w_127 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_127), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm x_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_39 (ATerm))
{
  ATerm c_128 = NULL,d_128 = NULL;
  c_128 = t;
  b_128 :
  if(match_cons(c_128, sym_Program_1))
    {
      d_128 = ATgetArgument(c_128, 0);
      {
        ATerm f_128 = NULL;
        t = not_null(d_128);
        t = a_39(t);
        f_128 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_128));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm n_128 = NULL;
  ATerm s_7 (ATerm t)
  {
    ATerm u_7 (ATerm t)
    {
      ATerm o_128 = NULL;
      o_128 = t;
      if(n_128 != NULL && n_128 != o_128)
        _fail(o_128);
      else
        n_128 = o_128;
      return(t);
    }
    t = Program_1(t, u_7);
    return(t);
  }
  t = option_defined_1(t, s_7);
  {
    ATerm v_7 (ATerm t)
    {
      ATerm p_128 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm w_7 (ATerm t)
        {
          t = not_null(n_128);
          return(t);
        }
        t = short_description_1(t, w_7);
        t = concat_strings_0(t);
        p_128 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_128), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, v_7);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm x_7 (ATerm t)
      {
        ATerm r_128 = NULL;
        r_128 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_128), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, x_7);
      {
        ATerm y_7 (ATerm t)
        {
          ATerm t_128 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm z_7 (ATerm t)
            {
              t = not_null(n_128);
              return(t);
            }
            t = long_description_1(t, z_7);
            t = concat_strings_0(t);
            t_128 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_128), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = printnl_0(t);
          }
          return(t);
        }
        t = try_1(t, y_7);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm d_129 = NULL,e_129 = NULL,f_129 = NULL,g_129 = NULL,h_129 = NULL;
  d_129 = t;
  a_129 :
  if(match_cons(d_129, sym_TCons_2))
    {
      e_129 = ATgetArgument(d_129, 0);
      f_129 = ATgetArgument(d_129, 1);
      b_129 :
      if(match_cons(f_129, sym_TCons_2))
        {
          g_129 = ATgetArgument(f_129, 0);
          h_129 = ATgetArgument(f_129, 1);
          c_129 :
          if(match_cons(h_129, sym_TNil_0))
            {
              ATerm v_12;
              v_12 = t;
              t = SSL_printnl(not_null(e_129), not_null(g_129));
              t = v_12;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_39 (ATerm))
{
  ATerm o_129 = NULL,p_129 = NULL;
  o_129 = t;
  n_129 :
  if(match_cons(o_129, sym_Undefined_1))
    {
      p_129 = ATgetArgument(o_129, 0);
      {
        ATerm r_129 = NULL;
        t = not_null(p_129);
        t = b_39(t);
        r_129 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(r_129));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm r_59 (ATerm))
{
  ATerm v_129 (ATerm t)
  {
    ATerm w_12 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, r_59, _id);
        PopChoice();
      }
    else
      {
        t = w_12;
        t = Cons_2(t, _id, v_129);
      }
    return(t);
  }
  t = v_129(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_49 (ATerm))
{
  t = fetch_1(t, w_49);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_129 = NULL;
  x_129 = t;
  w_129 :
  if(!(match_cons(x_129, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm z_65 (ATerm))
{
  ATerm x_12 = t;
  if(PushChoice()==0)
    {
      t = z_65(t);
      PopChoice();
    }
  else
    t = x_12;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_130 = NULL,d_130 = NULL,e_130 = NULL,f_130 = NULL,g_130 = NULL;
  c_130 = t;
  z_129 :
  if(match_cons(c_130, sym_TCons_2))
    {
      d_130 = ATgetArgument(c_130, 0);
      e_130 = ATgetArgument(c_130, 1);
      a_130 :
      if(match_cons(e_130, sym_TCons_2))
        {
          f_130 = ATgetArgument(e_130, 0);
          g_130 = ATgetArgument(e_130, 1);
          b_130 :
          if(match_cons(g_130, sym_TNil_0))
            t = SSL_table_get(not_null(d_130), not_null(f_130));
          else
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
  ATerm q_130 = NULL,r_130 = NULL,s_130 = NULL,t_130 = NULL,u_130 = NULL,v_130 = NULL,w_130 = NULL;
  q_130 = t;
  m_130 :
  if(match_cons(q_130, sym_TCons_2))
    {
      r_130 = ATgetArgument(q_130, 0);
      s_130 = ATgetArgument(q_130, 1);
      n_130 :
      if(match_cons(s_130, sym_TCons_2))
        {
          t_130 = ATgetArgument(s_130, 0);
          u_130 = ATgetArgument(s_130, 1);
          o_130 :
          if(match_cons(u_130, sym_TCons_2))
            {
              v_130 = ATgetArgument(u_130, 0);
              w_130 = ATgetArgument(u_130, 1);
              p_130 :
              if(match_cons(w_130, sym_TNil_0))
                {
                  ATerm y_12;
                  y_12 = t;
                  {
                    ATerm a_131 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_130), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_130), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                      a_131 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_130), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_130), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_130), not_null(a_131)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = y_12;
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm c_49 (ATerm))
{
  ATerm f_131 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = c_49(t);
  f_131 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_131), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm m_131 = NULL,n_131 = NULL,o_131 = NULL;
  o_131 = t;
  l_131 :
  if(match_cons(o_131, sym_Cons_2))
    {
      m_131 = ATgetArgument(o_131, 0);
      n_131 = ATgetArgument(o_131, 1);
      {
        ATerm r_131 = NULL;
        t = not_null(m_131);
        t = a_0(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = b_0(t);
        r_131 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_131), not_null(n_131));
      }
    }
  else
    {
      if(match_string(o_131, "register-usage-info"))
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
    ATerm x_131 = NULL;
    x_131 = t;
    w_131 :
    if(!(match_string(x_131, "--help")))
      {
        if(!(match_string(x_131, "-h")))
          {
            if(!(match_string(x_131, "-?")))
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
  ATerm a_132 = NULL,b_132 = NULL,c_132 = NULL;
  a_132 = t;
  z_131 :
  if(match_cons(a_132, sym_Cons_2))
    {
      b_132 = ATgetArgument(a_132, 0);
      c_132 = ATgetArgument(a_132, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_132)), not_null(c_132));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm w_43 (ATerm), ATerm x_43 (ATerm))
{
  ATerm k_132 = NULL,l_132 = NULL,n_132 = NULL;
  k_132 = t;
  j_132 :
  if(match_cons(k_132, sym_Cons_2))
    {
      l_132 = ATgetArgument(k_132, 0);
      n_132 = ATgetArgument(k_132, 1);
      {
        ATerm q_132 = NULL;
        t = not_null(l_132);
        {
          ATerm s_132 = NULL;
          t = w_43(t);
          q_132 = t;
          t = not_null(n_132);
          t = x_43(t);
          s_132 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_132), not_null(s_132));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm y_132 = NULL;
  y_132 = t;
  x_132 :
  if(!(match_cons(y_132, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm a_49 (ATerm))
{
  ATerm a_13;
  a_13 = t;
  {
    ATerm d_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = a_49(t);
      return(t);
    }
    t = try_1(t, d_8);
  }
  t = a_13;
  {
    ATerm e_8 (ATerm t)
    {
      ATerm a_133 = NULL;
      a_133 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_133));
      return(t);
    }
    ATerm f_8 (ATerm t)
    {
      ATerm b_13 = t;
      if(PushChoice()==0)
        {
          ATerm c_13 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = c_13;
              t = a_49(t);
              t = Cons_2(t, _id, f_8);
            }
          PopChoice();
        }
      else
        {
          t = b_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, e_8, f_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm j_133 = NULL,k_133 = NULL,l_133 = NULL;
  ATerm d_13;
  d_13 = t;
  {
    ATerm m_133 = NULL,n_133 = NULL,o_133 = NULL,p_133 = NULL,q_133 = NULL,r_133 = NULL,s_133 = NULL;
    m_133 = t;
    f_133 :
    if(match_cons(m_133, sym_TCons_2))
      {
        n_133 = ATgetArgument(m_133, 0);
        o_133 = ATgetArgument(m_133, 1);
        g_133 :
        if(match_cons(o_133, sym_TCons_2))
          {
            p_133 = ATgetArgument(o_133, 0);
            q_133 = ATgetArgument(o_133, 1);
            h_133 :
            if(match_cons(q_133, sym_TCons_2))
              {
                r_133 = ATgetArgument(q_133, 0);
                s_133 = ATgetArgument(q_133, 1);
                i_133 :
                if(match_cons(s_133, sym_TNil_0))
                  {
                    if(j_133 != NULL && j_133 != n_133)
                      _fail(n_133);
                    else
                      j_133 = n_133;
                    if(k_133 != NULL && k_133 != p_133)
                      _fail(p_133);
                    else
                      k_133 = p_133;
                    if(l_133 != NULL && l_133 != r_133)
                      _fail(r_133);
                    else
                      l_133 = r_133;
                    t = SSL_table_put(not_null(j_133), not_null(k_133), not_null(l_133));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = d_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm z_48 (ATerm))
{
  ATerm v_133 = NULL;
  ATerm e_13;
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = e_13;
  {
    ATerm g_8 (ATerm t)
    {
      ATerm f_13 = t;
      if(PushChoice()==0)
        {
          t = z_48(t);
          PopChoice();
        }
      else
        {
          t = f_13;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, g_8);
    {
      ATerm h_8 (ATerm t)
      {
        ATerm g_13 = t;
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
            t = g_13;
            {
              ATerm i_8 (ATerm t)
              {
                ATerm j_8 (ATerm t)
                {
                  ATerm w_133 = NULL;
                  w_133 = t;
                  if(v_133 != NULL && v_133 != w_133)
                    _fail(w_133);
                  else
                    v_133 = w_133;
                  return(t);
                }
                t = Undefined_1(t, j_8);
                return(t);
              }
              t = option_defined_1(t, i_8);
              {
                ATerm h_13;
                h_13 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_133), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = h_13;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, h_8);
      {
        ATerm i_13;
        i_13 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = i_13;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm g_50 (ATerm), ATerm h_50 (ATerm), ATerm i_50 (ATerm))
{
  ATerm k_8 (ATerm t)
  {
    ATerm j_13 = t;
    if(PushChoice()==0)
      {
        t = h_50(t);
        PopChoice();
      }
    else
      {
        t = j_13;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, k_8);
  t = store_options_0(t);
  {
    ATerm k_13 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, i_50);
        PopChoice();
      }
    else
      {
        t = k_13;
        {
          ATerm l_13 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, g_50);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = l_13;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm b_50 (ATerm), ATerm c_50 (ATerm))
{
  t = iowrap_3(t, b_50, c_50, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm y_49 (ATerm))
{
  ATerm l_8 (ATerm t)
  {
    ATerm m_8 (ATerm t)
    {
      t = TCons_2(t, y_49, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, m_8);
    return(t);
  }
  t = iowrap_2(t, l_8, _fail);
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
