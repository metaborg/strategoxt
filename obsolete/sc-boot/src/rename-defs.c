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
ATerm topdown_1 (ATerm, ATerm d_60 (ATerm));
ATerm map_1 (ATerm, ATerm m_57 (ATerm));
ATerm table_push_0 (ATerm);
ATerm assert_1 (ATerm, ATerm r_43 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm t_43 (ATerm));
ATerm HoArg_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm a_58 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm c_0 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm escape_1 (ATerm, ATerm i_48 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm NameMod_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm l_52 (ATerm), ATerm m_52 (ATerm), ATerm n_52 (ATerm));
ATerm length_0 (ATerm);
ATerm RenameSDef_0 (ATerm);
ATerm rename_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm e_41 (ATerm));
ATerm Cons_2 (ATerm, ATerm j_43 (ATerm), ATerm k_43 (ATerm));
ATerm Specification_1 (ATerm, ATerm g_41 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm f_43 (ATerm), ATerm g_43 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm s_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm y_45 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm a_59 (ATerm), ATerm b_59 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm o_38 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm u_57 (ATerm));
ATerm option_defined_1 (ATerm, ATerm c_45 (ATerm));
ATerm need_help_1 (ATerm, ATerm x_45 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm v_44 (ATerm), ATerm w_44 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm x_44 (ATerm), ATerm y_44 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_44 (ATerm));
ATerm iowrap_3 (ATerm, ATerm m_45 (ATerm), ATerm n_45 (ATerm), ATerm o_45 (ATerm));
ATerm iowrap_2 (ATerm, ATerm h_45 (ATerm), ATerm i_45 (ATerm));
ATerm iowrap_1 (ATerm, ATerm e_45 (ATerm));
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
            ATerm z_1 = NULL;
            t = not_null(w_1);
            {
              ATerm b_2 = NULL;
              t = length_0(t);
              z_1 = t;
              {
                ATerm g_6 = t;
                if(PushChoice()==0)
                  {
                    ATerm c_2 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_1), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = RenameVar_0(t);
                    c_2 = t;
                    if(b_2 != NULL && b_2 != c_2)
                      _fail(c_2);
                    else
                      b_2 = c_2;
                    PopChoice();
                  }
                else
                  {
                    t = g_6;
                    {
                      ATerm d_2 = NULL;
                      t = not_null(v_1);
                      t = HoArg_0(t);
                      d_2 = t;
                      if(b_2 != NULL && b_2 != d_2)
                        _fail(d_2);
                      else
                        b_2 = d_2;
                    }
                  }
                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_2)), not_null(w_1));
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
ATerm topdown_1 (ATerm t, ATerm d_60 (ATerm))
{
  ATerm i_2 (ATerm t)
  {
    t = d_60(t);
    t = _all(t, i_2);
    return(t);
  }
  t = i_2(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm m_57 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    ATerm h_6 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = h_6;
        t = Cons_2(t, m_57, j_2);
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
                  ATerm i_6;
                  i_6 = t;
                  {
                    ATerm a_3 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_2), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm k_6 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = k_6;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      a_3 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_2), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_2), not_null(a_3)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = i_6;
                }
              else
                _fail(t);
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
ATerm assert_1 (ATerm t, ATerm r_43 (ATerm))
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
              ATerm p_6;
              p_6 = t;
              {
                ATerm v_3 = NULL;
                ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL;
                t = r_43(t);
                v_3 = t;
                if(s_3 != NULL && s_3 != v_3)
                  _fail(v_3);
                else
                  s_3 = v_3;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_3), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm q_6 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_3), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = q_6;
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
              t = p_6;
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
ATerm rewrite_1 (ATerm t, ATerm t_43 (ATerm))
{
  ATerm k_5 = NULL;
  ATerm m_5 = NULL;
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = t_43(t);
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
    ATerm r_6 = t;
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
        t = r_6;
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
ATerm at_end_1 (ATerm t, ATerm a_58 (ATerm))
{
  ATerm j_6 (ATerm t)
  {
    ATerm s_6 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, j_6);
        PopChoice();
      }
    else
      {
        t = s_6;
        t = Nil_0(t);
        t = a_58(t);
      }
    return(t);
  }
  t = j_6(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_6 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = t_6;
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
ATerm escape_1 (ATerm t, ATerm i_48 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm f_8 (ATerm t)
    {
      ATerm v_6 = t;
      if(PushChoice()==0)
        {
          t = i_48(t, f_8);
          PopChoice();
        }
      else
        {
          t = v_6;
          {
            ATerm w_6 = t;
            if(PushChoice()==0)
              {
                t = Cons_2(t, _id, f_8);
                PopChoice();
              }
            else
              {
                t = w_6;
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
              ATerm x_6 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(t_8), not_null(v_8));
                  PopChoice();
                }
              else
                {
                  t = x_6;
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
ATerm foldr_3 (ATerm t, ATerm l_52 (ATerm), ATerm m_52 (ATerm), ATerm n_52 (ATerm))
{
  ATerm y_6 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = l_52(t);
      PopChoice();
    }
  else
    {
      t = y_6;
      {
        ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
        e_9 = t;
        d_9 :
        if(match_cons(e_9, sym_Cons_2))
          {
            f_9 = ATgetArgument(e_9, 0);
            g_9 = ATgetArgument(e_9, 1);
            {
              ATerm j_9 = NULL;
              t = not_null(f_9);
              {
                ATerm q_9 = NULL;
                t = n_52(t);
                j_9 = t;
                t = not_null(g_9);
                t = foldr_3(t, l_52, m_52, n_52);
                q_9 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_9), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_9), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = m_52(t);
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
  ATerm i_0 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm j_0 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, i_0, add_0, j_0);
  return(t);
}
ATerm RenameSDef_0 (ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL;
  c_10 = t;
  b_10 :
  if(match_cons(c_10, sym_SDef_3))
    {
      d_10 = ATgetArgument(c_10, 0);
      e_10 = ATgetArgument(c_10, 1);
      f_10 = ATgetArgument(c_10, 2);
      {
        ATerm j_10 = NULL;
        t = not_null(e_10);
        {
          ATerm l_10 = NULL;
          t = length_0(t);
          j_10 = t;
          t = not_null(d_10);
          t = try_1(t, NameMod_0);
          {
            ATerm n_10 = NULL;
            t = cify_0(t);
            l_10 = t;
            t = not_null(j_10);
            {
              ATerm p_10 = NULL;
              t = int_to_string_0(t);
              n_10 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_10), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("_", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_10), (ATerm) ATmakeAppl(sym_Nil_0))));
              t = concat_strings_0(t);
              p_10 = t;
              {
                ATerm z_6;
                z_6 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(j_10), not_null(d_10)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue)), not_null(p_10)), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm k_0 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
                    return(t);
                  }
                  t = assert_1(t, k_0);
                }
                t = z_6;
                {
                  ATerm a_7 = t;
                  if(PushChoice()==0)
                    {
                      t = not_null(d_10);
                      t = HoArg_0(t);
                      {
                        ATerm b_7;
                        b_7 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(d_10)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Undefined_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                        {
                          ATerm l_0 (ATerm t)
                          {
                            t = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
                            return(t);
                          }
                          t = assert_1(t, l_0);
                        }
                        t = b_7;
                      }
                      PopChoice();
                    }
                  else
                    {
                      t = a_7;
                      {
                        ATerm c_7;
                        c_7 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(d_10)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue)), not_null(p_10)), (ATerm) ATmakeAppl(sym_TNil_0)));
                        {
                          ATerm m_0 (ATerm t)
                          {
                            t = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
                            return(t);
                          }
                          t = assert_1(t, m_0);
                        }
                        t = c_7;
                      }
                    }
                  t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(p_10), not_null(e_10), not_null(f_10));
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
    ATerm n_0 (ATerm t)
    {
      ATerm o_0 (ATerm t)
      {
        t = try_1(t, RenameCall_0);
        return(t);
      }
      t = topdown_1(t, o_0);
      return(t);
    }
    t = map_1(t, n_0);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm e_41 (ATerm))
{
  ATerm a_11 = NULL,g_11 = NULL;
  a_11 = t;
  y_10 :
  if(match_cons(a_11, sym_Strategies_1))
    {
      g_11 = ATgetArgument(a_11, 0);
      {
        ATerm i_11 = NULL;
        t = not_null(g_11);
        t = e_41(t);
        i_11 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(i_11));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_43 (ATerm), ATerm k_43 (ATerm))
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
  t_11 = t;
  s_11 :
  if(match_cons(t_11, sym_Cons_2))
    {
      u_11 = ATgetArgument(t_11, 0);
      v_11 = ATgetArgument(t_11, 1);
      {
        ATerm a_12 = NULL;
        t = not_null(u_11);
        {
          ATerm c_12 = NULL;
          t = j_43(t);
          a_12 = t;
          t = not_null(v_11);
          t = k_43(t);
          c_12 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_12), not_null(c_12));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm g_41 (ATerm))
{
  ATerm l_12 = NULL,m_12 = NULL;
  l_12 = t;
  j_12 :
  if(match_cons(l_12, sym_Specification_1))
    {
      m_12 = ATgetArgument(l_12, 0);
      {
        ATerm o_12 = NULL;
        t = not_null(m_12);
        t = g_41(t);
        o_12 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(o_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm t_12 = NULL;
  t_12 = t;
  s_12 :
  if(!(match_cons(t_12, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm f_43 (ATerm), ATerm g_43 (ATerm))
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
  y_12 = t;
  x_12 :
  if(match_cons(y_12, sym_TCons_2))
    {
      z_12 = ATgetArgument(y_12, 0);
      a_13 = ATgetArgument(y_12, 1);
      {
        ATerm j_13 = NULL;
        t = not_null(z_12);
        {
          ATerm l_13 = NULL;
          t = f_43(t);
          j_13 = t;
          t = not_null(a_13);
          t = g_43(t);
          l_13 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_13), not_null(l_13));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm i_14 = NULL;
  ATerm i_7;
  i_7 = t;
  {
    ATerm p_0 (ATerm t)
    {
      ATerm j_14 = NULL,k_14 = NULL;
      j_14 = t;
      h_14 :
      if(match_cons(j_14, sym_Program_1))
        {
          k_14 = ATgetArgument(j_14, 0);
          if(i_14 != NULL && i_14 != k_14)
            _fail(k_14);
          else
            i_14 = k_14;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, p_0);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_14), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm exit_0 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  t = SSL_exit(not_null(n_14));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
  w_14 = t;
  r_14 :
  if(match_cons(w_14, sym_TCons_2))
    {
      x_14 = ATgetArgument(w_14, 0);
      d_15 = ATgetArgument(w_14, 1);
      u_14 :
      if(match_cons(d_15, sym_TCons_2))
        {
          e_15 = ATgetArgument(d_15, 0);
          f_15 = ATgetArgument(d_15, 1);
          v_14 :
          if(match_cons(f_15, sym_TNil_0))
            {
              ATerm k_7;
              k_7 = t;
              t = SSL_printnl(not_null(x_14), not_null(e_15));
              t = k_7;
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
ATerm try_1 (ATerm t, ATerm s_59 (ATerm))
{
  ATerm l_7 = t;
  if(PushChoice()==0)
    {
      t = s_59(t);
      PopChoice();
    }
  else
    t = l_7;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL;
  ATerm q_0 (ATerm t)
  {
    ATerm r_0 (ATerm t)
    {
      ATerm n_7 = t;
      if(PushChoice()==0)
        {
          ATerm u_0 (ATerm t)
          {
            ATerm q_15 = NULL;
            q_15 = t;
            j_15 :
            if(!(match_cons(q_15, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, u_0);
          PopChoice();
          _fail(t);
        }
      else
        t = n_7;
      return(t);
    }
    ATerm t_0 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, r_0, t_0);
    {
      ATerm f_1 (ATerm t)
      {
        ATerm k_1 (ATerm t)
        {
          ATerm r_15 = NULL,s_15 = NULL;
          r_15 = t;
          l_15 :
          if(match_cons(r_15, sym_Runtime_1))
            {
              s_15 = ATgetArgument(r_15, 0);
              if(p_15 != NULL && p_15 != s_15)
                _fail(s_15);
              else
                p_15 = s_15;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, k_1);
        return(t);
      }
      ATerm g_1 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, f_1, g_1);
      {
        ATerm l_1 (ATerm t)
        {
          ATerm n_1 (ATerm t)
          {
            ATerm t_15 = NULL,u_15 = NULL;
            t_15 = t;
            n_15 :
            if(match_cons(t_15, sym_Program_1))
              {
                u_15 = ATgetArgument(t_15, 0);
                if(o_15 != NULL && o_15 != u_15)
                  _fail(u_15);
                else
                  o_15 = u_15;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, n_1);
          return(t);
        }
        ATerm m_1 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, l_1, m_1);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_15), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_15), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, q_0);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL;
  d_16 = t;
  a_16 :
  if(match_cons(d_16, sym_TCons_2))
    {
      e_16 = ATgetArgument(d_16, 0);
      f_16 = ATgetArgument(d_16, 1);
      b_16 :
      if(match_cons(f_16, sym_TCons_2))
        {
          g_16 = ATgetArgument(f_16, 0);
          h_16 = ATgetArgument(f_16, 1);
          c_16 :
          if(match_cons(h_16, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(e_16), not_null(g_16));
          else
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
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
  p_16 = t;
  m_16 :
  if(match_cons(p_16, sym_TCons_2))
    {
      q_16 = ATgetArgument(p_16, 0);
      r_16 = ATgetArgument(p_16, 1);
      n_16 :
      if(match_cons(r_16, sym_TCons_2))
        {
          s_16 = ATgetArgument(r_16, 0);
          t_16 = ATgetArgument(r_16, 1);
          o_16 :
          if(match_cons(t_16, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(q_16), not_null(s_16));
          else
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
  ATerm b_17 = NULL;
  ATerm o_7;
  o_7 = t;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm q_7 = t;
      if(PushChoice()==0)
        {
          ATerm q_1 (ATerm t)
          {
            ATerm c_17 = NULL,e_17 = NULL;
            c_17 = t;
            y_16 :
            if(match_cons(c_17, sym_Output_1))
              {
                e_17 = ATgetArgument(c_17, 0);
                if(b_17 != NULL && b_17 != e_17)
                  _fail(e_17);
                else
                  b_17 = e_17;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, q_1);
          PopChoice();
        }
      else
        {
          t = q_7;
          {
            ATerm f_17 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            f_17 = t;
            if(b_17 != NULL && b_17 != f_17)
              _fail(f_17);
            else
              b_17 = f_17;
          }
        }
      return(t);
    }
    ATerm p_1 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, o_1, p_1);
  }
  t = o_7;
  {
    ATerm x_1 (ATerm t)
    {
      ATerm y_1 (ATerm t)
      {
        ATerm a_2 (ATerm t)
        {
          t = not_null(b_17);
          return(t);
        }
        t = split_2(t, a_2, _id);
        return(t);
      }
      t = TCons_2(t, y_1, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, x_1);
    {
      ATerm r_7 = t;
      if(PushChoice()==0)
        {
          ATerm e_2 (ATerm t)
          {
            ATerm g_2 (ATerm t)
            {
              ATerm g_17 = NULL;
              g_17 = t;
              a_17 :
              if(!(match_cons(g_17, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, g_2);
            return(t);
          }
          ATerm f_2 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, e_2, f_2);
          PopChoice();
        }
      else
        {
          t = r_7;
          {
            ATerm h_2 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, h_2);
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
ATerm apply_strategy_1 (ATerm t, ATerm y_45 (ATerm))
{
  ATerm o_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
  ATerm s_7;
  s_7 = t;
  t = dtime_0(t);
  t = s_7;
  t = y_45(t);
  {
    ATerm t_7;
    t_7 = t;
    {
      ATerm p_17 = NULL;
      t = dtime_0(t);
      p_17 = t;
      if(o_17 != NULL && o_17 != p_17)
        _fail(p_17);
      else
        o_17 = p_17;
    }
    t = t_7;
    q_17 = t;
    l_17 :
    if(match_cons(q_17, sym_TCons_2))
      {
        r_17 = ATgetArgument(q_17, 0);
        s_17 = ATgetArgument(q_17, 1);
        m_17 :
        if(match_cons(s_17, sym_TCons_2))
          {
            t_17 = ATgetArgument(s_17, 0);
            u_17 = ATgetArgument(s_17, 1);
            n_17 :
            if(match_cons(u_17, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(o_17)), not_null(r_17)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_17), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm f_18 = NULL;
  f_18 = t;
  t = SSL_ReadFromFile(not_null(f_18));
  return(t);
}
ATerm split_2 (ATerm t, ATerm a_59 (ATerm), ATerm b_59 (ATerm))
{
  ATerm l_18 = NULL;
  ATerm n_18 = NULL;
  l_18 = t;
  {
    ATerm p_18 = NULL;
    t = a_59(t);
    n_18 = t;
    t = not_null(l_18);
    t = b_59(t);
    p_18 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_18), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_18 = NULL;
  ATerm u_7;
  u_7 = t;
  {
    ATerm v_7 = t;
    if(PushChoice()==0)
      {
        ATerm k_2 (ATerm t)
        {
          ATerm y_18 = NULL,z_18 = NULL;
          y_18 = t;
          v_18 :
          if(match_cons(y_18, sym_Input_1))
            {
              z_18 = ATgetArgument(y_18, 0);
              if(x_18 != NULL && x_18 != z_18)
                _fail(z_18);
              else
                x_18 = z_18;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, k_2);
        PopChoice();
      }
    else
      {
        t = v_7;
        {
          ATerm a_19 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          a_19 = t;
          if(x_18 != NULL && x_18 != a_19)
            _fail(a_19);
          else
            x_18 = a_19;
        }
      }
  }
  t = u_7;
  {
    ATerm l_2 (ATerm t)
    {
      t = not_null(x_18);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, l_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_19 = NULL;
  e_19 = t;
  d_19 :
  if(!(match_cons(e_19, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm o_38 (ATerm))
{
  ATerm i_19 = NULL,j_19 = NULL;
  i_19 = t;
  h_19 :
  if(match_cons(i_19, sym_Undefined_1))
    {
      j_19 = ATgetArgument(i_19, 0);
      {
        ATerm l_19 = NULL;
        t = not_null(j_19);
        t = o_38(t);
        l_19 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm q_19 = NULL;
  q_19 = t;
  p_19 :
  if(!(match_cons(q_19, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm u_57 (ATerm))
{
  ATerm r_19 (ATerm t)
  {
    ATerm w_7 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, u_57, _id);
        PopChoice();
      }
    else
      {
        t = w_7;
        t = Cons_2(t, _id, r_19);
      }
    return(t);
  }
  t = r_19(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm c_45 (ATerm))
{
  t = fetch_1(t, c_45);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm x_45 (ATerm))
{
  ATerm x_2 (ATerm t)
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
          ATerm z_7 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = z_7;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, x_2);
  t = x_45(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
  ATerm a_8;
  a_8 = t;
  {
    ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
    a_20 = t;
    t_19 :
    if(match_cons(a_20, sym_TCons_2))
      {
        b_20 = ATgetArgument(a_20, 0);
        c_20 = ATgetArgument(a_20, 1);
        u_19 :
        if(match_cons(c_20, sym_TCons_2))
          {
            d_20 = ATgetArgument(c_20, 0);
            e_20 = ATgetArgument(c_20, 1);
            v_19 :
            if(match_cons(e_20, sym_TCons_2))
              {
                f_20 = ATgetArgument(e_20, 0);
                g_20 = ATgetArgument(e_20, 1);
                w_19 :
                if(match_cons(g_20, sym_TNil_0))
                  {
                    if(x_19 != NULL && x_19 != b_20)
                      _fail(b_20);
                    else
                      x_19 = b_20;
                    if(y_19 != NULL && y_19 != d_20)
                      _fail(d_20);
                    else
                      y_19 = d_20;
                    if(z_19 != NULL && z_19 != f_20)
                      _fail(f_20);
                    else
                      z_19 = f_20;
                    t = SSL_table_put(not_null(x_19), not_null(y_19), not_null(z_19));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = a_8;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm j_20 = NULL;
  j_20 = t;
  t = SSL_table_create(not_null(j_20));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm n_20 = NULL;
  n_20 = t;
  {
    ATerm b_8;
    b_8 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_20), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = b_8;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm v_44 (ATerm), ATerm w_44 (ATerm))
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t_20 = t;
  s_20 :
  if(match_cons(t_20, sym_Cons_2))
    {
      u_20 = ATgetArgument(t_20, 0);
      v_20 = ATgetArgument(t_20, 1);
      {
        ATerm y_20 = NULL;
        t = not_null(u_20);
        t = v_44(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = w_44(t);
        y_20 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_20), not_null(v_20));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm x_44 (ATerm), ATerm y_44 (ATerm))
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL;
  g_21 = t;
  e_21 :
  if(match_cons(g_21, sym_Cons_2))
    {
      h_21 = ATgetArgument(g_21, 0);
      i_21 = ATgetArgument(g_21, 1);
      f_21 :
      if(match_cons(i_21, sym_Cons_2))
        {
          j_21 = ATgetArgument(i_21, 0);
          k_21 = ATgetArgument(i_21, 1);
          {
            ATerm o_21 = NULL;
            t = not_null(h_21);
            t = x_44(t);
            t = not_null(j_21);
            t = y_44(t);
            o_21 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_21), not_null(k_21));
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
  ATerm d_8 = t;
  if(PushChoice()==0)
    {
      ATerm y_2 (ATerm t)
      {
        ATerm m_22 = NULL;
        m_22 = t;
        s_21 :
        if(!(match_string(m_22, "-S")))
          _fail(t);
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, y_2, z_2);
      PopChoice();
    }
  else
    {
      t = d_8;
      {
        ATerm e_8 = t;
        if(PushChoice()==0)
          {
            ATerm b_3 (ATerm t)
            {
              ATerm n_22 = NULL;
              n_22 = t;
              t_21 :
              if(!(match_string(n_22, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm c_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, b_3, c_3);
            PopChoice();
          }
        else
          {
            t = e_8;
            {
              ATerm g_8 = t;
              if(PushChoice()==0)
                {
                  ATerm d_3 (ATerm t)
                  {
                    ATerm o_22 = NULL;
                    o_22 = t;
                    u_21 :
                    if(!(match_string(o_22, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm e_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, d_3, e_3);
                  PopChoice();
                }
              else
                {
                  t = g_8;
                  {
                    ATerm l_8 = t;
                    if(PushChoice()==0)
                      {
                        ATerm f_3 (ATerm t)
                        {
                          ATerm p_22 = NULL;
                          p_22 = t;
                          v_21 :
                          if(!(match_string(p_22, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm g_3 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, f_3, g_3);
                        PopChoice();
                      }
                    else
                      {
                        t = l_8;
                        {
                          ATerm m_8 = t;
                          if(PushChoice()==0)
                            {
                              ATerm q_3 (ATerm t)
                              {
                                ATerm q_22 = NULL;
                                q_22 = t;
                                w_21 :
                                if(!(match_string(q_22, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm r_3 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, q_3, r_3);
                              PopChoice();
                            }
                          else
                            {
                              t = m_8;
                              {
                                ATerm n_8 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm z_3 (ATerm t)
                                    {
                                      ATerm r_22 = NULL;
                                      r_22 = t;
                                      x_21 :
                                      if(!(match_string(r_22, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm a_4 (ATerm t)
                                    {
                                      ATerm s_22 = NULL;
                                      s_22 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(s_22));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, z_3, a_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = n_8;
                                    {
                                      ATerm o_8 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm b_4 (ATerm t)
                                          {
                                            ATerm u_22 = NULL;
                                            u_22 = t;
                                            z_21 :
                                            if(!(match_string(u_22, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm c_4 (ATerm t)
                                          {
                                            ATerm v_22 = NULL;
                                            v_22 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_22));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, b_4, c_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = o_8;
                                          {
                                            ATerm x_8 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm h_4 (ATerm t)
                                                {
                                                  ATerm x_22 = NULL;
                                                  x_22 = t;
                                                  b_22 :
                                                  if(!(match_string(x_22, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm i_4 (ATerm t)
                                                {
                                                  ATerm y_22 = NULL;
                                                  y_22 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_22));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, h_4, i_4);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = x_8;
                                                {
                                                  ATerm y_8 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm j_4 (ATerm t)
                                                      {
                                                        ATerm a_23 = NULL;
                                                        a_23 = t;
                                                        d_22 :
                                                        if(!(match_string(a_23, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm k_4 (ATerm t)
                                                      {
                                                        ATerm b_23 = NULL;
                                                        b_23 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_23));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, j_4, k_4);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = y_8;
                                                      {
                                                        ATerm z_8 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm t_4 (ATerm t)
                                                            {
                                                              ATerm d_23 = NULL;
                                                              d_23 = t;
                                                              f_22 :
                                                              if(!(match_string(d_23, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm u_4 (ATerm t)
                                                            {
                                                              ATerm e_23 = NULL;
                                                              e_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_23));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, t_4, u_4);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = z_8;
                                                            {
                                                              ATerm a_9 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm v_4 (ATerm t)
                                                                  {
                                                                    ATerm g_23 = NULL;
                                                                    g_23 = t;
                                                                    h_22 :
                                                                    if(!(match_string(g_23, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm w_4 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, v_4, w_4);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = a_9;
                                                                  {
                                                                    ATerm b_9 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm f_5 (ATerm t)
                                                                        {
                                                                          ATerm h_23 = NULL;
                                                                          h_23 = t;
                                                                          i_22 :
                                                                          if(!(match_string(h_23, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm g_5 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, f_5, g_5);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_9;
                                                                        {
                                                                          ATerm c_9 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm h_5 (ATerm t)
                                                                              {
                                                                                ATerm i_23 = NULL;
                                                                                i_23 = t;
                                                                                j_22 :
                                                                                if(!(match_string(i_23, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm i_5 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, h_5, i_5);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = c_9;
                                                                              {
                                                                                ATerm h_9 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm j_5 (ATerm t)
                                                                                    {
                                                                                      ATerm j_23 = NULL;
                                                                                      j_23 = t;
                                                                                      k_22 :
                                                                                      if(!(match_string(j_23, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm l_5 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, j_5, l_5);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = h_9;
                                                                                    {
                                                                                      ATerm n_5 (ATerm t)
                                                                                      {
                                                                                        ATerm k_23 = NULL;
                                                                                        k_23 = t;
                                                                                        l_22 :
                                                                                        if(!(match_string(k_23, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm o_5 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, n_5, o_5);
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
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
  s_23 = t;
  r_23 :
  if(match_cons(s_23, sym_Cons_2))
    {
      t_23 = ATgetArgument(s_23, 0);
      u_23 = ATgetArgument(s_23, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_23)), not_null(u_23));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_44 (ATerm))
{
  ATerm p_5 (ATerm t)
  {
    ATerm b_24 = NULL;
    b_24 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_24));
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    ATerm i_9 = t;
    if(PushChoice()==0)
      {
        ATerm k_9 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = k_9;
            t = t_44(t);
            t = Cons_2(t, _id, q_5);
          }
        PopChoice();
      }
    else
      {
        t = i_9;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, p_5, q_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm m_45 (ATerm), ATerm n_45 (ATerm), ATerm o_45 (ATerm))
{
  ATerm r_5 (ATerm t)
  {
    ATerm l_9 = t;
    if(PushChoice()==0)
      {
        t = n_45(t);
        PopChoice();
      }
    else
      {
        t = l_9;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, r_5);
  t = store_options_0(t);
  {
    ATerm m_9 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, o_45);
        PopChoice();
      }
    else
      {
        t = m_9;
        {
          ATerm n_9 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, m_45);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = n_9;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm h_45 (ATerm), ATerm i_45 (ATerm))
{
  t = iowrap_3(t, h_45, i_45, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm e_45 (ATerm))
{
  ATerm s_5 (ATerm t)
  {
    ATerm v_5 (ATerm t)
    {
      t = TCons_2(t, e_45, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, v_5);
    return(t);
  }
  t = iowrap_2(t, s_5, _fail);
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm c_6 (ATerm t)
    {
      ATerm d_6 (ATerm t)
      {
        ATerm f_6 (ATerm t)
        {
          t = Strategies_1(t, rename_sdefs_0);
          return(t);
        }
        t = Cons_2(t, f_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, d_6);
      return(t);
    }
    t = Specification_1(t, c_6);
    return(t);
  }
  t = iowrap_1(t, y_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_defs_0(t);
  return(t);
}
