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
ATerm filter_1 (ATerm, ATerm e_57 (ATerm));
ATerm FilterNonMissingDefs_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm y_42 (ATerm), ATerm z_42 (ATerm));
ATerm Let_2 (ATerm, ATerm a_43 (ATerm), ATerm b_43 (ATerm));
ATerm sboundin_3 (ATerm, ATerm q_64 (ATerm), ATerm r_64 (ATerm), ATerm s_64 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm l_51 (ATerm), ATerm m_51 (ATerm), ATerm n_51 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm b_51 (ATerm), ATerm c_51 (ATerm));
ATerm diff_1 (ATerm, ATerm g_51 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm o_55 (ATerm), ATerm p_55 (ATerm), ATerm q_55 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm r_55 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm z_49 (ATerm), ATerm a_50 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm t_63 (ATerm), ATerm u_63 (ATerm));
ATerm alltd_1 (ATerm, ATerm t_62 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm v_63 (ATerm), ATerm w_63 (ATerm));
ATerm substitute_1 (ATerm, ATerm x_63 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm NonOverloadedDef_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm c_43 (ATerm), ATerm d_43 (ATerm), ATerm e_43 (ATerm));
ATerm partition_1 (ATerm, ATerm m_57 (ATerm));
ATerm OverloadedDef_0 (ATerm);
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
ATerm App_2 (ATerm, ATerm y_40 (ATerm), ATerm z_40 (ATerm));
ATerm Con_3 (ATerm, ATerm v_40 (ATerm), ATerm w_40 (ATerm), ATerm x_40 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm c_44 (ATerm), ATerm d_44 (ATerm));
ATerm oncetd_1 (ATerm, ATerm f_62 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm p_60 (ATerm));
ATerm desugar_0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm f_59 (ATerm));
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm e_58 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm new_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm r_50 (ATerm));
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
ATerm genzip_4 (ATerm, ATerm w_57 (ATerm), ATerm x_57 (ATerm), ATerm y_57 (ATerm), ATerm z_57 (ATerm));
ATerm zip_1 (ATerm, ATerm b_58 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm s_44 (ATerm), ATerm t_44 (ATerm), ATerm u_44 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm n_53 (ATerm), ATerm o_53 (ATerm));
ATerm for_3 (ATerm, ATerm q_53 (ATerm), ATerm r_53 (ATerm), ATerm s_53 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm b_45 (ATerm), ATerm c_45 (ATerm), ATerm d_45 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm a_51 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm b_50 (ATerm), ATerm c_50 (ATerm), ATerm d_50 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm g_42 (ATerm));
ATerm Cons_2 (ATerm, ATerm l_44 (ATerm), ATerm m_44 (ATerm));
ATerm Specification_1 (ATerm, ATerm i_42 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm h_44 (ATerm), ATerm i_44 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm h_48 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm m_59 (ATerm), ATerm n_59 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_48 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm c_66 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm n_46 (ATerm));
ATerm map_1 (ATerm, ATerm o_65 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm w_52 (ATerm), ATerm x_52 (ATerm));
ATerm repeat_1 (ATerm, ATerm z_52 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm m_46 (ATerm));
ATerm Program_1 (ATerm, ATerm o_39 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm p_39 (ATerm));
ATerm fetch_1 (ATerm, ATerm w_65 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_47 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_60 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm r_46 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm p_46 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_46 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_47 (ATerm), ATerm w_47 (ATerm), ATerm x_47 (ATerm));
ATerm iowrap_2 (ATerm, ATerm q_47 (ATerm), ATerm r_47 (ATerm));
ATerm iowrap_1 (ATerm, ATerm n_47 (ATerm));
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
  ATerm i_9;
  i_9 = t;
  {
    ATerm g_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, g_0, _id);
    t = printnl_0(t);
  }
  t = i_9;
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
                      ATerm j_9 = t;
                      if(PushChoice()==0)
                        {
                          t = MissingDefMod_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = j_9;
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
ATerm filter_1 (ATerm t, ATerm e_57 (ATerm))
{
  ATerm k_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = k_9;
      {
        ATerm l_9 = t;
        if(PushChoice()==0)
          {
            ATerm i_0 (ATerm t)
            {
              t = filter_1(t, e_57);
              return(t);
            }
            t = Cons_2(t, e_57, i_0);
            PopChoice();
          }
        else
          {
            t = l_9;
            {
              ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
              r_4 = t;
              q_4 :
              if(match_cons(r_4, sym_Cons_2))
                {
                  s_4 = ATgetArgument(r_4, 0);
                  t_4 = ATgetArgument(r_4, 1);
                  t = not_null(t_4);
                  t = filter_1(t, e_57);
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
                  ATerm s_9 = t;
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
                                        ATerm t_9 = t;
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
                                            t = t_9;
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
                    t = s_9;
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
ATerm Rec_2 (ATerm t, ATerm y_42 (ATerm), ATerm z_42 (ATerm))
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
          t = y_42(t);
          b_8 = t;
          t = not_null(y_7);
          t = z_42(t);
          d_8 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(b_8), not_null(d_8));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm a_43 (ATerm), ATerm b_43 (ATerm))
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
          t = a_43(t);
          u_8 = t;
          t = not_null(r_8);
          t = b_43(t);
          w_8 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(u_8), not_null(w_8));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm q_64 (ATerm), ATerm r_64 (ATerm), ATerm s_64 (ATerm))
{
  ATerm u_9 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, q_64, q_64);
      PopChoice();
    }
  else
    {
      t = u_9;
      {
        ATerm v_9 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, s_64, s_64, q_64);
            PopChoice();
          }
        else
          {
            t = v_9;
            t = Rec_2(t, s_64, q_64);
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
ATerm crush_3 (ATerm t, ATerm l_51 (ATerm), ATerm m_51 (ATerm), ATerm n_51 (ATerm))
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
    t = foldr_3(t, l_51, m_51, n_51);
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm b_51 (ATerm), ATerm c_51 (ATerm))
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
  x_12 = t;
  w_12 :
  if(match_cons(x_12, sym_Cons_2))
    {
      y_12 = ATgetArgument(x_12, 0);
      z_12 = ATgetArgument(x_12, 1);
      t = c_51(t);
      {
        ATerm p_0 (ATerm t)
        {
          ATerm c_13 = NULL;
          c_13 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_13), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = b_51(t);
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
ATerm diff_1 (ATerm t, ATerm g_51 (ATerm))
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
                  ATerm w_9 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = w_9;
                      {
                        ATerm x_9 = t;
                        if(PushChoice()==0)
                          {
                            ATerm q_0 (ATerm t)
                            {
                              t = not_null(n_13);
                              return(t);
                            }
                            t = HdMember_p__2(t, g_51, q_0);
                            t = v_13(t);
                            PopChoice();
                          }
                        else
                          {
                            t = x_9;
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
ATerm free_vars2_4 (ATerm t, ATerm o_55 (ATerm), ATerm p_55 (ATerm), ATerm q_55 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm r_55 (ATerm))
{
  ATerm z_13 (ATerm t)
  {
    ATerm r_0 (ATerm t)
    {
      ATerm y_9 = t;
      if(PushChoice()==0)
        {
          t = o_55(t);
          PopChoice();
        }
      else
        {
          t = y_9;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      return(t);
    }
    ATerm s_0 (ATerm t)
    {
      ATerm z_9 = t;
      if(PushChoice()==0)
        {
          ATerm x_13 = NULL;
          ATerm a_10;
          a_10 = t;
          {
            ATerm y_13 = NULL;
            t = p_55(t);
            y_13 = t;
            if(x_13 != NULL && x_13 != y_13)
              _fail(y_13);
            else
              x_13 = y_13;
          }
          t = a_10;
          {
            ATerm t_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                t = not_null(x_13);
                return(t);
              }
              t = split_2(t, z_13, v_0);
              t = diff_1(t, r_55);
              return(t);
            }
            ATerm u_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = q_55(t, t_0, z_13, u_0);
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
          t = z_9;
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
    ATerm b_10 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = b_10;
        {
          ATerm c_10 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = c_10;
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
ATerm foldr_2 (ATerm t, ATerm z_49 (ATerm), ATerm a_50 (ATerm))
{
  ATerm d_10 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = z_49(t);
      PopChoice();
    }
  else
    {
      t = d_10;
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
              t = foldr_2(t, z_49, a_50);
              n_16 = t;
              if(m_16 != NULL && m_16 != n_16)
                _fail(n_16);
              else
                m_16 = n_16;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_16), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = a_50(t);
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
  ATerm h_10 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = h_10;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm t_63 (ATerm), ATerm u_63 (ATerm))
{
  ATerm d_19 = NULL;
  ATerm f_19 = NULL;
  d_19 = t;
  {
    ATerm h_19 = NULL;
    t = t_63(t);
    f_19 = t;
    t = u_63(t);
    h_19 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_19), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm t_62 (ATerm))
{
  ATerm m_19 (ATerm t)
  {
    ATerm i_10 = t;
    if(PushChoice()==0)
      {
        t = t_62(t);
        PopChoice();
      }
    else
      {
        t = i_10;
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
ATerm substitute_2 (ATerm t, ATerm v_63 (ATerm), ATerm w_63 (ATerm))
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
                  t = SubsVar_2(t, v_63, e_1);
                  t = w_63(t);
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
ATerm substitute_1 (ATerm t, ATerm x_63 (ATerm))
{
  t = substitute_2(t, x_63, _id);
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
  ATerm j_10 = t;
  if(PushChoice()==0)
    {
      t = JoinDefs1_0(t);
      PopChoice();
    }
  else
    {
      t = j_10;
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
ATerm SDef_3 (ATerm t, ATerm c_43 (ATerm), ATerm d_43 (ATerm), ATerm e_43 (ATerm))
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
          t = c_43(t);
          c_26 = t;
          t = not_null(x_25);
          {
            ATerm g_26 = NULL;
            t = d_43(t);
            e_26 = t;
            t = not_null(y_25);
            t = e_43(t);
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
ATerm partition_1 (ATerm t, ATerm m_57 (ATerm))
{
  ATerm y_28 (ATerm t)
  {
    ATerm k_10 = t;
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
        t = k_10;
        {
          ATerm l_10 = t;
          if(PushChoice()==0)
            {
              ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,g_28 = NULL,h_28 = NULL;
              t = Cons_2(t, m_57, y_28);
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
              t = l_10;
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
                                ATerm m_10;
                                m_10 = t;
                                {
                                  ATerm y_29 = NULL;
                                  t = length_0(t);
                                  y_29 = t;
                                  if(p_29 != NULL && p_29 != y_29)
                                    _fail(y_29);
                                  else
                                    p_29 = y_29;
                                }
                                t = m_10;
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
ATerm Mapp2_0 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL;
  k_36 = t;
  j_36 :
  if(match_cons(k_36, sym_Match_1))
    {
      l_36 = ATgetArgument(k_36, 0);
      {
        ATerm n_10 = t;
        if(PushChoice()==0)
          {
            ATerm n_36 = NULL,i_37 = NULL,t_39 = NULL;
            t = not_null(l_36);
            {
              ATerm q_1 (ATerm t)
              {
                ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL;
                q_39 = t;
                d_36 :
                if(match_cons(q_39, sym_App_2))
                  {
                    r_39 = ATgetArgument(q_39, 0);
                    s_39 = ATgetArgument(q_39, 1);
                    if(n_36 != NULL && n_36 != r_39)
                      _fail(r_39);
                    else
                      n_36 = r_39;
                    if(i_37 != NULL && i_37 != s_39)
                      _fail(s_39);
                    else
                      i_37 = s_39;
                    t = (ATerm) ATmakeAppl(sym_Wld_0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, q_1);
              t_39 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_39)), (ATerm) ATmakeAppl(sym_BA_2, not_null(n_36), not_null(i_37)));
            }
            PopChoice();
          }
        else
          {
            t = n_10;
            {
              ATerm w_39 = NULL;
              ATerm y_39 = NULL,b_40 = NULL;
              t = new_0(t);
              w_39 = t;
              t = not_null(l_36);
              {
                ATerm r_1 (ATerm t)
                {
                  ATerm z_39 = NULL,a_40 = NULL;
                  z_39 = t;
                  h_36 :
                  if(match_cons(z_39, sym_RootApp_1))
                    {
                      a_40 = ATgetArgument(z_39, 0);
                      if(y_39 != NULL && y_39 != a_40)
                        _fail(a_40);
                      else
                        y_39 = a_40;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_39));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, r_1);
                b_40 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_39), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(b_40)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_39))), not_null(y_39))));
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
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL;
  p_40 = t;
  m_40 :
  if(match_cons(p_40, sym_Match_1))
    {
      q_40 = ATgetArgument(p_40, 0);
      n_40 :
      if(match_cons(q_40, sym_App_2))
        {
          r_40 = ATgetArgument(q_40, 0);
          o_40 = ATgetArgument(q_40, 1);
          t = (ATerm) ATmakeAppl(sym_BA_2, not_null(r_40), not_null(o_40));
        }
      else
        {
          if(match_cons(q_40, sym_RootApp_1))
            {
              r_40 = ATgetArgument(q_40, 0);
              t = not_null(r_40);
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
  ATerm i_41 = NULL,j_41 = NULL;
  i_41 = t;
  h_41 :
  if(match_cons(i_41, sym_Match_1))
    {
      j_41 = ATgetArgument(i_41, 0);
      {
        ATerm l_41 = NULL,p_41 = NULL;
        t = not_null(j_41);
        {
          ATerm s_1 (ATerm t)
          {
            ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
            m_41 = t;
            e_41 :
            if(match_cons(m_41, sym_RootApp_1))
              {
                n_41 = ATgetArgument(m_41, 0);
                f_41 :
                if(match_cons(n_41, sym_Match_1))
                  {
                    o_41 = ATgetArgument(n_41, 0);
                    if(l_41 != NULL && l_41 != o_41)
                      _fail(o_41);
                    else
                      l_41 = o_41;
                    t = not_null(l_41);
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
          t = (ATerm) ATmakeAppl(sym_Match_1, not_null(p_41));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm f_42 = NULL,h_42 = NULL;
  f_42 = t;
  e_42 :
  if(match_cons(f_42, sym_Build_1))
    {
      h_42 = ATgetArgument(f_42, 0);
      {
        ATerm o_10 = t;
        if(PushChoice()==0)
          {
            ATerm k_42 = NULL;
            ATerm m_42 = NULL,n_42 = NULL,r_42 = NULL;
            t = new_0(t);
            k_42 = t;
            t = not_null(h_42);
            {
              ATerm t_1 (ATerm t)
              {
                ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL;
                o_42 = t;
                y_41 :
                if(match_cons(o_42, sym_App_2))
                  {
                    p_42 = ATgetArgument(o_42, 0);
                    q_42 = ATgetArgument(o_42, 1);
                    if(m_42 != NULL && m_42 != p_42)
                      _fail(p_42);
                    else
                      m_42 = p_42;
                    if(n_42 != NULL && n_42 != q_42)
                      _fail(q_42);
                    else
                      n_42 = q_42;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_42));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, t_1);
              r_42 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_42), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(m_42), not_null(n_42), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_42)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_42))));
            }
            PopChoice();
          }
        else
          {
            t = o_10;
            {
              ATerm u_42 = NULL;
              ATerm w_42 = NULL,g_43 = NULL;
              t = new_0(t);
              u_42 = t;
              t = not_null(h_42);
              {
                ATerm u_1 (ATerm t)
                {
                  ATerm x_42 = NULL,f_43 = NULL;
                  x_42 = t;
                  c_42 :
                  if(match_cons(x_42, sym_RootApp_1))
                    {
                      f_43 = ATgetArgument(x_42, 0);
                      if(w_42 != NULL && w_42 != f_43)
                        _fail(f_43);
                      else
                        w_42 = f_43;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_42));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, u_1);
                g_43 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_42), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_42), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_42))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_43))));
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
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  s_43 :
  if(match_cons(v_43, sym_Build_1))
    {
      w_43 = ATgetArgument(v_43, 0);
      t_43 :
      if(match_cons(w_43, sym_App_2))
        {
          x_43 = ATgetArgument(w_43, 0);
          u_43 = ATgetArgument(w_43, 1);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_43)), not_null(x_43));
        }
      else
        {
          if(match_cons(w_43, sym_RootApp_1))
            {
              x_43 = ATgetArgument(w_43, 0);
              t = not_null(x_43);
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
  ATerm x_44 = NULL,y_44 = NULL;
  x_44 = t;
  w_44 :
  if(match_cons(x_44, sym_Build_1))
    {
      y_44 = ATgetArgument(x_44, 0);
      {
        ATerm p_10 = t;
        if(PushChoice()==0)
          {
            ATerm a_45 = NULL,e_45 = NULL,j_45 = NULL;
            t = not_null(y_44);
            {
              ATerm v_1 (ATerm t)
              {
                ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL;
                f_45 = t;
                k_44 :
                if(match_cons(f_45, sym_App_2))
                  {
                    g_45 = ATgetArgument(f_45, 0);
                    i_45 = ATgetArgument(f_45, 1);
                    n_44 :
                    if(match_cons(g_45, sym_Build_1))
                      {
                        h_45 = ATgetArgument(g_45, 0);
                        if(e_45 != NULL && e_45 != h_45)
                          _fail(h_45);
                        else
                          e_45 = h_45;
                        if(a_45 != NULL && a_45 != i_45)
                          _fail(i_45);
                        else
                          a_45 = i_45;
                        t = not_null(e_45);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, v_1);
              j_45 = t;
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(j_45));
            }
            PopChoice();
          }
        else
          {
            t = p_10;
            {
              ATerm m_45 = NULL,q_45 = NULL;
              t = not_null(y_44);
              {
                ATerm w_1 (ATerm t)
                {
                  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
                  n_45 = t;
                  q_44 :
                  if(match_cons(n_45, sym_RootApp_1))
                    {
                      o_45 = ATgetArgument(n_45, 0);
                      r_44 :
                      if(match_cons(o_45, sym_Build_1))
                        {
                          p_45 = ATgetArgument(o_45, 0);
                          if(m_45 != NULL && m_45 != p_45)
                            _fail(p_45);
                          else
                            m_45 = p_45;
                          t = not_null(m_45);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, w_1);
                q_45 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, not_null(q_45));
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
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL;
  w_46 = t;
  k_46 :
  if(match_cons(w_46, sym_Seqs_1))
    {
      x_46 = ATgetArgument(w_46, 0);
      l_46 :
      if(match_cons(x_46, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(x_46, sym_Cons_2))
            {
              u_46 = ATgetArgument(x_46, 0);
              v_46 = ATgetArgument(x_46, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_46), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(v_46)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(w_46, sym_Choices_1))
        {
          x_46 = ATgetArgument(w_46, 0);
          s_46 :
          if(match_cons(x_46, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(x_46, sym_Cons_2))
                {
                  u_46 = ATgetArgument(x_46, 0);
                  v_46 = ATgetArgument(x_46, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(u_46), (ATerm) ATmakeAppl(sym_Choices_1, not_null(v_46)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(w_46, sym_LChoices_1))
            {
              x_46 = ATgetArgument(w_46, 0);
              t_46 :
              if(match_cons(x_46, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(x_46, sym_Cons_2))
                    {
                      u_46 = ATgetArgument(x_46, 0);
                      v_46 = ATgetArgument(x_46, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(u_46), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(v_46)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(w_46, sym_Lets_2))
                {
                  x_46 = ATgetArgument(w_46, 0);
                  y_46 = ATgetArgument(w_46, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(x_46), not_null(y_46));
                }
              else
                {
                  if(match_cons(w_46, sym_BA_2))
                    {
                      x_46 = ATgetArgument(w_46, 0);
                      y_46 = ATgetArgument(w_46, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_46)), not_null(x_46));
                    }
                  else
                    {
                      if(match_cons(w_46, sym_MA_2))
                        {
                          x_46 = ATgetArgument(w_46, 0);
                          y_46 = ATgetArgument(w_46, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_46)), not_null(y_46));
                        }
                      else
                        {
                          if(match_cons(w_46, sym_AM_2))
                            {
                              x_46 = ATgetArgument(w_46, 0);
                              y_46 = ATgetArgument(w_46, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_46), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_46)));
                            }
                          else
                            {
                              if(match_cons(w_46, sym_BAM_3))
                                {
                                  x_46 = ATgetArgument(w_46, 0);
                                  y_46 = ATgetArgument(w_46, 1);
                                  z_46 = ATgetArgument(w_46, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_46)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_46), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_46)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(w_46, sym_InfixApp_3))
                                    {
                                      x_46 = ATgetArgument(w_46, 0);
                                      y_46 = ATgetArgument(w_46, 1);
                                      z_46 = ATgetArgument(w_46, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(y_46), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_46), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_46), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm q_48 = NULL;
  q_48 = t;
  p_48 :
  if(!(match_cons(q_48, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm q_10 = t;
  if(PushChoice()==0)
    {
      ATerm x_1 (ATerm t)
      {
        ATerm r_10 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = r_10;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, x_1);
      PopChoice();
      _fail(t);
    }
  else
    t = q_10;
  return(t);
}
ATerm App_2 (ATerm t, ATerm y_40 (ATerm), ATerm z_40 (ATerm))
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL;
  v_48 = t;
  u_48 :
  if(match_cons(v_48, sym_App_2))
    {
      w_48 = ATgetArgument(v_48, 0);
      x_48 = ATgetArgument(v_48, 1);
      {
        ATerm a_49 = NULL;
        t = not_null(w_48);
        {
          ATerm c_49 = NULL;
          t = y_40(t);
          a_49 = t;
          t = not_null(x_48);
          t = z_40(t);
          c_49 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, not_null(a_49), not_null(c_49));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm v_40 (ATerm), ATerm w_40 (ATerm), ATerm x_40 (ATerm))
{
  ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL;
  m_49 = t;
  l_49 :
  if(match_cons(m_49, sym_Con_3))
    {
      n_49 = ATgetArgument(m_49, 0);
      o_49 = ATgetArgument(m_49, 1);
      p_49 = ATgetArgument(m_49, 2);
      {
        ATerm t_49 = NULL;
        t = not_null(n_49);
        {
          ATerm v_49 = NULL;
          t = v_40(t);
          t_49 = t;
          t = not_null(o_49);
          {
            ATerm x_49 = NULL;
            t = w_40(t);
            v_49 = t;
            t = not_null(p_49);
            t = x_40(t);
            x_49 = t;
            t = (ATerm) ATmakeAppl(sym_Con_3, not_null(t_49), not_null(v_49), not_null(x_49));
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
  ATerm s_10 = t;
  if(PushChoice()==0)
    {
      ATerm a_2 (ATerm t)
      {
        ATerm t_10 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = t_10;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, a_2);
      PopChoice();
      _fail(t);
    }
  else
    t = s_10;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,s_50 = NULL;
  m_50 = t;
  k_50 :
  if(match_cons(m_50, sym_SRule_1))
    {
      n_50 = ATgetArgument(m_50, 0);
      l_50 :
      if(match_cons(n_50, sym_Rule_3))
        {
          o_50 = ATgetArgument(n_50, 0);
          p_50 = ATgetArgument(n_50, 1);
          s_50 = ATgetArgument(n_50, 2);
          t = not_null(o_50);
          t = pureterm_0(t);
          t = not_null(p_50);
          t = buildterm_0(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_50)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_50), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_50)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(n_50, sym_StratRule_3))
            {
              o_50 = ATgetArgument(n_50, 0);
              p_50 = ATgetArgument(n_50, 1);
              s_50 = ATgetArgument(n_50, 2);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_50), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_50), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_50), (ATerm) ATmakeAppl(sym_Nil_0)))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm c_44 (ATerm), ATerm d_44 (ATerm))
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
  p_51 = t;
  o_51 :
  if(match_cons(p_51, sym_Scope_2))
    {
      q_51 = ATgetArgument(p_51, 0);
      r_51 = ATgetArgument(p_51, 1);
      {
        ATerm u_51 = NULL;
        t = not_null(q_51);
        {
          ATerm w_51 = NULL;
          t = c_44(t);
          u_51 = t;
          t = not_null(r_51);
          t = d_44(t);
          w_51 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_51), not_null(w_51));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm f_62 (ATerm))
{
  ATerm b_52 (ATerm t)
  {
    ATerm u_10 = t;
    if(PushChoice()==0)
      {
        t = f_62(t);
        PopChoice();
      }
    else
      {
        t = u_10;
        t = _one(t, b_52);
      }
    return(t);
  }
  t = b_52(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL;
  q_52 = t;
  o_52 :
  if(match_cons(q_52, sym_SRule_1))
    {
      r_52 = ATgetArgument(q_52, 0);
      p_52 :
      if(match_cons(r_52, sym_Rule_3))
        {
          s_52 = ATgetArgument(r_52, 0);
          t_52 = ATgetArgument(r_52, 1);
          u_52 = ATgetArgument(r_52, 2);
          {
            ATerm c_53 = NULL;
            ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL,m_53 = NULL;
            t = new_0(t);
            c_53 = t;
            t = not_null(s_52);
            {
              ATerm u_53 = NULL,v_53 = NULL,d_54 = NULL;
              ATerm j_2 (ATerm t)
              {
                ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL;
                h_53 = t;
                f_52 :
                if(match_cons(h_53, sym_Con_3))
                  {
                    i_53 = ATgetArgument(h_53, 0);
                    k_53 = ATgetArgument(h_53, 1);
                    l_53 = ATgetArgument(h_53, 2);
                    g_52 :
                    if(match_cons(i_53, sym_Var_1))
                      {
                        j_53 = ATgetArgument(i_53, 0);
                        if(g_53 != NULL && g_53 != j_53)
                          _fail(j_53);
                        else
                          g_53 = j_53;
                        if(e_53 != NULL && e_53 != k_53)
                          _fail(k_53);
                        else
                          e_53 = k_53;
                        if(f_53 != NULL && f_53 != l_53)
                          _fail(l_53);
                        else
                          f_53 = l_53;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_53));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, j_2);
              m_53 = t;
              t = not_null(t_52);
              {
                ATerm k_2 (ATerm t)
                {
                  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL;
                  w_53 = t;
                  j_52 :
                  if(match_cons(w_53, sym_Con_3))
                    {
                      x_53 = ATgetArgument(w_53, 0);
                      z_53 = ATgetArgument(w_53, 1);
                      a_54 = ATgetArgument(w_53, 2);
                      k_52 :
                      if(match_cons(x_53, sym_Var_1))
                        {
                          y_53 = ATgetArgument(x_53, 0);
                          l_52 :
                          if(match_cons(a_54, sym_Call_2))
                            {
                              b_54 = ATgetArgument(a_54, 0);
                              c_54 = ATgetArgument(a_54, 1);
                              m_52 :
                              if(match_cons(c_54, sym_Nil_0))
                                {
                                  if(g_53 != NULL && g_53 != y_53)
                                    _fail(y_53);
                                  else
                                    g_53 = y_53;
                                  if(u_53 != NULL && u_53 != z_53)
                                    _fail(z_53);
                                  else
                                    u_53 = z_53;
                                  if(v_53 != NULL && v_53 != b_54)
                                    _fail(b_54);
                                  else
                                    v_53 = b_54;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_53));
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, k_2);
                d_54 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_53), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(m_53), not_null(d_54), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_52), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(v_53), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_53), not_null(u_53), (ATerm) ATmakeAppl(sym_Id_0))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Var_1, not_null(g_53)), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_53)))))));
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
  ATerm l_2 (ATerm t)
  {
    ATerm v_10 = t;
    if(PushChoice()==0)
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      {
        t = v_10;
        {
          ATerm w_10 = t;
          if(PushChoice()==0)
            {
              t = Scope_2(t, _id, desugarRule_0);
              PopChoice();
            }
          else
            {
              t = w_10;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, l_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm p_60 (ATerm))
{
  ATerm m_54 (ATerm t)
  {
    t = p_60(t);
    t = _all(t, m_54);
    return(t);
  }
  t = m_54(t);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm y_2 (ATerm t)
      {
        ATerm x_10 = t;
        if(PushChoice()==0)
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = x_10;
            {
              ATerm y_10 = t;
              if(PushChoice()==0)
                {
                  ATerm z_10 = t;
                  if(PushChoice()==0)
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = z_10;
                      {
                        ATerm f_11 = t;
                        if(PushChoice()==0)
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = f_11;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = y_10;
                  {
                    ATerm g_11 = t;
                    if(PushChoice()==0)
                      {
                        ATerm l_11 = t;
                        if(PushChoice()==0)
                          {
                            t = Mapp0_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = l_11;
                            {
                              ATerm m_11 = t;
                              if(PushChoice()==0)
                                {
                                  t = Mapp1_0(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = m_11;
                                  t = Mapp2_0(t);
                                }
                            }
                          }
                        PopChoice();
                      }
                    else
                      {
                        t = g_11;
                        t = Expl_0(t);
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, y_2);
    }
    return(t);
  }
  t = topdown_1(t, m_2);
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL;
  p_54 = t;
  o_54 :
  if(match_cons(p_54, sym_TCons_2))
    {
      q_54 = ATgetArgument(p_54, 0);
      r_54 = ATgetArgument(p_54, 1);
      t = not_null(r_54);
    }
  else
    _fail(t);
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL;
  x_54 = t;
  w_54 :
  if(match_cons(x_54, sym_TCons_2))
    {
      y_54 = ATgetArgument(x_54, 0);
      z_54 = ATgetArgument(x_54, 1);
      t = not_null(y_54);
    }
  else
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm f_59 (ATerm))
{
  ATerm t_55 (ATerm t)
  {
    ATerm n_11 = t;
    if(PushChoice()==0)
      {
        ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL;
        ATerm z_2 (ATerm t)
        {
          t = map_1(t, Thd_0);
          return(t);
        }
        ATerm a_3 (ATerm t)
        {
          t = map_1(t, Ttl_0);
          return(t);
        }
        t = split_2(t, z_2, a_3);
        {
          ATerm b_3 (ATerm t)
          {
            t = TCons_2(t, t_55, TNil_0);
            return(t);
          }
          t = TCons_2(t, f_59, b_3);
          h_55 = t;
          e_55 :
          if(match_cons(h_55, sym_TCons_2))
            {
              i_55 = ATgetArgument(h_55, 0);
              j_55 = ATgetArgument(h_55, 1);
              f_55 :
              if(match_cons(j_55, sym_TCons_2))
                {
                  k_55 = ATgetArgument(j_55, 0);
                  l_55 = ATgetArgument(j_55, 1);
                  g_55 :
                  if(match_cons(l_55, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_55), not_null(k_55));
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
        t = n_11;
        t = map_1(t, TNil_0);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
      }
    return(t);
  }
  t = t_55(t);
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL;
  c_56 = t;
  z_55 :
  if(match_cons(c_56, sym_TCons_2))
    {
      d_56 = ATgetArgument(c_56, 0);
      e_56 = ATgetArgument(c_56, 1);
      a_56 :
      if(match_cons(e_56, sym_TCons_2))
        {
          f_56 = ATgetArgument(e_56, 0);
          g_56 = ATgetArgument(e_56, 1);
          b_56 :
          if(match_cons(g_56, sym_TNil_0))
            {
              ATerm j_56 = NULL;
              ATerm l_56 = NULL;
              t = new_0(t);
              j_56 = t;
              {
                ATerm n_56 = NULL;
                t = new_0(t);
                l_56 = t;
                t = new_0(t);
                n_56 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(j_56)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_56)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_56)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_56)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_56)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(j_56), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_56)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_56)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
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
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL;
  y_56 = t;
  u_56 :
  if(match_cons(y_56, sym_TCons_2))
    {
      z_56 = ATgetArgument(y_56, 0);
      a_57 = ATgetArgument(y_56, 1);
      v_56 :
      if(match_cons(a_57, sym_TCons_2))
        {
          b_57 = ATgetArgument(a_57, 0);
          c_57 = ATgetArgument(a_57, 1);
          w_56 :
          if(match_cons(b_57, sym_Nil_0))
            {
              x_56 :
              if(match_cons(c_57, sym_TNil_0))
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
ATerm zipr_1 (ATerm t, ATerm e_58 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, e_58);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL;
  h_57 = t;
  g_57 :
  if(match_cons(h_57, sym_Cons_2))
    {
      i_57 = ATgetArgument(h_57, 0);
      j_57 = ATgetArgument(h_57, 1);
      t = not_null(j_57);
    }
  else
    _fail(t);
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL;
  t_57 = t;
  r_57 :
  if(match_cons(t_57, sym_Cons_2))
    {
      u_57 = ATgetArgument(t_57, 0);
      v_57 = ATgetArgument(t_57, 1);
      s_57 :
      if(match_cons(v_57, sym_Nil_0))
        t = not_null(u_57);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm last_0 (ATerm t)
{
  ATerm o_11 = t;
  if(PushChoice()==0)
    {
      t = Last_0(t);
      PopChoice();
    }
  else
    {
      t = o_11;
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
  ATerm k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL;
  k_58 = t;
  h_58 :
  if(match_cons(k_58, sym_TCons_2))
    {
      l_58 = ATgetArgument(k_58, 0);
      m_58 = ATgetArgument(k_58, 1);
      i_58 :
      if(match_cons(m_58, sym_TCons_2))
        {
          n_58 = ATgetArgument(m_58, 0);
          o_58 = ATgetArgument(m_58, 1);
          j_58 :
          if(match_cons(o_58, sym_TNil_0))
            {
              ATerm p_11 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(l_58), not_null(n_58));
                  PopChoice();
                }
              else
                {
                  t = p_11;
                  t = SSL_subtr(not_null(l_58), not_null(n_58));
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
  ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL;
  w_58 = t;
  t_58 :
  if(match_cons(w_58, sym_TCons_2))
    {
      x_58 = ATgetArgument(w_58, 0);
      y_58 = ATgetArgument(w_58, 1);
      u_58 :
      if(match_cons(y_58, sym_TCons_2))
        {
          z_58 = ATgetArgument(y_58, 0);
          a_59 = ATgetArgument(y_58, 1);
          v_58 :
          if(match_cons(a_59, sym_TNil_0))
            {
              ATerm q_11;
              q_11 = t;
              {
                ATerm r_11 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(x_58), not_null(z_58));
                    PopChoice();
                  }
                else
                  {
                    t = r_11;
                    t = SSL_gtr(not_null(x_58), not_null(z_58));
                  }
              }
              t = q_11;
            }
          else
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
  ATerm k_59 = NULL;
  ATerm s_11 = t;
  if(PushChoice()==0)
    {
      ATerm l_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL;
      l_59 = t;
      h_59 :
      if(match_cons(l_59, sym_TCons_2))
        {
          o_59 = ATgetArgument(l_59, 0);
          p_59 = ATgetArgument(l_59, 1);
          i_59 :
          if(match_cons(p_59, sym_TCons_2))
            {
              q_59 = ATgetArgument(p_59, 0);
              r_59 = ATgetArgument(p_59, 1);
              j_59 :
              if(match_cons(r_59, sym_TNil_0))
                {
                  if(k_59 != NULL && k_59 != o_59)
                    _fail(o_59);
                  else
                    k_59 = o_59;
                  if(k_59 != NULL && k_59 != q_59)
                    _fail(q_59);
                  else
                    k_59 = q_59;
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
      t = s_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm r_50 (ATerm))
{
  ATerm c_3 (ATerm t)
  {
    ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,r_60 = NULL;
    l_60 = t;
    u_59 :
    if(match_cons(l_60, sym_TCons_2))
      {
        m_60 = ATgetArgument(l_60, 0);
        n_60 = ATgetArgument(l_60, 1);
        v_59 :
        if(match_cons(n_60, sym_TCons_2))
          {
            o_60 = ATgetArgument(n_60, 0);
            r_60 = ATgetArgument(n_60, 1);
            w_59 :
            if(match_cons(r_60, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_60), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_60), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    ATerm u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL;
    u_60 = t;
    y_59 :
    if(match_cons(u_60, sym_TCons_2))
      {
        v_60 = ATgetArgument(u_60, 0);
        w_60 = ATgetArgument(u_60, 1);
        z_59 :
        if(match_int(v_60, 0))
          {
            a_60 :
            if(match_cons(w_60, sym_TCons_2))
              {
                x_60 = ATgetArgument(w_60, 0);
                y_60 = ATgetArgument(w_60, 1);
                b_60 :
                if(match_cons(y_60, sym_TCons_2))
                  {
                    z_60 = ATgetArgument(y_60, 0);
                    a_61 = ATgetArgument(y_60, 1);
                    c_60 :
                    if(match_cons(a_61, sym_TNil_0))
                      t = not_null(z_60);
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL;
    d_61 = t;
    h_60 :
    if(match_cons(d_61, sym_TCons_2))
      {
        e_61 = ATgetArgument(d_61, 0);
        f_61 = ATgetArgument(d_61, 1);
        i_60 :
        if(match_cons(f_61, sym_TCons_2))
          {
            g_61 = ATgetArgument(f_61, 0);
            h_61 = ATgetArgument(f_61, 1);
            j_60 :
            if(match_cons(h_61, sym_TCons_2))
              {
                i_61 = ATgetArgument(h_61, 0);
                j_61 = ATgetArgument(h_61, 1);
                k_60 :
                if(match_cons(j_61, sym_TNil_0))
                  {
                    ATerm n_61 = NULL,p_61 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_61), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = geq_0(t);
                    {
                      ATerm t_11;
                      t_11 = t;
                      {
                        ATerm o_61 = NULL;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_61), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                        t = subt_0(t);
                        o_61 = t;
                        if(n_61 != NULL && n_61 != o_61)
                          _fail(o_61);
                        else
                          n_61 = o_61;
                      }
                      t = t_11;
                      {
                        ATerm q_61 = NULL;
                        t = not_null(g_61);
                        t = r_50(t);
                        q_61 = t;
                        if(p_61 != NULL && p_61 != q_61)
                          _fail(q_61);
                        else
                          p_61 = q_61;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_61), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_61), not_null(i_61)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  t = for_3(t, c_3, o_3, p_3);
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm a_62 = NULL;
  ATerm c_62 = NULL;
  a_62 = t;
  {
    ATerm e_62 = NULL;
    t = new_0(t);
    c_62 = t;
    {
      ATerm i_62 = NULL;
      t = new_0(t);
      e_62 = t;
      t = new_0(t);
      i_62 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_62)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_62)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_62), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_62))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(c_62), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_62), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_62)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_62), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_62)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
    }
  }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL;
  ATerm f_67 (ATerm t)
  {
    ATerm u_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL;
    ATerm v_65 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_64), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = add_0(t);
    v_65 = t;
    if(u_65 != NULL && u_65 != v_65)
      _fail(v_65);
    else
      u_65 = v_65;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_65), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TNil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = copy_1(t, new_0);
    y_65 = t;
    q_63 :
    if(match_cons(y_65, sym_Cons_2))
      {
        z_65 = ATgetArgument(y_65, 0);
        a_66 = ATgetArgument(y_65, 1);
        {
          ATerm f_66 = NULL;
          t = not_null(a_66);
          {
            ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL;
            t = last_0(t);
            f_66 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_65), not_null(a_66)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_66), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = zipr_1(t, MkThreadApplication_0);
            t = tuple_unzip_1(t, _id);
            h_66 = t;
            j_63 :
            if(match_cons(h_66, sym_TCons_2))
              {
                i_66 = ATgetArgument(h_66, 0);
                j_66 = ATgetArgument(h_66, 1);
                k_63 :
                if(match_cons(j_66, sym_TCons_2))
                  {
                    k_66 = ATgetArgument(j_66, 0);
                    l_66 = ATgetArgument(j_66, 1);
                    l_63 :
                    if(match_cons(l_66, sym_TCons_2))
                      {
                        m_66 = ATgetArgument(l_66, 0);
                        n_66 = ATgetArgument(l_66, 1);
                        m_63 :
                        if(match_cons(n_66, sym_TCons_2))
                          {
                            o_66 = ATgetArgument(n_66, 0);
                            p_66 = ATgetArgument(n_66, 1);
                            n_63 :
                            if(match_cons(p_66, sym_TCons_2))
                              {
                                q_66 = ATgetArgument(p_66, 0);
                                r_66 = ATgetArgument(p_66, 1);
                                o_63 :
                                if(match_cons(r_66, sym_TCons_2))
                                  {
                                    s_66 = ATgetArgument(r_66, 0);
                                    t_66 = ATgetArgument(r_66, 1);
                                    p_63 :
                                    if(match_cons(t_66, sym_TNil_0))
                                      {
                                        ATerm b_67 = NULL;
                                        ATerm c_67 = NULL;
                                        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_66), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_66), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_66), (ATerm) ATmakeAppl(sym_Nil_0))));
                                        t = concat_0(t);
                                        c_67 = t;
                                        if(b_67 != NULL && b_67 != c_67)
                                          _fail(c_67);
                                        else
                                          b_67 = c_67;
                                        t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(f_64), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), not_null(k_66), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_65), not_null(b_67)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_64), not_null(o_66)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_65)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_64), not_null(s_66)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_66)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(i_66))))));
                                      }
                                    else
                                      _fail(t);
                                  }
                                else
                                  _fail(t);
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
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
  e_64 = t;
  r_63 :
  if(match_cons(e_64, sym_TCons_2))
    {
      f_64 = ATgetArgument(e_64, 0);
      g_64 = ATgetArgument(e_64, 1);
      s_63 :
      if(match_cons(g_64, sym_TCons_2))
        {
          h_64 = ATgetArgument(g_64, 0);
          i_64 = ATgetArgument(g_64, 1);
          y_63 :
          if(match_string(h_64, "D"))
            {
              z_63 :
              if(match_cons(i_64, sym_TCons_2))
                {
                  j_64 = ATgetArgument(i_64, 0);
                  k_64 = ATgetArgument(i_64, 1);
                  a_64 :
                  if(match_cons(k_64, sym_TNil_0))
                    {
                      ATerm n_64 = NULL;
                      ATerm p_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL;
                      t = new_0(t);
                      n_64 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_64), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_64)), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = copy_1(t, MkDistApplication_0);
                      t = tuple_unzip_1(t, _id);
                      p_64 = t;
                      w_62 :
                      if(match_cons(p_64, sym_TCons_2))
                        {
                          t_64 = ATgetArgument(p_64, 0);
                          u_64 = ATgetArgument(p_64, 1);
                          x_62 :
                          if(match_cons(u_64, sym_TCons_2))
                            {
                              v_64 = ATgetArgument(u_64, 0);
                              w_64 = ATgetArgument(u_64, 1);
                              y_62 :
                              if(match_cons(w_64, sym_TCons_2))
                                {
                                  x_64 = ATgetArgument(w_64, 0);
                                  y_64 = ATgetArgument(w_64, 1);
                                  z_62 :
                                  if(match_cons(y_64, sym_TCons_2))
                                    {
                                      z_64 = ATgetArgument(y_64, 0);
                                      a_65 = ATgetArgument(y_64, 1);
                                      a_63 :
                                      if(match_cons(a_65, sym_TCons_2))
                                        {
                                          b_65 = ATgetArgument(a_65, 0);
                                          c_65 = ATgetArgument(a_65, 1);
                                          b_63 :
                                          if(match_cons(c_65, sym_TCons_2))
                                            {
                                              d_65 = ATgetArgument(c_65, 0);
                                              e_65 = ATgetArgument(c_65, 1);
                                              c_63 :
                                              if(match_cons(e_65, sym_TNil_0))
                                                {
                                                  ATerm l_65 = NULL;
                                                  ATerm m_65 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_65), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  m_65 = t;
                                                  if(l_65 != NULL && l_65 != m_65)
                                                    _fail(m_65);
                                                  else
                                                    l_65 = m_65;
                                                  t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(f_64), (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue))), not_null(v_64), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_64), not_null(l_65)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_64), not_null(z_64)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_64)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(f_64), not_null(d_65)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(t_64))))));
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
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
              if(match_string(h_64, "T"))
                {
                  b_64 :
                  if(match_cons(i_64, sym_TCons_2))
                    {
                      j_64 = ATgetArgument(i_64, 0);
                      k_64 = ATgetArgument(i_64, 1);
                      c_64 :
                      if(match_cons(k_64, sym_TNil_0))
                        {
                          d_64 :
                          if(match_int(j_64, 0))
                            {
                              ATerm u_11 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm q_65 = NULL;
                                  t = new_0(t);
                                  q_65 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(f_64), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_65), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_64), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_65)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_64), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_65)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Id_0)))));
                                  PopChoice();
                                }
                              else
                                {
                                  t = u_11;
                                  t = f_67(t);
                                }
                            }
                          else
                            t = f_67(t);
                        }
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
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL;
  z_67 = t;
  s_67 :
  if(match_cons(z_67, sym_TCons_2))
    {
      a_68 = ATgetArgument(z_67, 0);
      h_68 = ATgetArgument(z_67, 1);
      t_67 :
      if(match_cons(a_68, sym_TCons_2))
        {
          b_68 = ATgetArgument(a_68, 0);
          e_68 = ATgetArgument(a_68, 1);
          u_67 :
          if(match_cons(b_68, sym_Mod_2))
            {
              c_68 = ATgetArgument(b_68, 0);
              d_68 = ATgetArgument(b_68, 1);
              v_67 :
              if(match_cons(e_68, sym_TCons_2))
                {
                  f_68 = ATgetArgument(e_68, 0);
                  g_68 = ATgetArgument(e_68, 1);
                  w_67 :
                  if(match_cons(g_68, sym_TNil_0))
                    {
                      x_67 :
                      if(match_cons(h_68, sym_TCons_2))
                        {
                          i_68 = ATgetArgument(h_68, 0);
                          j_68 = ATgetArgument(h_68, 1);
                          y_67 :
                          if(match_cons(j_68, sym_TNil_0))
                            {
                              ATerm o_68 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_68), (ATerm) ATmakeAppl(sym_TNil_0))));
                              t = DefineCongruence_0(t);
                              t = desugar_0(t);
                              o_68 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_68), (ATerm) ATmakeAppl(sym_TNil_0)));
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm v_11 = t;
  if(PushChoice()==0)
    {
      t = CongruenceDef_0(t);
      PopChoice();
    }
  else
    {
      t = v_11;
      {
        ATerm w_11 = t;
        if(PushChoice()==0)
          {
            t = OverloadedDef_0(t);
            {
              ATerm q_3 (ATerm t)
              {
                t = TCons_2(t, _id, TNil_0);
                return(t);
              }
              t = TCons_2(t, joindefs_0, q_3);
            }
            PopChoice();
          }
        else
          {
            t = w_11;
            t = NonOverloadedDef_0(t);
            {
              ATerm r_3 (ATerm t)
              {
                t = TCons_2(t, _id, TNil_0);
                return(t);
              }
              t = TCons_2(t, joindefs_0, r_3);
            }
          }
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL;
  a_69 = t;
  t_68 :
  if(match_cons(a_69, sym_TCons_2))
    {
      b_69 = ATgetArgument(a_69, 0);
      e_69 = ATgetArgument(a_69, 1);
      u_68 :
      if(match_cons(b_69, sym_Cons_2))
        {
          c_69 = ATgetArgument(b_69, 0);
          d_69 = ATgetArgument(b_69, 1);
          v_68 :
          if(match_cons(e_69, sym_TCons_2))
            {
              f_69 = ATgetArgument(e_69, 0);
              g_69 = ATgetArgument(e_69, 1);
              w_68 :
              if(match_cons(g_69, sym_TCons_2))
                {
                  h_69 = ATgetArgument(g_69, 0);
                  i_69 = ATgetArgument(g_69, 1);
                  x_68 :
                  if(match_cons(i_69, sym_TCons_2))
                    {
                      j_69 = ATgetArgument(i_69, 0);
                      k_69 = ATgetArgument(i_69, 1);
                      y_68 :
                      if(match_cons(k_69, sym_TCons_2))
                        {
                          l_69 = ATgetArgument(k_69, 0);
                          m_69 = ATgetArgument(k_69, 1);
                          z_68 :
                          if(match_cons(m_69, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_69), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_69), not_null(l_69)), (ATerm) ATmakeAppl(sym_TNil_0))))));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm y_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL;
  y_69 = t;
  v_69 :
  if(match_cons(y_69, sym_TCons_2))
    {
      z_69 = ATgetArgument(y_69, 0);
      a_70 = ATgetArgument(y_69, 1);
      w_69 :
      if(match_cons(a_70, sym_TCons_2))
        {
          b_70 = ATgetArgument(a_70, 0);
          c_70 = ATgetArgument(a_70, 1);
          x_69 :
          if(match_cons(c_70, sym_TNil_0))
            {
              t = not_null(z_69);
              {
                ATerm s_3 (ATerm t)
                {
                  t = not_null(b_70);
                  return(t);
                }
                t = at_end_1(t, s_3);
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
  ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL;
  l_70 = t;
  h_70 :
  if(match_cons(l_70, sym_TCons_2))
    {
      m_70 = ATgetArgument(l_70, 0);
      n_70 = ATgetArgument(l_70, 1);
      i_70 :
      if(match_cons(n_70, sym_TCons_2))
        {
          o_70 = ATgetArgument(n_70, 0);
          r_70 = ATgetArgument(n_70, 1);
          j_70 :
          if(match_cons(o_70, sym_Cons_2))
            {
              p_70 = ATgetArgument(o_70, 0);
              q_70 = ATgetArgument(o_70, 1);
              k_70 :
              if(match_cons(r_70, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_70), not_null(m_70)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_70), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL;
  b_71 = t;
  x_70 :
  if(match_cons(b_71, sym_TCons_2))
    {
      c_71 = ATgetArgument(b_71, 0);
      d_71 = ATgetArgument(b_71, 1);
      y_70 :
      if(match_cons(d_71, sym_TCons_2))
        {
          e_71 = ATgetArgument(d_71, 0);
          f_71 = ATgetArgument(d_71, 1);
          a_71 :
          if(match_cons(f_71, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_71), not_null(e_71));
          else
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
  ATerm r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL;
  r_71 = t;
  l_71 :
  if(match_cons(r_71, sym_TCons_2))
    {
      s_71 = ATgetArgument(r_71, 0);
      v_71 = ATgetArgument(r_71, 1);
      m_71 :
      if(match_cons(s_71, sym_Cons_2))
        {
          t_71 = ATgetArgument(s_71, 0);
          u_71 = ATgetArgument(s_71, 1);
          o_71 :
          if(match_cons(v_71, sym_TCons_2))
            {
              w_71 = ATgetArgument(v_71, 0);
              z_71 = ATgetArgument(v_71, 1);
              p_71 :
              if(match_cons(w_71, sym_Cons_2))
                {
                  x_71 = ATgetArgument(w_71, 0);
                  y_71 = ATgetArgument(w_71, 1);
                  q_71 :
                  if(match_cons(z_71, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(t_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_71), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(u_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_71), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL;
  l_72 = t;
  g_72 :
  if(match_cons(l_72, sym_TCons_2))
    {
      m_72 = ATgetArgument(l_72, 0);
      n_72 = ATgetArgument(l_72, 1);
      h_72 :
      if(match_cons(m_72, sym_Nil_0))
        {
          i_72 :
          if(match_cons(n_72, sym_TCons_2))
            {
              o_72 = ATgetArgument(n_72, 0);
              p_72 = ATgetArgument(n_72, 1);
              j_72 :
              if(match_cons(o_72, sym_Nil_0))
                {
                  k_72 :
                  if(match_cons(p_72, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm w_57 (ATerm), ATerm x_57 (ATerm), ATerm y_57 (ATerm), ATerm z_57 (ATerm))
{
  ATerm r_72 (ATerm t)
  {
    ATerm x_11 = t;
    if(PushChoice()==0)
      {
        t = w_57(t);
        PopChoice();
      }
    else
      {
        t = x_11;
        t = x_57(t);
        {
          ATerm c_4 (ATerm t)
          {
            t = TCons_2(t, r_72, TNil_0);
            return(t);
          }
          t = TCons_2(t, z_57, c_4);
          t = y_57(t);
        }
      }
    return(t);
  }
  t = r_72(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm b_58 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, b_58);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm k_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL;
  k_73 = t;
  e_73 :
  if(match_cons(k_73, sym_Cons_2))
    {
      n_73 = ATgetArgument(k_73, 0);
      s_73 = ATgetArgument(k_73, 1);
      f_73 :
      if(match_cons(n_73, sym_TCons_2))
        {
          o_73 = ATgetArgument(n_73, 0);
          p_73 = ATgetArgument(n_73, 1);
          g_73 :
          if(match_cons(p_73, sym_TCons_2))
            {
              q_73 = ATgetArgument(p_73, 0);
              r_73 = ATgetArgument(p_73, 1);
              h_73 :
              if(match_cons(r_73, sym_TNil_0))
                {
                  ATerm w_73 = NULL,x_73 = NULL,f_74 = NULL,o_74 = NULL;
                  ATerm y_11;
                  y_11 = t;
                  {
                    ATerm y_73 = NULL;
                    ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL;
                    t = not_null(q_73);
                    y_73 = t;
                    t = SSL_explode_term(not_null(y_73));
                    a_74 = t;
                    v_72 :
                    if(match_cons(a_74, sym_TCons_2))
                      {
                        b_74 = ATgetArgument(a_74, 0);
                        c_74 = ATgetArgument(a_74, 1);
                        w_72 :
                        if(match_cons(c_74, sym_TCons_2))
                          {
                            d_74 = ATgetArgument(c_74, 0);
                            e_74 = ATgetArgument(c_74, 1);
                            x_72 :
                            if(match_cons(e_74, sym_TNil_0))
                              {
                                if(w_73 != NULL && w_73 != b_74)
                                  _fail(b_74);
                                else
                                  w_73 = b_74;
                                if(x_73 != NULL && x_73 != d_74)
                                  _fail(d_74);
                                else
                                  x_73 = d_74;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = y_11;
                  {
                    ATerm z_11;
                    z_11 = t;
                    {
                      ATerm g_74 = NULL;
                      ATerm j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL;
                      t = not_null(o_73);
                      g_74 = t;
                      t = SSL_explode_term(not_null(g_74));
                      j_74 = t;
                      a_73 :
                      if(match_cons(j_74, sym_TCons_2))
                        {
                          k_74 = ATgetArgument(j_74, 0);
                          l_74 = ATgetArgument(j_74, 1);
                          b_73 :
                          if(match_cons(l_74, sym_TCons_2))
                            {
                              m_74 = ATgetArgument(l_74, 0);
                              n_74 = ATgetArgument(l_74, 1);
                              c_73 :
                              if(match_cons(n_74, sym_TNil_0))
                                {
                                  if(w_73 != NULL && w_73 != k_74)
                                    _fail(k_74);
                                  else
                                    w_73 = k_74;
                                  if(f_74 != NULL && f_74 != m_74)
                                    _fail(m_74);
                                  else
                                    f_74 = m_74;
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                    t = z_11;
                    {
                      ATerm p_74 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      p_74 = t;
                      if(o_74 != NULL && o_74 != p_74)
                        _fail(p_74);
                      else
                        o_74 = p_74;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_73), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL;
  b_75 = t;
  x_74 :
  if(match_cons(b_75, sym_Cons_2))
    {
      c_75 = ATgetArgument(b_75, 0);
      h_75 = ATgetArgument(b_75, 1);
      y_74 :
      if(match_cons(c_75, sym_TCons_2))
        {
          d_75 = ATgetArgument(c_75, 0);
          e_75 = ATgetArgument(c_75, 1);
          z_74 :
          if(match_cons(e_75, sym_TCons_2))
            {
              f_75 = ATgetArgument(e_75, 0);
              g_75 = ATgetArgument(e_75, 1);
              a_75 :
              if(match_cons(g_75, sym_TNil_0))
                {
                  ATerm j_75 = NULL;
                  if(d_75 != NULL && d_75 != f_75)
                    _fail(f_75);
                  else
                    d_75 = f_75;
                  if(j_75 != NULL && j_75 != h_75)
                    _fail(h_75);
                  else
                    j_75 = h_75;
                  t = not_null(j_75);
                }
              else
                _fail(t);
            }
          else
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
  ATerm e_12 = t;
  if(PushChoice()==0)
    {
      ATerm d_4 (ATerm t)
      {
        ATerm q_75 = NULL;
        q_75 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_75), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm e_4 (ATerm t)
      {
        ATerm o_4 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, o_4);
        return(t);
      }
      ATerm n_4 (ATerm t)
      {
        ATerm h_12 = t;
        if(PushChoice()==0)
          {
            ATerm p_4 (ATerm t)
            {
              ATerm u_4 (ATerm t)
              {
                ATerm n_12 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = n_12;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, u_4, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, p_4);
            PopChoice();
          }
        else
          {
            t = h_12;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, d_4, e_4, n_4);
      PopChoice();
    }
  else
    {
      t = e_12;
      {
        ATerm s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL;
        s_75 = t;
        n_75 :
        if(match_cons(s_75, sym_TCons_2))
          {
            t_75 = ATgetArgument(s_75, 0);
            u_75 = ATgetArgument(s_75, 1);
            o_75 :
            if(match_cons(u_75, sym_TCons_2))
              {
                v_75 = ATgetArgument(u_75, 0);
                w_75 = ATgetArgument(u_75, 1);
                p_75 :
                if(match_cons(w_75, sym_TNil_0))
                  {
                    t = not_null(t_75);
                    {
                      ATerm b_76 (ATerm t)
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
                                  ATerm v_4 (ATerm t)
                                  {
                                    t = not_null(v_75);
                                    return(t);
                                  }
                                  t = HdMember_1(t, v_4);
                                  t = b_76(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = p_12;
                                  t = Cons_2(t, _id, b_76);
                                }
                            }
                          }
                        return(t);
                      }
                      t = b_76(t);
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
ATerm GnNextChangeGraph_3 (ATerm t, ATerm s_44 (ATerm), ATerm t_44 (ATerm), ATerm u_44 (ATerm))
{
  ATerm t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL,f_77 = NULL;
  t_76 = t;
  m_76 :
  if(match_cons(t_76, sym_TCons_2))
    {
      u_76 = ATgetArgument(t_76, 0);
      x_76 = ATgetArgument(t_76, 1);
      n_76 :
      if(match_cons(u_76, sym_Cons_2))
        {
          v_76 = ATgetArgument(u_76, 0);
          w_76 = ATgetArgument(u_76, 1);
          o_76 :
          if(match_cons(x_76, sym_TCons_2))
            {
              y_76 = ATgetArgument(x_76, 0);
              z_76 = ATgetArgument(x_76, 1);
              p_76 :
              if(match_cons(z_76, sym_TCons_2))
                {
                  a_77 = ATgetArgument(z_76, 0);
                  b_77 = ATgetArgument(z_76, 1);
                  q_76 :
                  if(match_cons(b_77, sym_TCons_2))
                    {
                      c_77 = ATgetArgument(b_77, 0);
                      d_77 = ATgetArgument(b_77, 1);
                      r_76 :
                      if(match_cons(d_77, sym_TCons_2))
                        {
                          e_77 = ATgetArgument(d_77, 0);
                          f_77 = ATgetArgument(d_77, 1);
                          s_76 :
                          if(match_cons(f_77, sym_TNil_0))
                            {
                              ATerm m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_77), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = s_44(t);
                              m_77 = t;
                              j_76 :
                              if(match_cons(m_77, sym_TCons_2))
                                {
                                  n_77 = ATgetArgument(m_77, 0);
                                  o_77 = ATgetArgument(m_77, 1);
                                  k_76 :
                                  if(match_cons(o_77, sym_TCons_2))
                                    {
                                      p_77 = ATgetArgument(o_77, 0);
                                      q_77 = ATgetArgument(o_77, 1);
                                      l_76 :
                                      if(match_cons(q_77, sym_TNil_0))
                                        {
                                          ATerm t_77 = NULL;
                                          t = not_null(n_77);
                                          {
                                            ATerm v_77 = NULL;
                                            t = t_44(t);
                                            t_77 = t;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_76), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            {
                                              ATerm x_77 = NULL,z_77 = NULL,b_78 = NULL;
                                              t = diff_0(t);
                                              v_77 = t;
                                              {
                                                ATerm q_12;
                                                q_12 = t;
                                                {
                                                  ATerm y_77 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_76), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  y_77 = t;
                                                  if(x_77 != NULL && x_77 != y_77)
                                                    _fail(y_77);
                                                  else
                                                    x_77 = y_77;
                                                }
                                                t = q_12;
                                                {
                                                  ATerm r_12;
                                                  r_12 = t;
                                                  {
                                                    ATerm a_78 = NULL;
                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_76), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                    t = conc_0(t);
                                                    a_78 = t;
                                                    if(z_77 != NULL && z_77 != a_78)
                                                      _fail(a_78);
                                                    else
                                                      z_77 = a_78;
                                                  }
                                                  t = r_12;
                                                  {
                                                    ATerm c_78 = NULL;
                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_77), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                    t = u_44(t);
                                                    c_78 = t;
                                                    if(b_78 != NULL && b_78 != c_78)
                                                      _fail(c_78);
                                                    else
                                                      b_78 = c_78;
                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_77), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
  ATerm s_78 = NULL,t_78 = NULL,u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL,c_79 = NULL;
  s_78 = t;
  l_78 :
  if(match_cons(s_78, sym_TCons_2))
    {
      t_78 = ATgetArgument(s_78, 0);
      u_78 = ATgetArgument(s_78, 1);
      m_78 :
      if(match_cons(t_78, sym_Nil_0))
        {
          n_78 :
          if(match_cons(u_78, sym_TCons_2))
            {
              v_78 = ATgetArgument(u_78, 0);
              w_78 = ATgetArgument(u_78, 1);
              o_78 :
              if(match_cons(w_78, sym_TCons_2))
                {
                  x_78 = ATgetArgument(w_78, 0);
                  y_78 = ATgetArgument(w_78, 1);
                  p_78 :
                  if(match_cons(y_78, sym_TCons_2))
                    {
                      z_78 = ATgetArgument(y_78, 0);
                      a_79 = ATgetArgument(y_78, 1);
                      q_78 :
                      if(match_cons(a_79, sym_TCons_2))
                        {
                          b_79 = ATgetArgument(a_79, 0);
                          c_79 = ATgetArgument(a_79, 1);
                          r_78 :
                          if(match_cons(c_79, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_79), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm n_79 = NULL,o_79 = NULL,p_79 = NULL,q_79 = NULL,r_79 = NULL,s_79 = NULL,t_79 = NULL;
  n_79 = t;
  j_79 :
  if(match_cons(n_79, sym_TCons_2))
    {
      o_79 = ATgetArgument(n_79, 0);
      p_79 = ATgetArgument(n_79, 1);
      k_79 :
      if(match_cons(p_79, sym_TCons_2))
        {
          q_79 = ATgetArgument(p_79, 0);
          r_79 = ATgetArgument(p_79, 1);
          l_79 :
          if(match_cons(r_79, sym_TCons_2))
            {
              s_79 = ATgetArgument(r_79, 0);
              t_79 = ATgetArgument(r_79, 1);
              m_79 :
              if(match_cons(t_79, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_79), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_79), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_79), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_79), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))))));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm n_53 (ATerm), ATerm o_53 (ATerm))
{
  ATerm y_79 (ATerm t)
  {
    ATerm s_12 = t;
    if(PushChoice()==0)
      {
        t = n_53(t);
        PopChoice();
      }
    else
      {
        t = s_12;
        t = o_53(t);
        t = y_79(t);
      }
    return(t);
  }
  t = y_79(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm q_53 (ATerm), ATerm r_53 (ATerm), ATerm s_53 (ATerm))
{
  t = q_53(t);
  t = while_not_2(t, r_53, s_53);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm b_45 (ATerm), ATerm c_45 (ATerm), ATerm d_45 (ATerm))
{
  ATerm w_4 (ATerm t)
  {
    ATerm t_12 = t;
    if(PushChoice()==0)
      {
        t = GnNextChangeGraph_3(t, b_45, c_45, d_45);
        PopChoice();
      }
    else
      {
        t = t_12;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, w_4);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm e_80 = NULL,f_80 = NULL,g_80 = NULL,h_80 = NULL,i_80 = NULL,j_80 = NULL,k_80 = NULL;
    e_80 = t;
    a_80 :
    if(match_cons(e_80, sym_TCons_2))
      {
        f_80 = ATgetArgument(e_80, 0);
        g_80 = ATgetArgument(e_80, 1);
        b_80 :
        if(match_cons(g_80, sym_TCons_2))
          {
            h_80 = ATgetArgument(g_80, 0);
            i_80 = ATgetArgument(g_80, 1);
            c_80 :
            if(match_cons(i_80, sym_TCons_2))
              {
                j_80 = ATgetArgument(i_80, 0);
                k_80 = ATgetArgument(i_80, 1);
                d_80 :
                if(match_cons(k_80, sym_TNil_0))
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_80), not_null(j_80));
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, svars_arity_0, x_4);
  t = FilterNonMissingDefs_0(t);
  {
    ATerm u_12 = t;
    if(PushChoice()==0)
      {
        t = NoMissingDefs_0(t);
        PopChoice();
      }
    else
      {
        t = u_12;
        t = MissingDefs_0(t);
        t = (ATerm) ATmakeInt(1);
        t = exit_0(t);
      }
  }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_80 = NULL,u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL;
  t_80 = t;
  q_80 :
  if(match_cons(t_80, sym_TCons_2))
    {
      u_80 = ATgetArgument(t_80, 0);
      v_80 = ATgetArgument(t_80, 1);
      r_80 :
      if(match_cons(v_80, sym_TCons_2))
        {
          w_80 = ATgetArgument(v_80, 0);
          x_80 = ATgetArgument(v_80, 1);
          s_80 :
          if(match_cons(x_80, sym_TNil_0))
            {
              ATerm v_12 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(u_80), not_null(w_80));
                  PopChoice();
                }
              else
                {
                  t = v_12;
                  t = SSL_addr(not_null(u_80), not_null(w_80));
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
  ATerm y_4 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, y_4, add_0, z_4);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm a_51 (ATerm))
{
  ATerm e_81 = NULL,f_81 = NULL,g_81 = NULL;
  e_81 = t;
  d_81 :
  if(match_cons(e_81, sym_Cons_2))
    {
      f_81 = ATgetArgument(e_81, 0);
      g_81 = ATgetArgument(e_81, 1);
      t = a_51(t);
      {
        ATerm c_5 (ATerm t)
        {
          ATerm j_81 = NULL;
          j_81 = t;
          if(f_81 != NULL && f_81 != j_81)
            _fail(j_81);
          else
            f_81 = j_81;
          return(t);
        }
        t = fetch_1(t, c_5);
        t = not_null(g_81);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm q_81 = NULL,r_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL;
  q_81 = t;
  n_81 :
  if(match_cons(q_81, sym_TCons_2))
    {
      r_81 = ATgetArgument(q_81, 0);
      s_81 = ATgetArgument(q_81, 1);
      o_81 :
      if(match_cons(s_81, sym_TCons_2))
        {
          t_81 = ATgetArgument(s_81, 0);
          u_81 = ATgetArgument(s_81, 1);
          p_81 :
          if(match_cons(u_81, sym_TNil_0))
            {
              t = not_null(r_81);
              {
                ATerm y_81 (ATerm t)
                {
                  ATerm a_13 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(t_81);
                      PopChoice();
                    }
                  else
                    {
                      t = a_13;
                      {
                        ATerm b_13 = t;
                        if(PushChoice()==0)
                          {
                            ATerm d_5 (ATerm t)
                            {
                              t = not_null(t_81);
                              return(t);
                            }
                            t = HdMember_1(t, d_5);
                            t = y_81(t);
                            PopChoice();
                          }
                        else
                          {
                            t = b_13;
                            t = Cons_2(t, _id, y_81);
                          }
                      }
                    }
                  return(t);
                }
                t = y_81(t);
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
ATerm foldr_3 (ATerm t, ATerm b_50 (ATerm), ATerm c_50 (ATerm), ATerm d_50 (ATerm))
{
  ATerm d_13 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = b_50(t);
      PopChoice();
    }
  else
    {
      t = d_13;
      {
        ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL;
        d_82 = t;
        c_82 :
        if(match_cons(d_82, sym_Cons_2))
          {
            e_82 = ATgetArgument(d_82, 0);
            f_82 = ATgetArgument(d_82, 1);
            {
              ATerm i_82 = NULL,k_82 = NULL;
              ATerm e_13;
              e_13 = t;
              {
                ATerm j_82 = NULL;
                t = not_null(e_82);
                t = d_50(t);
                j_82 = t;
                if(i_82 != NULL && i_82 != j_82)
                  _fail(j_82);
                else
                  i_82 = j_82;
              }
              t = e_13;
              {
                ATerm l_82 = NULL;
                t = not_null(f_82);
                t = foldr_3(t, b_50, c_50, d_50);
                l_82 = t;
                if(k_82 != NULL && k_82 != l_82)
                  _fail(l_82);
                else
                  k_82 = l_82;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = c_50(t);
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
  ATerm e_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    ATerm s_82 = NULL,t_82 = NULL,u_82 = NULL,v_82 = NULL;
    s_82 = t;
    r_82 :
    if(match_cons(s_82, sym_SDef_3))
      {
        t_82 = ATgetArgument(s_82, 0);
        u_82 = ATgetArgument(s_82, 1);
        v_82 = ATgetArgument(s_82, 2);
        {
          ATerm y_82 = NULL;
          ATerm z_82 = NULL;
          t = not_null(u_82);
          t = length_0(t);
          z_82 = t;
          if(y_82 != NULL && y_82 != z_82)
            _fail(z_82);
          else
            y_82 = z_82;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(t_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_82), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0));
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = foldr_3(t, e_5, union_0, g_5);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm e_83 = NULL;
  ATerm g_83 = NULL;
  e_83 = t;
  {
    ATerm h_83 = NULL;
    t = not_null(e_83);
    t = definition_names_0(t);
    h_83 = t;
    if(g_83 != NULL && g_83 != h_83)
      _fail(h_83);
    else
      g_83 = h_83;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_83), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_83), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm g_42 (ATerm))
{
  ATerm n_83 = NULL,o_83 = NULL;
  n_83 = t;
  m_83 :
  if(match_cons(n_83, sym_Strategies_1))
    {
      o_83 = ATgetArgument(n_83, 0);
      {
        ATerm q_83 = NULL;
        t = not_null(o_83);
        t = g_42(t);
        q_83 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(q_83));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm l_44 (ATerm), ATerm m_44 (ATerm))
{
  ATerm y_83 = NULL,z_83 = NULL,a_84 = NULL;
  y_83 = t;
  x_83 :
  if(match_cons(y_83, sym_Cons_2))
    {
      z_83 = ATgetArgument(y_83, 0);
      a_84 = ATgetArgument(y_83, 1);
      {
        ATerm d_84 = NULL;
        t = not_null(z_83);
        {
          ATerm f_84 = NULL;
          t = l_44(t);
          d_84 = t;
          t = not_null(a_84);
          t = m_44(t);
          f_84 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_84), not_null(f_84));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm i_42 (ATerm))
{
  ATerm n_84 = NULL,o_84 = NULL;
  n_84 = t;
  m_84 :
  if(match_cons(n_84, sym_Specification_1))
    {
      o_84 = ATgetArgument(n_84, 0);
      {
        ATerm q_84 = NULL;
        t = not_null(o_84);
        t = i_42(t);
        q_84 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(q_84));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm v_84 = NULL;
  v_84 = t;
  u_84 :
  if(!(match_cons(v_84, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm h_44 (ATerm), ATerm i_44 (ATerm))
{
  ATerm a_85 = NULL,b_85 = NULL,c_85 = NULL;
  a_85 = t;
  z_84 :
  if(match_cons(a_85, sym_TCons_2))
    {
      b_85 = ATgetArgument(a_85, 0);
      c_85 = ATgetArgument(a_85, 1);
      {
        ATerm f_85 = NULL;
        t = not_null(b_85);
        {
          ATerm h_85 = NULL;
          t = h_44(t);
          f_85 = t;
          t = not_null(c_85);
          t = i_44(t);
          h_85 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_85), not_null(h_85));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm o_85 = NULL;
  ATerm f_13;
  f_13 = t;
  {
    ATerm o_5 (ATerm t)
    {
      ATerm p_85 = NULL,q_85 = NULL;
      p_85 = t;
      n_85 :
      if(match_cons(p_85, sym_Program_1))
        {
          q_85 = ATgetArgument(p_85, 0);
          if(o_85 != NULL && o_85 != q_85)
            _fail(q_85);
          else
            o_85 = q_85;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, o_5);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_85), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = f_13;
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
  ATerm x_85 = NULL,y_85 = NULL;
  ATerm p_5 (ATerm t)
  {
    ATerm q_5 (ATerm t)
    {
      ATerm g_13 = t;
      if(PushChoice()==0)
        {
          ATerm s_5 (ATerm t)
          {
            ATerm z_85 = NULL;
            z_85 = t;
            s_85 :
            if(!(match_cons(z_85, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, s_5);
          PopChoice();
          _fail(t);
        }
      else
        t = g_13;
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
          ATerm a_86 = NULL,b_86 = NULL;
          a_86 = t;
          u_85 :
          if(match_cons(a_86, sym_Runtime_1))
            {
              b_86 = ATgetArgument(a_86, 0);
              if(y_85 != NULL && y_85 != b_86)
                _fail(b_86);
              else
                y_85 = b_86;
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
      {
        ATerm w_5 (ATerm t)
        {
          ATerm y_5 (ATerm t)
          {
            ATerm c_86 = NULL,d_86 = NULL;
            c_86 = t;
            w_85 :
            if(match_cons(c_86, sym_Program_1))
              {
                d_86 = ATgetArgument(c_86, 0);
                if(x_85 != NULL && x_85 != d_86)
                  _fail(d_86);
                else
                  x_85 = d_86;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, y_5);
          return(t);
        }
        ATerm x_5 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, w_5, x_5);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_85), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_85), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, p_5);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm k_86 = NULL,l_86 = NULL,m_86 = NULL,n_86 = NULL,o_86 = NULL;
  k_86 = t;
  h_86 :
  if(match_cons(k_86, sym_TCons_2))
    {
      l_86 = ATgetArgument(k_86, 0);
      m_86 = ATgetArgument(k_86, 1);
      i_86 :
      if(match_cons(m_86, sym_TCons_2))
        {
          n_86 = ATgetArgument(m_86, 0);
          o_86 = ATgetArgument(m_86, 1);
          j_86 :
          if(match_cons(o_86, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(l_86), not_null(n_86));
          else
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
  ATerm w_86 = NULL,x_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL;
  w_86 = t;
  t_86 :
  if(match_cons(w_86, sym_TCons_2))
    {
      x_86 = ATgetArgument(w_86, 0);
      y_86 = ATgetArgument(w_86, 1);
      u_86 :
      if(match_cons(y_86, sym_TCons_2))
        {
          z_86 = ATgetArgument(y_86, 0);
          a_87 = ATgetArgument(y_86, 1);
          v_86 :
          if(match_cons(a_87, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(x_86), not_null(z_86));
          else
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
  ATerm i_87 = NULL;
  ATerm o_13;
  o_13 = t;
  {
    ATerm z_5 (ATerm t)
    {
      ATerm p_13 = t;
      if(PushChoice()==0)
        {
          ATerm b_6 (ATerm t)
          {
            ATerm j_87 = NULL,k_87 = NULL;
            j_87 = t;
            f_87 :
            if(match_cons(j_87, sym_Output_1))
              {
                k_87 = ATgetArgument(j_87, 0);
                if(i_87 != NULL && i_87 != k_87)
                  _fail(k_87);
                else
                  i_87 = k_87;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, b_6);
          PopChoice();
        }
      else
        {
          t = p_13;
          {
            ATerm l_87 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            l_87 = t;
            if(i_87 != NULL && i_87 != l_87)
              _fail(l_87);
            else
              i_87 = l_87;
          }
        }
      return(t);
    }
    ATerm a_6 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, z_5, a_6);
  }
  t = o_13;
  {
    ATerm c_6 (ATerm t)
    {
      ATerm d_6 (ATerm t)
      {
        ATerm e_6 (ATerm t)
        {
          t = not_null(i_87);
          return(t);
        }
        t = split_2(t, e_6, _id);
        return(t);
      }
      t = TCons_2(t, d_6, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, c_6);
    {
      ATerm r_13 = t;
      if(PushChoice()==0)
        {
          ATerm f_6 (ATerm t)
          {
            ATerm h_6 (ATerm t)
            {
              ATerm m_87 = NULL;
              m_87 = t;
              h_87 :
              if(!(match_cons(m_87, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, h_6);
            return(t);
          }
          ATerm g_6 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, f_6, g_6);
          PopChoice();
        }
      else
        {
          t = r_13;
          {
            ATerm j_6 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, j_6);
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
ATerm apply_strategy_1 (ATerm t, ATerm h_48 (ATerm))
{
  ATerm u_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL;
  ATerm s_13;
  s_13 = t;
  t = dtime_0(t);
  t = s_13;
  t = h_48(t);
  {
    ATerm t_13;
    t_13 = t;
    {
      ATerm v_87 = NULL;
      t = dtime_0(t);
      v_87 = t;
      if(u_87 != NULL && u_87 != v_87)
        _fail(v_87);
      else
        u_87 = v_87;
    }
    t = t_13;
    w_87 = t;
    r_87 :
    if(match_cons(w_87, sym_TCons_2))
      {
        x_87 = ATgetArgument(w_87, 0);
        y_87 = ATgetArgument(w_87, 1);
        s_87 :
        if(match_cons(y_87, sym_TCons_2))
          {
            z_87 = ATgetArgument(y_87, 0);
            a_88 = ATgetArgument(y_87, 1);
            t_87 :
            if(match_cons(a_88, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(u_87)), not_null(x_87)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_87), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm g_88 = NULL;
  g_88 = t;
  t = SSL_ReadFromFile(not_null(g_88));
  return(t);
}
ATerm split_2 (ATerm t, ATerm m_59 (ATerm), ATerm n_59 (ATerm))
{
  ATerm m_88 = NULL;
  ATerm o_88 = NULL,q_88 = NULL;
  m_88 = t;
  {
    ATerm u_13;
    u_13 = t;
    {
      ATerm p_88 = NULL;
      t = not_null(m_88);
      t = m_59(t);
      p_88 = t;
      if(o_88 != NULL && o_88 != p_88)
        _fail(p_88);
      else
        o_88 = p_88;
    }
    t = u_13;
    {
      ATerm r_88 = NULL;
      t = not_null(m_88);
      t = n_59(t);
      r_88 = t;
      if(q_88 != NULL && q_88 != r_88)
        _fail(r_88);
      else
        q_88 = r_88;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_88), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_88), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm y_88 = NULL;
  ATerm w_13;
  w_13 = t;
  {
    ATerm a_14 = t;
    if(PushChoice()==0)
      {
        ATerm k_6 (ATerm t)
        {
          ATerm z_88 = NULL,a_89 = NULL;
          z_88 = t;
          w_88 :
          if(match_cons(z_88, sym_Input_1))
            {
              a_89 = ATgetArgument(z_88, 0);
              if(y_88 != NULL && y_88 != a_89)
                _fail(a_89);
              else
                y_88 = a_89;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, k_6);
        PopChoice();
      }
    else
      {
        t = a_14;
        {
          ATerm b_89 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          b_89 = t;
          if(y_88 != NULL && y_88 != b_89)
            _fail(b_89);
          else
            y_88 = b_89;
        }
      }
  }
  t = w_13;
  {
    ATerm m_6 (ATerm t)
    {
      t = not_null(y_88);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, m_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm f_89 = NULL;
  f_89 = t;
  e_89 :
  if(!(match_cons(f_89, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_48 (ATerm))
{
  ATerm n_6 (ATerm t)
  {
    ATerm b_14 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = b_14;
        {
          ATerm c_14 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = c_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, n_6);
  t = g_48(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm h_89 = NULL;
  h_89 = t;
  t = SSL_table_create(not_null(h_89));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm l_89 = NULL;
  l_89 = t;
  {
    ATerm f_14;
    f_14 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_89), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = f_14;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm t_89 = NULL,u_89 = NULL,v_89 = NULL,w_89 = NULL,x_89 = NULL;
  x_89 = t;
  r_89 :
  if(match_cons(x_89, sym_Cons_2))
    {
      t_89 = ATgetArgument(x_89, 0);
      u_89 = ATgetArgument(x_89, 1);
      s_89 :
      if(match_cons(u_89, sym_Cons_2))
        {
          v_89 = ATgetArgument(u_89, 0);
          w_89 = ATgetArgument(u_89, 1);
          {
            ATerm b_90 = NULL;
            t = not_null(t_89);
            t = d_0(t);
            {
              ATerm c_90 = NULL;
              t = not_null(v_89);
              t = e_0(t);
              c_90 = t;
              if(b_90 != NULL && b_90 != c_90)
                _fail(c_90);
              else
                b_90 = c_90;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_90), not_null(w_89));
            }
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(x_89, "register-usage-info"))
        t = register_usage_1(t, f_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm q_14 = t;
  if(PushChoice()==0)
    {
      ATerm o_6 (ATerm t)
      {
        ATerm r_90 = NULL;
        r_90 = t;
        g_90 :
        if(!(match_string(r_90, "-S")))
          {
            if(!(match_string(r_90, "--silent")))
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
      t = q_14;
      {
        ATerm r_14 = t;
        if(PushChoice()==0)
          {
            ATerm r_6 (ATerm t)
            {
              ATerm s_90 = NULL;
              s_90 = t;
              h_90 :
              if(!(match_string(s_90, "--verbose")))
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
            t = r_14;
            {
              ATerm t_14 = t;
              if(PushChoice()==0)
                {
                  ATerm u_6 (ATerm t)
                  {
                    ATerm t_90 = NULL;
                    t_90 = t;
                    i_90 :
                    if(!(match_string(t_90, "-v")))
                      {
                        if(!(match_string(t_90, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm v_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm a_7 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, u_6, v_6, a_7);
                  PopChoice();
                }
              else
                {
                  t = t_14;
                  {
                    ATerm u_14 = t;
                    if(PushChoice()==0)
                      {
                        ATerm b_7 (ATerm t)
                        {
                          ATerm u_90 = NULL;
                          u_90 = t;
                          j_90 :
                          if(!(match_string(u_90, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm f_7 (ATerm t)
                        {
                          ATerm v_90 = NULL;
                          v_90 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(v_90));
                          return(t);
                        }
                        ATerm g_7 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, b_7, f_7, g_7);
                        PopChoice();
                      }
                    else
                      {
                        t = u_14;
                        {
                          ATerm v_14 = t;
                          if(PushChoice()==0)
                            {
                              ATerm h_7 (ATerm t)
                              {
                                ATerm x_90 = NULL;
                                x_90 = t;
                                l_90 :
                                if(!(match_string(x_90, "-i")))
                                  {
                                    if(!(match_string(x_90, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm i_7 (ATerm t)
                              {
                                ATerm y_90 = NULL;
                                y_90 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_90));
                                return(t);
                              }
                              ATerm j_7 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, h_7, i_7, j_7);
                              PopChoice();
                            }
                          else
                            {
                              t = v_14;
                              {
                                ATerm w_14 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm k_7 (ATerm t)
                                    {
                                      ATerm a_91 = NULL;
                                      a_91 = t;
                                      n_90 :
                                      if(!(match_string(a_91, "-o")))
                                        {
                                          if(!(match_string(a_91, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm l_7 (ATerm t)
                                    {
                                      ATerm b_91 = NULL;
                                      b_91 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_91));
                                      return(t);
                                    }
                                    ATerm m_7 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, k_7, l_7, m_7);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = w_14;
                                    {
                                      ATerm h_15 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm n_7 (ATerm t)
                                          {
                                            ATerm d_91 = NULL;
                                            d_91 = t;
                                            p_90 :
                                            if(!(match_string(d_91, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm r_7 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm s_7 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, n_7, r_7, s_7);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = h_15;
                                          {
                                            ATerm t_7 (ATerm t)
                                            {
                                              ATerm e_91 = NULL;
                                              e_91 = t;
                                              q_90 :
                                              if(!(match_string(e_91, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm u_7 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm v_7 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, t_7, u_7, v_7);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm j_91 = NULL;
  j_91 = t;
  t = SSL_table_destroy(not_null(j_91));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm n_91 = NULL;
  n_91 = t;
  t = SSL_exit(not_null(n_91));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm r_91 = NULL;
  r_91 = t;
  t = SSL_implode_string(not_null(r_91));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm c_66 (ATerm))
{
  ATerm u_91 (ATerm t)
  {
    ATerm i_15 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, u_91);
        PopChoice();
      }
    else
      {
        t = i_15;
        t = Nil_0(t);
        t = c_66(t);
      }
    return(t);
  }
  t = u_91(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_15 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = j_15;
      {
        ATerm x_91 = NULL,y_91 = NULL,z_91 = NULL;
        x_91 = t;
        w_91 :
        if(match_cons(x_91, sym_Cons_2))
          {
            y_91 = ATgetArgument(x_91, 0);
            z_91 = ATgetArgument(x_91, 1);
            t = not_null(y_91);
            {
              ATerm w_7 (ATerm t)
              {
                t = not_null(z_91);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, w_7);
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
  ATerm f_92 = NULL;
  f_92 = t;
  t = SSL_explode_string(not_null(f_92));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm n_46 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_65 (ATerm))
{
  ATerm j_92 (ATerm t)
  {
    ATerm k_15 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = k_15;
        t = Cons_2(t, o_65, j_92);
      }
    return(t);
  }
  t = j_92(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm p_92 = NULL,q_92 = NULL,r_92 = NULL,s_92 = NULL,t_92 = NULL;
  p_92 = t;
  l_92 :
  if(match_cons(p_92, sym_TCons_2))
    {
      q_92 = ATgetArgument(p_92, 0);
      r_92 = ATgetArgument(p_92, 1);
      m_92 :
      if(match_cons(q_92, sym_Nil_0))
        {
          n_92 :
          if(match_cons(r_92, sym_TCons_2))
            {
              s_92 = ATgetArgument(r_92, 0);
              t_92 = ATgetArgument(r_92, 1);
              o_92 :
              if(match_cons(t_92, sym_TNil_0))
                t = not_null(s_92);
              else
                _fail(t);
            }
          else
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
  ATerm c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL,g_93 = NULL,h_93 = NULL,i_93 = NULL;
  c_93 = t;
  y_92 :
  if(match_cons(c_93, sym_TCons_2))
    {
      d_93 = ATgetArgument(c_93, 0);
      g_93 = ATgetArgument(c_93, 1);
      z_92 :
      if(match_cons(d_93, sym_Cons_2))
        {
          e_93 = ATgetArgument(d_93, 0);
          f_93 = ATgetArgument(d_93, 1);
          a_93 :
          if(match_cons(g_93, sym_TCons_2))
            {
              h_93 = ATgetArgument(g_93, 0);
              i_93 = ATgetArgument(g_93, 1);
              b_93 :
              if(match_cons(i_93, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_93), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_93), not_null(h_93)), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm w_52 (ATerm), ATerm x_52 (ATerm))
{
  ATerm n_93 (ATerm t)
  {
    ATerm l_15 = t;
    if(PushChoice()==0)
      {
        t = w_52(t);
        t = n_93(t);
        PopChoice();
      }
    else
      {
        t = l_15;
        t = x_52(t);
      }
    return(t);
  }
  t = n_93(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm z_52 (ATerm))
{
  t = repeat_2(t, z_52, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm p_93 = NULL;
  p_93 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_93), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm m_46 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm o_39 (ATerm))
{
  ATerm w_93 = NULL,x_93 = NULL;
  w_93 = t;
  v_93 :
  if(match_cons(w_93, sym_Program_1))
    {
      x_93 = ATgetArgument(w_93, 0);
      {
        ATerm z_93 = NULL;
        t = not_null(x_93);
        t = o_39(t);
        z_93 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_93));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm h_94 = NULL;
  ATerm x_7 (ATerm t)
  {
    ATerm z_7 (ATerm t)
    {
      ATerm i_94 = NULL;
      i_94 = t;
      if(h_94 != NULL && h_94 != i_94)
        _fail(i_94);
      else
        h_94 = i_94;
      return(t);
    }
    t = Program_1(t, z_7);
    return(t);
  }
  t = option_defined_1(t, x_7);
  {
    ATerm a_8 (ATerm t)
    {
      ATerm j_94 = NULL;
      ATerm k_94 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm c_8 (ATerm t)
        {
          t = not_null(h_94);
          return(t);
        }
        t = short_description_1(t, c_8);
        t = concat_strings_0(t);
        k_94 = t;
        if(j_94 != NULL && j_94 != k_94)
          _fail(k_94);
        else
          j_94 = k_94;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_94), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, a_8);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm e_8 (ATerm t)
      {
        ATerm l_94 = NULL;
        l_94 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_94), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, e_8);
      {
        ATerm f_8 (ATerm t)
        {
          ATerm n_94 = NULL;
          ATerm p_94 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm g_8 (ATerm t)
            {
              t = not_null(h_94);
              return(t);
            }
            t = long_description_1(t, g_8);
            t = concat_strings_0(t);
            p_94 = t;
            if(n_94 != NULL && n_94 != p_94)
              _fail(p_94);
            else
              n_94 = p_94;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_94), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, f_8);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
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
              ATerm m_15;
              m_15 = t;
              t = SSL_printnl(not_null(z_94), not_null(b_95));
              t = m_15;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm p_39 (ATerm))
{
  ATerm j_95 = NULL,k_95 = NULL;
  j_95 = t;
  i_95 :
  if(match_cons(j_95, sym_Undefined_1))
    {
      k_95 = ATgetArgument(j_95, 0);
      {
        ATerm n_95 = NULL;
        t = not_null(k_95);
        t = p_39(t);
        n_95 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_95));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm w_65 (ATerm))
{
  ATerm r_95 (ATerm t)
  {
    ATerm n_15 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, w_65, _id);
        PopChoice();
      }
    else
      {
        t = n_15;
        t = Cons_2(t, _id, r_95);
      }
    return(t);
  }
  t = r_95(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_47 (ATerm))
{
  t = fetch_1(t, l_47);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_95 = NULL;
  t_95 = t;
  s_95 :
  if(!(match_cons(t_95, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_60 (ATerm))
{
  ATerm o_15 = t;
  if(PushChoice()==0)
    {
      t = e_60(t);
      PopChoice();
    }
  else
    t = o_15;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm y_95 = NULL,z_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL;
  y_95 = t;
  v_95 :
  if(match_cons(y_95, sym_TCons_2))
    {
      z_95 = ATgetArgument(y_95, 0);
      a_96 = ATgetArgument(y_95, 1);
      w_95 :
      if(match_cons(a_96, sym_TCons_2))
        {
          b_96 = ATgetArgument(a_96, 0);
          c_96 = ATgetArgument(a_96, 1);
          x_95 :
          if(match_cons(c_96, sym_TNil_0))
            t = SSL_table_get(not_null(z_95), not_null(b_96));
          else
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
  ATerm m_96 = NULL,n_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL,r_96 = NULL,s_96 = NULL;
  m_96 = t;
  i_96 :
  if(match_cons(m_96, sym_TCons_2))
    {
      n_96 = ATgetArgument(m_96, 0);
      o_96 = ATgetArgument(m_96, 1);
      j_96 :
      if(match_cons(o_96, sym_TCons_2))
        {
          p_96 = ATgetArgument(o_96, 0);
          q_96 = ATgetArgument(o_96, 1);
          k_96 :
          if(match_cons(q_96, sym_TCons_2))
            {
              r_96 = ATgetArgument(q_96, 0);
              s_96 = ATgetArgument(q_96, 1);
              l_96 :
              if(match_cons(s_96, sym_TNil_0))
                {
                  ATerm p_15;
                  p_15 = t;
                  {
                    ATerm w_96 = NULL;
                    ATerm x_96 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_96), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_96), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm q_15 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = q_15;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      x_96 = t;
                      if(w_96 != NULL && w_96 != x_96)
                        _fail(x_96);
                      else
                        w_96 = x_96;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_96), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_96), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_96), not_null(w_96)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = p_15;
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm r_46 (ATerm))
{
  ATerm b_97 = NULL;
  ATerm c_97 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = r_46(t);
  c_97 = t;
  if(b_97 != NULL && b_97 != c_97)
    _fail(c_97);
  else
    b_97 = c_97;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_97), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm i_97 = NULL,j_97 = NULL,k_97 = NULL;
  k_97 = t;
  h_97 :
  if(match_cons(k_97, sym_Cons_2))
    {
      i_97 = ATgetArgument(k_97, 0);
      j_97 = ATgetArgument(k_97, 1);
      {
        ATerm n_97 = NULL;
        t = not_null(i_97);
        t = a_0(t);
        {
          ATerm o_97 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = b_0(t);
          o_97 = t;
          if(n_97 != NULL && n_97 != o_97)
            _fail(o_97);
          else
            n_97 = o_97;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_97), not_null(j_97));
        }
      }
    }
  else
    {
      if(match_string(k_97, "register-usage-info"))
        t = register_usage_1(t, c_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm h_8 (ATerm t)
  {
    ATerm t_97 = NULL;
    t_97 = t;
    s_97 :
    if(!(match_string(t_97, "--help")))
      {
        if(!(match_string(t_97, "-h")))
          {
            if(!(match_string(t_97, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm i_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm j_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, h_8, i_8, j_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm w_97 = NULL,x_97 = NULL,y_97 = NULL;
  w_97 = t;
  v_97 :
  if(match_cons(w_97, sym_Cons_2))
    {
      x_97 = ATgetArgument(w_97, 0);
      y_97 = ATgetArgument(w_97, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(x_97)), not_null(y_97));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm p_46 (ATerm))
{
  ATerm r_15;
  r_15 = t;
  {
    ATerm k_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = p_46(t);
      return(t);
    }
    t = try_1(t, k_8);
  }
  t = r_15;
  {
    ATerm l_8 (ATerm t)
    {
      ATerm d_98 = NULL;
      d_98 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(d_98));
      return(t);
    }
    ATerm m_8 (ATerm t)
    {
      ATerm s_15 = t;
      if(PushChoice()==0)
        {
          ATerm t_15 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = t_15;
              t = p_46(t);
              t = Cons_2(t, _id, m_8);
            }
          PopChoice();
        }
      else
        {
          t = s_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, l_8, m_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_98 = NULL,n_98 = NULL,o_98 = NULL;
  ATerm w_15;
  w_15 = t;
  {
    ATerm p_98 = NULL,q_98 = NULL,r_98 = NULL,s_98 = NULL,t_98 = NULL,u_98 = NULL,v_98 = NULL;
    p_98 = t;
    i_98 :
    if(match_cons(p_98, sym_TCons_2))
      {
        q_98 = ATgetArgument(p_98, 0);
        r_98 = ATgetArgument(p_98, 1);
        j_98 :
        if(match_cons(r_98, sym_TCons_2))
          {
            s_98 = ATgetArgument(r_98, 0);
            t_98 = ATgetArgument(r_98, 1);
            k_98 :
            if(match_cons(t_98, sym_TCons_2))
              {
                u_98 = ATgetArgument(t_98, 0);
                v_98 = ATgetArgument(t_98, 1);
                l_98 :
                if(match_cons(v_98, sym_TNil_0))
                  {
                    if(m_98 != NULL && m_98 != q_98)
                      _fail(q_98);
                    else
                      m_98 = q_98;
                    if(n_98 != NULL && n_98 != s_98)
                      _fail(s_98);
                    else
                      n_98 = s_98;
                    if(o_98 != NULL && o_98 != u_98)
                      _fail(u_98);
                    else
                      o_98 = u_98;
                    t = SSL_table_put(not_null(m_98), not_null(n_98), not_null(o_98));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = w_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_46 (ATerm))
{
  ATerm y_98 = NULL;
  ATerm x_15;
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = x_15;
  {
    ATerm n_8 (ATerm t)
    {
      ATerm y_15 = t;
      if(PushChoice()==0)
        {
          t = o_46(t);
          PopChoice();
        }
      else
        {
          t = y_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_8);
    {
      ATerm s_8 (ATerm t)
      {
        ATerm z_15 = t;
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
            t = z_15;
            {
              ATerm t_8 (ATerm t)
              {
                ATerm v_8 (ATerm t)
                {
                  ATerm z_98 = NULL;
                  z_98 = t;
                  if(y_98 != NULL && y_98 != z_98)
                    _fail(z_98);
                  else
                    y_98 = z_98;
                  return(t);
                }
                t = Undefined_1(t, v_8);
                return(t);
              }
              t = option_defined_1(t, t_8);
              {
                ATerm a_16;
                a_16 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_98), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = a_16;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, s_8);
      {
        ATerm b_16;
        b_16 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = b_16;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_47 (ATerm), ATerm w_47 (ATerm), ATerm x_47 (ATerm))
{
  ATerm x_8 (ATerm t)
  {
    ATerm c_16 = t;
    if(PushChoice()==0)
      {
        t = w_47(t);
        PopChoice();
      }
    else
      {
        t = c_16;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, x_8);
  t = store_options_0(t);
  {
    ATerm d_16 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, x_47);
        PopChoice();
      }
    else
      {
        t = d_16;
        {
          ATerm e_16 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, v_47);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = e_16;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_47 (ATerm), ATerm r_47 (ATerm))
{
  t = iowrap_3(t, q_47, r_47, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm n_47 (ATerm))
{
  ATerm y_8 (ATerm t)
  {
    ATerm z_8 (ATerm t)
    {
      t = TCons_2(t, n_47, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, z_8);
    return(t);
  }
  t = iowrap_2(t, y_8, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm a_9 (ATerm t)
  {
    ATerm b_9 (ATerm t)
    {
      ATerm c_9 (ATerm t)
      {
        ATerm h_9 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
          return(t);
        }
        t = Cons_2(t, h_9, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, c_9);
      return(t);
    }
    t = Specification_1(t, b_9);
    return(t);
  }
  t = iowrap_1(t, a_9);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_all_0(t);
  return(t);
}
