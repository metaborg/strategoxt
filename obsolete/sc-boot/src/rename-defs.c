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
ATerm RenameVar_0 (ATerm);
ATerm RenameCall_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm a_59 (ATerm));
ATerm map_1 (ATerm, ATerm i_56 (ATerm));
ATerm table_push_0 (ATerm);
ATerm assert_1 (ATerm, ATerm x_42 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm z_42 (ATerm));
ATerm HoArg_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_56 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm a_0 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm escape_1 (ATerm, ATerm i_47 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm NameMod_0 (ATerm);
ATerm add_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm length_0 (ATerm);
ATerm RenameSDef_0 (ATerm);
ATerm rename_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm k_40 (ATerm));
ATerm Cons_2 (ATerm, ATerm p_42 (ATerm), ATerm q_42 (ATerm));
ATerm Specification_1 (ATerm, ATerm m_40 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm l_42 (ATerm), ATerm m_42 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_58 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm b_45 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_57 (ATerm), ATerm y_57 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm u_37 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm r_56 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_44 (ATerm));
ATerm need_help_1 (ATerm, ATerm a_45 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm y_43 (ATerm), ATerm z_43 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm a_44 (ATerm), ATerm b_44 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_43 (ATerm));
ATerm iowrap_3 (ATerm, ATerm p_44 (ATerm), ATerm q_44 (ATerm), ATerm r_44 (ATerm));
ATerm iowrap_2 (ATerm, ATerm k_44 (ATerm), ATerm l_44 (ATerm));
ATerm iowrap_1 (ATerm, ATerm h_44 (ATerm));
ATerm rename_defs_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm q_0 = NULL;
  q_0 = t;
  p_0 :
  if(!(match_cons(q_0, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm RenameVar_0 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL;
  x_0 = t;
  u_0 :
  if(match_cons(x_0, sym_TCons_2))
    {
      y_0 = ATgetArgument(x_0, 0);
      z_0 = ATgetArgument(x_0, 1);
      v_0 :
      if(match_cons(z_0, sym_TCons_2))
        {
          a_1 = ATgetArgument(z_0, 0);
          b_1 = ATgetArgument(z_0, 1);
          w_0 :
          if(match_cons(b_1, sym_TNil_0))
            {
              ATerm e_1 = NULL,f_1 = NULL;
              t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(a_1), not_null(y_0));
              {
                ATerm b_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
                  return(t);
                }
                t = rewrite_1(t, b_0);
                e_1 = t;
                t_0 :
                if(match_cons(e_1, sym_Defined_1))
                  {
                    f_1 = ATgetArgument(e_1, 0);
                    t = not_null(f_1);
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
  ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL;
  p_1 = t;
  n_1 :
  if(match_cons(p_1, sym_Call_2))
    {
      q_1 = ATgetArgument(p_1, 0);
      s_1 = ATgetArgument(p_1, 1);
      o_1 :
      if(match_cons(q_1, sym_SVar_1))
        {
          r_1 = ATgetArgument(q_1, 0);
          {
            ATerm v_1 = NULL,w_1 = NULL;
            ATerm x_1 = NULL;
            t = not_null(s_1);
            t = length_0(t);
            x_1 = t;
            if(v_1 != NULL && v_1 != x_1)
              _fail(x_1);
            else
              v_1 = x_1;
            {
              ATerm q_6 = t;
              if(PushChoice()==0)
                {
                  ATerm y_1 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_1), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_1), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = RenameVar_0(t);
                  y_1 = t;
                  if(w_1 != NULL && w_1 != y_1)
                    _fail(y_1);
                  else
                    w_1 = y_1;
                  PopChoice();
                }
              else
                {
                  t = q_6;
                  {
                    ATerm z_1 = NULL;
                    t = not_null(r_1);
                    t = HoArg_0(t);
                    z_1 = t;
                    if(w_1 != NULL && w_1 != z_1)
                      _fail(z_1);
                    else
                      w_1 = z_1;
                  }
                }
            }
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_1)), not_null(s_1));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm a_59 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    t = a_59(t);
    t = _all(t, e_2);
    return(t);
  }
  t = e_2(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_56 (ATerm))
{
  ATerm h_2 (ATerm t)
  {
    ATerm r_6 = t;
    if(PushChoice()==0)
      {
        ATerm g_2 = NULL;
        g_2 = t;
        f_2 :
        if(!(match_cons(g_2, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = r_6;
        t = Cons_2(t, i_56, h_2);
      }
    return(t);
  }
  t = h_2(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL;
  o_2 = t;
  k_2 :
  if(match_cons(o_2, sym_TCons_2))
    {
      p_2 = ATgetArgument(o_2, 0);
      q_2 = ATgetArgument(o_2, 1);
      l_2 :
      if(match_cons(q_2, sym_TCons_2))
        {
          r_2 = ATgetArgument(q_2, 0);
          s_2 = ATgetArgument(q_2, 1);
          m_2 :
          if(match_cons(s_2, sym_TCons_2))
            {
              t_2 = ATgetArgument(s_2, 0);
              u_2 = ATgetArgument(s_2, 1);
              n_2 :
              if(match_cons(u_2, sym_TNil_0))
                {
                  ATerm s_6;
                  s_6 = t;
                  {
                    ATerm y_2 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_2), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm t_6 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = t_6;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      y_2 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_2), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_2), not_null(y_2)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = s_6;
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm x_42 (ATerm))
{
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL;
  j_3 = t;
  g_3 :
  if(match_cons(j_3, sym_TCons_2))
    {
      k_3 = ATgetArgument(j_3, 0);
      l_3 = ATgetArgument(j_3, 1);
      h_3 :
      if(match_cons(l_3, sym_TCons_2))
        {
          m_3 = ATgetArgument(l_3, 0);
          n_3 = ATgetArgument(l_3, 1);
          i_3 :
          if(match_cons(n_3, sym_TNil_0))
            {
              ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL;
              ATerm v_6;
              v_6 = t;
              {
                ATerm t_3 = NULL;
                ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL;
                t = x_42(t);
                t_3 = t;
                if(q_3 != NULL && q_3 != t_3)
                  _fail(t_3);
                else
                  q_3 = t_3;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_3), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm w_6 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_3), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = w_6;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  u_3 = t;
                  f_3 :
                  if(match_cons(u_3, sym_Cons_2))
                    {
                      v_3 = ATgetArgument(u_3, 0);
                      w_3 = ATgetArgument(u_3, 1);
                      if(r_3 != NULL && r_3 != v_3)
                        _fail(v_3);
                      else
                        r_3 = v_3;
                      if(s_3 != NULL && s_3 != w_3)
                        _fail(w_3);
                      else
                        s_3 = w_3;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_3), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_3), not_null(r_3)), not_null(s_3)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  else
                    _fail(t);
                }
              }
              t = v_6;
            }
          else
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
  ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL;
  c_4 = t;
  b_4 :
  if(match_cons(c_4, sym_Cons_2))
    {
      d_4 = ATgetArgument(c_4, 0);
      e_4 = ATgetArgument(c_4, 1);
      t = not_null(d_4);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
  m_4 = t;
  j_4 :
  if(match_cons(m_4, sym_TCons_2))
    {
      n_4 = ATgetArgument(m_4, 0);
      o_4 = ATgetArgument(m_4, 1);
      k_4 :
      if(match_cons(o_4, sym_TCons_2))
        {
          p_4 = ATgetArgument(o_4, 0);
          q_4 = ATgetArgument(o_4, 1);
          l_4 :
          if(match_cons(q_4, sym_TNil_0))
            t = SSL_table_get(not_null(n_4), not_null(p_4));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL;
  y_4 = t;
  v_4 :
  if(match_cons(y_4, sym_TCons_2))
    {
      z_4 = ATgetArgument(y_4, 0);
      a_5 = ATgetArgument(y_4, 1);
      w_4 :
      if(match_cons(a_5, sym_TCons_2))
        {
          b_5 = ATgetArgument(a_5, 0);
          c_5 = ATgetArgument(a_5, 1);
          x_4 :
          if(match_cons(c_5, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_4), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_5), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm rewrite_1 (ATerm t, ATerm z_42 (ATerm))
{
  ATerm i_5 = NULL;
  ATerm k_5 = NULL;
  i_5 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = z_42(t);
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_5), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_5), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = table_lookup_0(t);
  return(t);
}
ATerm HoArg_0 (ATerm t)
{
  ATerm u_5 = NULL;
  u_5 = t;
  {
    ATerm x_6 = t;
    if(PushChoice()==0)
      {
        ATerm w_5 = NULL,x_5 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(u_5));
        {
          ATerm c_0 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
            return(t);
          }
          t = rewrite_1(t, c_0);
          w_5 = t;
          r_5 :
          if(match_cons(w_5, sym_Defined_1))
            {
              x_5 = ATgetArgument(w_5, 0);
              t = not_null(x_5);
            }
          else
            _fail(t);
        }
        PopChoice();
      }
    else
      {
        t = x_6;
        {
          ATerm a_6 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(u_5));
          {
            ATerm d_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
              return(t);
            }
            t = rewrite_1(t, d_0);
            a_6 = t;
            t_5 :
            if(match_cons(a_6, sym_Undefined_0))
              _fail(t);
            else
              _fail(t);
          }
        }
      }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_56 (ATerm))
{
  ATerm i_6 (ATerm t)
  {
    ATerm y_6 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, i_6);
        PopChoice();
      }
    else
      {
        t = y_6;
        {
          ATerm h_6 = NULL;
          h_6 = t;
          g_6 :
          if(match_cons(h_6, sym_Nil_0))
            t = x_56(t);
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = i_6(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL;
  m_6 = t;
  l_6 :
  if(!(match_cons(m_6, sym_Nil_0)))
    {
      if(match_cons(m_6, sym_Cons_2))
        {
          n_6 = ATgetArgument(m_6, 0);
          o_6 = ATgetArgument(m_6, 1);
          t = not_null(n_6);
          {
            ATerm e_0 (ATerm t)
            {
              t = not_null(o_6);
              t = concat_0(t);
              return(t);
            }
            t = at_end_1(t, e_0);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm u_6 = NULL;
  u_6 = t;
  t = SSL_int_to_string(not_null(u_6));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm a_0 (ATerm))
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
  f_7 = t;
  d_7 :
  if(match_cons(f_7, sym_Cons_2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      e_7 :
      if(match_int(g_7, 39))
        {
          ATerm j_7 = NULL;
          t = not_null(h_7);
          t = a_0(t);
          j_7 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(95), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(112), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(95), not_null(j_7))));
        }
      else
        {
          if(match_int(g_7, 45))
            {
              ATerm m_7 = NULL;
              t = not_null(h_7);
              t = a_0(t);
              m_7 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(95), not_null(m_7));
            }
          else
            {
              if(match_int(g_7, 95))
                {
                  ATerm p_7 = NULL;
                  t = not_null(h_7);
                  t = a_0(t);
                  p_7 = t;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(95), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(95), not_null(p_7)));
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
ATerm implode_string_0 (ATerm t)
{
  ATerm y_7 = NULL;
  y_7 = t;
  t = SSL_implode_string(not_null(y_7));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm c_8 = NULL;
  c_8 = t;
  t = SSL_explode_string(not_null(c_8));
  return(t);
}
ATerm escape_1 (ATerm t, ATerm i_47 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm h_8 (ATerm t)
    {
      ATerm z_6 = t;
      if(PushChoice()==0)
        {
          t = i_47(t, h_8);
          PopChoice();
        }
      else
        {
          t = z_6;
          {
            ATerm a_7 = t;
            if(PushChoice()==0)
              {
                t = Cons_2(t, _id, h_8);
                PopChoice();
              }
            else
              {
                t = a_7;
                {
                  ATerm g_8 = NULL;
                  g_8 = t;
                  f_8 :
                  if(!(match_cons(g_8, sym_Nil_0)))
                    _fail(t);
                }
              }
          }
        }
      return(t);
    }
    t = h_8(t);
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
  ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL;
  k_8 = t;
  j_8 :
  if(match_cons(k_8, sym_Mod_2))
    {
      l_8 = ATgetArgument(k_8, 0);
      m_8 = ATgetArgument(k_8, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_8), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_8), (ATerm) ATmakeAppl(sym_Nil_0))));
      t = concat_strings_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
  u_8 = t;
  r_8 :
  if(match_cons(u_8, sym_TCons_2))
    {
      v_8 = ATgetArgument(u_8, 0);
      w_8 = ATgetArgument(u_8, 1);
      s_8 :
      if(match_cons(w_8, sym_TCons_2))
        {
          x_8 = ATgetArgument(w_8, 0);
          y_8 = ATgetArgument(w_8, 1);
          t_8 :
          if(match_cons(y_8, sym_TNil_0))
            {
              ATerm b_7 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(v_8), not_null(x_8));
                  PopChoice();
                }
              else
                {
                  t = b_7;
                  t = SSL_addr(not_null(v_8), not_null(x_8));
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
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
  e_9 = t;
  d_9 :
  if(match_cons(e_9, sym_Cons_2))
    {
      f_9 = ATgetArgument(e_9, 0);
      g_9 = ATgetArgument(e_9, 1);
      t = not_null(g_9);
    }
  else
    _fail(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm c_7 = t;
  if(PushChoice()==0)
    {
      ATerm t_9 = NULL;
      t_9 = t;
      q_9 :
      if(match_cons(t_9, sym_Nil_0))
        t = (ATerm) ATmakeInt(0);
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = c_7;
      {
        ATerm u_9 = NULL;
        t = Tl_0(t);
        t = length_0(t);
        u_9 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_9), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = add_0(t);
      }
    }
  return(t);
}
ATerm RenameSDef_0 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL;
  f_10 = t;
  e_10 :
  if(match_cons(f_10, sym_SDef_3))
    {
      g_10 = ATgetArgument(f_10, 0);
      h_10 = ATgetArgument(f_10, 1);
      i_10 = ATgetArgument(f_10, 2);
      {
        ATerm m_10 = NULL,n_10 = NULL;
        ATerm o_10 = NULL;
        t = not_null(h_10);
        {
          ATerm p_10 = NULL;
          t = length_0(t);
          o_10 = t;
          if(m_10 != NULL && m_10 != o_10)
            _fail(o_10);
          else
            m_10 = o_10;
          t = not_null(g_10);
          {
            ATerm i_7 = t;
            if(PushChoice()==0)
              {
                t = NameMod_0(t);
                PopChoice();
              }
            else
              t = i_7;
            {
              ATerm r_10 = NULL;
              t = escape_1(t, Cify_1);
              p_10 = t;
              t = not_null(m_10);
              {
                ATerm t_10 = NULL;
                t = int_to_string_0(t);
                r_10 = t;
                t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_10), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("_", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_10), (ATerm) ATmakeAppl(sym_Nil_0))));
                t = concat_strings_0(t);
                t_10 = t;
                if(n_10 != NULL && n_10 != t_10)
                  _fail(t_10);
                else
                  n_10 = t_10;
                {
                  ATerm k_7;
                  k_7 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(m_10), not_null(g_10)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_1, not_null(n_10)), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm f_0 (ATerm t)
                    {
                      t = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
                      return(t);
                    }
                    t = assert_1(t, f_0);
                  }
                  t = k_7;
                  {
                    ATerm l_7 = t;
                    if(PushChoice()==0)
                      {
                        t = not_null(g_10);
                        t = HoArg_0(t);
                        {
                          ATerm n_7;
                          n_7 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(g_10)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Undefined_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                          {
                            ATerm g_0 (ATerm t)
                            {
                              t = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
                              return(t);
                            }
                            t = assert_1(t, g_0);
                          }
                          t = n_7;
                        }
                        PopChoice();
                      }
                    else
                      {
                        t = l_7;
                        {
                          ATerm o_7;
                          o_7 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(g_10)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_1, not_null(n_10)), (ATerm) ATmakeAppl(sym_TNil_0)));
                          {
                            ATerm h_0 (ATerm t)
                            {
                              t = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
                              return(t);
                            }
                            t = assert_1(t, h_0);
                          }
                          t = o_7;
                        }
                      }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(n_10), not_null(h_10), not_null(i_10));
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
    ATerm i_0 (ATerm t)
    {
      ATerm j_0 (ATerm t)
      {
        ATerm q_7 = t;
        if(PushChoice()==0)
          {
            t = RenameCall_0(t);
            PopChoice();
          }
        else
          t = q_7;
        return(t);
      }
      t = topdown_1(t, j_0);
      return(t);
    }
    t = map_1(t, i_0);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm k_40 (ATerm))
{
  ATerm i_11 = NULL,j_11 = NULL;
  i_11 = t;
  h_11 :
  if(match_cons(i_11, sym_Strategies_1))
    {
      j_11 = ATgetArgument(i_11, 0);
      {
        ATerm l_11 = NULL;
        t = not_null(j_11);
        t = k_40(t);
        l_11 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(l_11));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm p_42 (ATerm), ATerm q_42 (ATerm))
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
  y_11 = t;
  v_11 :
  if(match_cons(y_11, sym_Cons_2))
    {
      z_11 = ATgetArgument(y_11, 0);
      a_12 = ATgetArgument(y_11, 1);
      {
        ATerm d_12 = NULL;
        t = not_null(z_11);
        {
          ATerm f_12 = NULL;
          t = p_42(t);
          d_12 = t;
          t = not_null(a_12);
          t = q_42(t);
          f_12 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_12), not_null(f_12));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm m_40 (ATerm))
{
  ATerm o_12 = NULL,p_12 = NULL;
  o_12 = t;
  n_12 :
  if(match_cons(o_12, sym_Specification_1))
    {
      p_12 = ATgetArgument(o_12, 0);
      {
        ATerm r_12 = NULL;
        t = not_null(p_12);
        t = m_40(t);
        r_12 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(r_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm w_12 = NULL;
  w_12 = t;
  v_12 :
  if(!(match_cons(w_12, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm l_42 (ATerm), ATerm m_42 (ATerm))
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
  h_13 = t;
  a_13 :
  if(match_cons(h_13, sym_TCons_2))
    {
      i_13 = ATgetArgument(h_13, 0);
      j_13 = ATgetArgument(h_13, 1);
      {
        ATerm p_13 = NULL;
        t = not_null(i_13);
        {
          ATerm e_14 = NULL;
          t = l_42(t);
          p_13 = t;
          t = not_null(j_13);
          t = m_42(t);
          e_14 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_13), not_null(e_14));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm n_14 = NULL;
  ATerm r_7;
  r_7 = t;
  {
    ATerm k_0 (ATerm t)
    {
      ATerm o_14 = NULL,p_14 = NULL;
      o_14 = t;
      k_14 :
      if(match_cons(o_14, sym_Program_1))
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
    t = fetch_1(t, k_0);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_14), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = r_7;
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
  ATerm s_14 = NULL;
  s_14 = t;
  t = SSL_exit(not_null(s_14));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
  e_15 = t;
  b_15 :
  if(match_cons(e_15, sym_TCons_2))
    {
      f_15 = ATgetArgument(e_15, 0);
      g_15 = ATgetArgument(e_15, 1);
      c_15 :
      if(match_cons(g_15, sym_TCons_2))
        {
          h_15 = ATgetArgument(g_15, 0);
          i_15 = ATgetArgument(g_15, 1);
          d_15 :
          if(match_cons(i_15, sym_TNil_0))
            {
              ATerm s_7;
              s_7 = t;
              t = SSL_printnl(not_null(f_15), not_null(h_15));
              t = s_7;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm p_58 (ATerm))
{
  ATerm t_7 = t;
  if(PushChoice()==0)
    {
      t = p_58(t);
      PopChoice();
    }
  else
    t = t_7;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL;
  ATerm u_7 = t;
  if(PushChoice()==0)
    {
      ATerm l_0 (ATerm t)
      {
        ATerm v_7 = t;
        if(PushChoice()==0)
          {
            ATerm n_0 (ATerm t)
            {
              ATerm y_15 = NULL;
              y_15 = t;
              m_15 :
              if(!(match_cons(y_15, sym_Silent_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, n_0);
            PopChoice();
            _fail(t);
          }
        else
          t = v_7;
        return(t);
      }
      ATerm m_0 (ATerm t)
      {
        ATerm o_0 (ATerm t)
        {
          ATerm z_15 = NULL;
          z_15 = t;
          n_15 :
          if(!(match_cons(z_15, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, o_0);
        return(t);
      }
      t = TCons_2(t, l_0, m_0);
      {
        ATerm r_0 (ATerm t)
        {
          ATerm c_1 (ATerm t)
          {
            ATerm a_16 = NULL,b_16 = NULL;
            a_16 = t;
            r_15 :
            if(match_cons(a_16, sym_Runtime_1))
              {
                b_16 = ATgetArgument(a_16, 0);
                if(x_15 != NULL && x_15 != b_16)
                  _fail(b_16);
                else
                  x_15 = b_16;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, c_1);
          return(t);
        }
        ATerm s_0 (ATerm t)
        {
          ATerm d_1 (ATerm t)
          {
            ATerm c_16 = NULL;
            c_16 = t;
            s_15 :
            if(!(match_cons(c_16, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, d_1);
          return(t);
        }
        t = TCons_2(t, r_0, s_0);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm i_1 (ATerm t)
            {
              ATerm d_16 = NULL,e_16 = NULL;
              d_16 = t;
              u_15 :
              if(match_cons(d_16, sym_Program_1))
                {
                  e_16 = ATgetArgument(d_16, 0);
                  if(w_15 != NULL && w_15 != e_16)
                    _fail(e_16);
                  else
                    w_15 = e_16;
                }
              else
                _fail(t);
              return(t);
            }
            t = fetch_1(t, i_1);
            return(t);
          }
          ATerm h_1 (ATerm t)
          {
            ATerm j_1 (ATerm t)
            {
              ATerm f_16 = NULL;
              f_16 = t;
              v_15 :
              if(!(match_cons(f_16, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, _id, j_1);
            return(t);
          }
          t = TCons_2(t, g_1, h_1);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_15), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_15), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      PopChoice();
    }
  else
    t = u_7;
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
  m_16 = t;
  j_16 :
  if(match_cons(m_16, sym_TCons_2))
    {
      n_16 = ATgetArgument(m_16, 0);
      o_16 = ATgetArgument(m_16, 1);
      k_16 :
      if(match_cons(o_16, sym_TCons_2))
        {
          p_16 = ATgetArgument(o_16, 0);
          q_16 = ATgetArgument(o_16, 1);
          l_16 :
          if(match_cons(q_16, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(n_16), not_null(p_16));
          else
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
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  z_16 = t;
  v_16 :
  if(match_cons(z_16, sym_TCons_2))
    {
      a_17 = ATgetArgument(z_16, 0);
      b_17 = ATgetArgument(z_16, 1);
      w_16 :
      if(match_cons(b_17, sym_TCons_2))
        {
          c_17 = ATgetArgument(b_17, 0);
          d_17 = ATgetArgument(b_17, 1);
          y_16 :
          if(match_cons(d_17, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(a_17), not_null(c_17));
          else
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
  ATerm p_17 = NULL;
  ATerm w_7;
  w_7 = t;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm x_7 = t;
      if(PushChoice()==0)
        {
          ATerm m_1 (ATerm t)
          {
            ATerm q_17 = NULL,w_17 = NULL;
            q_17 = t;
            i_17 :
            if(match_cons(q_17, sym_Output_1))
              {
                w_17 = ATgetArgument(q_17, 0);
                if(p_17 != NULL && p_17 != w_17)
                  _fail(w_17);
                else
                  p_17 = w_17;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, m_1);
          PopChoice();
        }
      else
        {
          t = x_7;
          {
            ATerm x_17 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            x_17 = t;
            if(p_17 != NULL && p_17 != x_17)
              _fail(x_17);
            else
              p_17 = x_17;
          }
        }
      return(t);
    }
    ATerm l_1 (ATerm t)
    {
      ATerm t_1 (ATerm t)
      {
        ATerm y_17 = NULL;
        y_17 = t;
        k_17 :
        if(!(match_cons(y_17, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, _id, t_1);
      return(t);
    }
    t = TCons_2(t, k_1, l_1);
  }
  t = w_7;
  {
    ATerm u_1 (ATerm t)
    {
      ATerm a_2 (ATerm t)
      {
        ATerm c_2 (ATerm t)
        {
          t = not_null(p_17);
          return(t);
        }
        t = split_2(t, c_2, _id);
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        ATerm z_17 = NULL;
        z_17 = t;
        l_17 :
        if(!(match_cons(z_17, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, a_2, b_2);
      return(t);
    }
    t = TCons_2(t, _id, u_1);
    {
      ATerm z_7 = t;
      if(PushChoice()==0)
        {
          ATerm d_2 (ATerm t)
          {
            ATerm j_2 (ATerm t)
            {
              ATerm a_18 = NULL;
              a_18 = t;
              m_17 :
              if(!(match_cons(a_18, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, j_2);
            return(t);
          }
          ATerm i_2 (ATerm t)
          {
            ATerm v_2 (ATerm t)
            {
              ATerm b_18 = NULL;
              b_18 = t;
              n_17 :
              if(!(match_cons(b_18, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, WriteToBinaryFile_0, v_2);
            return(t);
          }
          t = TCons_2(t, d_2, i_2);
          PopChoice();
        }
      else
        {
          t = z_7;
          {
            ATerm w_2 (ATerm t)
            {
              ATerm x_2 (ATerm t)
              {
                ATerm c_18 = NULL;
                c_18 = t;
                o_17 :
                if(!(match_cons(c_18, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, WriteToTextFile_0, x_2);
              return(t);
            }
            t = TCons_2(t, _id, w_2);
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
ATerm apply_strategy_1 (ATerm t, ATerm b_45 (ATerm))
{
  ATerm k_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  ATerm a_8;
  a_8 = t;
  t = dtime_0(t);
  t = a_8;
  t = b_45(t);
  {
    ATerm b_8;
    b_8 = t;
    {
      ATerm l_18 = NULL;
      t = dtime_0(t);
      l_18 = t;
      if(k_18 != NULL && k_18 != l_18)
        _fail(l_18);
      else
        k_18 = l_18;
    }
    t = b_8;
    m_18 = t;
    h_18 :
    if(match_cons(m_18, sym_TCons_2))
      {
        n_18 = ATgetArgument(m_18, 0);
        o_18 = ATgetArgument(m_18, 1);
        i_18 :
        if(match_cons(o_18, sym_TCons_2))
          {
            p_18 = ATgetArgument(o_18, 0);
            q_18 = ATgetArgument(o_18, 1);
            j_18 :
            if(match_cons(q_18, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(k_18)), not_null(n_18)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_18), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm w_18 = NULL;
  w_18 = t;
  t = SSL_ReadFromFile(not_null(w_18));
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_57 (ATerm), ATerm y_57 (ATerm))
{
  ATerm c_19 = NULL;
  ATerm e_19 = NULL;
  c_19 = t;
  {
    ATerm g_19 = NULL;
    t = x_57(t);
    e_19 = t;
    t = not_null(c_19);
    t = y_57(t);
    g_19 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_19), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm o_19 = NULL;
  ATerm d_8;
  d_8 = t;
  {
    ATerm e_8 = t;
    if(PushChoice()==0)
      {
        ATerm z_2 (ATerm t)
        {
          ATerm p_19 = NULL,q_19 = NULL;
          p_19 = t;
          m_19 :
          if(match_cons(p_19, sym_Input_1))
            {
              q_19 = ATgetArgument(p_19, 0);
              if(o_19 != NULL && o_19 != q_19)
                _fail(q_19);
              else
                o_19 = q_19;
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1(t, z_2);
        PopChoice();
      }
    else
      {
        t = e_8;
        {
          ATerm r_19 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          r_19 = t;
          if(o_19 != NULL && o_19 != r_19)
            _fail(r_19);
          else
            o_19 = r_19;
        }
      }
  }
  t = d_8;
  {
    ATerm a_3 (ATerm t)
    {
      t = not_null(o_19);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, a_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm v_19 = NULL;
  v_19 = t;
  u_19 :
  if(!(match_cons(v_19, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_37 (ATerm))
{
  ATerm z_19 = NULL,a_20 = NULL;
  z_19 = t;
  y_19 :
  if(match_cons(z_19, sym_Undefined_1))
    {
      a_20 = ATgetArgument(z_19, 0);
      {
        ATerm c_20 = NULL;
        t = not_null(a_20);
        t = u_37(t);
        c_20 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_20));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_20 = NULL;
  h_20 = t;
  g_20 :
  if(!(match_cons(h_20, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm r_56 (ATerm))
{
  ATerm i_20 (ATerm t)
  {
    ATerm i_8 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, r_56, _id);
        PopChoice();
      }
    else
      {
        t = i_8;
        t = Cons_2(t, _id, i_20);
      }
    return(t);
  }
  t = i_20(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_44 (ATerm))
{
  t = fetch_1(t, f_44);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm a_45 (ATerm))
{
  ATerm b_3 (ATerm t)
  {
    ATerm n_8 = t;
    if(PushChoice()==0)
      {
        ATerm l_20 = NULL;
        l_20 = t;
        j_20 :
        if(!(match_cons(l_20, sym_Help_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = n_8;
        {
          ATerm o_8 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = o_8;
              {
                ATerm m_20 = NULL;
                m_20 = t;
                k_20 :
                if(!(match_cons(m_20, sym_Version_0)))
                  _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, b_3);
  t = a_45(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
  ATerm p_8;
  p_8 = t;
  {
    ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
    v_20 = t;
    o_20 :
    if(match_cons(v_20, sym_TCons_2))
      {
        w_20 = ATgetArgument(v_20, 0);
        x_20 = ATgetArgument(v_20, 1);
        p_20 :
        if(match_cons(x_20, sym_TCons_2))
          {
            y_20 = ATgetArgument(x_20, 0);
            z_20 = ATgetArgument(x_20, 1);
            q_20 :
            if(match_cons(z_20, sym_TCons_2))
              {
                a_21 = ATgetArgument(z_20, 0);
                b_21 = ATgetArgument(z_20, 1);
                r_20 :
                if(match_cons(b_21, sym_TNil_0))
                  {
                    if(s_20 != NULL && s_20 != w_20)
                      _fail(w_20);
                    else
                      s_20 = w_20;
                    if(t_20 != NULL && t_20 != y_20)
                      _fail(y_20);
                    else
                      t_20 = y_20;
                    if(u_20 != NULL && u_20 != a_21)
                      _fail(a_21);
                    else
                      u_20 = a_21;
                    t = SSL_table_put(not_null(s_20), not_null(t_20), not_null(u_20));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = p_8;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_21 = NULL;
  e_21 = t;
  t = SSL_table_create(not_null(e_21));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm i_21 = NULL;
  i_21 = t;
  {
    ATerm q_8;
    q_8 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_21), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = q_8;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm y_43 (ATerm), ATerm z_43 (ATerm))
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
  o_21 = t;
  n_21 :
  if(match_cons(o_21, sym_Cons_2))
    {
      p_21 = ATgetArgument(o_21, 0);
      q_21 = ATgetArgument(o_21, 1);
      {
        ATerm t_21 = NULL;
        t = not_null(p_21);
        t = y_43(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = z_43(t);
        t_21 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_21), not_null(q_21));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm a_44 (ATerm), ATerm b_44 (ATerm))
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
  b_22 = t;
  z_21 :
  if(match_cons(b_22, sym_Cons_2))
    {
      c_22 = ATgetArgument(b_22, 0);
      d_22 = ATgetArgument(b_22, 1);
      a_22 :
      if(match_cons(d_22, sym_Cons_2))
        {
          e_22 = ATgetArgument(d_22, 0);
          f_22 = ATgetArgument(d_22, 1);
          {
            ATerm j_22 = NULL;
            t = not_null(c_22);
            t = a_44(t);
            t = not_null(e_22);
            t = b_44(t);
            j_22 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_22), not_null(f_22));
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
  ATerm z_8 = t;
  if(PushChoice()==0)
    {
      ATerm c_3 (ATerm t)
      {
        ATerm h_23 = NULL;
        h_23 = t;
        n_22 :
        if(!(match_string(h_23, "-S")))
          _fail(t);
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, c_3, d_3);
      PopChoice();
    }
  else
    {
      t = z_8;
      {
        ATerm a_9 = t;
        if(PushChoice()==0)
          {
            ATerm e_3 (ATerm t)
            {
              ATerm i_23 = NULL;
              i_23 = t;
              o_22 :
              if(!(match_string(i_23, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm o_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, e_3, o_3);
            PopChoice();
          }
        else
          {
            t = a_9;
            {
              ATerm b_9 = t;
              if(PushChoice()==0)
                {
                  ATerm p_3 (ATerm t)
                  {
                    ATerm j_23 = NULL;
                    j_23 = t;
                    p_22 :
                    if(!(match_string(j_23, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm x_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, p_3, x_3);
                  PopChoice();
                }
              else
                {
                  t = b_9;
                  {
                    ATerm c_9 = t;
                    if(PushChoice()==0)
                      {
                        ATerm y_3 (ATerm t)
                        {
                          ATerm k_23 = NULL;
                          k_23 = t;
                          q_22 :
                          if(!(match_string(k_23, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm z_3 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, y_3, z_3);
                        PopChoice();
                      }
                    else
                      {
                        t = c_9;
                        {
                          ATerm h_9 = t;
                          if(PushChoice()==0)
                            {
                              ATerm a_4 (ATerm t)
                              {
                                ATerm l_23 = NULL;
                                l_23 = t;
                                r_22 :
                                if(!(match_string(l_23, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm f_4 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, a_4, f_4);
                              PopChoice();
                            }
                          else
                            {
                              t = h_9;
                              {
                                ATerm i_9 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm g_4 (ATerm t)
                                    {
                                      ATerm m_23 = NULL;
                                      m_23 = t;
                                      s_22 :
                                      if(!(match_string(m_23, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm h_4 (ATerm t)
                                    {
                                      ATerm n_23 = NULL;
                                      n_23 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(n_23));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, g_4, h_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = i_9;
                                    {
                                      ATerm j_9 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm i_4 (ATerm t)
                                          {
                                            ATerm p_23 = NULL;
                                            p_23 = t;
                                            u_22 :
                                            if(!(match_string(p_23, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm r_4 (ATerm t)
                                          {
                                            ATerm q_23 = NULL;
                                            q_23 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(q_23));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, i_4, r_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = j_9;
                                          {
                                            ATerm k_9 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm s_4 (ATerm t)
                                                {
                                                  ATerm s_23 = NULL;
                                                  s_23 = t;
                                                  w_22 :
                                                  if(!(match_string(s_23, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm t_4 (ATerm t)
                                                {
                                                  ATerm t_23 = NULL;
                                                  t_23 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_23));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, s_4, t_4);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = k_9;
                                                {
                                                  ATerm l_9 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm u_4 (ATerm t)
                                                      {
                                                        ATerm v_23 = NULL;
                                                        v_23 = t;
                                                        y_22 :
                                                        if(!(match_string(v_23, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm d_5 (ATerm t)
                                                      {
                                                        ATerm w_23 = NULL;
                                                        w_23 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_23));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, u_4, d_5);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = l_9;
                                                      {
                                                        ATerm m_9 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm e_5 (ATerm t)
                                                            {
                                                              ATerm y_23 = NULL;
                                                              y_23 = t;
                                                              a_23 :
                                                              if(!(match_string(y_23, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm f_5 (ATerm t)
                                                            {
                                                              ATerm z_23 = NULL;
                                                              z_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_23));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, e_5, f_5);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = m_9;
                                                            {
                                                              ATerm n_9 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm g_5 (ATerm t)
                                                                  {
                                                                    ATerm b_24 = NULL;
                                                                    b_24 = t;
                                                                    c_23 :
                                                                    if(!(match_string(b_24, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm h_5 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, g_5, h_5);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = n_9;
                                                                  {
                                                                    ATerm o_9 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm j_5 (ATerm t)
                                                                        {
                                                                          ATerm c_24 = NULL;
                                                                          c_24 = t;
                                                                          d_23 :
                                                                          if(!(match_string(c_24, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm l_5 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, j_5, l_5);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = o_9;
                                                                        {
                                                                          ATerm p_9 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm m_5 (ATerm t)
                                                                              {
                                                                                ATerm d_24 = NULL;
                                                                                d_24 = t;
                                                                                e_23 :
                                                                                if(!(match_string(d_24, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm n_5 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, m_5, n_5);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = p_9;
                                                                              {
                                                                                ATerm r_9 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm o_5 (ATerm t)
                                                                                    {
                                                                                      ATerm e_24 = NULL;
                                                                                      e_24 = t;
                                                                                      f_23 :
                                                                                      if(!(match_string(e_24, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm p_5 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, o_5, p_5);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = r_9;
                                                                                    {
                                                                                      ATerm q_5 (ATerm t)
                                                                                      {
                                                                                        ATerm f_24 = NULL;
                                                                                        f_24 = t;
                                                                                        g_23 :
                                                                                        if(!(match_string(f_24, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm s_5 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, q_5, s_5);
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
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL;
  n_24 = t;
  m_24 :
  if(match_cons(n_24, sym_Cons_2))
    {
      o_24 = ATgetArgument(n_24, 0);
      p_24 = ATgetArgument(n_24, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_24)), not_null(p_24));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_43 (ATerm))
{
  ATerm v_5 (ATerm t)
  {
    ATerm v_24 = NULL;
    v_24 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_24));
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    ATerm s_9 = t;
    if(PushChoice()==0)
      {
        ATerm v_9 = t;
        if(PushChoice()==0)
          {
            ATerm x_24 = NULL;
            x_24 = t;
            u_24 :
            if(!(match_cons(x_24, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = v_9;
            t = w_43(t);
            t = Cons_2(t, _id, y_5);
          }
        PopChoice();
      }
    else
      {
        t = s_9;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, v_5, y_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm p_44 (ATerm), ATerm q_44 (ATerm), ATerm r_44 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm w_9 = t;
    if(PushChoice()==0)
      {
        t = q_44(t);
        PopChoice();
      }
    else
      {
        t = w_9;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, z_5);
  t = store_options_0(t);
  {
    ATerm x_9 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, r_44);
        PopChoice();
      }
    else
      {
        t = x_9;
        {
          ATerm y_9 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, p_44);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = y_9;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm k_44 (ATerm), ATerm l_44 (ATerm))
{
  t = iowrap_3(t, k_44, l_44, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm h_44 (ATerm))
{
  ATerm b_6 (ATerm t)
  {
    ATerm c_6 (ATerm t)
    {
      ATerm d_6 (ATerm t)
      {
        ATerm b_25 = NULL;
        b_25 = t;
        a_25 :
        if(!(match_cons(b_25, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, h_44, d_6);
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
      ATerm j_6 (ATerm t)
      {
        ATerm k_6 (ATerm t)
        {
          t = Strategies_1(t, rename_sdefs_0);
          return(t);
        }
        ATerm p_6 (ATerm t)
        {
          ATerm d_25 = NULL;
          d_25 = t;
          c_25 :
          if(!(match_cons(d_25, sym_Nil_0)))
            _fail(t);
          return(t);
        }
        t = Cons_2(t, k_6, p_6);
        return(t);
      }
      t = Cons_2(t, _id, j_6);
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
