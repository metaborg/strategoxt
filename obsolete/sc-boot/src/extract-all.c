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
ATerm Nil_0 (ATerm);
ATerm MissingDef_0 (ATerm);
ATerm error_0 (ATerm);
ATerm MissingDefMod_0 (ATerm);
ATerm MissingDefs_0 (ATerm);
ATerm NoMissingDefs_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm filter_1 (ATerm, ATerm t_56 (ATerm));
ATerm FilterNonMissingDefs_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm n_42 (ATerm), ATerm o_42 (ATerm));
ATerm Let_2 (ATerm, ATerm p_42 (ATerm), ATerm q_42 (ATerm));
ATerm sboundin_3 (ATerm, ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm h_64 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm a_51 (ATerm), ATerm b_51 (ATerm), ATerm c_51 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm q_50 (ATerm), ATerm r_50 (ATerm));
ATerm diff_1 (ATerm, ATerm v_50 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm d_55 (ATerm), ATerm e_55 (ATerm), ATerm f_55 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm g_55 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm o_49 (ATerm), ATerm p_49 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm i_63 (ATerm), ATerm j_63 (ATerm));
ATerm alltd_1 (ATerm, ATerm i_62 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm k_63 (ATerm), ATerm l_63 (ATerm));
ATerm substitute_1 (ATerm, ATerm m_63 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm NonOverloadedDef_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm r_42 (ATerm), ATerm s_42 (ATerm), ATerm t_42 (ATerm));
ATerm partition_1 (ATerm, ATerm b_57 (ATerm));
ATerm OverloadedDef_0 (ATerm);
ATerm Expl_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm n_40 (ATerm), ATerm o_40 (ATerm));
ATerm Con_3 (ATerm, ATerm k_40 (ATerm), ATerm l_40 (ATerm), ATerm m_40 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm r_43 (ATerm), ATerm s_43 (ATerm));
ATerm oncetd_1 (ATerm, ATerm u_61 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm e_60 (ATerm));
ATerm desugar_0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm u_58 (ATerm));
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm t_57 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm new_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm g_50 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm l_57 (ATerm), ATerm m_57 (ATerm), ATerm n_57 (ATerm), ATerm o_57 (ATerm));
ATerm zip_1 (ATerm, ATerm q_57 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm h_44 (ATerm), ATerm i_44 (ATerm), ATerm j_44 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm c_53 (ATerm), ATerm d_53 (ATerm));
ATerm for_3 (ATerm, ATerm f_53 (ATerm), ATerm g_53 (ATerm), ATerm h_53 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm q_44 (ATerm), ATerm r_44 (ATerm), ATerm s_44 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm p_50 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm q_49 (ATerm), ATerm r_49 (ATerm), ATerm s_49 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm v_41 (ATerm));
ATerm Cons_2 (ATerm, ATerm a_44 (ATerm), ATerm b_44 (ATerm));
ATerm Specification_1 (ATerm, ATerm x_41 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm w_43 (ATerm), ATerm x_43 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm w_47 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_59 (ATerm), ATerm c_59 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm v_47 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_65 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_46 (ATerm));
ATerm map_1 (ATerm, ATerm d_65 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm l_52 (ATerm), ATerm m_52 (ATerm));
ATerm repeat_1 (ATerm, ATerm o_52 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_46 (ATerm));
ATerm Program_1 (ATerm, ATerm d_39 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm e_39 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_65 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_47 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_59 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_46 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_46 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_46 (ATerm));
ATerm iowrap_3 (ATerm, ATerm k_47 (ATerm), ATerm l_47 (ATerm), ATerm m_47 (ATerm));
ATerm iowrap_2 (ATerm, ATerm f_47 (ATerm), ATerm g_47 (ATerm));
ATerm iowrap_1 (ATerm, ATerm c_47 (ATerm));
ATerm extract_all_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm z_1 = NULL;
  z_1 = t;
  y_1 :
  if(!(match_cons(z_1, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm MissingDef_0 (ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL;
  e_2 = t;
  b_2 :
  if(match_cons(e_2, sym_TCons_2))
    {
      f_2 = ATgetArgument(e_2, 0);
      g_2 = ATgetArgument(e_2, 1);
      c_2 :
      if(match_cons(g_2, sym_TCons_2))
        {
          h_2 = ATgetArgument(g_2, 0);
          i_2 = ATgetArgument(g_2, 1);
          d_2 :
          if(match_cons(i_2, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_2), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("/", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_2), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
              t = error_0(t);
            }
          else
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
  ATerm b_9;
  b_9 = t;
  {
    ATerm g_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, g_0, _id);
    t = printnl_0(t);
  }
  t = b_9;
  return(t);
}
ATerm MissingDefMod_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL;
  r_2 = t;
  n_2 :
  if(match_cons(r_2, sym_TCons_2))
    {
      s_2 = ATgetArgument(r_2, 0);
      v_2 = ATgetArgument(r_2, 1);
      o_2 :
      if(match_cons(s_2, sym_Mod_2))
        {
          t_2 = ATgetArgument(s_2, 0);
          u_2 = ATgetArgument(s_2, 1);
          p_2 :
          if(match_cons(v_2, sym_TCons_2))
            {
              w_2 = ATgetArgument(v_2, 0);
              x_2 = ATgetArgument(v_2, 1);
              q_2 :
              if(match_cons(x_2, sym_TNil_0))
                {
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_2), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("^", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_2), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("/", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_2), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))))));
                  t = error_0(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm MissingDefs_0 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL;
  h_3 = t;
  d_3 :
  if(match_cons(h_3, sym_TCons_2))
    {
      i_3 = ATgetArgument(h_3, 0);
      j_3 = ATgetArgument(h_3, 1);
      e_3 :
      if(match_cons(j_3, sym_TCons_2))
        {
          k_3 = ATgetArgument(j_3, 0);
          n_3 = ATgetArgument(j_3, 1);
          f_3 :
          if(match_cons(k_3, sym_Cons_2))
            {
              l_3 = ATgetArgument(k_3, 0);
              m_3 = ATgetArgument(k_3, 1);
              g_3 :
              if(match_cons(n_3, sym_TNil_0))
                {
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_3), not_null(m_3));
                  {
                    ATerm h_0 (ATerm t)
                    {
                      ATerm c_9 = t;
                      if(PushChoice()==0)
                        {
                          t = MissingDefMod_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = c_9;
                          t = MissingDef_0(t);
                        }
                      return(t);
                    }
                    t = map_1(t, h_0);
                    t = not_null(i_3);
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
ATerm NoMissingDefs_0 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL;
  x_3 = t;
  t_3 :
  if(match_cons(x_3, sym_TCons_2))
    {
      y_3 = ATgetArgument(x_3, 0);
      z_3 = ATgetArgument(x_3, 1);
      u_3 :
      if(match_cons(z_3, sym_TCons_2))
        {
          a_4 = ATgetArgument(z_3, 0);
          b_4 = ATgetArgument(z_3, 1);
          v_3 :
          if(match_cons(a_4, sym_Nil_0))
            {
              w_3 :
              if(match_cons(b_4, sym_TNil_0))
                t = not_null(y_3);
              else
                _fail(t);
            }
          else
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
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL;
  i_4 = t;
  f_4 :
  if(match_cons(i_4, sym_TCons_2))
    {
      j_4 = ATgetArgument(i_4, 0);
      k_4 = ATgetArgument(i_4, 1);
      g_4 :
      if(match_cons(k_4, sym_TCons_2))
        {
          l_4 = ATgetArgument(k_4, 0);
          m_4 = ATgetArgument(k_4, 1);
          h_4 :
          if(match_cons(m_4, sym_TNil_0))
            {
              if(j_4 != NULL && j_4 != l_4)
                _fail(l_4);
              else
                j_4 = l_4;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm t_56 (ATerm))
{
  ATerm h_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = h_9;
      {
        ATerm i_9 = t;
        if(PushChoice()==0)
          {
            ATerm i_0 (ATerm t)
            {
              t = filter_1(t, t_56);
              return(t);
            }
            t = Cons_2(t, t_56, i_0);
            PopChoice();
          }
        else
          {
            t = i_9;
            {
              ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
              r_4 = t;
              q_4 :
              if(match_cons(r_4, sym_Cons_2))
                {
                  s_4 = ATgetArgument(r_4, 0);
                  t_4 = ATgetArgument(r_4, 1);
                  t = not_null(t_4);
                  t = filter_1(t, t_56);
                }
              else
                _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm FilterNonMissingDefs_0 (ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,i_6 = NULL;
  k_5 = t;
  h_5 :
  if(match_cons(k_5, sym_TCons_2))
    {
      l_5 = ATgetArgument(k_5, 0);
      m_5 = ATgetArgument(k_5, 1);
      i_5 :
      if(match_cons(m_5, sym_TCons_2))
        {
          n_5 = ATgetArgument(m_5, 0);
          i_6 = ATgetArgument(m_5, 1);
          j_5 :
          if(match_cons(i_6, sym_TNil_0))
            {
              ATerm e_7 = NULL;
              t = not_null(n_5);
              {
                ATerm j_0 (ATerm t)
                {
                  ATerm j_9 = t;
                  if(PushChoice()==0)
                    {
                      ATerm l_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL;
                      l_6 = t;
                      a_5 :
                      if(match_cons(l_6, sym_TCons_2))
                        {
                          w_6 = ATgetArgument(l_6, 0);
                          x_6 = ATgetArgument(l_6, 1);
                          b_5 :
                          if(match_cons(x_6, sym_TCons_2))
                            {
                              y_6 = ATgetArgument(x_6, 0);
                              z_6 = ATgetArgument(x_6, 1);
                              f_5 :
                              if(match_cons(z_6, sym_TNil_0))
                                {
                                  t = not_null(l_5);
                                  {
                                    ATerm k_0 (ATerm t)
                                    {
                                      ATerm l_0 (ATerm t)
                                      {
                                        ATerm c_7 = NULL;
                                        c_7 = t;
                                        if(w_6 != NULL && w_6 != c_7)
                                          _fail(c_7);
                                        else
                                          w_6 = c_7;
                                        return(t);
                                      }
                                      ATerm m_0 (ATerm t)
                                      {
                                        ATerm k_9 = t;
                                        if(PushChoice()==0)
                                          {
                                            ATerm d_7 = NULL;
                                            t = length_0(t);
                                            d_7 = t;
                                            if(y_6 != NULL && y_6 != d_7)
                                              _fail(d_7);
                                            else
                                              y_6 = d_7;
                                            PopChoice();
                                          }
                                        else
                                          {
                                            t = k_9;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_6), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = eq_0(t);
                                          }
                                        return(t);
                                      }
                                      t = SDef_3(t, l_0, m_0, _id);
                                      return(t);
                                    }
                                    t = fetch_1(t, k_0);
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
                      _fail(t);
                    }
                  else
                    t = j_9;
                  return(t);
                }
                t = filter_1(t, j_0);
                e_7 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_5), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_7), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm Rec_2 (ATerm t, ATerm n_42 (ATerm), ATerm o_42 (ATerm))
{
  ATerm p_7 = NULL,q_7 = NULL,y_7 = NULL;
  p_7 = t;
  o_7 :
  if(match_cons(p_7, sym_Rec_2))
    {
      q_7 = ATgetArgument(p_7, 0);
      y_7 = ATgetArgument(p_7, 1);
      {
        ATerm b_8 = NULL;
        t = not_null(q_7);
        {
          ATerm d_8 = NULL;
          t = n_42(t);
          b_8 = t;
          t = not_null(y_7);
          t = o_42(t);
          d_8 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(b_8), not_null(d_8));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm p_42 (ATerm), ATerm q_42 (ATerm))
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL;
  p_8 = t;
  o_8 :
  if(match_cons(p_8, sym_Let_2))
    {
      q_8 = ATgetArgument(p_8, 0);
      r_8 = ATgetArgument(p_8, 1);
      {
        ATerm u_8 = NULL;
        t = not_null(q_8);
        {
          ATerm w_8 = NULL;
          t = p_42(t);
          u_8 = t;
          t = not_null(r_8);
          t = q_42(t);
          w_8 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(u_8), not_null(w_8));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm h_64 (ATerm))
{
  ATerm l_9 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, f_64, f_64);
      PopChoice();
    }
  else
    {
      t = l_9;
      {
        ATerm s_9 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, h_64, h_64, f_64);
            PopChoice();
          }
        else
          {
            t = s_9;
            t = Rec_2(t, h_64, f_64);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
  e_9 = t;
  d_9 :
  if(match_cons(e_9, sym_Rec_2))
    {
      f_9 = ATgetArgument(e_9, 0);
      g_9 = ATgetArgument(e_9, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_9), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym_SDef_3))
    {
      p_9 = ATgetArgument(o_9, 0);
      q_9 = ATgetArgument(o_9, 1);
      r_9 = ATgetArgument(o_9, 2);
      t = not_null(q_9);
      {
        ATerm n_0 (ATerm t)
        {
          ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL;
          e_10 = t;
          m_9 :
          if(match_cons(e_10, sym_VarDec_2))
            {
              f_10 = ATgetArgument(e_10, 0);
              g_10 = ATgetArgument(e_10, 1);
              t = not_null(f_10);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, n_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
  c_11 = t;
  b_11 :
  if(match_cons(c_11, sym_Let_2))
    {
      d_11 = ATgetArgument(c_11, 0);
      e_11 = ATgetArgument(c_11, 1);
      t = not_null(d_11);
      {
        ATerm o_0 (ATerm t)
        {
          ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL;
          h_11 = t;
          a_11 :
          if(match_cons(h_11, sym_SDef_3))
            {
              i_11 = ATgetArgument(h_11, 0);
              j_11 = ATgetArgument(h_11, 1);
              k_11 = ATgetArgument(h_11, 2);
              t = not_null(i_11);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, o_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm a_51 (ATerm), ATerm b_51 (ATerm), ATerm c_51 (ATerm))
{
  ATerm d_12 = NULL;
  ATerm f_12 = NULL;
  d_12 = t;
  {
    ATerm g_12 = NULL;
    ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
    t = not_null(d_12);
    g_12 = t;
    t = SSL_explode_term(not_null(g_12));
    i_12 = t;
    a_12 :
    if(match_cons(i_12, sym_TCons_2))
      {
        j_12 = ATgetArgument(i_12, 0);
        k_12 = ATgetArgument(i_12, 1);
        b_12 :
        if(match_cons(k_12, sym_TCons_2))
          {
            l_12 = ATgetArgument(k_12, 0);
            m_12 = ATgetArgument(k_12, 1);
            c_12 :
            if(match_cons(m_12, sym_TNil_0))
              {
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
    t = not_null(f_12);
    t = foldr_3(t, a_51, b_51, c_51);
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm q_50 (ATerm), ATerm r_50 (ATerm))
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
  x_12 = t;
  w_12 :
  if(match_cons(x_12, sym_Cons_2))
    {
      y_12 = ATgetArgument(x_12, 0);
      z_12 = ATgetArgument(x_12, 1);
      t = r_50(t);
      {
        ATerm p_0 (ATerm t)
        {
          ATerm c_13 = NULL;
          c_13 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_13), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = q_50(t);
          return(t);
        }
        t = fetch_1(t, p_0);
        t = not_null(z_12);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_1 (ATerm t, ATerm v_50 (ATerm))
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,q_13 = NULL;
  k_13 = t;
  h_13 :
  if(match_cons(k_13, sym_TCons_2))
    {
      l_13 = ATgetArgument(k_13, 0);
      m_13 = ATgetArgument(k_13, 1);
      i_13 :
      if(match_cons(m_13, sym_TCons_2))
        {
          n_13 = ATgetArgument(m_13, 0);
          q_13 = ATgetArgument(m_13, 1);
          j_13 :
          if(match_cons(q_13, sym_TNil_0))
            {
              t = not_null(l_13);
              {
                ATerm v_13 (ATerm t)
                {
                  ATerm t_9 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = t_9;
                      {
                        ATerm u_9 = t;
                        if(PushChoice()==0)
                          {
                            ATerm q_0 (ATerm t)
                            {
                              t = not_null(n_13);
                              return(t);
                            }
                            t = HdMember_p__2(t, v_50, q_0);
                            t = v_13(t);
                            PopChoice();
                          }
                        else
                          {
                            t = u_9;
                            t = Cons_2(t, _id, v_13);
                          }
                      }
                    }
                  return(t);
                }
                t = v_13(t);
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
ATerm free_vars2_4 (ATerm t, ATerm d_55 (ATerm), ATerm e_55 (ATerm), ATerm f_55 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm g_55 (ATerm))
{
  ATerm z_13 (ATerm t)
  {
    ATerm r_0 (ATerm t)
    {
      ATerm v_9 = t;
      if(PushChoice()==0)
        {
          t = d_55(t);
          PopChoice();
        }
      else
        {
          t = v_9;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      return(t);
    }
    ATerm s_0 (ATerm t)
    {
      ATerm w_9 = t;
      if(PushChoice()==0)
        {
          ATerm x_13 = NULL;
          ATerm x_9;
          x_9 = t;
          {
            ATerm y_13 = NULL;
            t = e_55(t);
            y_13 = t;
            if(x_13 != NULL && x_13 != y_13)
              _fail(y_13);
            else
              x_13 = y_13;
          }
          t = x_9;
          {
            ATerm t_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                t = not_null(x_13);
                return(t);
              }
              t = split_2(t, z_13, v_0);
              t = diff_1(t, g_55);
              return(t);
            }
            ATerm u_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = f_55(t, t_0, z_13, u_0);
            {
              ATerm w_0 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(sym_Nil_0);
                return(t);
              }
              t = crush_3(t, w_0, union_0, _id);
            }
          }
          PopChoice();
        }
      else
        {
          t = w_9;
          {
            ATerm x_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = crush_3(t, x_0, union_0, z_13);
          }
        }
      return(t);
    }
    t = split_2(t, r_0, s_0);
    t = union_0(t);
    return(t);
  }
  t = z_13(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL;
    m_14 = t;
    d_14 :
    if(match_cons(m_14, sym_Call_2))
      {
        n_14 = ATgetArgument(m_14, 0);
        p_14 = ATgetArgument(m_14, 1);
        e_14 :
        if(match_cons(n_14, sym_SVar_1))
          {
            o_14 = ATgetArgument(n_14, 0);
            {
              ATerm s_14 = NULL;
              ATerm x_14 = NULL;
              t = not_null(p_14);
              t = length_0(t);
              x_14 = t;
              if(s_14 != NULL && s_14 != x_14)
                _fail(x_14);
              else
                s_14 = x_14;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(o_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_14), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0));
            }
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm z_0 (ATerm t)
  {
    ATerm y_9 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = y_9;
        {
          ATerm z_9 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = z_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
    y_14 = t;
    g_14 :
    if(match_cons(y_14, sym_TCons_2))
      {
        z_14 = ATgetArgument(y_14, 0);
        e_15 = ATgetArgument(y_14, 1);
        h_14 :
        if(match_cons(z_14, sym_TCons_2))
          {
            a_15 = ATgetArgument(z_14, 0);
            b_15 = ATgetArgument(z_14, 1);
            i_14 :
            if(match_cons(b_15, sym_TCons_2))
              {
                c_15 = ATgetArgument(b_15, 0);
                d_15 = ATgetArgument(b_15, 1);
                j_14 :
                if(match_cons(d_15, sym_TNil_0))
                  {
                    k_14 :
                    if(match_cons(e_15, sym_TCons_2))
                      {
                        f_15 = ATgetArgument(e_15, 0);
                        g_15 = ATgetArgument(e_15, 1);
                        l_14 :
                        if(match_cons(g_15, sym_TNil_0))
                          {
                            if(a_15 != NULL && a_15 != f_15)
                              _fail(f_15);
                            else
                              a_15 = f_15;
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = free_vars2_4(t, y_0, z_0, sboundin_3, a_1);
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm o_49 (ATerm), ATerm p_49 (ATerm))
{
  ATerm a_10 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = o_49(t);
      PopChoice();
    }
  else
    {
      t = a_10;
      {
        ATerm v_15 = NULL,h_16 = NULL,i_16 = NULL;
        v_15 = t;
        u_15 :
        if(match_cons(v_15, sym_Cons_2))
          {
            h_16 = ATgetArgument(v_15, 0);
            i_16 = ATgetArgument(v_15, 1);
            {
              ATerm m_16 = NULL;
              ATerm n_16 = NULL;
              t = not_null(i_16);
              t = foldr_2(t, o_49, p_49);
              n_16 = t;
              if(m_16 != NULL && m_16 != n_16)
                _fail(n_16);
              else
                m_16 = n_16;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_16), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = p_49(t);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Fail_0);
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
    u_16 = t;
    r_16 :
    if(match_cons(u_16, sym_TCons_2))
      {
        v_16 = ATgetArgument(u_16, 0);
        w_16 = ATgetArgument(u_16, 1);
        s_16 :
        if(match_cons(w_16, sym_TCons_2))
          {
            x_16 = ATgetArgument(w_16, 0);
            y_16 = ATgetArgument(w_16, 1);
            t_16 :
            if(match_cons(y_16, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(v_16), not_null(x_16));
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = foldr_2(t, b_1, c_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  i_17 = t;
  d_17 :
  if(match_cons(i_17, sym_Call_2))
    {
      j_17 = ATgetArgument(i_17, 0);
      l_17 = ATgetArgument(i_17, 1);
      g_17 :
      if(match_cons(j_17, sym_SVar_1))
        {
          k_17 = ATgetArgument(j_17, 0);
          h_17 :
          if(match_cons(l_17, sym_Nil_0))
            t = not_null(k_17);
          else
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
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL;
  t_17 = t;
  p_17 :
  if(match_cons(t_17, sym_TCons_2))
    {
      u_17 = ATgetArgument(t_17, 0);
      v_17 = ATgetArgument(t_17, 1);
      q_17 :
      if(match_cons(v_17, sym_TCons_2))
        {
          w_17 = ATgetArgument(v_17, 0);
          z_17 = ATgetArgument(v_17, 1);
          r_17 :
          if(match_cons(w_17, sym_Cons_2))
            {
              x_17 = ATgetArgument(w_17, 0);
              y_17 = ATgetArgument(w_17, 1);
              s_17 :
              if(match_cons(z_17, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_17), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
  l_18 = t;
  e_18 :
  if(match_cons(l_18, sym_TCons_2))
    {
      m_18 = ATgetArgument(l_18, 0);
      n_18 = ATgetArgument(l_18, 1);
      f_18 :
      if(match_cons(n_18, sym_TCons_2))
        {
          o_18 = ATgetArgument(n_18, 0);
          v_18 = ATgetArgument(n_18, 1);
          g_18 :
          if(match_cons(o_18, sym_Cons_2))
            {
              p_18 = ATgetArgument(o_18, 0);
              u_18 = ATgetArgument(o_18, 1);
              h_18 :
              if(match_cons(p_18, sym_TCons_2))
                {
                  q_18 = ATgetArgument(p_18, 0);
                  r_18 = ATgetArgument(p_18, 1);
                  i_18 :
                  if(match_cons(r_18, sym_TCons_2))
                    {
                      s_18 = ATgetArgument(r_18, 0);
                      t_18 = ATgetArgument(r_18, 1);
                      j_18 :
                      if(match_cons(t_18, sym_TNil_0))
                        {
                          k_18 :
                          if(match_cons(v_18, sym_TNil_0))
                            {
                              ATerm x_18 = NULL;
                              if(m_18 != NULL && m_18 != q_18)
                                _fail(q_18);
                              else
                                m_18 = q_18;
                              if(x_18 != NULL && x_18 != s_18)
                                _fail(s_18);
                              else
                                x_18 = s_18;
                              t = not_null(x_18);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm b_10 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = b_10;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm i_63 (ATerm), ATerm j_63 (ATerm))
{
  ATerm d_19 = NULL;
  ATerm f_19 = NULL;
  d_19 = t;
  {
    ATerm h_19 = NULL;
    t = i_63(t);
    f_19 = t;
    t = j_63(t);
    h_19 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_19), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm i_62 (ATerm))
{
  ATerm m_19 (ATerm t)
  {
    ATerm c_10 = t;
    if(PushChoice()==0)
      {
        t = i_62(t);
        PopChoice();
      }
    else
      {
        t = c_10;
        t = _all(t, m_19);
      }
    return(t);
  }
  t = m_19(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL;
  u_19 = t;
  q_19 :
  if(match_cons(u_19, sym_TCons_2))
    {
      v_19 = ATgetArgument(u_19, 0);
      w_19 = ATgetArgument(u_19, 1);
      r_19 :
      if(match_cons(w_19, sym_TCons_2))
        {
          x_19 = ATgetArgument(w_19, 0);
          y_19 = ATgetArgument(w_19, 1);
          s_19 :
          if(match_cons(y_19, sym_TNil_0))
            {
              ATerm c_20 = NULL;
              if(c_20 != NULL && c_20 != x_19)
                _fail(x_19);
              else
                c_20 = x_19;
            }
          else
            {
              if(match_cons(y_19, sym_TCons_2))
                {
                  z_19 = ATgetArgument(y_19, 0);
                  a_20 = ATgetArgument(y_19, 1);
                  t_19 :
                  if(match_cons(a_20, sym_TNil_0))
                    {
                      ATerm i_20 = NULL;
                      ATerm j_20 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      j_20 = t;
                      if(i_20 != NULL && i_20 != j_20)
                        _fail(j_20);
                      else
                        i_20 = j_20;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_19), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm k_63 (ATerm), ATerm l_63 (ATerm))
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t = subs_args_0(t);
  r_20 = t;
  o_20 :
  if(match_cons(r_20, sym_TCons_2))
    {
      s_20 = ATgetArgument(r_20, 0);
      t_20 = ATgetArgument(r_20, 1);
      p_20 :
      if(match_cons(t_20, sym_TCons_2))
        {
          u_20 = ATgetArgument(t_20, 0);
          v_20 = ATgetArgument(t_20, 1);
          q_20 :
          if(match_cons(v_20, sym_TNil_0))
            {
              t = not_null(u_20);
              {
                ATerm d_1 (ATerm t)
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = not_null(s_20);
                    return(t);
                  }
                  t = SubsVar_2(t, k_63, e_1);
                  t = l_63(t);
                  return(t);
                }
                t = alltd_1(t, d_1);
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
ATerm substitute_1 (ATerm t, ATerm m_63 (ATerm))
{
  t = substitute_2(t, m_63, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL;
  r_21 = t;
  p_21 :
  if(match_cons(r_21, sym_Cons_2))
    {
      s_21 = ATgetArgument(r_21, 0);
      w_21 = ATgetArgument(r_21, 1);
      q_21 :
      if(match_cons(s_21, sym_SDef_3))
        {
          t_21 = ATgetArgument(s_21, 0);
          u_21 = ATgetArgument(s_21, 1);
          v_21 = ATgetArgument(s_21, 2);
          {
            ATerm i_22 = NULL;
            t = not_null(u_21);
            {
              ATerm a_23 = NULL;
              ATerm f_1 (ATerm t)
              {
                ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
                b_22 = t;
                d_21 :
                if(match_cons(b_22, sym_VarDec_2))
                  {
                    c_22 = ATgetArgument(b_22, 0);
                    d_22 = ATgetArgument(b_22, 1);
                    {
                      ATerm g_22 = NULL;
                      ATerm h_22 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TNil_0);
                      t = new_0(t);
                      h_22 = t;
                      if(g_22 != NULL && g_22 != h_22)
                        _fail(h_22);
                      else
                        g_22 = h_22;
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(g_22), not_null(d_22));
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, f_1);
              i_22 = t;
              {
                ATerm u_23 = NULL;
                ATerm g_1 (ATerm t)
                {
                  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
                  v_22 = t;
                  g_21 :
                  if(match_cons(v_22, sym_VarDec_2))
                    {
                      w_22 = ATgetArgument(v_22, 0);
                      x_22 = ATgetArgument(v_22, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_22)), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = map_1(t, g_1);
                a_23 = t;
                t = not_null(r_21);
                {
                  ATerm w_23 = NULL;
                  ATerm h_1 (ATerm t)
                  {
                    ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
                    g_23 = t;
                    m_21 :
                    if(match_cons(g_23, sym_SDef_3))
                      {
                        h_23 = ATgetArgument(g_23, 0);
                        i_23 = ATgetArgument(g_23, 1);
                        j_23 = ATgetArgument(g_23, 2);
                        {
                          ATerm k_23 = NULL,n_23 = NULL,o_23 = NULL;
                          if(t_21 != NULL && t_21 != h_23)
                            _fail(h_23);
                          else
                            t_21 = h_23;
                          if(k_23 != NULL && k_23 != i_23)
                            _fail(i_23);
                          else
                            k_23 = i_23;
                          if(n_23 != NULL && n_23 != j_23)
                            _fail(j_23);
                          else
                            n_23 = j_23;
                          {
                            ATerm t_23 = NULL;
                            t = not_null(k_23);
                            {
                              ATerm i_1 (ATerm t)
                              {
                                ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
                                p_23 = t;
                                k_21 :
                                if(match_cons(p_23, sym_VarDec_2))
                                  {
                                    q_23 = ATgetArgument(p_23, 0);
                                    r_23 = ATgetArgument(p_23, 1);
                                    t = not_null(q_23);
                                  }
                                else
                                  _fail(t);
                                return(t);
                              }
                              t = map_1(t, i_1);
                              t_23 = t;
                              if(o_23 != NULL && o_23 != t_23)
                                _fail(t_23);
                              else
                                o_23 = t_23;
                            }
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_23), (ATerm) ATmakeAppl(sym_TNil_0))));
                            t = ssubs_0(t);
                          }
                        }
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = map_1(t, h_1);
                  u_23 = t;
                  {
                    ATerm x_23 = NULL;
                    t = not_null(u_23);
                    t = choices_0(t);
                    x_23 = t;
                    if(w_23 != NULL && w_23 != x_23)
                      _fail(x_23);
                    else
                      w_23 = x_23;
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(t_21), not_null(i_22), not_null(w_23));
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
ATerm JoinDefs1_0 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
  m_24 = t;
  k_24 :
  if(match_cons(m_24, sym_Cons_2))
    {
      n_24 = ATgetArgument(m_24, 0);
      o_24 = ATgetArgument(m_24, 1);
      l_24 :
      if(match_cons(o_24, sym_Nil_0))
        t = not_null(n_24);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm joindefs_0 (ATerm t)
{
  ATerm d_10 = t;
  if(PushChoice()==0)
    {
      t = JoinDefs1_0(t);
      PopChoice();
    }
  else
    {
      t = d_10;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm NonOverloadedDef_0 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
  c_25 = t;
  v_24 :
  if(match_cons(c_25, sym_TCons_2))
    {
      d_25 = ATgetArgument(c_25, 0);
      i_25 = ATgetArgument(c_25, 1);
      w_24 :
      if(match_cons(d_25, sym_TCons_2))
        {
          e_25 = ATgetArgument(d_25, 0);
          f_25 = ATgetArgument(d_25, 1);
          x_24 :
          if(match_cons(f_25, sym_TCons_2))
            {
              g_25 = ATgetArgument(f_25, 0);
              h_25 = ATgetArgument(f_25, 1);
              y_24 :
              if(match_int(g_25, 0))
                {
                  z_24 :
                  if(match_cons(h_25, sym_TNil_0))
                    {
                      a_25 :
                      if(match_cons(i_25, sym_TCons_2))
                        {
                          j_25 = ATgetArgument(i_25, 0);
                          k_25 = ATgetArgument(i_25, 1);
                          b_25 :
                          if(match_cons(k_25, sym_TNil_0))
                            {
                              t = not_null(j_25);
                              {
                                ATerm j_1 (ATerm t)
                                {
                                  ATerm k_1 (ATerm t)
                                  {
                                    ATerm n_25 = NULL;
                                    n_25 = t;
                                    if(e_25 != NULL && e_25 != n_25)
                                      _fail(n_25);
                                    else
                                      e_25 = n_25;
                                    return(t);
                                  }
                                  t = SDef_3(t, k_1, _id, _id);
                                  return(t);
                                }
                                t = partition_1(t, j_1);
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
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm r_42 (ATerm), ATerm s_42 (ATerm), ATerm t_42 (ATerm))
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym_SDef_3))
    {
      w_25 = ATgetArgument(v_25, 0);
      x_25 = ATgetArgument(v_25, 1);
      y_25 = ATgetArgument(v_25, 2);
      {
        ATerm c_26 = NULL;
        t = not_null(w_25);
        {
          ATerm e_26 = NULL;
          t = r_42(t);
          c_26 = t;
          t = not_null(x_25);
          {
            ATerm g_26 = NULL;
            t = s_42(t);
            e_26 = t;
            t = not_null(y_25);
            t = t_42(t);
            g_26 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(c_26), not_null(e_26), not_null(g_26));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm partition_1 (ATerm t, ATerm b_57 (ATerm))
{
  ATerm y_28 (ATerm t)
  {
    ATerm h_10 = t;
    if(PushChoice()==0)
      {
        ATerm p_27 = NULL;
        p_27 = t;
        s_26 :
        if(match_cons(p_27, sym_Nil_0))
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
        else
          _fail(t);
        PopChoice();
      }
    else
      {
        t = h_10;
        {
          ATerm i_10 = t;
          if(PushChoice()==0)
            {
              ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,g_28 = NULL,h_28 = NULL;
              t = Cons_2(t, b_57, y_28);
              q_27 = t;
              u_26 :
              if(match_cons(q_27, sym_Cons_2))
                {
                  r_27 = ATgetArgument(q_27, 0);
                  s_27 = ATgetArgument(q_27, 1);
                  v_26 :
                  if(match_cons(s_27, sym_TCons_2))
                    {
                      t_27 = ATgetArgument(s_27, 0);
                      u_27 = ATgetArgument(s_27, 1);
                      h_27 :
                      if(match_cons(u_27, sym_TCons_2))
                        {
                          g_28 = ATgetArgument(u_27, 0);
                          h_28 = ATgetArgument(u_27, 1);
                          i_27 :
                          if(match_cons(h_28, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_27), not_null(t_27)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_28), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
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
              t = i_10;
              {
                ATerm l_28 = NULL,m_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL;
                t = Cons_2(t, _id, y_28);
                l_28 = t;
                k_27 :
                if(match_cons(l_28, sym_Cons_2))
                  {
                    m_28 = ATgetArgument(l_28, 0);
                    q_28 = ATgetArgument(l_28, 1);
                    l_27 :
                    if(match_cons(q_28, sym_TCons_2))
                      {
                        r_28 = ATgetArgument(q_28, 0);
                        s_28 = ATgetArgument(q_28, 1);
                        n_27 :
                        if(match_cons(s_28, sym_TCons_2))
                          {
                            t_28 = ATgetArgument(s_28, 0);
                            u_28 = ATgetArgument(s_28, 1);
                            o_27 :
                            if(match_cons(u_28, sym_TNil_0))
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_28), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_28), not_null(t_28)), (ATerm) ATmakeAppl(sym_TNil_0)));
                            else
                              _fail(t);
                          }
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
      }
    return(t);
  }
  t = y_28(t);
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL;
  l_29 = t;
  f_29 :
  if(match_cons(l_29, sym_TCons_2))
    {
      m_29 = ATgetArgument(l_29, 0);
      r_29 = ATgetArgument(l_29, 1);
      g_29 :
      if(match_cons(m_29, sym_TCons_2))
        {
          n_29 = ATgetArgument(m_29, 0);
          o_29 = ATgetArgument(m_29, 1);
          h_29 :
          if(match_cons(o_29, sym_TCons_2))
            {
              p_29 = ATgetArgument(o_29, 0);
              q_29 = ATgetArgument(o_29, 1);
              i_29 :
              if(match_cons(q_29, sym_TNil_0))
                {
                  j_29 :
                  if(match_cons(r_29, sym_TCons_2))
                    {
                      s_29 = ATgetArgument(r_29, 0);
                      t_29 = ATgetArgument(r_29, 1);
                      k_29 :
                      if(match_cons(t_29, sym_TNil_0))
                        {
                          t = not_null(s_29);
                          {
                            ATerm l_1 (ATerm t)
                            {
                              ATerm m_1 (ATerm t)
                              {
                                ATerm x_29 = NULL;
                                x_29 = t;
                                if(n_29 != NULL && n_29 != x_29)
                                  _fail(x_29);
                                else
                                  n_29 = x_29;
                                return(t);
                              }
                              ATerm n_1 (ATerm t)
                              {
                                ATerm j_10;
                                j_10 = t;
                                {
                                  ATerm y_29 = NULL;
                                  t = length_0(t);
                                  y_29 = t;
                                  if(p_29 != NULL && p_29 != y_29)
                                    _fail(y_29);
                                  else
                                    p_29 = y_29;
                                }
                                t = j_10;
                                return(t);
                              }
                              t = SDef_3(t, m_1, n_1, _id);
                              return(t);
                            }
                            t = partition_1(t, l_1);
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
ATerm Expl_0 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
  t_30 = t;
  s_30 :
  if(match_cons(t_30, sym_Match_1))
    {
      u_30 = ATgetArgument(t_30, 0);
      {
        ATerm x_30 = NULL;
        ATerm z_30 = NULL;
        t = new_0(t);
        x_30 = t;
        {
          ATerm b_31 = NULL,c_31 = NULL,g_31 = NULL;
          t = new_0(t);
          z_30 = t;
          t = not_null(u_30);
          {
            ATerm o_1 (ATerm t)
            {
              ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
              d_31 = t;
              i_30 :
              if(match_cons(d_31, sym_Explode_2))
                {
                  e_31 = ATgetArgument(d_31, 0);
                  f_31 = ATgetArgument(d_31, 1);
                  if(b_31 != NULL && b_31 != e_31)
                    _fail(e_31);
                  else
                    b_31 = e_31;
                  if(c_31 != NULL && c_31 != f_31)
                    _fail(f_31);
                  else
                    c_31 = f_31;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_30));
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1(t, o_1);
            g_31 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_30), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_31)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_30), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_30))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_30)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_30)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_31), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_31), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0))))))));
          }
        }
      }
    }
  else
    {
      if(match_cons(t_30, sym_Build_1))
        {
          u_30 = ATgetArgument(t_30, 0);
          {
            ATerm m_31 = NULL;
            ATerm o_31 = NULL,p_31 = NULL,y_31 = NULL;
            t = new_0(t);
            m_31 = t;
            t = not_null(u_30);
            {
              ATerm p_1 (ATerm t)
              {
                ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
                q_31 = t;
                m_30 :
                if(match_cons(q_31, sym_Explode_2))
                  {
                    r_31 = ATgetArgument(q_31, 0);
                    s_31 = ATgetArgument(q_31, 1);
                    if(o_31 != NULL && o_31 != r_31)
                      _fail(r_31);
                    else
                      o_31 = r_31;
                    if(p_31 != NULL && p_31 != s_31)
                      _fail(s_31);
                    else
                      p_31 = s_31;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_31));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, p_1);
              y_31 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_31), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_31), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_31), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_31))), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_31)))));
            }
          }
        }
      else
        {
          if(match_cons(t_30, sym_ExplodeCong_2))
            {
              u_30 = ATgetArgument(t_30, 0);
              v_30 = ATgetArgument(t_30, 1);
              {
                ATerm c_32 = NULL;
                ATerm i_32 = NULL;
                t = new_0(t);
                c_32 = t;
                {
                  ATerm k_32 = NULL;
                  t = new_0(t);
                  i_32 = t;
                  {
                    ATerm m_32 = NULL;
                    t = new_0(t);
                    k_32 = t;
                    t = new_0(t);
                    m_32 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_32), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_32), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_32), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_32), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_32)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(u_30), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_32))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(v_30), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_32))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_32)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_32)), (ATerm) ATmakeAppl(sym_Nil_0)))))));
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
  ATerm a_36 = NULL,b_36 = NULL;
  a_36 = t;
  z_35 :
  if(match_cons(a_36, sym_Build_1))
    {
      b_36 = ATgetArgument(a_36, 0);
      {
        ATerm k_10 = t;
        if(PushChoice()==0)
          {
            ATerm x_36 = NULL;
            ATerm g_39 = NULL,h_39 = NULL,l_39 = NULL;
            t = new_0(t);
            x_36 = t;
            t = not_null(b_36);
            {
              ATerm q_1 (ATerm t)
              {
                ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL;
                i_39 = t;
                t_35 :
                if(match_cons(i_39, sym_App_2))
                  {
                    j_39 = ATgetArgument(i_39, 0);
                    k_39 = ATgetArgument(i_39, 1);
                    if(g_39 != NULL && g_39 != j_39)
                      _fail(j_39);
                    else
                      g_39 = j_39;
                    if(h_39 != NULL && h_39 != k_39)
                      _fail(k_39);
                    else
                      h_39 = k_39;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_36));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, q_1);
              l_39 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_36), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(g_39), not_null(h_39), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_36)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_39))));
            }
            PopChoice();
          }
        else
          {
            t = k_10;
            {
              ATerm o_39 = NULL;
              ATerm q_39 = NULL,t_39 = NULL;
              t = new_0(t);
              o_39 = t;
              t = not_null(b_36);
              {
                ATerm r_1 (ATerm t)
                {
                  ATerm r_39 = NULL,s_39 = NULL;
                  r_39 = t;
                  x_35 :
                  if(match_cons(r_39, sym_RootApp_1))
                    {
                      s_39 = ATgetArgument(r_39, 0);
                      if(q_39 != NULL && q_39 != s_39)
                        _fail(s_39);
                      else
                        q_39 = s_39;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_39));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, r_1);
                t_39 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_39), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_39), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_39))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_39))));
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
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,p_40 = NULL;
  i_40 = t;
  f_40 :
  if(match_cons(i_40, sym_Build_1))
    {
      j_40 = ATgetArgument(i_40, 0);
      g_40 :
      if(match_cons(j_40, sym_App_2))
        {
          p_40 = ATgetArgument(j_40, 0);
          h_40 = ATgetArgument(j_40, 1);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_40)), not_null(p_40));
        }
      else
        {
          if(match_cons(j_40, sym_RootApp_1))
            {
              p_40 = ATgetArgument(j_40, 0);
              t = not_null(p_40);
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
  ATerm g_41 = NULL,h_41 = NULL;
  g_41 = t;
  f_41 :
  if(match_cons(g_41, sym_Build_1))
    {
      h_41 = ATgetArgument(g_41, 0);
      {
        ATerm l_10 = t;
        if(PushChoice()==0)
          {
            ATerm j_41 = NULL,k_41 = NULL,p_41 = NULL;
            t = not_null(h_41);
            {
              ATerm s_1 (ATerm t)
              {
                ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL;
                l_41 = t;
                y_40 :
                if(match_cons(l_41, sym_App_2))
                  {
                    m_41 = ATgetArgument(l_41, 0);
                    o_41 = ATgetArgument(l_41, 1);
                    z_40 :
                    if(match_cons(m_41, sym_Build_1))
                      {
                        n_41 = ATgetArgument(m_41, 0);
                        if(k_41 != NULL && k_41 != n_41)
                          _fail(n_41);
                        else
                          k_41 = n_41;
                        if(j_41 != NULL && j_41 != o_41)
                          _fail(o_41);
                        else
                          j_41 = o_41;
                        t = not_null(k_41);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, s_1);
              p_41 = t;
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(p_41));
            }
            PopChoice();
          }
        else
          {
            t = l_10;
            {
              ATerm s_41 = NULL,y_41 = NULL;
              t = not_null(h_41);
              {
                ATerm t_1 (ATerm t)
                {
                  ATerm t_41 = NULL,u_41 = NULL,w_41 = NULL;
                  t_41 = t;
                  c_41 :
                  if(match_cons(t_41, sym_RootApp_1))
                    {
                      u_41 = ATgetArgument(t_41, 0);
                      d_41 :
                      if(match_cons(u_41, sym_Build_1))
                        {
                          w_41 = ATgetArgument(u_41, 0);
                          if(s_41 != NULL && s_41 != w_41)
                            _fail(w_41);
                          else
                            s_41 = w_41;
                          t = not_null(s_41);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, t_1);
                y_41 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, not_null(y_41));
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
  ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL;
  f_43 = t;
  z_42 :
  if(match_cons(f_43, sym_Seqs_1))
    {
      g_43 = ATgetArgument(f_43, 0);
      a_43 :
      if(match_cons(g_43, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(g_43, sym_Cons_2))
            {
              d_43 = ATgetArgument(g_43, 0);
              e_43 = ATgetArgument(g_43, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_43), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(e_43)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(f_43, sym_Choices_1))
        {
          g_43 = ATgetArgument(f_43, 0);
          b_43 :
          if(match_cons(g_43, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(g_43, sym_Cons_2))
                {
                  d_43 = ATgetArgument(g_43, 0);
                  e_43 = ATgetArgument(g_43, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(d_43), (ATerm) ATmakeAppl(sym_Choices_1, not_null(e_43)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(f_43, sym_LChoices_1))
            {
              g_43 = ATgetArgument(f_43, 0);
              c_43 :
              if(match_cons(g_43, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(g_43, sym_Cons_2))
                    {
                      d_43 = ATgetArgument(g_43, 0);
                      e_43 = ATgetArgument(g_43, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(d_43), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(e_43)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(f_43, sym_Lets_2))
                {
                  g_43 = ATgetArgument(f_43, 0);
                  h_43 = ATgetArgument(f_43, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(g_43), not_null(h_43));
                }
              else
                {
                  if(match_cons(f_43, sym_BA_2))
                    {
                      g_43 = ATgetArgument(f_43, 0);
                      h_43 = ATgetArgument(f_43, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_43)), not_null(g_43));
                    }
                  else
                    {
                      if(match_cons(f_43, sym_MA_2))
                        {
                          g_43 = ATgetArgument(f_43, 0);
                          h_43 = ATgetArgument(f_43, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_43)), not_null(h_43));
                        }
                      else
                        {
                          if(match_cons(f_43, sym_AM_2))
                            {
                              g_43 = ATgetArgument(f_43, 0);
                              h_43 = ATgetArgument(f_43, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_43), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_43)));
                            }
                          else
                            {
                              if(match_cons(f_43, sym_BAM_3))
                                {
                                  g_43 = ATgetArgument(f_43, 0);
                                  h_43 = ATgetArgument(f_43, 1);
                                  i_43 = ATgetArgument(f_43, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_43)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_43), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_43)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(f_43, sym_InfixApp_3))
                                    {
                                      g_43 = ATgetArgument(f_43, 0);
                                      h_43 = ATgetArgument(f_43, 1);
                                      i_43 = ATgetArgument(f_43, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(h_43), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_43), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_43), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm c_45 = NULL;
  c_45 = t;
  b_45 :
  if(!(match_cons(c_45, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm m_10 = t;
  if(PushChoice()==0)
    {
      ATerm u_1 (ATerm t)
      {
        ATerm n_10 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = n_10;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, u_1);
      PopChoice();
      _fail(t);
    }
  else
    t = m_10;
  return(t);
}
ATerm App_2 (ATerm t, ATerm n_40 (ATerm), ATerm o_40 (ATerm))
{
  ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL;
  h_45 = t;
  g_45 :
  if(match_cons(h_45, sym_App_2))
    {
      i_45 = ATgetArgument(h_45, 0);
      j_45 = ATgetArgument(h_45, 1);
      {
        ATerm m_45 = NULL;
        t = not_null(i_45);
        {
          ATerm o_45 = NULL;
          t = n_40(t);
          m_45 = t;
          t = not_null(j_45);
          t = o_40(t);
          o_45 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, not_null(m_45), not_null(o_45));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm k_40 (ATerm), ATerm l_40 (ATerm), ATerm m_40 (ATerm))
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL,h_46 = NULL;
  y_45 = t;
  x_45 :
  if(match_cons(y_45, sym_Con_3))
    {
      z_45 = ATgetArgument(y_45, 0);
      a_46 = ATgetArgument(y_45, 1);
      h_46 = ATgetArgument(y_45, 2);
      {
        ATerm l_46 = NULL;
        t = not_null(z_45);
        {
          ATerm n_46 = NULL;
          t = k_40(t);
          l_46 = t;
          t = not_null(a_46);
          {
            ATerm p_46 = NULL;
            t = l_40(t);
            n_46 = t;
            t = not_null(h_46);
            t = m_40(t);
            p_46 = t;
            t = (ATerm) ATmakeAppl(sym_Con_3, not_null(l_46), not_null(n_46), not_null(p_46));
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
  ATerm o_10 = t;
  if(PushChoice()==0)
    {
      ATerm v_1 (ATerm t)
      {
        ATerm p_10 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = p_10;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, v_1);
      PopChoice();
      _fail(t);
    }
  else
    t = o_10;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm z_46 = NULL,b_47 = NULL,d_47 = NULL,e_47 = NULL,h_47 = NULL;
  z_46 = t;
  x_46 :
  if(match_cons(z_46, sym_SRule_1))
    {
      b_47 = ATgetArgument(z_46, 0);
      y_46 :
      if(match_cons(b_47, sym_Rule_3))
        {
          d_47 = ATgetArgument(b_47, 0);
          e_47 = ATgetArgument(b_47, 1);
          h_47 = ATgetArgument(b_47, 2);
          t = not_null(d_47);
          t = pureterm_0(t);
          t = not_null(e_47);
          t = buildterm_0(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_47)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_47), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_47)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(b_47, sym_StratRule_3))
            {
              d_47 = ATgetArgument(b_47, 0);
              e_47 = ATgetArgument(b_47, 1);
              h_47 = ATgetArgument(b_47, 2);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_47), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_47), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_47), (ATerm) ATmakeAppl(sym_Nil_0)))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm r_43 (ATerm), ATerm s_43 (ATerm))
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL;
  z_47 = t;
  y_47 :
  if(match_cons(z_47, sym_Scope_2))
    {
      a_48 = ATgetArgument(z_47, 0);
      b_48 = ATgetArgument(z_47, 1);
      {
        ATerm e_48 = NULL;
        t = not_null(a_48);
        {
          ATerm g_48 = NULL;
          t = r_43(t);
          e_48 = t;
          t = not_null(b_48);
          t = s_43(t);
          g_48 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_48), not_null(g_48));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm u_61 (ATerm))
{
  ATerm l_48 (ATerm t)
  {
    ATerm q_10 = t;
    if(PushChoice()==0)
      {
        t = u_61(t);
        PopChoice();
      }
    else
      {
        t = q_10;
        t = _one(t, l_48);
      }
    return(t);
  }
  t = l_48(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL;
  a_49 = t;
  y_48 :
  if(match_cons(a_49, sym_SRule_1))
    {
      b_49 = ATgetArgument(a_49, 0);
      z_48 :
      if(match_cons(b_49, sym_Rule_3))
        {
          c_49 = ATgetArgument(b_49, 0);
          d_49 = ATgetArgument(b_49, 1);
          e_49 = ATgetArgument(b_49, 2);
          {
            ATerm i_49 = NULL;
            ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL,x_49 = NULL;
            t = new_0(t);
            i_49 = t;
            t = not_null(c_49);
            {
              ATerm z_49 = NULL,a_50 = NULL,k_50 = NULL;
              ATerm w_1 (ATerm t)
              {
                ATerm n_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL;
                n_49 = t;
                p_48 :
                if(match_cons(n_49, sym_Con_3))
                  {
                    t_49 = ATgetArgument(n_49, 0);
                    v_49 = ATgetArgument(n_49, 1);
                    w_49 = ATgetArgument(n_49, 2);
                    q_48 :
                    if(match_cons(t_49, sym_Var_1))
                      {
                        u_49 = ATgetArgument(t_49, 0);
                        if(m_49 != NULL && m_49 != u_49)
                          _fail(u_49);
                        else
                          m_49 = u_49;
                        if(k_49 != NULL && k_49 != v_49)
                          _fail(v_49);
                        else
                          k_49 = v_49;
                        if(l_49 != NULL && l_49 != w_49)
                          _fail(w_49);
                        else
                          l_49 = w_49;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_49));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, w_1);
              x_49 = t;
              t = not_null(d_49);
              {
                ATerm x_1 (ATerm t)
                {
                  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL;
                  b_50 = t;
                  t_48 :
                  if(match_cons(b_50, sym_Con_3))
                    {
                      c_50 = ATgetArgument(b_50, 0);
                      e_50 = ATgetArgument(b_50, 1);
                      h_50 = ATgetArgument(b_50, 2);
                      u_48 :
                      if(match_cons(c_50, sym_Var_1))
                        {
                          d_50 = ATgetArgument(c_50, 0);
                          v_48 :
                          if(match_cons(h_50, sym_Call_2))
                            {
                              i_50 = ATgetArgument(h_50, 0);
                              j_50 = ATgetArgument(h_50, 1);
                              w_48 :
                              if(match_cons(j_50, sym_Nil_0))
                                {
                                  if(m_49 != NULL && m_49 != d_50)
                                    _fail(d_50);
                                  else
                                    m_49 = d_50;
                                  if(z_49 != NULL && z_49 != e_50)
                                    _fail(e_50);
                                  else
                                    z_49 = e_50;
                                  if(a_50 != NULL && a_50 != i_50)
                                    _fail(i_50);
                                  else
                                    a_50 = i_50;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_49));
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, x_1);
                k_50 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_49), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_49), not_null(k_50), (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_49), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(a_50), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_49), not_null(z_49), (ATerm) ATmakeAppl(sym_Id_0))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_49)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_49)))))));
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
  ATerm a_2 (ATerm t)
  {
    ATerm r_10 = t;
    if(PushChoice()==0)
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      {
        t = r_10;
        {
          ATerm s_10 = t;
          if(PushChoice()==0)
            {
              t = Scope_2(t, _id, desugarRule_0);
              PopChoice();
            }
          else
            {
              t = s_10;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, a_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm e_60 (ATerm))
{
  ATerm d_51 (ATerm t)
  {
    t = e_60(t);
    t = _all(t, d_51);
    return(t);
  }
  t = d_51(t);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm k_2 (ATerm t)
      {
        ATerm t_10 = t;
        if(PushChoice()==0)
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = t_10;
            {
              ATerm u_10 = t;
              if(PushChoice()==0)
                {
                  ATerm v_10 = t;
                  if(PushChoice()==0)
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = v_10;
                      {
                        ATerm w_10 = t;
                        if(PushChoice()==0)
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = w_10;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = u_10;
                  t = Expl_0(t);
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, k_2);
    }
    return(t);
  }
  t = topdown_1(t, j_2);
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL;
  g_51 = t;
  f_51 :
  if(match_cons(g_51, sym_TCons_2))
    {
      h_51 = ATgetArgument(g_51, 0);
      i_51 = ATgetArgument(g_51, 1);
      t = not_null(i_51);
    }
  else
    _fail(t);
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL;
  o_51 = t;
  n_51 :
  if(match_cons(o_51, sym_TCons_2))
    {
      p_51 = ATgetArgument(o_51, 0);
      q_51 = ATgetArgument(o_51, 1);
      t = not_null(p_51);
    }
  else
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm u_58 (ATerm))
{
  ATerm f_52 (ATerm t)
  {
    ATerm x_10 = t;
    if(PushChoice()==0)
      {
        ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL;
        ATerm l_2 (ATerm t)
        {
          t = map_1(t, Thd_0);
          return(t);
        }
        ATerm m_2 (ATerm t)
        {
          t = map_1(t, Ttl_0);
          return(t);
        }
        t = split_2(t, l_2, m_2);
        {
          ATerm y_2 (ATerm t)
          {
            t = TCons_2(t, f_52, TNil_0);
            return(t);
          }
          t = TCons_2(t, u_58, y_2);
          y_51 = t;
          v_51 :
          if(match_cons(y_51, sym_TCons_2))
            {
              z_51 = ATgetArgument(y_51, 0);
              a_52 = ATgetArgument(y_51, 1);
              w_51 :
              if(match_cons(a_52, sym_TCons_2))
                {
                  b_52 = ATgetArgument(a_52, 0);
                  c_52 = ATgetArgument(a_52, 1);
                  x_51 :
                  if(match_cons(c_52, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_51), not_null(b_52));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
        PopChoice();
      }
    else
      {
        t = x_10;
        t = map_1(t, TNil_0);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
      }
    return(t);
  }
  t = f_52(t);
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL;
  s_52 = t;
  p_52 :
  if(match_cons(s_52, sym_TCons_2))
    {
      t_52 = ATgetArgument(s_52, 0);
      u_52 = ATgetArgument(s_52, 1);
      q_52 :
      if(match_cons(u_52, sym_TCons_2))
        {
          v_52 = ATgetArgument(u_52, 0);
          w_52 = ATgetArgument(u_52, 1);
          r_52 :
          if(match_cons(w_52, sym_TNil_0))
            {
              ATerm z_52 = NULL;
              ATerm b_53 = NULL;
              t = new_0(t);
              z_52 = t;
              {
                ATerm j_53 = NULL;
                t = new_0(t);
                b_53 = t;
                t = new_0(t);
                j_53 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_52)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_53)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(t_52)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(j_53)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_52)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(z_52), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_53), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_53)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_53), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(j_53)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
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
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL;
  u_53 = t;
  q_53 :
  if(match_cons(u_53, sym_TCons_2))
    {
      v_53 = ATgetArgument(u_53, 0);
      w_53 = ATgetArgument(u_53, 1);
      r_53 :
      if(match_cons(w_53, sym_TCons_2))
        {
          x_53 = ATgetArgument(w_53, 0);
          y_53 = ATgetArgument(w_53, 1);
          s_53 :
          if(match_cons(x_53, sym_Nil_0))
            {
              t_53 :
              if(match_cons(y_53, sym_TNil_0))
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
  return(t);
}
ATerm zipr_1 (ATerm t, ATerm t_57 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, t_57);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
  c_54 = t;
  b_54 :
  if(match_cons(c_54, sym_Cons_2))
    {
      d_54 = ATgetArgument(c_54, 0);
      e_54 = ATgetArgument(c_54, 1);
      t = not_null(e_54);
    }
  else
    _fail(t);
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL;
  l_54 = t;
  j_54 :
  if(match_cons(l_54, sym_Cons_2))
    {
      m_54 = ATgetArgument(l_54, 0);
      n_54 = ATgetArgument(l_54, 1);
      k_54 :
      if(match_cons(n_54, sym_Nil_0))
        t = not_null(m_54);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm last_0 (ATerm t)
{
  ATerm y_10 = t;
  if(PushChoice()==0)
    {
      t = Last_0(t);
      PopChoice();
    }
  else
    {
      t = y_10;
      t = Tl_0(t);
      t = last_0(t);
    }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL;
  v_54 = t;
  s_54 :
  if(match_cons(v_54, sym_TCons_2))
    {
      w_54 = ATgetArgument(v_54, 0);
      x_54 = ATgetArgument(v_54, 1);
      t_54 :
      if(match_cons(x_54, sym_TCons_2))
        {
          y_54 = ATgetArgument(x_54, 0);
          z_54 = ATgetArgument(x_54, 1);
          u_54 :
          if(match_cons(z_54, sym_TNil_0))
            {
              ATerm z_10 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(w_54), not_null(y_54));
                  PopChoice();
                }
              else
                {
                  t = z_10;
                  t = SSL_subtr(not_null(w_54), not_null(y_54));
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
ATerm gt_0 (ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL;
  m_55 = t;
  j_55 :
  if(match_cons(m_55, sym_TCons_2))
    {
      n_55 = ATgetArgument(m_55, 0);
      o_55 = ATgetArgument(m_55, 1);
      k_55 :
      if(match_cons(o_55, sym_TCons_2))
        {
          p_55 = ATgetArgument(o_55, 0);
          q_55 = ATgetArgument(o_55, 1);
          l_55 :
          if(match_cons(q_55, sym_TNil_0))
            {
              ATerm f_11;
              f_11 = t;
              {
                ATerm g_11 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(n_55), not_null(p_55));
                    PopChoice();
                  }
                else
                  {
                    t = g_11;
                    t = SSL_gtr(not_null(n_55), not_null(p_55));
                  }
              }
              t = f_11;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm y_55 = NULL;
  ATerm l_11 = t;
  if(PushChoice()==0)
    {
      ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL;
      z_55 = t;
      v_55 :
      if(match_cons(z_55, sym_TCons_2))
        {
          a_56 = ATgetArgument(z_55, 0);
          b_56 = ATgetArgument(z_55, 1);
          w_55 :
          if(match_cons(b_56, sym_TCons_2))
            {
              c_56 = ATgetArgument(b_56, 0);
              d_56 = ATgetArgument(b_56, 1);
              x_55 :
              if(match_cons(d_56, sym_TNil_0))
                {
                  if(y_55 != NULL && y_55 != a_56)
                    _fail(a_56);
                  else
                    y_55 = a_56;
                  if(y_55 != NULL && y_55 != c_56)
                    _fail(c_56);
                  else
                    y_55 = c_56;
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
      t = l_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm g_50 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,d_57 = NULL;
    x_56 = t;
    g_56 :
    if(match_cons(x_56, sym_TCons_2))
      {
        y_56 = ATgetArgument(x_56, 0);
        z_56 = ATgetArgument(x_56, 1);
        h_56 :
        if(match_cons(z_56, sym_TCons_2))
          {
            a_57 = ATgetArgument(z_56, 0);
            d_57 = ATgetArgument(z_56, 1);
            i_56 :
            if(match_cons(d_57, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_56), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_57), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,r_57 = NULL,s_57 = NULL,u_57 = NULL;
    h_57 = t;
    k_56 :
    if(match_cons(h_57, sym_TCons_2))
      {
        i_57 = ATgetArgument(h_57, 0);
        j_57 = ATgetArgument(h_57, 1);
        l_56 :
        if(match_int(i_57, 0))
          {
            m_56 :
            if(match_cons(j_57, sym_TCons_2))
              {
                k_57 = ATgetArgument(j_57, 0);
                r_57 = ATgetArgument(j_57, 1);
                n_56 :
                if(match_cons(r_57, sym_TCons_2))
                  {
                    s_57 = ATgetArgument(r_57, 0);
                    u_57 = ATgetArgument(r_57, 1);
                    o_56 :
                    if(match_cons(u_57, sym_TNil_0))
                      t = not_null(s_57);
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL;
    x_57 = t;
    s_56 :
    if(match_cons(x_57, sym_TCons_2))
      {
        y_57 = ATgetArgument(x_57, 0);
        z_57 = ATgetArgument(x_57, 1);
        u_56 :
        if(match_cons(z_57, sym_TCons_2))
          {
            a_58 = ATgetArgument(z_57, 0);
            b_58 = ATgetArgument(z_57, 1);
            v_56 :
            if(match_cons(b_58, sym_TCons_2))
              {
                c_58 = ATgetArgument(b_58, 0);
                d_58 = ATgetArgument(b_58, 1);
                w_56 :
                if(match_cons(d_58, sym_TNil_0))
                  {
                    ATerm h_58 = NULL,j_58 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_57), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = geq_0(t);
                    {
                      ATerm m_11;
                      m_11 = t;
                      {
                        ATerm i_58 = NULL;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_57), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                        t = subt_0(t);
                        i_58 = t;
                        if(h_58 != NULL && h_58 != i_58)
                          _fail(i_58);
                        else
                          h_58 = i_58;
                      }
                      t = m_11;
                      {
                        ATerm k_58 = NULL;
                        t = not_null(a_58);
                        t = g_50(t);
                        k_58 = t;
                        if(j_58 != NULL && j_58 != k_58)
                          _fail(k_58);
                        else
                          j_58 = k_58;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_58), not_null(c_58)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  t = for_3(t, z_2, a_3, b_3);
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm w_58 = NULL;
  ATerm y_58 = NULL;
  w_58 = t;
  {
    ATerm a_59 = NULL;
    t = new_0(t);
    y_58 = t;
    {
      ATerm e_59 = NULL;
      t = new_0(t);
      a_59 = t;
      t = new_0(t);
      e_59 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_58)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(a_59)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_58), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_59))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(y_58), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_59), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(a_59)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_59), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_59)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
    }
  }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL;
  ATerm w_63 (ATerm t)
  {
    ATerm l_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL;
    ATerm m_62 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_61), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = add_0(t);
    m_62 = t;
    if(l_62 != NULL && l_62 != m_62)
      _fail(m_62);
    else
      l_62 = m_62;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_62), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TNil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = copy_1(t, new_0);
    n_62 = t;
    n_60 :
    if(match_cons(n_62, sym_Cons_2))
      {
        o_62 = ATgetArgument(n_62, 0);
        p_62 = ATgetArgument(n_62, 1);
        {
          ATerm s_62 = NULL;
          t = not_null(p_62);
          {
            ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL;
            t = last_0(t);
            s_62 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_62), not_null(p_62)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_62), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = zipr_1(t, MkThreadApplication_0);
            t = tuple_unzip_1(t, _id);
            u_62 = t;
            g_60 :
            if(match_cons(u_62, sym_TCons_2))
              {
                v_62 = ATgetArgument(u_62, 0);
                w_62 = ATgetArgument(u_62, 1);
                h_60 :
                if(match_cons(w_62, sym_TCons_2))
                  {
                    x_62 = ATgetArgument(w_62, 0);
                    y_62 = ATgetArgument(w_62, 1);
                    i_60 :
                    if(match_cons(y_62, sym_TCons_2))
                      {
                        z_62 = ATgetArgument(y_62, 0);
                        a_63 = ATgetArgument(y_62, 1);
                        j_60 :
                        if(match_cons(a_63, sym_TCons_2))
                          {
                            b_63 = ATgetArgument(a_63, 0);
                            c_63 = ATgetArgument(a_63, 1);
                            k_60 :
                            if(match_cons(c_63, sym_TCons_2))
                              {
                                d_63 = ATgetArgument(c_63, 0);
                                e_63 = ATgetArgument(c_63, 1);
                                l_60 :
                                if(match_cons(e_63, sym_TCons_2))
                                  {
                                    f_63 = ATgetArgument(e_63, 0);
                                    g_63 = ATgetArgument(e_63, 1);
                                    m_60 :
                                    if(match_cons(g_63, sym_TNil_0))
                                      {
                                        ATerm s_63 = NULL;
                                        ATerm t_63 = NULL;
                                        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_62), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_62), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_63), (ATerm) ATmakeAppl(sym_Nil_0))));
                                        t = concat_0(t);
                                        t_63 = t;
                                        if(s_63 != NULL && s_63 != t_63)
                                          _fail(t_63);
                                        else
                                          s_63 = t_63;
                                        t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(x_60), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), not_null(x_62), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_62), not_null(s_63)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(x_60), not_null(b_63)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_62)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(x_60), not_null(f_63)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_62)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(v_62))))));
                                      }
                                    else
                                      _fail(t);
                                  }
                                else
                                  _fail(t);
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
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
    return(t);
  }
  w_60 = t;
  o_60 :
  if(match_cons(w_60, sym_TCons_2))
    {
      x_60 = ATgetArgument(w_60, 0);
      y_60 = ATgetArgument(w_60, 1);
      p_60 :
      if(match_cons(y_60, sym_TCons_2))
        {
          z_60 = ATgetArgument(y_60, 0);
          a_61 = ATgetArgument(y_60, 1);
          q_60 :
          if(match_string(z_60, "D"))
            {
              r_60 :
              if(match_cons(a_61, sym_TCons_2))
                {
                  b_61 = ATgetArgument(a_61, 0);
                  c_61 = ATgetArgument(a_61, 1);
                  s_60 :
                  if(match_cons(c_61, sym_TNil_0))
                    {
                      ATerm f_61 = NULL;
                      ATerm h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL;
                      t = new_0(t);
                      f_61 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_61), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_61)), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = copy_1(t, MkDistApplication_0);
                      t = tuple_unzip_1(t, _id);
                      h_61 = t;
                      q_59 :
                      if(match_cons(h_61, sym_TCons_2))
                        {
                          i_61 = ATgetArgument(h_61, 0);
                          j_61 = ATgetArgument(h_61, 1);
                          r_59 :
                          if(match_cons(j_61, sym_TCons_2))
                            {
                              k_61 = ATgetArgument(j_61, 0);
                              l_61 = ATgetArgument(j_61, 1);
                              s_59 :
                              if(match_cons(l_61, sym_TCons_2))
                                {
                                  m_61 = ATgetArgument(l_61, 0);
                                  n_61 = ATgetArgument(l_61, 1);
                                  u_59 :
                                  if(match_cons(n_61, sym_TCons_2))
                                    {
                                      o_61 = ATgetArgument(n_61, 0);
                                      p_61 = ATgetArgument(n_61, 1);
                                      v_59 :
                                      if(match_cons(p_61, sym_TCons_2))
                                        {
                                          q_61 = ATgetArgument(p_61, 0);
                                          r_61 = ATgetArgument(p_61, 1);
                                          w_59 :
                                          if(match_cons(r_61, sym_TCons_2))
                                            {
                                              s_61 = ATgetArgument(r_61, 0);
                                              t_61 = ATgetArgument(r_61, 1);
                                              x_59 :
                                              if(match_cons(t_61, sym_TNil_0))
                                                {
                                                  ATerm c_62 = NULL;
                                                  ATerm d_62 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_61), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  d_62 = t;
                                                  if(c_62 != NULL && c_62 != d_62)
                                                    _fail(d_62);
                                                  else
                                                    c_62 = d_62;
                                                  t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(x_60), (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue))), not_null(k_61), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_61), not_null(c_62)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(x_60), not_null(o_61)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_61)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(x_60), not_null(s_61)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(i_61))))));
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
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
              if(match_string(z_60, "T"))
                {
                  t_60 :
                  if(match_cons(a_61, sym_TCons_2))
                    {
                      b_61 = ATgetArgument(a_61, 0);
                      c_61 = ATgetArgument(a_61, 1);
                      u_60 :
                      if(match_cons(c_61, sym_TNil_0))
                        {
                          v_60 :
                          if(match_int(b_61, 0))
                            {
                              ATerm n_11 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm f_62 = NULL;
                                  t = new_0(t);
                                  f_62 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(x_60), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_62), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(x_60), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_62)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(x_60), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_62)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Id_0)))));
                                  PopChoice();
                                }
                              else
                                {
                                  t = n_11;
                                  t = w_63(t);
                                }
                            }
                          else
                            t = w_63(t);
                        }
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
  return(t);
}
ATerm CongruenceDef_0 (ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL;
  s_64 = t;
  l_64 :
  if(match_cons(s_64, sym_TCons_2))
    {
      t_64 = ATgetArgument(s_64, 0);
      a_65 = ATgetArgument(s_64, 1);
      m_64 :
      if(match_cons(t_64, sym_TCons_2))
        {
          u_64 = ATgetArgument(t_64, 0);
          x_64 = ATgetArgument(t_64, 1);
          n_64 :
          if(match_cons(u_64, sym_Mod_2))
            {
              v_64 = ATgetArgument(u_64, 0);
              w_64 = ATgetArgument(u_64, 1);
              o_64 :
              if(match_cons(x_64, sym_TCons_2))
                {
                  y_64 = ATgetArgument(x_64, 0);
                  z_64 = ATgetArgument(x_64, 1);
                  p_64 :
                  if(match_cons(z_64, sym_TNil_0))
                    {
                      q_64 :
                      if(match_cons(a_65, sym_TCons_2))
                        {
                          b_65 = ATgetArgument(a_65, 0);
                          c_65 = ATgetArgument(a_65, 1);
                          r_64 :
                          if(match_cons(c_65, sym_TNil_0))
                            {
                              ATerm j_65 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_64), (ATerm) ATmakeAppl(sym_TNil_0))));
                              t = DefineCongruence_0(t);
                              t = desugar_0(t);
                              j_65 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_65), (ATerm) ATmakeAppl(sym_TNil_0)));
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm get_definition_0 (ATerm t)
{
  ATerm o_11 = t;
  if(PushChoice()==0)
    {
      t = CongruenceDef_0(t);
      PopChoice();
    }
  else
    {
      t = o_11;
      {
        ATerm p_11 = t;
        if(PushChoice()==0)
          {
            t = OverloadedDef_0(t);
            {
              ATerm c_3 (ATerm t)
              {
                t = TCons_2(t, _id, TNil_0);
                return(t);
              }
              t = TCons_2(t, joindefs_0, c_3);
            }
            PopChoice();
          }
        else
          {
            t = p_11;
            t = NonOverloadedDef_0(t);
            {
              ATerm o_3 (ATerm t)
              {
                t = TCons_2(t, _id, TNil_0);
                return(t);
              }
              t = TCons_2(t, joindefs_0, o_3);
            }
          }
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL;
  z_65 = t;
  q_65 :
  if(match_cons(z_65, sym_TCons_2))
    {
      a_66 = ATgetArgument(z_65, 0);
      d_66 = ATgetArgument(z_65, 1);
      t_65 :
      if(match_cons(a_66, sym_Cons_2))
        {
          b_66 = ATgetArgument(a_66, 0);
          c_66 = ATgetArgument(a_66, 1);
          u_65 :
          if(match_cons(d_66, sym_TCons_2))
            {
              e_66 = ATgetArgument(d_66, 0);
              f_66 = ATgetArgument(d_66, 1);
              v_65 :
              if(match_cons(f_66, sym_TCons_2))
                {
                  g_66 = ATgetArgument(f_66, 0);
                  h_66 = ATgetArgument(f_66, 1);
                  w_65 :
                  if(match_cons(h_66, sym_TCons_2))
                    {
                      i_66 = ATgetArgument(h_66, 0);
                      j_66 = ATgetArgument(h_66, 1);
                      x_65 :
                      if(match_cons(j_66, sym_TCons_2))
                        {
                          k_66 = ATgetArgument(j_66, 0);
                          l_66 = ATgetArgument(j_66, 1);
                          y_65 :
                          if(match_cons(l_66, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_66), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_66), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_66), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_66), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_66), not_null(k_66)), (ATerm) ATmakeAppl(sym_TNil_0))))));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm y_66 = NULL,z_66 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL;
  y_66 = t;
  v_66 :
  if(match_cons(y_66, sym_TCons_2))
    {
      z_66 = ATgetArgument(y_66, 0);
      b_67 = ATgetArgument(y_66, 1);
      w_66 :
      if(match_cons(b_67, sym_TCons_2))
        {
          c_67 = ATgetArgument(b_67, 0);
          d_67 = ATgetArgument(b_67, 1);
          x_66 :
          if(match_cons(d_67, sym_TNil_0))
            {
              t = not_null(z_66);
              {
                ATerm p_3 (ATerm t)
                {
                  t = not_null(c_67);
                  return(t);
                }
                t = at_end_1(t, p_3);
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
  ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL;
  m_67 = t;
  i_67 :
  if(match_cons(m_67, sym_TCons_2))
    {
      n_67 = ATgetArgument(m_67, 0);
      o_67 = ATgetArgument(m_67, 1);
      j_67 :
      if(match_cons(o_67, sym_TCons_2))
        {
          p_67 = ATgetArgument(o_67, 0);
          s_67 = ATgetArgument(o_67, 1);
          k_67 :
          if(match_cons(p_67, sym_Cons_2))
            {
              q_67 = ATgetArgument(p_67, 0);
              r_67 = ATgetArgument(p_67, 1);
              l_67 :
              if(match_cons(s_67, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_67), not_null(n_67)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_67), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL;
  b_68 = t;
  y_67 :
  if(match_cons(b_68, sym_TCons_2))
    {
      c_68 = ATgetArgument(b_68, 0);
      d_68 = ATgetArgument(b_68, 1);
      z_67 :
      if(match_cons(d_68, sym_TCons_2))
        {
          e_68 = ATgetArgument(d_68, 0);
          f_68 = ATgetArgument(d_68, 1);
          a_68 :
          if(match_cons(f_68, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_68), not_null(e_68));
          else
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
  ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL;
  p_68 = t;
  k_68 :
  if(match_cons(p_68, sym_TCons_2))
    {
      q_68 = ATgetArgument(p_68, 0);
      t_68 = ATgetArgument(p_68, 1);
      l_68 :
      if(match_cons(q_68, sym_Cons_2))
        {
          r_68 = ATgetArgument(q_68, 0);
          s_68 = ATgetArgument(q_68, 1);
          m_68 :
          if(match_cons(t_68, sym_TCons_2))
            {
              u_68 = ATgetArgument(t_68, 0);
              x_68 = ATgetArgument(t_68, 1);
              n_68 :
              if(match_cons(u_68, sym_Cons_2))
                {
                  v_68 = ATgetArgument(u_68, 0);
                  w_68 = ATgetArgument(u_68, 1);
                  o_68 :
                  if(match_cons(x_68, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(r_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_68), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(s_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_68), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL;
  j_69 = t;
  e_69 :
  if(match_cons(j_69, sym_TCons_2))
    {
      k_69 = ATgetArgument(j_69, 0);
      l_69 = ATgetArgument(j_69, 1);
      f_69 :
      if(match_cons(k_69, sym_Nil_0))
        {
          g_69 :
          if(match_cons(l_69, sym_TCons_2))
            {
              m_69 = ATgetArgument(l_69, 0);
              n_69 = ATgetArgument(l_69, 1);
              h_69 :
              if(match_cons(m_69, sym_Nil_0))
                {
                  i_69 :
                  if(match_cons(n_69, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm l_57 (ATerm), ATerm m_57 (ATerm), ATerm n_57 (ATerm), ATerm o_57 (ATerm))
{
  ATerm p_69 (ATerm t)
  {
    ATerm q_11 = t;
    if(PushChoice()==0)
      {
        t = l_57(t);
        PopChoice();
      }
    else
      {
        t = q_11;
        t = m_57(t);
        {
          ATerm q_3 (ATerm t)
          {
            t = TCons_2(t, p_69, TNil_0);
            return(t);
          }
          t = TCons_2(t, o_57, q_3);
          t = n_57(t);
        }
      }
    return(t);
  }
  t = p_69(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm q_57 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, q_57);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm i_70 = NULL,j_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL;
  i_70 = t;
  d_70 :
  if(match_cons(i_70, sym_Cons_2))
    {
      j_70 = ATgetArgument(i_70, 0);
      p_70 = ATgetArgument(i_70, 1);
      f_70 :
      if(match_cons(j_70, sym_TCons_2))
        {
          l_70 = ATgetArgument(j_70, 0);
          m_70 = ATgetArgument(j_70, 1);
          g_70 :
          if(match_cons(m_70, sym_TCons_2))
            {
              n_70 = ATgetArgument(m_70, 0);
              o_70 = ATgetArgument(m_70, 1);
              h_70 :
              if(match_cons(o_70, sym_TNil_0))
                {
                  ATerm t_70 = NULL,u_70 = NULL,c_71 = NULL,k_71 = NULL;
                  ATerm r_11;
                  r_11 = t;
                  {
                    ATerm v_70 = NULL;
                    ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL;
                    t = not_null(n_70);
                    v_70 = t;
                    t = SSL_explode_term(not_null(v_70));
                    x_70 = t;
                    t_69 :
                    if(match_cons(x_70, sym_TCons_2))
                      {
                        y_70 = ATgetArgument(x_70, 0);
                        z_70 = ATgetArgument(x_70, 1);
                        u_69 :
                        if(match_cons(z_70, sym_TCons_2))
                          {
                            a_71 = ATgetArgument(z_70, 0);
                            b_71 = ATgetArgument(z_70, 1);
                            v_69 :
                            if(match_cons(b_71, sym_TNil_0))
                              {
                                if(t_70 != NULL && t_70 != y_70)
                                  _fail(y_70);
                                else
                                  t_70 = y_70;
                                if(u_70 != NULL && u_70 != a_71)
                                  _fail(a_71);
                                else
                                  u_70 = a_71;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = r_11;
                  {
                    ATerm s_11;
                    s_11 = t;
                    {
                      ATerm d_71 = NULL;
                      ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL;
                      t = not_null(l_70);
                      d_71 = t;
                      t = SSL_explode_term(not_null(d_71));
                      f_71 = t;
                      z_69 :
                      if(match_cons(f_71, sym_TCons_2))
                        {
                          g_71 = ATgetArgument(f_71, 0);
                          h_71 = ATgetArgument(f_71, 1);
                          a_70 :
                          if(match_cons(h_71, sym_TCons_2))
                            {
                              i_71 = ATgetArgument(h_71, 0);
                              j_71 = ATgetArgument(h_71, 1);
                              b_70 :
                              if(match_cons(j_71, sym_TNil_0))
                                {
                                  if(t_70 != NULL && t_70 != g_71)
                                    _fail(g_71);
                                  else
                                    t_70 = g_71;
                                  if(c_71 != NULL && c_71 != i_71)
                                    _fail(i_71);
                                  else
                                    c_71 = i_71;
                                }
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
                      ATerm l_71 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_70), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      l_71 = t;
                      if(k_71 != NULL && k_71 != l_71)
                        _fail(l_71);
                      else
                        k_71 = l_71;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_70), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm x_71 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL;
  x_71 = t;
  t_71 :
  if(match_cons(x_71, sym_Cons_2))
    {
      c_72 = ATgetArgument(x_71, 0);
      h_72 = ATgetArgument(x_71, 1);
      u_71 :
      if(match_cons(c_72, sym_TCons_2))
        {
          d_72 = ATgetArgument(c_72, 0);
          e_72 = ATgetArgument(c_72, 1);
          v_71 :
          if(match_cons(e_72, sym_TCons_2))
            {
              f_72 = ATgetArgument(e_72, 0);
              g_72 = ATgetArgument(e_72, 1);
              w_71 :
              if(match_cons(g_72, sym_TNil_0))
                {
                  ATerm j_72 = NULL;
                  if(d_72 != NULL && d_72 != f_72)
                    _fail(f_72);
                  else
                    d_72 = f_72;
                  if(j_72 != NULL && j_72 != h_72)
                    _fail(h_72);
                  else
                    j_72 = h_72;
                  t = not_null(j_72);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm t_11 = t;
  if(PushChoice()==0)
    {
      ATerm r_3 (ATerm t)
      {
        ATerm q_72 = NULL;
        q_72 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_72), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm s_3 (ATerm t)
      {
        ATerm d_4 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, d_4);
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        ATerm u_11 = t;
        if(PushChoice()==0)
          {
            ATerm e_4 (ATerm t)
            {
              ATerm n_4 (ATerm t)
              {
                ATerm v_11 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = v_11;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, n_4, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, e_4);
            PopChoice();
          }
        else
          {
            t = u_11;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, r_3, s_3, c_4);
      PopChoice();
    }
  else
    {
      t = t_11;
      {
        ATerm t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL;
        t_72 = t;
        n_72 :
        if(match_cons(t_72, sym_TCons_2))
          {
            u_72 = ATgetArgument(t_72, 0);
            v_72 = ATgetArgument(t_72, 1);
            o_72 :
            if(match_cons(v_72, sym_TCons_2))
              {
                w_72 = ATgetArgument(v_72, 0);
                x_72 = ATgetArgument(v_72, 1);
                p_72 :
                if(match_cons(x_72, sym_TNil_0))
                  {
                    t = not_null(u_72);
                    {
                      ATerm c_73 (ATerm t)
                      {
                        ATerm w_11 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = w_11;
                            {
                              ATerm x_11 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm o_4 (ATerm t)
                                  {
                                    t = not_null(w_72);
                                    return(t);
                                  }
                                  t = HdMember_1(t, o_4);
                                  t = c_73(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = x_11;
                                  t = Cons_2(t, _id, c_73);
                                }
                            }
                          }
                        return(t);
                      }
                      t = c_73(t);
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
ATerm GnNextChangeGraph_3 (ATerm t, ATerm h_44 (ATerm), ATerm i_44 (ATerm), ATerm j_44 (ATerm))
{
  ATerm u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL;
  u_73 = t;
  n_73 :
  if(match_cons(u_73, sym_TCons_2))
    {
      v_73 = ATgetArgument(u_73, 0);
      y_73 = ATgetArgument(u_73, 1);
      o_73 :
      if(match_cons(v_73, sym_Cons_2))
        {
          w_73 = ATgetArgument(v_73, 0);
          x_73 = ATgetArgument(v_73, 1);
          p_73 :
          if(match_cons(y_73, sym_TCons_2))
            {
              z_73 = ATgetArgument(y_73, 0);
              a_74 = ATgetArgument(y_73, 1);
              q_73 :
              if(match_cons(a_74, sym_TCons_2))
                {
                  b_74 = ATgetArgument(a_74, 0);
                  c_74 = ATgetArgument(a_74, 1);
                  r_73 :
                  if(match_cons(c_74, sym_TCons_2))
                    {
                      d_74 = ATgetArgument(c_74, 0);
                      e_74 = ATgetArgument(c_74, 1);
                      s_73 :
                      if(match_cons(e_74, sym_TCons_2))
                        {
                          f_74 = ATgetArgument(e_74, 0);
                          g_74 = ATgetArgument(e_74, 1);
                          t_73 :
                          if(match_cons(g_74, sym_TNil_0))
                            {
                              ATerm n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = h_44(t);
                              n_74 = t;
                              k_73 :
                              if(match_cons(n_74, sym_TCons_2))
                                {
                                  o_74 = ATgetArgument(n_74, 0);
                                  p_74 = ATgetArgument(n_74, 1);
                                  l_73 :
                                  if(match_cons(p_74, sym_TCons_2))
                                    {
                                      q_74 = ATgetArgument(p_74, 0);
                                      r_74 = ATgetArgument(p_74, 1);
                                      m_73 :
                                      if(match_cons(r_74, sym_TNil_0))
                                        {
                                          ATerm u_74 = NULL;
                                          t = not_null(o_74);
                                          {
                                            ATerm w_74 = NULL;
                                            t = i_44(t);
                                            u_74 = t;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            {
                                              ATerm y_74 = NULL,a_75 = NULL,c_75 = NULL;
                                              t = diff_0(t);
                                              w_74 = t;
                                              {
                                                ATerm y_11;
                                                y_11 = t;
                                                {
                                                  ATerm z_74 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  z_74 = t;
                                                  if(y_74 != NULL && y_74 != z_74)
                                                    _fail(z_74);
                                                  else
                                                    y_74 = z_74;
                                                }
                                                t = y_11;
                                                {
                                                  ATerm z_11;
                                                  z_11 = t;
                                                  {
                                                    ATerm b_75 = NULL;
                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                    t = conc_0(t);
                                                    b_75 = t;
                                                    if(a_75 != NULL && a_75 != b_75)
                                                      _fail(b_75);
                                                    else
                                                      a_75 = b_75;
                                                  }
                                                  t = z_11;
                                                  {
                                                    ATerm d_75 = NULL;
                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_74), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                    t = j_44(t);
                                                    d_75 = t;
                                                    if(c_75 != NULL && c_75 != d_75)
                                                      _fail(d_75);
                                                    else
                                                      c_75 = d_75;
                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_74), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm GnExit_0 (ATerm t)
{
  ATerm t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL;
  t_75 = t;
  m_75 :
  if(match_cons(t_75, sym_TCons_2))
    {
      u_75 = ATgetArgument(t_75, 0);
      v_75 = ATgetArgument(t_75, 1);
      n_75 :
      if(match_cons(u_75, sym_Nil_0))
        {
          o_75 :
          if(match_cons(v_75, sym_TCons_2))
            {
              w_75 = ATgetArgument(v_75, 0);
              x_75 = ATgetArgument(v_75, 1);
              p_75 :
              if(match_cons(x_75, sym_TCons_2))
                {
                  y_75 = ATgetArgument(x_75, 0);
                  z_75 = ATgetArgument(x_75, 1);
                  q_75 :
                  if(match_cons(z_75, sym_TCons_2))
                    {
                      a_76 = ATgetArgument(z_75, 0);
                      b_76 = ATgetArgument(z_75, 1);
                      r_75 :
                      if(match_cons(b_76, sym_TCons_2))
                        {
                          c_76 = ATgetArgument(b_76, 0);
                          d_76 = ATgetArgument(b_76, 1);
                          s_75 :
                          if(match_cons(d_76, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_76), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm GnInitRoots_0 (ATerm t)
{
  ATerm o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL;
  o_76 = t;
  k_76 :
  if(match_cons(o_76, sym_TCons_2))
    {
      p_76 = ATgetArgument(o_76, 0);
      q_76 = ATgetArgument(o_76, 1);
      l_76 :
      if(match_cons(q_76, sym_TCons_2))
        {
          r_76 = ATgetArgument(q_76, 0);
          s_76 = ATgetArgument(q_76, 1);
          m_76 :
          if(match_cons(s_76, sym_TCons_2))
            {
              t_76 = ATgetArgument(s_76, 0);
              u_76 = ATgetArgument(s_76, 1);
              n_76 :
              if(match_cons(u_76, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_76), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))))));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm c_53 (ATerm), ATerm d_53 (ATerm))
{
  ATerm z_76 (ATerm t)
  {
    ATerm e_12 = t;
    if(PushChoice()==0)
      {
        t = c_53(t);
        PopChoice();
      }
    else
      {
        t = e_12;
        t = d_53(t);
        t = z_76(t);
      }
    return(t);
  }
  t = z_76(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm f_53 (ATerm), ATerm g_53 (ATerm), ATerm h_53 (ATerm))
{
  t = f_53(t);
  t = while_not_2(t, g_53, h_53);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm q_44 (ATerm), ATerm r_44 (ATerm), ATerm s_44 (ATerm))
{
  ATerm p_4 (ATerm t)
  {
    ATerm h_12 = t;
    if(PushChoice()==0)
      {
        t = GnNextChangeGraph_3(t, q_44, r_44, s_44);
        PopChoice();
      }
    else
      {
        t = h_12;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, p_4);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL;
    f_77 = t;
    b_77 :
    if(match_cons(f_77, sym_TCons_2))
      {
        g_77 = ATgetArgument(f_77, 0);
        h_77 = ATgetArgument(f_77, 1);
        c_77 :
        if(match_cons(h_77, sym_TCons_2))
          {
            i_77 = ATgetArgument(h_77, 0);
            j_77 = ATgetArgument(h_77, 1);
            d_77 :
            if(match_cons(j_77, sym_TCons_2))
              {
                k_77 = ATgetArgument(j_77, 0);
                l_77 = ATgetArgument(j_77, 1);
                e_77 :
                if(match_cons(l_77, sym_TNil_0))
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_77), not_null(k_77));
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, svars_arity_0, u_4);
  t = FilterNonMissingDefs_0(t);
  {
    ATerm n_12 = t;
    if(PushChoice()==0)
      {
        t = NoMissingDefs_0(t);
        PopChoice();
      }
    else
      {
        t = n_12;
        t = MissingDefs_0(t);
        t = (ATerm) ATmakeInt(1);
        t = exit_0(t);
      }
  }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL;
  t_77 = t;
  q_77 :
  if(match_cons(t_77, sym_TCons_2))
    {
      u_77 = ATgetArgument(t_77, 0);
      v_77 = ATgetArgument(t_77, 1);
      r_77 :
      if(match_cons(v_77, sym_TCons_2))
        {
          w_77 = ATgetArgument(v_77, 0);
          x_77 = ATgetArgument(v_77, 1);
          s_77 :
          if(match_cons(x_77, sym_TNil_0))
            {
              ATerm o_12 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(u_77), not_null(w_77));
                  PopChoice();
                }
              else
                {
                  t = o_12;
                  t = SSL_addr(not_null(u_77), not_null(w_77));
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
  ATerm v_4 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, v_4, add_0, w_4);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm p_50 (ATerm))
{
  ATerm f_78 = NULL,g_78 = NULL,h_78 = NULL;
  f_78 = t;
  e_78 :
  if(match_cons(f_78, sym_Cons_2))
    {
      g_78 = ATgetArgument(f_78, 0);
      h_78 = ATgetArgument(f_78, 1);
      t = p_50(t);
      {
        ATerm x_4 (ATerm t)
        {
          ATerm k_78 = NULL;
          k_78 = t;
          if(g_78 != NULL && g_78 != k_78)
            _fail(k_78);
          else
            g_78 = k_78;
          return(t);
        }
        t = fetch_1(t, x_4);
        t = not_null(h_78);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm r_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL,v_78 = NULL;
  r_78 = t;
  o_78 :
  if(match_cons(r_78, sym_TCons_2))
    {
      s_78 = ATgetArgument(r_78, 0);
      t_78 = ATgetArgument(r_78, 1);
      p_78 :
      if(match_cons(t_78, sym_TCons_2))
        {
          u_78 = ATgetArgument(t_78, 0);
          v_78 = ATgetArgument(t_78, 1);
          q_78 :
          if(match_cons(v_78, sym_TNil_0))
            {
              t = not_null(s_78);
              {
                ATerm z_78 (ATerm t)
                {
                  ATerm p_12 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(u_78);
                      PopChoice();
                    }
                  else
                    {
                      t = p_12;
                      {
                        ATerm q_12 = t;
                        if(PushChoice()==0)
                          {
                            ATerm y_4 (ATerm t)
                            {
                              t = not_null(u_78);
                              return(t);
                            }
                            t = HdMember_1(t, y_4);
                            t = z_78(t);
                            PopChoice();
                          }
                        else
                          {
                            t = q_12;
                            t = Cons_2(t, _id, z_78);
                          }
                      }
                    }
                  return(t);
                }
                t = z_78(t);
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
ATerm foldr_3 (ATerm t, ATerm q_49 (ATerm), ATerm r_49 (ATerm), ATerm s_49 (ATerm))
{
  ATerm r_12 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = q_49(t);
      PopChoice();
    }
  else
    {
      t = r_12;
      {
        ATerm e_79 = NULL,f_79 = NULL,g_79 = NULL;
        e_79 = t;
        d_79 :
        if(match_cons(e_79, sym_Cons_2))
          {
            f_79 = ATgetArgument(e_79, 0);
            g_79 = ATgetArgument(e_79, 1);
            {
              ATerm j_79 = NULL,l_79 = NULL;
              ATerm s_12;
              s_12 = t;
              {
                ATerm k_79 = NULL;
                t = not_null(f_79);
                t = s_49(t);
                k_79 = t;
                if(j_79 != NULL && j_79 != k_79)
                  _fail(k_79);
                else
                  j_79 = k_79;
              }
              t = s_12;
              {
                ATerm m_79 = NULL;
                t = not_null(g_79);
                t = foldr_3(t, q_49, r_49, s_49);
                m_79 = t;
                if(l_79 != NULL && l_79 != m_79)
                  _fail(m_79);
                else
                  l_79 = m_79;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_79), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_79), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = r_49(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm definition_names_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    ATerm t_79 = NULL,u_79 = NULL,v_79 = NULL,w_79 = NULL;
    t_79 = t;
    s_79 :
    if(match_cons(t_79, sym_SDef_3))
      {
        u_79 = ATgetArgument(t_79, 0);
        v_79 = ATgetArgument(t_79, 1);
        w_79 = ATgetArgument(t_79, 2);
        {
          ATerm z_79 = NULL;
          ATerm a_80 = NULL;
          t = not_null(v_79);
          t = length_0(t);
          a_80 = t;
          if(z_79 != NULL && z_79 != a_80)
            _fail(a_80);
          else
            z_79 = a_80;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(u_79), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_79), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0));
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = foldr_3(t, z_4, union_0, c_5);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm f_80 = NULL;
  ATerm h_80 = NULL;
  f_80 = t;
  {
    ATerm i_80 = NULL;
    t = not_null(f_80);
    t = definition_names_0(t);
    i_80 = t;
    if(h_80 != NULL && h_80 != i_80)
      _fail(i_80);
    else
      h_80 = i_80;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_80), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm v_41 (ATerm))
{
  ATerm o_80 = NULL,p_80 = NULL;
  o_80 = t;
  n_80 :
  if(match_cons(o_80, sym_Strategies_1))
    {
      p_80 = ATgetArgument(o_80, 0);
      {
        ATerm r_80 = NULL;
        t = not_null(p_80);
        t = v_41(t);
        r_80 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(r_80));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm a_44 (ATerm), ATerm b_44 (ATerm))
{
  ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL;
  z_80 = t;
  y_80 :
  if(match_cons(z_80, sym_Cons_2))
    {
      a_81 = ATgetArgument(z_80, 0);
      b_81 = ATgetArgument(z_80, 1);
      {
        ATerm e_81 = NULL;
        t = not_null(a_81);
        {
          ATerm g_81 = NULL;
          t = a_44(t);
          e_81 = t;
          t = not_null(b_81);
          t = b_44(t);
          g_81 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_81), not_null(g_81));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm x_41 (ATerm))
{
  ATerm o_81 = NULL,p_81 = NULL;
  o_81 = t;
  n_81 :
  if(match_cons(o_81, sym_Specification_1))
    {
      p_81 = ATgetArgument(o_81, 0);
      {
        ATerm r_81 = NULL;
        t = not_null(p_81);
        t = x_41(t);
        r_81 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(r_81));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm w_81 = NULL;
  w_81 = t;
  v_81 :
  if(!(match_cons(w_81, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm w_43 (ATerm), ATerm x_43 (ATerm))
{
  ATerm b_82 = NULL,c_82 = NULL,d_82 = NULL;
  b_82 = t;
  a_82 :
  if(match_cons(b_82, sym_TCons_2))
    {
      c_82 = ATgetArgument(b_82, 0);
      d_82 = ATgetArgument(b_82, 1);
      {
        ATerm g_82 = NULL;
        t = not_null(c_82);
        {
          ATerm i_82 = NULL;
          t = w_43(t);
          g_82 = t;
          t = not_null(d_82);
          t = x_43(t);
          i_82 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_82), not_null(i_82));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm p_82 = NULL;
  ATerm t_12;
  t_12 = t;
  {
    ATerm d_5 (ATerm t)
    {
      ATerm q_82 = NULL,r_82 = NULL;
      q_82 = t;
      o_82 :
      if(match_cons(q_82, sym_Program_1))
        {
          r_82 = ATgetArgument(q_82, 0);
          if(p_82 != NULL && p_82 != r_82)
            _fail(r_82);
          else
            p_82 = r_82;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, d_5);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_82), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm y_82 = NULL,z_82 = NULL;
  ATerm e_5 (ATerm t)
  {
    ATerm g_5 (ATerm t)
    {
      ATerm u_12 = t;
      if(PushChoice()==0)
        {
          ATerm p_5 (ATerm t)
          {
            ATerm a_83 = NULL;
            a_83 = t;
            t_82 :
            if(!(match_cons(a_83, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, p_5);
          PopChoice();
          _fail(t);
        }
      else
        t = u_12;
      return(t);
    }
    ATerm o_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, g_5, o_5);
    {
      ATerm q_5 (ATerm t)
      {
        ATerm s_5 (ATerm t)
        {
          ATerm b_83 = NULL,c_83 = NULL;
          b_83 = t;
          v_82 :
          if(match_cons(b_83, sym_Runtime_1))
            {
              c_83 = ATgetArgument(b_83, 0);
              if(z_82 != NULL && z_82 != c_83)
                _fail(c_83);
              else
                z_82 = c_83;
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
      {
        ATerm t_5 (ATerm t)
        {
          ATerm v_5 (ATerm t)
          {
            ATerm d_83 = NULL,e_83 = NULL;
            d_83 = t;
            x_82 :
            if(match_cons(d_83, sym_Program_1))
              {
                e_83 = ATgetArgument(d_83, 0);
                if(y_82 != NULL && y_82 != e_83)
                  _fail(e_83);
                else
                  y_82 = e_83;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, v_5);
          return(t);
        }
        ATerm u_5 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, t_5, u_5);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_82), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_82), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, e_5);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL,p_83 = NULL;
  l_83 = t;
  i_83 :
  if(match_cons(l_83, sym_TCons_2))
    {
      m_83 = ATgetArgument(l_83, 0);
      n_83 = ATgetArgument(l_83, 1);
      j_83 :
      if(match_cons(n_83, sym_TCons_2))
        {
          o_83 = ATgetArgument(n_83, 0);
          p_83 = ATgetArgument(n_83, 1);
          k_83 :
          if(match_cons(p_83, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(m_83), not_null(o_83));
          else
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
  ATerm x_83 = NULL,y_83 = NULL,z_83 = NULL,a_84 = NULL,b_84 = NULL;
  x_83 = t;
  u_83 :
  if(match_cons(x_83, sym_TCons_2))
    {
      y_83 = ATgetArgument(x_83, 0);
      z_83 = ATgetArgument(x_83, 1);
      v_83 :
      if(match_cons(z_83, sym_TCons_2))
        {
          a_84 = ATgetArgument(z_83, 0);
          b_84 = ATgetArgument(z_83, 1);
          w_83 :
          if(match_cons(b_84, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(y_83), not_null(a_84));
          else
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
  ATerm j_84 = NULL;
  ATerm v_12;
  v_12 = t;
  {
    ATerm w_5 (ATerm t)
    {
      ATerm a_13 = t;
      if(PushChoice()==0)
        {
          ATerm y_5 (ATerm t)
          {
            ATerm k_84 = NULL,l_84 = NULL;
            k_84 = t;
            g_84 :
            if(match_cons(k_84, sym_Output_1))
              {
                l_84 = ATgetArgument(k_84, 0);
                if(j_84 != NULL && j_84 != l_84)
                  _fail(l_84);
                else
                  j_84 = l_84;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, y_5);
          PopChoice();
        }
      else
        {
          t = a_13;
          {
            ATerm m_84 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            m_84 = t;
            if(j_84 != NULL && j_84 != m_84)
              _fail(m_84);
            else
              j_84 = m_84;
          }
        }
      return(t);
    }
    ATerm x_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, w_5, x_5);
  }
  t = v_12;
  {
    ATerm z_5 (ATerm t)
    {
      ATerm a_6 (ATerm t)
      {
        ATerm b_6 (ATerm t)
        {
          t = not_null(j_84);
          return(t);
        }
        t = split_2(t, b_6, _id);
        return(t);
      }
      t = TCons_2(t, a_6, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, z_5);
    {
      ATerm b_13 = t;
      if(PushChoice()==0)
        {
          ATerm c_6 (ATerm t)
          {
            ATerm e_6 (ATerm t)
            {
              ATerm n_84 = NULL;
              n_84 = t;
              i_84 :
              if(!(match_cons(n_84, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, e_6);
            return(t);
          }
          ATerm d_6 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, c_6, d_6);
          PopChoice();
        }
      else
        {
          t = b_13;
          {
            ATerm f_6 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
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
ATerm apply_strategy_1 (ATerm t, ATerm w_47 (ATerm))
{
  ATerm v_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL;
  ATerm d_13;
  d_13 = t;
  t = dtime_0(t);
  t = d_13;
  t = w_47(t);
  {
    ATerm e_13;
    e_13 = t;
    {
      ATerm w_84 = NULL;
      t = dtime_0(t);
      w_84 = t;
      if(v_84 != NULL && v_84 != w_84)
        _fail(w_84);
      else
        v_84 = w_84;
    }
    t = e_13;
    x_84 = t;
    s_84 :
    if(match_cons(x_84, sym_TCons_2))
      {
        y_84 = ATgetArgument(x_84, 0);
        z_84 = ATgetArgument(x_84, 1);
        t_84 :
        if(match_cons(z_84, sym_TCons_2))
          {
            a_85 = ATgetArgument(z_84, 0);
            b_85 = ATgetArgument(z_84, 1);
            u_84 :
            if(match_cons(b_85, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(v_84)), not_null(y_84)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_85), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm h_85 = NULL;
  h_85 = t;
  t = SSL_ReadFromFile(not_null(h_85));
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_59 (ATerm), ATerm c_59 (ATerm))
{
  ATerm n_85 = NULL;
  ATerm p_85 = NULL,r_85 = NULL;
  n_85 = t;
  {
    ATerm f_13;
    f_13 = t;
    {
      ATerm q_85 = NULL;
      t = not_null(n_85);
      t = b_59(t);
      q_85 = t;
      if(p_85 != NULL && p_85 != q_85)
        _fail(q_85);
      else
        p_85 = q_85;
    }
    t = f_13;
    {
      ATerm s_85 = NULL;
      t = not_null(n_85);
      t = c_59(t);
      s_85 = t;
      if(r_85 != NULL && r_85 != s_85)
        _fail(s_85);
      else
        r_85 = s_85;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_85), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_85), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm z_85 = NULL;
  ATerm g_13;
  g_13 = t;
  {
    ATerm o_13 = t;
    if(PushChoice()==0)
      {
        ATerm g_6 (ATerm t)
        {
          ATerm a_86 = NULL,b_86 = NULL;
          a_86 = t;
          x_85 :
          if(match_cons(a_86, sym_Input_1))
            {
              b_86 = ATgetArgument(a_86, 0);
              if(z_85 != NULL && z_85 != b_86)
                _fail(b_86);
              else
                z_85 = b_86;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, g_6);
        PopChoice();
      }
    else
      {
        t = o_13;
        {
          ATerm c_86 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          c_86 = t;
          if(z_85 != NULL && z_85 != c_86)
            _fail(c_86);
          else
            z_85 = c_86;
        }
      }
  }
  t = g_13;
  {
    ATerm h_6 (ATerm t)
    {
      t = not_null(z_85);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, h_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm g_86 = NULL;
  g_86 = t;
  f_86 :
  if(!(match_cons(g_86, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm v_47 (ATerm))
{
  ATerm j_6 (ATerm t)
  {
    ATerm p_13 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = p_13;
        {
          ATerm r_13 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = r_13;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, j_6);
  t = v_47(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm i_86 = NULL;
  i_86 = t;
  t = SSL_table_create(not_null(i_86));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm m_86 = NULL;
  m_86 = t;
  {
    ATerm s_13;
    s_13 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_86), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = s_13;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm u_86 = NULL,v_86 = NULL,w_86 = NULL,x_86 = NULL,y_86 = NULL;
  y_86 = t;
  s_86 :
  if(match_cons(y_86, sym_Cons_2))
    {
      u_86 = ATgetArgument(y_86, 0);
      v_86 = ATgetArgument(y_86, 1);
      t_86 :
      if(match_cons(v_86, sym_Cons_2))
        {
          w_86 = ATgetArgument(v_86, 0);
          x_86 = ATgetArgument(v_86, 1);
          {
            ATerm c_87 = NULL;
            t = not_null(u_86);
            t = d_0(t);
            {
              ATerm d_87 = NULL;
              t = not_null(w_86);
              t = e_0(t);
              d_87 = t;
              if(c_87 != NULL && c_87 != d_87)
                _fail(d_87);
              else
                c_87 = d_87;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_87), not_null(x_86));
            }
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(y_86, "register-usage-info"))
        t = register_usage_1(t, f_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm t_13 = t;
  if(PushChoice()==0)
    {
      ATerm k_6 (ATerm t)
      {
        ATerm s_87 = NULL;
        s_87 = t;
        h_87 :
        if(!(match_string(s_87, "-S")))
          {
            if(!(match_string(s_87, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm m_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm n_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, k_6, m_6, n_6);
      PopChoice();
    }
  else
    {
      t = t_13;
      {
        ATerm u_13 = t;
        if(PushChoice()==0)
          {
            ATerm o_6 (ATerm t)
            {
              ATerm t_87 = NULL;
              t_87 = t;
              i_87 :
              if(!(match_string(t_87, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm p_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm q_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, o_6, p_6, q_6);
            PopChoice();
          }
        else
          {
            t = u_13;
            {
              ATerm w_13 = t;
              if(PushChoice()==0)
                {
                  ATerm r_6 (ATerm t)
                  {
                    ATerm u_87 = NULL;
                    u_87 = t;
                    j_87 :
                    if(!(match_string(u_87, "-v")))
                      {
                        if(!(match_string(u_87, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm s_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm t_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, r_6, s_6, t_6);
                  PopChoice();
                }
              else
                {
                  t = w_13;
                  {
                    ATerm a_14 = t;
                    if(PushChoice()==0)
                      {
                        ATerm u_6 (ATerm t)
                        {
                          ATerm v_87 = NULL;
                          v_87 = t;
                          k_87 :
                          if(!(match_string(v_87, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm v_6 (ATerm t)
                        {
                          ATerm w_87 = NULL;
                          w_87 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(w_87));
                          return(t);
                        }
                        ATerm a_7 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, u_6, v_6, a_7);
                        PopChoice();
                      }
                    else
                      {
                        t = a_14;
                        {
                          ATerm b_14 = t;
                          if(PushChoice()==0)
                            {
                              ATerm b_7 (ATerm t)
                              {
                                ATerm y_87 = NULL;
                                y_87 = t;
                                m_87 :
                                if(!(match_string(y_87, "-i")))
                                  {
                                    if(!(match_string(y_87, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm f_7 (ATerm t)
                              {
                                ATerm z_87 = NULL;
                                z_87 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_87));
                                return(t);
                              }
                              ATerm g_7 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, b_7, f_7, g_7);
                              PopChoice();
                            }
                          else
                            {
                              t = b_14;
                              {
                                ATerm c_14 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm h_7 (ATerm t)
                                    {
                                      ATerm b_88 = NULL;
                                      b_88 = t;
                                      o_87 :
                                      if(!(match_string(b_88, "-o")))
                                        {
                                          if(!(match_string(b_88, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm i_7 (ATerm t)
                                    {
                                      ATerm c_88 = NULL;
                                      c_88 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_88));
                                      return(t);
                                    }
                                    ATerm j_7 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, h_7, i_7, j_7);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = c_14;
                                    {
                                      ATerm f_14 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm k_7 (ATerm t)
                                          {
                                            ATerm f_88 = NULL;
                                            f_88 = t;
                                            q_87 :
                                            if(!(match_string(f_88, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm l_7 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm m_7 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, k_7, l_7, m_7);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = f_14;
                                          {
                                            ATerm n_7 (ATerm t)
                                            {
                                              ATerm g_88 = NULL;
                                              g_88 = t;
                                              r_87 :
                                              if(!(match_string(g_88, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm r_7 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm s_7 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, n_7, r_7, s_7);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm l_88 = NULL;
  l_88 = t;
  t = SSL_table_destroy(not_null(l_88));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_88 = NULL;
  q_88 = t;
  t = SSL_exit(not_null(q_88));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm u_88 = NULL;
  u_88 = t;
  t = SSL_implode_string(not_null(u_88));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_65 (ATerm))
{
  ATerm x_88 (ATerm t)
  {
    ATerm q_14 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, x_88);
        PopChoice();
      }
    else
      {
        t = q_14;
        t = Nil_0(t);
        t = r_65(t);
      }
    return(t);
  }
  t = x_88(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_14 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = r_14;
      {
        ATerm a_89 = NULL,b_89 = NULL,c_89 = NULL;
        a_89 = t;
        z_88 :
        if(match_cons(a_89, sym_Cons_2))
          {
            b_89 = ATgetArgument(a_89, 0);
            c_89 = ATgetArgument(a_89, 1);
            t = not_null(b_89);
            {
              ATerm t_7 (ATerm t)
              {
                t = not_null(c_89);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, t_7);
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
  ATerm i_89 = NULL;
  i_89 = t;
  t = SSL_explode_string(not_null(i_89));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm c_46 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm l_89 (ATerm t)
  {
    ATerm t_14 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = t_14;
        t = Cons_2(t, d_65, l_89);
      }
    return(t);
  }
  t = l_89(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm s_89 = NULL,t_89 = NULL,u_89 = NULL,v_89 = NULL,w_89 = NULL;
  s_89 = t;
  o_89 :
  if(match_cons(s_89, sym_TCons_2))
    {
      t_89 = ATgetArgument(s_89, 0);
      u_89 = ATgetArgument(s_89, 1);
      p_89 :
      if(match_cons(t_89, sym_Nil_0))
        {
          q_89 :
          if(match_cons(u_89, sym_TCons_2))
            {
              v_89 = ATgetArgument(u_89, 0);
              w_89 = ATgetArgument(u_89, 1);
              r_89 :
              if(match_cons(w_89, sym_TNil_0))
                t = not_null(v_89);
              else
                _fail(t);
            }
          else
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
  ATerm e_90 = NULL,g_90 = NULL,h_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL;
  e_90 = t;
  a_90 :
  if(match_cons(e_90, sym_TCons_2))
    {
      g_90 = ATgetArgument(e_90, 0);
      j_90 = ATgetArgument(e_90, 1);
      b_90 :
      if(match_cons(g_90, sym_Cons_2))
        {
          h_90 = ATgetArgument(g_90, 0);
          i_90 = ATgetArgument(g_90, 1);
          c_90 :
          if(match_cons(j_90, sym_TCons_2))
            {
              k_90 = ATgetArgument(j_90, 0);
              l_90 = ATgetArgument(j_90, 1);
              d_90 :
              if(match_cons(l_90, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_90), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_90), not_null(k_90)), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm l_52 (ATerm), ATerm m_52 (ATerm))
{
  ATerm q_90 (ATerm t)
  {
    ATerm u_14 = t;
    if(PushChoice()==0)
      {
        t = l_52(t);
        t = q_90(t);
        PopChoice();
      }
    else
      {
        t = u_14;
        t = m_52(t);
      }
    return(t);
  }
  t = q_90(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm o_52 (ATerm))
{
  t = repeat_2(t, o_52, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm s_90 = NULL;
  s_90 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_90), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_46 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_39 (ATerm))
{
  ATerm y_90 = NULL,a_91 = NULL;
  y_90 = t;
  x_90 :
  if(match_cons(y_90, sym_Program_1))
    {
      a_91 = ATgetArgument(y_90, 0);
      {
        ATerm c_91 = NULL;
        t = not_null(a_91);
        t = d_39(t);
        c_91 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_91));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm k_91 = NULL;
  ATerm u_7 (ATerm t)
  {
    ATerm v_7 (ATerm t)
    {
      ATerm l_91 = NULL;
      l_91 = t;
      if(k_91 != NULL && k_91 != l_91)
        _fail(l_91);
      else
        k_91 = l_91;
      return(t);
    }
    t = Program_1(t, v_7);
    return(t);
  }
  t = option_defined_1(t, u_7);
  {
    ATerm w_7 (ATerm t)
    {
      ATerm m_91 = NULL;
      ATerm n_91 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm x_7 (ATerm t)
        {
          t = not_null(k_91);
          return(t);
        }
        t = short_description_1(t, x_7);
        t = concat_strings_0(t);
        n_91 = t;
        if(m_91 != NULL && m_91 != n_91)
          _fail(n_91);
        else
          m_91 = n_91;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_91), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, w_7);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm z_7 (ATerm t)
      {
        ATerm o_91 = NULL;
        o_91 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_91), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, z_7);
      {
        ATerm a_8 (ATerm t)
        {
          ATerm q_91 = NULL;
          ATerm r_91 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm c_8 (ATerm t)
            {
              t = not_null(k_91);
              return(t);
            }
            t = long_description_1(t, c_8);
            t = concat_strings_0(t);
            r_91 = t;
            if(q_91 != NULL && q_91 != r_91)
              _fail(r_91);
            else
              q_91 = r_91;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_91), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm a_92 = NULL,b_92 = NULL,c_92 = NULL,d_92 = NULL,e_92 = NULL;
  a_92 = t;
  x_91 :
  if(match_cons(a_92, sym_TCons_2))
    {
      b_92 = ATgetArgument(a_92, 0);
      c_92 = ATgetArgument(a_92, 1);
      y_91 :
      if(match_cons(c_92, sym_TCons_2))
        {
          d_92 = ATgetArgument(c_92, 0);
          e_92 = ATgetArgument(c_92, 1);
          z_91 :
          if(match_cons(e_92, sym_TNil_0))
            {
              ATerm v_14;
              v_14 = t;
              t = SSL_printnl(not_null(b_92), not_null(d_92));
              t = v_14;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_39 (ATerm))
{
  ATerm l_92 = NULL,m_92 = NULL;
  l_92 = t;
  k_92 :
  if(match_cons(l_92, sym_Undefined_1))
    {
      m_92 = ATgetArgument(l_92, 0);
      {
        ATerm o_92 = NULL;
        t = not_null(m_92);
        t = e_39(t);
        o_92 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_92));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm l_65 (ATerm))
{
  ATerm s_92 (ATerm t)
  {
    ATerm w_14 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, l_65, _id);
        PopChoice();
      }
    else
      {
        t = w_14;
        t = Cons_2(t, _id, s_92);
      }
    return(t);
  }
  t = s_92(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_47 (ATerm))
{
  t = fetch_1(t, a_47);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm u_92 = NULL;
  u_92 = t;
  t_92 :
  if(!(match_cons(u_92, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm t_59 (ATerm))
{
  ATerm h_15 = t;
  if(PushChoice()==0)
    {
      t = t_59(t);
      PopChoice();
    }
  else
    t = h_15;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_92 = NULL,a_93 = NULL,b_93 = NULL,c_93 = NULL,d_93 = NULL;
  z_92 = t;
  w_92 :
  if(match_cons(z_92, sym_TCons_2))
    {
      a_93 = ATgetArgument(z_92, 0);
      b_93 = ATgetArgument(z_92, 1);
      x_92 :
      if(match_cons(b_93, sym_TCons_2))
        {
          c_93 = ATgetArgument(b_93, 0);
          d_93 = ATgetArgument(b_93, 1);
          y_92 :
          if(match_cons(d_93, sym_TNil_0))
            t = SSL_table_get(not_null(a_93), not_null(c_93));
          else
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
  ATerm n_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL,r_93 = NULL,s_93 = NULL,t_93 = NULL;
  n_93 = t;
  j_93 :
  if(match_cons(n_93, sym_TCons_2))
    {
      o_93 = ATgetArgument(n_93, 0);
      p_93 = ATgetArgument(n_93, 1);
      k_93 :
      if(match_cons(p_93, sym_TCons_2))
        {
          q_93 = ATgetArgument(p_93, 0);
          r_93 = ATgetArgument(p_93, 1);
          l_93 :
          if(match_cons(r_93, sym_TCons_2))
            {
              s_93 = ATgetArgument(r_93, 0);
              t_93 = ATgetArgument(r_93, 1);
              m_93 :
              if(match_cons(t_93, sym_TNil_0))
                {
                  ATerm i_15;
                  i_15 = t;
                  {
                    ATerm x_93 = NULL;
                    ATerm y_93 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_93), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_93), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm j_15 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = j_15;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      y_93 = t;
                      if(x_93 != NULL && x_93 != y_93)
                        _fail(y_93);
                      else
                        x_93 = y_93;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_93), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_93), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_93), not_null(x_93)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = i_15;
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_46 (ATerm))
{
  ATerm c_94 = NULL;
  ATerm d_94 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = g_46(t);
  d_94 = t;
  if(c_94 != NULL && c_94 != d_94)
    _fail(d_94);
  else
    c_94 = d_94;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_94), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm j_94 = NULL,k_94 = NULL,l_94 = NULL;
  l_94 = t;
  i_94 :
  if(match_cons(l_94, sym_Cons_2))
    {
      j_94 = ATgetArgument(l_94, 0);
      k_94 = ATgetArgument(l_94, 1);
      {
        ATerm o_94 = NULL;
        t = not_null(j_94);
        t = a_0(t);
        {
          ATerm p_94 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = b_0(t);
          p_94 = t;
          if(o_94 != NULL && o_94 != p_94)
            _fail(p_94);
          else
            o_94 = p_94;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_94), not_null(k_94));
        }
      }
    }
  else
    {
      if(match_string(l_94, "register-usage-info"))
        t = register_usage_1(t, c_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm e_8 (ATerm t)
  {
    ATerm u_94 = NULL;
    u_94 = t;
    t_94 :
    if(!(match_string(u_94, "--help")))
      {
        if(!(match_string(u_94, "-h")))
          {
            if(!(match_string(u_94, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm f_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm g_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, e_8, f_8, g_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_94 = NULL,y_94 = NULL,z_94 = NULL;
  x_94 = t;
  w_94 :
  if(match_cons(x_94, sym_Cons_2))
    {
      y_94 = ATgetArgument(x_94, 0);
      z_94 = ATgetArgument(x_94, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_94)), not_null(z_94));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_46 (ATerm))
{
  ATerm k_15;
  k_15 = t;
  {
    ATerm h_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = e_46(t);
      return(t);
    }
    t = try_1(t, h_8);
  }
  t = k_15;
  {
    ATerm i_8 (ATerm t)
    {
      ATerm e_95 = NULL;
      e_95 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_95));
      return(t);
    }
    ATerm j_8 (ATerm t)
    {
      ATerm l_15 = t;
      if(PushChoice()==0)
        {
          ATerm m_15 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = m_15;
              t = e_46(t);
              t = Cons_2(t, _id, j_8);
            }
          PopChoice();
        }
      else
        {
          t = l_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, i_8, j_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm n_95 = NULL,o_95 = NULL,p_95 = NULL;
  ATerm n_15;
  n_15 = t;
  {
    ATerm q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL,v_95 = NULL,w_95 = NULL;
    q_95 = t;
    j_95 :
    if(match_cons(q_95, sym_TCons_2))
      {
        r_95 = ATgetArgument(q_95, 0);
        s_95 = ATgetArgument(q_95, 1);
        k_95 :
        if(match_cons(s_95, sym_TCons_2))
          {
            t_95 = ATgetArgument(s_95, 0);
            u_95 = ATgetArgument(s_95, 1);
            l_95 :
            if(match_cons(u_95, sym_TCons_2))
              {
                v_95 = ATgetArgument(u_95, 0);
                w_95 = ATgetArgument(u_95, 1);
                m_95 :
                if(match_cons(w_95, sym_TNil_0))
                  {
                    if(n_95 != NULL && n_95 != r_95)
                      _fail(r_95);
                    else
                      n_95 = r_95;
                    if(o_95 != NULL && o_95 != t_95)
                      _fail(t_95);
                    else
                      o_95 = t_95;
                    if(p_95 != NULL && p_95 != v_95)
                      _fail(v_95);
                    else
                      p_95 = v_95;
                    t = SSL_table_put(not_null(n_95), not_null(o_95), not_null(p_95));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = n_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_46 (ATerm))
{
  ATerm z_95 = NULL;
  ATerm o_15;
  o_15 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = o_15;
  {
    ATerm k_8 (ATerm t)
    {
      ATerm p_15 = t;
      if(PushChoice()==0)
        {
          t = d_46(t);
          PopChoice();
        }
      else
        {
          t = p_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, k_8);
    {
      ATerm l_8 (ATerm t)
      {
        ATerm q_15 = t;
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
            t = q_15;
            {
              ATerm m_8 (ATerm t)
              {
                ATerm n_8 (ATerm t)
                {
                  ATerm a_96 = NULL;
                  a_96 = t;
                  if(z_95 != NULL && z_95 != a_96)
                    _fail(a_96);
                  else
                    z_95 = a_96;
                  return(t);
                }
                t = Undefined_1(t, n_8);
                return(t);
              }
              t = option_defined_1(t, m_8);
              {
                ATerm r_15;
                r_15 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_95), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = r_15;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, l_8);
      {
        ATerm s_15;
        s_15 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = s_15;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm k_47 (ATerm), ATerm l_47 (ATerm), ATerm m_47 (ATerm))
{
  ATerm s_8 (ATerm t)
  {
    ATerm t_15 = t;
    if(PushChoice()==0)
      {
        t = l_47(t);
        PopChoice();
      }
    else
      {
        t = t_15;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, s_8);
  t = store_options_0(t);
  {
    ATerm w_15 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, m_47);
        PopChoice();
      }
    else
      {
        t = w_15;
        {
          ATerm x_15 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, k_47);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = x_15;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm f_47 (ATerm), ATerm g_47 (ATerm))
{
  t = iowrap_3(t, f_47, g_47, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm c_47 (ATerm))
{
  ATerm t_8 (ATerm t)
  {
    ATerm v_8 (ATerm t)
    {
      t = TCons_2(t, c_47, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, v_8);
    return(t);
  }
  t = iowrap_2(t, t_8, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm x_8 (ATerm t)
  {
    ATerm y_8 (ATerm t)
    {
      ATerm z_8 (ATerm t)
      {
        ATerm a_9 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
          return(t);
        }
        t = Cons_2(t, a_9, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, z_8);
      return(t);
    }
    t = Specification_1(t, y_8);
    return(t);
  }
  t = iowrap_1(t, x_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_all_0(t);
  return(t);
}
