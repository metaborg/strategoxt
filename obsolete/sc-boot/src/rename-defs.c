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
ATerm topdown_1 (ATerm, ATerm u_60 (ATerm));
ATerm assert_1 (ATerm, ATerm s_43 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm u_43 (ATerm));
ATerm HoArg_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm i_0 (ATerm));
ATerm escape_1 (ATerm, ATerm z_48 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm NameMod_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm c_53 (ATerm), ATerm d_53 (ATerm), ATerm e_53 (ATerm));
ATerm length_0 (ATerm);
ATerm RenameSDef_0 (ATerm);
ATerm rename_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm f_41 (ATerm));
ATerm Cons_2 (ATerm, ATerm k_43 (ATerm), ATerm l_43 (ATerm));
ATerm Specification_1 (ATerm, ATerm h_41 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm g_43 (ATerm), ATerm h_43 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm p_46 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm r_59 (ATerm), ATerm s_59 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm o_46 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_58 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm v_44 (ATerm));
ATerm map_1 (ATerm, ATerm d_58 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm a_48 (ATerm), ATerm b_48 (ATerm));
ATerm repeat_1 (ATerm, ATerm d_48 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm u_44 (ATerm));
ATerm Program_1 (ATerm, ATerm o_38 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm p_38 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_58 (ATerm));
ATerm option_defined_1 (ATerm, ATerm t_45 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm j_60 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_44 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_44 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_44 (ATerm));
ATerm iowrap_3 (ATerm, ATerm d_46 (ATerm), ATerm e_46 (ATerm), ATerm f_46 (ATerm));
ATerm iowrap_2 (ATerm, ATerm y_45 (ATerm), ATerm z_45 (ATerm));
ATerm iowrap_1 (ATerm, ATerm v_45 (ATerm));
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
              ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL;
              t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(l_1), not_null(j_1));
              {
                ATerm j_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
                  return(t);
                }
                t = rewrite_1(t, j_0);
                p_1 = t;
                d_1 :
                if(match_cons(p_1, sym_Defined_2))
                  {
                    q_1 = ATgetArgument(p_1, 0);
                    r_1 = ATgetArgument(p_1, 1);
                    e_1 :
                    if(match_string(q_1, "a_0"))
                      t = not_null(r_1);
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
            ATerm h_2 = NULL;
            t = not_null(e_2);
            {
              ATerm j_2 = NULL;
              t = length_0(t);
              h_2 = t;
              {
                ATerm j_6 = t;
                if(PushChoice()==0)
                  {
                    ATerm k_2 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_2), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = RenameVar_0(t);
                    k_2 = t;
                    if(j_2 != NULL && j_2 != k_2)
                      _fail(k_2);
                    else
                      j_2 = k_2;
                    PopChoice();
                  }
                else
                  {
                    t = j_6;
                    {
                      ATerm l_2 = NULL;
                      t = not_null(d_2);
                      t = HoArg_0(t);
                      l_2 = t;
                      if(j_2 != NULL && j_2 != l_2)
                        _fail(l_2);
                      else
                        j_2 = l_2;
                    }
                  }
                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(j_2)), not_null(e_2));
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
ATerm topdown_1 (ATerm t, ATerm u_60 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    t = u_60(t);
    t = _all(t, q_2);
    return(t);
  }
  t = q_2(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm s_43 (ATerm))
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
              ATerm k_6;
              k_6 = t;
              {
                ATerm i_3 = NULL;
                ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL;
                t = s_43(t);
                i_3 = t;
                if(f_3 != NULL && f_3 != i_3)
                  _fail(i_3);
                else
                  f_3 = i_3;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_3), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm l_6 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_3), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = l_6;
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
              t = k_6;
            }
          else
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
ATerm rewrite_1 (ATerm t, ATerm u_43 (ATerm))
{
  ATerm l_4 = NULL;
  ATerm n_4 = NULL;
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = u_43(t);
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_4), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_4), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = table_lookup_0(t);
  return(t);
}
ATerm HoArg_0 (ATerm t)
{
  ATerm y_4 = NULL;
  y_4 = t;
  {
    ATerm m_6 = t;
    if(PushChoice()==0)
      {
        ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL;
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
          if(match_cons(a_5, sym_Defined_2))
            {
              b_5 = ATgetArgument(a_5, 0);
              c_5 = ATgetArgument(a_5, 1);
              v_4 :
              if(match_string(b_5, "b_0"))
                t = not_null(c_5);
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
        t = m_6;
        {
          ATerm f_5 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(y_4));
          {
            ATerm l_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
              return(t);
            }
            t = rewrite_1(t, l_0);
            f_5 = t;
            x_4 :
            if(match_cons(f_5, sym_Undefined_0))
              _fail(t);
            else
              _fail(t);
          }
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
ATerm Cify_1 (ATerm t, ATerm i_0 (ATerm))
{
  ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
  w_5 = t;
  u_5 :
  if(match_cons(w_5, sym_Cons_2))
    {
      x_5 = ATgetArgument(w_5, 0);
      y_5 = ATgetArgument(w_5, 1);
      v_5 :
      if(match_int(x_5, 39))
        {
          ATerm a_6 = NULL;
          t = not_null(y_5);
          t = i_0(t);
          a_6 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(95), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(112), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(95), not_null(a_6))));
        }
      else
        {
          if(match_int(x_5, 45))
            {
              ATerm d_6 = NULL;
              t = not_null(y_5);
              t = i_0(t);
              d_6 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(95), not_null(d_6));
            }
          else
            {
              if(match_int(x_5, 95))
                {
                  ATerm g_6 = NULL;
                  t = not_null(y_5);
                  t = i_0(t);
                  g_6 = t;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(95), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(95), not_null(g_6)));
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
ATerm escape_1 (ATerm t, ATerm z_48 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm o_6 (ATerm t)
    {
      ATerm n_6 = t;
      if(PushChoice()==0)
        {
          t = z_48(t, o_6);
          PopChoice();
        }
      else
        {
          t = n_6;
          {
            ATerm p_6 = t;
            if(PushChoice()==0)
              {
                t = Cons_2(t, _id, o_6);
                PopChoice();
              }
            else
              {
                t = p_6;
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
              ATerm u_6 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(c_7), not_null(e_7));
                  PopChoice();
                }
              else
                {
                  t = u_6;
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
ATerm foldr_3 (ATerm t, ATerm c_53 (ATerm), ATerm d_53 (ATerm), ATerm e_53 (ATerm))
{
  ATerm v_6 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = c_53(t);
      PopChoice();
    }
  else
    {
      t = v_6;
      {
        ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
        n_7 = t;
        m_7 :
        if(match_cons(n_7, sym_Cons_2))
          {
            o_7 = ATgetArgument(n_7, 0);
            p_7 = ATgetArgument(n_7, 1);
            {
              ATerm s_7 = NULL;
              t = not_null(o_7);
              {
                ATerm u_7 = NULL;
                t = e_53(t);
                s_7 = t;
                t = not_null(p_7);
                t = foldr_3(t, c_53, d_53, e_53);
                u_7 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_7), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = d_53(t);
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
        ATerm m_8 = NULL;
        t = not_null(h_8);
        {
          ATerm o_8 = NULL;
          t = length_0(t);
          m_8 = t;
          t = not_null(g_8);
          t = try_1(t, NameMod_0);
          {
            ATerm q_8 = NULL;
            t = cify_0(t);
            o_8 = t;
            t = not_null(m_8);
            {
              ATerm s_8 = NULL;
              t = int_to_string_0(t);
              q_8 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_8), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("_", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_8), (ATerm) ATmakeAppl(sym_Nil_0))));
              t = concat_strings_0(t);
              s_8 = t;
              {
                ATerm w_6;
                w_6 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(m_8), not_null(g_8)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue)), not_null(s_8)), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm o_0 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
                    return(t);
                  }
                  t = assert_1(t, o_0);
                }
                t = w_6;
                {
                  ATerm x_6 = t;
                  if(PushChoice()==0)
                    {
                      t = not_null(g_8);
                      t = HoArg_0(t);
                      {
                        ATerm g_7;
                        g_7 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(g_8)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Undefined_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                        {
                          ATerm p_0 (ATerm t)
                          {
                            t = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
                            return(t);
                          }
                          t = assert_1(t, p_0);
                        }
                        t = g_7;
                      }
                      PopChoice();
                    }
                  else
                    {
                      t = x_6;
                      {
                        ATerm h_7;
                        h_7 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(g_8)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue)), not_null(s_8)), (ATerm) ATmakeAppl(sym_TNil_0)));
                        {
                          ATerm q_0 (ATerm t)
                          {
                            t = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
                            return(t);
                          }
                          t = assert_1(t, q_0);
                        }
                        t = h_7;
                      }
                    }
                  t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(s_8), not_null(h_8), not_null(i_8));
                }
              }
            }
          }
        }
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
ATerm Strategies_1 (ATerm t, ATerm f_41 (ATerm))
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
        t = f_41(t);
        f_9 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(f_9));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_43 (ATerm), ATerm l_43 (ATerm))
{
  ATerm s_9 = NULL,u_9 = NULL,v_9 = NULL;
  s_9 = t;
  r_9 :
  if(match_cons(s_9, sym_Cons_2))
    {
      u_9 = ATgetArgument(s_9, 0);
      v_9 = ATgetArgument(s_9, 1);
      {
        ATerm y_9 = NULL;
        t = not_null(u_9);
        {
          ATerm a_10 = NULL;
          t = k_43(t);
          y_9 = t;
          t = not_null(v_9);
          t = l_43(t);
          a_10 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_9), not_null(a_10));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm h_41 (ATerm))
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
        t = h_41(t);
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
ATerm TCons_2 (ATerm t, ATerm g_43 (ATerm), ATerm h_43 (ATerm))
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
  v_10 = t;
  u_10 :
  if(match_cons(v_10, sym_TCons_2))
    {
      w_10 = ATgetArgument(v_10, 0);
      x_10 = ATgetArgument(v_10, 1);
      {
        ATerm h_11 = NULL;
        t = not_null(w_10);
        {
          ATerm j_11 = NULL;
          t = g_43(t);
          h_11 = t;
          t = not_null(x_10);
          t = h_43(t);
          j_11 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_11), not_null(j_11));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm t_11 = NULL;
  ATerm i_7;
  i_7 = t;
  {
    ATerm t_0 (ATerm t)
    {
      ATerm u_11 = NULL,v_11 = NULL;
      u_11 = t;
      s_11 :
      if(match_cons(u_11, sym_Program_1))
        {
          v_11 = ATgetArgument(u_11, 0);
          if(t_11 != NULL && t_11 != v_11)
            _fail(v_11);
          else
            t_11 = v_11;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, t_0);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_11), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = i_7;
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
      ATerm j_7 = t;
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
        t = j_7;
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
          b_12 :
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
          ATerm s_1 (ATerm t)
          {
            ATerm j_12 = NULL,l_12 = NULL;
            j_12 = t;
            d_12 :
            if(match_cons(j_12, sym_Program_1))
              {
                l_12 = ATgetArgument(j_12, 0);
                if(e_12 != NULL && e_12 != l_12)
                  _fail(l_12);
                else
                  e_12 = l_12;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, s_1);
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
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,t_13 = NULL,u_13 = NULL;
  n_13 = t;
  b_13 :
  if(match_cons(n_13, sym_TCons_2))
    {
      o_13 = ATgetArgument(n_13, 0);
      p_13 = ATgetArgument(n_13, 1);
      c_13 :
      if(match_cons(p_13, sym_TCons_2))
        {
          t_13 = ATgetArgument(p_13, 0);
          u_13 = ATgetArgument(p_13, 1);
          m_13 :
          if(match_cons(u_13, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(o_13), not_null(t_13));
          else
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
  ATerm n_14 = NULL;
  ATerm k_7;
  k_7 = t;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm l_7 = t;
      if(PushChoice()==0)
        {
          ATerm v_1 (ATerm t)
          {
            ATerm o_14 = NULL,p_14 = NULL;
            o_14 = t;
            k_14 :
            if(match_cons(o_14, sym_Output_1))
              {
                p_14 = ATgetArgument(o_14, 0);
                if(n_14 != NULL && n_14 != p_14)
                  _fail(p_14);
                else
                  n_14 = p_14;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, v_1);
          PopChoice();
        }
      else
        {
          t = l_7;
          {
            ATerm q_14 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            q_14 = t;
            if(n_14 != NULL && n_14 != q_14)
              _fail(q_14);
            else
              n_14 = q_14;
          }
        }
      return(t);
    }
    ATerm u_1 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, t_1, u_1);
  }
  t = k_7;
  {
    ATerm w_1 (ATerm t)
    {
      ATerm x_1 (ATerm t)
      {
        ATerm y_1 (ATerm t)
        {
          t = not_null(n_14);
          return(t);
        }
        t = split_2(t, y_1, _id);
        return(t);
      }
      t = TCons_2(t, x_1, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, w_1);
    {
      ATerm q_7 = t;
      if(PushChoice()==0)
        {
          ATerm f_2 (ATerm t)
          {
            ATerm i_2 (ATerm t)
            {
              ATerm r_14 = NULL;
              r_14 = t;
              m_14 :
              if(!(match_cons(r_14, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, i_2);
            return(t);
          }
          ATerm g_2 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, f_2, g_2);
          PopChoice();
        }
      else
        {
          t = q_7;
          {
            ATerm m_2 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, m_2);
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
ATerm apply_strategy_1 (ATerm t, ATerm p_46 (ATerm))
{
  ATerm g_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL;
  ATerm r_7;
  r_7 = t;
  t = dtime_0(t);
  t = r_7;
  t = p_46(t);
  {
    ATerm t_7;
    t_7 = t;
    {
      ATerm h_15 = NULL;
      t = dtime_0(t);
      h_15 = t;
      if(g_15 != NULL && g_15 != h_15)
        _fail(h_15);
      else
        g_15 = h_15;
    }
    t = t_7;
    i_15 = t;
    y_14 :
    if(match_cons(i_15, sym_TCons_2))
      {
        j_15 = ATgetArgument(i_15, 0);
        k_15 = ATgetArgument(i_15, 1);
        e_15 :
        if(match_cons(k_15, sym_TCons_2))
          {
            l_15 = ATgetArgument(k_15, 0);
            m_15 = ATgetArgument(k_15, 1);
            f_15 :
            if(match_cons(m_15, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(g_15)), not_null(j_15)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_15), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm s_15 = NULL;
  s_15 = t;
  t = SSL_ReadFromFile(not_null(s_15));
  return(t);
}
ATerm split_2 (ATerm t, ATerm r_59 (ATerm), ATerm s_59 (ATerm))
{
  ATerm a_16 = NULL;
  ATerm c_16 = NULL;
  a_16 = t;
  {
    ATerm e_16 = NULL;
    t = r_59(t);
    c_16 = t;
    t = not_null(a_16);
    t = s_59(t);
    e_16 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_16), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm m_16 = NULL;
  ATerm v_7;
  v_7 = t;
  {
    ATerm w_7 = t;
    if(PushChoice()==0)
      {
        ATerm n_2 (ATerm t)
        {
          ATerm n_16 = NULL,o_16 = NULL;
          n_16 = t;
          k_16 :
          if(match_cons(n_16, sym_Input_1))
            {
              o_16 = ATgetArgument(n_16, 0);
              if(m_16 != NULL && m_16 != o_16)
                _fail(o_16);
              else
                m_16 = o_16;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, n_2);
        PopChoice();
      }
    else
      {
        t = w_7;
        {
          ATerm p_16 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          p_16 = t;
          if(m_16 != NULL && m_16 != p_16)
            _fail(p_16);
          else
            m_16 = p_16;
        }
      }
  }
  t = v_7;
  {
    ATerm o_2 (ATerm t)
    {
      t = not_null(m_16);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, o_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_16 = NULL;
  t_16 = t;
  s_16 :
  if(!(match_cons(t_16, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm o_46 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    ATerm x_7 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = x_7;
        {
          ATerm y_7 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = y_7;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, p_2);
  t = o_46(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_16 = NULL;
  v_16 = t;
  t = SSL_table_create(not_null(v_16));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_16 = NULL;
  z_16 = t;
  {
    ATerm z_7;
    z_7 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_16), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = z_7;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  m_17 = t;
  g_17 :
  if(match_cons(m_17, sym_Cons_2))
    {
      i_17 = ATgetArgument(m_17, 0);
      j_17 = ATgetArgument(m_17, 1);
      h_17 :
      if(match_cons(j_17, sym_Cons_2))
        {
          k_17 = ATgetArgument(j_17, 0);
          l_17 = ATgetArgument(j_17, 1);
          {
            ATerm q_17 = NULL;
            t = not_null(i_17);
            t = f_0(t);
            t = not_null(k_17);
            t = g_0(t);
            q_17 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_17), not_null(l_17));
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(m_17, "register-usage-info"))
        t = register_usage_1(t, h_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm a_8 = t;
  if(PushChoice()==0)
    {
      ATerm r_2 (ATerm t)
      {
        ATerm l_18 = NULL;
        l_18 = t;
        v_17 :
        if(!(match_string(l_18, "-S")))
          {
            if(!(match_string(l_18, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm s_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm t_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, r_2, s_2, t_2);
      PopChoice();
    }
  else
    {
      t = a_8;
      {
        ATerm b_8 = t;
        if(PushChoice()==0)
          {
            ATerm d_3 (ATerm t)
            {
              ATerm m_18 = NULL;
              m_18 = t;
              w_17 :
              if(!(match_string(m_18, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm e_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm m_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, d_3, e_3, m_3);
            PopChoice();
          }
        else
          {
            t = b_8;
            {
              ATerm c_8 = t;
              if(PushChoice()==0)
                {
                  ATerm n_3 (ATerm t)
                  {
                    ATerm n_18 = NULL;
                    n_18 = t;
                    x_17 :
                    if(!(match_string(n_18, "-v")))
                      {
                        if(!(match_string(n_18, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm o_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm p_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, n_3, o_3, p_3);
                  PopChoice();
                }
              else
                {
                  t = c_8;
                  {
                    ATerm d_8 = t;
                    if(PushChoice()==0)
                      {
                        ATerm u_3 (ATerm t)
                        {
                          ATerm o_18 = NULL;
                          o_18 = t;
                          a_18 :
                          if(!(match_string(o_18, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm v_3 (ATerm t)
                        {
                          ATerm p_18 = NULL;
                          p_18 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(p_18));
                          return(t);
                        }
                        ATerm w_3 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, u_3, v_3, w_3);
                        PopChoice();
                      }
                    else
                      {
                        t = d_8;
                        {
                          ATerm j_8 = t;
                          if(PushChoice()==0)
                            {
                              ATerm x_3 (ATerm t)
                              {
                                ATerm r_18 = NULL;
                                r_18 = t;
                                f_18 :
                                if(!(match_string(r_18, "-i")))
                                  {
                                    if(!(match_string(r_18, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm g_4 (ATerm t)
                              {
                                ATerm s_18 = NULL;
                                s_18 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_18));
                                return(t);
                              }
                              ATerm h_4 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, x_3, g_4, h_4);
                              PopChoice();
                            }
                          else
                            {
                              t = j_8;
                              {
                                ATerm k_8 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm i_4 (ATerm t)
                                    {
                                      ATerm u_18 = NULL;
                                      u_18 = t;
                                      h_18 :
                                      if(!(match_string(u_18, "-o")))
                                        {
                                          if(!(match_string(u_18, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm j_4 (ATerm t)
                                    {
                                      ATerm v_18 = NULL;
                                      v_18 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_18));
                                      return(t);
                                    }
                                    ATerm k_4 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, i_4, j_4, k_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = k_8;
                                    {
                                      ATerm l_8 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm m_4 (ATerm t)
                                          {
                                            ATerm x_18 = NULL;
                                            x_18 = t;
                                            j_18 :
                                            if(!(match_string(x_18, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm o_4 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm p_4 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, m_4, o_4, p_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = l_8;
                                          {
                                            ATerm q_4 (ATerm t)
                                            {
                                              ATerm y_18 = NULL;
                                              y_18 = t;
                                              k_18 :
                                              if(!(match_string(y_18, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm r_4 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm s_4 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, q_4, r_4, s_4);
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
  ATerm d_19 = NULL;
  d_19 = t;
  t = SSL_table_destroy(not_null(d_19));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_19 = NULL;
  h_19 = t;
  t = SSL_exit(not_null(h_19));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm l_19 = NULL;
  l_19 = t;
  t = SSL_implode_string(not_null(l_19));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_58 (ATerm))
{
  ATerm o_19 (ATerm t)
  {
    ATerm n_8 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, o_19);
        PopChoice();
      }
    else
      {
        t = n_8;
        t = Nil_0(t);
        t = r_58(t);
      }
    return(t);
  }
  t = o_19(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm p_8 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = p_8;
      {
        ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
        r_19 = t;
        q_19 :
        if(match_cons(r_19, sym_Cons_2))
          {
            s_19 = ATgetArgument(r_19, 0);
            t_19 = ATgetArgument(r_19, 1);
            t = not_null(s_19);
            {
              ATerm t_4 (ATerm t)
              {
                t = not_null(t_19);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, t_4);
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
  ATerm z_19 = NULL;
  z_19 = t;
  t = SSL_explode_string(not_null(z_19));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm v_44 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_58 (ATerm))
{
  ATerm c_20 (ATerm t)
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
        t = Cons_2(t, d_58, c_20);
      }
    return(t);
  }
  t = c_20(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
  i_20 = t;
  e_20 :
  if(match_cons(i_20, sym_TCons_2))
    {
      j_20 = ATgetArgument(i_20, 0);
      k_20 = ATgetArgument(i_20, 1);
      f_20 :
      if(match_cons(j_20, sym_Nil_0))
        {
          g_20 :
          if(match_cons(k_20, sym_TCons_2))
            {
              l_20 = ATgetArgument(k_20, 0);
              m_20 = ATgetArgument(k_20, 1);
              h_20 :
              if(match_cons(m_20, sym_TNil_0))
                t = not_null(l_20);
              else
                _fail(t);
            }
          else
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
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL;
  u_20 = t;
  q_20 :
  if(match_cons(u_20, sym_TCons_2))
    {
      v_20 = ATgetArgument(u_20, 0);
      y_20 = ATgetArgument(u_20, 1);
      r_20 :
      if(match_cons(v_20, sym_Cons_2))
        {
          w_20 = ATgetArgument(v_20, 0);
          x_20 = ATgetArgument(v_20, 1);
          s_20 :
          if(match_cons(y_20, sym_TCons_2))
            {
              z_20 = ATgetArgument(y_20, 0);
              a_21 = ATgetArgument(y_20, 1);
              t_20 :
              if(match_cons(a_21, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_20), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_20), not_null(z_20)), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm a_48 (ATerm), ATerm b_48 (ATerm))
{
  ATerm f_21 (ATerm t)
  {
    ATerm t_8 = t;
    if(PushChoice()==0)
      {
        t = a_48(t);
        t = f_21(t);
        PopChoice();
      }
    else
      {
        t = t_8;
        t = b_48(t);
      }
    return(t);
  }
  t = f_21(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm d_48 (ATerm))
{
  t = repeat_2(t, d_48, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm h_21 = NULL;
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_21), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm u_44 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm o_38 (ATerm))
{
  ATerm n_21 = NULL,o_21 = NULL;
  n_21 = t;
  m_21 :
  if(match_cons(n_21, sym_Program_1))
    {
      o_21 = ATgetArgument(n_21, 0);
      {
        ATerm q_21 = NULL;
        t = not_null(o_21);
        t = o_38(t);
        q_21 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_21));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm y_21 = NULL;
  ATerm w_4 (ATerm t)
  {
    ATerm z_4 (ATerm t)
    {
      ATerm z_21 = NULL;
      z_21 = t;
      if(y_21 != NULL && y_21 != z_21)
        _fail(z_21);
      else
        y_21 = z_21;
      return(t);
    }
    t = Program_1(t, z_4);
    return(t);
  }
  t = option_defined_1(t, w_4);
  {
    ATerm d_5 (ATerm t)
    {
      ATerm a_22 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm e_5 (ATerm t)
        {
          t = not_null(y_21);
          return(t);
        }
        t = short_description_1(t, e_5);
        t = concat_strings_0(t);
        a_22 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_22), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, d_5);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm g_5 (ATerm t)
      {
        ATerm c_22 = NULL;
        c_22 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_22), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, g_5);
      {
        ATerm h_5 (ATerm t)
        {
          ATerm e_22 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm i_5 (ATerm t)
            {
              t = not_null(y_21);
              return(t);
            }
            t = long_description_1(t, i_5);
            t = concat_strings_0(t);
            e_22 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_22), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = printnl_0(t);
          }
          return(t);
        }
        t = try_1(t, h_5);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL;
  o_22 = t;
  l_22 :
  if(match_cons(o_22, sym_TCons_2))
    {
      p_22 = ATgetArgument(o_22, 0);
      q_22 = ATgetArgument(o_22, 1);
      m_22 :
      if(match_cons(q_22, sym_TCons_2))
        {
          r_22 = ATgetArgument(q_22, 0);
          s_22 = ATgetArgument(q_22, 1);
          n_22 :
          if(match_cons(s_22, sym_TNil_0))
            {
              ATerm u_8;
              u_8 = t;
              t = SSL_printnl(not_null(p_22), not_null(r_22));
              t = u_8;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm p_38 (ATerm))
{
  ATerm z_22 = NULL,a_23 = NULL;
  z_22 = t;
  y_22 :
  if(match_cons(z_22, sym_Undefined_1))
    {
      a_23 = ATgetArgument(z_22, 0);
      {
        ATerm c_23 = NULL;
        t = not_null(a_23);
        t = p_38(t);
        c_23 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_23));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm l_58 (ATerm))
{
  ATerm g_23 (ATerm t)
  {
    ATerm v_8 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, l_58, _id);
        PopChoice();
      }
    else
      {
        t = v_8;
        t = Cons_2(t, _id, g_23);
      }
    return(t);
  }
  t = g_23(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm t_45 (ATerm))
{
  t = fetch_1(t, t_45);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_23 = NULL;
  i_23 = t;
  h_23 :
  if(!(match_cons(i_23, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm j_60 (ATerm))
{
  ATerm w_8 = t;
  if(PushChoice()==0)
    {
      t = j_60(t);
      PopChoice();
    }
  else
    t = w_8;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL;
  n_23 = t;
  k_23 :
  if(match_cons(n_23, sym_TCons_2))
    {
      o_23 = ATgetArgument(n_23, 0);
      p_23 = ATgetArgument(n_23, 1);
      l_23 :
      if(match_cons(p_23, sym_TCons_2))
        {
          q_23 = ATgetArgument(p_23, 0);
          r_23 = ATgetArgument(p_23, 1);
          m_23 :
          if(match_cons(r_23, sym_TNil_0))
            t = SSL_table_get(not_null(o_23), not_null(q_23));
          else
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
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL;
  d_24 = t;
  z_23 :
  if(match_cons(d_24, sym_TCons_2))
    {
      e_24 = ATgetArgument(d_24, 0);
      f_24 = ATgetArgument(d_24, 1);
      a_24 :
      if(match_cons(f_24, sym_TCons_2))
        {
          g_24 = ATgetArgument(f_24, 0);
          h_24 = ATgetArgument(f_24, 1);
          b_24 :
          if(match_cons(h_24, sym_TCons_2))
            {
              i_24 = ATgetArgument(h_24, 0);
              j_24 = ATgetArgument(h_24, 1);
              c_24 :
              if(match_cons(j_24, sym_TNil_0))
                {
                  ATerm x_8;
                  x_8 = t;
                  {
                    ATerm n_24 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_24), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm y_8 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = y_8;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      n_24 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_24), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_24), not_null(n_24)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = x_8;
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm z_44 (ATerm))
{
  ATerm s_24 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = z_44(t);
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_24), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
  b_25 = t;
  y_24 :
  if(match_cons(b_25, sym_Cons_2))
    {
      z_24 = ATgetArgument(b_25, 0);
      a_25 = ATgetArgument(b_25, 1);
      {
        ATerm e_25 = NULL;
        t = not_null(z_24);
        t = c_0(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = d_0(t);
        e_25 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_25), not_null(a_25));
      }
    }
  else
    {
      if(match_string(b_25, "register-usage-info"))
        t = register_usage_1(t, e_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm k_25 = NULL;
    k_25 = t;
    j_25 :
    if(!(match_string(k_25, "--help")))
      {
        if(!(match_string(k_25, "-h")))
          {
            if(!(match_string(k_25, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, j_5, k_5, m_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL;
  n_25 = t;
  m_25 :
  if(match_cons(n_25, sym_Cons_2))
    {
      o_25 = ATgetArgument(n_25, 0);
      p_25 = ATgetArgument(n_25, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_25)), not_null(p_25));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_44 (ATerm))
{
  ATerm z_8;
  z_8 = t;
  {
    ATerm n_5 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = x_44(t);
      return(t);
    }
    t = try_1(t, n_5);
  }
  t = z_8;
  {
    ATerm o_5 (ATerm t)
    {
      ATerm u_25 = NULL;
      u_25 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_25));
      return(t);
    }
    ATerm p_5 (ATerm t)
    {
      ATerm a_9 = t;
      if(PushChoice()==0)
        {
          ATerm e_9 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = e_9;
              t = x_44(t);
              t = Cons_2(t, _id, p_5);
            }
          PopChoice();
        }
      else
        {
          t = a_9;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, o_5, p_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
  ATerm g_9;
  g_9 = t;
  {
    ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL;
    g_26 = t;
    z_25 :
    if(match_cons(g_26, sym_TCons_2))
      {
        h_26 = ATgetArgument(g_26, 0);
        i_26 = ATgetArgument(g_26, 1);
        a_26 :
        if(match_cons(i_26, sym_TCons_2))
          {
            j_26 = ATgetArgument(i_26, 0);
            k_26 = ATgetArgument(i_26, 1);
            b_26 :
            if(match_cons(k_26, sym_TCons_2))
              {
                l_26 = ATgetArgument(k_26, 0);
                m_26 = ATgetArgument(k_26, 1);
                c_26 :
                if(match_cons(m_26, sym_TNil_0))
                  {
                    if(d_26 != NULL && d_26 != h_26)
                      _fail(h_26);
                    else
                      d_26 = h_26;
                    if(e_26 != NULL && e_26 != j_26)
                      _fail(j_26);
                    else
                      e_26 = j_26;
                    if(f_26 != NULL && f_26 != l_26)
                      _fail(l_26);
                    else
                      f_26 = l_26;
                    t = SSL_table_put(not_null(d_26), not_null(e_26), not_null(f_26));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = g_9;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_44 (ATerm))
{
  ATerm p_26 = NULL;
  ATerm h_9;
  h_9 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = h_9;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm i_9 = t;
      if(PushChoice()==0)
        {
          t = w_44(t);
          PopChoice();
        }
      else
        {
          t = i_9;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, q_5);
    {
      ATerm r_5 (ATerm t)
      {
        ATerm j_9 = t;
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
            t = j_9;
            {
              ATerm s_5 (ATerm t)
              {
                ATerm t_5 (ATerm t)
                {
                  ATerm q_26 = NULL;
                  q_26 = t;
                  if(p_26 != NULL && p_26 != q_26)
                    _fail(q_26);
                  else
                    p_26 = q_26;
                  return(t);
                }
                t = Undefined_1(t, t_5);
                return(t);
              }
              t = option_defined_1(t, s_5);
              {
                ATerm k_9;
                k_9 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_26), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = k_9;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, r_5);
      {
        ATerm l_9;
        l_9 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = l_9;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm d_46 (ATerm), ATerm e_46 (ATerm), ATerm f_46 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm m_9 = t;
    if(PushChoice()==0)
      {
        t = e_46(t);
        PopChoice();
      }
    else
      {
        t = m_9;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, z_5);
  t = store_options_0(t);
  {
    ATerm n_9 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, f_46);
        PopChoice();
      }
    else
      {
        t = n_9;
        {
          ATerm o_9 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, d_46);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = o_9;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm y_45 (ATerm), ATerm z_45 (ATerm))
{
  t = iowrap_3(t, y_45, z_45, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm v_45 (ATerm))
{
  ATerm b_6 (ATerm t)
  {
    ATerm c_6 (ATerm t)
    {
      t = TCons_2(t, v_45, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, c_6);
    return(t);
  }
  t = iowrap_2(t, b_6, _fail);
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    ATerm f_6 (ATerm t)
    {
      ATerm h_6 (ATerm t)
      {
        ATerm i_6 (ATerm t)
        {
          t = Strategies_1(t, rename_sdefs_0);
          return(t);
        }
        t = Cons_2(t, i_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, h_6);
      return(t);
    }
    t = Specification_1(t, f_6);
    return(t);
  }
  t = iowrap_1(t, e_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_defs_0(t);
  return(t);
}
