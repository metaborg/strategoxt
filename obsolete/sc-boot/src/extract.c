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
ATerm filter_1 (ATerm, ATerm v_54 (ATerm));
ATerm FilterNonMissingDefs_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm w_43 (ATerm), ATerm x_43 (ATerm));
ATerm Let_2 (ATerm, ATerm y_43 (ATerm), ATerm z_43 (ATerm));
ATerm sboundin_3 (ATerm, ATerm z_66 (ATerm), ATerm a_67 (ATerm), ATerm b_67 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm f_57 (ATerm), ATerm g_57 (ATerm), ATerm h_57 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm v_56 (ATerm), ATerm w_56 (ATerm));
ATerm diff_1 (ATerm, ATerm a_57 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm f_53 (ATerm), ATerm g_53 (ATerm), ATerm h_53 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm i_53 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm n_55 (ATerm), ATerm o_55 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm c_66 (ATerm), ATerm d_66 (ATerm));
ATerm alltd_1 (ATerm, ATerm c_65 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm e_66 (ATerm), ATerm f_66 (ATerm));
ATerm substitute_1 (ATerm, ATerm g_66 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm NonOverloadedDef_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm p_55 (ATerm), ATerm q_55 (ATerm), ATerm r_55 (ATerm));
ATerm length_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm a_44 (ATerm), ATerm b_44 (ATerm), ATerm c_44 (ATerm));
ATerm partition_1 (ATerm, ATerm d_55 (ATerm));
ATerm OverloadedDef_0 (ATerm);
ATerm Expl_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm n_50 (ATerm), ATerm o_50 (ATerm));
ATerm repeat_1 (ATerm, ATerm q_50 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm x_41 (ATerm), ATerm y_41 (ATerm));
ATerm Con_3 (ATerm, ATerm u_41 (ATerm), ATerm v_41 (ATerm), ATerm w_41 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm a_45 (ATerm), ATerm b_45 (ATerm));
ATerm oncetd_1 (ATerm, ATerm o_64 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm y_62 (ATerm));
ATerm desugar_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm map_1 (ATerm, ATerm h_60 (ATerm));
ATerm Ttl_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm a_60 (ATerm));
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm z_58 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm new_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm f_56 (ATerm));
ATerm add_0 (ATerm);
ATerm MkDistApplication_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm v_60 (ATerm));
ATerm conc_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm u_56 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm r_58 (ATerm), ATerm s_58 (ATerm), ATerm t_58 (ATerm), ATerm u_58 (ATerm));
ATerm zip_1 (ATerm, ATerm w_58 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm u_45 (ATerm), ATerm v_45 (ATerm), ATerm w_45 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm e_51 (ATerm), ATerm f_51 (ATerm));
ATerm for_3 (ATerm, ATerm h_51 (ATerm), ATerm i_51 (ATerm), ATerm j_51 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm d_46 (ATerm), ATerm e_46 (ATerm), ATerm f_46 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm e_43 (ATerm));
ATerm Cons_2 (ATerm, ATerm j_45 (ATerm), ATerm k_45 (ATerm));
ATerm Specification_1 (ATerm, ATerm g_43 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm f_45 (ATerm), ATerm g_45 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_62 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm t_48 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_61 (ATerm), ATerm w_61 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm o_40 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm p_60 (ATerm));
ATerm option_defined_1 (ATerm, ATerm x_47 (ATerm));
ATerm need_help_1 (ATerm, ATerm s_48 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm q_47 (ATerm), ATerm r_47 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm s_47 (ATerm), ATerm t_47 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_47 (ATerm));
ATerm iowrap_3 (ATerm, ATerm h_48 (ATerm), ATerm i_48 (ATerm), ATerm j_48 (ATerm));
ATerm iowrap_2 (ATerm, ATerm c_48 (ATerm), ATerm d_48 (ATerm));
ATerm iowrap_1 (ATerm, ATerm z_47 (ATerm));
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
  ATerm r_8;
  r_8 = t;
  {
    ATerm a_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, a_0, _id);
    t = printnl_0(t);
  }
  t = r_8;
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
                      ATerm s_8 = t;
                      if(PushChoice()==0)
                        {
                          t = MissingDefMod_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = s_8;
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
ATerm filter_1 (ATerm t, ATerm v_54 (ATerm))
{
  ATerm t_8 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = t_8;
      {
        ATerm u_8 = t;
        if(PushChoice()==0)
          {
            ATerm e_0 (ATerm t)
            {
              t = filter_1(t, v_54);
              return(t);
            }
            t = Cons_2(t, v_54, e_0);
            PopChoice();
          }
        else
          {
            t = u_8;
            {
              ATerm j_4 = NULL,k_4 = NULL,l_4 = NULL;
              j_4 = t;
              i_4 :
              if(match_cons(j_4, sym_Cons_2))
                {
                  k_4 = ATgetArgument(j_4, 0);
                  l_4 = ATgetArgument(j_4, 1);
                  t = not_null(l_4);
                  t = filter_1(t, v_54);
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
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL;
  z_4 = t;
  w_4 :
  if(match_cons(z_4, sym_TCons_2))
    {
      a_5 = ATgetArgument(z_4, 0);
      b_5 = ATgetArgument(z_4, 1);
      x_4 :
      if(match_cons(b_5, sym_TCons_2))
        {
          c_5 = ATgetArgument(b_5, 0);
          d_5 = ATgetArgument(b_5, 1);
          y_4 :
          if(match_cons(d_5, sym_TNil_0))
            {
              ATerm p_5 = NULL;
              t = not_null(c_5);
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm v_8 = t;
                  if(PushChoice()==0)
                    {
                      ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL;
                      g_5 = t;
                      s_4 :
                      if(match_cons(g_5, sym_TCons_2))
                        {
                          h_5 = ATgetArgument(g_5, 0);
                          i_5 = ATgetArgument(g_5, 1);
                          t_4 :
                          if(match_cons(i_5, sym_TCons_2))
                            {
                              j_5 = ATgetArgument(i_5, 0);
                              k_5 = ATgetArgument(i_5, 1);
                              u_4 :
                              if(match_cons(k_5, sym_TNil_0))
                                {
                                  t = not_null(a_5);
                                  {
                                    ATerm g_0 (ATerm t)
                                    {
                                      ATerm h_0 (ATerm t)
                                      {
                                        ATerm n_5 = NULL;
                                        n_5 = t;
                                        if(h_5 != NULL && h_5 != n_5)
                                          _fail(n_5);
                                        else
                                          h_5 = n_5;
                                        return(t);
                                      }
                                      ATerm i_0 (ATerm t)
                                      {
                                        ATerm w_8 = t;
                                        if(PushChoice()==0)
                                          {
                                            ATerm o_5 = NULL;
                                            t = length_0(t);
                                            o_5 = t;
                                            if(j_5 != NULL && j_5 != o_5)
                                              _fail(o_5);
                                            else
                                              j_5 = o_5;
                                            PopChoice();
                                          }
                                        else
                                          {
                                            t = w_8;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_5), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                    t = v_8;
                  return(t);
                }
                t = filter_1(t, f_0);
                p_5 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_5), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_5), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm Rec_2 (ATerm t, ATerm w_43 (ATerm), ATerm x_43 (ATerm))
{
  ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
  a_6 = t;
  z_5 :
  if(match_cons(a_6, sym_Rec_2))
    {
      b_6 = ATgetArgument(a_6, 0);
      c_6 = ATgetArgument(a_6, 1);
      {
        ATerm f_6 = NULL;
        t = not_null(b_6);
        {
          ATerm h_6 = NULL;
          t = w_43(t);
          f_6 = t;
          t = not_null(c_6);
          t = x_43(t);
          h_6 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(f_6), not_null(h_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm y_43 (ATerm), ATerm z_43 (ATerm))
{
  ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL;
  q_6 = t;
  p_6 :
  if(match_cons(q_6, sym_Let_2))
    {
      r_6 = ATgetArgument(q_6, 0);
      s_6 = ATgetArgument(q_6, 1);
      {
        ATerm v_6 = NULL;
        t = not_null(r_6);
        {
          ATerm x_6 = NULL;
          t = y_43(t);
          v_6 = t;
          t = not_null(s_6);
          t = z_43(t);
          x_6 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(v_6), not_null(x_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm z_66 (ATerm), ATerm a_67 (ATerm), ATerm b_67 (ATerm))
{
  ATerm x_8 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, z_66, z_66);
      PopChoice();
    }
  else
    {
      t = x_8;
      {
        ATerm y_8 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, b_67, b_67, z_66);
            PopChoice();
          }
        else
          {
            t = y_8;
            t = Rec_2(t, b_67, z_66);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL;
  e_7 = t;
  d_7 :
  if(match_cons(e_7, sym_Rec_2))
    {
      f_7 = ATgetArgument(e_7, 0);
      g_7 = ATgetArgument(e_7, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_7), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm o_7 = NULL,x_7 = NULL,y_7 = NULL,y_9 = NULL;
  o_7 = t;
  n_7 :
  if(match_cons(o_7, sym_SDef_3))
    {
      x_7 = ATgetArgument(o_7, 0);
      y_7 = ATgetArgument(o_7, 1);
      y_9 = ATgetArgument(o_7, 2);
      t = not_null(y_7);
      {
        ATerm j_0 (ATerm t)
        {
          ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
          c_10 = t;
          m_7 :
          if(match_cons(c_10, sym_VarDec_2))
            {
              d_10 = ATgetArgument(c_10, 0);
              e_10 = ATgetArgument(c_10, 1);
              t = not_null(d_10);
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
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
  m_10 = t;
  l_10 :
  if(match_cons(m_10, sym_Let_2))
    {
      n_10 = ATgetArgument(m_10, 0);
      o_10 = ATgetArgument(m_10, 1);
      t = not_null(n_10);
      {
        ATerm k_0 (ATerm t)
        {
          ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
          u_10 = t;
          k_10 :
          if(match_cons(u_10, sym_SDef_3))
            {
              v_10 = ATgetArgument(u_10, 0);
              w_10 = ATgetArgument(u_10, 1);
              x_10 = ATgetArgument(u_10, 2);
              t = not_null(v_10);
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
ATerm union_0 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
  l_12 = t;
  y_11 :
  if(match_cons(l_12, sym_TCons_2))
    {
      m_12 = ATgetArgument(l_12, 0);
      n_12 = ATgetArgument(l_12, 1);
      j_12 :
      if(match_cons(n_12, sym_TCons_2))
        {
          o_12 = ATgetArgument(n_12, 0);
          p_12 = ATgetArgument(n_12, 1);
          k_12 :
          if(match_cons(p_12, sym_TNil_0))
            {
              t = not_null(m_12);
              {
                ATerm t_12 (ATerm t)
                {
                  ATerm z_8 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(o_12);
                      PopChoice();
                    }
                  else
                    {
                      t = z_8;
                      {
                        ATerm a_9 = t;
                        if(PushChoice()==0)
                          {
                            ATerm l_0 (ATerm t)
                            {
                              t = not_null(o_12);
                              return(t);
                            }
                            t = HdMember_1(t, l_0);
                            t = t_12(t);
                            PopChoice();
                          }
                        else
                          {
                            t = a_9;
                            t = Cons_2(t, _id, t_12);
                          }
                      }
                    }
                  return(t);
                }
                t = t_12(t);
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
ATerm crush_3 (ATerm t, ATerm f_57 (ATerm), ATerm g_57 (ATerm), ATerm h_57 (ATerm))
{
  ATerm a_13 = NULL;
  ATerm c_13 = NULL;
  a_13 = t;
  {
    ATerm d_13 = NULL;
    ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL;
    t = not_null(a_13);
    d_13 = t;
    t = SSL_explode_term(not_null(d_13));
    j_13 = t;
    x_12 :
    if(match_cons(j_13, sym_TCons_2))
      {
        k_13 = ATgetArgument(j_13, 0);
        l_13 = ATgetArgument(j_13, 1);
        y_12 :
        if(match_cons(l_13, sym_TCons_2))
          {
            m_13 = ATgetArgument(l_13, 0);
            n_13 = ATgetArgument(l_13, 1);
            z_12 :
            if(match_cons(n_13, sym_TNil_0))
              {
                if(c_13 != NULL && c_13 != m_13)
                  _fail(m_13);
                else
                  c_13 = m_13;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(c_13);
    t = foldr_3(t, f_57, g_57, h_57);
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm v_56 (ATerm), ATerm w_56 (ATerm))
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  u_13 = t;
  t_13 :
  if(match_cons(u_13, sym_Cons_2))
    {
      v_13 = ATgetArgument(u_13, 0);
      w_13 = ATgetArgument(u_13, 1);
      t = w_56(t);
      {
        ATerm m_0 (ATerm t)
        {
          ATerm z_13 = NULL;
          z_13 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_13), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = v_56(t);
          return(t);
        }
        t = fetch_1(t, m_0);
        t = not_null(w_13);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_1 (ATerm t, ATerm a_57 (ATerm))
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
  h_14 = t;
  e_14 :
  if(match_cons(h_14, sym_TCons_2))
    {
      i_14 = ATgetArgument(h_14, 0);
      j_14 = ATgetArgument(h_14, 1);
      f_14 :
      if(match_cons(j_14, sym_TCons_2))
        {
          k_14 = ATgetArgument(j_14, 0);
          l_14 = ATgetArgument(j_14, 1);
          g_14 :
          if(match_cons(l_14, sym_TNil_0))
            {
              t = not_null(i_14);
              {
                ATerm q_14 (ATerm t)
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
                            ATerm n_0 (ATerm t)
                            {
                              t = not_null(k_14);
                              return(t);
                            }
                            t = HdMember_p__2(t, a_57, n_0);
                            t = q_14(t);
                            PopChoice();
                          }
                        else
                          {
                            t = c_9;
                            t = Cons_2(t, _id, q_14);
                          }
                      }
                    }
                  return(t);
                }
                t = q_14(t);
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
ATerm free_vars2_4 (ATerm t, ATerm f_53 (ATerm), ATerm g_53 (ATerm), ATerm h_53 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm i_53 (ATerm))
{
  ATerm u_14 (ATerm t)
  {
    ATerm o_0 (ATerm t)
    {
      ATerm d_9 = t;
      if(PushChoice()==0)
        {
          t = f_53(t);
          PopChoice();
        }
      else
        {
          t = d_9;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      return(t);
    }
    ATerm p_0 (ATerm t)
    {
      ATerm e_9 = t;
      if(PushChoice()==0)
        {
          ATerm s_14 = NULL;
          ATerm f_9;
          f_9 = t;
          {
            ATerm t_14 = NULL;
            t = g_53(t);
            t_14 = t;
            if(s_14 != NULL && s_14 != t_14)
              _fail(t_14);
            else
              s_14 = t_14;
          }
          t = f_9;
          {
            ATerm q_0 (ATerm t)
            {
              ATerm s_0 (ATerm t)
              {
                t = not_null(s_14);
                return(t);
              }
              t = split_2(t, u_14, s_0);
              t = diff_1(t, i_53);
              return(t);
            }
            ATerm r_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = h_53(t, q_0, u_14, r_0);
            {
              ATerm t_0 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(sym_Nil_0);
                return(t);
              }
              t = crush_3(t, t_0, union_0, _id);
            }
          }
          PopChoice();
        }
      else
        {
          t = e_9;
          {
            ATerm u_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = crush_3(t, u_0, union_0, u_14);
          }
        }
      return(t);
    }
    t = split_2(t, o_0, p_0);
    t = union_0(t);
    return(t);
  }
  t = u_14(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm h_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
    h_15 = t;
    y_14 :
    if(match_cons(h_15, sym_Call_2))
      {
        o_15 = ATgetArgument(h_15, 0);
        q_15 = ATgetArgument(h_15, 1);
        z_14 :
        if(match_cons(o_15, sym_SVar_1))
          {
            p_15 = ATgetArgument(o_15, 0);
            {
              ATerm w_15 = NULL;
              t = not_null(q_15);
              t = length_0(t);
              w_15 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(p_15), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_15), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0));
            }
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm w_0 (ATerm t)
  {
    ATerm g_9 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = g_9;
        {
          ATerm h_9 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = h_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm x_0 (ATerm t)
  {
    ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
    l_16 = t;
    b_15 :
    if(match_cons(l_16, sym_TCons_2))
      {
        m_16 = ATgetArgument(l_16, 0);
        r_16 = ATgetArgument(l_16, 1);
        c_15 :
        if(match_cons(m_16, sym_TCons_2))
          {
            n_16 = ATgetArgument(m_16, 0);
            o_16 = ATgetArgument(m_16, 1);
            d_15 :
            if(match_cons(o_16, sym_TCons_2))
              {
                p_16 = ATgetArgument(o_16, 0);
                q_16 = ATgetArgument(o_16, 1);
                e_15 :
                if(match_cons(q_16, sym_TNil_0))
                  {
                    f_15 :
                    if(match_cons(r_16, sym_TCons_2))
                      {
                        s_16 = ATgetArgument(r_16, 0);
                        t_16 = ATgetArgument(r_16, 1);
                        g_15 :
                        if(match_cons(t_16, sym_TNil_0))
                          {
                            if(n_16 != NULL && n_16 != s_16)
                              _fail(s_16);
                            else
                              n_16 = s_16;
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = free_vars2_4(t, v_0, w_0, sboundin_3, x_0);
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_55 (ATerm), ATerm o_55 (ATerm))
{
  ATerm i_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = n_55(t);
      PopChoice();
    }
  else
    {
      t = i_9;
      {
        ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
        i_17 = t;
        c_17 :
        if(match_cons(i_17, sym_Cons_2))
          {
            j_17 = ATgetArgument(i_17, 0);
            k_17 = ATgetArgument(i_17, 1);
            {
              ATerm n_17 = NULL;
              t = not_null(k_17);
              t = foldr_2(t, n_55, o_55);
              n_17 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_17), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = o_55(t);
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
  ATerm y_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Fail_0);
    return(t);
  }
  ATerm z_0 (ATerm t)
  {
    ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL;
    v_17 = t;
    s_17 :
    if(match_cons(v_17, sym_TCons_2))
      {
        w_17 = ATgetArgument(v_17, 0);
        x_17 = ATgetArgument(v_17, 1);
        t_17 :
        if(match_cons(x_17, sym_TCons_2))
          {
            y_17 = ATgetArgument(x_17, 0);
            z_17 = ATgetArgument(x_17, 1);
            u_17 :
            if(match_cons(z_17, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(w_17), not_null(y_17));
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = foldr_2(t, y_0, z_0);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
  l_18 = t;
  i_18 :
  if(match_cons(l_18, sym_Call_2))
    {
      m_18 = ATgetArgument(l_18, 0);
      o_18 = ATgetArgument(l_18, 1);
      j_18 :
      if(match_cons(m_18, sym_SVar_1))
        {
          n_18 = ATgetArgument(m_18, 0);
          k_18 :
          if(match_cons(o_18, sym_Nil_0))
            t = not_null(n_18);
          else
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
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
  w_18 = t;
  s_18 :
  if(match_cons(w_18, sym_TCons_2))
    {
      x_18 = ATgetArgument(w_18, 0);
      y_18 = ATgetArgument(w_18, 1);
      t_18 :
      if(match_cons(y_18, sym_TCons_2))
        {
          z_18 = ATgetArgument(y_18, 0);
          e_19 = ATgetArgument(y_18, 1);
          u_18 :
          if(match_cons(z_18, sym_Cons_2))
            {
              c_19 = ATgetArgument(z_18, 0);
              d_19 = ATgetArgument(z_18, 1);
              v_18 :
              if(match_cons(e_19, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_19), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
  r_19 = t;
  k_19 :
  if(match_cons(r_19, sym_TCons_2))
    {
      s_19 = ATgetArgument(r_19, 0);
      t_19 = ATgetArgument(r_19, 1);
      l_19 :
      if(match_cons(t_19, sym_TCons_2))
        {
          l_20 = ATgetArgument(t_19, 0);
          y_22 = ATgetArgument(t_19, 1);
          m_19 :
          if(match_cons(l_20, sym_Cons_2))
            {
              m_20 = ATgetArgument(l_20, 0);
              x_22 = ATgetArgument(l_20, 1);
              n_19 :
              if(match_cons(m_20, sym_TCons_2))
                {
                  n_20 = ATgetArgument(m_20, 0);
                  u_22 = ATgetArgument(m_20, 1);
                  o_19 :
                  if(match_cons(u_22, sym_TCons_2))
                    {
                      v_22 = ATgetArgument(u_22, 0);
                      w_22 = ATgetArgument(u_22, 1);
                      p_19 :
                      if(match_cons(w_22, sym_TNil_0))
                        {
                          q_19 :
                          if(match_cons(y_22, sym_TNil_0))
                            {
                              ATerm a_23 = NULL;
                              if(s_19 != NULL && s_19 != n_20)
                                _fail(n_20);
                              else
                                s_19 = n_20;
                              if(a_23 != NULL && a_23 != v_22)
                                _fail(v_22);
                              else
                                a_23 = v_22;
                              t = not_null(a_23);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm j_9 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = j_9;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm c_66 (ATerm), ATerm d_66 (ATerm))
{
  ATerm g_23 = NULL;
  ATerm i_23 = NULL;
  g_23 = t;
  {
    ATerm k_23 = NULL;
    t = c_66(t);
    i_23 = t;
    t = d_66(t);
    k_23 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_23), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm c_65 (ATerm))
{
  ATerm p_23 (ATerm t)
  {
    ATerm k_9 = t;
    if(PushChoice()==0)
      {
        t = c_65(t);
        PopChoice();
      }
    else
      {
        t = k_9;
        t = _all(t, p_23);
      }
    return(t);
  }
  t = p_23(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
  x_23 = t;
  t_23 :
  if(match_cons(x_23, sym_TCons_2))
    {
      y_23 = ATgetArgument(x_23, 0);
      z_23 = ATgetArgument(x_23, 1);
      u_23 :
      if(match_cons(z_23, sym_TCons_2))
        {
          a_24 = ATgetArgument(z_23, 0);
          b_24 = ATgetArgument(z_23, 1);
          v_23 :
          if(match_cons(b_24, sym_TNil_0))
            {
              ATerm f_24 = NULL;
              if(f_24 != NULL && f_24 != a_24)
                _fail(a_24);
              else
                f_24 = a_24;
            }
          else
            {
              if(match_cons(b_24, sym_TCons_2))
                {
                  c_24 = ATgetArgument(b_24, 0);
                  d_24 = ATgetArgument(b_24, 1);
                  w_23 :
                  if(match_cons(d_24, sym_TNil_0))
                    {
                      ATerm l_24 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_24), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      l_24 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_24), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm e_66 (ATerm), ATerm f_66 (ATerm))
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL;
  t = subs_args_0(t);
  u_24 = t;
  r_24 :
  if(match_cons(u_24, sym_TCons_2))
    {
      v_24 = ATgetArgument(u_24, 0);
      w_24 = ATgetArgument(u_24, 1);
      s_24 :
      if(match_cons(w_24, sym_TCons_2))
        {
          x_24 = ATgetArgument(w_24, 0);
          y_24 = ATgetArgument(w_24, 1);
          t_24 :
          if(match_cons(y_24, sym_TNil_0))
            {
              t = not_null(x_24);
              {
                ATerm a_1 (ATerm t)
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = not_null(v_24);
                    return(t);
                  }
                  t = SubsVar_2(t, e_66, b_1);
                  t = f_66(t);
                  return(t);
                }
                t = alltd_1(t, a_1);
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
ATerm substitute_1 (ATerm t, ATerm g_66 (ATerm))
{
  t = substitute_2(t, g_66, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL;
  t_25 = t;
  r_25 :
  if(match_cons(t_25, sym_Cons_2))
    {
      u_25 = ATgetArgument(t_25, 0);
      y_25 = ATgetArgument(t_25, 1);
      s_25 :
      if(match_cons(u_25, sym_SDef_3))
        {
          v_25 = ATgetArgument(u_25, 0);
          w_25 = ATgetArgument(u_25, 1);
          x_25 = ATgetArgument(u_25, 2);
          {
            ATerm k_26 = NULL;
            t = not_null(w_25);
            {
              ATerm r_26 = NULL;
              ATerm c_1 (ATerm t)
              {
                ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
                d_26 = t;
                f_25 :
                if(match_cons(d_26, sym_VarDec_2))
                  {
                    e_26 = ATgetArgument(d_26, 0);
                    f_26 = ATgetArgument(d_26, 1);
                    {
                      ATerm i_26 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TNil_0);
                      t = new_0(t);
                      i_26 = t;
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(i_26), not_null(f_26));
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, c_1);
              k_26 = t;
              {
                ATerm f_27 = NULL;
                ATerm d_1 (ATerm t)
                {
                  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
                  m_26 = t;
                  i_25 :
                  if(match_cons(m_26, sym_VarDec_2))
                    {
                      n_26 = ATgetArgument(m_26, 0);
                      o_26 = ATgetArgument(m_26, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_26)), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = map_1(t, d_1);
                r_26 = t;
                t = not_null(t_25);
                {
                  ATerm h_27 = NULL;
                  ATerm e_1 (ATerm t)
                  {
                    ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL;
                    t_26 = t;
                    o_25 :
                    if(match_cons(t_26, sym_SDef_3))
                      {
                        u_26 = ATgetArgument(t_26, 0);
                        v_26 = ATgetArgument(t_26, 1);
                        w_26 = ATgetArgument(t_26, 2);
                        {
                          ATerm x_26 = NULL,y_26 = NULL,d_27 = NULL;
                          if(v_25 != NULL && v_25 != u_26)
                            _fail(u_26);
                          else
                            v_25 = u_26;
                          if(x_26 != NULL && x_26 != v_26)
                            _fail(v_26);
                          else
                            x_26 = v_26;
                          if(y_26 != NULL && y_26 != w_26)
                            _fail(w_26);
                          else
                            y_26 = w_26;
                          t = not_null(x_26);
                          {
                            ATerm f_1 (ATerm t)
                            {
                              ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
                              z_26 = t;
                              m_25 :
                              if(match_cons(z_26, sym_VarDec_2))
                                {
                                  a_27 = ATgetArgument(z_26, 0);
                                  b_27 = ATgetArgument(z_26, 1);
                                  t = not_null(a_27);
                                }
                              else
                                _fail(t);
                              return(t);
                            }
                            t = map_1(t, f_1);
                            d_27 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_26), (ATerm) ATmakeAppl(sym_TNil_0))));
                            t = ssubs_0(t);
                          }
                        }
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = map_1(t, e_1);
                  f_27 = t;
                  t = choices_0(t);
                  h_27 = t;
                  t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(v_25), not_null(k_26), not_null(h_27));
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
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL;
  y_27 = t;
  w_27 :
  if(match_cons(y_27, sym_Cons_2))
    {
      z_27 = ATgetArgument(y_27, 0);
      a_28 = ATgetArgument(y_27, 1);
      x_27 :
      if(match_cons(a_28, sym_Nil_0))
        t = not_null(z_27);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm joindefs_0 (ATerm t)
{
  ATerm l_9 = t;
  if(PushChoice()==0)
    {
      t = JoinDefs1_0(t);
      PopChoice();
    }
  else
    {
      t = l_9;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm NonOverloadedDef_0 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL;
  m_28 = t;
  f_28 :
  if(match_cons(m_28, sym_TCons_2))
    {
      n_28 = ATgetArgument(m_28, 0);
      s_28 = ATgetArgument(m_28, 1);
      g_28 :
      if(match_cons(n_28, sym_TCons_2))
        {
          o_28 = ATgetArgument(n_28, 0);
          p_28 = ATgetArgument(n_28, 1);
          h_28 :
          if(match_cons(p_28, sym_TCons_2))
            {
              q_28 = ATgetArgument(p_28, 0);
              r_28 = ATgetArgument(p_28, 1);
              i_28 :
              if(match_int(q_28, 0))
                {
                  j_28 :
                  if(match_cons(r_28, sym_TNil_0))
                    {
                      k_28 :
                      if(match_cons(s_28, sym_TCons_2))
                        {
                          t_28 = ATgetArgument(s_28, 0);
                          u_28 = ATgetArgument(s_28, 1);
                          l_28 :
                          if(match_cons(u_28, sym_TNil_0))
                            {
                              t = not_null(t_28);
                              {
                                ATerm g_1 (ATerm t)
                                {
                                  ATerm h_1 (ATerm t)
                                  {
                                    ATerm x_28 = NULL;
                                    x_28 = t;
                                    if(o_28 != NULL && o_28 != x_28)
                                      _fail(x_28);
                                    else
                                      o_28 = x_28;
                                    return(t);
                                  }
                                  t = SDef_3(t, h_1, _id, _id);
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
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm p_55 (ATerm), ATerm q_55 (ATerm), ATerm r_55 (ATerm))
{
  ATerm m_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = p_55(t);
      PopChoice();
    }
  else
    {
      t = m_9;
      {
        ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
        l_29 = t;
        k_29 :
        if(match_cons(l_29, sym_Cons_2))
          {
            m_29 = ATgetArgument(l_29, 0);
            n_29 = ATgetArgument(l_29, 1);
            {
              ATerm u_29 = NULL;
              t = not_null(m_29);
              {
                ATerm w_29 = NULL;
                t = r_55(t);
                u_29 = t;
                t = not_null(n_29);
                t = foldr_3(t, p_55, q_55, r_55);
                w_29 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_29), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_29), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = q_55(t);
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
  ATerm i_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, i_1, add_0, j_1);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm a_44 (ATerm), ATerm b_44 (ATerm), ATerm c_44 (ATerm))
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL;
  r_30 = t;
  m_30 :
  if(match_cons(r_30, sym_SDef_3))
    {
      s_30 = ATgetArgument(r_30, 0);
      t_30 = ATgetArgument(r_30, 1);
      u_30 = ATgetArgument(r_30, 2);
      {
        ATerm y_30 = NULL;
        t = not_null(s_30);
        {
          ATerm a_31 = NULL;
          t = a_44(t);
          y_30 = t;
          t = not_null(t_30);
          {
            ATerm n_31 = NULL;
            t = b_44(t);
            a_31 = t;
            t = not_null(u_30);
            t = c_44(t);
            n_31 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_30), not_null(a_31), not_null(n_31));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm partition_1 (ATerm t, ATerm d_55 (ATerm))
{
  ATerm h_33 (ATerm t)
  {
    ATerm n_9 = t;
    if(PushChoice()==0)
      {
        ATerm k_32 = NULL;
        k_32 = t;
        v_31 :
        if(match_cons(k_32, sym_Nil_0))
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
        else
          _fail(t);
        PopChoice();
      }
    else
      {
        t = n_9;
        {
          ATerm o_9 = t;
          if(PushChoice()==0)
            {
              ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL;
              t = Cons_2(t, d_55, h_33);
              l_32 = t;
              x_31 :
              if(match_cons(l_32, sym_Cons_2))
                {
                  m_32 = ATgetArgument(l_32, 0);
                  n_32 = ATgetArgument(l_32, 1);
                  y_31 :
                  if(match_cons(n_32, sym_TCons_2))
                    {
                      q_32 = ATgetArgument(n_32, 0);
                      r_32 = ATgetArgument(n_32, 1);
                      z_31 :
                      if(match_cons(r_32, sym_TCons_2))
                        {
                          s_32 = ATgetArgument(r_32, 0);
                          t_32 = ATgetArgument(r_32, 1);
                          a_32 :
                          if(match_cons(t_32, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_32), not_null(q_32)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_32), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
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
              t = o_9;
              {
                ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
                t = Cons_2(t, _id, h_33);
                x_32 = t;
                c_32 :
                if(match_cons(x_32, sym_Cons_2))
                  {
                    y_32 = ATgetArgument(x_32, 0);
                    z_32 = ATgetArgument(x_32, 1);
                    d_32 :
                    if(match_cons(z_32, sym_TCons_2))
                      {
                        a_33 = ATgetArgument(z_32, 0);
                        b_33 = ATgetArgument(z_32, 1);
                        i_32 :
                        if(match_cons(b_33, sym_TCons_2))
                          {
                            c_33 = ATgetArgument(b_33, 0);
                            d_33 = ATgetArgument(b_33, 1);
                            j_32 :
                            if(match_cons(d_33, sym_TNil_0))
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_32), not_null(c_33)), (ATerm) ATmakeAppl(sym_TNil_0)));
                            else
                              _fail(t);
                          }
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
  t = h_33(t);
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL;
  w_33 = t;
  o_33 :
  if(match_cons(w_33, sym_TCons_2))
    {
      x_33 = ATgetArgument(w_33, 0);
      c_34 = ATgetArgument(w_33, 1);
      p_33 :
      if(match_cons(x_33, sym_TCons_2))
        {
          y_33 = ATgetArgument(x_33, 0);
          z_33 = ATgetArgument(x_33, 1);
          q_33 :
          if(match_cons(z_33, sym_TCons_2))
            {
              a_34 = ATgetArgument(z_33, 0);
              b_34 = ATgetArgument(z_33, 1);
              r_33 :
              if(match_cons(b_34, sym_TNil_0))
                {
                  s_33 :
                  if(match_cons(c_34, sym_TCons_2))
                    {
                      d_34 = ATgetArgument(c_34, 0);
                      e_34 = ATgetArgument(c_34, 1);
                      t_33 :
                      if(match_cons(e_34, sym_TNil_0))
                        {
                          t = not_null(d_34);
                          {
                            ATerm k_1 (ATerm t)
                            {
                              ATerm l_1 (ATerm t)
                              {
                                ATerm i_34 = NULL;
                                i_34 = t;
                                if(y_33 != NULL && y_33 != i_34)
                                  _fail(i_34);
                                else
                                  y_33 = i_34;
                                return(t);
                              }
                              ATerm m_1 (ATerm t)
                              {
                                ATerm p_9;
                                p_9 = t;
                                {
                                  ATerm j_34 = NULL;
                                  t = length_0(t);
                                  j_34 = t;
                                  if(a_34 != NULL && a_34 != j_34)
                                    _fail(j_34);
                                  else
                                    a_34 = j_34;
                                }
                                t = p_9;
                                return(t);
                              }
                              t = SDef_3(t, l_1, m_1, _id);
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
  return(t);
}
ATerm Expl_0 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
  h_35 = t;
  g_35 :
  if(match_cons(h_35, sym_Match_1))
    {
      i_35 = ATgetArgument(h_35, 0);
      {
        ATerm l_35 = NULL;
        ATerm n_35 = NULL;
        t = new_0(t);
        l_35 = t;
        {
          ATerm p_35 = NULL,q_35 = NULL,y_35 = NULL;
          t = new_0(t);
          n_35 = t;
          t = not_null(i_35);
          {
            ATerm n_1 (ATerm t)
            {
              ATerm r_35 = NULL,w_35 = NULL,x_35 = NULL;
              r_35 = t;
              t_34 :
              if(match_cons(r_35, sym_Explode_2))
                {
                  w_35 = ATgetArgument(r_35, 0);
                  x_35 = ATgetArgument(r_35, 1);
                  if(p_35 != NULL && p_35 != w_35)
                    _fail(w_35);
                  else
                    p_35 = w_35;
                  if(q_35 != NULL && q_35 != x_35)
                    _fail(x_35);
                  else
                    q_35 = x_35;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_35));
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1(t, n_1);
            y_35 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(y_35)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_35))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_35)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(l_35)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_35), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_35), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0))))))));
          }
        }
      }
    }
  else
    {
      if(match_cons(h_35, sym_Build_1))
        {
          i_35 = ATgetArgument(h_35, 0);
          {
            ATerm b_36 = NULL;
            ATerm d_36 = NULL,e_36 = NULL,i_36 = NULL;
            t = new_0(t);
            b_36 = t;
            t = not_null(i_35);
            {
              ATerm o_1 (ATerm t)
              {
                ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL;
                f_36 = t;
                x_34 :
                if(match_cons(f_36, sym_Explode_2))
                  {
                    g_36 = ATgetArgument(f_36, 0);
                    h_36 = ATgetArgument(f_36, 1);
                    if(d_36 != NULL && d_36 != g_36)
                      _fail(g_36);
                    else
                      d_36 = g_36;
                    if(e_36 != NULL && e_36 != h_36)
                      _fail(h_36);
                    else
                      e_36 = h_36;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_36));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, o_1);
              i_36 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_36), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_36), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_36), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_36))), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_36)))));
            }
          }
        }
      else
        {
          if(match_cons(h_35, sym_ExplodeCong_2))
            {
              i_35 = ATgetArgument(h_35, 0);
              j_35 = ATgetArgument(h_35, 1);
              {
                ATerm m_36 = NULL;
                ATerm p_36 = NULL;
                t = new_0(t);
                m_36 = t;
                {
                  ATerm v_36 = NULL;
                  t = new_0(t);
                  p_36 = t;
                  {
                    ATerm x_36 = NULL;
                    t = new_0(t);
                    v_36 = t;
                    t = new_0(t);
                    x_36 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_36), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_36), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_36), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_36), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_36)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_36)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(i_35), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_36)), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_36))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(j_35), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_36)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_36))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_36)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_36)), (ATerm) ATmakeAppl(sym_Nil_0)))))));
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
  ATerm q_38 = NULL,r_38 = NULL;
  q_38 = t;
  p_38 :
  if(match_cons(q_38, sym_Build_1))
    {
      r_38 = ATgetArgument(q_38, 0);
      {
        ATerm w_38 = NULL;
        ATerm y_38 = NULL,z_38 = NULL,d_39 = NULL;
        t = new_0(t);
        w_38 = t;
        t = not_null(r_38);
        {
          ATerm p_1 (ATerm t)
          {
            ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
            a_39 = t;
            n_38 :
            if(match_cons(a_39, sym_App_2))
              {
                b_39 = ATgetArgument(a_39, 0);
                c_39 = ATgetArgument(a_39, 1);
                if(y_38 != NULL && y_38 != b_39)
                  _fail(b_39);
                else
                  y_38 = b_39;
                if(z_38 != NULL && z_38 != c_39)
                  _fail(c_39);
                else
                  z_38 = c_39;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_38));
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, p_1);
          d_39 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_38), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(y_38), not_null(z_38), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_38))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_39))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp1_0 (ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL;
  m_39 = t;
  k_39 :
  if(match_cons(m_39, sym_Build_1))
    {
      n_39 = ATgetArgument(m_39, 0);
      l_39 :
      if(match_cons(n_39, sym_App_2))
        {
          o_39 = ATgetArgument(n_39, 0);
          p_39 = ATgetArgument(n_39, 1);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_39)), not_null(o_39));
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
  ATerm z_39 = NULL,a_40 = NULL;
  z_39 = t;
  y_39 :
  if(match_cons(z_39, sym_Build_1))
    {
      a_40 = ATgetArgument(z_39, 0);
      {
        ATerm c_40 = NULL,d_40 = NULL,i_40 = NULL;
        t = not_null(a_40);
        {
          ATerm q_1 (ATerm t)
          {
            ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL;
            e_40 = t;
            v_39 :
            if(match_cons(e_40, sym_App_2))
              {
                f_40 = ATgetArgument(e_40, 0);
                h_40 = ATgetArgument(e_40, 1);
                w_39 :
                if(match_cons(f_40, sym_Build_1))
                  {
                    g_40 = ATgetArgument(f_40, 0);
                    if(d_40 != NULL && d_40 != g_40)
                      _fail(g_40);
                    else
                      d_40 = g_40;
                    if(c_40 != NULL && c_40 != h_40)
                      _fail(h_40);
                    else
                      c_40 = h_40;
                    t = not_null(d_40);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, q_1);
          i_40 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, not_null(i_40));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL;
  g_41 = t;
  a_41 :
  if(match_cons(g_41, sym_Seqs_1))
    {
      h_41 = ATgetArgument(g_41, 0);
      b_41 :
      if(match_cons(h_41, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(h_41, sym_Cons_2))
            {
              e_41 = ATgetArgument(h_41, 0);
              f_41 = ATgetArgument(h_41, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_41), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(f_41)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(g_41, sym_Choices_1))
        {
          h_41 = ATgetArgument(g_41, 0);
          c_41 :
          if(match_cons(h_41, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(h_41, sym_Cons_2))
                {
                  e_41 = ATgetArgument(h_41, 0);
                  f_41 = ATgetArgument(h_41, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(e_41), (ATerm) ATmakeAppl(sym_Choices_1, not_null(f_41)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(g_41, sym_LChoices_1))
            {
              h_41 = ATgetArgument(g_41, 0);
              d_41 :
              if(match_cons(h_41, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(h_41, sym_Cons_2))
                    {
                      e_41 = ATgetArgument(h_41, 0);
                      f_41 = ATgetArgument(h_41, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(e_41), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(f_41)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(g_41, sym_Lets_2))
                {
                  h_41 = ATgetArgument(g_41, 0);
                  i_41 = ATgetArgument(g_41, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(h_41), not_null(i_41));
                }
              else
                {
                  if(match_cons(g_41, sym_BA_2))
                    {
                      h_41 = ATgetArgument(g_41, 0);
                      i_41 = ATgetArgument(g_41, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_41)), not_null(h_41));
                    }
                  else
                    {
                      if(match_cons(g_41, sym_MA_2))
                        {
                          h_41 = ATgetArgument(g_41, 0);
                          i_41 = ATgetArgument(g_41, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(h_41)), not_null(i_41));
                        }
                      else
                        {
                          if(match_cons(g_41, sym_AM_2))
                            {
                              h_41 = ATgetArgument(g_41, 0);
                              i_41 = ATgetArgument(g_41, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_41), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_41)));
                            }
                          else
                            {
                              if(match_cons(g_41, sym_BAM_3))
                                {
                                  h_41 = ATgetArgument(g_41, 0);
                                  i_41 = ATgetArgument(g_41, 1);
                                  j_41 = ATgetArgument(g_41, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_41)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_41), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_41)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(g_41, sym_InfixApp_3))
                                    {
                                      h_41 = ATgetArgument(g_41, 0);
                                      i_41 = ATgetArgument(g_41, 1);
                                      j_41 = ATgetArgument(g_41, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(i_41), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_41), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_41), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
ATerm repeat_2 (ATerm t, ATerm n_50 (ATerm), ATerm o_50 (ATerm))
{
  ATerm v_42 (ATerm t)
  {
    ATerm q_9 = t;
    if(PushChoice()==0)
      {
        t = n_50(t);
        t = v_42(t);
        PopChoice();
      }
    else
      {
        t = q_9;
        t = o_50(t);
      }
    return(t);
  }
  t = v_42(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm q_50 (ATerm))
{
  t = repeat_2(t, q_50, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm x_42 = NULL;
  x_42 = t;
  w_42 :
  if(!(match_cons(x_42, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm r_9 = t;
  if(PushChoice()==0)
    {
      ATerm r_1 (ATerm t)
      {
        ATerm s_9 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = s_9;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, r_1);
      PopChoice();
      _fail(t);
    }
  else
    t = r_9;
  return(t);
}
ATerm App_2 (ATerm t, ATerm x_41 (ATerm), ATerm y_41 (ATerm))
{
  ATerm c_43 = NULL,d_43 = NULL,f_43 = NULL;
  c_43 = t;
  b_43 :
  if(match_cons(c_43, sym_App_2))
    {
      d_43 = ATgetArgument(c_43, 0);
      f_43 = ATgetArgument(c_43, 1);
      {
        ATerm j_43 = NULL;
        t = not_null(d_43);
        {
          ATerm l_43 = NULL;
          t = x_41(t);
          j_43 = t;
          t = not_null(f_43);
          t = y_41(t);
          l_43 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, not_null(j_43), not_null(l_43));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm u_41 (ATerm), ATerm v_41 (ATerm), ATerm w_41 (ATerm))
{
  ATerm v_43 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL;
  v_43 = t;
  u_43 :
  if(match_cons(v_43, sym_Con_3))
    {
      d_44 = ATgetArgument(v_43, 0);
      e_44 = ATgetArgument(v_43, 1);
      f_44 = ATgetArgument(v_43, 2);
      {
        ATerm j_44 = NULL;
        t = not_null(d_44);
        {
          ATerm l_44 = NULL;
          t = u_41(t);
          j_44 = t;
          t = not_null(e_44);
          {
            ATerm n_44 = NULL;
            t = v_41(t);
            l_44 = t;
            t = not_null(f_44);
            t = w_41(t);
            n_44 = t;
            t = (ATerm) ATmakeAppl(sym_Con_3, not_null(j_44), not_null(l_44), not_null(n_44));
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
  ATerm t_9 = t;
  if(PushChoice()==0)
    {
      ATerm s_1 (ATerm t)
      {
        ATerm u_9 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = u_9;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, s_1);
      PopChoice();
      _fail(t);
    }
  else
    t = t_9;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL,c_45 = NULL,d_45 = NULL;
  x_44 = t;
  v_44 :
  if(match_cons(x_44, sym_SRule_1))
    {
      y_44 = ATgetArgument(x_44, 0);
      w_44 :
      if(match_cons(y_44, sym_Rule_3))
        {
          z_44 = ATgetArgument(y_44, 0);
          c_45 = ATgetArgument(y_44, 1);
          d_45 = ATgetArgument(y_44, 2);
          t = not_null(z_44);
          t = pureterm_0(t);
          t = not_null(c_45);
          t = buildterm_0(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_44)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_45), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_45)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(y_44, sym_StratRule_3))
            {
              z_44 = ATgetArgument(y_44, 0);
              c_45 = ATgetArgument(y_44, 1);
              d_45 = ATgetArgument(y_44, 2);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_44), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_45), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_45), (ATerm) ATmakeAppl(sym_Nil_0)))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm a_45 (ATerm), ATerm b_45 (ATerm))
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
  y_45 = t;
  x_45 :
  if(match_cons(y_45, sym_Scope_2))
    {
      z_45 = ATgetArgument(y_45, 0);
      a_46 = ATgetArgument(y_45, 1);
      {
        ATerm g_46 = NULL;
        t = not_null(z_45);
        {
          ATerm i_46 = NULL;
          t = a_45(t);
          g_46 = t;
          t = not_null(a_46);
          t = b_45(t);
          i_46 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_46), not_null(i_46));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm o_64 (ATerm))
{
  ATerm n_46 (ATerm t)
  {
    ATerm v_9 = t;
    if(PushChoice()==0)
      {
        t = o_64(t);
        PopChoice();
      }
    else
      {
        t = v_9;
        t = _one(t, n_46);
      }
    return(t);
  }
  t = n_46(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
  c_47 = t;
  a_47 :
  if(match_cons(c_47, sym_SRule_1))
    {
      d_47 = ATgetArgument(c_47, 0);
      b_47 :
      if(match_cons(d_47, sym_Rule_3))
        {
          e_47 = ATgetArgument(d_47, 0);
          f_47 = ATgetArgument(d_47, 1);
          g_47 = ATgetArgument(d_47, 2);
          {
            ATerm k_47 = NULL;
            ATerm m_47 = NULL,n_47 = NULL,u_47 = NULL,e_48 = NULL;
            t = new_0(t);
            k_47 = t;
            t = not_null(e_47);
            {
              ATerm g_48 = NULL,k_48 = NULL,u_48 = NULL;
              ATerm b_2 (ATerm t)
              {
                ATerm v_47 = NULL,w_47 = NULL,y_47 = NULL,a_48 = NULL,b_48 = NULL;
                v_47 = t;
                r_46 :
                if(match_cons(v_47, sym_Con_3))
                  {
                    w_47 = ATgetArgument(v_47, 0);
                    a_48 = ATgetArgument(v_47, 1);
                    b_48 = ATgetArgument(v_47, 2);
                    s_46 :
                    if(match_cons(w_47, sym_Var_1))
                      {
                        y_47 = ATgetArgument(w_47, 0);
                        if(u_47 != NULL && u_47 != y_47)
                          _fail(y_47);
                        else
                          u_47 = y_47;
                        if(m_47 != NULL && m_47 != a_48)
                          _fail(a_48);
                        else
                          m_47 = a_48;
                        if(n_47 != NULL && n_47 != b_48)
                          _fail(b_48);
                        else
                          n_47 = b_48;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_47));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, b_2);
              e_48 = t;
              t = not_null(f_47);
              {
                ATerm c_2 (ATerm t)
                {
                  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL;
                  l_48 = t;
                  v_46 :
                  if(match_cons(l_48, sym_Con_3))
                    {
                      m_48 = ATgetArgument(l_48, 0);
                      o_48 = ATgetArgument(l_48, 1);
                      p_48 = ATgetArgument(l_48, 2);
                      w_46 :
                      if(match_cons(m_48, sym_Var_1))
                        {
                          n_48 = ATgetArgument(m_48, 0);
                          x_46 :
                          if(match_cons(p_48, sym_Call_2))
                            {
                              q_48 = ATgetArgument(p_48, 0);
                              r_48 = ATgetArgument(p_48, 1);
                              y_46 :
                              if(match_cons(r_48, sym_Nil_0))
                                {
                                  if(u_47 != NULL && u_47 != n_48)
                                    _fail(n_48);
                                  else
                                    u_47 = n_48;
                                  if(g_48 != NULL && g_48 != o_48)
                                    _fail(o_48);
                                  else
                                    g_48 = o_48;
                                  if(k_48 != NULL && k_48 != q_48)
                                    _fail(q_48);
                                  else
                                    k_48 = q_48;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_47));
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, c_2);
                u_48 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_47), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_48), not_null(u_48), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_47), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(k_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(m_47), not_null(g_48), (ATerm) ATmakeAppl(sym_Id_0))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_47)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_47)))))));
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
  ATerm d_2 (ATerm t)
  {
    ATerm w_9 = t;
    if(PushChoice()==0)
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      {
        t = w_9;
        {
          ATerm x_9 = t;
          if(PushChoice()==0)
            {
              t = Scope_2(t, _id, desugarRule_0);
              PopChoice();
            }
          else
            {
              t = x_9;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, d_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm y_62 (ATerm))
{
  ATerm d_49 (ATerm t)
  {
    t = y_62(t);
    t = _all(t, d_49);
    return(t);
  }
  t = d_49(t);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm q_2 (ATerm t)
      {
        ATerm z_9 = t;
        if(PushChoice()==0)
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = z_9;
            {
              ATerm a_10 = t;
              if(PushChoice()==0)
                {
                  ATerm b_10 = t;
                  if(PushChoice()==0)
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = b_10;
                      {
                        ATerm f_10 = t;
                        if(PushChoice()==0)
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = f_10;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = a_10;
                  t = Expl_0(t);
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, q_2);
    }
    return(t);
  }
  t = topdown_1(t, e_2);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_10 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = g_10;
      {
        ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL;
        g_49 = t;
        f_49 :
        if(match_cons(g_49, sym_Cons_2))
          {
            h_49 = ATgetArgument(g_49, 0);
            i_49 = ATgetArgument(g_49, 1);
            t = not_null(h_49);
            {
              ATerm r_2 (ATerm t)
              {
                t = not_null(i_49);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, r_2);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm h_60 (ATerm))
{
  ATerm n_49 (ATerm t)
  {
    ATerm h_10 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = h_10;
        t = Cons_2(t, h_60, n_49);
      }
    return(t);
  }
  t = n_49(t);
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL;
  q_49 = t;
  p_49 :
  if(match_cons(q_49, sym_TCons_2))
    {
      r_49 = ATgetArgument(q_49, 0);
      s_49 = ATgetArgument(q_49, 1);
      t = not_null(s_49);
    }
  else
    _fail(t);
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL;
  y_49 = t;
  x_49 :
  if(match_cons(y_49, sym_TCons_2))
    {
      z_49 = ATgetArgument(y_49, 0);
      a_50 = ATgetArgument(y_49, 1);
      t = not_null(z_49);
    }
  else
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm a_60 (ATerm))
{
  ATerm t_50 (ATerm t)
  {
    ATerm i_10 = t;
    if(PushChoice()==0)
      {
        ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL;
        ATerm s_2 (ATerm t)
        {
          t = map_1(t, Thd_0);
          return(t);
        }
        ATerm t_2 (ATerm t)
        {
          t = map_1(t, Ttl_0);
          return(t);
        }
        t = split_2(t, s_2, t_2);
        {
          ATerm u_2 (ATerm t)
          {
            t = TCons_2(t, t_50, TNil_0);
            return(t);
          }
          t = TCons_2(t, a_60, u_2);
          i_50 = t;
          f_50 :
          if(match_cons(i_50, sym_TCons_2))
            {
              j_50 = ATgetArgument(i_50, 0);
              k_50 = ATgetArgument(i_50, 1);
              g_50 :
              if(match_cons(k_50, sym_TCons_2))
                {
                  l_50 = ATgetArgument(k_50, 0);
                  m_50 = ATgetArgument(k_50, 1);
                  h_50 :
                  if(match_cons(m_50, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_50), not_null(l_50));
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
        t = i_10;
        t = map_1(t, TNil_0);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
      }
    return(t);
  }
  t = t_50(t);
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL;
  c_51 = t;
  z_50 :
  if(match_cons(c_51, sym_TCons_2))
    {
      d_51 = ATgetArgument(c_51, 0);
      k_51 = ATgetArgument(c_51, 1);
      a_51 :
      if(match_cons(k_51, sym_TCons_2))
        {
          l_51 = ATgetArgument(k_51, 0);
          m_51 = ATgetArgument(k_51, 1);
          b_51 :
          if(match_cons(m_51, sym_TNil_0))
            {
              ATerm p_51 = NULL;
              ATerm r_51 = NULL;
              t = new_0(t);
              p_51 = t;
              {
                ATerm t_51 = NULL;
                t = new_0(t);
                r_51 = t;
                t = new_0(t);
                t_51 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_51)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_51)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_51)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(t_51)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_51)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(p_51), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_51), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_51)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_51), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(t_51)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
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
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL;
  e_52 = t;
  a_52 :
  if(match_cons(e_52, sym_TCons_2))
    {
      f_52 = ATgetArgument(e_52, 0);
      g_52 = ATgetArgument(e_52, 1);
      b_52 :
      if(match_cons(g_52, sym_TCons_2))
        {
          h_52 = ATgetArgument(g_52, 0);
          i_52 = ATgetArgument(g_52, 1);
          c_52 :
          if(match_cons(h_52, sym_Nil_0))
            {
              d_52 :
              if(match_cons(i_52, sym_TNil_0))
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
ATerm zipr_1 (ATerm t, ATerm z_58 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, z_58);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL;
  m_52 = t;
  l_52 :
  if(match_cons(m_52, sym_Cons_2))
    {
      n_52 = ATgetArgument(m_52, 0);
      o_52 = ATgetArgument(m_52, 1);
      t = not_null(o_52);
    }
  else
    _fail(t);
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL;
  v_52 = t;
  t_52 :
  if(match_cons(v_52, sym_Cons_2))
    {
      w_52 = ATgetArgument(v_52, 0);
      x_52 = ATgetArgument(v_52, 1);
      u_52 :
      if(match_cons(x_52, sym_Nil_0))
        t = not_null(w_52);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm last_0 (ATerm t)
{
  ATerm j_10 = t;
  if(PushChoice()==0)
    {
      t = Last_0(t);
      PopChoice();
    }
  else
    {
      t = j_10;
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
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL;
  k_53 = t;
  c_53 :
  if(match_cons(k_53, sym_TCons_2))
    {
      l_53 = ATgetArgument(k_53, 0);
      m_53 = ATgetArgument(k_53, 1);
      d_53 :
      if(match_cons(m_53, sym_TCons_2))
        {
          n_53 = ATgetArgument(m_53, 0);
          o_53 = ATgetArgument(m_53, 1);
          e_53 :
          if(match_cons(o_53, sym_TNil_0))
            {
              ATerm p_10 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(l_53), not_null(n_53));
                  PopChoice();
                }
              else
                {
                  t = p_10;
                  t = SSL_subtr(not_null(l_53), not_null(n_53));
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
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL;
  w_53 = t;
  t_53 :
  if(match_cons(w_53, sym_TCons_2))
    {
      x_53 = ATgetArgument(w_53, 0);
      y_53 = ATgetArgument(w_53, 1);
      u_53 :
      if(match_cons(y_53, sym_TCons_2))
        {
          z_53 = ATgetArgument(y_53, 0);
          a_54 = ATgetArgument(y_53, 1);
          v_53 :
          if(match_cons(a_54, sym_TNil_0))
            {
              ATerm q_10;
              q_10 = t;
              {
                ATerm r_10 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(x_53), not_null(z_53));
                    PopChoice();
                  }
                else
                  {
                    t = r_10;
                    t = SSL_gtr(not_null(x_53), not_null(z_53));
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
  ATerm i_54 = NULL;
  ATerm s_10 = t;
  if(PushChoice()==0)
    {
      ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL;
      j_54 = t;
      f_54 :
      if(match_cons(j_54, sym_TCons_2))
        {
          k_54 = ATgetArgument(j_54, 0);
          l_54 = ATgetArgument(j_54, 1);
          g_54 :
          if(match_cons(l_54, sym_TCons_2))
            {
              m_54 = ATgetArgument(l_54, 0);
              n_54 = ATgetArgument(l_54, 1);
              h_54 :
              if(match_cons(n_54, sym_TNil_0))
                {
                  if(i_54 != NULL && i_54 != k_54)
                    _fail(k_54);
                  else
                    i_54 = k_54;
                  if(i_54 != NULL && i_54 != m_54)
                    _fail(m_54);
                  else
                    i_54 = m_54;
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
ATerm copy_1 (ATerm t, ATerm f_56 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL,s_55 = NULL;
    j_55 = t;
    q_54 :
    if(match_cons(j_55, sym_TCons_2))
      {
        k_55 = ATgetArgument(j_55, 0);
        l_55 = ATgetArgument(j_55, 1);
        r_54 :
        if(match_cons(l_55, sym_TCons_2))
          {
            m_55 = ATgetArgument(l_55, 0);
            s_55 = ATgetArgument(l_55, 1);
            s_54 :
            if(match_cons(s_55, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_55), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
            else
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
    ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL;
    v_55 = t;
    u_54 :
    if(match_cons(v_55, sym_TCons_2))
      {
        w_55 = ATgetArgument(v_55, 0);
        x_55 = ATgetArgument(v_55, 1);
        w_54 :
        if(match_int(w_55, 0))
          {
            x_54 :
            if(match_cons(x_55, sym_TCons_2))
              {
                y_55 = ATgetArgument(x_55, 0);
                z_55 = ATgetArgument(x_55, 1);
                y_54 :
                if(match_cons(z_55, sym_TCons_2))
                  {
                    a_56 = ATgetArgument(z_55, 0);
                    b_56 = ATgetArgument(z_55, 1);
                    z_54 :
                    if(match_cons(b_56, sym_TNil_0))
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
  ATerm i_3 (ATerm t)
  {
    ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL;
    g_56 = t;
    f_55 :
    if(match_cons(g_56, sym_TCons_2))
      {
        h_56 = ATgetArgument(g_56, 0);
        i_56 = ATgetArgument(g_56, 1);
        g_55 :
        if(match_cons(i_56, sym_TCons_2))
          {
            j_56 = ATgetArgument(i_56, 0);
            k_56 = ATgetArgument(i_56, 1);
            h_55 :
            if(match_cons(k_56, sym_TCons_2))
              {
                l_56 = ATgetArgument(k_56, 0);
                m_56 = ATgetArgument(k_56, 1);
                i_55 :
                if(match_cons(m_56, sym_TNil_0))
                  {
                    ATerm r_56 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = geq_0(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm t_56 = NULL;
                      t = subt_0(t);
                      r_56 = t;
                      t = not_null(j_56);
                      t = f_56(t);
                      t_56 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_56), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_56), not_null(l_56)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  t = for_3(t, g_3, h_3, i_3);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL;
  o_57 = t;
  l_57 :
  if(match_cons(o_57, sym_TCons_2))
    {
      p_57 = ATgetArgument(o_57, 0);
      q_57 = ATgetArgument(o_57, 1);
      m_57 :
      if(match_cons(q_57, sym_TCons_2))
        {
          r_57 = ATgetArgument(q_57, 0);
          s_57 = ATgetArgument(q_57, 1);
          n_57 :
          if(match_cons(s_57, sym_TNil_0))
            {
              ATerm t_10 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(p_57), not_null(r_57));
                  PopChoice();
                }
              else
                {
                  t = t_10;
                  t = SSL_addr(not_null(p_57), not_null(r_57));
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
  ATerm a_58 = NULL;
  ATerm c_58 = NULL;
  a_58 = t;
  {
    ATerm e_58 = NULL;
    t = new_0(t);
    c_58 = t;
    {
      ATerm g_58 = NULL;
      t = new_0(t);
      e_58 = t;
      t = new_0(t);
      g_58 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_58)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_58)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_58), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_58))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(c_58), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_58)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_58)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
    }
  }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL;
  ATerm h_63 (ATerm t)
  {
    ATerm y_61 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_60), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL;
      t = add_0(t);
      y_61 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_61), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TNil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = copy_1(t, new_0);
      a_62 = t;
      t_59 :
      if(match_cons(a_62, sym_Cons_2))
        {
          b_62 = ATgetArgument(a_62, 0);
          c_62 = ATgetArgument(a_62, 1);
          {
            ATerm f_62 = NULL;
            t = not_null(c_62);
            {
              ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL;
              t = last_0(t);
              f_62 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_62), not_null(c_62)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_62), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = zipr_1(t, MkThreadApplication_0);
              t = tuple_unzip_1(t, _id);
              h_62 = t;
              m_59 :
              if(match_cons(h_62, sym_TCons_2))
                {
                  i_62 = ATgetArgument(h_62, 0);
                  j_62 = ATgetArgument(h_62, 1);
                  n_59 :
                  if(match_cons(j_62, sym_TCons_2))
                    {
                      k_62 = ATgetArgument(j_62, 0);
                      l_62 = ATgetArgument(j_62, 1);
                      o_59 :
                      if(match_cons(l_62, sym_TCons_2))
                        {
                          m_62 = ATgetArgument(l_62, 0);
                          o_62 = ATgetArgument(l_62, 1);
                          p_59 :
                          if(match_cons(o_62, sym_TCons_2))
                            {
                              p_62 = ATgetArgument(o_62, 0);
                              q_62 = ATgetArgument(o_62, 1);
                              q_59 :
                              if(match_cons(q_62, sym_TCons_2))
                                {
                                  r_62 = ATgetArgument(q_62, 0);
                                  s_62 = ATgetArgument(q_62, 1);
                                  r_59 :
                                  if(match_cons(s_62, sym_TCons_2))
                                    {
                                      t_62 = ATgetArgument(s_62, 0);
                                      u_62 = ATgetArgument(s_62, 1);
                                      s_59 :
                                      if(match_cons(u_62, sym_TNil_0))
                                        {
                                          ATerm d_63 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_62), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_62), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_62), (ATerm) ATmakeAppl(sym_Nil_0))));
                                          t = concat_0(t);
                                          d_63 = t;
                                          t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(f_60), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), not_null(k_62), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_62), not_null(d_63)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_60), not_null(p_62)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_62)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_60), not_null(t_62)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_62)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(i_62))))));
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
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
  e_60 = t;
  u_59 :
  if(match_cons(e_60, sym_TCons_2))
    {
      f_60 = ATgetArgument(e_60, 0);
      g_60 = ATgetArgument(e_60, 1);
      v_59 :
      if(match_cons(g_60, sym_TCons_2))
        {
          j_60 = ATgetArgument(g_60, 0);
          k_60 = ATgetArgument(g_60, 1);
          w_59 :
          if(match_string(j_60, "D"))
            {
              x_59 :
              if(match_cons(k_60, sym_TCons_2))
                {
                  l_60 = ATgetArgument(k_60, 0);
                  m_60 = ATgetArgument(k_60, 1);
                  y_59 :
                  if(match_cons(m_60, sym_TNil_0))
                    {
                      ATerm r_60 = NULL;
                      ATerm t_60 = NULL,u_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL;
                      t = new_0(t);
                      r_60 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_60), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_60)), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = copy_1(t, MkDistApplication_0);
                      t = tuple_unzip_1(t, _id);
                      t_60 = t;
                      y_58 :
                      if(match_cons(t_60, sym_TCons_2))
                        {
                          u_60 = ATgetArgument(t_60, 0);
                          x_60 = ATgetArgument(t_60, 1);
                          a_59 :
                          if(match_cons(x_60, sym_TCons_2))
                            {
                              y_60 = ATgetArgument(x_60, 0);
                              z_60 = ATgetArgument(x_60, 1);
                              b_59 :
                              if(match_cons(z_60, sym_TCons_2))
                                {
                                  a_61 = ATgetArgument(z_60, 0);
                                  b_61 = ATgetArgument(z_60, 1);
                                  c_59 :
                                  if(match_cons(b_61, sym_TCons_2))
                                    {
                                      c_61 = ATgetArgument(b_61, 0);
                                      d_61 = ATgetArgument(b_61, 1);
                                      d_59 :
                                      if(match_cons(d_61, sym_TCons_2))
                                        {
                                          e_61 = ATgetArgument(d_61, 0);
                                          f_61 = ATgetArgument(d_61, 1);
                                          e_59 :
                                          if(match_cons(f_61, sym_TCons_2))
                                            {
                                              g_61 = ATgetArgument(f_61, 0);
                                              h_61 = ATgetArgument(f_61, 1);
                                              f_59 :
                                              if(match_cons(h_61, sym_TNil_0))
                                                {
                                                  ATerm o_61 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_61), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  o_61 = t;
                                                  t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(f_60), (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue))), not_null(y_60), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_60), not_null(o_61)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_60), not_null(c_61)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_60)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(f_60), not_null(g_61)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(u_60))))));
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
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
              if(match_string(j_60, "T"))
                {
                  z_59 :
                  if(match_cons(k_60, sym_TCons_2))
                    {
                      l_60 = ATgetArgument(k_60, 0);
                      m_60 = ATgetArgument(k_60, 1);
                      c_60 :
                      if(match_cons(m_60, sym_TNil_0))
                        {
                          d_60 :
                          if(match_int(l_60, 0))
                            {
                              ATerm y_10 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm s_61 = NULL;
                                  t = new_0(t);
                                  s_61 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(f_60), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_61), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_60), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_61)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_60), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_61)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Id_0)))));
                                  PopChoice();
                                }
                              else
                                {
                                  t = y_10;
                                  t = h_63(t);
                                }
                            }
                          else
                            t = h_63(t);
                        }
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
  ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL;
  a_64 = t;
  t_63 :
  if(match_cons(a_64, sym_TCons_2))
    {
      b_64 = ATgetArgument(a_64, 0);
      i_64 = ATgetArgument(a_64, 1);
      u_63 :
      if(match_cons(b_64, sym_TCons_2))
        {
          c_64 = ATgetArgument(b_64, 0);
          f_64 = ATgetArgument(b_64, 1);
          v_63 :
          if(match_cons(c_64, sym_Mod_2))
            {
              d_64 = ATgetArgument(c_64, 0);
              e_64 = ATgetArgument(c_64, 1);
              w_63 :
              if(match_cons(f_64, sym_TCons_2))
                {
                  g_64 = ATgetArgument(f_64, 0);
                  h_64 = ATgetArgument(f_64, 1);
                  x_63 :
                  if(match_cons(h_64, sym_TNil_0))
                    {
                      y_63 :
                      if(match_cons(i_64, sym_TCons_2))
                        {
                          j_64 = ATgetArgument(i_64, 0);
                          k_64 = ATgetArgument(i_64, 1);
                          z_63 :
                          if(match_cons(k_64, sym_TNil_0))
                            {
                              ATerm r_64 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_64), (ATerm) ATmakeAppl(sym_TNil_0))));
                              t = DefineCongruence_0(t);
                              t = desugar_0(t);
                              r_64 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_64), (ATerm) ATmakeAppl(sym_TNil_0)));
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm z_10 = t;
  if(PushChoice()==0)
    {
      t = CongruenceDef_0(t);
      PopChoice();
    }
  else
    {
      t = z_10;
      {
        ATerm a_11 = t;
        if(PushChoice()==0)
          {
            t = OverloadedDef_0(t);
            {
              ATerm j_3 (ATerm t)
              {
                t = TCons_2(t, _id, TNil_0);
                return(t);
              }
              t = TCons_2(t, joindefs_0, j_3);
            }
            PopChoice();
          }
        else
          {
            t = a_11;
            t = NonOverloadedDef_0(t);
            {
              ATerm k_3 (ATerm t)
              {
                t = TCons_2(t, _id, TNil_0);
                return(t);
              }
              t = TCons_2(t, joindefs_0, k_3);
            }
          }
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL;
  f_65 = t;
  w_64 :
  if(match_cons(f_65, sym_TCons_2))
    {
      g_65 = ATgetArgument(f_65, 0);
      j_65 = ATgetArgument(f_65, 1);
      x_64 :
      if(match_cons(g_65, sym_Cons_2))
        {
          h_65 = ATgetArgument(g_65, 0);
          i_65 = ATgetArgument(g_65, 1);
          y_64 :
          if(match_cons(j_65, sym_TCons_2))
            {
              k_65 = ATgetArgument(j_65, 0);
              l_65 = ATgetArgument(j_65, 1);
              z_64 :
              if(match_cons(l_65, sym_TCons_2))
                {
                  m_65 = ATgetArgument(l_65, 0);
                  n_65 = ATgetArgument(l_65, 1);
                  a_65 :
                  if(match_cons(n_65, sym_TCons_2))
                    {
                      o_65 = ATgetArgument(n_65, 0);
                      p_65 = ATgetArgument(n_65, 1);
                      b_65 :
                      if(match_cons(p_65, sym_TCons_2))
                        {
                          q_65 = ATgetArgument(p_65, 0);
                          r_65 = ATgetArgument(p_65, 1);
                          e_65 :
                          if(match_cons(r_65, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_65), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_65), not_null(q_65)), (ATerm) ATmakeAppl(sym_TNil_0))))));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm v_60 (ATerm))
{
  ATerm z_65 (ATerm t)
  {
    ATerm b_11 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, z_65);
        PopChoice();
      }
    else
      {
        t = b_11;
        t = Nil_0(t);
        t = v_60(t);
      }
    return(t);
  }
  t = z_65(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL;
  j_66 = t;
  b_66 :
  if(match_cons(j_66, sym_TCons_2))
    {
      k_66 = ATgetArgument(j_66, 0);
      l_66 = ATgetArgument(j_66, 1);
      h_66 :
      if(match_cons(l_66, sym_TCons_2))
        {
          m_66 = ATgetArgument(l_66, 0);
          n_66 = ATgetArgument(l_66, 1);
          i_66 :
          if(match_cons(n_66, sym_TNil_0))
            {
              t = not_null(k_66);
              {
                ATerm u_3 (ATerm t)
                {
                  t = not_null(m_66);
                  return(t);
                }
                t = at_end_1(t, u_3);
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
ATerm HdMember_1 (ATerm t, ATerm u_56 (ATerm))
{
  ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL;
  u_66 = t;
  t_66 :
  if(match_cons(u_66, sym_Cons_2))
    {
      v_66 = ATgetArgument(u_66, 0);
      w_66 = ATgetArgument(u_66, 1);
      t = u_56(t);
      {
        ATerm v_3 (ATerm t)
        {
          ATerm c_67 = NULL;
          c_67 = t;
          if(v_66 != NULL && v_66 != c_67)
            _fail(c_67);
          else
            v_66 = c_67;
          return(t);
        }
        t = fetch_1(t, v_3);
        t = not_null(w_66);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL;
  k_67 = t;
  g_67 :
  if(match_cons(k_67, sym_TCons_2))
    {
      l_67 = ATgetArgument(k_67, 0);
      m_67 = ATgetArgument(k_67, 1);
      h_67 :
      if(match_cons(m_67, sym_TCons_2))
        {
          n_67 = ATgetArgument(m_67, 0);
          q_67 = ATgetArgument(m_67, 1);
          i_67 :
          if(match_cons(n_67, sym_Cons_2))
            {
              o_67 = ATgetArgument(n_67, 0);
              p_67 = ATgetArgument(n_67, 1);
              j_67 :
              if(match_cons(q_67, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_67), not_null(l_67)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_67), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_68), not_null(c_68));
          else
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
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL;
  n_68 = t;
  i_68 :
  if(match_cons(n_68, sym_TCons_2))
    {
      o_68 = ATgetArgument(n_68, 0);
      r_68 = ATgetArgument(n_68, 1);
      j_68 :
      if(match_cons(o_68, sym_Cons_2))
        {
          p_68 = ATgetArgument(o_68, 0);
          q_68 = ATgetArgument(o_68, 1);
          k_68 :
          if(match_cons(r_68, sym_TCons_2))
            {
              s_68 = ATgetArgument(r_68, 0);
              v_68 = ATgetArgument(r_68, 1);
              l_68 :
              if(match_cons(s_68, sym_Cons_2))
                {
                  t_68 = ATgetArgument(s_68, 0);
                  u_68 = ATgetArgument(s_68, 1);
                  m_68 :
                  if(match_cons(v_68, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(p_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_68), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(q_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_68), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL;
  h_69 = t;
  c_69 :
  if(match_cons(h_69, sym_TCons_2))
    {
      i_69 = ATgetArgument(h_69, 0);
      j_69 = ATgetArgument(h_69, 1);
      d_69 :
      if(match_cons(i_69, sym_Nil_0))
        {
          e_69 :
          if(match_cons(j_69, sym_TCons_2))
            {
              k_69 = ATgetArgument(j_69, 0);
              l_69 = ATgetArgument(j_69, 1);
              f_69 :
              if(match_cons(k_69, sym_Nil_0))
                {
                  g_69 :
                  if(match_cons(l_69, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm r_58 (ATerm), ATerm s_58 (ATerm), ATerm t_58 (ATerm), ATerm u_58 (ATerm))
{
  ATerm n_69 (ATerm t)
  {
    ATerm c_11 = t;
    if(PushChoice()==0)
      {
        t = r_58(t);
        PopChoice();
      }
    else
      {
        t = c_11;
        t = s_58(t);
        {
          ATerm w_3 (ATerm t)
          {
            t = TCons_2(t, n_69, TNil_0);
            return(t);
          }
          t = TCons_2(t, u_58, w_3);
          t = t_58(t);
        }
      }
    return(t);
  }
  t = n_69(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm w_58 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, w_58);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL;
  e_70 = t;
  a_70 :
  if(match_cons(e_70, sym_Cons_2))
    {
      f_70 = ATgetArgument(e_70, 0);
      k_70 = ATgetArgument(e_70, 1);
      b_70 :
      if(match_cons(f_70, sym_TCons_2))
        {
          g_70 = ATgetArgument(f_70, 0);
          h_70 = ATgetArgument(f_70, 1);
          c_70 :
          if(match_cons(h_70, sym_TCons_2))
            {
              i_70 = ATgetArgument(h_70, 0);
              j_70 = ATgetArgument(h_70, 1);
              d_70 :
              if(match_cons(j_70, sym_TNil_0))
                {
                  ATerm o_70 = NULL,p_70 = NULL,x_70 = NULL,f_71 = NULL;
                  ATerm d_11;
                  d_11 = t;
                  {
                    ATerm q_70 = NULL;
                    ATerm s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL;
                    t = not_null(i_70);
                    q_70 = t;
                    t = SSL_explode_term(not_null(q_70));
                    s_70 = t;
                    r_69 :
                    if(match_cons(s_70, sym_TCons_2))
                      {
                        t_70 = ATgetArgument(s_70, 0);
                        u_70 = ATgetArgument(s_70, 1);
                        s_69 :
                        if(match_cons(u_70, sym_TCons_2))
                          {
                            v_70 = ATgetArgument(u_70, 0);
                            w_70 = ATgetArgument(u_70, 1);
                            t_69 :
                            if(match_cons(w_70, sym_TNil_0))
                              {
                                if(o_70 != NULL && o_70 != t_70)
                                  _fail(t_70);
                                else
                                  o_70 = t_70;
                                if(p_70 != NULL && p_70 != v_70)
                                  _fail(v_70);
                                else
                                  p_70 = v_70;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = d_11;
                  {
                    ATerm y_70 = NULL;
                    ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL;
                    t = not_null(g_70);
                    y_70 = t;
                    t = SSL_explode_term(not_null(y_70));
                    a_71 = t;
                    w_69 :
                    if(match_cons(a_71, sym_TCons_2))
                      {
                        b_71 = ATgetArgument(a_71, 0);
                        c_71 = ATgetArgument(a_71, 1);
                        x_69 :
                        if(match_cons(c_71, sym_TCons_2))
                          {
                            d_71 = ATgetArgument(c_71, 0);
                            e_71 = ATgetArgument(c_71, 1);
                            y_69 :
                            if(match_cons(e_71, sym_TNil_0))
                              {
                                if(o_70 != NULL && o_70 != b_71)
                                  _fail(b_71);
                                else
                                  o_70 = b_71;
                                if(x_70 != NULL && x_70 != d_71)
                                  _fail(d_71);
                                else
                                  x_70 = d_71;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_70), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_70), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    f_71 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_70), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL;
  s_71 = t;
  o_71 :
  if(match_cons(s_71, sym_Cons_2))
    {
      t_71 = ATgetArgument(s_71, 0);
      y_71 = ATgetArgument(s_71, 1);
      p_71 :
      if(match_cons(t_71, sym_TCons_2))
        {
          u_71 = ATgetArgument(t_71, 0);
          v_71 = ATgetArgument(t_71, 1);
          q_71 :
          if(match_cons(v_71, sym_TCons_2))
            {
              w_71 = ATgetArgument(v_71, 0);
              x_71 = ATgetArgument(v_71, 1);
              r_71 :
              if(match_cons(x_71, sym_TNil_0))
                {
                  ATerm a_72 = NULL;
                  if(u_71 != NULL && u_71 != w_71)
                    _fail(w_71);
                  else
                    u_71 = w_71;
                  if(a_72 != NULL && a_72 != y_71)
                    _fail(y_71);
                  else
                    a_72 = y_71;
                  t = not_null(a_72);
                }
              else
                _fail(t);
            }
          else
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
  ATerm e_11 = t;
  if(PushChoice()==0)
    {
      ATerm f_4 (ATerm t)
      {
        ATerm h_72 = NULL;
        h_72 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_72), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm g_4 (ATerm t)
      {
        ATerm m_4 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, m_4);
        return(t);
      }
      ATerm h_4 (ATerm t)
      {
        ATerm f_11 = t;
        if(PushChoice()==0)
          {
            ATerm n_4 (ATerm t)
            {
              ATerm o_4 (ATerm t)
              {
                ATerm g_11 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = g_11;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, o_4, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, n_4);
            PopChoice();
          }
        else
          {
            t = f_11;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, f_4, g_4, h_4);
      PopChoice();
    }
  else
    {
      t = e_11;
      {
        ATerm j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL;
        j_72 = t;
        e_72 :
        if(match_cons(j_72, sym_TCons_2))
          {
            k_72 = ATgetArgument(j_72, 0);
            l_72 = ATgetArgument(j_72, 1);
            f_72 :
            if(match_cons(l_72, sym_TCons_2))
              {
                m_72 = ATgetArgument(l_72, 0);
                n_72 = ATgetArgument(l_72, 1);
                g_72 :
                if(match_cons(n_72, sym_TNil_0))
                  {
                    t = not_null(k_72);
                    {
                      ATerm s_72 (ATerm t)
                      {
                        ATerm h_11 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = h_11;
                            {
                              ATerm i_11 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm p_4 (ATerm t)
                                  {
                                    t = not_null(m_72);
                                    return(t);
                                  }
                                  t = HdMember_1(t, p_4);
                                  t = s_72(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = i_11;
                                  t = Cons_2(t, _id, s_72);
                                }
                            }
                          }
                        return(t);
                      }
                      t = s_72(t);
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
ATerm GnNextChangeGraph_3 (ATerm t, ATerm u_45 (ATerm), ATerm v_45 (ATerm), ATerm w_45 (ATerm))
{
  ATerm k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL;
  k_73 = t;
  d_73 :
  if(match_cons(k_73, sym_TCons_2))
    {
      l_73 = ATgetArgument(k_73, 0);
      o_73 = ATgetArgument(k_73, 1);
      e_73 :
      if(match_cons(l_73, sym_Cons_2))
        {
          m_73 = ATgetArgument(l_73, 0);
          n_73 = ATgetArgument(l_73, 1);
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
                  if(match_cons(s_73, sym_TCons_2))
                    {
                      t_73 = ATgetArgument(s_73, 0);
                      u_73 = ATgetArgument(s_73, 1);
                      i_73 :
                      if(match_cons(u_73, sym_TCons_2))
                        {
                          v_73 = ATgetArgument(u_73, 0);
                          w_73 = ATgetArgument(u_73, 1);
                          j_73 :
                          if(match_cons(w_73, sym_TNil_0))
                            {
                              ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = u_45(t);
                              d_74 = t;
                              a_73 :
                              if(match_cons(d_74, sym_TCons_2))
                                {
                                  e_74 = ATgetArgument(d_74, 0);
                                  f_74 = ATgetArgument(d_74, 1);
                                  b_73 :
                                  if(match_cons(f_74, sym_TCons_2))
                                    {
                                      g_74 = ATgetArgument(f_74, 0);
                                      h_74 = ATgetArgument(f_74, 1);
                                      c_73 :
                                      if(match_cons(h_74, sym_TNil_0))
                                        {
                                          ATerm k_74 = NULL;
                                          t = not_null(e_74);
                                          {
                                            ATerm m_74 = NULL;
                                            t = v_45(t);
                                            k_74 = t;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            {
                                              ATerm o_74 = NULL;
                                              t = diff_0(t);
                                              m_74 = t;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              {
                                                ATerm q_74 = NULL;
                                                t = conc_0(t);
                                                o_74 = t;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                {
                                                  ATerm s_74 = NULL;
                                                  t = conc_0(t);
                                                  q_74 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_73), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                  t = w_45(t);
                                                  s_74 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_73), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
  ATerm j_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL;
  j_75 = t;
  c_75 :
  if(match_cons(j_75, sym_TCons_2))
    {
      k_75 = ATgetArgument(j_75, 0);
      l_75 = ATgetArgument(j_75, 1);
      d_75 :
      if(match_cons(k_75, sym_Nil_0))
        {
          e_75 :
          if(match_cons(l_75, sym_TCons_2))
            {
              m_75 = ATgetArgument(l_75, 0);
              n_75 = ATgetArgument(l_75, 1);
              f_75 :
              if(match_cons(n_75, sym_TCons_2))
                {
                  o_75 = ATgetArgument(n_75, 0);
                  p_75 = ATgetArgument(n_75, 1);
                  g_75 :
                  if(match_cons(p_75, sym_TCons_2))
                    {
                      q_75 = ATgetArgument(p_75, 0);
                      r_75 = ATgetArgument(p_75, 1);
                      h_75 :
                      if(match_cons(r_75, sym_TCons_2))
                        {
                          s_75 = ATgetArgument(r_75, 0);
                          t_75 = ATgetArgument(r_75, 1);
                          i_75 :
                          if(match_cons(t_75, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_75), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL,k_76 = NULL;
  e_76 = t;
  a_76 :
  if(match_cons(e_76, sym_TCons_2))
    {
      f_76 = ATgetArgument(e_76, 0);
      g_76 = ATgetArgument(e_76, 1);
      b_76 :
      if(match_cons(g_76, sym_TCons_2))
        {
          h_76 = ATgetArgument(g_76, 0);
          i_76 = ATgetArgument(g_76, 1);
          c_76 :
          if(match_cons(i_76, sym_TCons_2))
            {
              j_76 = ATgetArgument(i_76, 0);
              k_76 = ATgetArgument(i_76, 1);
              d_76 :
              if(match_cons(k_76, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_76), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))))));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm e_51 (ATerm), ATerm f_51 (ATerm))
{
  ATerm p_76 (ATerm t)
  {
    ATerm j_11 = t;
    if(PushChoice()==0)
      {
        t = e_51(t);
        PopChoice();
      }
    else
      {
        t = j_11;
        t = f_51(t);
        t = p_76(t);
      }
    return(t);
  }
  t = p_76(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm h_51 (ATerm), ATerm i_51 (ATerm), ATerm j_51 (ATerm))
{
  t = h_51(t);
  t = while_not_2(t, i_51, j_51);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm d_46 (ATerm), ATerm e_46 (ATerm), ATerm f_46 (ATerm))
{
  ATerm q_4 (ATerm t)
  {
    ATerm k_11 = t;
    if(PushChoice()==0)
      {
        t = GnNextChangeGraph_3(t, d_46, e_46, f_46);
        PopChoice();
      }
    else
      {
        t = k_11;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, q_4);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL;
    v_76 = t;
    r_76 :
    if(match_cons(v_76, sym_TCons_2))
      {
        w_76 = ATgetArgument(v_76, 0);
        x_76 = ATgetArgument(v_76, 1);
        s_76 :
        if(match_cons(x_76, sym_TCons_2))
          {
            y_76 = ATgetArgument(x_76, 0);
            z_76 = ATgetArgument(x_76, 1);
            t_76 :
            if(match_cons(z_76, sym_TCons_2))
              {
                a_77 = ATgetArgument(z_76, 0);
                b_77 = ATgetArgument(z_76, 1);
                u_76 :
                if(match_cons(b_77, sym_TNil_0))
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_76), not_null(a_77));
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, svars_arity_0, r_4);
  t = FilterNonMissingDefs_0(t);
  {
    ATerm l_11 = t;
    if(PushChoice()==0)
      {
        t = NoMissingDefs_0(t);
        PopChoice();
      }
    else
      {
        t = l_11;
        t = MissingDefs_0(t);
        t = (ATerm) ATmakeInt(1);
        t = exit_0(t);
      }
  }
  return(t);
}
ATerm needed_defs_0 (ATerm t)
{
  ATerm g_77 = NULL;
  g_77 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("main", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_77), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = extract_needed_defs_0(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm e_43 (ATerm))
{
  ATerm m_77 = NULL,n_77 = NULL;
  m_77 = t;
  l_77 :
  if(match_cons(m_77, sym_Strategies_1))
    {
      n_77 = ATgetArgument(m_77, 0);
      {
        ATerm p_77 = NULL;
        t = not_null(n_77);
        t = e_43(t);
        p_77 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(p_77));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_45 (ATerm), ATerm k_45 (ATerm))
{
  ATerm x_77 = NULL,y_77 = NULL,z_77 = NULL;
  x_77 = t;
  w_77 :
  if(match_cons(x_77, sym_Cons_2))
    {
      y_77 = ATgetArgument(x_77, 0);
      z_77 = ATgetArgument(x_77, 1);
      {
        ATerm c_78 = NULL;
        t = not_null(y_77);
        {
          ATerm e_78 = NULL;
          t = j_45(t);
          c_78 = t;
          t = not_null(z_77);
          t = k_45(t);
          e_78 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_78), not_null(e_78));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm g_43 (ATerm))
{
  ATerm m_78 = NULL,n_78 = NULL;
  m_78 = t;
  l_78 :
  if(match_cons(m_78, sym_Specification_1))
    {
      n_78 = ATgetArgument(m_78, 0);
      {
        ATerm p_78 = NULL;
        t = not_null(n_78);
        t = g_43(t);
        p_78 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(p_78));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm u_78 = NULL;
  u_78 = t;
  t_78 :
  if(!(match_cons(u_78, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm f_45 (ATerm), ATerm g_45 (ATerm))
{
  ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL;
  z_78 = t;
  y_78 :
  if(match_cons(z_78, sym_TCons_2))
    {
      a_79 = ATgetArgument(z_78, 0);
      b_79 = ATgetArgument(z_78, 1);
      {
        ATerm e_79 = NULL;
        t = not_null(a_79);
        {
          ATerm g_79 = NULL;
          t = f_45(t);
          e_79 = t;
          t = not_null(b_79);
          t = g_45(t);
          g_79 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_79), not_null(g_79));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm n_79 = NULL;
  ATerm m_11;
  m_11 = t;
  {
    ATerm v_4 (ATerm t)
    {
      ATerm o_79 = NULL,p_79 = NULL;
      o_79 = t;
      m_79 :
      if(match_cons(o_79, sym_Program_1))
        {
          p_79 = ATgetArgument(o_79, 0);
          if(n_79 != NULL && n_79 != p_79)
            _fail(p_79);
          else
            n_79 = p_79;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, v_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_79), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = m_11;
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
  ATerm s_79 = NULL;
  s_79 = t;
  t = SSL_exit(not_null(s_79));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL,d_80 = NULL;
  z_79 = t;
  w_79 :
  if(match_cons(z_79, sym_TCons_2))
    {
      a_80 = ATgetArgument(z_79, 0);
      b_80 = ATgetArgument(z_79, 1);
      x_79 :
      if(match_cons(b_80, sym_TCons_2))
        {
          c_80 = ATgetArgument(b_80, 0);
          d_80 = ATgetArgument(b_80, 1);
          y_79 :
          if(match_cons(d_80, sym_TNil_0))
            {
              ATerm n_11;
              n_11 = t;
              t = SSL_printnl(not_null(a_80), not_null(c_80));
              t = n_11;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_62 (ATerm))
{
  ATerm o_11 = t;
  if(PushChoice()==0)
    {
      t = n_62(t);
      PopChoice();
    }
  else
    t = o_11;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm m_80 = NULL,n_80 = NULL;
  ATerm e_5 (ATerm t)
  {
    ATerm f_5 (ATerm t)
    {
      ATerm p_11 = t;
      if(PushChoice()==0)
        {
          ATerm m_5 (ATerm t)
          {
            ATerm o_80 = NULL;
            o_80 = t;
            h_80 :
            if(!(match_cons(o_80, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, m_5);
          PopChoice();
          _fail(t);
        }
      else
        t = p_11;
      return(t);
    }
    ATerm l_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, f_5, l_5);
    {
      ATerm q_5 (ATerm t)
      {
        ATerm s_5 (ATerm t)
        {
          ATerm p_80 = NULL,q_80 = NULL;
          p_80 = t;
          j_80 :
          if(match_cons(p_80, sym_Runtime_1))
            {
              q_80 = ATgetArgument(p_80, 0);
              if(n_80 != NULL && n_80 != q_80)
                _fail(q_80);
              else
                n_80 = q_80;
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
            ATerm r_80 = NULL,s_80 = NULL;
            r_80 = t;
            l_80 :
            if(match_cons(r_80, sym_Program_1))
              {
                s_80 = ATgetArgument(r_80, 0);
                if(m_80 != NULL && m_80 != s_80)
                  _fail(s_80);
                else
                  m_80 = s_80;
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
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_80), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_80), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm a_81 = NULL,b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL;
  a_81 = t;
  w_80 :
  if(match_cons(a_81, sym_TCons_2))
    {
      b_81 = ATgetArgument(a_81, 0);
      c_81 = ATgetArgument(a_81, 1);
      x_80 :
      if(match_cons(c_81, sym_TCons_2))
        {
          d_81 = ATgetArgument(c_81, 0);
          e_81 = ATgetArgument(c_81, 1);
          y_80 :
          if(match_cons(e_81, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(b_81), not_null(d_81));
          else
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
  ATerm m_81 = NULL,n_81 = NULL,o_81 = NULL,p_81 = NULL,q_81 = NULL;
  m_81 = t;
  j_81 :
  if(match_cons(m_81, sym_TCons_2))
    {
      n_81 = ATgetArgument(m_81, 0);
      o_81 = ATgetArgument(m_81, 1);
      k_81 :
      if(match_cons(o_81, sym_TCons_2))
        {
          p_81 = ATgetArgument(o_81, 0);
          q_81 = ATgetArgument(o_81, 1);
          l_81 :
          if(match_cons(q_81, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(n_81), not_null(p_81));
          else
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
  ATerm z_81 = NULL;
  ATerm q_11;
  q_11 = t;
  {
    ATerm w_5 (ATerm t)
    {
      ATerm r_11 = t;
      if(PushChoice()==0)
        {
          ATerm y_5 (ATerm t)
          {
            ATerm a_82 = NULL,b_82 = NULL;
            a_82 = t;
            w_81 :
            if(match_cons(a_82, sym_Output_1))
              {
                b_82 = ATgetArgument(a_82, 0);
                if(z_81 != NULL && z_81 != b_82)
                  _fail(b_82);
                else
                  z_81 = b_82;
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
          t = r_11;
          {
            ATerm c_82 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            c_82 = t;
            if(z_81 != NULL && z_81 != c_82)
              _fail(c_82);
            else
              z_81 = c_82;
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
  t = q_11;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm e_6 (ATerm t)
      {
        ATerm g_6 (ATerm t)
        {
          t = not_null(z_81);
          return(t);
        }
        t = split_2(t, g_6, _id);
        return(t);
      }
      t = TCons_2(t, e_6, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, d_6);
    {
      ATerm s_11 = t;
      if(PushChoice()==0)
        {
          ATerm i_6 (ATerm t)
          {
            ATerm k_6 (ATerm t)
            {
              ATerm d_82 = NULL;
              d_82 = t;
              y_81 :
              if(!(match_cons(d_82, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, k_6);
            return(t);
          }
          ATerm j_6 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, i_6, j_6);
          PopChoice();
        }
      else
        {
          t = s_11;
          {
            ATerm l_6 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, l_6);
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
ATerm apply_strategy_1 (ATerm t, ATerm t_48 (ATerm))
{
  ATerm m_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL;
  ATerm t_11;
  t_11 = t;
  t = dtime_0(t);
  t = t_11;
  t = t_48(t);
  {
    ATerm u_11;
    u_11 = t;
    {
      ATerm n_82 = NULL;
      t = dtime_0(t);
      n_82 = t;
      if(m_82 != NULL && m_82 != n_82)
        _fail(n_82);
      else
        m_82 = n_82;
    }
    t = u_11;
    o_82 = t;
    i_82 :
    if(match_cons(o_82, sym_TCons_2))
      {
        p_82 = ATgetArgument(o_82, 0);
        q_82 = ATgetArgument(o_82, 1);
        j_82 :
        if(match_cons(q_82, sym_TCons_2))
          {
            r_82 = ATgetArgument(q_82, 0);
            s_82 = ATgetArgument(q_82, 1);
            l_82 :
            if(match_cons(s_82, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(m_82)), not_null(p_82)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_82), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm y_82 = NULL;
  y_82 = t;
  t = SSL_ReadFromFile(not_null(y_82));
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_61 (ATerm), ATerm w_61 (ATerm))
{
  ATerm f_83 = NULL;
  ATerm h_83 = NULL;
  f_83 = t;
  {
    ATerm j_83 = NULL;
    t = v_61(t);
    h_83 = t;
    t = not_null(f_83);
    t = w_61(t);
    j_83 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_83), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_83), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm r_83 = NULL;
  ATerm v_11;
  v_11 = t;
  {
    ATerm w_11 = t;
    if(PushChoice()==0)
      {
        ATerm m_6 (ATerm t)
        {
          ATerm s_83 = NULL,t_83 = NULL;
          s_83 = t;
          p_83 :
          if(match_cons(s_83, sym_Input_1))
            {
              t_83 = ATgetArgument(s_83, 0);
              if(r_83 != NULL && r_83 != t_83)
                _fail(t_83);
              else
                r_83 = t_83;
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
        t = w_11;
        {
          ATerm u_83 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          u_83 = t;
          if(r_83 != NULL && r_83 != u_83)
            _fail(u_83);
          else
            r_83 = u_83;
        }
      }
  }
  t = v_11;
  {
    ATerm n_6 (ATerm t)
    {
      t = not_null(r_83);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, n_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm y_83 = NULL;
  y_83 = t;
  x_83 :
  if(!(match_cons(y_83, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm o_40 (ATerm))
{
  ATerm c_84 = NULL,d_84 = NULL;
  c_84 = t;
  b_84 :
  if(match_cons(c_84, sym_Undefined_1))
    {
      d_84 = ATgetArgument(c_84, 0);
      {
        ATerm f_84 = NULL;
        t = not_null(d_84);
        t = o_40(t);
        f_84 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_84));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_84 = NULL;
  k_84 = t;
  j_84 :
  if(!(match_cons(k_84, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm p_60 (ATerm))
{
  ATerm l_84 (ATerm t)
  {
    ATerm x_11 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, p_60, _id);
        PopChoice();
      }
    else
      {
        t = x_11;
        t = Cons_2(t, _id, l_84);
      }
    return(t);
  }
  t = l_84(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm x_47 (ATerm))
{
  t = fetch_1(t, x_47);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_48 (ATerm))
{
  ATerm o_6 (ATerm t)
  {
    ATerm z_11 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = z_11;
        {
          ATerm a_12 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = a_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, o_6);
  t = s_48(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_84 = NULL,s_84 = NULL,t_84 = NULL;
  ATerm b_12;
  b_12 = t;
  {
    ATerm u_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL;
    u_84 = t;
    n_84 :
    if(match_cons(u_84, sym_TCons_2))
      {
        x_84 = ATgetArgument(u_84, 0);
        y_84 = ATgetArgument(u_84, 1);
        o_84 :
        if(match_cons(y_84, sym_TCons_2))
          {
            z_84 = ATgetArgument(y_84, 0);
            a_85 = ATgetArgument(y_84, 1);
            p_84 :
            if(match_cons(a_85, sym_TCons_2))
              {
                b_85 = ATgetArgument(a_85, 0);
                c_85 = ATgetArgument(a_85, 1);
                q_84 :
                if(match_cons(c_85, sym_TNil_0))
                  {
                    if(r_84 != NULL && r_84 != x_84)
                      _fail(x_84);
                    else
                      r_84 = x_84;
                    if(s_84 != NULL && s_84 != z_84)
                      _fail(z_84);
                    else
                      s_84 = z_84;
                    if(t_84 != NULL && t_84 != b_85)
                      _fail(b_85);
                    else
                      t_84 = b_85;
                    t = SSL_table_put(not_null(r_84), not_null(s_84), not_null(t_84));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = b_12;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_85 = NULL;
  f_85 = t;
  t = SSL_table_create(not_null(f_85));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_85 = NULL;
  j_85 = t;
  {
    ATerm c_12;
    c_12 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_85), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = c_12;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm q_47 (ATerm), ATerm r_47 (ATerm))
{
  ATerm p_85 = NULL,q_85 = NULL,r_85 = NULL;
  p_85 = t;
  o_85 :
  if(match_cons(p_85, sym_Cons_2))
    {
      q_85 = ATgetArgument(p_85, 0);
      r_85 = ATgetArgument(p_85, 1);
      {
        ATerm u_85 = NULL;
        t = not_null(q_85);
        t = q_47(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = r_47(t);
        u_85 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_85), not_null(r_85));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm s_47 (ATerm), ATerm t_47 (ATerm))
{
  ATerm c_86 = NULL,d_86 = NULL,e_86 = NULL,f_86 = NULL,g_86 = NULL;
  c_86 = t;
  a_86 :
  if(match_cons(c_86, sym_Cons_2))
    {
      d_86 = ATgetArgument(c_86, 0);
      e_86 = ATgetArgument(c_86, 1);
      b_86 :
      if(match_cons(e_86, sym_Cons_2))
        {
          f_86 = ATgetArgument(e_86, 0);
          g_86 = ATgetArgument(e_86, 1);
          {
            ATerm k_86 = NULL;
            t = not_null(d_86);
            t = s_47(t);
            t = not_null(f_86);
            t = t_47(t);
            k_86 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_86), not_null(g_86));
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
  ATerm d_12 = t;
  if(PushChoice()==0)
    {
      ATerm t_6 (ATerm t)
      {
        ATerm i_87 = NULL;
        i_87 = t;
        o_86 :
        if(!(match_string(i_87, "-S")))
          _fail(t);
        return(t);
      }
      ATerm u_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, t_6, u_6);
      PopChoice();
    }
  else
    {
      t = d_12;
      {
        ATerm e_12 = t;
        if(PushChoice()==0)
          {
            ATerm w_6 (ATerm t)
            {
              ATerm j_87 = NULL;
              j_87 = t;
              p_86 :
              if(!(match_string(j_87, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm y_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, w_6, y_6);
            PopChoice();
          }
        else
          {
            t = e_12;
            {
              ATerm f_12 = t;
              if(PushChoice()==0)
                {
                  ATerm z_6 (ATerm t)
                  {
                    ATerm k_87 = NULL;
                    k_87 = t;
                    q_86 :
                    if(!(match_string(k_87, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm a_7 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, z_6, a_7);
                  PopChoice();
                }
              else
                {
                  t = f_12;
                  {
                    ATerm g_12 = t;
                    if(PushChoice()==0)
                      {
                        ATerm b_7 (ATerm t)
                        {
                          ATerm l_87 = NULL;
                          l_87 = t;
                          r_86 :
                          if(!(match_string(l_87, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm c_7 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, b_7, c_7);
                        PopChoice();
                      }
                    else
                      {
                        t = g_12;
                        {
                          ATerm h_12 = t;
                          if(PushChoice()==0)
                            {
                              ATerm h_7 (ATerm t)
                              {
                                ATerm m_87 = NULL;
                                m_87 = t;
                                s_86 :
                                if(!(match_string(m_87, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm i_7 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, h_7, i_7);
                              PopChoice();
                            }
                          else
                            {
                              t = h_12;
                              {
                                ATerm i_12 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm j_7 (ATerm t)
                                    {
                                      ATerm n_87 = NULL;
                                      n_87 = t;
                                      t_86 :
                                      if(!(match_string(n_87, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm k_7 (ATerm t)
                                    {
                                      ATerm o_87 = NULL;
                                      o_87 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(o_87));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, j_7, k_7);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = i_12;
                                    {
                                      ATerm q_12 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm l_7 (ATerm t)
                                          {
                                            ATerm q_87 = NULL;
                                            q_87 = t;
                                            v_86 :
                                            if(!(match_string(q_87, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm p_7 (ATerm t)
                                          {
                                            ATerm r_87 = NULL;
                                            r_87 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_87));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, l_7, p_7);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = q_12;
                                          {
                                            ATerm r_12 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm q_7 (ATerm t)
                                                {
                                                  ATerm t_87 = NULL;
                                                  t_87 = t;
                                                  x_86 :
                                                  if(!(match_string(t_87, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm r_7 (ATerm t)
                                                {
                                                  ATerm u_87 = NULL;
                                                  u_87 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_87));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, q_7, r_7);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = r_12;
                                                {
                                                  ATerm s_12 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm s_7 (ATerm t)
                                                      {
                                                        ATerm w_87 = NULL;
                                                        w_87 = t;
                                                        z_86 :
                                                        if(!(match_string(w_87, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm t_7 (ATerm t)
                                                      {
                                                        ATerm x_87 = NULL;
                                                        x_87 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_87));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, s_7, t_7);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = s_12;
                                                      {
                                                        ATerm u_12 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm u_7 (ATerm t)
                                                            {
                                                              ATerm z_87 = NULL;
                                                              z_87 = t;
                                                              b_87 :
                                                              if(!(match_string(z_87, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm v_7 (ATerm t)
                                                            {
                                                              ATerm a_88 = NULL;
                                                              a_88 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_88));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, u_7, v_7);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = u_12;
                                                            {
                                                              ATerm v_12 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm w_7 (ATerm t)
                                                                  {
                                                                    ATerm c_88 = NULL;
                                                                    c_88 = t;
                                                                    d_87 :
                                                                    if(!(match_string(c_88, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm z_7 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, w_7, z_7);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = v_12;
                                                                  {
                                                                    ATerm w_12 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm a_8 (ATerm t)
                                                                        {
                                                                          ATerm d_88 = NULL;
                                                                          d_88 = t;
                                                                          e_87 :
                                                                          if(!(match_string(d_88, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm b_8 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, a_8, b_8);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = w_12;
                                                                        {
                                                                          ATerm b_13 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm c_8 (ATerm t)
                                                                              {
                                                                                ATerm e_88 = NULL;
                                                                                e_88 = t;
                                                                                f_87 :
                                                                                if(!(match_string(e_88, "--help")))
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
                                                                              t = b_13;
                                                                              {
                                                                                ATerm e_13 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm e_8 (ATerm t)
                                                                                    {
                                                                                      ATerm f_88 = NULL;
                                                                                      f_88 = t;
                                                                                      g_87 :
                                                                                      if(!(match_string(f_88, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm f_8 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, e_8, f_8);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = e_13;
                                                                                    {
                                                                                      ATerm g_8 (ATerm t)
                                                                                      {
                                                                                        ATerm g_88 = NULL;
                                                                                        g_88 = t;
                                                                                        h_87 :
                                                                                        if(!(match_string(g_88, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm h_8 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, g_8, h_8);
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
  ATerm o_88 = NULL,p_88 = NULL,q_88 = NULL;
  o_88 = t;
  n_88 :
  if(match_cons(o_88, sym_Cons_2))
    {
      p_88 = ATgetArgument(o_88, 0);
      q_88 = ATgetArgument(o_88, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_88)), not_null(q_88));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_47 (ATerm))
{
  ATerm i_8 (ATerm t)
  {
    ATerm v_88 = NULL;
    v_88 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_88));
    return(t);
  }
  ATerm j_8 (ATerm t)
  {
    ATerm f_13 = t;
    if(PushChoice()==0)
      {
        ATerm g_13 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = g_13;
            t = o_47(t);
            t = Cons_2(t, _id, j_8);
          }
        PopChoice();
      }
    else
      {
        t = f_13;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, i_8, j_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm h_48 (ATerm), ATerm i_48 (ATerm), ATerm j_48 (ATerm))
{
  ATerm k_8 (ATerm t)
  {
    ATerm h_13 = t;
    if(PushChoice()==0)
      {
        t = i_48(t);
        PopChoice();
      }
    else
      {
        t = h_13;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, k_8);
  t = store_options_0(t);
  {
    ATerm i_13 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, j_48);
        PopChoice();
      }
    else
      {
        t = i_13;
        {
          ATerm o_13 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, h_48);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = o_13;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm c_48 (ATerm), ATerm d_48 (ATerm))
{
  t = iowrap_3(t, c_48, d_48, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm z_47 (ATerm))
{
  ATerm l_8 (ATerm t)
  {
    ATerm m_8 (ATerm t)
    {
      t = TCons_2(t, z_47, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, m_8);
    return(t);
  }
  t = iowrap_2(t, l_8, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm n_8 (ATerm t)
  {
    ATerm o_8 (ATerm t)
    {
      ATerm p_8 (ATerm t)
      {
        ATerm q_8 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, q_8, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, p_8);
      return(t);
    }
    t = Specification_1(t, o_8);
    return(t);
  }
  t = iowrap_1(t, n_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_0(t);
  return(t);
}
