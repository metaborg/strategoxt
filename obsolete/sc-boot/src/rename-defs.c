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
ATerm topdown_1 (ATerm, ATerm a_60 (ATerm));
ATerm map_1 (ATerm, ATerm i_57 (ATerm));
ATerm table_push_0 (ATerm);
ATerm assert_1 (ATerm, ATerm p_43 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm r_43 (ATerm));
ATerm HoArg_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_57 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm c_0 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm escape_1 (ATerm, ATerm g_48 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm NameMod_0 (ATerm);
ATerm add_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm length_0 (ATerm);
ATerm RenameSDef_0 (ATerm);
ATerm rename_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm c_41 (ATerm));
ATerm Cons_2 (ATerm, ATerm h_43 (ATerm), ATerm i_43 (ATerm));
ATerm Specification_1 (ATerm, ATerm e_41 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm d_43 (ATerm), ATerm e_43 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm w_45 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_58 (ATerm), ATerm y_58 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm m_38 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm r_57 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_45 (ATerm));
ATerm need_help_1 (ATerm, ATerm v_45 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm t_44 (ATerm), ATerm u_44 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm v_44 (ATerm), ATerm w_44 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_44 (ATerm));
ATerm iowrap_3 (ATerm, ATerm k_45 (ATerm), ATerm l_45 (ATerm), ATerm m_45 (ATerm));
ATerm iowrap_2 (ATerm, ATerm f_45 (ATerm), ATerm g_45 (ATerm));
ATerm iowrap_1 (ATerm, ATerm c_45 (ATerm));
ATerm rename_defs_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm s_0 = NULL;
  s_0 = t;
  d_0 :
  if(!(match_cons(s_0, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm RenameVar_0 (ATerm t)
{
  ATerm a_1 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL;
  a_1 = t;
  x_0 :
  if(match_cons(a_1, sym_TCons_2))
    {
      b_1 = ATgetArgument(a_1, 0);
      c_1 = ATgetArgument(a_1, 1);
      y_0 :
      if(match_cons(c_1, sym_TCons_2))
        {
          d_1 = ATgetArgument(c_1, 0);
          e_1 = ATgetArgument(c_1, 1);
          z_0 :
          if(match_cons(e_1, sym_TNil_0))
            {
              ATerm h_1 = NULL,i_1 = NULL,j_1 = NULL;
              t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(d_1), not_null(b_1));
              {
                ATerm e_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
                  return(t);
                }
                t = rewrite_1(t, e_0);
                h_1 = t;
                v_0 :
                if(match_cons(h_1, sym_Defined_2))
                  {
                    i_1 = ATgetArgument(h_1, 0);
                    j_1 = ATgetArgument(h_1, 1);
                    w_0 :
                    if(match_string(i_1, "a_0"))
                      t = not_null(j_1);
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
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL;
  t_1 = t;
  r_1 :
  if(match_cons(t_1, sym_Call_2))
    {
      u_1 = ATgetArgument(t_1, 0);
      w_1 = ATgetArgument(t_1, 1);
      s_1 :
      if(match_cons(u_1, sym_SVar_1))
        {
          v_1 = ATgetArgument(u_1, 0);
          {
            ATerm z_1 = NULL,a_2 = NULL;
            ATerm b_2 = NULL;
            t = not_null(w_1);
            t = length_0(t);
            b_2 = t;
            if(z_1 != NULL && z_1 != b_2)
              _fail(b_2);
            else
              z_1 = b_2;
            {
              ATerm f_6 = t;
              if(PushChoice()==0)
                {
                  ATerm c_2 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_1), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_1), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = RenameVar_0(t);
                  c_2 = t;
                  if(a_2 != NULL && a_2 != c_2)
                    _fail(c_2);
                  else
                    a_2 = c_2;
                  PopChoice();
                }
              else
                {
                  t = f_6;
                  {
                    ATerm d_2 = NULL;
                    t = not_null(v_1);
                    t = HoArg_0(t);
                    d_2 = t;
                    if(a_2 != NULL && a_2 != d_2)
                      _fail(d_2);
                    else
                      a_2 = d_2;
                  }
                }
            }
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_2)), not_null(w_1));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm a_60 (ATerm))
{
  ATerm i_2 (ATerm t)
  {
    t = a_60(t);
    t = _all(t, i_2);
    return(t);
  }
  t = i_2(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_57 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    ATerm g_6 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = g_6;
        t = Cons_2(t, i_57, j_2);
      }
    return(t);
  }
  t = j_2(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL;
  q_2 = t;
  m_2 :
  if(match_cons(q_2, sym_TCons_2))
    {
      r_2 = ATgetArgument(q_2, 0);
      s_2 = ATgetArgument(q_2, 1);
      n_2 :
      if(match_cons(s_2, sym_TCons_2))
        {
          t_2 = ATgetArgument(s_2, 0);
          u_2 = ATgetArgument(s_2, 1);
          o_2 :
          if(match_cons(u_2, sym_TCons_2))
            {
              v_2 = ATgetArgument(u_2, 0);
              w_2 = ATgetArgument(u_2, 1);
              p_2 :
              if(match_cons(w_2, sym_TNil_0))
                {
                  ATerm h_6;
                  h_6 = t;
                  {
                    ATerm a_3 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_2), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm i_6 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = i_6;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      a_3 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_2), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_2), not_null(a_3)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = h_6;
                }
              else
                _fail(t);
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
ATerm assert_1 (ATerm t, ATerm p_43 (ATerm))
{
  ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL;
  l_3 = t;
  i_3 :
  if(match_cons(l_3, sym_TCons_2))
    {
      m_3 = ATgetArgument(l_3, 0);
      n_3 = ATgetArgument(l_3, 1);
      j_3 :
      if(match_cons(n_3, sym_TCons_2))
        {
          o_3 = ATgetArgument(n_3, 0);
          p_3 = ATgetArgument(n_3, 1);
          k_3 :
          if(match_cons(p_3, sym_TNil_0))
            {
              ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL;
              ATerm k_6;
              k_6 = t;
              {
                ATerm v_3 = NULL;
                ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL;
                t = p_43(t);
                v_3 = t;
                if(s_3 != NULL && s_3 != v_3)
                  _fail(v_3);
                else
                  s_3 = v_3;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_3), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm p_6 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_3), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = p_6;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  w_3 = t;
                  h_3 :
                  if(match_cons(w_3, sym_Cons_2))
                    {
                      x_3 = ATgetArgument(w_3, 0);
                      y_3 = ATgetArgument(w_3, 1);
                      if(t_3 != NULL && t_3 != x_3)
                        _fail(x_3);
                      else
                        t_3 = x_3;
                      if(u_3 != NULL && u_3 != y_3)
                        _fail(y_3);
                      else
                        u_3 = y_3;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_3), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_3), not_null(t_3)), not_null(u_3)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL;
  e_4 = t;
  d_4 :
  if(match_cons(e_4, sym_Cons_2))
    {
      f_4 = ATgetArgument(e_4, 0);
      g_4 = ATgetArgument(e_4, 1);
      t = not_null(f_4);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
  o_4 = t;
  l_4 :
  if(match_cons(o_4, sym_TCons_2))
    {
      p_4 = ATgetArgument(o_4, 0);
      q_4 = ATgetArgument(o_4, 1);
      m_4 :
      if(match_cons(q_4, sym_TCons_2))
        {
          r_4 = ATgetArgument(q_4, 0);
          s_4 = ATgetArgument(q_4, 1);
          n_4 :
          if(match_cons(s_4, sym_TNil_0))
            t = SSL_table_get(not_null(p_4), not_null(r_4));
          else
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
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL;
  a_5 = t;
  x_4 :
  if(match_cons(a_5, sym_TCons_2))
    {
      b_5 = ATgetArgument(a_5, 0);
      c_5 = ATgetArgument(a_5, 1);
      y_4 :
      if(match_cons(c_5, sym_TCons_2))
        {
          d_5 = ATgetArgument(c_5, 0);
          e_5 = ATgetArgument(c_5, 1);
          z_4 :
          if(match_cons(e_5, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_5), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_5), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm rewrite_1 (ATerm t, ATerm r_43 (ATerm))
{
  ATerm k_5 = NULL;
  ATerm m_5 = NULL;
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = r_43(t);
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_5), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_5), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = table_lookup_0(t);
  return(t);
}
ATerm HoArg_0 (ATerm t)
{
  ATerm x_5 = NULL;
  x_5 = t;
  {
    ATerm q_6 = t;
    if(PushChoice()==0)
      {
        ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(x_5));
        {
          ATerm f_0 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
            return(t);
          }
          t = rewrite_1(t, f_0);
          z_5 = t;
          t_5 :
          if(match_cons(z_5, sym_Defined_2))
            {
              a_6 = ATgetArgument(z_5, 0);
              b_6 = ATgetArgument(z_5, 1);
              u_5 :
              if(match_string(a_6, "b_0"))
                t = not_null(b_6);
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
        t = q_6;
        {
          ATerm e_6 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(x_5));
          {
            ATerm g_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
              return(t);
            }
            t = rewrite_1(t, g_0);
            e_6 = t;
            w_5 :
            if(match_cons(e_6, sym_Undefined_0))
              _fail(t);
            else
              _fail(t);
          }
        }
      }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_57 (ATerm))
{
  ATerm j_6 (ATerm t)
  {
    ATerm r_6 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, j_6);
        PopChoice();
      }
    else
      {
        t = r_6;
        t = Nil_0(t);
        t = x_57(t);
      }
    return(t);
  }
  t = j_6(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_6 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = s_6;
      {
        ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL;
        m_6 = t;
        l_6 :
        if(match_cons(m_6, sym_Cons_2))
          {
            n_6 = ATgetArgument(m_6, 0);
            o_6 = ATgetArgument(m_6, 1);
            t = not_null(n_6);
            {
              ATerm h_0 (ATerm t)
              {
                t = not_null(o_6);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, h_0);
            }
          }
        else
          _fail(t);
      }
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
ATerm Cify_1 (ATerm t, ATerm c_0 (ATerm))
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
          t = c_0(t);
          j_7 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(95), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(112), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(95), not_null(j_7))));
        }
      else
        {
          if(match_int(g_7, 45))
            {
              ATerm m_7 = NULL;
              t = not_null(h_7);
              t = c_0(t);
              m_7 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(95), not_null(m_7));
            }
          else
            {
              if(match_int(g_7, 95))
                {
                  ATerm p_7 = NULL;
                  t = not_null(h_7);
                  t = c_0(t);
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
ATerm escape_1 (ATerm t, ATerm g_48 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm f_8 (ATerm t)
    {
      ATerm t_6 = t;
      if(PushChoice()==0)
        {
          t = g_48(t, f_8);
          PopChoice();
        }
      else
        {
          t = t_6;
          {
            ATerm v_6 = t;
            if(PushChoice()==0)
              {
                t = Cons_2(t, _id, f_8);
                PopChoice();
              }
            else
              {
                t = v_6;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = f_8(t);
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
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
  i_8 = t;
  h_8 :
  if(match_cons(i_8, sym_Mod_2))
    {
      j_8 = ATgetArgument(i_8, 0);
      k_8 = ATgetArgument(i_8, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_8), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_8), (ATerm) ATmakeAppl(sym_Nil_0))));
      t = concat_strings_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL;
  s_8 = t;
  p_8 :
  if(match_cons(s_8, sym_TCons_2))
    {
      t_8 = ATgetArgument(s_8, 0);
      u_8 = ATgetArgument(s_8, 1);
      q_8 :
      if(match_cons(u_8, sym_TCons_2))
        {
          v_8 = ATgetArgument(u_8, 0);
          w_8 = ATgetArgument(u_8, 1);
          r_8 :
          if(match_cons(w_8, sym_TNil_0))
            {
              ATerm w_6 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(t_8), not_null(v_8));
                  PopChoice();
                }
              else
                {
                  t = w_6;
                  t = SSL_addr(not_null(t_8), not_null(v_8));
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
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  c_9 = t;
  b_9 :
  if(match_cons(c_9, sym_Cons_2))
    {
      d_9 = ATgetArgument(c_9, 0);
      e_9 = ATgetArgument(c_9, 1);
      t = not_null(e_9);
    }
  else
    _fail(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm x_6 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = (ATerm) ATmakeInt(0);
      PopChoice();
    }
  else
    {
      t = x_6;
      {
        ATerm j_9 = NULL;
        t = Tl_0(t);
        t = length_0(t);
        j_9 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_9), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = add_0(t);
      }
    }
  return(t);
}
ATerm RenameSDef_0 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL;
  z_9 = t;
  y_9 :
  if(match_cons(z_9, sym_SDef_3))
    {
      a_10 = ATgetArgument(z_9, 0);
      b_10 = ATgetArgument(z_9, 1);
      c_10 = ATgetArgument(z_9, 2);
      {
        ATerm g_10 = NULL,h_10 = NULL;
        ATerm i_10 = NULL;
        t = not_null(b_10);
        {
          ATerm j_10 = NULL;
          t = length_0(t);
          i_10 = t;
          if(g_10 != NULL && g_10 != i_10)
            _fail(i_10);
          else
            g_10 = i_10;
          t = not_null(a_10);
          t = try_1(t, NameMod_0);
          {
            ATerm l_10 = NULL;
            t = cify_0(t);
            j_10 = t;
            t = not_null(g_10);
            {
              ATerm n_10 = NULL;
              t = int_to_string_0(t);
              l_10 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_10), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("_", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_10), (ATerm) ATmakeAppl(sym_Nil_0))));
              t = concat_strings_0(t);
              n_10 = t;
              if(h_10 != NULL && h_10 != n_10)
                _fail(n_10);
              else
                h_10 = n_10;
              {
                ATerm y_6;
                y_6 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(g_10), not_null(a_10)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue)), not_null(h_10)), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm i_0 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
                    return(t);
                  }
                  t = assert_1(t, i_0);
                }
                t = y_6;
                {
                  ATerm z_6 = t;
                  if(PushChoice()==0)
                    {
                      t = not_null(a_10);
                      t = HoArg_0(t);
                      {
                        ATerm a_7;
                        a_7 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(a_10)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Undefined_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                        {
                          ATerm j_0 (ATerm t)
                          {
                            t = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
                            return(t);
                          }
                          t = assert_1(t, j_0);
                        }
                        t = a_7;
                      }
                      PopChoice();
                    }
                  else
                    {
                      t = z_6;
                      {
                        ATerm b_7;
                        b_7 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(a_10)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue)), not_null(h_10)), (ATerm) ATmakeAppl(sym_TNil_0)));
                        {
                          ATerm k_0 (ATerm t)
                          {
                            t = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
                            return(t);
                          }
                          t = assert_1(t, k_0);
                        }
                        t = b_7;
                      }
                    }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(h_10), not_null(b_10), not_null(c_10));
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
    ATerm l_0 (ATerm t)
    {
      ATerm m_0 (ATerm t)
      {
        t = try_1(t, RenameCall_0);
        return(t);
      }
      t = topdown_1(t, m_0);
      return(t);
    }
    t = map_1(t, l_0);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm c_41 (ATerm))
{
  ATerm w_10 = NULL,x_10 = NULL;
  w_10 = t;
  v_10 :
  if(match_cons(w_10, sym_Strategies_1))
    {
      x_10 = ATgetArgument(w_10, 0);
      {
        ATerm a_11 = NULL;
        t = not_null(x_10);
        t = c_41(t);
        a_11 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(a_11));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_43 (ATerm), ATerm i_43 (ATerm))
{
  ATerm n_11 = NULL,o_11 = NULL,s_11 = NULL;
  n_11 = t;
  m_11 :
  if(match_cons(n_11, sym_Cons_2))
    {
      o_11 = ATgetArgument(n_11, 0);
      s_11 = ATgetArgument(n_11, 1);
      {
        ATerm v_11 = NULL;
        t = not_null(o_11);
        {
          ATerm x_11 = NULL;
          t = h_43(t);
          v_11 = t;
          t = not_null(s_11);
          t = i_43(t);
          x_11 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_11), not_null(x_11));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm e_41 (ATerm))
{
  ATerm h_12 = NULL,i_12 = NULL;
  h_12 = t;
  g_12 :
  if(match_cons(h_12, sym_Specification_1))
    {
      i_12 = ATgetArgument(h_12, 0);
      {
        ATerm l_12 = NULL;
        t = not_null(i_12);
        t = e_41(t);
        l_12 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(l_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm q_12 = NULL;
  q_12 = t;
  p_12 :
  if(!(match_cons(q_12, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm d_43 (ATerm), ATerm e_43 (ATerm))
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
  v_12 = t;
  u_12 :
  if(match_cons(v_12, sym_TCons_2))
    {
      w_12 = ATgetArgument(v_12, 0);
      x_12 = ATgetArgument(v_12, 1);
      {
        ATerm a_13 = NULL;
        t = not_null(w_12);
        {
          ATerm c_13 = NULL;
          t = d_43(t);
          a_13 = t;
          t = not_null(x_12);
          t = e_43(t);
          c_13 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_13), not_null(c_13));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm f_14 = NULL;
  ATerm c_7;
  c_7 = t;
  {
    ATerm n_0 (ATerm t)
    {
      ATerm g_14 = NULL,h_14 = NULL;
      g_14 = t;
      r_13 :
      if(match_cons(g_14, sym_Program_1))
        {
          h_14 = ATgetArgument(g_14, 0);
          if(f_14 != NULL && f_14 != h_14)
            _fail(h_14);
          else
            f_14 = h_14;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, n_0);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_14), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = c_7;
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
  ATerm k_14 = NULL;
  k_14 = t;
  t = SSL_exit(not_null(k_14));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm r_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
  r_14 = t;
  o_14 :
  if(match_cons(r_14, sym_TCons_2))
    {
      u_14 = ATgetArgument(r_14, 0);
      v_14 = ATgetArgument(r_14, 1);
      p_14 :
      if(match_cons(v_14, sym_TCons_2))
        {
          w_14 = ATgetArgument(v_14, 0);
          x_14 = ATgetArgument(v_14, 1);
          q_14 :
          if(match_cons(x_14, sym_TNil_0))
            {
              ATerm i_7;
              i_7 = t;
              t = SSL_printnl(not_null(u_14), not_null(w_14));
              t = i_7;
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
ATerm try_1 (ATerm t, ATerm p_59 (ATerm))
{
  ATerm k_7 = t;
  if(PushChoice()==0)
    {
      t = p_59(t);
      PopChoice();
    }
  else
    t = k_7;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL;
  ATerm o_0 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      ATerm l_7 = t;
      if(PushChoice()==0)
        {
          ATerm r_0 (ATerm t)
          {
            ATerm n_15 = NULL;
            n_15 = t;
            g_15 :
            if(!(match_cons(n_15, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, r_0);
          PopChoice();
          _fail(t);
        }
      else
        t = l_7;
      return(t);
    }
    ATerm q_0 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, p_0, q_0);
    {
      ATerm t_0 (ATerm t)
      {
        ATerm f_1 (ATerm t)
        {
          ATerm o_15 = NULL,p_15 = NULL;
          o_15 = t;
          i_15 :
          if(match_cons(o_15, sym_Runtime_1))
            {
              p_15 = ATgetArgument(o_15, 0);
              if(m_15 != NULL && m_15 != p_15)
                _fail(p_15);
              else
                m_15 = p_15;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, f_1);
        return(t);
      }
      ATerm u_0 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, t_0, u_0);
      {
        ATerm g_1 (ATerm t)
        {
          ATerm l_1 (ATerm t)
          {
            ATerm q_15 = NULL,r_15 = NULL;
            q_15 = t;
            k_15 :
            if(match_cons(q_15, sym_Program_1))
              {
                r_15 = ATgetArgument(q_15, 0);
                if(l_15 != NULL && l_15 != r_15)
                  _fail(r_15);
                else
                  l_15 = r_15;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, l_1);
          return(t);
        }
        ATerm k_1 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, g_1, k_1);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_15), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_15), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, o_0);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
  a_16 = t;
  x_15 :
  if(match_cons(a_16, sym_TCons_2))
    {
      b_16 = ATgetArgument(a_16, 0);
      c_16 = ATgetArgument(a_16, 1);
      y_15 :
      if(match_cons(c_16, sym_TCons_2))
        {
          d_16 = ATgetArgument(c_16, 0);
          e_16 = ATgetArgument(c_16, 1);
          z_15 :
          if(match_cons(e_16, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(b_16), not_null(d_16));
          else
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
            t = SSL_WriteToBinaryFile(not_null(n_16), not_null(p_16));
          else
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
  ATerm y_16 = NULL;
  ATerm n_7;
  n_7 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm o_7 = t;
      if(PushChoice()==0)
        {
          ATerm o_1 (ATerm t)
          {
            ATerm z_16 = NULL,a_17 = NULL;
            z_16 = t;
            v_16 :
            if(match_cons(z_16, sym_Output_1))
              {
                a_17 = ATgetArgument(z_16, 0);
                if(y_16 != NULL && y_16 != a_17)
                  _fail(a_17);
                else
                  y_16 = a_17;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, o_1);
          PopChoice();
        }
      else
        {
          t = o_7;
          {
            ATerm b_17 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            b_17 = t;
            if(y_16 != NULL && y_16 != b_17)
              _fail(b_17);
            else
              y_16 = b_17;
          }
        }
      return(t);
    }
    ATerm n_1 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, m_1, n_1);
  }
  t = n_7;
  {
    ATerm p_1 (ATerm t)
    {
      ATerm q_1 (ATerm t)
      {
        ATerm x_1 (ATerm t)
        {
          t = not_null(y_16);
          return(t);
        }
        t = split_2(t, x_1, _id);
        return(t);
      }
      t = TCons_2(t, q_1, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, p_1);
    {
      ATerm q_7 = t;
      if(PushChoice()==0)
        {
          ATerm y_1 (ATerm t)
          {
            ATerm f_2 (ATerm t)
            {
              ATerm c_17 = NULL;
              c_17 = t;
              x_16 :
              if(!(match_cons(c_17, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, f_2);
            return(t);
          }
          ATerm e_2 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, y_1, e_2);
          PopChoice();
        }
      else
        {
          t = q_7;
          {
            ATerm g_2 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, g_2);
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
ATerm apply_strategy_1 (ATerm t, ATerm w_45 (ATerm))
{
  ATerm l_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL;
  ATerm r_7;
  r_7 = t;
  t = dtime_0(t);
  t = r_7;
  t = w_45(t);
  {
    ATerm s_7;
    s_7 = t;
    {
      ATerm m_17 = NULL;
      t = dtime_0(t);
      m_17 = t;
      if(l_17 != NULL && l_17 != m_17)
        _fail(m_17);
      else
        l_17 = m_17;
    }
    t = s_7;
    n_17 = t;
    i_17 :
    if(match_cons(n_17, sym_TCons_2))
      {
        o_17 = ATgetArgument(n_17, 0);
        p_17 = ATgetArgument(n_17, 1);
        j_17 :
        if(match_cons(p_17, sym_TCons_2))
          {
            q_17 = ATgetArgument(p_17, 0);
            r_17 = ATgetArgument(p_17, 1);
            k_17 :
            if(match_cons(r_17, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(l_17)), not_null(o_17)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_17), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm c_18 = NULL;
  c_18 = t;
  t = SSL_ReadFromFile(not_null(c_18));
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_58 (ATerm), ATerm y_58 (ATerm))
{
  ATerm i_18 = NULL;
  ATerm k_18 = NULL;
  i_18 = t;
  {
    ATerm m_18 = NULL;
    t = x_58(t);
    k_18 = t;
    t = not_null(i_18);
    t = y_58(t);
    m_18 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_18), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm u_18 = NULL;
  ATerm t_7;
  t_7 = t;
  {
    ATerm u_7 = t;
    if(PushChoice()==0)
      {
        ATerm h_2 (ATerm t)
        {
          ATerm v_18 = NULL,w_18 = NULL;
          v_18 = t;
          s_18 :
          if(match_cons(v_18, sym_Input_1))
            {
              w_18 = ATgetArgument(v_18, 0);
              if(u_18 != NULL && u_18 != w_18)
                _fail(w_18);
              else
                u_18 = w_18;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, h_2);
        PopChoice();
      }
    else
      {
        t = u_7;
        {
          ATerm x_18 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          x_18 = t;
          if(u_18 != NULL && u_18 != x_18)
            _fail(x_18);
          else
            u_18 = x_18;
        }
      }
  }
  t = t_7;
  {
    ATerm k_2 (ATerm t)
    {
      t = not_null(u_18);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, k_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm b_19 = NULL;
  b_19 = t;
  a_19 :
  if(!(match_cons(b_19, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm m_38 (ATerm))
{
  ATerm f_19 = NULL,g_19 = NULL;
  f_19 = t;
  e_19 :
  if(match_cons(f_19, sym_Undefined_1))
    {
      g_19 = ATgetArgument(f_19, 0);
      {
        ATerm i_19 = NULL;
        t = not_null(g_19);
        t = m_38(t);
        i_19 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_19 = NULL;
  n_19 = t;
  m_19 :
  if(!(match_cons(n_19, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm r_57 (ATerm))
{
  ATerm o_19 (ATerm t)
  {
    ATerm v_7 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, r_57, _id);
        PopChoice();
      }
    else
      {
        t = v_7;
        t = Cons_2(t, _id, o_19);
      }
    return(t);
  }
  t = o_19(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_45 (ATerm))
{
  t = fetch_1(t, a_45);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm v_45 (ATerm))
{
  ATerm l_2 (ATerm t)
  {
    ATerm w_7 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = w_7;
        {
          ATerm x_7 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = x_7;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, l_2);
  t = v_45(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
  ATerm z_7;
  z_7 = t;
  {
    ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL;
    x_19 = t;
    q_19 :
    if(match_cons(x_19, sym_TCons_2))
      {
        y_19 = ATgetArgument(x_19, 0);
        z_19 = ATgetArgument(x_19, 1);
        r_19 :
        if(match_cons(z_19, sym_TCons_2))
          {
            a_20 = ATgetArgument(z_19, 0);
            b_20 = ATgetArgument(z_19, 1);
            s_19 :
            if(match_cons(b_20, sym_TCons_2))
              {
                c_20 = ATgetArgument(b_20, 0);
                d_20 = ATgetArgument(b_20, 1);
                t_19 :
                if(match_cons(d_20, sym_TNil_0))
                  {
                    if(u_19 != NULL && u_19 != y_19)
                      _fail(y_19);
                    else
                      u_19 = y_19;
                    if(v_19 != NULL && v_19 != a_20)
                      _fail(a_20);
                    else
                      v_19 = a_20;
                    if(w_19 != NULL && w_19 != c_20)
                      _fail(c_20);
                    else
                      w_19 = c_20;
                    t = SSL_table_put(not_null(u_19), not_null(v_19), not_null(w_19));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = z_7;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm g_20 = NULL;
  g_20 = t;
  t = SSL_table_create(not_null(g_20));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_20 = NULL;
  k_20 = t;
  {
    ATerm a_8;
    a_8 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_20), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = a_8;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm t_44 (ATerm), ATerm u_44 (ATerm))
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
  q_20 = t;
  p_20 :
  if(match_cons(q_20, sym_Cons_2))
    {
      r_20 = ATgetArgument(q_20, 0);
      s_20 = ATgetArgument(q_20, 1);
      {
        ATerm v_20 = NULL;
        t = not_null(r_20);
        t = t_44(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = u_44(t);
        v_20 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_20), not_null(s_20));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm v_44 (ATerm), ATerm w_44 (ATerm))
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL;
  d_21 = t;
  b_21 :
  if(match_cons(d_21, sym_Cons_2))
    {
      e_21 = ATgetArgument(d_21, 0);
      f_21 = ATgetArgument(d_21, 1);
      c_21 :
      if(match_cons(f_21, sym_Cons_2))
        {
          g_21 = ATgetArgument(f_21, 0);
          h_21 = ATgetArgument(f_21, 1);
          {
            ATerm l_21 = NULL;
            t = not_null(e_21);
            t = v_44(t);
            t = not_null(g_21);
            t = w_44(t);
            l_21 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_21), not_null(h_21));
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
  ATerm b_8 = t;
  if(PushChoice()==0)
    {
      ATerm x_2 (ATerm t)
      {
        ATerm j_22 = NULL;
        j_22 = t;
        p_21 :
        if(!(match_string(j_22, "-S")))
          _fail(t);
        return(t);
      }
      ATerm y_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, x_2, y_2);
      PopChoice();
    }
  else
    {
      t = b_8;
      {
        ATerm d_8 = t;
        if(PushChoice()==0)
          {
            ATerm z_2 (ATerm t)
            {
              ATerm k_22 = NULL;
              k_22 = t;
              q_21 :
              if(!(match_string(k_22, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm b_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, z_2, b_3);
            PopChoice();
          }
        else
          {
            t = d_8;
            {
              ATerm e_8 = t;
              if(PushChoice()==0)
                {
                  ATerm c_3 (ATerm t)
                  {
                    ATerm l_22 = NULL;
                    l_22 = t;
                    r_21 :
                    if(!(match_string(l_22, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm d_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, c_3, d_3);
                  PopChoice();
                }
              else
                {
                  t = e_8;
                  {
                    ATerm g_8 = t;
                    if(PushChoice()==0)
                      {
                        ATerm e_3 (ATerm t)
                        {
                          ATerm m_22 = NULL;
                          m_22 = t;
                          s_21 :
                          if(!(match_string(m_22, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm f_3 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, e_3, f_3);
                        PopChoice();
                      }
                    else
                      {
                        t = g_8;
                        {
                          ATerm l_8 = t;
                          if(PushChoice()==0)
                            {
                              ATerm g_3 (ATerm t)
                              {
                                ATerm n_22 = NULL;
                                n_22 = t;
                                t_21 :
                                if(!(match_string(n_22, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm q_3 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, g_3, q_3);
                              PopChoice();
                            }
                          else
                            {
                              t = l_8;
                              {
                                ATerm m_8 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm r_3 (ATerm t)
                                    {
                                      ATerm o_22 = NULL;
                                      o_22 = t;
                                      u_21 :
                                      if(!(match_string(o_22, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm z_3 (ATerm t)
                                    {
                                      ATerm p_22 = NULL;
                                      p_22 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(p_22));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, r_3, z_3);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = m_8;
                                    {
                                      ATerm n_8 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm a_4 (ATerm t)
                                          {
                                            ATerm r_22 = NULL;
                                            r_22 = t;
                                            w_21 :
                                            if(!(match_string(r_22, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm b_4 (ATerm t)
                                          {
                                            ATerm s_22 = NULL;
                                            s_22 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_22));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, a_4, b_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = n_8;
                                          {
                                            ATerm o_8 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm c_4 (ATerm t)
                                                {
                                                  ATerm u_22 = NULL;
                                                  u_22 = t;
                                                  y_21 :
                                                  if(!(match_string(u_22, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm h_4 (ATerm t)
                                                {
                                                  ATerm v_22 = NULL;
                                                  v_22 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_22));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, c_4, h_4);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = o_8;
                                                {
                                                  ATerm x_8 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm i_4 (ATerm t)
                                                      {
                                                        ATerm x_22 = NULL;
                                                        x_22 = t;
                                                        a_22 :
                                                        if(!(match_string(x_22, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm j_4 (ATerm t)
                                                      {
                                                        ATerm y_22 = NULL;
                                                        y_22 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(y_22));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, i_4, j_4);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = x_8;
                                                      {
                                                        ATerm y_8 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm k_4 (ATerm t)
                                                            {
                                                              ATerm a_23 = NULL;
                                                              a_23 = t;
                                                              c_22 :
                                                              if(!(match_string(a_23, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm t_4 (ATerm t)
                                                            {
                                                              ATerm b_23 = NULL;
                                                              b_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_23));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, k_4, t_4);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = y_8;
                                                            {
                                                              ATerm z_8 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm u_4 (ATerm t)
                                                                  {
                                                                    ATerm d_23 = NULL;
                                                                    d_23 = t;
                                                                    e_22 :
                                                                    if(!(match_string(d_23, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm v_4 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, u_4, v_4);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = z_8;
                                                                  {
                                                                    ATerm a_9 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm w_4 (ATerm t)
                                                                        {
                                                                          ATerm e_23 = NULL;
                                                                          e_23 = t;
                                                                          f_22 :
                                                                          if(!(match_string(e_23, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm f_5 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, w_4, f_5);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_9;
                                                                        {
                                                                          ATerm f_9 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm g_5 (ATerm t)
                                                                              {
                                                                                ATerm f_23 = NULL;
                                                                                f_23 = t;
                                                                                g_22 :
                                                                                if(!(match_string(f_23, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm h_5 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, g_5, h_5);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_9;
                                                                              {
                                                                                ATerm g_9 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm i_5 (ATerm t)
                                                                                    {
                                                                                      ATerm g_23 = NULL;
                                                                                      g_23 = t;
                                                                                      h_22 :
                                                                                      if(!(match_string(g_23, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm j_5 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, i_5, j_5);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = g_9;
                                                                                    {
                                                                                      ATerm l_5 (ATerm t)
                                                                                      {
                                                                                        ATerm h_23 = NULL;
                                                                                        h_23 = t;
                                                                                        i_22 :
                                                                                        if(!(match_string(h_23, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm n_5 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, l_5, n_5);
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
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
  p_23 = t;
  o_23 :
  if(match_cons(p_23, sym_Cons_2))
    {
      q_23 = ATgetArgument(p_23, 0);
      r_23 = ATgetArgument(p_23, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_23)), not_null(r_23));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_44 (ATerm))
{
  ATerm o_5 (ATerm t)
  {
    ATerm w_23 = NULL;
    w_23 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_23));
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    ATerm h_9 = t;
    if(PushChoice()==0)
      {
        ATerm i_9 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = i_9;
            t = r_44(t);
            t = Cons_2(t, _id, p_5);
          }
        PopChoice();
      }
    else
      {
        t = h_9;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, o_5, p_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm k_45 (ATerm), ATerm l_45 (ATerm), ATerm m_45 (ATerm))
{
  ATerm q_5 (ATerm t)
  {
    ATerm k_9 = t;
    if(PushChoice()==0)
      {
        t = l_45(t);
        PopChoice();
      }
    else
      {
        t = k_9;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, q_5);
  t = store_options_0(t);
  {
    ATerm l_9 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, m_45);
        PopChoice();
      }
    else
      {
        t = l_9;
        {
          ATerm m_9 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, k_45);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = m_9;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm f_45 (ATerm), ATerm g_45 (ATerm))
{
  t = iowrap_3(t, f_45, g_45, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm c_45 (ATerm))
{
  ATerm r_5 (ATerm t)
  {
    ATerm s_5 (ATerm t)
    {
      t = TCons_2(t, c_45, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, s_5);
    return(t);
  }
  t = iowrap_2(t, r_5, _fail);
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm y_5 (ATerm t)
    {
      ATerm c_6 (ATerm t)
      {
        ATerm d_6 (ATerm t)
        {
          t = Strategies_1(t, rename_sdefs_0);
          return(t);
        }
        t = Cons_2(t, d_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, c_6);
      return(t);
    }
    t = Specification_1(t, y_5);
    return(t);
  }
  t = iowrap_1(t, v_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_defs_0(t);
  return(t);
}
