#include <stratego.h>
#include <stratego-lib.h>
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Operations_1;
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
Symbol sym_Dir_1;
Symbol sym_ExecDir_1;
Symbol sym_InclDir_1;
Symbol sym_CInclDir_1;
Symbol sym_CLibDir_1;
Symbol sym_Input_1;
Symbol sym_Main_1;
Symbol sym_AST_0;
Symbol sym_Ignore_0;
Symbol sym_CC_0;
Symbol sym_NORM_0;
Symbol sym_FUSION_0;
Symbol sym_FRONTEND_0;
Symbol sym_CSYNTAX_0;
Symbol sym_TNil_0;
Symbol sym_TCons_2;
Symbol sym_Pair_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
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
  sym_Dir_1 = ATmakeSymbol("Dir", 1, ATfalse);
  ATprotectSymbol(sym_Dir_1);
  sym_ExecDir_1 = ATmakeSymbol("ExecDir", 1, ATfalse);
  ATprotectSymbol(sym_ExecDir_1);
  sym_InclDir_1 = ATmakeSymbol("InclDir", 1, ATfalse);
  ATprotectSymbol(sym_InclDir_1);
  sym_CInclDir_1 = ATmakeSymbol("CInclDir", 1, ATfalse);
  ATprotectSymbol(sym_CInclDir_1);
  sym_CLibDir_1 = ATmakeSymbol("CLibDir", 1, ATfalse);
  ATprotectSymbol(sym_CLibDir_1);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Main_1 = ATmakeSymbol("Main", 1, ATfalse);
  ATprotectSymbol(sym_Main_1);
  sym_AST_0 = ATmakeSymbol("AST", 0, ATfalse);
  ATprotectSymbol(sym_AST_0);
  sym_Ignore_0 = ATmakeSymbol("Ignore", 0, ATfalse);
  ATprotectSymbol(sym_Ignore_0);
  sym_CC_0 = ATmakeSymbol("CC", 0, ATfalse);
  ATprotectSymbol(sym_CC_0);
  sym_NORM_0 = ATmakeSymbol("NORM", 0, ATfalse);
  ATprotectSymbol(sym_NORM_0);
  sym_FUSION_0 = ATmakeSymbol("FUSION", 0, ATfalse);
  ATprotectSymbol(sym_FUSION_0);
  sym_FRONTEND_0 = ATmakeSymbol("FRONTEND", 0, ATfalse);
  ATprotectSymbol(sym_FRONTEND_0);
  sym_CSYNTAX_0 = ATmakeSymbol("CSYNTAX", 0, ATfalse);
  ATprotectSymbol(sym_CSYNTAX_0);
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
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm rm_files_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm genzip_4 (ATerm, ATerm w_44 (ATerm), ATerm x_44 (ATerm), ATerm y_44 (ATerm), ATerm z_44 (ATerm));
ATerm rzip_1 (ATerm, ATerm l_45 (ATerm));
ATerm remove_intermediates_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm l_33 (ATerm), ATerm m_33 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_46 (ATerm));
ATerm option_defined_1 (ATerm, ATerm e_37 (ATerm));
ATerm try_1 (ATerm, ATerm y_52 (ATerm));
ATerm concat_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm SplitNext_0 (ATerm);
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm b_52 (ATerm), ATerm c_52 (ATerm));
ATerm repeat_1 (ATerm, ATerm e_52 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm SplitExit_0 (ATerm);
ATerm SplitInit_0 (ATerm);
ATerm split_at_space_0 (ATerm);
ATerm map_1 (ATerm, ATerm k_46 (ATerm));
ATerm CLibDir_1 (ATerm, ATerm i_33 (ATerm));
ATerm Dir_1 (ATerm, ATerm e_33 (ATerm));
ATerm cc2_0 (ATerm);
ATerm gcc_0 (ATerm);
ATerm CInclDir_1 (ATerm, ATerm h_33 (ATerm));
ATerm cc1_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm pp_c_1 (ATerm, ATerm d_54 (ATerm));
ATerm s2c_1 (ATerm, ATerm c_54 (ATerm));
ATerm stratego_cf_1 (ATerm, ATerm g_54 (ATerm));
ATerm canonicalize_1 (ATerm, ATerm q_53 (ATerm));
ATerm optimize2_1 (ATerm, ATerm x_53 (ATerm));
ATerm compile_match_1 (ATerm, ATerm w_53 (ATerm));
ATerm fusion_1 (ATerm, ATerm v_53 (ATerm));
ATerm FUSION_0 (ATerm);
ATerm optimize1_1 (ATerm, ATerm u_53 (ATerm));
ATerm inline_1 (ATerm, ATerm r_53 (ATerm));
ATerm rename_defs_1 (ATerm, ATerm p_53 (ATerm));
ATerm stratego_nf_1 (ATerm, ATerm f_54 (ATerm));
ATerm extract_1 (ATerm, ATerm n_53 (ATerm));
ATerm split_2 (ATerm, ATerm a_40 (ATerm), ATerm b_40 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm extract_all_1 (ATerm, ATerm o_53 (ATerm));
ATerm FRONTEND_0 (ATerm);
ATerm output_frontend_1 (ATerm, ATerm j_53 (ATerm));
ATerm pipe_2 (ATerm, ATerm h_36 (ATerm), ATerm i_36 (ATerm));
ATerm frontend_1 (ATerm, ATerm m_53 (ATerm));
ATerm list_1 (ATerm, ATerm m_46 (ATerm));
ATerm core_0 (ATerm);
ATerm transform_file_2 (ATerm, ATerm m_36 (ATerm), ATerm n_36 (ATerm));
ATerm AddMain_1 (ATerm, ATerm k_53 (ATerm));
ATerm Main_1 (ATerm, ATerm k_33 (ATerm));
ATerm add_main_0 (ATerm);
ATerm AST_0 (ATerm);
ATerm output_ast_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm apply_to_file_1 (ATerm, ATerm o_36 (ATerm));
ATerm copy_file_3 (ATerm, ATerm p_36 (ATerm), ATerm q_36 (ATerm), ATerm r_36 (ATerm));
ATerm at_end_1 (ATerm, ATerm z_46 (ATerm));
ATerm conc_0 (ATerm);
ATerm pref_1 (ATerm, ATerm l_53 (ATerm));
ATerm call_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm pipe_p__3 (ATerm, ATerm j_36 (ATerm), ATerm k_36 (ATerm), ATerm l_36 (ATerm));
ATerm Output_1 (ATerm, ATerm a_33 (ATerm));
ATerm ExecDir_1 (ATerm, ATerm f_33 (ATerm));
ATerm InclDir_1 (ATerm, ATerm g_33 (ATerm));
ATerm parse_0 (ATerm);
ATerm Verbose_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm DeclVersion_1 (ATerm, ATerm c_33 (ATerm));
ATerm sc_version_0 (ATerm);
ATerm sc_usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm y_32 (ATerm));
ATerm Help_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_37 (ATerm));
ATerm Input_1 (ATerm, ATerm a_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm x_36 (ATerm), ATerm y_36 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm z_36 (ATerm), ATerm a_37 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm basename_1 (ATerm, ATerm i_39 (ATerm));
ATerm basename_0 (ATerm);
ATerm sc_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm v_36 (ATerm));
ATerm skip1_1 (ATerm, ATerm x_40 (ATerm));
ATerm filter_option_args_1 (ATerm, ATerm z_40 (ATerm));
ATerm at_tail_1 (ATerm, ATerm x_46 (ATerm));
ATerm skip2_1 (ATerm, ATerm y_40 (ATerm));
ATerm Cons_2 (ATerm, ATerm p_33 (ATerm), ATerm q_33 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm filter_gen_2 (ATerm, ATerm u_40 (ATerm), ATerm v_40 (ATerm, ATerm (ATerm)));
ATerm filter_options_1 (ATerm, ATerm a_41 (ATerm));
ATerm process_sc_options_0 (ATerm);
ATerm sc_0 (ATerm);
ATerm main_0 (ATerm);
ATerm exit_0 (ATerm t)
{
  ATerm g_1 = NULL;
  g_1 = t;
  t = SSL_exit(not_null(g_1));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL;
  n_1 = t;
  k_1 :
  if(match_cons(n_1, sym_TCons_2))
    {
      o_1 = ATgetArgument(n_1, 0);
      p_1 = ATgetArgument(n_1, 1);
      l_1 :
      if(match_cons(p_1, sym_TCons_2))
        {
          q_1 = ATgetArgument(p_1, 0);
          r_1 = ATgetArgument(p_1, 1);
          m_1 :
          if(match_cons(r_1, sym_TNil_0))
            {
              ATerm d_5;
              d_5 = t;
              t = SSL_printnl(not_null(o_1), not_null(q_1));
              t = d_5;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm w_1 = NULL;
  w_1 = t;
  v_1 :
  if(!(match_cons(w_1, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm rm_files_0 (ATerm t)
{
  ATerm y_1 = NULL;
  y_1 = t;
  {
    ATerm z_19;
    z_19 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue)), not_null(y_1)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = call_0(t);
    t = z_19;
  }
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL;
  i_2 = t;
  f_2 :
  if(match_cons(i_2, sym_TCons_2))
    {
      j_2 = ATgetArgument(i_2, 0);
      k_2 = ATgetArgument(i_2, 1);
      g_2 :
      if(match_cons(k_2, sym_TCons_2))
        {
          l_2 = ATgetArgument(k_2, 0);
          m_2 = ATgetArgument(k_2, 1);
          h_2 :
          if(match_cons(m_2, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_2), not_null(l_2));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm RZip2_0 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL;
  v_2 = t;
  r_2 :
  if(match_cons(v_2, sym_TCons_2))
    {
      w_2 = ATgetArgument(v_2, 0);
      x_2 = ATgetArgument(v_2, 1);
      s_2 :
      if(match_cons(x_2, sym_TCons_2))
        {
          y_2 = ATgetArgument(x_2, 0);
          b_3 = ATgetArgument(x_2, 1);
          t_2 :
          if(match_cons(y_2, sym_Cons_2))
            {
              z_2 = ATgetArgument(y_2, 0);
              a_3 = ATgetArgument(y_2, 1);
              u_2 :
              if(match_cons(b_3, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(w_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_2), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(w_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_3), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL;
  l_3 = t;
  h_3 :
  if(match_cons(l_3, sym_TCons_2))
    {
      m_3 = ATgetArgument(l_3, 0);
      n_3 = ATgetArgument(l_3, 1);
      i_3 :
      if(match_cons(n_3, sym_TCons_2))
        {
          o_3 = ATgetArgument(n_3, 0);
          p_3 = ATgetArgument(n_3, 1);
          j_3 :
          if(match_cons(o_3, sym_Nil_0))
            {
              k_3 :
              if(match_cons(p_3, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm w_44 (ATerm), ATerm x_44 (ATerm), ATerm y_44 (ATerm), ATerm z_44 (ATerm))
{
  ATerm t_3 (ATerm t)
  {
    ATerm a_20 = t;
    if(PushChoice()==0)
      {
        t = w_44(t);
        PopChoice();
      }
    else
      {
        t = a_20;
        t = x_44(t);
        {
          ATerm b_0 (ATerm t)
          {
            ATerm c_0 (ATerm t)
            {
              ATerm s_3 = NULL;
              s_3 = t;
              r_3 :
              if(!(match_cons(s_3, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, t_3, c_0);
            return(t);
          }
          t = TCons_2(t, z_44, b_0);
          t = y_44(t);
        }
      }
    return(t);
  }
  t = t_3(t);
  return(t);
}
ATerm rzip_1 (ATerm t, ATerm l_45 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, l_45);
  return(t);
}
ATerm remove_intermediates_0 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL;
  y_3 = t;
  v_3 :
  if(match_cons(y_3, sym_TCons_2))
    {
      z_3 = ATgetArgument(y_3, 0);
      a_4 = ATgetArgument(y_3, 1);
      w_3 :
      if(match_cons(a_4, sym_TCons_2))
        {
          b_4 = ATgetArgument(a_4, 0);
          c_4 = ATgetArgument(a_4, 1);
          x_3 :
          if(match_cons(c_4, sym_TNil_0))
            {
              ATerm m_20;
              m_20 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_3), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".tree1", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s1", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s2", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".so1", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".so2", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".so3", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".so4", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".i1", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".i", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))))))))))), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = rzip_1(t, conc_strings_0);
              t = rm_files_0(t);
              t = m_20;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm l_33 (ATerm), ATerm m_33 (ATerm))
{
  ATerm j_4 = NULL,k_4 = NULL,l_4 = NULL;
  j_4 = t;
  i_4 :
  if(match_cons(j_4, sym_TCons_2))
    {
      k_4 = ATgetArgument(j_4, 0);
      l_4 = ATgetArgument(j_4, 1);
      {
        ATerm o_4 = NULL;
        t = not_null(k_4);
        {
          ATerm q_4 = NULL;
          t = l_33(t);
          o_4 = t;
          t = not_null(l_4);
          t = m_33(t);
          q_4 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_4), not_null(q_4));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm t_46 (ATerm))
{
  ATerm v_4 (ATerm t)
  {
    ATerm n_20 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, t_46, _id);
        PopChoice();
      }
    else
      {
        t = n_20;
        t = Cons_2(t, _id, v_4);
      }
    return(t);
  }
  t = v_4(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_37 (ATerm))
{
  t = fetch_1(t, e_37);
  return(t);
}
ATerm try_1 (ATerm t, ATerm y_52 (ATerm))
{
  ATerm u_20 = t;
  if(PushChoice()==0)
    {
      t = y_52(t);
      PopChoice();
    }
  else
    t = u_20;
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
  y_4 = t;
  x_4 :
  if(!(match_cons(y_4, sym_Nil_0)))
    {
      if(match_cons(y_4, sym_Cons_2))
        {
          z_4 = ATgetArgument(y_4, 0);
          a_5 = ATgetArgument(y_4, 1);
          t = not_null(z_4);
          {
            ATerm d_0 (ATerm t)
            {
              t = not_null(a_5);
              t = concat_0(t);
              return(t);
            }
            t = at_end_1(t, d_0);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL;
  j_5 = t;
  g_5 :
  if(match_cons(j_5, sym_TCons_2))
    {
      k_5 = ATgetArgument(j_5, 0);
      l_5 = ATgetArgument(j_5, 1);
      h_5 :
      if(match_cons(l_5, sym_TCons_2))
        {
          m_5 = ATgetArgument(l_5, 0);
          n_5 = ATgetArgument(l_5, 1);
          i_5 :
          if(match_cons(n_5, sym_TNil_0))
            {
              if(k_5 != NULL && k_5 != m_5)
                _fail(m_5);
              else
                k_5 = m_5;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm SplitNext_0 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL;
  ATerm s_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_6), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(32), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm v_20 = t;
      if(PushChoice()==0)
        {
          t = eq_0(t);
          PopChoice();
          _fail(t);
        }
      else
        t = v_20;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_6), not_null(c_6)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_6), (ATerm) ATmakeAppl(sym_TNil_0))));
    return(t);
  }
  z_5 = t;
  t_5 :
  if(match_cons(z_5, sym_TCons_2))
    {
      a_6 = ATgetArgument(z_5, 0);
      b_6 = ATgetArgument(z_5, 1);
      u_5 :
      if(match_cons(b_6, sym_TCons_2))
        {
          c_6 = ATgetArgument(b_6, 0);
          d_6 = ATgetArgument(b_6, 1);
          v_5 :
          if(match_cons(d_6, sym_TCons_2))
            {
              e_6 = ATgetArgument(d_6, 0);
              h_6 = ATgetArgument(d_6, 1);
              w_5 :
              if(match_cons(e_6, sym_Cons_2))
                {
                  f_6 = ATgetArgument(e_6, 0);
                  g_6 = ATgetArgument(e_6, 1);
                  x_5 :
                  if(match_cons(h_6, sym_TNil_0))
                    {
                      y_5 :
                      if(match_int(f_6, 32))
                        {
                          ATerm x_20 = t;
                          if(PushChoice()==0)
                            {
                              ATerm l_6 = NULL;
                              t = not_null(c_6);
                              t = reverse_0(t);
                              t = implode_string_0(t);
                              l_6 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_6), not_null(a_6)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_6), (ATerm) ATmakeAppl(sym_TNil_0))));
                              PopChoice();
                            }
                          else
                            {
                              t = x_20;
                              t = s_6(t);
                            }
                        }
                      else
                        t = s_6(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL;
  z_6 = t;
  v_6 :
  if(match_cons(z_6, sym_TCons_2))
    {
      a_7 = ATgetArgument(z_6, 0);
      b_7 = ATgetArgument(z_6, 1);
      w_6 :
      if(match_cons(a_7, sym_Nil_0))
        {
          x_6 :
          if(match_cons(b_7, sym_TCons_2))
            {
              c_7 = ATgetArgument(b_7, 0);
              d_7 = ATgetArgument(b_7, 1);
              y_6 :
              if(match_cons(d_7, sym_TNil_0))
                t = not_null(c_7);
              else
                _fail(t);
            }
          else
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
  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
  l_7 = t;
  h_7 :
  if(match_cons(l_7, sym_TCons_2))
    {
      m_7 = ATgetArgument(l_7, 0);
      p_7 = ATgetArgument(l_7, 1);
      i_7 :
      if(match_cons(m_7, sym_Cons_2))
        {
          n_7 = ATgetArgument(m_7, 0);
          o_7 = ATgetArgument(m_7, 1);
          j_7 :
          if(match_cons(p_7, sym_TCons_2))
            {
              q_7 = ATgetArgument(p_7, 0);
              r_7 = ATgetArgument(p_7, 1);
              k_7 :
              if(match_cons(r_7, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_7), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_7), not_null(q_7)), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm b_52 (ATerm), ATerm c_52 (ATerm))
{
  ATerm w_7 (ATerm t)
  {
    ATerm z_20 = t;
    if(PushChoice()==0)
      {
        t = b_52(t);
        t = w_7(t);
        PopChoice();
      }
    else
      {
        t = z_20;
        t = c_52(t);
      }
    return(t);
  }
  t = w_7(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm e_52 (ATerm))
{
  t = repeat_2(t, e_52, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm y_7 = NULL;
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_7), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm SplitExit_0 (ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL;
  i_8 = t;
  d_8 :
  if(match_cons(i_8, sym_TCons_2))
    {
      j_8 = ATgetArgument(i_8, 0);
      k_8 = ATgetArgument(i_8, 1);
      e_8 :
      if(match_cons(k_8, sym_TCons_2))
        {
          l_8 = ATgetArgument(k_8, 0);
          m_8 = ATgetArgument(k_8, 1);
          f_8 :
          if(match_cons(m_8, sym_TCons_2))
            {
              n_8 = ATgetArgument(m_8, 0);
              o_8 = ATgetArgument(m_8, 1);
              g_8 :
              if(match_cons(n_8, sym_Nil_0))
                {
                  h_8 :
                  if(match_cons(o_8, sym_TNil_0))
                    {
                      ATerm r_8 = NULL;
                      t = not_null(l_8);
                      t = reverse_0(t);
                      t = implode_string_0(t);
                      r_8 = t;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_8), not_null(j_8));
                      t = reverse_0(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm SplitInit_0 (ATerm t)
{
  ATerm w_8 = NULL;
  w_8 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_8), (ATerm) ATmakeAppl(sym_TNil_0))));
  return(t);
}
ATerm split_at_space_0 (ATerm t)
{
  t = explode_string_0(t);
  t = SplitInit_0(t);
  {
    ATerm z_8 (ATerm t)
    {
      ATerm a_21 = t;
      if(PushChoice()==0)
        {
          t = SplitExit_0(t);
          PopChoice();
        }
      else
        {
          t = a_21;
          t = SplitNext_0(t);
          t = z_8(t);
        }
      return(t);
    }
    t = z_8(t);
  }
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_46 (ATerm))
{
  ATerm c_9 (ATerm t)
  {
    ATerm b_21 = t;
    if(PushChoice()==0)
      {
        ATerm b_9 = NULL;
        b_9 = t;
        a_9 :
        if(!(match_cons(b_9, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = b_21;
        t = Cons_2(t, k_46, c_9);
      }
    return(t);
  }
  t = c_9(t);
  return(t);
}
ATerm CLibDir_1 (ATerm t, ATerm i_33 (ATerm))
{
  ATerm g_9 = NULL,h_9 = NULL;
  g_9 = t;
  f_9 :
  if(match_cons(g_9, sym_CLibDir_1))
    {
      h_9 = ATgetArgument(g_9, 0);
      {
        ATerm m_9 = NULL;
        t = not_null(h_9);
        t = i_33(t);
        m_9 = t;
        t = (ATerm) ATmakeAppl(sym_CLibDir_1, not_null(m_9));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Dir_1 (ATerm t, ATerm e_33 (ATerm))
{
  ATerm l_10 = NULL,o_10 = NULL;
  l_10 = t;
  k_10 :
  if(match_cons(l_10, sym_Dir_1))
    {
      o_10 = ATgetArgument(l_10, 0);
      {
        ATerm q_10 = NULL;
        t = not_null(o_10);
        t = e_33(t);
        q_10 = t;
        t = (ATerm) ATmakeAppl(sym_Dir_1, not_null(q_10));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm cc2_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,r_11 = NULL,s_11 = NULL;
  ATerm c_21;
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("linking", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = printnl_0(t);
  t = c_21;
  {
    ATerm e_0 (ATerm t)
    {
      ATerm g_0 (ATerm t)
      {
        ATerm d_21 = t;
        if(PushChoice()==0)
          {
            ATerm e_21 = t;
            if(PushChoice()==0)
              {
                ATerm h_0 (ATerm t)
                {
                  ATerm l_11 = NULL;
                  l_11 = t;
                  if(i_11 != NULL && i_11 != l_11)
                    _fail(l_11);
                  else
                    i_11 = l_11;
                  return(t);
                }
                t = Dir_1(t, h_0);
                PopChoice();
              }
            else
              {
                t = e_21;
                {
                  ATerm i_21 = t;
                  if(PushChoice()==0)
                    {
                      ATerm i_0 (ATerm t)
                      {
                        ATerm o_11 = NULL;
                        o_11 = t;
                        if(j_11 != NULL && j_11 != o_11)
                          _fail(o_11);
                        else
                          j_11 = o_11;
                        return(t);
                      }
                      t = CLibDir_1(t, i_0);
                      PopChoice();
                    }
                  else
                    {
                      t = i_21;
                      {
                        ATerm j_0 (ATerm t)
                        {
                          ATerm p_11 = NULL;
                          p_11 = t;
                          if(k_11 != NULL && k_11 != p_11)
                            _fail(p_11);
                          else
                            k_11 = p_11;
                          return(t);
                        }
                        t = Output_1(t, j_0);
                      }
                    }
                }
              }
            PopChoice();
          }
        else
          t = d_21;
        return(t);
      }
      t = list_1(t, g_0);
      return(t);
    }
    ATerm f_0 (ATerm t)
    {
      ATerm k_0 (ATerm t)
      {
        ATerm q_11 = NULL;
        q_11 = t;
        c_11 :
        if(!(match_cons(q_11, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, _id, k_0);
      return(t);
    }
    t = TCons_2(t, e_0, f_0);
    {
      ATerm l_0 (ATerm t)
      {
        ATerm m_0 (ATerm t)
        {
          ATerm j_21;
          j_21 = t;
          {
            ATerm t_11 = NULL;
            t = conc_strings_0(t);
            t_11 = t;
            if(r_11 != NULL && r_11 != t_11)
              _fail(t_11);
            else
              r_11 = t_11;
          }
          t = j_21;
          {
            ATerm o_0 (ATerm t)
            {
              ATerm s_21 = t;
              if(PushChoice()==0)
                {
                  t = not_null(k_11);
                  PopChoice();
                }
              else
                t = s_21;
              return(t);
            }
            ATerm p_0 (ATerm t)
            {
              ATerm q_0 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
                return(t);
              }
              ATerm r_0 (ATerm t)
              {
                ATerm x_11 = NULL;
                x_11 = t;
                e_11 :
                if(!(match_cons(x_11, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, q_0, r_0);
              return(t);
            }
            t = TCons_2(t, o_0, p_0);
            {
              ATerm t_21;
              t_21 = t;
              {
                ATerm y_11 = NULL;
                t = conc_strings_0(t);
                y_11 = t;
                if(s_11 != NULL && s_11 != y_11)
                  _fail(y_11);
                else
                  s_11 = y_11;
              }
              t = t_21;
              {
                ATerm u_21;
                u_21 = t;
                {
                  ATerm z_11 = NULL;
                  t = not_null(j_11);
                  t = map_1(t, split_at_space_0);
                  t = concat_0(t);
                  z_11 = t;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_11), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_11), not_null(z_11))));
                  t = gcc_0(t);
                }
                t = u_21;
              }
            }
          }
          return(t);
        }
        ATerm n_0 (ATerm t)
        {
          ATerm b_12 = NULL;
          b_12 = t;
          h_11 :
          if(!(match_cons(b_12, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, m_0, n_0);
        return(t);
      }
      t = TCons_2(t, _id, l_0);
    }
  }
  return(t);
}
ATerm gcc_0 (ATerm t)
{
  ATerm j_12 = NULL;
  j_12 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_12), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = call_0(t);
  return(t);
}
ATerm CInclDir_1 (ATerm t, ATerm h_33 (ATerm))
{
  ATerm p_12 = NULL,q_12 = NULL;
  p_12 = t;
  o_12 :
  if(match_cons(p_12, sym_CInclDir_1))
    {
      q_12 = ATgetArgument(p_12, 0);
      {
        ATerm s_12 = NULL;
        t = not_null(q_12);
        t = h_33(t);
        s_12 = t;
        t = (ATerm) ATmakeAppl(sym_CInclDir_1, not_null(s_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm cc1_0 (ATerm t)
{
  ATerm c_13 = NULL,f_13 = NULL,g_13 = NULL;
  ATerm v_21;
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("compiling", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = printnl_0(t);
  t = v_21;
  {
    ATerm s_0 (ATerm t)
    {
      ATerm u_0 (ATerm t)
      {
        ATerm w_21 = t;
        if(PushChoice()==0)
          {
            ATerm v_0 (ATerm t)
            {
              ATerm d_13 = NULL;
              d_13 = t;
              if(c_13 != NULL && c_13 != d_13)
                _fail(d_13);
              else
                c_13 = d_13;
              return(t);
            }
            t = CInclDir_1(t, v_0);
            PopChoice();
          }
        else
          t = w_21;
        return(t);
      }
      t = list_1(t, u_0);
      return(t);
    }
    ATerm t_0 (ATerm t)
    {
      ATerm w_0 (ATerm t)
      {
        ATerm e_13 = NULL;
        e_13 = t;
        x_12 :
        if(!(match_cons(e_13, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, _id, w_0);
      return(t);
    }
    t = TCons_2(t, s_0, t_0);
    {
      ATerm x_0 (ATerm t)
      {
        ATerm y_0 (ATerm t)
        {
          ATerm y_21;
          y_21 = t;
          {
            ATerm h_13 = NULL;
            t = conc_strings_0(t);
            h_13 = t;
            if(f_13 != NULL && f_13 != h_13)
              _fail(h_13);
            else
              f_13 = h_13;
          }
          t = y_21;
          {
            ATerm a_1 (ATerm t)
            {
              ATerm b_1 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
                return(t);
              }
              ATerm c_1 (ATerm t)
              {
                ATerm i_13 = NULL;
                i_13 = t;
                z_12 :
                if(!(match_cons(i_13, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, b_1, c_1);
              return(t);
            }
            t = TCons_2(t, _id, a_1);
            {
              ATerm a_22;
              a_22 = t;
              {
                ATerm j_13 = NULL;
                t = conc_strings_0(t);
                j_13 = t;
                if(g_13 != NULL && g_13 != j_13)
                  _fail(j_13);
                else
                  g_13 = j_13;
              }
              t = a_22;
              {
                ATerm b_22;
                b_22 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_13), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_13), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_13), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = conc_0(t);
                t = gcc_0(t);
                t = b_22;
              }
            }
          }
          return(t);
        }
        ATerm z_0 (ATerm t)
        {
          ATerm k_13 = NULL;
          k_13 = t;
          b_13 :
          if(!(match_cons(k_13, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, y_0, z_0);
        return(t);
      }
      t = TCons_2(t, _id, x_0);
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm pp_c_1 (ATerm t, ATerm d_54 (ATerm))
{
  ATerm q_13 = NULL;
  ATerm c_22;
  c_22 = t;
  t = dtime_0(t);
  t = c_22;
  {
    ATerm d_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("/ac2c", 0, ATtrue));
      t = pref_1(t, d_54);
      return(t);
    }
    ATerm e_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
      return(t);
    }
    t = pipe_2(t, d_1, e_1);
    {
      ATerm d_22;
      d_22 = t;
      {
        ATerm r_13 = NULL;
        ATerm s_13 = NULL;
        t = dtime_0(t);
        r_13 = t;
        if(q_13 != NULL && q_13 != r_13)
          _fail(r_13);
        else
          q_13 = r_13;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("/ac2c", 0, ATtrue));
        t = pref_1(t, d_54);
        s_13 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_13), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_13), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(")", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
      t = d_22;
    }
  }
  return(t);
}
ATerm s2c_1 (ATerm t, ATerm c_54 (ATerm))
{
  ATerm f_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/s2c", 0, ATtrue));
    t = pref_1(t, c_54);
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".ac", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, f_1, h_1);
  return(t);
}
ATerm stratego_cf_1 (ATerm t, ATerm g_54 (ATerm))
{
  ATerm i_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/Stratego-Canonical-Format", 0, ATtrue));
    t = pref_1(t, g_54);
    return(t);
  }
  t = pipe_2(t, i_1, _id);
  return(t);
}
ATerm canonicalize_1 (ATerm t, ATerm q_53 (ATerm))
{
  ATerm j_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/canonicalize", 0, ATtrue));
    t = pref_1(t, q_53);
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s4", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, j_1, s_1);
  return(t);
}
ATerm optimize2_1 (ATerm t, ATerm x_53 (ATerm))
{
  ATerm t_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/optimize2", 0, ATtrue));
    t = pref_1(t, x_53);
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".so4", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, t_1, u_1);
  return(t);
}
ATerm compile_match_1 (ATerm t, ATerm w_53 (ATerm))
{
  ATerm x_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/compile-match", 0, ATtrue));
    t = pref_1(t, w_53);
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".so3", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, x_1, z_1);
  return(t);
}
ATerm fusion_1 (ATerm t, ATerm v_53 (ATerm))
{
  ATerm a_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/fusion", 0, ATtrue));
    t = pref_1(t, v_53);
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".so2", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, a_2, b_2);
  return(t);
}
ATerm FUSION_0 (ATerm t)
{
  ATerm x_13 = NULL;
  x_13 = t;
  w_13 :
  if(!(match_cons(x_13, sym_FUSION_0)))
    _fail(t);
  return(t);
}
ATerm optimize1_1 (ATerm t, ATerm u_53 (ATerm))
{
  ATerm c_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/optimize1", 0, ATtrue));
    t = pref_1(t, u_53);
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".so1", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, c_2, d_2);
  return(t);
}
ATerm inline_1 (ATerm t, ATerm r_53 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/inline", 0, ATtrue));
    t = pref_1(t, r_53);
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, e_2, n_2);
  return(t);
}
ATerm rename_defs_1 (ATerm t, ATerm p_53 (ATerm))
{
  ATerm o_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/rename-defs", 0, ATtrue));
    t = pref_1(t, p_53);
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s3", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, o_2, p_2);
  return(t);
}
ATerm stratego_nf_1 (ATerm t, ATerm f_54 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/Stratego-Normal-Format", 0, ATtrue));
    t = pref_1(t, f_54);
    return(t);
  }
  t = pipe_2(t, q_2, _id);
  return(t);
}
ATerm extract_1 (ATerm t, ATerm n_53 (ATerm))
{
  ATerm c_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/extract", 0, ATtrue));
    t = pref_1(t, n_53);
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s2", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, c_3, d_3);
  return(t);
}
ATerm split_2 (ATerm t, ATerm a_40 (ATerm), ATerm b_40 (ATerm))
{
  ATerm b_14 = NULL;
  ATerm d_14 = NULL;
  b_14 = t;
  {
    ATerm f_14 = NULL;
    t = a_40(t);
    d_14 = t;
    t = not_null(b_14);
    t = b_40(t);
    f_14 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_14), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm m_22;
  m_22 = t;
  {
    ATerm e_3 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, e_3, _id);
    t = printnl_0(t);
  }
  t = m_22;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm n_22;
  n_22 = t;
  t = error_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  t = n_22;
  return(t);
}
ATerm extract_all_1 (ATerm t, ATerm o_53 (ATerm))
{
  ATerm f_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/extract-all", 0, ATtrue));
    t = pref_1(t, o_53);
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".sdefs", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, f_3, g_3);
  return(t);
}
ATerm FRONTEND_0 (ATerm t)
{
  ATerm l_14 = NULL;
  l_14 = t;
  k_14 :
  if(!(match_cons(l_14, sym_FRONTEND_0)))
    _fail(t);
  return(t);
}
ATerm output_frontend_1 (ATerm t, ATerm j_53 (ATerm))
{
  ATerm t_14 = NULL,u_14 = NULL;
  ATerm o_22 = t;
  if(PushChoice()==0)
    {
      ATerm q_3 (ATerm t)
      {
        ATerm d_4 (ATerm t)
        {
          ATerm v_14 = NULL;
          v_14 = t;
          m_14 :
          if(!(match_cons(v_14, sym_FRONTEND_0)))
            _fail(t);
          return(t);
        }
        t = fetch_1(t, d_4);
        return(t);
      }
      ATerm u_3 (ATerm t)
      {
        ATerm e_4 (ATerm t)
        {
          ATerm w_14 = NULL;
          w_14 = t;
          n_14 :
          if(!(match_cons(w_14, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, e_4);
        return(t);
      }
      t = TCons_2(t, q_3, u_3);
      {
        ATerm f_4 (ATerm t)
        {
          ATerm g_4 (ATerm t)
          {
            ATerm r_22 = t;
            if(PushChoice()==0)
              {
                t = extract_all_1(t, j_53);
                PopChoice();
              }
            else
              {
                t = r_22;
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0));
                t = fatal_error_0(t);
              }
            return(t);
          }
          ATerm h_4 (ATerm t)
          {
            ATerm x_14 = NULL;
            x_14 = t;
            o_14 :
            if(!(match_cons(x_14, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, g_4, h_4);
          return(t);
        }
        t = TCons_2(t, _id, f_4);
        {
          ATerm m_4 (ATerm t)
          {
            ATerm n_4 (ATerm t)
            {
              ATerm r_4 (ATerm t)
              {
                ATerm a_15 = NULL;
                a_15 = t;
                if(t_14 != NULL && t_14 != a_15)
                  _fail(a_15);
                else
                  t_14 = a_15;
                return(t);
              }
              ATerm s_4 (ATerm t)
              {
                ATerm t_4 (ATerm t)
                {
                  ATerm b_15 = NULL;
                  b_15 = t;
                  if(u_14 != NULL && u_14 != b_15)
                    _fail(b_15);
                  else
                    u_14 = b_15;
                  return(t);
                }
                ATerm u_4 (ATerm t)
                {
                  ATerm c_15 = NULL;
                  c_15 = t;
                  r_14 :
                  if(!(match_cons(c_15, sym_TNil_0)))
                    _fail(t);
                  return(t);
                }
                t = TCons_2(t, t_4, u_4);
                return(t);
              }
              t = TCons_2(t, r_4, s_4);
              return(t);
            }
            ATerm p_4 (ATerm t)
            {
              ATerm d_15 = NULL;
              d_15 = t;
              s_14 :
              if(!(match_cons(d_15, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, n_4, p_4);
            return(t);
          }
          t = TCons_2(t, _id, m_4);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_14), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_14), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          t = (ATerm) ATmakeInt(0);
          t = exit_0(t);
        }
      }
      PopChoice();
    }
  else
    t = o_22;
  return(t);
}
ATerm pipe_2 (ATerm t, ATerm h_36 (ATerm), ATerm i_36 (ATerm))
{
  ATerm w_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = pipe_p__3(t, h_36, i_36, w_4);
  return(t);
}
ATerm frontend_1 (ATerm t, ATerm m_53 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/frontend", 0, ATtrue));
    t = pref_1(t, m_53);
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s1", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, b_5, c_5);
  return(t);
}
ATerm list_1 (ATerm t, ATerm m_46 (ATerm))
{
  ATerm i_15 (ATerm t)
  {
    ATerm t_22 = t;
    if(PushChoice()==0)
      {
        ATerm h_15 = NULL;
        h_15 = t;
        g_15 :
        if(!(match_cons(h_15, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = t_22;
        t = Cons_2(t, m_46, i_15);
      }
    return(t);
  }
  t = i_15(t);
  return(t);
}
ATerm core_0 (ATerm t)
{
  ATerm r_15 = NULL;
  ATerm e_5 (ATerm t)
  {
    ATerm o_5 (ATerm t)
    {
      ATerm u_22 = t;
      if(PushChoice()==0)
        {
          ATerm p_5 (ATerm t)
          {
            ATerm s_15 = NULL;
            s_15 = t;
            if(r_15 != NULL && r_15 != s_15)
              _fail(s_15);
            else
              r_15 = s_15;
            return(t);
          }
          t = ExecDir_1(t, p_5);
          PopChoice();
        }
      else
        t = u_22;
      return(t);
    }
    t = list_1(t, o_5);
    return(t);
  }
  ATerm f_5 (ATerm t)
  {
    ATerm q_5 (ATerm t)
    {
      ATerm t_15 = NULL;
      t_15 = t;
      k_15 :
      if(!(match_cons(t_15, sym_TNil_0)))
        _fail(t);
      return(t);
    }
    t = TCons_2(t, _id, q_5);
    return(t);
  }
  t = TCons_2(t, e_5, f_5);
  {
    ATerm r_5 (ATerm t)
    {
      ATerm s_5 (ATerm t)
      {
        ATerm j_6 (ATerm t)
        {
          t = not_null(r_15);
          return(t);
        }
        t = frontend_1(t, j_6);
        return(t);
      }
      ATerm i_6 (ATerm t)
      {
        ATerm u_15 = NULL;
        u_15 = t;
        l_15 :
        if(!(match_cons(u_15, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, s_5, i_6);
      return(t);
    }
    t = TCons_2(t, _id, r_5);
    {
      ATerm k_6 (ATerm t)
      {
        t = not_null(r_15);
        return(t);
      }
      t = output_frontend_1(t, k_6);
      {
        ATerm m_6 (ATerm t)
        {
          ATerm n_6 (ATerm t)
          {
            ATerm p_6 (ATerm t)
            {
              t = not_null(r_15);
              return(t);
            }
            t = extract_1(t, p_6);
            {
              ATerm q_6 (ATerm t)
              {
                t = not_null(r_15);
                return(t);
              }
              t = stratego_nf_1(t, q_6);
              {
                ATerm r_6 (ATerm t)
                {
                  t = not_null(r_15);
                  return(t);
                }
                t = rename_defs_1(t, r_6);
                {
                  ATerm t_6 (ATerm t)
                  {
                    t = not_null(r_15);
                    return(t);
                  }
                  t = inline_1(t, t_6);
                  {
                    ATerm u_6 (ATerm t)
                    {
                      t = not_null(r_15);
                      return(t);
                    }
                    t = optimize1_1(t, u_6);
                  }
                }
              }
            }
            return(t);
          }
          ATerm o_6 (ATerm t)
          {
            ATerm f_16 = NULL;
            f_16 = t;
            m_15 :
            if(!(match_cons(f_16, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, n_6, o_6);
          return(t);
        }
        t = TCons_2(t, _id, m_6);
        {
          ATerm v_22 = t;
          if(PushChoice()==0)
            {
              ATerm e_7 (ATerm t)
              {
                ATerm g_7 (ATerm t)
                {
                  ATerm g_16 = NULL;
                  g_16 = t;
                  n_15 :
                  if(!(match_cons(g_16, sym_FUSION_0)))
                    _fail(t);
                  return(t);
                }
                t = fetch_1(t, g_7);
                return(t);
              }
              ATerm f_7 (ATerm t)
              {
                ATerm s_7 (ATerm t)
                {
                  ATerm u_7 (ATerm t)
                  {
                    t = not_null(r_15);
                    return(t);
                  }
                  t = fusion_1(t, u_7);
                  return(t);
                }
                ATerm t_7 (ATerm t)
                {
                  ATerm h_16 = NULL;
                  h_16 = t;
                  o_15 :
                  if(!(match_cons(h_16, sym_TNil_0)))
                    _fail(t);
                  return(t);
                }
                t = TCons_2(t, s_7, t_7);
                return(t);
              }
              t = TCons_2(t, e_7, f_7);
              PopChoice();
            }
          else
            t = v_22;
          {
            ATerm v_7 (ATerm t)
            {
              ATerm x_7 (ATerm t)
              {
                ATerm a_8 (ATerm t)
                {
                  t = not_null(r_15);
                  return(t);
                }
                t = compile_match_1(t, a_8);
                {
                  ATerm b_8 (ATerm t)
                  {
                    t = not_null(r_15);
                    return(t);
                  }
                  t = optimize2_1(t, b_8);
                }
                return(t);
              }
              ATerm z_7 (ATerm t)
              {
                ATerm i_16 = NULL;
                i_16 = t;
                p_15 :
                if(!(match_cons(i_16, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, x_7, z_7);
              return(t);
            }
            t = TCons_2(t, _id, v_7);
            {
              ATerm c_8 (ATerm t)
              {
                ATerm p_8 (ATerm t)
                {
                  ATerm s_8 (ATerm t)
                  {
                    t = not_null(r_15);
                    return(t);
                  }
                  t = canonicalize_1(t, s_8);
                  {
                    ATerm t_8 (ATerm t)
                    {
                      t = not_null(r_15);
                      return(t);
                    }
                    t = stratego_cf_1(t, t_8);
                    {
                      ATerm u_8 (ATerm t)
                      {
                        t = not_null(r_15);
                        return(t);
                      }
                      t = s2c_1(t, u_8);
                      {
                        ATerm v_8 (ATerm t)
                        {
                          t = not_null(r_15);
                          return(t);
                        }
                        t = pp_c_1(t, v_8);
                      }
                    }
                  }
                  return(t);
                }
                ATerm q_8 (ATerm t)
                {
                  ATerm j_16 = NULL;
                  j_16 = t;
                  q_15 :
                  if(!(match_cons(j_16, sym_TNil_0)))
                    _fail(t);
                  return(t);
                }
                t = TCons_2(t, p_8, q_8);
                return(t);
              }
              t = TCons_2(t, _id, c_8);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm transform_file_2 (ATerm t, ATerm m_36 (ATerm), ATerm n_36 (ATerm))
{
  ATerm o_16 = NULL,r_16 = NULL;
  ATerm c_23;
  c_23 = t;
  {
    ATerm p_16 = NULL;
    t = conc_strings_0(t);
    p_16 = t;
    if(o_16 != NULL && o_16 != p_16)
      _fail(p_16);
    else
      o_16 = p_16;
  }
  t = c_23;
  {
    ATerm x_8 (ATerm t)
    {
      ATerm y_8 (ATerm t)
      {
        ATerm q_16 = NULL;
        q_16 = t;
        m_16 :
        if(!(match_cons(q_16, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, n_36, y_8);
      return(t);
    }
    t = TCons_2(t, _id, x_8);
    {
      ATerm e_23;
      e_23 = t;
      {
        ATerm s_16 = NULL;
        t = conc_strings_0(t);
        s_16 = t;
        if(r_16 != NULL && r_16 != s_16)
          _fail(s_16);
        else
          r_16 = s_16;
      }
      t = e_23;
      {
        ATerm f_23;
        f_23 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_16), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = apply_to_file_1(t, m_36);
        t = f_23;
      }
    }
  }
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm k_53 (ATerm))
{
  ATerm y_16 = NULL,z_16 = NULL;
  y_16 = t;
  x_16 :
  if(match_cons(y_16, sym_Specification_1))
    {
      z_16 = ATgetArgument(y_16, 0);
      {
        ATerm b_17 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = k_53(t);
        b_17 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(ATmakeSymbol("main", 0, ATtrue)), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_17)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0))), not_null(z_16)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Main_1 (ATerm t, ATerm k_33 (ATerm))
{
  ATerm i_17 = NULL,j_17 = NULL;
  i_17 = t;
  h_17 :
  if(match_cons(i_17, sym_Main_1))
    {
      j_17 = ATgetArgument(i_17, 0);
      {
        ATerm l_17 = NULL;
        t = not_null(j_17);
        t = k_33(t);
        l_17 = t;
        t = (ATerm) ATmakeAppl(sym_Main_1, not_null(l_17));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm add_main_0 (ATerm t)
{
  ATerm t_17 = NULL;
  ATerm g_23 = t;
  if(PushChoice()==0)
    {
      ATerm d_9 (ATerm t)
      {
        ATerm i_9 (ATerm t)
        {
          ATerm j_9 (ATerm t)
          {
            ATerm u_17 = NULL;
            u_17 = t;
            if(t_17 != NULL && t_17 != u_17)
              _fail(u_17);
            else
              t_17 = u_17;
            return(t);
          }
          t = Main_1(t, j_9);
          return(t);
        }
        t = fetch_1(t, i_9);
        return(t);
      }
      ATerm e_9 (ATerm t)
      {
        ATerm k_9 (ATerm t)
        {
          ATerm v_17 = NULL;
          v_17 = t;
          q_17 :
          if(!(match_cons(v_17, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, k_9);
        return(t);
      }
      t = TCons_2(t, d_9, e_9);
      {
        ATerm l_9 (ATerm t)
        {
          ATerm n_9 (ATerm t)
          {
            ATerm p_9 (ATerm t)
            {
              ATerm r_9 (ATerm t)
              {
                t = not_null(t_17);
                return(t);
              }
              t = AddMain_1(t, r_9);
              return(t);
            }
            ATerm q_9 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol(".tree1", 0, ATtrue));
              return(t);
            }
            t = transform_file_2(t, p_9, q_9);
            return(t);
          }
          ATerm o_9 (ATerm t)
          {
            ATerm w_17 = NULL;
            w_17 = t;
            r_17 :
            if(!(match_cons(w_17, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, n_9, o_9);
          return(t);
        }
        t = TCons_2(t, _id, l_9);
      }
      PopChoice();
    }
  else
    {
      t = g_23;
      {
        ATerm s_9 (ATerm t)
        {
          ATerm t_9 (ATerm t)
          {
            ATerm v_9 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol(".tree1", 0, ATtrue));
              return(t);
            }
            t = transform_file_2(t, _id, v_9);
            return(t);
          }
          ATerm u_9 (ATerm t)
          {
            ATerm x_17 = NULL;
            x_17 = t;
            s_17 :
            if(!(match_cons(x_17, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, t_9, u_9);
          return(t);
        }
        t = TCons_2(t, _id, s_9);
      }
    }
  return(t);
}
ATerm AST_0 (ATerm t)
{
  ATerm a_18 = NULL;
  a_18 = t;
  z_17 :
  if(!(match_cons(a_18, sym_AST_0)))
    _fail(t);
  return(t);
}
ATerm output_ast_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL;
  ATerm h_23 = t;
  if(PushChoice()==0)
    {
      ATerm w_9 (ATerm t)
      {
        ATerm y_9 (ATerm t)
        {
          ATerm i_18 = NULL;
          i_18 = t;
          b_18 :
          if(!(match_cons(i_18, sym_AST_0)))
            _fail(t);
          return(t);
        }
        t = fetch_1(t, y_9);
        return(t);
      }
      ATerm x_9 (ATerm t)
      {
        ATerm z_9 (ATerm t)
        {
          ATerm b_10 (ATerm t)
          {
            ATerm j_18 = NULL;
            j_18 = t;
            if(g_18 != NULL && g_18 != j_18)
              _fail(j_18);
            else
              g_18 = j_18;
            return(t);
          }
          ATerm c_10 (ATerm t)
          {
            ATerm d_10 (ATerm t)
            {
              ATerm k_18 = NULL;
              k_18 = t;
              if(h_18 != NULL && h_18 != k_18)
                _fail(k_18);
              else
                h_18 = k_18;
              return(t);
            }
            ATerm e_10 (ATerm t)
            {
              ATerm l_18 = NULL;
              l_18 = t;
              e_18 :
              if(!(match_cons(l_18, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, d_10, e_10);
            return(t);
          }
          t = TCons_2(t, b_10, c_10);
          return(t);
        }
        ATerm a_10 (ATerm t)
        {
          ATerm m_18 = NULL;
          m_18 = t;
          f_18 :
          if(!(match_cons(m_18, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, z_9, a_10);
        return(t);
      }
      t = TCons_2(t, w_9, x_9);
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_18), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_18), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      t = (ATerm) ATmakeInt(0);
      t = exit_0(t);
      PopChoice();
    }
  else
    t = h_23;
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL;
  t_18 = t;
  q_18 :
  if(match_cons(t_18, sym_TCons_2))
    {
      u_18 = ATgetArgument(t_18, 0);
      v_18 = ATgetArgument(t_18, 1);
      r_18 :
      if(match_cons(v_18, sym_TCons_2))
        {
          w_18 = ATgetArgument(v_18, 0);
          x_18 = ATgetArgument(v_18, 1);
          s_18 :
          if(match_cons(x_18, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(u_18), not_null(w_18));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm d_19 = NULL;
  d_19 = t;
  t = SSL_ReadFromFile(not_null(d_19));
  return(t);
}
ATerm apply_to_file_1 (ATerm t, ATerm o_36 (ATerm))
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
  l_19 = t;
  i_19 :
  if(match_cons(l_19, sym_TCons_2))
    {
      m_19 = ATgetArgument(l_19, 0);
      n_19 = ATgetArgument(l_19, 1);
      j_19 :
      if(match_cons(n_19, sym_TCons_2))
        {
          o_19 = ATgetArgument(n_19, 0);
          p_19 = ATgetArgument(n_19, 1);
          k_19 :
          if(match_cons(p_19, sym_TNil_0))
            {
              ATerm s_19 = NULL;
              ATerm i_23;
              i_23 = t;
              {
                ATerm t_19 = NULL;
                t = not_null(m_19);
                t = ReadFromFile_0(t);
                t = o_36(t);
                t_19 = t;
                if(s_19 != NULL && s_19 != t_19)
                  _fail(t_19);
                else
                  s_19 = t_19;
              }
              t = i_23;
              {
                ATerm j_23;
                j_23 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = WriteToBinaryFile_0(t);
                t = j_23;
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
ATerm copy_file_3 (ATerm t, ATerm p_36 (ATerm), ATerm q_36 (ATerm), ATerm r_36 (ATerm))
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
  h_20 = t;
  e_20 :
  if(match_cons(h_20, sym_TCons_2))
    {
      i_20 = ATgetArgument(h_20, 0);
      j_20 = ATgetArgument(h_20, 1);
      f_20 :
      if(match_cons(j_20, sym_TCons_2))
        {
          k_20 = ATgetArgument(j_20, 0);
          l_20 = ATgetArgument(j_20, 1);
          g_20 :
          if(match_cons(l_20, sym_TNil_0))
            {
              ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL;
              ATerm f_10 (ATerm t)
              {
                ATerm g_10 (ATerm t)
                {
                  ATerm o_20 = NULL;
                  o_20 = t;
                  x_19 :
                  if(!(match_cons(o_20, sym_TNil_0)))
                    _fail(t);
                  return(t);
                }
                t = TCons_2(t, r_36, g_10);
                return(t);
              }
              t = TCons_2(t, q_36, f_10);
              p_20 = t;
              b_20 :
              if(match_cons(p_20, sym_TCons_2))
                {
                  q_20 = ATgetArgument(p_20, 0);
                  r_20 = ATgetArgument(p_20, 1);
                  c_20 :
                  if(match_cons(r_20, sym_TCons_2))
                    {
                      s_20 = ATgetArgument(r_20, 0);
                      t_20 = ATgetArgument(r_20, 1);
                      d_20 :
                      if(match_cons(t_20, sym_TNil_0))
                        {
                          ATerm k_23;
                          k_23 = t;
                          {
                            ATerm w_20 = NULL;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_20), (ATerm) ATmakeAppl(sym_TNil_0)));
                            {
                              ATerm y_20 = NULL;
                              t = conc_strings_0(t);
                              w_20 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_20), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = conc_strings_0(t);
                              y_20 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_20), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = apply_to_file_1(t, p_36);
                            }
                          }
                          t = k_23;
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_46 (ATerm))
{
  ATerm h_21 (ATerm t)
  {
    ATerm l_23 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, h_21);
        PopChoice();
      }
    else
      {
        t = l_23;
        {
          ATerm g_21 = NULL;
          g_21 = t;
          f_21 :
          if(match_cons(g_21, sym_Nil_0))
            t = z_46(t);
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = h_21(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  n_21 = t;
  k_21 :
  if(match_cons(n_21, sym_TCons_2))
    {
      o_21 = ATgetArgument(n_21, 0);
      p_21 = ATgetArgument(n_21, 1);
      l_21 :
      if(match_cons(p_21, sym_TCons_2))
        {
          q_21 = ATgetArgument(p_21, 0);
          r_21 = ATgetArgument(p_21, 1);
          m_21 :
          if(match_cons(r_21, sym_TNil_0))
            {
              t = not_null(o_21);
              {
                ATerm h_10 (ATerm t)
                {
                  t = not_null(q_21);
                  return(t);
                }
                t = at_end_1(t, h_10);
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
ATerm pref_1 (ATerm t, ATerm l_53 (ATerm))
{
  ATerm x_21 = NULL;
  ATerm z_21 = NULL;
  x_21 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = l_53(t);
  z_21 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_21), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = conc_strings_0(t);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL;
  h_22 = t;
  e_22 :
  if(match_cons(h_22, sym_TCons_2))
    {
      i_22 = ATgetArgument(h_22, 0);
      j_22 = ATgetArgument(h_22, 1);
      f_22 :
      if(match_cons(j_22, sym_TCons_2))
        {
          k_22 = ATgetArgument(j_22, 0);
          l_22 = ATgetArgument(j_22, 1);
          g_22 :
          if(match_cons(l_22, sym_TNil_0))
            t = SSL_call(not_null(i_22), not_null(k_22));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  ATerm i_10 (ATerm t)
  {
    ATerm j_10 (ATerm t)
    {
      ATerm q_22 = NULL;
      q_22 = t;
      p_22 :
      if(!(match_cons(q_22, sym_TNil_0)))
        _fail(t);
      return(t);
    }
    t = TCons_2(t, explode_string_0, j_10);
    return(t);
  }
  t = TCons_2(t, explode_string_0, i_10);
  t = conc_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm pipe_p__3 (ATerm t, ATerm j_36 (ATerm), ATerm k_36 (ATerm), ATerm l_36 (ATerm))
{
  ATerm w_22 = NULL,z_22 = NULL;
  ATerm m_23;
  m_23 = t;
  {
    ATerm x_22 = NULL;
    t = conc_strings_0(t);
    x_22 = t;
    if(w_22 != NULL && w_22 != x_22)
      _fail(x_22);
    else
      w_22 = x_22;
  }
  t = m_23;
  {
    ATerm m_10 (ATerm t)
    {
      ATerm n_10 (ATerm t)
      {
        ATerm y_22 = NULL;
        y_22 = t;
        s_22 :
        if(!(match_cons(y_22, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, k_36, n_10);
      return(t);
    }
    t = TCons_2(t, _id, m_10);
    {
      ATerm n_23;
      n_23 = t;
      {
        ATerm a_23 = NULL;
        t = conc_strings_0(t);
        a_23 = t;
        if(z_22 != NULL && z_22 != a_23)
          _fail(a_23);
        else
          z_22 = a_23;
      }
      t = n_23;
      {
        ATerm o_23;
        o_23 = t;
        {
          ATerm b_23 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm d_23 = NULL;
            t = j_36(t);
            b_23 = t;
            t = (ATerm) ATmakeAppl(sym_TNil_0);
            t = l_36(t);
            d_23 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_23), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_22), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_22), not_null(d_23))))), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = call_0(t);
          }
        }
        t = o_23;
      }
    }
  }
  return(t);
}
ATerm Output_1 (ATerm t, ATerm a_33 (ATerm))
{
  ATerm r_23 = NULL,s_23 = NULL;
  r_23 = t;
  q_23 :
  if(match_cons(r_23, sym_Output_1))
    {
      s_23 = ATgetArgument(r_23, 0);
      {
        ATerm u_23 = NULL;
        t = not_null(s_23);
        t = a_33(t);
        u_23 = t;
        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_23));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ExecDir_1 (ATerm t, ATerm f_33 (ATerm))
{
  ATerm b_24 = NULL,c_24 = NULL;
  b_24 = t;
  a_24 :
  if(match_cons(b_24, sym_ExecDir_1))
    {
      c_24 = ATgetArgument(b_24, 0);
      {
        ATerm e_24 = NULL;
        t = not_null(c_24);
        t = f_33(t);
        e_24 = t;
        t = (ATerm) ATmakeAppl(sym_ExecDir_1, not_null(e_24));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm InclDir_1 (ATerm t, ATerm g_33 (ATerm))
{
  ATerm l_24 = NULL,m_24 = NULL;
  l_24 = t;
  k_24 :
  if(match_cons(l_24, sym_InclDir_1))
    {
      m_24 = ATgetArgument(l_24, 0);
      {
        ATerm o_24 = NULL;
        t = not_null(m_24);
        t = g_33(t);
        o_24 = t;
        t = (ATerm) ATmakeAppl(sym_InclDir_1, not_null(o_24));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_0 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
  ATerm p_10 (ATerm t)
  {
    ATerm s_10 (ATerm t)
    {
      ATerm t_10 (ATerm t)
      {
        ATerm h_25 = NULL;
        h_25 = t;
        if(f_25 != NULL && f_25 != h_25)
          _fail(h_25);
        else
          f_25 = h_25;
        return(t);
      }
      t = InclDir_1(t, t_10);
      return(t);
    }
    t = fetch_1(t, s_10);
    {
      ATerm u_10 (ATerm t)
      {
        ATerm v_10 (ATerm t)
        {
          ATerm i_25 = NULL;
          i_25 = t;
          if(d_25 != NULL && d_25 != i_25)
            _fail(i_25);
          else
            d_25 = i_25;
          return(t);
        }
        t = ExecDir_1(t, v_10);
        return(t);
      }
      t = fetch_1(t, u_10);
      {
        ATerm p_23 = t;
        if(PushChoice()==0)
          {
            ATerm w_10 (ATerm t)
            {
              ATerm x_10 (ATerm t)
              {
                ATerm j_25 = NULL;
                j_25 = t;
                if(g_25 != NULL && g_25 != j_25)
                  _fail(j_25);
                else
                  g_25 = j_25;
                return(t);
              }
              t = Output_1(t, x_10);
              return(t);
            }
            t = fetch_1(t, w_10);
            PopChoice();
          }
        else
          t = p_23;
      }
    }
    return(t);
  }
  ATerm r_10 (ATerm t)
  {
    ATerm y_10 (ATerm t)
    {
      ATerm k_25 = NULL,l_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
      k_25 = t;
      w_24 :
      if(match_cons(k_25, sym_TCons_2))
        {
          l_25 = ATgetArgument(k_25, 0);
          o_25 = ATgetArgument(k_25, 1);
          x_24 :
          if(match_cons(o_25, sym_TCons_2))
            {
              p_25 = ATgetArgument(o_25, 0);
              q_25 = ATgetArgument(o_25, 1);
              y_24 :
              if(match_cons(q_25, sym_TNil_0))
                {
                  if(e_25 != NULL && e_25 != l_25)
                    _fail(l_25);
                  else
                    e_25 = l_25;
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      return(t);
    }
    ATerm z_10 (ATerm t)
    {
      ATerm r_25 = NULL;
      r_25 = t;
      z_24 :
      if(!(match_cons(r_25, sym_TNil_0)))
        _fail(t);
      return(t);
    }
    t = TCons_2(t, y_10, z_10);
    return(t);
  }
  t = TCons_2(t, p_10, r_10);
  {
    ATerm a_11 (ATerm t)
    {
      ATerm b_11 (ATerm t)
      {
        ATerm f_11 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("/pack-stratego", 0, ATtrue));
          {
            ATerm n_11 (ATerm t)
            {
              t = not_null(d_25);
              return(t);
            }
            t = pref_1(t, n_11);
          }
          return(t);
        }
        ATerm g_11 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
          return(t);
        }
        ATerm m_11 (ATerm t)
        {
          ATerm s_25 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm t_23 = t;
            if(PushChoice()==0)
              {
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_25), (ATerm) ATmakeAppl(sym_Nil_0)));
                PopChoice();
              }
            else
              {
                t = t_23;
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_25), (ATerm) ATmakeAppl(sym_Nil_0)));
              }
            s_25 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_25), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("--silent", 0, ATtrue)), not_null(f_25)), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = conc_0(t);
          }
          return(t);
        }
        t = pipe_p__3(t, f_11, g_11, m_11);
        return(t);
      }
      ATerm d_11 (ATerm t)
      {
        ATerm u_25 = NULL;
        u_25 = t;
        b_25 :
        if(!(match_cons(u_25, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, b_11, d_11);
      return(t);
    }
    t = TCons_2(t, _id, a_11);
    {
      ATerm v_23 = t;
      if(PushChoice()==0)
        {
          ATerm u_11 (ATerm t)
          {
            ATerm v_11 (ATerm t)
            {
              ATerm a_12 (ATerm t)
              {
                t = not_null(g_25);
                return(t);
              }
              ATerm c_12 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
                return(t);
              }
              t = copy_file_3(t, _id, a_12, c_12);
              return(t);
            }
            ATerm w_11 (ATerm t)
            {
              ATerm v_25 = NULL;
              v_25 = t;
              c_25 :
              if(!(match_cons(v_25, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, v_11, w_11);
            return(t);
          }
          t = TCons_2(t, _id, u_11);
          PopChoice();
        }
      else
        t = v_23;
    }
  }
  return(t);
}
ATerm Verbose_0 (ATerm t)
{
  ATerm l_26 = NULL;
  l_26 = t;
  g_26 :
  if(!(match_cons(l_26, sym_Verbose_0)))
    _fail(t);
  return(t);
}
ATerm sc_announce_0 (ATerm t)
{
  ATerm w_23 = t;
  if(PushChoice()==0)
    {
      ATerm d_12 (ATerm t)
      {
        ATerm f_12 (ATerm t)
        {
          ATerm p_26 = NULL;
          p_26 = t;
          m_26 :
          if(!(match_cons(p_26, sym_Verbose_0)))
            _fail(t);
          return(t);
        }
        t = fetch_1(t, f_12);
        return(t);
      }
      ATerm e_12 (ATerm t)
      {
        ATerm g_12 (ATerm t)
        {
          ATerm q_26 = NULL;
          q_26 = t;
          n_26 :
          if(!(match_cons(q_26, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, g_12);
        return(t);
      }
      t = TCons_2(t, d_12, e_12);
      {
        ATerm h_12 (ATerm t)
        {
          ATerm i_12 (ATerm t)
          {
            ATerm r_26 = NULL;
            r_26 = t;
            o_26 :
            if(!(match_cons(r_26, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, i_12);
          return(t);
        }
        t = TCons_2(t, sc_version_0, h_12);
      }
      PopChoice();
    }
  else
    t = w_23;
  return(t);
}
ATerm DeclVersion_1 (ATerm t, ATerm c_33 (ATerm))
{
  ATerm v_26 = NULL,w_26 = NULL;
  v_26 = t;
  u_26 :
  if(match_cons(v_26, sym_DeclVersion_1))
    {
      w_26 = ATgetArgument(v_26, 0);
      {
        ATerm y_26 = NULL;
        t = not_null(w_26);
        t = c_33(t);
        y_26 = t;
        t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(y_26));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm n_28 = NULL;
  ATerm x_23 = t;
  if(PushChoice()==0)
    {
      ATerm k_12 (ATerm t)
      {
        ATerm l_12 (ATerm t)
        {
          ATerm o_28 = NULL;
          o_28 = t;
          if(n_28 != NULL && n_28 != o_28)
            _fail(o_28);
          else
            n_28 = o_28;
          return(t);
        }
        t = DeclVersion_1(t, l_12);
        return(t);
      }
      t = fetch_1(t, k_12);
      PopChoice();
    }
  else
    {
      t = x_23;
      {
        ATerm p_28 = NULL;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
        p_28 = t;
        if(n_28 != NULL && n_28 != p_28)
          _fail(p_28);
        else
          n_28 = p_28;
      }
    }
  {
    ATerm y_23;
    y_23 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("The Stratego Compiler (version ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_28), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(")", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = y_23;
  }
  return(t);
}
ATerm sc_usage_0 (ATerm t)
{
  t = sc_version_0(t);
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Usage: sc [options] -i file\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Options:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  -i spec     Compile specification spec\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  -o target   Name executable target\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  --main s    Name main strategy [default: main]\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  -I dir      Look in dir for imported Stratego modules\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  -CI dir     Look in dir for C include files\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  -CL dir     Look in dir for C object libraries\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  --ast       Output abstract syntax of specification\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  --norm      Do not remove intermediate files\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  -F	    Produce all definitions pre-processed by frontend\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  -h|--help   Display this message", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))))))))))), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = printnl_0(t);
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_28 = NULL;
  t_28 = t;
  s_28 :
  if(!(match_cons(t_28, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm y_32 (ATerm))
{
  ATerm x_28 = NULL,y_28 = NULL;
  x_28 = t;
  w_28 :
  if(match_cons(x_28, sym_Undefined_1))
    {
      y_28 = ATgetArgument(x_28, 0);
      {
        ATerm a_29 = NULL;
        t = not_null(y_28);
        t = y_32(t);
        a_29 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_29));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_29 = NULL;
  f_29 = t;
  e_29 :
  if(!(match_cons(f_29, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_37 (ATerm))
{
  ATerm m_12 (ATerm t)
  {
    ATerm z_23 = t;
    if(PushChoice()==0)
      {
        ATerm i_29 = NULL;
        i_29 = t;
        g_29 :
        if(!(match_cons(i_29, sym_Help_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = z_23;
        {
          ATerm d_24 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = d_24;
              {
                ATerm j_29 = NULL;
                j_29 = t;
                h_29 :
                if(!(match_cons(j_29, sym_Version_0)))
                  _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, m_12);
  t = z_37(t);
  return(t);
}
ATerm Input_1 (ATerm t, ATerm a_0 (ATerm))
{
  ATerm p_29 = NULL,q_29 = NULL;
  p_29 = t;
  o_29 :
  if(match_cons(p_29, sym_Input_1))
    {
      q_29 = ATgetArgument(p_29, 0);
      {
        ATerm f_24 = t;
        if(PushChoice()==0)
          {
            ATerm s_29 = NULL;
            t = not_null(q_29);
            t = a_0(t);
            s_29 = t;
            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_29));
            PopChoice();
          }
        else
          {
            t = f_24;
            {
              ATerm v_29 = NULL;
              t = not_null(q_29);
              t = a_0(t);
              v_29 = t;
              t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_29));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm g_24 = t;
  if(PushChoice()==0)
    {
      ATerm n_12 (ATerm t)
      {
        ATerm v_30 = NULL;
        v_30 = t;
        b_30 :
        if(!(match_string(v_30, "-S")))
          _fail(t);
        return(t);
      }
      ATerm r_12 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, n_12, r_12);
      PopChoice();
    }
  else
    {
      t = g_24;
      {
        ATerm h_24 = t;
        if(PushChoice()==0)
          {
            ATerm t_12 (ATerm t)
            {
              ATerm w_30 = NULL;
              w_30 = t;
              c_30 :
              if(!(match_string(w_30, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm u_12 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, t_12, u_12);
            PopChoice();
          }
        else
          {
            t = h_24;
            {
              ATerm i_24 = t;
              if(PushChoice()==0)
                {
                  ATerm v_12 (ATerm t)
                  {
                    ATerm x_30 = NULL;
                    x_30 = t;
                    d_30 :
                    if(!(match_string(x_30, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm w_12 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, v_12, w_12);
                  PopChoice();
                }
              else
                {
                  t = i_24;
                  {
                    ATerm j_24 = t;
                    if(PushChoice()==0)
                      {
                        ATerm y_12 (ATerm t)
                        {
                          ATerm y_30 = NULL;
                          y_30 = t;
                          e_30 :
                          if(!(match_string(y_30, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm a_13 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, y_12, a_13);
                        PopChoice();
                      }
                    else
                      {
                        t = j_24;
                        {
                          ATerm n_24 = t;
                          if(PushChoice()==0)
                            {
                              ATerm l_13 (ATerm t)
                              {
                                ATerm z_30 = NULL;
                                z_30 = t;
                                f_30 :
                                if(!(match_string(z_30, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm m_13 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, l_13, m_13);
                              PopChoice();
                            }
                          else
                            {
                              t = n_24;
                              {
                                ATerm p_24 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm n_13 (ATerm t)
                                    {
                                      ATerm a_31 = NULL;
                                      a_31 = t;
                                      g_30 :
                                      if(!(match_string(a_31, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm o_13 (ATerm t)
                                    {
                                      ATerm b_31 = NULL;
                                      b_31 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(b_31));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, n_13, o_13);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = p_24;
                                    {
                                      ATerm q_24 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm p_13 (ATerm t)
                                          {
                                            ATerm d_31 = NULL;
                                            d_31 = t;
                                            i_30 :
                                            if(!(match_string(d_31, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm t_13 (ATerm t)
                                          {
                                            ATerm e_31 = NULL;
                                            e_31 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_31));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, p_13, t_13);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = q_24;
                                          {
                                            ATerm r_24 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm u_13 (ATerm t)
                                                {
                                                  ATerm g_31 = NULL;
                                                  g_31 = t;
                                                  k_30 :
                                                  if(!(match_string(g_31, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm v_13 (ATerm t)
                                                {
                                                  ATerm h_31 = NULL;
                                                  h_31 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_31));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, u_13, v_13);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = r_24;
                                                {
                                                  ATerm s_24 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm y_13 (ATerm t)
                                                      {
                                                        ATerm j_31 = NULL;
                                                        j_31 = t;
                                                        m_30 :
                                                        if(!(match_string(j_31, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm z_13 (ATerm t)
                                                      {
                                                        ATerm k_31 = NULL;
                                                        k_31 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(k_31));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, y_13, z_13);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = s_24;
                                                      {
                                                        ATerm t_24 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm a_14 (ATerm t)
                                                            {
                                                              ATerm m_31 = NULL;
                                                              m_31 = t;
                                                              o_30 :
                                                              if(!(match_string(m_31, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm c_14 (ATerm t)
                                                            {
                                                              ATerm n_31 = NULL;
                                                              n_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_31));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, a_14, c_14);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = t_24;
                                                            {
                                                              ATerm u_24 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm e_14 (ATerm t)
                                                                  {
                                                                    ATerm p_31 = NULL;
                                                                    p_31 = t;
                                                                    q_30 :
                                                                    if(!(match_string(p_31, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm g_14 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, e_14, g_14);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = u_24;
                                                                  {
                                                                    ATerm v_24 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm h_14 (ATerm t)
                                                                        {
                                                                          ATerm q_31 = NULL;
                                                                          q_31 = t;
                                                                          r_30 :
                                                                          if(!(match_string(q_31, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm i_14 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, h_14, i_14);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = v_24;
                                                                        {
                                                                          ATerm a_25 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm j_14 (ATerm t)
                                                                              {
                                                                                ATerm r_31 = NULL;
                                                                                r_31 = t;
                                                                                s_30 :
                                                                                if(!(match_string(r_31, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm p_14 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, j_14, p_14);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = a_25;
                                                                              {
                                                                                ATerm m_25 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm q_14 (ATerm t)
                                                                                    {
                                                                                      ATerm s_31 = NULL;
                                                                                      s_31 = t;
                                                                                      t_30 :
                                                                                      if(!(match_string(s_31, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm y_14 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, q_14, y_14);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = m_25;
                                                                                    {
                                                                                      ATerm z_14 (ATerm t)
                                                                                      {
                                                                                        ATerm t_31 = NULL;
                                                                                        t_31 = t;
                                                                                        u_30 :
                                                                                        if(!(match_string(t_31, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm e_15 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, z_14, e_15);
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
ATerm Option_2 (ATerm t, ATerm x_36 (ATerm), ATerm y_36 (ATerm))
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
  c_32 = t;
  b_32 :
  if(match_cons(c_32, sym_Cons_2))
    {
      d_32 = ATgetArgument(c_32, 0);
      e_32 = ATgetArgument(c_32, 1);
      {
        ATerm h_32 = NULL;
        t = not_null(d_32);
        t = x_36(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = y_36(t);
        h_32 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_32), not_null(e_32));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm z_36 (ATerm), ATerm a_37 (ATerm))
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL;
  p_32 = t;
  n_32 :
  if(match_cons(p_32, sym_Cons_2))
    {
      q_32 = ATgetArgument(p_32, 0);
      r_32 = ATgetArgument(p_32, 1);
      o_32 :
      if(match_cons(r_32, sym_Cons_2))
        {
          s_32 = ATgetArgument(r_32, 0);
          t_32 = ATgetArgument(r_32, 1);
          {
            ATerm x_32 = NULL;
            t = not_null(q_32);
            t = z_36(t);
            t = not_null(s_32);
            t = a_37(t);
            x_32 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_32), not_null(t_32));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm n_33 = NULL;
  n_33 = t;
  t = SSL_implode_string(not_null(n_33));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm t_33 = NULL;
  t_33 = t;
  t = SSL_explode_string(not_null(t_33));
  return(t);
}
ATerm basename_1 (ATerm t, ATerm i_39 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm n_25 = t;
    if(PushChoice()==0)
      {
        ATerm a_34 (ATerm t)
        {
          ATerm t_25 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, _id, a_34);
              PopChoice();
            }
          else
            {
              t = t_25;
              {
                ATerm w_25 = t;
                if(PushChoice()==0)
                  {
                    ATerm f_15 (ATerm t)
                    {
                      ATerm y_33 = NULL;
                      y_33 = t;
                      w_33 :
                      if(!(match_int(y_33, 47)))
                        _fail(t);
                      return(t);
                    }
                    t = Cons_2(t, f_15, _id);
                    PopChoice();
                  }
                else
                  {
                    t = w_25;
                    {
                      ATerm j_15 (ATerm t)
                      {
                        ATerm z_33 = NULL;
                        z_33 = t;
                        x_33 :
                        if(!(match_int(z_33, 46)))
                          _fail(t);
                        return(t);
                      }
                      t = Cons_2(t, j_15, i_39);
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                    }
                  }
              }
            }
          return(t);
        }
        t = a_34(t);
        PopChoice();
      }
    else
      t = n_25;
    t = implode_string_0(t);
  }
  return(t);
}
ATerm basename_0 (ATerm t)
{
  t = basename_1(t, _id);
  return(t);
}
ATerm sc_options_0 (ATerm t)
{
  ATerm x_25 = t;
  if(PushChoice()==0)
    {
      ATerm v_15 (ATerm t)
      {
        ATerm u_34 = NULL;
        u_34 = t;
        b_34 :
        if(!(match_string(u_34, "-e")))
          _fail(t);
        return(t);
      }
      ATerm w_15 (ATerm t)
      {
        ATerm v_34 = NULL;
        v_34 = t;
        t = (ATerm) ATmakeAppl(sym_ExecDir_1, not_null(v_34));
        return(t);
      }
      t = ArgOption_2(t, v_15, w_15);
      PopChoice();
    }
  else
    {
      t = x_25;
      {
        ATerm y_25 = t;
        if(PushChoice()==0)
          {
            ATerm x_15 (ATerm t)
            {
              ATerm x_34 = NULL;
              x_34 = t;
              d_34 :
              if(!(match_string(x_34, "-I")))
                _fail(t);
              return(t);
            }
            ATerm y_15 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Ignore_0);
              return(t);
            }
            t = ArgOption_2(t, x_15, y_15);
            PopChoice();
          }
        else
          {
            t = y_25;
            {
              ATerm z_25 = t;
              if(PushChoice()==0)
                {
                  ATerm z_15 (ATerm t)
                  {
                    ATerm y_34 = NULL;
                    y_34 = t;
                    e_34 :
                    if(!(match_string(y_34, "--Include")))
                      _fail(t);
                    return(t);
                  }
                  ATerm a_16 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Ignore_0);
                    return(t);
                  }
                  t = ArgOption_2(t, z_15, a_16);
                  PopChoice();
                }
              else
                {
                  t = z_25;
                  {
                    ATerm a_26 = t;
                    if(PushChoice()==0)
                      {
                        ATerm b_16 (ATerm t)
                        {
                          ATerm z_34 = NULL;
                          z_34 = t;
                          f_34 :
                          if(!(match_string(z_34, "-CI")))
                            _fail(t);
                          return(t);
                        }
                        ATerm c_16 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Ignore_0);
                          return(t);
                        }
                        t = ArgOption_2(t, b_16, c_16);
                        PopChoice();
                      }
                    else
                      {
                        t = a_26;
                        {
                          ATerm b_26 = t;
                          if(PushChoice()==0)
                            {
                              ATerm d_16 (ATerm t)
                              {
                                ATerm a_35 = NULL;
                                a_35 = t;
                                g_34 :
                                if(!(match_string(a_35, "-CL")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm e_16 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Ignore_0);
                                return(t);
                              }
                              t = ArgOption_2(t, d_16, e_16);
                              PopChoice();
                            }
                          else
                            {
                              t = b_26;
                              {
                                ATerm c_26 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm k_16 (ATerm t)
                                    {
                                      ATerm b_35 = NULL;
                                      b_35 = t;
                                      h_34 :
                                      if(!(match_string(b_35, "-CC")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm l_16 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(sym_CC_0);
                                      return(t);
                                    }
                                    t = Option_2(t, k_16, l_16);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = c_26;
                                    {
                                      ATerm d_26 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm n_16 (ATerm t)
                                          {
                                            ATerm c_35 = NULL;
                                            c_35 = t;
                                            i_34 :
                                            if(!(match_string(c_35, "--norm")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm t_16 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_NORM_0);
                                            return(t);
                                          }
                                          t = Option_2(t, n_16, t_16);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = d_26;
                                          {
                                            ATerm e_26 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm u_16 (ATerm t)
                                                {
                                                  ATerm d_35 = NULL;
                                                  d_35 = t;
                                                  j_34 :
                                                  if(!(match_string(d_35, "-i")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm v_16 (ATerm t)
                                                {
                                                  ATerm e_35 = NULL;
                                                  ATerm g_35 = NULL;
                                                  e_35 = t;
                                                  t = basename_1(t, _id);
                                                  g_35 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(g_35));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, u_16, v_16);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = e_26;
                                                {
                                                  ATerm f_26 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm w_16 (ATerm t)
                                                      {
                                                        ATerm i_35 = NULL;
                                                        i_35 = t;
                                                        m_34 :
                                                        if(!(match_string(i_35, "--main")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm a_17 (ATerm t)
                                                      {
                                                        ATerm j_35 = NULL;
                                                        j_35 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Main_1, not_null(j_35));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, w_16, a_17);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = f_26;
                                                      {
                                                        ATerm h_26 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm c_17 (ATerm t)
                                                            {
                                                              ATerm l_35 = NULL;
                                                              l_35 = t;
                                                              o_34 :
                                                              if(!(match_string(l_35, "-m")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm d_17 (ATerm t)
                                                            {
                                                              ATerm m_35 = NULL;
                                                              m_35 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Main_1, not_null(m_35));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, c_17, d_17);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = h_26;
                                                            {
                                                              ATerm i_26 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm e_17 (ATerm t)
                                                                  {
                                                                    ATerm o_35 = NULL;
                                                                    o_35 = t;
                                                                    q_34 :
                                                                    if(!(match_string(o_35, "--ast")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm f_17 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_AST_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, e_17, f_17);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = i_26;
                                                                  {
                                                                    ATerm j_26 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm g_17 (ATerm t)
                                                                        {
                                                                          ATerm p_35 = NULL;
                                                                          p_35 = t;
                                                                          r_34 :
                                                                          if(!(match_string(p_35, "-F")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm k_17 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_FRONTEND_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, g_17, k_17);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = j_26;
                                                                        {
                                                                          ATerm k_26 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm m_17 (ATerm t)
                                                                              {
                                                                                ATerm q_35 = NULL;
                                                                                q_35 = t;
                                                                                s_34 :
                                                                                if(!(match_string(q_35, "--fusion")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm n_17 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_FUSION_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, m_17, n_17);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = k_26;
                                                                              {
                                                                                ATerm o_17 (ATerm t)
                                                                                {
                                                                                  ATerm r_35 = NULL;
                                                                                  r_35 = t;
                                                                                  t_34 :
                                                                                  if(!(match_string(r_35, "--csyntax")))
                                                                                    _fail(t);
                                                                                  return(t);
                                                                                }
                                                                                ATerm p_17 (ATerm t)
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym_CSYNTAX_0);
                                                                                  return(t);
                                                                                }
                                                                                t = Option_2(t, o_17, p_17);
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
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
  z_35 = t;
  y_35 :
  if(match_cons(z_35, sym_Cons_2))
    {
      a_36 = ATgetArgument(z_35, 0);
      b_36 = ATgetArgument(z_35, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_36)), not_null(b_36));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm v_36 (ATerm))
{
  ATerm y_17 (ATerm t)
  {
    ATerm s_36 = NULL;
    s_36 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_36));
    return(t);
  }
  ATerm c_18 (ATerm t)
  {
    ATerm s_26 = t;
    if(PushChoice()==0)
      {
        ATerm t_26 = t;
        if(PushChoice()==0)
          {
            ATerm u_36 = NULL;
            u_36 = t;
            g_36 :
            if(!(match_cons(u_36, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = t_26;
            t = v_36(t);
            t = Cons_2(t, _id, c_18);
          }
        PopChoice();
      }
    else
      {
        t = s_26;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, y_17, c_18);
  return(t);
}
ATerm skip1_1 (ATerm t, ATerm x_40 (ATerm))
{
  t = at_tail_1(t, x_40);
  return(t);
}
ATerm filter_option_args_1 (ATerm t, ATerm z_40 (ATerm))
{
  ATerm d_18 (ATerm t)
  {
    t = Cons_2(t, z_40, _id);
    t = Tl_0(t);
    return(t);
  }
  ATerm d_37 (ATerm t, ATerm f_37 (ATerm))
  {
    t = at_tail_1(t, f_37);
    return(t);
  }
  t = filter_gen_2(t, d_18, d_37);
  return(t);
}
ATerm at_tail_1 (ATerm t, ATerm x_46 (ATerm))
{
  t = Cons_2(t, _id, x_46);
  return(t);
}
ATerm skip2_1 (ATerm t, ATerm y_40 (ATerm))
{
  ATerm n_18 (ATerm t)
  {
    t = at_tail_1(t, y_40);
    return(t);
  }
  t = at_tail_1(t, n_18);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm p_33 (ATerm), ATerm q_33 (ATerm))
{
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
  k_37 = t;
  j_37 :
  if(match_cons(k_37, sym_Cons_2))
    {
      l_37 = ATgetArgument(k_37, 0);
      m_37 = ATgetArgument(k_37, 1);
      {
        ATerm p_37 = NULL;
        t = not_null(l_37);
        {
          ATerm r_37 = NULL;
          t = p_33(t);
          p_37 = t;
          t = not_null(m_37);
          t = q_33(t);
          r_37 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_37), not_null(r_37));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm y_37 = NULL,a_38 = NULL,b_38 = NULL;
  y_37 = t;
  x_37 :
  if(match_cons(y_37, sym_Cons_2))
    {
      a_38 = ATgetArgument(y_37, 0);
      b_38 = ATgetArgument(y_37, 1);
      t = not_null(b_38);
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm g_38 = NULL;
  g_38 = t;
  f_38 :
  if(!(match_cons(g_38, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm filter_gen_2 (ATerm t, ATerm u_40 (ATerm), ATerm v_40 (ATerm, ATerm (ATerm)))
{
  ATerm j_38 (ATerm t)
  {
    ATerm x_26 = t;
    if(PushChoice()==0)
      {
        ATerm i_38 = NULL;
        i_38 = t;
        h_38 :
        if(!(match_cons(i_38, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = x_26;
        {
          ATerm z_26 = t;
          if(PushChoice()==0)
            {
              t = u_40(t);
              t = v_40(t, j_38);
              PopChoice();
            }
          else
            {
              t = z_26;
              t = Tl_0(t);
              t = j_38(t);
            }
        }
      }
    return(t);
  }
  t = j_38(t);
  return(t);
}
ATerm filter_options_1 (ATerm t, ATerm a_41 (ATerm))
{
  ATerm o_18 (ATerm t)
  {
    t = Cons_2(t, a_41, _id);
    return(t);
  }
  t = filter_gen_2(t, o_18, skip2_1);
  return(t);
}
ATerm process_sc_options_0 (ATerm t)
{
  ATerm t_38 = NULL,w_38 = NULL,z_38 = NULL,c_39 = NULL;
  ATerm a_27;
  a_27 = t;
  {
    ATerm v_38 = NULL;
    ATerm p_18 (ATerm t)
    {
      ATerm u_38 = NULL;
      u_38 = t;
      k_38 :
      if(!(match_string(u_38, "-I")))
        _fail(t);
      return(t);
    }
    t = filter_options_1(t, p_18);
    v_38 = t;
    if(t_38 != NULL && t_38 != v_38)
      _fail(v_38);
    else
      t_38 = v_38;
  }
  t = a_27;
  {
    ATerm b_27;
    b_27 = t;
    {
      ATerm y_38 = NULL;
      ATerm y_18 (ATerm t)
      {
        ATerm x_38 = NULL;
        x_38 = t;
        m_38 :
        if(!(match_string(x_38, "-CI")))
          _fail(t);
        return(t);
      }
      t = filter_option_args_1(t, y_18);
      y_38 = t;
      if(w_38 != NULL && w_38 != y_38)
        _fail(y_38);
      else
        w_38 = y_38;
    }
    t = b_27;
    {
      ATerm c_27;
      c_27 = t;
      {
        ATerm b_39 = NULL;
        ATerm z_18 (ATerm t)
        {
          ATerm a_39 = NULL;
          a_39 = t;
          o_38 :
          if(!(match_string(a_39, "-CL")))
            _fail(t);
          return(t);
        }
        t = filter_option_args_1(t, z_18);
        b_39 = t;
        if(z_38 != NULL && z_38 != b_39)
          _fail(b_39);
        else
          z_38 = b_39;
      }
      t = c_27;
      {
        ATerm a_19 (ATerm t)
        {
          ATerm d_27 = t;
          if(PushChoice()==0)
            {
              t = sc_options_0(t);
              PopChoice();
            }
          else
            {
              t = d_27;
              t = io_options_0(t);
            }
          return(t);
        }
        t = parse_options_1(t, a_19);
        {
          ATerm e_27 = t;
          if(PushChoice()==0)
            {
              ATerm e_39 = NULL;
              ATerm b_19 (ATerm t)
              {
                ATerm c_19 (ATerm t)
                {
                  ATerm d_39 = NULL;
                  d_39 = t;
                  if(c_39 != NULL && c_39 != d_39)
                    _fail(d_39);
                  else
                    c_39 = d_39;
                  return(t);
                }
                t = Input_1(t, c_19);
                return(t);
              }
              t = fetch_1(t, b_19);
              e_39 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_InclDir_1, not_null(t_38)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_CInclDir_1, not_null(w_38)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_CLibDir_1, not_null(z_38)), not_null(e_39)))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(c_39), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".r", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
              PopChoice();
            }
          else
            {
              t = e_27;
              {
                ATerm g_39 = NULL;
                g_39 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Help_0), not_null(g_39)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
              }
            }
        }
      }
    }
  }
  return(t);
}
ATerm sc_0 (ATerm t)
{
  ATerm f_27 = t;
  if(PushChoice()==0)
    {
      t = process_sc_options_0(t);
      PopChoice();
    }
  else
    {
      t = f_27;
      t = sc_usage_0(t);
      t = (ATerm) ATmakeInt(1);
      t = exit_0(t);
    }
  {
    ATerm g_27 = t;
    if(PushChoice()==0)
      {
        ATerm e_19 (ATerm t)
        {
          ATerm g_19 (ATerm t)
          {
            t = sc_usage_0(t);
            t = (ATerm) ATmakeInt(1);
            t = exit_0(t);
            return(t);
          }
          t = need_help_1(t, g_19);
          return(t);
        }
        ATerm f_19 (ATerm t)
        {
          ATerm h_19 (ATerm t)
          {
            ATerm u_39 = NULL;
            u_39 = t;
            q_39 :
            if(!(match_cons(u_39, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, h_19);
          return(t);
        }
        t = TCons_2(t, e_19, f_19);
        PopChoice();
      }
    else
      {
        t = g_27;
        {
          ATerm h_27 = t;
          if(PushChoice()==0)
            {
              t = sc_announce_0(t);
              t = parse_0(t);
              t = output_ast_0(t);
              t = add_main_0(t);
              t = core_0(t);
              t = cc1_0(t);
              t = cc2_0(t);
              {
                ATerm i_27 = t;
                if(PushChoice()==0)
                  {
                    ATerm j_27 = t;
                    if(PushChoice()==0)
                      {
                        ATerm q_19 (ATerm t)
                        {
                          ATerm u_19 (ATerm t)
                          {
                            ATerm v_39 = NULL;
                            v_39 = t;
                            r_39 :
                            if(!(match_cons(v_39, sym_NORM_0)))
                              _fail(t);
                            return(t);
                          }
                          t = fetch_1(t, u_19);
                          return(t);
                        }
                        ATerm r_19 (ATerm t)
                        {
                          ATerm v_19 (ATerm t)
                          {
                            ATerm w_39 = NULL;
                            w_39 = t;
                            s_39 :
                            if(!(match_cons(w_39, sym_TNil_0)))
                              _fail(t);
                            return(t);
                          }
                          t = TCons_2(t, _id, v_19);
                          return(t);
                        }
                        t = TCons_2(t, q_19, r_19);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      t = j_27;
                    {
                      ATerm w_19 (ATerm t)
                      {
                        ATerm y_19 (ATerm t)
                        {
                          ATerm x_39 = NULL;
                          x_39 = t;
                          t_39 :
                          if(!(match_cons(x_39, sym_TNil_0)))
                            _fail(t);
                          return(t);
                        }
                        t = TCons_2(t, remove_intermediates_0, y_19);
                        return(t);
                      }
                      t = TCons_2(t, _id, w_19);
                    }
                    PopChoice();
                  }
                else
                  t = i_27;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("compilation succeeded", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = (ATerm) ATmakeInt(0);
                t = exit_0(t);
              }
              PopChoice();
            }
          else
            {
              t = h_27;
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("compilation failed", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = printnl_0(t);
              t = (ATerm) ATmakeInt(1);
              t = exit_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = sc_0(t);
  return(t);
}
