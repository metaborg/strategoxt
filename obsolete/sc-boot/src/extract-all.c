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
ATerm filter_1 (ATerm, ATerm u_55 (ATerm));
ATerm FilterNonMissingDefs_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm e_42 (ATerm), ATerm f_42 (ATerm));
ATerm Let_2 (ATerm, ATerm g_42 (ATerm), ATerm h_42 (ATerm));
ATerm sboundin_3 (ATerm, ATerm g_63 (ATerm), ATerm h_63 (ATerm), ATerm i_63 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm b_50 (ATerm), ATerm c_50 (ATerm), ATerm d_50 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm r_49 (ATerm), ATerm s_49 (ATerm));
ATerm diff_1 (ATerm, ATerm w_49 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm e_54 (ATerm), ATerm f_54 (ATerm), ATerm g_54 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm h_54 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm p_48 (ATerm), ATerm q_48 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm j_62 (ATerm), ATerm k_62 (ATerm));
ATerm alltd_1 (ATerm, ATerm j_61 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm l_62 (ATerm), ATerm m_62 (ATerm));
ATerm substitute_1 (ATerm, ATerm n_62 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm NonOverloadedDef_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm i_42 (ATerm), ATerm j_42 (ATerm), ATerm k_42 (ATerm));
ATerm partition_1 (ATerm, ATerm c_56 (ATerm));
ATerm OverloadedDef_0 (ATerm);
ATerm Expl_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm m_51 (ATerm), ATerm n_51 (ATerm));
ATerm repeat_1 (ATerm, ATerm p_51 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm f_40 (ATerm), ATerm g_40 (ATerm));
ATerm Con_3 (ATerm, ATerm c_40 (ATerm), ATerm d_40 (ATerm), ATerm e_40 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm i_43 (ATerm), ATerm j_43 (ATerm));
ATerm oncetd_1 (ATerm, ATerm v_60 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm f_59 (ATerm));
ATerm desugar_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm map_1 (ATerm, ATerm e_64 (ATerm));
ATerm Ttl_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm v_57 (ATerm));
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm u_56 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm new_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm h_49 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_64 (ATerm));
ATerm conc_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm m_56 (ATerm), ATerm n_56 (ATerm), ATerm o_56 (ATerm), ATerm p_56 (ATerm));
ATerm zip_1 (ATerm, ATerm r_56 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm y_43 (ATerm), ATerm z_43 (ATerm), ATerm a_44 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm d_52 (ATerm), ATerm e_52 (ATerm));
ATerm for_3 (ATerm, ATerm g_52 (ATerm), ATerm h_52 (ATerm), ATerm i_52 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm h_44 (ATerm), ATerm i_44 (ATerm), ATerm j_44 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm q_49 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm r_48 (ATerm), ATerm s_48 (ATerm), ATerm t_48 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm m_41 (ATerm));
ATerm Cons_2 (ATerm, ATerm r_43 (ATerm), ATerm s_43 (ATerm));
ATerm Specification_1 (ATerm, ATerm o_41 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm n_43 (ATerm), ATerm o_43 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm u_58 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm x_46 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm c_58 (ATerm), ATerm d_58 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm w_38 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm m_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_46 (ATerm));
ATerm need_help_1 (ATerm, ATerm w_46 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm u_45 (ATerm), ATerm v_45 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm w_45 (ATerm), ATerm x_45 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_45 (ATerm));
ATerm iowrap_3 (ATerm, ATerm l_46 (ATerm), ATerm m_46 (ATerm), ATerm n_46 (ATerm));
ATerm iowrap_2 (ATerm, ATerm g_46 (ATerm), ATerm h_46 (ATerm));
ATerm iowrap_1 (ATerm, ATerm d_46 (ATerm));
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
  ATerm k_8;
  k_8 = t;
  {
    ATerm a_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, a_0, _id);
    t = printnl_0(t);
  }
  t = k_8;
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
                      ATerm l_8 = t;
                      if(PushChoice()==0)
                        {
                          t = MissingDefMod_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = l_8;
                          t = MissingDef_0(t);
                        }
                      return(t);
                    }
                    t = map_1(t, b_0);
                    t = not_null(a_3);
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
ATerm filter_1 (ATerm t, ATerm u_55 (ATerm))
{
  ATerm m_8 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = m_8;
      {
        ATerm n_8 = t;
        if(PushChoice()==0)
          {
            ATerm e_0 (ATerm t)
            {
              t = filter_1(t, u_55);
              return(t);
            }
            t = Cons_2(t, u_55, e_0);
            PopChoice();
          }
        else
          {
            t = n_8;
            {
              ATerm j_4 = NULL,k_4 = NULL,l_4 = NULL;
              j_4 = t;
              i_4 :
              if(match_cons(j_4, sym_Cons_2))
                {
                  k_4 = ATgetArgument(j_4, 0);
                  l_4 = ATgetArgument(j_4, 1);
                  t = not_null(l_4);
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
  ATerm z_4 = NULL,a_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL;
  z_4 = t;
  w_4 :
  if(match_cons(z_4, sym_TCons_2))
    {
      a_5 = ATgetArgument(z_4, 0);
      e_5 = ATgetArgument(z_4, 1);
      x_4 :
      if(match_cons(e_5, sym_TCons_2))
        {
          f_5 = ATgetArgument(e_5, 0);
          g_5 = ATgetArgument(e_5, 1);
          y_4 :
          if(match_cons(g_5, sym_TNil_0))
            {
              ATerm w_6 = NULL;
              t = not_null(f_5);
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm s_8 = t;
                  if(PushChoice()==0)
                    {
                      ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,h_6 = NULL;
                      j_5 = t;
                      s_4 :
                      if(match_cons(j_5, sym_TCons_2))
                        {
                          k_5 = ATgetArgument(j_5, 0);
                          l_5 = ATgetArgument(j_5, 1);
                          t_4 :
                          if(match_cons(l_5, sym_TCons_2))
                            {
                              m_5 = ATgetArgument(l_5, 0);
                              h_6 = ATgetArgument(l_5, 1);
                              u_4 :
                              if(match_cons(h_6, sym_TNil_0))
                                {
                                  t = not_null(a_5);
                                  {
                                    ATerm g_0 (ATerm t)
                                    {
                                      ATerm h_0 (ATerm t)
                                      {
                                        ATerm k_6 = NULL;
                                        k_6 = t;
                                        if(k_5 != NULL && k_5 != k_6)
                                          _fail(k_6);
                                        else
                                          k_5 = k_6;
                                        return(t);
                                      }
                                      ATerm i_0 (ATerm t)
                                      {
                                        ATerm t_8 = t;
                                        if(PushChoice()==0)
                                          {
                                            ATerm v_6 = NULL;
                                            t = length_0(t);
                                            v_6 = t;
                                            if(m_5 != NULL && m_5 != v_6)
                                              _fail(v_6);
                                            else
                                              m_5 = v_6;
                                            PopChoice();
                                          }
                                        else
                                          {
                                            t = t_8;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_5), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = eq_0(t);
                                          }
                                        return(t);
                                      }
                                      t = SDef_3(t, h_0, i_0, _id);
                                      return(t);
                                    }
                                    t = fetch_1(t, g_0);
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
                    t = s_8;
                  return(t);
                }
                t = filter_1(t, f_0);
                w_6 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_5), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_6), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm Rec_2 (ATerm t, ATerm e_42 (ATerm), ATerm f_42 (ATerm))
{
  ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL;
  h_7 = t;
  g_7 :
  if(match_cons(h_7, sym_Rec_2))
    {
      i_7 = ATgetArgument(h_7, 0);
      j_7 = ATgetArgument(h_7, 1);
      {
        ATerm m_7 = NULL;
        t = not_null(i_7);
        {
          ATerm o_7 = NULL;
          t = e_42(t);
          m_7 = t;
          t = not_null(j_7);
          t = f_42(t);
          o_7 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(m_7), not_null(o_7));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm g_42 (ATerm), ATerm h_42 (ATerm))
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
  b_8 = t;
  a_8 :
  if(match_cons(b_8, sym_Let_2))
    {
      c_8 = ATgetArgument(b_8, 0);
      d_8 = ATgetArgument(b_8, 1);
      {
        ATerm g_8 = NULL;
        t = not_null(c_8);
        {
          ATerm i_8 = NULL;
          t = g_42(t);
          g_8 = t;
          t = not_null(d_8);
          t = h_42(t);
          i_8 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(g_8), not_null(i_8));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm g_63 (ATerm), ATerm h_63 (ATerm), ATerm i_63 (ATerm))
{
  ATerm u_8 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, g_63, g_63);
      PopChoice();
    }
  else
    {
      t = u_8;
      {
        ATerm v_8 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, i_63, i_63, g_63);
            PopChoice();
          }
        else
          {
            t = v_8;
            t = Rec_2(t, i_63, g_63);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL;
  p_8 = t;
  o_8 :
  if(match_cons(p_8, sym_Rec_2))
    {
      q_8 = ATgetArgument(p_8, 0);
      r_8 = ATgetArgument(p_8, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_8), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL,c_9 = NULL,d_9 = NULL;
  z_8 = t;
  y_8 :
  if(match_cons(z_8, sym_SDef_3))
    {
      a_9 = ATgetArgument(z_8, 0);
      c_9 = ATgetArgument(z_8, 1);
      d_9 = ATgetArgument(z_8, 2);
      t = not_null(c_9);
      {
        ATerm j_0 (ATerm t)
        {
          ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
          h_9 = t;
          x_8 :
          if(match_cons(h_9, sym_VarDec_2))
            {
              i_9 = ATgetArgument(h_9, 0);
              j_9 = ATgetArgument(h_9, 1);
              t = not_null(i_9);
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
ATerm Bind1_0 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL;
  r_9 = t;
  q_9 :
  if(match_cons(r_9, sym_Let_2))
    {
      s_9 = ATgetArgument(r_9, 0);
      t_9 = ATgetArgument(r_9, 1);
      t = not_null(s_9);
      {
        ATerm k_0 (ATerm t)
        {
          ATerm c_10 = NULL,d_10 = NULL,h_10 = NULL,i_10 = NULL;
          c_10 = t;
          p_9 :
          if(match_cons(c_10, sym_SDef_3))
            {
              d_10 = ATgetArgument(c_10, 0);
              h_10 = ATgetArgument(c_10, 1);
              i_10 = ATgetArgument(c_10, 2);
              t = not_null(d_10);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, k_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm b_50 (ATerm), ATerm c_50 (ATerm), ATerm d_50 (ATerm))
{
  ATerm h_11 = NULL;
  ATerm l_11 = NULL;
  h_11 = t;
  {
    ATerm m_11 = NULL;
    ATerm o_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
    t = not_null(h_11);
    m_11 = t;
    t = SSL_explode_term(not_null(m_11));
    o_11 = t;
    e_11 :
    if(match_cons(o_11, sym_TCons_2))
      {
        u_11 = ATgetArgument(o_11, 0);
        v_11 = ATgetArgument(o_11, 1);
        f_11 :
        if(match_cons(v_11, sym_TCons_2))
          {
            w_11 = ATgetArgument(v_11, 0);
            x_11 = ATgetArgument(v_11, 1);
            g_11 :
            if(match_cons(x_11, sym_TNil_0))
              {
                if(l_11 != NULL && l_11 != w_11)
                  _fail(w_11);
                else
                  l_11 = w_11;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(l_11);
    t = foldr_3(t, b_50, c_50, d_50);
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm r_49 (ATerm), ATerm s_49 (ATerm))
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
  e_12 = t;
  d_12 :
  if(match_cons(e_12, sym_Cons_2))
    {
      f_12 = ATgetArgument(e_12, 0);
      g_12 = ATgetArgument(e_12, 1);
      t = s_49(t);
      {
        ATerm l_0 (ATerm t)
        {
          ATerm j_12 = NULL;
          j_12 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_12), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = r_49(t);
          return(t);
        }
        t = fetch_1(t, l_0);
        t = not_null(g_12);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_1 (ATerm t, ATerm w_49 (ATerm))
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL;
  v_12 = t;
  q_12 :
  if(match_cons(v_12, sym_TCons_2))
    {
      w_12 = ATgetArgument(v_12, 0);
      x_12 = ATgetArgument(v_12, 1);
      r_12 :
      if(match_cons(x_12, sym_TCons_2))
        {
          y_12 = ATgetArgument(x_12, 0);
          z_12 = ATgetArgument(x_12, 1);
          u_12 :
          if(match_cons(z_12, sym_TNil_0))
            {
              t = not_null(w_12);
              {
                ATerm d_13 (ATerm t)
                {
                  ATerm w_8 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = w_8;
                      {
                        ATerm b_9 = t;
                        if(PushChoice()==0)
                          {
                            ATerm m_0 (ATerm t)
                            {
                              t = not_null(y_12);
                              return(t);
                            }
                            t = HdMember_p__2(t, w_49, m_0);
                            t = d_13(t);
                            PopChoice();
                          }
                        else
                          {
                            t = b_9;
                            t = Cons_2(t, _id, d_13);
                          }
                      }
                    }
                  return(t);
                }
                t = d_13(t);
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
  ATerm h_13 (ATerm t)
  {
    ATerm n_0 (ATerm t)
    {
      ATerm e_9 = t;
      if(PushChoice()==0)
        {
          t = e_54(t);
          PopChoice();
        }
      else
        {
          t = e_9;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      return(t);
    }
    ATerm o_0 (ATerm t)
    {
      ATerm f_9 = t;
      if(PushChoice()==0)
        {
          ATerm f_13 = NULL;
          ATerm g_9;
          g_9 = t;
          {
            ATerm g_13 = NULL;
            t = f_54(t);
            g_13 = t;
            if(f_13 != NULL && f_13 != g_13)
              _fail(g_13);
            else
              f_13 = g_13;
          }
          t = g_9;
          {
            ATerm p_0 (ATerm t)
            {
              ATerm r_0 (ATerm t)
              {
                t = not_null(f_13);
                return(t);
              }
              t = split_2(t, h_13, r_0);
              t = diff_1(t, h_54);
              return(t);
            }
            ATerm q_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = g_54(t, p_0, h_13, q_0);
            {
              ATerm s_0 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(sym_Nil_0);
                return(t);
              }
              t = crush_3(t, s_0, union_0, _id);
            }
          }
          PopChoice();
        }
      else
        {
          t = f_9;
          {
            ATerm t_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = crush_3(t, t_0, union_0, h_13);
          }
        }
      return(t);
    }
    t = split_2(t, n_0, o_0);
    t = union_0(t);
    return(t);
  }
  t = h_13(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL;
    x_13 = t;
    l_13 :
    if(match_cons(x_13, sym_Call_2))
      {
        y_13 = ATgetArgument(x_13, 0);
        a_14 = ATgetArgument(x_13, 1);
        o_13 :
        if(match_cons(y_13, sym_SVar_1))
          {
            z_13 = ATgetArgument(y_13, 0);
            {
              ATerm d_14 = NULL;
              t = not_null(a_14);
              t = length_0(t);
              d_14 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(z_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_14), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0));
            }
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm v_0 (ATerm t)
  {
    ATerm k_9 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = k_9;
        {
          ATerm l_9 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = l_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm w_0 (ATerm t)
  {
    ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL;
    f_14 = t;
    q_13 :
    if(match_cons(f_14, sym_TCons_2))
      {
        g_14 = ATgetArgument(f_14, 0);
        l_14 = ATgetArgument(f_14, 1);
        r_13 :
        if(match_cons(g_14, sym_TCons_2))
          {
            h_14 = ATgetArgument(g_14, 0);
            i_14 = ATgetArgument(g_14, 1);
            t_13 :
            if(match_cons(i_14, sym_TCons_2))
              {
                j_14 = ATgetArgument(i_14, 0);
                k_14 = ATgetArgument(i_14, 1);
                u_13 :
                if(match_cons(k_14, sym_TNil_0))
                  {
                    v_13 :
                    if(match_cons(l_14, sym_TCons_2))
                      {
                        m_14 = ATgetArgument(l_14, 0);
                        n_14 = ATgetArgument(l_14, 1);
                        w_13 :
                        if(match_cons(n_14, sym_TNil_0))
                          {
                            if(h_14 != NULL && h_14 != m_14)
                              _fail(m_14);
                            else
                              h_14 = m_14;
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = free_vars2_4(t, u_0, v_0, sboundin_3, w_0);
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm p_48 (ATerm), ATerm q_48 (ATerm))
{
  ATerm m_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = p_48(t);
      PopChoice();
    }
  else
    {
      t = m_9;
      {
        ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
        z_14 = t;
        y_14 :
        if(match_cons(z_14, sym_Cons_2))
          {
            a_15 = ATgetArgument(z_14, 0);
            b_15 = ATgetArgument(z_14, 1);
            {
              ATerm e_15 = NULL;
              t = not_null(b_15);
              t = foldr_2(t, p_48, q_48);
              e_15 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_15), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_15), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = q_48(t);
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
  ATerm x_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Fail_0);
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    ATerm t_15 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,j_16 = NULL;
    t_15 = t;
    q_15 :
    if(match_cons(t_15, sym_TCons_2))
      {
        f_16 = ATgetArgument(t_15, 0);
        g_16 = ATgetArgument(t_15, 1);
        r_15 :
        if(match_cons(g_16, sym_TCons_2))
          {
            h_16 = ATgetArgument(g_16, 0);
            j_16 = ATgetArgument(g_16, 1);
            s_15 :
            if(match_cons(j_16, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_16), not_null(h_16));
            else
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
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  r_16 = t;
  o_16 :
  if(match_cons(r_16, sym_Call_2))
    {
      s_16 = ATgetArgument(r_16, 0);
      u_16 = ATgetArgument(r_16, 1);
      p_16 :
      if(match_cons(s_16, sym_SVar_1))
        {
          t_16 = ATgetArgument(s_16, 0);
          q_16 :
          if(match_cons(u_16, sym_Nil_0))
            t = not_null(t_16);
          else
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
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
  c_17 = t;
  y_16 :
  if(match_cons(c_17, sym_TCons_2))
    {
      d_17 = ATgetArgument(c_17, 0);
      e_17 = ATgetArgument(c_17, 1);
      z_16 :
      if(match_cons(e_17, sym_TCons_2))
        {
          f_17 = ATgetArgument(e_17, 0);
          i_17 = ATgetArgument(e_17, 1);
          a_17 :
          if(match_cons(f_17, sym_Cons_2))
            {
              g_17 = ATgetArgument(f_17, 0);
              h_17 = ATgetArgument(f_17, 1);
              b_17 :
              if(match_cons(i_17, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_17), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
  u_17 = t;
  n_17 :
  if(match_cons(u_17, sym_TCons_2))
    {
      v_17 = ATgetArgument(u_17, 0);
      w_17 = ATgetArgument(u_17, 1);
      o_17 :
      if(match_cons(w_17, sym_TCons_2))
        {
          x_17 = ATgetArgument(w_17, 0);
          e_18 = ATgetArgument(w_17, 1);
          p_17 :
          if(match_cons(x_17, sym_Cons_2))
            {
              y_17 = ATgetArgument(x_17, 0);
              d_18 = ATgetArgument(x_17, 1);
              q_17 :
              if(match_cons(y_17, sym_TCons_2))
                {
                  z_17 = ATgetArgument(y_17, 0);
                  a_18 = ATgetArgument(y_17, 1);
                  r_17 :
                  if(match_cons(a_18, sym_TCons_2))
                    {
                      b_18 = ATgetArgument(a_18, 0);
                      c_18 = ATgetArgument(a_18, 1);
                      s_17 :
                      if(match_cons(c_18, sym_TNil_0))
                        {
                          t_17 :
                          if(match_cons(e_18, sym_TNil_0))
                            {
                              ATerm g_18 = NULL;
                              if(v_17 != NULL && v_17 != z_17)
                                _fail(z_17);
                              else
                                v_17 = z_17;
                              if(g_18 != NULL && g_18 != b_18)
                                _fail(b_18);
                              else
                                g_18 = b_18;
                              t = not_null(g_18);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm n_9 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = n_9;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm j_62 (ATerm), ATerm k_62 (ATerm))
{
  ATerm m_18 = NULL;
  ATerm o_18 = NULL;
  m_18 = t;
  {
    ATerm q_18 = NULL;
    t = j_62(t);
    o_18 = t;
    t = k_62(t);
    q_18 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_18), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm j_61 (ATerm))
{
  ATerm v_18 (ATerm t)
  {
    ATerm o_9 = t;
    if(PushChoice()==0)
      {
        t = j_61(t);
        PopChoice();
      }
    else
      {
        t = o_9;
        t = _all(t, v_18);
      }
    return(t);
  }
  t = v_18(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  d_19 = t;
  z_18 :
  if(match_cons(d_19, sym_TCons_2))
    {
      e_19 = ATgetArgument(d_19, 0);
      f_19 = ATgetArgument(d_19, 1);
      a_19 :
      if(match_cons(f_19, sym_TCons_2))
        {
          g_19 = ATgetArgument(f_19, 0);
          h_19 = ATgetArgument(f_19, 1);
          b_19 :
          if(match_cons(h_19, sym_TNil_0))
            {
              ATerm l_19 = NULL;
              if(l_19 != NULL && l_19 != g_19)
                _fail(g_19);
              else
                l_19 = g_19;
            }
          else
            {
              if(match_cons(h_19, sym_TCons_2))
                {
                  i_19 = ATgetArgument(h_19, 0);
                  j_19 = ATgetArgument(h_19, 1);
                  c_19 :
                  if(match_cons(j_19, sym_TNil_0))
                    {
                      ATerm r_19 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      r_19 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_19), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm l_62 (ATerm), ATerm m_62 (ATerm))
{
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
  t = subs_args_0(t);
  a_20 = t;
  x_19 :
  if(match_cons(a_20, sym_TCons_2))
    {
      b_20 = ATgetArgument(a_20, 0);
      c_20 = ATgetArgument(a_20, 1);
      y_19 :
      if(match_cons(c_20, sym_TCons_2))
        {
          d_20 = ATgetArgument(c_20, 0);
          e_20 = ATgetArgument(c_20, 1);
          z_19 :
          if(match_cons(e_20, sym_TNil_0))
            {
              t = not_null(d_20);
              {
                ATerm z_0 (ATerm t)
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = not_null(b_20);
                    return(t);
                  }
                  t = SubsVar_2(t, l_62, a_1);
                  t = m_62(t);
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
ATerm substitute_1 (ATerm t, ATerm n_62 (ATerm))
{
  t = substitute_2(t, n_62, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
  a_21 = t;
  y_20 :
  if(match_cons(a_21, sym_Cons_2))
    {
      b_21 = ATgetArgument(a_21, 0);
      f_21 = ATgetArgument(a_21, 1);
      z_20 :
      if(match_cons(b_21, sym_SDef_3))
        {
          c_21 = ATgetArgument(b_21, 0);
          d_21 = ATgetArgument(b_21, 1);
          e_21 = ATgetArgument(b_21, 2);
          {
            ATerm r_21 = NULL;
            t = not_null(d_21);
            {
              ATerm y_21 = NULL;
              ATerm b_1 (ATerm t)
              {
                ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
                k_21 = t;
                l_20 :
                if(match_cons(k_21, sym_VarDec_2))
                  {
                    l_21 = ATgetArgument(k_21, 0);
                    m_21 = ATgetArgument(k_21, 1);
                    {
                      ATerm p_21 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TNil_0);
                      t = new_0(t);
                      p_21 = t;
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(p_21), not_null(m_21));
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, b_1);
              r_21 = t;
              {
                ATerm x_22 = NULL;
                ATerm c_1 (ATerm t)
                {
                  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
                  t_21 = t;
                  o_20 :
                  if(match_cons(t_21, sym_VarDec_2))
                    {
                      u_21 = ATgetArgument(t_21, 0);
                      v_21 = ATgetArgument(t_21, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_21)), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = map_1(t, c_1);
                y_21 = t;
                t = not_null(a_21);
                {
                  ATerm d_23 = NULL;
                  ATerm d_1 (ATerm t)
                  {
                    ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL;
                    a_22 = t;
                    v_20 :
                    if(match_cons(a_22, sym_SDef_3))
                      {
                        b_22 = ATgetArgument(a_22, 0);
                        c_22 = ATgetArgument(a_22, 1);
                        d_22 = ATgetArgument(a_22, 2);
                        {
                          ATerm e_22 = NULL,f_22 = NULL,v_22 = NULL;
                          if(c_21 != NULL && c_21 != b_22)
                            _fail(b_22);
                          else
                            c_21 = b_22;
                          if(e_22 != NULL && e_22 != c_22)
                            _fail(c_22);
                          else
                            e_22 = c_22;
                          if(f_22 != NULL && f_22 != d_22)
                            _fail(d_22);
                          else
                            f_22 = d_22;
                          t = not_null(e_22);
                          {
                            ATerm e_1 (ATerm t)
                            {
                              ATerm g_22 = NULL,s_22 = NULL,t_22 = NULL;
                              g_22 = t;
                              s_20 :
                              if(match_cons(g_22, sym_VarDec_2))
                                {
                                  s_22 = ATgetArgument(g_22, 0);
                                  t_22 = ATgetArgument(g_22, 1);
                                  t = not_null(s_22);
                                }
                              else
                                _fail(t);
                              return(t);
                            }
                            t = map_1(t, e_1);
                            v_22 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_22), (ATerm) ATmakeAppl(sym_TNil_0))));
                            t = ssubs_0(t);
                          }
                        }
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = map_1(t, d_1);
                  x_22 = t;
                  t = choices_0(t);
                  d_23 = t;
                  t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(c_21), not_null(r_21), not_null(d_23));
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
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
  v_23 = t;
  t_23 :
  if(match_cons(v_23, sym_Cons_2))
    {
      w_23 = ATgetArgument(v_23, 0);
      x_23 = ATgetArgument(v_23, 1);
      u_23 :
      if(match_cons(x_23, sym_Nil_0))
        t = not_null(w_23);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm joindefs_0 (ATerm t)
{
  ATerm u_9 = t;
  if(PushChoice()==0)
    {
      t = JoinDefs1_0(t);
      PopChoice();
    }
  else
    {
      t = u_9;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm NonOverloadedDef_0 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL;
  j_24 = t;
  c_24 :
  if(match_cons(j_24, sym_TCons_2))
    {
      k_24 = ATgetArgument(j_24, 0);
      r_24 = ATgetArgument(j_24, 1);
      d_24 :
      if(match_cons(k_24, sym_TCons_2))
        {
          l_24 = ATgetArgument(k_24, 0);
          m_24 = ATgetArgument(k_24, 1);
          e_24 :
          if(match_cons(m_24, sym_TCons_2))
            {
              n_24 = ATgetArgument(m_24, 0);
              o_24 = ATgetArgument(m_24, 1);
              f_24 :
              if(match_int(n_24, 0))
                {
                  g_24 :
                  if(match_cons(o_24, sym_TNil_0))
                    {
                      h_24 :
                      if(match_cons(r_24, sym_TCons_2))
                        {
                          s_24 = ATgetArgument(r_24, 0);
                          t_24 = ATgetArgument(r_24, 1);
                          i_24 :
                          if(match_cons(t_24, sym_TNil_0))
                            {
                              t = not_null(s_24);
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  ATerm g_1 (ATerm t)
                                  {
                                    ATerm w_24 = NULL;
                                    w_24 = t;
                                    if(l_24 != NULL && l_24 != w_24)
                                      _fail(w_24);
                                    else
                                      l_24 = w_24;
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
ATerm SDef_3 (ATerm t, ATerm i_42 (ATerm), ATerm j_42 (ATerm), ATerm k_42 (ATerm))
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
  e_25 = t;
  d_25 :
  if(match_cons(e_25, sym_SDef_3))
    {
      f_25 = ATgetArgument(e_25, 0);
      g_25 = ATgetArgument(e_25, 1);
      h_25 = ATgetArgument(e_25, 2);
      {
        ATerm l_25 = NULL;
        t = not_null(f_25);
        {
          ATerm n_25 = NULL;
          t = i_42(t);
          l_25 = t;
          t = not_null(g_25);
          {
            ATerm p_25 = NULL;
            t = j_42(t);
            n_25 = t;
            t = not_null(h_25);
            t = k_42(t);
            p_25 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(l_25), not_null(n_25), not_null(p_25));
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
  ATerm e_28 (ATerm t)
  {
    ATerm v_9 = t;
    if(PushChoice()==0)
      {
        ATerm i_26 = NULL;
        i_26 = t;
        w_25 :
        if(match_cons(i_26, sym_Nil_0))
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
        else
          _fail(t);
        PopChoice();
      }
    else
      {
        t = v_9;
        {
          ATerm w_9 = t;
          if(PushChoice()==0)
            {
              ATerm j_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL;
              t = Cons_2(t, c_56, e_28);
              j_26 = t;
              y_25 :
              if(match_cons(j_26, sym_Cons_2))
                {
                  o_26 = ATgetArgument(j_26, 0);
                  p_26 = ATgetArgument(j_26, 1);
                  z_25 :
                  if(match_cons(p_26, sym_TCons_2))
                    {
                      q_26 = ATgetArgument(p_26, 0);
                      r_26 = ATgetArgument(p_26, 1);
                      a_26 :
                      if(match_cons(r_26, sym_TCons_2))
                        {
                          s_26 = ATgetArgument(r_26, 0);
                          t_26 = ATgetArgument(r_26, 1);
                          b_26 :
                          if(match_cons(t_26, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_26), not_null(q_26)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_26), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
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
              t = w_9;
              {
                ATerm i_27 = NULL,j_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL;
                t = Cons_2(t, _id, e_28);
                i_27 = t;
                d_26 :
                if(match_cons(i_27, sym_Cons_2))
                  {
                    j_27 = ATgetArgument(i_27, 0);
                    l_27 = ATgetArgument(i_27, 1);
                    e_26 :
                    if(match_cons(l_27, sym_TCons_2))
                      {
                        m_27 = ATgetArgument(l_27, 0);
                        n_27 = ATgetArgument(l_27, 1);
                        f_26 :
                        if(match_cons(n_27, sym_TCons_2))
                          {
                            o_27 = ATgetArgument(n_27, 0);
                            p_27 = ATgetArgument(n_27, 1);
                            h_26 :
                            if(match_cons(p_27, sym_TNil_0))
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_27), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_27), not_null(o_27)), (ATerm) ATmakeAppl(sym_TNil_0)));
                            else
                              _fail(t);
                          }
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
  t = e_28(t);
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL;
  u_28 = t;
  o_28 :
  if(match_cons(u_28, sym_TCons_2))
    {
      v_28 = ATgetArgument(u_28, 0);
      a_29 = ATgetArgument(u_28, 1);
      p_28 :
      if(match_cons(v_28, sym_TCons_2))
        {
          w_28 = ATgetArgument(v_28, 0);
          x_28 = ATgetArgument(v_28, 1);
          q_28 :
          if(match_cons(x_28, sym_TCons_2))
            {
              y_28 = ATgetArgument(x_28, 0);
              z_28 = ATgetArgument(x_28, 1);
              r_28 :
              if(match_cons(z_28, sym_TNil_0))
                {
                  s_28 :
                  if(match_cons(a_29, sym_TCons_2))
                    {
                      b_29 = ATgetArgument(a_29, 0);
                      c_29 = ATgetArgument(a_29, 1);
                      t_28 :
                      if(match_cons(c_29, sym_TNil_0))
                        {
                          t = not_null(b_29);
                          {
                            ATerm h_1 (ATerm t)
                            {
                              ATerm i_1 (ATerm t)
                              {
                                ATerm g_29 = NULL;
                                g_29 = t;
                                if(w_28 != NULL && w_28 != g_29)
                                  _fail(g_29);
                                else
                                  w_28 = g_29;
                                return(t);
                              }
                              ATerm j_1 (ATerm t)
                              {
                                ATerm x_9;
                                x_9 = t;
                                {
                                  ATerm h_29 = NULL;
                                  t = length_0(t);
                                  h_29 = t;
                                  if(y_28 != NULL && y_28 != h_29)
                                    _fail(h_29);
                                  else
                                    y_28 = h_29;
                                }
                                t = x_9;
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
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
  c_30 = t;
  b_30 :
  if(match_cons(c_30, sym_Match_1))
    {
      d_30 = ATgetArgument(c_30, 0);
      {
        ATerm g_30 = NULL;
        ATerm i_30 = NULL;
        t = new_0(t);
        g_30 = t;
        {
          ATerm k_30 = NULL,l_30 = NULL,p_30 = NULL;
          t = new_0(t);
          i_30 = t;
          t = not_null(d_30);
          {
            ATerm k_1 (ATerm t)
            {
              ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
              m_30 = t;
              r_29 :
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
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_30));
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1(t, k_1);
            p_30 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_30), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_30)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_30), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_30))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_30)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(g_30)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_30), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_30), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0))))))));
          }
        }
      }
    }
  else
    {
      if(match_cons(c_30, sym_Build_1))
        {
          d_30 = ATgetArgument(c_30, 0);
          {
            ATerm s_30 = NULL;
            ATerm u_30 = NULL,v_30 = NULL,z_30 = NULL;
            t = new_0(t);
            s_30 = t;
            t = not_null(d_30);
            {
              ATerm l_1 (ATerm t)
              {
                ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
                w_30 = t;
                v_29 :
                if(match_cons(w_30, sym_Explode_2))
                  {
                    x_30 = ATgetArgument(w_30, 0);
                    y_30 = ATgetArgument(w_30, 1);
                    if(u_30 != NULL && u_30 != x_30)
                      _fail(x_30);
                    else
                      u_30 = x_30;
                    if(v_30 != NULL && v_30 != y_30)
                      _fail(y_30);
                    else
                      v_30 = y_30;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_30));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, l_1);
              z_30 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_30), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_30), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_30), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_30))), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_30)))));
            }
          }
        }
      else
        {
          if(match_cons(c_30, sym_ExplodeCong_2))
            {
              d_30 = ATgetArgument(c_30, 0);
              e_30 = ATgetArgument(c_30, 1);
              {
                ATerm d_31 = NULL;
                ATerm f_31 = NULL;
                t = new_0(t);
                d_31 = t;
                {
                  ATerm k_31 = NULL;
                  t = new_0(t);
                  f_31 = t;
                  {
                    ATerm m_31 = NULL;
                    t = new_0(t);
                    k_31 = t;
                    t = new_0(t);
                    m_31 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_31), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_31), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_31), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_31), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_31)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_31)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(d_30), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_31)), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_31))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(e_30), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_31)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_31))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_31)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_31)), (ATerm) ATmakeAppl(sym_Nil_0)))))));
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
  ATerm m_32 = NULL,n_32 = NULL;
  m_32 = t;
  l_32 :
  if(match_cons(m_32, sym_Build_1))
    {
      n_32 = ATgetArgument(m_32, 0);
      {
        ATerm p_32 = NULL;
        ATerm r_32 = NULL,s_32 = NULL,w_32 = NULL;
        t = new_0(t);
        p_32 = t;
        t = not_null(n_32);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
            t_32 = t;
            j_32 :
            if(match_cons(t_32, sym_App_2))
              {
                u_32 = ATgetArgument(t_32, 0);
                v_32 = ATgetArgument(t_32, 1);
                if(r_32 != NULL && r_32 != u_32)
                  _fail(u_32);
                else
                  r_32 = u_32;
                if(s_32 != NULL && s_32 != v_32)
                  _fail(v_32);
                else
                  s_32 = v_32;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_32));
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, m_1);
          w_32 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_32), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(r_32), not_null(s_32), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_32))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_32))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp1_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL;
  m_35 = t;
  k_35 :
  if(match_cons(m_35, sym_Build_1))
    {
      n_35 = ATgetArgument(m_35, 0);
      l_35 :
      if(match_cons(n_35, sym_App_2))
        {
          o_35 = ATgetArgument(n_35, 0);
          p_35 = ATgetArgument(n_35, 1);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_35)), not_null(o_35));
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
  ATerm z_38 = NULL,a_39 = NULL;
  z_38 = t;
  y_38 :
  if(match_cons(z_38, sym_Build_1))
    {
      a_39 = ATgetArgument(z_38, 0);
      {
        ATerm c_39 = NULL,d_39 = NULL,i_39 = NULL;
        t = not_null(a_39);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL;
            e_39 = t;
            p_36 :
            if(match_cons(e_39, sym_App_2))
              {
                f_39 = ATgetArgument(e_39, 0);
                h_39 = ATgetArgument(e_39, 1);
                v_38 :
                if(match_cons(f_39, sym_Build_1))
                  {
                    g_39 = ATgetArgument(f_39, 0);
                    if(d_39 != NULL && d_39 != g_39)
                      _fail(g_39);
                    else
                      d_39 = g_39;
                    if(c_39 != NULL && c_39 != h_39)
                      _fail(h_39);
                    else
                      c_39 = h_39;
                    t = not_null(d_39);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, n_1);
          i_39 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, not_null(i_39));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL;
  k_40 = t;
  z_39 :
  if(match_cons(k_40, sym_Seqs_1))
    {
      l_40 = ATgetArgument(k_40, 0);
      a_40 :
      if(match_cons(l_40, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(l_40, sym_Cons_2))
            {
              i_40 = ATgetArgument(l_40, 0);
              j_40 = ATgetArgument(l_40, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_40), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(j_40)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(k_40, sym_Choices_1))
        {
          l_40 = ATgetArgument(k_40, 0);
          b_40 :
          if(match_cons(l_40, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(l_40, sym_Cons_2))
                {
                  i_40 = ATgetArgument(l_40, 0);
                  j_40 = ATgetArgument(l_40, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_40), (ATerm) ATmakeAppl(sym_Choices_1, not_null(j_40)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(k_40, sym_LChoices_1))
            {
              l_40 = ATgetArgument(k_40, 0);
              h_40 :
              if(match_cons(l_40, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(l_40, sym_Cons_2))
                    {
                      i_40 = ATgetArgument(l_40, 0);
                      j_40 = ATgetArgument(l_40, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(i_40), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(j_40)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(k_40, sym_Lets_2))
                {
                  l_40 = ATgetArgument(k_40, 0);
                  m_40 = ATgetArgument(k_40, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(l_40), not_null(m_40));
                }
              else
                {
                  if(match_cons(k_40, sym_BA_2))
                    {
                      l_40 = ATgetArgument(k_40, 0);
                      m_40 = ATgetArgument(k_40, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_40)), not_null(l_40));
                    }
                  else
                    {
                      if(match_cons(k_40, sym_MA_2))
                        {
                          l_40 = ATgetArgument(k_40, 0);
                          m_40 = ATgetArgument(k_40, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_40)), not_null(m_40));
                        }
                      else
                        {
                          if(match_cons(k_40, sym_AM_2))
                            {
                              l_40 = ATgetArgument(k_40, 0);
                              m_40 = ATgetArgument(k_40, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_40), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_40)));
                            }
                          else
                            {
                              if(match_cons(k_40, sym_BAM_3))
                                {
                                  l_40 = ATgetArgument(k_40, 0);
                                  m_40 = ATgetArgument(k_40, 1);
                                  n_40 = ATgetArgument(k_40, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_40)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_40), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_40)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(k_40, sym_InfixApp_3))
                                    {
                                      l_40 = ATgetArgument(k_40, 0);
                                      m_40 = ATgetArgument(k_40, 1);
                                      n_40 = ATgetArgument(k_40, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(m_40), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_40), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_40), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
ATerm repeat_2 (ATerm t, ATerm m_51 (ATerm), ATerm n_51 (ATerm))
{
  ATerm w_41 (ATerm t)
  {
    ATerm y_9 = t;
    if(PushChoice()==0)
      {
        t = m_51(t);
        t = w_41(t);
        PopChoice();
      }
    else
      {
        t = y_9;
        t = n_51(t);
      }
    return(t);
  }
  t = w_41(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm p_51 (ATerm))
{
  t = repeat_2(t, p_51, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm y_41 = NULL;
  y_41 = t;
  x_41 :
  if(!(match_cons(y_41, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm z_9 = t;
  if(PushChoice()==0)
    {
      ATerm o_1 (ATerm t)
      {
        ATerm a_10 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = a_10;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, o_1);
      PopChoice();
      _fail(t);
    }
  else
    t = z_9;
  return(t);
}
ATerm App_2 (ATerm t, ATerm f_40 (ATerm), ATerm g_40 (ATerm))
{
  ATerm d_42 = NULL,l_42 = NULL,m_42 = NULL;
  d_42 = t;
  c_42 :
  if(match_cons(d_42, sym_App_2))
    {
      l_42 = ATgetArgument(d_42, 0);
      m_42 = ATgetArgument(d_42, 1);
      {
        ATerm p_42 = NULL;
        t = not_null(l_42);
        {
          ATerm r_42 = NULL;
          t = f_40(t);
          p_42 = t;
          t = not_null(m_42);
          t = g_40(t);
          r_42 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, not_null(p_42), not_null(r_42));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm c_40 (ATerm), ATerm d_40 (ATerm), ATerm e_40 (ATerm))
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL;
  b_43 = t;
  a_43 :
  if(match_cons(b_43, sym_Con_3))
    {
      c_43 = ATgetArgument(b_43, 0);
      d_43 = ATgetArgument(b_43, 1);
      e_43 = ATgetArgument(b_43, 2);
      {
        ATerm k_43 = NULL;
        t = not_null(c_43);
        {
          ATerm m_43 = NULL;
          t = c_40(t);
          k_43 = t;
          t = not_null(d_43);
          {
            ATerm q_43 = NULL;
            t = d_40(t);
            m_43 = t;
            t = not_null(e_43);
            t = e_40(t);
            q_43 = t;
            t = (ATerm) ATmakeAppl(sym_Con_3, not_null(k_43), not_null(m_43), not_null(q_43));
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
  ATerm b_10 = t;
  if(PushChoice()==0)
    {
      ATerm p_1 (ATerm t)
      {
        ATerm e_10 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = e_10;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, p_1);
      PopChoice();
      _fail(t);
    }
  else
    t = b_10;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL;
  f_44 = t;
  d_44 :
  if(match_cons(f_44, sym_SRule_1))
    {
      g_44 = ATgetArgument(f_44, 0);
      e_44 :
      if(match_cons(g_44, sym_Rule_3))
        {
          k_44 = ATgetArgument(g_44, 0);
          l_44 = ATgetArgument(g_44, 1);
          m_44 = ATgetArgument(g_44, 2);
          t = not_null(k_44);
          t = pureterm_0(t);
          t = not_null(l_44);
          t = buildterm_0(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_44)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_44), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_44)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(g_44, sym_StratRule_3))
            {
              k_44 = ATgetArgument(g_44, 0);
              l_44 = ATgetArgument(g_44, 1);
              m_44 = ATgetArgument(g_44, 2);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_44), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_44), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_44), (ATerm) ATmakeAppl(sym_Nil_0)))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm i_43 (ATerm), ATerm j_43 (ATerm))
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL;
  z_44 = t;
  y_44 :
  if(match_cons(z_44, sym_Scope_2))
    {
      a_45 = ATgetArgument(z_44, 0);
      b_45 = ATgetArgument(z_44, 1);
      {
        ATerm e_45 = NULL;
        t = not_null(a_45);
        {
          ATerm g_45 = NULL;
          t = i_43(t);
          e_45 = t;
          t = not_null(b_45);
          t = j_43(t);
          g_45 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_45), not_null(g_45));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm v_60 (ATerm))
{
  ATerm l_45 (ATerm t)
  {
    ATerm f_10 = t;
    if(PushChoice()==0)
      {
        t = v_60(t);
        PopChoice();
      }
    else
      {
        t = f_10;
        t = _one(t, l_45);
      }
    return(t);
  }
  t = l_45(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm k_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL;
  k_46 = t;
  i_46 :
  if(match_cons(k_46, sym_SRule_1))
    {
      o_46 = ATgetArgument(k_46, 0);
      j_46 :
      if(match_cons(o_46, sym_Rule_3))
        {
          p_46 = ATgetArgument(o_46, 0);
          q_46 = ATgetArgument(o_46, 1);
          r_46 = ATgetArgument(o_46, 2);
          {
            ATerm v_46 = NULL;
            ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL,h_47 = NULL;
            t = new_0(t);
            v_46 = t;
            t = not_null(p_46);
            {
              ATerm j_47 = NULL,k_47 = NULL,s_47 = NULL;
              ATerm q_1 (ATerm t)
              {
                ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
                c_47 = t;
                p_45 :
                if(match_cons(c_47, sym_Con_3))
                  {
                    d_47 = ATgetArgument(c_47, 0);
                    f_47 = ATgetArgument(c_47, 1);
                    g_47 = ATgetArgument(c_47, 2);
                    q_45 :
                    if(match_cons(d_47, sym_Var_1))
                      {
                        e_47 = ATgetArgument(d_47, 0);
                        if(b_47 != NULL && b_47 != e_47)
                          _fail(e_47);
                        else
                          b_47 = e_47;
                        if(z_46 != NULL && z_46 != f_47)
                          _fail(f_47);
                        else
                          z_46 = f_47;
                        if(a_47 != NULL && a_47 != g_47)
                          _fail(g_47);
                        else
                          a_47 = g_47;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_47));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, q_1);
              h_47 = t;
              t = not_null(q_46);
              {
                ATerm r_1 (ATerm t)
                {
                  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL;
                  l_47 = t;
                  z_45 :
                  if(match_cons(l_47, sym_Con_3))
                    {
                      m_47 = ATgetArgument(l_47, 0);
                      o_47 = ATgetArgument(l_47, 1);
                      p_47 = ATgetArgument(l_47, 2);
                      a_46 :
                      if(match_cons(m_47, sym_Var_1))
                        {
                          n_47 = ATgetArgument(m_47, 0);
                          c_46 :
                          if(match_cons(p_47, sym_Call_2))
                            {
                              q_47 = ATgetArgument(p_47, 0);
                              r_47 = ATgetArgument(p_47, 1);
                              e_46 :
                              if(match_cons(r_47, sym_Nil_0))
                                {
                                  if(b_47 != NULL && b_47 != n_47)
                                    _fail(n_47);
                                  else
                                    b_47 = n_47;
                                  if(j_47 != NULL && j_47 != o_47)
                                    _fail(o_47);
                                  else
                                    j_47 = o_47;
                                  if(k_47 != NULL && k_47 != q_47)
                                    _fail(q_47);
                                  else
                                    k_47 = q_47;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_46));
                                }
                              else
                                _fail(t);
                            }
                          else
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
                s_47 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_46), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(h_47), not_null(s_47), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_46), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(k_47), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_46), not_null(j_47), (ATerm) ATmakeAppl(sym_Id_0))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Var_1, not_null(b_47)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_46)))))));
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
    ATerm g_10 = t;
    if(PushChoice()==0)
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      {
        t = g_10;
        {
          ATerm j_10 = t;
          if(PushChoice()==0)
            {
              t = Scope_2(t, _id, desugarRule_0);
              PopChoice();
            }
          else
            {
              t = j_10;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, s_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm f_59 (ATerm))
{
  ATerm b_48 (ATerm t)
  {
    t = f_59(t);
    t = _all(t, b_48);
    return(t);
  }
  t = b_48(t);
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
        ATerm k_10 = t;
        if(PushChoice()==0)
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = k_10;
            {
              ATerm l_10 = t;
              if(PushChoice()==0)
                {
                  ATerm m_10 = t;
                  if(PushChoice()==0)
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = m_10;
                      {
                        ATerm n_10 = t;
                        if(PushChoice()==0)
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = n_10;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = l_10;
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
        ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL;
        e_48 = t;
        d_48 :
        if(match_cons(e_48, sym_Cons_2))
          {
            f_48 = ATgetArgument(e_48, 0);
            g_48 = ATgetArgument(e_48, 1);
            t = not_null(f_48);
            {
              ATerm d_2 (ATerm t)
              {
                t = not_null(g_48);
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
ATerm map_1 (ATerm t, ATerm e_64 (ATerm))
{
  ATerm l_48 (ATerm t)
  {
    ATerm p_10 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = p_10;
        t = Cons_2(t, e_64, l_48);
      }
    return(t);
  }
  t = l_48(t);
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm o_48 = NULL,u_48 = NULL,v_48 = NULL;
  o_48 = t;
  n_48 :
  if(match_cons(o_48, sym_TCons_2))
    {
      u_48 = ATgetArgument(o_48, 0);
      v_48 = ATgetArgument(o_48, 1);
      t = not_null(v_48);
    }
  else
    _fail(t);
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL;
  b_49 = t;
  a_49 :
  if(match_cons(b_49, sym_TCons_2))
    {
      c_49 = ATgetArgument(b_49, 0);
      d_49 = ATgetArgument(b_49, 1);
      t = not_null(c_49);
    }
  else
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm v_57 (ATerm))
{
  ATerm e_50 (ATerm t)
  {
    ATerm q_10 = t;
    if(PushChoice()==0)
      {
        ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL,v_49 = NULL,y_49 = NULL;
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
            t = TCons_2(t, e_50, TNil_0);
            return(t);
          }
          t = TCons_2(t, v_57, r_2);
          n_49 = t;
          k_49 :
          if(match_cons(n_49, sym_TCons_2))
            {
              o_49 = ATgetArgument(n_49, 0);
              p_49 = ATgetArgument(n_49, 1);
              l_49 :
              if(match_cons(p_49, sym_TCons_2))
                {
                  v_49 = ATgetArgument(p_49, 0);
                  y_49 = ATgetArgument(p_49, 1);
                  m_49 :
                  if(match_cons(y_49, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_49), not_null(v_49));
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
        t = q_10;
        t = map_1(t, TNil_0);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
      }
    return(t);
  }
  t = e_50(t);
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL;
  n_50 = t;
  k_50 :
  if(match_cons(n_50, sym_TCons_2))
    {
      o_50 = ATgetArgument(n_50, 0);
      p_50 = ATgetArgument(n_50, 1);
      l_50 :
      if(match_cons(p_50, sym_TCons_2))
        {
          q_50 = ATgetArgument(p_50, 0);
          r_50 = ATgetArgument(p_50, 1);
          m_50 :
          if(match_cons(r_50, sym_TNil_0))
            {
              ATerm u_50 = NULL;
              ATerm w_50 = NULL;
              t = new_0(t);
              u_50 = t;
              {
                ATerm y_50 = NULL;
                t = new_0(t);
                w_50 = t;
                t = new_0(t);
                y_50 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_50)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_50)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_50)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_50)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_50)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(u_50), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_50), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_50)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_50), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_50)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
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
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL,q_51 = NULL,r_51 = NULL;
  j_51 = t;
  f_51 :
  if(match_cons(j_51, sym_TCons_2))
    {
      k_51 = ATgetArgument(j_51, 0);
      l_51 = ATgetArgument(j_51, 1);
      g_51 :
      if(match_cons(l_51, sym_TCons_2))
        {
          q_51 = ATgetArgument(l_51, 0);
          r_51 = ATgetArgument(l_51, 1);
          h_51 :
          if(match_cons(q_51, sym_Nil_0))
            {
              i_51 :
              if(match_cons(r_51, sym_TNil_0))
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
ATerm zipr_1 (ATerm t, ATerm u_56 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, u_56);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL;
  v_51 = t;
  u_51 :
  if(match_cons(v_51, sym_Cons_2))
    {
      w_51 = ATgetArgument(v_51, 0);
      x_51 = ATgetArgument(v_51, 1);
      t = not_null(x_51);
    }
  else
    _fail(t);
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
  k_52 = t;
  c_52 :
  if(match_cons(k_52, sym_Cons_2))
    {
      l_52 = ATgetArgument(k_52, 0);
      m_52 = ATgetArgument(k_52, 1);
      j_52 :
      if(match_cons(m_52, sym_Nil_0))
        t = not_null(l_52);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm last_0 (ATerm t)
{
  ATerm r_10 = t;
  if(PushChoice()==0)
    {
      t = Last_0(t);
      PopChoice();
    }
  else
    {
      t = r_10;
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
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL;
  u_52 = t;
  r_52 :
  if(match_cons(u_52, sym_TCons_2))
    {
      v_52 = ATgetArgument(u_52, 0);
      w_52 = ATgetArgument(u_52, 1);
      s_52 :
      if(match_cons(w_52, sym_TCons_2))
        {
          x_52 = ATgetArgument(w_52, 0);
          y_52 = ATgetArgument(w_52, 1);
          t_52 :
          if(match_cons(y_52, sym_TNil_0))
            {
              ATerm s_10 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(v_52), not_null(x_52));
                  PopChoice();
                }
              else
                {
                  t = s_10;
                  t = SSL_subtr(not_null(v_52), not_null(x_52));
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
              ATerm t_10;
              t_10 = t;
              {
                ATerm u_10 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(h_53), not_null(j_53));
                    PopChoice();
                  }
                else
                  {
                    t = u_10;
                    t = SSL_gtr(not_null(h_53), not_null(j_53));
                  }
              }
              t = t_10;
            }
          else
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
  ATerm s_53 = NULL;
  ATerm v_10 = t;
  if(PushChoice()==0)
    {
      ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL;
      t_53 = t;
      p_53 :
      if(match_cons(t_53, sym_TCons_2))
        {
          u_53 = ATgetArgument(t_53, 0);
          v_53 = ATgetArgument(t_53, 1);
          q_53 :
          if(match_cons(v_53, sym_TCons_2))
            {
              w_53 = ATgetArgument(v_53, 0);
              x_53 = ATgetArgument(v_53, 1);
              r_53 :
              if(match_cons(x_53, sym_TNil_0))
                {
                  if(s_53 != NULL && s_53 != u_53)
                    _fail(u_53);
                  else
                    s_53 = u_53;
                  if(s_53 != NULL && s_53 != w_53)
                    _fail(w_53);
                  else
                    s_53 = w_53;
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
      t = v_10;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm h_49 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL;
    v_54 = t;
    a_54 :
    if(match_cons(v_54, sym_TCons_2))
      {
        w_54 = ATgetArgument(v_54, 0);
        x_54 = ATgetArgument(v_54, 1);
        b_54 :
        if(match_cons(x_54, sym_TCons_2))
          {
            y_54 = ATgetArgument(x_54, 0);
            z_54 = ATgetArgument(x_54, 1);
            c_54 :
            if(match_cons(z_54, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_54), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_54), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
            else
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
    ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL;
    c_55 = t;
    j_54 :
    if(match_cons(c_55, sym_TCons_2))
      {
        d_55 = ATgetArgument(c_55, 0);
        e_55 = ATgetArgument(c_55, 1);
        k_54 :
        if(match_int(d_55, 0))
          {
            l_54 :
            if(match_cons(e_55, sym_TCons_2))
              {
                f_55 = ATgetArgument(e_55, 0);
                g_55 = ATgetArgument(e_55, 1);
                m_54 :
                if(match_cons(g_55, sym_TCons_2))
                  {
                    h_55 = ATgetArgument(g_55, 0);
                    i_55 = ATgetArgument(g_55, 1);
                    n_54 :
                    if(match_cons(i_55, sym_TNil_0))
                      t = not_null(h_55);
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
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
    ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL;
    l_55 = t;
    r_54 :
    if(match_cons(l_55, sym_TCons_2))
      {
        m_55 = ATgetArgument(l_55, 0);
        n_55 = ATgetArgument(l_55, 1);
        s_54 :
        if(match_cons(n_55, sym_TCons_2))
          {
            o_55 = ATgetArgument(n_55, 0);
            p_55 = ATgetArgument(n_55, 1);
            t_54 :
            if(match_cons(p_55, sym_TCons_2))
              {
                q_55 = ATgetArgument(p_55, 0);
                r_55 = ATgetArgument(p_55, 1);
                u_54 :
                if(match_cons(r_55, sym_TNil_0))
                  {
                    ATerm w_55 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_55), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = geq_0(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_55), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm y_55 = NULL;
                      t = subt_0(t);
                      w_55 = t;
                      t = not_null(o_55);
                      t = h_49(t);
                      y_55 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_55), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_55), not_null(q_55)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm s_56 = NULL;
  ATerm v_56 = NULL;
  s_56 = t;
  {
    ATerm x_56 = NULL;
    t = new_0(t);
    v_56 = t;
    {
      ATerm z_56 = NULL;
      t = new_0(t);
      x_56 = t;
      t = new_0(t);
      z_56 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_56)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_56)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_56), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_56))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(v_56), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_56)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_56)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
    }
  }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL;
  ATerm q_61 (ATerm t)
  {
    ATerm g_60 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm i_60 = NULL,j_60 = NULL,k_60 = NULL;
      t = add_0(t);
      g_60 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_60), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TNil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = copy_1(t, new_0);
      i_60 = t;
      j_58 :
      if(match_cons(i_60, sym_Cons_2))
        {
          j_60 = ATgetArgument(i_60, 0);
          k_60 = ATgetArgument(i_60, 1);
          {
            ATerm n_60 = NULL;
            t = not_null(k_60);
            {
              ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL;
              t = last_0(t);
              n_60 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_60), not_null(k_60)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_60), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = zipr_1(t, MkThreadApplication_0);
              t = tuple_unzip_1(t, _id);
              p_60 = t;
              a_58 :
              if(match_cons(p_60, sym_TCons_2))
                {
                  q_60 = ATgetArgument(p_60, 0);
                  r_60 = ATgetArgument(p_60, 1);
                  b_58 :
                  if(match_cons(r_60, sym_TCons_2))
                    {
                      s_60 = ATgetArgument(r_60, 0);
                      t_60 = ATgetArgument(r_60, 1);
                      e_58 :
                      if(match_cons(t_60, sym_TCons_2))
                        {
                          u_60 = ATgetArgument(t_60, 0);
                          x_60 = ATgetArgument(t_60, 1);
                          f_58 :
                          if(match_cons(x_60, sym_TCons_2))
                            {
                              y_60 = ATgetArgument(x_60, 0);
                              z_60 = ATgetArgument(x_60, 1);
                              g_58 :
                              if(match_cons(z_60, sym_TCons_2))
                                {
                                  a_61 = ATgetArgument(z_60, 0);
                                  b_61 = ATgetArgument(z_60, 1);
                                  h_58 :
                                  if(match_cons(b_61, sym_TCons_2))
                                    {
                                      c_61 = ATgetArgument(b_61, 0);
                                      d_61 = ATgetArgument(b_61, 1);
                                      i_58 :
                                      if(match_cons(d_61, sym_TNil_0))
                                        {
                                          ATerm m_61 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_60), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_60), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_61), (ATerm) ATmakeAppl(sym_Nil_0))));
                                          t = concat_0(t);
                                          m_61 = t;
                                          t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(t_58), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), not_null(s_60), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_60), not_null(m_61)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(t_58), not_null(y_60)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(j_60)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(t_58), not_null(c_61)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_60)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(q_60))))));
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
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
  s_58 = t;
  k_58 :
  if(match_cons(s_58, sym_TCons_2))
    {
      t_58 = ATgetArgument(s_58, 0);
      v_58 = ATgetArgument(s_58, 1);
      l_58 :
      if(match_cons(v_58, sym_TCons_2))
        {
          w_58 = ATgetArgument(v_58, 0);
          x_58 = ATgetArgument(v_58, 1);
          m_58 :
          if(match_string(w_58, "D"))
            {
              n_58 :
              if(match_cons(x_58, sym_TCons_2))
                {
                  y_58 = ATgetArgument(x_58, 0);
                  z_58 = ATgetArgument(x_58, 1);
                  o_58 :
                  if(match_cons(z_58, sym_TNil_0))
                    {
                      ATerm c_59 = NULL;
                      ATerm e_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL;
                      t = new_0(t);
                      c_59 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_59)), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = copy_1(t, MkDistApplication_0);
                      t = tuple_unzip_1(t, _id);
                      e_59 = t;
                      l_57 :
                      if(match_cons(e_59, sym_TCons_2))
                        {
                          h_59 = ATgetArgument(e_59, 0);
                          i_59 = ATgetArgument(e_59, 1);
                          m_57 :
                          if(match_cons(i_59, sym_TCons_2))
                            {
                              j_59 = ATgetArgument(i_59, 0);
                              k_59 = ATgetArgument(i_59, 1);
                              n_57 :
                              if(match_cons(k_59, sym_TCons_2))
                                {
                                  l_59 = ATgetArgument(k_59, 0);
                                  m_59 = ATgetArgument(k_59, 1);
                                  o_57 :
                                  if(match_cons(m_59, sym_TCons_2))
                                    {
                                      n_59 = ATgetArgument(m_59, 0);
                                      o_59 = ATgetArgument(m_59, 1);
                                      p_57 :
                                      if(match_cons(o_59, sym_TCons_2))
                                        {
                                          p_59 = ATgetArgument(o_59, 0);
                                          q_59 = ATgetArgument(o_59, 1);
                                          q_57 :
                                          if(match_cons(q_59, sym_TCons_2))
                                            {
                                              r_59 = ATgetArgument(q_59, 0);
                                              s_59 = ATgetArgument(q_59, 1);
                                              r_57 :
                                              if(match_cons(s_59, sym_TNil_0))
                                                {
                                                  ATerm z_59 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_59), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  z_59 = t;
                                                  t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(t_58), (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue))), not_null(j_59), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_59), not_null(z_59)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(t_58), not_null(n_59)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_59)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(t_58), not_null(r_59)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(h_59))))));
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
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
              if(match_string(w_58, "T"))
                {
                  p_58 :
                  if(match_cons(x_58, sym_TCons_2))
                    {
                      y_58 = ATgetArgument(x_58, 0);
                      z_58 = ATgetArgument(x_58, 1);
                      q_58 :
                      if(match_cons(z_58, sym_TNil_0))
                        {
                          r_58 :
                          if(match_int(y_58, 0))
                            {
                              ATerm w_10 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm c_60 = NULL;
                                  t = new_0(t);
                                  c_60 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(t_58), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_60), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(t_58), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_60)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(t_58), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_60)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Id_0)))));
                                  PopChoice();
                                }
                              else
                                {
                                  t = w_10;
                                  t = q_61(t);
                                }
                            }
                          else
                            t = q_61(t);
                        }
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
  ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL;
  o_62 = t;
  c_62 :
  if(match_cons(o_62, sym_TCons_2))
    {
      p_62 = ATgetArgument(o_62, 0);
      w_62 = ATgetArgument(o_62, 1);
      d_62 :
      if(match_cons(p_62, sym_TCons_2))
        {
          q_62 = ATgetArgument(p_62, 0);
          t_62 = ATgetArgument(p_62, 1);
          e_62 :
          if(match_cons(q_62, sym_Mod_2))
            {
              r_62 = ATgetArgument(q_62, 0);
              s_62 = ATgetArgument(q_62, 1);
              f_62 :
              if(match_cons(t_62, sym_TCons_2))
                {
                  u_62 = ATgetArgument(t_62, 0);
                  v_62 = ATgetArgument(t_62, 1);
                  g_62 :
                  if(match_cons(v_62, sym_TNil_0))
                    {
                      h_62 :
                      if(match_cons(w_62, sym_TCons_2))
                        {
                          x_62 = ATgetArgument(w_62, 0);
                          y_62 = ATgetArgument(w_62, 1);
                          i_62 :
                          if(match_cons(y_62, sym_TNil_0))
                            {
                              ATerm d_63 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_62), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_62), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_62), (ATerm) ATmakeAppl(sym_TNil_0))));
                              t = DefineCongruence_0(t);
                              t = desugar_0(t);
                              d_63 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_62), (ATerm) ATmakeAppl(sym_TNil_0)));
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm x_10 = t;
  if(PushChoice()==0)
    {
      t = CongruenceDef_0(t);
      PopChoice();
    }
  else
    {
      t = x_10;
      {
        ATerm y_10 = t;
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
            t = y_10;
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
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,g_64 = NULL;
  s_63 = t;
  l_63 :
  if(match_cons(s_63, sym_TCons_2))
    {
      t_63 = ATgetArgument(s_63, 0);
      w_63 = ATgetArgument(s_63, 1);
      m_63 :
      if(match_cons(t_63, sym_Cons_2))
        {
          u_63 = ATgetArgument(t_63, 0);
          v_63 = ATgetArgument(t_63, 1);
          n_63 :
          if(match_cons(w_63, sym_TCons_2))
            {
              x_63 = ATgetArgument(w_63, 0);
              y_63 = ATgetArgument(w_63, 1);
              o_63 :
              if(match_cons(y_63, sym_TCons_2))
                {
                  z_63 = ATgetArgument(y_63, 0);
                  a_64 = ATgetArgument(y_63, 1);
                  p_63 :
                  if(match_cons(a_64, sym_TCons_2))
                    {
                      b_64 = ATgetArgument(a_64, 0);
                      c_64 = ATgetArgument(a_64, 1);
                      q_63 :
                      if(match_cons(c_64, sym_TCons_2))
                        {
                          d_64 = ATgetArgument(c_64, 0);
                          g_64 = ATgetArgument(c_64, 1);
                          r_63 :
                          if(match_cons(g_64, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_64), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_63), not_null(d_64)), (ATerm) ATmakeAppl(sym_TNil_0))))));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_64 (ATerm))
{
  ATerm q_64 (ATerm t)
  {
    ATerm z_10 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, q_64);
        PopChoice();
      }
    else
      {
        t = z_10;
        t = Nil_0(t);
        t = s_64(t);
      }
    return(t);
  }
  t = q_64(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL;
  x_64 = t;
  u_64 :
  if(match_cons(x_64, sym_TCons_2))
    {
      y_64 = ATgetArgument(x_64, 0);
      z_64 = ATgetArgument(x_64, 1);
      v_64 :
      if(match_cons(z_64, sym_TCons_2))
        {
          a_65 = ATgetArgument(z_64, 0);
          b_65 = ATgetArgument(z_64, 1);
          w_64 :
          if(match_cons(b_65, sym_TNil_0))
            {
              t = not_null(y_64);
              {
                ATerm i_3 (ATerm t)
                {
                  t = not_null(a_65);
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
ATerm UfShift_0 (ATerm t)
{
  ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL;
  k_65 = t;
  g_65 :
  if(match_cons(k_65, sym_TCons_2))
    {
      l_65 = ATgetArgument(k_65, 0);
      m_65 = ATgetArgument(k_65, 1);
      h_65 :
      if(match_cons(m_65, sym_TCons_2))
        {
          n_65 = ATgetArgument(m_65, 0);
          r_65 = ATgetArgument(m_65, 1);
          i_65 :
          if(match_cons(n_65, sym_Cons_2))
            {
              p_65 = ATgetArgument(n_65, 0);
              q_65 = ATgetArgument(n_65, 1);
              j_65 :
              if(match_cons(r_65, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_65), not_null(l_65)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_65), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm a_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL;
  a_66 = t;
  x_65 :
  if(match_cons(a_66, sym_TCons_2))
    {
      c_66 = ATgetArgument(a_66, 0);
      d_66 = ATgetArgument(a_66, 1);
      y_65 :
      if(match_cons(d_66, sym_TCons_2))
        {
          e_66 = ATgetArgument(d_66, 0);
          f_66 = ATgetArgument(d_66, 1);
          z_65 :
          if(match_cons(f_66, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_66), not_null(e_66));
          else
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
  ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL;
  p_66 = t;
  k_66 :
  if(match_cons(p_66, sym_TCons_2))
    {
      q_66 = ATgetArgument(p_66, 0);
      t_66 = ATgetArgument(p_66, 1);
      l_66 :
      if(match_cons(q_66, sym_Cons_2))
        {
          r_66 = ATgetArgument(q_66, 0);
          s_66 = ATgetArgument(q_66, 1);
          m_66 :
          if(match_cons(t_66, sym_TCons_2))
            {
              u_66 = ATgetArgument(t_66, 0);
              x_66 = ATgetArgument(t_66, 1);
              n_66 :
              if(match_cons(u_66, sym_Cons_2))
                {
                  v_66 = ATgetArgument(u_66, 0);
                  w_66 = ATgetArgument(u_66, 1);
                  o_66 :
                  if(match_cons(x_66, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(r_66), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_66), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(s_66), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_66), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL;
  j_67 = t;
  e_67 :
  if(match_cons(j_67, sym_TCons_2))
    {
      k_67 = ATgetArgument(j_67, 0);
      l_67 = ATgetArgument(j_67, 1);
      f_67 :
      if(match_cons(k_67, sym_Nil_0))
        {
          g_67 :
          if(match_cons(l_67, sym_TCons_2))
            {
              m_67 = ATgetArgument(l_67, 0);
              n_67 = ATgetArgument(l_67, 1);
              h_67 :
              if(match_cons(m_67, sym_Nil_0))
                {
                  i_67 :
                  if(match_cons(n_67, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm m_56 (ATerm), ATerm n_56 (ATerm), ATerm o_56 (ATerm), ATerm p_56 (ATerm))
{
  ATerm p_67 (ATerm t)
  {
    ATerm a_11 = t;
    if(PushChoice()==0)
      {
        t = m_56(t);
        PopChoice();
      }
    else
      {
        t = a_11;
        t = n_56(t);
        {
          ATerm j_3 (ATerm t)
          {
            t = TCons_2(t, p_67, TNil_0);
            return(t);
          }
          t = TCons_2(t, p_56, j_3);
          t = o_56(t);
        }
      }
    return(t);
  }
  t = p_67(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm r_56 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, r_56);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL;
  g_68 = t;
  c_68 :
  if(match_cons(g_68, sym_Cons_2))
    {
      h_68 = ATgetArgument(g_68, 0);
      m_68 = ATgetArgument(g_68, 1);
      d_68 :
      if(match_cons(h_68, sym_TCons_2))
        {
          i_68 = ATgetArgument(h_68, 0);
          j_68 = ATgetArgument(h_68, 1);
          e_68 :
          if(match_cons(j_68, sym_TCons_2))
            {
              k_68 = ATgetArgument(j_68, 0);
              l_68 = ATgetArgument(j_68, 1);
              f_68 :
              if(match_cons(l_68, sym_TNil_0))
                {
                  ATerm r_68 = NULL,t_68 = NULL,c_69 = NULL,k_69 = NULL;
                  ATerm b_11;
                  b_11 = t;
                  {
                    ATerm u_68 = NULL;
                    ATerm w_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL;
                    t = not_null(k_68);
                    u_68 = t;
                    t = SSL_explode_term(not_null(u_68));
                    w_68 = t;
                    t_67 :
                    if(match_cons(w_68, sym_TCons_2))
                      {
                        y_68 = ATgetArgument(w_68, 0);
                        z_68 = ATgetArgument(w_68, 1);
                        u_67 :
                        if(match_cons(z_68, sym_TCons_2))
                          {
                            a_69 = ATgetArgument(z_68, 0);
                            b_69 = ATgetArgument(z_68, 1);
                            v_67 :
                            if(match_cons(b_69, sym_TNil_0))
                              {
                                if(r_68 != NULL && r_68 != y_68)
                                  _fail(y_68);
                                else
                                  r_68 = y_68;
                                if(t_68 != NULL && t_68 != a_69)
                                  _fail(a_69);
                                else
                                  t_68 = a_69;
                              }
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
                    ATerm d_69 = NULL;
                    ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL;
                    t = not_null(i_68);
                    d_69 = t;
                    t = SSL_explode_term(not_null(d_69));
                    f_69 = t;
                    y_67 :
                    if(match_cons(f_69, sym_TCons_2))
                      {
                        g_69 = ATgetArgument(f_69, 0);
                        h_69 = ATgetArgument(f_69, 1);
                        z_67 :
                        if(match_cons(h_69, sym_TCons_2))
                          {
                            i_69 = ATgetArgument(h_69, 0);
                            j_69 = ATgetArgument(h_69, 1);
                            a_68 :
                            if(match_cons(j_69, sym_TNil_0))
                              {
                                if(r_68 != NULL && r_68 != g_69)
                                  _fail(g_69);
                                else
                                  r_68 = g_69;
                                if(c_69 != NULL && c_69 != i_69)
                                  _fail(i_69);
                                else
                                  c_69 = i_69;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_68), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    k_69 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_68), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL;
  x_69 = t;
  t_69 :
  if(match_cons(x_69, sym_Cons_2))
    {
      y_69 = ATgetArgument(x_69, 0);
      d_70 = ATgetArgument(x_69, 1);
      u_69 :
      if(match_cons(y_69, sym_TCons_2))
        {
          z_69 = ATgetArgument(y_69, 0);
          a_70 = ATgetArgument(y_69, 1);
          v_69 :
          if(match_cons(a_70, sym_TCons_2))
            {
              b_70 = ATgetArgument(a_70, 0);
              c_70 = ATgetArgument(a_70, 1);
              w_69 :
              if(match_cons(c_70, sym_TNil_0))
                {
                  ATerm j_70 = NULL;
                  if(z_69 != NULL && z_69 != b_70)
                    _fail(b_70);
                  else
                    z_69 = b_70;
                  if(j_70 != NULL && j_70 != d_70)
                    _fail(d_70);
                  else
                    j_70 = d_70;
                  t = not_null(j_70);
                }
              else
                _fail(t);
            }
          else
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
  ATerm c_11 = t;
  if(PushChoice()==0)
    {
      ATerm k_3 (ATerm t)
      {
        ATerm q_70 = NULL;
        q_70 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_70), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm u_3 (ATerm t)
      {
        ATerm w_3 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, w_3);
        return(t);
      }
      ATerm v_3 (ATerm t)
      {
        ATerm d_11 = t;
        if(PushChoice()==0)
          {
            ATerm f_4 (ATerm t)
            {
              ATerm g_4 (ATerm t)
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
              t = TCons_2(t, g_4, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, f_4);
            PopChoice();
          }
        else
          {
            t = d_11;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, k_3, u_3, v_3);
      PopChoice();
    }
  else
    {
      t = c_11;
      {
        ATerm s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,x_70 = NULL;
        s_70 = t;
        n_70 :
        if(match_cons(s_70, sym_TCons_2))
          {
            t_70 = ATgetArgument(s_70, 0);
            u_70 = ATgetArgument(s_70, 1);
            o_70 :
            if(match_cons(u_70, sym_TCons_2))
              {
                v_70 = ATgetArgument(u_70, 0);
                x_70 = ATgetArgument(u_70, 1);
                p_70 :
                if(match_cons(x_70, sym_TNil_0))
                  {
                    t = not_null(t_70);
                    {
                      ATerm c_71 (ATerm t)
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
                                  ATerm h_4 (ATerm t)
                                  {
                                    t = not_null(v_70);
                                    return(t);
                                  }
                                  t = HdMember_1(t, h_4);
                                  t = c_71(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = k_11;
                                  t = Cons_2(t, _id, c_71);
                                }
                            }
                          }
                        return(t);
                      }
                      t = c_71(t);
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
ATerm GnNextChangeGraph_3 (ATerm t, ATerm y_43 (ATerm), ATerm z_43 (ATerm), ATerm a_44 (ATerm))
{
  ATerm u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL;
  u_71 = t;
  n_71 :
  if(match_cons(u_71, sym_TCons_2))
    {
      v_71 = ATgetArgument(u_71, 0);
      y_71 = ATgetArgument(u_71, 1);
      o_71 :
      if(match_cons(v_71, sym_Cons_2))
        {
          w_71 = ATgetArgument(v_71, 0);
          x_71 = ATgetArgument(v_71, 1);
          p_71 :
          if(match_cons(y_71, sym_TCons_2))
            {
              z_71 = ATgetArgument(y_71, 0);
              a_72 = ATgetArgument(y_71, 1);
              q_71 :
              if(match_cons(a_72, sym_TCons_2))
                {
                  b_72 = ATgetArgument(a_72, 0);
                  c_72 = ATgetArgument(a_72, 1);
                  r_71 :
                  if(match_cons(c_72, sym_TCons_2))
                    {
                      d_72 = ATgetArgument(c_72, 0);
                      e_72 = ATgetArgument(c_72, 1);
                      s_71 :
                      if(match_cons(e_72, sym_TCons_2))
                        {
                          f_72 = ATgetArgument(e_72, 0);
                          g_72 = ATgetArgument(e_72, 1);
                          t_71 :
                          if(match_cons(g_72, sym_TNil_0))
                            {
                              ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_72), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = y_43(t);
                              n_72 = t;
                              k_71 :
                              if(match_cons(n_72, sym_TCons_2))
                                {
                                  o_72 = ATgetArgument(n_72, 0);
                                  p_72 = ATgetArgument(n_72, 1);
                                  l_71 :
                                  if(match_cons(p_72, sym_TCons_2))
                                    {
                                      q_72 = ATgetArgument(p_72, 0);
                                      r_72 = ATgetArgument(p_72, 1);
                                      m_71 :
                                      if(match_cons(r_72, sym_TNil_0))
                                        {
                                          ATerm u_72 = NULL;
                                          t = not_null(o_72);
                                          {
                                            ATerm w_72 = NULL;
                                            t = z_43(t);
                                            u_72 = t;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            {
                                              ATerm y_72 = NULL;
                                              t = diff_0(t);
                                              w_72 = t;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              {
                                                ATerm a_73 = NULL;
                                                t = conc_0(t);
                                                y_72 = t;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                {
                                                  ATerm c_73 = NULL;
                                                  t = conc_0(t);
                                                  a_73 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_72), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                  t = a_44(t);
                                                  c_73 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_72), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
  ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL;
  t_73 = t;
  m_73 :
  if(match_cons(t_73, sym_TCons_2))
    {
      u_73 = ATgetArgument(t_73, 0);
      v_73 = ATgetArgument(t_73, 1);
      n_73 :
      if(match_cons(u_73, sym_Nil_0))
        {
          o_73 :
          if(match_cons(v_73, sym_TCons_2))
            {
              w_73 = ATgetArgument(v_73, 0);
              x_73 = ATgetArgument(v_73, 1);
              p_73 :
              if(match_cons(x_73, sym_TCons_2))
                {
                  y_73 = ATgetArgument(x_73, 0);
                  z_73 = ATgetArgument(x_73, 1);
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
                          if(match_cons(d_74, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL;
  o_74 = t;
  k_74 :
  if(match_cons(o_74, sym_TCons_2))
    {
      p_74 = ATgetArgument(o_74, 0);
      q_74 = ATgetArgument(o_74, 1);
      l_74 :
      if(match_cons(q_74, sym_TCons_2))
        {
          r_74 = ATgetArgument(q_74, 0);
          s_74 = ATgetArgument(q_74, 1);
          m_74 :
          if(match_cons(s_74, sym_TCons_2))
            {
              t_74 = ATgetArgument(s_74, 0);
              u_74 = ATgetArgument(s_74, 1);
              n_74 :
              if(match_cons(u_74, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_74), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))))));
              else
                _fail(t);
            }
          else
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
  ATerm z_74 (ATerm t)
  {
    ATerm n_11 = t;
    if(PushChoice()==0)
      {
        t = d_52(t);
        PopChoice();
      }
    else
      {
        t = n_11;
        t = e_52(t);
        t = z_74(t);
      }
    return(t);
  }
  t = z_74(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm g_52 (ATerm), ATerm h_52 (ATerm), ATerm i_52 (ATerm))
{
  t = g_52(t);
  t = while_not_2(t, h_52, i_52);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm h_44 (ATerm), ATerm i_44 (ATerm), ATerm j_44 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    ATerm p_11 = t;
    if(PushChoice()==0)
      {
        t = GnNextChangeGraph_3(t, h_44, i_44, j_44);
        PopChoice();
      }
    else
      {
        t = p_11;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, m_4);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL,l_75 = NULL;
    f_75 = t;
    b_75 :
    if(match_cons(f_75, sym_TCons_2))
      {
        g_75 = ATgetArgument(f_75, 0);
        h_75 = ATgetArgument(f_75, 1);
        c_75 :
        if(match_cons(h_75, sym_TCons_2))
          {
            i_75 = ATgetArgument(h_75, 0);
            j_75 = ATgetArgument(h_75, 1);
            d_75 :
            if(match_cons(j_75, sym_TCons_2))
              {
                k_75 = ATgetArgument(j_75, 0);
                l_75 = ATgetArgument(j_75, 1);
                e_75 :
                if(match_cons(l_75, sym_TNil_0))
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_75), not_null(k_75));
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, svars_arity_0, n_4);
  t = FilterNonMissingDefs_0(t);
  {
    ATerm q_11 = t;
    if(PushChoice()==0)
      {
        t = NoMissingDefs_0(t);
        PopChoice();
      }
    else
      {
        t = q_11;
        t = MissingDefs_0(t);
        t = (ATerm) ATmakeInt(1);
        t = exit_0(t);
      }
  }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL;
  t_75 = t;
  q_75 :
  if(match_cons(t_75, sym_TCons_2))
    {
      u_75 = ATgetArgument(t_75, 0);
      v_75 = ATgetArgument(t_75, 1);
      r_75 :
      if(match_cons(v_75, sym_TCons_2))
        {
          w_75 = ATgetArgument(v_75, 0);
          x_75 = ATgetArgument(v_75, 1);
          s_75 :
          if(match_cons(x_75, sym_TNil_0))
            {
              ATerm r_11 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(u_75), not_null(w_75));
                  PopChoice();
                }
              else
                {
                  t = r_11;
                  t = SSL_addr(not_null(u_75), not_null(w_75));
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
  ATerm o_4 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, o_4, add_0, p_4);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm q_49 (ATerm))
{
  ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL;
  e_76 = t;
  d_76 :
  if(match_cons(e_76, sym_Cons_2))
    {
      f_76 = ATgetArgument(e_76, 0);
      g_76 = ATgetArgument(e_76, 1);
      t = q_49(t);
      {
        ATerm q_4 (ATerm t)
        {
          ATerm j_76 = NULL;
          j_76 = t;
          if(f_76 != NULL && f_76 != j_76)
            _fail(j_76);
          else
            f_76 = j_76;
          return(t);
        }
        t = fetch_1(t, q_4);
        t = not_null(g_76);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL;
  q_76 = t;
  n_76 :
  if(match_cons(q_76, sym_TCons_2))
    {
      r_76 = ATgetArgument(q_76, 0);
      s_76 = ATgetArgument(q_76, 1);
      o_76 :
      if(match_cons(s_76, sym_TCons_2))
        {
          t_76 = ATgetArgument(s_76, 0);
          u_76 = ATgetArgument(s_76, 1);
          p_76 :
          if(match_cons(u_76, sym_TNil_0))
            {
              t = not_null(r_76);
              {
                ATerm y_76 (ATerm t)
                {
                  ATerm s_11 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(t_76);
                      PopChoice();
                    }
                  else
                    {
                      t = s_11;
                      {
                        ATerm t_11 = t;
                        if(PushChoice()==0)
                          {
                            ATerm r_4 (ATerm t)
                            {
                              t = not_null(t_76);
                              return(t);
                            }
                            t = HdMember_1(t, r_4);
                            t = y_76(t);
                            PopChoice();
                          }
                        else
                          {
                            t = t_11;
                            t = Cons_2(t, _id, y_76);
                          }
                      }
                    }
                  return(t);
                }
                t = y_76(t);
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
ATerm foldr_3 (ATerm t, ATerm r_48 (ATerm), ATerm s_48 (ATerm), ATerm t_48 (ATerm))
{
  ATerm y_11 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = r_48(t);
      PopChoice();
    }
  else
    {
      t = y_11;
      {
        ATerm d_77 = NULL,e_77 = NULL,f_77 = NULL;
        d_77 = t;
        c_77 :
        if(match_cons(d_77, sym_Cons_2))
          {
            e_77 = ATgetArgument(d_77, 0);
            f_77 = ATgetArgument(d_77, 1);
            {
              ATerm i_77 = NULL;
              t = not_null(e_77);
              {
                ATerm k_77 = NULL;
                t = t_48(t);
                i_77 = t;
                t = not_null(f_77);
                t = foldr_3(t, r_48, s_48, t_48);
                k_77 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_77), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = s_48(t);
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
  ATerm v_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    ATerm s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL;
    s_77 = t;
    r_77 :
    if(match_cons(s_77, sym_SDef_3))
      {
        t_77 = ATgetArgument(s_77, 0);
        u_77 = ATgetArgument(s_77, 1);
        v_77 = ATgetArgument(s_77, 2);
        {
          ATerm y_77 = NULL;
          t = not_null(u_77);
          t = length_0(t);
          y_77 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(t_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_77), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0));
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = foldr_3(t, v_4, union_0, b_5);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm e_78 = NULL;
  ATerm g_78 = NULL;
  e_78 = t;
  t = definition_names_0(t);
  g_78 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_78), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = extract_needed_defs_0(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm m_41 (ATerm))
{
  ATerm n_78 = NULL,o_78 = NULL;
  n_78 = t;
  m_78 :
  if(match_cons(n_78, sym_Strategies_1))
    {
      o_78 = ATgetArgument(n_78, 0);
      {
        ATerm q_78 = NULL;
        t = not_null(o_78);
        t = m_41(t);
        q_78 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(q_78));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_43 (ATerm), ATerm s_43 (ATerm))
{
  ATerm y_78 = NULL,z_78 = NULL,a_79 = NULL;
  y_78 = t;
  x_78 :
  if(match_cons(y_78, sym_Cons_2))
    {
      z_78 = ATgetArgument(y_78, 0);
      a_79 = ATgetArgument(y_78, 1);
      {
        ATerm d_79 = NULL;
        t = not_null(z_78);
        {
          ATerm f_79 = NULL;
          t = r_43(t);
          d_79 = t;
          t = not_null(a_79);
          t = s_43(t);
          f_79 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_79), not_null(f_79));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm o_41 (ATerm))
{
  ATerm n_79 = NULL,o_79 = NULL;
  n_79 = t;
  m_79 :
  if(match_cons(n_79, sym_Specification_1))
    {
      o_79 = ATgetArgument(n_79, 0);
      {
        ATerm q_79 = NULL;
        t = not_null(o_79);
        t = o_41(t);
        q_79 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(q_79));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm v_79 = NULL;
  v_79 = t;
  u_79 :
  if(!(match_cons(v_79, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm n_43 (ATerm), ATerm o_43 (ATerm))
{
  ATerm a_80 = NULL,b_80 = NULL,c_80 = NULL;
  a_80 = t;
  z_79 :
  if(match_cons(a_80, sym_TCons_2))
    {
      b_80 = ATgetArgument(a_80, 0);
      c_80 = ATgetArgument(a_80, 1);
      {
        ATerm f_80 = NULL;
        t = not_null(b_80);
        {
          ATerm h_80 = NULL;
          t = n_43(t);
          f_80 = t;
          t = not_null(c_80);
          t = o_43(t);
          h_80 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_80), not_null(h_80));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm o_80 = NULL;
  ATerm z_11;
  z_11 = t;
  {
    ATerm c_5 (ATerm t)
    {
      ATerm p_80 = NULL,q_80 = NULL;
      p_80 = t;
      n_80 :
      if(match_cons(p_80, sym_Program_1))
        {
          q_80 = ATgetArgument(p_80, 0);
          if(o_80 != NULL && o_80 != q_80)
            _fail(q_80);
          else
            o_80 = q_80;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, c_5);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_80), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm exit_0 (ATerm t)
{
  ATerm t_80 = NULL;
  t_80 = t;
  t = SSL_exit(not_null(t_80));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm a_81 = NULL,b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL;
  a_81 = t;
  x_80 :
  if(match_cons(a_81, sym_TCons_2))
    {
      b_81 = ATgetArgument(a_81, 0);
      c_81 = ATgetArgument(a_81, 1);
      y_80 :
      if(match_cons(c_81, sym_TCons_2))
        {
          d_81 = ATgetArgument(c_81, 0);
          e_81 = ATgetArgument(c_81, 1);
          z_80 :
          if(match_cons(e_81, sym_TNil_0))
            {
              ATerm a_12;
              a_12 = t;
              t = SSL_printnl(not_null(b_81), not_null(d_81));
              t = a_12;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm u_58 (ATerm))
{
  ATerm b_12 = t;
  if(PushChoice()==0)
    {
      t = u_58(t);
      PopChoice();
    }
  else
    t = b_12;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm n_81 = NULL,o_81 = NULL;
  ATerm d_5 (ATerm t)
  {
    ATerm h_5 (ATerm t)
    {
      ATerm c_12 = t;
      if(PushChoice()==0)
        {
          ATerm n_5 (ATerm t)
          {
            ATerm p_81 = NULL;
            p_81 = t;
            i_81 :
            if(!(match_cons(p_81, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, n_5);
          PopChoice();
          _fail(t);
        }
      else
        t = c_12;
      return(t);
    }
    ATerm i_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, h_5, i_5);
    {
      ATerm o_5 (ATerm t)
      {
        ATerm q_5 (ATerm t)
        {
          ATerm q_81 = NULL,r_81 = NULL;
          q_81 = t;
          k_81 :
          if(match_cons(q_81, sym_Runtime_1))
            {
              r_81 = ATgetArgument(q_81, 0);
              if(o_81 != NULL && o_81 != r_81)
                _fail(r_81);
              else
                o_81 = r_81;
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
      {
        ATerm r_5 (ATerm t)
        {
          ATerm t_5 (ATerm t)
          {
            ATerm s_81 = NULL,t_81 = NULL;
            s_81 = t;
            m_81 :
            if(match_cons(s_81, sym_Program_1))
              {
                t_81 = ATgetArgument(s_81, 0);
                if(n_81 != NULL && n_81 != t_81)
                  _fail(t_81);
                else
                  n_81 = t_81;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, t_5);
          return(t);
        }
        ATerm s_5 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, r_5, s_5);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_81), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_81), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
            t = SSL_WriteToTextFile(not_null(b_82), not_null(d_82));
          else
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
  ATerm n_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL,r_82 = NULL;
  n_82 = t;
  j_82 :
  if(match_cons(n_82, sym_TCons_2))
    {
      o_82 = ATgetArgument(n_82, 0);
      p_82 = ATgetArgument(n_82, 1);
      k_82 :
      if(match_cons(p_82, sym_TCons_2))
        {
          q_82 = ATgetArgument(p_82, 0);
          r_82 = ATgetArgument(p_82, 1);
          m_82 :
          if(match_cons(r_82, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(o_82), not_null(q_82));
          else
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
  ATerm a_83 = NULL;
  ATerm h_12;
  h_12 = t;
  {
    ATerm u_5 (ATerm t)
    {
      ATerm i_12 = t;
      if(PushChoice()==0)
        {
          ATerm w_5 (ATerm t)
          {
            ATerm b_83 = NULL,c_83 = NULL;
            b_83 = t;
            w_82 :
            if(match_cons(b_83, sym_Output_1))
              {
                c_83 = ATgetArgument(b_83, 0);
                if(a_83 != NULL && a_83 != c_83)
                  _fail(c_83);
                else
                  a_83 = c_83;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, w_5);
          PopChoice();
        }
      else
        {
          t = i_12;
          {
            ATerm d_83 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            d_83 = t;
            if(a_83 != NULL && a_83 != d_83)
              _fail(d_83);
            else
              a_83 = d_83;
          }
        }
      return(t);
    }
    ATerm v_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, u_5, v_5);
  }
  t = h_12;
  {
    ATerm x_5 (ATerm t)
    {
      ATerm y_5 (ATerm t)
      {
        ATerm z_5 (ATerm t)
        {
          t = not_null(a_83);
          return(t);
        }
        t = split_2(t, z_5, _id);
        return(t);
      }
      t = TCons_2(t, y_5, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, x_5);
    {
      ATerm k_12 = t;
      if(PushChoice()==0)
        {
          ATerm a_6 (ATerm t)
          {
            ATerm c_6 (ATerm t)
            {
              ATerm e_83 = NULL;
              e_83 = t;
              z_82 :
              if(!(match_cons(e_83, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, c_6);
            return(t);
          }
          ATerm b_6 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, a_6, b_6);
          PopChoice();
        }
      else
        {
          t = k_12;
          {
            ATerm d_6 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, d_6);
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
ATerm apply_strategy_1 (ATerm t, ATerm x_46 (ATerm))
{
  ATerm m_83 = NULL,o_83 = NULL,p_83 = NULL,q_83 = NULL,r_83 = NULL,s_83 = NULL;
  ATerm l_12;
  l_12 = t;
  t = dtime_0(t);
  t = l_12;
  t = x_46(t);
  {
    ATerm m_12;
    m_12 = t;
    {
      ATerm n_83 = NULL;
      t = dtime_0(t);
      n_83 = t;
      if(m_83 != NULL && m_83 != n_83)
        _fail(n_83);
      else
        m_83 = n_83;
    }
    t = m_12;
    o_83 = t;
    j_83 :
    if(match_cons(o_83, sym_TCons_2))
      {
        p_83 = ATgetArgument(o_83, 0);
        q_83 = ATgetArgument(o_83, 1);
        k_83 :
        if(match_cons(q_83, sym_TCons_2))
          {
            r_83 = ATgetArgument(q_83, 0);
            s_83 = ATgetArgument(q_83, 1);
            l_83 :
            if(match_cons(s_83, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(m_83)), not_null(p_83)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_83), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm y_83 = NULL;
  y_83 = t;
  t = SSL_ReadFromFile(not_null(y_83));
  return(t);
}
ATerm split_2 (ATerm t, ATerm c_58 (ATerm), ATerm d_58 (ATerm))
{
  ATerm e_84 = NULL;
  ATerm g_84 = NULL;
  e_84 = t;
  {
    ATerm i_84 = NULL;
    t = c_58(t);
    g_84 = t;
    t = not_null(e_84);
    t = d_58(t);
    i_84 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_84), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_84), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm q_84 = NULL;
  ATerm n_12;
  n_12 = t;
  {
    ATerm o_12 = t;
    if(PushChoice()==0)
      {
        ATerm e_6 (ATerm t)
        {
          ATerm r_84 = NULL,s_84 = NULL;
          r_84 = t;
          o_84 :
          if(match_cons(r_84, sym_Input_1))
            {
              s_84 = ATgetArgument(r_84, 0);
              if(q_84 != NULL && q_84 != s_84)
                _fail(s_84);
              else
                q_84 = s_84;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, e_6);
        PopChoice();
      }
    else
      {
        t = o_12;
        {
          ATerm t_84 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          t_84 = t;
          if(q_84 != NULL && q_84 != t_84)
            _fail(t_84);
          else
            q_84 = t_84;
        }
      }
  }
  t = n_12;
  {
    ATerm f_6 (ATerm t)
    {
      t = not_null(q_84);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, f_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_84 = NULL;
  x_84 = t;
  w_84 :
  if(!(match_cons(x_84, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm w_38 (ATerm))
{
  ATerm b_85 = NULL,c_85 = NULL;
  b_85 = t;
  a_85 :
  if(match_cons(b_85, sym_Undefined_1))
    {
      c_85 = ATgetArgument(b_85, 0);
      {
        ATerm e_85 = NULL;
        t = not_null(c_85);
        t = w_38(t);
        e_85 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_85));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_85 = NULL;
  j_85 = t;
  i_85 :
  if(!(match_cons(j_85, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm m_64 (ATerm))
{
  ATerm k_85 (ATerm t)
  {
    ATerm p_12 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, m_64, _id);
        PopChoice();
      }
    else
      {
        t = p_12;
        t = Cons_2(t, _id, k_85);
      }
    return(t);
  }
  t = k_85(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_46 (ATerm))
{
  t = fetch_1(t, b_46);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_46 (ATerm))
{
  ATerm g_6 (ATerm t)
  {
    ATerm s_12 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = s_12;
        {
          ATerm t_12 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = t_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, g_6);
  t = w_46(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_85 = NULL,r_85 = NULL,s_85 = NULL;
  ATerm a_13;
  a_13 = t;
  {
    ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL,w_85 = NULL,x_85 = NULL,y_85 = NULL,z_85 = NULL;
    t_85 = t;
    m_85 :
    if(match_cons(t_85, sym_TCons_2))
      {
        u_85 = ATgetArgument(t_85, 0);
        v_85 = ATgetArgument(t_85, 1);
        n_85 :
        if(match_cons(v_85, sym_TCons_2))
          {
            w_85 = ATgetArgument(v_85, 0);
            x_85 = ATgetArgument(v_85, 1);
            o_85 :
            if(match_cons(x_85, sym_TCons_2))
              {
                y_85 = ATgetArgument(x_85, 0);
                z_85 = ATgetArgument(x_85, 1);
                p_85 :
                if(match_cons(z_85, sym_TNil_0))
                  {
                    if(q_85 != NULL && q_85 != u_85)
                      _fail(u_85);
                    else
                      q_85 = u_85;
                    if(r_85 != NULL && r_85 != w_85)
                      _fail(w_85);
                    else
                      r_85 = w_85;
                    if(s_85 != NULL && s_85 != y_85)
                      _fail(y_85);
                    else
                      s_85 = y_85;
                    t = SSL_table_put(not_null(q_85), not_null(r_85), not_null(s_85));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = a_13;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_86 = NULL;
  c_86 = t;
  t = SSL_table_create(not_null(c_86));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_86 = NULL;
  g_86 = t;
  {
    ATerm b_13;
    b_13 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_86), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = b_13;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm u_45 (ATerm), ATerm v_45 (ATerm))
{
  ATerm m_86 = NULL,n_86 = NULL,o_86 = NULL;
  m_86 = t;
  l_86 :
  if(match_cons(m_86, sym_Cons_2))
    {
      n_86 = ATgetArgument(m_86, 0);
      o_86 = ATgetArgument(m_86, 1);
      {
        ATerm r_86 = NULL;
        t = not_null(n_86);
        t = u_45(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = v_45(t);
        r_86 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_86), not_null(o_86));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm w_45 (ATerm), ATerm x_45 (ATerm))
{
  ATerm z_86 = NULL,a_87 = NULL,b_87 = NULL,c_87 = NULL,d_87 = NULL;
  z_86 = t;
  x_86 :
  if(match_cons(z_86, sym_Cons_2))
    {
      a_87 = ATgetArgument(z_86, 0);
      b_87 = ATgetArgument(z_86, 1);
      y_86 :
      if(match_cons(b_87, sym_Cons_2))
        {
          c_87 = ATgetArgument(b_87, 0);
          d_87 = ATgetArgument(b_87, 1);
          {
            ATerm h_87 = NULL;
            t = not_null(a_87);
            t = w_45(t);
            t = not_null(c_87);
            t = x_45(t);
            h_87 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_87), not_null(d_87));
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
      ATerm i_6 (ATerm t)
      {
        ATerm f_88 = NULL;
        f_88 = t;
        l_87 :
        if(!(match_string(f_88, "-S")))
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
      t = c_13;
      {
        ATerm e_13 = t;
        if(PushChoice()==0)
          {
            ATerm l_6 (ATerm t)
            {
              ATerm g_88 = NULL;
              g_88 = t;
              m_87 :
              if(!(match_string(g_88, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm m_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, l_6, m_6);
            PopChoice();
          }
        else
          {
            t = e_13;
            {
              ATerm i_13 = t;
              if(PushChoice()==0)
                {
                  ATerm n_6 (ATerm t)
                  {
                    ATerm h_88 = NULL;
                    h_88 = t;
                    n_87 :
                    if(!(match_string(h_88, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm o_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, n_6, o_6);
                  PopChoice();
                }
              else
                {
                  t = i_13;
                  {
                    ATerm j_13 = t;
                    if(PushChoice()==0)
                      {
                        ATerm p_6 (ATerm t)
                        {
                          ATerm i_88 = NULL;
                          i_88 = t;
                          o_87 :
                          if(!(match_string(i_88, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm q_6 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, p_6, q_6);
                        PopChoice();
                      }
                    else
                      {
                        t = j_13;
                        {
                          ATerm k_13 = t;
                          if(PushChoice()==0)
                            {
                              ATerm r_6 (ATerm t)
                              {
                                ATerm j_88 = NULL;
                                j_88 = t;
                                p_87 :
                                if(!(match_string(j_88, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm s_6 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, r_6, s_6);
                              PopChoice();
                            }
                          else
                            {
                              t = k_13;
                              {
                                ATerm m_13 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm t_6 (ATerm t)
                                    {
                                      ATerm k_88 = NULL;
                                      k_88 = t;
                                      q_87 :
                                      if(!(match_string(k_88, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm u_6 (ATerm t)
                                    {
                                      ATerm l_88 = NULL;
                                      l_88 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(l_88));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, t_6, u_6);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = m_13;
                                    {
                                      ATerm n_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm x_6 (ATerm t)
                                          {
                                            ATerm n_88 = NULL;
                                            n_88 = t;
                                            s_87 :
                                            if(!(match_string(n_88, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm y_6 (ATerm t)
                                          {
                                            ATerm o_88 = NULL;
                                            o_88 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(o_88));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, x_6, y_6);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = n_13;
                                          {
                                            ATerm p_13 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm z_6 (ATerm t)
                                                {
                                                  ATerm q_88 = NULL;
                                                  q_88 = t;
                                                  u_87 :
                                                  if(!(match_string(q_88, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm a_7 (ATerm t)
                                                {
                                                  ATerm r_88 = NULL;
                                                  r_88 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_88));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, z_6, a_7);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = p_13;
                                                {
                                                  ATerm s_13 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm b_7 (ATerm t)
                                                      {
                                                        ATerm t_88 = NULL;
                                                        t_88 = t;
                                                        w_87 :
                                                        if(!(match_string(t_88, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm c_7 (ATerm t)
                                                      {
                                                        ATerm u_88 = NULL;
                                                        u_88 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_88));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, b_7, c_7);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = s_13;
                                                      {
                                                        ATerm b_14 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm d_7 (ATerm t)
                                                            {
                                                              ATerm w_88 = NULL;
                                                              w_88 = t;
                                                              y_87 :
                                                              if(!(match_string(w_88, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm e_7 (ATerm t)
                                                            {
                                                              ATerm x_88 = NULL;
                                                              x_88 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_88));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, d_7, e_7);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = b_14;
                                                            {
                                                              ATerm c_14 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm f_7 (ATerm t)
                                                                  {
                                                                    ATerm z_88 = NULL;
                                                                    z_88 = t;
                                                                    a_88 :
                                                                    if(!(match_string(z_88, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm k_7 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, f_7, k_7);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = c_14;
                                                                  {
                                                                    ATerm e_14 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm l_7 (ATerm t)
                                                                        {
                                                                          ATerm a_89 = NULL;
                                                                          a_89 = t;
                                                                          b_88 :
                                                                          if(!(match_string(a_89, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm n_7 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, l_7, n_7);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_14;
                                                                        {
                                                                          ATerm o_14 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm p_7 (ATerm t)
                                                                              {
                                                                                ATerm b_89 = NULL;
                                                                                b_89 = t;
                                                                                c_88 :
                                                                                if(!(match_string(b_89, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm q_7 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, p_7, q_7);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = o_14;
                                                                              {
                                                                                ATerm p_14 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm r_7 (ATerm t)
                                                                                    {
                                                                                      ATerm c_89 = NULL;
                                                                                      c_89 = t;
                                                                                      d_88 :
                                                                                      if(!(match_string(c_89, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm s_7 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, r_7, s_7);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = p_14;
                                                                                    {
                                                                                      ATerm t_7 (ATerm t)
                                                                                      {
                                                                                        ATerm d_89 = NULL;
                                                                                        d_89 = t;
                                                                                        e_88 :
                                                                                        if(!(match_string(d_89, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm u_7 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, t_7, u_7);
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
  ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL;
  l_89 = t;
  k_89 :
  if(match_cons(l_89, sym_Cons_2))
    {
      m_89 = ATgetArgument(l_89, 0);
      n_89 = ATgetArgument(l_89, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_89)), not_null(n_89));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_45 (ATerm))
{
  ATerm v_7 (ATerm t)
  {
    ATerm s_89 = NULL;
    s_89 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_89));
    return(t);
  }
  ATerm w_7 (ATerm t)
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
            t = s_45(t);
            t = Cons_2(t, _id, w_7);
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
  t = Cons_2(t, v_7, w_7);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm l_46 (ATerm), ATerm m_46 (ATerm), ATerm n_46 (ATerm))
{
  ATerm x_7 (ATerm t)
  {
    ATerm s_14 = t;
    if(PushChoice()==0)
      {
        t = m_46(t);
        PopChoice();
      }
    else
      {
        t = s_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, x_7);
  t = store_options_0(t);
  {
    ATerm t_14 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, n_46);
        PopChoice();
      }
    else
      {
        t = t_14;
        {
          ATerm u_14 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, l_46);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = u_14;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm g_46 (ATerm), ATerm h_46 (ATerm))
{
  t = iowrap_3(t, g_46, h_46, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm d_46 (ATerm))
{
  ATerm y_7 (ATerm t)
  {
    ATerm z_7 (ATerm t)
    {
      t = TCons_2(t, d_46, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, z_7);
    return(t);
  }
  t = iowrap_2(t, y_7, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm e_8 (ATerm t)
  {
    ATerm f_8 (ATerm t)
    {
      ATerm h_8 (ATerm t)
      {
        ATerm j_8 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
          return(t);
        }
        t = Cons_2(t, j_8, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, h_8);
      return(t);
    }
    t = Specification_1(t, f_8);
    return(t);
  }
  t = iowrap_1(t, e_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_all_0(t);
  return(t);
}
