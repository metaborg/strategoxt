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
ATerm filter_1 (ATerm, ATerm l_56 (ATerm));
ATerm FilterNonMissingDefs_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm f_42 (ATerm), ATerm g_42 (ATerm));
ATerm Let_2 (ATerm, ATerm h_42 (ATerm), ATerm i_42 (ATerm));
ATerm sboundin_3 (ATerm, ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm z_63 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm s_50 (ATerm), ATerm t_50 (ATerm), ATerm u_50 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm i_50 (ATerm), ATerm j_50 (ATerm));
ATerm diff_1 (ATerm, ATerm n_50 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm v_54 (ATerm), ATerm w_54 (ATerm), ATerm x_54 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm y_54 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_49 (ATerm), ATerm h_49 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm a_63 (ATerm), ATerm b_63 (ATerm));
ATerm alltd_1 (ATerm, ATerm a_62 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm c_63 (ATerm), ATerm d_63 (ATerm));
ATerm substitute_1 (ATerm, ATerm e_63 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm NonOverloadedDef_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm j_42 (ATerm), ATerm k_42 (ATerm), ATerm l_42 (ATerm));
ATerm partition_1 (ATerm, ATerm t_56 (ATerm));
ATerm OverloadedDef_0 (ATerm);
ATerm Expl_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm g_40 (ATerm), ATerm h_40 (ATerm));
ATerm Con_3 (ATerm, ATerm d_40 (ATerm), ATerm e_40 (ATerm), ATerm f_40 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm j_43 (ATerm), ATerm k_43 (ATerm));
ATerm oncetd_1 (ATerm, ATerm m_61 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm w_59 (ATerm));
ATerm desugar_0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm m_58 (ATerm));
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm l_57 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm new_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm y_49 (ATerm));
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
ATerm genzip_4 (ATerm, ATerm d_57 (ATerm), ATerm e_57 (ATerm), ATerm f_57 (ATerm), ATerm g_57 (ATerm));
ATerm zip_1 (ATerm, ATerm i_57 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm z_43 (ATerm), ATerm a_44 (ATerm), ATerm b_44 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm u_52 (ATerm), ATerm v_52 (ATerm));
ATerm for_3 (ATerm, ATerm x_52 (ATerm), ATerm y_52 (ATerm), ATerm z_52 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm i_44 (ATerm), ATerm j_44 (ATerm), ATerm k_44 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm h_50 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm i_49 (ATerm), ATerm j_49 (ATerm), ATerm k_49 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm n_41 (ATerm));
ATerm Cons_2 (ATerm, ATerm s_43 (ATerm), ATerm t_43 (ATerm));
ATerm Specification_1 (ATerm, ATerm p_41 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm o_43 (ATerm), ATerm p_43 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm o_47 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm t_58 (ATerm), ATerm u_58 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm n_47 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_65 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm u_45 (ATerm));
ATerm map_1 (ATerm, ATerm v_64 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm d_52 (ATerm), ATerm e_52 (ATerm));
ATerm repeat_1 (ATerm, ATerm g_52 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm t_45 (ATerm));
ATerm Program_1 (ATerm, ATerm w_38 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm x_38 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_65 (ATerm));
ATerm option_defined_1 (ATerm, ATerm s_46 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_59 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm y_45 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm w_45 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm v_45 (ATerm));
ATerm iowrap_3 (ATerm, ATerm c_47 (ATerm), ATerm d_47 (ATerm), ATerm e_47 (ATerm));
ATerm iowrap_2 (ATerm, ATerm x_46 (ATerm), ATerm y_46 (ATerm));
ATerm iowrap_1 (ATerm, ATerm u_46 (ATerm));
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
  ATerm z_8;
  z_8 = t;
  {
    ATerm g_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, g_0, _id);
    t = printnl_0(t);
  }
  t = z_8;
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
                      ATerm a_9 = t;
                      if(PushChoice()==0)
                        {
                          t = MissingDefMod_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = a_9;
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
ATerm filter_1 (ATerm t, ATerm l_56 (ATerm))
{
  ATerm b_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = b_9;
      {
        ATerm c_9 = t;
        if(PushChoice()==0)
          {
            ATerm i_0 (ATerm t)
            {
              t = filter_1(t, l_56);
              return(t);
            }
            t = Cons_2(t, l_56, i_0);
            PopChoice();
          }
        else
          {
            t = c_9;
            {
              ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
              r_4 = t;
              q_4 :
              if(match_cons(r_4, sym_Cons_2))
                {
                  s_4 = ATgetArgument(r_4, 0);
                  t_4 = ATgetArgument(r_4, 1);
                  t = not_null(t_4);
                  t = filter_1(t, l_56);
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
  ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL,h_6 = NULL,i_6 = NULL;
  k_5 = t;
  h_5 :
  if(match_cons(k_5, sym_TCons_2))
    {
      l_5 = ATgetArgument(k_5, 0);
      m_5 = ATgetArgument(k_5, 1);
      i_5 :
      if(match_cons(m_5, sym_TCons_2))
        {
          h_6 = ATgetArgument(m_5, 0);
          i_6 = ATgetArgument(m_5, 1);
          j_5 :
          if(match_cons(i_6, sym_TNil_0))
            {
              ATerm e_7 = NULL;
              t = not_null(h_6);
              {
                ATerm j_0 (ATerm t)
                {
                  ATerm h_9 = t;
                  if(PushChoice()==0)
                    {
                      ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL;
                      v_6 = t;
                      a_5 :
                      if(match_cons(v_6, sym_TCons_2))
                        {
                          w_6 = ATgetArgument(v_6, 0);
                          x_6 = ATgetArgument(v_6, 1);
                          e_5 :
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
                                        ATerm i_9 = t;
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
                                            t = i_9;
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
                    t = h_9;
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
ATerm Rec_2 (ATerm t, ATerm f_42 (ATerm), ATerm g_42 (ATerm))
{
  ATerm p_7 = NULL,x_7 = NULL,y_7 = NULL;
  p_7 = t;
  o_7 :
  if(match_cons(p_7, sym_Rec_2))
    {
      x_7 = ATgetArgument(p_7, 0);
      y_7 = ATgetArgument(p_7, 1);
      {
        ATerm b_8 = NULL;
        t = not_null(x_7);
        {
          ATerm d_8 = NULL;
          t = f_42(t);
          b_8 = t;
          t = not_null(y_7);
          t = g_42(t);
          d_8 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(b_8), not_null(d_8));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm h_42 (ATerm), ATerm i_42 (ATerm))
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
          t = h_42(t);
          u_8 = t;
          t = not_null(r_8);
          t = i_42(t);
          w_8 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(u_8), not_null(w_8));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm z_63 (ATerm))
{
  ATerm j_9 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, x_63, x_63);
      PopChoice();
    }
  else
    {
      t = j_9;
      {
        ATerm k_9 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, z_63, z_63, x_63);
            PopChoice();
          }
        else
          {
            t = k_9;
            t = Rec_2(t, z_63, x_63);
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
          ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,m_11 = NULL;
          h_11 = t;
          a_11 :
          if(match_cons(h_11, sym_SDef_3))
            {
              i_11 = ATgetArgument(h_11, 0);
              j_11 = ATgetArgument(h_11, 1);
              m_11 = ATgetArgument(h_11, 2);
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
ATerm crush_3 (ATerm t, ATerm s_50 (ATerm), ATerm t_50 (ATerm), ATerm u_50 (ATerm))
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
    t = foldr_3(t, s_50, t_50, u_50);
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm i_50 (ATerm), ATerm j_50 (ATerm))
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
  x_12 = t;
  w_12 :
  if(match_cons(x_12, sym_Cons_2))
    {
      y_12 = ATgetArgument(x_12, 0);
      z_12 = ATgetArgument(x_12, 1);
      t = j_50(t);
      {
        ATerm p_0 (ATerm t)
        {
          ATerm c_13 = NULL;
          c_13 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_13), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = i_50(t);
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
ATerm diff_1 (ATerm t, ATerm n_50 (ATerm))
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,p_13 = NULL,q_13 = NULL;
  k_13 = t;
  h_13 :
  if(match_cons(k_13, sym_TCons_2))
    {
      l_13 = ATgetArgument(k_13, 0);
      m_13 = ATgetArgument(k_13, 1);
      i_13 :
      if(match_cons(m_13, sym_TCons_2))
        {
          p_13 = ATgetArgument(m_13, 0);
          q_13 = ATgetArgument(m_13, 1);
          j_13 :
          if(match_cons(q_13, sym_TNil_0))
            {
              t = not_null(l_13);
              {
                ATerm v_13 (ATerm t)
                {
                  ATerm l_9 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = l_9;
                      {
                        ATerm s_9 = t;
                        if(PushChoice()==0)
                          {
                            ATerm q_0 (ATerm t)
                            {
                              t = not_null(p_13);
                              return(t);
                            }
                            t = HdMember_p__2(t, n_50, q_0);
                            t = v_13(t);
                            PopChoice();
                          }
                        else
                          {
                            t = s_9;
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
ATerm free_vars2_4 (ATerm t, ATerm v_54 (ATerm), ATerm w_54 (ATerm), ATerm x_54 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm y_54 (ATerm))
{
  ATerm z_13 (ATerm t)
  {
    ATerm r_0 (ATerm t)
    {
      ATerm t_9 = t;
      if(PushChoice()==0)
        {
          t = v_54(t);
          PopChoice();
        }
      else
        {
          t = t_9;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      return(t);
    }
    ATerm s_0 (ATerm t)
    {
      ATerm u_9 = t;
      if(PushChoice()==0)
        {
          ATerm x_13 = NULL;
          ATerm v_9;
          v_9 = t;
          {
            ATerm y_13 = NULL;
            t = w_54(t);
            y_13 = t;
            if(x_13 != NULL && x_13 != y_13)
              _fail(y_13);
            else
              x_13 = y_13;
          }
          t = v_9;
          {
            ATerm t_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                t = not_null(x_13);
                return(t);
              }
              t = split_2(t, z_13, v_0);
              t = diff_1(t, y_54);
              return(t);
            }
            ATerm u_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = x_54(t, t_0, z_13, u_0);
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
          t = u_9;
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
              ATerm w_14 = NULL;
              t = not_null(p_14);
              t = length_0(t);
              w_14 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(o_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_14), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0));
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
    ATerm w_9 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = w_9;
        {
          ATerm x_9 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = x_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,n_15 = NULL;
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
                        n_15 = ATgetArgument(e_15, 1);
                        l_14 :
                        if(match_cons(n_15, sym_TNil_0))
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
ATerm foldr_2 (ATerm t, ATerm g_49 (ATerm), ATerm h_49 (ATerm))
{
  ATerm y_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = g_49(t);
      PopChoice();
    }
  else
    {
      t = y_9;
      {
        ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
        g_16 = t;
        u_15 :
        if(match_cons(g_16, sym_Cons_2))
          {
            h_16 = ATgetArgument(g_16, 0);
            i_16 = ATgetArgument(g_16, 1);
            {
              ATerm m_16 = NULL;
              t = not_null(i_16);
              t = foldr_2(t, g_49, h_49);
              m_16 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_16), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = h_49(t);
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
  f_17 :
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
  ATerm z_9 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = z_9;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm a_63 (ATerm), ATerm b_63 (ATerm))
{
  ATerm d_19 = NULL;
  ATerm f_19 = NULL;
  d_19 = t;
  {
    ATerm h_19 = NULL;
    t = a_63(t);
    f_19 = t;
    t = b_63(t);
    h_19 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_19), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm a_62 (ATerm))
{
  ATerm m_19 (ATerm t)
  {
    ATerm a_10 = t;
    if(PushChoice()==0)
      {
        t = a_62(t);
        PopChoice();
      }
    else
      {
        t = a_10;
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
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      i_20 = t;
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
ATerm substitute_2 (ATerm t, ATerm c_63 (ATerm), ATerm d_63 (ATerm))
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,w_20 = NULL;
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
          w_20 = ATgetArgument(t_20, 1);
          q_20 :
          if(match_cons(w_20, sym_TNil_0))
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
                  t = SubsVar_2(t, c_63, e_1);
                  t = d_63(t);
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
ATerm substitute_1 (ATerm t, ATerm e_63 (ATerm))
{
  t = substitute_2(t, e_63, _id);
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
            ATerm t_22 = NULL;
            t = not_null(u_21);
            {
              ATerm e_23 = NULL;
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
                      t = (ATerm) ATmakeAppl(sym_TNil_0);
                      t = new_0(t);
                      g_22 = t;
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(g_22), not_null(d_22));
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, f_1);
              t_22 = t;
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
                e_23 = t;
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
                          ATerm m_23 = NULL,n_23 = NULL,s_23 = NULL;
                          if(t_21 != NULL && t_21 != h_23)
                            _fail(h_23);
                          else
                            t_21 = h_23;
                          if(m_23 != NULL && m_23 != i_23)
                            _fail(i_23);
                          else
                            m_23 = i_23;
                          if(n_23 != NULL && n_23 != j_23)
                            _fail(j_23);
                          else
                            n_23 = j_23;
                          t = not_null(m_23);
                          {
                            ATerm i_1 (ATerm t)
                            {
                              ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
                              o_23 = t;
                              k_21 :
                              if(match_cons(o_23, sym_VarDec_2))
                                {
                                  p_23 = ATgetArgument(o_23, 0);
                                  q_23 = ATgetArgument(o_23, 1);
                                  t = not_null(p_23);
                                }
                              else
                                _fail(t);
                              return(t);
                            }
                            t = map_1(t, i_1);
                            s_23 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_23), (ATerm) ATmakeAppl(sym_TNil_0))));
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
                  t = choices_0(t);
                  w_23 = t;
                  t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(t_21), not_null(t_22), not_null(w_23));
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
  ATerm b_10 = t;
  if(PushChoice()==0)
    {
      t = JoinDefs1_0(t);
      PopChoice();
    }
  else
    {
      t = b_10;
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
ATerm SDef_3 (ATerm t, ATerm j_42 (ATerm), ATerm k_42 (ATerm), ATerm l_42 (ATerm))
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
          t = j_42(t);
          c_26 = t;
          t = not_null(x_25);
          {
            ATerm g_26 = NULL;
            t = k_42(t);
            e_26 = t;
            t = not_null(y_25);
            t = l_42(t);
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
ATerm partition_1 (ATerm t, ATerm t_56 (ATerm))
{
  ATerm y_28 (ATerm t)
  {
    ATerm c_10 = t;
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
        t = c_10;
        {
          ATerm d_10 = t;
          if(PushChoice()==0)
            {
              ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL;
              t = Cons_2(t, t_56, y_28);
              q_27 = t;
              u_26 :
              if(match_cons(q_27, sym_Cons_2))
                {
                  r_27 = ATgetArgument(q_27, 0);
                  s_27 = ATgetArgument(q_27, 1);
                  g_27 :
                  if(match_cons(s_27, sym_TCons_2))
                    {
                      t_27 = ATgetArgument(s_27, 0);
                      f_28 = ATgetArgument(s_27, 1);
                      h_27 :
                      if(match_cons(f_28, sym_TCons_2))
                        {
                          g_28 = ATgetArgument(f_28, 0);
                          h_28 = ATgetArgument(f_28, 1);
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
              t = d_10;
              {
                ATerm l_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL;
                t = Cons_2(t, _id, y_28);
                l_28 = t;
                k_27 :
                if(match_cons(l_28, sym_Cons_2))
                  {
                    p_28 = ATgetArgument(l_28, 0);
                    q_28 = ATgetArgument(l_28, 1);
                    m_27 :
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
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_28), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_28), not_null(t_28)), (ATerm) ATmakeAppl(sym_TNil_0)));
                            else
                              _fail(t);
                          }
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
                                ATerm h_10;
                                h_10 = t;
                                {
                                  ATerm y_29 = NULL;
                                  t = length_0(t);
                                  y_29 = t;
                                  if(p_29 != NULL && p_29 != y_29)
                                    _fail(y_29);
                                  else
                                    p_29 = y_29;
                                }
                                t = h_10;
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
                ATerm q_31 = NULL,r_31 = NULL,x_31 = NULL;
                q_31 = t;
                m_30 :
                if(match_cons(q_31, sym_Explode_2))
                  {
                    r_31 = ATgetArgument(q_31, 0);
                    x_31 = ATgetArgument(q_31, 1);
                    if(o_31 != NULL && o_31 != r_31)
                      _fail(r_31);
                    else
                      o_31 = r_31;
                    if(p_31 != NULL && p_31 != x_31)
                      _fail(x_31);
                    else
                      p_31 = x_31;
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
                ATerm g_32 = NULL;
                ATerm i_32 = NULL;
                t = new_0(t);
                g_32 = t;
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
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_32), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_32), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_32), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_32), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_32)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(u_30), (ATerm)ATmakeAppl(sym_Var_1, not_null(g_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_32))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(v_30), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_32))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_32)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_32)), (ATerm) ATmakeAppl(sym_Nil_0)))))));
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
  ATerm p_35 = NULL,q_35 = NULL;
  p_35 = t;
  o_35 :
  if(match_cons(p_35, sym_Build_1))
    {
      q_35 = ATgetArgument(p_35, 0);
      {
        ATerm s_35 = NULL;
        ATerm u_35 = NULL,v_35 = NULL,a_39 = NULL;
        t = new_0(t);
        s_35 = t;
        t = not_null(q_35);
        {
          ATerm q_1 (ATerm t)
          {
            ATerm q_36 = NULL,y_38 = NULL,z_38 = NULL;
            q_36 = t;
            m_35 :
            if(match_cons(q_36, sym_App_2))
              {
                y_38 = ATgetArgument(q_36, 0);
                z_38 = ATgetArgument(q_36, 1);
                if(u_35 != NULL && u_35 != y_38)
                  _fail(y_38);
                else
                  u_35 = y_38;
                if(v_35 != NULL && v_35 != z_38)
                  _fail(z_38);
                else
                  v_35 = z_38;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_35));
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, q_1);
          a_39 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(u_35), not_null(v_35), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_35))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_39))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp1_0 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL;
  j_39 = t;
  h_39 :
  if(match_cons(j_39, sym_Build_1))
    {
      k_39 = ATgetArgument(j_39, 0);
      i_39 :
      if(match_cons(k_39, sym_App_2))
        {
          l_39 = ATgetArgument(k_39, 0);
          m_39 = ATgetArgument(k_39, 1);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_39)), not_null(l_39));
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
  ATerm w_39 = NULL,x_39 = NULL;
  w_39 = t;
  v_39 :
  if(match_cons(w_39, sym_Build_1))
    {
      x_39 = ATgetArgument(w_39, 0);
      {
        ATerm z_39 = NULL,a_40 = NULL,k_40 = NULL;
        t = not_null(x_39);
        {
          ATerm r_1 (ATerm t)
          {
            ATerm b_40 = NULL,c_40 = NULL,i_40 = NULL,j_40 = NULL;
            b_40 = t;
            s_39 :
            if(match_cons(b_40, sym_App_2))
              {
                c_40 = ATgetArgument(b_40, 0);
                j_40 = ATgetArgument(b_40, 1);
                t_39 :
                if(match_cons(c_40, sym_Build_1))
                  {
                    i_40 = ATgetArgument(c_40, 0);
                    if(a_40 != NULL && a_40 != i_40)
                      _fail(i_40);
                    else
                      a_40 = i_40;
                    if(z_39 != NULL && z_39 != j_40)
                      _fail(j_40);
                    else
                      z_39 = j_40;
                    t = not_null(a_40);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, r_1);
          k_40 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, not_null(k_40));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL;
  h_41 = t;
  b_41 :
  if(match_cons(h_41, sym_Seqs_1))
    {
      i_41 = ATgetArgument(h_41, 0);
      c_41 :
      if(match_cons(i_41, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(i_41, sym_Cons_2))
            {
              f_41 = ATgetArgument(i_41, 0);
              g_41 = ATgetArgument(i_41, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_41), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(g_41)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(h_41, sym_Choices_1))
        {
          i_41 = ATgetArgument(h_41, 0);
          d_41 :
          if(match_cons(i_41, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(i_41, sym_Cons_2))
                {
                  f_41 = ATgetArgument(i_41, 0);
                  g_41 = ATgetArgument(i_41, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_41), (ATerm) ATmakeAppl(sym_Choices_1, not_null(g_41)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(h_41, sym_LChoices_1))
            {
              i_41 = ATgetArgument(h_41, 0);
              e_41 :
              if(match_cons(i_41, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(i_41, sym_Cons_2))
                    {
                      f_41 = ATgetArgument(i_41, 0);
                      g_41 = ATgetArgument(i_41, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_41), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(g_41)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(h_41, sym_Lets_2))
                {
                  i_41 = ATgetArgument(h_41, 0);
                  j_41 = ATgetArgument(h_41, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(i_41), not_null(j_41));
                }
              else
                {
                  if(match_cons(h_41, sym_BA_2))
                    {
                      i_41 = ATgetArgument(h_41, 0);
                      j_41 = ATgetArgument(h_41, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_41)), not_null(i_41));
                    }
                  else
                    {
                      if(match_cons(h_41, sym_MA_2))
                        {
                          i_41 = ATgetArgument(h_41, 0);
                          j_41 = ATgetArgument(h_41, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_41)), not_null(j_41));
                        }
                      else
                        {
                          if(match_cons(h_41, sym_AM_2))
                            {
                              i_41 = ATgetArgument(h_41, 0);
                              j_41 = ATgetArgument(h_41, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_41), (ATerm) ATmakeAppl(sym_Match_1, not_null(j_41)));
                            }
                          else
                            {
                              if(match_cons(h_41, sym_BAM_3))
                                {
                                  i_41 = ATgetArgument(h_41, 0);
                                  j_41 = ATgetArgument(h_41, 1);
                                  k_41 = ATgetArgument(h_41, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_41)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_41), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_41)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(h_41, sym_InfixApp_3))
                                    {
                                      i_41 = ATgetArgument(h_41, 0);
                                      j_41 = ATgetArgument(h_41, 1);
                                      k_41 = ATgetArgument(h_41, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(j_41), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_41), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_41), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm b_43 = NULL;
  b_43 = t;
  a_43 :
  if(!(match_cons(b_43, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm i_10 = t;
  if(PushChoice()==0)
    {
      ATerm s_1 (ATerm t)
      {
        ATerm j_10 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = j_10;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, s_1);
      PopChoice();
      _fail(t);
    }
  else
    t = i_10;
  return(t);
}
ATerm App_2 (ATerm t, ATerm g_40 (ATerm), ATerm h_40 (ATerm))
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
  g_43 = t;
  f_43 :
  if(match_cons(g_43, sym_App_2))
    {
      h_43 = ATgetArgument(g_43, 0);
      i_43 = ATgetArgument(g_43, 1);
      {
        ATerm n_43 = NULL;
        t = not_null(h_43);
        {
          ATerm r_43 = NULL;
          t = g_40(t);
          n_43 = t;
          t = not_null(i_43);
          t = h_40(t);
          r_43 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, not_null(n_43), not_null(r_43));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm d_40 (ATerm), ATerm e_40 (ATerm), ATerm f_40 (ATerm))
{
  ATerm g_44 = NULL,h_44 = NULL,l_44 = NULL,m_44 = NULL;
  g_44 = t;
  f_44 :
  if(match_cons(g_44, sym_Con_3))
    {
      h_44 = ATgetArgument(g_44, 0);
      l_44 = ATgetArgument(g_44, 1);
      m_44 = ATgetArgument(g_44, 2);
      {
        ATerm q_44 = NULL;
        t = not_null(h_44);
        {
          ATerm s_44 = NULL;
          t = d_40(t);
          q_44 = t;
          t = not_null(l_44);
          {
            ATerm u_44 = NULL;
            t = e_40(t);
            s_44 = t;
            t = not_null(m_44);
            t = f_40(t);
            u_44 = t;
            t = (ATerm) ATmakeAppl(sym_Con_3, not_null(q_44), not_null(s_44), not_null(u_44));
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
  ATerm k_10 = t;
  if(PushChoice()==0)
    {
      ATerm t_1 (ATerm t)
      {
        ATerm l_10 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = l_10;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, t_1);
      PopChoice();
      _fail(t);
    }
  else
    t = k_10;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL;
  e_45 = t;
  c_45 :
  if(match_cons(e_45, sym_SRule_1))
    {
      f_45 = ATgetArgument(e_45, 0);
      d_45 :
      if(match_cons(f_45, sym_Rule_3))
        {
          g_45 = ATgetArgument(f_45, 0);
          h_45 = ATgetArgument(f_45, 1);
          i_45 = ATgetArgument(f_45, 2);
          t = not_null(g_45);
          t = pureterm_0(t);
          t = not_null(h_45);
          t = buildterm_0(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_45)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_45), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_45)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(f_45, sym_StratRule_3))
            {
              g_45 = ATgetArgument(f_45, 0);
              h_45 = ATgetArgument(f_45, 1);
              i_45 = ATgetArgument(f_45, 2);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_45), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_45), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_45), (ATerm) ATmakeAppl(sym_Nil_0)))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm j_43 (ATerm), ATerm k_43 (ATerm))
{
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL;
  b_46 = t;
  a_46 :
  if(match_cons(b_46, sym_Scope_2))
    {
      c_46 = ATgetArgument(b_46, 0);
      d_46 = ATgetArgument(b_46, 1);
      {
        ATerm g_46 = NULL;
        t = not_null(c_46);
        {
          ATerm i_46 = NULL;
          t = j_43(t);
          g_46 = t;
          t = not_null(d_46);
          t = k_43(t);
          i_46 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_46), not_null(i_46));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm m_61 (ATerm))
{
  ATerm n_46 (ATerm t)
  {
    ATerm m_10 = t;
    if(PushChoice()==0)
      {
        t = m_61(t);
        PopChoice();
      }
    else
      {
        t = m_10;
        t = _one(t, n_46);
      }
    return(t);
  }
  t = n_46(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,p_47 = NULL;
  j_47 = t;
  h_47 :
  if(match_cons(j_47, sym_SRule_1))
    {
      k_47 = ATgetArgument(j_47, 0);
      i_47 :
      if(match_cons(k_47, sym_Rule_3))
        {
          l_47 = ATgetArgument(k_47, 0);
          m_47 = ATgetArgument(k_47, 1);
          p_47 = ATgetArgument(k_47, 2);
          {
            ATerm t_47 = NULL;
            ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL,d_48 = NULL;
            t = new_0(t);
            t_47 = t;
            t = not_null(l_47);
            {
              ATerm f_48 = NULL,g_48 = NULL,o_48 = NULL;
              ATerm u_1 (ATerm t)
              {
                ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL;
                y_47 = t;
                r_46 :
                if(match_cons(y_47, sym_Con_3))
                  {
                    z_47 = ATgetArgument(y_47, 0);
                    b_48 = ATgetArgument(y_47, 1);
                    c_48 = ATgetArgument(y_47, 2);
                    t_46 :
                    if(match_cons(z_47, sym_Var_1))
                      {
                        a_48 = ATgetArgument(z_47, 0);
                        if(x_47 != NULL && x_47 != a_48)
                          _fail(a_48);
                        else
                          x_47 = a_48;
                        if(v_47 != NULL && v_47 != b_48)
                          _fail(b_48);
                        else
                          v_47 = b_48;
                        if(w_47 != NULL && w_47 != c_48)
                          _fail(c_48);
                        else
                          w_47 = c_48;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_47));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, u_1);
              d_48 = t;
              t = not_null(m_47);
              {
                ATerm v_1 (ATerm t)
                {
                  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL;
                  h_48 = t;
                  z_46 :
                  if(match_cons(h_48, sym_Con_3))
                    {
                      i_48 = ATgetArgument(h_48, 0);
                      k_48 = ATgetArgument(h_48, 1);
                      l_48 = ATgetArgument(h_48, 2);
                      a_47 :
                      if(match_cons(i_48, sym_Var_1))
                        {
                          j_48 = ATgetArgument(i_48, 0);
                          b_47 :
                          if(match_cons(l_48, sym_Call_2))
                            {
                              m_48 = ATgetArgument(l_48, 0);
                              n_48 = ATgetArgument(l_48, 1);
                              f_47 :
                              if(match_cons(n_48, sym_Nil_0))
                                {
                                  if(x_47 != NULL && x_47 != j_48)
                                    _fail(j_48);
                                  else
                                    x_47 = j_48;
                                  if(f_48 != NULL && f_48 != k_48)
                                    _fail(k_48);
                                  else
                                    f_48 = k_48;
                                  if(g_48 != NULL && g_48 != m_48)
                                    _fail(m_48);
                                  else
                                    g_48 = m_48;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_47));
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, v_1);
                o_48 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_47), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_48), not_null(o_48), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_47), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(g_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_47), not_null(f_48), (ATerm) ATmakeAppl(sym_Id_0))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_47)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_47)))))));
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
  ATerm w_1 (ATerm t)
  {
    ATerm n_10 = t;
    if(PushChoice()==0)
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      {
        t = n_10;
        {
          ATerm o_10 = t;
          if(PushChoice()==0)
            {
              t = Scope_2(t, _id, desugarRule_0);
              PopChoice();
            }
          else
            {
              t = o_10;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, w_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm w_59 (ATerm))
{
  ATerm x_48 (ATerm t)
  {
    t = w_59(t);
    t = _all(t, x_48);
    return(t);
  }
  t = x_48(t);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm a_2 (ATerm t)
      {
        ATerm p_10 = t;
        if(PushChoice()==0)
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = p_10;
            {
              ATerm q_10 = t;
              if(PushChoice()==0)
                {
                  ATerm r_10 = t;
                  if(PushChoice()==0)
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = r_10;
                      {
                        ATerm s_10 = t;
                        if(PushChoice()==0)
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = s_10;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = q_10;
                  t = Expl_0(t);
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, a_2);
    }
    return(t);
  }
  t = topdown_1(t, x_1);
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL;
  a_49 = t;
  z_48 :
  if(match_cons(a_49, sym_TCons_2))
    {
      b_49 = ATgetArgument(a_49, 0);
      c_49 = ATgetArgument(a_49, 1);
      t = not_null(c_49);
    }
  else
    _fail(t);
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL;
  n_49 = t;
  m_49 :
  if(match_cons(n_49, sym_TCons_2))
    {
      o_49 = ATgetArgument(n_49, 0);
      p_49 = ATgetArgument(n_49, 1);
      t = not_null(o_49);
    }
  else
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm m_58 (ATerm))
{
  ATerm g_50 (ATerm t)
  {
    ATerm t_10 = t;
    if(PushChoice()==0)
      {
        ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL;
        ATerm j_2 (ATerm t)
        {
          t = map_1(t, Thd_0);
          return(t);
        }
        ATerm k_2 (ATerm t)
        {
          t = map_1(t, Ttl_0);
          return(t);
        }
        t = split_2(t, j_2, k_2);
        {
          ATerm l_2 (ATerm t)
          {
            t = TCons_2(t, g_50, TNil_0);
            return(t);
          }
          t = TCons_2(t, m_58, l_2);
          z_49 = t;
          u_49 :
          if(match_cons(z_49, sym_TCons_2))
            {
              a_50 = ATgetArgument(z_49, 0);
              b_50 = ATgetArgument(z_49, 1);
              v_49 :
              if(match_cons(b_50, sym_TCons_2))
                {
                  c_50 = ATgetArgument(b_50, 0);
                  d_50 = ATgetArgument(b_50, 1);
                  w_49 :
                  if(match_cons(d_50, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_50), not_null(c_50));
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
        t = t_10;
        t = map_1(t, TNil_0);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
      }
    return(t);
  }
  t = g_50(t);
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL;
  z_50 = t;
  w_50 :
  if(match_cons(z_50, sym_TCons_2))
    {
      a_51 = ATgetArgument(z_50, 0);
      b_51 = ATgetArgument(z_50, 1);
      x_50 :
      if(match_cons(b_51, sym_TCons_2))
        {
          c_51 = ATgetArgument(b_51, 0);
          d_51 = ATgetArgument(b_51, 1);
          y_50 :
          if(match_cons(d_51, sym_TNil_0))
            {
              ATerm g_51 = NULL;
              ATerm i_51 = NULL;
              t = new_0(t);
              g_51 = t;
              {
                ATerm k_51 = NULL;
                t = new_0(t);
                i_51 = t;
                t = new_0(t);
                k_51 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_51)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_51)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(a_51)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_51)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_51)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(g_51), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_51), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_51)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_51), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_51)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
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
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL;
  v_51 = t;
  r_51 :
  if(match_cons(v_51, sym_TCons_2))
    {
      w_51 = ATgetArgument(v_51, 0);
      x_51 = ATgetArgument(v_51, 1);
      s_51 :
      if(match_cons(x_51, sym_TCons_2))
        {
          y_51 = ATgetArgument(x_51, 0);
          z_51 = ATgetArgument(x_51, 1);
          t_51 :
          if(match_cons(y_51, sym_Nil_0))
            {
              u_51 :
              if(match_cons(z_51, sym_TNil_0))
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
ATerm zipr_1 (ATerm t, ATerm l_57 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, l_57);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL;
  h_52 = t;
  c_52 :
  if(match_cons(h_52, sym_Cons_2))
    {
      i_52 = ATgetArgument(h_52, 0);
      j_52 = ATgetArgument(h_52, 1);
      t = not_null(j_52);
    }
  else
    _fail(t);
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL;
  q_52 = t;
  o_52 :
  if(match_cons(q_52, sym_Cons_2))
    {
      r_52 = ATgetArgument(q_52, 0);
      s_52 = ATgetArgument(q_52, 1);
      p_52 :
      if(match_cons(s_52, sym_Nil_0))
        t = not_null(r_52);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm last_0 (ATerm t)
{
  ATerm u_10 = t;
  if(PushChoice()==0)
    {
      t = Last_0(t);
      PopChoice();
    }
  else
    {
      t = u_10;
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
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL;
  g_53 = t;
  d_53 :
  if(match_cons(g_53, sym_TCons_2))
    {
      h_53 = ATgetArgument(g_53, 0);
      i_53 = ATgetArgument(g_53, 1);
      e_53 :
      if(match_cons(i_53, sym_TCons_2))
        {
          j_53 = ATgetArgument(i_53, 0);
          k_53 = ATgetArgument(i_53, 1);
          f_53 :
          if(match_cons(k_53, sym_TNil_0))
            {
              ATerm v_10 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(h_53), not_null(j_53));
                  PopChoice();
                }
              else
                {
                  t = v_10;
                  t = SSL_subtr(not_null(h_53), not_null(j_53));
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
  ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL;
  s_53 = t;
  p_53 :
  if(match_cons(s_53, sym_TCons_2))
    {
      t_53 = ATgetArgument(s_53, 0);
      u_53 = ATgetArgument(s_53, 1);
      q_53 :
      if(match_cons(u_53, sym_TCons_2))
        {
          v_53 = ATgetArgument(u_53, 0);
          w_53 = ATgetArgument(u_53, 1);
          r_53 :
          if(match_cons(w_53, sym_TNil_0))
            {
              ATerm w_10;
              w_10 = t;
              {
                ATerm x_10 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(t_53), not_null(v_53));
                    PopChoice();
                  }
                else
                  {
                    t = x_10;
                    t = SSL_gtr(not_null(t_53), not_null(v_53));
                  }
              }
              t = w_10;
            }
          else
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
  ATerm e_54 = NULL;
  ATerm y_10 = t;
  if(PushChoice()==0)
    {
      ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL;
      f_54 = t;
      b_54 :
      if(match_cons(f_54, sym_TCons_2))
        {
          g_54 = ATgetArgument(f_54, 0);
          h_54 = ATgetArgument(f_54, 1);
          c_54 :
          if(match_cons(h_54, sym_TCons_2))
            {
              i_54 = ATgetArgument(h_54, 0);
              j_54 = ATgetArgument(h_54, 1);
              d_54 :
              if(match_cons(j_54, sym_TNil_0))
                {
                  if(e_54 != NULL && e_54 != g_54)
                    _fail(g_54);
                  else
                    e_54 = g_54;
                  if(e_54 != NULL && e_54 != i_54)
                    _fail(i_54);
                  else
                    e_54 = i_54;
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
      t = y_10;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm y_49 (ATerm))
{
  ATerm m_2 (ATerm t)
  {
    ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL;
    h_55 = t;
    m_54 :
    if(match_cons(h_55, sym_TCons_2))
      {
        i_55 = ATgetArgument(h_55, 0);
        j_55 = ATgetArgument(h_55, 1);
        n_54 :
        if(match_cons(j_55, sym_TCons_2))
          {
            k_55 = ATgetArgument(j_55, 0);
            l_55 = ATgetArgument(j_55, 1);
            o_54 :
            if(match_cons(l_55, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_55), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL;
    o_55 = t;
    q_54 :
    if(match_cons(o_55, sym_TCons_2))
      {
        p_55 = ATgetArgument(o_55, 0);
        q_55 = ATgetArgument(o_55, 1);
        r_54 :
        if(match_int(p_55, 0))
          {
            s_54 :
            if(match_cons(q_55, sym_TCons_2))
              {
                r_55 = ATgetArgument(q_55, 0);
                s_55 = ATgetArgument(q_55, 1);
                t_54 :
                if(match_cons(s_55, sym_TCons_2))
                  {
                    t_55 = ATgetArgument(s_55, 0);
                    u_55 = ATgetArgument(s_55, 1);
                    u_54 :
                    if(match_cons(u_55, sym_TNil_0))
                      t = not_null(t_55);
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL;
    x_55 = t;
    d_55 :
    if(match_cons(x_55, sym_TCons_2))
      {
        y_55 = ATgetArgument(x_55, 0);
        z_55 = ATgetArgument(x_55, 1);
        e_55 :
        if(match_cons(z_55, sym_TCons_2))
          {
            a_56 = ATgetArgument(z_55, 0);
            b_56 = ATgetArgument(z_55, 1);
            f_55 :
            if(match_cons(b_56, sym_TCons_2))
              {
                c_56 = ATgetArgument(b_56, 0);
                d_56 = ATgetArgument(b_56, 1);
                g_55 :
                if(match_cons(d_56, sym_TNil_0))
                  {
                    ATerm h_56 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_55), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = geq_0(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_55), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm j_56 = NULL;
                      t = subt_0(t);
                      h_56 = t;
                      t = not_null(a_56);
                      t = y_49(t);
                      j_56 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_56), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_56), not_null(c_56)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  t = for_3(t, m_2, y_2, z_2);
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm y_56 = NULL;
  ATerm a_57 = NULL;
  y_56 = t;
  {
    ATerm c_57 = NULL;
    t = new_0(t);
    a_57 = t;
    {
      ATerm k_57 = NULL;
      t = new_0(t);
      c_57 = t;
      t = new_0(t);
      k_57 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_57)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_57)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_56), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_57))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(a_57), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_57), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_57)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_57), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_57)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
    }
  }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL;
  ATerm c_62 (ATerm t)
  {
    ATerm s_60 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_59), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm u_60 = NULL,v_60 = NULL,w_60 = NULL;
      t = add_0(t);
      s_60 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_60), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TNil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = copy_1(t, new_0);
      u_60 = t;
      v_58 :
      if(match_cons(u_60, sym_Cons_2))
        {
          v_60 = ATgetArgument(u_60, 0);
          w_60 = ATgetArgument(u_60, 1);
          {
            ATerm z_60 = NULL;
            t = not_null(w_60);
            {
              ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,o_61 = NULL,p_61 = NULL;
              t = last_0(t);
              z_60 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_60), not_null(w_60)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_60), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = zipr_1(t, MkThreadApplication_0);
              t = tuple_unzip_1(t, _id);
              b_61 = t;
              k_58 :
              if(match_cons(b_61, sym_TCons_2))
                {
                  c_61 = ATgetArgument(b_61, 0);
                  d_61 = ATgetArgument(b_61, 1);
                  l_58 :
                  if(match_cons(d_61, sym_TCons_2))
                    {
                      e_61 = ATgetArgument(d_61, 0);
                      f_61 = ATgetArgument(d_61, 1);
                      o_58 :
                      if(match_cons(f_61, sym_TCons_2))
                        {
                          g_61 = ATgetArgument(f_61, 0);
                          h_61 = ATgetArgument(f_61, 1);
                          p_58 :
                          if(match_cons(h_61, sym_TCons_2))
                            {
                              i_61 = ATgetArgument(h_61, 0);
                              j_61 = ATgetArgument(h_61, 1);
                              q_58 :
                              if(match_cons(j_61, sym_TCons_2))
                                {
                                  k_61 = ATgetArgument(j_61, 0);
                                  l_61 = ATgetArgument(j_61, 1);
                                  r_58 :
                                  if(match_cons(l_61, sym_TCons_2))
                                    {
                                      o_61 = ATgetArgument(l_61, 0);
                                      p_61 = ATgetArgument(l_61, 1);
                                      s_58 :
                                      if(match_cons(p_61, sym_TNil_0))
                                        {
                                          ATerm w_61 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_60), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_61), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_61), (ATerm) ATmakeAppl(sym_Nil_0))));
                                          t = concat_0(t);
                                          w_61 = t;
                                          t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(f_59), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), not_null(e_61), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_60), not_null(w_61)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_59), not_null(i_61)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_60)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_59), not_null(o_61)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_60)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(c_61))))));
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
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
    return(t);
  }
  e_59 = t;
  w_58 :
  if(match_cons(e_59, sym_TCons_2))
    {
      f_59 = ATgetArgument(e_59, 0);
      g_59 = ATgetArgument(e_59, 1);
      x_58 :
      if(match_cons(g_59, sym_TCons_2))
        {
          h_59 = ATgetArgument(g_59, 0);
          i_59 = ATgetArgument(g_59, 1);
          y_58 :
          if(match_string(h_59, "D"))
            {
              z_58 :
              if(match_cons(i_59, sym_TCons_2))
                {
                  j_59 = ATgetArgument(i_59, 0);
                  k_59 = ATgetArgument(i_59, 1);
                  a_59 :
                  if(match_cons(k_59, sym_TNil_0))
                    {
                      ATerm o_59 = NULL;
                      ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL;
                      t = new_0(t);
                      o_59 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_59), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_59)), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = copy_1(t, MkDistApplication_0);
                      t = tuple_unzip_1(t, _id);
                      q_59 = t;
                      x_57 :
                      if(match_cons(q_59, sym_TCons_2))
                        {
                          r_59 = ATgetArgument(q_59, 0);
                          s_59 = ATgetArgument(q_59, 1);
                          y_57 :
                          if(match_cons(s_59, sym_TCons_2))
                            {
                              t_59 = ATgetArgument(s_59, 0);
                              u_59 = ATgetArgument(s_59, 1);
                              z_57 :
                              if(match_cons(u_59, sym_TCons_2))
                                {
                                  v_59 = ATgetArgument(u_59, 0);
                                  y_59 = ATgetArgument(u_59, 1);
                                  a_58 :
                                  if(match_cons(y_59, sym_TCons_2))
                                    {
                                      z_59 = ATgetArgument(y_59, 0);
                                      a_60 = ATgetArgument(y_59, 1);
                                      b_58 :
                                      if(match_cons(a_60, sym_TCons_2))
                                        {
                                          b_60 = ATgetArgument(a_60, 0);
                                          c_60 = ATgetArgument(a_60, 1);
                                          c_58 :
                                          if(match_cons(c_60, sym_TCons_2))
                                            {
                                              d_60 = ATgetArgument(c_60, 0);
                                              e_60 = ATgetArgument(c_60, 1);
                                              d_58 :
                                              if(match_cons(e_60, sym_TNil_0))
                                                {
                                                  ATerm l_60 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_60), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  l_60 = t;
                                                  t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(f_59), (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue))), not_null(t_59), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_59), not_null(l_60)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_59), not_null(z_59)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_59)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(f_59), not_null(d_60)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(r_59))))));
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
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
              if(match_string(h_59, "T"))
                {
                  b_59 :
                  if(match_cons(i_59, sym_TCons_2))
                    {
                      j_59 = ATgetArgument(i_59, 0);
                      k_59 = ATgetArgument(i_59, 1);
                      c_59 :
                      if(match_cons(k_59, sym_TNil_0))
                        {
                          d_59 :
                          if(match_int(j_59, 0))
                            {
                              ATerm z_10 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm o_60 = NULL;
                                  t = new_0(t);
                                  o_60 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(f_59), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_60), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_59), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_60)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_59), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_60)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Id_0)))));
                                  PopChoice();
                                }
                              else
                                {
                                  t = z_10;
                                  t = c_62(t);
                                }
                            }
                          else
                            t = c_62(t);
                        }
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
  ATerm v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL;
  v_62 = t;
  o_62 :
  if(match_cons(v_62, sym_TCons_2))
    {
      w_62 = ATgetArgument(v_62, 0);
      i_63 = ATgetArgument(v_62, 1);
      p_62 :
      if(match_cons(w_62, sym_TCons_2))
        {
          x_62 = ATgetArgument(w_62, 0);
          f_63 = ATgetArgument(w_62, 1);
          q_62 :
          if(match_cons(x_62, sym_Mod_2))
            {
              y_62 = ATgetArgument(x_62, 0);
              z_62 = ATgetArgument(x_62, 1);
              r_62 :
              if(match_cons(f_63, sym_TCons_2))
                {
                  g_63 = ATgetArgument(f_63, 0);
                  h_63 = ATgetArgument(f_63, 1);
                  s_62 :
                  if(match_cons(h_63, sym_TNil_0))
                    {
                      t_62 :
                      if(match_cons(i_63, sym_TCons_2))
                        {
                          j_63 = ATgetArgument(i_63, 0);
                          k_63 = ATgetArgument(i_63, 1);
                          u_62 :
                          if(match_cons(k_63, sym_TNil_0))
                            {
                              ATerm p_63 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_62), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_62), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_63), (ATerm) ATmakeAppl(sym_TNil_0))));
                              t = DefineCongruence_0(t);
                              t = desugar_0(t);
                              p_63 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_63), (ATerm) ATmakeAppl(sym_TNil_0)));
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm f_11 = t;
  if(PushChoice()==0)
    {
      t = CongruenceDef_0(t);
      PopChoice();
    }
  else
    {
      t = f_11;
      {
        ATerm g_11 = t;
        if(PushChoice()==0)
          {
            t = OverloadedDef_0(t);
            {
              ATerm a_3 (ATerm t)
              {
                t = TCons_2(t, _id, TNil_0);
                return(t);
              }
              t = TCons_2(t, joindefs_0, a_3);
            }
            PopChoice();
          }
        else
          {
            t = g_11;
            t = NonOverloadedDef_0(t);
            {
              ATerm b_3 (ATerm t)
              {
                t = TCons_2(t, _id, TNil_0);
                return(t);
              }
              t = TCons_2(t, joindefs_0, b_3);
            }
          }
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL;
  e_64 = t;
  u_63 :
  if(match_cons(e_64, sym_TCons_2))
    {
      f_64 = ATgetArgument(e_64, 0);
      i_64 = ATgetArgument(e_64, 1);
      v_63 :
      if(match_cons(f_64, sym_Cons_2))
        {
          g_64 = ATgetArgument(f_64, 0);
          h_64 = ATgetArgument(f_64, 1);
          w_63 :
          if(match_cons(i_64, sym_TCons_2))
            {
              j_64 = ATgetArgument(i_64, 0);
              k_64 = ATgetArgument(i_64, 1);
              a_64 :
              if(match_cons(k_64, sym_TCons_2))
                {
                  l_64 = ATgetArgument(k_64, 0);
                  m_64 = ATgetArgument(k_64, 1);
                  b_64 :
                  if(match_cons(m_64, sym_TCons_2))
                    {
                      n_64 = ATgetArgument(m_64, 0);
                      o_64 = ATgetArgument(m_64, 1);
                      c_64 :
                      if(match_cons(o_64, sym_TCons_2))
                        {
                          p_64 = ATgetArgument(o_64, 0);
                          q_64 = ATgetArgument(o_64, 1);
                          d_64 :
                          if(match_cons(q_64, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_64), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_64), not_null(p_64)), (ATerm) ATmakeAppl(sym_TNil_0))))));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL,l_65 = NULL,m_65 = NULL;
  g_65 = t;
  b_65 :
  if(match_cons(g_65, sym_TCons_2))
    {
      h_65 = ATgetArgument(g_65, 0);
      i_65 = ATgetArgument(g_65, 1);
      c_65 :
      if(match_cons(i_65, sym_TCons_2))
        {
          l_65 = ATgetArgument(i_65, 0);
          m_65 = ATgetArgument(i_65, 1);
          f_65 :
          if(match_cons(m_65, sym_TNil_0))
            {
              t = not_null(h_65);
              {
                ATerm c_3 (ATerm t)
                {
                  t = not_null(l_65);
                  return(t);
                }
                t = at_end_1(t, c_3);
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
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL;
  v_65 = t;
  r_65 :
  if(match_cons(v_65, sym_TCons_2))
    {
      w_65 = ATgetArgument(v_65, 0);
      x_65 = ATgetArgument(v_65, 1);
      s_65 :
      if(match_cons(x_65, sym_TCons_2))
        {
          y_65 = ATgetArgument(x_65, 0);
          b_66 = ATgetArgument(x_65, 1);
          t_65 :
          if(match_cons(y_65, sym_Cons_2))
            {
              z_65 = ATgetArgument(y_65, 0);
              a_66 = ATgetArgument(y_65, 1);
              u_65 :
              if(match_cons(b_66, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_65), not_null(w_65)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_66), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL;
  l_66 = t;
  i_66 :
  if(match_cons(l_66, sym_TCons_2))
    {
      m_66 = ATgetArgument(l_66, 0);
      n_66 = ATgetArgument(l_66, 1);
      j_66 :
      if(match_cons(n_66, sym_TCons_2))
        {
          o_66 = ATgetArgument(n_66, 0);
          p_66 = ATgetArgument(n_66, 1);
          k_66 :
          if(match_cons(p_66, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_66), not_null(o_66));
          else
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
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL;
  a_67 = t;
  v_66 :
  if(match_cons(a_67, sym_TCons_2))
    {
      b_67 = ATgetArgument(a_67, 0);
      e_67 = ATgetArgument(a_67, 1);
      w_66 :
      if(match_cons(b_67, sym_Cons_2))
        {
          c_67 = ATgetArgument(b_67, 0);
          d_67 = ATgetArgument(b_67, 1);
          x_66 :
          if(match_cons(e_67, sym_TCons_2))
            {
              f_67 = ATgetArgument(e_67, 0);
              i_67 = ATgetArgument(e_67, 1);
              y_66 :
              if(match_cons(f_67, sym_Cons_2))
                {
                  g_67 = ATgetArgument(f_67, 0);
                  h_67 = ATgetArgument(f_67, 1);
                  z_66 :
                  if(match_cons(i_67, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(c_67), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_67), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(d_67), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_67), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL;
  u_67 = t;
  p_67 :
  if(match_cons(u_67, sym_TCons_2))
    {
      v_67 = ATgetArgument(u_67, 0);
      w_67 = ATgetArgument(u_67, 1);
      q_67 :
      if(match_cons(v_67, sym_Nil_0))
        {
          r_67 :
          if(match_cons(w_67, sym_TCons_2))
            {
              x_67 = ATgetArgument(w_67, 0);
              y_67 = ATgetArgument(w_67, 1);
              s_67 :
              if(match_cons(x_67, sym_Nil_0))
                {
                  t_67 :
                  if(match_cons(y_67, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm d_57 (ATerm), ATerm e_57 (ATerm), ATerm f_57 (ATerm), ATerm g_57 (ATerm))
{
  ATerm a_68 (ATerm t)
  {
    ATerm k_11 = t;
    if(PushChoice()==0)
      {
        t = d_57(t);
        PopChoice();
      }
    else
      {
        t = k_11;
        t = e_57(t);
        {
          ATerm o_3 (ATerm t)
          {
            t = TCons_2(t, a_68, TNil_0);
            return(t);
          }
          t = TCons_2(t, g_57, o_3);
          t = f_57(t);
        }
      }
    return(t);
  }
  t = a_68(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm i_57 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, i_57);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL;
  r_68 = t;
  n_68 :
  if(match_cons(r_68, sym_Cons_2))
    {
      s_68 = ATgetArgument(r_68, 0);
      x_68 = ATgetArgument(r_68, 1);
      o_68 :
      if(match_cons(s_68, sym_TCons_2))
        {
          t_68 = ATgetArgument(s_68, 0);
          u_68 = ATgetArgument(s_68, 1);
          p_68 :
          if(match_cons(u_68, sym_TCons_2))
            {
              v_68 = ATgetArgument(u_68, 0);
              w_68 = ATgetArgument(u_68, 1);
              q_68 :
              if(match_cons(w_68, sym_TNil_0))
                {
                  ATerm b_69 = NULL,c_69 = NULL,m_69 = NULL,v_69 = NULL;
                  ATerm l_11;
                  l_11 = t;
                  {
                    ATerm d_69 = NULL;
                    ATerm g_69 = NULL,h_69 = NULL,i_69 = NULL,k_69 = NULL,l_69 = NULL;
                    t = not_null(v_68);
                    d_69 = t;
                    t = SSL_explode_term(not_null(d_69));
                    g_69 = t;
                    e_68 :
                    if(match_cons(g_69, sym_TCons_2))
                      {
                        h_69 = ATgetArgument(g_69, 0);
                        i_69 = ATgetArgument(g_69, 1);
                        f_68 :
                        if(match_cons(i_69, sym_TCons_2))
                          {
                            k_69 = ATgetArgument(i_69, 0);
                            l_69 = ATgetArgument(i_69, 1);
                            g_68 :
                            if(match_cons(l_69, sym_TNil_0))
                              {
                                if(b_69 != NULL && b_69 != h_69)
                                  _fail(h_69);
                                else
                                  b_69 = h_69;
                                if(c_69 != NULL && c_69 != k_69)
                                  _fail(k_69);
                                else
                                  c_69 = k_69;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = l_11;
                  {
                    ATerm n_69 = NULL;
                    ATerm q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL;
                    t = not_null(t_68);
                    n_69 = t;
                    t = SSL_explode_term(not_null(n_69));
                    q_69 = t;
                    j_68 :
                    if(match_cons(q_69, sym_TCons_2))
                      {
                        r_69 = ATgetArgument(q_69, 0);
                        s_69 = ATgetArgument(q_69, 1);
                        k_68 :
                        if(match_cons(s_69, sym_TCons_2))
                          {
                            t_69 = ATgetArgument(s_69, 0);
                            u_69 = ATgetArgument(s_69, 1);
                            l_68 :
                            if(match_cons(u_69, sym_TNil_0))
                              {
                                if(b_69 != NULL && b_69 != r_69)
                                  _fail(r_69);
                                else
                                  b_69 = r_69;
                                if(m_69 != NULL && m_69 != t_69)
                                  _fail(t_69);
                                else
                                  m_69 = t_69;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_69), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    v_69 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_68), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL;
  i_70 = t;
  e_70 :
  if(match_cons(i_70, sym_Cons_2))
    {
      j_70 = ATgetArgument(i_70, 0);
      o_70 = ATgetArgument(i_70, 1);
      f_70 :
      if(match_cons(j_70, sym_TCons_2))
        {
          k_70 = ATgetArgument(j_70, 0);
          l_70 = ATgetArgument(j_70, 1);
          g_70 :
          if(match_cons(l_70, sym_TCons_2))
            {
              m_70 = ATgetArgument(l_70, 0);
              n_70 = ATgetArgument(l_70, 1);
              h_70 :
              if(match_cons(n_70, sym_TNil_0))
                {
                  ATerm q_70 = NULL;
                  if(k_70 != NULL && k_70 != m_70)
                    _fail(m_70);
                  else
                    k_70 = m_70;
                  if(q_70 != NULL && q_70 != o_70)
                    _fail(o_70);
                  else
                    q_70 = o_70;
                  t = not_null(q_70);
                }
              else
                _fail(t);
            }
          else
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
  ATerm n_11 = t;
  if(PushChoice()==0)
    {
      ATerm p_3 (ATerm t)
      {
        ATerm b_71 = NULL;
        b_71 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_71), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm q_3 (ATerm t)
      {
        ATerm s_3 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, s_3);
        return(t);
      }
      ATerm r_3 (ATerm t)
      {
        ATerm o_11 = t;
        if(PushChoice()==0)
          {
            ATerm c_4 (ATerm t)
            {
              ATerm d_4 (ATerm t)
              {
                ATerm p_11 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = p_11;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, d_4, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, c_4);
            PopChoice();
          }
        else
          {
            t = o_11;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, p_3, q_3, r_3);
      PopChoice();
    }
  else
    {
      t = n_11;
      {
        ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL;
        d_71 = t;
        u_70 :
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
                  {
                    t = not_null(e_71);
                    {
                      ATerm m_71 (ATerm t)
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
                            {
                              ATerm r_11 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm e_4 (ATerm t)
                                  {
                                    t = not_null(g_71);
                                    return(t);
                                  }
                                  t = HdMember_1(t, e_4);
                                  t = m_71(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = r_11;
                                  t = Cons_2(t, _id, m_71);
                                }
                            }
                          }
                        return(t);
                      }
                      t = m_71(t);
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
ATerm GnNextChangeGraph_3 (ATerm t, ATerm z_43 (ATerm), ATerm a_44 (ATerm), ATerm b_44 (ATerm))
{
  ATerm f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL;
  f_72 = t;
  y_71 :
  if(match_cons(f_72, sym_TCons_2))
    {
      g_72 = ATgetArgument(f_72, 0);
      j_72 = ATgetArgument(f_72, 1);
      z_71 :
      if(match_cons(g_72, sym_Cons_2))
        {
          h_72 = ATgetArgument(g_72, 0);
          i_72 = ATgetArgument(g_72, 1);
          a_72 :
          if(match_cons(j_72, sym_TCons_2))
            {
              k_72 = ATgetArgument(j_72, 0);
              l_72 = ATgetArgument(j_72, 1);
              b_72 :
              if(match_cons(l_72, sym_TCons_2))
                {
                  m_72 = ATgetArgument(l_72, 0);
                  n_72 = ATgetArgument(l_72, 1);
                  c_72 :
                  if(match_cons(n_72, sym_TCons_2))
                    {
                      o_72 = ATgetArgument(n_72, 0);
                      p_72 = ATgetArgument(n_72, 1);
                      d_72 :
                      if(match_cons(p_72, sym_TCons_2))
                        {
                          q_72 = ATgetArgument(p_72, 0);
                          r_72 = ATgetArgument(p_72, 1);
                          e_72 :
                          if(match_cons(r_72, sym_TNil_0))
                            {
                              ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_72), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = z_43(t);
                              y_72 = t;
                              v_71 :
                              if(match_cons(y_72, sym_TCons_2))
                                {
                                  z_72 = ATgetArgument(y_72, 0);
                                  a_73 = ATgetArgument(y_72, 1);
                                  w_71 :
                                  if(match_cons(a_73, sym_TCons_2))
                                    {
                                      b_73 = ATgetArgument(a_73, 0);
                                      c_73 = ATgetArgument(a_73, 1);
                                      x_71 :
                                      if(match_cons(c_73, sym_TNil_0))
                                        {
                                          ATerm f_73 = NULL;
                                          t = not_null(z_72);
                                          {
                                            ATerm h_73 = NULL;
                                            t = a_44(t);
                                            f_73 = t;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_72), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            {
                                              ATerm j_73 = NULL;
                                              t = diff_0(t);
                                              h_73 = t;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_72), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              {
                                                ATerm l_73 = NULL;
                                                t = conc_0(t);
                                                j_73 = t;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_72), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                {
                                                  ATerm n_73 = NULL;
                                                  t = conc_0(t);
                                                  l_73 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_72), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                  t = b_44(t);
                                                  n_73 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_72), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
  ATerm e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL;
  e_74 = t;
  x_73 :
  if(match_cons(e_74, sym_TCons_2))
    {
      f_74 = ATgetArgument(e_74, 0);
      g_74 = ATgetArgument(e_74, 1);
      y_73 :
      if(match_cons(f_74, sym_Nil_0))
        {
          z_73 :
          if(match_cons(g_74, sym_TCons_2))
            {
              h_74 = ATgetArgument(g_74, 0);
              i_74 = ATgetArgument(g_74, 1);
              a_74 :
              if(match_cons(i_74, sym_TCons_2))
                {
                  j_74 = ATgetArgument(i_74, 0);
                  k_74 = ATgetArgument(i_74, 1);
                  b_74 :
                  if(match_cons(k_74, sym_TCons_2))
                    {
                      l_74 = ATgetArgument(k_74, 0);
                      m_74 = ATgetArgument(k_74, 1);
                      c_74 :
                      if(match_cons(m_74, sym_TCons_2))
                        {
                          n_74 = ATgetArgument(m_74, 0);
                          o_74 = ATgetArgument(m_74, 1);
                          d_74 :
                          if(match_cons(o_74, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm z_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL;
  z_74 = t;
  v_74 :
  if(match_cons(z_74, sym_TCons_2))
    {
      a_75 = ATgetArgument(z_74, 0);
      b_75 = ATgetArgument(z_74, 1);
      w_74 :
      if(match_cons(b_75, sym_TCons_2))
        {
          c_75 = ATgetArgument(b_75, 0);
          d_75 = ATgetArgument(b_75, 1);
          x_74 :
          if(match_cons(d_75, sym_TCons_2))
            {
              e_75 = ATgetArgument(d_75, 0);
              f_75 = ATgetArgument(d_75, 1);
              y_74 :
              if(match_cons(f_75, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_75), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))))));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm u_52 (ATerm), ATerm v_52 (ATerm))
{
  ATerm k_75 (ATerm t)
  {
    ATerm s_11 = t;
    if(PushChoice()==0)
      {
        t = u_52(t);
        PopChoice();
      }
    else
      {
        t = s_11;
        t = v_52(t);
        t = k_75(t);
      }
    return(t);
  }
  t = k_75(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm x_52 (ATerm), ATerm y_52 (ATerm), ATerm z_52 (ATerm))
{
  t = x_52(t);
  t = while_not_2(t, y_52, z_52);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm i_44 (ATerm), ATerm j_44 (ATerm), ATerm k_44 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    ATerm t_11 = t;
    if(PushChoice()==0)
      {
        t = GnNextChangeGraph_3(t, i_44, j_44, k_44);
        PopChoice();
      }
    else
      {
        t = t_11;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, n_4);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,x_75 = NULL;
    q_75 = t;
    m_75 :
    if(match_cons(q_75, sym_TCons_2))
      {
        r_75 = ATgetArgument(q_75, 0);
        s_75 = ATgetArgument(q_75, 1);
        n_75 :
        if(match_cons(s_75, sym_TCons_2))
          {
            t_75 = ATgetArgument(s_75, 0);
            u_75 = ATgetArgument(s_75, 1);
            o_75 :
            if(match_cons(u_75, sym_TCons_2))
              {
                v_75 = ATgetArgument(u_75, 0);
                x_75 = ATgetArgument(u_75, 1);
                p_75 :
                if(match_cons(x_75, sym_TNil_0))
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_75), not_null(v_75));
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, svars_arity_0, o_4);
  t = FilterNonMissingDefs_0(t);
  {
    ATerm u_11 = t;
    if(PushChoice()==0)
      {
        t = NoMissingDefs_0(t);
        PopChoice();
      }
    else
      {
        t = u_11;
        t = MissingDefs_0(t);
        t = (ATerm) ATmakeInt(1);
        t = exit_0(t);
      }
  }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL;
  f_76 = t;
  c_76 :
  if(match_cons(f_76, sym_TCons_2))
    {
      g_76 = ATgetArgument(f_76, 0);
      h_76 = ATgetArgument(f_76, 1);
      d_76 :
      if(match_cons(h_76, sym_TCons_2))
        {
          i_76 = ATgetArgument(h_76, 0);
          j_76 = ATgetArgument(h_76, 1);
          e_76 :
          if(match_cons(j_76, sym_TNil_0))
            {
              ATerm v_11 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(g_76), not_null(i_76));
                  PopChoice();
                }
              else
                {
                  t = v_11;
                  t = SSL_addr(not_null(g_76), not_null(i_76));
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
  ATerm p_4 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, p_4, add_0, u_4);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm h_50 (ATerm))
{
  ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL;
  q_76 = t;
  p_76 :
  if(match_cons(q_76, sym_Cons_2))
    {
      r_76 = ATgetArgument(q_76, 0);
      s_76 = ATgetArgument(q_76, 1);
      t = h_50(t);
      {
        ATerm v_4 (ATerm t)
        {
          ATerm v_76 = NULL;
          v_76 = t;
          if(r_76 != NULL && r_76 != v_76)
            _fail(v_76);
          else
            r_76 = v_76;
          return(t);
        }
        t = fetch_1(t, v_4);
        t = not_null(s_76);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL,f_77 = NULL,g_77 = NULL;
  c_77 = t;
  z_76 :
  if(match_cons(c_77, sym_TCons_2))
    {
      d_77 = ATgetArgument(c_77, 0);
      e_77 = ATgetArgument(c_77, 1);
      a_77 :
      if(match_cons(e_77, sym_TCons_2))
        {
          f_77 = ATgetArgument(e_77, 0);
          g_77 = ATgetArgument(e_77, 1);
          b_77 :
          if(match_cons(g_77, sym_TNil_0))
            {
              t = not_null(d_77);
              {
                ATerm k_77 (ATerm t)
                {
                  ATerm w_11 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(f_77);
                      PopChoice();
                    }
                  else
                    {
                      t = w_11;
                      {
                        ATerm x_11 = t;
                        if(PushChoice()==0)
                          {
                            ATerm w_4 (ATerm t)
                            {
                              t = not_null(f_77);
                              return(t);
                            }
                            t = HdMember_1(t, w_4);
                            t = k_77(t);
                            PopChoice();
                          }
                        else
                          {
                            t = x_11;
                            t = Cons_2(t, _id, k_77);
                          }
                      }
                    }
                  return(t);
                }
                t = k_77(t);
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
ATerm foldr_3 (ATerm t, ATerm i_49 (ATerm), ATerm j_49 (ATerm), ATerm k_49 (ATerm))
{
  ATerm y_11 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = i_49(t);
      PopChoice();
    }
  else
    {
      t = y_11;
      {
        ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL;
        p_77 = t;
        o_77 :
        if(match_cons(p_77, sym_Cons_2))
          {
            q_77 = ATgetArgument(p_77, 0);
            r_77 = ATgetArgument(p_77, 1);
            {
              ATerm u_77 = NULL;
              t = not_null(q_77);
              {
                ATerm w_77 = NULL;
                t = k_49(t);
                u_77 = t;
                t = not_null(r_77);
                t = foldr_3(t, i_49, j_49, k_49);
                w_77 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_77), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = j_49(t);
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
  ATerm x_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    ATerm e_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL;
    e_78 = t;
    d_78 :
    if(match_cons(e_78, sym_SDef_3))
      {
        f_78 = ATgetArgument(e_78, 0);
        g_78 = ATgetArgument(e_78, 1);
        h_78 = ATgetArgument(e_78, 2);
        {
          ATerm k_78 = NULL;
          t = not_null(g_78);
          t = length_0(t);
          k_78 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(f_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_78), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0));
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = foldr_3(t, x_4, union_0, y_4);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm q_78 = NULL;
  ATerm s_78 = NULL;
  q_78 = t;
  t = definition_names_0(t);
  s_78 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_78), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = extract_needed_defs_0(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm n_41 (ATerm))
{
  ATerm z_78 = NULL,a_79 = NULL;
  z_78 = t;
  y_78 :
  if(match_cons(z_78, sym_Strategies_1))
    {
      a_79 = ATgetArgument(z_78, 0);
      {
        ATerm c_79 = NULL;
        t = not_null(a_79);
        t = n_41(t);
        c_79 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(c_79));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm s_43 (ATerm), ATerm t_43 (ATerm))
{
  ATerm k_79 = NULL,l_79 = NULL,m_79 = NULL;
  k_79 = t;
  j_79 :
  if(match_cons(k_79, sym_Cons_2))
    {
      l_79 = ATgetArgument(k_79, 0);
      m_79 = ATgetArgument(k_79, 1);
      {
        ATerm p_79 = NULL;
        t = not_null(l_79);
        {
          ATerm r_79 = NULL;
          t = s_43(t);
          p_79 = t;
          t = not_null(m_79);
          t = t_43(t);
          r_79 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_79), not_null(r_79));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm p_41 (ATerm))
{
  ATerm z_79 = NULL,a_80 = NULL;
  z_79 = t;
  y_79 :
  if(match_cons(z_79, sym_Specification_1))
    {
      a_80 = ATgetArgument(z_79, 0);
      {
        ATerm c_80 = NULL;
        t = not_null(a_80);
        t = p_41(t);
        c_80 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(c_80));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm h_80 = NULL;
  h_80 = t;
  g_80 :
  if(!(match_cons(h_80, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm o_43 (ATerm), ATerm p_43 (ATerm))
{
  ATerm m_80 = NULL,n_80 = NULL,o_80 = NULL;
  m_80 = t;
  l_80 :
  if(match_cons(m_80, sym_TCons_2))
    {
      n_80 = ATgetArgument(m_80, 0);
      o_80 = ATgetArgument(m_80, 1);
      {
        ATerm r_80 = NULL;
        t = not_null(n_80);
        {
          ATerm t_80 = NULL;
          t = o_43(t);
          r_80 = t;
          t = not_null(o_80);
          t = p_43(t);
          t_80 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_80), not_null(t_80));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm a_81 = NULL;
  ATerm z_11;
  z_11 = t;
  {
    ATerm z_4 (ATerm t)
    {
      ATerm b_81 = NULL,c_81 = NULL;
      b_81 = t;
      z_80 :
      if(match_cons(b_81, sym_Program_1))
        {
          c_81 = ATgetArgument(b_81, 0);
          if(a_81 != NULL && a_81 != c_81)
            _fail(c_81);
          else
            a_81 = c_81;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, z_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_81), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = z_11;
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
  ATerm j_81 = NULL,k_81 = NULL;
  ATerm b_5 (ATerm t)
  {
    ATerm c_5 (ATerm t)
    {
      ATerm e_12 = t;
      if(PushChoice()==0)
        {
          ATerm g_5 (ATerm t)
          {
            ATerm l_81 = NULL;
            l_81 = t;
            e_81 :
            if(!(match_cons(l_81, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, g_5);
          PopChoice();
          _fail(t);
        }
      else
        t = e_12;
      return(t);
    }
    ATerm d_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, c_5, d_5);
    {
      ATerm n_5 (ATerm t)
      {
        ATerm p_5 (ATerm t)
        {
          ATerm m_81 = NULL,n_81 = NULL;
          m_81 = t;
          g_81 :
          if(match_cons(m_81, sym_Runtime_1))
            {
              n_81 = ATgetArgument(m_81, 0);
              if(k_81 != NULL && k_81 != n_81)
                _fail(n_81);
              else
                k_81 = n_81;
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
            ATerm o_81 = NULL,p_81 = NULL;
            o_81 = t;
            i_81 :
            if(match_cons(o_81, sym_Program_1))
              {
                p_81 = ATgetArgument(o_81, 0);
                if(j_81 != NULL && j_81 != p_81)
                  _fail(p_81);
                else
                  j_81 = p_81;
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
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_81), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_81), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, b_5);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm w_81 = NULL,x_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL;
  w_81 = t;
  t_81 :
  if(match_cons(w_81, sym_TCons_2))
    {
      x_81 = ATgetArgument(w_81, 0);
      y_81 = ATgetArgument(w_81, 1);
      u_81 :
      if(match_cons(y_81, sym_TCons_2))
        {
          z_81 = ATgetArgument(y_81, 0);
          a_82 = ATgetArgument(y_81, 1);
          v_81 :
          if(match_cons(a_82, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(x_81), not_null(z_81));
          else
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
  ATerm i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL;
  i_82 = t;
  f_82 :
  if(match_cons(i_82, sym_TCons_2))
    {
      j_82 = ATgetArgument(i_82, 0);
      k_82 = ATgetArgument(i_82, 1);
      g_82 :
      if(match_cons(k_82, sym_TCons_2))
        {
          l_82 = ATgetArgument(k_82, 0);
          m_82 = ATgetArgument(k_82, 1);
          h_82 :
          if(match_cons(m_82, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(j_82), not_null(l_82));
          else
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
  ATerm u_82 = NULL;
  ATerm h_12;
  h_12 = t;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm n_12 = t;
      if(PushChoice()==0)
        {
          ATerm v_5 (ATerm t)
          {
            ATerm v_82 = NULL,w_82 = NULL;
            v_82 = t;
            r_82 :
            if(match_cons(v_82, sym_Output_1))
              {
                w_82 = ATgetArgument(v_82, 0);
                if(u_82 != NULL && u_82 != w_82)
                  _fail(w_82);
                else
                  u_82 = w_82;
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
          t = n_12;
          {
            ATerm x_82 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            x_82 = t;
            if(u_82 != NULL && u_82 != x_82)
              _fail(x_82);
            else
              u_82 = x_82;
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
  t = h_12;
  {
    ATerm w_5 (ATerm t)
    {
      ATerm x_5 (ATerm t)
      {
        ATerm y_5 (ATerm t)
        {
          t = not_null(u_82);
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
      ATerm o_12 = t;
      if(PushChoice()==0)
        {
          ATerm z_5 (ATerm t)
          {
            ATerm b_6 (ATerm t)
            {
              ATerm y_82 = NULL;
              y_82 = t;
              t_82 :
              if(!(match_cons(y_82, sym_Binary_0)))
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
          t = o_12;
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
ATerm apply_strategy_1 (ATerm t, ATerm o_47 (ATerm))
{
  ATerm g_83 = NULL,i_83 = NULL,j_83 = NULL,k_83 = NULL,l_83 = NULL,m_83 = NULL;
  ATerm p_12;
  p_12 = t;
  t = dtime_0(t);
  t = p_12;
  t = o_47(t);
  {
    ATerm q_12;
    q_12 = t;
    {
      ATerm h_83 = NULL;
      t = dtime_0(t);
      h_83 = t;
      if(g_83 != NULL && g_83 != h_83)
        _fail(h_83);
      else
        g_83 = h_83;
    }
    t = q_12;
    i_83 = t;
    d_83 :
    if(match_cons(i_83, sym_TCons_2))
      {
        j_83 = ATgetArgument(i_83, 0);
        k_83 = ATgetArgument(i_83, 1);
        e_83 :
        if(match_cons(k_83, sym_TCons_2))
          {
            l_83 = ATgetArgument(k_83, 0);
            m_83 = ATgetArgument(k_83, 1);
            f_83 :
            if(match_cons(m_83, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(g_83)), not_null(j_83)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_83), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm s_83 = NULL;
  s_83 = t;
  t = SSL_ReadFromFile(not_null(s_83));
  return(t);
}
ATerm split_2 (ATerm t, ATerm t_58 (ATerm), ATerm u_58 (ATerm))
{
  ATerm z_83 = NULL;
  ATerm b_84 = NULL;
  z_83 = t;
  {
    ATerm d_84 = NULL;
    t = t_58(t);
    b_84 = t;
    t = not_null(z_83);
    t = u_58(t);
    d_84 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_84), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_84), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm m_84 = NULL;
  ATerm r_12;
  r_12 = t;
  {
    ATerm s_12 = t;
    if(PushChoice()==0)
      {
        ATerm d_6 (ATerm t)
        {
          ATerm n_84 = NULL,o_84 = NULL;
          n_84 = t;
          k_84 :
          if(match_cons(n_84, sym_Input_1))
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
        t = option_defined_1(t, d_6);
        PopChoice();
      }
    else
      {
        t = s_12;
        {
          ATerm p_84 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          p_84 = t;
          if(m_84 != NULL && m_84 != p_84)
            _fail(p_84);
          else
            m_84 = p_84;
        }
      }
  }
  t = r_12;
  {
    ATerm e_6 (ATerm t)
    {
      t = not_null(m_84);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, e_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_84 = NULL;
  t_84 = t;
  s_84 :
  if(!(match_cons(t_84, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm n_47 (ATerm))
{
  ATerm f_6 (ATerm t)
  {
    ATerm t_12 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = t_12;
        {
          ATerm u_12 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = u_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, f_6);
  t = n_47(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_84 = NULL;
  v_84 = t;
  t = SSL_table_create(not_null(v_84));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_85 = NULL;
  a_85 = t;
  {
    ATerm v_12;
    v_12 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_85), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = v_12;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm i_85 = NULL,j_85 = NULL,l_85 = NULL,m_85 = NULL,n_85 = NULL;
  n_85 = t;
  g_85 :
  if(match_cons(n_85, sym_Cons_2))
    {
      i_85 = ATgetArgument(n_85, 0);
      j_85 = ATgetArgument(n_85, 1);
      h_85 :
      if(match_cons(j_85, sym_Cons_2))
        {
          l_85 = ATgetArgument(j_85, 0);
          m_85 = ATgetArgument(j_85, 1);
          {
            ATerm r_85 = NULL;
            t = not_null(i_85);
            t = d_0(t);
            t = not_null(l_85);
            t = e_0(t);
            r_85 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_85), not_null(m_85));
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(n_85, "register-usage-info"))
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
      ATerm g_6 (ATerm t)
      {
        ATerm i_86 = NULL;
        i_86 = t;
        w_85 :
        if(!(match_string(i_86, "-S")))
          {
            if(!(match_string(i_86, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm j_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm k_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, g_6, j_6, k_6);
      PopChoice();
    }
  else
    {
      t = a_13;
      {
        ATerm b_13 = t;
        if(PushChoice()==0)
          {
            ATerm l_6 (ATerm t)
            {
              ATerm j_86 = NULL;
              j_86 = t;
              x_85 :
              if(!(match_string(j_86, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm m_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm n_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, l_6, m_6, n_6);
            PopChoice();
          }
        else
          {
            t = b_13;
            {
              ATerm d_13 = t;
              if(PushChoice()==0)
                {
                  ATerm o_6 (ATerm t)
                  {
                    ATerm k_86 = NULL;
                    k_86 = t;
                    y_85 :
                    if(!(match_string(k_86, "-v")))
                      {
                        if(!(match_string(k_86, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm p_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm q_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, o_6, p_6, q_6);
                  PopChoice();
                }
              else
                {
                  t = d_13;
                  {
                    ATerm e_13 = t;
                    if(PushChoice()==0)
                      {
                        ATerm r_6 (ATerm t)
                        {
                          ATerm l_86 = NULL;
                          l_86 = t;
                          z_85 :
                          if(!(match_string(l_86, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm s_6 (ATerm t)
                        {
                          ATerm m_86 = NULL;
                          m_86 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(m_86));
                          return(t);
                        }
                        ATerm t_6 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, r_6, s_6, t_6);
                        PopChoice();
                      }
                    else
                      {
                        t = e_13;
                        {
                          ATerm f_13 = t;
                          if(PushChoice()==0)
                            {
                              ATerm u_6 (ATerm t)
                              {
                                ATerm o_86 = NULL;
                                o_86 = t;
                                c_86 :
                                if(!(match_string(o_86, "-i")))
                                  {
                                    if(!(match_string(o_86, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm a_7 (ATerm t)
                              {
                                ATerm p_86 = NULL;
                                p_86 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_86));
                                return(t);
                              }
                              ATerm b_7 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, u_6, a_7, b_7);
                              PopChoice();
                            }
                          else
                            {
                              t = f_13;
                              {
                                ATerm g_13 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm f_7 (ATerm t)
                                    {
                                      ATerm r_86 = NULL;
                                      r_86 = t;
                                      e_86 :
                                      if(!(match_string(r_86, "-o")))
                                        {
                                          if(!(match_string(r_86, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm g_7 (ATerm t)
                                    {
                                      ATerm s_86 = NULL;
                                      s_86 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(s_86));
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
                                    t = g_13;
                                    {
                                      ATerm n_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm i_7 (ATerm t)
                                          {
                                            ATerm u_86 = NULL;
                                            u_86 = t;
                                            g_86 :
                                            if(!(match_string(u_86, "-b")))
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
                                          t = n_13;
                                          {
                                            ATerm l_7 (ATerm t)
                                            {
                                              ATerm v_86 = NULL;
                                              v_86 = t;
                                              h_86 :
                                              if(!(match_string(v_86, "-s")))
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
  ATerm a_87 = NULL;
  a_87 = t;
  t = SSL_table_destroy(not_null(a_87));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_87 = NULL;
  e_87 = t;
  t = SSL_exit(not_null(e_87));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm i_87 = NULL;
  i_87 = t;
  t = SSL_implode_string(not_null(i_87));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_65 (ATerm))
{
  ATerm l_87 (ATerm t)
  {
    ATerm o_13 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, l_87);
        PopChoice();
      }
    else
      {
        t = o_13;
        t = Nil_0(t);
        t = j_65(t);
      }
    return(t);
  }
  t = l_87(t);
  return(t);
}
ATerm concat_0 (ATerm t)
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
      {
        ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL;
        o_87 = t;
        n_87 :
        if(match_cons(o_87, sym_Cons_2))
          {
            p_87 = ATgetArgument(o_87, 0);
            q_87 = ATgetArgument(o_87, 1);
            t = not_null(p_87);
            {
              ATerm q_7 (ATerm t)
              {
                t = not_null(q_87);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, q_7);
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
  ATerm w_87 = NULL;
  w_87 = t;
  t = SSL_explode_string(not_null(w_87));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm u_45 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_64 (ATerm))
{
  ATerm z_87 (ATerm t)
  {
    ATerm s_13 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = s_13;
        t = Cons_2(t, v_64, z_87);
      }
    return(t);
  }
  t = z_87(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm f_88 = NULL,g_88 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL;
  f_88 = t;
  b_88 :
  if(match_cons(f_88, sym_TCons_2))
    {
      g_88 = ATgetArgument(f_88, 0);
      h_88 = ATgetArgument(f_88, 1);
      c_88 :
      if(match_cons(g_88, sym_Nil_0))
        {
          d_88 :
          if(match_cons(h_88, sym_TCons_2))
            {
              i_88 = ATgetArgument(h_88, 0);
              j_88 = ATgetArgument(h_88, 1);
              e_88 :
              if(match_cons(j_88, sym_TNil_0))
                t = not_null(i_88);
              else
                _fail(t);
            }
          else
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
  ATerm r_88 = NULL,s_88 = NULL,t_88 = NULL,u_88 = NULL,v_88 = NULL,w_88 = NULL,x_88 = NULL;
  r_88 = t;
  n_88 :
  if(match_cons(r_88, sym_TCons_2))
    {
      s_88 = ATgetArgument(r_88, 0);
      v_88 = ATgetArgument(r_88, 1);
      o_88 :
      if(match_cons(s_88, sym_Cons_2))
        {
          t_88 = ATgetArgument(s_88, 0);
          u_88 = ATgetArgument(s_88, 1);
          p_88 :
          if(match_cons(v_88, sym_TCons_2))
            {
              w_88 = ATgetArgument(v_88, 0);
              x_88 = ATgetArgument(v_88, 1);
              q_88 :
              if(match_cons(x_88, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_88), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_88), not_null(w_88)), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm d_52 (ATerm), ATerm e_52 (ATerm))
{
  ATerm c_89 (ATerm t)
  {
    ATerm t_13 = t;
    if(PushChoice()==0)
      {
        t = d_52(t);
        t = c_89(t);
        PopChoice();
      }
    else
      {
        t = t_13;
        t = e_52(t);
      }
    return(t);
  }
  t = c_89(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm g_52 (ATerm))
{
  t = repeat_2(t, g_52, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm e_89 = NULL;
  e_89 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_89), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm t_45 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_38 (ATerm))
{
  ATerm k_89 = NULL,l_89 = NULL;
  k_89 = t;
  j_89 :
  if(match_cons(k_89, sym_Program_1))
    {
      l_89 = ATgetArgument(k_89, 0);
      {
        ATerm n_89 = NULL;
        t = not_null(l_89);
        t = w_38(t);
        n_89 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_89));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm v_89 = NULL;
  ATerm r_7 (ATerm t)
  {
    ATerm s_7 (ATerm t)
    {
      ATerm w_89 = NULL;
      w_89 = t;
      if(v_89 != NULL && v_89 != w_89)
        _fail(w_89);
      else
        v_89 = w_89;
      return(t);
    }
    t = Program_1(t, s_7);
    return(t);
  }
  t = option_defined_1(t, r_7);
  {
    ATerm t_7 (ATerm t)
    {
      ATerm x_89 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm u_7 (ATerm t)
        {
          t = not_null(v_89);
          return(t);
        }
        t = short_description_1(t, u_7);
        t = concat_strings_0(t);
        x_89 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_89), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, t_7);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm v_7 (ATerm t)
      {
        ATerm z_89 = NULL;
        z_89 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_89), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, v_7);
      {
        ATerm w_7 (ATerm t)
        {
          ATerm b_90 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm z_7 (ATerm t)
            {
              t = not_null(v_89);
              return(t);
            }
            t = long_description_1(t, z_7);
            t = concat_strings_0(t);
            b_90 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_90), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = printnl_0(t);
          }
          return(t);
        }
        t = try_1(t, w_7);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
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
              ATerm u_13;
              u_13 = t;
              t = SSL_printnl(not_null(m_90), not_null(o_90));
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
ATerm Undefined_1 (ATerm t, ATerm x_38 (ATerm))
{
  ATerm w_90 = NULL,x_90 = NULL;
  w_90 = t;
  v_90 :
  if(match_cons(w_90, sym_Undefined_1))
    {
      x_90 = ATgetArgument(w_90, 0);
      {
        ATerm z_90 = NULL;
        t = not_null(x_90);
        t = x_38(t);
        z_90 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(z_90));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm d_91 (ATerm t)
  {
    ATerm w_13 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, d_65, _id);
        PopChoice();
      }
    else
      {
        t = w_13;
        t = Cons_2(t, _id, d_91);
      }
    return(t);
  }
  t = d_91(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm s_46 (ATerm))
{
  t = fetch_1(t, s_46);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_91 = NULL;
  f_91 = t;
  e_91 :
  if(!(match_cons(f_91, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_59 (ATerm))
{
  ATerm a_14 = t;
  if(PushChoice()==0)
    {
      t = l_59(t);
      PopChoice();
    }
  else
    t = a_14;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_91 = NULL,l_91 = NULL,m_91 = NULL,n_91 = NULL,o_91 = NULL;
  k_91 = t;
  h_91 :
  if(match_cons(k_91, sym_TCons_2))
    {
      l_91 = ATgetArgument(k_91, 0);
      m_91 = ATgetArgument(k_91, 1);
      i_91 :
      if(match_cons(m_91, sym_TCons_2))
        {
          n_91 = ATgetArgument(m_91, 0);
          o_91 = ATgetArgument(m_91, 1);
          j_91 :
          if(match_cons(o_91, sym_TNil_0))
            t = SSL_table_get(not_null(l_91), not_null(n_91));
          else
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
  ATerm y_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL,c_92 = NULL,d_92 = NULL,e_92 = NULL;
  y_91 = t;
  u_91 :
  if(match_cons(y_91, sym_TCons_2))
    {
      z_91 = ATgetArgument(y_91, 0);
      a_92 = ATgetArgument(y_91, 1);
      v_91 :
      if(match_cons(a_92, sym_TCons_2))
        {
          b_92 = ATgetArgument(a_92, 0);
          c_92 = ATgetArgument(a_92, 1);
          w_91 :
          if(match_cons(c_92, sym_TCons_2))
            {
              d_92 = ATgetArgument(c_92, 0);
              e_92 = ATgetArgument(c_92, 1);
              x_91 :
              if(match_cons(e_92, sym_TNil_0))
                {
                  ATerm b_14;
                  b_14 = t;
                  {
                    ATerm i_92 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_91), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_92), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                      i_92 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_91), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_92), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_92), not_null(i_92)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
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
ATerm register_usage_1 (ATerm t, ATerm y_45 (ATerm))
{
  ATerm n_92 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = y_45(t);
  n_92 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_92), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm u_92 = NULL,v_92 = NULL,w_92 = NULL;
  w_92 = t;
  t_92 :
  if(match_cons(w_92, sym_Cons_2))
    {
      u_92 = ATgetArgument(w_92, 0);
      v_92 = ATgetArgument(w_92, 1);
      {
        ATerm z_92 = NULL;
        t = not_null(u_92);
        t = a_0(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = b_0(t);
        z_92 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_92), not_null(v_92));
      }
    }
  else
    {
      if(match_string(w_92, "register-usage-info"))
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
    ATerm f_93 = NULL;
    f_93 = t;
    e_93 :
    if(!(match_string(f_93, "--help")))
      {
        if(!(match_string(f_93, "-h")))
          {
            if(!(match_string(f_93, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm c_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm e_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, a_8, c_8, e_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_93 = NULL,j_93 = NULL,k_93 = NULL;
  i_93 = t;
  h_93 :
  if(match_cons(i_93, sym_Cons_2))
    {
      j_93 = ATgetArgument(i_93, 0);
      k_93 = ATgetArgument(i_93, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_93)), not_null(k_93));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm w_45 (ATerm))
{
  ATerm f_14;
  f_14 = t;
  {
    ATerm f_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = w_45(t);
      return(t);
    }
    t = try_1(t, f_8);
  }
  t = f_14;
  {
    ATerm g_8 (ATerm t)
    {
      ATerm p_93 = NULL;
      p_93 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_93));
      return(t);
    }
    ATerm h_8 (ATerm t)
    {
      ATerm q_14 = t;
      if(PushChoice()==0)
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
              t = w_45(t);
              t = Cons_2(t, _id, h_8);
            }
          PopChoice();
        }
      else
        {
          t = q_14;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_8, h_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm y_93 = NULL,z_93 = NULL,a_94 = NULL;
  ATerm s_14;
  s_14 = t;
  {
    ATerm b_94 = NULL,c_94 = NULL,d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL;
    b_94 = t;
    u_93 :
    if(match_cons(b_94, sym_TCons_2))
      {
        c_94 = ATgetArgument(b_94, 0);
        d_94 = ATgetArgument(b_94, 1);
        v_93 :
        if(match_cons(d_94, sym_TCons_2))
          {
            e_94 = ATgetArgument(d_94, 0);
            f_94 = ATgetArgument(d_94, 1);
            w_93 :
            if(match_cons(f_94, sym_TCons_2))
              {
                g_94 = ATgetArgument(f_94, 0);
                h_94 = ATgetArgument(f_94, 1);
                x_93 :
                if(match_cons(h_94, sym_TNil_0))
                  {
                    if(y_93 != NULL && y_93 != c_94)
                      _fail(c_94);
                    else
                      y_93 = c_94;
                    if(z_93 != NULL && z_93 != e_94)
                      _fail(e_94);
                    else
                      z_93 = e_94;
                    if(a_94 != NULL && a_94 != g_94)
                      _fail(g_94);
                    else
                      a_94 = g_94;
                    t = SSL_table_put(not_null(y_93), not_null(z_93), not_null(a_94));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = s_14;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm v_45 (ATerm))
{
  ATerm k_94 = NULL;
  ATerm t_14;
  t_14 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = t_14;
  {
    ATerm i_8 (ATerm t)
    {
      ATerm u_14 = t;
      if(PushChoice()==0)
        {
          t = v_45(t);
          PopChoice();
        }
      else
        {
          t = u_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_8);
    {
      ATerm j_8 (ATerm t)
      {
        ATerm v_14 = t;
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
            t = v_14;
            {
              ATerm k_8 (ATerm t)
              {
                ATerm l_8 (ATerm t)
                {
                  ATerm l_94 = NULL;
                  l_94 = t;
                  if(k_94 != NULL && k_94 != l_94)
                    _fail(l_94);
                  else
                    k_94 = l_94;
                  return(t);
                }
                t = Undefined_1(t, l_8);
                return(t);
              }
              t = option_defined_1(t, k_8);
              {
                ATerm x_14;
                x_14 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_94), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = x_14;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, j_8);
      {
        ATerm g_15;
        g_15 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = g_15;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm c_47 (ATerm), ATerm d_47 (ATerm), ATerm e_47 (ATerm))
{
  ATerm m_8 (ATerm t)
  {
    ATerm h_15 = t;
    if(PushChoice()==0)
      {
        t = d_47(t);
        PopChoice();
      }
    else
      {
        t = h_15;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, m_8);
  t = store_options_0(t);
  {
    ATerm i_15 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, e_47);
        PopChoice();
      }
    else
      {
        t = i_15;
        {
          ATerm j_15 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, c_47);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = j_15;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm x_46 (ATerm), ATerm y_46 (ATerm))
{
  t = iowrap_3(t, x_46, y_46, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm u_46 (ATerm))
{
  ATerm n_8 (ATerm t)
  {
    ATerm s_8 (ATerm t)
    {
      t = TCons_2(t, u_46, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, s_8);
    return(t);
  }
  t = iowrap_2(t, n_8, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm t_8 (ATerm t)
  {
    ATerm v_8 (ATerm t)
    {
      ATerm x_8 (ATerm t)
      {
        ATerm y_8 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
          return(t);
        }
        t = Cons_2(t, y_8, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, x_8);
      return(t);
    }
    t = Specification_1(t, v_8);
    return(t);
  }
  t = iowrap_1(t, t_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_all_0(t);
  return(t);
}
