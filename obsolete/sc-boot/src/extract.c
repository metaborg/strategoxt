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
ATerm filter_1 (ATerm, ATerm u_55 (ATerm));
ATerm FilterNonMissingDefs_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm f_44 (ATerm), ATerm g_44 (ATerm));
ATerm Let_2 (ATerm, ATerm h_44 (ATerm), ATerm i_44 (ATerm));
ATerm sboundin_3 (ATerm, ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm a_68 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm e_58 (ATerm), ATerm f_58 (ATerm), ATerm g_58 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm u_57 (ATerm), ATerm v_57 (ATerm));
ATerm diff_1 (ATerm, ATerm z_57 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm e_54 (ATerm), ATerm f_54 (ATerm), ATerm g_54 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm h_54 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm m_56 (ATerm), ATerm n_56 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm b_67 (ATerm), ATerm c_67 (ATerm));
ATerm alltd_1 (ATerm, ATerm b_66 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm d_67 (ATerm), ATerm e_67 (ATerm));
ATerm substitute_1 (ATerm, ATerm f_67 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm NonOverloadedDef_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm o_56 (ATerm), ATerm p_56 (ATerm), ATerm q_56 (ATerm));
ATerm length_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm j_44 (ATerm), ATerm k_44 (ATerm), ATerm l_44 (ATerm));
ATerm partition_1 (ATerm, ATerm c_56 (ATerm));
ATerm OverloadedDef_0 (ATerm);
ATerm Expl_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm f_42 (ATerm), ATerm g_42 (ATerm));
ATerm Con_3 (ATerm, ATerm c_42 (ATerm), ATerm d_42 (ATerm), ATerm e_42 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm j_45 (ATerm), ATerm k_45 (ATerm));
ATerm oncetd_1 (ATerm, ATerm n_65 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm x_63 (ATerm));
ATerm desugar_0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm z_60 (ATerm));
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm y_59 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm new_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm e_57 (ATerm));
ATerm add_0 (ATerm);
ATerm MkDistApplication_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm t_57 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm q_59 (ATerm), ATerm r_59 (ATerm), ATerm s_59 (ATerm), ATerm t_59 (ATerm));
ATerm zip_1 (ATerm, ATerm v_59 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm d_46 (ATerm), ATerm e_46 (ATerm), ATerm f_46 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm d_52 (ATerm), ATerm e_52 (ATerm));
ATerm for_3 (ATerm, ATerm g_52 (ATerm), ATerm h_52 (ATerm), ATerm i_52 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm m_46 (ATerm), ATerm n_46 (ATerm), ATerm o_46 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm n_43 (ATerm));
ATerm Cons_2 (ATerm, ATerm s_45 (ATerm), ATerm t_45 (ATerm));
ATerm Specification_1 (ATerm, ATerm p_43 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm o_45 (ATerm), ATerm p_45 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm s_49 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm u_62 (ATerm), ATerm v_62 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_49 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm u_61 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm y_47 (ATerm));
ATerm map_1 (ATerm, ATerm g_61 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm m_51 (ATerm), ATerm n_51 (ATerm));
ATerm repeat_1 (ATerm, ATerm p_51 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm x_47 (ATerm));
ATerm Program_1 (ATerm, ATerm v_40 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm w_40 (ATerm));
ATerm fetch_1 (ATerm, ATerm o_61 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_48 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_63 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm c_48 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm a_48 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm z_47 (ATerm));
ATerm iowrap_3 (ATerm, ATerm g_49 (ATerm), ATerm h_49 (ATerm), ATerm i_49 (ATerm));
ATerm iowrap_2 (ATerm, ATerm b_49 (ATerm), ATerm c_49 (ATerm));
ATerm iowrap_1 (ATerm, ATerm y_48 (ATerm));
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
  ATerm d_9;
  d_9 = t;
  {
    ATerm g_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, g_0, _id);
    t = printnl_0(t);
  }
  t = d_9;
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
                      ATerm e_9 = t;
                      if(PushChoice()==0)
                        {
                          t = MissingDefMod_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = e_9;
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
ATerm filter_1 (ATerm t, ATerm u_55 (ATerm))
{
  ATerm f_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = f_9;
      {
        ATerm g_9 = t;
        if(PushChoice()==0)
          {
            ATerm i_0 (ATerm t)
            {
              t = filter_1(t, u_55);
              return(t);
            }
            t = Cons_2(t, u_55, i_0);
            PopChoice();
          }
        else
          {
            t = g_9;
            {
              ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
              r_4 = t;
              q_4 :
              if(match_cons(r_4, sym_Cons_2))
                {
                  s_4 = ATgetArgument(r_4, 0);
                  t_4 = ATgetArgument(r_4, 1);
                  t = not_null(t_4);
                  t = filter_1(t, u_55);
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
                  ATerm h_9 = t;
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
                                        ATerm i_9 = t;
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
                                            t = i_9;
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
                    t = h_9;
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
ATerm Rec_2 (ATerm t, ATerm f_44 (ATerm), ATerm g_44 (ATerm))
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
          t = f_44(t);
          n_6 = t;
          t = not_null(k_6);
          t = g_44(t);
          p_6 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(n_6), not_null(p_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm h_44 (ATerm), ATerm i_44 (ATerm))
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
          t = h_44(t);
          d_7 = t;
          t = not_null(a_7);
          t = i_44(t);
          f_7 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(d_7), not_null(f_7));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm a_68 (ATerm))
{
  ATerm j_9 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, y_67, y_67);
      PopChoice();
    }
  else
    {
      t = j_9;
      {
        ATerm k_9 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, a_68, a_68, y_67);
            PopChoice();
          }
        else
          {
            t = k_9;
            t = Rec_2(t, a_68, y_67);
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
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
  j_10 = t;
  i_10 :
  if(match_cons(j_10, sym_SDef_3))
    {
      k_10 = ATgetArgument(j_10, 0);
      l_10 = ATgetArgument(j_10, 1);
      m_10 = ATgetArgument(j_10, 2);
      t = not_null(l_10);
      {
        ATerm n_0 (ATerm t)
        {
          ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
          q_10 = t;
          h_10 :
          if(match_cons(q_10, sym_VarDec_2))
            {
              r_10 = ATgetArgument(q_10, 0);
              s_10 = ATgetArgument(q_10, 1);
              t = not_null(r_10);
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
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL;
  d_11 = t;
  c_11 :
  if(match_cons(d_11, sym_Let_2))
    {
      e_11 = ATgetArgument(d_11, 0);
      f_11 = ATgetArgument(d_11, 1);
      t = not_null(e_11);
      {
        ATerm o_0 (ATerm t)
        {
          ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
          c_12 = t;
          b_11 :
          if(match_cons(c_12, sym_SDef_3))
            {
              d_12 = ATgetArgument(c_12, 0);
              e_12 = ATgetArgument(c_12, 1);
              f_12 = ATgetArgument(c_12, 2);
              t = not_null(d_12);
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
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
  z_12 = t;
  w_12 :
  if(match_cons(z_12, sym_TCons_2))
    {
      a_13 = ATgetArgument(z_12, 0);
      b_13 = ATgetArgument(z_12, 1);
      x_12 :
      if(match_cons(b_13, sym_TCons_2))
        {
          c_13 = ATgetArgument(b_13, 0);
          d_13 = ATgetArgument(b_13, 1);
          y_12 :
          if(match_cons(d_13, sym_TNil_0))
            {
              t = not_null(a_13);
              {
                ATerm h_13 (ATerm t)
                {
                  ATerm l_9 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(c_13);
                      PopChoice();
                    }
                  else
                    {
                      t = l_9;
                      {
                        ATerm m_9 = t;
                        if(PushChoice()==0)
                          {
                            ATerm p_0 (ATerm t)
                            {
                              t = not_null(c_13);
                              return(t);
                            }
                            t = HdMember_1(t, p_0);
                            t = h_13(t);
                            PopChoice();
                          }
                        else
                          {
                            t = m_9;
                            t = Cons_2(t, _id, h_13);
                          }
                      }
                    }
                  return(t);
                }
                t = h_13(t);
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
ATerm crush_3 (ATerm t, ATerm e_58 (ATerm), ATerm f_58 (ATerm), ATerm g_58 (ATerm))
{
  ATerm v_13 = NULL;
  ATerm x_13 = NULL;
  v_13 = t;
  {
    ATerm y_13 = NULL;
    ATerm a_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
    t = not_null(v_13);
    y_13 = t;
    t = SSL_explode_term(not_null(y_13));
    a_14 = t;
    s_13 :
    if(match_cons(a_14, sym_TCons_2))
      {
        e_14 = ATgetArgument(a_14, 0);
        f_14 = ATgetArgument(a_14, 1);
        t_13 :
        if(match_cons(f_14, sym_TCons_2))
          {
            g_14 = ATgetArgument(f_14, 0);
            h_14 = ATgetArgument(f_14, 1);
            u_13 :
            if(match_cons(h_14, sym_TNil_0))
              {
                if(x_13 != NULL && x_13 != g_14)
                  _fail(g_14);
                else
                  x_13 = g_14;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(x_13);
    t = foldr_3(t, e_58, f_58, g_58);
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm u_57 (ATerm), ATerm v_57 (ATerm))
{
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL;
  o_14 = t;
  n_14 :
  if(match_cons(o_14, sym_Cons_2))
    {
      p_14 = ATgetArgument(o_14, 0);
      q_14 = ATgetArgument(o_14, 1);
      t = v_57(t);
      {
        ATerm q_0 (ATerm t)
        {
          ATerm t_14 = NULL;
          t_14 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_14), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = u_57(t);
          return(t);
        }
        t = fetch_1(t, q_0);
        t = not_null(q_14);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_1 (ATerm t, ATerm z_57 (ATerm))
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
  c_15 = t;
  z_14 :
  if(match_cons(c_15, sym_TCons_2))
    {
      d_15 = ATgetArgument(c_15, 0);
      e_15 = ATgetArgument(c_15, 1);
      a_15 :
      if(match_cons(e_15, sym_TCons_2))
        {
          f_15 = ATgetArgument(e_15, 0);
          g_15 = ATgetArgument(e_15, 1);
          b_15 :
          if(match_cons(g_15, sym_TNil_0))
            {
              t = not_null(d_15);
              {
                ATerm k_15 (ATerm t)
                {
                  ATerm n_9 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = n_9;
                      {
                        ATerm o_9 = t;
                        if(PushChoice()==0)
                          {
                            ATerm r_0 (ATerm t)
                            {
                              t = not_null(f_15);
                              return(t);
                            }
                            t = HdMember_p__2(t, z_57, r_0);
                            t = k_15(t);
                            PopChoice();
                          }
                        else
                          {
                            t = o_9;
                            t = Cons_2(t, _id, k_15);
                          }
                      }
                    }
                  return(t);
                }
                t = k_15(t);
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
ATerm free_vars2_4 (ATerm t, ATerm e_54 (ATerm), ATerm f_54 (ATerm), ATerm g_54 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm h_54 (ATerm))
{
  ATerm o_15 (ATerm t)
  {
    ATerm s_0 (ATerm t)
    {
      ATerm p_9 = t;
      if(PushChoice()==0)
        {
          t = e_54(t);
          PopChoice();
        }
      else
        {
          t = p_9;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      return(t);
    }
    ATerm t_0 (ATerm t)
    {
      ATerm q_9 = t;
      if(PushChoice()==0)
        {
          ATerm m_15 = NULL;
          ATerm r_9;
          r_9 = t;
          {
            ATerm n_15 = NULL;
            t = f_54(t);
            n_15 = t;
            if(m_15 != NULL && m_15 != n_15)
              _fail(n_15);
            else
              m_15 = n_15;
          }
          t = r_9;
          {
            ATerm u_0 (ATerm t)
            {
              ATerm w_0 (ATerm t)
              {
                t = not_null(m_15);
                return(t);
              }
              t = split_2(t, o_15, w_0);
              t = diff_1(t, h_54);
              return(t);
            }
            ATerm v_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = g_54(t, u_0, o_15, v_0);
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
          t = q_9;
          {
            ATerm y_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = crush_3(t, y_0, union_0, o_15);
          }
        }
      return(t);
    }
    t = split_2(t, s_0, t_0);
    t = union_0(t);
    return(t);
  }
  t = o_15(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL;
    y_16 = t;
    b_16 :
    if(match_cons(y_16, sym_Call_2))
      {
        z_16 = ATgetArgument(y_16, 0);
        b_17 = ATgetArgument(y_16, 1);
        f_16 :
        if(match_cons(z_16, sym_SVar_1))
          {
            a_17 = ATgetArgument(z_16, 0);
            {
              ATerm e_17 = NULL;
              ATerm h_17 = NULL;
              t = not_null(b_17);
              t = length_0(t);
              h_17 = t;
              if(e_17 != NULL && e_17 != h_17)
                _fail(h_17);
              else
                e_17 = h_17;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(a_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_17), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0));
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
    ATerm s_9 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = s_9;
        {
          ATerm t_9 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = t_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm b_1 (ATerm t)
  {
    ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
    i_17 = t;
    s_16 :
    if(match_cons(i_17, sym_TCons_2))
      {
        j_17 = ATgetArgument(i_17, 0);
        t_17 = ATgetArgument(i_17, 1);
        t_16 :
        if(match_cons(j_17, sym_TCons_2))
          {
            k_17 = ATgetArgument(j_17, 0);
            q_17 = ATgetArgument(j_17, 1);
            u_16 :
            if(match_cons(q_17, sym_TCons_2))
              {
                r_17 = ATgetArgument(q_17, 0);
                s_17 = ATgetArgument(q_17, 1);
                v_16 :
                if(match_cons(s_17, sym_TNil_0))
                  {
                    w_16 :
                    if(match_cons(t_17, sym_TCons_2))
                      {
                        u_17 = ATgetArgument(t_17, 0);
                        v_17 = ATgetArgument(t_17, 1);
                        x_16 :
                        if(match_cons(v_17, sym_TNil_0))
                          {
                            if(k_17 != NULL && k_17 != u_17)
                              _fail(u_17);
                            else
                              k_17 = u_17;
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
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
ATerm foldr_2 (ATerm t, ATerm m_56 (ATerm), ATerm n_56 (ATerm))
{
  ATerm u_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = m_56(t);
      PopChoice();
    }
  else
    {
      t = u_9;
      {
        ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
        d_18 = t;
        c_18 :
        if(match_cons(d_18, sym_Cons_2))
          {
            e_18 = ATgetArgument(d_18, 0);
            f_18 = ATgetArgument(d_18, 1);
            {
              ATerm k_18 = NULL;
              ATerm l_18 = NULL;
              t = not_null(f_18);
              t = foldr_2(t, m_56, n_56);
              l_18 = t;
              if(k_18 != NULL && k_18 != l_18)
                _fail(l_18);
              else
                k_18 = l_18;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_18), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = n_56(t);
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
    ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL;
    u_18 = t;
    r_18 :
    if(match_cons(u_18, sym_TCons_2))
      {
        v_18 = ATgetArgument(u_18, 0);
        w_18 = ATgetArgument(u_18, 1);
        s_18 :
        if(match_cons(w_18, sym_TCons_2))
          {
            x_18 = ATgetArgument(w_18, 0);
            y_18 = ATgetArgument(w_18, 1);
            t_18 :
            if(match_cons(y_18, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(v_18), not_null(x_18));
            else
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
  ATerm g_19 = NULL,h_19 = NULL,k_19 = NULL,l_19 = NULL;
  g_19 = t;
  d_19 :
  if(match_cons(g_19, sym_Call_2))
    {
      h_19 = ATgetArgument(g_19, 0);
      l_19 = ATgetArgument(g_19, 1);
      e_19 :
      if(match_cons(h_19, sym_SVar_1))
        {
          k_19 = ATgetArgument(h_19, 0);
          f_19 :
          if(match_cons(l_19, sym_Nil_0))
            t = not_null(k_19);
          else
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
          a_20 = ATgetArgument(w_19, 1);
          s_19 :
          if(match_cons(x_19, sym_Cons_2))
            {
              y_19 = ATgetArgument(x_19, 0);
              z_19 = ATgetArgument(x_19, 1);
              t_19 :
              if(match_cons(a_20, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_19), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  j_23 = t;
  c_23 :
  if(match_cons(j_23, sym_TCons_2))
    {
      k_23 = ATgetArgument(j_23, 0);
      l_23 = ATgetArgument(j_23, 1);
      d_23 :
      if(match_cons(l_23, sym_TCons_2))
        {
          m_23 = ATgetArgument(l_23, 0);
          t_23 = ATgetArgument(l_23, 1);
          e_23 :
          if(match_cons(m_23, sym_Cons_2))
            {
              n_23 = ATgetArgument(m_23, 0);
              s_23 = ATgetArgument(m_23, 1);
              f_23 :
              if(match_cons(n_23, sym_TCons_2))
                {
                  o_23 = ATgetArgument(n_23, 0);
                  p_23 = ATgetArgument(n_23, 1);
                  g_23 :
                  if(match_cons(p_23, sym_TCons_2))
                    {
                      q_23 = ATgetArgument(p_23, 0);
                      r_23 = ATgetArgument(p_23, 1);
                      h_23 :
                      if(match_cons(r_23, sym_TNil_0))
                        {
                          i_23 :
                          if(match_cons(t_23, sym_TNil_0))
                            {
                              ATerm v_23 = NULL;
                              if(k_23 != NULL && k_23 != o_23)
                                _fail(o_23);
                              else
                                k_23 = o_23;
                              if(v_23 != NULL && v_23 != q_23)
                                _fail(q_23);
                              else
                                v_23 = q_23;
                              t = not_null(v_23);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm v_9 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = v_9;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm b_67 (ATerm), ATerm c_67 (ATerm))
{
  ATerm d_24 = NULL;
  ATerm f_24 = NULL;
  d_24 = t;
  {
    ATerm h_24 = NULL;
    t = b_67(t);
    f_24 = t;
    t = c_67(t);
    h_24 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_24), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm b_66 (ATerm))
{
  ATerm m_24 (ATerm t)
  {
    ATerm w_9 = t;
    if(PushChoice()==0)
      {
        t = b_66(t);
        PopChoice();
      }
    else
      {
        t = w_9;
        t = _all(t, m_24);
      }
    return(t);
  }
  t = m_24(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL;
  u_24 = t;
  q_24 :
  if(match_cons(u_24, sym_TCons_2))
    {
      v_24 = ATgetArgument(u_24, 0);
      w_24 = ATgetArgument(u_24, 1);
      r_24 :
      if(match_cons(w_24, sym_TCons_2))
        {
          x_24 = ATgetArgument(w_24, 0);
          y_24 = ATgetArgument(w_24, 1);
          s_24 :
          if(match_cons(y_24, sym_TNil_0))
            {
              ATerm c_25 = NULL;
              if(c_25 != NULL && c_25 != x_24)
                _fail(x_24);
              else
                c_25 = x_24;
            }
          else
            {
              if(match_cons(y_24, sym_TCons_2))
                {
                  z_24 = ATgetArgument(y_24, 0);
                  a_25 = ATgetArgument(y_24, 1);
                  t_24 :
                  if(match_cons(a_25, sym_TNil_0))
                    {
                      ATerm i_25 = NULL;
                      ATerm j_25 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_24), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      j_25 = t;
                      if(i_25 != NULL && i_25 != j_25)
                        _fail(j_25);
                      else
                        i_25 = j_25;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_24), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm d_67 (ATerm), ATerm e_67 (ATerm))
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t = subs_args_0(t);
  r_25 = t;
  o_25 :
  if(match_cons(r_25, sym_TCons_2))
    {
      s_25 = ATgetArgument(r_25, 0);
      t_25 = ATgetArgument(r_25, 1);
      p_25 :
      if(match_cons(t_25, sym_TCons_2))
        {
          u_25 = ATgetArgument(t_25, 0);
          v_25 = ATgetArgument(t_25, 1);
          q_25 :
          if(match_cons(v_25, sym_TNil_0))
            {
              t = not_null(u_25);
              {
                ATerm e_1 (ATerm t)
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = not_null(s_25);
                    return(t);
                  }
                  t = SubsVar_2(t, d_67, f_1);
                  t = e_67(t);
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
ATerm substitute_1 (ATerm t, ATerm f_67 (ATerm))
{
  t = substitute_2(t, f_67, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
  q_26 = t;
  o_26 :
  if(match_cons(q_26, sym_Cons_2))
    {
      r_26 = ATgetArgument(q_26, 0);
      v_26 = ATgetArgument(q_26, 1);
      p_26 :
      if(match_cons(r_26, sym_SDef_3))
        {
          s_26 = ATgetArgument(r_26, 0);
          t_26 = ATgetArgument(r_26, 1);
          u_26 = ATgetArgument(r_26, 2);
          {
            ATerm h_27 = NULL;
            t = not_null(t_26);
            {
              ATerm o_27 = NULL;
              ATerm g_1 (ATerm t)
              {
                ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL;
                a_27 = t;
                c_26 :
                if(match_cons(a_27, sym_VarDec_2))
                  {
                    b_27 = ATgetArgument(a_27, 0);
                    c_27 = ATgetArgument(a_27, 1);
                    {
                      ATerm f_27 = NULL;
                      ATerm g_27 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TNil_0);
                      t = new_0(t);
                      g_27 = t;
                      if(f_27 != NULL && f_27 != g_27)
                        _fail(g_27);
                      else
                        f_27 = g_27;
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(f_27), not_null(c_27));
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, g_1);
              h_27 = t;
              {
                ATerm d_28 = NULL;
                ATerm h_1 (ATerm t)
                {
                  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
                  j_27 = t;
                  f_26 :
                  if(match_cons(j_27, sym_VarDec_2))
                    {
                      k_27 = ATgetArgument(j_27, 0);
                      l_27 = ATgetArgument(j_27, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_27)), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = map_1(t, h_1);
                o_27 = t;
                t = not_null(q_26);
                {
                  ATerm f_28 = NULL;
                  ATerm i_1 (ATerm t)
                  {
                    ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,u_27 = NULL;
                    q_27 = t;
                    l_26 :
                    if(match_cons(q_27, sym_SDef_3))
                      {
                        r_27 = ATgetArgument(q_27, 0);
                        s_27 = ATgetArgument(q_27, 1);
                        u_27 = ATgetArgument(q_27, 2);
                        {
                          ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
                          if(s_26 != NULL && s_26 != r_27)
                            _fail(r_27);
                          else
                            s_26 = r_27;
                          if(v_27 != NULL && v_27 != s_27)
                            _fail(s_27);
                          else
                            v_27 = s_27;
                          if(w_27 != NULL && w_27 != u_27)
                            _fail(u_27);
                          else
                            w_27 = u_27;
                          {
                            ATerm c_28 = NULL;
                            t = not_null(v_27);
                            {
                              ATerm j_1 (ATerm t)
                              {
                                ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL;
                                y_27 = t;
                                j_26 :
                                if(match_cons(y_27, sym_VarDec_2))
                                  {
                                    z_27 = ATgetArgument(y_27, 0);
                                    a_28 = ATgetArgument(y_27, 1);
                                    t = not_null(z_27);
                                  }
                                else
                                  _fail(t);
                                return(t);
                              }
                              t = map_1(t, j_1);
                              c_28 = t;
                              if(x_27 != NULL && x_27 != c_28)
                                _fail(c_28);
                              else
                                x_27 = c_28;
                            }
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_27), (ATerm) ATmakeAppl(sym_TNil_0))));
                            t = ssubs_0(t);
                          }
                        }
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = map_1(t, i_1);
                  d_28 = t;
                  {
                    ATerm g_28 = NULL;
                    t = not_null(d_28);
                    t = choices_0(t);
                    g_28 = t;
                    if(f_28 != NULL && f_28 != g_28)
                      _fail(g_28);
                    else
                      f_28 = g_28;
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(s_26), not_null(h_27), not_null(f_28));
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
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
  v_28 = t;
  t_28 :
  if(match_cons(v_28, sym_Cons_2))
    {
      w_28 = ATgetArgument(v_28, 0);
      x_28 = ATgetArgument(v_28, 1);
      u_28 :
      if(match_cons(x_28, sym_Nil_0))
        t = not_null(w_28);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm joindefs_0 (ATerm t)
{
  ATerm x_9 = t;
  if(PushChoice()==0)
    {
      t = JoinDefs1_0(t);
      PopChoice();
    }
  else
    {
      t = x_9;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm NonOverloadedDef_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,c_30 = NULL;
  q_29 = t;
  c_29 :
  if(match_cons(q_29, sym_TCons_2))
    {
      r_29 = ATgetArgument(q_29, 0);
      w_29 = ATgetArgument(q_29, 1);
      d_29 :
      if(match_cons(r_29, sym_TCons_2))
        {
          s_29 = ATgetArgument(r_29, 0);
          t_29 = ATgetArgument(r_29, 1);
          e_29 :
          if(match_cons(t_29, sym_TCons_2))
            {
              u_29 = ATgetArgument(t_29, 0);
              v_29 = ATgetArgument(t_29, 1);
              f_29 :
              if(match_int(u_29, 0))
                {
                  n_29 :
                  if(match_cons(v_29, sym_TNil_0))
                    {
                      o_29 :
                      if(match_cons(w_29, sym_TCons_2))
                        {
                          x_29 = ATgetArgument(w_29, 0);
                          c_30 = ATgetArgument(w_29, 1);
                          p_29 :
                          if(match_cons(c_30, sym_TNil_0))
                            {
                              t = not_null(x_29);
                              {
                                ATerm k_1 (ATerm t)
                                {
                                  ATerm l_1 (ATerm t)
                                  {
                                    ATerm f_30 = NULL;
                                    f_30 = t;
                                    if(s_29 != NULL && s_29 != f_30)
                                      _fail(f_30);
                                    else
                                      s_29 = f_30;
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
ATerm foldr_3 (ATerm t, ATerm o_56 (ATerm), ATerm p_56 (ATerm), ATerm q_56 (ATerm))
{
  ATerm y_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = o_56(t);
      PopChoice();
    }
  else
    {
      t = y_9;
      {
        ATerm t_30 = NULL,u_30 = NULL,z_30 = NULL;
        t_30 = t;
        l_30 :
        if(match_cons(t_30, sym_Cons_2))
          {
            u_30 = ATgetArgument(t_30, 0);
            z_30 = ATgetArgument(t_30, 1);
            {
              ATerm c_31 = NULL,e_31 = NULL;
              ATerm z_9;
              z_9 = t;
              {
                ATerm d_31 = NULL;
                t = not_null(u_30);
                t = q_56(t);
                d_31 = t;
                if(c_31 != NULL && c_31 != d_31)
                  _fail(d_31);
                else
                  c_31 = d_31;
              }
              t = z_9;
              {
                ATerm f_31 = NULL;
                t = not_null(z_30);
                t = foldr_3(t, o_56, p_56, q_56);
                f_31 = t;
                if(e_31 != NULL && e_31 != f_31)
                  _fail(f_31);
                else
                  e_31 = f_31;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_31), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_31), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = p_56(t);
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
ATerm SDef_3 (ATerm t, ATerm j_44 (ATerm), ATerm k_44 (ATerm), ATerm l_44 (ATerm))
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL;
  a_32 = t;
  z_31 :
  if(match_cons(a_32, sym_SDef_3))
    {
      b_32 = ATgetArgument(a_32, 0);
      c_32 = ATgetArgument(a_32, 1);
      d_32 = ATgetArgument(a_32, 2);
      {
        ATerm h_32 = NULL;
        t = not_null(b_32);
        {
          ATerm j_32 = NULL;
          t = j_44(t);
          h_32 = t;
          t = not_null(c_32);
          {
            ATerm l_32 = NULL;
            t = k_44(t);
            j_32 = t;
            t = not_null(d_32);
            t = l_44(t);
            l_32 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(h_32), not_null(j_32), not_null(l_32));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm partition_1 (ATerm t, ATerm c_56 (ATerm))
{
  ATerm g_34 (ATerm t)
  {
    ATerm a_10 = t;
    if(PushChoice()==0)
      {
        ATerm j_33 = NULL;
        j_33 = t;
        y_32 :
        if(match_cons(j_33, sym_Nil_0))
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
        else
          _fail(t);
        PopChoice();
      }
    else
      {
        t = a_10;
        {
          ATerm b_10 = t;
          if(PushChoice()==0)
            {
              ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL;
              t = Cons_2(t, c_56, g_34);
              k_33 = t;
              a_33 :
              if(match_cons(k_33, sym_Cons_2))
                {
                  l_33 = ATgetArgument(k_33, 0);
                  m_33 = ATgetArgument(k_33, 1);
                  b_33 :
                  if(match_cons(m_33, sym_TCons_2))
                    {
                      n_33 = ATgetArgument(m_33, 0);
                      o_33 = ATgetArgument(m_33, 1);
                      c_33 :
                      if(match_cons(o_33, sym_TCons_2))
                        {
                          p_33 = ATgetArgument(o_33, 0);
                          q_33 = ATgetArgument(o_33, 1);
                          d_33 :
                          if(match_cons(q_33, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_33), not_null(n_33)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_33), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
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
              t = b_10;
              {
                ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL;
                t = Cons_2(t, _id, g_34);
                u_33 = t;
                f_33 :
                if(match_cons(u_33, sym_Cons_2))
                  {
                    v_33 = ATgetArgument(u_33, 0);
                    w_33 = ATgetArgument(u_33, 1);
                    g_33 :
                    if(match_cons(w_33, sym_TCons_2))
                      {
                        x_33 = ATgetArgument(w_33, 0);
                        y_33 = ATgetArgument(w_33, 1);
                        h_33 :
                        if(match_cons(y_33, sym_TCons_2))
                          {
                            z_33 = ATgetArgument(y_33, 0);
                            a_34 = ATgetArgument(y_33, 1);
                            i_33 :
                            if(match_cons(a_34, sym_TNil_0))
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_33), not_null(z_33)), (ATerm) ATmakeAppl(sym_TNil_0)));
                            else
                              _fail(t);
                          }
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
  t = g_34(t);
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL;
  t_34 = t;
  n_34 :
  if(match_cons(t_34, sym_TCons_2))
    {
      u_34 = ATgetArgument(t_34, 0);
      z_34 = ATgetArgument(t_34, 1);
      o_34 :
      if(match_cons(u_34, sym_TCons_2))
        {
          v_34 = ATgetArgument(u_34, 0);
          w_34 = ATgetArgument(u_34, 1);
          p_34 :
          if(match_cons(w_34, sym_TCons_2))
            {
              x_34 = ATgetArgument(w_34, 0);
              y_34 = ATgetArgument(w_34, 1);
              q_34 :
              if(match_cons(y_34, sym_TNil_0))
                {
                  r_34 :
                  if(match_cons(z_34, sym_TCons_2))
                    {
                      a_35 = ATgetArgument(z_34, 0);
                      b_35 = ATgetArgument(z_34, 1);
                      s_34 :
                      if(match_cons(b_35, sym_TNil_0))
                        {
                          t = not_null(a_35);
                          {
                            ATerm o_1 (ATerm t)
                            {
                              ATerm p_1 (ATerm t)
                              {
                                ATerm f_35 = NULL;
                                f_35 = t;
                                if(v_34 != NULL && v_34 != f_35)
                                  _fail(f_35);
                                else
                                  v_34 = f_35;
                                return(t);
                              }
                              ATerm q_1 (ATerm t)
                              {
                                ATerm c_10;
                                c_10 = t;
                                {
                                  ATerm j_35 = NULL;
                                  t = length_0(t);
                                  j_35 = t;
                                  if(x_34 != NULL && x_34 != j_35)
                                    _fail(j_35);
                                  else
                                    x_34 = j_35;
                                }
                                t = c_10;
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
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
  n_36 = t;
  m_36 :
  if(match_cons(n_36, sym_Match_1))
    {
      o_36 = ATgetArgument(n_36, 0);
      {
        ATerm r_36 = NULL;
        ATerm t_36 = NULL;
        t = new_0(t);
        r_36 = t;
        {
          ATerm w_36 = NULL,x_36 = NULL,f_37 = NULL;
          t = new_0(t);
          t_36 = t;
          t = not_null(o_36);
          {
            ATerm r_1 (ATerm t)
            {
              ATerm y_36 = NULL,d_37 = NULL,e_37 = NULL;
              y_36 = t;
              y_35 :
              if(match_cons(y_36, sym_Explode_2))
                {
                  d_37 = ATgetArgument(y_36, 0);
                  e_37 = ATgetArgument(y_36, 1);
                  if(w_36 != NULL && w_36 != d_37)
                    _fail(d_37);
                  else
                    w_36 = d_37;
                  if(x_36 != NULL && x_36 != e_37)
                    _fail(e_37);
                  else
                    x_36 = e_37;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_36));
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1(t, r_1);
            f_37 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_36), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_37)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_36), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_36))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(t_36)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(r_36)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_36), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_36), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0))))))));
          }
        }
      }
    }
  else
    {
      if(match_cons(n_36, sym_Build_1))
        {
          o_36 = ATgetArgument(n_36, 0);
          {
            ATerm i_37 = NULL;
            ATerm v_37 = NULL,w_37 = NULL,b_38 = NULL;
            t = new_0(t);
            i_37 = t;
            t = not_null(o_36);
            {
              ATerm s_1 (ATerm t)
              {
                ATerm x_37 = NULL,y_37 = NULL,a_38 = NULL;
                x_37 = t;
                g_36 :
                if(match_cons(x_37, sym_Explode_2))
                  {
                    y_37 = ATgetArgument(x_37, 0);
                    a_38 = ATgetArgument(x_37, 1);
                    if(v_37 != NULL && v_37 != y_37)
                      _fail(y_37);
                    else
                      v_37 = y_37;
                    if(w_37 != NULL && w_37 != a_38)
                      _fail(a_38);
                    else
                      w_37 = a_38;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_37));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, s_1);
              b_38 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_37), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_37), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_37), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_37))), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_38)))));
            }
          }
        }
      else
        {
          if(match_cons(n_36, sym_ExplodeCong_2))
            {
              o_36 = ATgetArgument(n_36, 0);
              p_36 = ATgetArgument(n_36, 1);
              {
                ATerm f_38 = NULL;
                ATerm h_38 = NULL;
                t = new_0(t);
                f_38 = t;
                {
                  ATerm u_38 = NULL;
                  t = new_0(t);
                  h_38 = t;
                  {
                    ATerm w_38 = NULL;
                    t = new_0(t);
                    u_38 = t;
                    t = new_0(t);
                    w_38 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_38), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_38), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_38), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_38), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_38)), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_38)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(o_36), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_38)), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_38))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_36), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_38)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_38))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_38)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_38)), (ATerm) ATmakeAppl(sym_Nil_0)))))));
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
  ATerm a_40 = NULL,b_40 = NULL;
  a_40 = t;
  z_39 :
  if(match_cons(a_40, sym_Build_1))
    {
      b_40 = ATgetArgument(a_40, 0);
      {
        ATerm d_10 = t;
        if(PushChoice()==0)
          {
            ATerm d_40 = NULL;
            ATerm f_40 = NULL,g_40 = NULL,k_40 = NULL;
            t = new_0(t);
            d_40 = t;
            t = not_null(b_40);
            {
              ATerm t_1 (ATerm t)
              {
                ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL;
                h_40 = t;
                t_39 :
                if(match_cons(h_40, sym_App_2))
                  {
                    i_40 = ATgetArgument(h_40, 0);
                    j_40 = ATgetArgument(h_40, 1);
                    if(f_40 != NULL && f_40 != i_40)
                      _fail(i_40);
                    else
                      f_40 = i_40;
                    if(g_40 != NULL && g_40 != j_40)
                      _fail(j_40);
                    else
                      g_40 = j_40;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_40));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, t_1);
              k_40 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_40), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(f_40), not_null(g_40), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_40)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_40))));
            }
            PopChoice();
          }
        else
          {
            t = d_10;
            {
              ATerm n_40 = NULL;
              ATerm p_40 = NULL,s_40 = NULL;
              t = new_0(t);
              n_40 = t;
              t = not_null(b_40);
              {
                ATerm u_1 (ATerm t)
                {
                  ATerm q_40 = NULL,r_40 = NULL;
                  q_40 = t;
                  x_39 :
                  if(match_cons(q_40, sym_RootApp_1))
                    {
                      r_40 = ATgetArgument(q_40, 0);
                      if(p_40 != NULL && p_40 != r_40)
                        _fail(r_40);
                      else
                        p_40 = r_40;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_40));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, u_1);
                s_40 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_40), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_40), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_40))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_40))));
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
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL;
  j_41 = t;
  g_41 :
  if(match_cons(j_41, sym_Build_1))
    {
      k_41 = ATgetArgument(j_41, 0);
      h_41 :
      if(match_cons(k_41, sym_App_2))
        {
          l_41 = ATgetArgument(k_41, 0);
          i_41 = ATgetArgument(k_41, 1);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_41)), not_null(l_41));
        }
      else
        {
          if(match_cons(k_41, sym_RootApp_1))
            {
              l_41 = ATgetArgument(k_41, 0);
              t = not_null(l_41);
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
  ATerm h_42 = NULL,i_42 = NULL;
  h_42 = t;
  b_42 :
  if(match_cons(h_42, sym_Build_1))
    {
      i_42 = ATgetArgument(h_42, 0);
      {
        ATerm e_10 = t;
        if(PushChoice()==0)
          {
            ATerm k_42 = NULL,l_42 = NULL,q_42 = NULL;
            t = not_null(i_42);
            {
              ATerm v_1 (ATerm t)
              {
                ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL;
                m_42 = t;
                u_41 :
                if(match_cons(m_42, sym_App_2))
                  {
                    n_42 = ATgetArgument(m_42, 0);
                    p_42 = ATgetArgument(m_42, 1);
                    v_41 :
                    if(match_cons(n_42, sym_Build_1))
                      {
                        o_42 = ATgetArgument(n_42, 0);
                        if(l_42 != NULL && l_42 != o_42)
                          _fail(o_42);
                        else
                          l_42 = o_42;
                        if(k_42 != NULL && k_42 != p_42)
                          _fail(p_42);
                        else
                          k_42 = p_42;
                        t = not_null(l_42);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, v_1);
              q_42 = t;
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(q_42));
            }
            PopChoice();
          }
        else
          {
            t = e_10;
            {
              ATerm t_42 = NULL,x_42 = NULL;
              t = not_null(i_42);
              {
                ATerm w_1 (ATerm t)
                {
                  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL;
                  u_42 = t;
                  y_41 :
                  if(match_cons(u_42, sym_RootApp_1))
                    {
                      v_42 = ATgetArgument(u_42, 0);
                      z_41 :
                      if(match_cons(v_42, sym_Build_1))
                        {
                          w_42 = ATgetArgument(v_42, 0);
                          if(t_42 != NULL && t_42 != w_42)
                            _fail(w_42);
                          else
                            t_42 = w_42;
                          t = not_null(t_42);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, w_1);
                x_42 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, not_null(x_42));
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
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL;
  z_43 = t;
  t_43 :
  if(match_cons(z_43, sym_Seqs_1))
    {
      a_44 = ATgetArgument(z_43, 0);
      u_43 :
      if(match_cons(a_44, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(a_44, sym_Cons_2))
            {
              x_43 = ATgetArgument(a_44, 0);
              y_43 = ATgetArgument(a_44, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_43), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(y_43)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(z_43, sym_Choices_1))
        {
          a_44 = ATgetArgument(z_43, 0);
          v_43 :
          if(match_cons(a_44, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(a_44, sym_Cons_2))
                {
                  x_43 = ATgetArgument(a_44, 0);
                  y_43 = ATgetArgument(a_44, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(x_43), (ATerm) ATmakeAppl(sym_Choices_1, not_null(y_43)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(z_43, sym_LChoices_1))
            {
              a_44 = ATgetArgument(z_43, 0);
              w_43 :
              if(match_cons(a_44, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(a_44, sym_Cons_2))
                    {
                      x_43 = ATgetArgument(a_44, 0);
                      y_43 = ATgetArgument(a_44, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(x_43), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(y_43)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(z_43, sym_Lets_2))
                {
                  a_44 = ATgetArgument(z_43, 0);
                  b_44 = ATgetArgument(z_43, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(a_44), not_null(b_44));
                }
              else
                {
                  if(match_cons(z_43, sym_BA_2))
                    {
                      a_44 = ATgetArgument(z_43, 0);
                      b_44 = ATgetArgument(z_43, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_44)), not_null(a_44));
                    }
                  else
                    {
                      if(match_cons(z_43, sym_MA_2))
                        {
                          a_44 = ATgetArgument(z_43, 0);
                          b_44 = ATgetArgument(z_43, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_44)), not_null(b_44));
                        }
                      else
                        {
                          if(match_cons(z_43, sym_AM_2))
                            {
                              a_44 = ATgetArgument(z_43, 0);
                              b_44 = ATgetArgument(z_43, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_44), (ATerm) ATmakeAppl(sym_Match_1, not_null(b_44)));
                            }
                          else
                            {
                              if(match_cons(z_43, sym_BAM_3))
                                {
                                  a_44 = ATgetArgument(z_43, 0);
                                  b_44 = ATgetArgument(z_43, 1);
                                  c_44 = ATgetArgument(z_43, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_44)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_44), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_44)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(z_43, sym_InfixApp_3))
                                    {
                                      a_44 = ATgetArgument(z_43, 0);
                                      b_44 = ATgetArgument(z_43, 1);
                                      c_44 = ATgetArgument(z_43, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(b_44), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_44), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_44), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm x_45 = NULL;
  x_45 = t;
  w_45 :
  if(!(match_cons(x_45, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm f_10 = t;
  if(PushChoice()==0)
    {
      ATerm x_1 (ATerm t)
      {
        ATerm g_10 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = g_10;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, x_1);
      PopChoice();
      _fail(t);
    }
  else
    t = f_10;
  return(t);
}
ATerm App_2 (ATerm t, ATerm f_42 (ATerm), ATerm g_42 (ATerm))
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
  g_46 = t;
  c_46 :
  if(match_cons(g_46, sym_App_2))
    {
      h_46 = ATgetArgument(g_46, 0);
      i_46 = ATgetArgument(g_46, 1);
      {
        ATerm l_46 = NULL;
        t = not_null(h_46);
        {
          ATerm q_46 = NULL;
          t = f_42(t);
          l_46 = t;
          t = not_null(i_46);
          t = g_42(t);
          q_46 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, not_null(l_46), not_null(q_46));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm c_42 (ATerm), ATerm d_42 (ATerm), ATerm e_42 (ATerm))
{
  ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL;
  a_47 = t;
  z_46 :
  if(match_cons(a_47, sym_Con_3))
    {
      b_47 = ATgetArgument(a_47, 0);
      c_47 = ATgetArgument(a_47, 1);
      d_47 = ATgetArgument(a_47, 2);
      {
        ATerm h_47 = NULL;
        t = not_null(b_47);
        {
          ATerm j_47 = NULL;
          t = c_42(t);
          h_47 = t;
          t = not_null(c_47);
          {
            ATerm l_47 = NULL;
            t = d_42(t);
            j_47 = t;
            t = not_null(d_47);
            t = e_42(t);
            l_47 = t;
            t = (ATerm) ATmakeAppl(sym_Con_3, not_null(h_47), not_null(j_47), not_null(l_47));
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
  ATerm n_10 = t;
  if(PushChoice()==0)
    {
      ATerm a_2 (ATerm t)
      {
        ATerm o_10 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = o_10;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, a_2);
      PopChoice();
      _fail(t);
    }
  else
    t = n_10;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL;
  v_47 = t;
  t_47 :
  if(match_cons(v_47, sym_SRule_1))
    {
      w_47 = ATgetArgument(v_47, 0);
      u_47 :
      if(match_cons(w_47, sym_Rule_3))
        {
          d_48 = ATgetArgument(w_47, 0);
          e_48 = ATgetArgument(w_47, 1);
          f_48 = ATgetArgument(w_47, 2);
          t = not_null(d_48);
          t = pureterm_0(t);
          t = not_null(e_48);
          t = buildterm_0(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_48)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_48)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(w_47, sym_StratRule_3))
            {
              d_48 = ATgetArgument(w_47, 0);
              e_48 = ATgetArgument(w_47, 1);
              f_48 = ATgetArgument(w_47, 2);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_48), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_48), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_48), (ATerm) ATmakeAppl(sym_Nil_0)))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm j_45 (ATerm), ATerm k_45 (ATerm))
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
  s_48 = t;
  r_48 :
  if(match_cons(s_48, sym_Scope_2))
    {
      t_48 = ATgetArgument(s_48, 0);
      u_48 = ATgetArgument(s_48, 1);
      {
        ATerm z_48 = NULL;
        t = not_null(t_48);
        {
          ATerm d_49 = NULL;
          t = j_45(t);
          z_48 = t;
          t = not_null(u_48);
          t = k_45(t);
          d_49 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_48), not_null(d_49));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm n_65 (ATerm))
{
  ATerm l_49 (ATerm t)
  {
    ATerm p_10 = t;
    if(PushChoice()==0)
      {
        t = n_65(t);
        PopChoice();
      }
    else
      {
        t = p_10;
        t = _one(t, l_49);
      }
    return(t);
  }
  t = l_49(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL;
  c_50 = t;
  a_50 :
  if(match_cons(c_50, sym_SRule_1))
    {
      d_50 = ATgetArgument(c_50, 0);
      b_50 :
      if(match_cons(d_50, sym_Rule_3))
        {
          e_50 = ATgetArgument(d_50, 0);
          f_50 = ATgetArgument(d_50, 1);
          g_50 = ATgetArgument(d_50, 2);
          {
            ATerm k_50 = NULL;
            ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL,u_50 = NULL;
            t = new_0(t);
            k_50 = t;
            t = not_null(e_50);
            {
              ATerm w_50 = NULL,x_50 = NULL,f_51 = NULL;
              ATerm j_2 (ATerm t)
              {
                ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL;
                p_50 = t;
                p_49 :
                if(match_cons(p_50, sym_Con_3))
                  {
                    q_50 = ATgetArgument(p_50, 0);
                    s_50 = ATgetArgument(p_50, 1);
                    t_50 = ATgetArgument(p_50, 2);
                    q_49 :
                    if(match_cons(q_50, sym_Var_1))
                      {
                        r_50 = ATgetArgument(q_50, 0);
                        if(o_50 != NULL && o_50 != r_50)
                          _fail(r_50);
                        else
                          o_50 = r_50;
                        if(m_50 != NULL && m_50 != s_50)
                          _fail(s_50);
                        else
                          m_50 = s_50;
                        if(n_50 != NULL && n_50 != t_50)
                          _fail(t_50);
                        else
                          n_50 = t_50;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_50));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, j_2);
              u_50 = t;
              t = not_null(f_50);
              {
                ATerm k_2 (ATerm t)
                {
                  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL;
                  y_50 = t;
                  v_49 :
                  if(match_cons(y_50, sym_Con_3))
                    {
                      z_50 = ATgetArgument(y_50, 0);
                      b_51 = ATgetArgument(y_50, 1);
                      c_51 = ATgetArgument(y_50, 2);
                      w_49 :
                      if(match_cons(z_50, sym_Var_1))
                        {
                          a_51 = ATgetArgument(z_50, 0);
                          x_49 :
                          if(match_cons(c_51, sym_Call_2))
                            {
                              d_51 = ATgetArgument(c_51, 0);
                              e_51 = ATgetArgument(c_51, 1);
                              y_49 :
                              if(match_cons(e_51, sym_Nil_0))
                                {
                                  if(o_50 != NULL && o_50 != a_51)
                                    _fail(a_51);
                                  else
                                    o_50 = a_51;
                                  if(w_50 != NULL && w_50 != b_51)
                                    _fail(b_51);
                                  else
                                    w_50 = b_51;
                                  if(x_50 != NULL && x_50 != d_51)
                                    _fail(d_51);
                                  else
                                    x_50 = d_51;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_50));
                                }
                              else
                                _fail(t);
                            }
                          else
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
                f_51 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_50), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_50), not_null(f_51), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_50), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(x_50), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(m_50), not_null(w_50), (ATerm) ATmakeAppl(sym_Id_0))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Var_1, not_null(o_50)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_50)))))));
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
    ATerm t_10 = t;
    if(PushChoice()==0)
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      {
        t = t_10;
        {
          ATerm u_10 = t;
          if(PushChoice()==0)
            {
              t = Scope_2(t, _id, desugarRule_0);
              PopChoice();
            }
          else
            {
              t = u_10;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, l_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm x_63 (ATerm))
{
  ATerm s_51 (ATerm t)
  {
    t = x_63(t);
    t = _all(t, s_51);
    return(t);
  }
  t = s_51(t);
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
        ATerm v_10 = t;
        if(PushChoice()==0)
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = v_10;
            {
              ATerm w_10 = t;
              if(PushChoice()==0)
                {
                  ATerm x_10 = t;
                  if(PushChoice()==0)
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = x_10;
                      {
                        ATerm y_10 = t;
                        if(PushChoice()==0)
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = y_10;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = w_10;
                  t = Expl_0(t);
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
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL;
  v_51 = t;
  u_51 :
  if(match_cons(v_51, sym_TCons_2))
    {
      w_51 = ATgetArgument(v_51, 0);
      x_51 = ATgetArgument(v_51, 1);
      t = not_null(x_51);
    }
  else
    _fail(t);
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL;
  j_52 = t;
  c_52 :
  if(match_cons(j_52, sym_TCons_2))
    {
      k_52 = ATgetArgument(j_52, 0);
      l_52 = ATgetArgument(j_52, 1);
      t = not_null(k_52);
    }
  else
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm z_60 (ATerm))
{
  ATerm a_53 (ATerm t)
  {
    ATerm z_10 = t;
    if(PushChoice()==0)
      {
        ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL;
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
            t = TCons_2(t, a_53, TNil_0);
            return(t);
          }
          t = TCons_2(t, z_60, b_3);
          t_52 = t;
          q_52 :
          if(match_cons(t_52, sym_TCons_2))
            {
              u_52 = ATgetArgument(t_52, 0);
              v_52 = ATgetArgument(t_52, 1);
              r_52 :
              if(match_cons(v_52, sym_TCons_2))
                {
                  w_52 = ATgetArgument(v_52, 0);
                  x_52 = ATgetArgument(v_52, 1);
                  s_52 :
                  if(match_cons(x_52, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_52), not_null(w_52));
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
        t = z_10;
        t = map_1(t, TNil_0);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
      }
    return(t);
  }
  t = a_53(t);
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL;
  j_53 = t;
  g_53 :
  if(match_cons(j_53, sym_TCons_2))
    {
      k_53 = ATgetArgument(j_53, 0);
      l_53 = ATgetArgument(j_53, 1);
      h_53 :
      if(match_cons(l_53, sym_TCons_2))
        {
          m_53 = ATgetArgument(l_53, 0);
          n_53 = ATgetArgument(l_53, 1);
          i_53 :
          if(match_cons(n_53, sym_TNil_0))
            {
              ATerm q_53 = NULL;
              ATerm s_53 = NULL;
              t = new_0(t);
              q_53 = t;
              {
                ATerm u_53 = NULL;
                t = new_0(t);
                s_53 = t;
                t = new_0(t);
                u_53 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_53)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_53)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_53)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_53)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_53)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(q_53), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_53), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_53)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_53), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_53)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
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
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL;
  k_54 = t;
  b_54 :
  if(match_cons(k_54, sym_TCons_2))
    {
      l_54 = ATgetArgument(k_54, 0);
      m_54 = ATgetArgument(k_54, 1);
      c_54 :
      if(match_cons(m_54, sym_TCons_2))
        {
          n_54 = ATgetArgument(m_54, 0);
          o_54 = ATgetArgument(m_54, 1);
          d_54 :
          if(match_cons(n_54, sym_Nil_0))
            {
              j_54 :
              if(match_cons(o_54, sym_TNil_0))
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
ATerm zipr_1 (ATerm t, ATerm y_59 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, y_59);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL;
  s_54 = t;
  r_54 :
  if(match_cons(s_54, sym_Cons_2))
    {
      t_54 = ATgetArgument(s_54, 0);
      u_54 = ATgetArgument(s_54, 1);
      t = not_null(u_54);
    }
  else
    _fail(t);
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL;
  b_55 = t;
  z_54 :
  if(match_cons(b_55, sym_Cons_2))
    {
      c_55 = ATgetArgument(b_55, 0);
      d_55 = ATgetArgument(b_55, 1);
      a_55 :
      if(match_cons(d_55, sym_Nil_0))
        t = not_null(c_55);
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
              ATerm g_11 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(m_55), not_null(o_55));
                  PopChoice();
                }
              else
                {
                  t = g_11;
                  t = SSL_subtr(not_null(m_55), not_null(o_55));
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
  ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,e_56 = NULL;
  y_55 = t;
  v_55 :
  if(match_cons(y_55, sym_TCons_2))
    {
      z_55 = ATgetArgument(y_55, 0);
      a_56 = ATgetArgument(y_55, 1);
      w_55 :
      if(match_cons(a_56, sym_TCons_2))
        {
          b_56 = ATgetArgument(a_56, 0);
          e_56 = ATgetArgument(a_56, 1);
          x_55 :
          if(match_cons(e_56, sym_TNil_0))
            {
              ATerm h_11;
              h_11 = t;
              {
                ATerm i_11 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(z_55), not_null(b_56));
                    PopChoice();
                  }
                else
                  {
                    t = i_11;
                    t = SSL_gtr(not_null(z_55), not_null(b_56));
                  }
              }
              t = h_11;
            }
          else
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
  ATerm r_56 = NULL;
  ATerm j_11 = t;
  if(PushChoice()==0)
    {
      ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL;
      s_56 = t;
      j_56 :
      if(match_cons(s_56, sym_TCons_2))
        {
          t_56 = ATgetArgument(s_56, 0);
          u_56 = ATgetArgument(s_56, 1);
          k_56 :
          if(match_cons(u_56, sym_TCons_2))
            {
              v_56 = ATgetArgument(u_56, 0);
              w_56 = ATgetArgument(u_56, 1);
              l_56 :
              if(match_cons(w_56, sym_TNil_0))
                {
                  if(r_56 != NULL && r_56 != t_56)
                    _fail(t_56);
                  else
                    r_56 = t_56;
                  if(r_56 != NULL && r_56 != v_56)
                    _fail(v_56);
                  else
                    r_56 = v_56;
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
      t = j_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm e_57 (ATerm))
{
  ATerm c_3 (ATerm t)
  {
    ATerm s_57 = NULL,y_57 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL;
    s_57 = t;
    z_56 :
    if(match_cons(s_57, sym_TCons_2))
      {
        y_57 = ATgetArgument(s_57, 0);
        b_58 = ATgetArgument(s_57, 1);
        a_57 :
        if(match_cons(b_58, sym_TCons_2))
          {
            c_58 = ATgetArgument(b_58, 0);
            d_58 = ATgetArgument(b_58, 1);
            b_57 :
            if(match_cons(d_58, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_57), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
            else
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
    ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL;
    j_58 = t;
    f_57 :
    if(match_cons(j_58, sym_TCons_2))
      {
        k_58 = ATgetArgument(j_58, 0);
        l_58 = ATgetArgument(j_58, 1);
        g_57 :
        if(match_int(k_58, 0))
          {
            h_57 :
            if(match_cons(l_58, sym_TCons_2))
              {
                m_58 = ATgetArgument(l_58, 0);
                n_58 = ATgetArgument(l_58, 1);
                i_57 :
                if(match_cons(n_58, sym_TCons_2))
                  {
                    o_58 = ATgetArgument(n_58, 0);
                    p_58 = ATgetArgument(n_58, 1);
                    j_57 :
                    if(match_cons(p_58, sym_TNil_0))
                      t = not_null(o_58);
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
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
    ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL;
    s_58 = t;
    n_57 :
    if(match_cons(s_58, sym_TCons_2))
      {
        t_58 = ATgetArgument(s_58, 0);
        u_58 = ATgetArgument(s_58, 1);
        p_57 :
        if(match_cons(u_58, sym_TCons_2))
          {
            v_58 = ATgetArgument(u_58, 0);
            w_58 = ATgetArgument(u_58, 1);
            q_57 :
            if(match_cons(w_58, sym_TCons_2))
              {
                x_58 = ATgetArgument(w_58, 0);
                y_58 = ATgetArgument(w_58, 1);
                r_57 :
                if(match_cons(y_58, sym_TNil_0))
                  {
                    ATerm c_59 = NULL,e_59 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = geq_0(t);
                    {
                      ATerm k_11;
                      k_11 = t;
                      {
                        ATerm d_59 = NULL;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                        t = subt_0(t);
                        d_59 = t;
                        if(c_59 != NULL && c_59 != d_59)
                          _fail(d_59);
                        else
                          c_59 = d_59;
                      }
                      t = k_11;
                      {
                        ATerm f_59 = NULL;
                        t = not_null(v_58);
                        t = e_57(t);
                        f_59 = t;
                        if(e_59 != NULL && e_59 != f_59)
                          _fail(f_59);
                        else
                          e_59 = f_59;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_59), not_null(x_58)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
ATerm add_0 (ATerm t)
{
  ATerm p_59 = NULL,w_59 = NULL,x_59 = NULL,z_59 = NULL,a_60 = NULL;
  p_59 = t;
  m_59 :
  if(match_cons(p_59, sym_TCons_2))
    {
      w_59 = ATgetArgument(p_59, 0);
      x_59 = ATgetArgument(p_59, 1);
      n_59 :
      if(match_cons(x_59, sym_TCons_2))
        {
          z_59 = ATgetArgument(x_59, 0);
          a_60 = ATgetArgument(x_59, 1);
          o_59 :
          if(match_cons(a_60, sym_TNil_0))
            {
              ATerm l_11 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(w_59), not_null(z_59));
                  PopChoice();
                }
              else
                {
                  t = l_11;
                  t = SSL_addr(not_null(w_59), not_null(z_59));
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
  ATerm i_60 = NULL;
  ATerm k_60 = NULL;
  i_60 = t;
  {
    ATerm m_60 = NULL;
    t = new_0(t);
    k_60 = t;
    {
      ATerm o_60 = NULL;
      t = new_0(t);
      m_60 = t;
      t = new_0(t);
      o_60 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_60)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_60)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_60), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_60))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(k_60), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_60), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_60)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_60), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_60)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
    }
  }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,r_62 = NULL,s_62 = NULL;
  ATerm i_65 (ATerm t)
  {
    ATerm c_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL;
    ATerm d_64 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_62), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = add_0(t);
    d_64 = t;
    if(c_64 != NULL && c_64 != d_64)
      _fail(d_64);
    else
      c_64 = d_64;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_64), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TNil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = copy_1(t, new_0);
    e_64 = t;
    c_62 :
    if(match_cons(e_64, sym_Cons_2))
      {
        f_64 = ATgetArgument(e_64, 0);
        g_64 = ATgetArgument(e_64, 1);
        {
          ATerm j_64 = NULL;
          t = not_null(g_64);
          {
            ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL;
            t = last_0(t);
            j_64 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_64), not_null(g_64)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_64), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = zipr_1(t, MkThreadApplication_0);
            t = tuple_unzip_1(t, _id);
            l_64 = t;
            t_61 :
            if(match_cons(l_64, sym_TCons_2))
              {
                m_64 = ATgetArgument(l_64, 0);
                n_64 = ATgetArgument(l_64, 1);
                w_61 :
                if(match_cons(n_64, sym_TCons_2))
                  {
                    o_64 = ATgetArgument(n_64, 0);
                    p_64 = ATgetArgument(n_64, 1);
                    x_61 :
                    if(match_cons(p_64, sym_TCons_2))
                      {
                        q_64 = ATgetArgument(p_64, 0);
                        r_64 = ATgetArgument(p_64, 1);
                        y_61 :
                        if(match_cons(r_64, sym_TCons_2))
                          {
                            s_64 = ATgetArgument(r_64, 0);
                            t_64 = ATgetArgument(r_64, 1);
                            z_61 :
                            if(match_cons(t_64, sym_TCons_2))
                              {
                                u_64 = ATgetArgument(t_64, 0);
                                v_64 = ATgetArgument(t_64, 1);
                                a_62 :
                                if(match_cons(v_64, sym_TCons_2))
                                  {
                                    w_64 = ATgetArgument(v_64, 0);
                                    x_64 = ATgetArgument(v_64, 1);
                                    b_62 :
                                    if(match_cons(x_64, sym_TNil_0))
                                      {
                                        ATerm e_65 = NULL;
                                        ATerm f_65 = NULL;
                                        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_64), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_64), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_64), (ATerm) ATmakeAppl(sym_Nil_0))));
                                        t = concat_0(t);
                                        f_65 = t;
                                        if(e_65 != NULL && e_65 != f_65)
                                          _fail(f_65);
                                        else
                                          e_65 = f_65;
                                        t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(m_62), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), not_null(o_64), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_64), not_null(e_65)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(m_62), not_null(s_64)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_64)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(m_62), not_null(w_64)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(j_64)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(m_64))))));
                                      }
                                    else
                                      _fail(t);
                                  }
                                else
                                  _fail(t);
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
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
  l_62 = t;
  d_62 :
  if(match_cons(l_62, sym_TCons_2))
    {
      m_62 = ATgetArgument(l_62, 0);
      n_62 = ATgetArgument(l_62, 1);
      e_62 :
      if(match_cons(n_62, sym_TCons_2))
        {
          o_62 = ATgetArgument(n_62, 0);
          p_62 = ATgetArgument(n_62, 1);
          f_62 :
          if(match_string(o_62, "D"))
            {
              g_62 :
              if(match_cons(p_62, sym_TCons_2))
                {
                  r_62 = ATgetArgument(p_62, 0);
                  s_62 = ATgetArgument(p_62, 1);
                  h_62 :
                  if(match_cons(s_62, sym_TNil_0))
                    {
                      ATerm x_62 = NULL;
                      ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL;
                      t = new_0(t);
                      x_62 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_62), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_62)), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = copy_1(t, MkDistApplication_0);
                      t = tuple_unzip_1(t, _id);
                      z_62 = t;
                      c_61 :
                      if(match_cons(z_62, sym_TCons_2))
                        {
                          a_63 = ATgetArgument(z_62, 0);
                          b_63 = ATgetArgument(z_62, 1);
                          d_61 :
                          if(match_cons(b_63, sym_TCons_2))
                            {
                              c_63 = ATgetArgument(b_63, 0);
                              d_63 = ATgetArgument(b_63, 1);
                              e_61 :
                              if(match_cons(d_63, sym_TCons_2))
                                {
                                  e_63 = ATgetArgument(d_63, 0);
                                  f_63 = ATgetArgument(d_63, 1);
                                  f_61 :
                                  if(match_cons(f_63, sym_TCons_2))
                                    {
                                      g_63 = ATgetArgument(f_63, 0);
                                      h_63 = ATgetArgument(f_63, 1);
                                      i_61 :
                                      if(match_cons(h_63, sym_TCons_2))
                                        {
                                          i_63 = ATgetArgument(h_63, 0);
                                          j_63 = ATgetArgument(h_63, 1);
                                          j_61 :
                                          if(match_cons(j_63, sym_TCons_2))
                                            {
                                              k_63 = ATgetArgument(j_63, 0);
                                              l_63 = ATgetArgument(j_63, 1);
                                              k_61 :
                                              if(match_cons(l_63, sym_TNil_0))
                                                {
                                                  ATerm t_63 = NULL;
                                                  ATerm u_63 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_63), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  u_63 = t;
                                                  if(t_63 != NULL && t_63 != u_63)
                                                    _fail(u_63);
                                                  else
                                                    t_63 = u_63;
                                                  t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(m_62), (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue))), not_null(c_63), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_62), not_null(t_63)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(m_62), not_null(g_63)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_62)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(m_62), not_null(k_63)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(a_63))))));
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
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
              if(match_string(o_62, "T"))
                {
                  i_62 :
                  if(match_cons(p_62, sym_TCons_2))
                    {
                      r_62 = ATgetArgument(p_62, 0);
                      s_62 = ATgetArgument(p_62, 1);
                      j_62 :
                      if(match_cons(s_62, sym_TNil_0))
                        {
                          k_62 :
                          if(match_int(r_62, 0))
                            {
                              ATerm m_11 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm w_63 = NULL;
                                  t = new_0(t);
                                  w_63 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(m_62), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_63), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(m_62), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_63)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(m_62), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_63)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Id_0)))));
                                  PopChoice();
                                }
                              else
                                {
                                  t = m_11;
                                  t = i_65(t);
                                }
                            }
                          else
                            t = i_65(t);
                        }
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
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL;
  f_66 = t;
  w_65 :
  if(match_cons(f_66, sym_TCons_2))
    {
      g_66 = ATgetArgument(f_66, 0);
      n_66 = ATgetArgument(f_66, 1);
      x_65 :
      if(match_cons(g_66, sym_TCons_2))
        {
          h_66 = ATgetArgument(g_66, 0);
          k_66 = ATgetArgument(g_66, 1);
          y_65 :
          if(match_cons(h_66, sym_Mod_2))
            {
              i_66 = ATgetArgument(h_66, 0);
              j_66 = ATgetArgument(h_66, 1);
              z_65 :
              if(match_cons(k_66, sym_TCons_2))
                {
                  l_66 = ATgetArgument(k_66, 0);
                  m_66 = ATgetArgument(k_66, 1);
                  a_66 :
                  if(match_cons(m_66, sym_TNil_0))
                    {
                      d_66 :
                      if(match_cons(n_66, sym_TCons_2))
                        {
                          o_66 = ATgetArgument(n_66, 0);
                          p_66 = ATgetArgument(n_66, 1);
                          e_66 :
                          if(match_cons(p_66, sym_TNil_0))
                            {
                              ATerm u_66 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_66), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_66), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_66), (ATerm) ATmakeAppl(sym_TNil_0))));
                              t = DefineCongruence_0(t);
                              t = desugar_0(t);
                              u_66 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_66), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_66), (ATerm) ATmakeAppl(sym_TNil_0)));
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm n_11 = t;
  if(PushChoice()==0)
    {
      t = CongruenceDef_0(t);
      PopChoice();
    }
  else
    {
      t = n_11;
      {
        ATerm o_11 = t;
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
            t = o_11;
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
  ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL;
  l_67 = t;
  z_66 :
  if(match_cons(l_67, sym_TCons_2))
    {
      m_67 = ATgetArgument(l_67, 0);
      p_67 = ATgetArgument(l_67, 1);
      a_67 :
      if(match_cons(m_67, sym_Cons_2))
        {
          n_67 = ATgetArgument(m_67, 0);
          o_67 = ATgetArgument(m_67, 1);
          g_67 :
          if(match_cons(p_67, sym_TCons_2))
            {
              q_67 = ATgetArgument(p_67, 0);
              r_67 = ATgetArgument(p_67, 1);
              h_67 :
              if(match_cons(r_67, sym_TCons_2))
                {
                  s_67 = ATgetArgument(r_67, 0);
                  t_67 = ATgetArgument(r_67, 1);
                  i_67 :
                  if(match_cons(t_67, sym_TCons_2))
                    {
                      u_67 = ATgetArgument(t_67, 0);
                      v_67 = ATgetArgument(t_67, 1);
                      j_67 :
                      if(match_cons(v_67, sym_TCons_2))
                        {
                          w_67 = ATgetArgument(v_67, 0);
                          x_67 = ATgetArgument(v_67, 1);
                          k_67 :
                          if(match_cons(x_67, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_67), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_67), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_67), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_67), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_67), not_null(w_67)), (ATerm) ATmakeAppl(sym_TNil_0))))));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL;
  m_68 = t;
  j_68 :
  if(match_cons(m_68, sym_TCons_2))
    {
      n_68 = ATgetArgument(m_68, 0);
      o_68 = ATgetArgument(m_68, 1);
      k_68 :
      if(match_cons(o_68, sym_TCons_2))
        {
          p_68 = ATgetArgument(o_68, 0);
          q_68 = ATgetArgument(o_68, 1);
          l_68 :
          if(match_cons(q_68, sym_TNil_0))
            {
              t = not_null(n_68);
              {
                ATerm s_3 (ATerm t)
                {
                  t = not_null(p_68);
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
ATerm HdMember_1 (ATerm t, ATerm t_57 (ATerm))
{
  ATerm x_68 = NULL,y_68 = NULL,z_68 = NULL;
  x_68 = t;
  w_68 :
  if(match_cons(x_68, sym_Cons_2))
    {
      y_68 = ATgetArgument(x_68, 0);
      z_68 = ATgetArgument(x_68, 1);
      t = t_57(t);
      {
        ATerm c_4 (ATerm t)
        {
          ATerm c_69 = NULL;
          c_69 = t;
          if(y_68 != NULL && y_68 != c_69)
            _fail(c_69);
          else
            y_68 = c_69;
          return(t);
        }
        t = fetch_1(t, c_4);
        t = not_null(z_68);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL;
  k_69 = t;
  g_69 :
  if(match_cons(k_69, sym_TCons_2))
    {
      l_69 = ATgetArgument(k_69, 0);
      m_69 = ATgetArgument(k_69, 1);
      h_69 :
      if(match_cons(m_69, sym_TCons_2))
        {
          n_69 = ATgetArgument(m_69, 0);
          q_69 = ATgetArgument(m_69, 1);
          i_69 :
          if(match_cons(n_69, sym_Cons_2))
            {
              o_69 = ATgetArgument(n_69, 0);
              p_69 = ATgetArgument(n_69, 1);
              j_69 :
              if(match_cons(q_69, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_69), not_null(l_69)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_69), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL;
  z_69 = t;
  w_69 :
  if(match_cons(z_69, sym_TCons_2))
    {
      a_70 = ATgetArgument(z_69, 0);
      b_70 = ATgetArgument(z_69, 1);
      x_69 :
      if(match_cons(b_70, sym_TCons_2))
        {
          c_70 = ATgetArgument(b_70, 0);
          d_70 = ATgetArgument(b_70, 1);
          y_69 :
          if(match_cons(d_70, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_70), not_null(c_70));
          else
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
  ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL;
  n_70 = t;
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
          if(match_cons(r_70, sym_TCons_2))
            {
              s_70 = ATgetArgument(r_70, 0);
              v_70 = ATgetArgument(r_70, 1);
              l_70 :
              if(match_cons(s_70, sym_Cons_2))
                {
                  t_70 = ATgetArgument(s_70, 0);
                  u_70 = ATgetArgument(s_70, 1);
                  m_70 :
                  if(match_cons(v_70, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(p_70), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_70), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(q_70), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_70), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL;
  h_71 = t;
  c_71 :
  if(match_cons(h_71, sym_TCons_2))
    {
      i_71 = ATgetArgument(h_71, 0);
      j_71 = ATgetArgument(h_71, 1);
      d_71 :
      if(match_cons(i_71, sym_Nil_0))
        {
          e_71 :
          if(match_cons(j_71, sym_TCons_2))
            {
              k_71 = ATgetArgument(j_71, 0);
              l_71 = ATgetArgument(j_71, 1);
              f_71 :
              if(match_cons(k_71, sym_Nil_0))
                {
                  g_71 :
                  if(match_cons(l_71, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm q_59 (ATerm), ATerm r_59 (ATerm), ATerm s_59 (ATerm), ATerm t_59 (ATerm))
{
  ATerm n_71 (ATerm t)
  {
    ATerm p_11 = t;
    if(PushChoice()==0)
      {
        t = q_59(t);
        PopChoice();
      }
    else
      {
        t = p_11;
        t = r_59(t);
        {
          ATerm d_4 (ATerm t)
          {
            t = TCons_2(t, n_71, TNil_0);
            return(t);
          }
          t = TCons_2(t, t_59, d_4);
          t = s_59(t);
        }
      }
    return(t);
  }
  t = n_71(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm v_59 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, v_59);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL;
  e_72 = t;
  a_72 :
  if(match_cons(e_72, sym_Cons_2))
    {
      f_72 = ATgetArgument(e_72, 0);
      k_72 = ATgetArgument(e_72, 1);
      b_72 :
      if(match_cons(f_72, sym_TCons_2))
        {
          g_72 = ATgetArgument(f_72, 0);
          h_72 = ATgetArgument(f_72, 1);
          c_72 :
          if(match_cons(h_72, sym_TCons_2))
            {
              i_72 = ATgetArgument(h_72, 0);
              j_72 = ATgetArgument(h_72, 1);
              d_72 :
              if(match_cons(j_72, sym_TNil_0))
                {
                  ATerm o_72 = NULL,p_72 = NULL,x_72 = NULL,f_73 = NULL;
                  ATerm q_11;
                  q_11 = t;
                  {
                    ATerm q_72 = NULL;
                    ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL;
                    t = not_null(i_72);
                    q_72 = t;
                    t = SSL_explode_term(not_null(q_72));
                    s_72 = t;
                    r_71 :
                    if(match_cons(s_72, sym_TCons_2))
                      {
                        t_72 = ATgetArgument(s_72, 0);
                        u_72 = ATgetArgument(s_72, 1);
                        s_71 :
                        if(match_cons(u_72, sym_TCons_2))
                          {
                            v_72 = ATgetArgument(u_72, 0);
                            w_72 = ATgetArgument(u_72, 1);
                            t_71 :
                            if(match_cons(w_72, sym_TNil_0))
                              {
                                if(o_72 != NULL && o_72 != t_72)
                                  _fail(t_72);
                                else
                                  o_72 = t_72;
                                if(p_72 != NULL && p_72 != v_72)
                                  _fail(v_72);
                                else
                                  p_72 = v_72;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = q_11;
                  {
                    ATerm r_11;
                    r_11 = t;
                    {
                      ATerm y_72 = NULL;
                      ATerm a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL;
                      t = not_null(g_72);
                      y_72 = t;
                      t = SSL_explode_term(not_null(y_72));
                      a_73 = t;
                      w_71 :
                      if(match_cons(a_73, sym_TCons_2))
                        {
                          b_73 = ATgetArgument(a_73, 0);
                          c_73 = ATgetArgument(a_73, 1);
                          x_71 :
                          if(match_cons(c_73, sym_TCons_2))
                            {
                              d_73 = ATgetArgument(c_73, 0);
                              e_73 = ATgetArgument(c_73, 1);
                              y_71 :
                              if(match_cons(e_73, sym_TNil_0))
                                {
                                  if(o_72 != NULL && o_72 != b_73)
                                    _fail(b_73);
                                  else
                                    o_72 = b_73;
                                  if(x_72 != NULL && x_72 != d_73)
                                    _fail(d_73);
                                  else
                                    x_72 = d_73;
                                }
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
                      ATerm g_73 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_72), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      g_73 = t;
                      if(f_73 != NULL && f_73 != g_73)
                        _fail(g_73);
                      else
                        f_73 = g_73;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_72), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL;
  s_73 = t;
  o_73 :
  if(match_cons(s_73, sym_Cons_2))
    {
      t_73 = ATgetArgument(s_73, 0);
      y_73 = ATgetArgument(s_73, 1);
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
              if(match_cons(x_73, sym_TNil_0))
                {
                  ATerm a_74 = NULL;
                  if(u_73 != NULL && u_73 != w_73)
                    _fail(w_73);
                  else
                    u_73 = w_73;
                  if(a_74 != NULL && a_74 != y_73)
                    _fail(y_73);
                  else
                    a_74 = y_73;
                  t = not_null(a_74);
                }
              else
                _fail(t);
            }
          else
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
  ATerm s_11 = t;
  if(PushChoice()==0)
    {
      ATerm e_4 (ATerm t)
      {
        ATerm h_74 = NULL;
        h_74 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_74), (ATerm) ATmakeAppl(sym_TNil_0)));
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
        ATerm t_11 = t;
        if(PushChoice()==0)
          {
            ATerm u_4 (ATerm t)
            {
              ATerm v_4 (ATerm t)
              {
                ATerm u_11 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = u_11;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, v_4, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, u_4);
            PopChoice();
          }
        else
          {
            t = t_11;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, e_4, n_4, o_4);
      PopChoice();
    }
  else
    {
      t = s_11;
      {
        ATerm j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL;
        j_74 = t;
        e_74 :
        if(match_cons(j_74, sym_TCons_2))
          {
            k_74 = ATgetArgument(j_74, 0);
            l_74 = ATgetArgument(j_74, 1);
            f_74 :
            if(match_cons(l_74, sym_TCons_2))
              {
                m_74 = ATgetArgument(l_74, 0);
                n_74 = ATgetArgument(l_74, 1);
                g_74 :
                if(match_cons(n_74, sym_TNil_0))
                  {
                    t = not_null(k_74);
                    {
                      ATerm s_74 (ATerm t)
                      {
                        ATerm v_11 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = v_11;
                            {
                              ATerm w_11 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm w_4 (ATerm t)
                                  {
                                    t = not_null(m_74);
                                    return(t);
                                  }
                                  t = HdMember_1(t, w_4);
                                  t = s_74(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = w_11;
                                  t = Cons_2(t, _id, s_74);
                                }
                            }
                          }
                        return(t);
                      }
                      t = s_74(t);
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
ATerm GnNextChangeGraph_3 (ATerm t, ATerm d_46 (ATerm), ATerm e_46 (ATerm), ATerm f_46 (ATerm))
{
  ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL;
  k_75 = t;
  d_75 :
  if(match_cons(k_75, sym_TCons_2))
    {
      l_75 = ATgetArgument(k_75, 0);
      o_75 = ATgetArgument(k_75, 1);
      e_75 :
      if(match_cons(l_75, sym_Cons_2))
        {
          m_75 = ATgetArgument(l_75, 0);
          n_75 = ATgetArgument(l_75, 1);
          f_75 :
          if(match_cons(o_75, sym_TCons_2))
            {
              p_75 = ATgetArgument(o_75, 0);
              q_75 = ATgetArgument(o_75, 1);
              g_75 :
              if(match_cons(q_75, sym_TCons_2))
                {
                  r_75 = ATgetArgument(q_75, 0);
                  s_75 = ATgetArgument(q_75, 1);
                  h_75 :
                  if(match_cons(s_75, sym_TCons_2))
                    {
                      t_75 = ATgetArgument(s_75, 0);
                      u_75 = ATgetArgument(s_75, 1);
                      i_75 :
                      if(match_cons(u_75, sym_TCons_2))
                        {
                          v_75 = ATgetArgument(u_75, 0);
                          w_75 = ATgetArgument(u_75, 1);
                          j_75 :
                          if(match_cons(w_75, sym_TNil_0))
                            {
                              ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_75), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = d_46(t);
                              d_76 = t;
                              a_75 :
                              if(match_cons(d_76, sym_TCons_2))
                                {
                                  e_76 = ATgetArgument(d_76, 0);
                                  f_76 = ATgetArgument(d_76, 1);
                                  b_75 :
                                  if(match_cons(f_76, sym_TCons_2))
                                    {
                                      g_76 = ATgetArgument(f_76, 0);
                                      h_76 = ATgetArgument(f_76, 1);
                                      c_75 :
                                      if(match_cons(h_76, sym_TNil_0))
                                        {
                                          ATerm k_76 = NULL;
                                          t = not_null(e_76);
                                          {
                                            ATerm m_76 = NULL;
                                            t = e_46(t);
                                            k_76 = t;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_75), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            {
                                              ATerm o_76 = NULL,q_76 = NULL,s_76 = NULL;
                                              t = diff_0(t);
                                              m_76 = t;
                                              {
                                                ATerm x_11;
                                                x_11 = t;
                                                {
                                                  ATerm p_76 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_75), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  p_76 = t;
                                                  if(o_76 != NULL && o_76 != p_76)
                                                    _fail(p_76);
                                                  else
                                                    o_76 = p_76;
                                                }
                                                t = x_11;
                                                {
                                                  ATerm y_11;
                                                  y_11 = t;
                                                  {
                                                    ATerm r_76 = NULL;
                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_75), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                    t = conc_0(t);
                                                    r_76 = t;
                                                    if(q_76 != NULL && q_76 != r_76)
                                                      _fail(r_76);
                                                    else
                                                      q_76 = r_76;
                                                  }
                                                  t = y_11;
                                                  {
                                                    ATerm t_76 = NULL;
                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_75), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                    t = f_46(t);
                                                    t_76 = t;
                                                    if(s_76 != NULL && s_76 != t_76)
                                                      _fail(t_76);
                                                    else
                                                      s_76 = t_76;
                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_75), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
  ATerm j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL;
  j_77 = t;
  c_77 :
  if(match_cons(j_77, sym_TCons_2))
    {
      k_77 = ATgetArgument(j_77, 0);
      l_77 = ATgetArgument(j_77, 1);
      d_77 :
      if(match_cons(k_77, sym_Nil_0))
        {
          e_77 :
          if(match_cons(l_77, sym_TCons_2))
            {
              m_77 = ATgetArgument(l_77, 0);
              n_77 = ATgetArgument(l_77, 1);
              f_77 :
              if(match_cons(n_77, sym_TCons_2))
                {
                  o_77 = ATgetArgument(n_77, 0);
                  p_77 = ATgetArgument(n_77, 1);
                  g_77 :
                  if(match_cons(p_77, sym_TCons_2))
                    {
                      q_77 = ATgetArgument(p_77, 0);
                      r_77 = ATgetArgument(p_77, 1);
                      h_77 :
                      if(match_cons(r_77, sym_TCons_2))
                        {
                          s_77 = ATgetArgument(r_77, 0);
                          t_77 = ATgetArgument(r_77, 1);
                          i_77 :
                          if(match_cons(t_77, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_77), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm e_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL;
  e_78 = t;
  a_78 :
  if(match_cons(e_78, sym_TCons_2))
    {
      f_78 = ATgetArgument(e_78, 0);
      g_78 = ATgetArgument(e_78, 1);
      b_78 :
      if(match_cons(g_78, sym_TCons_2))
        {
          h_78 = ATgetArgument(g_78, 0);
          i_78 = ATgetArgument(g_78, 1);
          c_78 :
          if(match_cons(i_78, sym_TCons_2))
            {
              j_78 = ATgetArgument(i_78, 0);
              k_78 = ATgetArgument(i_78, 1);
              d_78 :
              if(match_cons(k_78, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_78), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))))));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm d_52 (ATerm), ATerm e_52 (ATerm))
{
  ATerm p_78 (ATerm t)
  {
    ATerm z_11 = t;
    if(PushChoice()==0)
      {
        t = d_52(t);
        PopChoice();
      }
    else
      {
        t = z_11;
        t = e_52(t);
        t = p_78(t);
      }
    return(t);
  }
  t = p_78(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm g_52 (ATerm), ATerm h_52 (ATerm), ATerm i_52 (ATerm))
{
  t = g_52(t);
  t = while_not_2(t, h_52, i_52);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm m_46 (ATerm), ATerm n_46 (ATerm), ATerm o_46 (ATerm))
{
  ATerm x_4 (ATerm t)
  {
    ATerm a_12 = t;
    if(PushChoice()==0)
      {
        t = GnNextChangeGraph_3(t, m_46, n_46, o_46);
        PopChoice();
      }
    else
      {
        t = a_12;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, x_4);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm v_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL;
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
            z_78 = ATgetArgument(x_78, 1);
            t_78 :
            if(match_cons(z_78, sym_TCons_2))
              {
                a_79 = ATgetArgument(z_78, 0);
                b_79 = ATgetArgument(z_78, 1);
                u_78 :
                if(match_cons(b_79, sym_TNil_0))
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_78), not_null(a_79));
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, svars_arity_0, y_4);
  t = FilterNonMissingDefs_0(t);
  {
    ATerm b_12 = t;
    if(PushChoice()==0)
      {
        t = NoMissingDefs_0(t);
        PopChoice();
      }
    else
      {
        t = b_12;
        t = MissingDefs_0(t);
        t = (ATerm) ATmakeInt(1);
        t = exit_0(t);
      }
  }
  return(t);
}
ATerm needed_defs_0 (ATerm t)
{
  ATerm g_79 = NULL;
  g_79 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("main", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_79), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = extract_needed_defs_0(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm n_43 (ATerm))
{
  ATerm m_79 = NULL,n_79 = NULL;
  m_79 = t;
  l_79 :
  if(match_cons(m_79, sym_Strategies_1))
    {
      n_79 = ATgetArgument(m_79, 0);
      {
        ATerm p_79 = NULL;
        t = not_null(n_79);
        t = n_43(t);
        p_79 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(p_79));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm s_45 (ATerm), ATerm t_45 (ATerm))
{
  ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL;
  x_79 = t;
  w_79 :
  if(match_cons(x_79, sym_Cons_2))
    {
      y_79 = ATgetArgument(x_79, 0);
      z_79 = ATgetArgument(x_79, 1);
      {
        ATerm c_80 = NULL;
        t = not_null(y_79);
        {
          ATerm e_80 = NULL;
          t = s_45(t);
          c_80 = t;
          t = not_null(z_79);
          t = t_45(t);
          e_80 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_80), not_null(e_80));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm p_43 (ATerm))
{
  ATerm m_80 = NULL,n_80 = NULL;
  m_80 = t;
  l_80 :
  if(match_cons(m_80, sym_Specification_1))
    {
      n_80 = ATgetArgument(m_80, 0);
      {
        ATerm p_80 = NULL;
        t = not_null(n_80);
        t = p_43(t);
        p_80 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(p_80));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm u_80 = NULL;
  u_80 = t;
  t_80 :
  if(!(match_cons(u_80, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm o_45 (ATerm), ATerm p_45 (ATerm))
{
  ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL;
  z_80 = t;
  y_80 :
  if(match_cons(z_80, sym_TCons_2))
    {
      a_81 = ATgetArgument(z_80, 0);
      b_81 = ATgetArgument(z_80, 1);
      {
        ATerm e_81 = NULL;
        t = not_null(a_81);
        {
          ATerm g_81 = NULL;
          t = o_45(t);
          e_81 = t;
          t = not_null(b_81);
          t = p_45(t);
          g_81 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_81), not_null(g_81));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm n_81 = NULL;
  ATerm g_12;
  g_12 = t;
  {
    ATerm z_4 (ATerm t)
    {
      ATerm o_81 = NULL,p_81 = NULL;
      o_81 = t;
      m_81 :
      if(match_cons(o_81, sym_Program_1))
        {
          p_81 = ATgetArgument(o_81, 0);
          if(n_81 != NULL && n_81 != p_81)
            _fail(p_81);
          else
            n_81 = p_81;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, z_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_81), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = g_12;
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
  ATerm w_81 = NULL,x_81 = NULL;
  ATerm d_5 (ATerm t)
  {
    ATerm m_5 (ATerm t)
    {
      ATerm h_12 = t;
      if(PushChoice()==0)
        {
          ATerm t_5 (ATerm t)
          {
            ATerm y_81 = NULL;
            y_81 = t;
            r_81 :
            if(!(match_cons(y_81, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, t_5);
          PopChoice();
          _fail(t);
        }
      else
        t = h_12;
      return(t);
    }
    ATerm n_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, m_5, n_5);
    {
      ATerm u_5 (ATerm t)
      {
        ATerm z_5 (ATerm t)
        {
          ATerm z_81 = NULL,a_82 = NULL;
          z_81 = t;
          t_81 :
          if(match_cons(z_81, sym_Runtime_1))
            {
              a_82 = ATgetArgument(z_81, 0);
              if(x_81 != NULL && x_81 != a_82)
                _fail(a_82);
              else
                x_81 = a_82;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, z_5);
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
            ATerm b_82 = NULL,c_82 = NULL;
            b_82 = t;
            v_81 :
            if(match_cons(b_82, sym_Program_1))
              {
                c_82 = ATgetArgument(b_82, 0);
                if(w_81 != NULL && w_81 != c_82)
                  _fail(c_82);
                else
                  w_81 = c_82;
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
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_81), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_81), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, d_5);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL;
  j_82 = t;
  g_82 :
  if(match_cons(j_82, sym_TCons_2))
    {
      k_82 = ATgetArgument(j_82, 0);
      l_82 = ATgetArgument(j_82, 1);
      h_82 :
      if(match_cons(l_82, sym_TCons_2))
        {
          m_82 = ATgetArgument(l_82, 0);
          n_82 = ATgetArgument(l_82, 1);
          i_82 :
          if(match_cons(n_82, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(k_82), not_null(m_82));
          else
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
  ATerm v_82 = NULL,w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL;
  v_82 = t;
  s_82 :
  if(match_cons(v_82, sym_TCons_2))
    {
      w_82 = ATgetArgument(v_82, 0);
      x_82 = ATgetArgument(v_82, 1);
      t_82 :
      if(match_cons(x_82, sym_TCons_2))
        {
          y_82 = ATgetArgument(x_82, 0);
          z_82 = ATgetArgument(x_82, 1);
          u_82 :
          if(match_cons(z_82, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(w_82), not_null(y_82));
          else
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
  ATerm h_83 = NULL;
  ATerm i_12;
  i_12 = t;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm j_12 = t;
      if(PushChoice()==0)
        {
          ATerm f_6 (ATerm t)
          {
            ATerm i_83 = NULL,j_83 = NULL;
            i_83 = t;
            e_83 :
            if(match_cons(i_83, sym_Output_1))
              {
                j_83 = ATgetArgument(i_83, 0);
                if(h_83 != NULL && h_83 != j_83)
                  _fail(j_83);
                else
                  h_83 = j_83;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, f_6);
          PopChoice();
        }
      else
        {
          t = j_12;
          {
            ATerm k_83 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            k_83 = t;
            if(h_83 != NULL && h_83 != k_83)
              _fail(k_83);
            else
              h_83 = k_83;
          }
        }
      return(t);
    }
    ATerm e_6 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, d_6, e_6);
  }
  t = i_12;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm l_6 (ATerm t)
      {
        ATerm m_6 (ATerm t)
        {
          t = not_null(h_83);
          return(t);
        }
        t = split_2(t, m_6, _id);
        return(t);
      }
      t = TCons_2(t, l_6, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, g_6);
    {
      ATerm k_12 = t;
      if(PushChoice()==0)
        {
          ATerm o_6 (ATerm t)
          {
            ATerm r_6 (ATerm t)
            {
              ATerm l_83 = NULL;
              l_83 = t;
              g_83 :
              if(!(match_cons(l_83, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, r_6);
            return(t);
          }
          ATerm q_6 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, o_6, q_6);
          PopChoice();
        }
      else
        {
          t = k_12;
          {
            ATerm s_6 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, s_6);
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
  ATerm t_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL,y_83 = NULL,z_83 = NULL;
  ATerm l_12;
  l_12 = t;
  t = dtime_0(t);
  t = l_12;
  t = s_49(t);
  {
    ATerm m_12;
    m_12 = t;
    {
      ATerm u_83 = NULL;
      t = dtime_0(t);
      u_83 = t;
      if(t_83 != NULL && t_83 != u_83)
        _fail(u_83);
      else
        t_83 = u_83;
    }
    t = m_12;
    v_83 = t;
    q_83 :
    if(match_cons(v_83, sym_TCons_2))
      {
        w_83 = ATgetArgument(v_83, 0);
        x_83 = ATgetArgument(v_83, 1);
        r_83 :
        if(match_cons(x_83, sym_TCons_2))
          {
            y_83 = ATgetArgument(x_83, 0);
            z_83 = ATgetArgument(x_83, 1);
            s_83 :
            if(match_cons(z_83, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(t_83)), not_null(w_83)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_83), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm f_84 = NULL;
  f_84 = t;
  t = SSL_ReadFromFile(not_null(f_84));
  return(t);
}
ATerm split_2 (ATerm t, ATerm u_62 (ATerm), ATerm v_62 (ATerm))
{
  ATerm l_84 = NULL;
  ATerm n_84 = NULL,q_84 = NULL;
  l_84 = t;
  {
    ATerm n_12;
    n_12 = t;
    {
      ATerm o_84 = NULL;
      t = not_null(l_84);
      t = u_62(t);
      o_84 = t;
      if(n_84 != NULL && n_84 != o_84)
        _fail(o_84);
      else
        n_84 = o_84;
    }
    t = n_12;
    {
      ATerm r_84 = NULL;
      t = not_null(l_84);
      t = v_62(t);
      r_84 = t;
      if(q_84 != NULL && q_84 != r_84)
        _fail(r_84);
      else
        q_84 = r_84;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_84), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_84), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm y_84 = NULL;
  ATerm o_12;
  o_12 = t;
  {
    ATerm p_12 = t;
    if(PushChoice()==0)
      {
        ATerm t_6 (ATerm t)
        {
          ATerm z_84 = NULL,a_85 = NULL;
          z_84 = t;
          w_84 :
          if(match_cons(z_84, sym_Input_1))
            {
              a_85 = ATgetArgument(z_84, 0);
              if(y_84 != NULL && y_84 != a_85)
                _fail(a_85);
              else
                y_84 = a_85;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, t_6);
        PopChoice();
      }
    else
      {
        t = p_12;
        {
          ATerm b_85 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          b_85 = t;
          if(y_84 != NULL && y_84 != b_85)
            _fail(b_85);
          else
            y_84 = b_85;
        }
      }
  }
  t = o_12;
  {
    ATerm u_6 (ATerm t)
    {
      t = not_null(y_84);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, u_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm f_85 = NULL;
  f_85 = t;
  e_85 :
  if(!(match_cons(f_85, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_49 (ATerm))
{
  ATerm v_6 (ATerm t)
  {
    ATerm q_12 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = q_12;
        {
          ATerm r_12 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = r_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, v_6);
  t = r_49(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm h_85 = NULL;
  h_85 = t;
  t = SSL_table_create(not_null(h_85));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm l_85 = NULL;
  l_85 = t;
  {
    ATerm s_12;
    s_12 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_85), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = s_12;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm u_85 = NULL,v_85 = NULL,w_85 = NULL,x_85 = NULL,y_85 = NULL;
  y_85 = t;
  s_85 :
  if(match_cons(y_85, sym_Cons_2))
    {
      u_85 = ATgetArgument(y_85, 0);
      v_85 = ATgetArgument(y_85, 1);
      t_85 :
      if(match_cons(v_85, sym_Cons_2))
        {
          w_85 = ATgetArgument(v_85, 0);
          x_85 = ATgetArgument(v_85, 1);
          {
            ATerm c_86 = NULL;
            t = not_null(u_85);
            t = d_0(t);
            {
              ATerm d_86 = NULL;
              t = not_null(w_85);
              t = e_0(t);
              d_86 = t;
              if(c_86 != NULL && c_86 != d_86)
                _fail(d_86);
              else
                c_86 = d_86;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_86), not_null(x_85));
            }
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(y_85, "register-usage-info"))
        t = register_usage_1(t, f_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm t_12 = t;
  if(PushChoice()==0)
    {
      ATerm w_6 (ATerm t)
      {
        ATerm t_86 = NULL;
        t_86 = t;
        i_86 :
        if(!(match_string(t_86, "-S")))
          {
            if(!(match_string(t_86, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm b_7 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm c_7 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, w_6, b_7, c_7);
      PopChoice();
    }
  else
    {
      t = t_12;
      {
        ATerm u_12 = t;
        if(PushChoice()==0)
          {
            ATerm e_7 (ATerm t)
            {
              ATerm u_86 = NULL;
              u_86 = t;
              j_86 :
              if(!(match_string(u_86, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm g_7 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm h_7 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, e_7, g_7, h_7);
            PopChoice();
          }
        else
          {
            t = u_12;
            {
              ATerm v_12 = t;
              if(PushChoice()==0)
                {
                  ATerm i_7 (ATerm t)
                  {
                    ATerm v_86 = NULL;
                    v_86 = t;
                    k_86 :
                    if(!(match_string(v_86, "-v")))
                      {
                        if(!(match_string(v_86, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm j_7 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm k_7 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, i_7, j_7, k_7);
                  PopChoice();
                }
              else
                {
                  t = v_12;
                  {
                    ATerm e_13 = t;
                    if(PushChoice()==0)
                      {
                        ATerm p_7 (ATerm t)
                        {
                          ATerm w_86 = NULL;
                          w_86 = t;
                          l_86 :
                          if(!(match_string(w_86, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm q_7 (ATerm t)
                        {
                          ATerm x_86 = NULL;
                          x_86 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(x_86));
                          return(t);
                        }
                        ATerm r_7 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, p_7, q_7, r_7);
                        PopChoice();
                      }
                    else
                      {
                        t = e_13;
                        {
                          ATerm f_13 = t;
                          if(PushChoice()==0)
                            {
                              ATerm s_7 (ATerm t)
                              {
                                ATerm z_86 = NULL;
                                z_86 = t;
                                n_86 :
                                if(!(match_string(z_86, "-i")))
                                  {
                                    if(!(match_string(z_86, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm t_7 (ATerm t)
                              {
                                ATerm a_87 = NULL;
                                a_87 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_87));
                                return(t);
                              }
                              ATerm u_7 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, s_7, t_7, u_7);
                              PopChoice();
                            }
                          else
                            {
                              t = f_13;
                              {
                                ATerm g_13 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm v_7 (ATerm t)
                                    {
                                      ATerm c_87 = NULL;
                                      c_87 = t;
                                      p_86 :
                                      if(!(match_string(c_87, "-o")))
                                        {
                                          if(!(match_string(c_87, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm w_7 (ATerm t)
                                    {
                                      ATerm d_87 = NULL;
                                      d_87 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_87));
                                      return(t);
                                    }
                                    ATerm x_7 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, v_7, w_7, x_7);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = g_13;
                                    {
                                      ATerm i_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm y_7 (ATerm t)
                                          {
                                            ATerm g_87 = NULL;
                                            g_87 = t;
                                            r_86 :
                                            if(!(match_string(g_87, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm z_7 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm a_8 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, y_7, z_7, a_8);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = i_13;
                                          {
                                            ATerm b_8 (ATerm t)
                                            {
                                              ATerm h_87 = NULL;
                                              h_87 = t;
                                              s_86 :
                                              if(!(match_string(h_87, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm c_8 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm d_8 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, b_8, c_8, d_8);
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
  ATerm m_87 = NULL;
  m_87 = t;
  t = SSL_table_destroy(not_null(m_87));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_87 = NULL;
  q_87 = t;
  t = SSL_exit(not_null(q_87));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm u_87 = NULL;
  u_87 = t;
  t = SSL_implode_string(not_null(u_87));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm u_61 (ATerm))
{
  ATerm x_87 (ATerm t)
  {
    ATerm j_13 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, x_87);
        PopChoice();
      }
    else
      {
        t = j_13;
        t = Nil_0(t);
        t = u_61(t);
      }
    return(t);
  }
  t = x_87(t);
  return(t);
}
ATerm concat_0 (ATerm t)
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
      {
        ATerm b_88 = NULL,c_88 = NULL,d_88 = NULL;
        b_88 = t;
        a_88 :
        if(match_cons(b_88, sym_Cons_2))
          {
            c_88 = ATgetArgument(b_88, 0);
            d_88 = ATgetArgument(b_88, 1);
            t = not_null(c_88);
            {
              ATerm e_8 (ATerm t)
              {
                t = not_null(d_88);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, e_8);
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
  ATerm j_88 = NULL;
  j_88 = t;
  t = SSL_explode_string(not_null(j_88));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm y_47 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm g_61 (ATerm))
{
  ATerm m_88 (ATerm t)
  {
    ATerm l_13 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = l_13;
        t = Cons_2(t, g_61, m_88);
      }
    return(t);
  }
  t = m_88(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm s_88 = NULL,t_88 = NULL,u_88 = NULL,w_88 = NULL,x_88 = NULL;
  s_88 = t;
  o_88 :
  if(match_cons(s_88, sym_TCons_2))
    {
      t_88 = ATgetArgument(s_88, 0);
      u_88 = ATgetArgument(s_88, 1);
      p_88 :
      if(match_cons(t_88, sym_Nil_0))
        {
          q_88 :
          if(match_cons(u_88, sym_TCons_2))
            {
              w_88 = ATgetArgument(u_88, 0);
              x_88 = ATgetArgument(u_88, 1);
              r_88 :
              if(match_cons(x_88, sym_TNil_0))
                t = not_null(w_88);
              else
                _fail(t);
            }
          else
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
  ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL,i_89 = NULL,j_89 = NULL,k_89 = NULL,l_89 = NULL;
  f_89 = t;
  b_89 :
  if(match_cons(f_89, sym_TCons_2))
    {
      g_89 = ATgetArgument(f_89, 0);
      j_89 = ATgetArgument(f_89, 1);
      c_89 :
      if(match_cons(g_89, sym_Cons_2))
        {
          h_89 = ATgetArgument(g_89, 0);
          i_89 = ATgetArgument(g_89, 1);
          d_89 :
          if(match_cons(j_89, sym_TCons_2))
            {
              k_89 = ATgetArgument(j_89, 0);
              l_89 = ATgetArgument(j_89, 1);
              e_89 :
              if(match_cons(l_89, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_89), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_89), not_null(k_89)), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm m_51 (ATerm), ATerm n_51 (ATerm))
{
  ATerm q_89 (ATerm t)
  {
    ATerm m_13 = t;
    if(PushChoice()==0)
      {
        t = m_51(t);
        t = q_89(t);
        PopChoice();
      }
    else
      {
        t = m_13;
        t = n_51(t);
      }
    return(t);
  }
  t = q_89(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm p_51 (ATerm))
{
  t = repeat_2(t, p_51, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm s_89 = NULL;
  s_89 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_89), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm x_47 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm v_40 (ATerm))
{
  ATerm y_89 = NULL,z_89 = NULL;
  y_89 = t;
  x_89 :
  if(match_cons(y_89, sym_Program_1))
    {
      z_89 = ATgetArgument(y_89, 0);
      {
        ATerm b_90 = NULL;
        t = not_null(z_89);
        t = v_40(t);
        b_90 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_90));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm j_90 = NULL;
  ATerm f_8 (ATerm t)
  {
    ATerm g_8 (ATerm t)
    {
      ATerm k_90 = NULL;
      k_90 = t;
      if(j_90 != NULL && j_90 != k_90)
        _fail(k_90);
      else
        j_90 = k_90;
      return(t);
    }
    t = Program_1(t, g_8);
    return(t);
  }
  t = option_defined_1(t, f_8);
  {
    ATerm h_8 (ATerm t)
    {
      ATerm l_90 = NULL;
      ATerm m_90 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm i_8 (ATerm t)
        {
          t = not_null(j_90);
          return(t);
        }
        t = short_description_1(t, i_8);
        t = concat_strings_0(t);
        m_90 = t;
        if(l_90 != NULL && l_90 != m_90)
          _fail(m_90);
        else
          l_90 = m_90;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_90), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, h_8);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm j_8 (ATerm t)
      {
        ATerm n_90 = NULL;
        n_90 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_90), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, j_8);
      {
        ATerm k_8 (ATerm t)
        {
          ATerm p_90 = NULL;
          ATerm q_90 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm l_8 (ATerm t)
            {
              t = not_null(j_90);
              return(t);
            }
            t = long_description_1(t, l_8);
            t = concat_strings_0(t);
            q_90 = t;
            if(p_90 != NULL && p_90 != q_90)
              _fail(q_90);
            else
              p_90 = q_90;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_90), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, k_8);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL;
  b_91 = t;
  y_90 :
  if(match_cons(b_91, sym_TCons_2))
    {
      c_91 = ATgetArgument(b_91, 0);
      d_91 = ATgetArgument(b_91, 1);
      z_90 :
      if(match_cons(d_91, sym_TCons_2))
        {
          e_91 = ATgetArgument(d_91, 0);
          f_91 = ATgetArgument(d_91, 1);
          a_91 :
          if(match_cons(f_91, sym_TNil_0))
            {
              ATerm n_13;
              n_13 = t;
              t = SSL_printnl(not_null(c_91), not_null(e_91));
              t = n_13;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm w_40 (ATerm))
{
  ATerm m_91 = NULL,n_91 = NULL;
  m_91 = t;
  l_91 :
  if(match_cons(m_91, sym_Undefined_1))
    {
      n_91 = ATgetArgument(m_91, 0);
      {
        ATerm p_91 = NULL;
        t = not_null(n_91);
        t = w_40(t);
        p_91 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_91));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm o_61 (ATerm))
{
  ATerm t_91 (ATerm t)
  {
    ATerm o_13 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, o_61, _id);
        PopChoice();
      }
    else
      {
        t = o_13;
        t = Cons_2(t, _id, t_91);
      }
    return(t);
  }
  t = t_91(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_48 (ATerm))
{
  t = fetch_1(t, w_48);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm v_91 = NULL;
  v_91 = t;
  u_91 :
  if(!(match_cons(v_91, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm m_63 (ATerm))
{
  ATerm p_13 = t;
  if(PushChoice()==0)
    {
      t = m_63(t);
      PopChoice();
    }
  else
    t = p_13;
  return(t);
}
ATerm table_get_0 (ATerm t)
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
            t = SSL_table_get(not_null(b_92), not_null(d_92));
          else
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
  ATerm o_92 = NULL,p_92 = NULL,q_92 = NULL,r_92 = NULL,s_92 = NULL,t_92 = NULL,u_92 = NULL;
  o_92 = t;
  k_92 :
  if(match_cons(o_92, sym_TCons_2))
    {
      p_92 = ATgetArgument(o_92, 0);
      q_92 = ATgetArgument(o_92, 1);
      l_92 :
      if(match_cons(q_92, sym_TCons_2))
        {
          r_92 = ATgetArgument(q_92, 0);
          s_92 = ATgetArgument(q_92, 1);
          m_92 :
          if(match_cons(s_92, sym_TCons_2))
            {
              t_92 = ATgetArgument(s_92, 0);
              u_92 = ATgetArgument(s_92, 1);
              n_92 :
              if(match_cons(u_92, sym_TNil_0))
                {
                  ATerm q_13;
                  q_13 = t;
                  {
                    ATerm y_92 = NULL;
                    ATerm z_92 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_92), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_92), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm r_13 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = r_13;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      z_92 = t;
                      if(y_92 != NULL && y_92 != z_92)
                        _fail(z_92);
                      else
                        y_92 = z_92;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_92), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_92), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_92), not_null(y_92)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = q_13;
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm c_48 (ATerm))
{
  ATerm d_93 = NULL;
  ATerm e_93 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = c_48(t);
  e_93 = t;
  if(d_93 != NULL && d_93 != e_93)
    _fail(e_93);
  else
    d_93 = e_93;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_93), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm k_93 = NULL,l_93 = NULL,m_93 = NULL;
  m_93 = t;
  j_93 :
  if(match_cons(m_93, sym_Cons_2))
    {
      k_93 = ATgetArgument(m_93, 0);
      l_93 = ATgetArgument(m_93, 1);
      {
        ATerm p_93 = NULL;
        t = not_null(k_93);
        t = a_0(t);
        {
          ATerm q_93 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = b_0(t);
          q_93 = t;
          if(p_93 != NULL && p_93 != q_93)
            _fail(q_93);
          else
            p_93 = q_93;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_93), not_null(l_93));
        }
      }
    }
  else
    {
      if(match_string(m_93, "register-usage-info"))
        t = register_usage_1(t, c_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm m_8 (ATerm t)
  {
    ATerm v_93 = NULL;
    v_93 = t;
    u_93 :
    if(!(match_string(v_93, "--help")))
      {
        if(!(match_string(v_93, "-h")))
          {
            if(!(match_string(v_93, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm n_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm o_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, m_8, n_8, o_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm y_93 = NULL,z_93 = NULL,a_94 = NULL;
  y_93 = t;
  x_93 :
  if(match_cons(y_93, sym_Cons_2))
    {
      z_93 = ATgetArgument(y_93, 0);
      a_94 = ATgetArgument(y_93, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(z_93)), not_null(a_94));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm a_48 (ATerm))
{
  ATerm w_13;
  w_13 = t;
  {
    ATerm p_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = a_48(t);
      return(t);
    }
    t = try_1(t, p_8);
  }
  t = w_13;
  {
    ATerm q_8 (ATerm t)
    {
      ATerm f_94 = NULL;
      f_94 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_94));
      return(t);
    }
    ATerm r_8 (ATerm t)
    {
      ATerm z_13 = t;
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
              t = a_48(t);
              t = Cons_2(t, _id, r_8);
            }
          PopChoice();
        }
      else
        {
          t = z_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, q_8, r_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm o_94 = NULL,p_94 = NULL,q_94 = NULL;
  ATerm c_14;
  c_14 = t;
  {
    ATerm r_94 = NULL,s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL;
    r_94 = t;
    k_94 :
    if(match_cons(r_94, sym_TCons_2))
      {
        s_94 = ATgetArgument(r_94, 0);
        t_94 = ATgetArgument(r_94, 1);
        l_94 :
        if(match_cons(t_94, sym_TCons_2))
          {
            u_94 = ATgetArgument(t_94, 0);
            v_94 = ATgetArgument(t_94, 1);
            m_94 :
            if(match_cons(v_94, sym_TCons_2))
              {
                w_94 = ATgetArgument(v_94, 0);
                x_94 = ATgetArgument(v_94, 1);
                n_94 :
                if(match_cons(x_94, sym_TNil_0))
                  {
                    if(o_94 != NULL && o_94 != s_94)
                      _fail(s_94);
                    else
                      o_94 = s_94;
                    if(p_94 != NULL && p_94 != u_94)
                      _fail(u_94);
                    else
                      p_94 = u_94;
                    if(q_94 != NULL && q_94 != w_94)
                      _fail(w_94);
                    else
                      q_94 = w_94;
                    t = SSL_table_put(not_null(o_94), not_null(p_94), not_null(q_94));
                  }
                else
                  _fail(t);
              }
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
ATerm parse_options_1 (ATerm t, ATerm z_47 (ATerm))
{
  ATerm a_95 = NULL;
  ATerm d_14;
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = d_14;
  {
    ATerm s_8 (ATerm t)
    {
      ATerm i_14 = t;
      if(PushChoice()==0)
        {
          t = z_47(t);
          PopChoice();
        }
      else
        {
          t = i_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_8);
    {
      ATerm t_8 (ATerm t)
      {
        ATerm j_14 = t;
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
            t = j_14;
            {
              ATerm u_8 (ATerm t)
              {
                ATerm v_8 (ATerm t)
                {
                  ATerm b_95 = NULL;
                  b_95 = t;
                  if(a_95 != NULL && a_95 != b_95)
                    _fail(b_95);
                  else
                    a_95 = b_95;
                  return(t);
                }
                t = Undefined_1(t, v_8);
                return(t);
              }
              t = option_defined_1(t, u_8);
              {
                ATerm k_14;
                k_14 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_95), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = k_14;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, t_8);
      {
        ATerm l_14;
        l_14 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = l_14;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm g_49 (ATerm), ATerm h_49 (ATerm), ATerm i_49 (ATerm))
{
  ATerm w_8 (ATerm t)
  {
    ATerm m_14 = t;
    if(PushChoice()==0)
      {
        t = h_49(t);
        PopChoice();
      }
    else
      {
        t = m_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, w_8);
  t = store_options_0(t);
  {
    ATerm r_14 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, i_49);
        PopChoice();
      }
    else
      {
        t = r_14;
        {
          ATerm s_14 = t;
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
              t = s_14;
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
  ATerm x_8 (ATerm t)
  {
    ATerm y_8 (ATerm t)
    {
      t = TCons_2(t, y_48, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, y_8);
    return(t);
  }
  t = iowrap_2(t, x_8, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm z_8 (ATerm t)
  {
    ATerm a_9 (ATerm t)
    {
      ATerm b_9 (ATerm t)
      {
        ATerm c_9 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, c_9, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, b_9);
      return(t);
    }
    t = Specification_1(t, a_9);
    return(t);
  }
  t = iowrap_1(t, z_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_0(t);
  return(t);
}
