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
ATerm filter_1 (ATerm, ATerm m_55 (ATerm));
ATerm FilterNonMissingDefs_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm x_43 (ATerm), ATerm y_43 (ATerm));
ATerm Let_2 (ATerm, ATerm z_43 (ATerm), ATerm a_44 (ATerm));
ATerm sboundin_3 (ATerm, ATerm q_67 (ATerm), ATerm r_67 (ATerm), ATerm s_67 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm w_57 (ATerm), ATerm x_57 (ATerm), ATerm y_57 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm m_57 (ATerm), ATerm n_57 (ATerm));
ATerm diff_1 (ATerm, ATerm r_57 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm w_53 (ATerm), ATerm x_53 (ATerm), ATerm y_53 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_53 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm e_56 (ATerm), ATerm f_56 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm t_66 (ATerm), ATerm u_66 (ATerm));
ATerm alltd_1 (ATerm, ATerm t_65 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm v_66 (ATerm), ATerm w_66 (ATerm));
ATerm substitute_1 (ATerm, ATerm x_66 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm NonOverloadedDef_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm g_56 (ATerm), ATerm h_56 (ATerm), ATerm i_56 (ATerm));
ATerm length_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm b_44 (ATerm), ATerm c_44 (ATerm), ATerm d_44 (ATerm));
ATerm partition_1 (ATerm, ATerm u_55 (ATerm));
ATerm OverloadedDef_0 (ATerm);
ATerm Expl_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm y_41 (ATerm), ATerm z_41 (ATerm));
ATerm Con_3 (ATerm, ATerm v_41 (ATerm), ATerm w_41 (ATerm), ATerm x_41 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm b_45 (ATerm), ATerm c_45 (ATerm));
ATerm oncetd_1 (ATerm, ATerm f_65 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm p_63 (ATerm));
ATerm desugar_0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm r_60 (ATerm));
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm q_59 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm new_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm w_56 (ATerm));
ATerm add_0 (ATerm);
ATerm MkDistApplication_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm l_57 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm i_59 (ATerm), ATerm j_59 (ATerm), ATerm k_59 (ATerm), ATerm l_59 (ATerm));
ATerm zip_1 (ATerm, ATerm n_59 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm v_45 (ATerm), ATerm w_45 (ATerm), ATerm x_45 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm v_51 (ATerm), ATerm w_51 (ATerm));
ATerm for_3 (ATerm, ATerm y_51 (ATerm), ATerm z_51 (ATerm), ATerm a_52 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm e_46 (ATerm), ATerm f_46 (ATerm), ATerm g_46 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm f_43 (ATerm));
ATerm Cons_2 (ATerm, ATerm k_45 (ATerm), ATerm l_45 (ATerm));
ATerm Specification_1 (ATerm, ATerm h_43 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm g_45 (ATerm), ATerm h_45 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm k_49 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm m_62 (ATerm), ATerm n_62 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm j_49 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_61 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm q_47 (ATerm));
ATerm map_1 (ATerm, ATerm y_60 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm e_51 (ATerm), ATerm f_51 (ATerm));
ATerm repeat_1 (ATerm, ATerm h_51 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_47 (ATerm));
ATerm Program_1 (ATerm, ATerm o_40 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm p_40 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_61 (ATerm));
ATerm option_defined_1 (ATerm, ATerm o_48 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_63 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_47 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_47 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_47 (ATerm));
ATerm iowrap_3 (ATerm, ATerm y_48 (ATerm), ATerm z_48 (ATerm), ATerm a_49 (ATerm));
ATerm iowrap_2 (ATerm, ATerm t_48 (ATerm), ATerm u_48 (ATerm));
ATerm iowrap_1 (ATerm, ATerm q_48 (ATerm));
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
ATerm filter_1 (ATerm t, ATerm m_55 (ATerm))
{
  ATerm d_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = d_9;
      {
        ATerm e_9 = t;
        if(PushChoice()==0)
          {
            ATerm i_0 (ATerm t)
            {
              t = filter_1(t, m_55);
              return(t);
            }
            t = Cons_2(t, m_55, i_0);
            PopChoice();
          }
        else
          {
            t = e_9;
            {
              ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
              r_4 = t;
              q_4 :
              if(match_cons(r_4, sym_Cons_2))
                {
                  s_4 = ATgetArgument(r_4, 0);
                  t_4 = ATgetArgument(r_4, 1);
                  t = not_null(t_4);
                  t = filter_1(t, m_55);
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
                  ATerm f_9 = t;
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
                                        ATerm g_9 = t;
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
                                            t = g_9;
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
                    t = f_9;
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
ATerm Rec_2 (ATerm t, ATerm x_43 (ATerm), ATerm y_43 (ATerm))
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
          t = x_43(t);
          n_6 = t;
          t = not_null(k_6);
          t = y_43(t);
          p_6 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(n_6), not_null(p_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm z_43 (ATerm), ATerm a_44 (ATerm))
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
          t = z_43(t);
          d_7 = t;
          t = not_null(a_7);
          t = a_44(t);
          f_7 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(d_7), not_null(f_7));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm q_67 (ATerm), ATerm r_67 (ATerm), ATerm s_67 (ATerm))
{
  ATerm h_9 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, q_67, q_67);
      PopChoice();
    }
  else
    {
      t = h_9;
      {
        ATerm i_9 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, s_67, s_67, q_67);
            PopChoice();
          }
        else
          {
            t = i_9;
            t = Rec_2(t, s_67, q_67);
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
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  d_10 = t;
  c_10 :
  if(match_cons(d_10, sym_SDef_3))
    {
      e_10 = ATgetArgument(d_10, 0);
      f_10 = ATgetArgument(d_10, 1);
      g_10 = ATgetArgument(d_10, 2);
      t = not_null(f_10);
      {
        ATerm n_0 (ATerm t)
        {
          ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
          k_10 = t;
          b_10 :
          if(match_cons(k_10, sym_VarDec_2))
            {
              l_10 = ATgetArgument(k_10, 0);
              m_10 = ATgetArgument(k_10, 1);
              t = not_null(l_10);
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
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
  x_10 = t;
  w_10 :
  if(match_cons(x_10, sym_Let_2))
    {
      y_10 = ATgetArgument(x_10, 0);
      z_10 = ATgetArgument(x_10, 1);
      t = not_null(y_10);
      {
        ATerm o_0 (ATerm t)
        {
          ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,j_12 = NULL;
          w_11 = t;
          v_10 :
          if(match_cons(w_11, sym_SDef_3))
            {
              x_11 = ATgetArgument(w_11, 0);
              y_11 = ATgetArgument(w_11, 1);
              j_12 = ATgetArgument(w_11, 2);
              t = not_null(x_11);
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
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
  t_12 = t;
  q_12 :
  if(match_cons(t_12, sym_TCons_2))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      r_12 :
      if(match_cons(v_12, sym_TCons_2))
        {
          w_12 = ATgetArgument(v_12, 0);
          x_12 = ATgetArgument(v_12, 1);
          s_12 :
          if(match_cons(x_12, sym_TNil_0))
            {
              t = not_null(u_12);
              {
                ATerm b_13 (ATerm t)
                {
                  ATerm j_9 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(w_12);
                      PopChoice();
                    }
                  else
                    {
                      t = j_9;
                      {
                        ATerm k_9 = t;
                        if(PushChoice()==0)
                          {
                            ATerm p_0 (ATerm t)
                            {
                              t = not_null(w_12);
                              return(t);
                            }
                            t = HdMember_1(t, p_0);
                            t = b_13(t);
                            PopChoice();
                          }
                        else
                          {
                            t = k_9;
                            t = Cons_2(t, _id, b_13);
                          }
                      }
                    }
                  return(t);
                }
                t = b_13(t);
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
ATerm crush_3 (ATerm t, ATerm w_57 (ATerm), ATerm x_57 (ATerm), ATerm y_57 (ATerm))
{
  ATerm p_13 = NULL;
  ATerm r_13 = NULL;
  p_13 = t;
  {
    ATerm s_13 = NULL;
    ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL;
    t = not_null(p_13);
    s_13 = t;
    t = SSL_explode_term(not_null(s_13));
    x_13 = t;
    m_13 :
    if(match_cons(x_13, sym_TCons_2))
      {
        y_13 = ATgetArgument(x_13, 0);
        z_13 = ATgetArgument(x_13, 1);
        n_13 :
        if(match_cons(z_13, sym_TCons_2))
          {
            a_14 = ATgetArgument(z_13, 0);
            b_14 = ATgetArgument(z_13, 1);
            o_13 :
            if(match_cons(b_14, sym_TNil_0))
              {
                if(r_13 != NULL && r_13 != a_14)
                  _fail(a_14);
                else
                  r_13 = a_14;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(r_13);
    t = foldr_3(t, w_57, x_57, y_57);
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm m_57 (ATerm), ATerm n_57 (ATerm))
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  i_14 = t;
  h_14 :
  if(match_cons(i_14, sym_Cons_2))
    {
      j_14 = ATgetArgument(i_14, 0);
      k_14 = ATgetArgument(i_14, 1);
      t = n_57(t);
      {
        ATerm q_0 (ATerm t)
        {
          ATerm n_14 = NULL;
          n_14 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_14), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = m_57(t);
          return(t);
        }
        t = fetch_1(t, q_0);
        t = not_null(k_14);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_1 (ATerm t, ATerm r_57 (ATerm))
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL;
  w_14 = t;
  t_14 :
  if(match_cons(w_14, sym_TCons_2))
    {
      x_14 = ATgetArgument(w_14, 0);
      y_14 = ATgetArgument(w_14, 1);
      u_14 :
      if(match_cons(y_14, sym_TCons_2))
        {
          z_14 = ATgetArgument(y_14, 0);
          a_15 = ATgetArgument(y_14, 1);
          v_14 :
          if(match_cons(a_15, sym_TNil_0))
            {
              t = not_null(x_14);
              {
                ATerm e_15 (ATerm t)
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
                        ATerm m_9 = t;
                        if(PushChoice()==0)
                          {
                            ATerm r_0 (ATerm t)
                            {
                              t = not_null(z_14);
                              return(t);
                            }
                            t = HdMember_p__2(t, r_57, r_0);
                            t = e_15(t);
                            PopChoice();
                          }
                        else
                          {
                            t = m_9;
                            t = Cons_2(t, _id, e_15);
                          }
                      }
                    }
                  return(t);
                }
                t = e_15(t);
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
ATerm free_vars2_4 (ATerm t, ATerm w_53 (ATerm), ATerm x_53 (ATerm), ATerm y_53 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_53 (ATerm))
{
  ATerm r_15 (ATerm t)
  {
    ATerm s_0 (ATerm t)
    {
      ATerm n_9 = t;
      if(PushChoice()==0)
        {
          t = w_53(t);
          PopChoice();
        }
      else
        {
          t = n_9;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      return(t);
    }
    ATerm t_0 (ATerm t)
    {
      ATerm o_9 = t;
      if(PushChoice()==0)
        {
          ATerm g_15 = NULL;
          ATerm p_9;
          p_9 = t;
          {
            ATerm h_15 = NULL;
            t = x_53(t);
            h_15 = t;
            if(g_15 != NULL && g_15 != h_15)
              _fail(h_15);
            else
              g_15 = h_15;
          }
          t = p_9;
          {
            ATerm u_0 (ATerm t)
            {
              ATerm w_0 (ATerm t)
              {
                t = not_null(g_15);
                return(t);
              }
              t = split_2(t, r_15, w_0);
              t = diff_1(t, z_53);
              return(t);
            }
            ATerm v_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = y_53(t, u_0, r_15, v_0);
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
          t = o_9;
          {
            ATerm y_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = crush_3(t, y_0, union_0, r_15);
          }
        }
      return(t);
    }
    t = split_2(t, s_0, t_0);
    t = union_0(t);
    return(t);
  }
  t = r_15(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL;
    s_16 = t;
    y_15 :
    if(match_cons(s_16, sym_Call_2))
      {
        t_16 = ATgetArgument(s_16, 0);
        v_16 = ATgetArgument(s_16, 1);
        z_15 :
        if(match_cons(t_16, sym_SVar_1))
          {
            u_16 = ATgetArgument(t_16, 0);
            {
              ATerm a_17 = NULL;
              t = not_null(v_16);
              t = length_0(t);
              a_17 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(u_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_17), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0));
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
    ATerm q_9 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = q_9;
        {
          ATerm r_9 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = r_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm b_1 (ATerm t)
  {
    ATerm c_17 = NULL,d_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL;
    c_17 = t;
    m_16 :
    if(match_cons(c_17, sym_TCons_2))
      {
        d_17 = ATgetArgument(c_17, 0);
        n_17 = ATgetArgument(c_17, 1);
        n_16 :
        if(match_cons(d_17, sym_TCons_2))
          {
            j_17 = ATgetArgument(d_17, 0);
            k_17 = ATgetArgument(d_17, 1);
            o_16 :
            if(match_cons(k_17, sym_TCons_2))
              {
                l_17 = ATgetArgument(k_17, 0);
                m_17 = ATgetArgument(k_17, 1);
                p_16 :
                if(match_cons(m_17, sym_TNil_0))
                  {
                    q_16 :
                    if(match_cons(n_17, sym_TCons_2))
                      {
                        o_17 = ATgetArgument(n_17, 0);
                        p_17 = ATgetArgument(n_17, 1);
                        r_16 :
                        if(match_cons(p_17, sym_TNil_0))
                          {
                            if(j_17 != NULL && j_17 != o_17)
                              _fail(o_17);
                            else
                              j_17 = o_17;
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
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
ATerm foldr_2 (ATerm t, ATerm e_56 (ATerm), ATerm f_56 (ATerm))
{
  ATerm s_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = e_56(t);
      PopChoice();
    }
  else
    {
      t = s_9;
      {
        ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
        x_17 = t;
        w_17 :
        if(match_cons(x_17, sym_Cons_2))
          {
            y_17 = ATgetArgument(x_17, 0);
            z_17 = ATgetArgument(x_17, 1);
            {
              ATerm e_18 = NULL;
              t = not_null(z_17);
              t = foldr_2(t, e_56, f_56);
              e_18 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_18), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = f_56(t);
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
    ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
    o_18 = t;
    l_18 :
    if(match_cons(o_18, sym_TCons_2))
      {
        p_18 = ATgetArgument(o_18, 0);
        q_18 = ATgetArgument(o_18, 1);
        m_18 :
        if(match_cons(q_18, sym_TCons_2))
          {
            r_18 = ATgetArgument(q_18, 0);
            s_18 = ATgetArgument(q_18, 1);
            n_18 :
            if(match_cons(s_18, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(p_18), not_null(r_18));
            else
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
  ATerm a_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
  a_19 = t;
  x_18 :
  if(match_cons(a_19, sym_Call_2))
    {
      d_19 = ATgetArgument(a_19, 0);
      f_19 = ATgetArgument(a_19, 1);
      y_18 :
      if(match_cons(d_19, sym_SVar_1))
        {
          e_19 = ATgetArgument(d_19, 0);
          z_18 :
          if(match_cons(f_19, sym_Nil_0))
            t = not_null(e_19);
          else
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
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
  o_19 = t;
  k_19 :
  if(match_cons(o_19, sym_TCons_2))
    {
      p_19 = ATgetArgument(o_19, 0);
      q_19 = ATgetArgument(o_19, 1);
      l_19 :
      if(match_cons(q_19, sym_TCons_2))
        {
          r_19 = ATgetArgument(q_19, 0);
          u_19 = ATgetArgument(q_19, 1);
          m_19 :
          if(match_cons(r_19, sym_Cons_2))
            {
              s_19 = ATgetArgument(r_19, 0);
              t_19 = ATgetArgument(r_19, 1);
              n_19 :
              if(match_cons(u_19, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_19), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL;
  d_23 = t;
  w_22 :
  if(match_cons(d_23, sym_TCons_2))
    {
      e_23 = ATgetArgument(d_23, 0);
      f_23 = ATgetArgument(d_23, 1);
      x_22 :
      if(match_cons(f_23, sym_TCons_2))
        {
          g_23 = ATgetArgument(f_23, 0);
          n_23 = ATgetArgument(f_23, 1);
          y_22 :
          if(match_cons(g_23, sym_Cons_2))
            {
              h_23 = ATgetArgument(g_23, 0);
              m_23 = ATgetArgument(g_23, 1);
              z_22 :
              if(match_cons(h_23, sym_TCons_2))
                {
                  i_23 = ATgetArgument(h_23, 0);
                  j_23 = ATgetArgument(h_23, 1);
                  a_23 :
                  if(match_cons(j_23, sym_TCons_2))
                    {
                      k_23 = ATgetArgument(j_23, 0);
                      l_23 = ATgetArgument(j_23, 1);
                      b_23 :
                      if(match_cons(l_23, sym_TNil_0))
                        {
                          c_23 :
                          if(match_cons(n_23, sym_TNil_0))
                            {
                              ATerm p_23 = NULL;
                              if(e_23 != NULL && e_23 != i_23)
                                _fail(i_23);
                              else
                                e_23 = i_23;
                              if(p_23 != NULL && p_23 != k_23)
                                _fail(k_23);
                              else
                                p_23 = k_23;
                              t = not_null(p_23);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm t_9 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = t_9;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm t_66 (ATerm), ATerm u_66 (ATerm))
{
  ATerm x_23 = NULL;
  ATerm z_23 = NULL;
  x_23 = t;
  {
    ATerm b_24 = NULL;
    t = t_66(t);
    z_23 = t;
    t = u_66(t);
    b_24 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_24), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm t_65 (ATerm))
{
  ATerm g_24 (ATerm t)
  {
    ATerm u_9 = t;
    if(PushChoice()==0)
      {
        t = t_65(t);
        PopChoice();
      }
    else
      {
        t = u_9;
        t = _all(t, g_24);
      }
    return(t);
  }
  t = g_24(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
  o_24 = t;
  k_24 :
  if(match_cons(o_24, sym_TCons_2))
    {
      p_24 = ATgetArgument(o_24, 0);
      q_24 = ATgetArgument(o_24, 1);
      l_24 :
      if(match_cons(q_24, sym_TCons_2))
        {
          r_24 = ATgetArgument(q_24, 0);
          s_24 = ATgetArgument(q_24, 1);
          m_24 :
          if(match_cons(s_24, sym_TNil_0))
            {
              ATerm w_24 = NULL;
              if(w_24 != NULL && w_24 != r_24)
                _fail(r_24);
              else
                w_24 = r_24;
            }
          else
            {
              if(match_cons(s_24, sym_TCons_2))
                {
                  t_24 = ATgetArgument(s_24, 0);
                  u_24 = ATgetArgument(s_24, 1);
                  n_24 :
                  if(match_cons(u_24, sym_TNil_0))
                    {
                      ATerm c_25 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_24), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      c_25 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_24), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm v_66 (ATerm), ATerm w_66 (ATerm))
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL;
  t = subs_args_0(t);
  l_25 = t;
  i_25 :
  if(match_cons(l_25, sym_TCons_2))
    {
      m_25 = ATgetArgument(l_25, 0);
      n_25 = ATgetArgument(l_25, 1);
      j_25 :
      if(match_cons(n_25, sym_TCons_2))
        {
          o_25 = ATgetArgument(n_25, 0);
          p_25 = ATgetArgument(n_25, 1);
          k_25 :
          if(match_cons(p_25, sym_TNil_0))
            {
              t = not_null(o_25);
              {
                ATerm e_1 (ATerm t)
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = not_null(m_25);
                    return(t);
                  }
                  t = SubsVar_2(t, v_66, f_1);
                  t = w_66(t);
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
ATerm substitute_1 (ATerm t, ATerm x_66 (ATerm))
{
  t = substitute_2(t, x_66, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL;
  k_26 = t;
  i_26 :
  if(match_cons(k_26, sym_Cons_2))
    {
      l_26 = ATgetArgument(k_26, 0);
      p_26 = ATgetArgument(k_26, 1);
      j_26 :
      if(match_cons(l_26, sym_SDef_3))
        {
          m_26 = ATgetArgument(l_26, 0);
          n_26 = ATgetArgument(l_26, 1);
          o_26 = ATgetArgument(l_26, 2);
          {
            ATerm b_27 = NULL;
            t = not_null(n_26);
            {
              ATerm i_27 = NULL;
              ATerm g_1 (ATerm t)
              {
                ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
                u_26 = t;
                w_25 :
                if(match_cons(u_26, sym_VarDec_2))
                  {
                    v_26 = ATgetArgument(u_26, 0);
                    w_26 = ATgetArgument(u_26, 1);
                    {
                      ATerm z_26 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TNil_0);
                      t = new_0(t);
                      z_26 = t;
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(z_26), not_null(w_26));
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, g_1);
              b_27 = t;
              {
                ATerm x_27 = NULL;
                ATerm h_1 (ATerm t)
                {
                  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
                  d_27 = t;
                  z_25 :
                  if(match_cons(d_27, sym_VarDec_2))
                    {
                      e_27 = ATgetArgument(d_27, 0);
                      f_27 = ATgetArgument(d_27, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_27)), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = map_1(t, h_1);
                i_27 = t;
                t = not_null(k_26);
                {
                  ATerm z_27 = NULL;
                  ATerm i_1 (ATerm t)
                  {
                    ATerm k_27 = NULL,l_27 = NULL,n_27 = NULL,o_27 = NULL;
                    k_27 = t;
                    f_26 :
                    if(match_cons(k_27, sym_SDef_3))
                      {
                        l_27 = ATgetArgument(k_27, 0);
                        n_27 = ATgetArgument(k_27, 1);
                        o_27 = ATgetArgument(k_27, 2);
                        {
                          ATerm p_27 = NULL,q_27 = NULL,v_27 = NULL;
                          if(m_26 != NULL && m_26 != l_27)
                            _fail(l_27);
                          else
                            m_26 = l_27;
                          if(p_27 != NULL && p_27 != n_27)
                            _fail(n_27);
                          else
                            p_27 = n_27;
                          if(q_27 != NULL && q_27 != o_27)
                            _fail(o_27);
                          else
                            q_27 = o_27;
                          t = not_null(p_27);
                          {
                            ATerm j_1 (ATerm t)
                            {
                              ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
                              r_27 = t;
                              d_26 :
                              if(match_cons(r_27, sym_VarDec_2))
                                {
                                  s_27 = ATgetArgument(r_27, 0);
                                  t_27 = ATgetArgument(r_27, 1);
                                  t = not_null(s_27);
                                }
                              else
                                _fail(t);
                              return(t);
                            }
                            t = map_1(t, j_1);
                            v_27 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_27), (ATerm) ATmakeAppl(sym_TNil_0))));
                            t = ssubs_0(t);
                          }
                        }
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = map_1(t, i_1);
                  x_27 = t;
                  t = choices_0(t);
                  z_27 = t;
                  t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_26), not_null(b_27), not_null(z_27));
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
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
  p_28 = t;
  n_28 :
  if(match_cons(p_28, sym_Cons_2))
    {
      q_28 = ATgetArgument(p_28, 0);
      r_28 = ATgetArgument(p_28, 1);
      o_28 :
      if(match_cons(r_28, sym_Nil_0))
        t = not_null(q_28);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm joindefs_0 (ATerm t)
{
  ATerm v_9 = t;
  if(PushChoice()==0)
    {
      t = JoinDefs1_0(t);
      PopChoice();
    }
  else
    {
      t = v_9;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm NonOverloadedDef_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,v_29 = NULL,w_29 = NULL;
  k_29 = t;
  w_28 :
  if(match_cons(k_29, sym_TCons_2))
    {
      l_29 = ATgetArgument(k_29, 0);
      q_29 = ATgetArgument(k_29, 1);
      x_28 :
      if(match_cons(l_29, sym_TCons_2))
        {
          m_29 = ATgetArgument(l_29, 0);
          n_29 = ATgetArgument(l_29, 1);
          y_28 :
          if(match_cons(n_29, sym_TCons_2))
            {
              o_29 = ATgetArgument(n_29, 0);
              p_29 = ATgetArgument(n_29, 1);
              g_29 :
              if(match_int(o_29, 0))
                {
                  h_29 :
                  if(match_cons(p_29, sym_TNil_0))
                    {
                      i_29 :
                      if(match_cons(q_29, sym_TCons_2))
                        {
                          v_29 = ATgetArgument(q_29, 0);
                          w_29 = ATgetArgument(q_29, 1);
                          j_29 :
                          if(match_cons(w_29, sym_TNil_0))
                            {
                              t = not_null(v_29);
                              {
                                ATerm k_1 (ATerm t)
                                {
                                  ATerm l_1 (ATerm t)
                                  {
                                    ATerm z_29 = NULL;
                                    z_29 = t;
                                    if(m_29 != NULL && m_29 != z_29)
                                      _fail(z_29);
                                    else
                                      m_29 = z_29;
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
ATerm foldr_3 (ATerm t, ATerm g_56 (ATerm), ATerm h_56 (ATerm), ATerm i_56 (ATerm))
{
  ATerm w_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = g_56(t);
      PopChoice();
    }
  else
    {
      t = w_9;
      {
        ATerm n_30 = NULL,s_30 = NULL,t_30 = NULL;
        n_30 = t;
        m_30 :
        if(match_cons(n_30, sym_Cons_2))
          {
            s_30 = ATgetArgument(n_30, 0);
            t_30 = ATgetArgument(n_30, 1);
            {
              ATerm w_30 = NULL;
              t = not_null(s_30);
              {
                ATerm y_30 = NULL;
                t = i_56(t);
                w_30 = t;
                t = not_null(t_30);
                t = foldr_3(t, g_56, h_56, i_56);
                y_30 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_30), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_30), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = h_56(t);
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
ATerm SDef_3 (ATerm t, ATerm b_44 (ATerm), ATerm c_44 (ATerm), ATerm d_44 (ATerm))
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
  u_31 = t;
  t_31 :
  if(match_cons(u_31, sym_SDef_3))
    {
      v_31 = ATgetArgument(u_31, 0);
      w_31 = ATgetArgument(u_31, 1);
      x_31 = ATgetArgument(u_31, 2);
      {
        ATerm b_32 = NULL;
        t = not_null(v_31);
        {
          ATerm d_32 = NULL;
          t = b_44(t);
          b_32 = t;
          t = not_null(w_31);
          {
            ATerm j_32 = NULL;
            t = c_44(t);
            d_32 = t;
            t = not_null(x_31);
            t = d_44(t);
            j_32 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(b_32), not_null(d_32), not_null(j_32));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm partition_1 (ATerm t, ATerm u_55 (ATerm))
{
  ATerm a_34 (ATerm t)
  {
    ATerm x_9 = t;
    if(PushChoice()==0)
      {
        ATerm d_33 = NULL;
        d_33 = t;
        s_32 :
        if(match_cons(d_33, sym_Nil_0))
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
        else
          _fail(t);
        PopChoice();
      }
    else
      {
        t = x_9;
        {
          ATerm y_9 = t;
          if(PushChoice()==0)
            {
              ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL;
              t = Cons_2(t, u_55, a_34);
              e_33 = t;
              u_32 :
              if(match_cons(e_33, sym_Cons_2))
                {
                  f_33 = ATgetArgument(e_33, 0);
                  g_33 = ATgetArgument(e_33, 1);
                  v_32 :
                  if(match_cons(g_33, sym_TCons_2))
                    {
                      h_33 = ATgetArgument(g_33, 0);
                      i_33 = ATgetArgument(g_33, 1);
                      w_32 :
                      if(match_cons(i_33, sym_TCons_2))
                        {
                          j_33 = ATgetArgument(i_33, 0);
                          k_33 = ATgetArgument(i_33, 1);
                          x_32 :
                          if(match_cons(k_33, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_33), not_null(h_33)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_33), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
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
              t = y_9;
              {
                ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL;
                t = Cons_2(t, _id, a_34);
                o_33 = t;
                z_32 :
                if(match_cons(o_33, sym_Cons_2))
                  {
                    p_33 = ATgetArgument(o_33, 0);
                    q_33 = ATgetArgument(o_33, 1);
                    a_33 :
                    if(match_cons(q_33, sym_TCons_2))
                      {
                        r_33 = ATgetArgument(q_33, 0);
                        s_33 = ATgetArgument(q_33, 1);
                        b_33 :
                        if(match_cons(s_33, sym_TCons_2))
                          {
                            t_33 = ATgetArgument(s_33, 0);
                            u_33 = ATgetArgument(s_33, 1);
                            c_33 :
                            if(match_cons(u_33, sym_TNil_0))
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_33), not_null(t_33)), (ATerm) ATmakeAppl(sym_TNil_0)));
                            else
                              _fail(t);
                          }
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
  t = a_34(t);
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
  n_34 = t;
  h_34 :
  if(match_cons(n_34, sym_TCons_2))
    {
      o_34 = ATgetArgument(n_34, 0);
      t_34 = ATgetArgument(n_34, 1);
      i_34 :
      if(match_cons(o_34, sym_TCons_2))
        {
          p_34 = ATgetArgument(o_34, 0);
          q_34 = ATgetArgument(o_34, 1);
          j_34 :
          if(match_cons(q_34, sym_TCons_2))
            {
              r_34 = ATgetArgument(q_34, 0);
              s_34 = ATgetArgument(q_34, 1);
              k_34 :
              if(match_cons(s_34, sym_TNil_0))
                {
                  l_34 :
                  if(match_cons(t_34, sym_TCons_2))
                    {
                      u_34 = ATgetArgument(t_34, 0);
                      v_34 = ATgetArgument(t_34, 1);
                      m_34 :
                      if(match_cons(v_34, sym_TNil_0))
                        {
                          t = not_null(u_34);
                          {
                            ATerm o_1 (ATerm t)
                            {
                              ATerm p_1 (ATerm t)
                              {
                                ATerm c_35 = NULL;
                                c_35 = t;
                                if(p_34 != NULL && p_34 != c_35)
                                  _fail(c_35);
                                else
                                  p_34 = c_35;
                                return(t);
                              }
                              ATerm q_1 (ATerm t)
                              {
                                ATerm z_9;
                                z_9 = t;
                                {
                                  ATerm d_35 = NULL;
                                  t = length_0(t);
                                  d_35 = t;
                                  if(r_34 != NULL && r_34 != d_35)
                                    _fail(d_35);
                                  else
                                    r_34 = d_35;
                                }
                                t = z_9;
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
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
  h_36 = t;
  g_36 :
  if(match_cons(h_36, sym_Match_1))
    {
      i_36 = ATgetArgument(h_36, 0);
      {
        ATerm l_36 = NULL;
        ATerm n_36 = NULL;
        t = new_0(t);
        l_36 = t;
        {
          ATerm q_36 = NULL,r_36 = NULL,z_36 = NULL;
          t = new_0(t);
          n_36 = t;
          t = not_null(i_36);
          {
            ATerm r_1 (ATerm t)
            {
              ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL;
              w_36 = t;
              s_35 :
              if(match_cons(w_36, sym_Explode_2))
                {
                  x_36 = ATgetArgument(w_36, 0);
                  y_36 = ATgetArgument(w_36, 1);
                  if(q_36 != NULL && q_36 != x_36)
                    _fail(x_36);
                  else
                    q_36 = x_36;
                  if(r_36 != NULL && r_36 != y_36)
                    _fail(y_36);
                  else
                    r_36 = y_36;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_36));
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1(t, r_1);
            z_36 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_36), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_36)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_36), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_36))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_36)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(l_36)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_36), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_36), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0))))))));
          }
        }
      }
    }
  else
    {
      if(match_cons(h_36, sym_Build_1))
        {
          i_36 = ATgetArgument(h_36, 0);
          {
            ATerm n_37 = NULL;
            ATerm p_37 = NULL,q_37 = NULL,v_37 = NULL;
            t = new_0(t);
            n_37 = t;
            t = not_null(i_36);
            {
              ATerm s_1 (ATerm t)
              {
                ATerm r_37 = NULL,t_37 = NULL,u_37 = NULL;
                r_37 = t;
                a_36 :
                if(match_cons(r_37, sym_Explode_2))
                  {
                    t_37 = ATgetArgument(r_37, 0);
                    u_37 = ATgetArgument(r_37, 1);
                    if(p_37 != NULL && p_37 != t_37)
                      _fail(t_37);
                    else
                      p_37 = t_37;
                    if(q_37 != NULL && q_37 != u_37)
                      _fail(u_37);
                    else
                      q_37 = u_37;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_37));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, s_1);
              v_37 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_37), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_37), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_37), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_37))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_37)))));
            }
          }
        }
      else
        {
          if(match_cons(h_36, sym_ExplodeCong_2))
            {
              i_36 = ATgetArgument(h_36, 0);
              j_36 = ATgetArgument(h_36, 1);
              {
                ATerm z_37 = NULL;
                ATerm m_38 = NULL;
                t = new_0(t);
                z_37 = t;
                {
                  ATerm o_38 = NULL;
                  t = new_0(t);
                  m_38 = t;
                  {
                    ATerm q_38 = NULL;
                    t = new_0(t);
                    o_38 = t;
                    t = new_0(t);
                    q_38 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_37), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_38), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_38), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_38), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_37)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_38)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(i_36), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_37)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_38))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(j_36), (ATerm)ATmakeAppl(sym_Var_1, not_null(o_38)), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_38))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_38)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_38)), (ATerm) ATmakeAppl(sym_Nil_0)))))));
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
  ATerm p_39 = NULL,q_39 = NULL;
  p_39 = t;
  o_39 :
  if(match_cons(p_39, sym_Build_1))
    {
      q_39 = ATgetArgument(p_39, 0);
      {
        ATerm s_39 = NULL;
        ATerm u_39 = NULL,v_39 = NULL,z_39 = NULL;
        t = new_0(t);
        s_39 = t;
        t = not_null(q_39);
        {
          ATerm t_1 (ATerm t)
          {
            ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
            w_39 = t;
            m_39 :
            if(match_cons(w_39, sym_App_2))
              {
                x_39 = ATgetArgument(w_39, 0);
                y_39 = ATgetArgument(w_39, 1);
                if(u_39 != NULL && u_39 != x_39)
                  _fail(x_39);
                else
                  u_39 = x_39;
                if(v_39 != NULL && v_39 != y_39)
                  _fail(y_39);
                else
                  v_39 = y_39;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_39));
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, t_1);
          z_39 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_39), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(u_39), not_null(v_39), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_39))), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_39))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp1_0 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
  i_40 = t;
  g_40 :
  if(match_cons(i_40, sym_Build_1))
    {
      j_40 = ATgetArgument(i_40, 0);
      h_40 :
      if(match_cons(j_40, sym_App_2))
        {
          k_40 = ATgetArgument(j_40, 0);
          l_40 = ATgetArgument(j_40, 1);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_40)), not_null(k_40));
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
  ATerm x_40 = NULL,y_40 = NULL;
  x_40 = t;
  w_40 :
  if(match_cons(x_40, sym_Build_1))
    {
      y_40 = ATgetArgument(x_40, 0);
      {
        ATerm a_41 = NULL,b_41 = NULL,g_41 = NULL;
        t = not_null(y_40);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL;
            c_41 = t;
            t_40 :
            if(match_cons(c_41, sym_App_2))
              {
                d_41 = ATgetArgument(c_41, 0);
                f_41 = ATgetArgument(c_41, 1);
                u_40 :
                if(match_cons(d_41, sym_Build_1))
                  {
                    e_41 = ATgetArgument(d_41, 0);
                    if(b_41 != NULL && b_41 != e_41)
                      _fail(e_41);
                    else
                      b_41 = e_41;
                    if(a_41 != NULL && a_41 != f_41)
                      _fail(f_41);
                    else
                      a_41 = f_41;
                    t = not_null(b_41);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, u_1);
          g_41 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, not_null(g_41));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL;
  i_42 = t;
  c_42 :
  if(match_cons(i_42, sym_Seqs_1))
    {
      j_42 = ATgetArgument(i_42, 0);
      d_42 :
      if(match_cons(j_42, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(j_42, sym_Cons_2))
            {
              g_42 = ATgetArgument(j_42, 0);
              h_42 = ATgetArgument(j_42, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_42), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(h_42)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(i_42, sym_Choices_1))
        {
          j_42 = ATgetArgument(i_42, 0);
          e_42 :
          if(match_cons(j_42, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(j_42, sym_Cons_2))
                {
                  g_42 = ATgetArgument(j_42, 0);
                  h_42 = ATgetArgument(j_42, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_42), (ATerm) ATmakeAppl(sym_Choices_1, not_null(h_42)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(i_42, sym_LChoices_1))
            {
              j_42 = ATgetArgument(i_42, 0);
              f_42 :
              if(match_cons(j_42, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(j_42, sym_Cons_2))
                    {
                      g_42 = ATgetArgument(j_42, 0);
                      h_42 = ATgetArgument(j_42, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_42), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(h_42)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(i_42, sym_Lets_2))
                {
                  j_42 = ATgetArgument(i_42, 0);
                  k_42 = ATgetArgument(i_42, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(j_42), not_null(k_42));
                }
              else
                {
                  if(match_cons(i_42, sym_BA_2))
                    {
                      j_42 = ATgetArgument(i_42, 0);
                      k_42 = ATgetArgument(i_42, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_42)), not_null(j_42));
                    }
                  else
                    {
                      if(match_cons(i_42, sym_MA_2))
                        {
                          j_42 = ATgetArgument(i_42, 0);
                          k_42 = ATgetArgument(i_42, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_42)), not_null(k_42));
                        }
                      else
                        {
                          if(match_cons(i_42, sym_AM_2))
                            {
                              j_42 = ATgetArgument(i_42, 0);
                              k_42 = ATgetArgument(i_42, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_42), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_42)));
                            }
                          else
                            {
                              if(match_cons(i_42, sym_BAM_3))
                                {
                                  j_42 = ATgetArgument(i_42, 0);
                                  k_42 = ATgetArgument(i_42, 1);
                                  l_42 = ATgetArgument(i_42, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_42)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_42), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_42)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(i_42, sym_InfixApp_3))
                                    {
                                      j_42 = ATgetArgument(i_42, 0);
                                      k_42 = ATgetArgument(i_42, 1);
                                      l_42 = ATgetArgument(i_42, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(k_42), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_42), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_42), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm v_43 = NULL;
  v_43 = t;
  u_43 :
  if(!(match_cons(v_43, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm a_10 = t;
  if(PushChoice()==0)
    {
      ATerm v_1 (ATerm t)
      {
        ATerm h_10 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = h_10;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, v_1);
      PopChoice();
      _fail(t);
    }
  else
    t = a_10;
  return(t);
}
ATerm App_2 (ATerm t, ATerm y_41 (ATerm), ATerm z_41 (ATerm))
{
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
  h_44 = t;
  g_44 :
  if(match_cons(h_44, sym_App_2))
    {
      i_44 = ATgetArgument(h_44, 0);
      j_44 = ATgetArgument(h_44, 1);
      {
        ATerm m_44 = NULL;
        t = not_null(i_44);
        {
          ATerm o_44 = NULL;
          t = y_41(t);
          m_44 = t;
          t = not_null(j_44);
          t = z_41(t);
          o_44 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, not_null(m_44), not_null(o_44));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm v_41 (ATerm), ATerm w_41 (ATerm), ATerm x_41 (ATerm))
{
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL,d_45 = NULL;
  y_44 = t;
  x_44 :
  if(match_cons(y_44, sym_Con_3))
    {
      z_44 = ATgetArgument(y_44, 0);
      a_45 = ATgetArgument(y_44, 1);
      d_45 = ATgetArgument(y_44, 2);
      {
        ATerm j_45 = NULL;
        t = not_null(z_44);
        {
          ATerm n_45 = NULL;
          t = v_41(t);
          j_45 = t;
          t = not_null(a_45);
          {
            ATerm p_45 = NULL;
            t = w_41(t);
            n_45 = t;
            t = not_null(d_45);
            t = x_41(t);
            p_45 = t;
            t = (ATerm) ATmakeAppl(sym_Con_3, not_null(j_45), not_null(n_45), not_null(p_45));
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
  ATerm i_10 = t;
  if(PushChoice()==0)
    {
      ATerm w_1 (ATerm t)
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
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, w_1);
      PopChoice();
      _fail(t);
    }
  else
    t = i_10;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm d_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL;
  d_46 = t;
  b_46 :
  if(match_cons(d_46, sym_SRule_1))
    {
      h_46 = ATgetArgument(d_46, 0);
      c_46 :
      if(match_cons(h_46, sym_Rule_3))
        {
          i_46 = ATgetArgument(h_46, 0);
          j_46 = ATgetArgument(h_46, 1);
          k_46 = ATgetArgument(h_46, 2);
          t = not_null(i_46);
          t = pureterm_0(t);
          t = not_null(j_46);
          t = buildterm_0(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_46)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_46), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_46)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(h_46, sym_StratRule_3))
            {
              i_46 = ATgetArgument(h_46, 0);
              j_46 = ATgetArgument(h_46, 1);
              k_46 = ATgetArgument(h_46, 2);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_46), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_46), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_46), (ATerm) ATmakeAppl(sym_Nil_0)))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm b_45 (ATerm), ATerm c_45 (ATerm))
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
  x_46 = t;
  w_46 :
  if(match_cons(x_46, sym_Scope_2))
    {
      y_46 = ATgetArgument(x_46, 0);
      z_46 = ATgetArgument(x_46, 1);
      {
        ATerm c_47 = NULL;
        t = not_null(y_46);
        {
          ATerm e_47 = NULL;
          t = b_45(t);
          c_47 = t;
          t = not_null(z_46);
          t = c_45(t);
          e_47 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_47), not_null(e_47));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm f_65 (ATerm))
{
  ATerm j_47 (ATerm t)
  {
    ATerm n_10 = t;
    if(PushChoice()==0)
      {
        t = f_65(t);
        PopChoice();
      }
    else
      {
        t = n_10;
        t = _one(t, j_47);
      }
    return(t);
  }
  t = j_47(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL;
  e_48 = t;
  c_48 :
  if(match_cons(e_48, sym_SRule_1))
    {
      f_48 = ATgetArgument(e_48, 0);
      d_48 :
      if(match_cons(f_48, sym_Rule_3))
        {
          g_48 = ATgetArgument(f_48, 0);
          h_48 = ATgetArgument(f_48, 1);
          i_48 = ATgetArgument(f_48, 2);
          {
            ATerm m_48 = NULL;
            ATerm p_48 = NULL,r_48 = NULL,s_48 = NULL,d_49 = NULL;
            t = new_0(t);
            m_48 = t;
            t = not_null(g_48);
            {
              ATerm f_49 = NULL,g_49 = NULL,q_49 = NULL;
              ATerm x_1 (ATerm t)
              {
                ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,b_49 = NULL,c_49 = NULL;
                v_48 = t;
                n_47 :
                if(match_cons(v_48, sym_Con_3))
                  {
                    w_48 = ATgetArgument(v_48, 0);
                    b_49 = ATgetArgument(v_48, 1);
                    c_49 = ATgetArgument(v_48, 2);
                    o_47 :
                    if(match_cons(w_48, sym_Var_1))
                      {
                        x_48 = ATgetArgument(w_48, 0);
                        if(s_48 != NULL && s_48 != x_48)
                          _fail(x_48);
                        else
                          s_48 = x_48;
                        if(p_48 != NULL && p_48 != b_49)
                          _fail(b_49);
                        else
                          p_48 = b_49;
                        if(r_48 != NULL && r_48 != c_49)
                          _fail(c_49);
                        else
                          r_48 = c_49;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_48));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, x_1);
              d_49 = t;
              t = not_null(h_48);
              {
                ATerm a_2 (ATerm t)
                {
                  ATerm h_49 = NULL,i_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL;
                  h_49 = t;
                  x_47 :
                  if(match_cons(h_49, sym_Con_3))
                    {
                      i_49 = ATgetArgument(h_49, 0);
                      m_49 = ATgetArgument(h_49, 1);
                      n_49 = ATgetArgument(h_49, 2);
                      y_47 :
                      if(match_cons(i_49, sym_Var_1))
                        {
                          l_49 = ATgetArgument(i_49, 0);
                          z_47 :
                          if(match_cons(n_49, sym_Call_2))
                            {
                              o_49 = ATgetArgument(n_49, 0);
                              p_49 = ATgetArgument(n_49, 1);
                              a_48 :
                              if(match_cons(p_49, sym_Nil_0))
                                {
                                  if(s_48 != NULL && s_48 != l_49)
                                    _fail(l_49);
                                  else
                                    s_48 = l_49;
                                  if(f_49 != NULL && f_49 != m_49)
                                    _fail(m_49);
                                  else
                                    f_49 = m_49;
                                  if(g_49 != NULL && g_49 != o_49)
                                    _fail(o_49);
                                  else
                                    g_49 = o_49;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_48));
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, a_2);
                q_49 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_48), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_49), not_null(q_49), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_48), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(g_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_48), not_null(f_49), (ATerm) ATmakeAppl(sym_Id_0))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Var_1, not_null(s_48)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_48)))))));
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
  ATerm j_2 (ATerm t)
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
  t = try_1(t, j_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm p_63 (ATerm))
{
  ATerm z_49 (ATerm t)
  {
    t = p_63(t);
    t = _all(t, z_49);
    return(t);
  }
  t = z_49(t);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm l_2 (ATerm t)
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
                  ATerm s_10 = t;
                  if(PushChoice()==0)
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = s_10;
                      {
                        ATerm t_10 = t;
                        if(PushChoice()==0)
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = t_10;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = r_10;
                  t = Expl_0(t);
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, l_2);
    }
    return(t);
  }
  t = topdown_1(t, k_2);
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL;
  c_50 = t;
  b_50 :
  if(match_cons(c_50, sym_TCons_2))
    {
      d_50 = ATgetArgument(c_50, 0);
      e_50 = ATgetArgument(c_50, 1);
      t = not_null(e_50);
    }
  else
    _fail(t);
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL;
  k_50 = t;
  j_50 :
  if(match_cons(k_50, sym_TCons_2))
    {
      l_50 = ATgetArgument(k_50, 0);
      m_50 = ATgetArgument(k_50, 1);
      t = not_null(l_50);
    }
  else
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm r_60 (ATerm))
{
  ATerm b_51 (ATerm t)
  {
    ATerm u_10 = t;
    if(PushChoice()==0)
      {
        ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL;
        ATerm m_2 (ATerm t)
        {
          t = map_1(t, Thd_0);
          return(t);
        }
        ATerm y_2 (ATerm t)
        {
          t = map_1(t, Ttl_0);
          return(t);
        }
        t = split_2(t, m_2, y_2);
        {
          ATerm z_2 (ATerm t)
          {
            t = TCons_2(t, b_51, TNil_0);
            return(t);
          }
          t = TCons_2(t, r_60, z_2);
          u_50 = t;
          r_50 :
          if(match_cons(u_50, sym_TCons_2))
            {
              v_50 = ATgetArgument(u_50, 0);
              w_50 = ATgetArgument(u_50, 1);
              s_50 :
              if(match_cons(w_50, sym_TCons_2))
                {
                  x_50 = ATgetArgument(w_50, 0);
                  y_50 = ATgetArgument(w_50, 1);
                  t_50 :
                  if(match_cons(y_50, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_50), not_null(x_50));
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
        t = u_10;
        t = map_1(t, TNil_0);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
      }
    return(t);
  }
  t = b_51(t);
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL;
  o_51 = t;
  l_51 :
  if(match_cons(o_51, sym_TCons_2))
    {
      p_51 = ATgetArgument(o_51, 0);
      q_51 = ATgetArgument(o_51, 1);
      m_51 :
      if(match_cons(q_51, sym_TCons_2))
        {
          r_51 = ATgetArgument(q_51, 0);
          s_51 = ATgetArgument(q_51, 1);
          n_51 :
          if(match_cons(s_51, sym_TNil_0))
            {
              ATerm b_52 = NULL;
              ATerm d_52 = NULL;
              t = new_0(t);
              b_52 = t;
              {
                ATerm f_52 = NULL;
                t = new_0(t);
                d_52 = t;
                t = new_0(t);
                f_52 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_52)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_52)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_51)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_52)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_51)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(b_52), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_52), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_52)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_52), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_52)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
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
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL;
  q_52 = t;
  m_52 :
  if(match_cons(q_52, sym_TCons_2))
    {
      r_52 = ATgetArgument(q_52, 0);
      s_52 = ATgetArgument(q_52, 1);
      n_52 :
      if(match_cons(s_52, sym_TCons_2))
        {
          t_52 = ATgetArgument(s_52, 0);
          u_52 = ATgetArgument(s_52, 1);
          o_52 :
          if(match_cons(t_52, sym_Nil_0))
            {
              p_52 :
              if(match_cons(u_52, sym_TNil_0))
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
ATerm zipr_1 (ATerm t, ATerm q_59 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, q_59);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL;
  y_52 = t;
  x_52 :
  if(match_cons(y_52, sym_Cons_2))
    {
      z_52 = ATgetArgument(y_52, 0);
      a_53 = ATgetArgument(y_52, 1);
      t = not_null(a_53);
    }
  else
    _fail(t);
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL;
  h_53 = t;
  f_53 :
  if(match_cons(h_53, sym_Cons_2))
    {
      i_53 = ATgetArgument(h_53, 0);
      j_53 = ATgetArgument(h_53, 1);
      g_53 :
      if(match_cons(j_53, sym_Nil_0))
        t = not_null(i_53);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm last_0 (ATerm t)
{
  ATerm a_11 = t;
  if(PushChoice()==0)
    {
      t = Last_0(t);
      PopChoice();
    }
  else
    {
      t = a_11;
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
  ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL;
  r_53 = t;
  o_53 :
  if(match_cons(r_53, sym_TCons_2))
    {
      s_53 = ATgetArgument(r_53, 0);
      t_53 = ATgetArgument(r_53, 1);
      p_53 :
      if(match_cons(t_53, sym_TCons_2))
        {
          u_53 = ATgetArgument(t_53, 0);
          v_53 = ATgetArgument(t_53, 1);
          q_53 :
          if(match_cons(v_53, sym_TNil_0))
            {
              ATerm b_11 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(s_53), not_null(u_53));
                  PopChoice();
                }
              else
                {
                  t = b_11;
                  t = SSL_subtr(not_null(s_53), not_null(u_53));
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
  ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL;
  i_54 = t;
  f_54 :
  if(match_cons(i_54, sym_TCons_2))
    {
      j_54 = ATgetArgument(i_54, 0);
      k_54 = ATgetArgument(i_54, 1);
      g_54 :
      if(match_cons(k_54, sym_TCons_2))
        {
          l_54 = ATgetArgument(k_54, 0);
          m_54 = ATgetArgument(k_54, 1);
          h_54 :
          if(match_cons(m_54, sym_TNil_0))
            {
              ATerm c_11;
              c_11 = t;
              {
                ATerm d_11 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(j_54), not_null(l_54));
                    PopChoice();
                  }
                else
                  {
                    t = d_11;
                    t = SSL_gtr(not_null(j_54), not_null(l_54));
                  }
              }
              t = c_11;
            }
          else
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
  ATerm u_54 = NULL;
  ATerm e_11 = t;
  if(PushChoice()==0)
    {
      ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL;
      v_54 = t;
      r_54 :
      if(match_cons(v_54, sym_TCons_2))
        {
          w_54 = ATgetArgument(v_54, 0);
          x_54 = ATgetArgument(v_54, 1);
          s_54 :
          if(match_cons(x_54, sym_TCons_2))
            {
              y_54 = ATgetArgument(x_54, 0);
              z_54 = ATgetArgument(x_54, 1);
              t_54 :
              if(match_cons(z_54, sym_TNil_0))
                {
                  if(u_54 != NULL && u_54 != w_54)
                    _fail(w_54);
                  else
                    u_54 = w_54;
                  if(u_54 != NULL && u_54 != y_54)
                    _fail(y_54);
                  else
                    u_54 = y_54;
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
      t = e_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm w_56 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    ATerm t_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL;
    t_55 = t;
    c_55 :
    if(match_cons(t_55, sym_TCons_2))
      {
        w_55 = ATgetArgument(t_55, 0);
        x_55 = ATgetArgument(t_55, 1);
        d_55 :
        if(match_cons(x_55, sym_TCons_2))
          {
            y_55 = ATgetArgument(x_55, 0);
            z_55 = ATgetArgument(x_55, 1);
            e_55 :
            if(match_cons(z_55, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_55), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
            else
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
    ATerm c_56 = NULL,d_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL;
    c_56 = t;
    g_55 :
    if(match_cons(c_56, sym_TCons_2))
      {
        d_56 = ATgetArgument(c_56, 0);
        j_56 = ATgetArgument(c_56, 1);
        h_55 :
        if(match_int(d_56, 0))
          {
            i_55 :
            if(match_cons(j_56, sym_TCons_2))
              {
                k_56 = ATgetArgument(j_56, 0);
                l_56 = ATgetArgument(j_56, 1);
                j_55 :
                if(match_cons(l_56, sym_TCons_2))
                  {
                    m_56 = ATgetArgument(l_56, 0);
                    n_56 = ATgetArgument(l_56, 1);
                    k_55 :
                    if(match_cons(n_56, sym_TNil_0))
                      t = not_null(m_56);
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL,x_56 = NULL,y_56 = NULL;
    q_56 = t;
    p_55 :
    if(match_cons(q_56, sym_TCons_2))
      {
        r_56 = ATgetArgument(q_56, 0);
        s_56 = ATgetArgument(q_56, 1);
        q_55 :
        if(match_cons(s_56, sym_TCons_2))
          {
            t_56 = ATgetArgument(s_56, 0);
            u_56 = ATgetArgument(s_56, 1);
            r_55 :
            if(match_cons(u_56, sym_TCons_2))
              {
                x_56 = ATgetArgument(u_56, 0);
                y_56 = ATgetArgument(u_56, 1);
                s_55 :
                if(match_cons(y_56, sym_TNil_0))
                  {
                    ATerm c_57 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = geq_0(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm e_57 = NULL;
                      t = subt_0(t);
                      c_57 = t;
                      t = not_null(t_56);
                      t = w_56(t);
                      e_57 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_57), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_57), not_null(x_56)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  t = for_3(t, a_3, b_3, c_3);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL;
  a_58 = t;
  u_57 :
  if(match_cons(a_58, sym_TCons_2))
    {
      b_58 = ATgetArgument(a_58, 0);
      c_58 = ATgetArgument(a_58, 1);
      v_57 :
      if(match_cons(c_58, sym_TCons_2))
        {
          d_58 = ATgetArgument(c_58, 0);
          e_58 = ATgetArgument(c_58, 1);
          z_57 :
          if(match_cons(e_58, sym_TNil_0))
            {
              ATerm f_11 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(b_58), not_null(d_58));
                  PopChoice();
                }
              else
                {
                  t = f_11;
                  t = SSL_addr(not_null(b_58), not_null(d_58));
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
  ATerm m_58 = NULL;
  ATerm o_58 = NULL;
  m_58 = t;
  {
    ATerm q_58 = NULL;
    t = new_0(t);
    o_58 = t;
    {
      ATerm s_58 = NULL;
      t = new_0(t);
      q_58 = t;
      t = new_0(t);
      s_58 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_58)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_58)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_58), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_58))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(o_58), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_58)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_58)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
    }
  }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL;
  ATerm t_63 (ATerm t)
  {
    ATerm h_62 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_60), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm k_62 = NULL,l_62 = NULL,o_62 = NULL;
      t = add_0(t);
      h_62 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_62), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TNil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = copy_1(t, new_0);
      k_62 = t;
      f_60 :
      if(match_cons(k_62, sym_Cons_2))
        {
          l_62 = ATgetArgument(k_62, 0);
          o_62 = ATgetArgument(k_62, 1);
          {
            ATerm r_62 = NULL;
            t = not_null(o_62);
            {
              ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,f_63 = NULL,g_63 = NULL;
              t = last_0(t);
              r_62 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_62), not_null(o_62)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_62), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = zipr_1(t, MkThreadApplication_0);
              t = tuple_unzip_1(t, _id);
              t_62 = t;
              y_59 :
              if(match_cons(t_62, sym_TCons_2))
                {
                  u_62 = ATgetArgument(t_62, 0);
                  v_62 = ATgetArgument(t_62, 1);
                  z_59 :
                  if(match_cons(v_62, sym_TCons_2))
                    {
                      w_62 = ATgetArgument(v_62, 0);
                      x_62 = ATgetArgument(v_62, 1);
                      a_60 :
                      if(match_cons(x_62, sym_TCons_2))
                        {
                          y_62 = ATgetArgument(x_62, 0);
                          z_62 = ATgetArgument(x_62, 1);
                          b_60 :
                          if(match_cons(z_62, sym_TCons_2))
                            {
                              a_63 = ATgetArgument(z_62, 0);
                              b_63 = ATgetArgument(z_62, 1);
                              c_60 :
                              if(match_cons(b_63, sym_TCons_2))
                                {
                                  c_63 = ATgetArgument(b_63, 0);
                                  d_63 = ATgetArgument(b_63, 1);
                                  d_60 :
                                  if(match_cons(d_63, sym_TCons_2))
                                    {
                                      f_63 = ATgetArgument(d_63, 0);
                                      g_63 = ATgetArgument(d_63, 1);
                                      e_60 :
                                      if(match_cons(g_63, sym_TNil_0))
                                        {
                                          ATerm n_63 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_62), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_62), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_63), (ATerm) ATmakeAppl(sym_Nil_0))));
                                          t = concat_0(t);
                                          n_63 = t;
                                          t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(p_60), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), not_null(w_62), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_62), not_null(n_63)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(p_60), not_null(a_63)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_62)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(p_60), not_null(f_63)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_62)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(u_62))))));
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
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
  o_60 = t;
  g_60 :
  if(match_cons(o_60, sym_TCons_2))
    {
      p_60 = ATgetArgument(o_60, 0);
      q_60 = ATgetArgument(o_60, 1);
      h_60 :
      if(match_cons(q_60, sym_TCons_2))
        {
          t_60 = ATgetArgument(q_60, 0);
          u_60 = ATgetArgument(q_60, 1);
          i_60 :
          if(match_string(t_60, "D"))
            {
              j_60 :
              if(match_cons(u_60, sym_TCons_2))
                {
                  v_60 = ATgetArgument(u_60, 0);
                  w_60 = ATgetArgument(u_60, 1);
                  k_60 :
                  if(match_cons(w_60, sym_TNil_0))
                    {
                      ATerm b_61 = NULL;
                      ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL;
                      t = new_0(t);
                      b_61 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_60), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_61)), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = copy_1(t, MkDistApplication_0);
                      t = tuple_unzip_1(t, _id);
                      d_61 = t;
                      e_59 :
                      if(match_cons(d_61, sym_TCons_2))
                        {
                          e_61 = ATgetArgument(d_61, 0);
                          f_61 = ATgetArgument(d_61, 1);
                          f_59 :
                          if(match_cons(f_61, sym_TCons_2))
                            {
                              i_61 = ATgetArgument(f_61, 0);
                              j_61 = ATgetArgument(f_61, 1);
                              g_59 :
                              if(match_cons(j_61, sym_TCons_2))
                                {
                                  k_61 = ATgetArgument(j_61, 0);
                                  l_61 = ATgetArgument(j_61, 1);
                                  h_59 :
                                  if(match_cons(l_61, sym_TCons_2))
                                    {
                                      o_61 = ATgetArgument(l_61, 0);
                                      p_61 = ATgetArgument(l_61, 1);
                                      o_59 :
                                      if(match_cons(p_61, sym_TCons_2))
                                        {
                                          q_61 = ATgetArgument(p_61, 0);
                                          r_61 = ATgetArgument(p_61, 1);
                                          p_59 :
                                          if(match_cons(r_61, sym_TCons_2))
                                            {
                                              s_61 = ATgetArgument(r_61, 0);
                                              t_61 = ATgetArgument(r_61, 1);
                                              r_59 :
                                              if(match_cons(t_61, sym_TNil_0))
                                                {
                                                  ATerm a_62 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_61), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  a_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(p_60), (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue))), not_null(i_61), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_61), not_null(a_62)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(p_60), not_null(o_61)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_61)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(p_60), not_null(s_61)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(e_61))))));
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
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
              if(match_string(t_60, "T"))
                {
                  l_60 :
                  if(match_cons(u_60, sym_TCons_2))
                    {
                      v_60 = ATgetArgument(u_60, 0);
                      w_60 = ATgetArgument(u_60, 1);
                      m_60 :
                      if(match_cons(w_60, sym_TNil_0))
                        {
                          n_60 :
                          if(match_int(v_60, 0))
                            {
                              ATerm g_11 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm d_62 = NULL;
                                  t = new_0(t);
                                  d_62 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(p_60), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_62), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(p_60), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_62)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(p_60), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_62)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Id_0)))));
                                  PopChoice();
                                }
                              else
                                {
                                  t = g_11;
                                  t = t_63(t);
                                }
                            }
                          else
                            t = t_63(t);
                        }
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
  ATerm m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL;
  m_64 = t;
  f_64 :
  if(match_cons(m_64, sym_TCons_2))
    {
      n_64 = ATgetArgument(m_64, 0);
      u_64 = ATgetArgument(m_64, 1);
      g_64 :
      if(match_cons(n_64, sym_TCons_2))
        {
          o_64 = ATgetArgument(n_64, 0);
          r_64 = ATgetArgument(n_64, 1);
          h_64 :
          if(match_cons(o_64, sym_Mod_2))
            {
              p_64 = ATgetArgument(o_64, 0);
              q_64 = ATgetArgument(o_64, 1);
              i_64 :
              if(match_cons(r_64, sym_TCons_2))
                {
                  s_64 = ATgetArgument(r_64, 0);
                  t_64 = ATgetArgument(r_64, 1);
                  j_64 :
                  if(match_cons(t_64, sym_TNil_0))
                    {
                      k_64 :
                      if(match_cons(u_64, sym_TCons_2))
                        {
                          v_64 = ATgetArgument(u_64, 0);
                          w_64 = ATgetArgument(u_64, 1);
                          l_64 :
                          if(match_cons(w_64, sym_TNil_0))
                            {
                              ATerm b_65 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_64), (ATerm) ATmakeAppl(sym_TNil_0))));
                              t = DefineCongruence_0(t);
                              t = desugar_0(t);
                              b_65 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_64), (ATerm) ATmakeAppl(sym_TNil_0)));
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm h_11 = t;
  if(PushChoice()==0)
    {
      t = CongruenceDef_0(t);
      PopChoice();
    }
  else
    {
      t = h_11;
      {
        ATerm i_11 = t;
        if(PushChoice()==0)
          {
            t = OverloadedDef_0(t);
            {
              ATerm o_3 (ATerm t)
              {
                t = TCons_2(t, _id, TNil_0);
                return(t);
              }
              t = TCons_2(t, joindefs_0, o_3);
            }
            PopChoice();
          }
        else
          {
            t = i_11;
            t = NonOverloadedDef_0(t);
            {
              ATerm p_3 (ATerm t)
              {
                t = TCons_2(t, _id, TNil_0);
                return(t);
              }
              t = TCons_2(t, joindefs_0, p_3);
            }
          }
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL;
  p_65 = t;
  i_65 :
  if(match_cons(p_65, sym_TCons_2))
    {
      q_65 = ATgetArgument(p_65, 0);
      v_65 = ATgetArgument(p_65, 1);
      j_65 :
      if(match_cons(q_65, sym_Cons_2))
        {
          r_65 = ATgetArgument(q_65, 0);
          s_65 = ATgetArgument(q_65, 1);
          k_65 :
          if(match_cons(v_65, sym_TCons_2))
            {
              w_65 = ATgetArgument(v_65, 0);
              x_65 = ATgetArgument(v_65, 1);
              l_65 :
              if(match_cons(x_65, sym_TCons_2))
                {
                  y_65 = ATgetArgument(x_65, 0);
                  z_65 = ATgetArgument(x_65, 1);
                  m_65 :
                  if(match_cons(z_65, sym_TCons_2))
                    {
                      a_66 = ATgetArgument(z_65, 0);
                      b_66 = ATgetArgument(z_65, 1);
                      n_65 :
                      if(match_cons(b_66, sym_TCons_2))
                        {
                          c_66 = ATgetArgument(b_66, 0);
                          d_66 = ATgetArgument(b_66, 1);
                          o_65 :
                          if(match_cons(d_66, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_66), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_65), not_null(c_66)), (ATerm) ATmakeAppl(sym_TNil_0))))));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,y_66 = NULL;
  p_66 = t;
  m_66 :
  if(match_cons(p_66, sym_TCons_2))
    {
      q_66 = ATgetArgument(p_66, 0);
      r_66 = ATgetArgument(p_66, 1);
      n_66 :
      if(match_cons(r_66, sym_TCons_2))
        {
          s_66 = ATgetArgument(r_66, 0);
          y_66 = ATgetArgument(r_66, 1);
          o_66 :
          if(match_cons(y_66, sym_TNil_0))
            {
              t = not_null(q_66);
              {
                ATerm q_3 (ATerm t)
                {
                  t = not_null(s_66);
                  return(t);
                }
                t = at_end_1(t, q_3);
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
ATerm HdMember_1 (ATerm t, ATerm l_57 (ATerm))
{
  ATerm f_67 = NULL,g_67 = NULL,h_67 = NULL;
  f_67 = t;
  e_67 :
  if(match_cons(f_67, sym_Cons_2))
    {
      g_67 = ATgetArgument(f_67, 0);
      h_67 = ATgetArgument(f_67, 1);
      t = l_57(t);
      {
        ATerm r_3 (ATerm t)
        {
          ATerm k_67 = NULL;
          k_67 = t;
          if(g_67 != NULL && g_67 != k_67)
            _fail(k_67);
          else
            g_67 = k_67;
          return(t);
        }
        t = fetch_1(t, r_3);
        t = not_null(h_67);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL;
  v_67 = t;
  o_67 :
  if(match_cons(v_67, sym_TCons_2))
    {
      w_67 = ATgetArgument(v_67, 0);
      x_67 = ATgetArgument(v_67, 1);
      p_67 :
      if(match_cons(x_67, sym_TCons_2))
        {
          y_67 = ATgetArgument(x_67, 0);
          b_68 = ATgetArgument(x_67, 1);
          t_67 :
          if(match_cons(y_67, sym_Cons_2))
            {
              z_67 = ATgetArgument(y_67, 0);
              a_68 = ATgetArgument(y_67, 1);
              u_67 :
              if(match_cons(b_68, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_67), not_null(w_67)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_68), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL;
  k_68 = t;
  h_68 :
  if(match_cons(k_68, sym_TCons_2))
    {
      l_68 = ATgetArgument(k_68, 0);
      m_68 = ATgetArgument(k_68, 1);
      i_68 :
      if(match_cons(m_68, sym_TCons_2))
        {
          n_68 = ATgetArgument(m_68, 0);
          o_68 = ATgetArgument(m_68, 1);
          j_68 :
          if(match_cons(o_68, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_68), not_null(n_68));
          else
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
  ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL;
  y_68 = t;
  t_68 :
  if(match_cons(y_68, sym_TCons_2))
    {
      z_68 = ATgetArgument(y_68, 0);
      c_69 = ATgetArgument(y_68, 1);
      u_68 :
      if(match_cons(z_68, sym_Cons_2))
        {
          a_69 = ATgetArgument(z_68, 0);
          b_69 = ATgetArgument(z_68, 1);
          v_68 :
          if(match_cons(c_69, sym_TCons_2))
            {
              d_69 = ATgetArgument(c_69, 0);
              g_69 = ATgetArgument(c_69, 1);
              w_68 :
              if(match_cons(d_69, sym_Cons_2))
                {
                  e_69 = ATgetArgument(d_69, 0);
                  f_69 = ATgetArgument(d_69, 1);
                  x_68 :
                  if(match_cons(g_69, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(a_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_69), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(b_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_69), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL;
  s_69 = t;
  n_69 :
  if(match_cons(s_69, sym_TCons_2))
    {
      t_69 = ATgetArgument(s_69, 0);
      u_69 = ATgetArgument(s_69, 1);
      o_69 :
      if(match_cons(t_69, sym_Nil_0))
        {
          p_69 :
          if(match_cons(u_69, sym_TCons_2))
            {
              v_69 = ATgetArgument(u_69, 0);
              w_69 = ATgetArgument(u_69, 1);
              q_69 :
              if(match_cons(v_69, sym_Nil_0))
                {
                  r_69 :
                  if(match_cons(w_69, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm i_59 (ATerm), ATerm j_59 (ATerm), ATerm k_59 (ATerm), ATerm l_59 (ATerm))
{
  ATerm y_69 (ATerm t)
  {
    ATerm j_11 = t;
    if(PushChoice()==0)
      {
        t = i_59(t);
        PopChoice();
      }
    else
      {
        t = j_11;
        t = j_59(t);
        {
          ATerm s_3 (ATerm t)
          {
            t = TCons_2(t, y_69, TNil_0);
            return(t);
          }
          t = TCons_2(t, l_59, s_3);
          t = k_59(t);
        }
      }
    return(t);
  }
  t = y_69(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm n_59 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, n_59);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL;
  p_70 = t;
  l_70 :
  if(match_cons(p_70, sym_Cons_2))
    {
      q_70 = ATgetArgument(p_70, 0);
      v_70 = ATgetArgument(p_70, 1);
      m_70 :
      if(match_cons(q_70, sym_TCons_2))
        {
          r_70 = ATgetArgument(q_70, 0);
          s_70 = ATgetArgument(q_70, 1);
          n_70 :
          if(match_cons(s_70, sym_TCons_2))
            {
              t_70 = ATgetArgument(s_70, 0);
              u_70 = ATgetArgument(s_70, 1);
              o_70 :
              if(match_cons(u_70, sym_TNil_0))
                {
                  ATerm z_70 = NULL,a_71 = NULL,i_71 = NULL,q_71 = NULL;
                  ATerm k_11;
                  k_11 = t;
                  {
                    ATerm b_71 = NULL;
                    ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL;
                    t = not_null(t_70);
                    b_71 = t;
                    t = SSL_explode_term(not_null(b_71));
                    d_71 = t;
                    c_70 :
                    if(match_cons(d_71, sym_TCons_2))
                      {
                        e_71 = ATgetArgument(d_71, 0);
                        f_71 = ATgetArgument(d_71, 1);
                        d_70 :
                        if(match_cons(f_71, sym_TCons_2))
                          {
                            g_71 = ATgetArgument(f_71, 0);
                            h_71 = ATgetArgument(f_71, 1);
                            e_70 :
                            if(match_cons(h_71, sym_TNil_0))
                              {
                                if(z_70 != NULL && z_70 != e_71)
                                  _fail(e_71);
                                else
                                  z_70 = e_71;
                                if(a_71 != NULL && a_71 != g_71)
                                  _fail(g_71);
                                else
                                  a_71 = g_71;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = k_11;
                  {
                    ATerm j_71 = NULL;
                    ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL;
                    t = not_null(r_70);
                    j_71 = t;
                    t = SSL_explode_term(not_null(j_71));
                    l_71 = t;
                    h_70 :
                    if(match_cons(l_71, sym_TCons_2))
                      {
                        m_71 = ATgetArgument(l_71, 0);
                        n_71 = ATgetArgument(l_71, 1);
                        i_70 :
                        if(match_cons(n_71, sym_TCons_2))
                          {
                            o_71 = ATgetArgument(n_71, 0);
                            p_71 = ATgetArgument(n_71, 1);
                            j_70 :
                            if(match_cons(p_71, sym_TNil_0))
                              {
                                if(z_70 != NULL && z_70 != m_71)
                                  _fail(m_71);
                                else
                                  z_70 = m_71;
                                if(i_71 != NULL && i_71 != o_71)
                                  _fail(o_71);
                                else
                                  i_71 = o_71;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    q_71 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_70), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL;
  d_72 = t;
  z_71 :
  if(match_cons(d_72, sym_Cons_2))
    {
      e_72 = ATgetArgument(d_72, 0);
      j_72 = ATgetArgument(d_72, 1);
      a_72 :
      if(match_cons(e_72, sym_TCons_2))
        {
          f_72 = ATgetArgument(e_72, 0);
          g_72 = ATgetArgument(e_72, 1);
          b_72 :
          if(match_cons(g_72, sym_TCons_2))
            {
              h_72 = ATgetArgument(g_72, 0);
              i_72 = ATgetArgument(g_72, 1);
              c_72 :
              if(match_cons(i_72, sym_TNil_0))
                {
                  ATerm l_72 = NULL;
                  if(f_72 != NULL && f_72 != h_72)
                    _fail(h_72);
                  else
                    f_72 = h_72;
                  if(l_72 != NULL && l_72 != j_72)
                    _fail(j_72);
                  else
                    l_72 = j_72;
                  t = not_null(l_72);
                }
              else
                _fail(t);
            }
          else
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
  ATerm l_11 = t;
  if(PushChoice()==0)
    {
      ATerm c_4 (ATerm t)
      {
        ATerm s_72 = NULL;
        s_72 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_72), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm d_4 (ATerm t)
      {
        ATerm n_4 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, n_4);
        return(t);
      }
      ATerm e_4 (ATerm t)
      {
        ATerm m_11 = t;
        if(PushChoice()==0)
          {
            ATerm o_4 (ATerm t)
            {
              ATerm p_4 (ATerm t)
              {
                ATerm n_11 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = n_11;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, p_4, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, o_4);
            PopChoice();
          }
        else
          {
            t = m_11;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, c_4, d_4, e_4);
      PopChoice();
    }
  else
    {
      t = l_11;
      {
        ATerm u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL;
        u_72 = t;
        p_72 :
        if(match_cons(u_72, sym_TCons_2))
          {
            v_72 = ATgetArgument(u_72, 0);
            w_72 = ATgetArgument(u_72, 1);
            q_72 :
            if(match_cons(w_72, sym_TCons_2))
              {
                x_72 = ATgetArgument(w_72, 0);
                y_72 = ATgetArgument(w_72, 1);
                r_72 :
                if(match_cons(y_72, sym_TNil_0))
                  {
                    t = not_null(v_72);
                    {
                      ATerm d_73 (ATerm t)
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
                              ATerm p_11 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm u_4 (ATerm t)
                                  {
                                    t = not_null(x_72);
                                    return(t);
                                  }
                                  t = HdMember_1(t, u_4);
                                  t = d_73(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = p_11;
                                  t = Cons_2(t, _id, d_73);
                                }
                            }
                          }
                        return(t);
                      }
                      t = d_73(t);
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
ATerm GnNextChangeGraph_3 (ATerm t, ATerm v_45 (ATerm), ATerm w_45 (ATerm), ATerm x_45 (ATerm))
{
  ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL;
  v_73 = t;
  o_73 :
  if(match_cons(v_73, sym_TCons_2))
    {
      w_73 = ATgetArgument(v_73, 0);
      z_73 = ATgetArgument(v_73, 1);
      p_73 :
      if(match_cons(w_73, sym_Cons_2))
        {
          x_73 = ATgetArgument(w_73, 0);
          y_73 = ATgetArgument(w_73, 1);
          q_73 :
          if(match_cons(z_73, sym_TCons_2))
            {
              a_74 = ATgetArgument(z_73, 0);
              b_74 = ATgetArgument(z_73, 1);
              r_73 :
              if(match_cons(b_74, sym_TCons_2))
                {
                  c_74 = ATgetArgument(b_74, 0);
                  d_74 = ATgetArgument(b_74, 1);
                  s_73 :
                  if(match_cons(d_74, sym_TCons_2))
                    {
                      e_74 = ATgetArgument(d_74, 0);
                      f_74 = ATgetArgument(d_74, 1);
                      t_73 :
                      if(match_cons(f_74, sym_TCons_2))
                        {
                          g_74 = ATgetArgument(f_74, 0);
                          h_74 = ATgetArgument(f_74, 1);
                          u_73 :
                          if(match_cons(h_74, sym_TNil_0))
                            {
                              ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = v_45(t);
                              o_74 = t;
                              l_73 :
                              if(match_cons(o_74, sym_TCons_2))
                                {
                                  p_74 = ATgetArgument(o_74, 0);
                                  q_74 = ATgetArgument(o_74, 1);
                                  m_73 :
                                  if(match_cons(q_74, sym_TCons_2))
                                    {
                                      r_74 = ATgetArgument(q_74, 0);
                                      s_74 = ATgetArgument(q_74, 1);
                                      n_73 :
                                      if(match_cons(s_74, sym_TNil_0))
                                        {
                                          ATerm v_74 = NULL;
                                          t = not_null(p_74);
                                          {
                                            ATerm x_74 = NULL;
                                            t = w_45(t);
                                            v_74 = t;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            {
                                              ATerm z_74 = NULL;
                                              t = diff_0(t);
                                              x_74 = t;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              {
                                                ATerm b_75 = NULL;
                                                t = conc_0(t);
                                                z_74 = t;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                {
                                                  ATerm d_75 = NULL;
                                                  t = conc_0(t);
                                                  b_75 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_74), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                  t = x_45(t);
                                                  d_75 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_74), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
  ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL;
  u_75 = t;
  n_75 :
  if(match_cons(u_75, sym_TCons_2))
    {
      v_75 = ATgetArgument(u_75, 0);
      w_75 = ATgetArgument(u_75, 1);
      o_75 :
      if(match_cons(v_75, sym_Nil_0))
        {
          p_75 :
          if(match_cons(w_75, sym_TCons_2))
            {
              x_75 = ATgetArgument(w_75, 0);
              y_75 = ATgetArgument(w_75, 1);
              q_75 :
              if(match_cons(y_75, sym_TCons_2))
                {
                  z_75 = ATgetArgument(y_75, 0);
                  a_76 = ATgetArgument(y_75, 1);
                  r_75 :
                  if(match_cons(a_76, sym_TCons_2))
                    {
                      b_76 = ATgetArgument(a_76, 0);
                      c_76 = ATgetArgument(a_76, 1);
                      s_75 :
                      if(match_cons(c_76, sym_TCons_2))
                        {
                          d_76 = ATgetArgument(c_76, 0);
                          e_76 = ATgetArgument(c_76, 1);
                          t_75 :
                          if(match_cons(e_76, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_76), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL;
  p_76 = t;
  l_76 :
  if(match_cons(p_76, sym_TCons_2))
    {
      q_76 = ATgetArgument(p_76, 0);
      r_76 = ATgetArgument(p_76, 1);
      m_76 :
      if(match_cons(r_76, sym_TCons_2))
        {
          s_76 = ATgetArgument(r_76, 0);
          t_76 = ATgetArgument(r_76, 1);
          n_76 :
          if(match_cons(t_76, sym_TCons_2))
            {
              u_76 = ATgetArgument(t_76, 0);
              v_76 = ATgetArgument(t_76, 1);
              o_76 :
              if(match_cons(v_76, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_76), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))))));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm v_51 (ATerm), ATerm w_51 (ATerm))
{
  ATerm a_77 (ATerm t)
  {
    ATerm q_11 = t;
    if(PushChoice()==0)
      {
        t = v_51(t);
        PopChoice();
      }
    else
      {
        t = q_11;
        t = w_51(t);
        t = a_77(t);
      }
    return(t);
  }
  t = a_77(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm y_51 (ATerm), ATerm z_51 (ATerm), ATerm a_52 (ATerm))
{
  t = y_51(t);
  t = while_not_2(t, z_51, a_52);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm e_46 (ATerm), ATerm f_46 (ATerm), ATerm g_46 (ATerm))
{
  ATerm v_4 (ATerm t)
  {
    ATerm r_11 = t;
    if(PushChoice()==0)
      {
        t = GnNextChangeGraph_3(t, e_46, f_46, g_46);
        PopChoice();
      }
    else
      {
        t = r_11;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, v_4);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL;
    g_77 = t;
    c_77 :
    if(match_cons(g_77, sym_TCons_2))
      {
        h_77 = ATgetArgument(g_77, 0);
        i_77 = ATgetArgument(g_77, 1);
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
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_77), not_null(l_77));
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, svars_arity_0, w_4);
  t = FilterNonMissingDefs_0(t);
  {
    ATerm s_11 = t;
    if(PushChoice()==0)
      {
        t = NoMissingDefs_0(t);
        PopChoice();
      }
    else
      {
        t = s_11;
        t = MissingDefs_0(t);
        t = (ATerm) ATmakeInt(1);
        t = exit_0(t);
      }
  }
  return(t);
}
ATerm needed_defs_0 (ATerm t)
{
  ATerm r_77 = NULL;
  r_77 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("main", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_77), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = extract_needed_defs_0(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm f_43 (ATerm))
{
  ATerm x_77 = NULL,y_77 = NULL;
  x_77 = t;
  w_77 :
  if(match_cons(x_77, sym_Strategies_1))
    {
      y_77 = ATgetArgument(x_77, 0);
      {
        ATerm a_78 = NULL;
        t = not_null(y_77);
        t = f_43(t);
        a_78 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(a_78));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_45 (ATerm), ATerm l_45 (ATerm))
{
  ATerm i_78 = NULL,j_78 = NULL,k_78 = NULL;
  i_78 = t;
  h_78 :
  if(match_cons(i_78, sym_Cons_2))
    {
      j_78 = ATgetArgument(i_78, 0);
      k_78 = ATgetArgument(i_78, 1);
      {
        ATerm n_78 = NULL;
        t = not_null(j_78);
        {
          ATerm p_78 = NULL;
          t = k_45(t);
          n_78 = t;
          t = not_null(k_78);
          t = l_45(t);
          p_78 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_78), not_null(p_78));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm h_43 (ATerm))
{
  ATerm x_78 = NULL,y_78 = NULL;
  x_78 = t;
  w_78 :
  if(match_cons(x_78, sym_Specification_1))
    {
      y_78 = ATgetArgument(x_78, 0);
      {
        ATerm a_79 = NULL;
        t = not_null(y_78);
        t = h_43(t);
        a_79 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(a_79));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm f_79 = NULL;
  f_79 = t;
  e_79 :
  if(!(match_cons(f_79, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm g_45 (ATerm), ATerm h_45 (ATerm))
{
  ATerm k_79 = NULL,l_79 = NULL,m_79 = NULL;
  k_79 = t;
  j_79 :
  if(match_cons(k_79, sym_TCons_2))
    {
      l_79 = ATgetArgument(k_79, 0);
      m_79 = ATgetArgument(k_79, 1);
      {
        ATerm p_79 = NULL;
        t = not_null(l_79);
        {
          ATerm r_79 = NULL;
          t = g_45(t);
          p_79 = t;
          t = not_null(m_79);
          t = h_45(t);
          r_79 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_79), not_null(r_79));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm y_79 = NULL;
  ATerm t_11;
  t_11 = t;
  {
    ATerm x_4 (ATerm t)
    {
      ATerm z_79 = NULL,a_80 = NULL;
      z_79 = t;
      x_79 :
      if(match_cons(z_79, sym_Program_1))
        {
          a_80 = ATgetArgument(z_79, 0);
          if(y_79 != NULL && y_79 != a_80)
            _fail(a_80);
          else
            y_79 = a_80;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, x_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_79), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = t_11;
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
  ATerm h_80 = NULL,i_80 = NULL;
  ATerm y_4 (ATerm t)
  {
    ATerm z_4 (ATerm t)
    {
      ATerm u_11 = t;
      if(PushChoice()==0)
        {
          ATerm m_5 (ATerm t)
          {
            ATerm j_80 = NULL;
            j_80 = t;
            c_80 :
            if(!(match_cons(j_80, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, m_5);
          PopChoice();
          _fail(t);
        }
      else
        t = u_11;
      return(t);
    }
    ATerm d_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, z_4, d_5);
    {
      ATerm n_5 (ATerm t)
      {
        ATerm u_5 (ATerm t)
        {
          ATerm k_80 = NULL,l_80 = NULL;
          k_80 = t;
          e_80 :
          if(match_cons(k_80, sym_Runtime_1))
            {
              l_80 = ATgetArgument(k_80, 0);
              if(i_80 != NULL && i_80 != l_80)
                _fail(l_80);
              else
                i_80 = l_80;
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
      t = TCons_2(t, n_5, t_5);
      {
        ATerm y_5 (ATerm t)
        {
          ATerm a_6 (ATerm t)
          {
            ATerm m_80 = NULL,n_80 = NULL;
            m_80 = t;
            g_80 :
            if(match_cons(m_80, sym_Program_1))
              {
                n_80 = ATgetArgument(m_80, 0);
                if(h_80 != NULL && h_80 != n_80)
                  _fail(n_80);
                else
                  h_80 = n_80;
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
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_80), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_80), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, y_4);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL;
  u_80 = t;
  r_80 :
  if(match_cons(u_80, sym_TCons_2))
    {
      v_80 = ATgetArgument(u_80, 0);
      w_80 = ATgetArgument(u_80, 1);
      s_80 :
      if(match_cons(w_80, sym_TCons_2))
        {
          x_80 = ATgetArgument(w_80, 0);
          y_80 = ATgetArgument(w_80, 1);
          t_80 :
          if(match_cons(y_80, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(v_80), not_null(x_80));
          else
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
  ATerm g_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL,k_81 = NULL;
  g_81 = t;
  d_81 :
  if(match_cons(g_81, sym_TCons_2))
    {
      h_81 = ATgetArgument(g_81, 0);
      i_81 = ATgetArgument(g_81, 1);
      e_81 :
      if(match_cons(i_81, sym_TCons_2))
        {
          j_81 = ATgetArgument(i_81, 0);
          k_81 = ATgetArgument(i_81, 1);
          f_81 :
          if(match_cons(k_81, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(h_81), not_null(j_81));
          else
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
  ATerm t_81 = NULL;
  ATerm v_11;
  v_11 = t;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm z_11 = t;
      if(PushChoice()==0)
        {
          ATerm d_6 (ATerm t)
          {
            ATerm u_81 = NULL,v_81 = NULL;
            u_81 = t;
            p_81 :
            if(match_cons(u_81, sym_Output_1))
              {
                v_81 = ATgetArgument(u_81, 0);
                if(t_81 != NULL && t_81 != v_81)
                  _fail(v_81);
                else
                  t_81 = v_81;
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
          t = z_11;
          {
            ATerm w_81 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            w_81 = t;
            if(t_81 != NULL && t_81 != w_81)
              _fail(w_81);
            else
              t_81 = w_81;
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
  t = v_11;
  {
    ATerm e_6 (ATerm t)
    {
      ATerm f_6 (ATerm t)
      {
        ATerm g_6 (ATerm t)
        {
          t = not_null(t_81);
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
      ATerm a_12 = t;
      if(PushChoice()==0)
        {
          ATerm l_6 (ATerm t)
          {
            ATerm o_6 (ATerm t)
            {
              ATerm x_81 = NULL;
              x_81 = t;
              s_81 :
              if(!(match_cons(x_81, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, o_6);
            return(t);
          }
          ATerm m_6 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, l_6, m_6);
          PopChoice();
        }
      else
        {
          t = a_12;
          {
            ATerm q_6 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, q_6);
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
ATerm apply_strategy_1 (ATerm t, ATerm k_49 (ATerm))
{
  ATerm f_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL,l_82 = NULL,m_82 = NULL;
  ATerm b_12;
  b_12 = t;
  t = dtime_0(t);
  t = b_12;
  t = k_49(t);
  {
    ATerm c_12;
    c_12 = t;
    {
      ATerm g_82 = NULL;
      t = dtime_0(t);
      g_82 = t;
      if(f_82 != NULL && f_82 != g_82)
        _fail(g_82);
      else
        f_82 = g_82;
    }
    t = c_12;
    h_82 = t;
    c_82 :
    if(match_cons(h_82, sym_TCons_2))
      {
        i_82 = ATgetArgument(h_82, 0);
        j_82 = ATgetArgument(h_82, 1);
        d_82 :
        if(match_cons(j_82, sym_TCons_2))
          {
            l_82 = ATgetArgument(j_82, 0);
            m_82 = ATgetArgument(j_82, 1);
            e_82 :
            if(match_cons(m_82, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(f_82)), not_null(i_82)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_82), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm s_82 = NULL;
  s_82 = t;
  t = SSL_ReadFromFile(not_null(s_82));
  return(t);
}
ATerm split_2 (ATerm t, ATerm m_62 (ATerm), ATerm n_62 (ATerm))
{
  ATerm y_82 = NULL;
  ATerm a_83 = NULL;
  y_82 = t;
  {
    ATerm d_83 = NULL;
    t = m_62(t);
    a_83 = t;
    t = not_null(y_82);
    t = n_62(t);
    d_83 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_83), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_83), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm l_83 = NULL;
  ATerm d_12;
  d_12 = t;
  {
    ATerm e_12 = t;
    if(PushChoice()==0)
      {
        ATerm r_6 (ATerm t)
        {
          ATerm m_83 = NULL,n_83 = NULL;
          m_83 = t;
          j_83 :
          if(match_cons(m_83, sym_Input_1))
            {
              n_83 = ATgetArgument(m_83, 0);
              if(l_83 != NULL && l_83 != n_83)
                _fail(n_83);
              else
                l_83 = n_83;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, r_6);
        PopChoice();
      }
    else
      {
        t = e_12;
        {
          ATerm o_83 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          o_83 = t;
          if(l_83 != NULL && l_83 != o_83)
            _fail(o_83);
          else
            l_83 = o_83;
        }
      }
  }
  t = d_12;
  {
    ATerm s_6 (ATerm t)
    {
      t = not_null(l_83);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, s_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_83 = NULL;
  s_83 = t;
  r_83 :
  if(!(match_cons(s_83, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm j_49 (ATerm))
{
  ATerm t_6 (ATerm t)
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
  t = option_defined_1(t, t_6);
  t = j_49(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_83 = NULL;
  v_83 = t;
  t = SSL_table_create(not_null(v_83));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_83 = NULL;
  z_83 = t;
  {
    ATerm h_12;
    h_12 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_83), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = h_12;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm h_84 = NULL,i_84 = NULL,j_84 = NULL,k_84 = NULL,l_84 = NULL;
  l_84 = t;
  f_84 :
  if(match_cons(l_84, sym_Cons_2))
    {
      h_84 = ATgetArgument(l_84, 0);
      i_84 = ATgetArgument(l_84, 1);
      g_84 :
      if(match_cons(i_84, sym_Cons_2))
        {
          j_84 = ATgetArgument(i_84, 0);
          k_84 = ATgetArgument(i_84, 1);
          {
            ATerm p_84 = NULL;
            t = not_null(h_84);
            t = d_0(t);
            t = not_null(j_84);
            t = e_0(t);
            p_84 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_84), not_null(k_84));
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(l_84, "register-usage-info"))
        t = register_usage_1(t, f_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm i_12 = t;
  if(PushChoice()==0)
    {
      ATerm u_6 (ATerm t)
      {
        ATerm f_85 = NULL;
        f_85 = t;
        u_84 :
        if(!(match_string(f_85, "-S")))
          {
            if(!(match_string(f_85, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm v_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, u_6, v_6, w_6);
      PopChoice();
    }
  else
    {
      t = i_12;
      {
        ATerm k_12 = t;
        if(PushChoice()==0)
          {
            ATerm b_7 (ATerm t)
            {
              ATerm g_85 = NULL;
              g_85 = t;
              v_84 :
              if(!(match_string(g_85, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm c_7 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm e_7 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, b_7, c_7, e_7);
            PopChoice();
          }
        else
          {
            t = k_12;
            {
              ATerm l_12 = t;
              if(PushChoice()==0)
                {
                  ATerm g_7 (ATerm t)
                  {
                    ATerm h_85 = NULL;
                    h_85 = t;
                    w_84 :
                    if(!(match_string(h_85, "-v")))
                      {
                        if(!(match_string(h_85, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm h_7 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm i_7 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, g_7, h_7, i_7);
                  PopChoice();
                }
              else
                {
                  t = l_12;
                  {
                    ATerm m_12 = t;
                    if(PushChoice()==0)
                      {
                        ATerm j_7 (ATerm t)
                        {
                          ATerm i_85 = NULL;
                          i_85 = t;
                          x_84 :
                          if(!(match_string(i_85, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm k_7 (ATerm t)
                        {
                          ATerm j_85 = NULL;
                          j_85 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(j_85));
                          return(t);
                        }
                        ATerm p_7 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, j_7, k_7, p_7);
                        PopChoice();
                      }
                    else
                      {
                        t = m_12;
                        {
                          ATerm n_12 = t;
                          if(PushChoice()==0)
                            {
                              ATerm q_7 (ATerm t)
                              {
                                ATerm l_85 = NULL;
                                l_85 = t;
                                z_84 :
                                if(!(match_string(l_85, "-i")))
                                  {
                                    if(!(match_string(l_85, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm r_7 (ATerm t)
                              {
                                ATerm o_85 = NULL;
                                o_85 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(o_85));
                                return(t);
                              }
                              ATerm s_7 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, q_7, r_7, s_7);
                              PopChoice();
                            }
                          else
                            {
                              t = n_12;
                              {
                                ATerm o_12 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm t_7 (ATerm t)
                                    {
                                      ATerm q_85 = NULL;
                                      q_85 = t;
                                      b_85 :
                                      if(!(match_string(q_85, "-o")))
                                        {
                                          if(!(match_string(q_85, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm u_7 (ATerm t)
                                    {
                                      ATerm r_85 = NULL;
                                      r_85 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(r_85));
                                      return(t);
                                    }
                                    ATerm v_7 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, t_7, u_7, v_7);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = o_12;
                                    {
                                      ATerm p_12 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm w_7 (ATerm t)
                                          {
                                            ATerm t_85 = NULL;
                                            t_85 = t;
                                            d_85 :
                                            if(!(match_string(t_85, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm x_7 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm y_7 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, w_7, x_7, y_7);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = p_12;
                                          {
                                            ATerm z_7 (ATerm t)
                                            {
                                              ATerm u_85 = NULL;
                                              u_85 = t;
                                              e_85 :
                                              if(!(match_string(u_85, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm a_8 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm b_8 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, z_7, a_8, b_8);
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
  ATerm z_85 = NULL;
  z_85 = t;
  t = SSL_table_destroy(not_null(z_85));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_86 = NULL;
  d_86 = t;
  t = SSL_exit(not_null(d_86));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm h_86 = NULL;
  h_86 = t;
  t = SSL_implode_string(not_null(h_86));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_61 (ATerm))
{
  ATerm k_86 (ATerm t)
  {
    ATerm y_12 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, k_86);
        PopChoice();
      }
    else
      {
        t = y_12;
        t = Nil_0(t);
        t = m_61(t);
      }
    return(t);
  }
  t = k_86(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_12 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = z_12;
      {
        ATerm n_86 = NULL,o_86 = NULL,p_86 = NULL;
        n_86 = t;
        m_86 :
        if(match_cons(n_86, sym_Cons_2))
          {
            o_86 = ATgetArgument(n_86, 0);
            p_86 = ATgetArgument(n_86, 1);
            t = not_null(o_86);
            {
              ATerm c_8 (ATerm t)
              {
                t = not_null(p_86);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, c_8);
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
  ATerm v_86 = NULL;
  v_86 = t;
  t = SSL_explode_string(not_null(v_86));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm q_47 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_60 (ATerm))
{
  ATerm y_86 (ATerm t)
  {
    ATerm a_13 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = a_13;
        t = Cons_2(t, y_60, y_86);
      }
    return(t);
  }
  t = y_86(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm e_87 = NULL,f_87 = NULL,g_87 = NULL,h_87 = NULL,i_87 = NULL;
  e_87 = t;
  a_87 :
  if(match_cons(e_87, sym_TCons_2))
    {
      f_87 = ATgetArgument(e_87, 0);
      g_87 = ATgetArgument(e_87, 1);
      b_87 :
      if(match_cons(f_87, sym_Nil_0))
        {
          c_87 :
          if(match_cons(g_87, sym_TCons_2))
            {
              h_87 = ATgetArgument(g_87, 0);
              i_87 = ATgetArgument(g_87, 1);
              d_87 :
              if(match_cons(i_87, sym_TNil_0))
                t = not_null(h_87);
              else
                _fail(t);
            }
          else
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
  ATerm q_87 = NULL,r_87 = NULL,s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL;
  q_87 = t;
  m_87 :
  if(match_cons(q_87, sym_TCons_2))
    {
      r_87 = ATgetArgument(q_87, 0);
      u_87 = ATgetArgument(q_87, 1);
      n_87 :
      if(match_cons(r_87, sym_Cons_2))
        {
          s_87 = ATgetArgument(r_87, 0);
          t_87 = ATgetArgument(r_87, 1);
          o_87 :
          if(match_cons(u_87, sym_TCons_2))
            {
              v_87 = ATgetArgument(u_87, 0);
              w_87 = ATgetArgument(u_87, 1);
              p_87 :
              if(match_cons(w_87, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_87), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_87), not_null(v_87)), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm e_51 (ATerm), ATerm f_51 (ATerm))
{
  ATerm b_88 (ATerm t)
  {
    ATerm c_13 = t;
    if(PushChoice()==0)
      {
        t = e_51(t);
        t = b_88(t);
        PopChoice();
      }
    else
      {
        t = c_13;
        t = f_51(t);
      }
    return(t);
  }
  t = b_88(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm h_51 (ATerm))
{
  t = repeat_2(t, h_51, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm d_88 = NULL;
  d_88 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_88), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm p_47 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm o_40 (ATerm))
{
  ATerm j_88 = NULL,k_88 = NULL;
  j_88 = t;
  i_88 :
  if(match_cons(j_88, sym_Program_1))
    {
      k_88 = ATgetArgument(j_88, 0);
      {
        ATerm m_88 = NULL;
        t = not_null(k_88);
        t = o_40(t);
        m_88 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_88));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm u_88 = NULL;
  ATerm d_8 (ATerm t)
  {
    ATerm e_8 (ATerm t)
    {
      ATerm v_88 = NULL;
      v_88 = t;
      if(u_88 != NULL && u_88 != v_88)
        _fail(v_88);
      else
        u_88 = v_88;
      return(t);
    }
    t = Program_1(t, e_8);
    return(t);
  }
  t = option_defined_1(t, d_8);
  {
    ATerm f_8 (ATerm t)
    {
      ATerm w_88 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm g_8 (ATerm t)
        {
          t = not_null(u_88);
          return(t);
        }
        t = short_description_1(t, g_8);
        t = concat_strings_0(t);
        w_88 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_88), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, f_8);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm h_8 (ATerm t)
      {
        ATerm y_88 = NULL;
        y_88 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_88), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, h_8);
      {
        ATerm i_8 (ATerm t)
        {
          ATerm a_89 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm j_8 (ATerm t)
            {
              t = not_null(u_88);
              return(t);
            }
            t = long_description_1(t, j_8);
            t = concat_strings_0(t);
            a_89 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_89), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = printnl_0(t);
          }
          return(t);
        }
        t = try_1(t, i_8);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm k_89 = NULL,l_89 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL;
  k_89 = t;
  h_89 :
  if(match_cons(k_89, sym_TCons_2))
    {
      l_89 = ATgetArgument(k_89, 0);
      m_89 = ATgetArgument(k_89, 1);
      i_89 :
      if(match_cons(m_89, sym_TCons_2))
        {
          n_89 = ATgetArgument(m_89, 0);
          o_89 = ATgetArgument(m_89, 1);
          j_89 :
          if(match_cons(o_89, sym_TNil_0))
            {
              ATerm d_13;
              d_13 = t;
              t = SSL_printnl(not_null(l_89), not_null(n_89));
              t = d_13;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm p_40 (ATerm))
{
  ATerm v_89 = NULL,w_89 = NULL;
  v_89 = t;
  u_89 :
  if(match_cons(v_89, sym_Undefined_1))
    {
      w_89 = ATgetArgument(v_89, 0);
      {
        ATerm y_89 = NULL;
        t = not_null(w_89);
        t = p_40(t);
        y_89 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_89));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm g_61 (ATerm))
{
  ATerm c_90 (ATerm t)
  {
    ATerm e_13 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, g_61, _id);
        PopChoice();
      }
    else
      {
        t = e_13;
        t = Cons_2(t, _id, c_90);
      }
    return(t);
  }
  t = c_90(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm o_48 (ATerm))
{
  t = fetch_1(t, o_48);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_90 = NULL;
  e_90 = t;
  d_90 :
  if(!(match_cons(e_90, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_63 (ATerm))
{
  ATerm f_13 = t;
  if(PushChoice()==0)
    {
      t = e_63(t);
      PopChoice();
    }
  else
    t = f_13;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_90 = NULL,m_90 = NULL,n_90 = NULL,o_90 = NULL,p_90 = NULL;
  k_90 = t;
  h_90 :
  if(match_cons(k_90, sym_TCons_2))
    {
      m_90 = ATgetArgument(k_90, 0);
      n_90 = ATgetArgument(k_90, 1);
      i_90 :
      if(match_cons(n_90, sym_TCons_2))
        {
          o_90 = ATgetArgument(n_90, 0);
          p_90 = ATgetArgument(n_90, 1);
          j_90 :
          if(match_cons(p_90, sym_TNil_0))
            t = SSL_table_get(not_null(m_90), not_null(o_90));
          else
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
  ATerm a_91 = NULL,b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL,g_91 = NULL;
  a_91 = t;
  w_90 :
  if(match_cons(a_91, sym_TCons_2))
    {
      b_91 = ATgetArgument(a_91, 0);
      c_91 = ATgetArgument(a_91, 1);
      x_90 :
      if(match_cons(c_91, sym_TCons_2))
        {
          d_91 = ATgetArgument(c_91, 0);
          e_91 = ATgetArgument(c_91, 1);
          y_90 :
          if(match_cons(e_91, sym_TCons_2))
            {
              f_91 = ATgetArgument(e_91, 0);
              g_91 = ATgetArgument(e_91, 1);
              z_90 :
              if(match_cons(g_91, sym_TNil_0))
                {
                  ATerm g_13;
                  g_13 = t;
                  {
                    ATerm k_91 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_91), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_91), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm h_13 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = h_13;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      k_91 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_91), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_91), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_91), not_null(k_91)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = g_13;
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_47 (ATerm))
{
  ATerm p_91 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = u_47(t);
  p_91 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_91), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm w_91 = NULL,b_92 = NULL,c_92 = NULL;
  c_92 = t;
  v_91 :
  if(match_cons(c_92, sym_Cons_2))
    {
      w_91 = ATgetArgument(c_92, 0);
      b_92 = ATgetArgument(c_92, 1);
      {
        ATerm f_92 = NULL;
        t = not_null(w_91);
        t = a_0(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = b_0(t);
        f_92 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_92), not_null(b_92));
      }
    }
  else
    {
      if(match_string(c_92, "register-usage-info"))
        t = register_usage_1(t, c_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm k_8 (ATerm t)
  {
    ATerm l_92 = NULL;
    l_92 = t;
    k_92 :
    if(!(match_string(l_92, "--help")))
      {
        if(!(match_string(l_92, "-h")))
          {
            if(!(match_string(l_92, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm l_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm m_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, k_8, l_8, m_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_92 = NULL,q_92 = NULL,r_92 = NULL;
  o_92 = t;
  n_92 :
  if(match_cons(o_92, sym_Cons_2))
    {
      q_92 = ATgetArgument(o_92, 0);
      r_92 = ATgetArgument(o_92, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_92)), not_null(r_92));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_47 (ATerm))
{
  ATerm i_13;
  i_13 = t;
  {
    ATerm n_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = s_47(t);
      return(t);
    }
    t = try_1(t, n_8);
  }
  t = i_13;
  {
    ATerm o_8 (ATerm t)
    {
      ATerm w_92 = NULL;
      w_92 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_92));
      return(t);
    }
    ATerm p_8 (ATerm t)
    {
      ATerm j_13 = t;
      if(PushChoice()==0)
        {
          ATerm k_13 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = k_13;
              t = s_47(t);
              t = Cons_2(t, _id, p_8);
            }
          PopChoice();
        }
      else
        {
          t = j_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, o_8, p_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_93 = NULL,g_93 = NULL,h_93 = NULL;
  ATerm l_13;
  l_13 = t;
  {
    ATerm i_93 = NULL,j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL;
    i_93 = t;
    b_93 :
    if(match_cons(i_93, sym_TCons_2))
      {
        j_93 = ATgetArgument(i_93, 0);
        k_93 = ATgetArgument(i_93, 1);
        c_93 :
        if(match_cons(k_93, sym_TCons_2))
          {
            l_93 = ATgetArgument(k_93, 0);
            m_93 = ATgetArgument(k_93, 1);
            d_93 :
            if(match_cons(m_93, sym_TCons_2))
              {
                n_93 = ATgetArgument(m_93, 0);
                o_93 = ATgetArgument(m_93, 1);
                e_93 :
                if(match_cons(o_93, sym_TNil_0))
                  {
                    if(f_93 != NULL && f_93 != j_93)
                      _fail(j_93);
                    else
                      f_93 = j_93;
                    if(g_93 != NULL && g_93 != l_93)
                      _fail(l_93);
                    else
                      g_93 = l_93;
                    if(h_93 != NULL && h_93 != n_93)
                      _fail(n_93);
                    else
                      h_93 = n_93;
                    t = SSL_table_put(not_null(f_93), not_null(g_93), not_null(h_93));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = l_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_47 (ATerm))
{
  ATerm r_93 = NULL;
  ATerm q_13;
  q_13 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = q_13;
  {
    ATerm q_8 (ATerm t)
    {
      ATerm t_13 = t;
      if(PushChoice()==0)
        {
          t = r_47(t);
          PopChoice();
        }
      else
        {
          t = t_13;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, q_8);
    {
      ATerm r_8 (ATerm t)
      {
        ATerm u_13 = t;
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
            t = u_13;
            {
              ATerm s_8 (ATerm t)
              {
                ATerm t_8 (ATerm t)
                {
                  ATerm s_93 = NULL;
                  s_93 = t;
                  if(r_93 != NULL && r_93 != s_93)
                    _fail(s_93);
                  else
                    r_93 = s_93;
                  return(t);
                }
                t = Undefined_1(t, t_8);
                return(t);
              }
              t = option_defined_1(t, s_8);
              {
                ATerm v_13;
                v_13 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_93), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = v_13;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, r_8);
      {
        ATerm w_13;
        w_13 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = w_13;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm y_48 (ATerm), ATerm z_48 (ATerm), ATerm a_49 (ATerm))
{
  ATerm u_8 (ATerm t)
  {
    ATerm c_14 = t;
    if(PushChoice()==0)
      {
        t = z_48(t);
        PopChoice();
      }
    else
      {
        t = c_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, u_8);
  t = store_options_0(t);
  {
    ATerm d_14 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, a_49);
        PopChoice();
      }
    else
      {
        t = d_14;
        {
          ATerm e_14 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, y_48);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = e_14;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm t_48 (ATerm), ATerm u_48 (ATerm))
{
  t = iowrap_3(t, t_48, u_48, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm q_48 (ATerm))
{
  ATerm v_8 (ATerm t)
  {
    ATerm w_8 (ATerm t)
    {
      t = TCons_2(t, q_48, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, w_8);
    return(t);
  }
  t = iowrap_2(t, v_8, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm x_8 (ATerm t)
  {
    ATerm y_8 (ATerm t)
    {
      ATerm z_8 (ATerm t)
      {
        ATerm a_9 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
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
  t = extract_0(t);
  return(t);
}
