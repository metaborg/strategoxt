#include <stratego.h>
#include <stratego-lib.h>
Symbol sym_Scopes_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
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
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
ATerm RenameVar_0 (ATerm);
ATerm RenameCall_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm j_61 (ATerm));
ATerm assert_1 (ATerm, ATerm u_43 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm w_43 (ATerm));
ATerm HoArg_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm j_0 (ATerm));
ATerm escape_1 (ATerm, ATerm f_49 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm NameMod_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm i_53 (ATerm), ATerm j_53 (ATerm), ATerm k_53 (ATerm));
ATerm length_0 (ATerm);
ATerm RenameSDef_0 (ATerm);
ATerm rename_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm h_41 (ATerm));
ATerm Cons_2 (ATerm, ATerm m_43 (ATerm), ATerm n_43 (ATerm));
ATerm Specification_1 (ATerm, ATerm j_41 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm i_43 (ATerm), ATerm j_43 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm r_46 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm c_60 (ATerm), ATerm d_60 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_46 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm c_59 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_44 (ATerm));
ATerm map_1 (ATerm, ATerm o_58 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm g_48 (ATerm), ATerm h_48 (ATerm));
ATerm repeat_1 (ATerm, ATerm j_48 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_44 (ATerm));
ATerm Program_1 (ATerm, ATerm p_38 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm q_38 (ATerm));
ATerm fetch_1 (ATerm, ATerm w_58 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_45 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm u_60 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_45 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_44 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_44 (ATerm));
ATerm iowrap_3 (ATerm, ATerm f_46 (ATerm), ATerm g_46 (ATerm), ATerm h_46 (ATerm));
ATerm iowrap_2 (ATerm, ATerm a_46 (ATerm), ATerm b_46 (ATerm));
ATerm iowrap_1 (ATerm, ATerm x_45 (ATerm));
ATerm rename_defs_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm a_1 = NULL;
  a_1 = t;
  z_0 :
  if(!(match_cons(a_1, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm RenameVar_0 (ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL;
  i_1 = t;
  f_1 :
  if(match_cons(i_1, sym_TCons_2))
    {
      j_1 = ATgetArgument(i_1, 0);
      k_1 = ATgetArgument(i_1, 1);
      g_1 :
      if(match_cons(k_1, sym_TCons_2))
        {
          l_1 = ATgetArgument(k_1, 0);
          m_1 = ATgetArgument(k_1, 1);
          h_1 :
          if(match_cons(m_1, sym_TNil_0))
            {
              ATerm p_1 = NULL;
              ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL;
              t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(l_1), not_null(j_1));
              {
                ATerm a_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
                  return(t);
                }
                t = rewrite_1(t, a_0);
                q_1 = t;
                d_1 :
                if(match_cons(q_1, sym_Defined_2))
                  {
                    r_1 = ATgetArgument(q_1, 0);
                    s_1 = ATgetArgument(q_1, 1);
                    e_1 :
                    if(match_string(r_1, "b_0"))
                      {
                        if(p_1 != NULL && p_1 != s_1)
                          _fail(s_1);
                        else
                          p_1 = s_1;
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
              t = not_null(p_1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm RenameCall_0 (ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL;
  b_2 = t;
  z_1 :
  if(match_cons(b_2, sym_Call_2))
    {
      c_2 = ATgetArgument(b_2, 0);
      e_2 = ATgetArgument(b_2, 1);
      a_2 :
      if(match_cons(c_2, sym_SVar_1))
        {
          d_2 = ATgetArgument(c_2, 0);
          {
            ATerm h_2 = NULL,i_2 = NULL;
            ATerm j_2 = NULL;
            t = not_null(e_2);
            t = length_0(t);
            j_2 = t;
            if(h_2 != NULL && h_2 != j_2)
              _fail(j_2);
            else
              h_2 = j_2;
            {
              ATerm v_6 = t;
              if(PushChoice()==0)
                {
                  ATerm k_2 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_2), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = RenameVar_0(t);
                  k_2 = t;
                  if(i_2 != NULL && i_2 != k_2)
                    _fail(k_2);
                  else
                    i_2 = k_2;
                  PopChoice();
                }
              else
                {
                  t = v_6;
                  {
                    ATerm l_2 = NULL;
                    t = not_null(d_2);
                    t = HoArg_0(t);
                    l_2 = t;
                    if(i_2 != NULL && i_2 != l_2)
                      _fail(l_2);
                    else
                      i_2 = l_2;
                  }
                }
            }
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_2)), not_null(e_2));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm j_61 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    t = j_61(t);
    t = _all(t, q_2);
    return(t);
  }
  t = q_2(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm u_43 (ATerm))
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL;
  y_2 = t;
  v_2 :
  if(match_cons(y_2, sym_TCons_2))
    {
      z_2 = ATgetArgument(y_2, 0);
      a_3 = ATgetArgument(y_2, 1);
      w_2 :
      if(match_cons(a_3, sym_TCons_2))
        {
          b_3 = ATgetArgument(a_3, 0);
          c_3 = ATgetArgument(a_3, 1);
          x_2 :
          if(match_cons(c_3, sym_TNil_0))
            {
              ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL;
              ATerm w_6;
              w_6 = t;
              {
                ATerm i_3 = NULL;
                ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL;
                t = u_43(t);
                i_3 = t;
                if(f_3 != NULL && f_3 != i_3)
                  _fail(i_3);
                else
                  f_3 = i_3;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_3), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm x_6 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_3), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = x_6;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  j_3 = t;
                  u_2 :
                  if(match_cons(j_3, sym_Cons_2))
                    {
                      k_3 = ATgetArgument(j_3, 0);
                      l_3 = ATgetArgument(j_3, 1);
                      if(g_3 != NULL && g_3 != k_3)
                        _fail(k_3);
                      else
                        g_3 = k_3;
                      if(h_3 != NULL && h_3 != l_3)
                        _fail(l_3);
                      else
                        h_3 = l_3;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_3), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_2), not_null(g_3)), not_null(h_3)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  else
                    _fail(t);
                }
              }
              t = w_6;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL;
  r_3 = t;
  q_3 :
  if(match_cons(r_3, sym_Cons_2))
    {
      s_3 = ATgetArgument(r_3, 0);
      t_3 = ATgetArgument(r_3, 1);
      t = not_null(s_3);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL;
  b_4 = t;
  y_3 :
  if(match_cons(b_4, sym_TCons_2))
    {
      c_4 = ATgetArgument(b_4, 0);
      d_4 = ATgetArgument(b_4, 1);
      z_3 :
      if(match_cons(d_4, sym_TCons_2))
        {
          e_4 = ATgetArgument(d_4, 0);
          f_4 = ATgetArgument(d_4, 1);
          a_4 :
          if(match_cons(f_4, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_4), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_4), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = table_get_0(t);
              t = Hd_0(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm w_43 (ATerm))
{
  ATerm l_4 = NULL;
  ATerm n_4 = NULL;
  l_4 = t;
  {
    ATerm o_4 = NULL;
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    t = w_43(t);
    o_4 = t;
    if(n_4 != NULL && n_4 != o_4)
      _fail(o_4);
    else
      n_4 = o_4;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_4), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_4), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_lookup_0(t);
  }
  return(t);
}
ATerm HoArg_0 (ATerm t)
{
  ATerm y_4 = NULL;
  y_4 = t;
  {
    ATerm g_7 = t;
    if(PushChoice()==0)
      {
        ATerm a_5 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(y_4));
        {
          ATerm k_0 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
            return(t);
          }
          t = rewrite_1(t, k_0);
          a_5 = t;
          u_4 :
          if(match_cons(a_5, sym_Undefined_0))
            _fail(t);
          else
            _fail(t);
        }
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        PopChoice();
      }
    else
      {
        t = g_7;
        {
          ATerm c_5 = NULL;
          ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(y_4));
          {
            ATerm l_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
              return(t);
            }
            t = rewrite_1(t, l_0);
            d_5 = t;
            w_4 :
            if(match_cons(d_5, sym_Defined_2))
              {
                e_5 = ATgetArgument(d_5, 0);
                f_5 = ATgetArgument(d_5, 1);
                x_4 :
                if(match_string(e_5, "c_0"))
                  {
                    if(c_5 != NULL && c_5 != f_5)
                      _fail(f_5);
                    else
                      c_5 = f_5;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
          t = not_null(c_5);
        }
      }
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm l_5 = NULL;
  l_5 = t;
  t = SSL_int_to_string(not_null(l_5));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm j_0 (ATerm))
{
  ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
  w_5 = t;
  u_5 :
  if(match_cons(w_5, sym_Cons_2))
    {
      x_5 = ATgetArgument(w_5, 0);
      y_5 = ATgetArgument(w_5, 1);
      v_5 :
      if(match_int(x_5, 95))
        {
          ATerm a_6 = NULL;
          ATerm b_6 = NULL;
          t = not_null(y_5);
          t = j_0(t);
          b_6 = t;
          if(a_6 != NULL && a_6 != b_6)
            _fail(b_6);
          else
            a_6 = b_6;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(95), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(95), not_null(a_6)));
        }
      else
        {
          if(match_int(x_5, 45))
            {
              ATerm d_6 = NULL;
              ATerm e_6 = NULL;
              t = not_null(y_5);
              t = j_0(t);
              e_6 = t;
              if(d_6 != NULL && d_6 != e_6)
                _fail(e_6);
              else
                d_6 = e_6;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(95), not_null(d_6));
            }
          else
            {
              if(match_int(x_5, 39))
                {
                  ATerm g_6 = NULL;
                  ATerm h_6 = NULL;
                  t = not_null(y_5);
                  t = j_0(t);
                  h_6 = t;
                  if(g_6 != NULL && g_6 != h_6)
                    _fail(h_6);
                  else
                    g_6 = h_6;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(95), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(112), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(95), not_null(g_6))));
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
ATerm escape_1 (ATerm t, ATerm f_49 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm o_6 (ATerm t)
    {
      ATerm h_7 = t;
      if(PushChoice()==0)
        {
          t = f_49(t, o_6);
          PopChoice();
        }
      else
        {
          t = h_7;
          {
            ATerm i_7 = t;
            if(PushChoice()==0)
              {
                t = Cons_2(t, _id, o_6);
                PopChoice();
              }
            else
              {
                t = i_7;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = o_6(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm cify_0 (ATerm t)
{
  t = escape_1(t, Cify_1);
  return(t);
}
ATerm NameMod_0 (ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL;
  r_6 = t;
  q_6 :
  if(match_cons(r_6, sym_Mod_2))
    {
      s_6 = ATgetArgument(r_6, 0);
      t_6 = ATgetArgument(r_6, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_6), (ATerm) ATmakeAppl(sym_Nil_0))));
      t = concat_strings_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
  b_7 = t;
  y_6 :
  if(match_cons(b_7, sym_TCons_2))
    {
      c_7 = ATgetArgument(b_7, 0);
      d_7 = ATgetArgument(b_7, 1);
      z_6 :
      if(match_cons(d_7, sym_TCons_2))
        {
          e_7 = ATgetArgument(d_7, 0);
          f_7 = ATgetArgument(d_7, 1);
          a_7 :
          if(match_cons(f_7, sym_TNil_0))
            {
              ATerm j_7 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(c_7), not_null(e_7));
                  PopChoice();
                }
              else
                {
                  t = j_7;
                  t = SSL_addr(not_null(c_7), not_null(e_7));
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
ATerm foldr_3 (ATerm t, ATerm i_53 (ATerm), ATerm j_53 (ATerm), ATerm k_53 (ATerm))
{
  ATerm k_7 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = i_53(t);
      PopChoice();
    }
  else
    {
      t = k_7;
      {
        ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
        n_7 = t;
        m_7 :
        if(match_cons(n_7, sym_Cons_2))
          {
            o_7 = ATgetArgument(n_7, 0);
            p_7 = ATgetArgument(n_7, 1);
            {
              ATerm s_7 = NULL,u_7 = NULL;
              ATerm l_7;
              l_7 = t;
              {
                ATerm t_7 = NULL;
                t = not_null(o_7);
                t = k_53(t);
                t_7 = t;
                if(s_7 != NULL && s_7 != t_7)
                  _fail(t_7);
                else
                  s_7 = t_7;
              }
              t = l_7;
              {
                ATerm v_7 = NULL;
                t = not_null(p_7);
                t = foldr_3(t, i_53, j_53, k_53);
                v_7 = t;
                if(u_7 != NULL && u_7 != v_7)
                  _fail(v_7);
                else
                  u_7 = v_7;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_7), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = j_53(t);
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
  ATerm m_0 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm n_0 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, m_0, add_0, n_0);
  return(t);
}
ATerm RenameSDef_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL;
  f_8 = t;
  e_8 :
  if(match_cons(f_8, sym_SDef_3))
    {
      g_8 = ATgetArgument(f_8, 0);
      h_8 = ATgetArgument(f_8, 1);
      i_8 = ATgetArgument(f_8, 2);
      {
        ATerm m_8 = NULL,n_8 = NULL;
        ATerm o_8 = NULL;
        t = not_null(h_8);
        {
          ATerm p_8 = NULL,r_8 = NULL,t_8 = NULL;
          t = length_0(t);
          o_8 = t;
          if(m_8 != NULL && m_8 != o_8)
            _fail(o_8);
          else
            m_8 = o_8;
          {
            ATerm q_7;
            q_7 = t;
            {
              ATerm q_8 = NULL;
              t = not_null(g_8);
              t = try_1(t, NameMod_0);
              t = cify_0(t);
              q_8 = t;
              if(p_8 != NULL && p_8 != q_8)
                _fail(q_8);
              else
                p_8 = q_8;
            }
            t = q_7;
            {
              ATerm s_8 = NULL;
              t = not_null(m_8);
              t = int_to_string_0(t);
              s_8 = t;
              if(r_8 != NULL && r_8 != s_8)
                _fail(s_8);
              else
                r_8 = s_8;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_8), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("_", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_8), (ATerm) ATmakeAppl(sym_Nil_0))));
              t = concat_strings_0(t);
              t_8 = t;
              if(n_8 != NULL && n_8 != t_8)
                _fail(t_8);
              else
                n_8 = t_8;
              {
                ATerm r_7;
                r_7 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(m_8), not_null(g_8)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue)), not_null(n_8)), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm o_0 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
                    return(t);
                  }
                  t = assert_1(t, o_0);
                }
                t = r_7;
                {
                  ATerm w_7 = t;
                  if(PushChoice()==0)
                    {
                      t = not_null(g_8);
                      t = HoArg_0(t);
                      {
                        ATerm x_7;
                        x_7 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(g_8)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Undefined_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                        {
                          ATerm p_0 (ATerm t)
                          {
                            t = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
                            return(t);
                          }
                          t = assert_1(t, p_0);
                        }
                        t = x_7;
                      }
                      PopChoice();
                    }
                  else
                    {
                      t = w_7;
                      {
                        ATerm y_7;
                        y_7 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(g_8)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue)), not_null(n_8)), (ATerm) ATmakeAppl(sym_TNil_0)));
                        {
                          ATerm q_0 (ATerm t)
                          {
                            t = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
                            return(t);
                          }
                          t = assert_1(t, q_0);
                        }
                        t = y_7;
                      }
                    }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(n_8), not_null(h_8), not_null(i_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm rename_sdefs_0 (ATerm t)
{
  t = map_1(t, RenameSDef_0);
  {
    ATerm r_0 (ATerm t)
    {
      ATerm s_0 (ATerm t)
      {
        t = try_1(t, RenameCall_0);
        return(t);
      }
      t = topdown_1(t, s_0);
      return(t);
    }
    t = map_1(t, r_0);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm h_41 (ATerm))
{
  ATerm c_9 = NULL,d_9 = NULL;
  c_9 = t;
  b_9 :
  if(match_cons(c_9, sym_Strategies_1))
    {
      d_9 = ATgetArgument(c_9, 0);
      {
        ATerm f_9 = NULL;
        t = not_null(d_9);
        t = h_41(t);
        f_9 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(f_9));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_43 (ATerm), ATerm n_43 (ATerm))
{
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
  s_9 = t;
  m_9 :
  if(match_cons(s_9, sym_Cons_2))
    {
      t_9 = ATgetArgument(s_9, 0);
      u_9 = ATgetArgument(s_9, 1);
      {
        ATerm y_9 = NULL;
        t = not_null(t_9);
        {
          ATerm a_10 = NULL;
          t = m_43(t);
          y_9 = t;
          t = not_null(u_9);
          t = n_43(t);
          a_10 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_9), not_null(a_10));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm j_41 (ATerm))
{
  ATerm i_10 = NULL,j_10 = NULL;
  i_10 = t;
  h_10 :
  if(match_cons(i_10, sym_Specification_1))
    {
      j_10 = ATgetArgument(i_10, 0);
      {
        ATerm l_10 = NULL;
        t = not_null(j_10);
        t = j_41(t);
        l_10 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(l_10));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm q_10 = NULL;
  q_10 = t;
  p_10 :
  if(!(match_cons(q_10, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm i_43 (ATerm), ATerm j_43 (ATerm))
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
  v_10 = t;
  u_10 :
  if(match_cons(v_10, sym_TCons_2))
    {
      w_10 = ATgetArgument(v_10, 0);
      x_10 = ATgetArgument(v_10, 1);
      {
        ATerm a_11 = NULL;
        t = not_null(w_10);
        {
          ATerm j_11 = NULL;
          t = i_43(t);
          a_11 = t;
          t = not_null(x_10);
          t = j_43(t);
          j_11 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_11), not_null(j_11));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm q_11 = NULL;
  ATerm z_7;
  z_7 = t;
  {
    ATerm t_0 (ATerm t)
    {
      ATerm u_11 = NULL,v_11 = NULL;
      u_11 = t;
      p_11 :
      if(match_cons(u_11, sym_Program_1))
        {
          v_11 = ATgetArgument(u_11, 0);
          if(q_11 != NULL && q_11 != v_11)
            _fail(v_11);
          else
            q_11 = v_11;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, t_0);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_11), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = z_7;
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
  ATerm e_12 = NULL,f_12 = NULL;
  ATerm u_0 (ATerm t)
  {
    ATerm v_0 (ATerm t)
    {
      ATerm a_8 = t;
      if(PushChoice()==0)
        {
          ATerm x_0 (ATerm t)
          {
            ATerm g_12 = NULL;
            g_12 = t;
            x_11 :
            if(!(match_cons(g_12, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, x_0);
          PopChoice();
          _fail(t);
        }
      else
        t = a_8;
      return(t);
    }
    ATerm w_0 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, v_0, w_0);
    {
      ATerm y_0 (ATerm t)
      {
        ATerm c_1 (ATerm t)
        {
          ATerm h_12 = NULL,i_12 = NULL;
          h_12 = t;
          z_11 :
          if(match_cons(h_12, sym_Runtime_1))
            {
              i_12 = ATgetArgument(h_12, 0);
              if(f_12 != NULL && f_12 != i_12)
                _fail(i_12);
              else
                f_12 = i_12;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, c_1);
        return(t);
      }
      ATerm b_1 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, y_0, b_1);
      {
        ATerm n_1 (ATerm t)
        {
          ATerm t_1 (ATerm t)
          {
            ATerm j_12 = NULL,k_12 = NULL;
            j_12 = t;
            d_12 :
            if(match_cons(j_12, sym_Program_1))
              {
                k_12 = ATgetArgument(j_12, 0);
                if(e_12 != NULL && e_12 != k_12)
                  _fail(k_12);
                else
                  e_12 = k_12;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, t_1);
          return(t);
        }
        ATerm o_1 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, n_1, o_1);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_12), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_12), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, u_0);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
  s_12 = t;
  p_12 :
  if(match_cons(s_12, sym_TCons_2))
    {
      t_12 = ATgetArgument(s_12, 0);
      u_12 = ATgetArgument(s_12, 1);
      q_12 :
      if(match_cons(u_12, sym_TCons_2))
        {
          v_12 = ATgetArgument(u_12, 0);
          w_12 = ATgetArgument(u_12, 1);
          r_12 :
          if(match_cons(w_12, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(t_12), not_null(v_12));
          else
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
  ATerm e_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL;
  e_13 = t;
  b_13 :
  if(match_cons(e_13, sym_TCons_2))
    {
      o_13 = ATgetArgument(e_13, 0);
      p_13 = ATgetArgument(e_13, 1);
      c_13 :
      if(match_cons(p_13, sym_TCons_2))
        {
          q_13 = ATgetArgument(p_13, 0);
          r_13 = ATgetArgument(p_13, 1);
          d_13 :
          if(match_cons(r_13, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(o_13), not_null(q_13));
          else
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
  ATerm k_14 = NULL;
  ATerm b_8;
  b_8 = t;
  {
    ATerm u_1 (ATerm t)
    {
      ATerm c_8 = t;
      if(PushChoice()==0)
        {
          ATerm w_1 (ATerm t)
          {
            ATerm l_14 = NULL,m_14 = NULL;
            l_14 = t;
            h_14 :
            if(match_cons(l_14, sym_Output_1))
              {
                m_14 = ATgetArgument(l_14, 0);
                if(k_14 != NULL && k_14 != m_14)
                  _fail(m_14);
                else
                  k_14 = m_14;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, w_1);
          PopChoice();
        }
      else
        {
          t = c_8;
          {
            ATerm n_14 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            n_14 = t;
            if(k_14 != NULL && k_14 != n_14)
              _fail(n_14);
            else
              k_14 = n_14;
          }
        }
      return(t);
    }
    ATerm v_1 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, u_1, v_1);
  }
  t = b_8;
  {
    ATerm x_1 (ATerm t)
    {
      ATerm y_1 (ATerm t)
      {
        ATerm f_2 (ATerm t)
        {
          t = not_null(k_14);
          return(t);
        }
        t = split_2(t, f_2, _id);
        return(t);
      }
      t = TCons_2(t, y_1, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, x_1);
    {
      ATerm d_8 = t;
      if(PushChoice()==0)
        {
          ATerm g_2 (ATerm t)
          {
            ATerm n_2 (ATerm t)
            {
              ATerm o_14 = NULL;
              o_14 = t;
              j_14 :
              if(!(match_cons(o_14, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, n_2);
            return(t);
          }
          ATerm m_2 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, g_2, m_2);
          PopChoice();
        }
      else
        {
          t = d_8;
          {
            ATerm o_2 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, o_2);
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
ATerm apply_strategy_1 (ATerm t, ATerm r_46 (ATerm))
{
  ATerm y_14 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
  ATerm j_8;
  j_8 = t;
  t = dtime_0(t);
  t = j_8;
  t = r_46(t);
  {
    ATerm k_8;
    k_8 = t;
    {
      ATerm z_14 = NULL;
      t = dtime_0(t);
      z_14 = t;
      if(y_14 != NULL && y_14 != z_14)
        _fail(z_14);
      else
        y_14 = z_14;
    }
    t = k_8;
    f_15 = t;
    t_14 :
    if(match_cons(f_15, sym_TCons_2))
      {
        g_15 = ATgetArgument(f_15, 0);
        h_15 = ATgetArgument(f_15, 1);
        w_14 :
        if(match_cons(h_15, sym_TCons_2))
          {
            i_15 = ATgetArgument(h_15, 0);
            j_15 = ATgetArgument(h_15, 1);
            x_14 :
            if(match_cons(j_15, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(y_14)), not_null(g_15)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_15), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm p_15 = NULL;
  p_15 = t;
  t = SSL_ReadFromFile(not_null(p_15));
  return(t);
}
ATerm split_2 (ATerm t, ATerm c_60 (ATerm), ATerm d_60 (ATerm))
{
  ATerm x_15 = NULL;
  ATerm z_15 = NULL,b_16 = NULL;
  x_15 = t;
  {
    ATerm l_8;
    l_8 = t;
    {
      ATerm a_16 = NULL;
      t = not_null(x_15);
      t = c_60(t);
      a_16 = t;
      if(z_15 != NULL && z_15 != a_16)
        _fail(a_16);
      else
        z_15 = a_16;
    }
    t = l_8;
    {
      ATerm c_16 = NULL;
      t = not_null(x_15);
      t = d_60(t);
      c_16 = t;
      if(b_16 != NULL && b_16 != c_16)
        _fail(c_16);
      else
        b_16 = c_16;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_15), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_16), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm j_16 = NULL;
  ATerm u_8;
  u_8 = t;
  {
    ATerm v_8 = t;
    if(PushChoice()==0)
      {
        ATerm p_2 (ATerm t)
        {
          ATerm k_16 = NULL,l_16 = NULL;
          k_16 = t;
          h_16 :
          if(match_cons(k_16, sym_Input_1))
            {
              l_16 = ATgetArgument(k_16, 0);
              if(j_16 != NULL && j_16 != l_16)
                _fail(l_16);
              else
                j_16 = l_16;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, p_2);
        PopChoice();
      }
    else
      {
        t = v_8;
        {
          ATerm m_16 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          m_16 = t;
          if(j_16 != NULL && j_16 != m_16)
            _fail(m_16);
          else
            j_16 = m_16;
        }
      }
  }
  t = u_8;
  {
    ATerm r_2 (ATerm t)
    {
      t = not_null(j_16);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, r_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_16 = NULL;
  q_16 = t;
  p_16 :
  if(!(match_cons(q_16, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_46 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm w_8 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = w_8;
        {
          ATerm x_8 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = x_8;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, s_2);
  t = q_46(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_16 = NULL;
  s_16 = t;
  t = SSL_table_create(not_null(s_16));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_16 = NULL;
  w_16 = t;
  {
    ATerm y_8;
    y_8 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_16), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = y_8;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL;
  f_17 = t;
  d_17 :
  if(match_string(f_17, "register-usage-info"))
    t = register_usage_1(t, i_0);
  else
    {
      if(match_cons(f_17, sym_Cons_2))
        {
          g_17 = ATgetArgument(f_17, 0);
          h_17 = ATgetArgument(f_17, 1);
          e_17 :
          if(match_cons(h_17, sym_Cons_2))
            {
              i_17 = ATgetArgument(h_17, 0);
              j_17 = ATgetArgument(h_17, 1);
              {
                ATerm n_17 = NULL;
                ATerm z_8;
                z_8 = t;
                t = not_null(g_17);
                t = g_0(t);
                t = z_8;
                {
                  ATerm o_17 = NULL;
                  t = not_null(i_17);
                  t = h_0(t);
                  o_17 = t;
                  if(n_17 != NULL && n_17 != o_17)
                    _fail(o_17);
                  else
                    n_17 = o_17;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_17), not_null(j_17));
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm a_9 = t;
  if(PushChoice()==0)
    {
      ATerm t_2 (ATerm t)
      {
        ATerm i_18 = NULL;
        i_18 = t;
        u_17 :
        if(!(match_string(i_18, "-S")))
          {
            if(!(match_string(i_18, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, t_2, d_3, e_3);
      PopChoice();
    }
  else
    {
      t = a_9;
      {
        ATerm e_9 = t;
        if(PushChoice()==0)
          {
            ATerm m_3 (ATerm t)
            {
              ATerm j_18 = NULL;
              j_18 = t;
              y_17 :
              if(!(match_string(j_18, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm n_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm o_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, m_3, n_3, o_3);
            PopChoice();
          }
        else
          {
            t = e_9;
            {
              ATerm g_9 = t;
              if(PushChoice()==0)
                {
                  ATerm p_3 (ATerm t)
                  {
                    ATerm k_18 = NULL;
                    k_18 = t;
                    z_17 :
                    if(!(match_string(k_18, "-v")))
                      {
                        if(!(match_string(k_18, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm u_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm v_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, p_3, u_3, v_3);
                  PopChoice();
                }
              else
                {
                  t = g_9;
                  {
                    ATerm h_9 = t;
                    if(PushChoice()==0)
                      {
                        ATerm w_3 (ATerm t)
                        {
                          ATerm l_18 = NULL;
                          l_18 = t;
                          a_18 :
                          if(!(match_string(l_18, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm x_3 (ATerm t)
                        {
                          ATerm m_18 = NULL;
                          ATerm n_18 = NULL;
                          n_18 = t;
                          if(m_18 != NULL && m_18 != n_18)
                            _fail(n_18);
                          else
                            m_18 = n_18;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(m_18));
                          return(t);
                        }
                        ATerm g_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, w_3, x_3, g_4);
                        PopChoice();
                      }
                    else
                      {
                        t = h_9;
                        {
                          ATerm i_9 = t;
                          if(PushChoice()==0)
                            {
                              ATerm h_4 (ATerm t)
                              {
                                ATerm o_18 = NULL;
                                o_18 = t;
                                c_18 :
                                if(!(match_string(o_18, "-i")))
                                  {
                                    if(!(match_string(o_18, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm i_4 (ATerm t)
                              {
                                ATerm p_18 = NULL;
                                ATerm q_18 = NULL;
                                q_18 = t;
                                if(p_18 != NULL && p_18 != q_18)
                                  _fail(q_18);
                                else
                                  p_18 = q_18;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_18));
                                return(t);
                              }
                              ATerm j_4 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, h_4, i_4, j_4);
                              PopChoice();
                            }
                          else
                            {
                              t = i_9;
                              {
                                ATerm j_9 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm k_4 (ATerm t)
                                    {
                                      ATerm r_18 = NULL;
                                      r_18 = t;
                                      e_18 :
                                      if(!(match_string(r_18, "-o")))
                                        {
                                          if(!(match_string(r_18, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm m_4 (ATerm t)
                                    {
                                      ATerm s_18 = NULL;
                                      ATerm t_18 = NULL;
                                      t_18 = t;
                                      if(s_18 != NULL && s_18 != t_18)
                                        _fail(t_18);
                                      else
                                        s_18 = t_18;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(s_18));
                                      return(t);
                                    }
                                    ATerm p_4 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, k_4, m_4, p_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = j_9;
                                    {
                                      ATerm k_9 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm q_4 (ATerm t)
                                          {
                                            ATerm u_18 = NULL;
                                            u_18 = t;
                                            g_18 :
                                            if(!(match_string(u_18, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm r_4 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm s_4 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, q_4, r_4, s_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = k_9;
                                          {
                                            ATerm t_4 (ATerm t)
                                            {
                                              ATerm v_18 = NULL;
                                              v_18 = t;
                                              h_18 :
                                              if(!(match_string(v_18, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm v_4 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm z_4 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, t_4, v_4, z_4);
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
  ATerm a_19 = NULL;
  a_19 = t;
  t = SSL_table_destroy(not_null(a_19));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_19 = NULL;
  e_19 = t;
  t = SSL_exit(not_null(e_19));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm i_19 = NULL;
  i_19 = t;
  t = SSL_implode_string(not_null(i_19));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm c_59 (ATerm))
{
  ATerm l_19 (ATerm t)
  {
    ATerm l_9 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, l_19);
        PopChoice();
      }
    else
      {
        t = l_9;
        t = Nil_0(t);
        t = c_59(t);
      }
    return(t);
  }
  t = l_19(t);
  return(t);
}
ATerm concat_0 (ATerm t)
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
        ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
        o_19 = t;
        n_19 :
        if(match_cons(o_19, sym_Cons_2))
          {
            p_19 = ATgetArgument(o_19, 0);
            q_19 = ATgetArgument(o_19, 1);
            t = not_null(p_19);
            {
              ATerm b_5 (ATerm t)
              {
                t = not_null(q_19);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, b_5);
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
  ATerm w_19 = NULL;
  w_19 = t;
  t = SSL_explode_string(not_null(w_19));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm x_44 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_58 (ATerm))
{
  ATerm z_19 (ATerm t)
  {
    ATerm o_9 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = o_9;
        t = Cons_2(t, o_58, z_19);
      }
    return(t);
  }
  t = z_19(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
  f_20 = t;
  b_20 :
  if(match_cons(f_20, sym_TCons_2))
    {
      g_20 = ATgetArgument(f_20, 0);
      h_20 = ATgetArgument(f_20, 1);
      c_20 :
      if(match_cons(g_20, sym_Nil_0))
        {
          d_20 :
          if(match_cons(h_20, sym_TCons_2))
            {
              i_20 = ATgetArgument(h_20, 0);
              j_20 = ATgetArgument(h_20, 1);
              e_20 :
              if(match_cons(j_20, sym_TNil_0))
                t = not_null(i_20);
              else
                _fail(t);
            }
          else
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
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL;
  r_20 = t;
  n_20 :
  if(match_cons(r_20, sym_TCons_2))
    {
      s_20 = ATgetArgument(r_20, 0);
      v_20 = ATgetArgument(r_20, 1);
      o_20 :
      if(match_cons(s_20, sym_Cons_2))
        {
          t_20 = ATgetArgument(s_20, 0);
          u_20 = ATgetArgument(s_20, 1);
          p_20 :
          if(match_cons(v_20, sym_TCons_2))
            {
              w_20 = ATgetArgument(v_20, 0);
              x_20 = ATgetArgument(v_20, 1);
              q_20 :
              if(match_cons(x_20, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_20), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_20), not_null(w_20)), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm g_48 (ATerm), ATerm h_48 (ATerm))
{
  ATerm c_21 (ATerm t)
  {
    ATerm p_9 = t;
    if(PushChoice()==0)
      {
        t = g_48(t);
        t = c_21(t);
        PopChoice();
      }
    else
      {
        t = p_9;
        t = h_48(t);
      }
    return(t);
  }
  t = c_21(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm j_48 (ATerm))
{
  t = repeat_2(t, j_48, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm e_21 = NULL;
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_21), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm w_44 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm p_38 (ATerm))
{
  ATerm k_21 = NULL,l_21 = NULL;
  k_21 = t;
  j_21 :
  if(match_cons(k_21, sym_Program_1))
    {
      l_21 = ATgetArgument(k_21, 0);
      {
        ATerm n_21 = NULL;
        t = not_null(l_21);
        t = p_38(t);
        n_21 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_21));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm v_21 = NULL;
  ATerm g_5 (ATerm t)
  {
    ATerm h_5 (ATerm t)
    {
      ATerm w_21 = NULL;
      w_21 = t;
      if(v_21 != NULL && v_21 != w_21)
        _fail(w_21);
      else
        v_21 = w_21;
      return(t);
    }
    t = Program_1(t, h_5);
    return(t);
  }
  t = option_defined_1(t, g_5);
  {
    ATerm i_5 (ATerm t)
    {
      ATerm x_21 = NULL;
      ATerm y_21 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm j_5 (ATerm t)
        {
          t = not_null(v_21);
          return(t);
        }
        t = short_description_1(t, j_5);
        t = concat_strings_0(t);
        y_21 = t;
        if(x_21 != NULL && x_21 != y_21)
          _fail(y_21);
        else
          x_21 = y_21;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_21), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, i_5);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm k_5 (ATerm t)
      {
        ATerm z_21 = NULL;
        z_21 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_21), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, k_5);
      {
        ATerm m_5 (ATerm t)
        {
          ATerm b_22 = NULL;
          ATerm c_22 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm n_5 (ATerm t)
            {
              t = not_null(v_21);
              return(t);
            }
            t = long_description_1(t, n_5);
            t = concat_strings_0(t);
            c_22 = t;
            if(b_22 != NULL && b_22 != c_22)
              _fail(c_22);
            else
              b_22 = c_22;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_22), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, m_5);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL;
  l_22 = t;
  i_22 :
  if(match_cons(l_22, sym_TCons_2))
    {
      m_22 = ATgetArgument(l_22, 0);
      n_22 = ATgetArgument(l_22, 1);
      j_22 :
      if(match_cons(n_22, sym_TCons_2))
        {
          o_22 = ATgetArgument(n_22, 0);
          p_22 = ATgetArgument(n_22, 1);
          k_22 :
          if(match_cons(p_22, sym_TNil_0))
            {
              ATerm q_9;
              q_9 = t;
              t = SSL_printnl(not_null(m_22), not_null(o_22));
              t = q_9;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm q_38 (ATerm))
{
  ATerm w_22 = NULL,x_22 = NULL;
  w_22 = t;
  v_22 :
  if(match_cons(w_22, sym_Undefined_1))
    {
      x_22 = ATgetArgument(w_22, 0);
      {
        ATerm z_22 = NULL;
        t = not_null(x_22);
        t = q_38(t);
        z_22 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(z_22));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm w_58 (ATerm))
{
  ATerm d_23 (ATerm t)
  {
    ATerm r_9 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, w_58, _id);
        PopChoice();
      }
    else
      {
        t = r_9;
        t = Cons_2(t, _id, d_23);
      }
    return(t);
  }
  t = d_23(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_45 (ATerm))
{
  t = fetch_1(t, v_45);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_23 = NULL;
  f_23 = t;
  e_23 :
  if(!(match_cons(f_23, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm u_60 (ATerm))
{
  ATerm v_9 = t;
  if(PushChoice()==0)
    {
      t = u_60(t);
      PopChoice();
    }
  else
    t = v_9;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
  k_23 = t;
  h_23 :
  if(match_cons(k_23, sym_TCons_2))
    {
      l_23 = ATgetArgument(k_23, 0);
      m_23 = ATgetArgument(k_23, 1);
      i_23 :
      if(match_cons(m_23, sym_TCons_2))
        {
          n_23 = ATgetArgument(m_23, 0);
          o_23 = ATgetArgument(m_23, 1);
          j_23 :
          if(match_cons(o_23, sym_TNil_0))
            t = SSL_table_get(not_null(l_23), not_null(n_23));
          else
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
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
  a_24 = t;
  w_23 :
  if(match_cons(a_24, sym_TCons_2))
    {
      b_24 = ATgetArgument(a_24, 0);
      c_24 = ATgetArgument(a_24, 1);
      x_23 :
      if(match_cons(c_24, sym_TCons_2))
        {
          d_24 = ATgetArgument(c_24, 0);
          e_24 = ATgetArgument(c_24, 1);
          y_23 :
          if(match_cons(e_24, sym_TCons_2))
            {
              f_24 = ATgetArgument(e_24, 0);
              g_24 = ATgetArgument(e_24, 1);
              z_23 :
              if(match_cons(g_24, sym_TNil_0))
                {
                  ATerm w_9;
                  w_9 = t;
                  {
                    ATerm k_24 = NULL;
                    ATerm l_24 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_24), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm x_9 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = x_9;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      l_24 = t;
                      if(k_24 != NULL && k_24 != l_24)
                        _fail(l_24);
                      else
                        k_24 = l_24;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_24), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_24), not_null(k_24)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = w_9;
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm b_45 (ATerm))
{
  ATerm p_24 = NULL;
  ATerm q_24 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = b_45(t);
  q_24 = t;
  if(p_24 != NULL && p_24 != q_24)
    _fail(q_24);
  else
    p_24 = q_24;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_24), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
  w_24 = t;
  v_24 :
  if(match_string(w_24, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(match_cons(w_24, sym_Cons_2))
        {
          x_24 = ATgetArgument(w_24, 0);
          y_24 = ATgetArgument(w_24, 1);
          {
            ATerm b_25 = NULL;
            ATerm z_9;
            z_9 = t;
            t = not_null(x_24);
            t = d_0(t);
            t = z_9;
            {
              ATerm c_25 = NULL;
              t = (ATerm) ATmakeAppl(sym_TNil_0);
              t = e_0(t);
              c_25 = t;
              if(b_25 != NULL && b_25 != c_25)
                _fail(c_25);
              else
                b_25 = c_25;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_25), not_null(y_24));
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm h_25 = NULL;
    h_25 = t;
    g_25 :
    if(!(match_string(h_25, "--help")))
      {
        if(!(match_string(h_25, "-h")))
          {
            if(!(match_string(h_25, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, o_5, p_5, q_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
  k_25 = t;
  j_25 :
  if(match_cons(k_25, sym_Cons_2))
    {
      l_25 = ATgetArgument(k_25, 0);
      m_25 = ATgetArgument(k_25, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_25)), not_null(m_25));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_44 (ATerm))
{
  ATerm b_10;
  b_10 = t;
  {
    ATerm r_5 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = z_44(t);
      return(t);
    }
    t = try_1(t, r_5);
  }
  t = b_10;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm r_25 = NULL;
      r_25 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_25));
      return(t);
    }
    ATerm t_5 (ATerm t)
    {
      ATerm c_10 = t;
      if(PushChoice()==0)
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
              t = z_44(t);
              t = Cons_2(t, _id, t_5);
            }
          PopChoice();
        }
      else
        {
          t = c_10;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_5, t_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
  ATerm e_10;
  e_10 = t;
  {
    ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
    d_26 = t;
    w_25 :
    if(match_cons(d_26, sym_TCons_2))
      {
        e_26 = ATgetArgument(d_26, 0);
        f_26 = ATgetArgument(d_26, 1);
        x_25 :
        if(match_cons(f_26, sym_TCons_2))
          {
            g_26 = ATgetArgument(f_26, 0);
            h_26 = ATgetArgument(f_26, 1);
            y_25 :
            if(match_cons(h_26, sym_TCons_2))
              {
                i_26 = ATgetArgument(h_26, 0);
                j_26 = ATgetArgument(h_26, 1);
                z_25 :
                if(match_cons(j_26, sym_TNil_0))
                  {
                    if(a_26 != NULL && a_26 != e_26)
                      _fail(e_26);
                    else
                      a_26 = e_26;
                    if(b_26 != NULL && b_26 != g_26)
                      _fail(g_26);
                    else
                      b_26 = g_26;
                    if(c_26 != NULL && c_26 != i_26)
                      _fail(i_26);
                    else
                      c_26 = i_26;
                    t = SSL_table_put(not_null(a_26), not_null(b_26), not_null(c_26));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = e_10;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_44 (ATerm))
{
  ATerm m_26 = NULL;
  ATerm f_10;
  f_10 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = f_10;
  {
    ATerm z_5 (ATerm t)
    {
      ATerm g_10 = t;
      if(PushChoice()==0)
        {
          t = y_44(t);
          PopChoice();
        }
      else
        {
          t = g_10;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, z_5);
    {
      ATerm c_6 (ATerm t)
      {
        ATerm k_10 = t;
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
            t = k_10;
            {
              ATerm f_6 (ATerm t)
              {
                ATerm i_6 (ATerm t)
                {
                  ATerm n_26 = NULL;
                  n_26 = t;
                  if(m_26 != NULL && m_26 != n_26)
                    _fail(n_26);
                  else
                    m_26 = n_26;
                  return(t);
                }
                t = Undefined_1(t, i_6);
                return(t);
              }
              t = option_defined_1(t, f_6);
              {
                ATerm m_10;
                m_10 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_26), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = m_10;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, c_6);
      {
        ATerm n_10;
        n_10 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = n_10;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm f_46 (ATerm), ATerm g_46 (ATerm), ATerm h_46 (ATerm))
{
  ATerm j_6 (ATerm t)
  {
    ATerm o_10 = t;
    if(PushChoice()==0)
      {
        t = g_46(t);
        PopChoice();
      }
    else
      {
        t = o_10;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, j_6);
  t = store_options_0(t);
  {
    ATerm r_10 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, h_46);
        PopChoice();
      }
    else
      {
        t = r_10;
        {
          ATerm s_10 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, f_46);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = s_10;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm a_46 (ATerm), ATerm b_46 (ATerm))
{
  t = iowrap_3(t, a_46, b_46, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm x_45 (ATerm))
{
  ATerm k_6 (ATerm t)
  {
    ATerm l_6 (ATerm t)
    {
      t = TCons_2(t, x_45, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, l_6);
    return(t);
  }
  t = iowrap_2(t, k_6, _fail);
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    ATerm n_6 (ATerm t)
    {
      ATerm p_6 (ATerm t)
      {
        ATerm u_6 (ATerm t)
        {
          t = Strategies_1(t, rename_sdefs_0);
          return(t);
        }
        t = Cons_2(t, u_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, p_6);
      return(t);
    }
    t = Specification_1(t, n_6);
    return(t);
  }
  t = iowrap_1(t, m_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_defs_0(t);
  return(t);
}
