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
ATerm debug_1 (ATerm, ATerm l_36 (ATerm));
ATerm Let_2 (ATerm, ATerm g_30 (ATerm), ATerm h_30 (ATerm));
ATerm Op_2 (ATerm, ATerm t_29 (ATerm), ATerm u_29 (ATerm));
ATerm Var_1 (ATerm, ATerm p_29 (ATerm));
ATerm As_2 (ATerm, ATerm f_28 (ATerm), ATerm g_28 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm h_28 (ATerm));
ATerm Str_1 (ATerm, ATerm s_29 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm r_29 (ATerm));
ATerm Int_1 (ATerm, ATerm q_29 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm l_31 (ATerm), ATerm m_31 (ATerm));
ATerm Where_1 (ATerm, ATerm k_31 (ATerm));
ATerm Scope_2 (ATerm, ATerm i_31 (ATerm), ATerm j_31 (ATerm));
ATerm Build_1 (ATerm, ATerm f_31 (ATerm));
ATerm Match_1 (ATerm, ATerm e_31 (ATerm));
ATerm Thread_1 (ATerm, ATerm b_31 (ATerm));
ATerm All_1 (ATerm, ATerm a_31 (ATerm));
ATerm Some_1 (ATerm, ATerm a_0 (ATerm));
ATerm One_1 (ATerm, ATerm y_30 (ATerm));
ATerm Cong_2 (ATerm, ATerm w_30 (ATerm), ATerm x_30 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm u_30 (ATerm), ATerm v_30 (ATerm));
ATerm Rec_2 (ATerm, ATerm e_30 (ATerm), ATerm f_30 (ATerm));
ATerm SVar_1 (ATerm, ATerm d_30 (ATerm));
ATerm Call_2 (ATerm, ATerm s_30 (ATerm), ATerm t_30 (ATerm));
ATerm LChoice_2 (ATerm, ATerm b_30 (ATerm), ATerm c_30 (ATerm));
ATerm Choice_2 (ATerm, ATerm z_29 (ATerm), ATerm a_30 (ATerm));
ATerm Seq_2 (ATerm, ATerm x_29 (ATerm), ATerm y_29 (ATerm));
ATerm Test_1 (ATerm, ATerm v_29 (ATerm));
ATerm Not_1 (ATerm, ATerm w_29 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm l_30 (ATerm), ATerm m_30 (ATerm));
ATerm SDef_3 (ATerm, ATerm i_30 (ATerm), ATerm j_30 (ATerm), ATerm k_30 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm o_44 (ATerm));
ATerm Strategies_1 (ATerm, ATerm d_29 (ATerm));
ATerm Specification_1 (ATerm, ATerm f_29 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm n_31 (ATerm), ATerm o_31 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm a_51 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm c_36 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm c_38 (ATerm), ATerm d_38 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm w_26 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm v_44 (ATerm));
ATerm option_defined_1 (ATerm, ATerm g_35 (ATerm));
ATerm need_help_1 (ATerm, ATerm b_36 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm z_34 (ATerm), ATerm a_35 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm b_35 (ATerm), ATerm c_35 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_31 (ATerm), ATerm s_31 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_34 (ATerm));
ATerm iowrap_3 (ATerm, ATerm q_35 (ATerm), ATerm r_35 (ATerm), ATerm s_35 (ATerm));
ATerm iowrap_2 (ATerm, ATerm l_35 (ATerm), ATerm m_35 (ATerm));
ATerm iowrap_1 (ATerm, ATerm i_35 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm l_36 (ATerm))
{
  ATerm m_3;
  m_3 = t;
  {
    ATerm b_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm c_0 (ATerm t)
    {
      ATerm d_4 = NULL;
      ATerm f_4 = NULL;
      d_4 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = l_36(t);
      f_4 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_4), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_4), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, b_0, c_0);
    t = printnl_0(t);
  }
  t = m_3;
  return(t);
}
ATerm Let_2 (ATerm t, ATerm g_30 (ATerm), ATerm h_30 (ATerm))
{
  ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL;
  n_4 = t;
  m_4 :
  if(match_cons(n_4, sym_Let_2))
    {
      o_4 = ATgetArgument(n_4, 0);
      p_4 = ATgetArgument(n_4, 1);
      {
        ATerm s_4 = NULL;
        t = not_null(o_4);
        {
          ATerm u_4 = NULL;
          t = g_30(t);
          s_4 = t;
          t = not_null(p_4);
          t = h_30(t);
          u_4 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(s_4), not_null(u_4));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm t_29 (ATerm), ATerm u_29 (ATerm))
{
  ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
  d_5 = t;
  c_5 :
  if(match_cons(d_5, sym_Op_2))
    {
      e_5 = ATgetArgument(d_5, 0);
      f_5 = ATgetArgument(d_5, 1);
      {
        ATerm i_5 = NULL;
        t = not_null(e_5);
        {
          ATerm k_5 = NULL;
          t = t_29(t);
          i_5 = t;
          t = not_null(f_5);
          t = u_29(t);
          k_5 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(i_5), not_null(k_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm p_29 (ATerm))
{
  ATerm s_5 = NULL,t_5 = NULL;
  s_5 = t;
  r_5 :
  if(match_cons(s_5, sym_Var_1))
    {
      t_5 = ATgetArgument(s_5, 0);
      {
        ATerm v_5 = NULL;
        t = not_null(t_5);
        t = p_29(t);
        v_5 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_5));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm As_2 (ATerm t, ATerm f_28 (ATerm), ATerm g_28 (ATerm))
{
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL;
  d_6 = t;
  c_6 :
  if(match_cons(d_6, sym_As_2))
    {
      e_6 = ATgetArgument(d_6, 0);
      f_6 = ATgetArgument(d_6, 1);
      {
        ATerm i_6 = NULL;
        t = not_null(e_6);
        {
          ATerm k_6 = NULL;
          t = f_28(t);
          i_6 = t;
          t = not_null(f_6);
          t = g_28(t);
          k_6 = t;
          t = (ATerm) ATmakeAppl(sym_As_2, not_null(i_6), not_null(k_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm h_28 (ATerm))
{
  ATerm s_6 = NULL,t_6 = NULL;
  s_6 = t;
  r_6 :
  if(match_cons(s_6, sym_BuildDefault_1))
    {
      t_6 = ATgetArgument(s_6, 0);
      {
        ATerm v_6 = NULL;
        t = not_null(t_6);
        t = h_28(t);
        v_6 = t;
        t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(v_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm s_29 (ATerm))
{
  ATerm c_7 = NULL,d_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym_Str_1))
    {
      d_7 = ATgetArgument(c_7, 0);
      {
        ATerm f_7 = NULL;
        t = not_null(d_7);
        t = s_29(t);
        f_7 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, not_null(f_7));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_real_0 (ATerm t)
{
  ATerm k_7 = NULL;
  k_7 = t;
  t = SSL_is_real(not_null(k_7));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm r_29 (ATerm))
{
  ATerm q_7 = NULL,s_7 = NULL;
  q_7 = t;
  p_7 :
  if(match_cons(q_7, sym_Real_1))
    {
      s_7 = ATgetArgument(q_7, 0);
      {
        ATerm x_7 = NULL;
        t = not_null(s_7);
        t = r_29(t);
        x_7 = t;
        t = (ATerm) ATmakeAppl(sym_Real_1, not_null(x_7));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Int_1 (ATerm t, ATerm q_29 (ATerm))
{
  ATerm e_8 = NULL,f_8 = NULL;
  e_8 = t;
  d_8 :
  if(match_cons(e_8, sym_Int_1))
    {
      f_8 = ATgetArgument(e_8, 0);
      {
        ATerm h_8 = NULL;
        t = not_null(f_8);
        t = q_29(t);
        h_8 = t;
        t = (ATerm) ATmakeAppl(sym_Int_1, not_null(h_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm m_8 = NULL;
  m_8 = t;
  l_8 :
  if(!(match_cons(m_8, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm n_3 = t;
  if(PushChoice()==0)
    {
      ATerm o_8 = NULL;
      o_8 = t;
      n_8 :
      if(!(match_cons(o_8, sym_Wld_0)))
        _fail(t);
      PopChoice();
    }
  else
    {
      t = n_3;
      {
        ATerm o_3 = t;
        if(PushChoice()==0)
          {
            t = Var_1(t, is_string_0);
            PopChoice();
          }
        else
          {
            t = o_3;
            {
              ATerm p_3 = t;
              if(PushChoice()==0)
                {
                  t = Int_1(t, is_int_0);
                  PopChoice();
                }
              else
                {
                  t = p_3;
                  {
                    ATerm q_3 = t;
                    if(PushChoice()==0)
                      {
                        t = Real_1(t, is_real_0);
                        PopChoice();
                      }
                    else
                      {
                        t = q_3;
                        {
                          ATerm r_3 = t;
                          if(PushChoice()==0)
                            {
                              t = Str_1(t, is_string_0);
                              PopChoice();
                            }
                          else
                            {
                              t = r_3;
                              {
                                ATerm s_3 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = s_3;
                                    {
                                      ATerm t_3 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm d_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, d_0, term_expression_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = t_3;
                                          {
                                            ATerm u_3 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm e_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, e_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = u_3;
                                                {
                                                  ATerm f_0 (ATerm t)
                                                  {
                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
                                                    return(t);
                                                  }
                                                  t = debug_1(t, f_0);
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
ATerm Prim_2 (ATerm t, ATerm l_31 (ATerm), ATerm m_31 (ATerm))
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
  u_8 = t;
  t_8 :
  if(match_cons(u_8, sym_Prim_2))
    {
      v_8 = ATgetArgument(u_8, 0);
      w_8 = ATgetArgument(u_8, 1);
      {
        ATerm z_8 = NULL;
        t = not_null(v_8);
        {
          ATerm b_9 = NULL;
          t = l_31(t);
          z_8 = t;
          t = not_null(w_8);
          t = m_31(t);
          b_9 = t;
          t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(z_8), not_null(b_9));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Where_1 (ATerm t, ATerm k_31 (ATerm))
{
  ATerm k_9 = NULL,l_9 = NULL;
  k_9 = t;
  j_9 :
  if(match_cons(k_9, sym_Where_1))
    {
      l_9 = ATgetArgument(k_9, 0);
      {
        ATerm n_9 = NULL;
        t = not_null(l_9);
        t = k_31(t);
        n_9 = t;
        t = (ATerm) ATmakeAppl(sym_Where_1, not_null(n_9));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm i_31 (ATerm), ATerm j_31 (ATerm))
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL;
  b_10 = t;
  u_9 :
  if(match_cons(b_10, sym_Scope_2))
    {
      c_10 = ATgetArgument(b_10, 0);
      d_10 = ATgetArgument(b_10, 1);
      {
        ATerm j_10 = NULL;
        t = not_null(c_10);
        {
          ATerm y_10 = NULL;
          t = i_31(t);
          j_10 = t;
          t = not_null(d_10);
          t = j_31(t);
          y_10 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_10), not_null(y_10));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm f_31 (ATerm))
{
  ATerm i_11 = NULL,j_11 = NULL;
  i_11 = t;
  h_11 :
  if(match_cons(i_11, sym_Build_1))
    {
      j_11 = ATgetArgument(i_11, 0);
      {
        ATerm l_11 = NULL;
        t = not_null(j_11);
        t = f_31(t);
        l_11 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(l_11));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm e_31 (ATerm))
{
  ATerm y_11 = NULL,z_11 = NULL;
  y_11 = t;
  x_11 :
  if(match_cons(y_11, sym_Match_1))
    {
      z_11 = ATgetArgument(y_11, 0);
      {
        ATerm c_12 = NULL;
        t = not_null(z_11);
        t = e_31(t);
        c_12 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(c_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm b_31 (ATerm))
{
  ATerm k_12 = NULL,l_12 = NULL;
  k_12 = t;
  j_12 :
  if(match_cons(k_12, sym_Thread_1))
    {
      l_12 = ATgetArgument(k_12, 0);
      {
        ATerm n_12 = NULL;
        t = not_null(l_12);
        t = b_31(t);
        n_12 = t;
        t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(n_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm All_1 (ATerm t, ATerm a_31 (ATerm))
{
  ATerm u_12 = NULL,v_12 = NULL;
  u_12 = t;
  t_12 :
  if(match_cons(u_12, sym_All_1))
    {
      v_12 = ATgetArgument(u_12, 0);
      {
        ATerm x_12 = NULL;
        t = not_null(v_12);
        t = a_31(t);
        x_12 = t;
        t = (ATerm) ATmakeAppl(sym_All_1, not_null(x_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Some_1 (ATerm t, ATerm a_0 (ATerm))
{
  ATerm g_13 = NULL,h_13 = NULL;
  g_13 = t;
  f_13 :
  if(match_cons(g_13, sym_Some_1))
    {
      h_13 = ATgetArgument(g_13, 0);
      {
        ATerm v_3 = t;
        if(PushChoice()==0)
          {
            ATerm j_13 = NULL;
            t = not_null(h_13);
            t = a_0(t);
            j_13 = t;
            t = (ATerm) ATmakeAppl(sym_Some_1, not_null(j_13));
            PopChoice();
          }
        else
          {
            t = v_3;
            {
              ATerm m_13 = NULL;
              t = not_null(h_13);
              t = a_0(t);
              m_13 = t;
              t = (ATerm) ATmakeAppl(sym_Some_1, not_null(m_13));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm One_1 (ATerm t, ATerm y_30 (ATerm))
{
  ATerm v_13 = NULL,w_13 = NULL;
  v_13 = t;
  u_13 :
  if(match_cons(v_13, sym_One_1))
    {
      w_13 = ATgetArgument(v_13, 0);
      {
        ATerm y_13 = NULL;
        t = not_null(w_13);
        t = y_30(t);
        y_13 = t;
        t = (ATerm) ATmakeAppl(sym_One_1, not_null(y_13));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm w_30 (ATerm), ATerm x_30 (ATerm))
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
  g_14 = t;
  f_14 :
  if(match_cons(g_14, sym_Cong_2))
    {
      h_14 = ATgetArgument(g_14, 0);
      i_14 = ATgetArgument(g_14, 1);
      {
        ATerm l_14 = NULL;
        t = not_null(h_14);
        {
          ATerm n_14 = NULL;
          t = w_30(t);
          l_14 = t;
          t = not_null(i_14);
          t = x_30(t);
          n_14 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(l_14), not_null(n_14));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm u_14 = NULL;
  u_14 = t;
  t = SSL_is_int(not_null(u_14));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm u_30 (ATerm), ATerm v_30 (ATerm))
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  b_15 = t;
  a_15 :
  if(match_cons(b_15, sym_Path_2))
    {
      c_15 = ATgetArgument(b_15, 0);
      d_15 = ATgetArgument(b_15, 1);
      {
        ATerm g_15 = NULL;
        t = not_null(c_15);
        {
          ATerm i_15 = NULL;
          t = u_30(t);
          g_15 = t;
          t = not_null(d_15);
          t = v_30(t);
          i_15 = t;
          t = (ATerm) ATmakeAppl(sym_Path_2, not_null(g_15), not_null(i_15));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm e_30 (ATerm), ATerm f_30 (ATerm))
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL;
  r_15 = t;
  q_15 :
  if(match_cons(r_15, sym_Rec_2))
    {
      s_15 = ATgetArgument(r_15, 0);
      t_15 = ATgetArgument(r_15, 1);
      {
        ATerm w_15 = NULL;
        t = not_null(s_15);
        {
          ATerm y_15 = NULL;
          t = e_30(t);
          w_15 = t;
          t = not_null(t_15);
          t = f_30(t);
          y_15 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(w_15), not_null(y_15));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm d_30 (ATerm))
{
  ATerm g_16 = NULL,h_16 = NULL;
  g_16 = t;
  f_16 :
  if(match_cons(g_16, sym_SVar_1))
    {
      h_16 = ATgetArgument(g_16, 0);
      {
        ATerm j_16 = NULL;
        t = not_null(h_16);
        t = d_30(t);
        j_16 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(j_16));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm s_30 (ATerm), ATerm t_30 (ATerm))
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
  r_16 = t;
  q_16 :
  if(match_cons(r_16, sym_Call_2))
    {
      s_16 = ATgetArgument(r_16, 0);
      t_16 = ATgetArgument(r_16, 1);
      {
        ATerm w_16 = NULL;
        t = not_null(s_16);
        {
          ATerm y_16 = NULL;
          t = s_30(t);
          w_16 = t;
          t = not_null(t_16);
          t = t_30(t);
          y_16 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(w_16), not_null(y_16));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm b_30 (ATerm), ATerm c_30 (ATerm))
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
  h_17 = t;
  g_17 :
  if(match_cons(h_17, sym_LChoice_2))
    {
      i_17 = ATgetArgument(h_17, 0);
      j_17 = ATgetArgument(h_17, 1);
      {
        ATerm m_17 = NULL;
        t = not_null(i_17);
        {
          ATerm o_17 = NULL;
          t = b_30(t);
          m_17 = t;
          t = not_null(j_17);
          t = c_30(t);
          o_17 = t;
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(m_17), not_null(o_17));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm z_29 (ATerm), ATerm a_30 (ATerm))
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
  x_17 = t;
  w_17 :
  if(match_cons(x_17, sym_Choice_2))
    {
      y_17 = ATgetArgument(x_17, 0);
      z_17 = ATgetArgument(x_17, 1);
      {
        ATerm c_18 = NULL;
        t = not_null(y_17);
        {
          ATerm e_18 = NULL;
          t = z_29(t);
          c_18 = t;
          t = not_null(z_17);
          t = a_30(t);
          e_18 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(c_18), not_null(e_18));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm x_29 (ATerm), ATerm y_29 (ATerm))
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
  n_18 = t;
  m_18 :
  if(match_cons(n_18, sym_Seq_2))
    {
      o_18 = ATgetArgument(n_18, 0);
      p_18 = ATgetArgument(n_18, 1);
      {
        ATerm s_18 = NULL;
        t = not_null(o_18);
        {
          ATerm v_18 = NULL;
          t = x_29(t);
          s_18 = t;
          t = not_null(p_18);
          t = y_29(t);
          v_18 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_18), not_null(v_18));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Test_1 (ATerm t, ATerm v_29 (ATerm))
{
  ATerm d_19 = NULL,e_19 = NULL;
  d_19 = t;
  c_19 :
  if(match_cons(d_19, sym_Test_1))
    {
      e_19 = ATgetArgument(d_19, 0);
      {
        ATerm g_19 = NULL;
        t = not_null(e_19);
        t = v_29(t);
        g_19 = t;
        t = (ATerm) ATmakeAppl(sym_Test_1, not_null(g_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Not_1 (ATerm t, ATerm w_29 (ATerm))
{
  ATerm n_19 = NULL,o_19 = NULL;
  n_19 = t;
  m_19 :
  if(match_cons(n_19, sym_Not_1))
    {
      o_19 = ATgetArgument(n_19, 0);
      {
        ATerm q_19 = NULL;
        t = not_null(o_19);
        t = w_29(t);
        q_19 = t;
        t = (ATerm) ATmakeAppl(sym_Not_1, not_null(q_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm v_19 = NULL;
  v_19 = t;
  u_19 :
  if(!(match_cons(v_19, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm x_19 = NULL;
  x_19 = t;
  w_19 :
  if(!(match_cons(x_19, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm w_3 = t;
  if(PushChoice()==0)
    {
      ATerm a_20 = NULL;
      a_20 = t;
      y_19 :
      if(!(match_cons(a_20, sym_Id_0)))
        {
          if(!(match_cons(a_20, sym_Fail_0)))
            _fail(t);
        }
      PopChoice();
    }
  else
    {
      t = w_3;
      {
        ATerm x_3 = t;
        if(PushChoice()==0)
          {
            t = Not_1(t, strategy_expression_0);
            PopChoice();
          }
        else
          {
            t = x_3;
            {
              ATerm y_3 = t;
              if(PushChoice()==0)
                {
                  t = Test_1(t, strategy_expression_0);
                  PopChoice();
                }
              else
                {
                  t = y_3;
                  {
                    ATerm z_3 = t;
                    if(PushChoice()==0)
                      {
                        t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                        PopChoice();
                      }
                    else
                      {
                        t = z_3;
                        {
                          ATerm a_4 = t;
                          if(PushChoice()==0)
                            {
                              t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                              PopChoice();
                            }
                          else
                            {
                              t = a_4;
                              {
                                ATerm b_4 = t;
                                if(PushChoice()==0)
                                  {
                                    t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = b_4;
                                    {
                                      ATerm c_4 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm g_0 (ATerm t)
                                          {
                                            t = SVar_1(t, is_string_0);
                                            return(t);
                                          }
                                          ATerm h_0 (ATerm t)
                                          {
                                            t = list_1(t, strategy_expression_0);
                                            return(t);
                                          }
                                          t = Call_2(t, g_0, h_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = c_4;
                                          {
                                            ATerm e_4 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = Rec_2(t, is_string_0, strategy_expression_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = e_4;
                                                {
                                                  ATerm g_4 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = Path_2(t, is_int_0, strategy_expression_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = g_4;
                                                      {
                                                        ATerm h_4 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm i_0 (ATerm t)
                                                            {
                                                              t = list_1(t, strategy_expression_0);
                                                              return(t);
                                                            }
                                                            t = Cong_2(t, is_string_0, i_0);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = h_4;
                                                            {
                                                              ATerm i_4 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = One_1(t, strategy_expression_0);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = i_4;
                                                                  {
                                                                    ATerm j_4 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = Some_1(t, strategy_expression_0);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = j_4;
                                                                        {
                                                                          ATerm k_4 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = All_1(t, strategy_expression_0);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = k_4;
                                                                              {
                                                                                ATerm l_4 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    t = Thread_1(t, strategy_expression_0);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_4;
                                                                                    {
                                                                                      ATerm q_4 = t;
                                                                                      if(PushChoice()==0)
                                                                                        {
                                                                                          t = Match_1(t, term_expression_0);
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = q_4;
                                                                                          {
                                                                                            ATerm r_4 = t;
                                                                                            if(PushChoice()==0)
                                                                                              {
                                                                                                t = Build_1(t, term_expression_0);
                                                                                                PopChoice();
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = r_4;
                                                                                                {
                                                                                                  ATerm t_4 = t;
                                                                                                  if(PushChoice()==0)
                                                                                                    {
                                                                                                      ATerm j_0 (ATerm t)
                                                                                                      {
                                                                                                        t = list_1(t, is_string_0);
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Scope_2(t, j_0, strategy_expression_0);
                                                                                                      PopChoice();
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = t_4;
                                                                                                      {
                                                                                                        ATerm v_4 = t;
                                                                                                        if(PushChoice()==0)
                                                                                                          {
                                                                                                            t = Where_1(t, strategy_expression_0);
                                                                                                            PopChoice();
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = v_4;
                                                                                                            {
                                                                                                              ATerm w_4 = t;
                                                                                                              if(PushChoice()==0)
                                                                                                                {
                                                                                                                  ATerm k_0 (ATerm t)
                                                                                                                  {
                                                                                                                    t = list_1(t, term_expression_0);
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Prim_2(t, is_string_0, k_0);
                                                                                                                  PopChoice();
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = w_4;
                                                                                                                  {
                                                                                                                    ATerm x_4 = t;
                                                                                                                    if(PushChoice()==0)
                                                                                                                      {
                                                                                                                        ATerm l_0 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm m_0 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm n_0 (ATerm t)
                                                                                                                            {
                                                                                                                              ATerm b_20 = NULL;
                                                                                                                              b_20 = t;
                                                                                                                              z_19 :
                                                                                                                              if(!(match_cons(b_20, sym_Nil_0)))
                                                                                                                                _fail(t);
                                                                                                                              return(t);
                                                                                                                            }
                                                                                                                            t = SDef_3(t, is_string_0, n_0, strategy_expression_0);
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          t = list_1(t, m_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Let_2(t, l_0, strategy_expression_0);
                                                                                                                        PopChoice();
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = x_4;
                                                                                                                        {
                                                                                                                          ATerm o_0 (ATerm t)
                                                                                                                          {
                                                                                                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          t = debug_1(t, o_0);
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
ATerm is_string_0 (ATerm t)
{
  ATerm e_20 = NULL;
  e_20 = t;
  t = SSL_is_string(not_null(e_20));
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm l_30 (ATerm), ATerm m_30 (ATerm))
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
  l_20 = t;
  k_20 :
  if(match_cons(l_20, sym_VarDec_2))
    {
      m_20 = ATgetArgument(l_20, 0);
      n_20 = ATgetArgument(l_20, 1);
      {
        ATerm q_20 = NULL;
        t = not_null(m_20);
        {
          ATerm s_20 = NULL;
          t = l_30(t);
          q_20 = t;
          t = not_null(n_20);
          t = m_30(t);
          s_20 = t;
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(q_20), not_null(s_20));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm i_30 (ATerm), ATerm j_30 (ATerm), ATerm k_30 (ATerm))
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
  c_21 = t;
  b_21 :
  if(match_cons(c_21, sym_SDef_3))
    {
      d_21 = ATgetArgument(c_21, 0);
      e_21 = ATgetArgument(c_21, 1);
      f_21 = ATgetArgument(c_21, 2);
      {
        ATerm j_21 = NULL;
        t = not_null(d_21);
        {
          ATerm l_21 = NULL;
          t = i_30(t);
          j_21 = t;
          t = not_null(e_21);
          {
            ATerm n_21 = NULL;
            t = j_30(t);
            l_21 = t;
            t = not_null(f_21);
            t = k_30(t);
            n_21 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(j_21), not_null(l_21), not_null(n_21));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm strategy_definition_0 (ATerm t)
{
  ATerm y_4 = t;
  if(PushChoice()==0)
    {
      ATerm p_0 (ATerm t)
      {
        ATerm q_0 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, q_0);
        return(t);
      }
      t = SDef_3(t, is_string_0, p_0, strategy_expression_0);
      PopChoice();
    }
  else
    {
      t = y_4;
      {
        ATerm r_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, r_0);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm o_44 (ATerm))
{
  ATerm v_21 (ATerm t)
  {
    ATerm z_4 = t;
    if(PushChoice()==0)
      {
        ATerm u_21 = NULL;
        u_21 = t;
        t_21 :
        if(!(match_cons(u_21, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = z_4;
        t = Cons_2(t, o_44, v_21);
      }
    return(t);
  }
  t = v_21(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm d_29 (ATerm))
{
  ATerm z_21 = NULL,a_22 = NULL;
  z_21 = t;
  y_21 :
  if(match_cons(z_21, sym_Strategies_1))
    {
      a_22 = ATgetArgument(z_21, 0);
      {
        ATerm c_22 = NULL;
        t = not_null(a_22);
        t = d_29(t);
        c_22 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(c_22));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm f_29 (ATerm))
{
  ATerm j_22 = NULL,k_22 = NULL;
  j_22 = t;
  i_22 :
  if(match_cons(j_22, sym_Specification_1))
    {
      k_22 = ATgetArgument(j_22, 0);
      {
        ATerm m_22 = NULL;
        t = not_null(k_22);
        t = f_29(t);
        m_22 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(m_22));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm a_5 = t;
  if(PushChoice()==0)
    {
      ATerm s_0 (ATerm t)
      {
        ATerm t_0 (ATerm t)
        {
          ATerm u_0 (ATerm t)
          {
            ATerm w_0 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, w_0);
            return(t);
          }
          ATerm v_0 (ATerm t)
          {
            ATerm r_22 = NULL;
            r_22 = t;
            q_22 :
            if(!(match_cons(r_22, sym_Nil_0)))
              _fail(t);
            return(t);
          }
          t = Cons_2(t, u_0, v_0);
          return(t);
        }
        t = Cons_2(t, _id, t_0);
        return(t);
      }
      t = Specification_1(t, s_0);
      PopChoice();
    }
  else
    {
      t = a_5;
      {
        ATerm x_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, x_0);
      }
    }
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm t_22 = NULL;
  t_22 = t;
  s_22 :
  if(!(match_cons(t_22, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm n_31 (ATerm), ATerm o_31 (ATerm))
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym_TCons_2))
    {
      z_22 = ATgetArgument(y_22, 0);
      a_23 = ATgetArgument(y_22, 1);
      {
        ATerm d_23 = NULL;
        t = not_null(z_22);
        {
          ATerm f_23 = NULL;
          t = n_31(t);
          d_23 = t;
          t = not_null(a_23);
          t = o_31(t);
          f_23 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_23), not_null(f_23));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm m_23 = NULL;
  ATerm b_5;
  b_5 = t;
  {
    ATerm y_0 (ATerm t)
    {
      ATerm n_23 = NULL,o_23 = NULL;
      n_23 = t;
      l_23 :
      if(match_cons(n_23, sym_Program_1))
        {
          o_23 = ATgetArgument(n_23, 0);
          if(m_23 != NULL && m_23 != o_23)
            _fail(o_23);
          else
            m_23 = o_23;
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1(t, y_0);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_23), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = b_5;
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
  ATerm r_23 = NULL;
  r_23 = t;
  t = SSL_exit(not_null(r_23));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
  y_23 = t;
  v_23 :
  if(match_cons(y_23, sym_TCons_2))
    {
      z_23 = ATgetArgument(y_23, 0);
      a_24 = ATgetArgument(y_23, 1);
      w_23 :
      if(match_cons(a_24, sym_TCons_2))
        {
          b_24 = ATgetArgument(a_24, 0);
          c_24 = ATgetArgument(a_24, 1);
          x_23 :
          if(match_cons(c_24, sym_TNil_0))
            {
              ATerm g_5;
              g_5 = t;
              t = SSL_printnl(not_null(z_23), not_null(b_24));
              t = g_5;
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
ATerm try_1 (ATerm t, ATerm a_51 (ATerm))
{
  ATerm h_5 = t;
  if(PushChoice()==0)
    {
      t = a_51(t);
      PopChoice();
    }
  else
    t = h_5;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL;
  ATerm j_5 = t;
  if(PushChoice()==0)
    {
      ATerm z_0 (ATerm t)
      {
        ATerm l_5 = t;
        if(PushChoice()==0)
          {
            ATerm b_1 (ATerm t)
            {
              ATerm q_24 = NULL;
              q_24 = t;
              g_24 :
              if(!(match_cons(q_24, sym_Silent_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, b_1);
            PopChoice();
            _fail(t);
          }
        else
          t = l_5;
        return(t);
      }
      ATerm a_1 (ATerm t)
      {
        ATerm c_1 (ATerm t)
        {
          ATerm r_24 = NULL;
          r_24 = t;
          h_24 :
          if(!(match_cons(r_24, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, c_1);
        return(t);
      }
      t = TCons_2(t, z_0, a_1);
      {
        ATerm d_1 (ATerm t)
        {
          ATerm f_1 (ATerm t)
          {
            ATerm s_24 = NULL,t_24 = NULL;
            s_24 = t;
            j_24 :
            if(match_cons(s_24, sym_Runtime_1))
              {
                t_24 = ATgetArgument(s_24, 0);
                if(p_24 != NULL && p_24 != t_24)
                  _fail(t_24);
                else
                  p_24 = t_24;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, f_1);
          return(t);
        }
        ATerm e_1 (ATerm t)
        {
          ATerm g_1 (ATerm t)
          {
            ATerm u_24 = NULL;
            u_24 = t;
            k_24 :
            if(!(match_cons(u_24, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, g_1);
          return(t);
        }
        t = TCons_2(t, d_1, e_1);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm j_1 (ATerm t)
            {
              ATerm v_24 = NULL,w_24 = NULL;
              v_24 = t;
              m_24 :
              if(match_cons(v_24, sym_Program_1))
                {
                  w_24 = ATgetArgument(v_24, 0);
                  if(o_24 != NULL && o_24 != w_24)
                    _fail(w_24);
                  else
                    o_24 = w_24;
                }
              else
                _fail(t);
              return(t);
            }
            t = fetch_1(t, j_1);
            return(t);
          }
          ATerm i_1 (ATerm t)
          {
            ATerm k_1 (ATerm t)
            {
              ATerm x_24 = NULL;
              x_24 = t;
              n_24 :
              if(!(match_cons(x_24, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, _id, k_1);
            return(t);
          }
          t = TCons_2(t, h_1, i_1);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_24), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_24), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      PopChoice();
    }
  else
    t = j_5;
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  e_25 = t;
  b_25 :
  if(match_cons(e_25, sym_TCons_2))
    {
      f_25 = ATgetArgument(e_25, 0);
      g_25 = ATgetArgument(e_25, 1);
      c_25 :
      if(match_cons(g_25, sym_TCons_2))
        {
          h_25 = ATgetArgument(g_25, 0);
          i_25 = ATgetArgument(g_25, 1);
          d_25 :
          if(match_cons(i_25, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(f_25), not_null(h_25));
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
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
  q_25 = t;
  n_25 :
  if(match_cons(q_25, sym_TCons_2))
    {
      r_25 = ATgetArgument(q_25, 0);
      s_25 = ATgetArgument(q_25, 1);
      o_25 :
      if(match_cons(s_25, sym_TCons_2))
        {
          t_25 = ATgetArgument(s_25, 0);
          u_25 = ATgetArgument(s_25, 1);
          p_25 :
          if(match_cons(u_25, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(r_25), not_null(t_25));
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
  ATerm g_26 = NULL;
  ATerm m_5;
  m_5 = t;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm n_5 = t;
      if(PushChoice()==0)
        {
          ATerm n_1 (ATerm t)
          {
            ATerm h_26 = NULL,i_26 = NULL;
            h_26 = t;
            z_25 :
            if(match_cons(h_26, sym_Output_1))
              {
                i_26 = ATgetArgument(h_26, 0);
                if(g_26 != NULL && g_26 != i_26)
                  _fail(i_26);
                else
                  g_26 = i_26;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, n_1);
          PopChoice();
        }
      else
        {
          t = n_5;
          {
            ATerm j_26 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            j_26 = t;
            if(g_26 != NULL && g_26 != j_26)
              _fail(j_26);
            else
              g_26 = j_26;
          }
        }
      return(t);
    }
    ATerm m_1 (ATerm t)
    {
      ATerm o_1 (ATerm t)
      {
        ATerm k_26 = NULL;
        k_26 = t;
        b_26 :
        if(!(match_cons(k_26, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, _id, o_1);
      return(t);
    }
    t = TCons_2(t, l_1, m_1);
  }
  t = m_5;
  {
    ATerm p_1 (ATerm t)
    {
      ATerm q_1 (ATerm t)
      {
        ATerm s_1 (ATerm t)
        {
          t = not_null(g_26);
          return(t);
        }
        t = split_2(t, s_1, _id);
        return(t);
      }
      ATerm r_1 (ATerm t)
      {
        ATerm l_26 = NULL;
        l_26 = t;
        c_26 :
        if(!(match_cons(l_26, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, q_1, r_1);
      return(t);
    }
    t = TCons_2(t, _id, p_1);
    {
      ATerm o_5 = t;
      if(PushChoice()==0)
        {
          ATerm t_1 (ATerm t)
          {
            ATerm v_1 (ATerm t)
            {
              ATerm m_26 = NULL;
              m_26 = t;
              d_26 :
              if(!(match_cons(m_26, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, v_1);
            return(t);
          }
          ATerm u_1 (ATerm t)
          {
            ATerm w_1 (ATerm t)
            {
              ATerm n_26 = NULL;
              n_26 = t;
              e_26 :
              if(!(match_cons(n_26, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, WriteToBinaryFile_0, w_1);
            return(t);
          }
          t = TCons_2(t, t_1, u_1);
          PopChoice();
        }
      else
        {
          t = o_5;
          {
            ATerm x_1 (ATerm t)
            {
              ATerm y_1 (ATerm t)
              {
                ATerm o_26 = NULL;
                o_26 = t;
                f_26 :
                if(!(match_cons(o_26, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, WriteToTextFile_0, y_1);
              return(t);
            }
            t = TCons_2(t, _id, x_1);
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
ATerm apply_strategy_1 (ATerm t, ATerm c_36 (ATerm))
{
  ATerm x_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
  ATerm p_5;
  p_5 = t;
  t = dtime_0(t);
  t = p_5;
  t = c_36(t);
  {
    ATerm q_5;
    q_5 = t;
    {
      ATerm y_26 = NULL;
      t = dtime_0(t);
      y_26 = t;
      if(x_26 != NULL && x_26 != y_26)
        _fail(y_26);
      else
        x_26 = y_26;
    }
    t = q_5;
    z_26 = t;
    t_26 :
    if(match_cons(z_26, sym_TCons_2))
      {
        a_27 = ATgetArgument(z_26, 0);
        b_27 = ATgetArgument(z_26, 1);
        u_26 :
        if(match_cons(b_27, sym_TCons_2))
          {
            c_27 = ATgetArgument(b_27, 0);
            d_27 = ATgetArgument(b_27, 1);
            v_26 :
            if(match_cons(d_27, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(x_26)), not_null(a_27)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_27), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm j_27 = NULL;
  j_27 = t;
  t = SSL_ReadFromFile(not_null(j_27));
  return(t);
}
ATerm split_2 (ATerm t, ATerm c_38 (ATerm), ATerm d_38 (ATerm))
{
  ATerm p_27 = NULL;
  ATerm r_27 = NULL;
  p_27 = t;
  {
    ATerm t_27 = NULL;
    t = c_38(t);
    r_27 = t;
    t = not_null(p_27);
    t = d_38(t);
    t_27 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_27), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm b_28 = NULL;
  ATerm u_5;
  u_5 = t;
  {
    ATerm w_5 = t;
    if(PushChoice()==0)
      {
        ATerm z_1 (ATerm t)
        {
          ATerm c_28 = NULL,d_28 = NULL;
          c_28 = t;
          z_27 :
          if(match_cons(c_28, sym_Input_1))
            {
              d_28 = ATgetArgument(c_28, 0);
              if(b_28 != NULL && b_28 != d_28)
                _fail(d_28);
              else
                b_28 = d_28;
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1(t, z_1);
        PopChoice();
      }
    else
      {
        t = w_5;
        {
          ATerm e_28 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          e_28 = t;
          if(b_28 != NULL && b_28 != e_28)
            _fail(e_28);
          else
            b_28 = e_28;
        }
      }
  }
  t = u_5;
  {
    ATerm a_2 (ATerm t)
    {
      t = not_null(b_28);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, a_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_28 = NULL;
  l_28 = t;
  k_28 :
  if(!(match_cons(l_28, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm w_26 (ATerm))
{
  ATerm p_28 = NULL,q_28 = NULL;
  p_28 = t;
  o_28 :
  if(match_cons(p_28, sym_Undefined_1))
    {
      q_28 = ATgetArgument(p_28, 0);
      {
        ATerm s_28 = NULL;
        t = not_null(q_28);
        t = w_26(t);
        s_28 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_28));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_28 = NULL;
  x_28 = t;
  w_28 :
  if(!(match_cons(x_28, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm v_44 (ATerm))
{
  ATerm y_28 (ATerm t)
  {
    ATerm x_5 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, v_44, _id);
        PopChoice();
      }
    else
      {
        t = x_5;
        t = Cons_2(t, _id, y_28);
      }
    return(t);
  }
  t = y_28(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm g_35 (ATerm))
{
  t = fetch_1(t, g_35);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm b_36 (ATerm))
{
  ATerm b_2 (ATerm t)
  {
    ATerm y_5 = t;
    if(PushChoice()==0)
      {
        ATerm b_29 = NULL;
        b_29 = t;
        z_28 :
        if(!(match_cons(b_29, sym_Help_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = y_5;
        {
          ATerm z_5 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = z_5;
              {
                ATerm c_29 = NULL;
                c_29 = t;
                a_29 :
                if(!(match_cons(c_29, sym_Version_0)))
                  _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, b_2);
  t = b_36(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL;
  ATerm a_6;
  a_6 = t;
  {
    ATerm n_29 = NULL,o_29 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL;
    n_29 = t;
    g_29 :
    if(match_cons(n_29, sym_TCons_2))
      {
        o_29 = ATgetArgument(n_29, 0);
        n_30 = ATgetArgument(n_29, 1);
        h_29 :
        if(match_cons(n_30, sym_TCons_2))
          {
            o_30 = ATgetArgument(n_30, 0);
            p_30 = ATgetArgument(n_30, 1);
            i_29 :
            if(match_cons(p_30, sym_TCons_2))
              {
                q_30 = ATgetArgument(p_30, 0);
                r_30 = ATgetArgument(p_30, 1);
                j_29 :
                if(match_cons(r_30, sym_TNil_0))
                  {
                    if(k_29 != NULL && k_29 != o_29)
                      _fail(o_29);
                    else
                      k_29 = o_29;
                    if(l_29 != NULL && l_29 != o_30)
                      _fail(o_30);
                    else
                      l_29 = o_30;
                    if(m_29 != NULL && m_29 != q_30)
                      _fail(q_30);
                    else
                      m_29 = q_30;
                    t = SSL_table_put(not_null(k_29), not_null(l_29), not_null(m_29));
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
  t = a_6;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm d_31 = NULL;
  d_31 = t;
  t = SSL_table_create(not_null(d_31));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm q_31 = NULL;
  q_31 = t;
  {
    ATerm b_6;
    b_6 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_31), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = b_6;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm z_34 (ATerm), ATerm a_35 (ATerm))
{
  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL;
  y_31 = t;
  x_31 :
  if(match_cons(y_31, sym_Cons_2))
    {
      z_31 = ATgetArgument(y_31, 0);
      a_32 = ATgetArgument(y_31, 1);
      {
        ATerm d_32 = NULL;
        t = not_null(z_31);
        t = z_34(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = a_35(t);
        d_32 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_32), not_null(a_32));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm b_35 (ATerm), ATerm c_35 (ATerm))
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL;
  l_32 = t;
  j_32 :
  if(match_cons(l_32, sym_Cons_2))
    {
      m_32 = ATgetArgument(l_32, 0);
      n_32 = ATgetArgument(l_32, 1);
      k_32 :
      if(match_cons(n_32, sym_Cons_2))
        {
          o_32 = ATgetArgument(n_32, 0);
          p_32 = ATgetArgument(n_32, 1);
          {
            ATerm t_32 = NULL;
            t = not_null(m_32);
            t = b_35(t);
            t = not_null(o_32);
            t = c_35(t);
            t_32 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_32), not_null(p_32));
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
  ATerm g_6 = t;
  if(PushChoice()==0)
    {
      ATerm c_2 (ATerm t)
      {
        ATerm r_33 = NULL;
        r_33 = t;
        x_32 :
        if(!(match_string(r_33, "-S")))
          _fail(t);
        return(t);
      }
      ATerm d_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, c_2, d_2);
      PopChoice();
    }
  else
    {
      t = g_6;
      {
        ATerm h_6 = t;
        if(PushChoice()==0)
          {
            ATerm e_2 (ATerm t)
            {
              ATerm s_33 = NULL;
              s_33 = t;
              y_32 :
              if(!(match_string(s_33, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm f_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, e_2, f_2);
            PopChoice();
          }
        else
          {
            t = h_6;
            {
              ATerm j_6 = t;
              if(PushChoice()==0)
                {
                  ATerm g_2 (ATerm t)
                  {
                    ATerm t_33 = NULL;
                    t_33 = t;
                    z_32 :
                    if(!(match_string(t_33, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm h_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, g_2, h_2);
                  PopChoice();
                }
              else
                {
                  t = j_6;
                  {
                    ATerm l_6 = t;
                    if(PushChoice()==0)
                      {
                        ATerm i_2 (ATerm t)
                        {
                          ATerm u_33 = NULL;
                          u_33 = t;
                          a_33 :
                          if(!(match_string(u_33, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm j_2 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, i_2, j_2);
                        PopChoice();
                      }
                    else
                      {
                        t = l_6;
                        {
                          ATerm m_6 = t;
                          if(PushChoice()==0)
                            {
                              ATerm k_2 (ATerm t)
                              {
                                ATerm v_33 = NULL;
                                v_33 = t;
                                b_33 :
                                if(!(match_string(v_33, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm l_2 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, k_2, l_2);
                              PopChoice();
                            }
                          else
                            {
                              t = m_6;
                              {
                                ATerm n_6 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm m_2 (ATerm t)
                                    {
                                      ATerm w_33 = NULL;
                                      w_33 = t;
                                      c_33 :
                                      if(!(match_string(w_33, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm n_2 (ATerm t)
                                    {
                                      ATerm x_33 = NULL;
                                      x_33 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(x_33));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, m_2, n_2);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = n_6;
                                    {
                                      ATerm o_6 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm o_2 (ATerm t)
                                          {
                                            ATerm z_33 = NULL;
                                            z_33 = t;
                                            e_33 :
                                            if(!(match_string(z_33, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm p_2 (ATerm t)
                                          {
                                            ATerm a_34 = NULL;
                                            a_34 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_34));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, o_2, p_2);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = o_6;
                                          {
                                            ATerm p_6 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm q_2 (ATerm t)
                                                {
                                                  ATerm c_34 = NULL;
                                                  c_34 = t;
                                                  g_33 :
                                                  if(!(match_string(c_34, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm r_2 (ATerm t)
                                                {
                                                  ATerm d_34 = NULL;
                                                  d_34 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_34));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, q_2, r_2);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = p_6;
                                                {
                                                  ATerm q_6 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm s_2 (ATerm t)
                                                      {
                                                        ATerm f_34 = NULL;
                                                        f_34 = t;
                                                        i_33 :
                                                        if(!(match_string(f_34, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm t_2 (ATerm t)
                                                      {
                                                        ATerm g_34 = NULL;
                                                        g_34 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_34));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, s_2, t_2);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = q_6;
                                                      {
                                                        ATerm u_6 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm u_2 (ATerm t)
                                                            {
                                                              ATerm i_34 = NULL;
                                                              i_34 = t;
                                                              k_33 :
                                                              if(!(match_string(i_34, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm v_2 (ATerm t)
                                                            {
                                                              ATerm j_34 = NULL;
                                                              j_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_34));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, u_2, v_2);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = u_6;
                                                            {
                                                              ATerm w_6 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm w_2 (ATerm t)
                                                                  {
                                                                    ATerm l_34 = NULL;
                                                                    l_34 = t;
                                                                    m_33 :
                                                                    if(!(match_string(l_34, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm x_2 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, w_2, x_2);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = w_6;
                                                                  {
                                                                    ATerm x_6 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm y_2 (ATerm t)
                                                                        {
                                                                          ATerm m_34 = NULL;
                                                                          m_34 = t;
                                                                          n_33 :
                                                                          if(!(match_string(m_34, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm z_2 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, y_2, z_2);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = x_6;
                                                                        {
                                                                          ATerm y_6 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm a_3 (ATerm t)
                                                                              {
                                                                                ATerm n_34 = NULL;
                                                                                n_34 = t;
                                                                                o_33 :
                                                                                if(!(match_string(n_34, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm b_3 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, a_3, b_3);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_6;
                                                                              {
                                                                                ATerm z_6 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm c_3 (ATerm t)
                                                                                    {
                                                                                      ATerm o_34 = NULL;
                                                                                      o_34 = t;
                                                                                      p_33 :
                                                                                      if(!(match_string(o_34, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm d_3 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, c_3, d_3);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = z_6;
                                                                                    {
                                                                                      ATerm e_3 (ATerm t)
                                                                                      {
                                                                                        ATerm p_34 = NULL;
                                                                                        p_34 = t;
                                                                                        q_33 :
                                                                                        if(!(match_string(p_34, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm f_3 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, e_3, f_3);
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
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
  d_35 = t;
  w_34 :
  if(match_cons(d_35, sym_Cons_2))
    {
      e_35 = ATgetArgument(d_35, 0);
      f_35 = ATgetArgument(d_35, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_35)), not_null(f_35));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_31 (ATerm), ATerm s_31 (ATerm))
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
  u_35 = t;
  t_35 :
  if(match_cons(u_35, sym_Cons_2))
    {
      v_35 = ATgetArgument(u_35, 0);
      w_35 = ATgetArgument(u_35, 1);
      {
        ATerm z_35 = NULL;
        t = not_null(v_35);
        {
          ATerm d_36 = NULL;
          t = r_31(t);
          z_35 = t;
          t = not_null(w_35);
          t = s_31(t);
          d_36 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_35), not_null(d_36));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm j_36 = NULL;
  j_36 = t;
  i_36 :
  if(!(match_cons(j_36, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_34 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    ATerm n_36 = NULL;
    n_36 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_36));
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    ATerm a_7 = t;
    if(PushChoice()==0)
      {
        ATerm e_7 = t;
        if(PushChoice()==0)
          {
            ATerm p_36 = NULL;
            p_36 = t;
            m_36 :
            if(!(match_cons(p_36, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = e_7;
            t = x_34(t);
            t = Cons_2(t, _id, h_3);
          }
        PopChoice();
      }
    else
      {
        t = a_7;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, g_3, h_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm q_35 (ATerm), ATerm r_35 (ATerm), ATerm s_35 (ATerm))
{
  ATerm i_3 (ATerm t)
  {
    ATerm g_7 = t;
    if(PushChoice()==0)
      {
        t = r_35(t);
        PopChoice();
      }
    else
      {
        t = g_7;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, i_3);
  t = store_options_0(t);
  {
    ATerm h_7 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, s_35);
        PopChoice();
      }
    else
      {
        t = h_7;
        {
          ATerm i_7 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, q_35);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = i_7;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm l_35 (ATerm), ATerm m_35 (ATerm))
{
  t = iowrap_3(t, l_35, m_35, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm i_35 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm k_3 (ATerm t)
    {
      ATerm l_3 (ATerm t)
      {
        ATerm t_36 = NULL;
        t_36 = t;
        s_36 :
        if(!(match_cons(t_36, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, i_35, l_3);
      return(t);
    }
    t = TCons_2(t, _id, k_3);
    return(t);
  }
  t = iowrap_2(t, j_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
