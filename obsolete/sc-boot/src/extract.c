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
ATerm filter_1 (ATerm, ATerm o_54 (ATerm));
ATerm FilterNonMissingDefs_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm s_43 (ATerm), ATerm t_43 (ATerm));
ATerm Let_2 (ATerm, ATerm u_43 (ATerm), ATerm v_43 (ATerm));
ATerm sboundin_3 (ATerm, ATerm p_66 (ATerm), ATerm q_66 (ATerm), ATerm r_66 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm k_55 (ATerm), ATerm l_55 (ATerm), ATerm m_55 (ATerm));
ATerm crush_3 (ATerm, ATerm b_57 (ATerm), ATerm c_57 (ATerm), ATerm d_57 (ATerm));
ATerm collect_kids_1 (ATerm, ATerm j_57 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm s_56 (ATerm), ATerm t_56 (ATerm));
ATerm diff_p__1 (ATerm, ATerm w_56 (ATerm));
ATerm diff_1 (ATerm, ATerm y_56 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm y_52 (ATerm), ATerm z_52 (ATerm), ATerm a_53 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm b_53 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm FoldR_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm h_55 (ATerm), ATerm i_55 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm s_65 (ATerm), ATerm t_65 (ATerm));
ATerm alltd_1 (ATerm, ATerm s_64 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm u_65 (ATerm), ATerm v_65 (ATerm));
ATerm substitute_1 (ATerm, ATerm w_65 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm NonOverloadedDef_0 (ATerm);
ATerm length_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm w_43 (ATerm), ATerm x_43 (ATerm), ATerm y_43 (ATerm));
ATerm partition_1 (ATerm, ATerm x_54 (ATerm));
ATerm OverloadedDef_0 (ATerm);
ATerm Expl_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm h_50 (ATerm), ATerm i_50 (ATerm));
ATerm repeat_1 (ATerm, ATerm k_50 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm t_41 (ATerm), ATerm u_41 (ATerm));
ATerm Con_3 (ATerm, ATerm q_41 (ATerm), ATerm r_41 (ATerm), ATerm s_41 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm w_44 (ATerm), ATerm x_44 (ATerm));
ATerm oncetd_1 (ATerm, ATerm h_64 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm r_62 (ATerm));
ATerm desugar_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm map_1 (ATerm, ATerm z_59 (ATerm));
ATerm Ttl_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm s_59 (ATerm));
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm r_58 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm new_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm c_56 (ATerm));
ATerm add_0 (ATerm);
ATerm MkDistApplication_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_60 (ATerm));
ATerm conc_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm r_56 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm j_58 (ATerm), ATerm k_58 (ATerm), ATerm l_58 (ATerm), ATerm m_58 (ATerm));
ATerm zip_1 (ATerm, ATerm o_58 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm o_45 (ATerm), ATerm p_45 (ATerm), ATerm q_45 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm y_50 (ATerm), ATerm z_50 (ATerm));
ATerm for_3 (ATerm, ATerm b_51 (ATerm), ATerm c_51 (ATerm), ATerm d_51 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm x_45 (ATerm), ATerm y_45 (ATerm), ATerm z_45 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm a_43 (ATerm));
ATerm Cons_2 (ATerm, ATerm f_45 (ATerm), ATerm g_45 (ATerm));
ATerm Specification_1 (ATerm, ATerm c_43 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm b_45 (ATerm), ATerm c_45 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_62 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm n_48 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm o_61 (ATerm), ATerm p_61 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm k_40 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm i_60 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_47 (ATerm));
ATerm need_help_1 (ATerm, ATerm m_48 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm k_47 (ATerm), ATerm l_47 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm m_47 (ATerm), ATerm n_47 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_47 (ATerm));
ATerm iowrap_3 (ATerm, ATerm b_48 (ATerm), ATerm c_48 (ATerm), ATerm d_48 (ATerm));
ATerm iowrap_2 (ATerm, ATerm w_47 (ATerm), ATerm x_47 (ATerm));
ATerm iowrap_1 (ATerm, ATerm t_47 (ATerm));
ATerm extract_0 (ATerm);
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
  ATerm p_8;
  p_8 = t;
  {
    ATerm a_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, a_0, _id);
    t = printnl_0(t);
  }
  t = p_8;
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
                      ATerm q_8 = t;
                      if(PushChoice()==0)
                        {
                          t = MissingDefMod_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = q_8;
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
ATerm filter_1 (ATerm t, ATerm o_54 (ATerm))
{
  ATerm h_4 (ATerm t)
  {
    ATerm r_8 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = r_8;
        {
          ATerm s_8 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, o_54, h_4);
              PopChoice();
            }
          else
            {
              t = s_8;
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
              ATerm k_5 = NULL;
              t = not_null(w_4);
              {
                ATerm e_0 (ATerm t)
                {
                  ATerm t_8 = t;
                  if(PushChoice()==0)
                    {
                      ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL;
                      b_5 = t;
                      m_4 :
                      if(match_cons(b_5, sym_TCons_2))
                        {
                          c_5 = ATgetArgument(b_5, 0);
                          d_5 = ATgetArgument(b_5, 1);
                          n_4 :
                          if(match_cons(d_5, sym_TCons_2))
                            {
                              e_5 = ATgetArgument(d_5, 0);
                              f_5 = ATgetArgument(d_5, 1);
                              o_4 :
                              if(match_cons(f_5, sym_TNil_0))
                                {
                                  t = not_null(u_4);
                                  {
                                    ATerm f_0 (ATerm t)
                                    {
                                      ATerm g_0 (ATerm t)
                                      {
                                        ATerm i_5 = NULL;
                                        i_5 = t;
                                        if(c_5 != NULL && c_5 != i_5)
                                          _fail(i_5);
                                        else
                                          c_5 = i_5;
                                        return(t);
                                      }
                                      ATerm h_0 (ATerm t)
                                      {
                                        ATerm u_8 = t;
                                        if(PushChoice()==0)
                                          {
                                            ATerm j_5 = NULL;
                                            t = length_0(t);
                                            j_5 = t;
                                            if(e_5 != NULL && e_5 != j_5)
                                              _fail(j_5);
                                            else
                                              e_5 = j_5;
                                            PopChoice();
                                          }
                                        else
                                          {
                                            t = u_8;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_5), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                    t = t_8;
                  return(t);
                }
                t = filter_1(t, e_0);
                k_5 = t;
                if(a_5 != NULL && a_5 != k_5)
                  _fail(k_5);
                else
                  a_5 = k_5;
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
ATerm Rec_2 (ATerm t, ATerm s_43 (ATerm), ATerm t_43 (ATerm))
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
  u_5 = t;
  t_5 :
  if(match_cons(u_5, sym_Rec_2))
    {
      v_5 = ATgetArgument(u_5, 0);
      w_5 = ATgetArgument(u_5, 1);
      {
        ATerm z_5 = NULL;
        t = not_null(v_5);
        {
          ATerm b_6 = NULL;
          t = s_43(t);
          z_5 = t;
          t = not_null(w_5);
          t = t_43(t);
          b_6 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(z_5), not_null(b_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm u_43 (ATerm), ATerm v_43 (ATerm))
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
  k_6 = t;
  j_6 :
  if(match_cons(k_6, sym_Let_2))
    {
      l_6 = ATgetArgument(k_6, 0);
      m_6 = ATgetArgument(k_6, 1);
      {
        ATerm p_6 = NULL;
        t = not_null(l_6);
        {
          ATerm r_6 = NULL;
          t = u_43(t);
          p_6 = t;
          t = not_null(m_6);
          t = v_43(t);
          r_6 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(p_6), not_null(r_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm p_66 (ATerm), ATerm q_66 (ATerm), ATerm r_66 (ATerm))
{
  ATerm v_8 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, p_66, p_66);
      PopChoice();
    }
  else
    {
      t = v_8;
      {
        ATerm w_8 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, r_66, r_66, p_66);
            PopChoice();
          }
        else
          {
            t = w_8;
            t = Rec_2(t, r_66, p_66);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL;
  y_6 = t;
  x_6 :
  if(match_cons(y_6, sym_Rec_2))
    {
      z_6 = ATgetArgument(y_6, 0);
      a_7 = ATgetArgument(y_6, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_6), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL;
  i_7 = t;
  h_7 :
  if(match_cons(i_7, sym_SDef_3))
    {
      j_7 = ATgetArgument(i_7, 0);
      k_7 = ATgetArgument(i_7, 1);
      l_7 = ATgetArgument(i_7, 2);
      t = not_null(k_7);
      {
        ATerm i_0 (ATerm t)
        {
          ATerm x_7 = NULL,y_7 = NULL,y_9 = NULL;
          x_7 = t;
          g_7 :
          if(match_cons(x_7, sym_VarDec_2))
            {
              y_7 = ATgetArgument(x_7, 0);
              y_9 = ATgetArgument(x_7, 1);
              t = not_null(y_7);
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
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  g_10 = t;
  f_10 :
  if(match_cons(g_10, sym_Let_2))
    {
      h_10 = ATgetArgument(g_10, 0);
      i_10 = ATgetArgument(g_10, 1);
      t = not_null(h_10);
      {
        ATerm j_0 (ATerm t)
        {
          ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL;
          l_10 = t;
          e_10 :
          if(match_cons(l_10, sym_SDef_3))
            {
              m_10 = ATgetArgument(l_10, 0);
              n_10 = ATgetArgument(l_10, 1);
              o_10 = ATgetArgument(l_10, 2);
              t = not_null(m_10);
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
ATerm union_0 (ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,j_12 = NULL;
  v_11 = t;
  y_10 :
  if(match_cons(v_11, sym_TCons_2))
    {
      w_11 = ATgetArgument(v_11, 0);
      x_11 = ATgetArgument(v_11, 1);
      z_10 :
      if(match_cons(x_11, sym_TCons_2))
        {
          y_11 = ATgetArgument(x_11, 0);
          j_12 = ATgetArgument(x_11, 1);
          a_11 :
          if(match_cons(j_12, sym_TNil_0))
            {
              t = not_null(w_11);
              {
                ATerm n_12 (ATerm t)
                {
                  ATerm x_8 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(y_11);
                      PopChoice();
                    }
                  else
                    {
                      t = x_8;
                      {
                        ATerm y_8 = t;
                        if(PushChoice()==0)
                          {
                            ATerm k_0 (ATerm t)
                            {
                              t = not_null(y_11);
                              return(t);
                            }
                            t = HdMember_1(t, k_0);
                            t = n_12(t);
                            PopChoice();
                          }
                        else
                          {
                            t = y_8;
                            t = Cons_2(t, _id, n_12);
                          }
                      }
                    }
                  return(t);
                }
                t = n_12(t);
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
ATerm foldr_3 (ATerm t, ATerm k_55 (ATerm), ATerm l_55 (ATerm), ATerm m_55 (ATerm))
{
  ATerm b_13 (ATerm t)
  {
    ATerm z_8 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        t = k_55(t);
        PopChoice();
      }
    else
      {
        t = z_8;
        {
          ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
          s_12 = t;
          r_12 :
          if(match_cons(s_12, sym_Cons_2))
            {
              t_12 = ATgetArgument(s_12, 0);
              u_12 = ATgetArgument(s_12, 1);
              {
                ATerm x_12 = NULL;
                t = not_null(t_12);
                {
                  ATerm z_12 = NULL;
                  t = m_55(t);
                  x_12 = t;
                  t = not_null(u_12);
                  t = b_13(t);
                  z_12 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_12), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = l_55(t);
                }
              }
            }
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = b_13(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm b_57 (ATerm), ATerm c_57 (ATerm), ATerm d_57 (ATerm))
{
  ATerm p_13 = NULL;
  ATerm r_13 = NULL;
  p_13 = t;
  {
    ATerm s_13 = NULL;
    ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
    t = not_null(p_13);
    s_13 = t;
    t = SSL_explode_term(not_null(s_13));
    u_13 = t;
    m_13 :
    if(match_cons(u_13, sym_TCons_2))
      {
        v_13 = ATgetArgument(u_13, 0);
        w_13 = ATgetArgument(u_13, 1);
        n_13 :
        if(match_cons(w_13, sym_TCons_2))
          {
            x_13 = ATgetArgument(w_13, 0);
            y_13 = ATgetArgument(w_13, 1);
            o_13 :
            if(match_cons(y_13, sym_TNil_0))
              {
                if(r_13 != NULL && r_13 != x_13)
                  _fail(x_13);
                else
                  r_13 = x_13;
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
    t = foldr_3(t, b_57, c_57, d_57);
  }
  return(t);
}
ATerm collect_kids_1 (ATerm t, ATerm j_57 (ATerm))
{
  ATerm l_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = crush_3(t, l_0, union_0, j_57);
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm s_56 (ATerm), ATerm t_56 (ATerm))
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL;
  f_14 = t;
  e_14 :
  if(match_cons(f_14, sym_Cons_2))
    {
      g_14 = ATgetArgument(f_14, 0);
      h_14 = ATgetArgument(f_14, 1);
      t = t_56(t);
      {
        ATerm m_0 (ATerm t)
        {
          ATerm k_14 = NULL;
          k_14 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_14), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = s_56(t);
          return(t);
        }
        t = fetch_1(t, m_0);
      }
      t = not_null(h_14);
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_p__1 (ATerm t, ATerm w_56 (ATerm))
{
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
  t_14 = t;
  q_14 :
  if(match_cons(t_14, sym_TCons_2))
    {
      u_14 = ATgetArgument(t_14, 0);
      v_14 = ATgetArgument(t_14, 1);
      r_14 :
      if(match_cons(v_14, sym_TCons_2))
        {
          w_14 = ATgetArgument(v_14, 0);
          x_14 = ATgetArgument(v_14, 1);
          s_14 :
          if(match_cons(x_14, sym_TNil_0))
            {
              t = not_null(u_14);
              {
                ATerm b_15 (ATerm t)
                {
                  ATerm a_9 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = a_9;
                      {
                        ATerm b_9 = t;
                        if(PushChoice()==0)
                          {
                            ATerm n_0 (ATerm t)
                            {
                              t = not_null(w_14);
                              return(t);
                            }
                            t = HdMember_p__2(t, w_56, n_0);
                            t = b_15(t);
                            PopChoice();
                          }
                        else
                          {
                            t = b_9;
                            t = Cons_2(t, _id, b_15);
                          }
                      }
                    }
                  return(t);
                }
                t = b_15(t);
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
ATerm diff_1 (ATerm t, ATerm y_56 (ATerm))
{
  t = diff_p__1(t, y_56);
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm y_52 (ATerm), ATerm z_52 (ATerm), ATerm a_53 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm b_53 (ATerm))
{
  ATerm f_15 (ATerm t)
  {
    ATerm o_0 (ATerm t)
    {
      ATerm c_9 = t;
      if(PushChoice()==0)
        {
          t = y_52(t);
          PopChoice();
        }
      else
        {
          t = c_9;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      return(t);
    }
    ATerm p_0 (ATerm t)
    {
      ATerm d_9 = t;
      if(PushChoice()==0)
        {
          ATerm d_15 = NULL;
          ATerm e_9;
          e_9 = t;
          {
            ATerm e_15 = NULL;
            t = z_52(t);
            e_15 = t;
            if(d_15 != NULL && d_15 != e_15)
              _fail(e_15);
            else
              d_15 = e_15;
          }
          t = e_9;
          {
            ATerm q_0 (ATerm t)
            {
              ATerm s_0 (ATerm t)
              {
                t = not_null(d_15);
                return(t);
              }
              t = split_2(t, f_15, s_0);
              t = diff_1(t, b_53);
              return(t);
            }
            ATerm r_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = a_53(t, q_0, f_15, r_0);
            t = collect_kids_1(t, _id);
          }
          PopChoice();
        }
      else
        {
          t = d_9;
          t = collect_kids_1(t, f_15);
        }
      return(t);
    }
    t = split_2(t, o_0, p_0);
    t = union_0(t);
    return(t);
  }
  t = f_15(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL;
    o_16 = t;
    p_15 :
    if(match_cons(o_16, sym_Call_2))
      {
        p_16 = ATgetArgument(o_16, 0);
        r_16 = ATgetArgument(o_16, 1);
        q_15 :
        if(match_cons(p_16, sym_SVar_1))
          {
            q_16 = ATgetArgument(p_16, 0);
            {
              ATerm u_16 = NULL;
              t = not_null(r_16);
              t = length_0(t);
              u_16 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(q_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_16), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0));
            }
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm u_0 (ATerm t)
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
  ATerm v_0 (ATerm t)
  {
    ATerm w_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
    w_16 = t;
    v_15 :
    if(match_cons(w_16, sym_TCons_2))
      {
        z_16 = ATgetArgument(w_16, 0);
        j_17 = ATgetArgument(w_16, 1);
        w_15 :
        if(match_cons(z_16, sym_TCons_2))
          {
            a_17 = ATgetArgument(z_16, 0);
            b_17 = ATgetArgument(z_16, 1);
            k_16 :
            if(match_cons(b_17, sym_TCons_2))
              {
                c_17 = ATgetArgument(b_17, 0);
                i_17 = ATgetArgument(b_17, 1);
                l_16 :
                if(match_cons(i_17, sym_TNil_0))
                  {
                    m_16 :
                    if(match_cons(j_17, sym_TCons_2))
                      {
                        k_17 = ATgetArgument(j_17, 0);
                        l_17 = ATgetArgument(j_17, 1);
                        n_16 :
                        if(match_cons(l_17, sym_TNil_0))
                          {
                            if(a_17 != NULL && a_17 != k_17)
                              _fail(k_17);
                            else
                              a_17 = k_17;
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = free_vars2_4(t, t_0, u_0, sboundin_3, v_0);
  return(t);
}
ATerm FoldR_0 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
  s_17 = t;
  r_17 :
  if(match_cons(s_17, sym_Cons_2))
    {
      t_17 = ATgetArgument(s_17, 0);
      u_17 = ATgetArgument(s_17, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_17), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm h_55 (ATerm), ATerm i_55 (ATerm))
{
  ATerm y_17 (ATerm t)
  {
    ATerm h_9 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        t = h_55(t);
        PopChoice();
      }
    else
      {
        t = h_9;
        t = FoldR_0(t);
        {
          ATerm w_0 (ATerm t)
          {
            t = TCons_2(t, y_17, TNil_0);
            return(t);
          }
          t = TCons_2(t, _id, w_0);
          t = i_55(t);
        }
      }
    return(t);
  }
  t = y_17(t);
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Fail_0);
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    ATerm f_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
    f_18 = t;
    c_18 :
    if(match_cons(f_18, sym_TCons_2))
      {
        i_18 = ATgetArgument(f_18, 0);
        j_18 = ATgetArgument(f_18, 1);
        d_18 :
        if(match_cons(j_18, sym_TCons_2))
          {
            k_18 = ATgetArgument(j_18, 0);
            l_18 = ATgetArgument(j_18, 1);
            e_18 :
            if(match_cons(l_18, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_18), not_null(k_18));
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = foldr_2(t, x_0, y_0);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL;
  t_18 = t;
  q_18 :
  if(match_cons(t_18, sym_Call_2))
    {
      u_18 = ATgetArgument(t_18, 0);
      w_18 = ATgetArgument(t_18, 1);
      r_18 :
      if(match_cons(u_18, sym_SVar_1))
        {
          v_18 = ATgetArgument(u_18, 0);
          s_18 :
          if(match_cons(w_18, sym_Nil_0))
            t = not_null(v_18);
          else
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
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL;
  h_19 = t;
  c_19 :
  if(match_cons(h_19, sym_TCons_2))
    {
      i_19 = ATgetArgument(h_19, 0);
      j_19 = ATgetArgument(h_19, 1);
      d_19 :
      if(match_cons(j_19, sym_TCons_2))
        {
          k_19 = ATgetArgument(j_19, 0);
          n_19 = ATgetArgument(j_19, 1);
          e_19 :
          if(match_cons(k_19, sym_Cons_2))
            {
              l_19 = ATgetArgument(k_19, 0);
              m_19 = ATgetArgument(k_19, 1);
              f_19 :
              if(match_cons(n_19, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_19), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL;
  w_22 = t;
  s_19 :
  if(match_cons(w_22, sym_TCons_2))
    {
      x_22 = ATgetArgument(w_22, 0);
      y_22 = ATgetArgument(w_22, 1);
      t_19 :
      if(match_cons(y_22, sym_TCons_2))
        {
          z_22 = ATgetArgument(y_22, 0);
          g_23 = ATgetArgument(y_22, 1);
          l_20 :
          if(match_cons(z_22, sym_Cons_2))
            {
              a_23 = ATgetArgument(z_22, 0);
              f_23 = ATgetArgument(z_22, 1);
              m_20 :
              if(match_cons(a_23, sym_TCons_2))
                {
                  b_23 = ATgetArgument(a_23, 0);
                  c_23 = ATgetArgument(a_23, 1);
                  n_20 :
                  if(match_cons(c_23, sym_TCons_2))
                    {
                      d_23 = ATgetArgument(c_23, 0);
                      e_23 = ATgetArgument(c_23, 1);
                      u_22 :
                      if(match_cons(e_23, sym_TNil_0))
                        {
                          v_22 :
                          if(match_cons(g_23, sym_TNil_0))
                            {
                              ATerm i_23 = NULL;
                              if(x_22 != NULL && x_22 != b_23)
                                _fail(b_23);
                              else
                                x_22 = b_23;
                              if(i_23 != NULL && i_23 != d_23)
                                _fail(d_23);
                              else
                                i_23 = d_23;
                              t = not_null(i_23);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
ATerm SubsVar_2 (ATerm t, ATerm s_65 (ATerm), ATerm t_65 (ATerm))
{
  ATerm o_23 = NULL;
  ATerm q_23 = NULL,r_23 = NULL;
  o_23 = t;
  {
    ATerm s_23 = NULL;
    t = not_null(o_23);
    {
      ATerm t_23 = NULL;
      t = s_65(t);
      s_23 = t;
      if(q_23 != NULL && q_23 != s_23)
        _fail(s_23);
      else
        q_23 = s_23;
      t = t_65(t);
      t_23 = t;
      if(r_23 != NULL && r_23 != t_23)
        _fail(t_23);
      else
        r_23 = t_23;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_23), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm s_64 (ATerm))
{
  ATerm x_23 (ATerm t)
  {
    ATerm j_9 = t;
    if(PushChoice()==0)
      {
        t = s_64(t);
        PopChoice();
      }
    else
      {
        t = j_9;
        t = _all(t, x_23);
      }
    return(t);
  }
  t = x_23(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
  f_24 = t;
  b_24 :
  if(match_cons(f_24, sym_TCons_2))
    {
      g_24 = ATgetArgument(f_24, 0);
      h_24 = ATgetArgument(f_24, 1);
      c_24 :
      if(match_cons(h_24, sym_TCons_2))
        {
          i_24 = ATgetArgument(h_24, 0);
          j_24 = ATgetArgument(h_24, 1);
          d_24 :
          if(match_cons(j_24, sym_TNil_0))
            {
              ATerm n_24 = NULL;
              if(n_24 != NULL && n_24 != i_24)
                _fail(i_24);
              else
                n_24 = i_24;
            }
          else
            {
              if(match_cons(j_24, sym_TCons_2))
                {
                  k_24 = ATgetArgument(j_24, 0);
                  l_24 = ATgetArgument(j_24, 1);
                  e_24 :
                  if(match_cons(l_24, sym_TNil_0))
                    {
                      ATerm t_24 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_24), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      t_24 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_24), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm u_65 (ATerm), ATerm v_65 (ATerm))
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
  t = subs_args_0(t);
  c_25 = t;
  z_24 :
  if(match_cons(c_25, sym_TCons_2))
    {
      d_25 = ATgetArgument(c_25, 0);
      e_25 = ATgetArgument(c_25, 1);
      a_25 :
      if(match_cons(e_25, sym_TCons_2))
        {
          f_25 = ATgetArgument(e_25, 0);
          g_25 = ATgetArgument(e_25, 1);
          b_25 :
          if(match_cons(g_25, sym_TNil_0))
            {
              t = not_null(f_25);
              {
                ATerm z_0 (ATerm t)
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = not_null(d_25);
                    return(t);
                  }
                  t = SubsVar_2(t, u_65, a_1);
                  t = v_65(t);
                  return(t);
                }
                t = alltd_1(t, z_0);
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
ATerm substitute_1 (ATerm t, ATerm w_65 (ATerm))
{
  t = substitute_2(t, w_65, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL;
  b_26 = t;
  z_25 :
  if(match_cons(b_26, sym_Cons_2))
    {
      c_26 = ATgetArgument(b_26, 0);
      g_26 = ATgetArgument(b_26, 1);
      a_26 :
      if(match_cons(c_26, sym_SDef_3))
        {
          d_26 = ATgetArgument(c_26, 0);
          e_26 = ATgetArgument(c_26, 1);
          f_26 = ATgetArgument(c_26, 2);
          {
            ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,q_27 = NULL;
            ATerm v_26 = NULL;
            t = not_null(e_26);
            {
              ATerm b_27 = NULL;
              ATerm b_1 (ATerm t)
              {
                ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
                o_26 = t;
                n_25 :
                if(match_cons(o_26, sym_VarDec_2))
                  {
                    p_26 = ATgetArgument(o_26, 0);
                    q_26 = ATgetArgument(o_26, 1);
                    {
                      ATerm t_26 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TNil_0);
                      t = new_0(t);
                      t_26 = t;
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(t_26), not_null(q_26));
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, b_1);
              v_26 = t;
              if(l_26 != NULL && l_26 != v_26)
                _fail(v_26);
              else
                l_26 = v_26;
              t = not_null(l_26);
              {
                ATerm p_27 = NULL;
                ATerm c_1 (ATerm t)
                {
                  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
                  w_26 = t;
                  q_25 :
                  if(match_cons(w_26, sym_VarDec_2))
                    {
                      x_26 = ATgetArgument(w_26, 0);
                      y_26 = ATgetArgument(w_26, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_26)), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = map_1(t, c_1);
                b_27 = t;
                if(m_26 != NULL && m_26 != b_27)
                  _fail(b_27);
                else
                  m_26 = b_27;
                t = not_null(b_26);
                {
                  ATerm d_1 (ATerm t)
                  {
                    ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL;
                    c_27 = t;
                    w_25 :
                    if(match_cons(c_27, sym_SDef_3))
                      {
                        d_27 = ATgetArgument(c_27, 0);
                        e_27 = ATgetArgument(c_27, 1);
                        f_27 = ATgetArgument(c_27, 2);
                        {
                          ATerm g_27 = NULL,h_27 = NULL,n_27 = NULL;
                          if(d_26 != NULL && d_26 != d_27)
                            _fail(d_27);
                          else
                            d_26 = d_27;
                          if(g_27 != NULL && g_27 != e_27)
                            _fail(e_27);
                          else
                            g_27 = e_27;
                          if(h_27 != NULL && h_27 != f_27)
                            _fail(f_27);
                          else
                            h_27 = f_27;
                          t = not_null(g_27);
                          {
                            ATerm e_1 (ATerm t)
                            {
                              ATerm i_27 = NULL,k_27 = NULL,l_27 = NULL;
                              i_27 = t;
                              u_25 :
                              if(match_cons(i_27, sym_VarDec_2))
                                {
                                  k_27 = ATgetArgument(i_27, 0);
                                  l_27 = ATgetArgument(i_27, 1);
                                  t = not_null(k_27);
                                }
                              else
                                _fail(t);
                              return(t);
                            }
                            t = map_1(t, e_1);
                            n_27 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_27), (ATerm) ATmakeAppl(sym_TNil_0))));
                            t = ssubs_0(t);
                          }
                        }
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = map_1(t, d_1);
                  p_27 = t;
                  if(n_26 != NULL && n_26 != p_27)
                    _fail(p_27);
                  else
                    n_26 = p_27;
                }
              }
            }
            t = not_null(n_26);
            t = choices_0(t);
            q_27 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_26), not_null(l_26), not_null(q_27));
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
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
  g_28 = t;
  e_28 :
  if(match_cons(g_28, sym_Cons_2))
    {
      h_28 = ATgetArgument(g_28, 0);
      i_28 = ATgetArgument(g_28, 1);
      f_28 :
      if(match_cons(i_28, sym_Nil_0))
        t = not_null(h_28);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm joindefs_0 (ATerm t)
{
  ATerm k_9 = t;
  if(PushChoice()==0)
    {
      t = JoinDefs1_0(t);
      PopChoice();
    }
  else
    {
      t = k_9;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm NonOverloadedDef_0 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL;
  u_28 = t;
  n_28 :
  if(match_cons(u_28, sym_TCons_2))
    {
      v_28 = ATgetArgument(u_28, 0);
      i_29 = ATgetArgument(u_28, 1);
      o_28 :
      if(match_cons(v_28, sym_TCons_2))
        {
          c_29 = ATgetArgument(v_28, 0);
          d_29 = ATgetArgument(v_28, 1);
          p_28 :
          if(match_cons(d_29, sym_TCons_2))
            {
              e_29 = ATgetArgument(d_29, 0);
              h_29 = ATgetArgument(d_29, 1);
              q_28 :
              if(match_int(e_29, 0))
                {
                  r_28 :
                  if(match_cons(h_29, sym_TNil_0))
                    {
                      s_28 :
                      if(match_cons(i_29, sym_TCons_2))
                        {
                          j_29 = ATgetArgument(i_29, 0);
                          k_29 = ATgetArgument(i_29, 1);
                          t_28 :
                          if(match_cons(k_29, sym_TNil_0))
                            {
                              t = not_null(j_29);
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  ATerm g_1 (ATerm t)
                                  {
                                    ATerm p_29 = NULL;
                                    p_29 = t;
                                    if(c_29 != NULL && c_29 != p_29)
                                      _fail(p_29);
                                    else
                                      c_29 = p_29;
                                    return(t);
                                  }
                                  t = SDef_3(t, g_1, _id, _id);
                                  return(t);
                                }
                                t = partition_1(t, f_1);
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
ATerm length_0 (ATerm t)
{
  ATerm l_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = (ATerm) ATmakeInt(0);
      PopChoice();
    }
  else
    {
      t = l_9;
      {
        ATerm t_29 = NULL;
        t = Tl_0(t);
        t = length_0(t);
        t_29 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_29), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = add_0(t);
      }
    }
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm w_43 (ATerm), ATerm x_43 (ATerm), ATerm y_43 (ATerm))
{
  ATerm j_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL;
  j_30 = t;
  i_30 :
  if(match_cons(j_30, sym_SDef_3))
    {
      o_30 = ATgetArgument(j_30, 0);
      p_30 = ATgetArgument(j_30, 1);
      q_30 = ATgetArgument(j_30, 2);
      {
        ATerm u_30 = NULL;
        t = not_null(o_30);
        {
          ATerm w_30 = NULL;
          t = w_43(t);
          u_30 = t;
          t = not_null(p_30);
          {
            ATerm y_30 = NULL;
            t = x_43(t);
            w_30 = t;
            t = not_null(q_30);
            t = y_43(t);
            y_30 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(u_30), not_null(w_30), not_null(y_30));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm partition_1 (ATerm t, ATerm x_54 (ATerm))
{
  ATerm d_33 (ATerm t)
  {
    ATerm m_9 = t;
    if(PushChoice()==0)
      {
        ATerm g_32 = NULL;
        g_32 = t;
        r_31 :
        if(match_cons(g_32, sym_Nil_0))
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
        else
          _fail(t);
        PopChoice();
      }
    else
      {
        t = m_9;
        {
          ATerm n_9 = t;
          if(PushChoice()==0)
            {
              ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL;
              t = Cons_2(t, x_54, d_33);
              h_32 = t;
              t_31 :
              if(match_cons(h_32, sym_Cons_2))
                {
                  i_32 = ATgetArgument(h_32, 0);
                  j_32 = ATgetArgument(h_32, 1);
                  u_31 :
                  if(match_cons(j_32, sym_TCons_2))
                    {
                      k_32 = ATgetArgument(j_32, 0);
                      n_32 = ATgetArgument(j_32, 1);
                      v_31 :
                      if(match_cons(n_32, sym_TCons_2))
                        {
                          o_32 = ATgetArgument(n_32, 0);
                          p_32 = ATgetArgument(n_32, 1);
                          w_31 :
                          if(match_cons(p_32, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_32), not_null(k_32)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_32), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
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
              t = n_9;
              {
                ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
                t = Cons_2(t, _id, d_33);
                t_32 = t;
                y_31 :
                if(match_cons(t_32, sym_Cons_2))
                  {
                    u_32 = ATgetArgument(t_32, 0);
                    v_32 = ATgetArgument(t_32, 1);
                    z_31 :
                    if(match_cons(v_32, sym_TCons_2))
                      {
                        w_32 = ATgetArgument(v_32, 0);
                        x_32 = ATgetArgument(v_32, 1);
                        a_32 :
                        if(match_cons(x_32, sym_TCons_2))
                          {
                            y_32 = ATgetArgument(x_32, 0);
                            z_32 = ATgetArgument(x_32, 1);
                            f_32 :
                            if(match_cons(z_32, sym_TNil_0))
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_32), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_32), not_null(y_32)), (ATerm) ATmakeAppl(sym_TNil_0)));
                            else
                              _fail(t);
                          }
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
  t = d_33(t);
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm q_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL;
  q_33 = t;
  k_33 :
  if(match_cons(q_33, sym_TCons_2))
    {
      t_33 = ATgetArgument(q_33, 0);
      y_33 = ATgetArgument(q_33, 1);
      l_33 :
      if(match_cons(t_33, sym_TCons_2))
        {
          u_33 = ATgetArgument(t_33, 0);
          v_33 = ATgetArgument(t_33, 1);
          m_33 :
          if(match_cons(v_33, sym_TCons_2))
            {
              w_33 = ATgetArgument(v_33, 0);
              x_33 = ATgetArgument(v_33, 1);
              n_33 :
              if(match_cons(x_33, sym_TNil_0))
                {
                  o_33 :
                  if(match_cons(y_33, sym_TCons_2))
                    {
                      z_33 = ATgetArgument(y_33, 0);
                      a_34 = ATgetArgument(y_33, 1);
                      p_33 :
                      if(match_cons(a_34, sym_TNil_0))
                        {
                          t = not_null(z_33);
                          {
                            ATerm h_1 (ATerm t)
                            {
                              ATerm i_1 (ATerm t)
                              {
                                ATerm e_34 = NULL;
                                e_34 = t;
                                if(u_33 != NULL && u_33 != e_34)
                                  _fail(e_34);
                                else
                                  u_33 = e_34;
                                return(t);
                              }
                              ATerm j_1 (ATerm t)
                              {
                                ATerm o_9;
                                o_9 = t;
                                {
                                  ATerm f_34 = NULL;
                                  t = length_0(t);
                                  f_34 = t;
                                  if(w_33 != NULL && w_33 != f_34)
                                    _fail(f_34);
                                  else
                                    w_33 = f_34;
                                }
                                t = o_9;
                                return(t);
                              }
                              t = SDef_3(t, i_1, j_1, _id);
                              return(t);
                            }
                            t = partition_1(t, h_1);
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
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL;
  e_35 = t;
  c_35 :
  if(match_cons(e_35, sym_Match_1))
    {
      f_35 = ATgetArgument(e_35, 0);
      {
        ATerm i_35 = NULL,j_35 = NULL,m_35 = NULL,n_35 = NULL,v_35 = NULL;
        ATerm k_35 = NULL;
        ATerm l_35 = NULL;
        t = new_0(t);
        k_35 = t;
        if(i_35 != NULL && i_35 != k_35)
          _fail(k_35);
        else
          i_35 = k_35;
        t = new_0(t);
        l_35 = t;
        if(j_35 != NULL && j_35 != l_35)
          _fail(l_35);
        else
          j_35 = l_35;
        t = not_null(f_35);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm o_35 = NULL,p_35 = NULL,u_35 = NULL;
            o_35 = t;
            p_34 :
            if(match_cons(o_35, sym_Explode_2))
              {
                p_35 = ATgetArgument(o_35, 0);
                u_35 = ATgetArgument(o_35, 1);
                if(m_35 != NULL && m_35 != p_35)
                  _fail(p_35);
                else
                  m_35 = p_35;
                if(n_35 != NULL && n_35 != u_35)
                  _fail(u_35);
                else
                  n_35 = u_35;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_35));
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, k_1);
          v_35 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_35)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_35))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(j_35)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_35)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_35), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_35), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0))))))));
        }
      }
    }
  else
    {
      if(match_cons(e_35, sym_Build_1))
        {
          f_35 = ATgetArgument(e_35, 0);
          {
            ATerm y_35 = NULL,a_36 = NULL,b_36 = NULL,f_36 = NULL;
            ATerm z_35 = NULL;
            t = new_0(t);
            z_35 = t;
            if(y_35 != NULL && y_35 != z_35)
              _fail(z_35);
            else
              y_35 = z_35;
            t = not_null(f_35);
            {
              ATerm l_1 (ATerm t)
              {
                ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
                c_36 = t;
                t_34 :
                if(match_cons(c_36, sym_Explode_2))
                  {
                    d_36 = ATgetArgument(c_36, 0);
                    e_36 = ATgetArgument(c_36, 1);
                    if(a_36 != NULL && a_36 != d_36)
                      _fail(d_36);
                    else
                      a_36 = d_36;
                    if(b_36 != NULL && b_36 != e_36)
                      _fail(e_36);
                    else
                      b_36 = e_36;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_35));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, l_1);
              f_36 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_36), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_36), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_35))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_36)))));
            }
          }
        }
      else
        {
          if(match_cons(e_35, sym_ExplodeCong_2))
            {
              f_35 = ATgetArgument(e_35, 0);
              g_35 = ATgetArgument(e_35, 1);
              {
                ATerm j_36 = NULL,k_36 = NULL,m_36 = NULL,n_36 = NULL;
                ATerm o_36 = NULL;
                ATerm t_36 = NULL;
                t = new_0(t);
                o_36 = t;
                if(j_36 != NULL && j_36 != o_36)
                  _fail(o_36);
                else
                  j_36 = o_36;
                {
                  ATerm u_36 = NULL;
                  t = new_0(t);
                  t_36 = t;
                  if(k_36 != NULL && k_36 != t_36)
                    _fail(t_36);
                  else
                    k_36 = t_36;
                  {
                    ATerm v_36 = NULL;
                    t = new_0(t);
                    u_36 = t;
                    if(m_36 != NULL && m_36 != u_36)
                      _fail(u_36);
                    else
                      m_36 = u_36;
                    t = new_0(t);
                    v_36 = t;
                    if(n_36 != NULL && n_36 != v_36)
                      _fail(v_36);
                    else
                      n_36 = v_36;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_36), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_36), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_36), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_36), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(j_36)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_36)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(f_35), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_36)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_36))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(g_35), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_36)), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_36))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_36)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_36)), (ATerm) ATmakeAppl(sym_Nil_0)))))));
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
  ATerm n_38 = NULL,o_38 = NULL;
  n_38 = t;
  m_38 :
  if(match_cons(n_38, sym_Build_1))
    {
      o_38 = ATgetArgument(n_38, 0);
      {
        ATerm t_38 = NULL,v_38 = NULL,w_38 = NULL,a_39 = NULL;
        ATerm u_38 = NULL;
        t = new_0(t);
        u_38 = t;
        if(t_38 != NULL && t_38 != u_38)
          _fail(u_38);
        else
          t_38 = u_38;
        t = not_null(o_38);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
            x_38 = t;
            k_38 :
            if(match_cons(x_38, sym_App_2))
              {
                y_38 = ATgetArgument(x_38, 0);
                z_38 = ATgetArgument(x_38, 1);
                if(v_38 != NULL && v_38 != y_38)
                  _fail(y_38);
                else
                  v_38 = y_38;
                if(w_38 != NULL && w_38 != z_38)
                  _fail(z_38);
                else
                  w_38 = z_38;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_38));
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, m_1);
          a_39 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_38), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(v_38), not_null(w_38), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_38))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_39))));
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
        ATerm z_39 = NULL,a_40 = NULL,f_40 = NULL;
        t = not_null(x_39);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL;
            b_40 = t;
            s_39 :
            if(match_cons(b_40, sym_App_2))
              {
                c_40 = ATgetArgument(b_40, 0);
                e_40 = ATgetArgument(b_40, 1);
                t_39 :
                if(match_cons(c_40, sym_Build_1))
                  {
                    d_40 = ATgetArgument(c_40, 0);
                    if(a_40 != NULL && a_40 != d_40)
                      _fail(d_40);
                    else
                      a_40 = d_40;
                    if(z_39 != NULL && z_39 != e_40)
                      _fail(e_40);
                    else
                      z_39 = e_40;
                    t = not_null(a_40);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, n_1);
          f_40 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, not_null(f_40));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL;
  d_41 = t;
  x_40 :
  if(match_cons(d_41, sym_Seqs_1))
    {
      e_41 = ATgetArgument(d_41, 0);
      y_40 :
      if(match_cons(e_41, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(e_41, sym_Cons_2))
            {
              b_41 = ATgetArgument(e_41, 0);
              c_41 = ATgetArgument(e_41, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_41), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(c_41)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(d_41, sym_Choices_1))
        {
          e_41 = ATgetArgument(d_41, 0);
          z_40 :
          if(match_cons(e_41, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(e_41, sym_Cons_2))
                {
                  b_41 = ATgetArgument(e_41, 0);
                  c_41 = ATgetArgument(e_41, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(b_41), (ATerm) ATmakeAppl(sym_Choices_1, not_null(c_41)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(d_41, sym_LChoices_1))
            {
              e_41 = ATgetArgument(d_41, 0);
              a_41 :
              if(match_cons(e_41, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(e_41, sym_Cons_2))
                    {
                      b_41 = ATgetArgument(e_41, 0);
                      c_41 = ATgetArgument(e_41, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(b_41), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(c_41)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(d_41, sym_Lets_2))
                {
                  e_41 = ATgetArgument(d_41, 0);
                  f_41 = ATgetArgument(d_41, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(e_41), not_null(f_41));
                }
              else
                {
                  if(match_cons(d_41, sym_BA_2))
                    {
                      e_41 = ATgetArgument(d_41, 0);
                      f_41 = ATgetArgument(d_41, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_41)), not_null(e_41));
                    }
                  else
                    {
                      if(match_cons(d_41, sym_MA_2))
                        {
                          e_41 = ATgetArgument(d_41, 0);
                          f_41 = ATgetArgument(d_41, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_41)), not_null(f_41));
                        }
                      else
                        {
                          if(match_cons(d_41, sym_AM_2))
                            {
                              e_41 = ATgetArgument(d_41, 0);
                              f_41 = ATgetArgument(d_41, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_41), (ATerm) ATmakeAppl(sym_Match_1, not_null(f_41)));
                            }
                          else
                            {
                              if(match_cons(d_41, sym_BAM_3))
                                {
                                  e_41 = ATgetArgument(d_41, 0);
                                  f_41 = ATgetArgument(d_41, 1);
                                  g_41 = ATgetArgument(d_41, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_41)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_41), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_41)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(d_41, sym_InfixApp_3))
                                    {
                                      e_41 = ATgetArgument(d_41, 0);
                                      f_41 = ATgetArgument(d_41, 1);
                                      g_41 = ATgetArgument(d_41, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(f_41), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_41), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_41), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
ATerm repeat_2 (ATerm t, ATerm h_50 (ATerm), ATerm i_50 (ATerm))
{
  ATerm s_42 (ATerm t)
  {
    ATerm p_9 = t;
    if(PushChoice()==0)
      {
        t = h_50(t);
        t = s_42(t);
        PopChoice();
      }
    else
      {
        t = p_9;
        t = i_50(t);
      }
    return(t);
  }
  t = s_42(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm k_50 (ATerm))
{
  t = repeat_2(t, k_50, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm u_42 = NULL;
  u_42 = t;
  t_42 :
  if(!(match_cons(u_42, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm q_9 = t;
  if(PushChoice()==0)
    {
      ATerm o_1 (ATerm t)
      {
        ATerm r_9 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = r_9;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, o_1);
      PopChoice();
      _fail(t);
    }
  else
    t = q_9;
  return(t);
}
ATerm App_2 (ATerm t, ATerm t_41 (ATerm), ATerm u_41 (ATerm))
{
  ATerm z_42 = NULL,b_43 = NULL,d_43 = NULL;
  z_42 = t;
  y_42 :
  if(match_cons(z_42, sym_App_2))
    {
      b_43 = ATgetArgument(z_42, 0);
      d_43 = ATgetArgument(z_42, 1);
      {
        ATerm g_43 = NULL;
        t = not_null(b_43);
        {
          ATerm i_43 = NULL;
          t = t_41(t);
          g_43 = t;
          t = not_null(d_43);
          t = u_41(t);
          i_43 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, not_null(g_43), not_null(i_43));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm q_41 (ATerm), ATerm r_41 (ATerm), ATerm s_41 (ATerm))
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL;
  z_43 = t;
  r_43 :
  if(match_cons(z_43, sym_Con_3))
    {
      a_44 = ATgetArgument(z_43, 0);
      b_44 = ATgetArgument(z_43, 1);
      c_44 = ATgetArgument(z_43, 2);
      {
        ATerm g_44 = NULL;
        t = not_null(a_44);
        {
          ATerm i_44 = NULL;
          t = q_41(t);
          g_44 = t;
          t = not_null(b_44);
          {
            ATerm k_44 = NULL;
            t = r_41(t);
            i_44 = t;
            t = not_null(c_44);
            t = s_41(t);
            k_44 = t;
            t = (ATerm) ATmakeAppl(sym_Con_3, not_null(g_44), not_null(i_44), not_null(k_44));
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
  ATerm s_9 = t;
  if(PushChoice()==0)
    {
      ATerm p_1 (ATerm t)
      {
        ATerm t_9 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = t_9;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, p_1);
      PopChoice();
      _fail(t);
    }
  else
    t = s_9;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL;
  u_44 = t;
  s_44 :
  if(match_cons(u_44, sym_SRule_1))
    {
      v_44 = ATgetArgument(u_44, 0);
      t_44 :
      if(match_cons(v_44, sym_Rule_3))
        {
          y_44 = ATgetArgument(v_44, 0);
          z_44 = ATgetArgument(v_44, 1);
          a_45 = ATgetArgument(v_44, 2);
          t = not_null(y_44);
          t = pureterm_0(t);
          t = not_null(z_44);
          t = buildterm_0(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(y_44)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_45), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_44)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(v_44, sym_StratRule_3))
            {
              y_44 = ATgetArgument(v_44, 0);
              z_44 = ATgetArgument(v_44, 1);
              a_45 = ATgetArgument(v_44, 2);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_44), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_45), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_44), (ATerm) ATmakeAppl(sym_Nil_0)))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm w_44 (ATerm), ATerm x_44 (ATerm))
{
  ATerm v_45 = NULL,w_45 = NULL,a_46 = NULL;
  v_45 = t;
  u_45 :
  if(match_cons(v_45, sym_Scope_2))
    {
      w_45 = ATgetArgument(v_45, 0);
      a_46 = ATgetArgument(v_45, 1);
      {
        ATerm d_46 = NULL;
        t = not_null(w_45);
        {
          ATerm f_46 = NULL;
          t = w_44(t);
          d_46 = t;
          t = not_null(a_46);
          t = x_44(t);
          f_46 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_46), not_null(f_46));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm h_64 (ATerm))
{
  ATerm k_46 (ATerm t)
  {
    ATerm u_9 = t;
    if(PushChoice()==0)
      {
        t = h_64(t);
        PopChoice();
      }
    else
      {
        t = u_9;
        t = _one(t, k_46);
      }
    return(t);
  }
  t = k_46(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL;
  z_46 = t;
  x_46 :
  if(match_cons(z_46, sym_SRule_1))
    {
      a_47 = ATgetArgument(z_46, 0);
      y_46 :
      if(match_cons(a_47, sym_Rule_3))
        {
          b_47 = ATgetArgument(a_47, 0);
          c_47 = ATgetArgument(a_47, 1);
          d_47 = ATgetArgument(a_47, 2);
          {
            ATerm h_47 = NULL,p_47 = NULL,q_47 = NULL,s_47 = NULL,e_48 = NULL;
            ATerm o_47 = NULL;
            t = new_0(t);
            o_47 = t;
            if(h_47 != NULL && h_47 != o_47)
              _fail(o_47);
            else
              h_47 = o_47;
            t = not_null(b_47);
            {
              ATerm g_48 = NULL,h_48 = NULL,r_48 = NULL;
              ATerm q_1 (ATerm t)
              {
                ATerm u_47 = NULL,v_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL;
                u_47 = t;
                o_46 :
                if(match_cons(u_47, sym_Con_3))
                  {
                    v_47 = ATgetArgument(u_47, 0);
                    z_47 = ATgetArgument(u_47, 1);
                    a_48 = ATgetArgument(u_47, 2);
                    p_46 :
                    if(match_cons(v_47, sym_Var_1))
                      {
                        y_47 = ATgetArgument(v_47, 0);
                        if(s_47 != NULL && s_47 != y_47)
                          _fail(y_47);
                        else
                          s_47 = y_47;
                        if(p_47 != NULL && p_47 != z_47)
                          _fail(z_47);
                        else
                          p_47 = z_47;
                        if(q_47 != NULL && q_47 != a_48)
                          _fail(a_48);
                        else
                          q_47 = a_48;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_47));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, q_1);
              e_48 = t;
              t = not_null(c_47);
              {
                ATerm r_1 (ATerm t)
                {
                  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL;
                  i_48 = t;
                  s_46 :
                  if(match_cons(i_48, sym_Con_3))
                    {
                      j_48 = ATgetArgument(i_48, 0);
                      l_48 = ATgetArgument(i_48, 1);
                      o_48 = ATgetArgument(i_48, 2);
                      t_46 :
                      if(match_cons(j_48, sym_Var_1))
                        {
                          k_48 = ATgetArgument(j_48, 0);
                          u_46 :
                          if(match_cons(o_48, sym_Call_2))
                            {
                              p_48 = ATgetArgument(o_48, 0);
                              q_48 = ATgetArgument(o_48, 1);
                              v_46 :
                              if(match_cons(q_48, sym_Nil_0))
                                {
                                  if(s_47 != NULL && s_47 != k_48)
                                    _fail(k_48);
                                  else
                                    s_47 = k_48;
                                  if(g_48 != NULL && g_48 != l_48)
                                    _fail(l_48);
                                  else
                                    g_48 = l_48;
                                  if(h_48 != NULL && h_48 != p_48)
                                    _fail(p_48);
                                  else
                                    h_48 = p_48;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_47));
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, r_1);
                r_48 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_47), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_48), not_null(r_48), (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_47), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(h_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_47), not_null(g_48), (ATerm) ATmakeAppl(sym_Id_0))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Var_1, not_null(s_47)), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_47)))))));
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
  ATerm s_1 (ATerm t)
  {
    ATerm v_9 = t;
    if(PushChoice()==0)
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      {
        t = v_9;
        {
          ATerm w_9 = t;
          if(PushChoice()==0)
            {
              t = Scope_2(t, _id, desugarRule_0);
              PopChoice();
            }
          else
            {
              t = w_9;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, s_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm r_62 (ATerm))
{
  ATerm a_49 (ATerm t)
  {
    t = r_62(t);
    t = _all(t, a_49);
    return(t);
  }
  t = a_49(t);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm c_2 (ATerm t)
      {
        ATerm x_9 = t;
        if(PushChoice()==0)
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = x_9;
            {
              ATerm z_9 = t;
              if(PushChoice()==0)
                {
                  ATerm a_10 = t;
                  if(PushChoice()==0)
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = a_10;
                      {
                        ATerm b_10 = t;
                        if(PushChoice()==0)
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = b_10;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = z_9;
                  t = Expl_0(t);
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, c_2);
    }
    return(t);
  }
  t = topdown_1(t, b_2);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_10 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = c_10;
      {
        ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL;
        d_49 = t;
        c_49 :
        if(match_cons(d_49, sym_Cons_2))
          {
            e_49 = ATgetArgument(d_49, 0);
            f_49 = ATgetArgument(d_49, 1);
            t = not_null(e_49);
            {
              ATerm d_2 (ATerm t)
              {
                t = not_null(f_49);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, d_2);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_59 (ATerm))
{
  ATerm k_49 (ATerm t)
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
        t = Cons_2(t, z_59, k_49);
      }
    return(t);
  }
  t = k_49(t);
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL;
  n_49 = t;
  m_49 :
  if(match_cons(n_49, sym_TCons_2))
    {
      o_49 = ATgetArgument(n_49, 0);
      p_49 = ATgetArgument(n_49, 1);
      t = not_null(p_49);
    }
  else
    _fail(t);
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL;
  v_49 = t;
  u_49 :
  if(match_cons(v_49, sym_TCons_2))
    {
      w_49 = ATgetArgument(v_49, 0);
      x_49 = ATgetArgument(v_49, 1);
      t = not_null(w_49);
    }
  else
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm s_59 (ATerm))
{
  ATerm q_50 (ATerm t)
  {
    ATerm j_10 = t;
    if(PushChoice()==0)
      {
        ATerm f_50 = NULL,g_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
        ATerm e_2 (ATerm t)
        {
          t = map_1(t, Thd_0);
          return(t);
        }
        ATerm q_2 (ATerm t)
        {
          t = map_1(t, Ttl_0);
          return(t);
        }
        t = split_2(t, e_2, q_2);
        {
          ATerm r_2 (ATerm t)
          {
            t = TCons_2(t, q_50, TNil_0);
            return(t);
          }
          t = TCons_2(t, s_59, r_2);
          f_50 = t;
          c_50 :
          if(match_cons(f_50, sym_TCons_2))
            {
              g_50 = ATgetArgument(f_50, 0);
              l_50 = ATgetArgument(f_50, 1);
              d_50 :
              if(match_cons(l_50, sym_TCons_2))
                {
                  m_50 = ATgetArgument(l_50, 0);
                  n_50 = ATgetArgument(l_50, 1);
                  e_50 :
                  if(match_cons(n_50, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_50), not_null(m_50));
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
        t = j_10;
        t = map_1(t, TNil_0);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
      }
    return(t);
  }
  t = q_50(t);
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL;
  f_51 = t;
  w_50 :
  if(match_cons(f_51, sym_TCons_2))
    {
      g_51 = ATgetArgument(f_51, 0);
      h_51 = ATgetArgument(f_51, 1);
      x_50 :
      if(match_cons(h_51, sym_TCons_2))
        {
          i_51 = ATgetArgument(h_51, 0);
          j_51 = ATgetArgument(h_51, 1);
          e_51 :
          if(match_cons(j_51, sym_TNil_0))
            {
              ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL;
              ATerm p_51 = NULL;
              ATerm q_51 = NULL;
              t = new_0(t);
              p_51 = t;
              if(m_51 != NULL && m_51 != p_51)
                _fail(p_51);
              else
                m_51 = p_51;
              {
                ATerm r_51 = NULL;
                t = new_0(t);
                q_51 = t;
                if(n_51 != NULL && n_51 != q_51)
                  _fail(q_51);
                else
                  n_51 = q_51;
                t = new_0(t);
                r_51 = t;
                if(o_51 != NULL && o_51 != r_51)
                  _fail(r_51);
                else
                  o_51 = r_51;
              }
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_51)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_51)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_51)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_51)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_51)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(m_51), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_51), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_51)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_51), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_51)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
            }
          else
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
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL;
  b_52 = t;
  x_51 :
  if(match_cons(b_52, sym_TCons_2))
    {
      c_52 = ATgetArgument(b_52, 0);
      d_52 = ATgetArgument(b_52, 1);
      y_51 :
      if(match_cons(d_52, sym_TCons_2))
        {
          e_52 = ATgetArgument(d_52, 0);
          f_52 = ATgetArgument(d_52, 1);
          z_51 :
          if(match_cons(e_52, sym_Nil_0))
            {
              a_52 :
              if(match_cons(f_52, sym_TNil_0))
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
ATerm zipr_1 (ATerm t, ATerm r_58 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, r_58);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL;
  j_52 = t;
  i_52 :
  if(match_cons(j_52, sym_Cons_2))
    {
      k_52 = ATgetArgument(j_52, 0);
      l_52 = ATgetArgument(j_52, 1);
      t = not_null(l_52);
    }
  else
    _fail(t);
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL;
  s_52 = t;
  q_52 :
  if(match_cons(s_52, sym_Cons_2))
    {
      t_52 = ATgetArgument(s_52, 0);
      u_52 = ATgetArgument(s_52, 1);
      r_52 :
      if(match_cons(u_52, sym_Nil_0))
        t = not_null(t_52);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm last_0 (ATerm t)
{
  ATerm k_10 = t;
  if(PushChoice()==0)
    {
      t = Last_0(t);
      PopChoice();
    }
  else
    {
      t = k_10;
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
  ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL;
  h_53 = t;
  e_53 :
  if(match_cons(h_53, sym_TCons_2))
    {
      i_53 = ATgetArgument(h_53, 0);
      j_53 = ATgetArgument(h_53, 1);
      f_53 :
      if(match_cons(j_53, sym_TCons_2))
        {
          k_53 = ATgetArgument(j_53, 0);
          l_53 = ATgetArgument(j_53, 1);
          g_53 :
          if(match_cons(l_53, sym_TNil_0))
            {
              ATerm p_10 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(i_53), not_null(k_53));
                  PopChoice();
                }
              else
                {
                  t = p_10;
                  t = SSL_subtr(not_null(i_53), not_null(k_53));
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
  ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL;
  t_53 = t;
  q_53 :
  if(match_cons(t_53, sym_TCons_2))
    {
      u_53 = ATgetArgument(t_53, 0);
      v_53 = ATgetArgument(t_53, 1);
      r_53 :
      if(match_cons(v_53, sym_TCons_2))
        {
          w_53 = ATgetArgument(v_53, 0);
          x_53 = ATgetArgument(v_53, 1);
          s_53 :
          if(match_cons(x_53, sym_TNil_0))
            {
              ATerm q_10;
              q_10 = t;
              {
                ATerm r_10 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(u_53), not_null(w_53));
                    PopChoice();
                  }
                else
                  {
                    t = r_10;
                    t = SSL_gtr(not_null(u_53), not_null(w_53));
                  }
              }
              t = q_10;
            }
          else
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
  ATerm f_54 = NULL;
  ATerm s_10 = t;
  if(PushChoice()==0)
    {
      ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL;
      g_54 = t;
      c_54 :
      if(match_cons(g_54, sym_TCons_2))
        {
          h_54 = ATgetArgument(g_54, 0);
          i_54 = ATgetArgument(g_54, 1);
          d_54 :
          if(match_cons(i_54, sym_TCons_2))
            {
              j_54 = ATgetArgument(i_54, 0);
              k_54 = ATgetArgument(i_54, 1);
              e_54 :
              if(match_cons(k_54, sym_TNil_0))
                {
                  if(f_54 != NULL && f_54 != h_54)
                    _fail(h_54);
                  else
                    f_54 = h_54;
                  if(f_54 != NULL && f_54 != j_54)
                    _fail(j_54);
                  else
                    f_54 = j_54;
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
      t = s_10;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm c_56 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL;
    o_55 = t;
    n_54 :
    if(match_cons(o_55, sym_TCons_2))
      {
        p_55 = ATgetArgument(o_55, 0);
        q_55 = ATgetArgument(o_55, 1);
        q_54 :
        if(match_cons(q_55, sym_TCons_2))
          {
            r_55 = ATgetArgument(q_55, 0);
            s_55 = ATgetArgument(q_55, 1);
            r_54 :
            if(match_cons(s_55, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_55), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
            else
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
    ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,d_56 = NULL;
    v_55 = t;
    t_54 :
    if(match_cons(v_55, sym_TCons_2))
      {
        w_55 = ATgetArgument(v_55, 0);
        x_55 = ATgetArgument(v_55, 1);
        u_54 :
        if(match_int(w_55, 0))
          {
            v_54 :
            if(match_cons(x_55, sym_TCons_2))
              {
                y_55 = ATgetArgument(x_55, 0);
                z_55 = ATgetArgument(x_55, 1);
                w_54 :
                if(match_cons(z_55, sym_TCons_2))
                  {
                    a_56 = ATgetArgument(z_55, 0);
                    d_56 = ATgetArgument(z_55, 1);
                    z_54 :
                    if(match_cons(d_56, sym_TNil_0))
                      t = not_null(a_56);
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,n_56 = NULL;
    g_56 = t;
    d_55 :
    if(match_cons(g_56, sym_TCons_2))
      {
        h_56 = ATgetArgument(g_56, 0);
        i_56 = ATgetArgument(g_56, 1);
        e_55 :
        if(match_cons(i_56, sym_TCons_2))
          {
            j_56 = ATgetArgument(i_56, 0);
            k_56 = ATgetArgument(i_56, 1);
            f_55 :
            if(match_cons(k_56, sym_TCons_2))
              {
                l_56 = ATgetArgument(k_56, 0);
                n_56 = ATgetArgument(k_56, 1);
                g_55 :
                if(match_cons(n_56, sym_TNil_0))
                  {
                    ATerm z_56 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = geq_0(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm e_57 = NULL;
                      t = subt_0(t);
                      z_56 = t;
                      t = not_null(j_56);
                      t = c_56(t);
                      e_57 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_56), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_57), not_null(l_56)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  t = for_3(t, s_2, t_2, u_2);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL;
  q_57 = t;
  n_57 :
  if(match_cons(q_57, sym_TCons_2))
    {
      r_57 = ATgetArgument(q_57, 0);
      s_57 = ATgetArgument(q_57, 1);
      o_57 :
      if(match_cons(s_57, sym_TCons_2))
        {
          t_57 = ATgetArgument(s_57, 0);
          u_57 = ATgetArgument(s_57, 1);
          p_57 :
          if(match_cons(u_57, sym_TNil_0))
            {
              ATerm t_10 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(r_57), not_null(t_57));
                  PopChoice();
                }
              else
                {
                  t = t_10;
                  t = SSL_addr(not_null(r_57), not_null(t_57));
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
  ATerm c_58 = NULL;
  ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL;
  c_58 = t;
  {
    ATerm h_58 = NULL;
    ATerm i_58 = NULL;
    t = new_0(t);
    h_58 = t;
    if(e_58 != NULL && e_58 != h_58)
      _fail(h_58);
    else
      e_58 = h_58;
    {
      ATerm p_58 = NULL;
      t = new_0(t);
      i_58 = t;
      if(f_58 != NULL && f_58 != i_58)
        _fail(i_58);
      else
        f_58 = i_58;
      t = new_0(t);
      p_58 = t;
      if(g_58 != NULL && g_58 != p_58)
        _fail(p_58);
      else
        g_58 = p_58;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_58)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_58)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_58), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_58))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(e_58), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_58)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_58)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
  }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL;
  ATerm k_63 (ATerm t)
  {
    ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,g_63 = NULL;
    ATerm l_62 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_60), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL;
      t = add_0(t);
      l_62 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_62), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TNil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = copy_1(t, new_0);
      n_62 = t;
      w_59 :
      if(match_cons(n_62, sym_Cons_2))
        {
          o_62 = ATgetArgument(n_62, 0);
          p_62 = ATgetArgument(n_62, 1);
          {
            ATerm q_62 = NULL;
            if(c_62 != NULL && c_62 != o_62)
              _fail(o_62);
            else
              c_62 = o_62;
            if(d_62 != NULL && d_62 != p_62)
              _fail(p_62);
            else
              d_62 = p_62;
            t = not_null(d_62);
            {
              ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL;
              t = last_0(t);
              q_62 = t;
              if(b_62 != NULL && b_62 != q_62)
                _fail(q_62);
              else
                b_62 = q_62;
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_62), not_null(d_62)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_62), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = zipr_1(t, MkThreadApplication_0);
              t = tuple_unzip_1(t, _id);
              t_62 = t;
              n_59 :
              if(match_cons(t_62, sym_TCons_2))
                {
                  u_62 = ATgetArgument(t_62, 0);
                  v_62 = ATgetArgument(t_62, 1);
                  o_59 :
                  if(match_cons(v_62, sym_TCons_2))
                    {
                      w_62 = ATgetArgument(v_62, 0);
                      x_62 = ATgetArgument(v_62, 1);
                      p_59 :
                      if(match_cons(x_62, sym_TCons_2))
                        {
                          y_62 = ATgetArgument(x_62, 0);
                          z_62 = ATgetArgument(x_62, 1);
                          q_59 :
                          if(match_cons(z_62, sym_TCons_2))
                            {
                              a_63 = ATgetArgument(z_62, 0);
                              b_63 = ATgetArgument(z_62, 1);
                              r_59 :
                              if(match_cons(b_63, sym_TCons_2))
                                {
                                  c_63 = ATgetArgument(b_63, 0);
                                  d_63 = ATgetArgument(b_63, 1);
                                  u_59 :
                                  if(match_cons(d_63, sym_TCons_2))
                                    {
                                      e_63 = ATgetArgument(d_63, 0);
                                      f_63 = ATgetArgument(d_63, 1);
                                      v_59 :
                                      if(match_cons(f_63, sym_TNil_0))
                                        {
                                          if(e_62 != NULL && e_62 != u_62)
                                            _fail(u_62);
                                          else
                                            e_62 = u_62;
                                          if(f_62 != NULL && f_62 != w_62)
                                            _fail(w_62);
                                          else
                                            f_62 = w_62;
                                          if(h_62 != NULL && h_62 != y_62)
                                            _fail(y_62);
                                          else
                                            h_62 = y_62;
                                          if(i_62 != NULL && i_62 != a_63)
                                            _fail(a_63);
                                          else
                                            i_62 = a_63;
                                          if(j_62 != NULL && j_62 != c_63)
                                            _fail(c_63);
                                          else
                                            j_62 = c_63;
                                          if(k_62 != NULL && k_62 != e_63)
                                            _fail(e_63);
                                          else
                                            k_62 = e_63;
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
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
    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_62), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_62), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_62), (ATerm) ATmakeAppl(sym_Nil_0))));
    t = concat_0(t);
    g_63 = t;
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(m_60), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), not_null(f_62), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_62), not_null(g_63)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(m_60), not_null(i_62)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_62)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(m_60), not_null(k_62)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_62)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(e_62))))));
    return(t);
  }
  l_60 = t;
  y_59 :
  if(match_cons(l_60, sym_TCons_2))
    {
      m_60 = ATgetArgument(l_60, 0);
      n_60 = ATgetArgument(l_60, 1);
      b_60 :
      if(match_cons(n_60, sym_TCons_2))
        {
          q_60 = ATgetArgument(n_60, 0);
          r_60 = ATgetArgument(n_60, 1);
          c_60 :
          if(match_string(q_60, "D"))
            {
              d_60 :
              if(match_cons(r_60, sym_TCons_2))
                {
                  s_60 = ATgetArgument(r_60, 0);
                  t_60 = ATgetArgument(r_60, 1);
                  e_60 :
                  if(match_cons(t_60, sym_TNil_0))
                    {
                      ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,u_61 = NULL;
                      ATerm d_61 = NULL;
                      ATerm e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL;
                      t = new_0(t);
                      d_61 = t;
                      if(w_60 != NULL && w_60 != d_61)
                        _fail(d_61);
                      else
                        w_60 = d_61;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_60), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_60)), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = copy_1(t, MkDistApplication_0);
                      t = tuple_unzip_1(t, _id);
                      e_61 = t;
                      a_59 :
                      if(match_cons(e_61, sym_TCons_2))
                        {
                          f_61 = ATgetArgument(e_61, 0);
                          g_61 = ATgetArgument(e_61, 1);
                          b_59 :
                          if(match_cons(g_61, sym_TCons_2))
                            {
                              h_61 = ATgetArgument(g_61, 0);
                              i_61 = ATgetArgument(g_61, 1);
                              c_59 :
                              if(match_cons(i_61, sym_TCons_2))
                                {
                                  j_61 = ATgetArgument(i_61, 0);
                                  l_61 = ATgetArgument(i_61, 1);
                                  d_59 :
                                  if(match_cons(l_61, sym_TCons_2))
                                    {
                                      m_61 = ATgetArgument(l_61, 0);
                                      n_61 = ATgetArgument(l_61, 1);
                                      e_59 :
                                      if(match_cons(n_61, sym_TCons_2))
                                        {
                                          q_61 = ATgetArgument(n_61, 0);
                                          r_61 = ATgetArgument(n_61, 1);
                                          f_59 :
                                          if(match_cons(r_61, sym_TCons_2))
                                            {
                                              s_61 = ATgetArgument(r_61, 0);
                                              t_61 = ATgetArgument(r_61, 1);
                                              g_59 :
                                              if(match_cons(t_61, sym_TNil_0))
                                                {
                                                  if(x_60 != NULL && x_60 != f_61)
                                                    _fail(f_61);
                                                  else
                                                    x_60 = f_61;
                                                  if(y_60 != NULL && y_60 != h_61)
                                                    _fail(h_61);
                                                  else
                                                    y_60 = h_61;
                                                  if(z_60 != NULL && z_60 != j_61)
                                                    _fail(j_61);
                                                  else
                                                    z_60 = j_61;
                                                  if(a_61 != NULL && a_61 != m_61)
                                                    _fail(m_61);
                                                  else
                                                    a_61 = m_61;
                                                  if(b_61 != NULL && b_61 != q_61)
                                                    _fail(q_61);
                                                  else
                                                    b_61 = q_61;
                                                  if(c_61 != NULL && c_61 != s_61)
                                                    _fail(s_61);
                                                  else
                                                    c_61 = s_61;
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_60), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_61), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = conc_0(t);
                      u_61 = t;
                      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(m_60), (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue))), not_null(y_60), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_60), not_null(u_61)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(m_60), not_null(a_61)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_60)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(m_60), not_null(c_61)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(x_60))))));
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            {
              if(match_string(q_60, "T"))
                {
                  f_60 :
                  if(match_cons(r_60, sym_TCons_2))
                    {
                      s_60 = ATgetArgument(r_60, 0);
                      t_60 = ATgetArgument(r_60, 1);
                      g_60 :
                      if(match_cons(t_60, sym_TNil_0))
                        {
                          k_60 :
                          if(match_int(s_60, 0))
                            {
                              ATerm u_10 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm x_61 = NULL;
                                  ATerm y_61 = NULL;
                                  t = new_0(t);
                                  y_61 = t;
                                  if(x_61 != NULL && x_61 != y_61)
                                    _fail(y_61);
                                  else
                                    x_61 = y_61;
                                  t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(m_60), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_61), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(m_60), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_61)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(m_60), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_61)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Id_0)))));
                                  PopChoice();
                                }
                              else
                                {
                                  t = u_10;
                                  t = k_63(t);
                                }
                            }
                          else
                            t = k_63(t);
                        }
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
  ATerm d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL;
  d_64 = t;
  w_63 :
  if(match_cons(d_64, sym_TCons_2))
    {
      e_64 = ATgetArgument(d_64, 0);
      n_64 = ATgetArgument(d_64, 1);
      x_63 :
      if(match_cons(e_64, sym_TCons_2))
        {
          f_64 = ATgetArgument(e_64, 0);
          k_64 = ATgetArgument(e_64, 1);
          y_63 :
          if(match_cons(f_64, sym_Mod_2))
            {
              g_64 = ATgetArgument(f_64, 0);
              j_64 = ATgetArgument(f_64, 1);
              z_63 :
              if(match_cons(k_64, sym_TCons_2))
                {
                  l_64 = ATgetArgument(k_64, 0);
                  m_64 = ATgetArgument(k_64, 1);
                  a_64 :
                  if(match_cons(m_64, sym_TNil_0))
                    {
                      b_64 :
                      if(match_cons(n_64, sym_TCons_2))
                        {
                          o_64 = ATgetArgument(n_64, 0);
                          p_64 = ATgetArgument(n_64, 1);
                          c_64 :
                          if(match_cons(p_64, sym_TNil_0))
                            {
                              ATerm w_64 = NULL;
                              ATerm x_64 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_64), (ATerm) ATmakeAppl(sym_TNil_0))));
                              t = DefineCongruence_0(t);
                              t = desugar_0(t);
                              x_64 = t;
                              if(w_64 != NULL && w_64 != x_64)
                                _fail(x_64);
                              else
                                w_64 = x_64;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_64), (ATerm) ATmakeAppl(sym_TNil_0)));
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm v_10 = t;
  if(PushChoice()==0)
    {
      t = CongruenceDef_0(t);
      PopChoice();
    }
  else
    {
      t = v_10;
      {
        ATerm w_10 = t;
        if(PushChoice()==0)
          {
            t = OverloadedDef_0(t);
            {
              ATerm g_3 (ATerm t)
              {
                t = TCons_2(t, _id, TNil_0);
                return(t);
              }
              t = TCons_2(t, joindefs_0, g_3);
            }
            PopChoice();
          }
        else
          {
            t = w_10;
            t = NonOverloadedDef_0(t);
            {
              ATerm h_3 (ATerm t)
              {
                t = TCons_2(t, _id, TNil_0);
                return(t);
              }
              t = TCons_2(t, joindefs_0, h_3);
            }
          }
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL;
  i_65 = t;
  b_65 :
  if(match_cons(i_65, sym_TCons_2))
    {
      j_65 = ATgetArgument(i_65, 0);
      m_65 = ATgetArgument(i_65, 1);
      c_65 :
      if(match_cons(j_65, sym_Cons_2))
        {
          k_65 = ATgetArgument(j_65, 0);
          l_65 = ATgetArgument(j_65, 1);
          d_65 :
          if(match_cons(m_65, sym_TCons_2))
            {
              n_65 = ATgetArgument(m_65, 0);
              o_65 = ATgetArgument(m_65, 1);
              e_65 :
              if(match_cons(o_65, sym_TCons_2))
                {
                  p_65 = ATgetArgument(o_65, 0);
                  q_65 = ATgetArgument(o_65, 1);
                  f_65 :
                  if(match_cons(q_65, sym_TCons_2))
                    {
                      r_65 = ATgetArgument(q_65, 0);
                      x_65 = ATgetArgument(q_65, 1);
                      g_65 :
                      if(match_cons(x_65, sym_TCons_2))
                        {
                          y_65 = ATgetArgument(x_65, 0);
                          z_65 = ATgetArgument(x_65, 1);
                          h_65 :
                          if(match_cons(z_65, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_65), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_65), not_null(y_65)), (ATerm) ATmakeAppl(sym_TNil_0))))));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_60 (ATerm))
{
  ATerm h_66 (ATerm t)
  {
    ATerm x_10 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, h_66);
        PopChoice();
      }
    else
      {
        t = x_10;
        t = Nil_0(t);
        t = o_60(t);
      }
    return(t);
  }
  t = h_66(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL,s_66 = NULL,t_66 = NULL;
  m_66 = t;
  j_66 :
  if(match_cons(m_66, sym_TCons_2))
    {
      n_66 = ATgetArgument(m_66, 0);
      o_66 = ATgetArgument(m_66, 1);
      k_66 :
      if(match_cons(o_66, sym_TCons_2))
        {
          s_66 = ATgetArgument(o_66, 0);
          t_66 = ATgetArgument(o_66, 1);
          l_66 :
          if(match_cons(t_66, sym_TNil_0))
            {
              t = not_null(n_66);
              {
                ATerm i_3 (ATerm t)
                {
                  t = not_null(s_66);
                  return(t);
                }
                t = at_end_1(t, i_3);
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
ATerm HdMember_1 (ATerm t, ATerm r_56 (ATerm))
{
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL;
  a_67 = t;
  z_66 :
  if(match_cons(a_67, sym_Cons_2))
    {
      b_67 = ATgetArgument(a_67, 0);
      c_67 = ATgetArgument(a_67, 1);
      t = r_56(t);
      {
        ATerm j_3 (ATerm t)
        {
          ATerm f_67 = NULL;
          f_67 = t;
          if(b_67 != NULL && b_67 != f_67)
            _fail(f_67);
          else
            b_67 = f_67;
          return(t);
        }
        t = fetch_1(t, j_3);
      }
      t = not_null(c_67);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL;
  n_67 = t;
  j_67 :
  if(match_cons(n_67, sym_TCons_2))
    {
      o_67 = ATgetArgument(n_67, 0);
      p_67 = ATgetArgument(n_67, 1);
      k_67 :
      if(match_cons(p_67, sym_TCons_2))
        {
          q_67 = ATgetArgument(p_67, 0);
          t_67 = ATgetArgument(p_67, 1);
          l_67 :
          if(match_cons(q_67, sym_Cons_2))
            {
              r_67 = ATgetArgument(q_67, 0);
              s_67 = ATgetArgument(q_67, 1);
              m_67 :
              if(match_cons(t_67, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_67), not_null(o_67)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_67), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL;
  c_68 = t;
  z_67 :
  if(match_cons(c_68, sym_TCons_2))
    {
      d_68 = ATgetArgument(c_68, 0);
      e_68 = ATgetArgument(c_68, 1);
      a_68 :
      if(match_cons(e_68, sym_TCons_2))
        {
          f_68 = ATgetArgument(e_68, 0);
          g_68 = ATgetArgument(e_68, 1);
          b_68 :
          if(match_cons(g_68, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_68), not_null(f_68));
          else
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
  ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL;
  q_68 = t;
  l_68 :
  if(match_cons(q_68, sym_TCons_2))
    {
      r_68 = ATgetArgument(q_68, 0);
      u_68 = ATgetArgument(q_68, 1);
      m_68 :
      if(match_cons(r_68, sym_Cons_2))
        {
          s_68 = ATgetArgument(r_68, 0);
          t_68 = ATgetArgument(r_68, 1);
          n_68 :
          if(match_cons(u_68, sym_TCons_2))
            {
              v_68 = ATgetArgument(u_68, 0);
              y_68 = ATgetArgument(u_68, 1);
              o_68 :
              if(match_cons(v_68, sym_Cons_2))
                {
                  w_68 = ATgetArgument(v_68, 0);
                  x_68 = ATgetArgument(v_68, 1);
                  p_68 :
                  if(match_cons(y_68, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(s_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_68), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(t_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_68), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL;
  k_69 = t;
  f_69 :
  if(match_cons(k_69, sym_TCons_2))
    {
      l_69 = ATgetArgument(k_69, 0);
      m_69 = ATgetArgument(k_69, 1);
      g_69 :
      if(match_cons(l_69, sym_Nil_0))
        {
          h_69 :
          if(match_cons(m_69, sym_TCons_2))
            {
              n_69 = ATgetArgument(m_69, 0);
              o_69 = ATgetArgument(m_69, 1);
              i_69 :
              if(match_cons(n_69, sym_Nil_0))
                {
                  j_69 :
                  if(match_cons(o_69, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm j_58 (ATerm), ATerm k_58 (ATerm), ATerm l_58 (ATerm), ATerm m_58 (ATerm))
{
  ATerm q_69 (ATerm t)
  {
    ATerm b_11 = t;
    if(PushChoice()==0)
      {
        t = j_58(t);
        PopChoice();
      }
    else
      {
        t = b_11;
        t = k_58(t);
        {
          ATerm k_3 (ATerm t)
          {
            t = TCons_2(t, q_69, TNil_0);
            return(t);
          }
          t = TCons_2(t, m_58, k_3);
          t = l_58(t);
        }
      }
    return(t);
  }
  t = q_69(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm o_58 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, o_58);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL;
  h_70 = t;
  d_70 :
  if(match_cons(h_70, sym_Cons_2))
    {
      i_70 = ATgetArgument(h_70, 0);
      n_70 = ATgetArgument(h_70, 1);
      e_70 :
      if(match_cons(i_70, sym_TCons_2))
        {
          j_70 = ATgetArgument(i_70, 0);
          k_70 = ATgetArgument(i_70, 1);
          f_70 :
          if(match_cons(k_70, sym_TCons_2))
            {
              l_70 = ATgetArgument(k_70, 0);
              m_70 = ATgetArgument(k_70, 1);
              g_70 :
              if(match_cons(m_70, sym_TNil_0))
                {
                  ATerm r_70 = NULL,s_70 = NULL,a_71 = NULL,i_71 = NULL;
                  ATerm c_11;
                  c_11 = t;
                  {
                    ATerm t_70 = NULL;
                    ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL;
                    t = not_null(l_70);
                    t_70 = t;
                    t = SSL_explode_term(not_null(t_70));
                    v_70 = t;
                    u_69 :
                    if(match_cons(v_70, sym_TCons_2))
                      {
                        w_70 = ATgetArgument(v_70, 0);
                        x_70 = ATgetArgument(v_70, 1);
                        v_69 :
                        if(match_cons(x_70, sym_TCons_2))
                          {
                            y_70 = ATgetArgument(x_70, 0);
                            z_70 = ATgetArgument(x_70, 1);
                            w_69 :
                            if(match_cons(z_70, sym_TNil_0))
                              {
                                if(r_70 != NULL && r_70 != w_70)
                                  _fail(w_70);
                                else
                                  r_70 = w_70;
                                if(s_70 != NULL && s_70 != y_70)
                                  _fail(y_70);
                                else
                                  s_70 = y_70;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = c_11;
                  {
                    ATerm b_71 = NULL;
                    ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL;
                    t = not_null(j_70);
                    b_71 = t;
                    t = SSL_explode_term(not_null(b_71));
                    d_71 = t;
                    z_69 :
                    if(match_cons(d_71, sym_TCons_2))
                      {
                        e_71 = ATgetArgument(d_71, 0);
                        f_71 = ATgetArgument(d_71, 1);
                        a_70 :
                        if(match_cons(f_71, sym_TCons_2))
                          {
                            g_71 = ATgetArgument(f_71, 0);
                            h_71 = ATgetArgument(f_71, 1);
                            b_70 :
                            if(match_cons(h_71, sym_TNil_0))
                              {
                                if(r_70 != NULL && r_70 != e_71)
                                  _fail(e_71);
                                else
                                  r_70 = e_71;
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
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_70), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    i_71 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_70), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL;
  v_71 = t;
  r_71 :
  if(match_cons(v_71, sym_Cons_2))
    {
      w_71 = ATgetArgument(v_71, 0);
      b_72 = ATgetArgument(v_71, 1);
      s_71 :
      if(match_cons(w_71, sym_TCons_2))
        {
          x_71 = ATgetArgument(w_71, 0);
          y_71 = ATgetArgument(w_71, 1);
          t_71 :
          if(match_cons(y_71, sym_TCons_2))
            {
              z_71 = ATgetArgument(y_71, 0);
              a_72 = ATgetArgument(y_71, 1);
              u_71 :
              if(match_cons(a_72, sym_TNil_0))
                {
                  ATerm d_72 = NULL;
                  if(x_71 != NULL && x_71 != z_71)
                    _fail(z_71);
                  else
                    x_71 = z_71;
                  if(d_72 != NULL && d_72 != b_72)
                    _fail(b_72);
                  else
                    d_72 = b_72;
                  t = not_null(d_72);
                }
              else
                _fail(t);
            }
          else
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
  ATerm d_11 = t;
  if(PushChoice()==0)
    {
      ATerm u_3 (ATerm t)
      {
        ATerm k_72 = NULL;
        k_72 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_72), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm v_3 (ATerm t)
      {
        ATerm f_4 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, f_4);
        return(t);
      }
      ATerm w_3 (ATerm t)
      {
        ATerm e_11 = t;
        if(PushChoice()==0)
          {
            ATerm g_4 (ATerm t)
            {
              ATerm i_4 (ATerm t)
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
              t = TCons_2(t, i_4, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, g_4);
            PopChoice();
          }
        else
          {
            t = e_11;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, u_3, v_3, w_3);
      PopChoice();
    }
  else
    {
      t = d_11;
      {
        ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL;
        m_72 = t;
        h_72 :
        if(match_cons(m_72, sym_TCons_2))
          {
            n_72 = ATgetArgument(m_72, 0);
            o_72 = ATgetArgument(m_72, 1);
            i_72 :
            if(match_cons(o_72, sym_TCons_2))
              {
                p_72 = ATgetArgument(o_72, 0);
                q_72 = ATgetArgument(o_72, 1);
                j_72 :
                if(match_cons(q_72, sym_TNil_0))
                  {
                    t = not_null(n_72);
                    {
                      ATerm v_72 (ATerm t)
                      {
                        ATerm g_11 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = g_11;
                            {
                              ATerm h_11 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm j_4 (ATerm t)
                                  {
                                    t = not_null(p_72);
                                    return(t);
                                  }
                                  t = HdMember_1(t, j_4);
                                  t = v_72(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = h_11;
                                  t = Cons_2(t, _id, v_72);
                                }
                            }
                          }
                        return(t);
                      }
                      t = v_72(t);
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
ATerm GnNextChangeGraph_3 (ATerm t, ATerm o_45 (ATerm), ATerm p_45 (ATerm), ATerm q_45 (ATerm))
{
  ATerm n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL;
  n_73 = t;
  g_73 :
  if(match_cons(n_73, sym_TCons_2))
    {
      o_73 = ATgetArgument(n_73, 0);
      r_73 = ATgetArgument(n_73, 1);
      h_73 :
      if(match_cons(o_73, sym_Cons_2))
        {
          p_73 = ATgetArgument(o_73, 0);
          q_73 = ATgetArgument(o_73, 1);
          i_73 :
          if(match_cons(r_73, sym_TCons_2))
            {
              s_73 = ATgetArgument(r_73, 0);
              t_73 = ATgetArgument(r_73, 1);
              j_73 :
              if(match_cons(t_73, sym_TCons_2))
                {
                  u_73 = ATgetArgument(t_73, 0);
                  v_73 = ATgetArgument(t_73, 1);
                  k_73 :
                  if(match_cons(v_73, sym_TCons_2))
                    {
                      w_73 = ATgetArgument(v_73, 0);
                      x_73 = ATgetArgument(v_73, 1);
                      l_73 :
                      if(match_cons(x_73, sym_TCons_2))
                        {
                          y_73 = ATgetArgument(x_73, 0);
                          z_73 = ATgetArgument(x_73, 1);
                          m_73 :
                          if(match_cons(z_73, sym_TNil_0))
                            {
                              ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,r_74 = NULL;
                              ATerm k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = o_45(t);
                              k_74 = t;
                              a_73 :
                              if(match_cons(k_74, sym_TCons_2))
                                {
                                  l_74 = ATgetArgument(k_74, 0);
                                  m_74 = ATgetArgument(k_74, 1);
                                  b_73 :
                                  if(match_cons(m_74, sym_TCons_2))
                                    {
                                      n_74 = ATgetArgument(m_74, 0);
                                      o_74 = ATgetArgument(m_74, 1);
                                      c_73 :
                                      if(match_cons(o_74, sym_TNil_0))
                                        {
                                          ATerm p_74 = NULL;
                                          if(h_74 != NULL && h_74 != l_74)
                                            _fail(l_74);
                                          else
                                            h_74 = l_74;
                                          if(g_74 != NULL && g_74 != n_74)
                                            _fail(n_74);
                                          else
                                            g_74 = n_74;
                                          t = not_null(h_74);
                                          {
                                            ATerm q_74 = NULL;
                                            t = p_45(t);
                                            p_74 = t;
                                            if(i_74 != NULL && i_74 != p_74)
                                              _fail(p_74);
                                            else
                                              i_74 = p_74;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = diff_0(t);
                                            q_74 = t;
                                            if(j_74 != NULL && j_74 != q_74)
                                              _fail(q_74);
                                            else
                                              j_74 = q_74;
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
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm t_74 = NULL;
                                t = conc_0(t);
                                r_74 = t;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm v_74 = NULL;
                                  t = conc_0(t);
                                  t_74 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_73), (ATerm) ATmakeAppl(sym_TNil_0))));
                                  t = q_45(t);
                                  v_74 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_73), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
  ATerm m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL;
  m_75 = t;
  f_75 :
  if(match_cons(m_75, sym_TCons_2))
    {
      n_75 = ATgetArgument(m_75, 0);
      o_75 = ATgetArgument(m_75, 1);
      g_75 :
      if(match_cons(n_75, sym_Nil_0))
        {
          h_75 :
          if(match_cons(o_75, sym_TCons_2))
            {
              p_75 = ATgetArgument(o_75, 0);
              q_75 = ATgetArgument(o_75, 1);
              i_75 :
              if(match_cons(q_75, sym_TCons_2))
                {
                  r_75 = ATgetArgument(q_75, 0);
                  s_75 = ATgetArgument(q_75, 1);
                  j_75 :
                  if(match_cons(s_75, sym_TCons_2))
                    {
                      t_75 = ATgetArgument(s_75, 0);
                      u_75 = ATgetArgument(s_75, 1);
                      k_75 :
                      if(match_cons(u_75, sym_TCons_2))
                        {
                          v_75 = ATgetArgument(u_75, 0);
                          w_75 = ATgetArgument(u_75, 1);
                          l_75 :
                          if(match_cons(w_75, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_75), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm h_76 = NULL,i_76 = NULL,j_76 = NULL,k_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL;
  h_76 = t;
  d_76 :
  if(match_cons(h_76, sym_TCons_2))
    {
      i_76 = ATgetArgument(h_76, 0);
      j_76 = ATgetArgument(h_76, 1);
      e_76 :
      if(match_cons(j_76, sym_TCons_2))
        {
          k_76 = ATgetArgument(j_76, 0);
          l_76 = ATgetArgument(j_76, 1);
          f_76 :
          if(match_cons(l_76, sym_TCons_2))
            {
              m_76 = ATgetArgument(l_76, 0);
              n_76 = ATgetArgument(l_76, 1);
              g_76 :
              if(match_cons(n_76, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_76), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))))));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm y_50 (ATerm), ATerm z_50 (ATerm))
{
  ATerm s_76 (ATerm t)
  {
    ATerm i_11 = t;
    if(PushChoice()==0)
      {
        t = y_50(t);
        PopChoice();
      }
    else
      {
        t = i_11;
        t = z_50(t);
        t = s_76(t);
      }
    return(t);
  }
  t = s_76(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm b_51 (ATerm), ATerm c_51 (ATerm), ATerm d_51 (ATerm))
{
  t = b_51(t);
  t = while_not_2(t, c_51, d_51);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm x_45 (ATerm), ATerm y_45 (ATerm), ATerm z_45 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm j_11 = t;
    if(PushChoice()==0)
      {
        t = GnNextChangeGraph_3(t, x_45, y_45, z_45);
        PopChoice();
      }
    else
      {
        t = j_11;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, k_4);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    ATerm y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL;
    y_76 = t;
    u_76 :
    if(match_cons(y_76, sym_TCons_2))
      {
        z_76 = ATgetArgument(y_76, 0);
        a_77 = ATgetArgument(y_76, 1);
        v_76 :
        if(match_cons(a_77, sym_TCons_2))
          {
            b_77 = ATgetArgument(a_77, 0);
            c_77 = ATgetArgument(a_77, 1);
            w_76 :
            if(match_cons(c_77, sym_TCons_2))
              {
                d_77 = ATgetArgument(c_77, 0);
                e_77 = ATgetArgument(c_77, 1);
                x_76 :
                if(match_cons(e_77, sym_TNil_0))
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_77), not_null(d_77));
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, svars_arity_0, l_4);
  t = FilterNonMissingDefs_0(t);
  {
    ATerm k_11 = t;
    if(PushChoice()==0)
      {
        t = NoMissingDefs_0(t);
        PopChoice();
      }
    else
      {
        t = k_11;
        t = MissingDefs_0(t);
        t = (ATerm) ATmakeInt(1);
        t = exit_0(t);
      }
  }
  return(t);
}
ATerm needed_defs_0 (ATerm t)
{
  ATerm j_77 = NULL;
  j_77 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("main", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_77), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = extract_needed_defs_0(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm a_43 (ATerm))
{
  ATerm p_77 = NULL,q_77 = NULL;
  p_77 = t;
  o_77 :
  if(match_cons(p_77, sym_Strategies_1))
    {
      q_77 = ATgetArgument(p_77, 0);
      {
        ATerm s_77 = NULL;
        t = not_null(q_77);
        t = a_43(t);
        s_77 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(s_77));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_45 (ATerm), ATerm g_45 (ATerm))
{
  ATerm a_78 = NULL,b_78 = NULL,c_78 = NULL;
  a_78 = t;
  z_77 :
  if(match_cons(a_78, sym_Cons_2))
    {
      b_78 = ATgetArgument(a_78, 0);
      c_78 = ATgetArgument(a_78, 1);
      {
        ATerm f_78 = NULL;
        t = not_null(b_78);
        {
          ATerm h_78 = NULL;
          t = f_45(t);
          f_78 = t;
          t = not_null(c_78);
          t = g_45(t);
          h_78 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_78), not_null(h_78));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm c_43 (ATerm))
{
  ATerm p_78 = NULL,q_78 = NULL;
  p_78 = t;
  o_78 :
  if(match_cons(p_78, sym_Specification_1))
    {
      q_78 = ATgetArgument(p_78, 0);
      {
        ATerm s_78 = NULL;
        t = not_null(q_78);
        t = c_43(t);
        s_78 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(s_78));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm x_78 = NULL;
  x_78 = t;
  w_78 :
  if(!(match_cons(x_78, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm b_45 (ATerm), ATerm c_45 (ATerm))
{
  ATerm c_79 = NULL,d_79 = NULL,e_79 = NULL;
  c_79 = t;
  b_79 :
  if(match_cons(c_79, sym_TCons_2))
    {
      d_79 = ATgetArgument(c_79, 0);
      e_79 = ATgetArgument(c_79, 1);
      {
        ATerm h_79 = NULL;
        t = not_null(d_79);
        {
          ATerm j_79 = NULL;
          t = b_45(t);
          h_79 = t;
          t = not_null(e_79);
          t = c_45(t);
          j_79 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_79), not_null(j_79));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm q_79 = NULL;
  ATerm l_11;
  l_11 = t;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm r_79 = NULL,s_79 = NULL;
      r_79 = t;
      p_79 :
      if(match_cons(r_79, sym_Program_1))
        {
          s_79 = ATgetArgument(r_79, 0);
          if(q_79 != NULL && q_79 != s_79)
            _fail(s_79);
          else
            q_79 = s_79;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, p_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_79), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = l_11;
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
  ATerm v_79 = NULL;
  v_79 = t;
  t = SSL_exit(not_null(v_79));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL;
  c_80 = t;
  z_79 :
  if(match_cons(c_80, sym_TCons_2))
    {
      d_80 = ATgetArgument(c_80, 0);
      e_80 = ATgetArgument(c_80, 1);
      a_80 :
      if(match_cons(e_80, sym_TCons_2))
        {
          f_80 = ATgetArgument(e_80, 0);
          g_80 = ATgetArgument(e_80, 1);
          b_80 :
          if(match_cons(g_80, sym_TNil_0))
            {
              ATerm m_11;
              m_11 = t;
              t = SSL_printnl(not_null(d_80), not_null(f_80));
              t = m_11;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_62 (ATerm))
{
  ATerm n_11 = t;
  if(PushChoice()==0)
    {
      t = g_62(t);
      PopChoice();
    }
  else
    t = n_11;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm q_80 = NULL,r_80 = NULL;
  ATerm y_4 (ATerm t)
  {
    ATerm z_4 (ATerm t)
    {
      ATerm o_11 = t;
      if(PushChoice()==0)
        {
          ATerm h_5 (ATerm t)
          {
            ATerm s_80 = NULL;
            s_80 = t;
            k_80 :
            if(!(match_cons(s_80, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, h_5);
          PopChoice();
          _fail(t);
        }
      else
        t = o_11;
      return(t);
    }
    ATerm g_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, z_4, g_5);
    {
      ATerm l_5 (ATerm t)
      {
        ATerm n_5 (ATerm t)
        {
          ATerm t_80 = NULL,u_80 = NULL;
          t_80 = t;
          m_80 :
          if(match_cons(t_80, sym_Runtime_1))
            {
              u_80 = ATgetArgument(t_80, 0);
              if(r_80 != NULL && r_80 != u_80)
                _fail(u_80);
              else
                r_80 = u_80;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, n_5);
        return(t);
      }
      ATerm m_5 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, l_5, m_5);
      {
        ATerm o_5 (ATerm t)
        {
          ATerm q_5 (ATerm t)
          {
            ATerm v_80 = NULL,w_80 = NULL;
            v_80 = t;
            o_80 :
            if(match_cons(v_80, sym_Program_1))
              {
                w_80 = ATgetArgument(v_80, 0);
                if(q_80 != NULL && q_80 != w_80)
                  _fail(w_80);
                else
                  q_80 = w_80;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, q_5);
          return(t);
        }
        ATerm p_5 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, o_5, p_5);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_80), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_80), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
            t = SSL_WriteToTextFile(not_null(e_81), not_null(g_81));
          else
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
            t = SSL_WriteToBinaryFile(not_null(r_81), not_null(t_81));
          else
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
  ATerm d_82 = NULL;
  ATerm p_11;
  p_11 = t;
  {
    ATerm r_5 (ATerm t)
    {
      ATerm q_11 = t;
      if(PushChoice()==0)
        {
          ATerm x_5 (ATerm t)
          {
            ATerm e_82 = NULL,f_82 = NULL;
            e_82 = t;
            z_81 :
            if(match_cons(e_82, sym_Output_1))
              {
                f_82 = ATgetArgument(e_82, 0);
                if(d_82 != NULL && d_82 != f_82)
                  _fail(f_82);
                else
                  d_82 = f_82;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, x_5);
          PopChoice();
        }
      else
        {
          t = q_11;
          {
            ATerm g_82 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            g_82 = t;
            if(d_82 != NULL && d_82 != g_82)
              _fail(g_82);
            else
              d_82 = g_82;
          }
        }
      return(t);
    }
    ATerm s_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, r_5, s_5);
  }
  t = p_11;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm a_6 (ATerm t)
      {
        ATerm c_6 (ATerm t)
        {
          t = not_null(d_82);
          return(t);
        }
        t = split_2(t, c_6, _id);
        return(t);
      }
      t = TCons_2(t, a_6, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, y_5);
    {
      ATerm r_11 = t;
      if(PushChoice()==0)
        {
          ATerm d_6 (ATerm t)
          {
            ATerm f_6 (ATerm t)
            {
              ATerm h_82 = NULL;
              h_82 = t;
              c_82 :
              if(!(match_cons(h_82, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, f_6);
            return(t);
          }
          ATerm e_6 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, d_6, e_6);
          PopChoice();
        }
      else
        {
          t = r_11;
          {
            ATerm g_6 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, g_6);
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
ATerm apply_strategy_1 (ATerm t, ATerm n_48 (ATerm))
{
  ATerm p_82 = NULL,r_82 = NULL,s_82 = NULL,u_82 = NULL,v_82 = NULL,w_82 = NULL;
  ATerm s_11;
  s_11 = t;
  t = dtime_0(t);
  t = s_11;
  t = n_48(t);
  {
    ATerm t_11;
    t_11 = t;
    {
      ATerm q_82 = NULL;
      t = dtime_0(t);
      q_82 = t;
      if(p_82 != NULL && p_82 != q_82)
        _fail(q_82);
      else
        p_82 = q_82;
    }
    t = t_11;
    r_82 = t;
    m_82 :
    if(match_cons(r_82, sym_TCons_2))
      {
        s_82 = ATgetArgument(r_82, 0);
        u_82 = ATgetArgument(r_82, 1);
        n_82 :
        if(match_cons(u_82, sym_TCons_2))
          {
            v_82 = ATgetArgument(u_82, 0);
            w_82 = ATgetArgument(u_82, 1);
            o_82 :
            if(match_cons(w_82, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(p_82)), not_null(s_82)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_82), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm c_83 = NULL;
  c_83 = t;
  t = SSL_ReadFromFile(not_null(c_83));
  return(t);
}
ATerm split_2 (ATerm t, ATerm o_61 (ATerm), ATerm p_61 (ATerm))
{
  ATerm i_83 = NULL;
  ATerm k_83 = NULL;
  i_83 = t;
  {
    ATerm m_83 = NULL;
    t = o_61(t);
    k_83 = t;
    t = not_null(i_83);
    t = p_61(t);
    m_83 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_83), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_83), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm u_83 = NULL;
  ATerm u_11;
  u_11 = t;
  {
    ATerm z_11 = t;
    if(PushChoice()==0)
      {
        ATerm h_6 (ATerm t)
        {
          ATerm v_83 = NULL,w_83 = NULL;
          v_83 = t;
          s_83 :
          if(match_cons(v_83, sym_Input_1))
            {
              w_83 = ATgetArgument(v_83, 0);
              if(u_83 != NULL && u_83 != w_83)
                _fail(w_83);
              else
                u_83 = w_83;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, h_6);
        PopChoice();
      }
    else
      {
        t = z_11;
        {
          ATerm x_83 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          x_83 = t;
          if(u_83 != NULL && u_83 != x_83)
            _fail(x_83);
          else
            u_83 = x_83;
        }
      }
  }
  t = u_11;
  {
    ATerm i_6 (ATerm t)
    {
      t = not_null(u_83);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, i_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm b_84 = NULL;
  b_84 = t;
  a_84 :
  if(!(match_cons(b_84, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm k_40 (ATerm))
{
  ATerm f_84 = NULL,g_84 = NULL;
  f_84 = t;
  e_84 :
  if(match_cons(f_84, sym_Undefined_1))
    {
      g_84 = ATgetArgument(f_84, 0);
      {
        ATerm i_84 = NULL;
        t = not_null(g_84);
        t = k_40(t);
        i_84 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_84));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm p_84 = NULL;
  p_84 = t;
  o_84 :
  if(!(match_cons(p_84, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm i_60 (ATerm))
{
  ATerm q_84 (ATerm t)
  {
    ATerm a_12 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, i_60, _id);
        PopChoice();
      }
    else
      {
        t = a_12;
        t = Cons_2(t, _id, q_84);
      }
    return(t);
  }
  t = q_84(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_47 (ATerm))
{
  t = fetch_1(t, r_47);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_48 (ATerm))
{
  ATerm n_6 (ATerm t)
  {
    ATerm b_12 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = b_12;
        {
          ATerm c_12 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = c_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, n_6);
  t = m_48(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_84 = NULL,x_84 = NULL,y_84 = NULL;
  ATerm d_12;
  d_12 = t;
  {
    ATerm z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL;
    z_84 = t;
    s_84 :
    if(match_cons(z_84, sym_TCons_2))
      {
        a_85 = ATgetArgument(z_84, 0);
        b_85 = ATgetArgument(z_84, 1);
        t_84 :
        if(match_cons(b_85, sym_TCons_2))
          {
            c_85 = ATgetArgument(b_85, 0);
            d_85 = ATgetArgument(b_85, 1);
            u_84 :
            if(match_cons(d_85, sym_TCons_2))
              {
                e_85 = ATgetArgument(d_85, 0);
                f_85 = ATgetArgument(d_85, 1);
                v_84 :
                if(match_cons(f_85, sym_TNil_0))
                  {
                    if(w_84 != NULL && w_84 != a_85)
                      _fail(a_85);
                    else
                      w_84 = a_85;
                    if(x_84 != NULL && x_84 != c_85)
                      _fail(c_85);
                    else
                      x_84 = c_85;
                    if(y_84 != NULL && y_84 != e_85)
                      _fail(e_85);
                    else
                      y_84 = e_85;
                    t = SSL_table_put(not_null(w_84), not_null(x_84), not_null(y_84));
                  }
                else
                  _fail(t);
              }
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
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm i_85 = NULL;
  i_85 = t;
  t = SSL_table_create(not_null(i_85));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm m_85 = NULL;
  m_85 = t;
  {
    ATerm e_12;
    e_12 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_85), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = e_12;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm k_47 (ATerm), ATerm l_47 (ATerm))
{
  ATerm s_85 = NULL,t_85 = NULL,u_85 = NULL;
  s_85 = t;
  r_85 :
  if(match_cons(s_85, sym_Cons_2))
    {
      t_85 = ATgetArgument(s_85, 0);
      u_85 = ATgetArgument(s_85, 1);
      {
        ATerm x_85 = NULL;
        t = not_null(t_85);
        t = k_47(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = l_47(t);
        x_85 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_85), not_null(u_85));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm m_47 (ATerm), ATerm n_47 (ATerm))
{
  ATerm f_86 = NULL,g_86 = NULL,h_86 = NULL,i_86 = NULL,j_86 = NULL;
  f_86 = t;
  d_86 :
  if(match_cons(f_86, sym_Cons_2))
    {
      g_86 = ATgetArgument(f_86, 0);
      h_86 = ATgetArgument(f_86, 1);
      e_86 :
      if(match_cons(h_86, sym_Cons_2))
        {
          i_86 = ATgetArgument(h_86, 0);
          j_86 = ATgetArgument(h_86, 1);
          {
            ATerm n_86 = NULL;
            t = not_null(g_86);
            t = m_47(t);
            t = not_null(i_86);
            t = n_47(t);
            n_86 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_86), not_null(j_86));
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
  ATerm f_12 = t;
  if(PushChoice()==0)
    {
      ATerm o_6 (ATerm t)
      {
        ATerm l_87 = NULL;
        l_87 = t;
        r_86 :
        if(!(match_string(l_87, "-S")))
          _fail(t);
        return(t);
      }
      ATerm q_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, o_6, q_6);
      PopChoice();
    }
  else
    {
      t = f_12;
      {
        ATerm g_12 = t;
        if(PushChoice()==0)
          {
            ATerm s_6 (ATerm t)
            {
              ATerm m_87 = NULL;
              m_87 = t;
              s_86 :
              if(!(match_string(m_87, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm t_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, s_6, t_6);
            PopChoice();
          }
        else
          {
            t = g_12;
            {
              ATerm h_12 = t;
              if(PushChoice()==0)
                {
                  ATerm u_6 (ATerm t)
                  {
                    ATerm n_87 = NULL;
                    n_87 = t;
                    t_86 :
                    if(!(match_string(n_87, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm v_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, u_6, v_6);
                  PopChoice();
                }
              else
                {
                  t = h_12;
                  {
                    ATerm i_12 = t;
                    if(PushChoice()==0)
                      {
                        ATerm w_6 (ATerm t)
                        {
                          ATerm o_87 = NULL;
                          o_87 = t;
                          u_86 :
                          if(!(match_string(o_87, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm b_7 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, w_6, b_7);
                        PopChoice();
                      }
                    else
                      {
                        t = i_12;
                        {
                          ATerm k_12 = t;
                          if(PushChoice()==0)
                            {
                              ATerm c_7 (ATerm t)
                              {
                                ATerm p_87 = NULL;
                                p_87 = t;
                                v_86 :
                                if(!(match_string(p_87, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm d_7 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, c_7, d_7);
                              PopChoice();
                            }
                          else
                            {
                              t = k_12;
                              {
                                ATerm l_12 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm e_7 (ATerm t)
                                    {
                                      ATerm q_87 = NULL;
                                      q_87 = t;
                                      w_86 :
                                      if(!(match_string(q_87, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm f_7 (ATerm t)
                                    {
                                      ATerm r_87 = NULL;
                                      r_87 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(r_87));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, e_7, f_7);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = l_12;
                                    {
                                      ATerm m_12 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm m_7 (ATerm t)
                                          {
                                            ATerm t_87 = NULL;
                                            t_87 = t;
                                            y_86 :
                                            if(!(match_string(t_87, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm n_7 (ATerm t)
                                          {
                                            ATerm u_87 = NULL;
                                            u_87 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_87));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, m_7, n_7);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = m_12;
                                          {
                                            ATerm o_12 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm o_7 (ATerm t)
                                                {
                                                  ATerm w_87 = NULL;
                                                  w_87 = t;
                                                  a_87 :
                                                  if(!(match_string(w_87, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm p_7 (ATerm t)
                                                {
                                                  ATerm x_87 = NULL;
                                                  x_87 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_87));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, o_7, p_7);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = o_12;
                                                {
                                                  ATerm p_12 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm q_7 (ATerm t)
                                                      {
                                                        ATerm z_87 = NULL;
                                                        z_87 = t;
                                                        c_87 :
                                                        if(!(match_string(z_87, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm r_7 (ATerm t)
                                                      {
                                                        ATerm a_88 = NULL;
                                                        a_88 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_88));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, q_7, r_7);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = p_12;
                                                      {
                                                        ATerm q_12 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm s_7 (ATerm t)
                                                            {
                                                              ATerm c_88 = NULL;
                                                              c_88 = t;
                                                              e_87 :
                                                              if(!(match_string(c_88, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm t_7 (ATerm t)
                                                            {
                                                              ATerm d_88 = NULL;
                                                              d_88 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_88));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, s_7, t_7);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = q_12;
                                                            {
                                                              ATerm v_12 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm u_7 (ATerm t)
                                                                  {
                                                                    ATerm f_88 = NULL;
                                                                    f_88 = t;
                                                                    g_87 :
                                                                    if(!(match_string(f_88, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm v_7 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, u_7, v_7);
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
                                                                          ATerm g_88 = NULL;
                                                                          g_88 = t;
                                                                          h_87 :
                                                                          if(!(match_string(g_88, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm z_7 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, w_7, z_7);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = w_12;
                                                                        {
                                                                          ATerm y_12 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm a_8 (ATerm t)
                                                                              {
                                                                                ATerm h_88 = NULL;
                                                                                h_88 = t;
                                                                                i_87 :
                                                                                if(!(match_string(h_88, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm b_8 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, a_8, b_8);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_12;
                                                                              {
                                                                                ATerm a_13 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm c_8 (ATerm t)
                                                                                    {
                                                                                      ATerm i_88 = NULL;
                                                                                      i_88 = t;
                                                                                      j_87 :
                                                                                      if(!(match_string(i_88, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm d_8 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, c_8, d_8);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = a_13;
                                                                                    {
                                                                                      ATerm e_8 (ATerm t)
                                                                                      {
                                                                                        ATerm j_88 = NULL;
                                                                                        j_88 = t;
                                                                                        k_87 :
                                                                                        if(!(match_string(j_88, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm f_8 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, e_8, f_8);
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
  ATerm r_88 = NULL,s_88 = NULL,t_88 = NULL;
  r_88 = t;
  q_88 :
  if(match_cons(r_88, sym_Cons_2))
    {
      s_88 = ATgetArgument(r_88, 0);
      t_88 = ATgetArgument(r_88, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_88)), not_null(t_88));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_47 (ATerm))
{
  ATerm g_8 (ATerm t)
  {
    ATerm y_88 = NULL;
    y_88 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_88));
    return(t);
  }
  ATerm h_8 (ATerm t)
  {
    ATerm c_13 = t;
    if(PushChoice()==0)
      {
        ATerm d_13 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = d_13;
            t = i_47(t);
            t = Cons_2(t, _id, h_8);
          }
        PopChoice();
      }
    else
      {
        t = c_13;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, g_8, h_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm b_48 (ATerm), ATerm c_48 (ATerm), ATerm d_48 (ATerm))
{
  ATerm i_8 (ATerm t)
  {
    ATerm e_13 = t;
    if(PushChoice()==0)
      {
        t = c_48(t);
        PopChoice();
      }
    else
      {
        t = e_13;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, i_8);
  t = store_options_0(t);
  {
    ATerm f_13 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, d_48);
        PopChoice();
      }
    else
      {
        t = f_13;
        {
          ATerm g_13 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, b_48);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = g_13;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm w_47 (ATerm), ATerm x_47 (ATerm))
{
  t = iowrap_3(t, w_47, x_47, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm t_47 (ATerm))
{
  ATerm j_8 (ATerm t)
  {
    ATerm k_8 (ATerm t)
    {
      t = TCons_2(t, t_47, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, k_8);
    return(t);
  }
  t = iowrap_2(t, j_8, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm l_8 (ATerm t)
  {
    ATerm m_8 (ATerm t)
    {
      ATerm n_8 (ATerm t)
      {
        ATerm o_8 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, o_8, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, n_8);
      return(t);
    }
    t = Specification_1(t, m_8);
    return(t);
  }
  t = iowrap_1(t, l_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_0(t);
  return(t);
}
