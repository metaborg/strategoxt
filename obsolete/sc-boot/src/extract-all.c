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
Symbol sym_Operations_1;
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
  sym_Operations_1 = ATmakeSymbol("Operations", 1, ATfalse);
  ATprotectSymbol(sym_Operations_1);
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
ATerm filter_1 (ATerm, ATerm n_55 (ATerm));
ATerm FilterNonMissingDefs_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm c_42 (ATerm), ATerm d_42 (ATerm));
ATerm Let_2 (ATerm, ATerm e_42 (ATerm), ATerm f_42 (ATerm));
ATerm sboundin_3 (ATerm, ATerm x_62 (ATerm), ATerm y_62 (ATerm), ATerm z_62 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm z_49 (ATerm), ATerm a_50 (ATerm), ATerm b_50 (ATerm));
ATerm collect_kids_1 (ATerm, ATerm h_50 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm q_49 (ATerm), ATerm r_49 (ATerm));
ATerm diff_p__1 (ATerm, ATerm u_49 (ATerm));
ATerm diff_1 (ATerm, ATerm w_49 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm x_53 (ATerm), ATerm y_53 (ATerm), ATerm z_53 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm a_54 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm FoldR_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm l_48 (ATerm), ATerm m_48 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm a_62 (ATerm), ATerm b_62 (ATerm));
ATerm alltd_1 (ATerm, ATerm a_61 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm c_62 (ATerm), ATerm d_62 (ATerm));
ATerm substitute_1 (ATerm, ATerm e_62 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm NonOverloadedDef_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm g_42 (ATerm), ATerm h_42 (ATerm), ATerm i_42 (ATerm));
ATerm partition_1 (ATerm, ATerm w_55 (ATerm));
ATerm OverloadedDef_0 (ATerm);
ATerm Expl_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm g_51 (ATerm), ATerm h_51 (ATerm));
ATerm repeat_1 (ATerm, ATerm j_51 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm d_40 (ATerm), ATerm e_40 (ATerm));
ATerm Con_3 (ATerm, ATerm a_40 (ATerm), ATerm b_40 (ATerm), ATerm c_40 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm g_43 (ATerm), ATerm h_43 (ATerm));
ATerm oncetd_1 (ATerm, ATerm p_60 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm z_58 (ATerm));
ATerm desugar_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm map_1 (ATerm, ATerm v_63 (ATerm));
ATerm Ttl_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm p_57 (ATerm));
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm o_56 (ATerm));
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm new_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm g_49 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm k_64 (ATerm));
ATerm conc_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm g_56 (ATerm), ATerm h_56 (ATerm), ATerm i_56 (ATerm), ATerm j_56 (ATerm));
ATerm zip_1 (ATerm, ATerm l_56 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm u_43 (ATerm), ATerm v_43 (ATerm), ATerm w_43 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm x_51 (ATerm), ATerm y_51 (ATerm));
ATerm for_3 (ATerm, ATerm a_52 (ATerm), ATerm b_52 (ATerm), ATerm c_52 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm d_44 (ATerm), ATerm e_44 (ATerm), ATerm f_44 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm add_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm length_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm p_49 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm o_48 (ATerm), ATerm p_48 (ATerm), ATerm q_48 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm k_41 (ATerm));
ATerm Cons_2 (ATerm, ATerm p_43 (ATerm), ATerm q_43 (ATerm));
ATerm Specification_1 (ATerm, ATerm m_41 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm l_43 (ATerm), ATerm m_43 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm o_58 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm t_46 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm w_57 (ATerm), ATerm x_57 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm u_38 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm e_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm x_45 (ATerm));
ATerm need_help_1 (ATerm, ATerm s_46 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm q_45 (ATerm), ATerm r_45 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm s_45 (ATerm), ATerm t_45 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_45 (ATerm));
ATerm iowrap_3 (ATerm, ATerm h_46 (ATerm), ATerm i_46 (ATerm), ATerm j_46 (ATerm));
ATerm iowrap_2 (ATerm, ATerm c_46 (ATerm), ATerm d_46 (ATerm));
ATerm iowrap_1 (ATerm, ATerm z_45 (ATerm));
ATerm extract_all_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm d_0 = NULL;
  d_0 = t;
  c_0 :
  if(!(match_cons(d_0, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm MissingDef_0 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL;
  w_1 = t;
  t_1 :
  if(match_cons(w_1, sym_TCons_2))
    {
      x_1 = ATgetArgument(w_1, 0);
      y_1 = ATgetArgument(w_1, 1);
      u_1 :
      if(match_cons(y_1, sym_TCons_2))
        {
          z_1 = ATgetArgument(y_1, 0);
          a_2 = ATgetArgument(y_1, 1);
          v_1 :
          if(match_cons(a_2, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_1), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("/", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_1), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
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
  ATerm f_8;
  f_8 = t;
  {
    ATerm a_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, a_0, _id);
    t = printnl_0(t);
  }
  t = f_8;
  return(t);
}
ATerm MissingDefMod_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL;
  j_2 = t;
  f_2 :
  if(match_cons(j_2, sym_TCons_2))
    {
      k_2 = ATgetArgument(j_2, 0);
      n_2 = ATgetArgument(j_2, 1);
      g_2 :
      if(match_cons(k_2, sym_Mod_2))
        {
          l_2 = ATgetArgument(k_2, 0);
          m_2 = ATgetArgument(k_2, 1);
          h_2 :
          if(match_cons(n_2, sym_TCons_2))
            {
              o_2 = ATgetArgument(n_2, 0);
              p_2 = ATgetArgument(n_2, 1);
              i_2 :
              if(match_cons(p_2, sym_TNil_0))
                {
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_2), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("^", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_2), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("/", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_2), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))))));
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
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
  z_2 = t;
  v_2 :
  if(match_cons(z_2, sym_TCons_2))
    {
      a_3 = ATgetArgument(z_2, 0);
      b_3 = ATgetArgument(z_2, 1);
      w_2 :
      if(match_cons(b_3, sym_TCons_2))
        {
          c_3 = ATgetArgument(b_3, 0);
          f_3 = ATgetArgument(b_3, 1);
          x_2 :
          if(match_cons(c_3, sym_Cons_2))
            {
              d_3 = ATgetArgument(c_3, 0);
              e_3 = ATgetArgument(c_3, 1);
              y_2 :
              if(match_cons(f_3, sym_TNil_0))
                {
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_3), not_null(e_3));
                  {
                    ATerm b_0 (ATerm t)
                    {
                      ATerm g_8 = t;
                      if(PushChoice()==0)
                        {
                          t = MissingDefMod_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = g_8;
                          t = MissingDef_0(t);
                        }
                      return(t);
                    }
                    t = map_1(t, b_0);
                  }
                  t = not_null(a_3);
                }
              else
                _fail(t);
            }
          else
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
  ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
  p_3 = t;
  l_3 :
  if(match_cons(p_3, sym_TCons_2))
    {
      q_3 = ATgetArgument(p_3, 0);
      r_3 = ATgetArgument(p_3, 1);
      m_3 :
      if(match_cons(r_3, sym_TCons_2))
        {
          s_3 = ATgetArgument(r_3, 0);
          t_3 = ATgetArgument(r_3, 1);
          n_3 :
          if(match_cons(s_3, sym_Nil_0))
            {
              o_3 :
              if(match_cons(t_3, sym_TNil_0))
                t = not_null(q_3);
              else
                _fail(t);
            }
          else
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
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
  a_4 = t;
  x_3 :
  if(match_cons(a_4, sym_TCons_2))
    {
      b_4 = ATgetArgument(a_4, 0);
      c_4 = ATgetArgument(a_4, 1);
      y_3 :
      if(match_cons(c_4, sym_TCons_2))
        {
          d_4 = ATgetArgument(c_4, 0);
          e_4 = ATgetArgument(c_4, 1);
          z_3 :
          if(match_cons(e_4, sym_TNil_0))
            {
              if(b_4 != NULL && b_4 != d_4)
                _fail(d_4);
              else
                b_4 = d_4;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm n_55 (ATerm))
{
  ATerm h_4 (ATerm t)
  {
    ATerm h_8 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = h_8;
        {
          ATerm m_8 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, n_55, h_4);
              PopChoice();
            }
          else
            {
              t = m_8;
              t = Tl_0(t);
              t = h_4(t);
            }
        }
      }
    return(t);
  }
  t = h_4(t);
  return(t);
}
ATerm FilterNonMissingDefs_0 (ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL;
  t_4 = t;
  q_4 :
  if(match_cons(t_4, sym_TCons_2))
    {
      u_4 = ATgetArgument(t_4, 0);
      v_4 = ATgetArgument(t_4, 1);
      r_4 :
      if(match_cons(v_4, sym_TCons_2))
        {
          w_4 = ATgetArgument(v_4, 0);
          x_4 = ATgetArgument(v_4, 1);
          s_4 :
          if(match_cons(x_4, sym_TNil_0))
            {
              ATerm a_5 = NULL;
              ATerm h_6 = NULL;
              t = not_null(w_4);
              {
                ATerm e_0 (ATerm t)
                {
                  ATerm n_8 = t;
                  if(PushChoice()==0)
                    {
                      ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL;
                      e_5 = t;
                      m_4 :
                      if(match_cons(e_5, sym_TCons_2))
                        {
                          f_5 = ATgetArgument(e_5, 0);
                          g_5 = ATgetArgument(e_5, 1);
                          n_4 :
                          if(match_cons(g_5, sym_TCons_2))
                            {
                              h_5 = ATgetArgument(g_5, 0);
                              i_5 = ATgetArgument(g_5, 1);
                              o_4 :
                              if(match_cons(i_5, sym_TNil_0))
                                {
                                  t = not_null(u_4);
                                  {
                                    ATerm f_0 (ATerm t)
                                    {
                                      ATerm g_0 (ATerm t)
                                      {
                                        ATerm l_5 = NULL;
                                        l_5 = t;
                                        if(f_5 != NULL && f_5 != l_5)
                                          _fail(l_5);
                                        else
                                          f_5 = l_5;
                                        return(t);
                                      }
                                      ATerm h_0 (ATerm t)
                                      {
                                        ATerm o_8 = t;
                                        if(PushChoice()==0)
                                          {
                                            ATerm m_5 = NULL;
                                            t = length_0(t);
                                            m_5 = t;
                                            if(h_5 != NULL && h_5 != m_5)
                                              _fail(m_5);
                                            else
                                              h_5 = m_5;
                                            PopChoice();
                                          }
                                        else
                                          {
                                            t = o_8;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_5), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = eq_0(t);
                                          }
                                        return(t);
                                      }
                                      t = SDef_3(t, g_0, h_0, _id);
                                      return(t);
                                    }
                                    t = fetch_1(t, f_0);
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
                    t = n_8;
                  return(t);
                }
                t = filter_1(t, e_0);
                h_6 = t;
                if(a_5 != NULL && a_5 != h_6)
                  _fail(h_6);
                else
                  a_5 = h_6;
              }
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_4), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_5), (ATerm) ATmakeAppl(sym_TNil_0)));
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm c_42 (ATerm), ATerm d_42 (ATerm))
{
  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
  b_7 = t;
  a_7 :
  if(match_cons(b_7, sym_Rec_2))
    {
      c_7 = ATgetArgument(b_7, 0);
      d_7 = ATgetArgument(b_7, 1);
      {
        ATerm g_7 = NULL;
        t = not_null(c_7);
        {
          ATerm i_7 = NULL;
          t = c_42(t);
          g_7 = t;
          t = not_null(d_7);
          t = d_42(t);
          i_7 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(g_7), not_null(i_7));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm e_42 (ATerm), ATerm f_42 (ATerm))
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
  v_7 = t;
  r_7 :
  if(match_cons(v_7, sym_Let_2))
    {
      w_7 = ATgetArgument(v_7, 0);
      x_7 = ATgetArgument(v_7, 1);
      {
        ATerm a_8 = NULL;
        t = not_null(w_7);
        {
          ATerm c_8 = NULL;
          t = e_42(t);
          a_8 = t;
          t = not_null(x_7);
          t = f_42(t);
          c_8 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(a_8), not_null(c_8));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm x_62 (ATerm), ATerm y_62 (ATerm), ATerm z_62 (ATerm))
{
  ATerm p_8 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, x_62, x_62);
      PopChoice();
    }
  else
    {
      t = p_8;
      {
        ATerm q_8 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, z_62, z_62, x_62);
            PopChoice();
          }
        else
          {
            t = q_8;
            t = Rec_2(t, z_62, x_62);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
  j_8 = t;
  i_8 :
  if(match_cons(j_8, sym_Rec_2))
    {
      k_8 = ATgetArgument(j_8, 0);
      l_8 = ATgetArgument(j_8, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_8), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL;
  t_8 = t;
  s_8 :
  if(match_cons(t_8, sym_SDef_3))
    {
      u_8 = ATgetArgument(t_8, 0);
      v_8 = ATgetArgument(t_8, 1);
      w_8 = ATgetArgument(t_8, 2);
      t = not_null(v_8);
      {
        ATerm i_0 (ATerm t)
        {
          ATerm a_9 = NULL,c_9 = NULL,d_9 = NULL;
          a_9 = t;
          r_8 :
          if(match_cons(a_9, sym_VarDec_2))
            {
              c_9 = ATgetArgument(a_9, 0);
              d_9 = ATgetArgument(a_9, 1);
              t = not_null(c_9);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, i_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL;
  l_9 = t;
  k_9 :
  if(match_cons(l_9, sym_Let_2))
    {
      m_9 = ATgetArgument(l_9, 0);
      n_9 = ATgetArgument(l_9, 1);
      t = not_null(m_9);
      {
        ATerm j_0 (ATerm t)
        {
          ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL;
          q_9 = t;
          j_9 :
          if(match_cons(q_9, sym_SDef_3))
            {
              r_9 = ATgetArgument(q_9, 0);
              s_9 = ATgetArgument(q_9, 1);
              t_9 = ATgetArgument(q_9, 2);
              t = not_null(r_9);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, j_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm z_49 (ATerm), ATerm a_50 (ATerm), ATerm b_50 (ATerm))
{
  ATerm b_11 = NULL;
  ATerm d_11 = NULL;
  b_11 = t;
  {
    ATerm e_11 = NULL;
    ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,l_11 = NULL,m_11 = NULL;
    t = not_null(b_11);
    e_11 = t;
    t = SSL_explode_term(not_null(e_11));
    g_11 = t;
    y_10 :
    if(match_cons(g_11, sym_TCons_2))
      {
        h_11 = ATgetArgument(g_11, 0);
        i_11 = ATgetArgument(g_11, 1);
        z_10 :
        if(match_cons(i_11, sym_TCons_2))
          {
            l_11 = ATgetArgument(i_11, 0);
            m_11 = ATgetArgument(i_11, 1);
            a_11 :
            if(match_cons(m_11, sym_TNil_0))
              {
                if(d_11 != NULL && d_11 != l_11)
                  _fail(l_11);
                else
                  d_11 = l_11;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(d_11);
    t = foldr_3(t, z_49, a_50, b_50);
  }
  return(t);
}
ATerm collect_kids_1 (ATerm t, ATerm h_50 (ATerm))
{
  ATerm k_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = crush_3(t, k_0, union_0, h_50);
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm q_49 (ATerm), ATerm r_49 (ATerm))
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
  y_11 = t;
  x_11 :
  if(match_cons(y_11, sym_Cons_2))
    {
      z_11 = ATgetArgument(y_11, 0);
      a_12 = ATgetArgument(y_11, 1);
      t = r_49(t);
      {
        ATerm l_0 (ATerm t)
        {
          ATerm d_12 = NULL;
          d_12 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_11), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_12), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = q_49(t);
          return(t);
        }
        t = fetch_1(t, l_0);
      }
      t = not_null(a_12);
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_p__1 (ATerm t, ATerm u_49 (ATerm))
{
  ATerm l_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
  l_12 = t;
  i_12 :
  if(match_cons(l_12, sym_TCons_2))
    {
      o_12 = ATgetArgument(l_12, 0);
      p_12 = ATgetArgument(l_12, 1);
      j_12 :
      if(match_cons(p_12, sym_TCons_2))
        {
          q_12 = ATgetArgument(p_12, 0);
          r_12 = ATgetArgument(p_12, 1);
          k_12 :
          if(match_cons(r_12, sym_TNil_0))
            {
              t = not_null(o_12);
              {
                ATerm x_12 (ATerm t)
                {
                  ATerm x_8 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = x_8;
                      {
                        ATerm y_8 = t;
                        if(PushChoice()==0)
                          {
                            ATerm m_0 (ATerm t)
                            {
                              t = not_null(q_12);
                              return(t);
                            }
                            t = HdMember_p__2(t, u_49, m_0);
                            t = x_12(t);
                            PopChoice();
                          }
                        else
                          {
                            t = y_8;
                            t = Cons_2(t, _id, x_12);
                          }
                      }
                    }
                  return(t);
                }
                t = x_12(t);
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
ATerm diff_1 (ATerm t, ATerm w_49 (ATerm))
{
  t = diff_p__1(t, w_49);
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm x_53 (ATerm), ATerm y_53 (ATerm), ATerm z_53 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm a_54 (ATerm))
{
  ATerm b_13 (ATerm t)
  {
    ATerm n_0 (ATerm t)
    {
      ATerm z_8 = t;
      if(PushChoice()==0)
        {
          t = x_53(t);
          PopChoice();
        }
      else
        {
          t = z_8;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      return(t);
    }
    ATerm o_0 (ATerm t)
    {
      ATerm b_9 = t;
      if(PushChoice()==0)
        {
          ATerm z_12 = NULL;
          ATerm e_9;
          e_9 = t;
          {
            ATerm a_13 = NULL;
            t = y_53(t);
            a_13 = t;
            if(z_12 != NULL && z_12 != a_13)
              _fail(a_13);
            else
              z_12 = a_13;
          }
          t = e_9;
          {
            ATerm p_0 (ATerm t)
            {
              ATerm r_0 (ATerm t)
              {
                t = not_null(z_12);
                return(t);
              }
              t = split_2(t, b_13, r_0);
              t = diff_1(t, a_54);
              return(t);
            }
            ATerm q_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = z_53(t, p_0, b_13, q_0);
            t = collect_kids_1(t, _id);
          }
          PopChoice();
        }
      else
        {
          t = b_9;
          t = collect_kids_1(t, b_13);
        }
      return(t);
    }
    t = split_2(t, n_0, o_0);
    t = union_0(t);
    return(t);
  }
  t = b_13(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm q_13 = NULL,r_13 = NULL,t_13 = NULL,u_13 = NULL;
    q_13 = t;
    f_13 :
    if(match_cons(q_13, sym_Call_2))
      {
        r_13 = ATgetArgument(q_13, 0);
        u_13 = ATgetArgument(q_13, 1);
        g_13 :
        if(match_cons(r_13, sym_SVar_1))
          {
            t_13 = ATgetArgument(r_13, 0);
            {
              ATerm x_13 = NULL;
              t = not_null(u_13);
              t = length_0(t);
              x_13 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(t_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_13), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0));
            }
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm f_9 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = f_9;
        {
          ATerm g_9 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = g_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm u_0 (ATerm t)
  {
    ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
    z_13 = t;
    i_13 :
    if(match_cons(z_13, sym_TCons_2))
      {
        a_14 = ATgetArgument(z_13, 0);
        f_14 = ATgetArgument(z_13, 1);
        j_13 :
        if(match_cons(a_14, sym_TCons_2))
          {
            b_14 = ATgetArgument(a_14, 0);
            c_14 = ATgetArgument(a_14, 1);
            k_13 :
            if(match_cons(c_14, sym_TCons_2))
              {
                d_14 = ATgetArgument(c_14, 0);
                e_14 = ATgetArgument(c_14, 1);
                l_13 :
                if(match_cons(e_14, sym_TNil_0))
                  {
                    o_13 :
                    if(match_cons(f_14, sym_TCons_2))
                      {
                        g_14 = ATgetArgument(f_14, 0);
                        h_14 = ATgetArgument(f_14, 1);
                        p_13 :
                        if(match_cons(h_14, sym_TNil_0))
                          {
                            if(b_14 != NULL && b_14 != g_14)
                              _fail(g_14);
                            else
                              b_14 = g_14;
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = free_vars2_4(t, s_0, t_0, sboundin_3, u_0);
  return(t);
}
ATerm FoldR_0 (ATerm t)
{
  ATerm q_14 = NULL,t_14 = NULL,u_14 = NULL;
  q_14 = t;
  p_14 :
  if(match_cons(q_14, sym_Cons_2))
    {
      t_14 = ATgetArgument(q_14, 0);
      u_14 = ATgetArgument(q_14, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_14), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm l_48 (ATerm), ATerm m_48 (ATerm))
{
  ATerm y_14 (ATerm t)
  {
    ATerm h_9 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        t = l_48(t);
        PopChoice();
      }
    else
      {
        t = h_9;
        t = FoldR_0(t);
        {
          ATerm v_0 (ATerm t)
          {
            t = TCons_2(t, y_14, TNil_0);
            return(t);
          }
          t = TCons_2(t, _id, v_0);
          t = m_48(t);
        }
      }
    return(t);
  }
  t = y_14(t);
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Fail_0);
    return(t);
  }
  ATerm x_0 (ATerm t)
  {
    ATerm d_15 = NULL,e_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
    d_15 = t;
    a_15 :
    if(match_cons(d_15, sym_TCons_2))
      {
        e_15 = ATgetArgument(d_15, 0);
        m_15 = ATgetArgument(d_15, 1);
        b_15 :
        if(match_cons(m_15, sym_TCons_2))
          {
            n_15 = ATgetArgument(m_15, 0);
            o_15 = ATgetArgument(m_15, 1);
            c_15 :
            if(match_cons(o_15, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(e_15), not_null(n_15));
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = foldr_2(t, w_0, x_0);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm h_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL;
  h_16 = t;
  t_15 :
  if(match_cons(h_16, sym_Call_2))
    {
      j_16 = ATgetArgument(h_16, 0);
      l_16 = ATgetArgument(h_16, 1);
      f_16 :
      if(match_cons(j_16, sym_SVar_1))
        {
          k_16 = ATgetArgument(j_16, 0);
          g_16 :
          if(match_cons(l_16, sym_Nil_0))
            t = not_null(k_16);
          else
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
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
  t_16 = t;
  p_16 :
  if(match_cons(t_16, sym_TCons_2))
    {
      u_16 = ATgetArgument(t_16, 0);
      v_16 = ATgetArgument(t_16, 1);
      q_16 :
      if(match_cons(v_16, sym_TCons_2))
        {
          w_16 = ATgetArgument(v_16, 0);
          z_16 = ATgetArgument(v_16, 1);
          r_16 :
          if(match_cons(w_16, sym_Cons_2))
            {
              x_16 = ATgetArgument(w_16, 0);
              y_16 = ATgetArgument(w_16, 1);
              s_16 :
              if(match_cons(z_16, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_16), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
  l_17 = t;
  e_17 :
  if(match_cons(l_17, sym_TCons_2))
    {
      m_17 = ATgetArgument(l_17, 0);
      n_17 = ATgetArgument(l_17, 1);
      f_17 :
      if(match_cons(n_17, sym_TCons_2))
        {
          o_17 = ATgetArgument(n_17, 0);
          v_17 = ATgetArgument(n_17, 1);
          g_17 :
          if(match_cons(o_17, sym_Cons_2))
            {
              p_17 = ATgetArgument(o_17, 0);
              u_17 = ATgetArgument(o_17, 1);
              h_17 :
              if(match_cons(p_17, sym_TCons_2))
                {
                  q_17 = ATgetArgument(p_17, 0);
                  r_17 = ATgetArgument(p_17, 1);
                  i_17 :
                  if(match_cons(r_17, sym_TCons_2))
                    {
                      s_17 = ATgetArgument(r_17, 0);
                      t_17 = ATgetArgument(r_17, 1);
                      j_17 :
                      if(match_cons(t_17, sym_TNil_0))
                        {
                          k_17 :
                          if(match_cons(v_17, sym_TNil_0))
                            {
                              ATerm x_17 = NULL;
                              if(m_17 != NULL && m_17 != q_17)
                                _fail(q_17);
                              else
                                m_17 = q_17;
                              if(x_17 != NULL && x_17 != s_17)
                                _fail(s_17);
                              else
                                x_17 = s_17;
                              t = not_null(x_17);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm i_9 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = i_9;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm a_62 (ATerm), ATerm b_62 (ATerm))
{
  ATerm d_18 = NULL;
  ATerm f_18 = NULL,g_18 = NULL;
  d_18 = t;
  {
    ATerm h_18 = NULL;
    t = not_null(d_18);
    {
      ATerm i_18 = NULL;
      t = a_62(t);
      h_18 = t;
      if(f_18 != NULL && f_18 != h_18)
        _fail(h_18);
      else
        f_18 = h_18;
      t = b_62(t);
      i_18 = t;
      if(g_18 != NULL && g_18 != i_18)
        _fail(i_18);
      else
        g_18 = i_18;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_18), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm a_61 (ATerm))
{
  ATerm m_18 (ATerm t)
  {
    ATerm o_9 = t;
    if(PushChoice()==0)
      {
        t = a_61(t);
        PopChoice();
      }
    else
      {
        t = o_9;
        t = _all(t, m_18);
      }
    return(t);
  }
  t = m_18(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  u_18 = t;
  q_18 :
  if(match_cons(u_18, sym_TCons_2))
    {
      v_18 = ATgetArgument(u_18, 0);
      w_18 = ATgetArgument(u_18, 1);
      r_18 :
      if(match_cons(w_18, sym_TCons_2))
        {
          x_18 = ATgetArgument(w_18, 0);
          y_18 = ATgetArgument(w_18, 1);
          s_18 :
          if(match_cons(y_18, sym_TNil_0))
            {
              ATerm c_19 = NULL;
              if(c_19 != NULL && c_19 != x_18)
                _fail(x_18);
              else
                c_19 = x_18;
            }
          else
            {
              if(match_cons(y_18, sym_TCons_2))
                {
                  z_18 = ATgetArgument(y_18, 0);
                  a_19 = ATgetArgument(y_18, 1);
                  t_18 :
                  if(match_cons(a_19, sym_TNil_0))
                    {
                      ATerm i_19 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      i_19 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_18), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm c_62 (ATerm), ATerm d_62 (ATerm))
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL;
  t = subs_args_0(t);
  r_19 = t;
  o_19 :
  if(match_cons(r_19, sym_TCons_2))
    {
      s_19 = ATgetArgument(r_19, 0);
      t_19 = ATgetArgument(r_19, 1);
      p_19 :
      if(match_cons(t_19, sym_TCons_2))
        {
          u_19 = ATgetArgument(t_19, 0);
          v_19 = ATgetArgument(t_19, 1);
          q_19 :
          if(match_cons(v_19, sym_TNil_0))
            {
              t = not_null(u_19);
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm z_0 (ATerm t)
                  {
                    t = not_null(s_19);
                    return(t);
                  }
                  t = SubsVar_2(t, c_62, z_0);
                  t = d_62(t);
                  return(t);
                }
                t = alltd_1(t, y_0);
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
ATerm substitute_1 (ATerm t, ATerm e_62 (ATerm))
{
  t = substitute_2(t, e_62, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL;
  q_20 = t;
  o_20 :
  if(match_cons(q_20, sym_Cons_2))
    {
      r_20 = ATgetArgument(q_20, 0);
      w_20 = ATgetArgument(q_20, 1);
      p_20 :
      if(match_cons(r_20, sym_SDef_3))
        {
          t_20 = ATgetArgument(r_20, 0);
          u_20 = ATgetArgument(r_20, 1);
          v_20 = ATgetArgument(r_20, 2);
          {
            ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,p_22 = NULL;
            ATerm l_21 = NULL;
            t = not_null(u_20);
            {
              ATerm r_21 = NULL;
              ATerm a_1 (ATerm t)
              {
                ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
                e_21 = t;
                c_20 :
                if(match_cons(e_21, sym_VarDec_2))
                  {
                    f_21 = ATgetArgument(e_21, 0);
                    g_21 = ATgetArgument(e_21, 1);
                    {
                      ATerm j_21 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TNil_0);
                      t = new_0(t);
                      j_21 = t;
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(j_21), not_null(g_21));
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, a_1);
              l_21 = t;
              if(b_21 != NULL && b_21 != l_21)
                _fail(l_21);
              else
                b_21 = l_21;
              t = not_null(b_21);
              {
                ATerm e_22 = NULL;
                ATerm b_1 (ATerm t)
                {
                  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
                  m_21 = t;
                  f_20 :
                  if(match_cons(m_21, sym_VarDec_2))
                    {
                      n_21 = ATgetArgument(m_21, 0);
                      o_21 = ATgetArgument(m_21, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_21)), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = map_1(t, b_1);
                r_21 = t;
                if(c_21 != NULL && c_21 != r_21)
                  _fail(r_21);
                else
                  c_21 = r_21;
                t = not_null(q_20);
                {
                  ATerm c_1 (ATerm t)
                  {
                    ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL;
                    s_21 = t;
                    l_20 :
                    if(match_cons(s_21, sym_SDef_3))
                      {
                        t_21 = ATgetArgument(s_21, 0);
                        u_21 = ATgetArgument(s_21, 1);
                        v_21 = ATgetArgument(s_21, 2);
                        {
                          ATerm w_21 = NULL,x_21 = NULL,c_22 = NULL;
                          if(t_20 != NULL && t_20 != t_21)
                            _fail(t_21);
                          else
                            t_20 = t_21;
                          if(w_21 != NULL && w_21 != u_21)
                            _fail(u_21);
                          else
                            w_21 = u_21;
                          if(x_21 != NULL && x_21 != v_21)
                            _fail(v_21);
                          else
                            x_21 = v_21;
                          t = not_null(w_21);
                          {
                            ATerm d_1 (ATerm t)
                            {
                              ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
                              y_21 = t;
                              j_20 :
                              if(match_cons(y_21, sym_VarDec_2))
                                {
                                  z_21 = ATgetArgument(y_21, 0);
                                  a_22 = ATgetArgument(y_21, 1);
                                  t = not_null(z_21);
                                }
                              else
                                _fail(t);
                              return(t);
                            }
                            t = map_1(t, d_1);
                            c_22 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_21), (ATerm) ATmakeAppl(sym_TNil_0))));
                            t = ssubs_0(t);
                          }
                        }
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = map_1(t, c_1);
                  e_22 = t;
                  if(d_21 != NULL && d_21 != e_22)
                    _fail(e_22);
                  else
                    d_21 = e_22;
                }
              }
            }
            t = not_null(d_21);
            t = choices_0(t);
            p_22 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(t_20), not_null(b_21), not_null(p_22));
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
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
  l_23 = t;
  j_23 :
  if(match_cons(l_23, sym_Cons_2))
    {
      m_23 = ATgetArgument(l_23, 0);
      n_23 = ATgetArgument(l_23, 1);
      k_23 :
      if(match_cons(n_23, sym_Nil_0))
        t = not_null(m_23);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm joindefs_0 (ATerm t)
{
  ATerm p_9 = t;
  if(PushChoice()==0)
    {
      t = JoinDefs1_0(t);
      PopChoice();
    }
  else
    {
      t = p_9;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm NonOverloadedDef_0 (ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL;
  z_23 = t;
  s_23 :
  if(match_cons(z_23, sym_TCons_2))
    {
      a_24 = ATgetArgument(z_23, 0);
      f_24 = ATgetArgument(z_23, 1);
      t_23 :
      if(match_cons(a_24, sym_TCons_2))
        {
          b_24 = ATgetArgument(a_24, 0);
          c_24 = ATgetArgument(a_24, 1);
          u_23 :
          if(match_cons(c_24, sym_TCons_2))
            {
              d_24 = ATgetArgument(c_24, 0);
              e_24 = ATgetArgument(c_24, 1);
              v_23 :
              if(match_int(d_24, 0))
                {
                  w_23 :
                  if(match_cons(e_24, sym_TNil_0))
                    {
                      x_23 :
                      if(match_cons(f_24, sym_TCons_2))
                        {
                          g_24 = ATgetArgument(f_24, 0);
                          h_24 = ATgetArgument(f_24, 1);
                          y_23 :
                          if(match_cons(h_24, sym_TNil_0))
                            {
                              t = not_null(g_24);
                              {
                                ATerm e_1 (ATerm t)
                                {
                                  ATerm f_1 (ATerm t)
                                  {
                                    ATerm k_24 = NULL;
                                    k_24 = t;
                                    if(b_24 != NULL && b_24 != k_24)
                                      _fail(k_24);
                                    else
                                      b_24 = k_24;
                                    return(t);
                                  }
                                  t = SDef_3(t, f_1, _id, _id);
                                  return(t);
                                }
                                t = partition_1(t, e_1);
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
ATerm SDef_3 (ATerm t, ATerm g_42 (ATerm), ATerm h_42 (ATerm), ATerm i_42 (ATerm))
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym_SDef_3))
    {
      v_24 = ATgetArgument(u_24, 0);
      w_24 = ATgetArgument(u_24, 1);
      x_24 = ATgetArgument(u_24, 2);
      {
        ATerm b_25 = NULL;
        t = not_null(v_24);
        {
          ATerm d_25 = NULL;
          t = g_42(t);
          b_25 = t;
          t = not_null(w_24);
          {
            ATerm f_25 = NULL;
            t = h_42(t);
            d_25 = t;
            t = not_null(x_24);
            t = i_42(t);
            f_25 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(b_25), not_null(d_25), not_null(f_25));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm partition_1 (ATerm t, ATerm w_55 (ATerm))
{
  ATerm j_27 (ATerm t)
  {
    ATerm u_9 = t;
    if(PushChoice()==0)
      {
        ATerm x_25 = NULL;
        x_25 = t;
        m_25 :
        if(match_cons(x_25, sym_Nil_0))
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
        else
          _fail(t);
        PopChoice();
      }
    else
      {
        t = u_9;
        {
          ATerm v_9 = t;
          if(PushChoice()==0)
            {
              ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,e_26 = NULL,f_26 = NULL;
              t = Cons_2(t, w_55, j_27);
              y_25 = t;
              o_25 :
              if(match_cons(y_25, sym_Cons_2))
                {
                  z_25 = ATgetArgument(y_25, 0);
                  a_26 = ATgetArgument(y_25, 1);
                  p_25 :
                  if(match_cons(a_26, sym_TCons_2))
                    {
                      b_26 = ATgetArgument(a_26, 0);
                      c_26 = ATgetArgument(a_26, 1);
                      q_25 :
                      if(match_cons(c_26, sym_TCons_2))
                        {
                          e_26 = ATgetArgument(c_26, 0);
                          f_26 = ATgetArgument(c_26, 1);
                          r_25 :
                          if(match_cons(f_26, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_25), not_null(b_26)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_26), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
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
              t = v_9;
              {
                ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL;
                t = Cons_2(t, _id, j_27);
                n_26 = t;
                t_25 :
                if(match_cons(n_26, sym_Cons_2))
                  {
                    o_26 = ATgetArgument(n_26, 0);
                    p_26 = ATgetArgument(n_26, 1);
                    u_25 :
                    if(match_cons(p_26, sym_TCons_2))
                      {
                        q_26 = ATgetArgument(p_26, 0);
                        c_27 = ATgetArgument(p_26, 1);
                        v_25 :
                        if(match_cons(c_27, sym_TCons_2))
                          {
                            d_27 = ATgetArgument(c_27, 0);
                            e_27 = ATgetArgument(c_27, 1);
                            w_25 :
                            if(match_cons(e_27, sym_TNil_0))
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_26), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_26), not_null(d_27)), (ATerm) ATmakeAppl(sym_TNil_0)));
                            else
                              _fail(t);
                          }
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
  t = j_27(t);
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm h_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL;
  h_28 = t;
  b_28 :
  if(match_cons(h_28, sym_TCons_2))
    {
      l_28 = ATgetArgument(h_28, 0);
      q_28 = ATgetArgument(h_28, 1);
      c_28 :
      if(match_cons(l_28, sym_TCons_2))
        {
          m_28 = ATgetArgument(l_28, 0);
          n_28 = ATgetArgument(l_28, 1);
          d_28 :
          if(match_cons(n_28, sym_TCons_2))
            {
              o_28 = ATgetArgument(n_28, 0);
              p_28 = ATgetArgument(n_28, 1);
              e_28 :
              if(match_cons(p_28, sym_TNil_0))
                {
                  f_28 :
                  if(match_cons(q_28, sym_TCons_2))
                    {
                      r_28 = ATgetArgument(q_28, 0);
                      s_28 = ATgetArgument(q_28, 1);
                      g_28 :
                      if(match_cons(s_28, sym_TNil_0))
                        {
                          t = not_null(r_28);
                          {
                            ATerm g_1 (ATerm t)
                            {
                              ATerm h_1 (ATerm t)
                              {
                                ATerm w_28 = NULL;
                                w_28 = t;
                                if(m_28 != NULL && m_28 != w_28)
                                  _fail(w_28);
                                else
                                  m_28 = w_28;
                                return(t);
                              }
                              ATerm i_1 (ATerm t)
                              {
                                ATerm w_9;
                                w_9 = t;
                                {
                                  ATerm x_28 = NULL;
                                  t = length_0(t);
                                  x_28 = t;
                                  if(o_28 != NULL && o_28 != x_28)
                                    _fail(x_28);
                                  else
                                    o_28 = x_28;
                                }
                                t = w_9;
                                return(t);
                              }
                              t = SDef_3(t, h_1, i_1, _id);
                              return(t);
                            }
                            t = partition_1(t, g_1);
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
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL;
  s_29 = t;
  r_29 :
  if(match_cons(s_29, sym_Match_1))
    {
      t_29 = ATgetArgument(s_29, 0);
      {
        ATerm w_29 = NULL,x_29 = NULL,a_30 = NULL,b_30 = NULL,f_30 = NULL;
        ATerm y_29 = NULL;
        ATerm z_29 = NULL;
        t = new_0(t);
        y_29 = t;
        if(w_29 != NULL && w_29 != y_29)
          _fail(y_29);
        else
          w_29 = y_29;
        t = new_0(t);
        z_29 = t;
        if(x_29 != NULL && x_29 != z_29)
          _fail(z_29);
        else
          x_29 = z_29;
        t = not_null(t_29);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
            c_30 = t;
            h_29 :
            if(match_cons(c_30, sym_Explode_2))
              {
                d_30 = ATgetArgument(c_30, 0);
                e_30 = ATgetArgument(c_30, 1);
                if(a_30 != NULL && a_30 != d_30)
                  _fail(d_30);
                else
                  a_30 = d_30;
                if(b_30 != NULL && b_30 != e_30)
                  _fail(e_30);
                else
                  b_30 = e_30;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_29));
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, j_1);
          f_30 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_29), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_30)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_29), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_29))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_29)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_29)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_30), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_30), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0))))))));
        }
      }
    }
  else
    {
      if(match_cons(s_29, sym_Build_1))
        {
          t_29 = ATgetArgument(s_29, 0);
          {
            ATerm i_30 = NULL,k_30 = NULL,l_30 = NULL,p_30 = NULL;
            ATerm j_30 = NULL;
            t = new_0(t);
            j_30 = t;
            if(i_30 != NULL && i_30 != j_30)
              _fail(j_30);
            else
              i_30 = j_30;
            t = not_null(t_29);
            {
              ATerm k_1 (ATerm t)
              {
                ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
                m_30 = t;
                l_29 :
                if(match_cons(m_30, sym_Explode_2))
                  {
                    n_30 = ATgetArgument(m_30, 0);
                    o_30 = ATgetArgument(m_30, 1);
                    if(k_30 != NULL && k_30 != n_30)
                      _fail(n_30);
                    else
                      k_30 = n_30;
                    if(l_30 != NULL && l_30 != o_30)
                      _fail(o_30);
                    else
                      l_30 = o_30;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_30));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, k_1);
              p_30 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_30), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_30), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_30), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_30))), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_30)))));
            }
          }
        }
      else
        {
          if(match_cons(s_29, sym_ExplodeCong_2))
            {
              t_29 = ATgetArgument(s_29, 0);
              u_29 = ATgetArgument(s_29, 1);
              {
                ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL;
                ATerm x_30 = NULL;
                ATerm y_30 = NULL;
                t = new_0(t);
                x_30 = t;
                if(t_30 != NULL && t_30 != x_30)
                  _fail(x_30);
                else
                  t_30 = x_30;
                {
                  ATerm z_30 = NULL;
                  t = new_0(t);
                  y_30 = t;
                  if(u_30 != NULL && u_30 != y_30)
                    _fail(y_30);
                  else
                    u_30 = y_30;
                  {
                    ATerm a_31 = NULL;
                    t = new_0(t);
                    z_30 = t;
                    if(v_30 != NULL && v_30 != z_30)
                      _fail(z_30);
                    else
                      v_30 = z_30;
                    t = new_0(t);
                    a_31 = t;
                    if(w_30 != NULL && w_30 != a_31)
                      _fail(a_31);
                    else
                      w_30 = a_31;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_30), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_30), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_30), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_30), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(t_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_30)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(t_29), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_30))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(u_29), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_30))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_30)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_30)), (ATerm) ATmakeAppl(sym_Nil_0)))))));
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
  ATerm d_32 = NULL,e_32 = NULL;
  d_32 = t;
  y_31 :
  if(match_cons(d_32, sym_Build_1))
    {
      e_32 = ATgetArgument(d_32, 0);
      {
        ATerm g_32 = NULL,i_32 = NULL,j_32 = NULL,n_32 = NULL;
        ATerm h_32 = NULL;
        t = new_0(t);
        h_32 = t;
        if(g_32 != NULL && g_32 != h_32)
          _fail(h_32);
        else
          g_32 = h_32;
        t = not_null(e_32);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
            k_32 = t;
            w_31 :
            if(match_cons(k_32, sym_App_2))
              {
                l_32 = ATgetArgument(k_32, 0);
                m_32 = ATgetArgument(k_32, 1);
                if(i_32 != NULL && i_32 != l_32)
                  _fail(l_32);
                else
                  i_32 = l_32;
                if(j_32 != NULL && j_32 != m_32)
                  _fail(m_32);
                else
                  j_32 = m_32;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_32));
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, l_1);
          n_32 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_32), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(i_32), not_null(j_32), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_32))), (ATerm) ATmakeAppl(sym_Build_1, not_null(n_32))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp1_0 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,f_35 = NULL,g_35 = NULL;
  e_33 = t;
  u_32 :
  if(match_cons(e_33, sym_Build_1))
    {
      f_33 = ATgetArgument(e_33, 0);
      v_32 :
      if(match_cons(f_33, sym_App_2))
        {
          f_35 = ATgetArgument(f_33, 0);
          g_35 = ATgetArgument(f_33, 1);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_35)), not_null(f_35));
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
  ATerm q_35 = NULL,r_35 = NULL;
  q_35 = t;
  p_35 :
  if(match_cons(q_35, sym_Build_1))
    {
      r_35 = ATgetArgument(q_35, 0);
      {
        ATerm n_36 = NULL,t_38 = NULL,z_38 = NULL;
        t = not_null(r_35);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL;
            v_38 = t;
            m_35 :
            if(match_cons(v_38, sym_App_2))
              {
                w_38 = ATgetArgument(v_38, 0);
                y_38 = ATgetArgument(v_38, 1);
                n_35 :
                if(match_cons(w_38, sym_Build_1))
                  {
                    x_38 = ATgetArgument(w_38, 0);
                    if(t_38 != NULL && t_38 != x_38)
                      _fail(x_38);
                    else
                      t_38 = x_38;
                    if(n_36 != NULL && n_36 != y_38)
                      _fail(y_38);
                    else
                      n_36 = y_38;
                    t = not_null(t_38);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, m_1);
          z_38 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, not_null(z_38));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL;
  w_39 = t;
  q_39 :
  if(match_cons(w_39, sym_Seqs_1))
    {
      x_39 = ATgetArgument(w_39, 0);
      r_39 :
      if(match_cons(x_39, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(x_39, sym_Cons_2))
            {
              u_39 = ATgetArgument(x_39, 0);
              v_39 = ATgetArgument(x_39, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_39), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(v_39)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(w_39, sym_Choices_1))
        {
          x_39 = ATgetArgument(w_39, 0);
          s_39 :
          if(match_cons(x_39, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(x_39, sym_Cons_2))
                {
                  u_39 = ATgetArgument(x_39, 0);
                  v_39 = ATgetArgument(x_39, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(u_39), (ATerm) ATmakeAppl(sym_Choices_1, not_null(v_39)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(w_39, sym_LChoices_1))
            {
              x_39 = ATgetArgument(w_39, 0);
              t_39 :
              if(match_cons(x_39, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(x_39, sym_Cons_2))
                    {
                      u_39 = ATgetArgument(x_39, 0);
                      v_39 = ATgetArgument(x_39, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(u_39), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(v_39)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(w_39, sym_Lets_2))
                {
                  x_39 = ATgetArgument(w_39, 0);
                  y_39 = ATgetArgument(w_39, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(x_39), not_null(y_39));
                }
              else
                {
                  if(match_cons(w_39, sym_BA_2))
                    {
                      x_39 = ATgetArgument(w_39, 0);
                      y_39 = ATgetArgument(w_39, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_39)), not_null(x_39));
                    }
                  else
                    {
                      if(match_cons(w_39, sym_MA_2))
                        {
                          x_39 = ATgetArgument(w_39, 0);
                          y_39 = ATgetArgument(w_39, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_39)), not_null(y_39));
                        }
                      else
                        {
                          if(match_cons(w_39, sym_AM_2))
                            {
                              x_39 = ATgetArgument(w_39, 0);
                              y_39 = ATgetArgument(w_39, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_39), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_39)));
                            }
                          else
                            {
                              if(match_cons(w_39, sym_BAM_3))
                                {
                                  x_39 = ATgetArgument(w_39, 0);
                                  y_39 = ATgetArgument(w_39, 1);
                                  z_39 = ATgetArgument(w_39, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_39)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_39), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_39)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(w_39, sym_InfixApp_3))
                                    {
                                      x_39 = ATgetArgument(w_39, 0);
                                      y_39 = ATgetArgument(w_39, 1);
                                      z_39 = ATgetArgument(w_39, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(y_39), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_39), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_39), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
ATerm repeat_2 (ATerm t, ATerm g_51 (ATerm), ATerm h_51 (ATerm))
{
  ATerm n_41 (ATerm t)
  {
    ATerm x_9 = t;
    if(PushChoice()==0)
      {
        t = g_51(t);
        t = n_41(t);
        PopChoice();
      }
    else
      {
        t = x_9;
        t = h_51(t);
      }
    return(t);
  }
  t = n_41(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm j_51 (ATerm))
{
  t = repeat_2(t, j_51, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm p_41 = NULL;
  p_41 = t;
  o_41 :
  if(!(match_cons(p_41, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm y_9 = t;
  if(PushChoice()==0)
    {
      ATerm n_1 (ATerm t)
      {
        ATerm z_9 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = z_9;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, n_1);
      PopChoice();
      _fail(t);
    }
  else
    t = y_9;
  return(t);
}
ATerm App_2 (ATerm t, ATerm d_40 (ATerm), ATerm e_40 (ATerm))
{
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
  u_41 = t;
  t_41 :
  if(match_cons(u_41, sym_App_2))
    {
      v_41 = ATgetArgument(u_41, 0);
      w_41 = ATgetArgument(u_41, 1);
      {
        ATerm z_41 = NULL;
        t = not_null(v_41);
        {
          ATerm b_42 = NULL;
          t = d_40(t);
          z_41 = t;
          t = not_null(w_41);
          t = e_40(t);
          b_42 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, not_null(z_41), not_null(b_42));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm a_40 (ATerm), ATerm b_40 (ATerm), ATerm c_40 (ATerm))
{
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL;
  s_42 = t;
  r_42 :
  if(match_cons(s_42, sym_Con_3))
    {
      t_42 = ATgetArgument(s_42, 0);
      u_42 = ATgetArgument(s_42, 1);
      v_42 = ATgetArgument(s_42, 2);
      {
        ATerm z_42 = NULL;
        t = not_null(t_42);
        {
          ATerm b_43 = NULL;
          t = a_40(t);
          z_42 = t;
          t = not_null(u_42);
          {
            ATerm d_43 = NULL;
            t = b_40(t);
            b_43 = t;
            t = not_null(v_42);
            t = c_40(t);
            d_43 = t;
            t = (ATerm) ATmakeAppl(sym_Con_3, not_null(z_42), not_null(b_43), not_null(d_43));
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
  ATerm a_10 = t;
  if(PushChoice()==0)
    {
      ATerm o_1 (ATerm t)
      {
        ATerm b_10 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = b_10;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, o_1);
      PopChoice();
      _fail(t);
    }
  else
    t = a_10;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm t_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL;
  t_43 = t;
  r_43 :
  if(match_cons(t_43, sym_SRule_1))
    {
      x_43 = ATgetArgument(t_43, 0);
      s_43 :
      if(match_cons(x_43, sym_Rule_3))
        {
          y_43 = ATgetArgument(x_43, 0);
          z_43 = ATgetArgument(x_43, 1);
          a_44 = ATgetArgument(x_43, 2);
          t = not_null(y_43);
          t = pureterm_0(t);
          t = not_null(z_43);
          t = buildterm_0(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(y_43)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_44), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_43)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(x_43, sym_StratRule_3))
            {
              y_43 = ATgetArgument(x_43, 0);
              z_43 = ATgetArgument(x_43, 1);
              a_44 = ATgetArgument(x_43, 2);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_43), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_44), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_43), (ATerm) ATmakeAppl(sym_Nil_0)))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm g_43 (ATerm), ATerm h_43 (ATerm))
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL;
  q_44 = t;
  p_44 :
  if(match_cons(q_44, sym_Scope_2))
    {
      r_44 = ATgetArgument(q_44, 0);
      s_44 = ATgetArgument(q_44, 1);
      {
        ATerm v_44 = NULL;
        t = not_null(r_44);
        {
          ATerm x_44 = NULL;
          t = g_43(t);
          v_44 = t;
          t = not_null(s_44);
          t = h_43(t);
          x_44 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_44), not_null(x_44));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm p_60 (ATerm))
{
  ATerm c_45 (ATerm t)
  {
    ATerm c_10 = t;
    if(PushChoice()==0)
      {
        t = p_60(t);
        PopChoice();
      }
    else
      {
        t = c_10;
        t = _one(t, c_45);
      }
    return(t);
  }
  t = c_45(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm y_45 = NULL,a_46 = NULL,b_46 = NULL,e_46 = NULL,f_46 = NULL;
  y_45 = t;
  v_45 :
  if(match_cons(y_45, sym_SRule_1))
    {
      a_46 = ATgetArgument(y_45, 0);
      w_45 :
      if(match_cons(a_46, sym_Rule_3))
        {
          b_46 = ATgetArgument(a_46, 0);
          e_46 = ATgetArgument(a_46, 1);
          f_46 = ATgetArgument(a_46, 2);
          {
            ATerm m_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,y_46 = NULL;
            ATerm n_46 = NULL;
            t = new_0(t);
            n_46 = t;
            if(m_46 != NULL && m_46 != n_46)
              _fail(n_46);
            else
              m_46 = n_46;
            t = not_null(b_46);
            {
              ATerm a_47 = NULL,b_47 = NULL,j_47 = NULL;
              ATerm p_1 (ATerm t)
              {
                ATerm r_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL;
                r_46 = t;
                g_45 :
                if(match_cons(r_46, sym_Con_3))
                  {
                    u_46 = ATgetArgument(r_46, 0);
                    w_46 = ATgetArgument(r_46, 1);
                    x_46 = ATgetArgument(r_46, 2);
                    h_45 :
                    if(match_cons(u_46, sym_Var_1))
                      {
                        v_46 = ATgetArgument(u_46, 0);
                        if(q_46 != NULL && q_46 != v_46)
                          _fail(v_46);
                        else
                          q_46 = v_46;
                        if(o_46 != NULL && o_46 != w_46)
                          _fail(w_46);
                        else
                          o_46 = w_46;
                        if(p_46 != NULL && p_46 != x_46)
                          _fail(x_46);
                        else
                          p_46 = x_46;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_46));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, p_1);
              y_46 = t;
              t = not_null(e_46);
              {
                ATerm q_1 (ATerm t)
                {
                  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL;
                  c_47 = t;
                  k_45 :
                  if(match_cons(c_47, sym_Con_3))
                    {
                      d_47 = ATgetArgument(c_47, 0);
                      f_47 = ATgetArgument(c_47, 1);
                      g_47 = ATgetArgument(c_47, 2);
                      l_45 :
                      if(match_cons(d_47, sym_Var_1))
                        {
                          e_47 = ATgetArgument(d_47, 0);
                          m_45 :
                          if(match_cons(g_47, sym_Call_2))
                            {
                              h_47 = ATgetArgument(g_47, 0);
                              i_47 = ATgetArgument(g_47, 1);
                              n_45 :
                              if(match_cons(i_47, sym_Nil_0))
                                {
                                  if(q_46 != NULL && q_46 != e_47)
                                    _fail(e_47);
                                  else
                                    q_46 = e_47;
                                  if(a_47 != NULL && a_47 != f_47)
                                    _fail(f_47);
                                  else
                                    a_47 = f_47;
                                  if(b_47 != NULL && b_47 != h_47)
                                    _fail(h_47);
                                  else
                                    b_47 = h_47;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_46));
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, q_1);
                j_47 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_46), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(y_46), not_null(j_47), (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_46), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(b_47), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_46), not_null(a_47), (ATerm) ATmakeAppl(sym_Id_0))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Var_1, not_null(q_46)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_46)))))));
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
  ATerm r_1 (ATerm t)
  {
    ATerm d_10 = t;
    if(PushChoice()==0)
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      {
        t = d_10;
        {
          ATerm e_10 = t;
          if(PushChoice()==0)
            {
              t = Scope_2(t, _id, desugarRule_0);
              PopChoice();
            }
          else
            {
              t = e_10;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, r_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm z_58 (ATerm))
{
  ATerm s_47 (ATerm t)
  {
    t = z_58(t);
    t = _all(t, s_47);
    return(t);
  }
  t = s_47(t);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm b_2 (ATerm t)
      {
        ATerm f_10 = t;
        if(PushChoice()==0)
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = f_10;
            {
              ATerm g_10 = t;
              if(PushChoice()==0)
                {
                  ATerm h_10 = t;
                  if(PushChoice()==0)
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = h_10;
                      {
                        ATerm i_10 = t;
                        if(PushChoice()==0)
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = i_10;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = g_10;
                  t = Expl_0(t);
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, b_2);
    }
    return(t);
  }
  t = topdown_1(t, s_1);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_10 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = j_10;
      {
        ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL;
        v_47 = t;
        u_47 :
        if(match_cons(v_47, sym_Cons_2))
          {
            w_47 = ATgetArgument(v_47, 0);
            x_47 = ATgetArgument(v_47, 1);
            t = not_null(w_47);
            {
              ATerm c_2 (ATerm t)
              {
                t = not_null(x_47);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, c_2);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_63 (ATerm))
{
  ATerm c_48 (ATerm t)
  {
    ATerm k_10 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = k_10;
        t = Cons_2(t, v_63, c_48);
      }
    return(t);
  }
  t = c_48(t);
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL;
  f_48 = t;
  e_48 :
  if(match_cons(f_48, sym_TCons_2))
    {
      g_48 = ATgetArgument(f_48, 0);
      h_48 = ATgetArgument(f_48, 1);
      t = not_null(h_48);
    }
  else
    _fail(t);
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL;
  u_48 = t;
  t_48 :
  if(match_cons(u_48, sym_TCons_2))
    {
      v_48 = ATgetArgument(u_48, 0);
      w_48 = ATgetArgument(u_48, 1);
      t = not_null(v_48);
    }
  else
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm p_57 (ATerm))
{
  ATerm n_49 (ATerm t)
  {
    ATerm l_10 = t;
    if(PushChoice()==0)
      {
        ATerm e_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL;
        ATerm d_2 (ATerm t)
        {
          t = map_1(t, Thd_0);
          return(t);
        }
        ATerm e_2 (ATerm t)
        {
          t = map_1(t, Ttl_0);
          return(t);
        }
        t = split_2(t, d_2, e_2);
        {
          ATerm q_2 (ATerm t)
          {
            t = TCons_2(t, n_49, TNil_0);
            return(t);
          }
          t = TCons_2(t, p_57, q_2);
          e_49 = t;
          b_49 :
          if(match_cons(e_49, sym_TCons_2))
            {
              h_49 = ATgetArgument(e_49, 0);
              i_49 = ATgetArgument(e_49, 1);
              c_49 :
              if(match_cons(i_49, sym_TCons_2))
                {
                  j_49 = ATgetArgument(i_49, 0);
                  k_49 = ATgetArgument(i_49, 1);
                  d_49 :
                  if(match_cons(k_49, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_49), not_null(j_49));
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
        t = l_10;
        t = map_1(t, TNil_0);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
      }
    return(t);
  }
  t = n_49(t);
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL;
  i_50 = t;
  e_50 :
  if(match_cons(i_50, sym_TCons_2))
    {
      j_50 = ATgetArgument(i_50, 0);
      k_50 = ATgetArgument(i_50, 1);
      f_50 :
      if(match_cons(k_50, sym_TCons_2))
        {
          l_50 = ATgetArgument(k_50, 0);
          m_50 = ATgetArgument(k_50, 1);
          g_50 :
          if(match_cons(m_50, sym_TNil_0))
            {
              ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
              ATerm s_50 = NULL;
              ATerm t_50 = NULL;
              t = new_0(t);
              s_50 = t;
              if(p_50 != NULL && p_50 != s_50)
                _fail(s_50);
              else
                p_50 = s_50;
              {
                ATerm u_50 = NULL;
                t = new_0(t);
                t_50 = t;
                if(q_50 != NULL && q_50 != t_50)
                  _fail(t_50);
                else
                  q_50 = t_50;
                t = new_0(t);
                u_50 = t;
                if(r_50 != NULL && r_50 != u_50)
                  _fail(u_50);
                else
                  r_50 = u_50;
              }
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_50)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_50)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(j_50)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_50)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_50)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(p_50), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_50), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_50)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_50), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_50)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
            }
          else
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
  ATerm e_51 = NULL,f_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL;
  e_51 = t;
  a_51 :
  if(match_cons(e_51, sym_TCons_2))
    {
      f_51 = ATgetArgument(e_51, 0);
      k_51 = ATgetArgument(e_51, 1);
      b_51 :
      if(match_cons(k_51, sym_TCons_2))
        {
          l_51 = ATgetArgument(k_51, 0);
          m_51 = ATgetArgument(k_51, 1);
          c_51 :
          if(match_cons(l_51, sym_Nil_0))
            {
              d_51 :
              if(match_cons(m_51, sym_TNil_0))
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
ATerm zipr_1 (ATerm t, ATerm o_56 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, o_56);
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL;
  r_51 = t;
  p_51 :
  if(match_cons(r_51, sym_Cons_2))
    {
      s_51 = ATgetArgument(r_51, 0);
      t_51 = ATgetArgument(r_51, 1);
      q_51 :
      if(match_cons(t_51, sym_Nil_0))
        t = not_null(s_51);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm last_0 (ATerm t)
{
  ATerm m_10 = t;
  if(PushChoice()==0)
    {
      t = Last_0(t);
      PopChoice();
    }
  else
    {
      t = m_10;
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
  ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL;
  h_52 = t;
  e_52 :
  if(match_cons(h_52, sym_TCons_2))
    {
      i_52 = ATgetArgument(h_52, 0);
      j_52 = ATgetArgument(h_52, 1);
      f_52 :
      if(match_cons(j_52, sym_TCons_2))
        {
          k_52 = ATgetArgument(j_52, 0);
          l_52 = ATgetArgument(j_52, 1);
          g_52 :
          if(match_cons(l_52, sym_TNil_0))
            {
              ATerm n_10 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(i_52), not_null(k_52));
                  PopChoice();
                }
              else
                {
                  t = n_10;
                  t = SSL_subtr(not_null(i_52), not_null(k_52));
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
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL;
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
            {
              ATerm o_10;
              o_10 = t;
              {
                ATerm p_10 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(u_52), not_null(w_52));
                    PopChoice();
                  }
                else
                  {
                    t = p_10;
                    t = SSL_gtr(not_null(u_52), not_null(w_52));
                  }
              }
              t = o_10;
            }
          else
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
  ATerm f_53 = NULL;
  ATerm q_10 = t;
  if(PushChoice()==0)
    {
      ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL;
      g_53 = t;
      c_53 :
      if(match_cons(g_53, sym_TCons_2))
        {
          h_53 = ATgetArgument(g_53, 0);
          i_53 = ATgetArgument(g_53, 1);
          d_53 :
          if(match_cons(i_53, sym_TCons_2))
            {
              j_53 = ATgetArgument(i_53, 0);
              k_53 = ATgetArgument(i_53, 1);
              e_53 :
              if(match_cons(k_53, sym_TNil_0))
                {
                  if(f_53 != NULL && f_53 != h_53)
                    _fail(h_53);
                  else
                    f_53 = h_53;
                  if(f_53 != NULL && f_53 != j_53)
                    _fail(j_53);
                  else
                    f_53 = j_53;
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
      t = q_10;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm g_49 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL;
    i_54 = t;
    n_53 :
    if(match_cons(i_54, sym_TCons_2))
      {
        j_54 = ATgetArgument(i_54, 0);
        k_54 = ATgetArgument(i_54, 1);
        o_53 :
        if(match_cons(k_54, sym_TCons_2))
          {
            l_54 = ATgetArgument(k_54, 0);
            m_54 = ATgetArgument(k_54, 1);
            p_53 :
            if(match_cons(m_54, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_54), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_54), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL;
    p_54 = t;
    r_53 :
    if(match_cons(p_54, sym_TCons_2))
      {
        q_54 = ATgetArgument(p_54, 0);
        r_54 = ATgetArgument(p_54, 1);
        s_53 :
        if(match_int(q_54, 0))
          {
            t_53 :
            if(match_cons(r_54, sym_TCons_2))
              {
                s_54 = ATgetArgument(r_54, 0);
                t_54 = ATgetArgument(r_54, 1);
                u_53 :
                if(match_cons(t_54, sym_TCons_2))
                  {
                    u_54 = ATgetArgument(t_54, 0);
                    v_54 = ATgetArgument(t_54, 1);
                    v_53 :
                    if(match_cons(v_54, sym_TNil_0))
                      t = not_null(u_54);
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL;
    y_54 = t;
    e_54 :
    if(match_cons(y_54, sym_TCons_2))
      {
        z_54 = ATgetArgument(y_54, 0);
        a_55 = ATgetArgument(y_54, 1);
        f_54 :
        if(match_cons(a_55, sym_TCons_2))
          {
            b_55 = ATgetArgument(a_55, 0);
            c_55 = ATgetArgument(a_55, 1);
            g_54 :
            if(match_cons(c_55, sym_TCons_2))
              {
                d_55 = ATgetArgument(c_55, 0);
                e_55 = ATgetArgument(c_55, 1);
                h_54 :
                if(match_cons(e_55, sym_TNil_0))
                  {
                    ATerm i_55 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_54), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = geq_0(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_54), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm k_55 = NULL;
                      t = subt_0(t);
                      i_55 = t;
                      t = not_null(b_55);
                      t = g_49(t);
                      k_55 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_55), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_55), not_null(d_55)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  t = for_3(t, r_2, s_2, t_2);
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm a_56 = NULL;
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL;
  a_56 = t;
  {
    ATerm f_56 = NULL;
    ATerm m_56 = NULL;
    t = new_0(t);
    f_56 = t;
    if(c_56 != NULL && c_56 != f_56)
      _fail(f_56);
    else
      c_56 = f_56;
    {
      ATerm n_56 = NULL;
      t = new_0(t);
      m_56 = t;
      if(d_56 != NULL && d_56 != m_56)
        _fail(m_56);
      else
        d_56 = m_56;
      t = new_0(t);
      n_56 = t;
      if(e_56 != NULL && e_56 != n_56)
        _fail(n_56);
      else
        e_56 = n_56;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_56)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_56)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_56), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_56))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(c_56), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_56)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_56)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
  }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL;
  ATerm e_61 (ATerm t)
  {
    ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL,y_60 = NULL;
    ATerm d_60 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL;
      t = add_0(t);
      d_60 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_60), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TNil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = copy_1(t, new_0);
      f_60 = t;
      u_57 :
      if(match_cons(f_60, sym_Cons_2))
        {
          g_60 = ATgetArgument(f_60, 0);
          h_60 = ATgetArgument(f_60, 1);
          {
            ATerm i_60 = NULL;
            if(v_59 != NULL && v_59 != g_60)
              _fail(g_60);
            else
              v_59 = g_60;
            if(w_59 != NULL && w_59 != h_60)
              _fail(h_60);
            else
              w_59 = h_60;
            t = not_null(w_59);
            {
              ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL;
              t = last_0(t);
              i_60 = t;
              if(u_59 != NULL && u_59 != i_60)
                _fail(i_60);
              else
                u_59 = i_60;
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_59), not_null(w_59)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_59), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = zipr_1(t, MkThreadApplication_0);
              t = tuple_unzip_1(t, _id);
              j_60 = t;
              l_57 :
              if(match_cons(j_60, sym_TCons_2))
                {
                  k_60 = ATgetArgument(j_60, 0);
                  l_60 = ATgetArgument(j_60, 1);
                  m_57 :
                  if(match_cons(l_60, sym_TCons_2))
                    {
                      m_60 = ATgetArgument(l_60, 0);
                      n_60 = ATgetArgument(l_60, 1);
                      n_57 :
                      if(match_cons(n_60, sym_TCons_2))
                        {
                          o_60 = ATgetArgument(n_60, 0);
                          r_60 = ATgetArgument(n_60, 1);
                          o_57 :
                          if(match_cons(r_60, sym_TCons_2))
                            {
                              s_60 = ATgetArgument(r_60, 0);
                              t_60 = ATgetArgument(r_60, 1);
                              r_57 :
                              if(match_cons(t_60, sym_TCons_2))
                                {
                                  u_60 = ATgetArgument(t_60, 0);
                                  v_60 = ATgetArgument(t_60, 1);
                                  s_57 :
                                  if(match_cons(v_60, sym_TCons_2))
                                    {
                                      w_60 = ATgetArgument(v_60, 0);
                                      x_60 = ATgetArgument(v_60, 1);
                                      t_57 :
                                      if(match_cons(x_60, sym_TNil_0))
                                        {
                                          if(x_59 != NULL && x_59 != k_60)
                                            _fail(k_60);
                                          else
                                            x_59 = k_60;
                                          if(y_59 != NULL && y_59 != m_60)
                                            _fail(m_60);
                                          else
                                            y_59 = m_60;
                                          if(z_59 != NULL && z_59 != o_60)
                                            _fail(o_60);
                                          else
                                            z_59 = o_60;
                                          if(a_60 != NULL && a_60 != s_60)
                                            _fail(s_60);
                                          else
                                            a_60 = s_60;
                                          if(b_60 != NULL && b_60 != u_60)
                                            _fail(u_60);
                                          else
                                            b_60 = u_60;
                                          if(c_60 != NULL && c_60 != w_60)
                                            _fail(w_60);
                                          else
                                            c_60 = w_60;
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
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
    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_59), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_59), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_60), (ATerm) ATmakeAppl(sym_Nil_0))));
    t = concat_0(t);
    y_60 = t;
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(h_58), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), not_null(y_59), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_59), not_null(y_60)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(h_58), not_null(a_60)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_59)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(h_58), not_null(c_60)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_59)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(x_59))))));
    return(t);
  }
  g_58 = t;
  y_57 :
  if(match_cons(g_58, sym_TCons_2))
    {
      h_58 = ATgetArgument(g_58, 0);
      i_58 = ATgetArgument(g_58, 1);
      z_57 :
      if(match_cons(i_58, sym_TCons_2))
        {
          j_58 = ATgetArgument(i_58, 0);
          k_58 = ATgetArgument(i_58, 1);
          a_58 :
          if(match_string(j_58, "D"))
            {
              b_58 :
              if(match_cons(k_58, sym_TCons_2))
                {
                  l_58 = ATgetArgument(k_58, 0);
                  m_58 = ATgetArgument(k_58, 1);
                  c_58 :
                  if(match_cons(m_58, sym_TNil_0))
                    {
                      ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,n_59 = NULL;
                      ATerm x_58 = NULL;
                      ATerm y_58 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL;
                      t = new_0(t);
                      x_58 = t;
                      if(q_58 != NULL && q_58 != x_58)
                        _fail(x_58);
                      else
                        q_58 = x_58;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_58)), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = copy_1(t, MkDistApplication_0);
                      t = tuple_unzip_1(t, _id);
                      y_58 = t;
                      y_56 :
                      if(match_cons(y_58, sym_TCons_2))
                        {
                          b_59 = ATgetArgument(y_58, 0);
                          c_59 = ATgetArgument(y_58, 1);
                          z_56 :
                          if(match_cons(c_59, sym_TCons_2))
                            {
                              d_59 = ATgetArgument(c_59, 0);
                              e_59 = ATgetArgument(c_59, 1);
                              a_57 :
                              if(match_cons(e_59, sym_TCons_2))
                                {
                                  f_59 = ATgetArgument(e_59, 0);
                                  g_59 = ATgetArgument(e_59, 1);
                                  b_57 :
                                  if(match_cons(g_59, sym_TCons_2))
                                    {
                                      h_59 = ATgetArgument(g_59, 0);
                                      i_59 = ATgetArgument(g_59, 1);
                                      c_57 :
                                      if(match_cons(i_59, sym_TCons_2))
                                        {
                                          j_59 = ATgetArgument(i_59, 0);
                                          k_59 = ATgetArgument(i_59, 1);
                                          d_57 :
                                          if(match_cons(k_59, sym_TCons_2))
                                            {
                                              l_59 = ATgetArgument(k_59, 0);
                                              m_59 = ATgetArgument(k_59, 1);
                                              e_57 :
                                              if(match_cons(m_59, sym_TNil_0))
                                                {
                                                  if(r_58 != NULL && r_58 != b_59)
                                                    _fail(b_59);
                                                  else
                                                    r_58 = b_59;
                                                  if(s_58 != NULL && s_58 != d_59)
                                                    _fail(d_59);
                                                  else
                                                    s_58 = d_59;
                                                  if(t_58 != NULL && t_58 != f_59)
                                                    _fail(f_59);
                                                  else
                                                    t_58 = f_59;
                                                  if(u_58 != NULL && u_58 != h_59)
                                                    _fail(h_59);
                                                  else
                                                    u_58 = h_59;
                                                  if(v_58 != NULL && v_58 != j_59)
                                                    _fail(j_59);
                                                  else
                                                    v_58 = j_59;
                                                  if(w_58 != NULL && w_58 != l_59)
                                                    _fail(l_59);
                                                  else
                                                    w_58 = l_59;
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_58), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = conc_0(t);
                      n_59 = t;
                      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(h_58), (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue))), not_null(s_58), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_58), not_null(n_59)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(h_58), not_null(u_58)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_58)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(h_58), not_null(w_58)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(r_58))))));
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            {
              if(match_string(j_58, "T"))
                {
                  d_58 :
                  if(match_cons(k_58, sym_TCons_2))
                    {
                      l_58 = ATgetArgument(k_58, 0);
                      m_58 = ATgetArgument(k_58, 1);
                      e_58 :
                      if(match_cons(m_58, sym_TNil_0))
                        {
                          f_58 :
                          if(match_int(l_58, 0))
                            {
                              ATerm r_10 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm q_59 = NULL;
                                  ATerm r_59 = NULL;
                                  t = new_0(t);
                                  r_59 = t;
                                  if(q_59 != NULL && q_59 != r_59)
                                    _fail(r_59);
                                  else
                                    q_59 = r_59;
                                  t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(h_58), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_59), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(h_58), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_59)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(h_58), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_59)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Id_0)))));
                                  PopChoice();
                                }
                              else
                                {
                                  t = r_10;
                                  t = e_61(t);
                                }
                            }
                          else
                            t = e_61(t);
                        }
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
  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL;
  x_61 = t;
  q_61 :
  if(match_cons(x_61, sym_TCons_2))
    {
      y_61 = ATgetArgument(x_61, 0);
      k_62 = ATgetArgument(x_61, 1);
      r_61 :
      if(match_cons(y_61, sym_TCons_2))
        {
          z_61 = ATgetArgument(y_61, 0);
          h_62 = ATgetArgument(y_61, 1);
          s_61 :
          if(match_cons(z_61, sym_Mod_2))
            {
              f_62 = ATgetArgument(z_61, 0);
              g_62 = ATgetArgument(z_61, 1);
              t_61 :
              if(match_cons(h_62, sym_TCons_2))
                {
                  i_62 = ATgetArgument(h_62, 0);
                  j_62 = ATgetArgument(h_62, 1);
                  u_61 :
                  if(match_cons(j_62, sym_TNil_0))
                    {
                      v_61 :
                      if(match_cons(k_62, sym_TCons_2))
                        {
                          l_62 = ATgetArgument(k_62, 0);
                          m_62 = ATgetArgument(k_62, 1);
                          w_61 :
                          if(match_cons(m_62, sym_TNil_0))
                            {
                              ATerm r_62 = NULL;
                              ATerm s_62 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_62), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_62), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_62), (ATerm) ATmakeAppl(sym_TNil_0))));
                              t = DefineCongruence_0(t);
                              t = desugar_0(t);
                              s_62 = t;
                              if(r_62 != NULL && r_62 != s_62)
                                _fail(s_62);
                              else
                                r_62 = s_62;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_62), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_62), (ATerm) ATmakeAppl(sym_TNil_0)));
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm s_10 = t;
  if(PushChoice()==0)
    {
      t = CongruenceDef_0(t);
      PopChoice();
    }
  else
    {
      t = s_10;
      {
        ATerm t_10 = t;
        if(PushChoice()==0)
          {
            t = OverloadedDef_0(t);
            {
              ATerm u_2 (ATerm t)
              {
                t = TCons_2(t, _id, TNil_0);
                return(t);
              }
              t = TCons_2(t, joindefs_0, u_2);
            }
            PopChoice();
          }
        else
          {
            t = t_10;
            t = NonOverloadedDef_0(t);
            {
              ATerm g_3 (ATerm t)
              {
                t = TCons_2(t, _id, TNil_0);
                return(t);
              }
              t = TCons_2(t, joindefs_0, g_3);
            }
          }
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL;
  g_63 = t;
  w_62 :
  if(match_cons(g_63, sym_TCons_2))
    {
      h_63 = ATgetArgument(g_63, 0);
      k_63 = ATgetArgument(g_63, 1);
      a_63 :
      if(match_cons(h_63, sym_Cons_2))
        {
          i_63 = ATgetArgument(h_63, 0);
          j_63 = ATgetArgument(h_63, 1);
          b_63 :
          if(match_cons(k_63, sym_TCons_2))
            {
              l_63 = ATgetArgument(k_63, 0);
              m_63 = ATgetArgument(k_63, 1);
              c_63 :
              if(match_cons(m_63, sym_TCons_2))
                {
                  n_63 = ATgetArgument(m_63, 0);
                  o_63 = ATgetArgument(m_63, 1);
                  d_63 :
                  if(match_cons(o_63, sym_TCons_2))
                    {
                      p_63 = ATgetArgument(o_63, 0);
                      q_63 = ATgetArgument(o_63, 1);
                      e_63 :
                      if(match_cons(q_63, sym_TCons_2))
                        {
                          r_63 = ATgetArgument(q_63, 0);
                          s_63 = ATgetArgument(q_63, 1);
                          f_63 :
                          if(match_cons(s_63, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_63), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_63), not_null(r_63)), (ATerm) ATmakeAppl(sym_TNil_0))))));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_64 (ATerm))
{
  ATerm c_64 (ATerm t)
  {
    ATerm u_10 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, c_64);
        PopChoice();
      }
    else
      {
        t = u_10;
        t = Nil_0(t);
        t = k_64(t);
      }
    return(t);
  }
  t = c_64(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL;
  m_64 = t;
  h_64 :
  if(match_cons(m_64, sym_TCons_2))
    {
      n_64 = ATgetArgument(m_64, 0);
      o_64 = ATgetArgument(m_64, 1);
      i_64 :
      if(match_cons(o_64, sym_TCons_2))
        {
          p_64 = ATgetArgument(o_64, 0);
          q_64 = ATgetArgument(o_64, 1);
          j_64 :
          if(match_cons(q_64, sym_TNil_0))
            {
              t = not_null(n_64);
              {
                ATerm h_3 (ATerm t)
                {
                  t = not_null(p_64);
                  return(t);
                }
                t = at_end_1(t, h_3);
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
  ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL;
  z_64 = t;
  v_64 :
  if(match_cons(z_64, sym_TCons_2))
    {
      a_65 = ATgetArgument(z_64, 0);
      b_65 = ATgetArgument(z_64, 1);
      w_64 :
      if(match_cons(b_65, sym_TCons_2))
        {
          c_65 = ATgetArgument(b_65, 0);
          f_65 = ATgetArgument(b_65, 1);
          x_64 :
          if(match_cons(c_65, sym_Cons_2))
            {
              d_65 = ATgetArgument(c_65, 0);
              e_65 = ATgetArgument(c_65, 1);
              y_64 :
              if(match_cons(f_65, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_65), not_null(a_65)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_65), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,u_65 = NULL;
  p_65 = t;
  m_65 :
  if(match_cons(p_65, sym_TCons_2))
    {
      q_65 = ATgetArgument(p_65, 0);
      r_65 = ATgetArgument(p_65, 1);
      n_65 :
      if(match_cons(r_65, sym_TCons_2))
        {
          s_65 = ATgetArgument(r_65, 0);
          u_65 = ATgetArgument(r_65, 1);
          o_65 :
          if(match_cons(u_65, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_65), not_null(s_65));
          else
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
  ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL;
  e_66 = t;
  z_65 :
  if(match_cons(e_66, sym_TCons_2))
    {
      f_66 = ATgetArgument(e_66, 0);
      i_66 = ATgetArgument(e_66, 1);
      a_66 :
      if(match_cons(f_66, sym_Cons_2))
        {
          g_66 = ATgetArgument(f_66, 0);
          h_66 = ATgetArgument(f_66, 1);
          b_66 :
          if(match_cons(i_66, sym_TCons_2))
            {
              j_66 = ATgetArgument(i_66, 0);
              m_66 = ATgetArgument(i_66, 1);
              c_66 :
              if(match_cons(j_66, sym_Cons_2))
                {
                  k_66 = ATgetArgument(j_66, 0);
                  l_66 = ATgetArgument(j_66, 1);
                  d_66 :
                  if(match_cons(m_66, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(g_66), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_66), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(h_66), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_66), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL;
  y_66 = t;
  t_66 :
  if(match_cons(y_66, sym_TCons_2))
    {
      z_66 = ATgetArgument(y_66, 0);
      a_67 = ATgetArgument(y_66, 1);
      u_66 :
      if(match_cons(z_66, sym_Nil_0))
        {
          v_66 :
          if(match_cons(a_67, sym_TCons_2))
            {
              b_67 = ATgetArgument(a_67, 0);
              c_67 = ATgetArgument(a_67, 1);
              w_66 :
              if(match_cons(b_67, sym_Nil_0))
                {
                  x_66 :
                  if(match_cons(c_67, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm g_56 (ATerm), ATerm h_56 (ATerm), ATerm i_56 (ATerm), ATerm j_56 (ATerm))
{
  ATerm e_67 (ATerm t)
  {
    ATerm v_10 = t;
    if(PushChoice()==0)
      {
        t = g_56(t);
        PopChoice();
      }
    else
      {
        t = v_10;
        t = h_56(t);
        {
          ATerm i_3 (ATerm t)
          {
            t = TCons_2(t, e_67, TNil_0);
            return(t);
          }
          t = TCons_2(t, j_56, i_3);
          t = i_56(t);
        }
      }
    return(t);
  }
  t = e_67(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm l_56 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, l_56);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL;
  v_67 = t;
  r_67 :
  if(match_cons(v_67, sym_Cons_2))
    {
      w_67 = ATgetArgument(v_67, 0);
      b_68 = ATgetArgument(v_67, 1);
      s_67 :
      if(match_cons(w_67, sym_TCons_2))
        {
          x_67 = ATgetArgument(w_67, 0);
          y_67 = ATgetArgument(w_67, 1);
          t_67 :
          if(match_cons(y_67, sym_TCons_2))
            {
              z_67 = ATgetArgument(y_67, 0);
              a_68 = ATgetArgument(y_67, 1);
              u_67 :
              if(match_cons(a_68, sym_TNil_0))
                {
                  ATerm g_68 = NULL,h_68 = NULL,r_68 = NULL,z_68 = NULL;
                  ATerm w_10;
                  w_10 = t;
                  {
                    ATerm i_68 = NULL;
                    ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,q_68 = NULL;
                    t = not_null(z_67);
                    i_68 = t;
                    t = SSL_explode_term(not_null(i_68));
                    l_68 = t;
                    i_67 :
                    if(match_cons(l_68, sym_TCons_2))
                      {
                        m_68 = ATgetArgument(l_68, 0);
                        n_68 = ATgetArgument(l_68, 1);
                        j_67 :
                        if(match_cons(n_68, sym_TCons_2))
                          {
                            o_68 = ATgetArgument(n_68, 0);
                            q_68 = ATgetArgument(n_68, 1);
                            k_67 :
                            if(match_cons(q_68, sym_TNil_0))
                              {
                                if(g_68 != NULL && g_68 != m_68)
                                  _fail(m_68);
                                else
                                  g_68 = m_68;
                                if(h_68 != NULL && h_68 != o_68)
                                  _fail(o_68);
                                else
                                  h_68 = o_68;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = w_10;
                  {
                    ATerm s_68 = NULL;
                    ATerm u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL;
                    t = not_null(x_67);
                    s_68 = t;
                    t = SSL_explode_term(not_null(s_68));
                    u_68 = t;
                    n_67 :
                    if(match_cons(u_68, sym_TCons_2))
                      {
                        v_68 = ATgetArgument(u_68, 0);
                        w_68 = ATgetArgument(u_68, 1);
                        o_67 :
                        if(match_cons(w_68, sym_TCons_2))
                          {
                            x_68 = ATgetArgument(w_68, 0);
                            y_68 = ATgetArgument(w_68, 1);
                            p_67 :
                            if(match_cons(y_68, sym_TNil_0))
                              {
                                if(g_68 != NULL && g_68 != v_68)
                                  _fail(v_68);
                                else
                                  g_68 = v_68;
                                if(r_68 != NULL && r_68 != x_68)
                                  _fail(x_68);
                                else
                                  r_68 = x_68;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_68), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    z_68 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_68), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL;
  m_69 = t;
  i_69 :
  if(match_cons(m_69, sym_Cons_2))
    {
      n_69 = ATgetArgument(m_69, 0);
      s_69 = ATgetArgument(m_69, 1);
      j_69 :
      if(match_cons(n_69, sym_TCons_2))
        {
          o_69 = ATgetArgument(n_69, 0);
          p_69 = ATgetArgument(n_69, 1);
          k_69 :
          if(match_cons(p_69, sym_TCons_2))
            {
              q_69 = ATgetArgument(p_69, 0);
              r_69 = ATgetArgument(p_69, 1);
              l_69 :
              if(match_cons(r_69, sym_TNil_0))
                {
                  ATerm u_69 = NULL;
                  if(o_69 != NULL && o_69 != q_69)
                    _fail(q_69);
                  else
                    o_69 = q_69;
                  if(u_69 != NULL && u_69 != s_69)
                    _fail(s_69);
                  else
                    u_69 = s_69;
                  t = not_null(u_69);
                }
              else
                _fail(t);
            }
          else
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
  ATerm x_10 = t;
  if(PushChoice()==0)
    {
      ATerm j_3 (ATerm t)
      {
        ATerm f_70 = NULL;
        f_70 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_70), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm k_3 (ATerm t)
      {
        ATerm v_3 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, v_3);
        return(t);
      }
      ATerm u_3 (ATerm t)
      {
        ATerm c_11 = t;
        if(PushChoice()==0)
          {
            ATerm w_3 (ATerm t)
            {
              ATerm f_4 (ATerm t)
              {
                ATerm f_11 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = f_11;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, f_4, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, w_3);
            PopChoice();
          }
        else
          {
            t = c_11;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, j_3, k_3, u_3);
      PopChoice();
    }
  else
    {
      t = x_10;
      {
        ATerm h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL;
        h_70 = t;
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
                    t = not_null(i_70);
                    {
                      ATerm r_70 (ATerm t)
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
                                  ATerm g_4 (ATerm t)
                                  {
                                    t = not_null(k_70);
                                    return(t);
                                  }
                                  t = HdMember_1(t, g_4);
                                  t = r_70(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = k_11;
                                  t = Cons_2(t, _id, r_70);
                                }
                            }
                          }
                        return(t);
                      }
                      t = r_70(t);
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
ATerm GnNextChangeGraph_3 (ATerm t, ATerm u_43 (ATerm), ATerm v_43 (ATerm), ATerm w_43 (ATerm))
{
  ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL;
  j_71 = t;
  c_71 :
  if(match_cons(j_71, sym_TCons_2))
    {
      k_71 = ATgetArgument(j_71, 0);
      n_71 = ATgetArgument(j_71, 1);
      d_71 :
      if(match_cons(k_71, sym_Cons_2))
        {
          l_71 = ATgetArgument(k_71, 0);
          m_71 = ATgetArgument(k_71, 1);
          e_71 :
          if(match_cons(n_71, sym_TCons_2))
            {
              o_71 = ATgetArgument(n_71, 0);
              p_71 = ATgetArgument(n_71, 1);
              f_71 :
              if(match_cons(p_71, sym_TCons_2))
                {
                  q_71 = ATgetArgument(p_71, 0);
                  r_71 = ATgetArgument(p_71, 1);
                  g_71 :
                  if(match_cons(r_71, sym_TCons_2))
                    {
                      s_71 = ATgetArgument(r_71, 0);
                      t_71 = ATgetArgument(r_71, 1);
                      h_71 :
                      if(match_cons(t_71, sym_TCons_2))
                        {
                          u_71 = ATgetArgument(t_71, 0);
                          v_71 = ATgetArgument(t_71, 1);
                          i_71 :
                          if(match_cons(v_71, sym_TNil_0))
                            {
                              ATerm c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,n_72 = NULL;
                              ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = u_43(t);
                              g_72 = t;
                              w_70 :
                              if(match_cons(g_72, sym_TCons_2))
                                {
                                  h_72 = ATgetArgument(g_72, 0);
                                  i_72 = ATgetArgument(g_72, 1);
                                  x_70 :
                                  if(match_cons(i_72, sym_TCons_2))
                                    {
                                      j_72 = ATgetArgument(i_72, 0);
                                      k_72 = ATgetArgument(i_72, 1);
                                      y_70 :
                                      if(match_cons(k_72, sym_TNil_0))
                                        {
                                          ATerm l_72 = NULL;
                                          if(d_72 != NULL && d_72 != h_72)
                                            _fail(h_72);
                                          else
                                            d_72 = h_72;
                                          if(c_72 != NULL && c_72 != j_72)
                                            _fail(j_72);
                                          else
                                            c_72 = j_72;
                                          t = not_null(d_72);
                                          {
                                            ATerm m_72 = NULL;
                                            t = v_43(t);
                                            l_72 = t;
                                            if(e_72 != NULL && e_72 != l_72)
                                              _fail(l_72);
                                            else
                                              e_72 = l_72;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = diff_0(t);
                                            m_72 = t;
                                            if(f_72 != NULL && f_72 != m_72)
                                              _fail(m_72);
                                            else
                                              f_72 = m_72;
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
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm p_72 = NULL;
                                t = conc_0(t);
                                n_72 = t;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm r_72 = NULL;
                                  t = conc_0(t);
                                  p_72 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_71), (ATerm) ATmakeAppl(sym_TNil_0))));
                                  t = w_43(t);
                                  r_72 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_71), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
  return(t);
}
ATerm GnExit_0 (ATerm t)
{
  ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL;
  i_73 = t;
  b_73 :
  if(match_cons(i_73, sym_TCons_2))
    {
      j_73 = ATgetArgument(i_73, 0);
      k_73 = ATgetArgument(i_73, 1);
      c_73 :
      if(match_cons(j_73, sym_Nil_0))
        {
          d_73 :
          if(match_cons(k_73, sym_TCons_2))
            {
              l_73 = ATgetArgument(k_73, 0);
              m_73 = ATgetArgument(k_73, 1);
              e_73 :
              if(match_cons(m_73, sym_TCons_2))
                {
                  n_73 = ATgetArgument(m_73, 0);
                  o_73 = ATgetArgument(m_73, 1);
                  f_73 :
                  if(match_cons(o_73, sym_TCons_2))
                    {
                      p_73 = ATgetArgument(o_73, 0);
                      q_73 = ATgetArgument(o_73, 1);
                      g_73 :
                      if(match_cons(q_73, sym_TCons_2))
                        {
                          r_73 = ATgetArgument(q_73, 0);
                          s_73 = ATgetArgument(q_73, 1);
                          h_73 :
                          if(match_cons(s_73, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL;
  d_74 = t;
  z_73 :
  if(match_cons(d_74, sym_TCons_2))
    {
      e_74 = ATgetArgument(d_74, 0);
      f_74 = ATgetArgument(d_74, 1);
      a_74 :
      if(match_cons(f_74, sym_TCons_2))
        {
          g_74 = ATgetArgument(f_74, 0);
          h_74 = ATgetArgument(f_74, 1);
          b_74 :
          if(match_cons(h_74, sym_TCons_2))
            {
              i_74 = ATgetArgument(h_74, 0);
              j_74 = ATgetArgument(h_74, 1);
              c_74 :
              if(match_cons(j_74, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_74), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))))));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm x_51 (ATerm), ATerm y_51 (ATerm))
{
  ATerm o_74 (ATerm t)
  {
    ATerm n_11 = t;
    if(PushChoice()==0)
      {
        t = x_51(t);
        PopChoice();
      }
    else
      {
        t = n_11;
        t = y_51(t);
        t = o_74(t);
      }
    return(t);
  }
  t = o_74(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm a_52 (ATerm), ATerm b_52 (ATerm), ATerm c_52 (ATerm))
{
  t = a_52(t);
  t = while_not_2(t, b_52, c_52);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm d_44 (ATerm), ATerm e_44 (ATerm), ATerm f_44 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    ATerm o_11 = t;
    if(PushChoice()==0)
      {
        t = GnNextChangeGraph_3(t, d_44, e_44, f_44);
        PopChoice();
      }
    else
      {
        t = o_11;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, i_4);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm u_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL;
    u_74 = t;
    q_74 :
    if(match_cons(u_74, sym_TCons_2))
      {
        v_74 = ATgetArgument(u_74, 0);
        w_74 = ATgetArgument(u_74, 1);
        r_74 :
        if(match_cons(w_74, sym_TCons_2))
          {
            x_74 = ATgetArgument(w_74, 0);
            y_74 = ATgetArgument(w_74, 1);
            s_74 :
            if(match_cons(y_74, sym_TCons_2))
              {
                z_74 = ATgetArgument(y_74, 0);
                a_75 = ATgetArgument(y_74, 1);
                t_74 :
                if(match_cons(a_75, sym_TNil_0))
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_74), not_null(z_74));
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, svars_arity_0, j_4);
  t = FilterNonMissingDefs_0(t);
  {
    ATerm p_11 = t;
    if(PushChoice()==0)
      {
        t = NoMissingDefs_0(t);
        PopChoice();
      }
    else
      {
        t = p_11;
        t = MissingDefs_0(t);
        t = (ATerm) ATmakeInt(1);
        t = exit_0(t);
      }
  }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm i_75 = NULL,j_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL;
  i_75 = t;
  f_75 :
  if(match_cons(i_75, sym_TCons_2))
    {
      j_75 = ATgetArgument(i_75, 0);
      k_75 = ATgetArgument(i_75, 1);
      g_75 :
      if(match_cons(k_75, sym_TCons_2))
        {
          l_75 = ATgetArgument(k_75, 0);
          m_75 = ATgetArgument(k_75, 1);
          h_75 :
          if(match_cons(m_75, sym_TNil_0))
            {
              ATerm q_11 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(j_75), not_null(l_75));
                  PopChoice();
                }
              else
                {
                  t = q_11;
                  t = SSL_addr(not_null(j_75), not_null(l_75));
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
ATerm Tl_0 (ATerm t)
{
  ATerm s_75 = NULL,t_75 = NULL,u_75 = NULL;
  s_75 = t;
  r_75 :
  if(match_cons(s_75, sym_Cons_2))
    {
      t_75 = ATgetArgument(s_75, 0);
      u_75 = ATgetArgument(s_75, 1);
      t = not_null(u_75);
    }
  else
    _fail(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm r_11 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = (ATerm) ATmakeInt(0);
      PopChoice();
    }
  else
    {
      t = r_11;
      {
        ATerm z_75 = NULL;
        t = Tl_0(t);
        t = length_0(t);
        z_75 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_75), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = add_0(t);
      }
    }
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm p_49 (ATerm))
{
  ATerm g_76 = NULL,h_76 = NULL,i_76 = NULL;
  g_76 = t;
  f_76 :
  if(match_cons(g_76, sym_Cons_2))
    {
      h_76 = ATgetArgument(g_76, 0);
      i_76 = ATgetArgument(g_76, 1);
      t = p_49(t);
      {
        ATerm k_4 (ATerm t)
        {
          ATerm l_76 = NULL;
          l_76 = t;
          if(h_76 != NULL && h_76 != l_76)
            _fail(l_76);
          else
            h_76 = l_76;
          return(t);
        }
        t = fetch_1(t, k_4);
      }
      t = not_null(i_76);
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL;
  s_76 = t;
  p_76 :
  if(match_cons(s_76, sym_TCons_2))
    {
      t_76 = ATgetArgument(s_76, 0);
      u_76 = ATgetArgument(s_76, 1);
      q_76 :
      if(match_cons(u_76, sym_TCons_2))
        {
          v_76 = ATgetArgument(u_76, 0);
          w_76 = ATgetArgument(u_76, 1);
          r_76 :
          if(match_cons(w_76, sym_TNil_0))
            {
              t = not_null(t_76);
              {
                ATerm a_77 (ATerm t)
                {
                  ATerm s_11 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(v_76);
                      PopChoice();
                    }
                  else
                    {
                      t = s_11;
                      {
                        ATerm t_11 = t;
                        if(PushChoice()==0)
                          {
                            ATerm l_4 (ATerm t)
                            {
                              t = not_null(v_76);
                              return(t);
                            }
                            t = HdMember_1(t, l_4);
                            t = a_77(t);
                            PopChoice();
                          }
                        else
                          {
                            t = t_11;
                            t = Cons_2(t, _id, a_77);
                          }
                      }
                    }
                  return(t);
                }
                t = a_77(t);
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
ATerm foldr_3 (ATerm t, ATerm o_48 (ATerm), ATerm p_48 (ATerm), ATerm q_48 (ATerm))
{
  ATerm o_77 (ATerm t)
  {
    ATerm u_11 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        t = o_48(t);
        PopChoice();
      }
    else
      {
        t = u_11;
        {
          ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL;
          f_77 = t;
          e_77 :
          if(match_cons(f_77, sym_Cons_2))
            {
              g_77 = ATgetArgument(f_77, 0);
              h_77 = ATgetArgument(f_77, 1);
              {
                ATerm k_77 = NULL;
                t = not_null(g_77);
                {
                  ATerm m_77 = NULL;
                  t = q_48(t);
                  k_77 = t;
                  t = not_null(h_77);
                  t = o_77(t);
                  m_77 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_77), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = p_48(t);
                }
              }
            }
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = o_77(t);
  return(t);
}
ATerm definition_names_0 (ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    ATerm v_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL;
    v_77 = t;
    u_77 :
    if(match_cons(v_77, sym_SDef_3))
      {
        w_77 = ATgetArgument(v_77, 0);
        x_77 = ATgetArgument(v_77, 1);
        y_77 = ATgetArgument(v_77, 2);
        {
          ATerm b_78 = NULL;
          t = not_null(x_77);
          t = length_0(t);
          b_78 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(w_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_78), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0));
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = foldr_3(t, p_4, union_0, y_4);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm h_78 = NULL;
  ATerm j_78 = NULL;
  h_78 = t;
  t = definition_names_0(t);
  j_78 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_78), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = extract_needed_defs_0(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm k_41 (ATerm))
{
  ATerm q_78 = NULL,r_78 = NULL;
  q_78 = t;
  p_78 :
  if(match_cons(q_78, sym_Strategies_1))
    {
      r_78 = ATgetArgument(q_78, 0);
      {
        ATerm t_78 = NULL;
        t = not_null(r_78);
        t = k_41(t);
        t_78 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(t_78));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm p_43 (ATerm), ATerm q_43 (ATerm))
{
  ATerm b_79 = NULL,c_79 = NULL,d_79 = NULL;
  b_79 = t;
  a_79 :
  if(match_cons(b_79, sym_Cons_2))
    {
      c_79 = ATgetArgument(b_79, 0);
      d_79 = ATgetArgument(b_79, 1);
      {
        ATerm g_79 = NULL;
        t = not_null(c_79);
        {
          ATerm i_79 = NULL;
          t = p_43(t);
          g_79 = t;
          t = not_null(d_79);
          t = q_43(t);
          i_79 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_79), not_null(i_79));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm m_41 (ATerm))
{
  ATerm q_79 = NULL,r_79 = NULL;
  q_79 = t;
  p_79 :
  if(match_cons(q_79, sym_Specification_1))
    {
      r_79 = ATgetArgument(q_79, 0);
      {
        ATerm t_79 = NULL;
        t = not_null(r_79);
        t = m_41(t);
        t_79 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(t_79));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm y_79 = NULL;
  y_79 = t;
  x_79 :
  if(!(match_cons(y_79, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm l_43 (ATerm), ATerm m_43 (ATerm))
{
  ATerm d_80 = NULL,e_80 = NULL,f_80 = NULL;
  d_80 = t;
  c_80 :
  if(match_cons(d_80, sym_TCons_2))
    {
      e_80 = ATgetArgument(d_80, 0);
      f_80 = ATgetArgument(d_80, 1);
      {
        ATerm i_80 = NULL;
        t = not_null(e_80);
        {
          ATerm k_80 = NULL;
          t = l_43(t);
          i_80 = t;
          t = not_null(f_80);
          t = m_43(t);
          k_80 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_80), not_null(k_80));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm r_80 = NULL;
  ATerm v_11;
  v_11 = t;
  {
    ATerm z_4 (ATerm t)
    {
      ATerm s_80 = NULL,t_80 = NULL;
      s_80 = t;
      q_80 :
      if(match_cons(s_80, sym_Program_1))
        {
          t_80 = ATgetArgument(s_80, 0);
          if(r_80 != NULL && r_80 != t_80)
            _fail(t_80);
          else
            r_80 = t_80;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, z_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_80), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = v_11;
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
  ATerm w_80 = NULL;
  w_80 = t;
  t = SSL_exit(not_null(w_80));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm d_81 = NULL,e_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL;
  d_81 = t;
  a_81 :
  if(match_cons(d_81, sym_TCons_2))
    {
      e_81 = ATgetArgument(d_81, 0);
      f_81 = ATgetArgument(d_81, 1);
      b_81 :
      if(match_cons(f_81, sym_TCons_2))
        {
          g_81 = ATgetArgument(f_81, 0);
          h_81 = ATgetArgument(f_81, 1);
          c_81 :
          if(match_cons(h_81, sym_TNil_0))
            {
              ATerm w_11;
              w_11 = t;
              t = SSL_printnl(not_null(e_81), not_null(g_81));
              t = w_11;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm o_58 (ATerm))
{
  ATerm b_12 = t;
  if(PushChoice()==0)
    {
      t = o_58(t);
      PopChoice();
    }
  else
    t = b_12;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm q_81 = NULL,r_81 = NULL;
  ATerm b_5 (ATerm t)
  {
    ATerm c_5 (ATerm t)
    {
      ATerm c_12 = t;
      if(PushChoice()==0)
        {
          ATerm j_5 (ATerm t)
          {
            ATerm s_81 = NULL;
            s_81 = t;
            l_81 :
            if(!(match_cons(s_81, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, j_5);
          PopChoice();
          _fail(t);
        }
      else
        t = c_12;
      return(t);
    }
    ATerm d_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, c_5, d_5);
    {
      ATerm k_5 (ATerm t)
      {
        ATerm o_5 (ATerm t)
        {
          ATerm t_81 = NULL,u_81 = NULL;
          t_81 = t;
          n_81 :
          if(match_cons(t_81, sym_Runtime_1))
            {
              u_81 = ATgetArgument(t_81, 0);
              if(r_81 != NULL && r_81 != u_81)
                _fail(u_81);
              else
                r_81 = u_81;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, o_5);
        return(t);
      }
      ATerm n_5 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, k_5, n_5);
      {
        ATerm p_5 (ATerm t)
        {
          ATerm r_5 (ATerm t)
          {
            ATerm v_81 = NULL,w_81 = NULL;
            v_81 = t;
            p_81 :
            if(match_cons(v_81, sym_Program_1))
              {
                w_81 = ATgetArgument(v_81, 0);
                if(q_81 != NULL && q_81 != w_81)
                  _fail(w_81);
                else
                  q_81 = w_81;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, r_5);
          return(t);
        }
        ATerm q_5 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, p_5, q_5);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_81), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_81), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL;
  e_82 = t;
  a_82 :
  if(match_cons(e_82, sym_TCons_2))
    {
      f_82 = ATgetArgument(e_82, 0);
      g_82 = ATgetArgument(e_82, 1);
      b_82 :
      if(match_cons(g_82, sym_TCons_2))
        {
          h_82 = ATgetArgument(g_82, 0);
          i_82 = ATgetArgument(g_82, 1);
          c_82 :
          if(match_cons(i_82, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(f_82), not_null(h_82));
          else
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
  ATerm r_82 = NULL,s_82 = NULL,t_82 = NULL,u_82 = NULL,v_82 = NULL;
  r_82 = t;
  n_82 :
  if(match_cons(r_82, sym_TCons_2))
    {
      s_82 = ATgetArgument(r_82, 0);
      t_82 = ATgetArgument(r_82, 1);
      o_82 :
      if(match_cons(t_82, sym_TCons_2))
        {
          u_82 = ATgetArgument(t_82, 0);
          v_82 = ATgetArgument(t_82, 1);
          q_82 :
          if(match_cons(v_82, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(s_82), not_null(u_82));
          else
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
  ATerm d_83 = NULL;
  ATerm e_12;
  e_12 = t;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm f_12 = t;
      if(PushChoice()==0)
        {
          ATerm u_5 (ATerm t)
          {
            ATerm e_83 = NULL,f_83 = NULL;
            e_83 = t;
            a_83 :
            if(match_cons(e_83, sym_Output_1))
              {
                f_83 = ATgetArgument(e_83, 0);
                if(d_83 != NULL && d_83 != f_83)
                  _fail(f_83);
                else
                  d_83 = f_83;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, u_5);
          PopChoice();
        }
      else
        {
          t = f_12;
          {
            ATerm g_83 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            g_83 = t;
            if(d_83 != NULL && d_83 != g_83)
              _fail(g_83);
            else
              d_83 = g_83;
          }
        }
      return(t);
    }
    ATerm t_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, s_5, t_5);
  }
  t = e_12;
  {
    ATerm v_5 (ATerm t)
    {
      ATerm w_5 (ATerm t)
      {
        ATerm x_5 (ATerm t)
        {
          t = not_null(d_83);
          return(t);
        }
        t = split_2(t, x_5, _id);
        return(t);
      }
      t = TCons_2(t, w_5, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, v_5);
    {
      ATerm g_12 = t;
      if(PushChoice()==0)
        {
          ATerm y_5 (ATerm t)
          {
            ATerm a_6 (ATerm t)
            {
              ATerm h_83 = NULL;
              h_83 = t;
              c_83 :
              if(!(match_cons(h_83, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, a_6);
            return(t);
          }
          ATerm z_5 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, y_5, z_5);
          PopChoice();
        }
      else
        {
          t = g_12;
          {
            ATerm b_6 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, b_6);
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
ATerm apply_strategy_1 (ATerm t, ATerm t_46 (ATerm))
{
  ATerm p_83 = NULL,r_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL,v_83 = NULL;
  ATerm h_12;
  h_12 = t;
  t = dtime_0(t);
  t = h_12;
  t = t_46(t);
  {
    ATerm m_12;
    m_12 = t;
    {
      ATerm q_83 = NULL;
      t = dtime_0(t);
      q_83 = t;
      if(p_83 != NULL && p_83 != q_83)
        _fail(q_83);
      else
        p_83 = q_83;
    }
    t = m_12;
    r_83 = t;
    m_83 :
    if(match_cons(r_83, sym_TCons_2))
      {
        s_83 = ATgetArgument(r_83, 0);
        t_83 = ATgetArgument(r_83, 1);
        n_83 :
        if(match_cons(t_83, sym_TCons_2))
          {
            u_83 = ATgetArgument(t_83, 0);
            v_83 = ATgetArgument(t_83, 1);
            o_83 :
            if(match_cons(v_83, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(p_83)), not_null(s_83)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_83), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm b_84 = NULL;
  b_84 = t;
  t = SSL_ReadFromFile(not_null(b_84));
  return(t);
}
ATerm split_2 (ATerm t, ATerm w_57 (ATerm), ATerm x_57 (ATerm))
{
  ATerm h_84 = NULL;
  ATerm j_84 = NULL;
  h_84 = t;
  {
    ATerm l_84 = NULL;
    t = w_57(t);
    j_84 = t;
    t = not_null(h_84);
    t = x_57(t);
    l_84 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_84), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_84), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm t_84 = NULL;
  ATerm n_12;
  n_12 = t;
  {
    ATerm s_12 = t;
    if(PushChoice()==0)
      {
        ATerm c_6 (ATerm t)
        {
          ATerm u_84 = NULL,v_84 = NULL;
          u_84 = t;
          r_84 :
          if(match_cons(u_84, sym_Input_1))
            {
              v_84 = ATgetArgument(u_84, 0);
              if(t_84 != NULL && t_84 != v_84)
                _fail(v_84);
              else
                t_84 = v_84;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, c_6);
        PopChoice();
      }
    else
      {
        t = s_12;
        {
          ATerm w_84 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          w_84 = t;
          if(t_84 != NULL && t_84 != w_84)
            _fail(w_84);
          else
            t_84 = w_84;
        }
      }
  }
  t = n_12;
  {
    ATerm d_6 (ATerm t)
    {
      t = not_null(t_84);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, d_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_85 = NULL;
  a_85 = t;
  z_84 :
  if(!(match_cons(a_85, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_38 (ATerm))
{
  ATerm e_85 = NULL,f_85 = NULL;
  e_85 = t;
  d_85 :
  if(match_cons(e_85, sym_Undefined_1))
    {
      f_85 = ATgetArgument(e_85, 0);
      {
        ATerm h_85 = NULL;
        t = not_null(f_85);
        t = u_38(t);
        h_85 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_85));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_85 = NULL;
  m_85 = t;
  l_85 :
  if(!(match_cons(m_85, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm e_64 (ATerm))
{
  ATerm n_85 (ATerm t)
  {
    ATerm t_12 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, e_64, _id);
        PopChoice();
      }
    else
      {
        t = t_12;
        t = Cons_2(t, _id, n_85);
      }
    return(t);
  }
  t = n_85(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm x_45 (ATerm))
{
  t = fetch_1(t, x_45);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_46 (ATerm))
{
  ATerm e_6 (ATerm t)
  {
    ATerm u_12 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = u_12;
        {
          ATerm v_12 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = v_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, e_6);
  t = s_46(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL;
  ATerm w_12;
  w_12 = t;
  {
    ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL,z_85 = NULL,a_86 = NULL,b_86 = NULL,c_86 = NULL;
    w_85 = t;
    p_85 :
    if(match_cons(w_85, sym_TCons_2))
      {
        x_85 = ATgetArgument(w_85, 0);
        y_85 = ATgetArgument(w_85, 1);
        q_85 :
        if(match_cons(y_85, sym_TCons_2))
          {
            z_85 = ATgetArgument(y_85, 0);
            a_86 = ATgetArgument(y_85, 1);
            r_85 :
            if(match_cons(a_86, sym_TCons_2))
              {
                b_86 = ATgetArgument(a_86, 0);
                c_86 = ATgetArgument(a_86, 1);
                s_85 :
                if(match_cons(c_86, sym_TNil_0))
                  {
                    if(t_85 != NULL && t_85 != x_85)
                      _fail(x_85);
                    else
                      t_85 = x_85;
                    if(u_85 != NULL && u_85 != z_85)
                      _fail(z_85);
                    else
                      u_85 = z_85;
                    if(v_85 != NULL && v_85 != b_86)
                      _fail(b_86);
                    else
                      v_85 = b_86;
                    t = SSL_table_put(not_null(t_85), not_null(u_85), not_null(v_85));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = w_12;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_86 = NULL;
  f_86 = t;
  t = SSL_table_create(not_null(f_86));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_86 = NULL;
  j_86 = t;
  {
    ATerm y_12;
    y_12 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_86), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = y_12;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm q_45 (ATerm), ATerm r_45 (ATerm))
{
  ATerm p_86 = NULL,q_86 = NULL,r_86 = NULL;
  p_86 = t;
  o_86 :
  if(match_cons(p_86, sym_Cons_2))
    {
      q_86 = ATgetArgument(p_86, 0);
      r_86 = ATgetArgument(p_86, 1);
      {
        ATerm u_86 = NULL;
        t = not_null(q_86);
        t = q_45(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = r_45(t);
        u_86 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_86), not_null(r_86));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm s_45 (ATerm), ATerm t_45 (ATerm))
{
  ATerm c_87 = NULL,d_87 = NULL,e_87 = NULL,f_87 = NULL,g_87 = NULL;
  c_87 = t;
  a_87 :
  if(match_cons(c_87, sym_Cons_2))
    {
      d_87 = ATgetArgument(c_87, 0);
      e_87 = ATgetArgument(c_87, 1);
      b_87 :
      if(match_cons(e_87, sym_Cons_2))
        {
          f_87 = ATgetArgument(e_87, 0);
          g_87 = ATgetArgument(e_87, 1);
          {
            ATerm k_87 = NULL;
            t = not_null(d_87);
            t = s_45(t);
            t = not_null(f_87);
            t = t_45(t);
            k_87 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_87), not_null(g_87));
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
  ATerm c_13 = t;
  if(PushChoice()==0)
    {
      ATerm f_6 (ATerm t)
      {
        ATerm i_88 = NULL;
        i_88 = t;
        o_87 :
        if(!(match_string(i_88, "-S")))
          _fail(t);
        return(t);
      }
      ATerm g_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, f_6, g_6);
      PopChoice();
    }
  else
    {
      t = c_13;
      {
        ATerm d_13 = t;
        if(PushChoice()==0)
          {
            ATerm i_6 (ATerm t)
            {
              ATerm j_88 = NULL;
              j_88 = t;
              p_87 :
              if(!(match_string(j_88, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm j_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, i_6, j_6);
            PopChoice();
          }
        else
          {
            t = d_13;
            {
              ATerm e_13 = t;
              if(PushChoice()==0)
                {
                  ATerm k_6 (ATerm t)
                  {
                    ATerm k_88 = NULL;
                    k_88 = t;
                    q_87 :
                    if(!(match_string(k_88, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm l_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, k_6, l_6);
                  PopChoice();
                }
              else
                {
                  t = e_13;
                  {
                    ATerm h_13 = t;
                    if(PushChoice()==0)
                      {
                        ATerm m_6 (ATerm t)
                        {
                          ATerm l_88 = NULL;
                          l_88 = t;
                          r_87 :
                          if(!(match_string(l_88, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm n_6 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, m_6, n_6);
                        PopChoice();
                      }
                    else
                      {
                        t = h_13;
                        {
                          ATerm m_13 = t;
                          if(PushChoice()==0)
                            {
                              ATerm o_6 (ATerm t)
                              {
                                ATerm m_88 = NULL;
                                m_88 = t;
                                s_87 :
                                if(!(match_string(m_88, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm p_6 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, o_6, p_6);
                              PopChoice();
                            }
                          else
                            {
                              t = m_13;
                              {
                                ATerm n_13 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm q_6 (ATerm t)
                                    {
                                      ATerm n_88 = NULL;
                                      n_88 = t;
                                      t_87 :
                                      if(!(match_string(n_88, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm r_6 (ATerm t)
                                    {
                                      ATerm o_88 = NULL;
                                      o_88 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(o_88));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, q_6, r_6);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = n_13;
                                    {
                                      ATerm s_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm s_6 (ATerm t)
                                          {
                                            ATerm q_88 = NULL;
                                            q_88 = t;
                                            v_87 :
                                            if(!(match_string(q_88, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm t_6 (ATerm t)
                                          {
                                            ATerm r_88 = NULL;
                                            r_88 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_88));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, s_6, t_6);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = s_13;
                                          {
                                            ATerm v_13 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm u_6 (ATerm t)
                                                {
                                                  ATerm t_88 = NULL;
                                                  t_88 = t;
                                                  x_87 :
                                                  if(!(match_string(t_88, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm v_6 (ATerm t)
                                                {
                                                  ATerm u_88 = NULL;
                                                  u_88 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_88));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, u_6, v_6);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = v_13;
                                                {
                                                  ATerm w_13 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm w_6 (ATerm t)
                                                      {
                                                        ATerm w_88 = NULL;
                                                        w_88 = t;
                                                        z_87 :
                                                        if(!(match_string(w_88, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm x_6 (ATerm t)
                                                      {
                                                        ATerm x_88 = NULL;
                                                        x_88 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_88));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, w_6, x_6);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = w_13;
                                                      {
                                                        ATerm y_13 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm y_6 (ATerm t)
                                                            {
                                                              ATerm z_88 = NULL;
                                                              z_88 = t;
                                                              b_88 :
                                                              if(!(match_string(z_88, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm z_6 (ATerm t)
                                                            {
                                                              ATerm a_89 = NULL;
                                                              a_89 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_89));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, y_6, z_6);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = y_13;
                                                            {
                                                              ATerm i_14 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm e_7 (ATerm t)
                                                                  {
                                                                    ATerm c_89 = NULL;
                                                                    c_89 = t;
                                                                    d_88 :
                                                                    if(!(match_string(c_89, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm f_7 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, e_7, f_7);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = i_14;
                                                                  {
                                                                    ATerm j_14 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm h_7 (ATerm t)
                                                                        {
                                                                          ATerm d_89 = NULL;
                                                                          d_89 = t;
                                                                          e_88 :
                                                                          if(!(match_string(d_89, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm j_7 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, h_7, j_7);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = j_14;
                                                                        {
                                                                          ATerm k_14 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm k_7 (ATerm t)
                                                                              {
                                                                                ATerm e_89 = NULL;
                                                                                e_89 = t;
                                                                                f_88 :
                                                                                if(!(match_string(e_89, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm l_7 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, k_7, l_7);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = k_14;
                                                                              {
                                                                                ATerm l_14 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm m_7 (ATerm t)
                                                                                    {
                                                                                      ATerm f_89 = NULL;
                                                                                      f_89 = t;
                                                                                      g_88 :
                                                                                      if(!(match_string(f_89, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm n_7 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, m_7, n_7);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_14;
                                                                                    {
                                                                                      ATerm o_7 (ATerm t)
                                                                                      {
                                                                                        ATerm g_89 = NULL;
                                                                                        g_89 = t;
                                                                                        h_88 :
                                                                                        if(!(match_string(g_89, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm p_7 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, o_7, p_7);
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
  ATerm o_89 = NULL,p_89 = NULL,q_89 = NULL;
  o_89 = t;
  n_89 :
  if(match_cons(o_89, sym_Cons_2))
    {
      p_89 = ATgetArgument(o_89, 0);
      q_89 = ATgetArgument(o_89, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_89)), not_null(q_89));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_45 (ATerm))
{
  ATerm q_7 (ATerm t)
  {
    ATerm v_89 = NULL;
    v_89 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_89));
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    ATerm m_14 = t;
    if(PushChoice()==0)
      {
        ATerm n_14 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = n_14;
            t = o_45(t);
            t = Cons_2(t, _id, s_7);
          }
        PopChoice();
      }
    else
      {
        t = m_14;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, q_7, s_7);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm h_46 (ATerm), ATerm i_46 (ATerm), ATerm j_46 (ATerm))
{
  ATerm t_7 (ATerm t)
  {
    ATerm o_14 = t;
    if(PushChoice()==0)
      {
        t = i_46(t);
        PopChoice();
      }
    else
      {
        t = o_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, t_7);
  t = store_options_0(t);
  {
    ATerm r_14 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, j_46);
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
              t = apply_strategy_1(t, h_46);
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
ATerm iowrap_2 (ATerm t, ATerm c_46 (ATerm), ATerm d_46 (ATerm))
{
  t = iowrap_3(t, c_46, d_46, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm z_45 (ATerm))
{
  ATerm u_7 (ATerm t)
  {
    ATerm y_7 (ATerm t)
    {
      t = TCons_2(t, z_45, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, y_7);
    return(t);
  }
  t = iowrap_2(t, u_7, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm z_7 (ATerm t)
  {
    ATerm b_8 (ATerm t)
    {
      ATerm d_8 (ATerm t)
      {
        ATerm e_8 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
          return(t);
        }
        t = Cons_2(t, e_8, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, d_8);
      return(t);
    }
    t = Specification_1(t, b_8);
    return(t);
  }
  t = iowrap_1(t, z_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_all_0(t);
  return(t);
}
