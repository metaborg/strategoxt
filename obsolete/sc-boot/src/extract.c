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
ATerm filter_1 (ATerm, ATerm f_56 (ATerm));
ATerm FilterNonMissingDefs_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm q_44 (ATerm), ATerm r_44 (ATerm));
ATerm Let_2 (ATerm, ATerm s_44 (ATerm), ATerm t_44 (ATerm));
ATerm sboundin_3 (ATerm, ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm l_68 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm p_58 (ATerm), ATerm q_58 (ATerm), ATerm r_58 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm f_58 (ATerm), ATerm g_58 (ATerm));
ATerm diff_1 (ATerm, ATerm k_58 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm p_54 (ATerm), ATerm q_54 (ATerm), ATerm r_54 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm s_54 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm x_56 (ATerm), ATerm y_56 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm m_67 (ATerm), ATerm n_67 (ATerm));
ATerm alltd_1 (ATerm, ATerm m_66 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm o_67 (ATerm), ATerm p_67 (ATerm));
ATerm substitute_1 (ATerm, ATerm q_67 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm NonOverloadedDef_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm z_56 (ATerm), ATerm a_57 (ATerm), ATerm b_57 (ATerm));
ATerm length_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm u_44 (ATerm), ATerm v_44 (ATerm), ATerm w_44 (ATerm));
ATerm partition_1 (ATerm, ATerm n_56 (ATerm));
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
ATerm App_2 (ATerm, ATerm q_42 (ATerm), ATerm r_42 (ATerm));
ATerm Con_3 (ATerm, ATerm n_42 (ATerm), ATerm o_42 (ATerm), ATerm p_42 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm u_45 (ATerm), ATerm v_45 (ATerm));
ATerm oncetd_1 (ATerm, ATerm y_65 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm i_64 (ATerm));
ATerm desugar_0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm k_61 (ATerm));
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm j_60 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm new_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm p_57 (ATerm));
ATerm add_0 (ATerm);
ATerm MkDistApplication_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm e_58 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm b_60 (ATerm), ATerm c_60 (ATerm), ATerm d_60 (ATerm), ATerm e_60 (ATerm));
ATerm zip_1 (ATerm, ATerm g_60 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm o_46 (ATerm), ATerm p_46 (ATerm), ATerm q_46 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm o_52 (ATerm), ATerm p_52 (ATerm));
ATerm for_3 (ATerm, ATerm r_52 (ATerm), ATerm s_52 (ATerm), ATerm t_52 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm x_46 (ATerm), ATerm y_46 (ATerm), ATerm z_46 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm y_43 (ATerm));
ATerm Cons_2 (ATerm, ATerm d_46 (ATerm), ATerm e_46 (ATerm));
ATerm Specification_1 (ATerm, ATerm a_44 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm z_45 (ATerm), ATerm a_46 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm d_50 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm f_63 (ATerm), ATerm g_63 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm c_50 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_62 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm j_48 (ATerm));
ATerm map_1 (ATerm, ATerm r_61 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm x_51 (ATerm), ATerm y_51 (ATerm));
ATerm repeat_1 (ATerm, ATerm a_52 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm i_48 (ATerm));
ATerm Program_1 (ATerm, ATerm g_41 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm h_41 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_61 (ATerm));
ATerm option_defined_1 (ATerm, ATerm h_49 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_63 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm n_48 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm l_48 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm k_48 (ATerm));
ATerm iowrap_3 (ATerm, ATerm r_49 (ATerm), ATerm s_49 (ATerm), ATerm t_49 (ATerm));
ATerm iowrap_2 (ATerm, ATerm m_49 (ATerm), ATerm n_49 (ATerm));
ATerm iowrap_1 (ATerm, ATerm j_49 (ATerm));
ATerm extract_0 (ATerm);
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
  ATerm g_9;
  g_9 = t;
  {
    ATerm g_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, g_0, _id);
    t = printnl_0(t);
  }
  t = g_9;
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
                      ATerm h_9 = t;
                      if(PushChoice()==0)
                        {
                          t = MissingDefMod_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = h_9;
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
ATerm filter_1 (ATerm t, ATerm f_56 (ATerm))
{
  ATerm i_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = i_9;
      {
        ATerm j_9 = t;
        if(PushChoice()==0)
          {
            ATerm i_0 (ATerm t)
            {
              t = filter_1(t, f_56);
              return(t);
            }
            t = Cons_2(t, f_56, i_0);
            PopChoice();
          }
        else
          {
            t = j_9;
            {
              ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
              r_4 = t;
              q_4 :
              if(match_cons(r_4, sym_Cons_2))
                {
                  s_4 = ATgetArgument(r_4, 0);
                  t_4 = ATgetArgument(r_4, 1);
                  t = not_null(t_4);
                  t = filter_1(t, f_56);
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
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL;
  h_5 = t;
  e_5 :
  if(match_cons(h_5, sym_TCons_2))
    {
      i_5 = ATgetArgument(h_5, 0);
      j_5 = ATgetArgument(h_5, 1);
      f_5 :
      if(match_cons(j_5, sym_TCons_2))
        {
          k_5 = ATgetArgument(j_5, 0);
          l_5 = ATgetArgument(j_5, 1);
          g_5 :
          if(match_cons(l_5, sym_TNil_0))
            {
              ATerm x_5 = NULL;
              t = not_null(k_5);
              {
                ATerm j_0 (ATerm t)
                {
                  ATerm k_9 = t;
                  if(PushChoice()==0)
                    {
                      ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL;
                      o_5 = t;
                      a_5 :
                      if(match_cons(o_5, sym_TCons_2))
                        {
                          p_5 = ATgetArgument(o_5, 0);
                          q_5 = ATgetArgument(o_5, 1);
                          b_5 :
                          if(match_cons(q_5, sym_TCons_2))
                            {
                              r_5 = ATgetArgument(q_5, 0);
                              s_5 = ATgetArgument(q_5, 1);
                              c_5 :
                              if(match_cons(s_5, sym_TNil_0))
                                {
                                  t = not_null(i_5);
                                  {
                                    ATerm k_0 (ATerm t)
                                    {
                                      ATerm l_0 (ATerm t)
                                      {
                                        ATerm v_5 = NULL;
                                        v_5 = t;
                                        if(p_5 != NULL && p_5 != v_5)
                                          _fail(v_5);
                                        else
                                          p_5 = v_5;
                                        return(t);
                                      }
                                      ATerm m_0 (ATerm t)
                                      {
                                        ATerm l_9 = t;
                                        if(PushChoice()==0)
                                          {
                                            ATerm w_5 = NULL;
                                            t = length_0(t);
                                            w_5 = t;
                                            if(r_5 != NULL && r_5 != w_5)
                                              _fail(w_5);
                                            else
                                              r_5 = w_5;
                                            PopChoice();
                                          }
                                        else
                                          {
                                            t = l_9;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_5), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                    t = k_9;
                  return(t);
                }
                t = filter_1(t, j_0);
                x_5 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_5), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_5), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm Rec_2 (ATerm t, ATerm q_44 (ATerm), ATerm r_44 (ATerm))
{
  ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL;
  i_6 = t;
  h_6 :
  if(match_cons(i_6, sym_Rec_2))
    {
      j_6 = ATgetArgument(i_6, 0);
      k_6 = ATgetArgument(i_6, 1);
      {
        ATerm n_6 = NULL;
        t = not_null(j_6);
        {
          ATerm p_6 = NULL;
          t = q_44(t);
          n_6 = t;
          t = not_null(k_6);
          t = r_44(t);
          p_6 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(n_6), not_null(p_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm s_44 (ATerm), ATerm t_44 (ATerm))
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL;
  y_6 = t;
  x_6 :
  if(match_cons(y_6, sym_Let_2))
    {
      z_6 = ATgetArgument(y_6, 0);
      a_7 = ATgetArgument(y_6, 1);
      {
        ATerm d_7 = NULL;
        t = not_null(z_6);
        {
          ATerm f_7 = NULL;
          t = s_44(t);
          d_7 = t;
          t = not_null(a_7);
          t = t_44(t);
          f_7 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(d_7), not_null(f_7));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm l_68 (ATerm))
{
  ATerm m_9 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, j_68, j_68);
      PopChoice();
    }
  else
    {
      t = m_9;
      {
        ATerm n_9 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, l_68, l_68, j_68);
            PopChoice();
          }
        else
          {
            t = n_9;
            t = Rec_2(t, l_68, j_68);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL;
  m_7 = t;
  l_7 :
  if(match_cons(m_7, sym_Rec_2))
    {
      n_7 = ATgetArgument(m_7, 0);
      o_7 = ATgetArgument(m_7, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_7), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
  u_10 = t;
  t_10 :
  if(match_cons(u_10, sym_SDef_3))
    {
      v_10 = ATgetArgument(u_10, 0);
      w_10 = ATgetArgument(u_10, 1);
      x_10 = ATgetArgument(u_10, 2);
      t = not_null(w_10);
      {
        ATerm n_0 (ATerm t)
        {
          ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
          b_11 = t;
          s_10 :
          if(match_cons(b_11, sym_VarDec_2))
            {
              c_11 = ATgetArgument(b_11, 0);
              d_11 = ATgetArgument(b_11, 1);
              t = not_null(c_11);
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
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym_Let_2))
    {
      p_11 = ATgetArgument(o_11, 0);
      q_11 = ATgetArgument(o_11, 1);
      t = not_null(p_11);
      {
        ATerm o_0 (ATerm t)
        {
          ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL;
          n_12 = t;
          m_11 :
          if(match_cons(n_12, sym_SDef_3))
            {
              o_12 = ATgetArgument(n_12, 0);
              p_12 = ATgetArgument(n_12, 1);
              q_12 = ATgetArgument(n_12, 2);
              t = not_null(o_12);
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
ATerm union_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL;
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
          o_13 = ATgetArgument(m_13, 1);
          j_13 :
          if(match_cons(o_13, sym_TNil_0))
            {
              t = not_null(l_13);
              {
                ATerm s_13 (ATerm t)
                {
                  ATerm o_9 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(n_13);
                      PopChoice();
                    }
                  else
                    {
                      t = o_9;
                      {
                        ATerm p_9 = t;
                        if(PushChoice()==0)
                          {
                            ATerm p_0 (ATerm t)
                            {
                              t = not_null(n_13);
                              return(t);
                            }
                            t = HdMember_1(t, p_0);
                            t = s_13(t);
                            PopChoice();
                          }
                        else
                          {
                            t = p_9;
                            t = Cons_2(t, _id, s_13);
                          }
                      }
                    }
                  return(t);
                }
                t = s_13(t);
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
ATerm crush_3 (ATerm t, ATerm p_58 (ATerm), ATerm q_58 (ATerm), ATerm r_58 (ATerm))
{
  ATerm g_14 = NULL;
  ATerm i_14 = NULL;
  g_14 = t;
  {
    ATerm j_14 = NULL;
    ATerm l_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
    t = not_null(g_14);
    j_14 = t;
    t = SSL_explode_term(not_null(j_14));
    l_14 = t;
    d_14 :
    if(match_cons(l_14, sym_TCons_2))
      {
        p_14 = ATgetArgument(l_14, 0);
        q_14 = ATgetArgument(l_14, 1);
        e_14 :
        if(match_cons(q_14, sym_TCons_2))
          {
            r_14 = ATgetArgument(q_14, 0);
            s_14 = ATgetArgument(q_14, 1);
            f_14 :
            if(match_cons(s_14, sym_TNil_0))
              {
                if(i_14 != NULL && i_14 != r_14)
                  _fail(r_14);
                else
                  i_14 = r_14;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(i_14);
    t = foldr_3(t, p_58, q_58, r_58);
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm f_58 (ATerm), ATerm g_58 (ATerm))
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
  z_14 = t;
  y_14 :
  if(match_cons(z_14, sym_Cons_2))
    {
      a_15 = ATgetArgument(z_14, 0);
      b_15 = ATgetArgument(z_14, 1);
      t = g_58(t);
      {
        ATerm q_0 (ATerm t)
        {
          ATerm e_15 = NULL;
          e_15 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_15), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_15), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = f_58(t);
          return(t);
        }
        t = fetch_1(t, q_0);
        t = not_null(b_15);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_1 (ATerm t, ATerm k_58 (ATerm))
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
  n_15 = t;
  k_15 :
  if(match_cons(n_15, sym_TCons_2))
    {
      o_15 = ATgetArgument(n_15, 0);
      p_15 = ATgetArgument(n_15, 1);
      l_15 :
      if(match_cons(p_15, sym_TCons_2))
        {
          q_15 = ATgetArgument(p_15, 0);
          r_15 = ATgetArgument(p_15, 1);
          m_15 :
          if(match_cons(r_15, sym_TNil_0))
            {
              t = not_null(o_15);
              {
                ATerm v_15 (ATerm t)
                {
                  ATerm q_9 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = q_9;
                      {
                        ATerm r_9 = t;
                        if(PushChoice()==0)
                          {
                            ATerm r_0 (ATerm t)
                            {
                              t = not_null(q_15);
                              return(t);
                            }
                            t = HdMember_p__2(t, k_58, r_0);
                            t = v_15(t);
                            PopChoice();
                          }
                        else
                          {
                            t = r_9;
                            t = Cons_2(t, _id, v_15);
                          }
                      }
                    }
                  return(t);
                }
                t = v_15(t);
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
ATerm free_vars2_4 (ATerm t, ATerm p_54 (ATerm), ATerm q_54 (ATerm), ATerm r_54 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm s_54 (ATerm))
{
  ATerm z_15 (ATerm t)
  {
    ATerm s_0 (ATerm t)
    {
      ATerm s_9 = t;
      if(PushChoice()==0)
        {
          t = p_54(t);
          PopChoice();
        }
      else
        {
          t = s_9;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      return(t);
    }
    ATerm t_0 (ATerm t)
    {
      ATerm t_9 = t;
      if(PushChoice()==0)
        {
          ATerm x_15 = NULL;
          ATerm u_9;
          u_9 = t;
          {
            ATerm y_15 = NULL;
            t = q_54(t);
            y_15 = t;
            if(x_15 != NULL && x_15 != y_15)
              _fail(y_15);
            else
              x_15 = y_15;
          }
          t = u_9;
          {
            ATerm u_0 (ATerm t)
            {
              ATerm w_0 (ATerm t)
              {
                t = not_null(x_15);
                return(t);
              }
              t = split_2(t, z_15, w_0);
              t = diff_1(t, s_54);
              return(t);
            }
            ATerm v_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = r_54(t, u_0, z_15, v_0);
            {
              ATerm x_0 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(sym_Nil_0);
                return(t);
              }
              t = crush_3(t, x_0, union_0, _id);
            }
          }
          PopChoice();
        }
      else
        {
          t = t_9;
          {
            ATerm y_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = crush_3(t, y_0, union_0, z_15);
          }
        }
      return(t);
    }
    t = split_2(t, s_0, t_0);
    t = union_0(t);
    return(t);
  }
  t = z_15(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
    j_17 = t;
    m_16 :
    if(match_cons(j_17, sym_Call_2))
      {
        k_17 = ATgetArgument(j_17, 0);
        m_17 = ATgetArgument(j_17, 1);
        q_16 :
        if(match_cons(k_17, sym_SVar_1))
          {
            l_17 = ATgetArgument(k_17, 0);
            {
              ATerm p_17 = NULL;
              ATerm s_17 = NULL;
              t = not_null(m_17);
              t = length_0(t);
              s_17 = t;
              if(p_17 != NULL && p_17 != s_17)
                _fail(s_17);
              else
                p_17 = s_17;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(l_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_17), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0));
            }
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm v_9 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = v_9;
        {
          ATerm w_9 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = w_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm b_1 (ATerm t)
  {
    ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
    t_17 = t;
    d_17 :
    if(match_cons(t_17, sym_TCons_2))
      {
        u_17 = ATgetArgument(t_17, 0);
        e_18 = ATgetArgument(t_17, 1);
        e_17 :
        if(match_cons(u_17, sym_TCons_2))
          {
            v_17 = ATgetArgument(u_17, 0);
            b_18 = ATgetArgument(u_17, 1);
            f_17 :
            if(match_cons(b_18, sym_TCons_2))
              {
                c_18 = ATgetArgument(b_18, 0);
                d_18 = ATgetArgument(b_18, 1);
                g_17 :
                if(match_cons(d_18, sym_TNil_0))
                  {
                    h_17 :
                    if(match_cons(e_18, sym_TCons_2))
                      {
                        f_18 = ATgetArgument(e_18, 0);
                        g_18 = ATgetArgument(e_18, 1);
                        i_17 :
                        if(match_cons(g_18, sym_TNil_0))
                          {
                            if(v_17 != NULL && v_17 != f_18)
                              _fail(f_18);
                            else
                              v_17 = f_18;
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = free_vars2_4(t, z_0, a_1, sboundin_3, b_1);
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm x_56 (ATerm), ATerm y_56 (ATerm))
{
  ATerm x_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = x_56(t);
      PopChoice();
    }
  else
    {
      t = x_9;
      {
        ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL;
        o_18 = t;
        n_18 :
        if(match_cons(o_18, sym_Cons_2))
          {
            p_18 = ATgetArgument(o_18, 0);
            q_18 = ATgetArgument(o_18, 1);
            {
              ATerm v_18 = NULL;
              ATerm w_18 = NULL;
              t = not_null(q_18);
              t = foldr_2(t, x_56, y_56);
              w_18 = t;
              if(v_18 != NULL && v_18 != w_18)
                _fail(w_18);
              else
                v_18 = w_18;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_18), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = y_56(t);
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
  ATerm c_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Fail_0);
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
    f_19 = t;
    c_19 :
    if(match_cons(f_19, sym_TCons_2))
      {
        g_19 = ATgetArgument(f_19, 0);
        h_19 = ATgetArgument(f_19, 1);
        d_19 :
        if(match_cons(h_19, sym_TCons_2))
          {
            i_19 = ATgetArgument(h_19, 0);
            j_19 = ATgetArgument(h_19, 1);
            e_19 :
            if(match_cons(j_19, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_19), not_null(i_19));
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = foldr_2(t, c_1, d_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,v_19 = NULL,w_19 = NULL;
  r_19 = t;
  o_19 :
  if(match_cons(r_19, sym_Call_2))
    {
      s_19 = ATgetArgument(r_19, 0);
      w_19 = ATgetArgument(r_19, 1);
      p_19 :
      if(match_cons(s_19, sym_SVar_1))
        {
          v_19 = ATgetArgument(s_19, 0);
          q_19 :
          if(match_cons(w_19, sym_Nil_0))
            t = not_null(v_19);
          else
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
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
  f_20 = t;
  b_20 :
  if(match_cons(f_20, sym_TCons_2))
    {
      g_20 = ATgetArgument(f_20, 0);
      h_20 = ATgetArgument(f_20, 1);
      c_20 :
      if(match_cons(h_20, sym_TCons_2))
        {
          i_20 = ATgetArgument(h_20, 0);
          l_20 = ATgetArgument(h_20, 1);
          d_20 :
          if(match_cons(i_20, sym_Cons_2))
            {
              j_20 = ATgetArgument(i_20, 0);
              k_20 = ATgetArgument(i_20, 1);
              e_20 :
              if(match_cons(l_20, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_20), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL;
  u_23 = t;
  n_23 :
  if(match_cons(u_23, sym_TCons_2))
    {
      v_23 = ATgetArgument(u_23, 0);
      w_23 = ATgetArgument(u_23, 1);
      o_23 :
      if(match_cons(w_23, sym_TCons_2))
        {
          x_23 = ATgetArgument(w_23, 0);
          e_24 = ATgetArgument(w_23, 1);
          p_23 :
          if(match_cons(x_23, sym_Cons_2))
            {
              y_23 = ATgetArgument(x_23, 0);
              d_24 = ATgetArgument(x_23, 1);
              q_23 :
              if(match_cons(y_23, sym_TCons_2))
                {
                  z_23 = ATgetArgument(y_23, 0);
                  a_24 = ATgetArgument(y_23, 1);
                  r_23 :
                  if(match_cons(a_24, sym_TCons_2))
                    {
                      b_24 = ATgetArgument(a_24, 0);
                      c_24 = ATgetArgument(a_24, 1);
                      s_23 :
                      if(match_cons(c_24, sym_TNil_0))
                        {
                          t_23 :
                          if(match_cons(e_24, sym_TNil_0))
                            {
                              ATerm g_24 = NULL;
                              if(v_23 != NULL && v_23 != z_23)
                                _fail(z_23);
                              else
                                v_23 = z_23;
                              if(g_24 != NULL && g_24 != b_24)
                                _fail(b_24);
                              else
                                g_24 = b_24;
                              t = not_null(g_24);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm y_9 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = y_9;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm m_67 (ATerm), ATerm n_67 (ATerm))
{
  ATerm o_24 = NULL;
  ATerm q_24 = NULL;
  o_24 = t;
  {
    ATerm s_24 = NULL;
    t = m_67(t);
    q_24 = t;
    t = n_67(t);
    s_24 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_24), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm m_66 (ATerm))
{
  ATerm x_24 (ATerm t)
  {
    ATerm z_9 = t;
    if(PushChoice()==0)
      {
        t = m_66(t);
        PopChoice();
      }
    else
      {
        t = z_9;
        t = _all(t, x_24);
      }
    return(t);
  }
  t = x_24(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
  f_25 = t;
  b_25 :
  if(match_cons(f_25, sym_TCons_2))
    {
      g_25 = ATgetArgument(f_25, 0);
      h_25 = ATgetArgument(f_25, 1);
      c_25 :
      if(match_cons(h_25, sym_TCons_2))
        {
          i_25 = ATgetArgument(h_25, 0);
          j_25 = ATgetArgument(h_25, 1);
          d_25 :
          if(match_cons(j_25, sym_TNil_0))
            {
              ATerm n_25 = NULL;
              if(n_25 != NULL && n_25 != i_25)
                _fail(i_25);
              else
                n_25 = i_25;
            }
          else
            {
              if(match_cons(j_25, sym_TCons_2))
                {
                  k_25 = ATgetArgument(j_25, 0);
                  l_25 = ATgetArgument(j_25, 1);
                  e_25 :
                  if(match_cons(l_25, sym_TNil_0))
                    {
                      ATerm t_25 = NULL;
                      ATerm u_25 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_25), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      u_25 = t;
                      if(t_25 != NULL && t_25 != u_25)
                        _fail(u_25);
                      else
                        t_25 = u_25;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_25), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm o_67 (ATerm), ATerm p_67 (ATerm))
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL;
  t = subs_args_0(t);
  c_26 = t;
  z_25 :
  if(match_cons(c_26, sym_TCons_2))
    {
      d_26 = ATgetArgument(c_26, 0);
      e_26 = ATgetArgument(c_26, 1);
      a_26 :
      if(match_cons(e_26, sym_TCons_2))
        {
          f_26 = ATgetArgument(e_26, 0);
          g_26 = ATgetArgument(e_26, 1);
          b_26 :
          if(match_cons(g_26, sym_TNil_0))
            {
              t = not_null(f_26);
              {
                ATerm e_1 (ATerm t)
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = not_null(d_26);
                    return(t);
                  }
                  t = SubsVar_2(t, o_67, f_1);
                  t = p_67(t);
                  return(t);
                }
                t = alltd_1(t, e_1);
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
ATerm substitute_1 (ATerm t, ATerm q_67 (ATerm))
{
  t = substitute_2(t, q_67, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
  b_27 = t;
  z_26 :
  if(match_cons(b_27, sym_Cons_2))
    {
      c_27 = ATgetArgument(b_27, 0);
      g_27 = ATgetArgument(b_27, 1);
      a_27 :
      if(match_cons(c_27, sym_SDef_3))
        {
          d_27 = ATgetArgument(c_27, 0);
          e_27 = ATgetArgument(c_27, 1);
          f_27 = ATgetArgument(c_27, 2);
          {
            ATerm s_27 = NULL;
            t = not_null(e_27);
            {
              ATerm z_27 = NULL;
              ATerm g_1 (ATerm t)
              {
                ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
                l_27 = t;
                n_26 :
                if(match_cons(l_27, sym_VarDec_2))
                  {
                    m_27 = ATgetArgument(l_27, 0);
                    n_27 = ATgetArgument(l_27, 1);
                    {
                      ATerm q_27 = NULL;
                      ATerm r_27 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TNil_0);
                      t = new_0(t);
                      r_27 = t;
                      if(q_27 != NULL && q_27 != r_27)
                        _fail(r_27);
                      else
                        q_27 = r_27;
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(q_27), not_null(n_27));
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, g_1);
              s_27 = t;
              {
                ATerm o_28 = NULL;
                ATerm h_1 (ATerm t)
                {
                  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
                  u_27 = t;
                  q_26 :
                  if(match_cons(u_27, sym_VarDec_2))
                    {
                      v_27 = ATgetArgument(u_27, 0);
                      w_27 = ATgetArgument(u_27, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_27)), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = map_1(t, h_1);
                z_27 = t;
                t = not_null(b_27);
                {
                  ATerm q_28 = NULL;
                  ATerm i_1 (ATerm t)
                  {
                    ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,f_28 = NULL;
                    b_28 = t;
                    w_26 :
                    if(match_cons(b_28, sym_SDef_3))
                      {
                        c_28 = ATgetArgument(b_28, 0);
                        d_28 = ATgetArgument(b_28, 1);
                        f_28 = ATgetArgument(b_28, 2);
                        {
                          ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
                          if(d_27 != NULL && d_27 != c_28)
                            _fail(c_28);
                          else
                            d_27 = c_28;
                          if(g_28 != NULL && g_28 != d_28)
                            _fail(d_28);
                          else
                            g_28 = d_28;
                          if(h_28 != NULL && h_28 != f_28)
                            _fail(f_28);
                          else
                            h_28 = f_28;
                          {
                            ATerm n_28 = NULL;
                            t = not_null(g_28);
                            {
                              ATerm j_1 (ATerm t)
                              {
                                ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
                                j_28 = t;
                                u_26 :
                                if(match_cons(j_28, sym_VarDec_2))
                                  {
                                    k_28 = ATgetArgument(j_28, 0);
                                    l_28 = ATgetArgument(j_28, 1);
                                    t = not_null(k_28);
                                  }
                                else
                                  _fail(t);
                                return(t);
                              }
                              t = map_1(t, j_1);
                              n_28 = t;
                              if(i_28 != NULL && i_28 != n_28)
                                _fail(n_28);
                              else
                                i_28 = n_28;
                            }
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_28), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_28), (ATerm) ATmakeAppl(sym_TNil_0))));
                            t = ssubs_0(t);
                          }
                        }
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = map_1(t, i_1);
                  o_28 = t;
                  {
                    ATerm r_28 = NULL;
                    t = not_null(o_28);
                    t = choices_0(t);
                    r_28 = t;
                    if(q_28 != NULL && q_28 != r_28)
                      _fail(r_28);
                    else
                      q_28 = r_28;
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_27), not_null(s_27), not_null(q_28));
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
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL;
  g_29 = t;
  e_29 :
  if(match_cons(g_29, sym_Cons_2))
    {
      h_29 = ATgetArgument(g_29, 0);
      i_29 = ATgetArgument(g_29, 1);
      f_29 :
      if(match_cons(i_29, sym_Nil_0))
        t = not_null(h_29);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm joindefs_0 (ATerm t)
{
  ATerm a_10 = t;
  if(PushChoice()==0)
    {
      t = JoinDefs1_0(t);
      PopChoice();
    }
  else
    {
      t = a_10;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm NonOverloadedDef_0 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,n_30 = NULL;
  b_30 = t;
  n_29 :
  if(match_cons(b_30, sym_TCons_2))
    {
      c_30 = ATgetArgument(b_30, 0);
      h_30 = ATgetArgument(b_30, 1);
      o_29 :
      if(match_cons(c_30, sym_TCons_2))
        {
          d_30 = ATgetArgument(c_30, 0);
          e_30 = ATgetArgument(c_30, 1);
          p_29 :
          if(match_cons(e_30, sym_TCons_2))
            {
              f_30 = ATgetArgument(e_30, 0);
              g_30 = ATgetArgument(e_30, 1);
              q_29 :
              if(match_int(f_30, 0))
                {
                  y_29 :
                  if(match_cons(g_30, sym_TNil_0))
                    {
                      z_29 :
                      if(match_cons(h_30, sym_TCons_2))
                        {
                          i_30 = ATgetArgument(h_30, 0);
                          n_30 = ATgetArgument(h_30, 1);
                          a_30 :
                          if(match_cons(n_30, sym_TNil_0))
                            {
                              t = not_null(i_30);
                              {
                                ATerm k_1 (ATerm t)
                                {
                                  ATerm l_1 (ATerm t)
                                  {
                                    ATerm q_30 = NULL;
                                    q_30 = t;
                                    if(d_30 != NULL && d_30 != q_30)
                                      _fail(q_30);
                                    else
                                      d_30 = q_30;
                                    return(t);
                                  }
                                  t = SDef_3(t, l_1, _id, _id);
                                  return(t);
                                }
                                t = partition_1(t, k_1);
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
ATerm foldr_3 (ATerm t, ATerm z_56 (ATerm), ATerm a_57 (ATerm), ATerm b_57 (ATerm))
{
  ATerm b_10 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = z_56(t);
      PopChoice();
    }
  else
    {
      t = b_10;
      {
        ATerm e_31 = NULL,f_31 = NULL,k_31 = NULL;
        e_31 = t;
        w_30 :
        if(match_cons(e_31, sym_Cons_2))
          {
            f_31 = ATgetArgument(e_31, 0);
            k_31 = ATgetArgument(e_31, 1);
            {
              ATerm n_31 = NULL,p_31 = NULL;
              ATerm c_10;
              c_10 = t;
              {
                ATerm o_31 = NULL;
                t = not_null(f_31);
                t = b_57(t);
                o_31 = t;
                if(n_31 != NULL && n_31 != o_31)
                  _fail(o_31);
                else
                  n_31 = o_31;
              }
              t = c_10;
              {
                ATerm q_31 = NULL;
                t = not_null(k_31);
                t = foldr_3(t, z_56, a_57, b_57);
                q_31 = t;
                if(p_31 != NULL && p_31 != q_31)
                  _fail(q_31);
                else
                  p_31 = q_31;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_31), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_31), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = a_57(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, m_1, add_0, n_1);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm u_44 (ATerm), ATerm v_44 (ATerm), ATerm w_44 (ATerm))
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL;
  l_32 = t;
  k_32 :
  if(match_cons(l_32, sym_SDef_3))
    {
      m_32 = ATgetArgument(l_32, 0);
      n_32 = ATgetArgument(l_32, 1);
      o_32 = ATgetArgument(l_32, 2);
      {
        ATerm s_32 = NULL;
        t = not_null(m_32);
        {
          ATerm u_32 = NULL;
          t = u_44(t);
          s_32 = t;
          t = not_null(n_32);
          {
            ATerm w_32 = NULL;
            t = v_44(t);
            u_32 = t;
            t = not_null(o_32);
            t = w_44(t);
            w_32 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(s_32), not_null(u_32), not_null(w_32));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm partition_1 (ATerm t, ATerm n_56 (ATerm))
{
  ATerm r_34 (ATerm t)
  {
    ATerm d_10 = t;
    if(PushChoice()==0)
      {
        ATerm u_33 = NULL;
        u_33 = t;
        j_33 :
        if(match_cons(u_33, sym_Nil_0))
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
        else
          _fail(t);
        PopChoice();
      }
    else
      {
        t = d_10;
        {
          ATerm e_10 = t;
          if(PushChoice()==0)
            {
              ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL;
              t = Cons_2(t, n_56, r_34);
              v_33 = t;
              l_33 :
              if(match_cons(v_33, sym_Cons_2))
                {
                  w_33 = ATgetArgument(v_33, 0);
                  x_33 = ATgetArgument(v_33, 1);
                  m_33 :
                  if(match_cons(x_33, sym_TCons_2))
                    {
                      y_33 = ATgetArgument(x_33, 0);
                      z_33 = ATgetArgument(x_33, 1);
                      n_33 :
                      if(match_cons(z_33, sym_TCons_2))
                        {
                          a_34 = ATgetArgument(z_33, 0);
                          b_34 = ATgetArgument(z_33, 1);
                          o_33 :
                          if(match_cons(b_34, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_33), not_null(y_33)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
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
              t = e_10;
              {
                ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL;
                t = Cons_2(t, _id, r_34);
                f_34 = t;
                q_33 :
                if(match_cons(f_34, sym_Cons_2))
                  {
                    g_34 = ATgetArgument(f_34, 0);
                    h_34 = ATgetArgument(f_34, 1);
                    r_33 :
                    if(match_cons(h_34, sym_TCons_2))
                      {
                        i_34 = ATgetArgument(h_34, 0);
                        j_34 = ATgetArgument(h_34, 1);
                        s_33 :
                        if(match_cons(j_34, sym_TCons_2))
                          {
                            k_34 = ATgetArgument(j_34, 0);
                            l_34 = ATgetArgument(j_34, 1);
                            t_33 :
                            if(match_cons(l_34, sym_TNil_0))
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_34), not_null(k_34)), (ATerm) ATmakeAppl(sym_TNil_0)));
                            else
                              _fail(t);
                          }
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
  t = r_34(t);
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL;
  e_35 = t;
  y_34 :
  if(match_cons(e_35, sym_TCons_2))
    {
      f_35 = ATgetArgument(e_35, 0);
      k_35 = ATgetArgument(e_35, 1);
      z_34 :
      if(match_cons(f_35, sym_TCons_2))
        {
          g_35 = ATgetArgument(f_35, 0);
          h_35 = ATgetArgument(f_35, 1);
          a_35 :
          if(match_cons(h_35, sym_TCons_2))
            {
              i_35 = ATgetArgument(h_35, 0);
              j_35 = ATgetArgument(h_35, 1);
              b_35 :
              if(match_cons(j_35, sym_TNil_0))
                {
                  c_35 :
                  if(match_cons(k_35, sym_TCons_2))
                    {
                      l_35 = ATgetArgument(k_35, 0);
                      m_35 = ATgetArgument(k_35, 1);
                      d_35 :
                      if(match_cons(m_35, sym_TNil_0))
                        {
                          t = not_null(l_35);
                          {
                            ATerm o_1 (ATerm t)
                            {
                              ATerm p_1 (ATerm t)
                              {
                                ATerm q_35 = NULL;
                                q_35 = t;
                                if(g_35 != NULL && g_35 != q_35)
                                  _fail(q_35);
                                else
                                  g_35 = q_35;
                                return(t);
                              }
                              ATerm q_1 (ATerm t)
                              {
                                ATerm f_10;
                                f_10 = t;
                                {
                                  ATerm u_35 = NULL;
                                  t = length_0(t);
                                  u_35 = t;
                                  if(i_35 != NULL && i_35 != u_35)
                                    _fail(u_35);
                                  else
                                    i_35 = u_35;
                                }
                                t = f_10;
                                return(t);
                              }
                              t = SDef_3(t, p_1, q_1, _id);
                              return(t);
                            }
                            t = partition_1(t, o_1);
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
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
  y_36 = t;
  x_36 :
  if(match_cons(y_36, sym_Match_1))
    {
      z_36 = ATgetArgument(y_36, 0);
      {
        ATerm c_37 = NULL;
        ATerm e_37 = NULL;
        t = new_0(t);
        c_37 = t;
        {
          ATerm h_37 = NULL,i_37 = NULL,q_37 = NULL;
          t = new_0(t);
          e_37 = t;
          t = not_null(z_36);
          {
            ATerm r_1 (ATerm t)
            {
              ATerm j_37 = NULL,o_37 = NULL,p_37 = NULL;
              j_37 = t;
              j_36 :
              if(match_cons(j_37, sym_Explode_2))
                {
                  o_37 = ATgetArgument(j_37, 0);
                  p_37 = ATgetArgument(j_37, 1);
                  if(h_37 != NULL && h_37 != o_37)
                    _fail(o_37);
                  else
                    h_37 = o_37;
                  if(i_37 != NULL && i_37 != p_37)
                    _fail(p_37);
                  else
                    i_37 = p_37;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_37));
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1(t, r_1);
            q_37 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_37), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_37)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_37), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_37))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_37)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_37)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_37), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_37), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0))))))));
          }
        }
      }
    }
  else
    {
      if(match_cons(y_36, sym_Build_1))
        {
          z_36 = ATgetArgument(y_36, 0);
          {
            ATerm t_37 = NULL;
            ATerm g_38 = NULL,h_38 = NULL,m_38 = NULL;
            t = new_0(t);
            t_37 = t;
            t = not_null(z_36);
            {
              ATerm s_1 (ATerm t)
              {
                ATerm i_38 = NULL,j_38 = NULL,l_38 = NULL;
                i_38 = t;
                r_36 :
                if(match_cons(i_38, sym_Explode_2))
                  {
                    j_38 = ATgetArgument(i_38, 0);
                    l_38 = ATgetArgument(i_38, 1);
                    if(g_38 != NULL && g_38 != j_38)
                      _fail(j_38);
                    else
                      g_38 = j_38;
                    if(h_38 != NULL && h_38 != l_38)
                      _fail(l_38);
                    else
                      h_38 = l_38;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_37));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, s_1);
              m_38 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_37), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_38), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_38), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_37))), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_38)))));
            }
          }
        }
      else
        {
          if(match_cons(y_36, sym_ExplodeCong_2))
            {
              z_36 = ATgetArgument(y_36, 0);
              a_37 = ATgetArgument(y_36, 1);
              {
                ATerm q_38 = NULL;
                ATerm s_38 = NULL;
                t = new_0(t);
                q_38 = t;
                {
                  ATerm f_39 = NULL;
                  t = new_0(t);
                  s_38 = t;
                  {
                    ATerm h_39 = NULL;
                    t = new_0(t);
                    f_39 = t;
                    t = new_0(t);
                    h_39 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_38), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_38), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_39), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_39), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_38)), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_39)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(z_36), (ATerm)ATmakeAppl(sym_Var_1, not_null(q_38)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_38))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(a_37), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_39)), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_39))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_38)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_39)), (ATerm) ATmakeAppl(sym_Nil_0)))))));
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
  ATerm k_40 = NULL,l_40 = NULL;
  k_40 = t;
  j_40 :
  if(match_cons(k_40, sym_Match_1))
    {
      l_40 = ATgetArgument(k_40, 0);
      {
        ATerm g_10 = t;
        if(PushChoice()==0)
          {
            ATerm n_40 = NULL,o_40 = NULL,s_40 = NULL;
            t = not_null(l_40);
            {
              ATerm t_1 (ATerm t)
              {
                ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
                p_40 = t;
                d_40 :
                if(match_cons(p_40, sym_App_2))
                  {
                    q_40 = ATgetArgument(p_40, 0);
                    r_40 = ATgetArgument(p_40, 1);
                    if(n_40 != NULL && n_40 != q_40)
                      _fail(q_40);
                    else
                      n_40 = q_40;
                    if(o_40 != NULL && o_40 != r_40)
                      _fail(r_40);
                    else
                      o_40 = r_40;
                    t = (ATerm) ATmakeAppl(sym_Wld_0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, t_1);
              s_40 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(s_40)), (ATerm) ATmakeAppl(sym_BA_2, not_null(n_40), not_null(o_40)));
            }
            PopChoice();
          }
        else
          {
            t = g_10;
            {
              ATerm v_40 = NULL;
              ATerm x_40 = NULL,a_41 = NULL;
              t = new_0(t);
              v_40 = t;
              t = not_null(l_40);
              {
                ATerm u_1 (ATerm t)
                {
                  ATerm y_40 = NULL,z_40 = NULL;
                  y_40 = t;
                  h_40 :
                  if(match_cons(y_40, sym_RootApp_1))
                    {
                      z_40 = ATgetArgument(y_40, 0);
                      if(x_40 != NULL && x_40 != z_40)
                        _fail(z_40);
                      else
                        x_40 = z_40;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_40));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, u_1);
                a_41 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_40), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_41)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_40))), not_null(x_40))));
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
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL;
  q_41 = t;
  n_41 :
  if(match_cons(q_41, sym_Match_1))
    {
      r_41 = ATgetArgument(q_41, 0);
      o_41 :
      if(match_cons(r_41, sym_App_2))
        {
          s_41 = ATgetArgument(r_41, 0);
          p_41 = ATgetArgument(r_41, 1);
          t = (ATerm) ATmakeAppl(sym_BA_2, not_null(s_41), not_null(p_41));
        }
      else
        {
          if(match_cons(r_41, sym_RootApp_1))
            {
              s_41 = ATgetArgument(r_41, 0);
              t = not_null(s_41);
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
  ATerm e_42 = NULL,f_42 = NULL;
  e_42 = t;
  d_42 :
  if(match_cons(e_42, sym_Match_1))
    {
      f_42 = ATgetArgument(e_42, 0);
      {
        ATerm h_42 = NULL,l_42 = NULL;
        t = not_null(f_42);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL;
            i_42 = t;
            a_42 :
            if(match_cons(i_42, sym_RootApp_1))
              {
                j_42 = ATgetArgument(i_42, 0);
                b_42 :
                if(match_cons(j_42, sym_Match_1))
                  {
                    k_42 = ATgetArgument(j_42, 0);
                    if(h_42 != NULL && h_42 != k_42)
                      _fail(k_42);
                    else
                      h_42 = k_42;
                    t = not_null(h_42);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, v_1);
          l_42 = t;
          t = (ATerm) ATmakeAppl(sym_Match_1, not_null(l_42));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL;
  g_43 = t;
  f_43 :
  if(match_cons(g_43, sym_Build_1))
    {
      h_43 = ATgetArgument(g_43, 0);
      {
        ATerm h_10 = t;
        if(PushChoice()==0)
          {
            ATerm j_43 = NULL;
            ATerm l_43 = NULL,m_43 = NULL,q_43 = NULL;
            t = new_0(t);
            j_43 = t;
            t = not_null(h_43);
            {
              ATerm w_1 (ATerm t)
              {
                ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
                n_43 = t;
                z_42 :
                if(match_cons(n_43, sym_App_2))
                  {
                    o_43 = ATgetArgument(n_43, 0);
                    p_43 = ATgetArgument(n_43, 1);
                    if(l_43 != NULL && l_43 != o_43)
                      _fail(o_43);
                    else
                      l_43 = o_43;
                    if(m_43 != NULL && m_43 != p_43)
                      _fail(p_43);
                    else
                      m_43 = p_43;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_43));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, w_1);
              q_43 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_43), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(l_43), not_null(m_43), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_43)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_43))));
            }
            PopChoice();
          }
        else
          {
            t = h_10;
            {
              ATerm t_43 = NULL;
              ATerm v_43 = NULL,z_43 = NULL;
              t = new_0(t);
              t_43 = t;
              t = not_null(h_43);
              {
                ATerm x_1 (ATerm t)
                {
                  ATerm w_43 = NULL,x_43 = NULL;
                  w_43 = t;
                  d_43 :
                  if(match_cons(w_43, sym_RootApp_1))
                    {
                      x_43 = ATgetArgument(w_43, 0);
                      if(v_43 != NULL && v_43 != x_43)
                        _fail(x_43);
                      else
                        v_43 = x_43;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_43));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, x_1);
                z_43 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_43), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_43), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_43))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_43))));
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
  ATerm o_44 = NULL,p_44 = NULL,x_44 = NULL,y_44 = NULL;
  p_44 = t;
  m_44 :
  if(match_cons(p_44, sym_Build_1))
    {
      x_44 = ATgetArgument(p_44, 0);
      n_44 :
      if(match_cons(x_44, sym_App_2))
        {
          y_44 = ATgetArgument(x_44, 0);
          o_44 = ATgetArgument(x_44, 1);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_44)), not_null(y_44));
        }
      else
        {
          if(match_cons(x_44, sym_RootApp_1))
            {
              y_44 = ATgetArgument(x_44, 0);
              t = not_null(y_44);
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
  ATerm p_45 = NULL,q_45 = NULL;
  p_45 = t;
  o_45 :
  if(match_cons(p_45, sym_Build_1))
    {
      q_45 = ATgetArgument(p_45, 0);
      {
        ATerm i_10 = t;
        if(PushChoice()==0)
          {
            ATerm s_45 = NULL,t_45 = NULL,c_46 = NULL;
            t = not_null(q_45);
            {
              ATerm a_2 (ATerm t)
              {
                ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL,b_46 = NULL;
                w_45 = t;
                h_45 :
                if(match_cons(w_45, sym_App_2))
                  {
                    x_45 = ATgetArgument(w_45, 0);
                    b_46 = ATgetArgument(w_45, 1);
                    i_45 :
                    if(match_cons(x_45, sym_Build_1))
                      {
                        y_45 = ATgetArgument(x_45, 0);
                        if(t_45 != NULL && t_45 != y_45)
                          _fail(y_45);
                        else
                          t_45 = y_45;
                        if(s_45 != NULL && s_45 != b_46)
                          _fail(b_46);
                        else
                          s_45 = b_46;
                        t = not_null(t_45);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, a_2);
              c_46 = t;
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(c_46));
            }
            PopChoice();
          }
        else
          {
            t = i_10;
            {
              ATerm h_46 = NULL,m_46 = NULL;
              t = not_null(q_45);
              {
                ATerm j_2 (ATerm t)
                {
                  ATerm i_46 = NULL,j_46 = NULL,l_46 = NULL;
                  i_46 = t;
                  l_45 :
                  if(match_cons(i_46, sym_RootApp_1))
                    {
                      j_46 = ATgetArgument(i_46, 0);
                      m_45 :
                      if(match_cons(j_46, sym_Build_1))
                        {
                          l_46 = ATgetArgument(j_46, 0);
                          if(h_46 != NULL && h_46 != l_46)
                            _fail(l_46);
                          else
                            h_46 = l_46;
                          t = not_null(h_46);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, j_2);
                m_46 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, not_null(m_46));
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
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL;
  s_47 = t;
  m_47 :
  if(match_cons(s_47, sym_Seqs_1))
    {
      t_47 = ATgetArgument(s_47, 0);
      n_47 :
      if(match_cons(t_47, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(t_47, sym_Cons_2))
            {
              q_47 = ATgetArgument(t_47, 0);
              r_47 = ATgetArgument(t_47, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_47), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(r_47)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(s_47, sym_Choices_1))
        {
          t_47 = ATgetArgument(s_47, 0);
          o_47 :
          if(match_cons(t_47, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(t_47, sym_Cons_2))
                {
                  q_47 = ATgetArgument(t_47, 0);
                  r_47 = ATgetArgument(t_47, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(q_47), (ATerm) ATmakeAppl(sym_Choices_1, not_null(r_47)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(s_47, sym_LChoices_1))
            {
              t_47 = ATgetArgument(s_47, 0);
              p_47 :
              if(match_cons(t_47, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(t_47, sym_Cons_2))
                    {
                      q_47 = ATgetArgument(t_47, 0);
                      r_47 = ATgetArgument(t_47, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(q_47), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(r_47)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(s_47, sym_Lets_2))
                {
                  t_47 = ATgetArgument(s_47, 0);
                  u_47 = ATgetArgument(s_47, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(t_47), not_null(u_47));
                }
              else
                {
                  if(match_cons(s_47, sym_BA_2))
                    {
                      t_47 = ATgetArgument(s_47, 0);
                      u_47 = ATgetArgument(s_47, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_47)), not_null(t_47));
                    }
                  else
                    {
                      if(match_cons(s_47, sym_MA_2))
                        {
                          t_47 = ATgetArgument(s_47, 0);
                          u_47 = ATgetArgument(s_47, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_47)), not_null(u_47));
                        }
                      else
                        {
                          if(match_cons(s_47, sym_AM_2))
                            {
                              t_47 = ATgetArgument(s_47, 0);
                              u_47 = ATgetArgument(s_47, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_47), (ATerm) ATmakeAppl(sym_Match_1, not_null(u_47)));
                            }
                          else
                            {
                              if(match_cons(s_47, sym_BAM_3))
                                {
                                  t_47 = ATgetArgument(s_47, 0);
                                  u_47 = ATgetArgument(s_47, 1);
                                  v_47 = ATgetArgument(s_47, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_47)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_47), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_47)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(s_47, sym_InfixApp_3))
                                    {
                                      t_47 = ATgetArgument(s_47, 0);
                                      u_47 = ATgetArgument(s_47, 1);
                                      v_47 = ATgetArgument(s_47, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(u_47), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_47), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_47), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm l_49 = NULL;
  l_49 = t;
  k_49 :
  if(!(match_cons(l_49, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm j_10 = t;
  if(PushChoice()==0)
    {
      ATerm k_2 (ATerm t)
      {
        ATerm k_10 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = k_10;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, k_2);
      PopChoice();
      _fail(t);
    }
  else
    t = j_10;
  return(t);
}
ATerm App_2 (ATerm t, ATerm q_42 (ATerm), ATerm r_42 (ATerm))
{
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL;
  v_49 = t;
  u_49 :
  if(match_cons(v_49, sym_App_2))
    {
      w_49 = ATgetArgument(v_49, 0);
      x_49 = ATgetArgument(v_49, 1);
      {
        ATerm a_50 = NULL;
        t = not_null(w_49);
        {
          ATerm e_50 = NULL;
          t = q_42(t);
          a_50 = t;
          t = not_null(x_49);
          t = r_42(t);
          e_50 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, not_null(a_50), not_null(e_50));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm n_42 (ATerm), ATerm o_42 (ATerm), ATerm p_42 (ATerm))
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL;
  o_50 = t;
  n_50 :
  if(match_cons(o_50, sym_Con_3))
    {
      p_50 = ATgetArgument(o_50, 0);
      q_50 = ATgetArgument(o_50, 1);
      r_50 = ATgetArgument(o_50, 2);
      {
        ATerm v_50 = NULL;
        t = not_null(p_50);
        {
          ATerm x_50 = NULL;
          t = n_42(t);
          v_50 = t;
          t = not_null(q_50);
          {
            ATerm z_50 = NULL;
            t = o_42(t);
            x_50 = t;
            t = not_null(r_50);
            t = p_42(t);
            z_50 = t;
            t = (ATerm) ATmakeAppl(sym_Con_3, not_null(v_50), not_null(x_50), not_null(z_50));
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
  ATerm l_10 = t;
  if(PushChoice()==0)
    {
      ATerm l_2 (ATerm t)
      {
        ATerm m_10 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = m_10;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, l_2);
      PopChoice();
      _fail(t);
    }
  else
    t = l_10;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL;
  j_51 = t;
  h_51 :
  if(match_cons(j_51, sym_SRule_1))
    {
      k_51 = ATgetArgument(j_51, 0);
      i_51 :
      if(match_cons(k_51, sym_Rule_3))
        {
          l_51 = ATgetArgument(k_51, 0);
          m_51 = ATgetArgument(k_51, 1);
          n_51 = ATgetArgument(k_51, 2);
          t = not_null(l_51);
          t = pureterm_0(t);
          t = not_null(m_51);
          t = buildterm_0(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_51)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_51), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_51)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(k_51, sym_StratRule_3))
            {
              l_51 = ATgetArgument(k_51, 0);
              m_51 = ATgetArgument(k_51, 1);
              n_51 = ATgetArgument(k_51, 2);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_51), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_51), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_51), (ATerm) ATmakeAppl(sym_Nil_0)))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm u_45 (ATerm), ATerm v_45 (ATerm))
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL;
  e_52 = t;
  d_52 :
  if(match_cons(e_52, sym_Scope_2))
    {
      f_52 = ATgetArgument(e_52, 0);
      g_52 = ATgetArgument(e_52, 1);
      {
        ATerm j_52 = NULL;
        t = not_null(f_52);
        {
          ATerm l_52 = NULL;
          t = u_45(t);
          j_52 = t;
          t = not_null(g_52);
          t = v_45(t);
          l_52 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_52), not_null(l_52));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm y_65 (ATerm))
{
  ATerm w_52 (ATerm t)
  {
    ATerm n_10 = t;
    if(PushChoice()==0)
      {
        t = y_65(t);
        PopChoice();
      }
    else
      {
        t = n_10;
        t = _one(t, w_52);
      }
    return(t);
  }
  t = w_52(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL;
  l_53 = t;
  j_53 :
  if(match_cons(l_53, sym_SRule_1))
    {
      m_53 = ATgetArgument(l_53, 0);
      k_53 :
      if(match_cons(m_53, sym_Rule_3))
        {
          n_53 = ATgetArgument(m_53, 0);
          o_53 = ATgetArgument(m_53, 1);
          p_53 = ATgetArgument(m_53, 2);
          {
            ATerm t_53 = NULL;
            ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,d_54 = NULL;
            t = new_0(t);
            t_53 = t;
            t = not_null(n_53);
            {
              ATerm f_54 = NULL,g_54 = NULL,o_54 = NULL;
              ATerm m_2 (ATerm t)
              {
                ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL;
                y_53 = t;
                a_53 :
                if(match_cons(y_53, sym_Con_3))
                  {
                    z_53 = ATgetArgument(y_53, 0);
                    b_54 = ATgetArgument(y_53, 1);
                    c_54 = ATgetArgument(y_53, 2);
                    b_53 :
                    if(match_cons(z_53, sym_Var_1))
                      {
                        a_54 = ATgetArgument(z_53, 0);
                        if(x_53 != NULL && x_53 != a_54)
                          _fail(a_54);
                        else
                          x_53 = a_54;
                        if(v_53 != NULL && v_53 != b_54)
                          _fail(b_54);
                        else
                          v_53 = b_54;
                        if(w_53 != NULL && w_53 != c_54)
                          _fail(c_54);
                        else
                          w_53 = c_54;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_53));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, m_2);
              d_54 = t;
              t = not_null(o_53);
              {
                ATerm y_2 (ATerm t)
                {
                  ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL;
                  h_54 = t;
                  e_53 :
                  if(match_cons(h_54, sym_Con_3))
                    {
                      i_54 = ATgetArgument(h_54, 0);
                      k_54 = ATgetArgument(h_54, 1);
                      l_54 = ATgetArgument(h_54, 2);
                      f_53 :
                      if(match_cons(i_54, sym_Var_1))
                        {
                          j_54 = ATgetArgument(i_54, 0);
                          g_53 :
                          if(match_cons(l_54, sym_Call_2))
                            {
                              m_54 = ATgetArgument(l_54, 0);
                              n_54 = ATgetArgument(l_54, 1);
                              h_53 :
                              if(match_cons(n_54, sym_Nil_0))
                                {
                                  if(x_53 != NULL && x_53 != j_54)
                                    _fail(j_54);
                                  else
                                    x_53 = j_54;
                                  if(f_54 != NULL && f_54 != k_54)
                                    _fail(k_54);
                                  else
                                    f_54 = k_54;
                                  if(g_54 != NULL && g_54 != m_54)
                                    _fail(m_54);
                                  else
                                    g_54 = m_54;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_53));
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, y_2);
                o_54 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_53), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_54), not_null(o_54), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_53), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(g_54), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_53), not_null(f_54), (ATerm) ATmakeAppl(sym_Id_0))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_53)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_53)))))));
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
  ATerm z_2 (ATerm t)
  {
    ATerm o_10 = t;
    if(PushChoice()==0)
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      {
        t = o_10;
        {
          ATerm p_10 = t;
          if(PushChoice()==0)
            {
              t = Scope_2(t, _id, desugarRule_0);
              PopChoice();
            }
          else
            {
              t = p_10;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, z_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm i_64 (ATerm))
{
  ATerm c_55 (ATerm t)
  {
    t = i_64(t);
    t = _all(t, c_55);
    return(t);
  }
  t = c_55(t);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm b_3 (ATerm t)
      {
        ATerm q_10 = t;
        if(PushChoice()==0)
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = q_10;
            {
              ATerm r_10 = t;
              if(PushChoice()==0)
                {
                  ATerm y_10 = t;
                  if(PushChoice()==0)
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = y_10;
                      {
                        ATerm z_10 = t;
                        if(PushChoice()==0)
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = z_10;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = r_10;
                  {
                    ATerm a_11 = t;
                    if(PushChoice()==0)
                      {
                        ATerm e_11 = t;
                        if(PushChoice()==0)
                          {
                            t = Mapp0_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = e_11;
                            {
                              ATerm f_11 = t;
                              if(PushChoice()==0)
                                {
                                  t = Mapp1_0(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = f_11;
                                  t = Mapp2_0(t);
                                }
                            }
                          }
                        PopChoice();
                      }
                    else
                      {
                        t = a_11;
                        t = Expl_0(t);
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, b_3);
    }
    return(t);
  }
  t = topdown_1(t, a_3);
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL;
  f_55 = t;
  e_55 :
  if(match_cons(f_55, sym_TCons_2))
    {
      g_55 = ATgetArgument(f_55, 0);
      h_55 = ATgetArgument(f_55, 1);
      t = not_null(h_55);
    }
  else
    _fail(t);
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL;
  n_55 = t;
  m_55 :
  if(match_cons(n_55, sym_TCons_2))
    {
      o_55 = ATgetArgument(n_55, 0);
      p_55 = ATgetArgument(n_55, 1);
      t = not_null(o_55);
    }
  else
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm k_61 (ATerm))
{
  ATerm e_56 (ATerm t)
  {
    ATerm g_11 = t;
    if(PushChoice()==0)
      {
        ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL;
        ATerm c_3 (ATerm t)
        {
          t = map_1(t, Thd_0);
          return(t);
        }
        ATerm o_3 (ATerm t)
        {
          t = map_1(t, Ttl_0);
          return(t);
        }
        t = split_2(t, c_3, o_3);
        {
          ATerm p_3 (ATerm t)
          {
            t = TCons_2(t, e_56, TNil_0);
            return(t);
          }
          t = TCons_2(t, k_61, p_3);
          x_55 = t;
          u_55 :
          if(match_cons(x_55, sym_TCons_2))
            {
              y_55 = ATgetArgument(x_55, 0);
              z_55 = ATgetArgument(x_55, 1);
              v_55 :
              if(match_cons(z_55, sym_TCons_2))
                {
                  a_56 = ATgetArgument(z_55, 0);
                  b_56 = ATgetArgument(z_55, 1);
                  w_55 :
                  if(match_cons(b_56, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_55), not_null(a_56));
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
        t = g_11;
        t = map_1(t, TNil_0);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
      }
    return(t);
  }
  t = e_56(t);
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL;
  q_56 = t;
  l_56 :
  if(match_cons(q_56, sym_TCons_2))
    {
      r_56 = ATgetArgument(q_56, 0);
      s_56 = ATgetArgument(q_56, 1);
      m_56 :
      if(match_cons(s_56, sym_TCons_2))
        {
          t_56 = ATgetArgument(s_56, 0);
          u_56 = ATgetArgument(s_56, 1);
          p_56 :
          if(match_cons(u_56, sym_TNil_0))
            {
              ATerm c_57 = NULL;
              ATerm e_57 = NULL;
              t = new_0(t);
              c_57 = t;
              {
                ATerm g_57 = NULL;
                t = new_0(t);
                e_57 = t;
                t = new_0(t);
                g_57 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_57)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_57)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_56)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_57)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(t_56)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(c_57), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_57), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_57)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_57), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_57)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
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
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL;
  t_57 = t;
  n_57 :
  if(match_cons(t_57, sym_TCons_2))
    {
      u_57 = ATgetArgument(t_57, 0);
      v_57 = ATgetArgument(t_57, 1);
      q_57 :
      if(match_cons(v_57, sym_TCons_2))
        {
          w_57 = ATgetArgument(v_57, 0);
          x_57 = ATgetArgument(v_57, 1);
          r_57 :
          if(match_cons(w_57, sym_Nil_0))
            {
              s_57 :
              if(match_cons(x_57, sym_TNil_0))
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
ATerm zipr_1 (ATerm t, ATerm j_60 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, j_60);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL,j_58 = NULL;
  c_58 = t;
  b_58 :
  if(match_cons(c_58, sym_Cons_2))
    {
      d_58 = ATgetArgument(c_58, 0);
      j_58 = ATgetArgument(c_58, 1);
      t = not_null(j_58);
    }
  else
    _fail(t);
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL;
  v_58 = t;
  t_58 :
  if(match_cons(v_58, sym_Cons_2))
    {
      w_58 = ATgetArgument(v_58, 0);
      x_58 = ATgetArgument(v_58, 1);
      u_58 :
      if(match_cons(x_58, sym_Nil_0))
        t = not_null(w_58);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm last_0 (ATerm t)
{
  ATerm h_11 = t;
  if(PushChoice()==0)
    {
      t = Last_0(t);
      PopChoice();
    }
  else
    {
      t = h_11;
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
  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL;
  f_59 = t;
  c_59 :
  if(match_cons(f_59, sym_TCons_2))
    {
      g_59 = ATgetArgument(f_59, 0);
      h_59 = ATgetArgument(f_59, 1);
      d_59 :
      if(match_cons(h_59, sym_TCons_2))
        {
          i_59 = ATgetArgument(h_59, 0);
          j_59 = ATgetArgument(h_59, 1);
          e_59 :
          if(match_cons(j_59, sym_TNil_0))
            {
              ATerm i_11 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(g_59), not_null(i_59));
                  PopChoice();
                }
              else
                {
                  t = i_11;
                  t = SSL_subtr(not_null(g_59), not_null(i_59));
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
  ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL;
  r_59 = t;
  o_59 :
  if(match_cons(r_59, sym_TCons_2))
    {
      s_59 = ATgetArgument(r_59, 0);
      t_59 = ATgetArgument(r_59, 1);
      p_59 :
      if(match_cons(t_59, sym_TCons_2))
        {
          u_59 = ATgetArgument(t_59, 0);
          v_59 = ATgetArgument(t_59, 1);
          q_59 :
          if(match_cons(v_59, sym_TNil_0))
            {
              ATerm j_11;
              j_11 = t;
              {
                ATerm k_11 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(s_59), not_null(u_59));
                    PopChoice();
                  }
                else
                  {
                    t = k_11;
                    t = SSL_gtr(not_null(s_59), not_null(u_59));
                  }
              }
              t = j_11;
            }
          else
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
  ATerm k_60 = NULL;
  ATerm l_11 = t;
  if(PushChoice()==0)
    {
      ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL;
      l_60 = t;
      a_60 :
      if(match_cons(l_60, sym_TCons_2))
        {
          m_60 = ATgetArgument(l_60, 0);
          n_60 = ATgetArgument(l_60, 1);
          h_60 :
          if(match_cons(n_60, sym_TCons_2))
            {
              o_60 = ATgetArgument(n_60, 0);
              p_60 = ATgetArgument(n_60, 1);
              i_60 :
              if(match_cons(p_60, sym_TNil_0))
                {
                  if(k_60 != NULL && k_60 != m_60)
                    _fail(m_60);
                  else
                    k_60 = m_60;
                  if(k_60 != NULL && k_60 != o_60)
                    _fail(o_60);
                  else
                    k_60 = o_60;
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
ATerm copy_1 (ATerm t, ATerm p_57 (ATerm))
{
  ATerm q_3 (ATerm t)
  {
    ATerm i_61 = NULL,j_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL;
    i_61 = t;
    s_60 :
    if(match_cons(i_61, sym_TCons_2))
      {
        j_61 = ATgetArgument(i_61, 0);
        m_61 = ATgetArgument(i_61, 1);
        t_60 :
        if(match_cons(m_61, sym_TCons_2))
          {
            n_61 = ATgetArgument(m_61, 0);
            o_61 = ATgetArgument(m_61, 1);
            u_60 :
            if(match_cons(o_61, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_61), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,b_62 = NULL;
    t_61 = t;
    w_60 :
    if(match_cons(t_61, sym_TCons_2))
      {
        u_61 = ATgetArgument(t_61, 0);
        v_61 = ATgetArgument(t_61, 1);
        x_60 :
        if(match_int(u_61, 0))
          {
            y_60 :
            if(match_cons(v_61, sym_TCons_2))
              {
                w_61 = ATgetArgument(v_61, 0);
                x_61 = ATgetArgument(v_61, 1);
                z_60 :
                if(match_cons(x_61, sym_TCons_2))
                  {
                    y_61 = ATgetArgument(x_61, 0);
                    b_62 = ATgetArgument(x_61, 1);
                    a_61 :
                    if(match_cons(b_62, sym_TNil_0))
                      t = not_null(y_61);
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    ATerm e_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL;
    e_62 = t;
    e_61 :
    if(match_cons(e_62, sym_TCons_2))
      {
        h_62 = ATgetArgument(e_62, 0);
        i_62 = ATgetArgument(e_62, 1);
        f_61 :
        if(match_cons(i_62, sym_TCons_2))
          {
            j_62 = ATgetArgument(i_62, 0);
            k_62 = ATgetArgument(i_62, 1);
            g_61 :
            if(match_cons(k_62, sym_TCons_2))
              {
                l_62 = ATgetArgument(k_62, 0);
                m_62 = ATgetArgument(k_62, 1);
                h_61 :
                if(match_cons(m_62, sym_TNil_0))
                  {
                    ATerm q_62 = NULL,s_62 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_62), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = geq_0(t);
                    {
                      ATerm r_11;
                      r_11 = t;
                      {
                        ATerm r_62 = NULL;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_62), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                        t = subt_0(t);
                        r_62 = t;
                        if(q_62 != NULL && q_62 != r_62)
                          _fail(r_62);
                        else
                          q_62 = r_62;
                      }
                      t = r_11;
                      {
                        ATerm t_62 = NULL;
                        t = not_null(j_62);
                        t = p_57(t);
                        t_62 = t;
                        if(s_62 != NULL && s_62 != t_62)
                          _fail(t_62);
                        else
                          s_62 = t_62;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_62), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_62), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_62), not_null(l_62)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  t = for_3(t, q_3, r_3, s_3);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm e_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL;
  e_63 = t;
  a_63 :
  if(match_cons(e_63, sym_TCons_2))
    {
      h_63 = ATgetArgument(e_63, 0);
      i_63 = ATgetArgument(e_63, 1);
      c_63 :
      if(match_cons(i_63, sym_TCons_2))
        {
          j_63 = ATgetArgument(i_63, 0);
          k_63 = ATgetArgument(i_63, 1);
          d_63 :
          if(match_cons(k_63, sym_TNil_0))
            {
              ATerm s_11 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(h_63), not_null(j_63));
                  PopChoice();
                }
              else
                {
                  t = s_11;
                  t = SSL_addr(not_null(h_63), not_null(j_63));
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
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm s_63 = NULL;
  ATerm u_63 = NULL;
  s_63 = t;
  {
    ATerm w_63 = NULL;
    t = new_0(t);
    u_63 = t;
    {
      ATerm z_63 = NULL;
      t = new_0(t);
      w_63 = t;
      t = new_0(t);
      z_63 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_63)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_63)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_63), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_63))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(u_63), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_63), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_63)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_63), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_63)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
    }
  }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm q_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL;
  ATerm t_68 (ATerm t)
  {
    ATerm f_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL;
    ATerm g_67 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_65), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = add_0(t);
    g_67 = t;
    if(f_67 != NULL && f_67 != g_67)
      _fail(g_67);
    else
      f_67 = g_67;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_67), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TNil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = copy_1(t, new_0);
    h_67 = t;
    h_65 :
    if(match_cons(h_67, sym_Cons_2))
      {
        i_67 = ATgetArgument(h_67, 0);
        j_67 = ATgetArgument(h_67, 1);
        {
          ATerm r_67 = NULL;
          t = not_null(j_67);
          {
            ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL;
            t = last_0(t);
            r_67 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_67), not_null(j_67)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_67), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = zipr_1(t, MkThreadApplication_0);
            t = tuple_unzip_1(t, _id);
            t_67 = t;
            a_65 :
            if(match_cons(t_67, sym_TCons_2))
              {
                u_67 = ATgetArgument(t_67, 0);
                v_67 = ATgetArgument(t_67, 1);
                b_65 :
                if(match_cons(v_67, sym_TCons_2))
                  {
                    w_67 = ATgetArgument(v_67, 0);
                    x_67 = ATgetArgument(v_67, 1);
                    c_65 :
                    if(match_cons(x_67, sym_TCons_2))
                      {
                        y_67 = ATgetArgument(x_67, 0);
                        z_67 = ATgetArgument(x_67, 1);
                        d_65 :
                        if(match_cons(z_67, sym_TCons_2))
                          {
                            a_68 = ATgetArgument(z_67, 0);
                            b_68 = ATgetArgument(z_67, 1);
                            e_65 :
                            if(match_cons(b_68, sym_TCons_2))
                              {
                                c_68 = ATgetArgument(b_68, 0);
                                d_68 = ATgetArgument(b_68, 1);
                                f_65 :
                                if(match_cons(d_68, sym_TCons_2))
                                  {
                                    e_68 = ATgetArgument(d_68, 0);
                                    f_68 = ATgetArgument(d_68, 1);
                                    g_65 :
                                    if(match_cons(f_68, sym_TNil_0))
                                      {
                                        ATerm p_68 = NULL;
                                        ATerm q_68 = NULL;
                                        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_67), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_67), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_68), (ATerm) ATmakeAppl(sym_Nil_0))));
                                        t = concat_0(t);
                                        q_68 = t;
                                        if(p_68 != NULL && p_68 != q_68)
                                          _fail(q_68);
                                        else
                                          p_68 = q_68;
                                        t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(r_65), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), not_null(w_67), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_67), not_null(p_68)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(r_65), not_null(a_68)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_67)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(r_65), not_null(e_68)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_67)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(u_67))))));
                                      }
                                    else
                                      _fail(t);
                                  }
                                else
                                  _fail(t);
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
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
  q_65 = t;
  i_65 :
  if(match_cons(q_65, sym_TCons_2))
    {
      r_65 = ATgetArgument(q_65, 0);
      s_65 = ATgetArgument(q_65, 1);
      j_65 :
      if(match_cons(s_65, sym_TCons_2))
        {
          t_65 = ATgetArgument(s_65, 0);
          u_65 = ATgetArgument(s_65, 1);
          k_65 :
          if(match_string(t_65, "D"))
            {
              l_65 :
              if(match_cons(u_65, sym_TCons_2))
                {
                  v_65 = ATgetArgument(u_65, 0);
                  w_65 = ATgetArgument(u_65, 1);
                  m_65 :
                  if(match_cons(w_65, sym_TNil_0))
                    {
                      ATerm b_66 = NULL;
                      ATerm d_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL;
                      t = new_0(t);
                      b_66 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_65), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_66)), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = copy_1(t, MkDistApplication_0);
                      t = tuple_unzip_1(t, _id);
                      d_66 = t;
                      n_64 :
                      if(match_cons(d_66, sym_TCons_2))
                        {
                          e_66 = ATgetArgument(d_66, 0);
                          f_66 = ATgetArgument(d_66, 1);
                          o_64 :
                          if(match_cons(f_66, sym_TCons_2))
                            {
                              g_66 = ATgetArgument(f_66, 0);
                              h_66 = ATgetArgument(f_66, 1);
                              p_64 :
                              if(match_cons(h_66, sym_TCons_2))
                                {
                                  i_66 = ATgetArgument(h_66, 0);
                                  j_66 = ATgetArgument(h_66, 1);
                                  q_64 :
                                  if(match_cons(j_66, sym_TCons_2))
                                    {
                                      k_66 = ATgetArgument(j_66, 0);
                                      l_66 = ATgetArgument(j_66, 1);
                                      r_64 :
                                      if(match_cons(l_66, sym_TCons_2))
                                        {
                                          o_66 = ATgetArgument(l_66, 0);
                                          p_66 = ATgetArgument(l_66, 1);
                                          s_64 :
                                          if(match_cons(p_66, sym_TCons_2))
                                            {
                                              q_66 = ATgetArgument(p_66, 0);
                                              r_66 = ATgetArgument(p_66, 1);
                                              t_64 :
                                              if(match_cons(r_66, sym_TNil_0))
                                                {
                                                  ATerm y_66 = NULL;
                                                  ATerm z_66 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_66), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_66), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  z_66 = t;
                                                  if(y_66 != NULL && y_66 != z_66)
                                                    _fail(z_66);
                                                  else
                                                    y_66 = z_66;
                                                  t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(r_65), (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue))), not_null(g_66), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_66), not_null(y_66)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(r_65), not_null(k_66)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_66)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(r_65), not_null(q_66)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(e_66))))));
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
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
              if(match_string(t_65, "T"))
                {
                  n_65 :
                  if(match_cons(u_65, sym_TCons_2))
                    {
                      v_65 = ATgetArgument(u_65, 0);
                      w_65 = ATgetArgument(u_65, 1);
                      o_65 :
                      if(match_cons(w_65, sym_TNil_0))
                        {
                          p_65 :
                          if(match_int(v_65, 0))
                            {
                              ATerm t_11 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm b_67 = NULL;
                                  t = new_0(t);
                                  b_67 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(r_65), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_67), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(r_65), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_67)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(r_65), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_67)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Id_0)))));
                                  PopChoice();
                                }
                              else
                                {
                                  t = t_11;
                                  t = t_68(t);
                                }
                            }
                          else
                            t = t_68(t);
                        }
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
  ATerm m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL;
  m_69 = t;
  f_69 :
  if(match_cons(m_69, sym_TCons_2))
    {
      n_69 = ATgetArgument(m_69, 0);
      u_69 = ATgetArgument(m_69, 1);
      g_69 :
      if(match_cons(n_69, sym_TCons_2))
        {
          o_69 = ATgetArgument(n_69, 0);
          r_69 = ATgetArgument(n_69, 1);
          h_69 :
          if(match_cons(o_69, sym_Mod_2))
            {
              p_69 = ATgetArgument(o_69, 0);
              q_69 = ATgetArgument(o_69, 1);
              i_69 :
              if(match_cons(r_69, sym_TCons_2))
                {
                  s_69 = ATgetArgument(r_69, 0);
                  t_69 = ATgetArgument(r_69, 1);
                  j_69 :
                  if(match_cons(t_69, sym_TNil_0))
                    {
                      k_69 :
                      if(match_cons(u_69, sym_TCons_2))
                        {
                          v_69 = ATgetArgument(u_69, 0);
                          w_69 = ATgetArgument(u_69, 1);
                          l_69 :
                          if(match_cons(w_69, sym_TNil_0))
                            {
                              ATerm b_70 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_69), (ATerm) ATmakeAppl(sym_TNil_0))));
                              t = DefineCongruence_0(t);
                              t = desugar_0(t);
                              b_70 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_70), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_69), (ATerm) ATmakeAppl(sym_TNil_0)));
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm u_11 = t;
  if(PushChoice()==0)
    {
      t = CongruenceDef_0(t);
      PopChoice();
    }
  else
    {
      t = u_11;
      {
        ATerm v_11 = t;
        if(PushChoice()==0)
          {
            t = OverloadedDef_0(t);
            {
              ATerm c_4 (ATerm t)
              {
                t = TCons_2(t, _id, TNil_0);
                return(t);
              }
              t = TCons_2(t, joindefs_0, c_4);
            }
            PopChoice();
          }
        else
          {
            t = v_11;
            t = NonOverloadedDef_0(t);
            {
              ATerm d_4 (ATerm t)
              {
                t = TCons_2(t, _id, TNil_0);
                return(t);
              }
              t = TCons_2(t, joindefs_0, d_4);
            }
          }
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL;
  n_70 = t;
  g_70 :
  if(match_cons(n_70, sym_TCons_2))
    {
      o_70 = ATgetArgument(n_70, 0);
      r_70 = ATgetArgument(n_70, 1);
      h_70 :
      if(match_cons(o_70, sym_Cons_2))
        {
          p_70 = ATgetArgument(o_70, 0);
          q_70 = ATgetArgument(o_70, 1);
          i_70 :
          if(match_cons(r_70, sym_TCons_2))
            {
              s_70 = ATgetArgument(r_70, 0);
              t_70 = ATgetArgument(r_70, 1);
              j_70 :
              if(match_cons(t_70, sym_TCons_2))
                {
                  u_70 = ATgetArgument(t_70, 0);
                  v_70 = ATgetArgument(t_70, 1);
                  k_70 :
                  if(match_cons(v_70, sym_TCons_2))
                    {
                      w_70 = ATgetArgument(v_70, 0);
                      x_70 = ATgetArgument(v_70, 1);
                      l_70 :
                      if(match_cons(x_70, sym_TCons_2))
                        {
                          y_70 = ATgetArgument(x_70, 0);
                          z_70 = ATgetArgument(x_70, 1);
                          m_70 :
                          if(match_cons(z_70, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_70), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_70), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_70), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_70), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_70), not_null(y_70)), (ATerm) ATmakeAppl(sym_TNil_0))))));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL;
  l_71 = t;
  i_71 :
  if(match_cons(l_71, sym_TCons_2))
    {
      m_71 = ATgetArgument(l_71, 0);
      n_71 = ATgetArgument(l_71, 1);
      j_71 :
      if(match_cons(n_71, sym_TCons_2))
        {
          o_71 = ATgetArgument(n_71, 0);
          p_71 = ATgetArgument(n_71, 1);
          k_71 :
          if(match_cons(p_71, sym_TNil_0))
            {
              t = not_null(m_71);
              {
                ATerm e_4 (ATerm t)
                {
                  t = not_null(o_71);
                  return(t);
                }
                t = at_end_1(t, e_4);
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
ATerm HdMember_1 (ATerm t, ATerm e_58 (ATerm))
{
  ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL;
  w_71 = t;
  v_71 :
  if(match_cons(w_71, sym_Cons_2))
    {
      x_71 = ATgetArgument(w_71, 0);
      y_71 = ATgetArgument(w_71, 1);
      t = e_58(t);
      {
        ATerm n_4 (ATerm t)
        {
          ATerm b_72 = NULL;
          b_72 = t;
          if(x_71 != NULL && x_71 != b_72)
            _fail(b_72);
          else
            x_71 = b_72;
          return(t);
        }
        t = fetch_1(t, n_4);
        t = not_null(y_71);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL;
  j_72 = t;
  f_72 :
  if(match_cons(j_72, sym_TCons_2))
    {
      k_72 = ATgetArgument(j_72, 0);
      l_72 = ATgetArgument(j_72, 1);
      g_72 :
      if(match_cons(l_72, sym_TCons_2))
        {
          m_72 = ATgetArgument(l_72, 0);
          p_72 = ATgetArgument(l_72, 1);
          h_72 :
          if(match_cons(m_72, sym_Cons_2))
            {
              n_72 = ATgetArgument(m_72, 0);
              o_72 = ATgetArgument(m_72, 1);
              i_72 :
              if(match_cons(p_72, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_72), not_null(k_72)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_72), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL;
  y_72 = t;
  v_72 :
  if(match_cons(y_72, sym_TCons_2))
    {
      z_72 = ATgetArgument(y_72, 0);
      a_73 = ATgetArgument(y_72, 1);
      w_72 :
      if(match_cons(a_73, sym_TCons_2))
        {
          b_73 = ATgetArgument(a_73, 0);
          c_73 = ATgetArgument(a_73, 1);
          x_72 :
          if(match_cons(c_73, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_72), not_null(b_73));
          else
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
  ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL;
  m_73 = t;
  h_73 :
  if(match_cons(m_73, sym_TCons_2))
    {
      n_73 = ATgetArgument(m_73, 0);
      q_73 = ATgetArgument(m_73, 1);
      i_73 :
      if(match_cons(n_73, sym_Cons_2))
        {
          o_73 = ATgetArgument(n_73, 0);
          p_73 = ATgetArgument(n_73, 1);
          j_73 :
          if(match_cons(q_73, sym_TCons_2))
            {
              r_73 = ATgetArgument(q_73, 0);
              u_73 = ATgetArgument(q_73, 1);
              k_73 :
              if(match_cons(r_73, sym_Cons_2))
                {
                  s_73 = ATgetArgument(r_73, 0);
                  t_73 = ATgetArgument(r_73, 1);
                  l_73 :
                  if(match_cons(u_73, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(o_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_73), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(p_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_73), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL;
  g_74 = t;
  b_74 :
  if(match_cons(g_74, sym_TCons_2))
    {
      h_74 = ATgetArgument(g_74, 0);
      i_74 = ATgetArgument(g_74, 1);
      c_74 :
      if(match_cons(h_74, sym_Nil_0))
        {
          d_74 :
          if(match_cons(i_74, sym_TCons_2))
            {
              j_74 = ATgetArgument(i_74, 0);
              k_74 = ATgetArgument(i_74, 1);
              e_74 :
              if(match_cons(j_74, sym_Nil_0))
                {
                  f_74 :
                  if(match_cons(k_74, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm b_60 (ATerm), ATerm c_60 (ATerm), ATerm d_60 (ATerm), ATerm e_60 (ATerm))
{
  ATerm m_74 (ATerm t)
  {
    ATerm w_11 = t;
    if(PushChoice()==0)
      {
        t = b_60(t);
        PopChoice();
      }
    else
      {
        t = w_11;
        t = c_60(t);
        {
          ATerm o_4 (ATerm t)
          {
            t = TCons_2(t, m_74, TNil_0);
            return(t);
          }
          t = TCons_2(t, e_60, o_4);
          t = d_60(t);
        }
      }
    return(t);
  }
  t = m_74(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm g_60 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, g_60);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL;
  d_75 = t;
  z_74 :
  if(match_cons(d_75, sym_Cons_2))
    {
      e_75 = ATgetArgument(d_75, 0);
      j_75 = ATgetArgument(d_75, 1);
      a_75 :
      if(match_cons(e_75, sym_TCons_2))
        {
          f_75 = ATgetArgument(e_75, 0);
          g_75 = ATgetArgument(e_75, 1);
          b_75 :
          if(match_cons(g_75, sym_TCons_2))
            {
              h_75 = ATgetArgument(g_75, 0);
              i_75 = ATgetArgument(g_75, 1);
              c_75 :
              if(match_cons(i_75, sym_TNil_0))
                {
                  ATerm n_75 = NULL,o_75 = NULL,w_75 = NULL,e_76 = NULL;
                  ATerm x_11;
                  x_11 = t;
                  {
                    ATerm p_75 = NULL;
                    ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL;
                    t = not_null(h_75);
                    p_75 = t;
                    t = SSL_explode_term(not_null(p_75));
                    r_75 = t;
                    q_74 :
                    if(match_cons(r_75, sym_TCons_2))
                      {
                        s_75 = ATgetArgument(r_75, 0);
                        t_75 = ATgetArgument(r_75, 1);
                        r_74 :
                        if(match_cons(t_75, sym_TCons_2))
                          {
                            u_75 = ATgetArgument(t_75, 0);
                            v_75 = ATgetArgument(t_75, 1);
                            s_74 :
                            if(match_cons(v_75, sym_TNil_0))
                              {
                                if(n_75 != NULL && n_75 != s_75)
                                  _fail(s_75);
                                else
                                  n_75 = s_75;
                                if(o_75 != NULL && o_75 != u_75)
                                  _fail(u_75);
                                else
                                  o_75 = u_75;
                              }
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
                    ATerm y_11;
                    y_11 = t;
                    {
                      ATerm x_75 = NULL;
                      ATerm z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL;
                      t = not_null(f_75);
                      x_75 = t;
                      t = SSL_explode_term(not_null(x_75));
                      z_75 = t;
                      v_74 :
                      if(match_cons(z_75, sym_TCons_2))
                        {
                          a_76 = ATgetArgument(z_75, 0);
                          b_76 = ATgetArgument(z_75, 1);
                          w_74 :
                          if(match_cons(b_76, sym_TCons_2))
                            {
                              c_76 = ATgetArgument(b_76, 0);
                              d_76 = ATgetArgument(b_76, 1);
                              x_74 :
                              if(match_cons(d_76, sym_TNil_0))
                                {
                                  if(n_75 != NULL && n_75 != a_76)
                                    _fail(a_76);
                                  else
                                    n_75 = a_76;
                                  if(w_75 != NULL && w_75 != c_76)
                                    _fail(c_76);
                                  else
                                    w_75 = c_76;
                                }
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
                      ATerm f_76 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_75), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      f_76 = t;
                      if(e_76 != NULL && e_76 != f_76)
                        _fail(f_76);
                      else
                        e_76 = f_76;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_75), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL;
  r_76 = t;
  n_76 :
  if(match_cons(r_76, sym_Cons_2))
    {
      s_76 = ATgetArgument(r_76, 0);
      x_76 = ATgetArgument(r_76, 1);
      o_76 :
      if(match_cons(s_76, sym_TCons_2))
        {
          t_76 = ATgetArgument(s_76, 0);
          u_76 = ATgetArgument(s_76, 1);
          p_76 :
          if(match_cons(u_76, sym_TCons_2))
            {
              v_76 = ATgetArgument(u_76, 0);
              w_76 = ATgetArgument(u_76, 1);
              q_76 :
              if(match_cons(w_76, sym_TNil_0))
                {
                  ATerm z_76 = NULL;
                  if(t_76 != NULL && t_76 != v_76)
                    _fail(v_76);
                  else
                    t_76 = v_76;
                  if(z_76 != NULL && z_76 != x_76)
                    _fail(x_76);
                  else
                    z_76 = x_76;
                  t = not_null(z_76);
                }
              else
                _fail(t);
            }
          else
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
  ATerm z_11 = t;
  if(PushChoice()==0)
    {
      ATerm p_4 (ATerm t)
      {
        ATerm g_77 = NULL;
        g_77 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_77), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm u_4 (ATerm t)
      {
        ATerm w_4 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, w_4);
        return(t);
      }
      ATerm v_4 (ATerm t)
      {
        ATerm a_12 = t;
        if(PushChoice()==0)
          {
            ATerm x_4 (ATerm t)
            {
              ATerm y_4 (ATerm t)
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
              t = TCons_2(t, y_4, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, x_4);
            PopChoice();
          }
        else
          {
            t = a_12;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, p_4, u_4, v_4);
      PopChoice();
    }
  else
    {
      t = z_11;
      {
        ATerm i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL;
        i_77 = t;
        d_77 :
        if(match_cons(i_77, sym_TCons_2))
          {
            j_77 = ATgetArgument(i_77, 0);
            k_77 = ATgetArgument(i_77, 1);
            e_77 :
            if(match_cons(k_77, sym_TCons_2))
              {
                l_77 = ATgetArgument(k_77, 0);
                m_77 = ATgetArgument(k_77, 1);
                f_77 :
                if(match_cons(m_77, sym_TNil_0))
                  {
                    t = not_null(j_77);
                    {
                      ATerm r_77 (ATerm t)
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
                                  ATerm z_4 (ATerm t)
                                  {
                                    t = not_null(l_77);
                                    return(t);
                                  }
                                  t = HdMember_1(t, z_4);
                                  t = r_77(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = d_12;
                                  t = Cons_2(t, _id, r_77);
                                }
                            }
                          }
                        return(t);
                      }
                      t = r_77(t);
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
ATerm GnNextChangeGraph_3 (ATerm t, ATerm o_46 (ATerm), ATerm p_46 (ATerm), ATerm q_46 (ATerm))
{
  ATerm j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL,v_78 = NULL;
  j_78 = t;
  c_78 :
  if(match_cons(j_78, sym_TCons_2))
    {
      k_78 = ATgetArgument(j_78, 0);
      n_78 = ATgetArgument(j_78, 1);
      d_78 :
      if(match_cons(k_78, sym_Cons_2))
        {
          l_78 = ATgetArgument(k_78, 0);
          m_78 = ATgetArgument(k_78, 1);
          e_78 :
          if(match_cons(n_78, sym_TCons_2))
            {
              o_78 = ATgetArgument(n_78, 0);
              p_78 = ATgetArgument(n_78, 1);
              f_78 :
              if(match_cons(p_78, sym_TCons_2))
                {
                  q_78 = ATgetArgument(p_78, 0);
                  r_78 = ATgetArgument(p_78, 1);
                  g_78 :
                  if(match_cons(r_78, sym_TCons_2))
                    {
                      s_78 = ATgetArgument(r_78, 0);
                      t_78 = ATgetArgument(r_78, 1);
                      h_78 :
                      if(match_cons(t_78, sym_TCons_2))
                        {
                          u_78 = ATgetArgument(t_78, 0);
                          v_78 = ATgetArgument(t_78, 1);
                          i_78 :
                          if(match_cons(v_78, sym_TNil_0))
                            {
                              ATerm c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_78), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = o_46(t);
                              c_79 = t;
                              z_77 :
                              if(match_cons(c_79, sym_TCons_2))
                                {
                                  d_79 = ATgetArgument(c_79, 0);
                                  e_79 = ATgetArgument(c_79, 1);
                                  a_78 :
                                  if(match_cons(e_79, sym_TCons_2))
                                    {
                                      f_79 = ATgetArgument(e_79, 0);
                                      g_79 = ATgetArgument(e_79, 1);
                                      b_78 :
                                      if(match_cons(g_79, sym_TNil_0))
                                        {
                                          ATerm j_79 = NULL;
                                          t = not_null(d_79);
                                          {
                                            ATerm l_79 = NULL;
                                            t = p_46(t);
                                            j_79 = t;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_79), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_78), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            {
                                              ATerm n_79 = NULL,p_79 = NULL,r_79 = NULL;
                                              t = diff_0(t);
                                              l_79 = t;
                                              {
                                                ATerm e_12;
                                                e_12 = t;
                                                {
                                                  ATerm o_79 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_79), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_78), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  o_79 = t;
                                                  if(n_79 != NULL && n_79 != o_79)
                                                    _fail(o_79);
                                                  else
                                                    n_79 = o_79;
                                                }
                                                t = e_12;
                                                {
                                                  ATerm f_12;
                                                  f_12 = t;
                                                  {
                                                    ATerm q_79 = NULL;
                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_79), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_78), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                    t = conc_0(t);
                                                    q_79 = t;
                                                    if(p_79 != NULL && p_79 != q_79)
                                                      _fail(q_79);
                                                    else
                                                      p_79 = q_79;
                                                  }
                                                  t = f_12;
                                                  {
                                                    ATerm s_79 = NULL;
                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_79), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_78), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                    t = q_46(t);
                                                    s_79 = t;
                                                    if(r_79 != NULL && r_79 != s_79)
                                                      _fail(s_79);
                                                    else
                                                      r_79 = s_79;
                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_79), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_79), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_79), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_79), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_78), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
  ATerm i_80 = NULL,j_80 = NULL,k_80 = NULL,l_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL,p_80 = NULL,q_80 = NULL,r_80 = NULL,s_80 = NULL;
  i_80 = t;
  b_80 :
  if(match_cons(i_80, sym_TCons_2))
    {
      j_80 = ATgetArgument(i_80, 0);
      k_80 = ATgetArgument(i_80, 1);
      c_80 :
      if(match_cons(j_80, sym_Nil_0))
        {
          d_80 :
          if(match_cons(k_80, sym_TCons_2))
            {
              l_80 = ATgetArgument(k_80, 0);
              m_80 = ATgetArgument(k_80, 1);
              e_80 :
              if(match_cons(m_80, sym_TCons_2))
                {
                  n_80 = ATgetArgument(m_80, 0);
                  o_80 = ATgetArgument(m_80, 1);
                  f_80 :
                  if(match_cons(o_80, sym_TCons_2))
                    {
                      p_80 = ATgetArgument(o_80, 0);
                      q_80 = ATgetArgument(o_80, 1);
                      g_80 :
                      if(match_cons(q_80, sym_TCons_2))
                        {
                          r_80 = ATgetArgument(q_80, 0);
                          s_80 = ATgetArgument(q_80, 1);
                          h_80 :
                          if(match_cons(s_80, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_80), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm d_81 = NULL,e_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL;
  d_81 = t;
  z_80 :
  if(match_cons(d_81, sym_TCons_2))
    {
      e_81 = ATgetArgument(d_81, 0);
      f_81 = ATgetArgument(d_81, 1);
      a_81 :
      if(match_cons(f_81, sym_TCons_2))
        {
          g_81 = ATgetArgument(f_81, 0);
          h_81 = ATgetArgument(f_81, 1);
          b_81 :
          if(match_cons(h_81, sym_TCons_2))
            {
              i_81 = ATgetArgument(h_81, 0);
              j_81 = ATgetArgument(h_81, 1);
              c_81 :
              if(match_cons(j_81, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_81), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_81), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_81), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_81), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))))));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm o_52 (ATerm), ATerm p_52 (ATerm))
{
  ATerm o_81 (ATerm t)
  {
    ATerm g_12 = t;
    if(PushChoice()==0)
      {
        t = o_52(t);
        PopChoice();
      }
    else
      {
        t = g_12;
        t = p_52(t);
        t = o_81(t);
      }
    return(t);
  }
  t = o_81(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm r_52 (ATerm), ATerm s_52 (ATerm), ATerm t_52 (ATerm))
{
  t = r_52(t);
  t = while_not_2(t, s_52, t_52);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm x_46 (ATerm), ATerm y_46 (ATerm), ATerm z_46 (ATerm))
{
  ATerm d_5 (ATerm t)
  {
    ATerm h_12 = t;
    if(PushChoice()==0)
      {
        t = GnNextChangeGraph_3(t, x_46, y_46, z_46);
        PopChoice();
      }
    else
      {
        t = h_12;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, d_5);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm m_5 (ATerm t)
  {
    ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL,x_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL;
    u_81 = t;
    q_81 :
    if(match_cons(u_81, sym_TCons_2))
      {
        v_81 = ATgetArgument(u_81, 0);
        w_81 = ATgetArgument(u_81, 1);
        r_81 :
        if(match_cons(w_81, sym_TCons_2))
          {
            x_81 = ATgetArgument(w_81, 0);
            y_81 = ATgetArgument(w_81, 1);
            s_81 :
            if(match_cons(y_81, sym_TCons_2))
              {
                z_81 = ATgetArgument(y_81, 0);
                a_82 = ATgetArgument(y_81, 1);
                t_81 :
                if(match_cons(a_82, sym_TNil_0))
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_81), not_null(z_81));
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, svars_arity_0, m_5);
  t = FilterNonMissingDefs_0(t);
  {
    ATerm i_12 = t;
    if(PushChoice()==0)
      {
        t = NoMissingDefs_0(t);
        PopChoice();
      }
    else
      {
        t = i_12;
        t = MissingDefs_0(t);
        t = (ATerm) ATmakeInt(1);
        t = exit_0(t);
      }
  }
  return(t);
}
ATerm needed_defs_0 (ATerm t)
{
  ATerm f_82 = NULL;
  f_82 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("main", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_82), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = extract_needed_defs_0(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm y_43 (ATerm))
{
  ATerm l_82 = NULL,m_82 = NULL;
  l_82 = t;
  k_82 :
  if(match_cons(l_82, sym_Strategies_1))
    {
      m_82 = ATgetArgument(l_82, 0);
      {
        ATerm o_82 = NULL;
        t = not_null(m_82);
        t = y_43(t);
        o_82 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(o_82));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm d_46 (ATerm), ATerm e_46 (ATerm))
{
  ATerm w_82 = NULL,x_82 = NULL,y_82 = NULL;
  w_82 = t;
  v_82 :
  if(match_cons(w_82, sym_Cons_2))
    {
      x_82 = ATgetArgument(w_82, 0);
      y_82 = ATgetArgument(w_82, 1);
      {
        ATerm b_83 = NULL;
        t = not_null(x_82);
        {
          ATerm d_83 = NULL;
          t = d_46(t);
          b_83 = t;
          t = not_null(y_82);
          t = e_46(t);
          d_83 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_83), not_null(d_83));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm a_44 (ATerm))
{
  ATerm l_83 = NULL,m_83 = NULL;
  l_83 = t;
  k_83 :
  if(match_cons(l_83, sym_Specification_1))
    {
      m_83 = ATgetArgument(l_83, 0);
      {
        ATerm o_83 = NULL;
        t = not_null(m_83);
        t = a_44(t);
        o_83 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(o_83));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm t_83 = NULL;
  t_83 = t;
  s_83 :
  if(!(match_cons(t_83, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm z_45 (ATerm), ATerm a_46 (ATerm))
{
  ATerm y_83 = NULL,z_83 = NULL,a_84 = NULL;
  y_83 = t;
  x_83 :
  if(match_cons(y_83, sym_TCons_2))
    {
      z_83 = ATgetArgument(y_83, 0);
      a_84 = ATgetArgument(y_83, 1);
      {
        ATerm d_84 = NULL;
        t = not_null(z_83);
        {
          ATerm f_84 = NULL;
          t = z_45(t);
          d_84 = t;
          t = not_null(a_84);
          t = a_46(t);
          f_84 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_84), not_null(f_84));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm m_84 = NULL;
  ATerm j_12;
  j_12 = t;
  {
    ATerm n_5 (ATerm t)
    {
      ATerm n_84 = NULL,o_84 = NULL;
      n_84 = t;
      l_84 :
      if(match_cons(n_84, sym_Program_1))
        {
          o_84 = ATgetArgument(n_84, 0);
          if(m_84 != NULL && m_84 != o_84)
            _fail(o_84);
          else
            m_84 = o_84;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, n_5);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_84), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = j_12;
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
  ATerm v_84 = NULL,w_84 = NULL;
  ATerm t_5 (ATerm t)
  {
    ATerm u_5 (ATerm t)
    {
      ATerm k_12 = t;
      if(PushChoice()==0)
        {
          ATerm z_5 (ATerm t)
          {
            ATerm x_84 = NULL;
            x_84 = t;
            q_84 :
            if(!(match_cons(x_84, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, z_5);
          PopChoice();
          _fail(t);
        }
      else
        t = k_12;
      return(t);
    }
    ATerm y_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, u_5, y_5);
    {
      ATerm a_6 (ATerm t)
      {
        ATerm c_6 (ATerm t)
        {
          ATerm y_84 = NULL,z_84 = NULL;
          y_84 = t;
          s_84 :
          if(match_cons(y_84, sym_Runtime_1))
            {
              z_84 = ATgetArgument(y_84, 0);
              if(w_84 != NULL && w_84 != z_84)
                _fail(z_84);
              else
                w_84 = z_84;
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
            ATerm a_85 = NULL,b_85 = NULL;
            a_85 = t;
            u_84 :
            if(match_cons(a_85, sym_Program_1))
              {
                b_85 = ATgetArgument(a_85, 0);
                if(v_84 != NULL && v_84 != b_85)
                  _fail(b_85);
                else
                  v_84 = b_85;
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
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_84), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_84), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm i_85 = NULL,j_85 = NULL,k_85 = NULL,l_85 = NULL,m_85 = NULL;
  i_85 = t;
  f_85 :
  if(match_cons(i_85, sym_TCons_2))
    {
      j_85 = ATgetArgument(i_85, 0);
      k_85 = ATgetArgument(i_85, 1);
      g_85 :
      if(match_cons(k_85, sym_TCons_2))
        {
          l_85 = ATgetArgument(k_85, 0);
          m_85 = ATgetArgument(k_85, 1);
          h_85 :
          if(match_cons(m_85, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(j_85), not_null(l_85));
          else
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
  ATerm u_85 = NULL,v_85 = NULL,w_85 = NULL,x_85 = NULL,y_85 = NULL;
  u_85 = t;
  r_85 :
  if(match_cons(u_85, sym_TCons_2))
    {
      v_85 = ATgetArgument(u_85, 0);
      w_85 = ATgetArgument(u_85, 1);
      s_85 :
      if(match_cons(w_85, sym_TCons_2))
        {
          x_85 = ATgetArgument(w_85, 0);
          y_85 = ATgetArgument(w_85, 1);
          t_85 :
          if(match_cons(y_85, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(v_85), not_null(x_85));
          else
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
  ATerm g_86 = NULL;
  ATerm l_12;
  l_12 = t;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm m_12 = t;
      if(PushChoice()==0)
        {
          ATerm m_6 (ATerm t)
          {
            ATerm h_86 = NULL,i_86 = NULL;
            h_86 = t;
            d_86 :
            if(match_cons(h_86, sym_Output_1))
              {
                i_86 = ATgetArgument(h_86, 0);
                if(g_86 != NULL && g_86 != i_86)
                  _fail(i_86);
                else
                  g_86 = i_86;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, m_6);
          PopChoice();
        }
      else
        {
          t = m_12;
          {
            ATerm j_86 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            j_86 = t;
            if(g_86 != NULL && g_86 != j_86)
              _fail(j_86);
            else
              g_86 = j_86;
          }
        }
      return(t);
    }
    ATerm l_6 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, g_6, l_6);
  }
  t = l_12;
  {
    ATerm o_6 (ATerm t)
    {
      ATerm q_6 (ATerm t)
      {
        ATerm r_6 (ATerm t)
        {
          t = not_null(g_86);
          return(t);
        }
        t = split_2(t, r_6, _id);
        return(t);
      }
      t = TCons_2(t, q_6, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, o_6);
    {
      ATerm r_12 = t;
      if(PushChoice()==0)
        {
          ATerm s_6 (ATerm t)
          {
            ATerm u_6 (ATerm t)
            {
              ATerm k_86 = NULL;
              k_86 = t;
              f_86 :
              if(!(match_cons(k_86, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, u_6);
            return(t);
          }
          ATerm t_6 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, s_6, t_6);
          PopChoice();
        }
      else
        {
          t = r_12;
          {
            ATerm v_6 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
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
ATerm apply_strategy_1 (ATerm t, ATerm d_50 (ATerm))
{
  ATerm s_86 = NULL,u_86 = NULL,v_86 = NULL,w_86 = NULL,x_86 = NULL,y_86 = NULL;
  ATerm s_12;
  s_12 = t;
  t = dtime_0(t);
  t = s_12;
  t = d_50(t);
  {
    ATerm t_12;
    t_12 = t;
    {
      ATerm t_86 = NULL;
      t = dtime_0(t);
      t_86 = t;
      if(s_86 != NULL && s_86 != t_86)
        _fail(t_86);
      else
        s_86 = t_86;
    }
    t = t_12;
    u_86 = t;
    p_86 :
    if(match_cons(u_86, sym_TCons_2))
      {
        v_86 = ATgetArgument(u_86, 0);
        w_86 = ATgetArgument(u_86, 1);
        q_86 :
        if(match_cons(w_86, sym_TCons_2))
          {
            x_86 = ATgetArgument(w_86, 0);
            y_86 = ATgetArgument(w_86, 1);
            r_86 :
            if(match_cons(y_86, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(s_86)), not_null(v_86)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_86), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm e_87 = NULL;
  e_87 = t;
  t = SSL_ReadFromFile(not_null(e_87));
  return(t);
}
ATerm split_2 (ATerm t, ATerm f_63 (ATerm), ATerm g_63 (ATerm))
{
  ATerm k_87 = NULL;
  ATerm m_87 = NULL,o_87 = NULL;
  k_87 = t;
  {
    ATerm u_12;
    u_12 = t;
    {
      ATerm n_87 = NULL;
      t = not_null(k_87);
      t = f_63(t);
      n_87 = t;
      if(m_87 != NULL && m_87 != n_87)
        _fail(n_87);
      else
        m_87 = n_87;
    }
    t = u_12;
    {
      ATerm p_87 = NULL;
      t = not_null(k_87);
      t = g_63(t);
      p_87 = t;
      if(o_87 != NULL && o_87 != p_87)
        _fail(p_87);
      else
        o_87 = p_87;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_87), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_87), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_87 = NULL;
  ATerm v_12;
  v_12 = t;
  {
    ATerm w_12 = t;
    if(PushChoice()==0)
      {
        ATerm w_6 (ATerm t)
        {
          ATerm y_87 = NULL,z_87 = NULL;
          y_87 = t;
          v_87 :
          if(match_cons(y_87, sym_Input_1))
            {
              z_87 = ATgetArgument(y_87, 0);
              if(x_87 != NULL && x_87 != z_87)
                _fail(z_87);
              else
                x_87 = z_87;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, w_6);
        PopChoice();
      }
    else
      {
        t = w_12;
        {
          ATerm a_88 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          a_88 = t;
          if(x_87 != NULL && x_87 != a_88)
            _fail(a_88);
          else
            x_87 = a_88;
        }
      }
  }
  t = v_12;
  {
    ATerm b_7 (ATerm t)
    {
      t = not_null(x_87);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, b_7);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_88 = NULL;
  e_88 = t;
  d_88 :
  if(!(match_cons(e_88, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_50 (ATerm))
{
  ATerm c_7 (ATerm t)
  {
    ATerm x_12 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = x_12;
        {
          ATerm y_12 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = y_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, c_7);
  t = c_50(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm g_88 = NULL;
  g_88 = t;
  t = SSL_table_create(not_null(g_88));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_88 = NULL;
  k_88 = t;
  {
    ATerm z_12;
    z_12 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_88), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = z_12;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm s_88 = NULL,u_88 = NULL,v_88 = NULL,w_88 = NULL,x_88 = NULL;
  x_88 = t;
  q_88 :
  if(match_cons(x_88, sym_Cons_2))
    {
      s_88 = ATgetArgument(x_88, 0);
      u_88 = ATgetArgument(x_88, 1);
      r_88 :
      if(match_cons(u_88, sym_Cons_2))
        {
          v_88 = ATgetArgument(u_88, 0);
          w_88 = ATgetArgument(u_88, 1);
          {
            ATerm b_89 = NULL;
            t = not_null(s_88);
            t = d_0(t);
            {
              ATerm c_89 = NULL;
              t = not_null(v_88);
              t = e_0(t);
              c_89 = t;
              if(b_89 != NULL && b_89 != c_89)
                _fail(c_89);
              else
                b_89 = c_89;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_89), not_null(w_88));
            }
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(x_88, "register-usage-info"))
        t = register_usage_1(t, f_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm a_13 = t;
  if(PushChoice()==0)
    {
      ATerm e_7 (ATerm t)
      {
        ATerm s_89 = NULL;
        s_89 = t;
        g_89 :
        if(!(match_string(s_89, "-S")))
          {
            if(!(match_string(s_89, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm g_7 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm h_7 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, e_7, g_7, h_7);
      PopChoice();
    }
  else
    {
      t = a_13;
      {
        ATerm b_13 = t;
        if(PushChoice()==0)
          {
            ATerm i_7 (ATerm t)
            {
              ATerm t_89 = NULL;
              t_89 = t;
              h_89 :
              if(!(match_string(t_89, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm j_7 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm k_7 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, i_7, j_7, k_7);
            PopChoice();
          }
        else
          {
            t = b_13;
            {
              ATerm c_13 = t;
              if(PushChoice()==0)
                {
                  ATerm p_7 (ATerm t)
                  {
                    ATerm u_89 = NULL;
                    u_89 = t;
                    i_89 :
                    if(!(match_string(u_89, "-v")))
                      {
                        if(!(match_string(u_89, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm q_7 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm r_7 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, p_7, q_7, r_7);
                  PopChoice();
                }
              else
                {
                  t = c_13;
                  {
                    ATerm d_13 = t;
                    if(PushChoice()==0)
                      {
                        ATerm s_7 (ATerm t)
                        {
                          ATerm v_89 = NULL;
                          v_89 = t;
                          j_89 :
                          if(!(match_string(v_89, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm t_7 (ATerm t)
                        {
                          ATerm w_89 = NULL;
                          w_89 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(w_89));
                          return(t);
                        }
                        ATerm u_7 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, s_7, t_7, u_7);
                        PopChoice();
                      }
                    else
                      {
                        t = d_13;
                        {
                          ATerm e_13 = t;
                          if(PushChoice()==0)
                            {
                              ATerm v_7 (ATerm t)
                              {
                                ATerm y_89 = NULL;
                                y_89 = t;
                                l_89 :
                                if(!(match_string(y_89, "-i")))
                                  {
                                    if(!(match_string(y_89, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm w_7 (ATerm t)
                              {
                                ATerm z_89 = NULL;
                                z_89 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_89));
                                return(t);
                              }
                              ATerm x_7 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, v_7, w_7, x_7);
                              PopChoice();
                            }
                          else
                            {
                              t = e_13;
                              {
                                ATerm f_13 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm y_7 (ATerm t)
                                    {
                                      ATerm b_90 = NULL;
                                      b_90 = t;
                                      n_89 :
                                      if(!(match_string(b_90, "-o")))
                                        {
                                          if(!(match_string(b_90, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm z_7 (ATerm t)
                                    {
                                      ATerm c_90 = NULL;
                                      c_90 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_90));
                                      return(t);
                                    }
                                    ATerm a_8 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, y_7, z_7, a_8);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = f_13;
                                    {
                                      ATerm g_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm b_8 (ATerm t)
                                          {
                                            ATerm e_90 = NULL;
                                            e_90 = t;
                                            p_89 :
                                            if(!(match_string(e_90, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm c_8 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm d_8 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, b_8, c_8, d_8);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = g_13;
                                          {
                                            ATerm e_8 (ATerm t)
                                            {
                                              ATerm f_90 = NULL;
                                              f_90 = t;
                                              q_89 :
                                              if(!(match_string(f_90, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm f_8 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm g_8 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, e_8, f_8, g_8);
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
  ATerm k_90 = NULL;
  k_90 = t;
  t = SSL_table_destroy(not_null(k_90));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm o_90 = NULL;
  o_90 = t;
  t = SSL_exit(not_null(o_90));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm s_90 = NULL;
  s_90 = t;
  t = SSL_implode_string(not_null(s_90));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_62 (ATerm))
{
  ATerm w_90 (ATerm t)
  {
    ATerm p_13 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, w_90);
        PopChoice();
      }
    else
      {
        t = p_13;
        t = Nil_0(t);
        t = f_62(t);
      }
    return(t);
  }
  t = w_90(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_13 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = q_13;
      {
        ATerm z_90 = NULL,a_91 = NULL,b_91 = NULL;
        z_90 = t;
        y_90 :
        if(match_cons(z_90, sym_Cons_2))
          {
            a_91 = ATgetArgument(z_90, 0);
            b_91 = ATgetArgument(z_90, 1);
            t = not_null(a_91);
            {
              ATerm h_8 (ATerm t)
              {
                t = not_null(b_91);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, h_8);
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
  ATerm h_91 = NULL;
  h_91 = t;
  t = SSL_explode_string(not_null(h_91));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm j_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_61 (ATerm))
{
  ATerm k_91 (ATerm t)
  {
    ATerm r_13 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = r_13;
        t = Cons_2(t, r_61, k_91);
      }
    return(t);
  }
  t = k_91(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm q_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL,u_91 = NULL;
  q_91 = t;
  m_91 :
  if(match_cons(q_91, sym_TCons_2))
    {
      r_91 = ATgetArgument(q_91, 0);
      s_91 = ATgetArgument(q_91, 1);
      n_91 :
      if(match_cons(r_91, sym_Nil_0))
        {
          o_91 :
          if(match_cons(s_91, sym_TCons_2))
            {
              t_91 = ATgetArgument(s_91, 0);
              u_91 = ATgetArgument(s_91, 1);
              p_91 :
              if(match_cons(u_91, sym_TNil_0))
                t = not_null(t_91);
              else
                _fail(t);
            }
          else
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
  ATerm d_92 = NULL,e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL,i_92 = NULL,j_92 = NULL;
  d_92 = t;
  z_91 :
  if(match_cons(d_92, sym_TCons_2))
    {
      e_92 = ATgetArgument(d_92, 0);
      h_92 = ATgetArgument(d_92, 1);
      a_92 :
      if(match_cons(e_92, sym_Cons_2))
        {
          f_92 = ATgetArgument(e_92, 0);
          g_92 = ATgetArgument(e_92, 1);
          b_92 :
          if(match_cons(h_92, sym_TCons_2))
            {
              i_92 = ATgetArgument(h_92, 0);
              j_92 = ATgetArgument(h_92, 1);
              c_92 :
              if(match_cons(j_92, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_92), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_92), not_null(i_92)), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm x_51 (ATerm), ATerm y_51 (ATerm))
{
  ATerm o_92 (ATerm t)
  {
    ATerm t_13 = t;
    if(PushChoice()==0)
      {
        t = x_51(t);
        t = o_92(t);
        PopChoice();
      }
    else
      {
        t = t_13;
        t = y_51(t);
      }
    return(t);
  }
  t = o_92(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm a_52 (ATerm))
{
  t = repeat_2(t, a_52, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm q_92 = NULL;
  q_92 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_92), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm i_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm g_41 (ATerm))
{
  ATerm x_92 = NULL,y_92 = NULL;
  x_92 = t;
  w_92 :
  if(match_cons(x_92, sym_Program_1))
    {
      y_92 = ATgetArgument(x_92, 0);
      {
        ATerm a_93 = NULL;
        t = not_null(y_92);
        t = g_41(t);
        a_93 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_93));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm i_93 = NULL;
  ATerm i_8 (ATerm t)
  {
    ATerm j_8 (ATerm t)
    {
      ATerm j_93 = NULL;
      j_93 = t;
      if(i_93 != NULL && i_93 != j_93)
        _fail(j_93);
      else
        i_93 = j_93;
      return(t);
    }
    t = Program_1(t, j_8);
    return(t);
  }
  t = option_defined_1(t, i_8);
  {
    ATerm k_8 (ATerm t)
    {
      ATerm k_93 = NULL;
      ATerm l_93 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm l_8 (ATerm t)
        {
          t = not_null(i_93);
          return(t);
        }
        t = short_description_1(t, l_8);
        t = concat_strings_0(t);
        l_93 = t;
        if(k_93 != NULL && k_93 != l_93)
          _fail(l_93);
        else
          k_93 = l_93;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_93), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, k_8);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm m_8 (ATerm t)
      {
        ATerm m_93 = NULL;
        m_93 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_93), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, m_8);
      {
        ATerm n_8 (ATerm t)
        {
          ATerm o_93 = NULL;
          ATerm p_93 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm o_8 (ATerm t)
            {
              t = not_null(i_93);
              return(t);
            }
            t = long_description_1(t, o_8);
            t = concat_strings_0(t);
            p_93 = t;
            if(o_93 != NULL && o_93 != p_93)
              _fail(p_93);
            else
              o_93 = p_93;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_93), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, n_8);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm z_93 = NULL,a_94 = NULL,b_94 = NULL,c_94 = NULL,d_94 = NULL;
  z_93 = t;
  w_93 :
  if(match_cons(z_93, sym_TCons_2))
    {
      a_94 = ATgetArgument(z_93, 0);
      b_94 = ATgetArgument(z_93, 1);
      x_93 :
      if(match_cons(b_94, sym_TCons_2))
        {
          c_94 = ATgetArgument(b_94, 0);
          d_94 = ATgetArgument(b_94, 1);
          y_93 :
          if(match_cons(d_94, sym_TNil_0))
            {
              ATerm u_13;
              u_13 = t;
              t = SSL_printnl(not_null(a_94), not_null(c_94));
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
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm h_41 (ATerm))
{
  ATerm k_94 = NULL,l_94 = NULL;
  k_94 = t;
  j_94 :
  if(match_cons(k_94, sym_Undefined_1))
    {
      l_94 = ATgetArgument(k_94, 0);
      {
        ATerm n_94 = NULL;
        t = not_null(l_94);
        t = h_41(t);
        n_94 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_94));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm z_61 (ATerm))
{
  ATerm r_94 (ATerm t)
  {
    ATerm v_13 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, z_61, _id);
        PopChoice();
      }
    else
      {
        t = v_13;
        t = Cons_2(t, _id, r_94);
      }
    return(t);
  }
  t = r_94(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm h_49 (ATerm))
{
  t = fetch_1(t, h_49);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm u_94 = NULL;
  u_94 = t;
  s_94 :
  if(!(match_cons(u_94, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_63 (ATerm))
{
  ATerm w_13 = t;
  if(PushChoice()==0)
    {
      t = x_63(t);
      PopChoice();
    }
  else
    t = w_13;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_94 = NULL,a_95 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL;
  z_94 = t;
  w_94 :
  if(match_cons(z_94, sym_TCons_2))
    {
      a_95 = ATgetArgument(z_94, 0);
      b_95 = ATgetArgument(z_94, 1);
      x_94 :
      if(match_cons(b_95, sym_TCons_2))
        {
          c_95 = ATgetArgument(b_95, 0);
          d_95 = ATgetArgument(b_95, 1);
          y_94 :
          if(match_cons(d_95, sym_TNil_0))
            t = SSL_table_get(not_null(a_95), not_null(c_95));
          else
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
  ATerm n_95 = NULL,o_95 = NULL,p_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL;
  n_95 = t;
  j_95 :
  if(match_cons(n_95, sym_TCons_2))
    {
      o_95 = ATgetArgument(n_95, 0);
      p_95 = ATgetArgument(n_95, 1);
      k_95 :
      if(match_cons(p_95, sym_TCons_2))
        {
          q_95 = ATgetArgument(p_95, 0);
          r_95 = ATgetArgument(p_95, 1);
          l_95 :
          if(match_cons(r_95, sym_TCons_2))
            {
              s_95 = ATgetArgument(r_95, 0);
              t_95 = ATgetArgument(r_95, 1);
              m_95 :
              if(match_cons(t_95, sym_TNil_0))
                {
                  ATerm x_13;
                  x_13 = t;
                  {
                    ATerm y_95 = NULL;
                    ATerm z_95 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_95), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_95), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm y_13 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = y_13;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      z_95 = t;
                      if(y_95 != NULL && y_95 != z_95)
                        _fail(z_95);
                      else
                        y_95 = z_95;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_95), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_95), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_95), not_null(y_95)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
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
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm n_48 (ATerm))
{
  ATerm d_96 = NULL;
  ATerm e_96 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = n_48(t);
  e_96 = t;
  if(d_96 != NULL && d_96 != e_96)
    _fail(e_96);
  else
    d_96 = e_96;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_96), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm k_96 = NULL,l_96 = NULL,m_96 = NULL;
  m_96 = t;
  j_96 :
  if(match_cons(m_96, sym_Cons_2))
    {
      k_96 = ATgetArgument(m_96, 0);
      l_96 = ATgetArgument(m_96, 1);
      {
        ATerm p_96 = NULL;
        t = not_null(k_96);
        t = a_0(t);
        {
          ATerm q_96 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = b_0(t);
          q_96 = t;
          if(p_96 != NULL && p_96 != q_96)
            _fail(q_96);
          else
            p_96 = q_96;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_96), not_null(l_96));
        }
      }
    }
  else
    {
      if(match_string(m_96, "register-usage-info"))
        t = register_usage_1(t, c_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm p_8 (ATerm t)
  {
    ATerm v_96 = NULL;
    v_96 = t;
    u_96 :
    if(!(match_string(v_96, "--help")))
      {
        if(!(match_string(v_96, "-h")))
          {
            if(!(match_string(v_96, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm q_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm r_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, p_8, q_8, r_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm y_96 = NULL,z_96 = NULL,a_97 = NULL;
  y_96 = t;
  x_96 :
  if(match_cons(y_96, sym_Cons_2))
    {
      z_96 = ATgetArgument(y_96, 0);
      a_97 = ATgetArgument(y_96, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(z_96)), not_null(a_97));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm l_48 (ATerm))
{
  ATerm z_13;
  z_13 = t;
  {
    ATerm s_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = l_48(t);
      return(t);
    }
    t = try_1(t, s_8);
  }
  t = z_13;
  {
    ATerm t_8 (ATerm t)
    {
      ATerm f_97 = NULL;
      f_97 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_97));
      return(t);
    }
    ATerm u_8 (ATerm t)
    {
      ATerm a_14 = t;
      if(PushChoice()==0)
        {
          ATerm b_14 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = b_14;
              t = l_48(t);
              t = Cons_2(t, _id, u_8);
            }
          PopChoice();
        }
      else
        {
          t = a_14;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, t_8, u_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm o_97 = NULL,p_97 = NULL,q_97 = NULL;
  ATerm c_14;
  c_14 = t;
  {
    ATerm r_97 = NULL,s_97 = NULL,t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL;
    r_97 = t;
    k_97 :
    if(match_cons(r_97, sym_TCons_2))
      {
        s_97 = ATgetArgument(r_97, 0);
        t_97 = ATgetArgument(r_97, 1);
        l_97 :
        if(match_cons(t_97, sym_TCons_2))
          {
            u_97 = ATgetArgument(t_97, 0);
            v_97 = ATgetArgument(t_97, 1);
            m_97 :
            if(match_cons(v_97, sym_TCons_2))
              {
                w_97 = ATgetArgument(v_97, 0);
                x_97 = ATgetArgument(v_97, 1);
                n_97 :
                if(match_cons(x_97, sym_TNil_0))
                  {
                    if(o_97 != NULL && o_97 != s_97)
                      _fail(s_97);
                    else
                      o_97 = s_97;
                    if(p_97 != NULL && p_97 != u_97)
                      _fail(u_97);
                    else
                      p_97 = u_97;
                    if(q_97 != NULL && q_97 != w_97)
                      _fail(w_97);
                    else
                      q_97 = w_97;
                    t = SSL_table_put(not_null(o_97), not_null(p_97), not_null(q_97));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = c_14;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm k_48 (ATerm))
{
  ATerm a_98 = NULL;
  ATerm h_14;
  h_14 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = h_14;
  {
    ATerm v_8 (ATerm t)
    {
      ATerm k_14 = t;
      if(PushChoice()==0)
        {
          t = k_48(t);
          PopChoice();
        }
      else
        {
          t = k_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, v_8);
    {
      ATerm w_8 (ATerm t)
      {
        ATerm m_14 = t;
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
            t = m_14;
            {
              ATerm x_8 (ATerm t)
              {
                ATerm y_8 (ATerm t)
                {
                  ATerm b_98 = NULL;
                  b_98 = t;
                  if(a_98 != NULL && a_98 != b_98)
                    _fail(b_98);
                  else
                    a_98 = b_98;
                  return(t);
                }
                t = Undefined_1(t, y_8);
                return(t);
              }
              t = option_defined_1(t, x_8);
              {
                ATerm n_14;
                n_14 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_98), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = n_14;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, w_8);
      {
        ATerm o_14;
        o_14 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = o_14;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm r_49 (ATerm), ATerm s_49 (ATerm), ATerm t_49 (ATerm))
{
  ATerm z_8 (ATerm t)
  {
    ATerm t_14 = t;
    if(PushChoice()==0)
      {
        t = s_49(t);
        PopChoice();
      }
    else
      {
        t = t_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, z_8);
  t = store_options_0(t);
  {
    ATerm u_14 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, t_49);
        PopChoice();
      }
    else
      {
        t = u_14;
        {
          ATerm v_14 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, r_49);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = v_14;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm m_49 (ATerm), ATerm n_49 (ATerm))
{
  t = iowrap_3(t, m_49, n_49, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm j_49 (ATerm))
{
  ATerm a_9 (ATerm t)
  {
    ATerm b_9 (ATerm t)
    {
      t = TCons_2(t, j_49, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, b_9);
    return(t);
  }
  t = iowrap_2(t, a_9, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm c_9 (ATerm t)
  {
    ATerm d_9 (ATerm t)
    {
      ATerm e_9 (ATerm t)
      {
        ATerm f_9 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, f_9, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, e_9);
      return(t);
    }
    t = Specification_1(t, d_9);
    return(t);
  }
  t = iowrap_1(t, c_9);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_0(t);
  return(t);
}
