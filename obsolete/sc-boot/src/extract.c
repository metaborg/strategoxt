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
ATerm filter_1 (ATerm, ATerm r_53 (ATerm));
ATerm FilterNonMissingDefs_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm e_43 (ATerm), ATerm f_43 (ATerm));
ATerm Let_2 (ATerm, ATerm g_43 (ATerm), ATerm h_43 (ATerm));
ATerm sboundin_3 (ATerm, ATerm q_65 (ATerm), ATerm r_65 (ATerm), ATerm s_65 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm n_54 (ATerm), ATerm o_54 (ATerm), ATerm p_54 (ATerm));
ATerm crush_3 (ATerm, ATerm e_56 (ATerm), ATerm f_56 (ATerm), ATerm g_56 (ATerm));
ATerm collect_kids_1 (ATerm, ATerm m_56 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm v_55 (ATerm), ATerm w_55 (ATerm));
ATerm diff_p__1 (ATerm, ATerm z_55 (ATerm));
ATerm diff_1 (ATerm, ATerm b_56 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm b_52 (ATerm), ATerm c_52 (ATerm), ATerm d_52 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm e_52 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm FoldR_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm k_54 (ATerm), ATerm l_54 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm t_64 (ATerm), ATerm u_64 (ATerm));
ATerm alltd_1 (ATerm, ATerm t_63 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm v_64 (ATerm), ATerm w_64 (ATerm));
ATerm substitute_1 (ATerm, ATerm x_64 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm NonOverloadedDef_0 (ATerm);
ATerm length_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm i_43 (ATerm), ATerm j_43 (ATerm), ATerm k_43 (ATerm));
ATerm partition_1 (ATerm, ATerm a_54 (ATerm));
ATerm OverloadedDef_0 (ATerm);
ATerm Expl_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm k_49 (ATerm), ATerm l_49 (ATerm));
ATerm repeat_1 (ATerm, ATerm n_49 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm f_41 (ATerm), ATerm g_41 (ATerm));
ATerm Con_3 (ATerm, ATerm c_41 (ATerm), ATerm d_41 (ATerm), ATerm e_41 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm i_44 (ATerm), ATerm j_44 (ATerm));
ATerm oncetd_1 (ATerm, ATerm i_63 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm s_61 (ATerm));
ATerm desugar_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm map_1 (ATerm, ATerm a_59 (ATerm));
ATerm Ttl_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm v_58 (ATerm));
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm u_57 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm new_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm f_55 (ATerm));
ATerm add_0 (ATerm);
ATerm MkDistApplication_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm p_59 (ATerm));
ATerm conc_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm u_55 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm m_57 (ATerm), ATerm n_57 (ATerm), ATerm o_57 (ATerm), ATerm p_57 (ATerm));
ATerm zip_1 (ATerm, ATerm r_57 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm a_45 (ATerm), ATerm b_45 (ATerm), ATerm c_45 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInit_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm b_50 (ATerm), ATerm c_50 (ATerm));
ATerm for_3 (ATerm, ATerm e_50 (ATerm), ATerm f_50 (ATerm), ATerm g_50 (ATerm));
ATerm graph_nodes_undef_chgr_3 (ATerm, ATerm j_45 (ATerm), ATerm k_45 (ATerm), ATerm l_45 (ATerm));
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm m_42 (ATerm));
ATerm Cons_2 (ATerm, ATerm r_44 (ATerm), ATerm s_44 (ATerm));
ATerm Specification_1 (ATerm, ATerm o_42 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm n_44 (ATerm), ATerm o_44 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_61 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm t_47 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm p_60 (ATerm), ATerm q_60 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm w_39 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm j_59 (ATerm));
ATerm option_defined_1 (ATerm, ATerm x_46 (ATerm));
ATerm need_help_1 (ATerm, ATerm s_47 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm q_46 (ATerm), ATerm r_46 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm s_46 (ATerm), ATerm t_46 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_46 (ATerm));
ATerm iowrap_3 (ATerm, ATerm h_47 (ATerm), ATerm i_47 (ATerm), ATerm j_47 (ATerm));
ATerm iowrap_2 (ATerm, ATerm c_47 (ATerm), ATerm d_47 (ATerm));
ATerm iowrap_1 (ATerm, ATerm z_46 (ATerm));
ATerm extract_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm r_1 = NULL;
  r_1 = t;
  q_1 :
  if(!(match_cons(r_1, sym_Nil_0)))
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
  ATerm h_9;
  h_9 = t;
  {
    ATerm a_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, a_0, _id);
    t = printnl_0(t);
  }
  t = h_9;
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
                      ATerm i_9 = t;
                      if(PushChoice()==0)
                        {
                          t = MissingDefMod_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = i_9;
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
ATerm filter_1 (ATerm t, ATerm r_53 (ATerm))
{
  ATerm j_4 (ATerm t)
  {
    ATerm j_9 = t;
    if(PushChoice()==0)
      {
        ATerm i_4 = NULL;
        i_4 = t;
        h_4 :
        if(!(match_cons(i_4, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = j_9;
        {
          ATerm k_9 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, r_53, j_4);
              PopChoice();
            }
          else
            {
              t = k_9;
              t = Tl_0(t);
              t = j_4(t);
            }
        }
      }
    return(t);
  }
  t = j_4(t);
  return(t);
}
ATerm FilterNonMissingDefs_0 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
  v_4 = t;
  s_4 :
  if(match_cons(v_4, sym_TCons_2))
    {
      w_4 = ATgetArgument(v_4, 0);
      x_4 = ATgetArgument(v_4, 1);
      t_4 :
      if(match_cons(x_4, sym_TCons_2))
        {
          y_4 = ATgetArgument(x_4, 0);
          z_4 = ATgetArgument(x_4, 1);
          u_4 :
          if(match_cons(z_4, sym_TNil_0))
            {
              ATerm c_5 = NULL;
              ATerm m_5 = NULL;
              t = not_null(y_4);
              {
                ATerm c_0 (ATerm t)
                {
                  ATerm l_9 = t;
                  if(PushChoice()==0)
                    {
                      ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL;
                      d_5 = t;
                      o_4 :
                      if(match_cons(d_5, sym_TCons_2))
                        {
                          e_5 = ATgetArgument(d_5, 0);
                          f_5 = ATgetArgument(d_5, 1);
                          p_4 :
                          if(match_cons(f_5, sym_TCons_2))
                            {
                              g_5 = ATgetArgument(f_5, 0);
                              h_5 = ATgetArgument(f_5, 1);
                              q_4 :
                              if(match_cons(h_5, sym_TNil_0))
                                {
                                  t = not_null(w_4);
                                  {
                                    ATerm d_0 (ATerm t)
                                    {
                                      ATerm e_0 (ATerm t)
                                      {
                                        ATerm k_5 = NULL;
                                        k_5 = t;
                                        if(e_5 != NULL && e_5 != k_5)
                                          _fail(k_5);
                                        else
                                          e_5 = k_5;
                                        return(t);
                                      }
                                      ATerm f_0 (ATerm t)
                                      {
                                        ATerm m_9 = t;
                                        if(PushChoice()==0)
                                          {
                                            ATerm l_5 = NULL;
                                            t = length_0(t);
                                            l_5 = t;
                                            if(g_5 != NULL && g_5 != l_5)
                                              _fail(l_5);
                                            else
                                              g_5 = l_5;
                                            PopChoice();
                                          }
                                        else
                                          {
                                            t = m_9;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_5), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = eq_0(t);
                                          }
                                        return(t);
                                      }
                                      t = SDef_3(t, e_0, f_0, _id);
                                      return(t);
                                    }
                                    t = fetch_1(t, d_0);
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
                    t = l_9;
                  return(t);
                }
                t = filter_1(t, c_0);
                m_5 = t;
                if(c_5 != NULL && c_5 != m_5)
                  _fail(m_5);
                else
                  c_5 = m_5;
              }
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_4), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_5), (ATerm) ATmakeAppl(sym_TNil_0)));
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm e_43 (ATerm), ATerm f_43 (ATerm))
{
  ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
  w_5 = t;
  v_5 :
  if(match_cons(w_5, sym_Rec_2))
    {
      x_5 = ATgetArgument(w_5, 0);
      y_5 = ATgetArgument(w_5, 1);
      {
        ATerm b_6 = NULL;
        t = not_null(x_5);
        {
          ATerm d_6 = NULL;
          t = e_43(t);
          b_6 = t;
          t = not_null(y_5);
          t = f_43(t);
          d_6 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(b_6), not_null(d_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm g_43 (ATerm), ATerm h_43 (ATerm))
{
  ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL;
  m_6 = t;
  l_6 :
  if(match_cons(m_6, sym_Let_2))
    {
      n_6 = ATgetArgument(m_6, 0);
      o_6 = ATgetArgument(m_6, 1);
      {
        ATerm r_6 = NULL;
        t = not_null(n_6);
        {
          ATerm t_6 = NULL;
          t = g_43(t);
          r_6 = t;
          t = not_null(o_6);
          t = h_43(t);
          t_6 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(r_6), not_null(t_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm q_65 (ATerm), ATerm r_65 (ATerm), ATerm s_65 (ATerm))
{
  ATerm n_9 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, q_65, q_65);
      PopChoice();
    }
  else
    {
      t = n_9;
      {
        ATerm o_9 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, s_65, s_65, q_65);
            PopChoice();
          }
        else
          {
            t = o_9;
            t = Rec_2(t, s_65, q_65);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL;
  a_7 = t;
  z_6 :
  if(match_cons(a_7, sym_Rec_2))
    {
      b_7 = ATgetArgument(a_7, 0);
      c_7 = ATgetArgument(a_7, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_7), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL;
  k_7 = t;
  j_7 :
  if(match_cons(k_7, sym_SDef_3))
    {
      l_7 = ATgetArgument(k_7, 0);
      m_7 = ATgetArgument(k_7, 1);
      n_7 = ATgetArgument(k_7, 2);
      t = not_null(m_7);
      {
        ATerm g_0 (ATerm t)
        {
          ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
          y_9 = t;
          i_7 :
          if(match_cons(y_9, sym_VarDec_2))
            {
              z_9 = ATgetArgument(y_9, 0);
              a_10 = ATgetArgument(y_9, 1);
              t = not_null(z_9);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, g_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL;
  i_10 = t;
  h_10 :
  if(match_cons(i_10, sym_Let_2))
    {
      j_10 = ATgetArgument(i_10, 0);
      k_10 = ATgetArgument(i_10, 1);
      t = not_null(j_10);
      {
        ATerm h_0 (ATerm t)
        {
          ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL;
          q_10 = t;
          g_10 :
          if(match_cons(q_10, sym_SDef_3))
            {
              r_10 = ATgetArgument(q_10, 0);
              s_10 = ATgetArgument(q_10, 1);
              t_10 = ATgetArgument(q_10, 2);
              t = not_null(r_10);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, h_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
  j_12 = t;
  w_11 :
  if(match_cons(j_12, sym_TCons_2))
    {
      k_12 = ATgetArgument(j_12, 0);
      l_12 = ATgetArgument(j_12, 1);
      x_11 :
      if(match_cons(l_12, sym_TCons_2))
        {
          m_12 = ATgetArgument(l_12, 0);
          n_12 = ATgetArgument(l_12, 1);
          y_11 :
          if(match_cons(n_12, sym_TNil_0))
            {
              t = not_null(k_12);
              {
                ATerm s_12 (ATerm t)
                {
                  ATerm p_9 = t;
                  if(PushChoice()==0)
                    {
                      ATerm q_12 = NULL;
                      q_12 = t;
                      v_11 :
                      if(match_cons(q_12, sym_Nil_0))
                        t = not_null(m_12);
                      else
                        _fail(t);
                      PopChoice();
                    }
                  else
                    {
                      t = p_9;
                      {
                        ATerm q_9 = t;
                        if(PushChoice()==0)
                          {
                            ATerm i_0 (ATerm t)
                            {
                              t = not_null(m_12);
                              return(t);
                            }
                            t = HdMember_1(t, i_0);
                            t = s_12(t);
                            PopChoice();
                          }
                        else
                          {
                            t = q_9;
                            t = Cons_2(t, _id, s_12);
                          }
                      }
                    }
                  return(t);
                }
                t = s_12(t);
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
ATerm foldr_3 (ATerm t, ATerm n_54 (ATerm), ATerm o_54 (ATerm), ATerm p_54 (ATerm))
{
  ATerm m_13 (ATerm t)
  {
    ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL;
    z_12 = t;
    y_12 :
    if(match_cons(z_12, sym_Nil_0))
      t = n_54(t);
    else
      {
        if(match_cons(z_12, sym_Cons_2))
          {
            a_13 = ATgetArgument(z_12, 0);
            b_13 = ATgetArgument(z_12, 1);
            {
              ATerm f_13 = NULL;
              t = not_null(a_13);
              {
                ATerm k_13 = NULL;
                t = p_54(t);
                f_13 = t;
                t = not_null(b_13);
                t = m_13(t);
                k_13 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = o_54(t);
              }
            }
          }
        else
          _fail(t);
      }
    return(t);
  }
  t = m_13(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm e_56 (ATerm), ATerm f_56 (ATerm), ATerm g_56 (ATerm))
{
  ATerm x_13 = NULL;
  ATerm z_13 = NULL;
  x_13 = t;
  {
    ATerm a_14 = NULL;
    ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
    t = not_null(x_13);
    a_14 = t;
    t = SSL_explode_term(not_null(a_14));
    c_14 = t;
    u_13 :
    if(match_cons(c_14, sym_TCons_2))
      {
        d_14 = ATgetArgument(c_14, 0);
        e_14 = ATgetArgument(c_14, 1);
        v_13 :
        if(match_cons(e_14, sym_TCons_2))
          {
            f_14 = ATgetArgument(e_14, 0);
            g_14 = ATgetArgument(e_14, 1);
            w_13 :
            if(match_cons(g_14, sym_TNil_0))
              {
                if(z_13 != NULL && z_13 != f_14)
                  _fail(f_14);
                else
                  z_13 = f_14;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(z_13);
    t = foldr_3(t, e_56, f_56, g_56);
  }
  return(t);
}
ATerm collect_kids_1 (ATerm t, ATerm m_56 (ATerm))
{
  ATerm j_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = crush_3(t, j_0, union_0, m_56);
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm v_55 (ATerm), ATerm w_55 (ATerm))
{
  ATerm n_14 = NULL,o_14 = NULL,q_14 = NULL;
  n_14 = t;
  m_14 :
  if(match_cons(n_14, sym_Cons_2))
    {
      o_14 = ATgetArgument(n_14, 0);
      q_14 = ATgetArgument(n_14, 1);
      t = w_55(t);
      {
        ATerm k_0 (ATerm t)
        {
          ATerm t_14 = NULL;
          t_14 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_14), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = v_55(t);
          return(t);
        }
        t = fetch_1(t, k_0);
      }
      t = not_null(q_14);
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_p__1 (ATerm t, ATerm z_55 (ATerm))
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
                ATerm r_15 (ATerm t)
                {
                  ATerm r_9 = t;
                  if(PushChoice()==0)
                    {
                      ATerm p_15 = NULL;
                      p_15 = t;
                      y_14 :
                      if(!(match_cons(p_15, sym_Nil_0)))
                        _fail(t);
                      PopChoice();
                    }
                  else
                    {
                      t = r_9;
                      {
                        ATerm s_9 = t;
                        if(PushChoice()==0)
                          {
                            ATerm l_0 (ATerm t)
                            {
                              t = not_null(f_15);
                              return(t);
                            }
                            t = HdMember_p__2(t, z_55, l_0);
                            t = r_15(t);
                            PopChoice();
                          }
                        else
                          {
                            t = s_9;
                            t = Cons_2(t, _id, r_15);
                          }
                      }
                    }
                  return(t);
                }
                t = r_15(t);
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
ATerm diff_1 (ATerm t, ATerm b_56 (ATerm))
{
  t = diff_p__1(t, b_56);
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm b_52 (ATerm), ATerm c_52 (ATerm), ATerm d_52 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm e_52 (ATerm))
{
  ATerm l_16 (ATerm t)
  {
    ATerm m_0 (ATerm t)
    {
      ATerm t_9 = t;
      if(PushChoice()==0)
        {
          t = b_52(t);
          PopChoice();
        }
      else
        {
          t = t_9;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      return(t);
    }
    ATerm n_0 (ATerm t)
    {
      ATerm u_9 = t;
      if(PushChoice()==0)
        {
          ATerm w_15 = NULL;
          ATerm v_9;
          v_9 = t;
          {
            ATerm k_16 = NULL;
            t = c_52(t);
            k_16 = t;
            if(w_15 != NULL && w_15 != k_16)
              _fail(k_16);
            else
              w_15 = k_16;
          }
          t = v_9;
          {
            ATerm o_0 (ATerm t)
            {
              ATerm q_0 (ATerm t)
              {
                t = not_null(w_15);
                return(t);
              }
              t = split_2(t, l_16, q_0);
              t = diff_p__1(t, e_52);
              return(t);
            }
            ATerm p_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = d_52(t, o_0, l_16, p_0);
            t = collect_kids_1(t, _id);
          }
          PopChoice();
        }
      else
        {
          t = u_9;
          t = collect_kids_1(t, l_16);
        }
      return(t);
    }
    t = split_2(t, m_0, n_0);
    t = union_0(t);
    return(t);
  }
  t = l_16(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
    f_17 = t;
    p_16 :
    if(match_cons(f_17, sym_Call_2))
      {
        g_17 = ATgetArgument(f_17, 0);
        i_17 = ATgetArgument(f_17, 1);
        q_16 :
        if(match_cons(g_17, sym_SVar_1))
          {
            h_17 = ATgetArgument(g_17, 0);
            {
              ATerm l_17 = NULL;
              t = not_null(i_17);
              t = length_0(t);
              l_17 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(h_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_17), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0));
            }
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm s_0 (ATerm t)
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
  ATerm t_0 (ATerm t)
  {
    ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
    n_17 = t;
    u_16 :
    if(match_cons(n_17, sym_TCons_2))
      {
        o_17 = ATgetArgument(n_17, 0);
        t_17 = ATgetArgument(n_17, 1);
        v_16 :
        if(match_cons(o_17, sym_TCons_2))
          {
            p_17 = ATgetArgument(o_17, 0);
            q_17 = ATgetArgument(o_17, 1);
            w_16 :
            if(match_cons(q_17, sym_TCons_2))
              {
                r_17 = ATgetArgument(q_17, 0);
                s_17 = ATgetArgument(q_17, 1);
                x_16 :
                if(match_cons(s_17, sym_TNil_0))
                  {
                    y_16 :
                    if(match_cons(t_17, sym_TCons_2))
                      {
                        u_17 = ATgetArgument(t_17, 0);
                        v_17 = ATgetArgument(t_17, 1);
                        z_16 :
                        if(match_cons(v_17, sym_TNil_0))
                          {
                            if(p_17 != NULL && p_17 != u_17)
                              _fail(u_17);
                            else
                              p_17 = u_17;
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = free_vars2_4(t, r_0, s_0, sboundin_3, t_0);
  return(t);
}
ATerm FoldR_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL;
  g_18 = t;
  f_18 :
  if(match_cons(g_18, sym_Cons_2))
    {
      h_18 = ATgetArgument(g_18, 0);
      i_18 = ATgetArgument(g_18, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_18), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm k_54 (ATerm), ATerm l_54 (ATerm))
{
  ATerm r_18 (ATerm t)
  {
    ATerm b_10 = t;
    if(PushChoice()==0)
      {
        ATerm p_18 = NULL;
        p_18 = t;
        n_18 :
        if(match_cons(p_18, sym_Nil_0))
          t = k_54(t);
        else
          _fail(t);
        PopChoice();
      }
    else
      {
        t = b_10;
        t = FoldR_0(t);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm v_0 (ATerm t)
            {
              ATerm q_18 = NULL;
              q_18 = t;
              o_18 :
              if(!(match_cons(q_18, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, r_18, v_0);
            return(t);
          }
          t = TCons_2(t, _id, u_0);
          t = l_54(t);
        }
      }
    return(t);
  }
  t = r_18(t);
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
    ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,d_19 = NULL,e_19 = NULL;
    z_18 = t;
    u_18 :
    if(match_cons(z_18, sym_TCons_2))
      {
        a_19 = ATgetArgument(z_18, 0);
        b_19 = ATgetArgument(z_18, 1);
        v_18 :
        if(match_cons(b_19, sym_TCons_2))
          {
            d_19 = ATgetArgument(b_19, 0);
            e_19 = ATgetArgument(b_19, 1);
            y_18 :
            if(match_cons(e_19, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(a_19), not_null(d_19));
            else
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
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
  m_19 = t;
  j_19 :
  if(match_cons(m_19, sym_Call_2))
    {
      n_19 = ATgetArgument(m_19, 0);
      p_19 = ATgetArgument(m_19, 1);
      k_19 :
      if(match_cons(n_19, sym_SVar_1))
        {
          o_19 = ATgetArgument(n_19, 0);
          l_19 :
          if(match_cons(p_19, sym_Nil_0))
            t = not_null(o_19);
          else
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
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
  u_22 = t;
  k_20 :
  if(match_cons(u_22, sym_TCons_2))
    {
      v_22 = ATgetArgument(u_22, 0);
      w_22 = ATgetArgument(u_22, 1);
      l_20 :
      if(match_cons(w_22, sym_TCons_2))
        {
          x_22 = ATgetArgument(w_22, 0);
          a_23 = ATgetArgument(w_22, 1);
          s_22 :
          if(match_cons(x_22, sym_Cons_2))
            {
              y_22 = ATgetArgument(x_22, 0);
              z_22 = ATgetArgument(x_22, 1);
              t_22 :
              if(match_cons(a_23, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_22), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL;
  m_23 = t;
  f_23 :
  if(match_cons(m_23, sym_TCons_2))
    {
      n_23 = ATgetArgument(m_23, 0);
      o_23 = ATgetArgument(m_23, 1);
      g_23 :
      if(match_cons(o_23, sym_TCons_2))
        {
          p_23 = ATgetArgument(o_23, 0);
          w_23 = ATgetArgument(o_23, 1);
          h_23 :
          if(match_cons(p_23, sym_Cons_2))
            {
              q_23 = ATgetArgument(p_23, 0);
              v_23 = ATgetArgument(p_23, 1);
              i_23 :
              if(match_cons(q_23, sym_TCons_2))
                {
                  r_23 = ATgetArgument(q_23, 0);
                  s_23 = ATgetArgument(q_23, 1);
                  j_23 :
                  if(match_cons(s_23, sym_TCons_2))
                    {
                      t_23 = ATgetArgument(s_23, 0);
                      u_23 = ATgetArgument(s_23, 1);
                      k_23 :
                      if(match_cons(u_23, sym_TNil_0))
                        {
                          l_23 :
                          if(match_cons(w_23, sym_TNil_0))
                            {
                              ATerm y_23 = NULL;
                              if(n_23 != NULL && n_23 != r_23)
                                _fail(r_23);
                              else
                                n_23 = r_23;
                              if(y_23 != NULL && y_23 != t_23)
                                _fail(t_23);
                              else
                                y_23 = t_23;
                              t = not_null(y_23);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm c_10 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = c_10;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm t_64 (ATerm), ATerm u_64 (ATerm))
{
  ATerm e_24 = NULL;
  ATerm g_24 = NULL,h_24 = NULL;
  e_24 = t;
  {
    ATerm i_24 = NULL;
    t = not_null(e_24);
    {
      ATerm j_24 = NULL;
      t = t_64(t);
      i_24 = t;
      if(g_24 != NULL && g_24 != i_24)
        _fail(i_24);
      else
        g_24 = i_24;
      t = u_64(t);
      j_24 = t;
      if(h_24 != NULL && h_24 != j_24)
        _fail(j_24);
      else
        h_24 = j_24;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_24), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm t_63 (ATerm))
{
  ATerm n_24 (ATerm t)
  {
    ATerm d_10 = t;
    if(PushChoice()==0)
      {
        t = t_63(t);
        PopChoice();
      }
    else
      {
        t = d_10;
        t = _all(t, n_24);
      }
    return(t);
  }
  t = n_24(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
  v_24 = t;
  r_24 :
  if(match_cons(v_24, sym_TCons_2))
    {
      w_24 = ATgetArgument(v_24, 0);
      x_24 = ATgetArgument(v_24, 1);
      s_24 :
      if(match_cons(x_24, sym_TCons_2))
        {
          y_24 = ATgetArgument(x_24, 0);
          z_24 = ATgetArgument(x_24, 1);
          t_24 :
          if(match_cons(z_24, sym_TNil_0))
            {
              ATerm d_25 = NULL;
              if(d_25 != NULL && d_25 != y_24)
                _fail(y_24);
              else
                d_25 = y_24;
            }
          else
            {
              if(match_cons(z_24, sym_TCons_2))
                {
                  a_25 = ATgetArgument(z_24, 0);
                  b_25 = ATgetArgument(z_24, 1);
                  u_24 :
                  if(match_cons(b_25, sym_TNil_0))
                    {
                      ATerm j_25 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_24), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      j_25 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_25), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm v_64 (ATerm), ATerm w_64 (ATerm))
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
  t = subs_args_0(t);
  s_25 = t;
  p_25 :
  if(match_cons(s_25, sym_TCons_2))
    {
      t_25 = ATgetArgument(s_25, 0);
      u_25 = ATgetArgument(s_25, 1);
      q_25 :
      if(match_cons(u_25, sym_TCons_2))
        {
          v_25 = ATgetArgument(u_25, 0);
          w_25 = ATgetArgument(u_25, 1);
          r_25 :
          if(match_cons(w_25, sym_TNil_0))
            {
              t = not_null(v_25);
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm z_0 (ATerm t)
                  {
                    t = not_null(t_25);
                    return(t);
                  }
                  t = SubsVar_2(t, v_64, z_0);
                  t = w_64(t);
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
ATerm substitute_1 (ATerm t, ATerm x_64 (ATerm))
{
  t = substitute_2(t, x_64, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL;
  r_26 = t;
  p_26 :
  if(match_cons(r_26, sym_Cons_2))
    {
      s_26 = ATgetArgument(r_26, 0);
      w_26 = ATgetArgument(r_26, 1);
      q_26 :
      if(match_cons(s_26, sym_SDef_3))
        {
          t_26 = ATgetArgument(s_26, 0);
          u_26 = ATgetArgument(s_26, 1);
          v_26 = ATgetArgument(s_26, 2);
          {
            ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,g_28 = NULL;
            ATerm m_27 = NULL;
            t = not_null(u_26);
            {
              ATerm s_27 = NULL;
              ATerm a_1 (ATerm t)
              {
                ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
                e_27 = t;
                d_26 :
                if(match_cons(e_27, sym_VarDec_2))
                  {
                    f_27 = ATgetArgument(e_27, 0);
                    g_27 = ATgetArgument(e_27, 1);
                    {
                      ATerm k_27 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TNil_0);
                      t = new_0(t);
                      k_27 = t;
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(k_27), not_null(g_27));
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, a_1);
              m_27 = t;
              if(b_27 != NULL && b_27 != m_27)
                _fail(m_27);
              else
                b_27 = m_27;
              t = not_null(b_27);
              {
                ATerm f_28 = NULL;
                ATerm b_1 (ATerm t)
                {
                  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
                  n_27 = t;
                  g_26 :
                  if(match_cons(n_27, sym_VarDec_2))
                    {
                      o_27 = ATgetArgument(n_27, 0);
                      p_27 = ATgetArgument(n_27, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_27)), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = map_1(t, b_1);
                s_27 = t;
                if(c_27 != NULL && c_27 != s_27)
                  _fail(s_27);
                else
                  c_27 = s_27;
                t = not_null(r_26);
                {
                  ATerm c_1 (ATerm t)
                  {
                    ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
                    t_27 = t;
                    m_26 :
                    if(match_cons(t_27, sym_SDef_3))
                      {
                        u_27 = ATgetArgument(t_27, 0);
                        v_27 = ATgetArgument(t_27, 1);
                        w_27 = ATgetArgument(t_27, 2);
                        {
                          ATerm x_27 = NULL,y_27 = NULL,d_28 = NULL;
                          if(t_26 != NULL && t_26 != u_27)
                            _fail(u_27);
                          else
                            t_26 = u_27;
                          if(x_27 != NULL && x_27 != v_27)
                            _fail(v_27);
                          else
                            x_27 = v_27;
                          if(y_27 != NULL && y_27 != w_27)
                            _fail(w_27);
                          else
                            y_27 = w_27;
                          t = not_null(x_27);
                          {
                            ATerm d_1 (ATerm t)
                            {
                              ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
                              z_27 = t;
                              k_26 :
                              if(match_cons(z_27, sym_VarDec_2))
                                {
                                  a_28 = ATgetArgument(z_27, 0);
                                  b_28 = ATgetArgument(z_27, 1);
                                  t = not_null(a_28);
                                }
                              else
                                _fail(t);
                              return(t);
                            }
                            t = map_1(t, d_1);
                            d_28 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_28), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_27), (ATerm) ATmakeAppl(sym_TNil_0))));
                            t = substitute_1(t, IsSVar_0);
                          }
                        }
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = map_1(t, c_1);
                  f_28 = t;
                  if(d_27 != NULL && d_27 != f_28)
                    _fail(f_28);
                  else
                    d_27 = f_28;
                }
              }
            }
            t = not_null(d_27);
            t = choices_0(t);
            g_28 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(t_26), not_null(b_27), not_null(g_28));
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
  ATerm c_29 = NULL,f_29 = NULL,g_29 = NULL;
  c_29 = t;
  a_29 :
  if(match_cons(c_29, sym_Cons_2))
    {
      f_29 = ATgetArgument(c_29, 0);
      g_29 = ATgetArgument(c_29, 1);
      b_29 :
      if(match_cons(g_29, sym_Nil_0))
        t = not_null(f_29);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm joindefs_0 (ATerm t)
{
  ATerm e_10 = t;
  if(PushChoice()==0)
    {
      t = JoinDefs1_0(t);
      PopChoice();
    }
  else
    {
      t = e_10;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm NonOverloadedDef_0 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,g_30 = NULL,h_30 = NULL,m_30 = NULL,n_30 = NULL;
  u_29 = t;
  n_29 :
  if(match_cons(u_29, sym_TCons_2))
    {
      v_29 = ATgetArgument(u_29, 0);
      h_30 = ATgetArgument(u_29, 1);
      o_29 :
      if(match_cons(v_29, sym_TCons_2))
        {
          w_29 = ATgetArgument(v_29, 0);
          x_29 = ATgetArgument(v_29, 1);
          p_29 :
          if(match_cons(x_29, sym_TCons_2))
            {
              y_29 = ATgetArgument(x_29, 0);
              g_30 = ATgetArgument(x_29, 1);
              q_29 :
              if(match_int(y_29, 0))
                {
                  r_29 :
                  if(match_cons(g_30, sym_TNil_0))
                    {
                      s_29 :
                      if(match_cons(h_30, sym_TCons_2))
                        {
                          m_30 = ATgetArgument(h_30, 0);
                          n_30 = ATgetArgument(h_30, 1);
                          t_29 :
                          if(match_cons(n_30, sym_TNil_0))
                            {
                              t = not_null(m_30);
                              {
                                ATerm e_1 (ATerm t)
                                {
                                  ATerm f_1 (ATerm t)
                                  {
                                    ATerm q_30 = NULL;
                                    q_30 = t;
                                    if(w_29 != NULL && w_29 != q_30)
                                      _fail(q_30);
                                    else
                                      w_29 = q_30;
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
ATerm length_0 (ATerm t)
{
  ATerm f_10 = t;
  if(PushChoice()==0)
    {
      ATerm w_30 = NULL;
      w_30 = t;
      u_30 :
      if(match_cons(w_30, sym_Nil_0))
        t = (ATerm) ATmakeInt(0);
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = f_10;
      {
        ATerm i_31 = NULL;
        t = Tl_0(t);
        t = length_0(t);
        i_31 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_31), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = add_0(t);
      }
    }
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm i_43 (ATerm), ATerm j_43 (ATerm), ATerm k_43 (ATerm))
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
  t_31 = t;
  s_31 :
  if(match_cons(t_31, sym_SDef_3))
    {
      u_31 = ATgetArgument(t_31, 0);
      v_31 = ATgetArgument(t_31, 1);
      w_31 = ATgetArgument(t_31, 2);
      {
        ATerm e_32 = NULL;
        t = not_null(u_31);
        {
          ATerm g_32 = NULL;
          t = i_43(t);
          e_32 = t;
          t = not_null(v_31);
          {
            ATerm i_32 = NULL;
            t = j_43(t);
            g_32 = t;
            t = not_null(w_31);
            t = k_43(t);
            i_32 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(e_32), not_null(g_32), not_null(i_32));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm partition_1 (ATerm t, ATerm a_54 (ATerm))
{
  ATerm z_33 (ATerm t)
  {
    ATerm l_10 = t;
    if(PushChoice()==0)
      {
        ATerm c_33 = NULL;
        c_33 = t;
        r_32 :
        if(match_cons(c_33, sym_Nil_0))
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
        else
          _fail(t);
        PopChoice();
      }
    else
      {
        t = l_10;
        {
          ATerm m_10 = t;
          if(PushChoice()==0)
            {
              ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL;
              t = Cons_2(t, a_54, z_33);
              d_33 = t;
              t_32 :
              if(match_cons(d_33, sym_Cons_2))
                {
                  e_33 = ATgetArgument(d_33, 0);
                  f_33 = ATgetArgument(d_33, 1);
                  u_32 :
                  if(match_cons(f_33, sym_TCons_2))
                    {
                      g_33 = ATgetArgument(f_33, 0);
                      h_33 = ATgetArgument(f_33, 1);
                      v_32 :
                      if(match_cons(h_33, sym_TCons_2))
                        {
                          i_33 = ATgetArgument(h_33, 0);
                          j_33 = ATgetArgument(h_33, 1);
                          w_32 :
                          if(match_cons(j_33, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_33), not_null(g_33)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_33), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
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
              t = m_10;
              {
                ATerm n_33 = NULL,o_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL;
                t = Cons_2(t, _id, z_33);
                n_33 = t;
                y_32 :
                if(match_cons(n_33, sym_Cons_2))
                  {
                    o_33 = ATgetArgument(n_33, 0);
                    r_33 = ATgetArgument(n_33, 1);
                    z_32 :
                    if(match_cons(r_33, sym_TCons_2))
                      {
                        s_33 = ATgetArgument(r_33, 0);
                        t_33 = ATgetArgument(r_33, 1);
                        a_33 :
                        if(match_cons(t_33, sym_TCons_2))
                          {
                            u_33 = ATgetArgument(t_33, 0);
                            v_33 = ATgetArgument(t_33, 1);
                            b_33 :
                            if(match_cons(v_33, sym_TNil_0))
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_33), not_null(u_33)), (ATerm) ATmakeAppl(sym_TNil_0)));
                            else
                              _fail(t);
                          }
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
  t = z_33(t);
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL;
  q_34 = t;
  g_34 :
  if(match_cons(q_34, sym_TCons_2))
    {
      r_34 = ATgetArgument(q_34, 0);
      w_34 = ATgetArgument(q_34, 1);
      k_34 :
      if(match_cons(r_34, sym_TCons_2))
        {
          s_34 = ATgetArgument(r_34, 0);
          t_34 = ATgetArgument(r_34, 1);
          l_34 :
          if(match_cons(t_34, sym_TCons_2))
            {
              u_34 = ATgetArgument(t_34, 0);
              v_34 = ATgetArgument(t_34, 1);
              m_34 :
              if(match_cons(v_34, sym_TNil_0))
                {
                  n_34 :
                  if(match_cons(w_34, sym_TCons_2))
                    {
                      x_34 = ATgetArgument(w_34, 0);
                      y_34 = ATgetArgument(w_34, 1);
                      o_34 :
                      if(match_cons(y_34, sym_TNil_0))
                        {
                          t = not_null(x_34);
                          {
                            ATerm g_1 (ATerm t)
                            {
                              ATerm h_1 (ATerm t)
                              {
                                ATerm g_35 = NULL;
                                g_35 = t;
                                if(s_34 != NULL && s_34 != g_35)
                                  _fail(g_35);
                                else
                                  s_34 = g_35;
                                return(t);
                              }
                              ATerm i_1 (ATerm t)
                              {
                                ATerm n_10;
                                n_10 = t;
                                {
                                  ATerm h_35 = NULL;
                                  t = length_0(t);
                                  h_35 = t;
                                  if(u_34 != NULL && u_34 != h_35)
                                    _fail(h_35);
                                  else
                                    u_34 = h_35;
                                }
                                t = n_10;
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
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
  h_36 = t;
  g_36 :
  if(match_cons(h_36, sym_Match_1))
    {
      i_36 = ATgetArgument(h_36, 0);
      {
        ATerm w_36 = NULL,x_36 = NULL,a_37 = NULL,c_37 = NULL,g_37 = NULL;
        ATerm y_36 = NULL;
        ATerm z_36 = NULL;
        t = new_0(t);
        y_36 = t;
        if(w_36 != NULL && w_36 != y_36)
          _fail(y_36);
        else
          w_36 = y_36;
        t = new_0(t);
        z_36 = t;
        if(x_36 != NULL && x_36 != z_36)
          _fail(z_36);
        else
          x_36 = z_36;
        t = not_null(i_36);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
            d_37 = t;
            r_35 :
            if(match_cons(d_37, sym_Explode_2))
              {
                e_37 = ATgetArgument(d_37, 0);
                f_37 = ATgetArgument(d_37, 1);
                if(a_37 != NULL && a_37 != e_37)
                  _fail(e_37);
                else
                  a_37 = e_37;
                if(c_37 != NULL && c_37 != f_37)
                  _fail(f_37);
                else
                  c_37 = f_37;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_36));
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, j_1);
          g_37 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_36), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_37)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_36), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_36))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_36)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_36)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_37), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_37), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0))))))));
        }
      }
    }
  else
    {
      if(match_cons(h_36, sym_Build_1))
        {
          i_36 = ATgetArgument(h_36, 0);
          {
            ATerm j_37 = NULL,w_37 = NULL,x_37 = NULL,b_38 = NULL;
            ATerm v_37 = NULL;
            t = new_0(t);
            v_37 = t;
            if(j_37 != NULL && j_37 != v_37)
              _fail(v_37);
            else
              j_37 = v_37;
            t = not_null(i_36);
            {
              ATerm k_1 (ATerm t)
              {
                ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
                y_37 = t;
                v_35 :
                if(match_cons(y_37, sym_Explode_2))
                  {
                    z_37 = ATgetArgument(y_37, 0);
                    a_38 = ATgetArgument(y_37, 1);
                    if(w_37 != NULL && w_37 != z_37)
                      _fail(z_37);
                    else
                      w_37 = z_37;
                    if(x_37 != NULL && x_37 != a_38)
                      _fail(a_38);
                    else
                      x_37 = a_38;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_37));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, k_1);
              b_38 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_37), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_37), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_37), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_37))), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_38)))));
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
                ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL;
                ATerm m_38 = NULL;
                ATerm n_38 = NULL;
                t = new_0(t);
                m_38 = t;
                if(i_38 != NULL && i_38 != m_38)
                  _fail(m_38);
                else
                  i_38 = m_38;
                {
                  ATerm o_38 = NULL;
                  t = new_0(t);
                  n_38 = t;
                  if(j_38 != NULL && j_38 != n_38)
                    _fail(n_38);
                  else
                    j_38 = n_38;
                  {
                    ATerm p_38 = NULL;
                    t = new_0(t);
                    o_38 = t;
                    if(k_38 != NULL && k_38 != o_38)
                      _fail(o_38);
                    else
                      k_38 = o_38;
                    t = new_0(t);
                    p_38 = t;
                    if(l_38 != NULL && l_38 != p_38)
                      _fail(p_38);
                    else
                      l_38 = p_38;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_38), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_38), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_38), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_38), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_38)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_38)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(i_36), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_38)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_38))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(j_36), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_38)), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_38))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(j_38)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_38)), (ATerm) ATmakeAppl(sym_Nil_0)))))));
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
  ATerm k_39 = NULL,l_39 = NULL;
  k_39 = t;
  j_39 :
  if(match_cons(k_39, sym_Build_1))
    {
      l_39 = ATgetArgument(k_39, 0);
      {
        ATerm n_39 = NULL,p_39 = NULL,q_39 = NULL,u_39 = NULL;
        ATerm o_39 = NULL;
        t = new_0(t);
        o_39 = t;
        if(n_39 != NULL && n_39 != o_39)
          _fail(o_39);
        else
          n_39 = o_39;
        t = not_null(l_39);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
            r_39 = t;
            h_39 :
            if(match_cons(r_39, sym_App_2))
              {
                s_39 = ATgetArgument(r_39, 0);
                t_39 = ATgetArgument(r_39, 1);
                if(p_39 != NULL && p_39 != s_39)
                  _fail(s_39);
                else
                  p_39 = s_39;
                if(q_39 != NULL && q_39 != t_39)
                  _fail(t_39);
                else
                  q_39 = t_39;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_39));
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, l_1);
          u_39 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_39), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(p_39), not_null(q_39), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_39))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_39))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp1_0 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL;
  e_40 = t;
  c_40 :
  if(match_cons(e_40, sym_Build_1))
    {
      f_40 = ATgetArgument(e_40, 0);
      d_40 :
      if(match_cons(f_40, sym_App_2))
        {
          g_40 = ATgetArgument(f_40, 0);
          h_40 = ATgetArgument(f_40, 1);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_40)), not_null(g_40));
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
  ATerm r_40 = NULL,s_40 = NULL;
  r_40 = t;
  q_40 :
  if(match_cons(r_40, sym_Build_1))
    {
      s_40 = ATgetArgument(r_40, 0);
      {
        ATerm u_40 = NULL,v_40 = NULL,a_41 = NULL;
        t = not_null(s_40);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL;
            w_40 = t;
            n_40 :
            if(match_cons(w_40, sym_App_2))
              {
                x_40 = ATgetArgument(w_40, 0);
                z_40 = ATgetArgument(w_40, 1);
                o_40 :
                if(match_cons(x_40, sym_Build_1))
                  {
                    y_40 = ATgetArgument(x_40, 0);
                    if(v_40 != NULL && v_40 != y_40)
                      _fail(y_40);
                    else
                      v_40 = y_40;
                    if(u_40 != NULL && u_40 != z_40)
                      _fail(z_40);
                    else
                      u_40 = z_40;
                    t = not_null(v_40);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, m_1);
          a_41 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, not_null(a_41));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL;
  c_42 = t;
  w_41 :
  if(match_cons(c_42, sym_Seqs_1))
    {
      d_42 = ATgetArgument(c_42, 0);
      x_41 :
      if(match_cons(d_42, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(d_42, sym_Cons_2))
            {
              a_42 = ATgetArgument(d_42, 0);
              b_42 = ATgetArgument(d_42, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_42), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(b_42)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(c_42, sym_Choices_1))
        {
          d_42 = ATgetArgument(c_42, 0);
          y_41 :
          if(match_cons(d_42, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(d_42, sym_Cons_2))
                {
                  a_42 = ATgetArgument(d_42, 0);
                  b_42 = ATgetArgument(d_42, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(a_42), (ATerm) ATmakeAppl(sym_Choices_1, not_null(b_42)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(c_42, sym_LChoices_1))
            {
              d_42 = ATgetArgument(c_42, 0);
              z_41 :
              if(match_cons(d_42, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(d_42, sym_Cons_2))
                    {
                      a_42 = ATgetArgument(d_42, 0);
                      b_42 = ATgetArgument(d_42, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(a_42), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(b_42)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(c_42, sym_Lets_2))
                {
                  d_42 = ATgetArgument(c_42, 0);
                  e_42 = ATgetArgument(c_42, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(d_42), not_null(e_42));
                }
              else
                {
                  if(match_cons(c_42, sym_BA_2))
                    {
                      d_42 = ATgetArgument(c_42, 0);
                      e_42 = ATgetArgument(c_42, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_42)), not_null(d_42));
                    }
                  else
                    {
                      if(match_cons(c_42, sym_MA_2))
                        {
                          d_42 = ATgetArgument(c_42, 0);
                          e_42 = ATgetArgument(c_42, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_42)), not_null(e_42));
                        }
                      else
                        {
                          if(match_cons(c_42, sym_AM_2))
                            {
                              d_42 = ATgetArgument(c_42, 0);
                              e_42 = ATgetArgument(c_42, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_42), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_42)));
                            }
                          else
                            {
                              if(match_cons(c_42, sym_BAM_3))
                                {
                                  d_42 = ATgetArgument(c_42, 0);
                                  e_42 = ATgetArgument(c_42, 1);
                                  f_42 = ATgetArgument(c_42, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_42)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_42), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_42)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(c_42, sym_InfixApp_3))
                                    {
                                      d_42 = ATgetArgument(c_42, 0);
                                      e_42 = ATgetArgument(c_42, 1);
                                      f_42 = ATgetArgument(c_42, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(e_42), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_42), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_42), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
ATerm repeat_2 (ATerm t, ATerm k_49 (ATerm), ATerm l_49 (ATerm))
{
  ATerm v_43 (ATerm t)
  {
    ATerm o_10 = t;
    if(PushChoice()==0)
      {
        t = k_49(t);
        t = v_43(t);
        PopChoice();
      }
    else
      {
        t = o_10;
        t = l_49(t);
      }
    return(t);
  }
  t = v_43(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm n_49 (ATerm))
{
  t = repeat_2(t, n_49, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm x_43 = NULL;
  x_43 = t;
  w_43 :
  if(!(match_cons(x_43, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm p_10 = t;
  if(PushChoice()==0)
    {
      ATerm n_1 (ATerm t)
      {
        ATerm u_10 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = u_10;
            {
              ATerm z_43 = NULL;
              z_43 = t;
              y_43 :
              if(!(match_cons(z_43, sym_Wld_0)))
                _fail(t);
            }
          }
        return(t);
      }
      t = topdown_1(t, n_1);
      PopChoice();
      _fail(t);
    }
  else
    t = p_10;
  return(t);
}
ATerm App_2 (ATerm t, ATerm f_41 (ATerm), ATerm g_41 (ATerm))
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL;
  e_44 = t;
  d_44 :
  if(match_cons(e_44, sym_App_2))
    {
      f_44 = ATgetArgument(e_44, 0);
      g_44 = ATgetArgument(e_44, 1);
      {
        ATerm l_44 = NULL;
        t = not_null(f_44);
        {
          ATerm p_44 = NULL;
          t = f_41(t);
          l_44 = t;
          t = not_null(g_44);
          t = g_41(t);
          p_44 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, not_null(l_44), not_null(p_44));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm c_41 (ATerm), ATerm d_41 (ATerm), ATerm e_41 (ATerm))
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL;
  f_45 = t;
  e_45 :
  if(match_cons(f_45, sym_Con_3))
    {
      g_45 = ATgetArgument(f_45, 0);
      h_45 = ATgetArgument(f_45, 1);
      i_45 = ATgetArgument(f_45, 2);
      {
        ATerm p_45 = NULL;
        t = not_null(g_45);
        {
          ATerm r_45 = NULL;
          t = c_41(t);
          p_45 = t;
          t = not_null(h_45);
          {
            ATerm t_45 = NULL;
            t = d_41(t);
            r_45 = t;
            t = not_null(i_45);
            t = e_41(t);
            t_45 = t;
            t = (ATerm) ATmakeAppl(sym_Con_3, not_null(p_45), not_null(r_45), not_null(t_45));
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
  ATerm v_10 = t;
  if(PushChoice()==0)
    {
      ATerm o_1 (ATerm t)
      {
        ATerm w_10 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = w_10;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, o_1);
      PopChoice();
      _fail(t);
    }
  else
    t = v_10;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL;
  d_46 = t;
  b_46 :
  if(match_cons(d_46, sym_SRule_1))
    {
      e_46 = ATgetArgument(d_46, 0);
      c_46 :
      if(match_cons(e_46, sym_Rule_3))
        {
          f_46 = ATgetArgument(e_46, 0);
          g_46 = ATgetArgument(e_46, 1);
          h_46 = ATgetArgument(e_46, 2);
          t = not_null(f_46);
          t = pureterm_0(t);
          t = not_null(g_46);
          t = buildterm_0(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_46)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_46), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_46)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(e_46, sym_StratRule_3))
            {
              f_46 = ATgetArgument(e_46, 0);
              g_46 = ATgetArgument(e_46, 1);
              h_46 = ATgetArgument(e_46, 2);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_46), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_46), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_46), (ATerm) ATmakeAppl(sym_Nil_0)))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm i_44 (ATerm), ATerm j_44 (ATerm))
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL;
  e_47 = t;
  b_47 :
  if(match_cons(e_47, sym_Scope_2))
    {
      f_47 = ATgetArgument(e_47, 0);
      g_47 = ATgetArgument(e_47, 1);
      {
        ATerm m_47 = NULL;
        t = not_null(f_47);
        {
          ATerm o_47 = NULL;
          t = i_44(t);
          m_47 = t;
          t = not_null(g_47);
          t = j_44(t);
          o_47 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(m_47), not_null(o_47));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm i_63 (ATerm))
{
  ATerm v_47 (ATerm t)
  {
    ATerm x_10 = t;
    if(PushChoice()==0)
      {
        t = i_63(t);
        PopChoice();
      }
    else
      {
        t = x_10;
        t = _one(t, v_47);
      }
    return(t);
  }
  t = v_47(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL;
  k_48 = t;
  i_48 :
  if(match_cons(k_48, sym_SRule_1))
    {
      l_48 = ATgetArgument(k_48, 0);
      j_48 :
      if(match_cons(l_48, sym_Rule_3))
        {
          m_48 = ATgetArgument(l_48, 0);
          n_48 = ATgetArgument(l_48, 1);
          o_48 = ATgetArgument(l_48, 2);
          {
            ATerm s_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,c_49 = NULL;
            ATerm t_48 = NULL;
            t = new_0(t);
            t_48 = t;
            if(s_48 != NULL && s_48 != t_48)
              _fail(t_48);
            else
              s_48 = t_48;
            t = not_null(m_48);
            {
              ATerm e_49 = NULL,f_49 = NULL,r_49 = NULL;
              ATerm p_1 (ATerm t)
              {
                ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL;
                x_48 = t;
                z_47 :
                if(match_cons(x_48, sym_Con_3))
                  {
                    y_48 = ATgetArgument(x_48, 0);
                    a_49 = ATgetArgument(x_48, 1);
                    b_49 = ATgetArgument(x_48, 2);
                    a_48 :
                    if(match_cons(y_48, sym_Var_1))
                      {
                        z_48 = ATgetArgument(y_48, 0);
                        if(w_48 != NULL && w_48 != z_48)
                          _fail(z_48);
                        else
                          w_48 = z_48;
                        if(u_48 != NULL && u_48 != a_49)
                          _fail(a_49);
                        else
                          u_48 = a_49;
                        if(v_48 != NULL && v_48 != b_49)
                          _fail(b_49);
                        else
                          v_48 = b_49;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_48));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, p_1);
              c_49 = t;
              t = not_null(n_48);
              {
                ATerm s_1 (ATerm t)
                {
                  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL;
                  g_49 = t;
                  d_48 :
                  if(match_cons(g_49, sym_Con_3))
                    {
                      h_49 = ATgetArgument(g_49, 0);
                      j_49 = ATgetArgument(g_49, 1);
                      o_49 = ATgetArgument(g_49, 2);
                      e_48 :
                      if(match_cons(h_49, sym_Var_1))
                        {
                          i_49 = ATgetArgument(h_49, 0);
                          f_48 :
                          if(match_cons(o_49, sym_Call_2))
                            {
                              p_49 = ATgetArgument(o_49, 0);
                              q_49 = ATgetArgument(o_49, 1);
                              g_48 :
                              if(match_cons(q_49, sym_Nil_0))
                                {
                                  if(w_48 != NULL && w_48 != i_49)
                                    _fail(i_49);
                                  else
                                    w_48 = i_49;
                                  if(e_49 != NULL && e_49 != j_49)
                                    _fail(j_49);
                                  else
                                    e_49 = j_49;
                                  if(f_49 != NULL && f_49 != p_49)
                                    _fail(p_49);
                                  else
                                    f_49 = p_49;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_48));
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, s_1);
                r_49 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_48), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(c_49), not_null(r_49), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_48), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(f_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_48), not_null(e_49), (ATerm) ATmakeAppl(sym_Id_0))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_48)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_48)))))));
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
  ATerm y_10 = t;
  if(PushChoice()==0)
    {
      ATerm z_10 = t;
      if(PushChoice()==0)
        {
          t = Rcon_0(t);
          t = desugarRule_0(t);
          PopChoice();
        }
      else
        {
          t = z_10;
          {
            ATerm a_11 = t;
            if(PushChoice()==0)
              {
                t = Scope_2(t, _id, desugarRule_0);
                PopChoice();
              }
            else
              {
                t = a_11;
                t = RtoS_0(t);
              }
          }
        }
      PopChoice();
    }
  else
    t = y_10;
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm s_61 (ATerm))
{
  ATerm a_50 (ATerm t)
  {
    t = s_61(t);
    t = _all(t, a_50);
    return(t);
  }
  t = a_50(t);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm b_11 = t;
    if(PushChoice()==0)
      {
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      t = b_11;
    {
      ATerm c_2 (ATerm t)
      {
        ATerm c_11 = t;
        if(PushChoice()==0)
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = c_11;
            {
              ATerm d_11 = t;
              if(PushChoice()==0)
                {
                  ATerm e_11 = t;
                  if(PushChoice()==0)
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = e_11;
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
                  t = d_11;
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
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL;
  j_50 = t;
  i_50 :
  if(!(match_cons(j_50, sym_Nil_0)))
    {
      if(match_cons(j_50, sym_Cons_2))
        {
          k_50 = ATgetArgument(j_50, 0);
          l_50 = ATgetArgument(j_50, 1);
          t = not_null(k_50);
          {
            ATerm d_2 (ATerm t)
            {
              t = not_null(l_50);
              t = concat_0(t);
              return(t);
            }
            t = at_end_1(t, d_2);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm a_59 (ATerm))
{
  ATerm s_50 (ATerm t)
  {
    ATerm g_11 = t;
    if(PushChoice()==0)
      {
        ATerm r_50 = NULL;
        r_50 = t;
        q_50 :
        if(!(match_cons(r_50, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = g_11;
        t = Cons_2(t, a_59, s_50);
      }
    return(t);
  }
  t = s_50(t);
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL;
  v_50 = t;
  u_50 :
  if(match_cons(v_50, sym_TCons_2))
    {
      w_50 = ATgetArgument(v_50, 0);
      x_50 = ATgetArgument(v_50, 1);
      t = not_null(x_50);
    }
  else
    _fail(t);
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL;
  d_51 = t;
  c_51 :
  if(match_cons(d_51, sym_TCons_2))
    {
      e_51 = ATgetArgument(d_51, 0);
      f_51 = ATgetArgument(d_51, 1);
      t = not_null(e_51);
    }
  else
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm v_58 (ATerm))
{
  ATerm y_51 (ATerm t)
  {
    ATerm h_11 = t;
    if(PushChoice()==0)
      {
        ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL;
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
            ATerm s_2 (ATerm t)
            {
              ATerm p_51 = NULL;
              p_51 = t;
              j_51 :
              if(!(match_cons(p_51, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, y_51, s_2);
            return(t);
          }
          t = TCons_2(t, v_58, r_2);
          q_51 = t;
          l_51 :
          if(match_cons(q_51, sym_TCons_2))
            {
              r_51 = ATgetArgument(q_51, 0);
              s_51 = ATgetArgument(q_51, 1);
              m_51 :
              if(match_cons(s_51, sym_TCons_2))
                {
                  t_51 = ATgetArgument(s_51, 0);
                  u_51 = ATgetArgument(s_51, 1);
                  n_51 :
                  if(match_cons(u_51, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_51), not_null(t_51));
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
        t = h_11;
        {
          ATerm t_2 (ATerm t)
          {
            ATerm x_51 = NULL;
            x_51 = t;
            o_51 :
            if(!(match_cons(x_51, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = map_1(t, t_2);
          t = (ATerm) ATmakeAppl(sym_TNil_0);
        }
      }
    return(t);
  }
  t = y_51(t);
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL;
  m_52 = t;
  j_52 :
  if(match_cons(m_52, sym_TCons_2))
    {
      n_52 = ATgetArgument(m_52, 0);
      o_52 = ATgetArgument(m_52, 1);
      k_52 :
      if(match_cons(o_52, sym_TCons_2))
        {
          p_52 = ATgetArgument(o_52, 0);
          q_52 = ATgetArgument(o_52, 1);
          l_52 :
          if(match_cons(q_52, sym_TNil_0))
            {
              ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL;
              ATerm w_52 = NULL;
              ATerm x_52 = NULL;
              t = new_0(t);
              w_52 = t;
              if(t_52 != NULL && t_52 != w_52)
                _fail(w_52);
              else
                t_52 = w_52;
              {
                ATerm y_52 = NULL;
                t = new_0(t);
                x_52 = t;
                if(u_52 != NULL && u_52 != x_52)
                  _fail(x_52);
                else
                  u_52 = x_52;
                t = new_0(t);
                y_52 = t;
                if(v_52 != NULL && v_52 != y_52)
                  _fail(y_52);
                else
                  v_52 = y_52;
              }
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_52)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_52)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_52)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_52)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_52)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(t_52), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_52), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_52)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_52), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_52)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
            }
          else
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
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL;
  i_53 = t;
  e_53 :
  if(match_cons(i_53, sym_TCons_2))
    {
      j_53 = ATgetArgument(i_53, 0);
      k_53 = ATgetArgument(i_53, 1);
      f_53 :
      if(match_cons(k_53, sym_TCons_2))
        {
          l_53 = ATgetArgument(k_53, 0);
          m_53 = ATgetArgument(k_53, 1);
          g_53 :
          if(match_cons(l_53, sym_Nil_0))
            {
              h_53 :
              if(match_cons(m_53, sym_TNil_0))
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
ATerm zipr_1 (ATerm t, ATerm u_57 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, u_57);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm q_53 = NULL,t_53 = NULL,u_53 = NULL;
  q_53 = t;
  p_53 :
  if(match_cons(q_53, sym_Cons_2))
    {
      t_53 = ATgetArgument(q_53, 0);
      u_53 = ATgetArgument(q_53, 1);
      t = not_null(u_53);
    }
  else
    _fail(t);
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL;
  d_54 = t;
  z_53 :
  if(match_cons(d_54, sym_Cons_2))
    {
      e_54 = ATgetArgument(d_54, 0);
      f_54 = ATgetArgument(d_54, 1);
      c_54 :
      if(match_cons(f_54, sym_Nil_0))
        t = not_null(e_54);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm last_0 (ATerm t)
{
  ATerm i_11 = t;
  if(PushChoice()==0)
    {
      t = Last_0(t);
      PopChoice();
    }
  else
    {
      t = i_11;
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
  ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL;
  u_54 = t;
  r_54 :
  if(match_cons(u_54, sym_TCons_2))
    {
      v_54 = ATgetArgument(u_54, 0);
      w_54 = ATgetArgument(u_54, 1);
      s_54 :
      if(match_cons(w_54, sym_TCons_2))
        {
          x_54 = ATgetArgument(w_54, 0);
          y_54 = ATgetArgument(w_54, 1);
          t_54 :
          if(match_cons(y_54, sym_TNil_0))
            {
              ATerm j_11 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(v_54), not_null(x_54));
                  PopChoice();
                }
              else
                {
                  t = j_11;
                  t = SSL_subtr(not_null(v_54), not_null(x_54));
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
  ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL;
  i_55 = t;
  d_55 :
  if(match_cons(i_55, sym_TCons_2))
    {
      j_55 = ATgetArgument(i_55, 0);
      k_55 = ATgetArgument(i_55, 1);
      g_55 :
      if(match_cons(k_55, sym_TCons_2))
        {
          l_55 = ATgetArgument(k_55, 0);
          m_55 = ATgetArgument(k_55, 1);
          h_55 :
          if(match_cons(m_55, sym_TNil_0))
            {
              ATerm k_11;
              k_11 = t;
              {
                ATerm l_11 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(j_55), not_null(l_55));
                    PopChoice();
                  }
                else
                  {
                    t = l_11;
                    t = SSL_gtr(not_null(j_55), not_null(l_55));
                  }
              }
              t = k_11;
            }
          else
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
  ATerm d_56 = NULL;
  ATerm m_11 = t;
  if(PushChoice()==0)
    {
      ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL;
      h_56 = t;
      s_55 :
      if(match_cons(h_56, sym_TCons_2))
        {
          i_56 = ATgetArgument(h_56, 0);
          j_56 = ATgetArgument(h_56, 1);
          t_55 :
          if(match_cons(j_56, sym_TCons_2))
            {
              k_56 = ATgetArgument(j_56, 0);
              l_56 = ATgetArgument(j_56, 1);
              c_56 :
              if(match_cons(l_56, sym_TNil_0))
                {
                  if(d_56 != NULL && d_56 != i_56)
                    _fail(i_56);
                  else
                    d_56 = i_56;
                  if(d_56 != NULL && d_56 != k_56)
                    _fail(k_56);
                  else
                    d_56 = k_56;
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
      t = m_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm f_55 (ATerm))
{
  ATerm u_2 (ATerm t)
  {
    ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL;
    f_57 = t;
    p_56 :
    if(match_cons(f_57, sym_TCons_2))
      {
        g_57 = ATgetArgument(f_57, 0);
        h_57 = ATgetArgument(f_57, 1);
        q_56 :
        if(match_cons(h_57, sym_TCons_2))
          {
            i_57 = ATgetArgument(h_57, 0);
            j_57 = ATgetArgument(h_57, 1);
            r_56 :
            if(match_cons(j_57, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_57), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_57), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    ATerm s_57 = NULL,t_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL;
    s_57 = t;
    t_56 :
    if(match_cons(s_57, sym_TCons_2))
      {
        t_57 = ATgetArgument(s_57, 0);
        v_57 = ATgetArgument(s_57, 1);
        u_56 :
        if(match_int(t_57, 0))
          {
            v_56 :
            if(match_cons(v_57, sym_TCons_2))
              {
                w_57 = ATgetArgument(v_57, 0);
                x_57 = ATgetArgument(v_57, 1);
                w_56 :
                if(match_cons(x_57, sym_TCons_2))
                  {
                    y_57 = ATgetArgument(x_57, 0);
                    z_57 = ATgetArgument(x_57, 1);
                    x_56 :
                    if(match_cons(z_57, sym_TNil_0))
                      t = not_null(y_57);
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL;
    c_58 = t;
    b_57 :
    if(match_cons(c_58, sym_TCons_2))
      {
        d_58 = ATgetArgument(c_58, 0);
        e_58 = ATgetArgument(c_58, 1);
        c_57 :
        if(match_cons(e_58, sym_TCons_2))
          {
            f_58 = ATgetArgument(e_58, 0);
            g_58 = ATgetArgument(e_58, 1);
            d_57 :
            if(match_cons(g_58, sym_TCons_2))
              {
                h_58 = ATgetArgument(g_58, 0);
                i_58 = ATgetArgument(g_58, 1);
                e_57 :
                if(match_cons(i_58, sym_TNil_0))
                  {
                    ATerm m_58 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = geq_0(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm o_58 = NULL;
                      t = subt_0(t);
                      m_58 = t;
                      t = not_null(f_58);
                      t = f_55(t);
                      o_58 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_58), not_null(h_58)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  t = for_3(t, u_2, g_3, h_3);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL;
  d_59 = t;
  y_58 :
  if(match_cons(d_59, sym_TCons_2))
    {
      e_59 = ATgetArgument(d_59, 0);
      f_59 = ATgetArgument(d_59, 1);
      z_58 :
      if(match_cons(f_59, sym_TCons_2))
        {
          g_59 = ATgetArgument(f_59, 0);
          h_59 = ATgetArgument(f_59, 1);
          c_59 :
          if(match_cons(h_59, sym_TNil_0))
            {
              ATerm n_11 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(e_59), not_null(g_59));
                  PopChoice();
                }
              else
                {
                  t = n_11;
                  t = SSL_addr(not_null(e_59), not_null(g_59));
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
  ATerm u_59 = NULL;
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL;
  u_59 = t;
  {
    ATerm z_59 = NULL;
    ATerm a_60 = NULL;
    t = new_0(t);
    z_59 = t;
    if(w_59 != NULL && w_59 != z_59)
      _fail(z_59);
    else
      w_59 = z_59;
    {
      ATerm b_60 = NULL;
      t = new_0(t);
      a_60 = t;
      if(x_59 != NULL && x_59 != a_60)
        _fail(a_60);
      else
        x_59 = a_60;
      t = new_0(t);
      b_60 = t;
      if(y_59 != NULL && y_59 != b_60)
        _fail(b_60);
      else
        y_59 = b_60;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_59)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_59)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_59), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_59))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(w_59), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_59), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_59)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_59), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_59)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
  }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL;
  ATerm q_64 (ATerm t)
  {
    ATerm g_63 = NULL,h_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,m_64 = NULL;
    ATerm r_63 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_62), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL;
      t = add_0(t);
      r_63 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_63), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TNil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = copy_1(t, new_0);
      v_63 = t;
      j_61 :
      if(match_cons(v_63, sym_Cons_2))
        {
          w_63 = ATgetArgument(v_63, 0);
          x_63 = ATgetArgument(v_63, 1);
          {
            ATerm y_63 = NULL;
            if(h_63 != NULL && h_63 != w_63)
              _fail(w_63);
            else
              h_63 = w_63;
            if(k_63 != NULL && k_63 != x_63)
              _fail(x_63);
            else
              k_63 = x_63;
            t = not_null(k_63);
            {
              ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL;
              t = last_0(t);
              y_63 = t;
              if(g_63 != NULL && g_63 != y_63)
                _fail(y_63);
              else
                g_63 = y_63;
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_63), not_null(k_63)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_63), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = zipr_1(t, MkThreadApplication_0);
              t = tuple_unzip_1(t, _id);
              z_63 = t;
              b_61 :
              if(match_cons(z_63, sym_TCons_2))
                {
                  a_64 = ATgetArgument(z_63, 0);
                  b_64 = ATgetArgument(z_63, 1);
                  c_61 :
                  if(match_cons(b_64, sym_TCons_2))
                    {
                      c_64 = ATgetArgument(b_64, 0);
                      d_64 = ATgetArgument(b_64, 1);
                      d_61 :
                      if(match_cons(d_64, sym_TCons_2))
                        {
                          e_64 = ATgetArgument(d_64, 0);
                          f_64 = ATgetArgument(d_64, 1);
                          e_61 :
                          if(match_cons(f_64, sym_TCons_2))
                            {
                              g_64 = ATgetArgument(f_64, 0);
                              h_64 = ATgetArgument(f_64, 1);
                              f_61 :
                              if(match_cons(h_64, sym_TCons_2))
                                {
                                  i_64 = ATgetArgument(h_64, 0);
                                  j_64 = ATgetArgument(h_64, 1);
                                  g_61 :
                                  if(match_cons(j_64, sym_TCons_2))
                                    {
                                      k_64 = ATgetArgument(j_64, 0);
                                      l_64 = ATgetArgument(j_64, 1);
                                      i_61 :
                                      if(match_cons(l_64, sym_TNil_0))
                                        {
                                          if(l_63 != NULL && l_63 != a_64)
                                            _fail(a_64);
                                          else
                                            l_63 = a_64;
                                          if(m_63 != NULL && m_63 != c_64)
                                            _fail(c_64);
                                          else
                                            m_63 = c_64;
                                          if(n_63 != NULL && n_63 != e_64)
                                            _fail(e_64);
                                          else
                                            n_63 = e_64;
                                          if(o_63 != NULL && o_63 != g_64)
                                            _fail(g_64);
                                          else
                                            o_63 = g_64;
                                          if(p_63 != NULL && p_63 != i_64)
                                            _fail(i_64);
                                          else
                                            p_63 = i_64;
                                          if(q_63 != NULL && q_63 != k_64)
                                            _fail(k_64);
                                          else
                                            q_63 = k_64;
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
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
    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_63), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_63), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_63), (ATerm) ATmakeAppl(sym_Nil_0))));
    t = concat_0(t);
    m_64 = t;
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(w_61), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), not_null(m_63), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_63), not_null(m_64)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(w_61), not_null(o_63)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_63)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(w_61), not_null(q_63)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_63)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(l_63))))));
    return(t);
  }
  v_61 = t;
  l_61 :
  if(match_cons(v_61, sym_TCons_2))
    {
      w_61 = ATgetArgument(v_61, 0);
      x_61 = ATgetArgument(v_61, 1);
      m_61 :
      if(match_cons(x_61, sym_TCons_2))
        {
          y_61 = ATgetArgument(x_61, 0);
          z_61 = ATgetArgument(x_61, 1);
          n_61 :
          if(match_string(y_61, "D"))
            {
              o_61 :
              if(match_cons(z_61, sym_TCons_2))
                {
                  a_62 = ATgetArgument(z_61, 0);
                  b_62 = ATgetArgument(z_61, 1);
                  p_61 :
                  if(match_cons(b_62, sym_TNil_0))
                    {
                      ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,z_62 = NULL;
                      ATerm l_62 = NULL;
                      ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL;
                      t = new_0(t);
                      l_62 = t;
                      if(e_62 != NULL && e_62 != l_62)
                        _fail(l_62);
                      else
                        e_62 = l_62;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_62), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_62)), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = copy_1(t, MkDistApplication_0);
                      t = tuple_unzip_1(t, _id);
                      m_62 = t;
                      m_60 :
                      if(match_cons(m_62, sym_TCons_2))
                        {
                          n_62 = ATgetArgument(m_62, 0);
                          o_62 = ATgetArgument(m_62, 1);
                          n_60 :
                          if(match_cons(o_62, sym_TCons_2))
                            {
                              p_62 = ATgetArgument(o_62, 0);
                              q_62 = ATgetArgument(o_62, 1);
                              o_60 :
                              if(match_cons(q_62, sym_TCons_2))
                                {
                                  r_62 = ATgetArgument(q_62, 0);
                                  s_62 = ATgetArgument(q_62, 1);
                                  r_60 :
                                  if(match_cons(s_62, sym_TCons_2))
                                    {
                                      t_62 = ATgetArgument(s_62, 0);
                                      u_62 = ATgetArgument(s_62, 1);
                                      s_60 :
                                      if(match_cons(u_62, sym_TCons_2))
                                        {
                                          v_62 = ATgetArgument(u_62, 0);
                                          w_62 = ATgetArgument(u_62, 1);
                                          t_60 :
                                          if(match_cons(w_62, sym_TCons_2))
                                            {
                                              x_62 = ATgetArgument(w_62, 0);
                                              y_62 = ATgetArgument(w_62, 1);
                                              u_60 :
                                              if(match_cons(y_62, sym_TNil_0))
                                                {
                                                  if(f_62 != NULL && f_62 != n_62)
                                                    _fail(n_62);
                                                  else
                                                    f_62 = n_62;
                                                  if(g_62 != NULL && g_62 != p_62)
                                                    _fail(p_62);
                                                  else
                                                    g_62 = p_62;
                                                  if(h_62 != NULL && h_62 != r_62)
                                                    _fail(r_62);
                                                  else
                                                    h_62 = r_62;
                                                  if(i_62 != NULL && i_62 != t_62)
                                                    _fail(t_62);
                                                  else
                                                    i_62 = t_62;
                                                  if(j_62 != NULL && j_62 != v_62)
                                                    _fail(v_62);
                                                  else
                                                    j_62 = v_62;
                                                  if(k_62 != NULL && k_62 != x_62)
                                                    _fail(x_62);
                                                  else
                                                    k_62 = x_62;
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_62), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_62), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = conc_0(t);
                      z_62 = t;
                      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(w_61), (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue))), not_null(g_62), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_62), not_null(z_62)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(w_61), not_null(i_62)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_62)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(w_61), not_null(k_62)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(f_62))))));
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            {
              if(match_string(y_61, "T"))
                {
                  q_61 :
                  if(match_cons(z_61, sym_TCons_2))
                    {
                      a_62 = ATgetArgument(z_61, 0);
                      b_62 = ATgetArgument(z_61, 1);
                      r_61 :
                      if(match_cons(b_62, sym_TNil_0))
                        {
                          u_61 :
                          if(match_int(a_62, 0))
                            {
                              ATerm o_11 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm c_63 = NULL;
                                  ATerm d_63 = NULL;
                                  t = new_0(t);
                                  d_63 = t;
                                  if(c_63 != NULL && c_63 != d_63)
                                    _fail(d_63);
                                  else
                                    c_63 = d_63;
                                  t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(w_61), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_63), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(w_61), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_63)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(w_61), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_63)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Id_0)))));
                                  PopChoice();
                                }
                              else
                                {
                                  t = o_11;
                                  t = q_64(t);
                                }
                            }
                          else
                            t = q_64(t);
                        }
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
  ATerm o_65 = NULL,p_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL;
  o_65 = t;
  h_65 :
  if(match_cons(o_65, sym_TCons_2))
    {
      p_65 = ATgetArgument(o_65, 0);
      z_65 = ATgetArgument(o_65, 1);
      i_65 :
      if(match_cons(p_65, sym_TCons_2))
        {
          t_65 = ATgetArgument(p_65, 0);
          w_65 = ATgetArgument(p_65, 1);
          j_65 :
          if(match_cons(t_65, sym_Mod_2))
            {
              u_65 = ATgetArgument(t_65, 0);
              v_65 = ATgetArgument(t_65, 1);
              k_65 :
              if(match_cons(w_65, sym_TCons_2))
                {
                  x_65 = ATgetArgument(w_65, 0);
                  y_65 = ATgetArgument(w_65, 1);
                  l_65 :
                  if(match_cons(y_65, sym_TNil_0))
                    {
                      m_65 :
                      if(match_cons(z_65, sym_TCons_2))
                        {
                          a_66 = ATgetArgument(z_65, 0);
                          b_66 = ATgetArgument(z_65, 1);
                          n_65 :
                          if(match_cons(b_66, sym_TNil_0))
                            {
                              ATerm g_66 = NULL;
                              ATerm h_66 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_65), (ATerm) ATmakeAppl(sym_TNil_0))));
                              t = DefineCongruence_0(t);
                              t = desugar_0(t);
                              h_66 = t;
                              if(g_66 != NULL && g_66 != h_66)
                                _fail(h_66);
                              else
                                g_66 = h_66;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_66), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_66), (ATerm) ATmakeAppl(sym_TNil_0)));
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm p_11 = t;
  if(PushChoice()==0)
    {
      t = CongruenceDef_0(t);
      PopChoice();
    }
  else
    {
      t = p_11;
      {
        ATerm q_11 = t;
        if(PushChoice()==0)
          {
            t = OverloadedDef_0(t);
            {
              ATerm i_3 (ATerm t)
              {
                ATerm r_11 = t;
                if(PushChoice()==0)
                  {
                    t = JoinDefs1_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = r_11;
                    t = JoinDefs2_0(t);
                  }
                return(t);
              }
              ATerm j_3 (ATerm t)
              {
                ATerm k_3 (ATerm t)
                {
                  ATerm m_66 = NULL;
                  m_66 = t;
                  k_66 :
                  if(!(match_cons(m_66, sym_TNil_0)))
                    _fail(t);
                  return(t);
                }
                t = TCons_2(t, _id, k_3);
                return(t);
              }
              t = TCons_2(t, i_3, j_3);
            }
            PopChoice();
          }
        else
          {
            t = q_11;
            t = NonOverloadedDef_0(t);
            {
              ATerm u_3 (ATerm t)
              {
                ATerm s_11 = t;
                if(PushChoice()==0)
                  {
                    t = JoinDefs1_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = s_11;
                    t = JoinDefs2_0(t);
                  }
                return(t);
              }
              ATerm v_3 (ATerm t)
              {
                ATerm w_3 (ATerm t)
                {
                  ATerm n_66 = NULL;
                  n_66 = t;
                  l_66 :
                  if(!(match_cons(n_66, sym_TNil_0)))
                    _fail(t);
                  return(t);
                }
                t = TCons_2(t, _id, w_3);
                return(t);
              }
              t = TCons_2(t, u_3, v_3);
            }
          }
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL;
  w_66 = t;
  p_66 :
  if(match_cons(w_66, sym_TCons_2))
    {
      x_66 = ATgetArgument(w_66, 0);
      a_67 = ATgetArgument(w_66, 1);
      q_66 :
      if(match_cons(x_66, sym_Cons_2))
        {
          y_66 = ATgetArgument(x_66, 0);
          z_66 = ATgetArgument(x_66, 1);
          r_66 :
          if(match_cons(a_67, sym_TCons_2))
            {
              b_67 = ATgetArgument(a_67, 0);
              c_67 = ATgetArgument(a_67, 1);
              s_66 :
              if(match_cons(c_67, sym_TCons_2))
                {
                  d_67 = ATgetArgument(c_67, 0);
                  e_67 = ATgetArgument(c_67, 1);
                  t_66 :
                  if(match_cons(e_67, sym_TCons_2))
                    {
                      f_67 = ATgetArgument(e_67, 0);
                      g_67 = ATgetArgument(e_67, 1);
                      u_66 :
                      if(match_cons(g_67, sym_TCons_2))
                        {
                          h_67 = ATgetArgument(g_67, 0);
                          i_67 = ATgetArgument(g_67, 1);
                          v_66 :
                          if(match_cons(i_67, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_66), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_67), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_67), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_67), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_66), not_null(h_67)), (ATerm) ATmakeAppl(sym_TNil_0))))));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm p_59 (ATerm))
{
  ATerm t_67 (ATerm t)
  {
    ATerm t_11 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, t_67);
        PopChoice();
      }
    else
      {
        t = t_11;
        {
          ATerm s_67 = NULL;
          s_67 = t;
          r_67 :
          if(match_cons(s_67, sym_Nil_0))
            t = p_59(t);
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = t_67(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL;
  z_67 = t;
  w_67 :
  if(match_cons(z_67, sym_TCons_2))
    {
      a_68 = ATgetArgument(z_67, 0);
      b_68 = ATgetArgument(z_67, 1);
      x_67 :
      if(match_cons(b_68, sym_TCons_2))
        {
          c_68 = ATgetArgument(b_68, 0);
          d_68 = ATgetArgument(b_68, 1);
          y_67 :
          if(match_cons(d_68, sym_TNil_0))
            {
              t = not_null(a_68);
              {
                ATerm f_4 (ATerm t)
                {
                  t = not_null(c_68);
                  return(t);
                }
                t = at_end_1(t, f_4);
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
ATerm HdMember_1 (ATerm t, ATerm u_55 (ATerm))
{
  ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL;
  k_68 = t;
  j_68 :
  if(match_cons(k_68, sym_Cons_2))
    {
      l_68 = ATgetArgument(k_68, 0);
      m_68 = ATgetArgument(k_68, 1);
      t = u_55(t);
      {
        ATerm g_4 (ATerm t)
        {
          ATerm p_68 = NULL;
          p_68 = t;
          if(l_68 != NULL && l_68 != p_68)
            _fail(p_68);
          else
            l_68 = p_68;
          return(t);
        }
        t = fetch_1(t, g_4);
      }
      t = not_null(m_68);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL;
  x_68 = t;
  t_68 :
  if(match_cons(x_68, sym_TCons_2))
    {
      y_68 = ATgetArgument(x_68, 0);
      z_68 = ATgetArgument(x_68, 1);
      u_68 :
      if(match_cons(z_68, sym_TCons_2))
        {
          a_69 = ATgetArgument(z_68, 0);
          d_69 = ATgetArgument(z_68, 1);
          v_68 :
          if(match_cons(a_69, sym_Cons_2))
            {
              b_69 = ATgetArgument(a_69, 0);
              c_69 = ATgetArgument(a_69, 1);
              w_68 :
              if(match_cons(d_69, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_69), not_null(y_68)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_69), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL;
  m_69 = t;
  j_69 :
  if(match_cons(m_69, sym_TCons_2))
    {
      n_69 = ATgetArgument(m_69, 0);
      o_69 = ATgetArgument(m_69, 1);
      k_69 :
      if(match_cons(o_69, sym_TCons_2))
        {
          p_69 = ATgetArgument(o_69, 0);
          q_69 = ATgetArgument(o_69, 1);
          l_69 :
          if(match_cons(q_69, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_69), not_null(p_69));
          else
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
  ATerm a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL;
  a_70 = t;
  v_69 :
  if(match_cons(a_70, sym_TCons_2))
    {
      b_70 = ATgetArgument(a_70, 0);
      e_70 = ATgetArgument(a_70, 1);
      w_69 :
      if(match_cons(b_70, sym_Cons_2))
        {
          c_70 = ATgetArgument(b_70, 0);
          d_70 = ATgetArgument(b_70, 1);
          x_69 :
          if(match_cons(e_70, sym_TCons_2))
            {
              f_70 = ATgetArgument(e_70, 0);
              i_70 = ATgetArgument(e_70, 1);
              y_69 :
              if(match_cons(f_70, sym_Cons_2))
                {
                  g_70 = ATgetArgument(f_70, 0);
                  h_70 = ATgetArgument(f_70, 1);
                  z_69 :
                  if(match_cons(i_70, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(c_70), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_70), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(d_70), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_70), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL;
  u_70 = t;
  p_70 :
  if(match_cons(u_70, sym_TCons_2))
    {
      v_70 = ATgetArgument(u_70, 0);
      w_70 = ATgetArgument(u_70, 1);
      q_70 :
      if(match_cons(v_70, sym_Nil_0))
        {
          r_70 :
          if(match_cons(w_70, sym_TCons_2))
            {
              x_70 = ATgetArgument(w_70, 0);
              y_70 = ATgetArgument(w_70, 1);
              s_70 :
              if(match_cons(x_70, sym_Nil_0))
                {
                  t_70 :
                  if(match_cons(y_70, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm m_57 (ATerm), ATerm n_57 (ATerm), ATerm o_57 (ATerm), ATerm p_57 (ATerm))
{
  ATerm c_71 (ATerm t)
  {
    ATerm u_11 = t;
    if(PushChoice()==0)
      {
        t = m_57(t);
        PopChoice();
      }
    else
      {
        t = u_11;
        t = n_57(t);
        {
          ATerm k_4 (ATerm t)
          {
            ATerm l_4 (ATerm t)
            {
              ATerm b_71 = NULL;
              b_71 = t;
              a_71 :
              if(!(match_cons(b_71, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, c_71, l_4);
            return(t);
          }
          t = TCons_2(t, p_57, k_4);
          t = o_57(t);
        }
      }
    return(t);
  }
  t = c_71(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm r_57 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, r_57);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL;
  t_71 = t;
  p_71 :
  if(match_cons(t_71, sym_Cons_2))
    {
      u_71 = ATgetArgument(t_71, 0);
      z_71 = ATgetArgument(t_71, 1);
      q_71 :
      if(match_cons(u_71, sym_TCons_2))
        {
          v_71 = ATgetArgument(u_71, 0);
          w_71 = ATgetArgument(u_71, 1);
          r_71 :
          if(match_cons(w_71, sym_TCons_2))
            {
              x_71 = ATgetArgument(w_71, 0);
              y_71 = ATgetArgument(w_71, 1);
              s_71 :
              if(match_cons(y_71, sym_TNil_0))
                {
                  ATerm d_72 = NULL,e_72 = NULL,m_72 = NULL,u_72 = NULL;
                  ATerm z_11;
                  z_11 = t;
                  {
                    ATerm f_72 = NULL;
                    ATerm h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL;
                    t = not_null(x_71);
                    f_72 = t;
                    t = SSL_explode_term(not_null(f_72));
                    h_72 = t;
                    g_71 :
                    if(match_cons(h_72, sym_TCons_2))
                      {
                        i_72 = ATgetArgument(h_72, 0);
                        j_72 = ATgetArgument(h_72, 1);
                        h_71 :
                        if(match_cons(j_72, sym_TCons_2))
                          {
                            k_72 = ATgetArgument(j_72, 0);
                            l_72 = ATgetArgument(j_72, 1);
                            i_71 :
                            if(match_cons(l_72, sym_TNil_0))
                              {
                                if(d_72 != NULL && d_72 != i_72)
                                  _fail(i_72);
                                else
                                  d_72 = i_72;
                                if(e_72 != NULL && e_72 != k_72)
                                  _fail(k_72);
                                else
                                  e_72 = k_72;
                              }
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
                    ATerm n_72 = NULL;
                    ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL;
                    t = not_null(v_71);
                    n_72 = t;
                    t = SSL_explode_term(not_null(n_72));
                    p_72 = t;
                    l_71 :
                    if(match_cons(p_72, sym_TCons_2))
                      {
                        q_72 = ATgetArgument(p_72, 0);
                        r_72 = ATgetArgument(p_72, 1);
                        m_71 :
                        if(match_cons(r_72, sym_TCons_2))
                          {
                            s_72 = ATgetArgument(r_72, 0);
                            t_72 = ATgetArgument(r_72, 1);
                            n_71 :
                            if(match_cons(t_72, sym_TNil_0))
                              {
                                if(d_72 != NULL && d_72 != q_72)
                                  _fail(q_72);
                                else
                                  d_72 = q_72;
                                if(m_72 != NULL && m_72 != s_72)
                                  _fail(s_72);
                                else
                                  m_72 = s_72;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_72), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    u_72 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_71), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL;
  h_73 = t;
  d_73 :
  if(match_cons(h_73, sym_Cons_2))
    {
      i_73 = ATgetArgument(h_73, 0);
      n_73 = ATgetArgument(h_73, 1);
      e_73 :
      if(match_cons(i_73, sym_TCons_2))
        {
          j_73 = ATgetArgument(i_73, 0);
          k_73 = ATgetArgument(i_73, 1);
          f_73 :
          if(match_cons(k_73, sym_TCons_2))
            {
              l_73 = ATgetArgument(k_73, 0);
              m_73 = ATgetArgument(k_73, 1);
              g_73 :
              if(match_cons(m_73, sym_TNil_0))
                {
                  ATerm p_73 = NULL;
                  if(j_73 != NULL && j_73 != l_73)
                    _fail(l_73);
                  else
                    j_73 = l_73;
                  if(p_73 != NULL && p_73 != n_73)
                    _fail(n_73);
                  else
                    p_73 = n_73;
                  t = not_null(p_73);
                }
              else
                _fail(t);
            }
          else
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
  ATerm a_12 = t;
  if(PushChoice()==0)
    {
      ATerm m_4 (ATerm t)
      {
        ATerm a_74 = NULL;
        a_74 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_74), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm n_4 (ATerm t)
      {
        ATerm a_5 (ATerm t)
        {
          ATerm b_5 (ATerm t)
          {
            ATerm c_74 = NULL;
            c_74 = t;
            s_73 :
            if(!(match_cons(c_74, sym_Nil_0)))
              _fail(t);
            return(t);
          }
          ATerm i_5 (ATerm t)
          {
            ATerm d_74 = NULL;
            d_74 = t;
            t_73 :
            if(!(match_cons(d_74, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, b_5, i_5);
          return(t);
        }
        t = TCons_2(t, _id, a_5);
        return(t);
      }
      ATerm r_4 (ATerm t)
      {
        ATerm b_12 = t;
        if(PushChoice()==0)
          {
            ATerm j_5 (ATerm t)
            {
              ATerm n_5 (ATerm t)
              {
                ATerm c_12 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = c_12;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              ATerm o_5 (ATerm t)
              {
                ATerm e_74 = NULL;
                e_74 = t;
                u_73 :
                if(!(match_cons(e_74, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, n_5, o_5);
              return(t);
            }
            t = TCons_2(t, _id, j_5);
            PopChoice();
          }
        else
          {
            t = b_12;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, m_4, n_4, r_4);
      PopChoice();
    }
  else
    {
      t = a_12;
      {
        ATerm f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL;
        f_74 = t;
        x_73 :
        if(match_cons(f_74, sym_TCons_2))
          {
            g_74 = ATgetArgument(f_74, 0);
            h_74 = ATgetArgument(f_74, 1);
            y_73 :
            if(match_cons(h_74, sym_TCons_2))
              {
                i_74 = ATgetArgument(h_74, 0);
                j_74 = ATgetArgument(h_74, 1);
                z_73 :
                if(match_cons(j_74, sym_TNil_0))
                  {
                    t = not_null(g_74);
                    {
                      ATerm p_74 (ATerm t)
                      {
                        ATerm d_12 = t;
                        if(PushChoice()==0)
                          {
                            ATerm m_74 = NULL;
                            m_74 = t;
                            w_73 :
                            if(!(match_cons(m_74, sym_Nil_0)))
                              _fail(t);
                            PopChoice();
                          }
                        else
                          {
                            t = d_12;
                            {
                              ATerm e_12 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm p_5 (ATerm t)
                                  {
                                    t = not_null(i_74);
                                    return(t);
                                  }
                                  t = HdMember_1(t, p_5);
                                  t = p_74(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = e_12;
                                  t = Cons_2(t, _id, p_74);
                                }
                            }
                          }
                        return(t);
                      }
                      t = p_74(t);
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
ATerm GnNextChangeGraph_3 (ATerm t, ATerm a_45 (ATerm), ATerm b_45 (ATerm), ATerm c_45 (ATerm))
{
  ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL;
  h_75 = t;
  a_75 :
  if(match_cons(h_75, sym_TCons_2))
    {
      i_75 = ATgetArgument(h_75, 0);
      l_75 = ATgetArgument(h_75, 1);
      b_75 :
      if(match_cons(i_75, sym_Cons_2))
        {
          j_75 = ATgetArgument(i_75, 0);
          k_75 = ATgetArgument(i_75, 1);
          c_75 :
          if(match_cons(l_75, sym_TCons_2))
            {
              m_75 = ATgetArgument(l_75, 0);
              n_75 = ATgetArgument(l_75, 1);
              d_75 :
              if(match_cons(n_75, sym_TCons_2))
                {
                  o_75 = ATgetArgument(n_75, 0);
                  p_75 = ATgetArgument(n_75, 1);
                  e_75 :
                  if(match_cons(p_75, sym_TCons_2))
                    {
                      q_75 = ATgetArgument(p_75, 0);
                      r_75 = ATgetArgument(p_75, 1);
                      f_75 :
                      if(match_cons(r_75, sym_TCons_2))
                        {
                          s_75 = ATgetArgument(r_75, 0);
                          t_75 = ATgetArgument(r_75, 1);
                          g_75 :
                          if(match_cons(t_75, sym_TNil_0))
                            {
                              ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,l_76 = NULL;
                              ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_75), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = a_45(t);
                              e_76 = t;
                              u_74 :
                              if(match_cons(e_76, sym_TCons_2))
                                {
                                  f_76 = ATgetArgument(e_76, 0);
                                  g_76 = ATgetArgument(e_76, 1);
                                  v_74 :
                                  if(match_cons(g_76, sym_TCons_2))
                                    {
                                      h_76 = ATgetArgument(g_76, 0);
                                      i_76 = ATgetArgument(g_76, 1);
                                      w_74 :
                                      if(match_cons(i_76, sym_TNil_0))
                                        {
                                          ATerm j_76 = NULL;
                                          if(b_76 != NULL && b_76 != f_76)
                                            _fail(f_76);
                                          else
                                            b_76 = f_76;
                                          if(a_76 != NULL && a_76 != h_76)
                                            _fail(h_76);
                                          else
                                            a_76 = h_76;
                                          t = not_null(b_76);
                                          {
                                            ATerm k_76 = NULL;
                                            t = b_45(t);
                                            j_76 = t;
                                            if(c_76 != NULL && c_76 != j_76)
                                              _fail(j_76);
                                            else
                                              c_76 = j_76;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_75), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = diff_0(t);
                                            k_76 = t;
                                            if(d_76 != NULL && d_76 != k_76)
                                              _fail(k_76);
                                            else
                                              d_76 = k_76;
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
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_75), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm n_76 = NULL;
                                t = conc_0(t);
                                l_76 = t;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_75), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm p_76 = NULL;
                                  t = conc_0(t);
                                  n_76 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_75), (ATerm) ATmakeAppl(sym_TNil_0))));
                                  t = c_45(t);
                                  p_76 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_75), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
  ATerm g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL;
  g_77 = t;
  z_76 :
  if(match_cons(g_77, sym_TCons_2))
    {
      h_77 = ATgetArgument(g_77, 0);
      i_77 = ATgetArgument(g_77, 1);
      a_77 :
      if(match_cons(h_77, sym_Nil_0))
        {
          b_77 :
          if(match_cons(i_77, sym_TCons_2))
            {
              j_77 = ATgetArgument(i_77, 0);
              k_77 = ATgetArgument(i_77, 1);
              c_77 :
              if(match_cons(k_77, sym_TCons_2))
                {
                  l_77 = ATgetArgument(k_77, 0);
                  m_77 = ATgetArgument(k_77, 1);
                  d_77 :
                  if(match_cons(m_77, sym_TCons_2))
                    {
                      n_77 = ATgetArgument(m_77, 0);
                      o_77 = ATgetArgument(m_77, 1);
                      e_77 :
                      if(match_cons(o_77, sym_TCons_2))
                        {
                          p_77 = ATgetArgument(o_77, 0);
                          q_77 = ATgetArgument(o_77, 1);
                          f_77 :
                          if(match_cons(q_77, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_77), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm GnInit_0 (ATerm t)
{
  ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL;
  b_78 = t;
  x_77 :
  if(match_cons(b_78, sym_TCons_2))
    {
      c_78 = ATgetArgument(b_78, 0);
      d_78 = ATgetArgument(b_78, 1);
      y_77 :
      if(match_cons(d_78, sym_TCons_2))
        {
          e_78 = ATgetArgument(d_78, 0);
          f_78 = ATgetArgument(d_78, 1);
          z_77 :
          if(match_cons(f_78, sym_TCons_2))
            {
              g_78 = ATgetArgument(f_78, 0);
              h_78 = ATgetArgument(f_78, 1);
              a_78 :
              if(match_cons(h_78, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_78), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_78), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_78), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))))));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm b_50 (ATerm), ATerm c_50 (ATerm))
{
  ATerm m_78 (ATerm t)
  {
    ATerm f_12 = t;
    if(PushChoice()==0)
      {
        t = b_50(t);
        PopChoice();
      }
    else
      {
        t = f_12;
        t = c_50(t);
        t = m_78(t);
      }
    return(t);
  }
  t = m_78(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm e_50 (ATerm), ATerm f_50 (ATerm), ATerm g_50 (ATerm))
{
  t = e_50(t);
  t = while_not_2(t, f_50, g_50);
  return(t);
}
ATerm graph_nodes_undef_chgr_3 (ATerm t, ATerm j_45 (ATerm), ATerm k_45 (ATerm), ATerm l_45 (ATerm))
{
  ATerm q_5 (ATerm t)
  {
    ATerm g_12 = t;
    if(PushChoice()==0)
      {
        t = GnNextChangeGraph_3(t, j_45, k_45, l_45);
        PopChoice();
      }
    else
      {
        t = g_12;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInit_0, GnExit_0, q_5);
  return(t);
}
ATerm needed_defs_0 (ATerm t)
{
  ATerm t_78 = NULL;
  t_78 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("main", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_78), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  {
    ATerm r_5 (ATerm t)
    {
      ATerm v_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL;
      v_78 = t;
      p_78 :
      if(match_cons(v_78, sym_TCons_2))
        {
          w_78 = ATgetArgument(v_78, 0);
          x_78 = ATgetArgument(v_78, 1);
          q_78 :
          if(match_cons(x_78, sym_TCons_2))
            {
              y_78 = ATgetArgument(x_78, 0);
              z_78 = ATgetArgument(x_78, 1);
              r_78 :
              if(match_cons(z_78, sym_TCons_2))
                {
                  a_79 = ATgetArgument(z_78, 0);
                  b_79 = ATgetArgument(z_78, 1);
                  s_78 :
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
    t = graph_nodes_undef_chgr_3(t, get_definition_0, svars_arity_0, r_5);
    t = FilterNonMissingDefs_0(t);
    {
      ATerm h_12 = t;
      if(PushChoice()==0)
        {
          t = NoMissingDefs_0(t);
          PopChoice();
        }
      else
        {
          t = h_12;
          t = MissingDefs_0(t);
          t = (ATerm) ATmakeInt(1);
          t = exit_0(t);
        }
    }
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm m_42 (ATerm))
{
  ATerm j_79 = NULL,k_79 = NULL;
  j_79 = t;
  i_79 :
  if(match_cons(j_79, sym_Strategies_1))
    {
      k_79 = ATgetArgument(j_79, 0);
      {
        ATerm m_79 = NULL;
        t = not_null(k_79);
        t = m_42(t);
        m_79 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(m_79));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_44 (ATerm), ATerm s_44 (ATerm))
{
  ATerm v_79 = NULL,w_79 = NULL,x_79 = NULL;
  v_79 = t;
  u_79 :
  if(match_cons(v_79, sym_Cons_2))
    {
      w_79 = ATgetArgument(v_79, 0);
      x_79 = ATgetArgument(v_79, 1);
      {
        ATerm a_80 = NULL;
        t = not_null(w_79);
        {
          ATerm c_80 = NULL;
          t = r_44(t);
          a_80 = t;
          t = not_null(x_79);
          t = s_44(t);
          c_80 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_80), not_null(c_80));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm o_42 (ATerm))
{
  ATerm l_80 = NULL,m_80 = NULL;
  l_80 = t;
  j_80 :
  if(match_cons(l_80, sym_Specification_1))
    {
      m_80 = ATgetArgument(l_80, 0);
      {
        ATerm o_80 = NULL;
        t = not_null(m_80);
        t = o_42(t);
        o_80 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(o_80));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm t_80 = NULL;
  t_80 = t;
  s_80 :
  if(!(match_cons(t_80, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm n_44 (ATerm), ATerm o_44 (ATerm))
{
  ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL;
  y_80 = t;
  x_80 :
  if(match_cons(y_80, sym_TCons_2))
    {
      z_80 = ATgetArgument(y_80, 0);
      a_81 = ATgetArgument(y_80, 1);
      {
        ATerm e_81 = NULL;
        t = not_null(z_80);
        {
          ATerm g_81 = NULL;
          t = n_44(t);
          e_81 = t;
          t = not_null(a_81);
          t = o_44(t);
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
  ATerm i_12;
  i_12 = t;
  {
    ATerm s_5 (ATerm t)
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
    t = fetch_1(t, s_5);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_81), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = i_12;
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
  ATerm s_81 = NULL;
  s_81 = t;
  t = SSL_exit(not_null(s_81));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL,d_82 = NULL,e_82 = NULL;
  a_82 = t;
  x_81 :
  if(match_cons(a_82, sym_TCons_2))
    {
      b_82 = ATgetArgument(a_82, 0);
      c_82 = ATgetArgument(a_82, 1);
      y_81 :
      if(match_cons(c_82, sym_TCons_2))
        {
          d_82 = ATgetArgument(c_82, 0);
          e_82 = ATgetArgument(c_82, 1);
          z_81 :
          if(match_cons(e_82, sym_TNil_0))
            {
              ATerm o_12;
              o_12 = t;
              t = SSL_printnl(not_null(b_82), not_null(d_82));
              t = o_12;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm h_61 (ATerm))
{
  ATerm p_12 = t;
  if(PushChoice()==0)
    {
      t = h_61(t);
      PopChoice();
    }
  else
    t = p_12;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm q_82 = NULL,r_82 = NULL;
  ATerm r_12 = t;
  if(PushChoice()==0)
    {
      ATerm t_5 (ATerm t)
      {
        ATerm t_12 = t;
        if(PushChoice()==0)
          {
            ATerm z_5 (ATerm t)
            {
              ATerm s_82 = NULL;
              s_82 = t;
              i_82 :
              if(!(match_cons(s_82, sym_Silent_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, z_5);
            PopChoice();
            _fail(t);
          }
        else
          t = t_12;
        return(t);
      }
      ATerm u_5 (ATerm t)
      {
        ATerm a_6 (ATerm t)
        {
          ATerm t_82 = NULL;
          t_82 = t;
          j_82 :
          if(!(match_cons(t_82, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, a_6);
        return(t);
      }
      t = TCons_2(t, t_5, u_5);
      {
        ATerm c_6 (ATerm t)
        {
          ATerm f_6 (ATerm t)
          {
            ATerm u_82 = NULL,v_82 = NULL;
            u_82 = t;
            l_82 :
            if(match_cons(u_82, sym_Runtime_1))
              {
                v_82 = ATgetArgument(u_82, 0);
                if(r_82 != NULL && r_82 != v_82)
                  _fail(v_82);
                else
                  r_82 = v_82;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, f_6);
          return(t);
        }
        ATerm e_6 (ATerm t)
        {
          ATerm g_6 (ATerm t)
          {
            ATerm w_82 = NULL;
            w_82 = t;
            m_82 :
            if(!(match_cons(w_82, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, g_6);
          return(t);
        }
        t = TCons_2(t, c_6, e_6);
        {
          ATerm h_6 (ATerm t)
          {
            ATerm j_6 (ATerm t)
            {
              ATerm x_82 = NULL,y_82 = NULL;
              x_82 = t;
              o_82 :
              if(match_cons(x_82, sym_Program_1))
                {
                  y_82 = ATgetArgument(x_82, 0);
                  if(q_82 != NULL && q_82 != y_82)
                    _fail(y_82);
                  else
                    q_82 = y_82;
                }
              else
                _fail(t);
              return(t);
            }
            t = fetch_1(t, j_6);
            return(t);
          }
          ATerm i_6 (ATerm t)
          {
            ATerm k_6 (ATerm t)
            {
              ATerm z_82 = NULL;
              z_82 = t;
              p_82 :
              if(!(match_cons(z_82, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, _id, k_6);
            return(t);
          }
          t = TCons_2(t, h_6, i_6);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_82), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_82), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      PopChoice();
    }
  else
    t = r_12;
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm g_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL,k_83 = NULL;
  g_83 = t;
  d_83 :
  if(match_cons(g_83, sym_TCons_2))
    {
      h_83 = ATgetArgument(g_83, 0);
      i_83 = ATgetArgument(g_83, 1);
      e_83 :
      if(match_cons(i_83, sym_TCons_2))
        {
          j_83 = ATgetArgument(i_83, 0);
          k_83 = ATgetArgument(i_83, 1);
          f_83 :
          if(match_cons(k_83, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(h_83), not_null(j_83));
          else
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
  ATerm u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL,y_83 = NULL;
  u_83 = t;
  r_83 :
  if(match_cons(u_83, sym_TCons_2))
    {
      v_83 = ATgetArgument(u_83, 0);
      w_83 = ATgetArgument(u_83, 1);
      s_83 :
      if(match_cons(w_83, sym_TCons_2))
        {
          x_83 = ATgetArgument(w_83, 0);
          y_83 = ATgetArgument(w_83, 1);
          t_83 :
          if(match_cons(y_83, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(v_83), not_null(x_83));
          else
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
  ATerm k_84 = NULL;
  ATerm u_12;
  u_12 = t;
  {
    ATerm p_6 (ATerm t)
    {
      ATerm v_12 = t;
      if(PushChoice()==0)
        {
          ATerm s_6 (ATerm t)
          {
            ATerm l_84 = NULL,m_84 = NULL;
            l_84 = t;
            d_84 :
            if(match_cons(l_84, sym_Output_1))
              {
                m_84 = ATgetArgument(l_84, 0);
                if(k_84 != NULL && k_84 != m_84)
                  _fail(m_84);
                else
                  k_84 = m_84;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, s_6);
          PopChoice();
        }
      else
        {
          t = v_12;
          {
            ATerm n_84 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            n_84 = t;
            if(k_84 != NULL && k_84 != n_84)
              _fail(n_84);
            else
              k_84 = n_84;
          }
        }
      return(t);
    }
    ATerm q_6 (ATerm t)
    {
      ATerm u_6 (ATerm t)
      {
        ATerm o_84 = NULL;
        o_84 = t;
        f_84 :
        if(!(match_cons(o_84, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, _id, u_6);
      return(t);
    }
    t = TCons_2(t, p_6, q_6);
  }
  t = u_12;
  {
    ATerm v_6 (ATerm t)
    {
      ATerm w_6 (ATerm t)
      {
        ATerm y_6 (ATerm t)
        {
          t = not_null(k_84);
          return(t);
        }
        t = split_2(t, y_6, _id);
        return(t);
      }
      ATerm x_6 (ATerm t)
      {
        ATerm p_84 = NULL;
        p_84 = t;
        g_84 :
        if(!(match_cons(p_84, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, w_6, x_6);
      return(t);
    }
    t = TCons_2(t, _id, v_6);
    {
      ATerm w_12 = t;
      if(PushChoice()==0)
        {
          ATerm d_7 (ATerm t)
          {
            ATerm f_7 (ATerm t)
            {
              ATerm q_84 = NULL;
              q_84 = t;
              h_84 :
              if(!(match_cons(q_84, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, f_7);
            return(t);
          }
          ATerm e_7 (ATerm t)
          {
            ATerm g_7 (ATerm t)
            {
              ATerm r_84 = NULL;
              r_84 = t;
              i_84 :
              if(!(match_cons(r_84, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, WriteToBinaryFile_0, g_7);
            return(t);
          }
          t = TCons_2(t, d_7, e_7);
          PopChoice();
        }
      else
        {
          t = w_12;
          {
            ATerm h_7 (ATerm t)
            {
              ATerm o_7 (ATerm t)
              {
                ATerm s_84 = NULL;
                s_84 = t;
                j_84 :
                if(!(match_cons(s_84, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, WriteToTextFile_0, o_7);
              return(t);
            }
            t = TCons_2(t, _id, h_7);
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
ATerm apply_strategy_1 (ATerm t, ATerm t_47 (ATerm))
{
  ATerm a_85 = NULL,c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL;
  ATerm x_12;
  x_12 = t;
  t = dtime_0(t);
  t = x_12;
  t = t_47(t);
  {
    ATerm c_13;
    c_13 = t;
    {
      ATerm b_85 = NULL;
      t = dtime_0(t);
      b_85 = t;
      if(a_85 != NULL && a_85 != b_85)
        _fail(b_85);
      else
        a_85 = b_85;
    }
    t = c_13;
    c_85 = t;
    x_84 :
    if(match_cons(c_85, sym_TCons_2))
      {
        d_85 = ATgetArgument(c_85, 0);
        e_85 = ATgetArgument(c_85, 1);
        y_84 :
        if(match_cons(e_85, sym_TCons_2))
          {
            f_85 = ATgetArgument(e_85, 0);
            g_85 = ATgetArgument(e_85, 1);
            z_84 :
            if(match_cons(g_85, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(a_85)), not_null(d_85)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_85), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm m_85 = NULL;
  m_85 = t;
  t = SSL_ReadFromFile(not_null(m_85));
  return(t);
}
ATerm split_2 (ATerm t, ATerm p_60 (ATerm), ATerm q_60 (ATerm))
{
  ATerm s_85 = NULL;
  ATerm u_85 = NULL;
  s_85 = t;
  {
    ATerm w_85 = NULL;
    t = p_60(t);
    u_85 = t;
    t = not_null(s_85);
    t = q_60(t);
    w_85 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_85), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_85), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm e_86 = NULL;
  ATerm d_13;
  d_13 = t;
  {
    ATerm e_13 = t;
    if(PushChoice()==0)
      {
        ATerm p_7 (ATerm t)
        {
          ATerm f_86 = NULL,g_86 = NULL;
          f_86 = t;
          c_86 :
          if(match_cons(f_86, sym_Input_1))
            {
              g_86 = ATgetArgument(f_86, 0);
              if(e_86 != NULL && e_86 != g_86)
                _fail(g_86);
              else
                e_86 = g_86;
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1(t, p_7);
        PopChoice();
      }
    else
      {
        t = e_13;
        {
          ATerm h_86 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          h_86 = t;
          if(e_86 != NULL && e_86 != h_86)
            _fail(h_86);
          else
            e_86 = h_86;
        }
      }
  }
  t = d_13;
  {
    ATerm q_7 (ATerm t)
    {
      t = not_null(e_86);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, q_7);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_86 = NULL;
  l_86 = t;
  k_86 :
  if(!(match_cons(l_86, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm w_39 (ATerm))
{
  ATerm p_86 = NULL,q_86 = NULL;
  p_86 = t;
  o_86 :
  if(match_cons(p_86, sym_Undefined_1))
    {
      q_86 = ATgetArgument(p_86, 0);
      {
        ATerm s_86 = NULL;
        t = not_null(q_86);
        t = w_39(t);
        s_86 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_86));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_86 = NULL;
  x_86 = t;
  w_86 :
  if(!(match_cons(x_86, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm j_59 (ATerm))
{
  ATerm y_86 (ATerm t)
  {
    ATerm g_13 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, j_59, _id);
        PopChoice();
      }
    else
      {
        t = g_13;
        t = Cons_2(t, _id, y_86);
      }
    return(t);
  }
  t = y_86(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm x_46 (ATerm))
{
  t = fetch_1(t, x_46);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_47 (ATerm))
{
  ATerm r_7 (ATerm t)
  {
    ATerm h_13 = t;
    if(PushChoice()==0)
      {
        ATerm b_87 = NULL;
        b_87 = t;
        z_86 :
        if(!(match_cons(b_87, sym_Help_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = h_13;
        {
          ATerm i_13 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = i_13;
              {
                ATerm c_87 = NULL;
                c_87 = t;
                a_87 :
                if(!(match_cons(c_87, sym_Version_0)))
                  _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, r_7);
  t = s_47(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_87 = NULL,j_87 = NULL,k_87 = NULL;
  ATerm j_13;
  j_13 = t;
  {
    ATerm l_87 = NULL,m_87 = NULL,n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL;
    l_87 = t;
    e_87 :
    if(match_cons(l_87, sym_TCons_2))
      {
        m_87 = ATgetArgument(l_87, 0);
        n_87 = ATgetArgument(l_87, 1);
        f_87 :
        if(match_cons(n_87, sym_TCons_2))
          {
            o_87 = ATgetArgument(n_87, 0);
            p_87 = ATgetArgument(n_87, 1);
            g_87 :
            if(match_cons(p_87, sym_TCons_2))
              {
                q_87 = ATgetArgument(p_87, 0);
                r_87 = ATgetArgument(p_87, 1);
                h_87 :
                if(match_cons(r_87, sym_TNil_0))
                  {
                    if(i_87 != NULL && i_87 != m_87)
                      _fail(m_87);
                    else
                      i_87 = m_87;
                    if(j_87 != NULL && j_87 != o_87)
                      _fail(o_87);
                    else
                      j_87 = o_87;
                    if(k_87 != NULL && k_87 != q_87)
                      _fail(q_87);
                    else
                      k_87 = q_87;
                    t = SSL_table_put(not_null(i_87), not_null(j_87), not_null(k_87));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = j_13;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm u_87 = NULL;
  u_87 = t;
  t = SSL_table_create(not_null(u_87));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm y_87 = NULL;
  y_87 = t;
  {
    ATerm l_13;
    l_13 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_87), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = l_13;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm q_46 (ATerm), ATerm r_46 (ATerm))
{
  ATerm e_88 = NULL,f_88 = NULL,h_88 = NULL;
  e_88 = t;
  d_88 :
  if(match_cons(e_88, sym_Cons_2))
    {
      f_88 = ATgetArgument(e_88, 0);
      h_88 = ATgetArgument(e_88, 1);
      {
        ATerm k_88 = NULL;
        t = not_null(f_88);
        t = q_46(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = r_46(t);
        k_88 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_88), not_null(h_88));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm s_46 (ATerm), ATerm t_46 (ATerm))
{
  ATerm u_88 = NULL,v_88 = NULL,w_88 = NULL,x_88 = NULL,y_88 = NULL;
  u_88 = t;
  s_88 :
  if(match_cons(u_88, sym_Cons_2))
    {
      v_88 = ATgetArgument(u_88, 0);
      w_88 = ATgetArgument(u_88, 1);
      t_88 :
      if(match_cons(w_88, sym_Cons_2))
        {
          x_88 = ATgetArgument(w_88, 0);
          y_88 = ATgetArgument(w_88, 1);
          {
            ATerm c_89 = NULL;
            t = not_null(v_88);
            t = s_46(t);
            t = not_null(x_88);
            t = t_46(t);
            c_89 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_89), not_null(y_88));
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
  ATerm n_13 = t;
  if(PushChoice()==0)
    {
      ATerm s_7 (ATerm t)
      {
        ATerm e_90 = NULL;
        e_90 = t;
        g_89 :
        if(!(match_string(e_90, "-S")))
          _fail(t);
        return(t);
      }
      ATerm t_7 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, s_7, t_7);
      PopChoice();
    }
  else
    {
      t = n_13;
      {
        ATerm o_13 = t;
        if(PushChoice()==0)
          {
            ATerm u_7 (ATerm t)
            {
              ATerm f_90 = NULL;
              f_90 = t;
              h_89 :
              if(!(match_string(f_90, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm v_7 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, u_7, v_7);
            PopChoice();
          }
        else
          {
            t = o_13;
            {
              ATerm p_13 = t;
              if(PushChoice()==0)
                {
                  ATerm w_7 (ATerm t)
                  {
                    ATerm g_90 = NULL;
                    g_90 = t;
                    i_89 :
                    if(!(match_string(g_90, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm x_7 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, w_7, x_7);
                  PopChoice();
                }
              else
                {
                  t = p_13;
                  {
                    ATerm q_13 = t;
                    if(PushChoice()==0)
                      {
                        ATerm y_7 (ATerm t)
                        {
                          ATerm h_90 = NULL;
                          h_90 = t;
                          j_89 :
                          if(!(match_string(h_90, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm z_7 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, y_7, z_7);
                        PopChoice();
                      }
                    else
                      {
                        t = q_13;
                        {
                          ATerm r_13 = t;
                          if(PushChoice()==0)
                            {
                              ATerm a_8 (ATerm t)
                              {
                                ATerm i_90 = NULL;
                                i_90 = t;
                                k_89 :
                                if(!(match_string(i_90, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm b_8 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, a_8, b_8);
                              PopChoice();
                            }
                          else
                            {
                              t = r_13;
                              {
                                ATerm s_13 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm c_8 (ATerm t)
                                    {
                                      ATerm j_90 = NULL;
                                      j_90 = t;
                                      l_89 :
                                      if(!(match_string(j_90, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm d_8 (ATerm t)
                                    {
                                      ATerm k_90 = NULL;
                                      k_90 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(k_90));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, c_8, d_8);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = s_13;
                                    {
                                      ATerm t_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm e_8 (ATerm t)
                                          {
                                            ATerm m_90 = NULL;
                                            m_90 = t;
                                            n_89 :
                                            if(!(match_string(m_90, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm f_8 (ATerm t)
                                          {
                                            ATerm n_90 = NULL;
                                            n_90 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_90));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, e_8, f_8);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = t_13;
                                          {
                                            ATerm y_13 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm g_8 (ATerm t)
                                                {
                                                  ATerm q_90 = NULL;
                                                  q_90 = t;
                                                  p_89 :
                                                  if(!(match_string(q_90, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm h_8 (ATerm t)
                                                {
                                                  ATerm r_90 = NULL;
                                                  r_90 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_90));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, g_8, h_8);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = y_13;
                                                {
                                                  ATerm b_14 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm i_8 (ATerm t)
                                                      {
                                                        ATerm t_90 = NULL;
                                                        t_90 = t;
                                                        r_89 :
                                                        if(!(match_string(t_90, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm j_8 (ATerm t)
                                                      {
                                                        ATerm u_90 = NULL;
                                                        u_90 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_90));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, i_8, j_8);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = b_14;
                                                      {
                                                        ATerm h_14 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm k_8 (ATerm t)
                                                            {
                                                              ATerm w_90 = NULL;
                                                              w_90 = t;
                                                              t_89 :
                                                              if(!(match_string(w_90, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm l_8 (ATerm t)
                                                            {
                                                              ATerm x_90 = NULL;
                                                              x_90 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_90));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, k_8, l_8);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = h_14;
                                                            {
                                                              ATerm i_14 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm m_8 (ATerm t)
                                                                  {
                                                                    ATerm z_90 = NULL;
                                                                    z_90 = t;
                                                                    v_89 :
                                                                    if(!(match_string(z_90, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm n_8 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, m_8, n_8);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = i_14;
                                                                  {
                                                                    ATerm j_14 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm o_8 (ATerm t)
                                                                        {
                                                                          ATerm a_91 = NULL;
                                                                          a_91 = t;
                                                                          w_89 :
                                                                          if(!(match_string(a_91, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm p_8 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, o_8, p_8);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = j_14;
                                                                        {
                                                                          ATerm k_14 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm q_8 (ATerm t)
                                                                              {
                                                                                ATerm b_91 = NULL;
                                                                                b_91 = t;
                                                                                b_90 :
                                                                                if(!(match_string(b_91, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm r_8 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, q_8, r_8);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = k_14;
                                                                              {
                                                                                ATerm l_14 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm s_8 (ATerm t)
                                                                                    {
                                                                                      ATerm c_91 = NULL;
                                                                                      c_91 = t;
                                                                                      c_90 :
                                                                                      if(!(match_string(c_91, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm t_8 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, s_8, t_8);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_14;
                                                                                    {
                                                                                      ATerm u_8 (ATerm t)
                                                                                      {
                                                                                        ATerm d_91 = NULL;
                                                                                        d_91 = t;
                                                                                        d_90 :
                                                                                        if(!(match_string(d_91, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm v_8 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, u_8, v_8);
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
  ATerm l_91 = NULL,m_91 = NULL,n_91 = NULL;
  l_91 = t;
  k_91 :
  if(match_cons(l_91, sym_Cons_2))
    {
      m_91 = ATgetArgument(l_91, 0);
      n_91 = ATgetArgument(l_91, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_91)), not_null(n_91));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_46 (ATerm))
{
  ATerm w_8 (ATerm t)
  {
    ATerm t_91 = NULL;
    t_91 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_91));
    return(t);
  }
  ATerm x_8 (ATerm t)
  {
    ATerm p_14 = t;
    if(PushChoice()==0)
      {
        ATerm r_14 = t;
        if(PushChoice()==0)
          {
            ATerm v_91 = NULL;
            v_91 = t;
            s_91 :
            if(!(match_cons(v_91, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = r_14;
            t = o_46(t);
            t = Cons_2(t, _id, x_8);
          }
        PopChoice();
      }
    else
      {
        t = p_14;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, w_8, x_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm h_47 (ATerm), ATerm i_47 (ATerm), ATerm j_47 (ATerm))
{
  ATerm y_8 (ATerm t)
  {
    ATerm s_14 = t;
    if(PushChoice()==0)
      {
        t = i_47(t);
        PopChoice();
      }
    else
      {
        t = s_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, y_8);
  t = store_options_0(t);
  {
    ATerm u_14 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, j_47);
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
              t = apply_strategy_1(t, h_47);
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
ATerm iowrap_2 (ATerm t, ATerm c_47 (ATerm), ATerm d_47 (ATerm))
{
  t = iowrap_3(t, c_47, d_47, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm z_46 (ATerm))
{
  ATerm z_8 (ATerm t)
  {
    ATerm a_9 (ATerm t)
    {
      ATerm b_9 (ATerm t)
      {
        ATerm z_91 = NULL;
        z_91 = t;
        y_91 :
        if(!(match_cons(z_91, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, z_46, b_9);
      return(t);
    }
    t = TCons_2(t, _id, a_9);
    return(t);
  }
  t = iowrap_2(t, z_8, _fail);
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
        ATerm g_9 (ATerm t)
        {
          ATerm b_92 = NULL;
          b_92 = t;
          a_92 :
          if(!(match_cons(b_92, sym_Nil_0)))
            _fail(t);
          return(t);
        }
        t = Cons_2(t, f_9, g_9);
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
