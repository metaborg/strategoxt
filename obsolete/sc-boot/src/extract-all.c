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
ATerm MissingDef_0 (ATerm);
ATerm error_0 (ATerm);
ATerm MissingDefMod_0 (ATerm);
ATerm MissingDefs_0 (ATerm);
ATerm NoMissingDefs_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm o_41 (ATerm), ATerm p_41 (ATerm));
ATerm Let_2 (ATerm, ATerm q_41 (ATerm), ATerm r_41 (ATerm));
ATerm sboundin_3 (ATerm, ATerm y_61 (ATerm), ATerm z_61 (ATerm), ATerm a_62 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm c_49 (ATerm), ATerm d_49 (ATerm), ATerm e_49 (ATerm));
ATerm collect_kids_1 (ATerm, ATerm k_49 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm t_48 (ATerm), ATerm u_48 (ATerm));
ATerm diff_p__1 (ATerm, ATerm x_48 (ATerm));
ATerm diff_1 (ATerm, ATerm z_48 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm a_53 (ATerm), ATerm b_53 (ATerm), ATerm c_53 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_53 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm FoldR_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm o_47 (ATerm), ATerm p_47 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm b_61 (ATerm), ATerm c_61 (ATerm));
ATerm alltd_1 (ATerm, ATerm b_60 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm d_61 (ATerm), ATerm e_61 (ATerm));
ATerm substitute_1 (ATerm, ATerm f_61 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm NonOverloadedDef_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm s_41 (ATerm), ATerm t_41 (ATerm), ATerm u_41 (ATerm));
ATerm partition_1 (ATerm, ATerm z_54 (ATerm));
ATerm OverloadedDef_0 (ATerm);
ATerm Expl_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm j_50 (ATerm), ATerm k_50 (ATerm));
ATerm repeat_1 (ATerm, ATerm m_50 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm p_39 (ATerm), ATerm q_39 (ATerm));
ATerm Con_3 (ATerm, ATerm m_39 (ATerm), ATerm n_39 (ATerm), ATerm o_39 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm s_42 (ATerm), ATerm t_42 (ATerm));
ATerm oncetd_1 (ATerm, ATerm q_59 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm a_58 (ATerm));
ATerm desugar_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm map_1 (ATerm, ATerm w_62 (ATerm));
ATerm Ttl_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm s_56 (ATerm));
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm r_55 (ATerm));
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm new_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm j_48 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_63 (ATerm));
ATerm conc_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm j_55 (ATerm), ATerm k_55 (ATerm), ATerm l_55 (ATerm), ATerm m_55 (ATerm));
ATerm zip_1 (ATerm, ATerm o_55 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm d_43 (ATerm), ATerm e_43 (ATerm), ATerm f_43 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm a_51 (ATerm), ATerm b_51 (ATerm));
ATerm for_3 (ATerm, ATerm d_51 (ATerm), ATerm e_51 (ATerm), ATerm f_51 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm j_43 (ATerm), ATerm k_43 (ATerm), ATerm l_43 (ATerm));
ATerm add_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm length_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm s_48 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm r_47 (ATerm), ATerm s_47 (ATerm), ATerm t_47 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm x_42 (ATerm), ATerm y_42 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_57 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm z_45 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_56 (ATerm), ATerm y_56 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm g_38 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm f_63 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_45 (ATerm));
ATerm need_help_1 (ATerm, ATerm y_45 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm w_44 (ATerm), ATerm x_44 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm y_44 (ATerm), ATerm z_44 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_43 (ATerm), ATerm c_43 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm u_44 (ATerm));
ATerm iowrap_3 (ATerm, ATerm n_45 (ATerm), ATerm o_45 (ATerm), ATerm p_45 (ATerm));
ATerm iowrap_2 (ATerm, ATerm i_45 (ATerm), ATerm j_45 (ATerm));
ATerm iowrap_1 (ATerm, ATerm f_45 (ATerm));
ATerm extract_all_0 (ATerm);
ATerm main_0 (ATerm);
ATerm MissingDef_0 (ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL;
  q_1 = t;
  n_1 :
  if(match_cons(q_1, sym_TCons_2))
    {
      r_1 = ATgetArgument(q_1, 0);
      s_1 = ATgetArgument(q_1, 1);
      o_1 :
      if(match_cons(s_1, sym_TCons_2))
        {
          t_1 = ATgetArgument(s_1, 0);
          u_1 = ATgetArgument(s_1, 1);
          p_1 :
          if(match_cons(u_1, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_1), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("/", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_1), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
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
  ATerm q_8;
  q_8 = t;
  {
    ATerm a_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, a_0, _id);
    t = printnl_0(t);
  }
  t = q_8;
  return(t);
}
ATerm MissingDefMod_0 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL;
  d_2 = t;
  z_1 :
  if(match_cons(d_2, sym_TCons_2))
    {
      e_2 = ATgetArgument(d_2, 0);
      h_2 = ATgetArgument(d_2, 1);
      a_2 :
      if(match_cons(e_2, sym_Mod_2))
        {
          f_2 = ATgetArgument(e_2, 0);
          g_2 = ATgetArgument(e_2, 1);
          b_2 :
          if(match_cons(h_2, sym_TCons_2))
            {
              i_2 = ATgetArgument(h_2, 0);
              j_2 = ATgetArgument(h_2, 1);
              c_2 :
              if(match_cons(j_2, sym_TNil_0))
                {
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_2), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("^", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_2), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("/", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_2), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))))));
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
  ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL;
  t_2 = t;
  p_2 :
  if(match_cons(t_2, sym_TCons_2))
    {
      u_2 = ATgetArgument(t_2, 0);
      v_2 = ATgetArgument(t_2, 1);
      q_2 :
      if(match_cons(v_2, sym_TCons_2))
        {
          w_2 = ATgetArgument(v_2, 0);
          z_2 = ATgetArgument(v_2, 1);
          r_2 :
          if(match_cons(w_2, sym_Cons_2))
            {
              x_2 = ATgetArgument(w_2, 0);
              y_2 = ATgetArgument(w_2, 1);
              s_2 :
              if(match_cons(z_2, sym_TNil_0))
                {
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_2), not_null(y_2));
                  {
                    ATerm b_0 (ATerm t)
                    {
                      ATerm r_8 = t;
                      if(PushChoice()==0)
                        {
                          t = MissingDefMod_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = r_8;
                          t = MissingDef_0(t);
                        }
                      return(t);
                    }
                    t = map_1(t, b_0);
                  }
                  t = not_null(u_2);
                }
              else
                _fail(t);
            }
          else
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
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL;
  j_3 = t;
  f_3 :
  if(match_cons(j_3, sym_TCons_2))
    {
      k_3 = ATgetArgument(j_3, 0);
      l_3 = ATgetArgument(j_3, 1);
      g_3 :
      if(match_cons(l_3, sym_TCons_2))
        {
          m_3 = ATgetArgument(l_3, 0);
          n_3 = ATgetArgument(l_3, 1);
          h_3 :
          if(match_cons(m_3, sym_Nil_0))
            {
              i_3 :
              if(match_cons(n_3, sym_TNil_0))
                t = not_null(k_3);
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm o_41 (ATerm), ATerm p_41 (ATerm))
{
  ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL;
  u_3 = t;
  t_3 :
  if(match_cons(u_3, sym_Rec_2))
    {
      v_3 = ATgetArgument(u_3, 0);
      w_3 = ATgetArgument(u_3, 1);
      {
        ATerm z_3 = NULL;
        t = not_null(v_3);
        {
          ATerm b_4 = NULL;
          t = o_41(t);
          z_3 = t;
          t = not_null(w_3);
          t = p_41(t);
          b_4 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(z_3), not_null(b_4));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm q_41 (ATerm), ATerm r_41 (ATerm))
{
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL;
  k_4 = t;
  j_4 :
  if(match_cons(k_4, sym_Let_2))
    {
      l_4 = ATgetArgument(k_4, 0);
      m_4 = ATgetArgument(k_4, 1);
      {
        ATerm p_4 = NULL;
        t = not_null(l_4);
        {
          ATerm r_4 = NULL;
          t = q_41(t);
          p_4 = t;
          t = not_null(m_4);
          t = r_41(t);
          r_4 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(p_4), not_null(r_4));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm y_61 (ATerm), ATerm z_61 (ATerm), ATerm a_62 (ATerm))
{
  ATerm w_8 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, y_61, y_61);
      PopChoice();
    }
  else
    {
      t = w_8;
      {
        ATerm x_8 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, a_62, a_62, y_61);
            PopChoice();
          }
        else
          {
            t = x_8;
            t = Rec_2(t, a_62, y_61);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
  y_4 = t;
  x_4 :
  if(match_cons(y_4, sym_Rec_2))
    {
      z_4 = ATgetArgument(y_4, 0);
      a_5 = ATgetArgument(y_4, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_4), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,h_6 = NULL;
  u_5 = t;
  t_5 :
  if(match_cons(u_5, sym_SDef_3))
    {
      v_5 = ATgetArgument(u_5, 0);
      w_5 = ATgetArgument(u_5, 1);
      h_6 = ATgetArgument(u_5, 2);
      t = not_null(w_5);
      {
        ATerm c_0 (ATerm t)
        {
          ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
          v_6 = t;
          s_5 :
          if(match_cons(v_6, sym_VarDec_2))
            {
              w_6 = ATgetArgument(v_6, 0);
              x_6 = ATgetArgument(v_6, 1);
              t = not_null(w_6);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, c_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
  f_7 = t;
  e_7 :
  if(match_cons(f_7, sym_Let_2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      t = not_null(g_7);
      {
        ATerm d_0 (ATerm t)
        {
          ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL;
          k_7 = t;
          d_7 :
          if(match_cons(k_7, sym_SDef_3))
            {
              l_7 = ATgetArgument(k_7, 0);
              m_7 = ATgetArgument(k_7, 1);
              n_7 = ATgetArgument(k_7, 2);
              t = not_null(l_7);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, d_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm c_49 (ATerm), ATerm d_49 (ATerm), ATerm e_49 (ATerm))
{
  ATerm d_8 = NULL;
  ATerm f_8 = NULL;
  d_8 = t;
  {
    ATerm g_8 = NULL;
    ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL;
    t = not_null(d_8);
    g_8 = t;
    t = SSL_explode_term(not_null(g_8));
    i_8 = t;
    a_8 :
    if(match_cons(i_8, sym_TCons_2))
      {
        j_8 = ATgetArgument(i_8, 0);
        k_8 = ATgetArgument(i_8, 1);
        b_8 :
        if(match_cons(k_8, sym_TCons_2))
          {
            l_8 = ATgetArgument(k_8, 0);
            m_8 = ATgetArgument(k_8, 1);
            c_8 :
            if(match_cons(m_8, sym_TNil_0))
              {
                if(f_8 != NULL && f_8 != l_8)
                  _fail(l_8);
                else
                  f_8 = l_8;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(f_8);
    t = foldr_3(t, c_49, d_49, e_49);
  }
  return(t);
}
ATerm collect_kids_1 (ATerm t, ATerm k_49 (ATerm))
{
  ATerm e_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = crush_3(t, e_0, union_0, k_49);
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm t_48 (ATerm), ATerm u_48 (ATerm))
{
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
  t_8 = t;
  s_8 :
  if(match_cons(t_8, sym_Cons_2))
    {
      u_8 = ATgetArgument(t_8, 0);
      v_8 = ATgetArgument(t_8, 1);
      t = u_48(t);
      {
        ATerm f_0 (ATerm t)
        {
          ATerm y_8 = NULL;
          y_8 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_8), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_8), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = t_48(t);
          return(t);
        }
        t = fetch_1(t, f_0);
      }
      t = not_null(v_8);
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_p__1 (ATerm t, ATerm x_48 (ATerm))
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL;
  i_9 = t;
  f_9 :
  if(match_cons(i_9, sym_TCons_2))
    {
      j_9 = ATgetArgument(i_9, 0);
      k_9 = ATgetArgument(i_9, 1);
      g_9 :
      if(match_cons(k_9, sym_TCons_2))
        {
          l_9 = ATgetArgument(k_9, 0);
          m_9 = ATgetArgument(k_9, 1);
          h_9 :
          if(match_cons(m_9, sym_TNil_0))
            {
              t = not_null(j_9);
              {
                ATerm r_9 (ATerm t)
                {
                  ATerm z_8 = t;
                  if(PushChoice()==0)
                    {
                      ATerm p_9 = NULL;
                      p_9 = t;
                      e_9 :
                      if(!(match_cons(p_9, sym_Nil_0)))
                        _fail(t);
                      PopChoice();
                    }
                  else
                    {
                      t = z_8;
                      {
                        ATerm a_9 = t;
                        if(PushChoice()==0)
                          {
                            ATerm g_0 (ATerm t)
                            {
                              t = not_null(l_9);
                              return(t);
                            }
                            t = HdMember_p__2(t, x_48, g_0);
                            t = r_9(t);
                            PopChoice();
                          }
                        else
                          {
                            t = a_9;
                            t = Cons_2(t, _id, r_9);
                          }
                      }
                    }
                  return(t);
                }
                t = r_9(t);
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
ATerm diff_1 (ATerm t, ATerm z_48 (ATerm))
{
  t = diff_p__1(t, z_48);
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm a_53 (ATerm), ATerm b_53 (ATerm), ATerm c_53 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_53 (ATerm))
{
  ATerm b_10 (ATerm t)
  {
    ATerm h_0 (ATerm t)
    {
      ATerm b_9 = t;
      if(PushChoice()==0)
        {
          t = a_53(t);
          PopChoice();
        }
      else
        {
          t = b_9;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      return(t);
    }
    ATerm i_0 (ATerm t)
    {
      ATerm c_9 = t;
      if(PushChoice()==0)
        {
          ATerm t_9 = NULL;
          ATerm d_9;
          d_9 = t;
          {
            ATerm a_10 = NULL;
            t = b_53(t);
            a_10 = t;
            if(t_9 != NULL && t_9 != a_10)
              _fail(a_10);
            else
              t_9 = a_10;
          }
          t = d_9;
          {
            ATerm j_0 (ATerm t)
            {
              ATerm l_0 (ATerm t)
              {
                t = not_null(t_9);
                return(t);
              }
              t = split_2(t, b_10, l_0);
              t = diff_p__1(t, d_53);
              return(t);
            }
            ATerm k_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = c_53(t, j_0, b_10, k_0);
            t = collect_kids_1(t, _id);
          }
          PopChoice();
        }
      else
        {
          t = c_9;
          t = collect_kids_1(t, b_10);
        }
      return(t);
    }
    t = split_2(t, h_0, i_0);
    t = union_0(t);
    return(t);
  }
  t = b_10(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm m_0 (ATerm t)
  {
    ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL;
    g_11 = t;
    i_10 :
    if(match_cons(g_11, sym_Call_2))
      {
        h_11 = ATgetArgument(g_11, 0);
        j_11 = ATgetArgument(g_11, 1);
        w_10 :
        if(match_cons(h_11, sym_SVar_1))
          {
            i_11 = ATgetArgument(h_11, 0);
            {
              ATerm r_11 = NULL;
              t = not_null(j_11);
              t = length_0(t);
              r_11 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(i_11), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_11), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0));
            }
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm n_0 (ATerm t)
  {
    ATerm n_9 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = n_9;
        {
          ATerm o_9 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = o_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm o_0 (ATerm t)
  {
    ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL;
    t_11 = t;
    y_10 :
    if(match_cons(t_11, sym_TCons_2))
      {
        u_11 = ATgetArgument(t_11, 0);
        z_11 = ATgetArgument(t_11, 1);
        z_10 :
        if(match_cons(u_11, sym_TCons_2))
          {
            v_11 = ATgetArgument(u_11, 0);
            w_11 = ATgetArgument(u_11, 1);
            a_11 :
            if(match_cons(w_11, sym_TCons_2))
              {
                x_11 = ATgetArgument(w_11, 0);
                y_11 = ATgetArgument(w_11, 1);
                b_11 :
                if(match_cons(y_11, sym_TNil_0))
                  {
                    c_11 :
                    if(match_cons(z_11, sym_TCons_2))
                      {
                        a_12 = ATgetArgument(z_11, 0);
                        b_12 = ATgetArgument(z_11, 1);
                        d_11 :
                        if(match_cons(b_12, sym_TNil_0))
                          {
                            if(v_11 != NULL && v_11 != a_12)
                              _fail(a_12);
                            else
                              v_11 = a_12;
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = free_vars2_4(t, m_0, n_0, sboundin_3, o_0);
  return(t);
}
ATerm FoldR_0 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
  k_12 = t;
  h_12 :
  if(match_cons(k_12, sym_Cons_2))
    {
      l_12 = ATgetArgument(k_12, 0);
      m_12 = ATgetArgument(k_12, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_12), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm o_47 (ATerm), ATerm p_47 (ATerm))
{
  ATerm x_12 (ATerm t)
  {
    ATerm q_9 = t;
    if(PushChoice()==0)
      {
        ATerm v_12 = NULL;
        v_12 = t;
        t_12 :
        if(match_cons(v_12, sym_Nil_0))
          t = o_47(t);
        else
          _fail(t);
        PopChoice();
      }
    else
      {
        t = q_9;
        t = FoldR_0(t);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm q_0 (ATerm t)
            {
              ATerm w_12 = NULL;
              w_12 = t;
              u_12 :
              if(!(match_cons(w_12, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, x_12, q_0);
            return(t);
          }
          t = TCons_2(t, _id, p_0);
          t = p_47(t);
        }
      }
    return(t);
  }
  t = x_12(t);
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Fail_0);
    return(t);
  }
  ATerm s_0 (ATerm t)
  {
    ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL;
    d_13 = t;
    a_13 :
    if(match_cons(d_13, sym_TCons_2))
      {
        e_13 = ATgetArgument(d_13, 0);
        f_13 = ATgetArgument(d_13, 1);
        b_13 :
        if(match_cons(f_13, sym_TCons_2))
          {
            g_13 = ATgetArgument(f_13, 0);
            h_13 = ATgetArgument(f_13, 1);
            c_13 :
            if(match_cons(h_13, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(e_13), not_null(g_13));
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = foldr_2(t, r_0, s_0);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
  s_13 = t;
  p_13 :
  if(match_cons(s_13, sym_Call_2))
    {
      t_13 = ATgetArgument(s_13, 0);
      v_13 = ATgetArgument(s_13, 1);
      q_13 :
      if(match_cons(t_13, sym_SVar_1))
        {
          u_13 = ATgetArgument(t_13, 0);
          r_13 :
          if(match_cons(v_13, sym_Nil_0))
            t = not_null(u_13);
          else
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
  ATerm d_14 = NULL,e_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
  d_14 = t;
  z_13 :
  if(match_cons(d_14, sym_TCons_2))
    {
      e_14 = ATgetArgument(d_14, 0);
      h_14 = ATgetArgument(d_14, 1);
      a_14 :
      if(match_cons(h_14, sym_TCons_2))
        {
          i_14 = ATgetArgument(h_14, 0);
          l_14 = ATgetArgument(h_14, 1);
          b_14 :
          if(match_cons(i_14, sym_Cons_2))
            {
              j_14 = ATgetArgument(i_14, 0);
              k_14 = ATgetArgument(i_14, 1);
              c_14 :
              if(match_cons(l_14, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_14), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm z_14 = NULL,a_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,b_16 = NULL;
  z_14 = t;
  s_14 :
  if(match_cons(z_14, sym_TCons_2))
    {
      a_15 = ATgetArgument(z_14, 0);
      i_15 = ATgetArgument(z_14, 1);
      t_14 :
      if(match_cons(i_15, sym_TCons_2))
        {
          j_15 = ATgetArgument(i_15, 0);
          b_16 = ATgetArgument(i_15, 1);
          u_14 :
          if(match_cons(j_15, sym_Cons_2))
            {
              k_15 = ATgetArgument(j_15, 0);
              p_15 = ATgetArgument(j_15, 1);
              v_14 :
              if(match_cons(k_15, sym_TCons_2))
                {
                  l_15 = ATgetArgument(k_15, 0);
                  m_15 = ATgetArgument(k_15, 1);
                  w_14 :
                  if(match_cons(m_15, sym_TCons_2))
                    {
                      n_15 = ATgetArgument(m_15, 0);
                      o_15 = ATgetArgument(m_15, 1);
                      x_14 :
                      if(match_cons(o_15, sym_TNil_0))
                        {
                          y_14 :
                          if(match_cons(b_16, sym_TNil_0))
                            {
                              ATerm d_16 = NULL;
                              if(a_15 != NULL && a_15 != l_15)
                                _fail(l_15);
                              else
                                a_15 = l_15;
                              if(d_16 != NULL && d_16 != n_15)
                                _fail(n_15);
                              else
                                d_16 = n_15;
                              t = not_null(d_16);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm s_9 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = s_9;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm b_61 (ATerm), ATerm c_61 (ATerm))
{
  ATerm k_16 = NULL;
  ATerm m_16 = NULL,n_16 = NULL;
  k_16 = t;
  {
    ATerm o_16 = NULL;
    t = not_null(k_16);
    {
      ATerm p_16 = NULL;
      t = b_61(t);
      o_16 = t;
      if(m_16 != NULL && m_16 != o_16)
        _fail(o_16);
      else
        m_16 = o_16;
      t = c_61(t);
      p_16 = t;
      if(n_16 != NULL && n_16 != p_16)
        _fail(p_16);
      else
        n_16 = p_16;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_16), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm b_60 (ATerm))
{
  ATerm t_16 (ATerm t)
  {
    ATerm u_9 = t;
    if(PushChoice()==0)
      {
        t = b_60(t);
        PopChoice();
      }
    else
      {
        t = u_9;
        t = _all(t, t_16);
      }
    return(t);
  }
  t = t_16(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
  b_17 = t;
  x_16 :
  if(match_cons(b_17, sym_TCons_2))
    {
      c_17 = ATgetArgument(b_17, 0);
      d_17 = ATgetArgument(b_17, 1);
      y_16 :
      if(match_cons(d_17, sym_TCons_2))
        {
          e_17 = ATgetArgument(d_17, 0);
          f_17 = ATgetArgument(d_17, 1);
          z_16 :
          if(match_cons(f_17, sym_TNil_0))
            {
              ATerm j_17 = NULL;
              if(j_17 != NULL && j_17 != e_17)
                _fail(e_17);
              else
                j_17 = e_17;
            }
          else
            {
              if(match_cons(f_17, sym_TCons_2))
                {
                  g_17 = ATgetArgument(f_17, 0);
                  h_17 = ATgetArgument(f_17, 1);
                  a_17 :
                  if(match_cons(h_17, sym_TNil_0))
                    {
                      ATerm p_17 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_17), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      p_17 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_17), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm d_61 (ATerm), ATerm e_61 (ATerm))
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  t = subs_args_0(t);
  y_17 = t;
  v_17 :
  if(match_cons(y_17, sym_TCons_2))
    {
      z_17 = ATgetArgument(y_17, 0);
      a_18 = ATgetArgument(y_17, 1);
      w_17 :
      if(match_cons(a_18, sym_TCons_2))
        {
          b_18 = ATgetArgument(a_18, 0);
          c_18 = ATgetArgument(a_18, 1);
          x_17 :
          if(match_cons(c_18, sym_TNil_0))
            {
              t = not_null(b_18);
              {
                ATerm t_0 (ATerm t)
                {
                  ATerm u_0 (ATerm t)
                  {
                    t = not_null(z_17);
                    return(t);
                  }
                  t = SubsVar_2(t, d_61, u_0);
                  t = e_61(t);
                  return(t);
                }
                t = alltd_1(t, t_0);
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
ATerm substitute_1 (ATerm t, ATerm f_61 (ATerm))
{
  t = substitute_2(t, f_61, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
  x_18 = t;
  v_18 :
  if(match_cons(x_18, sym_Cons_2))
    {
      y_18 = ATgetArgument(x_18, 0);
      c_19 = ATgetArgument(x_18, 1);
      w_18 :
      if(match_cons(y_18, sym_SDef_3))
        {
          z_18 = ATgetArgument(y_18, 0);
          a_19 = ATgetArgument(y_18, 1);
          b_19 = ATgetArgument(y_18, 2);
          {
            ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,l_20 = NULL;
            ATerm r_19 = NULL;
            t = not_null(a_19);
            {
              ATerm x_19 = NULL;
              ATerm v_0 (ATerm t)
              {
                ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
                k_19 = t;
                j_18 :
                if(match_cons(k_19, sym_VarDec_2))
                  {
                    l_19 = ATgetArgument(k_19, 0);
                    m_19 = ATgetArgument(k_19, 1);
                    {
                      ATerm p_19 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TNil_0);
                      t = new_0(t);
                      p_19 = t;
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(p_19), not_null(m_19));
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, v_0);
              r_19 = t;
              if(h_19 != NULL && h_19 != r_19)
                _fail(r_19);
              else
                h_19 = r_19;
              t = not_null(h_19);
              {
                ATerm k_20 = NULL;
                ATerm w_0 (ATerm t)
                {
                  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
                  s_19 = t;
                  m_18 :
                  if(match_cons(s_19, sym_VarDec_2))
                    {
                      t_19 = ATgetArgument(s_19, 0);
                      u_19 = ATgetArgument(s_19, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_19)), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = map_1(t, w_0);
                x_19 = t;
                if(i_19 != NULL && i_19 != x_19)
                  _fail(x_19);
                else
                  i_19 = x_19;
                t = not_null(x_18);
                {
                  ATerm x_0 (ATerm t)
                  {
                    ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL;
                    y_19 = t;
                    s_18 :
                    if(match_cons(y_19, sym_SDef_3))
                      {
                        z_19 = ATgetArgument(y_19, 0);
                        a_20 = ATgetArgument(y_19, 1);
                        b_20 = ATgetArgument(y_19, 2);
                        {
                          ATerm c_20 = NULL,d_20 = NULL,i_20 = NULL;
                          if(z_18 != NULL && z_18 != z_19)
                            _fail(z_19);
                          else
                            z_18 = z_19;
                          if(c_20 != NULL && c_20 != a_20)
                            _fail(a_20);
                          else
                            c_20 = a_20;
                          if(d_20 != NULL && d_20 != b_20)
                            _fail(b_20);
                          else
                            d_20 = b_20;
                          t = not_null(c_20);
                          {
                            ATerm y_0 (ATerm t)
                            {
                              ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
                              e_20 = t;
                              q_18 :
                              if(match_cons(e_20, sym_VarDec_2))
                                {
                                  f_20 = ATgetArgument(e_20, 0);
                                  g_20 = ATgetArgument(e_20, 1);
                                  t = not_null(f_20);
                                }
                              else
                                _fail(t);
                              return(t);
                            }
                            t = map_1(t, y_0);
                            i_20 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_20), (ATerm) ATmakeAppl(sym_TNil_0))));
                            t = substitute_1(t, IsSVar_0);
                          }
                        }
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = map_1(t, x_0);
                  k_20 = t;
                  if(j_19 != NULL && j_19 != k_20)
                    _fail(k_20);
                  else
                    j_19 = k_20;
                }
              }
            }
            t = not_null(j_19);
            t = choices_0(t);
            l_20 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(z_18), not_null(h_19), not_null(l_20));
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
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
  c_21 = t;
  a_21 :
  if(match_cons(c_21, sym_Cons_2))
    {
      d_21 = ATgetArgument(c_21, 0);
      e_21 = ATgetArgument(c_21, 1);
      b_21 :
      if(match_cons(e_21, sym_Nil_0))
        t = not_null(d_21);
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
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL;
  q_21 = t;
  j_21 :
  if(match_cons(q_21, sym_TCons_2))
    {
      r_21 = ATgetArgument(q_21, 0);
      w_21 = ATgetArgument(q_21, 1);
      k_21 :
      if(match_cons(r_21, sym_TCons_2))
        {
          s_21 = ATgetArgument(r_21, 0);
          t_21 = ATgetArgument(r_21, 1);
          l_21 :
          if(match_cons(t_21, sym_TCons_2))
            {
              u_21 = ATgetArgument(t_21, 0);
              v_21 = ATgetArgument(t_21, 1);
              m_21 :
              if(match_int(u_21, 0))
                {
                  n_21 :
                  if(match_cons(v_21, sym_TNil_0))
                    {
                      o_21 :
                      if(match_cons(w_21, sym_TCons_2))
                        {
                          x_21 = ATgetArgument(w_21, 0);
                          y_21 = ATgetArgument(w_21, 1);
                          p_21 :
                          if(match_cons(y_21, sym_TNil_0))
                            {
                              t = not_null(x_21);
                              {
                                ATerm z_0 (ATerm t)
                                {
                                  ATerm a_1 (ATerm t)
                                  {
                                    ATerm l_22 = NULL;
                                    l_22 = t;
                                    if(s_21 != NULL && s_21 != l_22)
                                      _fail(l_22);
                                    else
                                      s_21 = l_22;
                                    return(t);
                                  }
                                  t = SDef_3(t, a_1, _id, _id);
                                  return(t);
                                }
                                t = partition_1(t, z_0);
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
ATerm SDef_3 (ATerm t, ATerm s_41 (ATerm), ATerm t_41 (ATerm), ATerm u_41 (ATerm))
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
  x_22 = t;
  w_22 :
  if(match_cons(x_22, sym_SDef_3))
    {
      y_22 = ATgetArgument(x_22, 0);
      z_22 = ATgetArgument(x_22, 1);
      a_23 = ATgetArgument(x_22, 2);
      {
        ATerm g_23 = NULL;
        t = not_null(y_22);
        {
          ATerm i_23 = NULL;
          t = s_41(t);
          g_23 = t;
          t = not_null(z_22);
          {
            ATerm k_23 = NULL;
            t = t_41(t);
            i_23 = t;
            t = not_null(a_23);
            t = u_41(t);
            k_23 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(g_23), not_null(i_23), not_null(k_23));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm partition_1 (ATerm t, ATerm z_54 (ATerm))
{
  ATerm z_24 (ATerm t)
  {
    ATerm w_9 = t;
    if(PushChoice()==0)
      {
        ATerm c_24 = NULL;
        c_24 = t;
        r_23 :
        if(match_cons(c_24, sym_Nil_0))
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
        else
          _fail(t);
        PopChoice();
      }
    else
      {
        t = w_9;
        {
          ATerm x_9 = t;
          if(PushChoice()==0)
            {
              ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,k_24 = NULL,l_24 = NULL;
              t = Cons_2(t, z_54, z_24);
              d_24 = t;
              t_23 :
              if(match_cons(d_24, sym_Cons_2))
                {
                  e_24 = ATgetArgument(d_24, 0);
                  f_24 = ATgetArgument(d_24, 1);
                  u_23 :
                  if(match_cons(f_24, sym_TCons_2))
                    {
                      g_24 = ATgetArgument(f_24, 0);
                      h_24 = ATgetArgument(f_24, 1);
                      v_23 :
                      if(match_cons(h_24, sym_TCons_2))
                        {
                          k_24 = ATgetArgument(h_24, 0);
                          l_24 = ATgetArgument(h_24, 1);
                          w_23 :
                          if(match_cons(l_24, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_24), not_null(g_24)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_24), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
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
              t = x_9;
              {
                ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL;
                t = Cons_2(t, _id, z_24);
                p_24 = t;
                y_23 :
                if(match_cons(p_24, sym_Cons_2))
                  {
                    q_24 = ATgetArgument(p_24, 0);
                    r_24 = ATgetArgument(p_24, 1);
                    z_23 :
                    if(match_cons(r_24, sym_TCons_2))
                      {
                        s_24 = ATgetArgument(r_24, 0);
                        t_24 = ATgetArgument(r_24, 1);
                        a_24 :
                        if(match_cons(t_24, sym_TCons_2))
                          {
                            u_24 = ATgetArgument(t_24, 0);
                            v_24 = ATgetArgument(t_24, 1);
                            b_24 :
                            if(match_cons(v_24, sym_TNil_0))
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_24), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_24), not_null(u_24)), (ATerm) ATmakeAppl(sym_TNil_0)));
                            else
                              _fail(t);
                          }
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
  t = z_24(t);
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm m_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL;
  m_25 = t;
  g_25 :
  if(match_cons(m_25, sym_TCons_2))
    {
      o_25 = ATgetArgument(m_25, 0);
      x_25 = ATgetArgument(m_25, 1);
      h_25 :
      if(match_cons(o_25, sym_TCons_2))
        {
          p_25 = ATgetArgument(o_25, 0);
          q_25 = ATgetArgument(o_25, 1);
          i_25 :
          if(match_cons(q_25, sym_TCons_2))
            {
              v_25 = ATgetArgument(q_25, 0);
              w_25 = ATgetArgument(q_25, 1);
              j_25 :
              if(match_cons(w_25, sym_TNil_0))
                {
                  k_25 :
                  if(match_cons(x_25, sym_TCons_2))
                    {
                      y_25 = ATgetArgument(x_25, 0);
                      z_25 = ATgetArgument(x_25, 1);
                      l_25 :
                      if(match_cons(z_25, sym_TNil_0))
                        {
                          t = not_null(y_25);
                          {
                            ATerm b_1 (ATerm t)
                            {
                              ATerm c_1 (ATerm t)
                              {
                                ATerm n_26 = NULL;
                                n_26 = t;
                                if(p_25 != NULL && p_25 != n_26)
                                  _fail(n_26);
                                else
                                  p_25 = n_26;
                                return(t);
                              }
                              ATerm d_1 (ATerm t)
                              {
                                ATerm y_9;
                                y_9 = t;
                                {
                                  ATerm o_26 = NULL;
                                  t = length_0(t);
                                  o_26 = t;
                                  if(v_25 != NULL && v_25 != o_26)
                                    _fail(o_26);
                                  else
                                    v_25 = o_26;
                                }
                                t = y_9;
                                return(t);
                              }
                              t = SDef_3(t, c_1, d_1, _id);
                              return(t);
                            }
                            t = partition_1(t, b_1);
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
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL;
  y_27 = t;
  x_27 :
  if(match_cons(y_27, sym_Match_1))
    {
      z_27 = ATgetArgument(y_27, 0);
      {
        ATerm c_28 = NULL,d_28 = NULL,g_28 = NULL,h_28 = NULL,l_28 = NULL;
        ATerm e_28 = NULL;
        ATerm f_28 = NULL;
        t = new_0(t);
        e_28 = t;
        if(c_28 != NULL && c_28 != e_28)
          _fail(e_28);
        else
          c_28 = e_28;
        t = new_0(t);
        f_28 = t;
        if(d_28 != NULL && d_28 != f_28)
          _fail(f_28);
        else
          d_28 = f_28;
        t = not_null(z_27);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
            i_28 = t;
            z_26 :
            if(match_cons(i_28, sym_Explode_2))
              {
                j_28 = ATgetArgument(i_28, 0);
                k_28 = ATgetArgument(i_28, 1);
                if(g_28 != NULL && g_28 != j_28)
                  _fail(j_28);
                else
                  g_28 = j_28;
                if(h_28 != NULL && h_28 != k_28)
                  _fail(k_28);
                else
                  h_28 = k_28;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_28));
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, e_1);
          l_28 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_28), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_28)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_28), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_28))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_28)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_28)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_28), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_28), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0))))))));
        }
      }
    }
  else
    {
      if(match_cons(y_27, sym_Build_1))
        {
          z_27 = ATgetArgument(y_27, 0);
          {
            ATerm o_28 = NULL,q_28 = NULL,r_28 = NULL,v_28 = NULL;
            ATerm p_28 = NULL;
            t = new_0(t);
            p_28 = t;
            if(o_28 != NULL && o_28 != p_28)
              _fail(p_28);
            else
              o_28 = p_28;
            t = not_null(z_27);
            {
              ATerm f_1 (ATerm t)
              {
                ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
                s_28 = t;
                o_27 :
                if(match_cons(s_28, sym_Explode_2))
                  {
                    t_28 = ATgetArgument(s_28, 0);
                    u_28 = ATgetArgument(s_28, 1);
                    if(q_28 != NULL && q_28 != t_28)
                      _fail(t_28);
                    else
                      q_28 = t_28;
                    if(r_28 != NULL && r_28 != u_28)
                      _fail(u_28);
                    else
                      r_28 = u_28;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_28));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, f_1);
              v_28 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_28), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_28), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_28), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_28))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_28)))));
            }
          }
        }
      else
        {
          if(match_cons(y_27, sym_ExplodeCong_2))
            {
              z_27 = ATgetArgument(y_27, 0);
              a_28 = ATgetArgument(y_27, 1);
              {
                ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL;
                ATerm d_29 = NULL;
                ATerm e_29 = NULL;
                t = new_0(t);
                d_29 = t;
                if(z_28 != NULL && z_28 != d_29)
                  _fail(d_29);
                else
                  z_28 = d_29;
                {
                  ATerm f_29 = NULL;
                  t = new_0(t);
                  e_29 = t;
                  if(a_29 != NULL && a_29 != e_29)
                    _fail(e_29);
                  else
                    a_29 = e_29;
                  {
                    ATerm g_29 = NULL;
                    t = new_0(t);
                    f_29 = t;
                    if(b_29 != NULL && b_29 != f_29)
                      _fail(f_29);
                    else
                      b_29 = f_29;
                    t = new_0(t);
                    g_29 = t;
                    if(c_29 != NULL && c_29 != g_29)
                      _fail(g_29);
                    else
                      c_29 = g_29;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_28), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_29), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_29), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_29), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_28)), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_29)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(z_27), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_28)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_29))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(a_28), (ATerm)ATmakeAppl(sym_Var_1, not_null(b_29)), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_29))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(a_29)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_29)), (ATerm) ATmakeAppl(sym_Nil_0)))))));
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
  ATerm b_30 = NULL,c_30 = NULL;
  b_30 = t;
  a_30 :
  if(match_cons(b_30, sym_Build_1))
    {
      c_30 = ATgetArgument(b_30, 0);
      {
        ATerm e_30 = NULL,g_30 = NULL,h_30 = NULL,l_30 = NULL;
        ATerm f_30 = NULL;
        t = new_0(t);
        f_30 = t;
        if(e_30 != NULL && e_30 != f_30)
          _fail(f_30);
        else
          e_30 = f_30;
        t = not_null(c_30);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
            i_30 = t;
            y_29 :
            if(match_cons(i_30, sym_App_2))
              {
                j_30 = ATgetArgument(i_30, 0);
                k_30 = ATgetArgument(i_30, 1);
                if(g_30 != NULL && g_30 != j_30)
                  _fail(j_30);
                else
                  g_30 = j_30;
                if(h_30 != NULL && h_30 != k_30)
                  _fail(k_30);
                else
                  h_30 = k_30;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_30));
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, g_1);
          l_30 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_30), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(g_30), not_null(h_30), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_30))), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_30))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp1_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL;
  y_30 = t;
  v_30 :
  if(match_cons(y_30, sym_Build_1))
    {
      z_30 = ATgetArgument(y_30, 0);
      x_30 :
      if(match_cons(z_30, sym_App_2))
        {
          a_31 = ATgetArgument(z_30, 0);
          b_31 = ATgetArgument(z_30, 1);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_31)), not_null(a_31));
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
  ATerm p_31 = NULL,q_31 = NULL;
  p_31 = t;
  o_31 :
  if(match_cons(p_31, sym_Build_1))
    {
      q_31 = ATgetArgument(p_31, 0);
      {
        ATerm s_31 = NULL,t_31 = NULL,y_31 = NULL;
        t = not_null(q_31);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
            u_31 = t;
            h_31 :
            if(match_cons(u_31, sym_App_2))
              {
                v_31 = ATgetArgument(u_31, 0);
                x_31 = ATgetArgument(u_31, 1);
                i_31 :
                if(match_cons(v_31, sym_Build_1))
                  {
                    w_31 = ATgetArgument(v_31, 0);
                    if(t_31 != NULL && t_31 != w_31)
                      _fail(w_31);
                    else
                      t_31 = w_31;
                    if(s_31 != NULL && s_31 != x_31)
                      _fail(x_31);
                    else
                      s_31 = x_31;
                    t = not_null(t_31);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, h_1);
          y_31 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, not_null(y_31));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
  c_35 = t;
  w_34 :
  if(match_cons(c_35, sym_Seqs_1))
    {
      z_35 = ATgetArgument(c_35, 0);
      x_34 :
      if(match_cons(z_35, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(z_35, sym_Cons_2))
            {
              a_35 = ATgetArgument(z_35, 0);
              b_35 = ATgetArgument(z_35, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_35), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(b_35)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(c_35, sym_Choices_1))
        {
          z_35 = ATgetArgument(c_35, 0);
          y_34 :
          if(match_cons(z_35, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(z_35, sym_Cons_2))
                {
                  a_35 = ATgetArgument(z_35, 0);
                  b_35 = ATgetArgument(z_35, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(a_35), (ATerm) ATmakeAppl(sym_Choices_1, not_null(b_35)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(c_35, sym_LChoices_1))
            {
              z_35 = ATgetArgument(c_35, 0);
              z_34 :
              if(match_cons(z_35, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(z_35, sym_Cons_2))
                    {
                      a_35 = ATgetArgument(z_35, 0);
                      b_35 = ATgetArgument(z_35, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(a_35), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(b_35)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(c_35, sym_Lets_2))
                {
                  z_35 = ATgetArgument(c_35, 0);
                  a_36 = ATgetArgument(c_35, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(z_35), not_null(a_36));
                }
              else
                {
                  if(match_cons(c_35, sym_BA_2))
                    {
                      z_35 = ATgetArgument(c_35, 0);
                      a_36 = ATgetArgument(c_35, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_36)), not_null(z_35));
                    }
                  else
                    {
                      if(match_cons(c_35, sym_MA_2))
                        {
                          z_35 = ATgetArgument(c_35, 0);
                          a_36 = ATgetArgument(c_35, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_35)), not_null(a_36));
                        }
                      else
                        {
                          if(match_cons(c_35, sym_AM_2))
                            {
                              z_35 = ATgetArgument(c_35, 0);
                              a_36 = ATgetArgument(c_35, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_35), (ATerm) ATmakeAppl(sym_Match_1, not_null(a_36)));
                            }
                          else
                            {
                              if(match_cons(c_35, sym_BAM_3))
                                {
                                  z_35 = ATgetArgument(c_35, 0);
                                  a_36 = ATgetArgument(c_35, 1);
                                  b_36 = ATgetArgument(c_35, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_36)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_35), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(b_36)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(c_35, sym_InfixApp_3))
                                    {
                                      z_35 = ATgetArgument(c_35, 0);
                                      a_36 = ATgetArgument(c_35, 1);
                                      b_36 = ATgetArgument(c_35, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(a_36), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_35), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_36), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
ATerm repeat_2 (ATerm t, ATerm j_50 (ATerm), ATerm k_50 (ATerm))
{
  ATerm h_39 (ATerm t)
  {
    ATerm z_9 = t;
    if(PushChoice()==0)
      {
        t = j_50(t);
        t = h_39(t);
        PopChoice();
      }
    else
      {
        t = z_9;
        t = k_50(t);
      }
    return(t);
  }
  t = h_39(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm m_50 (ATerm))
{
  t = repeat_2(t, m_50, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm j_39 = NULL;
  j_39 = t;
  i_39 :
  if(!(match_cons(j_39, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm c_10 = t;
  if(PushChoice()==0)
    {
      ATerm i_1 (ATerm t)
      {
        ATerm d_10 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = d_10;
            {
              ATerm l_39 = NULL;
              l_39 = t;
              k_39 :
              if(!(match_cons(l_39, sym_Wld_0)))
                _fail(t);
            }
          }
        return(t);
      }
      t = topdown_1(t, i_1);
      PopChoice();
      _fail(t);
    }
  else
    t = c_10;
  return(t);
}
ATerm App_2 (ATerm t, ATerm p_39 (ATerm), ATerm q_39 (ATerm))
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
  v_39 = t;
  u_39 :
  if(match_cons(v_39, sym_App_2))
    {
      w_39 = ATgetArgument(v_39, 0);
      x_39 = ATgetArgument(v_39, 1);
      {
        ATerm a_40 = NULL;
        t = not_null(w_39);
        {
          ATerm c_40 = NULL;
          t = p_39(t);
          a_40 = t;
          t = not_null(x_39);
          t = q_39(t);
          c_40 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, not_null(a_40), not_null(c_40));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm m_39 (ATerm), ATerm n_39 (ATerm), ATerm o_39 (ATerm))
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL;
  m_40 = t;
  l_40 :
  if(match_cons(m_40, sym_Con_3))
    {
      n_40 = ATgetArgument(m_40, 0);
      o_40 = ATgetArgument(m_40, 1);
      p_40 = ATgetArgument(m_40, 2);
      {
        ATerm t_40 = NULL;
        t = not_null(n_40);
        {
          ATerm v_40 = NULL;
          t = m_39(t);
          t_40 = t;
          t = not_null(o_40);
          {
            ATerm x_40 = NULL;
            t = n_39(t);
            v_40 = t;
            t = not_null(p_40);
            t = o_39(t);
            x_40 = t;
            t = (ATerm) ATmakeAppl(sym_Con_3, not_null(t_40), not_null(v_40), not_null(x_40));
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
  ATerm e_10 = t;
  if(PushChoice()==0)
    {
      ATerm j_1 (ATerm t)
      {
        ATerm f_10 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = f_10;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, j_1);
      PopChoice();
      _fail(t);
    }
  else
    t = e_10;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL;
  h_41 = t;
  f_41 :
  if(match_cons(h_41, sym_SRule_1))
    {
      i_41 = ATgetArgument(h_41, 0);
      g_41 :
      if(match_cons(i_41, sym_Rule_3))
        {
          j_41 = ATgetArgument(i_41, 0);
          k_41 = ATgetArgument(i_41, 1);
          l_41 = ATgetArgument(i_41, 2);
          t = not_null(j_41);
          t = pureterm_0(t);
          t = not_null(k_41);
          t = buildterm_0(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_41)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_41), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_41)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(i_41, sym_StratRule_3))
            {
              j_41 = ATgetArgument(i_41, 0);
              k_41 = ATgetArgument(i_41, 1);
              l_41 = ATgetArgument(i_41, 2);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_41), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_41), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_41), (ATerm) ATmakeAppl(sym_Nil_0)))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm s_42 (ATerm), ATerm t_42 (ATerm))
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL;
  f_42 = t;
  e_42 :
  if(match_cons(f_42, sym_Scope_2))
    {
      g_42 = ATgetArgument(f_42, 0);
      h_42 = ATgetArgument(f_42, 1);
      {
        ATerm k_42 = NULL;
        t = not_null(g_42);
        {
          ATerm m_42 = NULL;
          t = s_42(t);
          k_42 = t;
          t = not_null(h_42);
          t = t_42(t);
          m_42 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_42), not_null(m_42));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm q_59 (ATerm))
{
  ATerm r_42 (ATerm t)
  {
    ATerm g_10 = t;
    if(PushChoice()==0)
      {
        t = q_59(t);
        PopChoice();
      }
    else
      {
        t = g_10;
        t = _one(t, r_42);
      }
    return(t);
  }
  t = r_42(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL;
  s_43 = t;
  q_43 :
  if(match_cons(s_43, sym_SRule_1))
    {
      t_43 = ATgetArgument(s_43, 0);
      r_43 :
      if(match_cons(t_43, sym_Rule_3))
        {
          u_43 = ATgetArgument(t_43, 0);
          v_43 = ATgetArgument(t_43, 1);
          w_43 = ATgetArgument(t_43, 2);
          {
            ATerm a_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,k_44 = NULL;
            ATerm b_44 = NULL;
            t = new_0(t);
            b_44 = t;
            if(a_44 != NULL && a_44 != b_44)
              _fail(b_44);
            else
              a_44 = b_44;
            t = not_null(u_43);
            {
              ATerm m_44 = NULL,n_44 = NULL,b_45 = NULL;
              ATerm k_1 (ATerm t)
              {
                ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
                f_44 = t;
                z_42 :
                if(match_cons(f_44, sym_Con_3))
                  {
                    g_44 = ATgetArgument(f_44, 0);
                    i_44 = ATgetArgument(f_44, 1);
                    j_44 = ATgetArgument(f_44, 2);
                    a_43 :
                    if(match_cons(g_44, sym_Var_1))
                      {
                        h_44 = ATgetArgument(g_44, 0);
                        if(e_44 != NULL && e_44 != h_44)
                          _fail(h_44);
                        else
                          e_44 = h_44;
                        if(c_44 != NULL && c_44 != i_44)
                          _fail(i_44);
                        else
                          c_44 = i_44;
                        if(d_44 != NULL && d_44 != j_44)
                          _fail(j_44);
                        else
                          d_44 = j_44;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_44));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, k_1);
              k_44 = t;
              t = not_null(v_43);
              {
                ATerm l_1 (ATerm t)
                {
                  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,a_45 = NULL;
                  o_44 = t;
                  i_43 :
                  if(match_cons(o_44, sym_Con_3))
                    {
                      p_44 = ATgetArgument(o_44, 0);
                      r_44 = ATgetArgument(o_44, 1);
                      s_44 = ATgetArgument(o_44, 2);
                      m_43 :
                      if(match_cons(p_44, sym_Var_1))
                        {
                          q_44 = ATgetArgument(p_44, 0);
                          n_43 :
                          if(match_cons(s_44, sym_Call_2))
                            {
                              t_44 = ATgetArgument(s_44, 0);
                              a_45 = ATgetArgument(s_44, 1);
                              o_43 :
                              if(match_cons(a_45, sym_Nil_0))
                                {
                                  if(e_44 != NULL && e_44 != q_44)
                                    _fail(q_44);
                                  else
                                    e_44 = q_44;
                                  if(m_44 != NULL && m_44 != r_44)
                                    _fail(r_44);
                                  else
                                    m_44 = r_44;
                                  if(n_44 != NULL && n_44 != t_44)
                                    _fail(t_44);
                                  else
                                    n_44 = t_44;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_44));
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, l_1);
                b_45 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_44), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_44), not_null(b_45), (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_43), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(n_44), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(c_44), not_null(m_44), (ATerm) ATmakeAppl(sym_Id_0))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Var_1, not_null(e_44)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_44)))))));
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
  ATerm h_10 = t;
  if(PushChoice()==0)
    {
      ATerm j_10 = t;
      if(PushChoice()==0)
        {
          t = Rcon_0(t);
          t = desugarRule_0(t);
          PopChoice();
        }
      else
        {
          t = j_10;
          {
            ATerm k_10 = t;
            if(PushChoice()==0)
              {
                t = Scope_2(t, _id, desugarRule_0);
                PopChoice();
              }
            else
              {
                t = k_10;
                t = RtoS_0(t);
              }
          }
        }
      PopChoice();
    }
  else
    t = h_10;
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm a_58 (ATerm))
{
  ATerm r_45 (ATerm t)
  {
    t = a_58(t);
    t = _all(t, r_45);
    return(t);
  }
  t = r_45(t);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm l_10 = t;
    if(PushChoice()==0)
      {
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      t = l_10;
    {
      ATerm v_1 (ATerm t)
      {
        ATerm m_10 = t;
        if(PushChoice()==0)
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = m_10;
            {
              ATerm n_10 = t;
              if(PushChoice()==0)
                {
                  ATerm o_10 = t;
                  if(PushChoice()==0)
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = o_10;
                      {
                        ATerm p_10 = t;
                        if(PushChoice()==0)
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = p_10;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = n_10;
                  t = Expl_0(t);
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, v_1);
    }
    return(t);
  }
  t = topdown_1(t, m_1);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL;
  u_45 = t;
  t_45 :
  if(!(match_cons(u_45, sym_Nil_0)))
    {
      if(match_cons(u_45, sym_Cons_2))
        {
          v_45 = ATgetArgument(u_45, 0);
          w_45 = ATgetArgument(u_45, 1);
          t = not_null(v_45);
          {
            ATerm w_1 (ATerm t)
            {
              t = not_null(w_45);
              t = concat_0(t);
              return(t);
            }
            t = at_end_1(t, w_1);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm f_46 (ATerm t)
  {
    ATerm q_10 = t;
    if(PushChoice()==0)
      {
        ATerm e_46 = NULL;
        e_46 = t;
        d_46 :
        if(!(match_cons(e_46, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = q_10;
        t = Cons_2(t, w_62, f_46);
      }
    return(t);
  }
  t = f_46(t);
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL;
  i_46 = t;
  h_46 :
  if(match_cons(i_46, sym_TCons_2))
    {
      j_46 = ATgetArgument(i_46, 0);
      k_46 = ATgetArgument(i_46, 1);
      t = not_null(k_46);
    }
  else
    _fail(t);
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL;
  q_46 = t;
  p_46 :
  if(match_cons(q_46, sym_TCons_2))
    {
      r_46 = ATgetArgument(q_46, 0);
      s_46 = ATgetArgument(q_46, 1);
      t = not_null(r_46);
    }
  else
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm s_56 (ATerm))
{
  ATerm l_47 (ATerm t)
  {
    ATerm r_10 = t;
    if(PushChoice()==0)
      {
        ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL;
        ATerm x_1 (ATerm t)
        {
          t = map_1(t, Thd_0);
          return(t);
        }
        ATerm y_1 (ATerm t)
        {
          t = map_1(t, Ttl_0);
          return(t);
        }
        t = split_2(t, x_1, y_1);
        {
          ATerm k_2 (ATerm t)
          {
            ATerm l_2 (ATerm t)
            {
              ATerm c_47 = NULL;
              c_47 = t;
              w_46 :
              if(!(match_cons(c_47, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, l_47, l_2);
            return(t);
          }
          t = TCons_2(t, s_56, k_2);
          d_47 = t;
          y_46 :
          if(match_cons(d_47, sym_TCons_2))
            {
              e_47 = ATgetArgument(d_47, 0);
              f_47 = ATgetArgument(d_47, 1);
              z_46 :
              if(match_cons(f_47, sym_TCons_2))
                {
                  g_47 = ATgetArgument(f_47, 0);
                  h_47 = ATgetArgument(f_47, 1);
                  a_47 :
                  if(match_cons(h_47, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_47), not_null(g_47));
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
        t = r_10;
        {
          ATerm m_2 (ATerm t)
          {
            ATerm k_47 = NULL;
            k_47 = t;
            b_47 :
            if(!(match_cons(k_47, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = map_1(t, m_2);
          t = (ATerm) ATmakeAppl(sym_TNil_0);
        }
      }
    return(t);
  }
  t = l_47(t);
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL;
  b_48 = t;
  y_47 :
  if(match_cons(b_48, sym_TCons_2))
    {
      c_48 = ATgetArgument(b_48, 0);
      d_48 = ATgetArgument(b_48, 1);
      z_47 :
      if(match_cons(d_48, sym_TCons_2))
        {
          e_48 = ATgetArgument(d_48, 0);
          f_48 = ATgetArgument(d_48, 1);
          a_48 :
          if(match_cons(f_48, sym_TNil_0))
            {
              ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL;
              ATerm n_48 = NULL;
              ATerm o_48 = NULL;
              t = new_0(t);
              n_48 = t;
              if(k_48 != NULL && k_48 != n_48)
                _fail(n_48);
              else
                k_48 = n_48;
              {
                ATerm p_48 = NULL;
                t = new_0(t);
                o_48 = t;
                if(l_48 != NULL && l_48 != o_48)
                  _fail(o_48);
                else
                  l_48 = o_48;
                t = new_0(t);
                p_48 = t;
                if(m_48 != NULL && m_48 != p_48)
                  _fail(p_48);
                else
                  m_48 = p_48;
              }
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_48)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_48)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_48)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_48)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_48)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(k_48), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_48), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_48)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_48), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_48)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
            }
          else
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
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL;
  l_49 = t;
  g_49 :
  if(match_cons(l_49, sym_TCons_2))
    {
      m_49 = ATgetArgument(l_49, 0);
      n_49 = ATgetArgument(l_49, 1);
      h_49 :
      if(match_cons(n_49, sym_TCons_2))
        {
          o_49 = ATgetArgument(n_49, 0);
          p_49 = ATgetArgument(n_49, 1);
          i_49 :
          if(match_cons(o_49, sym_Nil_0))
            {
              j_49 :
              if(match_cons(p_49, sym_TNil_0))
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
ATerm zipr_1 (ATerm t, ATerm r_55 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, r_55);
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
  u_49 = t;
  s_49 :
  if(match_cons(u_49, sym_Cons_2))
    {
      v_49 = ATgetArgument(u_49, 0);
      w_49 = ATgetArgument(u_49, 1);
      t_49 :
      if(match_cons(w_49, sym_Nil_0))
        t = not_null(v_49);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm last_0 (ATerm t)
{
  ATerm s_10 = t;
  if(PushChoice()==0)
    {
      t = Last_0(t);
      PopChoice();
    }
  else
    {
      t = s_10;
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
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL;
  e_50 = t;
  b_50 :
  if(match_cons(e_50, sym_TCons_2))
    {
      f_50 = ATgetArgument(e_50, 0);
      g_50 = ATgetArgument(e_50, 1);
      c_50 :
      if(match_cons(g_50, sym_TCons_2))
        {
          h_50 = ATgetArgument(g_50, 0);
          i_50 = ATgetArgument(g_50, 1);
          d_50 :
          if(match_cons(i_50, sym_TNil_0))
            {
              ATerm t_10 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(f_50), not_null(h_50));
                  PopChoice();
                }
              else
                {
                  t = t_10;
                  t = SSL_subtr(not_null(f_50), not_null(h_50));
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
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL;
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
            {
              ATerm u_10;
              u_10 = t;
              {
                ATerm v_10 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(v_50), not_null(x_50));
                    PopChoice();
                  }
                else
                  {
                    t = v_10;
                    t = SSL_gtr(not_null(v_50), not_null(x_50));
                  }
              }
              t = u_10;
            }
          else
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
  ATerm m_51 = NULL;
  ATerm x_10 = t;
  if(PushChoice()==0)
    {
      ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL;
      n_51 = t;
      j_51 :
      if(match_cons(n_51, sym_TCons_2))
        {
          o_51 = ATgetArgument(n_51, 0);
          p_51 = ATgetArgument(n_51, 1);
          k_51 :
          if(match_cons(p_51, sym_TCons_2))
            {
              q_51 = ATgetArgument(p_51, 0);
              r_51 = ATgetArgument(p_51, 1);
              l_51 :
              if(match_cons(r_51, sym_TNil_0))
                {
                  if(m_51 != NULL && m_51 != o_51)
                    _fail(o_51);
                  else
                    m_51 = o_51;
                  if(m_51 != NULL && m_51 != q_51)
                    _fail(q_51);
                  else
                    m_51 = q_51;
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
      t = x_10;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm j_48 (ATerm))
{
  ATerm n_2 (ATerm t)
  {
    ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL;
    k_52 = t;
    u_51 :
    if(match_cons(k_52, sym_TCons_2))
      {
        l_52 = ATgetArgument(k_52, 0);
        m_52 = ATgetArgument(k_52, 1);
        v_51 :
        if(match_cons(m_52, sym_TCons_2))
          {
            n_52 = ATgetArgument(m_52, 0);
            o_52 = ATgetArgument(m_52, 1);
            w_51 :
            if(match_cons(o_52, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_52), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_52), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL;
    r_52 = t;
    y_51 :
    if(match_cons(r_52, sym_TCons_2))
      {
        s_52 = ATgetArgument(r_52, 0);
        t_52 = ATgetArgument(r_52, 1);
        z_51 :
        if(match_int(s_52, 0))
          {
            a_52 :
            if(match_cons(t_52, sym_TCons_2))
              {
                u_52 = ATgetArgument(t_52, 0);
                v_52 = ATgetArgument(t_52, 1);
                b_52 :
                if(match_cons(v_52, sym_TCons_2))
                  {
                    w_52 = ATgetArgument(v_52, 0);
                    x_52 = ATgetArgument(v_52, 1);
                    c_52 :
                    if(match_cons(x_52, sym_TNil_0))
                      t = not_null(w_52);
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL;
    f_53 = t;
    g_52 :
    if(match_cons(f_53, sym_TCons_2))
      {
        g_53 = ATgetArgument(f_53, 0);
        h_53 = ATgetArgument(f_53, 1);
        h_52 :
        if(match_cons(h_53, sym_TCons_2))
          {
            i_53 = ATgetArgument(h_53, 0);
            j_53 = ATgetArgument(h_53, 1);
            i_52 :
            if(match_cons(j_53, sym_TCons_2))
              {
                k_53 = ATgetArgument(j_53, 0);
                l_53 = ATgetArgument(j_53, 1);
                j_52 :
                if(match_cons(l_53, sym_TNil_0))
                  {
                    ATerm p_53 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_53), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = geq_0(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_53), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm r_53 = NULL;
                      t = subt_0(t);
                      p_53 = t;
                      t = not_null(i_53);
                      t = j_48(t);
                      r_53 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_53), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_53), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_53), not_null(k_53)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  t = for_3(t, n_2, o_2, a_3);
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm c_54 = NULL;
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL;
  c_54 = t;
  {
    ATerm h_54 = NULL;
    ATerm i_54 = NULL;
    t = new_0(t);
    h_54 = t;
    if(e_54 != NULL && e_54 != h_54)
      _fail(h_54);
    else
      e_54 = h_54;
    {
      ATerm j_54 = NULL;
      t = new_0(t);
      i_54 = t;
      if(f_54 != NULL && f_54 != i_54)
        _fail(i_54);
      else
        f_54 = i_54;
      t = new_0(t);
      j_54 = t;
      if(g_54 != NULL && g_54 != j_54)
        _fail(j_54);
      else
        g_54 = j_54;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_54)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_54)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_54), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_54))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(e_54), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_54), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_54)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_54), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_54)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
  }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL;
  ATerm f_59 (ATerm t)
  {
    ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,b_59 = NULL;
    ATerm i_58 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm k_58 = NULL,l_58 = NULL,m_58 = NULL;
      t = add_0(t);
      i_58 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TNil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = copy_1(t, new_0);
      k_58 = t;
      x_55 :
      if(match_cons(k_58, sym_Cons_2))
        {
          l_58 = ATgetArgument(k_58, 0);
          m_58 = ATgetArgument(k_58, 1);
          {
            ATerm n_58 = NULL;
            if(y_57 != NULL && y_57 != l_58)
              _fail(l_58);
            else
              y_57 = l_58;
            if(z_57 != NULL && z_57 != m_58)
              _fail(m_58);
            else
              z_57 = m_58;
            t = not_null(z_57);
            {
              ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL;
              t = last_0(t);
              n_58 = t;
              if(x_57 != NULL && x_57 != n_58)
                _fail(n_58);
              else
                x_57 = n_58;
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_57), not_null(z_57)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_57), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = zipr_1(t, MkThreadApplication_0);
              t = tuple_unzip_1(t, _id);
              o_58 = t;
              p_55 :
              if(match_cons(o_58, sym_TCons_2))
                {
                  p_58 = ATgetArgument(o_58, 0);
                  q_58 = ATgetArgument(o_58, 1);
                  q_55 :
                  if(match_cons(q_58, sym_TCons_2))
                    {
                      r_58 = ATgetArgument(q_58, 0);
                      s_58 = ATgetArgument(q_58, 1);
                      s_55 :
                      if(match_cons(s_58, sym_TCons_2))
                        {
                          t_58 = ATgetArgument(s_58, 0);
                          u_58 = ATgetArgument(s_58, 1);
                          t_55 :
                          if(match_cons(u_58, sym_TCons_2))
                            {
                              v_58 = ATgetArgument(u_58, 0);
                              w_58 = ATgetArgument(u_58, 1);
                              u_55 :
                              if(match_cons(w_58, sym_TCons_2))
                                {
                                  x_58 = ATgetArgument(w_58, 0);
                                  y_58 = ATgetArgument(w_58, 1);
                                  v_55 :
                                  if(match_cons(y_58, sym_TCons_2))
                                    {
                                      z_58 = ATgetArgument(y_58, 0);
                                      a_59 = ATgetArgument(y_58, 1);
                                      w_55 :
                                      if(match_cons(a_59, sym_TNil_0))
                                        {
                                          if(c_58 != NULL && c_58 != p_58)
                                            _fail(p_58);
                                          else
                                            c_58 = p_58;
                                          if(d_58 != NULL && d_58 != r_58)
                                            _fail(r_58);
                                          else
                                            d_58 = r_58;
                                          if(e_58 != NULL && e_58 != t_58)
                                            _fail(t_58);
                                          else
                                            e_58 = t_58;
                                          if(f_58 != NULL && f_58 != v_58)
                                            _fail(v_58);
                                          else
                                            f_58 = v_58;
                                          if(g_58 != NULL && g_58 != x_58)
                                            _fail(x_58);
                                          else
                                            g_58 = x_58;
                                          if(h_58 != NULL && h_58 != z_58)
                                            _fail(z_58);
                                          else
                                            h_58 = z_58;
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
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
    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_57), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_58), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_58), (ATerm) ATmakeAppl(sym_Nil_0))));
    t = concat_0(t);
    b_59 = t;
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(i_56), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), not_null(d_58), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_57), not_null(b_59)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(i_56), not_null(f_58)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_57)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(i_56), not_null(h_58)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_57)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(c_58))))));
    return(t);
  }
  h_56 = t;
  z_55 :
  if(match_cons(h_56, sym_TCons_2))
    {
      i_56 = ATgetArgument(h_56, 0);
      j_56 = ATgetArgument(h_56, 1);
      a_56 :
      if(match_cons(j_56, sym_TCons_2))
        {
          k_56 = ATgetArgument(j_56, 0);
          l_56 = ATgetArgument(j_56, 1);
          b_56 :
          if(match_string(k_56, "D"))
            {
              c_56 :
              if(match_cons(l_56, sym_TCons_2))
                {
                  m_56 = ATgetArgument(l_56, 0);
                  n_56 = ATgetArgument(l_56, 1);
                  d_56 :
                  if(match_cons(n_56, sym_TNil_0))
                    {
                      ATerm q_56 = NULL,r_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL,z_56 = NULL,a_57 = NULL,q_57 = NULL;
                      ATerm b_57 = NULL;
                      ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL;
                      t = new_0(t);
                      b_57 = t;
                      if(q_56 != NULL && q_56 != b_57)
                        _fail(b_57);
                      else
                        q_56 = b_57;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_56)), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = copy_1(t, MkDistApplication_0);
                      t = tuple_unzip_1(t, _id);
                      c_57 = t;
                      t_54 :
                      if(match_cons(c_57, sym_TCons_2))
                        {
                          d_57 = ATgetArgument(c_57, 0);
                          e_57 = ATgetArgument(c_57, 1);
                          u_54 :
                          if(match_cons(e_57, sym_TCons_2))
                            {
                              f_57 = ATgetArgument(e_57, 0);
                              g_57 = ATgetArgument(e_57, 1);
                              v_54 :
                              if(match_cons(g_57, sym_TCons_2))
                                {
                                  h_57 = ATgetArgument(g_57, 0);
                                  i_57 = ATgetArgument(g_57, 1);
                                  w_54 :
                                  if(match_cons(i_57, sym_TCons_2))
                                    {
                                      j_57 = ATgetArgument(i_57, 0);
                                      k_57 = ATgetArgument(i_57, 1);
                                      x_54 :
                                      if(match_cons(k_57, sym_TCons_2))
                                        {
                                          l_57 = ATgetArgument(k_57, 0);
                                          m_57 = ATgetArgument(k_57, 1);
                                          y_54 :
                                          if(match_cons(m_57, sym_TCons_2))
                                            {
                                              n_57 = ATgetArgument(m_57, 0);
                                              o_57 = ATgetArgument(m_57, 1);
                                              b_55 :
                                              if(match_cons(o_57, sym_TNil_0))
                                                {
                                                  if(r_56 != NULL && r_56 != d_57)
                                                    _fail(d_57);
                                                  else
                                                    r_56 = d_57;
                                                  if(u_56 != NULL && u_56 != f_57)
                                                    _fail(f_57);
                                                  else
                                                    u_56 = f_57;
                                                  if(v_56 != NULL && v_56 != h_57)
                                                    _fail(h_57);
                                                  else
                                                    v_56 = h_57;
                                                  if(w_56 != NULL && w_56 != j_57)
                                                    _fail(j_57);
                                                  else
                                                    w_56 = j_57;
                                                  if(z_56 != NULL && z_56 != l_57)
                                                    _fail(l_57);
                                                  else
                                                    z_56 = l_57;
                                                  if(a_57 != NULL && a_57 != n_57)
                                                    _fail(n_57);
                                                  else
                                                    a_57 = n_57;
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_56), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_56), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = conc_0(t);
                      q_57 = t;
                      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(i_56), (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue))), not_null(u_56), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_56), not_null(q_57)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(i_56), not_null(w_56)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_56)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(i_56), not_null(a_57)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(r_56))))));
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            {
              if(match_string(k_56, "T"))
                {
                  e_56 :
                  if(match_cons(l_56, sym_TCons_2))
                    {
                      m_56 = ATgetArgument(l_56, 0);
                      n_56 = ATgetArgument(l_56, 1);
                      f_56 :
                      if(match_cons(n_56, sym_TNil_0))
                        {
                          g_56 :
                          if(match_int(m_56, 0))
                            {
                              ATerm e_11 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm t_57 = NULL;
                                  ATerm u_57 = NULL;
                                  t = new_0(t);
                                  u_57 = t;
                                  if(t_57 != NULL && t_57 != u_57)
                                    _fail(u_57);
                                  else
                                    t_57 = u_57;
                                  t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(i_56), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_57), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(i_56), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(t_57)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(i_56), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(t_57)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Id_0)))));
                                  PopChoice();
                                }
                              else
                                {
                                  t = e_11;
                                  t = f_59(t);
                                }
                            }
                          else
                            t = f_59(t);
                        }
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
  ATerm a_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL;
  a_60 = t;
  t_59 :
  if(match_cons(a_60, sym_TCons_2))
    {
      d_60 = ATgetArgument(a_60, 0);
      k_60 = ATgetArgument(a_60, 1);
      u_59 :
      if(match_cons(d_60, sym_TCons_2))
        {
          e_60 = ATgetArgument(d_60, 0);
          h_60 = ATgetArgument(d_60, 1);
          v_59 :
          if(match_cons(e_60, sym_Mod_2))
            {
              f_60 = ATgetArgument(e_60, 0);
              g_60 = ATgetArgument(e_60, 1);
              w_59 :
              if(match_cons(h_60, sym_TCons_2))
                {
                  i_60 = ATgetArgument(h_60, 0);
                  j_60 = ATgetArgument(h_60, 1);
                  x_59 :
                  if(match_cons(j_60, sym_TNil_0))
                    {
                      y_59 :
                      if(match_cons(k_60, sym_TCons_2))
                        {
                          l_60 = ATgetArgument(k_60, 0);
                          m_60 = ATgetArgument(k_60, 1);
                          z_59 :
                          if(match_cons(m_60, sym_TNil_0))
                            {
                              ATerm r_60 = NULL;
                              ATerm s_60 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_60), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_60), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_60), (ATerm) ATmakeAppl(sym_TNil_0))));
                              t = DefineCongruence_0(t);
                              t = desugar_0(t);
                              s_60 = t;
                              if(r_60 != NULL && r_60 != s_60)
                                _fail(s_60);
                              else
                                r_60 = s_60;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_60), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_60), (ATerm) ATmakeAppl(sym_TNil_0)));
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
        ATerm k_11 = t;
        if(PushChoice()==0)
          {
            t = OverloadedDef_0(t);
            {
              ATerm b_3 (ATerm t)
              {
                ATerm l_11 = t;
                if(PushChoice()==0)
                  {
                    t = JoinDefs1_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = l_11;
                    t = JoinDefs2_0(t);
                  }
                return(t);
              }
              ATerm c_3 (ATerm t)
              {
                ATerm d_3 (ATerm t)
                {
                  ATerm x_60 = NULL;
                  x_60 = t;
                  v_60 :
                  if(!(match_cons(x_60, sym_TNil_0)))
                    _fail(t);
                  return(t);
                }
                t = TCons_2(t, _id, d_3);
                return(t);
              }
              t = TCons_2(t, b_3, c_3);
            }
            PopChoice();
          }
        else
          {
            t = k_11;
            t = NonOverloadedDef_0(t);
            {
              ATerm e_3 (ATerm t)
              {
                ATerm m_11 = t;
                if(PushChoice()==0)
                  {
                    t = JoinDefs1_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = m_11;
                    t = JoinDefs2_0(t);
                  }
                return(t);
              }
              ATerm o_3 (ATerm t)
              {
                ATerm p_3 (ATerm t)
                {
                  ATerm y_60 = NULL;
                  y_60 = t;
                  w_60 :
                  if(!(match_cons(y_60, sym_TNil_0)))
                    _fail(t);
                  return(t);
                }
                t = TCons_2(t, _id, p_3);
                return(t);
              }
              t = TCons_2(t, e_3, o_3);
            }
          }
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL,b_62 = NULL;
  m_61 = t;
  a_61 :
  if(match_cons(m_61, sym_TCons_2))
    {
      n_61 = ATgetArgument(m_61, 0);
      q_61 = ATgetArgument(m_61, 1);
      g_61 :
      if(match_cons(n_61, sym_Cons_2))
        {
          o_61 = ATgetArgument(n_61, 0);
          p_61 = ATgetArgument(n_61, 1);
          h_61 :
          if(match_cons(q_61, sym_TCons_2))
            {
              r_61 = ATgetArgument(q_61, 0);
              s_61 = ATgetArgument(q_61, 1);
              i_61 :
              if(match_cons(s_61, sym_TCons_2))
                {
                  t_61 = ATgetArgument(s_61, 0);
                  u_61 = ATgetArgument(s_61, 1);
                  j_61 :
                  if(match_cons(u_61, sym_TCons_2))
                    {
                      v_61 = ATgetArgument(u_61, 0);
                      w_61 = ATgetArgument(u_61, 1);
                      k_61 :
                      if(match_cons(w_61, sym_TCons_2))
                        {
                          x_61 = ATgetArgument(w_61, 0);
                          b_62 = ATgetArgument(w_61, 1);
                          l_61 :
                          if(match_cons(b_62, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_61), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_61), not_null(x_61)), (ATerm) ATmakeAppl(sym_TNil_0))))));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_63 (ATerm))
{
  ATerm m_62 (ATerm t)
  {
    ATerm n_11 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, m_62);
        PopChoice();
      }
    else
      {
        t = n_11;
        {
          ATerm l_62 = NULL;
          l_62 = t;
          k_62 :
          if(match_cons(l_62, sym_Nil_0))
            t = l_63(t);
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = m_62(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,y_62 = NULL;
  s_62 = t;
  p_62 :
  if(match_cons(s_62, sym_TCons_2))
    {
      t_62 = ATgetArgument(s_62, 0);
      u_62 = ATgetArgument(s_62, 1);
      q_62 :
      if(match_cons(u_62, sym_TCons_2))
        {
          v_62 = ATgetArgument(u_62, 0);
          y_62 = ATgetArgument(u_62, 1);
          r_62 :
          if(match_cons(y_62, sym_TNil_0))
            {
              t = not_null(t_62);
              {
                ATerm q_3 (ATerm t)
                {
                  t = not_null(v_62);
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
ATerm UfShift_0 (ATerm t)
{
  ATerm k_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL;
  k_63 = t;
  d_63 :
  if(match_cons(k_63, sym_TCons_2))
    {
      n_63 = ATgetArgument(k_63, 0);
      o_63 = ATgetArgument(k_63, 1);
      h_63 :
      if(match_cons(o_63, sym_TCons_2))
        {
          p_63 = ATgetArgument(o_63, 0);
          s_63 = ATgetArgument(o_63, 1);
          i_63 :
          if(match_cons(p_63, sym_Cons_2))
            {
              q_63 = ATgetArgument(p_63, 0);
              r_63 = ATgetArgument(p_63, 1);
              j_63 :
              if(match_cons(s_63, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_63), not_null(n_63)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_63), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL;
  b_64 = t;
  y_63 :
  if(match_cons(b_64, sym_TCons_2))
    {
      c_64 = ATgetArgument(b_64, 0);
      d_64 = ATgetArgument(b_64, 1);
      z_63 :
      if(match_cons(d_64, sym_TCons_2))
        {
          e_64 = ATgetArgument(d_64, 0);
          f_64 = ATgetArgument(d_64, 1);
          a_64 :
          if(match_cons(f_64, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_64), not_null(e_64));
          else
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
  ATerm q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL;
  q_64 = t;
  l_64 :
  if(match_cons(q_64, sym_TCons_2))
    {
      r_64 = ATgetArgument(q_64, 0);
      v_64 = ATgetArgument(q_64, 1);
      m_64 :
      if(match_cons(r_64, sym_Cons_2))
        {
          s_64 = ATgetArgument(r_64, 0);
          t_64 = ATgetArgument(r_64, 1);
          n_64 :
          if(match_cons(v_64, sym_TCons_2))
            {
              w_64 = ATgetArgument(v_64, 0);
              z_64 = ATgetArgument(v_64, 1);
              o_64 :
              if(match_cons(w_64, sym_Cons_2))
                {
                  x_64 = ATgetArgument(w_64, 0);
                  y_64 = ATgetArgument(w_64, 1);
                  p_64 :
                  if(match_cons(z_64, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(s_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_64), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(t_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_64), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL;
  l_65 = t;
  g_65 :
  if(match_cons(l_65, sym_TCons_2))
    {
      m_65 = ATgetArgument(l_65, 0);
      n_65 = ATgetArgument(l_65, 1);
      h_65 :
      if(match_cons(m_65, sym_Nil_0))
        {
          i_65 :
          if(match_cons(n_65, sym_TCons_2))
            {
              o_65 = ATgetArgument(n_65, 0);
              p_65 = ATgetArgument(n_65, 1);
              j_65 :
              if(match_cons(o_65, sym_Nil_0))
                {
                  k_65 :
                  if(match_cons(p_65, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm j_55 (ATerm), ATerm k_55 (ATerm), ATerm l_55 (ATerm), ATerm m_55 (ATerm))
{
  ATerm t_65 (ATerm t)
  {
    ATerm o_11 = t;
    if(PushChoice()==0)
      {
        t = j_55(t);
        PopChoice();
      }
    else
      {
        t = o_11;
        t = k_55(t);
        {
          ATerm r_3 (ATerm t)
          {
            ATerm s_3 (ATerm t)
            {
              ATerm s_65 = NULL;
              s_65 = t;
              r_65 :
              if(!(match_cons(s_65, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, t_65, s_3);
            return(t);
          }
          t = TCons_2(t, m_55, r_3);
          t = l_55(t);
        }
      }
    return(t);
  }
  t = t_65(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm o_55 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, o_55);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL;
  n_66 = t;
  i_66 :
  if(match_cons(n_66, sym_Cons_2))
    {
      o_66 = ATgetArgument(n_66, 0);
      t_66 = ATgetArgument(n_66, 1);
      j_66 :
      if(match_cons(o_66, sym_TCons_2))
        {
          p_66 = ATgetArgument(o_66, 0);
          q_66 = ATgetArgument(o_66, 1);
          l_66 :
          if(match_cons(q_66, sym_TCons_2))
            {
              r_66 = ATgetArgument(q_66, 0);
              s_66 = ATgetArgument(q_66, 1);
              m_66 :
              if(match_cons(s_66, sym_TNil_0))
                {
                  ATerm x_66 = NULL,y_66 = NULL,g_67 = NULL,o_67 = NULL;
                  ATerm p_11;
                  p_11 = t;
                  {
                    ATerm z_66 = NULL;
                    ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL;
                    t = not_null(r_66);
                    z_66 = t;
                    t = SSL_explode_term(not_null(z_66));
                    b_67 = t;
                    x_65 :
                    if(match_cons(b_67, sym_TCons_2))
                      {
                        c_67 = ATgetArgument(b_67, 0);
                        d_67 = ATgetArgument(b_67, 1);
                        y_65 :
                        if(match_cons(d_67, sym_TCons_2))
                          {
                            e_67 = ATgetArgument(d_67, 0);
                            f_67 = ATgetArgument(d_67, 1);
                            z_65 :
                            if(match_cons(f_67, sym_TNil_0))
                              {
                                if(x_66 != NULL && x_66 != c_67)
                                  _fail(c_67);
                                else
                                  x_66 = c_67;
                                if(y_66 != NULL && y_66 != e_67)
                                  _fail(e_67);
                                else
                                  y_66 = e_67;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = p_11;
                  {
                    ATerm h_67 = NULL;
                    ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL;
                    t = not_null(p_66);
                    h_67 = t;
                    t = SSL_explode_term(not_null(h_67));
                    j_67 = t;
                    d_66 :
                    if(match_cons(j_67, sym_TCons_2))
                      {
                        k_67 = ATgetArgument(j_67, 0);
                        l_67 = ATgetArgument(j_67, 1);
                        e_66 :
                        if(match_cons(l_67, sym_TCons_2))
                          {
                            m_67 = ATgetArgument(l_67, 0);
                            n_67 = ATgetArgument(l_67, 1);
                            g_66 :
                            if(match_cons(n_67, sym_TNil_0))
                              {
                                if(x_66 != NULL && x_66 != k_67)
                                  _fail(k_67);
                                else
                                  x_66 = k_67;
                                if(g_67 != NULL && g_67 != m_67)
                                  _fail(m_67);
                                else
                                  g_67 = m_67;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_67), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_66), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    o_67 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_67), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_66), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL;
  b_68 = t;
  x_67 :
  if(match_cons(b_68, sym_Cons_2))
    {
      c_68 = ATgetArgument(b_68, 0);
      h_68 = ATgetArgument(b_68, 1);
      y_67 :
      if(match_cons(c_68, sym_TCons_2))
        {
          d_68 = ATgetArgument(c_68, 0);
          e_68 = ATgetArgument(c_68, 1);
          z_67 :
          if(match_cons(e_68, sym_TCons_2))
            {
              f_68 = ATgetArgument(e_68, 0);
              g_68 = ATgetArgument(e_68, 1);
              a_68 :
              if(match_cons(g_68, sym_TNil_0))
                {
                  ATerm j_68 = NULL;
                  if(d_68 != NULL && d_68 != f_68)
                    _fail(f_68);
                  else
                    d_68 = f_68;
                  if(j_68 != NULL && j_68 != h_68)
                    _fail(h_68);
                  else
                    j_68 = h_68;
                  t = not_null(j_68);
                }
              else
                _fail(t);
            }
          else
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
  ATerm q_11 = t;
  if(PushChoice()==0)
    {
      ATerm x_3 (ATerm t)
      {
        ATerm u_68 = NULL;
        u_68 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_68), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm y_3 (ATerm t)
      {
        ATerm c_4 (ATerm t)
        {
          ATerm d_4 (ATerm t)
          {
            ATerm w_68 = NULL;
            w_68 = t;
            m_68 :
            if(!(match_cons(w_68, sym_Nil_0)))
              _fail(t);
            return(t);
          }
          ATerm e_4 (ATerm t)
          {
            ATerm b_69 = NULL;
            b_69 = t;
            n_68 :
            if(!(match_cons(b_69, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, d_4, e_4);
          return(t);
        }
        t = TCons_2(t, _id, c_4);
        return(t);
      }
      ATerm a_4 (ATerm t)
      {
        ATerm s_11 = t;
        if(PushChoice()==0)
          {
            ATerm f_4 (ATerm t)
            {
              ATerm g_4 (ATerm t)
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
              ATerm h_4 (ATerm t)
              {
                ATerm c_69 = NULL;
                c_69 = t;
                o_68 :
                if(!(match_cons(c_69, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, g_4, h_4);
              return(t);
            }
            t = TCons_2(t, _id, f_4);
            PopChoice();
          }
        else
          {
            t = s_11;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, x_3, y_3, a_4);
      PopChoice();
    }
  else
    {
      t = q_11;
      {
        ATerm d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL;
        d_69 = t;
        r_68 :
        if(match_cons(d_69, sym_TCons_2))
          {
            e_69 = ATgetArgument(d_69, 0);
            f_69 = ATgetArgument(d_69, 1);
            s_68 :
            if(match_cons(f_69, sym_TCons_2))
              {
                g_69 = ATgetArgument(f_69, 0);
                h_69 = ATgetArgument(f_69, 1);
                t_68 :
                if(match_cons(h_69, sym_TNil_0))
                  {
                    t = not_null(e_69);
                    {
                      ATerm n_69 (ATerm t)
                      {
                        ATerm d_12 = t;
                        if(PushChoice()==0)
                          {
                            ATerm k_69 = NULL;
                            k_69 = t;
                            q_68 :
                            if(!(match_cons(k_69, sym_Nil_0)))
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
                                  ATerm i_4 (ATerm t)
                                  {
                                    t = not_null(g_69);
                                    return(t);
                                  }
                                  t = HdMember_1(t, i_4);
                                  t = n_69(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = e_12;
                                  t = Cons_2(t, _id, n_69);
                                }
                            }
                          }
                        return(t);
                      }
                      t = n_69(t);
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
ATerm GnNext_3 (ATerm t, ATerm d_43 (ATerm), ATerm e_43 (ATerm), ATerm f_43 (ATerm))
{
  ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL;
  d_70 = t;
  w_69 :
  if(match_cons(d_70, sym_TCons_2))
    {
      e_70 = ATgetArgument(d_70, 0);
      h_70 = ATgetArgument(d_70, 1);
      x_69 :
      if(match_cons(e_70, sym_Cons_2))
        {
          f_70 = ATgetArgument(e_70, 0);
          g_70 = ATgetArgument(e_70, 1);
          y_69 :
          if(match_cons(h_70, sym_TCons_2))
            {
              i_70 = ATgetArgument(h_70, 0);
              j_70 = ATgetArgument(h_70, 1);
              z_69 :
              if(match_cons(j_70, sym_TCons_2))
                {
                  k_70 = ATgetArgument(j_70, 0);
                  l_70 = ATgetArgument(j_70, 1);
                  a_70 :
                  if(match_cons(l_70, sym_TCons_2))
                    {
                      m_70 = ATgetArgument(l_70, 0);
                      n_70 = ATgetArgument(l_70, 1);
                      b_70 :
                      if(match_cons(n_70, sym_TCons_2))
                        {
                          o_70 = ATgetArgument(n_70, 0);
                          p_70 = ATgetArgument(n_70, 1);
                          c_70 :
                          if(match_cons(p_70, sym_TNil_0))
                            {
                              ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL,c_71 = NULL;
                              ATerm z_70 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_70), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_70), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm a_71 = NULL;
                                t = d_43(t);
                                z_70 = t;
                                if(w_70 != NULL && w_70 != z_70)
                                  _fail(z_70);
                                else
                                  w_70 = z_70;
                                t = not_null(w_70);
                                {
                                  ATerm b_71 = NULL;
                                  t = e_43(t);
                                  a_71 = t;
                                  if(x_70 != NULL && x_70 != a_71)
                                    _fail(a_71);
                                  else
                                    x_70 = a_71;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_70), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_70), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = diff_0(t);
                                  b_71 = t;
                                  if(y_70 != NULL && y_70 != b_71)
                                    _fail(b_71);
                                  else
                                    y_70 = b_71;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_70), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_70), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm e_71 = NULL;
                                t = conc_0(t);
                                c_71 = t;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_70), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_70), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm g_71 = NULL;
                                  t = conc_0(t);
                                  e_71 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_70), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_70), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_70), (ATerm) ATmakeAppl(sym_TNil_0))));
                                  t = f_43(t);
                                  g_71 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_70), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_70), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL;
  x_71 = t;
  q_71 :
  if(match_cons(x_71, sym_TCons_2))
    {
      y_71 = ATgetArgument(x_71, 0);
      z_71 = ATgetArgument(x_71, 1);
      r_71 :
      if(match_cons(y_71, sym_Nil_0))
        {
          s_71 :
          if(match_cons(z_71, sym_TCons_2))
            {
              a_72 = ATgetArgument(z_71, 0);
              b_72 = ATgetArgument(z_71, 1);
              t_71 :
              if(match_cons(b_72, sym_TCons_2))
                {
                  c_72 = ATgetArgument(b_72, 0);
                  d_72 = ATgetArgument(b_72, 1);
                  u_71 :
                  if(match_cons(d_72, sym_TCons_2))
                    {
                      e_72 = ATgetArgument(d_72, 0);
                      f_72 = ATgetArgument(d_72, 1);
                      v_71 :
                      if(match_cons(f_72, sym_TCons_2))
                        {
                          g_72 = ATgetArgument(f_72, 0);
                          h_72 = ATgetArgument(f_72, 1);
                          w_71 :
                          if(match_cons(h_72, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_72), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL;
  s_72 = t;
  o_72 :
  if(match_cons(s_72, sym_TCons_2))
    {
      t_72 = ATgetArgument(s_72, 0);
      u_72 = ATgetArgument(s_72, 1);
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
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_72), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))))));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm a_51 (ATerm), ATerm b_51 (ATerm))
{
  ATerm d_73 (ATerm t)
  {
    ATerm f_12 = t;
    if(PushChoice()==0)
      {
        t = a_51(t);
        PopChoice();
      }
    else
      {
        t = f_12;
        t = b_51(t);
        t = d_73(t);
      }
    return(t);
  }
  t = d_73(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm d_51 (ATerm), ATerm e_51 (ATerm), ATerm f_51 (ATerm))
{
  t = d_51(t);
  t = while_not_2(t, e_51, f_51);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm j_43 (ATerm), ATerm k_43 (ATerm), ATerm l_43 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    ATerm g_12 = t;
    if(PushChoice()==0)
      {
        t = GnNext_3(t, j_43, k_43, l_43);
        PopChoice();
      }
    else
      {
        t = g_12;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, n_4);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL;
  i_73 = t;
  f_73 :
  if(match_cons(i_73, sym_TCons_2))
    {
      j_73 = ATgetArgument(i_73, 0);
      k_73 = ATgetArgument(i_73, 1);
      g_73 :
      if(match_cons(k_73, sym_TCons_2))
        {
          l_73 = ATgetArgument(k_73, 0);
          m_73 = ATgetArgument(k_73, 1);
          h_73 :
          if(match_cons(m_73, sym_TNil_0))
            {
              ATerm i_12 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(j_73), not_null(l_73));
                  PopChoice();
                }
              else
                {
                  t = i_12;
                  t = SSL_addr(not_null(j_73), not_null(l_73));
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
  ATerm s_73 = NULL,t_73 = NULL,u_73 = NULL;
  s_73 = t;
  r_73 :
  if(match_cons(s_73, sym_Cons_2))
    {
      t_73 = ATgetArgument(s_73, 0);
      u_73 = ATgetArgument(s_73, 1);
      t = not_null(u_73);
    }
  else
    _fail(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm j_12 = t;
  if(PushChoice()==0)
    {
      ATerm b_74 = NULL;
      b_74 = t;
      z_73 :
      if(match_cons(b_74, sym_Nil_0))
        t = (ATerm) ATmakeInt(0);
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = j_12;
      {
        ATerm c_74 = NULL;
        t = Tl_0(t);
        t = length_0(t);
        c_74 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_74), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = add_0(t);
      }
    }
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm s_48 (ATerm))
{
  ATerm k_74 = NULL,l_74 = NULL,m_74 = NULL;
  k_74 = t;
  j_74 :
  if(match_cons(k_74, sym_Cons_2))
    {
      l_74 = ATgetArgument(k_74, 0);
      m_74 = ATgetArgument(k_74, 1);
      t = s_48(t);
      {
        ATerm o_4 (ATerm t)
        {
          ATerm p_74 = NULL;
          p_74 = t;
          if(l_74 != NULL && l_74 != p_74)
            _fail(p_74);
          else
            l_74 = p_74;
          return(t);
        }
        t = fetch_1(t, o_4);
      }
      t = not_null(m_74);
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL;
  y_74 = t;
  v_74 :
  if(match_cons(y_74, sym_TCons_2))
    {
      z_74 = ATgetArgument(y_74, 0);
      a_75 = ATgetArgument(y_74, 1);
      w_74 :
      if(match_cons(a_75, sym_TCons_2))
        {
          b_75 = ATgetArgument(a_75, 0);
          c_75 = ATgetArgument(a_75, 1);
          x_74 :
          if(match_cons(c_75, sym_TNil_0))
            {
              t = not_null(z_74);
              {
                ATerm h_75 (ATerm t)
                {
                  ATerm n_12 = t;
                  if(PushChoice()==0)
                    {
                      ATerm f_75 = NULL;
                      f_75 = t;
                      u_74 :
                      if(match_cons(f_75, sym_Nil_0))
                        t = not_null(b_75);
                      else
                        _fail(t);
                      PopChoice();
                    }
                  else
                    {
                      t = n_12;
                      {
                        ATerm o_12 = t;
                        if(PushChoice()==0)
                          {
                            ATerm q_4 (ATerm t)
                            {
                              t = not_null(b_75);
                              return(t);
                            }
                            t = HdMember_1(t, q_4);
                            t = h_75(t);
                            PopChoice();
                          }
                        else
                          {
                            t = o_12;
                            t = Cons_2(t, _id, h_75);
                          }
                      }
                    }
                  return(t);
                }
                t = h_75(t);
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
ATerm foldr_3 (ATerm t, ATerm r_47 (ATerm), ATerm s_47 (ATerm), ATerm t_47 (ATerm))
{
  ATerm x_75 (ATerm t)
  {
    ATerm o_75 = NULL,p_75 = NULL,q_75 = NULL;
    o_75 = t;
    n_75 :
    if(match_cons(o_75, sym_Nil_0))
      t = r_47(t);
    else
      {
        if(match_cons(o_75, sym_Cons_2))
          {
            p_75 = ATgetArgument(o_75, 0);
            q_75 = ATgetArgument(o_75, 1);
            {
              ATerm t_75 = NULL;
              t = not_null(p_75);
              {
                ATerm v_75 = NULL;
                t = t_47(t);
                t_75 = t;
                t = not_null(q_75);
                t = x_75(t);
                v_75 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_75), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = s_47(t);
              }
            }
          }
        else
          _fail(t);
      }
    return(t);
  }
  t = x_75(t);
  return(t);
}
ATerm definition_names_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    ATerm f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL;
    f_76 = t;
    e_76 :
    if(match_cons(f_76, sym_SDef_3))
      {
        g_76 = ATgetArgument(f_76, 0);
        h_76 = ATgetArgument(f_76, 1);
        i_76 = ATgetArgument(f_76, 2);
        {
          ATerm l_76 = NULL;
          t = not_null(h_76);
          t = length_0(t);
          l_76 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(g_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_76), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0));
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = foldr_3(t, s_4, union_0, t_4);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm w_76 = NULL;
  ATerm y_76 = NULL;
  w_76 = t;
  t = definition_names_0(t);
  y_76 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_76), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  {
    ATerm u_4 (ATerm t)
    {
      ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL,f_77 = NULL,g_77 = NULL;
      a_77 = t;
      s_76 :
      if(match_cons(a_77, sym_TCons_2))
        {
          b_77 = ATgetArgument(a_77, 0);
          c_77 = ATgetArgument(a_77, 1);
          t_76 :
          if(match_cons(c_77, sym_TCons_2))
            {
              d_77 = ATgetArgument(c_77, 0);
              e_77 = ATgetArgument(c_77, 1);
              u_76 :
              if(match_cons(e_77, sym_TCons_2))
                {
                  f_77 = ATgetArgument(e_77, 0);
                  g_77 = ATgetArgument(e_77, 1);
                  v_76 :
                  if(match_cons(g_77, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_77), not_null(f_77));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      return(t);
    }
    t = graph_nodes_undef_roots_3(t, get_definition_0, svars_arity_0, u_4);
    {
      ATerm p_12 = t;
      if(PushChoice()==0)
        {
          t = NoMissingDefs_0(t);
          PopChoice();
        }
      else
        {
          t = p_12;
          t = MissingDefs_0(t);
          t = (ATerm) ATmakeInt(1);
          t = exit_0(t);
        }
    }
  }
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm n_77 = NULL;
  n_77 = t;
  m_77 :
  if(!(match_cons(n_77, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm x_42 (ATerm), ATerm y_42 (ATerm))
{
  ATerm s_77 = NULL,t_77 = NULL,u_77 = NULL;
  s_77 = t;
  r_77 :
  if(match_cons(s_77, sym_TCons_2))
    {
      t_77 = ATgetArgument(s_77, 0);
      u_77 = ATgetArgument(s_77, 1);
      {
        ATerm x_77 = NULL;
        t = not_null(t_77);
        {
          ATerm z_77 = NULL;
          t = x_42(t);
          x_77 = t;
          t = not_null(u_77);
          t = y_42(t);
          z_77 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_77), not_null(z_77));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm g_78 = NULL;
  ATerm q_12;
  q_12 = t;
  {
    ATerm v_4 (ATerm t)
    {
      ATerm h_78 = NULL,i_78 = NULL;
      h_78 = t;
      f_78 :
      if(match_cons(h_78, sym_Program_1))
        {
          i_78 = ATgetArgument(h_78, 0);
          if(g_78 != NULL && g_78 != i_78)
            _fail(i_78);
          else
            g_78 = i_78;
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1(t, v_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_78), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = q_12;
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
  ATerm l_78 = NULL;
  l_78 = t;
  t = SSL_exit(not_null(l_78));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm s_78 = NULL,t_78 = NULL,u_78 = NULL,v_78 = NULL,w_78 = NULL;
  s_78 = t;
  p_78 :
  if(match_cons(s_78, sym_TCons_2))
    {
      t_78 = ATgetArgument(s_78, 0);
      u_78 = ATgetArgument(s_78, 1);
      q_78 :
      if(match_cons(u_78, sym_TCons_2))
        {
          v_78 = ATgetArgument(u_78, 0);
          w_78 = ATgetArgument(u_78, 1);
          r_78 :
          if(match_cons(w_78, sym_TNil_0))
            {
              ATerm r_12;
              r_12 = t;
              t = SSL_printnl(not_null(t_78), not_null(v_78));
              t = r_12;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm p_57 (ATerm))
{
  ATerm s_12 = t;
  if(PushChoice()==0)
    {
      t = p_57(t);
      PopChoice();
    }
  else
    t = s_12;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm i_79 = NULL,j_79 = NULL;
  ATerm y_12 = t;
  if(PushChoice()==0)
    {
      ATerm w_4 (ATerm t)
      {
        ATerm z_12 = t;
        if(PushChoice()==0)
          {
            ATerm c_5 (ATerm t)
            {
              ATerm k_79 = NULL;
              k_79 = t;
              a_79 :
              if(!(match_cons(k_79, sym_Silent_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, c_5);
            PopChoice();
            _fail(t);
          }
        else
          t = z_12;
        return(t);
      }
      ATerm b_5 (ATerm t)
      {
        ATerm d_5 (ATerm t)
        {
          ATerm l_79 = NULL;
          l_79 = t;
          b_79 :
          if(!(match_cons(l_79, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, d_5);
        return(t);
      }
      t = TCons_2(t, w_4, b_5);
      {
        ATerm e_5 (ATerm t)
        {
          ATerm g_5 (ATerm t)
          {
            ATerm m_79 = NULL,n_79 = NULL;
            m_79 = t;
            d_79 :
            if(match_cons(m_79, sym_Runtime_1))
              {
                n_79 = ATgetArgument(m_79, 0);
                if(j_79 != NULL && j_79 != n_79)
                  _fail(n_79);
                else
                  j_79 = n_79;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, g_5);
          return(t);
        }
        ATerm f_5 (ATerm t)
        {
          ATerm h_5 (ATerm t)
          {
            ATerm o_79 = NULL;
            o_79 = t;
            e_79 :
            if(!(match_cons(o_79, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, h_5);
          return(t);
        }
        t = TCons_2(t, e_5, f_5);
        {
          ATerm i_5 (ATerm t)
          {
            ATerm k_5 (ATerm t)
            {
              ATerm p_79 = NULL,q_79 = NULL;
              p_79 = t;
              g_79 :
              if(match_cons(p_79, sym_Program_1))
                {
                  q_79 = ATgetArgument(p_79, 0);
                  if(i_79 != NULL && i_79 != q_79)
                    _fail(q_79);
                  else
                    i_79 = q_79;
                }
              else
                _fail(t);
              return(t);
            }
            t = fetch_1(t, k_5);
            return(t);
          }
          ATerm j_5 (ATerm t)
          {
            ATerm l_5 (ATerm t)
            {
              ATerm r_79 = NULL;
              r_79 = t;
              h_79 :
              if(!(match_cons(r_79, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, _id, l_5);
            return(t);
          }
          t = TCons_2(t, i_5, j_5);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_79), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_79), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      PopChoice();
    }
  else
    t = y_12;
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm y_79 = NULL,z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL;
  y_79 = t;
  v_79 :
  if(match_cons(y_79, sym_TCons_2))
    {
      z_79 = ATgetArgument(y_79, 0);
      a_80 = ATgetArgument(y_79, 1);
      w_79 :
      if(match_cons(a_80, sym_TCons_2))
        {
          b_80 = ATgetArgument(a_80, 0);
          c_80 = ATgetArgument(a_80, 1);
          x_79 :
          if(match_cons(c_80, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(z_79), not_null(b_80));
          else
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
  ATerm k_80 = NULL,l_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL;
  k_80 = t;
  h_80 :
  if(match_cons(k_80, sym_TCons_2))
    {
      l_80 = ATgetArgument(k_80, 0);
      m_80 = ATgetArgument(k_80, 1);
      i_80 :
      if(match_cons(m_80, sym_TCons_2))
        {
          n_80 = ATgetArgument(m_80, 0);
          o_80 = ATgetArgument(m_80, 1);
          j_80 :
          if(match_cons(o_80, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(l_80), not_null(n_80));
          else
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
  ATerm a_81 = NULL;
  ATerm i_13;
  i_13 = t;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm j_13 = t;
      if(PushChoice()==0)
        {
          ATerm o_5 (ATerm t)
          {
            ATerm b_81 = NULL,d_81 = NULL;
            b_81 = t;
            t_80 :
            if(match_cons(b_81, sym_Output_1))
              {
                d_81 = ATgetArgument(b_81, 0);
                if(a_81 != NULL && a_81 != d_81)
                  _fail(d_81);
                else
                  a_81 = d_81;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, o_5);
          PopChoice();
        }
      else
        {
          t = j_13;
          {
            ATerm e_81 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            e_81 = t;
            if(a_81 != NULL && a_81 != e_81)
              _fail(e_81);
            else
              a_81 = e_81;
          }
        }
      return(t);
    }
    ATerm n_5 (ATerm t)
    {
      ATerm p_5 (ATerm t)
      {
        ATerm f_81 = NULL;
        f_81 = t;
        v_80 :
        if(!(match_cons(f_81, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, _id, p_5);
      return(t);
    }
    t = TCons_2(t, m_5, n_5);
  }
  t = i_13;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm r_5 (ATerm t)
      {
        ATerm y_5 (ATerm t)
        {
          t = not_null(a_81);
          return(t);
        }
        t = split_2(t, y_5, _id);
        return(t);
      }
      ATerm x_5 (ATerm t)
      {
        ATerm g_81 = NULL;
        g_81 = t;
        w_80 :
        if(!(match_cons(g_81, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, r_5, x_5);
      return(t);
    }
    t = TCons_2(t, _id, q_5);
    {
      ATerm k_13 = t;
      if(PushChoice()==0)
        {
          ATerm z_5 (ATerm t)
          {
            ATerm b_6 (ATerm t)
            {
              ATerm h_81 = NULL;
              h_81 = t;
              x_80 :
              if(!(match_cons(h_81, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, b_6);
            return(t);
          }
          ATerm a_6 (ATerm t)
          {
            ATerm c_6 (ATerm t)
            {
              ATerm i_81 = NULL;
              i_81 = t;
              y_80 :
              if(!(match_cons(i_81, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, WriteToBinaryFile_0, c_6);
            return(t);
          }
          t = TCons_2(t, z_5, a_6);
          PopChoice();
        }
      else
        {
          t = k_13;
          {
            ATerm d_6 (ATerm t)
            {
              ATerm e_6 (ATerm t)
              {
                ATerm j_81 = NULL;
                j_81 = t;
                z_80 :
                if(!(match_cons(j_81, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, WriteToTextFile_0, e_6);
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
ATerm apply_strategy_1 (ATerm t, ATerm z_45 (ATerm))
{
  ATerm s_81 = NULL,u_81 = NULL,v_81 = NULL,w_81 = NULL,x_81 = NULL,y_81 = NULL;
  ATerm l_13;
  l_13 = t;
  t = dtime_0(t);
  t = l_13;
  t = z_45(t);
  {
    ATerm m_13;
    m_13 = t;
    {
      ATerm t_81 = NULL;
      t = dtime_0(t);
      t_81 = t;
      if(s_81 != NULL && s_81 != t_81)
        _fail(t_81);
      else
        s_81 = t_81;
    }
    t = m_13;
    u_81 = t;
    p_81 :
    if(match_cons(u_81, sym_TCons_2))
      {
        v_81 = ATgetArgument(u_81, 0);
        w_81 = ATgetArgument(u_81, 1);
        q_81 :
        if(match_cons(w_81, sym_TCons_2))
          {
            x_81 = ATgetArgument(w_81, 0);
            y_81 = ATgetArgument(w_81, 1);
            r_81 :
            if(match_cons(y_81, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(s_81)), not_null(v_81)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_81), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm e_82 = NULL;
  e_82 = t;
  t = SSL_ReadFromFile(not_null(e_82));
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_56 (ATerm), ATerm y_56 (ATerm))
{
  ATerm k_82 = NULL;
  ATerm m_82 = NULL;
  k_82 = t;
  {
    ATerm o_82 = NULL;
    t = x_56(t);
    m_82 = t;
    t = not_null(k_82);
    t = y_56(t);
    o_82 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_82), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm w_82 = NULL;
  ATerm n_13;
  n_13 = t;
  {
    ATerm o_13 = t;
    if(PushChoice()==0)
      {
        ATerm f_6 (ATerm t)
        {
          ATerm x_82 = NULL,y_82 = NULL;
          x_82 = t;
          u_82 :
          if(match_cons(x_82, sym_Input_1))
            {
              y_82 = ATgetArgument(x_82, 0);
              if(w_82 != NULL && w_82 != y_82)
                _fail(y_82);
              else
                w_82 = y_82;
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1(t, f_6);
        PopChoice();
      }
    else
      {
        t = o_13;
        {
          ATerm z_82 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          z_82 = t;
          if(w_82 != NULL && w_82 != z_82)
            _fail(z_82);
          else
            w_82 = z_82;
        }
      }
  }
  t = n_13;
  {
    ATerm g_6 (ATerm t)
    {
      t = not_null(w_82);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, g_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_83 = NULL;
  d_83 = t;
  c_83 :
  if(!(match_cons(d_83, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_38 (ATerm))
{
  ATerm h_83 = NULL,i_83 = NULL;
  h_83 = t;
  g_83 :
  if(match_cons(h_83, sym_Undefined_1))
    {
      i_83 = ATgetArgument(h_83, 0);
      {
        ATerm k_83 = NULL;
        t = not_null(i_83);
        t = g_38(t);
        k_83 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_83));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm p_83 = NULL;
  p_83 = t;
  o_83 :
  if(!(match_cons(p_83, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm f_63 (ATerm))
{
  ATerm q_83 (ATerm t)
  {
    ATerm w_13 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, f_63, _id);
        PopChoice();
      }
    else
      {
        t = w_13;
        t = Cons_2(t, _id, q_83);
      }
    return(t);
  }
  t = q_83(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_45 (ATerm))
{
  t = fetch_1(t, d_45);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_45 (ATerm))
{
  ATerm i_6 (ATerm t)
  {
    ATerm x_13 = t;
    if(PushChoice()==0)
      {
        ATerm t_83 = NULL;
        t_83 = t;
        r_83 :
        if(!(match_cons(t_83, sym_Help_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = x_13;
        {
          ATerm y_13 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = y_13;
              {
                ATerm u_83 = NULL;
                u_83 = t;
                s_83 :
                if(!(match_cons(u_83, sym_Version_0)))
                  _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, i_6);
  t = y_45(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_84 = NULL,b_84 = NULL,c_84 = NULL;
  ATerm f_14;
  f_14 = t;
  {
    ATerm d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL,j_84 = NULL;
    d_84 = t;
    w_83 :
    if(match_cons(d_84, sym_TCons_2))
      {
        e_84 = ATgetArgument(d_84, 0);
        f_84 = ATgetArgument(d_84, 1);
        x_83 :
        if(match_cons(f_84, sym_TCons_2))
          {
            g_84 = ATgetArgument(f_84, 0);
            h_84 = ATgetArgument(f_84, 1);
            y_83 :
            if(match_cons(h_84, sym_TCons_2))
              {
                i_84 = ATgetArgument(h_84, 0);
                j_84 = ATgetArgument(h_84, 1);
                z_83 :
                if(match_cons(j_84, sym_TNil_0))
                  {
                    if(a_84 != NULL && a_84 != e_84)
                      _fail(e_84);
                    else
                      a_84 = e_84;
                    if(b_84 != NULL && b_84 != g_84)
                      _fail(g_84);
                    else
                      b_84 = g_84;
                    if(c_84 != NULL && c_84 != i_84)
                      _fail(i_84);
                    else
                      c_84 = i_84;
                    t = SSL_table_put(not_null(a_84), not_null(b_84), not_null(c_84));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = f_14;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm m_84 = NULL;
  m_84 = t;
  t = SSL_table_create(not_null(m_84));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm q_84 = NULL;
  q_84 = t;
  {
    ATerm g_14;
    g_14 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_84), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = g_14;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm w_44 (ATerm), ATerm x_44 (ATerm))
{
  ATerm w_84 = NULL,x_84 = NULL,y_84 = NULL;
  w_84 = t;
  v_84 :
  if(match_cons(w_84, sym_Cons_2))
    {
      x_84 = ATgetArgument(w_84, 0);
      y_84 = ATgetArgument(w_84, 1);
      {
        ATerm b_85 = NULL;
        t = not_null(x_84);
        t = w_44(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = x_44(t);
        b_85 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_85), not_null(y_84));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm y_44 (ATerm), ATerm z_44 (ATerm))
{
  ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL,m_85 = NULL,n_85 = NULL;
  j_85 = t;
  h_85 :
  if(match_cons(j_85, sym_Cons_2))
    {
      k_85 = ATgetArgument(j_85, 0);
      l_85 = ATgetArgument(j_85, 1);
      i_85 :
      if(match_cons(l_85, sym_Cons_2))
        {
          m_85 = ATgetArgument(l_85, 0);
          n_85 = ATgetArgument(l_85, 1);
          {
            ATerm r_85 = NULL;
            t = not_null(k_85);
            t = y_44(t);
            t = not_null(m_85);
            t = z_44(t);
            r_85 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_85), not_null(n_85));
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
  ATerm m_14 = t;
  if(PushChoice()==0)
    {
      ATerm j_6 (ATerm t)
      {
        ATerm p_86 = NULL;
        p_86 = t;
        v_85 :
        if(!(match_string(p_86, "-S")))
          _fail(t);
        return(t);
      }
      ATerm k_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, j_6, k_6);
      PopChoice();
    }
  else
    {
      t = m_14;
      {
        ATerm n_14 = t;
        if(PushChoice()==0)
          {
            ATerm l_6 (ATerm t)
            {
              ATerm q_86 = NULL;
              q_86 = t;
              w_85 :
              if(!(match_string(q_86, "--silent")))
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
            t = n_14;
            {
              ATerm o_14 = t;
              if(PushChoice()==0)
                {
                  ATerm n_6 (ATerm t)
                  {
                    ATerm r_86 = NULL;
                    r_86 = t;
                    x_85 :
                    if(!(match_string(r_86, "--verbose")))
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
                  t = o_14;
                  {
                    ATerm p_14 = t;
                    if(PushChoice()==0)
                      {
                        ATerm p_6 (ATerm t)
                        {
                          ATerm s_86 = NULL;
                          s_86 = t;
                          y_85 :
                          if(!(match_string(s_86, "-v")))
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
                        t = p_14;
                        {
                          ATerm q_14 = t;
                          if(PushChoice()==0)
                            {
                              ATerm r_6 (ATerm t)
                              {
                                ATerm t_86 = NULL;
                                t_86 = t;
                                z_85 :
                                if(!(match_string(t_86, "--version")))
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
                              t = q_14;
                              {
                                ATerm r_14 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm t_6 (ATerm t)
                                    {
                                      ATerm u_86 = NULL;
                                      u_86 = t;
                                      a_86 :
                                      if(!(match_string(u_86, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm u_6 (ATerm t)
                                    {
                                      ATerm v_86 = NULL;
                                      v_86 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(v_86));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, t_6, u_6);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = r_14;
                                    {
                                      ATerm b_15 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm y_6 (ATerm t)
                                          {
                                            ATerm x_86 = NULL;
                                            x_86 = t;
                                            c_86 :
                                            if(!(match_string(x_86, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm z_6 (ATerm t)
                                          {
                                            ATerm y_86 = NULL;
                                            y_86 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_86));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, y_6, z_6);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = b_15;
                                          {
                                            ATerm c_15 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm a_7 (ATerm t)
                                                {
                                                  ATerm a_87 = NULL;
                                                  a_87 = t;
                                                  e_86 :
                                                  if(!(match_string(a_87, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm b_7 (ATerm t)
                                                {
                                                  ATerm b_87 = NULL;
                                                  b_87 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(b_87));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, a_7, b_7);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = c_15;
                                                {
                                                  ATerm d_15 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm c_7 (ATerm t)
                                                      {
                                                        ATerm d_87 = NULL;
                                                        d_87 = t;
                                                        g_86 :
                                                        if(!(match_string(d_87, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm i_7 (ATerm t)
                                                      {
                                                        ATerm e_87 = NULL;
                                                        e_87 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_87));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, c_7, i_7);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = d_15;
                                                      {
                                                        ATerm e_15 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm j_7 (ATerm t)
                                                            {
                                                              ATerm g_87 = NULL;
                                                              g_87 = t;
                                                              i_86 :
                                                              if(!(match_string(g_87, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm o_7 (ATerm t)
                                                            {
                                                              ATerm h_87 = NULL;
                                                              h_87 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_87));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, j_7, o_7);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = e_15;
                                                            {
                                                              ATerm f_15 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm p_7 (ATerm t)
                                                                  {
                                                                    ATerm j_87 = NULL;
                                                                    j_87 = t;
                                                                    k_86 :
                                                                    if(!(match_string(j_87, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm q_7 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, p_7, q_7);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = f_15;
                                                                  {
                                                                    ATerm g_15 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm r_7 (ATerm t)
                                                                        {
                                                                          ATerm k_87 = NULL;
                                                                          k_87 = t;
                                                                          l_86 :
                                                                          if(!(match_string(k_87, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm s_7 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, r_7, s_7);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = g_15;
                                                                        {
                                                                          ATerm h_15 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm t_7 (ATerm t)
                                                                              {
                                                                                ATerm l_87 = NULL;
                                                                                l_87 = t;
                                                                                m_86 :
                                                                                if(!(match_string(l_87, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm u_7 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, t_7, u_7);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_15;
                                                                              {
                                                                                ATerm q_15 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm v_7 (ATerm t)
                                                                                    {
                                                                                      ATerm m_87 = NULL;
                                                                                      m_87 = t;
                                                                                      n_86 :
                                                                                      if(!(match_string(m_87, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm w_7 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, v_7, w_7);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_15;
                                                                                    {
                                                                                      ATerm x_7 (ATerm t)
                                                                                      {
                                                                                        ATerm n_87 = NULL;
                                                                                        n_87 = t;
                                                                                        o_86 :
                                                                                        if(!(match_string(n_87, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm y_7 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, x_7, y_7);
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
  ATerm v_87 = NULL,w_87 = NULL,x_87 = NULL;
  v_87 = t;
  u_87 :
  if(match_cons(v_87, sym_Cons_2))
    {
      w_87 = ATgetArgument(v_87, 0);
      x_87 = ATgetArgument(v_87, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_87)), not_null(x_87));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_43 (ATerm), ATerm c_43 (ATerm))
{
  ATerm f_88 = NULL,g_88 = NULL,h_88 = NULL;
  f_88 = t;
  e_88 :
  if(match_cons(f_88, sym_Cons_2))
    {
      g_88 = ATgetArgument(f_88, 0);
      h_88 = ATgetArgument(f_88, 1);
      {
        ATerm k_88 = NULL;
        t = not_null(g_88);
        {
          ATerm m_88 = NULL;
          t = b_43(t);
          k_88 = t;
          t = not_null(h_88);
          t = c_43(t);
          m_88 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_88), not_null(m_88));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm s_88 = NULL;
  s_88 = t;
  r_88 :
  if(!(match_cons(s_88, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm u_44 (ATerm))
{
  ATerm z_7 (ATerm t)
  {
    ATerm v_88 = NULL;
    v_88 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_88));
    return(t);
  }
  ATerm e_8 (ATerm t)
  {
    ATerm r_15 = t;
    if(PushChoice()==0)
      {
        ATerm s_15 = t;
        if(PushChoice()==0)
          {
            ATerm x_88 = NULL;
            x_88 = t;
            u_88 :
            if(!(match_cons(x_88, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = s_15;
            t = u_44(t);
            t = Cons_2(t, _id, e_8);
          }
        PopChoice();
      }
    else
      {
        t = r_15;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, z_7, e_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm n_45 (ATerm), ATerm o_45 (ATerm), ATerm p_45 (ATerm))
{
  ATerm h_8 (ATerm t)
  {
    ATerm t_15 = t;
    if(PushChoice()==0)
      {
        t = o_45(t);
        PopChoice();
      }
    else
      {
        t = t_15;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, h_8);
  t = store_options_0(t);
  {
    ATerm u_15 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, p_45);
        PopChoice();
      }
    else
      {
        t = u_15;
        {
          ATerm v_15 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, n_45);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = v_15;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm i_45 (ATerm), ATerm j_45 (ATerm))
{
  t = iowrap_3(t, i_45, j_45, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm f_45 (ATerm))
{
  ATerm n_8 (ATerm t)
  {
    ATerm o_8 (ATerm t)
    {
      ATerm p_8 (ATerm t)
      {
        ATerm b_89 = NULL;
        b_89 = t;
        a_89 :
        if(!(match_cons(b_89, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, f_45, p_8);
      return(t);
    }
    t = TCons_2(t, _id, o_8);
    return(t);
  }
  t = iowrap_2(t, n_8, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  t = iowrap_1(t, all_defs_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, all_defs_0);
  return(t);
}
