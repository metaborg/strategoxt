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
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
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
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_NoKind_0 = ATmakeSymbol("NoKind", 0, ATfalse);
  ATprotectSymbol(sym_NoKind_0);
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
ATerm debug_1 (ATerm, ATerm h_37 (ATerm));
ATerm Let_2 (ATerm, ATerm y_30 (ATerm), ATerm z_30 (ATerm));
ATerm Op_2 (ATerm, ATerm l_30 (ATerm), ATerm m_30 (ATerm));
ATerm Var_1 (ATerm, ATerm h_30 (ATerm));
ATerm As_2 (ATerm, ATerm x_28 (ATerm), ATerm y_28 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm z_28 (ATerm));
ATerm Str_1 (ATerm, ATerm k_30 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm j_30 (ATerm));
ATerm Int_1 (ATerm, ATerm i_30 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm d_32 (ATerm), ATerm e_32 (ATerm));
ATerm Where_1 (ATerm, ATerm c_32 (ATerm));
ATerm Scope_2 (ATerm, ATerm a_32 (ATerm), ATerm b_32 (ATerm));
ATerm Build_1 (ATerm, ATerm x_31 (ATerm));
ATerm Match_1 (ATerm, ATerm w_31 (ATerm));
ATerm Thread_1 (ATerm, ATerm t_31 (ATerm));
ATerm All_1 (ATerm, ATerm s_31 (ATerm));
ATerm Some_1 (ATerm, ATerm a_0 (ATerm));
ATerm One_1 (ATerm, ATerm q_31 (ATerm));
ATerm Cong_2 (ATerm, ATerm o_31 (ATerm), ATerm p_31 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm m_31 (ATerm), ATerm n_31 (ATerm));
ATerm Rec_2 (ATerm, ATerm w_30 (ATerm), ATerm x_30 (ATerm));
ATerm SVar_1 (ATerm, ATerm v_30 (ATerm));
ATerm Call_2 (ATerm, ATerm k_31 (ATerm), ATerm l_31 (ATerm));
ATerm LChoice_2 (ATerm, ATerm t_30 (ATerm), ATerm u_30 (ATerm));
ATerm Choice_2 (ATerm, ATerm r_30 (ATerm), ATerm s_30 (ATerm));
ATerm Seq_2 (ATerm, ATerm p_30 (ATerm), ATerm q_30 (ATerm));
ATerm Test_1 (ATerm, ATerm n_30 (ATerm));
ATerm Not_1 (ATerm, ATerm o_30 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm d_31 (ATerm), ATerm e_31 (ATerm));
ATerm Mod_2 (ATerm, ATerm n_29 (ATerm), ATerm o_29 (ATerm));
ATerm SDef_3 (ATerm, ATerm a_31 (ATerm), ATerm b_31 (ATerm), ATerm c_31 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm q_45 (ATerm));
ATerm Strategies_1 (ATerm, ATerm v_29 (ATerm));
ATerm Specification_1 (ATerm, ATerm x_29 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm f_32 (ATerm), ATerm g_32 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_52 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm x_36 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_39 (ATerm), ATerm c_39 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm o_27 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm w_45 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_36 (ATerm));
ATerm need_help_1 (ATerm, ATerm w_36 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm u_35 (ATerm), ATerm v_35 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm w_35 (ATerm), ATerm x_35 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm j_32 (ATerm), ATerm k_32 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_35 (ATerm));
ATerm iowrap_3 (ATerm, ATerm l_36 (ATerm), ATerm m_36 (ATerm), ATerm n_36 (ATerm));
ATerm iowrap_2 (ATerm, ATerm g_36 (ATerm), ATerm h_36 (ATerm));
ATerm iowrap_1 (ATerm, ATerm d_36 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm h_37 (ATerm))
{
  ATerm f_3;
  f_3 = t;
  {
    ATerm b_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm c_0 (ATerm t)
    {
      ATerm h_4 = NULL;
      ATerm j_4 = NULL;
      h_4 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = h_37(t);
      j_4 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_4), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_4), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, b_0, c_0);
    t = printnl_0(t);
  }
  t = f_3;
  return(t);
}
ATerm Let_2 (ATerm t, ATerm y_30 (ATerm), ATerm z_30 (ATerm))
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
  r_4 = t;
  q_4 :
  if(match_cons(r_4, sym_Let_2))
    {
      s_4 = ATgetArgument(r_4, 0);
      t_4 = ATgetArgument(r_4, 1);
      {
        ATerm w_4 = NULL;
        t = not_null(s_4);
        {
          ATerm y_4 = NULL;
          t = y_30(t);
          w_4 = t;
          t = not_null(t_4);
          t = z_30(t);
          y_4 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(w_4), not_null(y_4));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm l_30 (ATerm), ATerm m_30 (ATerm))
{
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
  h_5 = t;
  g_5 :
  if(match_cons(h_5, sym_Op_2))
    {
      i_5 = ATgetArgument(h_5, 0);
      j_5 = ATgetArgument(h_5, 1);
      {
        ATerm m_5 = NULL;
        t = not_null(i_5);
        {
          ATerm o_5 = NULL;
          t = l_30(t);
          m_5 = t;
          t = not_null(j_5);
          t = m_30(t);
          o_5 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(m_5), not_null(o_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm h_30 (ATerm))
{
  ATerm w_5 = NULL,x_5 = NULL;
  w_5 = t;
  v_5 :
  if(match_cons(w_5, sym_Var_1))
    {
      x_5 = ATgetArgument(w_5, 0);
      {
        ATerm z_5 = NULL;
        t = not_null(x_5);
        t = h_30(t);
        z_5 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_5));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm As_2 (ATerm t, ATerm x_28 (ATerm), ATerm y_28 (ATerm))
{
  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
  h_6 = t;
  g_6 :
  if(match_cons(h_6, sym_As_2))
    {
      i_6 = ATgetArgument(h_6, 0);
      j_6 = ATgetArgument(h_6, 1);
      {
        ATerm m_6 = NULL;
        t = not_null(i_6);
        {
          ATerm o_6 = NULL;
          t = x_28(t);
          m_6 = t;
          t = not_null(j_6);
          t = y_28(t);
          o_6 = t;
          t = (ATerm) ATmakeAppl(sym_As_2, not_null(m_6), not_null(o_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm z_28 (ATerm))
{
  ATerm w_6 = NULL,x_6 = NULL;
  w_6 = t;
  v_6 :
  if(match_cons(w_6, sym_BuildDefault_1))
    {
      x_6 = ATgetArgument(w_6, 0);
      {
        ATerm z_6 = NULL;
        t = not_null(x_6);
        t = z_28(t);
        z_6 = t;
        t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(z_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm k_30 (ATerm))
{
  ATerm g_7 = NULL,h_7 = NULL;
  g_7 = t;
  f_7 :
  if(match_cons(g_7, sym_Str_1))
    {
      h_7 = ATgetArgument(g_7, 0);
      {
        ATerm j_7 = NULL;
        t = not_null(h_7);
        t = k_30(t);
        j_7 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, not_null(j_7));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_real_0 (ATerm t)
{
  ATerm o_7 = NULL;
  o_7 = t;
  t = SSL_is_real(not_null(o_7));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm j_30 (ATerm))
{
  ATerm y_7 = NULL,z_7 = NULL;
  y_7 = t;
  x_7 :
  if(match_cons(y_7, sym_Real_1))
    {
      z_7 = ATgetArgument(y_7, 0);
      {
        ATerm b_8 = NULL;
        t = not_null(z_7);
        t = j_30(t);
        b_8 = t;
        t = (ATerm) ATmakeAppl(sym_Real_1, not_null(b_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Int_1 (ATerm t, ATerm i_30 (ATerm))
{
  ATerm i_8 = NULL,j_8 = NULL;
  i_8 = t;
  h_8 :
  if(match_cons(i_8, sym_Int_1))
    {
      j_8 = ATgetArgument(i_8, 0);
      {
        ATerm l_8 = NULL;
        t = not_null(j_8);
        t = i_30(t);
        l_8 = t;
        t = (ATerm) ATmakeAppl(sym_Int_1, not_null(l_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm q_8 = NULL;
  q_8 = t;
  p_8 :
  if(!(match_cons(q_8, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm g_3 = t;
  if(PushChoice()==0)
    {
      t = Wld_0(t);
      PopChoice();
    }
  else
    {
      t = g_3;
      {
        ATerm h_3 = t;
        if(PushChoice()==0)
          {
            t = Var_1(t, is_string_0);
            PopChoice();
          }
        else
          {
            t = h_3;
            {
              ATerm i_3 = t;
              if(PushChoice()==0)
                {
                  t = Int_1(t, is_int_0);
                  PopChoice();
                }
              else
                {
                  t = i_3;
                  {
                    ATerm j_3 = t;
                    if(PushChoice()==0)
                      {
                        t = Real_1(t, is_real_0);
                        PopChoice();
                      }
                    else
                      {
                        t = j_3;
                        {
                          ATerm k_3 = t;
                          if(PushChoice()==0)
                            {
                              t = Str_1(t, is_string_0);
                              PopChoice();
                            }
                          else
                            {
                              t = k_3;
                              {
                                ATerm l_3 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = l_3;
                                    {
                                      ATerm m_3 = t;
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
                                          t = m_3;
                                          {
                                            ATerm n_3 = t;
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
                                                t = n_3;
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
ATerm Prim_2 (ATerm t, ATerm d_32 (ATerm), ATerm e_32 (ATerm))
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
  w_8 = t;
  v_8 :
  if(match_cons(w_8, sym_Prim_2))
    {
      x_8 = ATgetArgument(w_8, 0);
      y_8 = ATgetArgument(w_8, 1);
      {
        ATerm b_9 = NULL;
        t = not_null(x_8);
        {
          ATerm e_9 = NULL;
          t = d_32(t);
          b_9 = t;
          t = not_null(y_8);
          t = e_32(t);
          e_9 = t;
          t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(b_9), not_null(e_9));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Where_1 (ATerm t, ATerm c_32 (ATerm))
{
  ATerm m_9 = NULL,n_9 = NULL;
  m_9 = t;
  l_9 :
  if(match_cons(m_9, sym_Where_1))
    {
      n_9 = ATgetArgument(m_9, 0);
      {
        ATerm p_9 = NULL;
        t = not_null(n_9);
        t = c_32(t);
        p_9 = t;
        t = (ATerm) ATmakeAppl(sym_Where_1, not_null(p_9));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm a_32 (ATerm), ATerm b_32 (ATerm))
{
  ATerm d_10 = NULL,e_10 = NULL,i_10 = NULL;
  d_10 = t;
  c_10 :
  if(match_cons(d_10, sym_Scope_2))
    {
      e_10 = ATgetArgument(d_10, 0);
      i_10 = ATgetArgument(d_10, 1);
      {
        ATerm y_10 = NULL;
        t = not_null(e_10);
        {
          ATerm a_11 = NULL;
          t = a_32(t);
          y_10 = t;
          t = not_null(i_10);
          t = b_32(t);
          a_11 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_10), not_null(a_11));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm x_31 (ATerm))
{
  ATerm i_11 = NULL,j_11 = NULL;
  i_11 = t;
  h_11 :
  if(match_cons(i_11, sym_Build_1))
    {
      j_11 = ATgetArgument(i_11, 0);
      {
        ATerm n_11 = NULL;
        t = not_null(j_11);
        t = x_31(t);
        n_11 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(n_11));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm w_31 (ATerm))
{
  ATerm a_12 = NULL,b_12 = NULL;
  a_12 = t;
  z_11 :
  if(match_cons(a_12, sym_Match_1))
    {
      b_12 = ATgetArgument(a_12, 0);
      {
        ATerm e_12 = NULL;
        t = not_null(b_12);
        t = w_31(t);
        e_12 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(e_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm t_31 (ATerm))
{
  ATerm l_12 = NULL,n_12 = NULL;
  l_12 = t;
  k_12 :
  if(match_cons(l_12, sym_Thread_1))
    {
      n_12 = ATgetArgument(l_12, 0);
      {
        ATerm p_12 = NULL;
        t = not_null(n_12);
        t = t_31(t);
        p_12 = t;
        t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(p_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm All_1 (ATerm t, ATerm s_31 (ATerm))
{
  ATerm w_12 = NULL,x_12 = NULL;
  w_12 = t;
  v_12 :
  if(match_cons(w_12, sym_All_1))
    {
      x_12 = ATgetArgument(w_12, 0);
      {
        ATerm z_12 = NULL;
        t = not_null(x_12);
        t = s_31(t);
        z_12 = t;
        t = (ATerm) ATmakeAppl(sym_All_1, not_null(z_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Some_1 (ATerm t, ATerm a_0 (ATerm))
{
  ATerm i_13 = NULL,j_13 = NULL;
  i_13 = t;
  h_13 :
  if(match_cons(i_13, sym_Some_1))
    {
      j_13 = ATgetArgument(i_13, 0);
      {
        ATerm o_3 = t;
        if(PushChoice()==0)
          {
            ATerm l_13 = NULL;
            t = not_null(j_13);
            t = a_0(t);
            l_13 = t;
            t = (ATerm) ATmakeAppl(sym_Some_1, not_null(l_13));
            PopChoice();
          }
        else
          {
            t = o_3;
            {
              ATerm o_13 = NULL;
              t = not_null(j_13);
              t = a_0(t);
              o_13 = t;
              t = (ATerm) ATmakeAppl(sym_Some_1, not_null(o_13));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm One_1 (ATerm t, ATerm q_31 (ATerm))
{
  ATerm x_13 = NULL,y_13 = NULL;
  x_13 = t;
  w_13 :
  if(match_cons(x_13, sym_One_1))
    {
      y_13 = ATgetArgument(x_13, 0);
      {
        ATerm a_14 = NULL;
        t = not_null(y_13);
        t = q_31(t);
        a_14 = t;
        t = (ATerm) ATmakeAppl(sym_One_1, not_null(a_14));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm o_31 (ATerm), ATerm p_31 (ATerm))
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  i_14 = t;
  h_14 :
  if(match_cons(i_14, sym_Cong_2))
    {
      j_14 = ATgetArgument(i_14, 0);
      k_14 = ATgetArgument(i_14, 1);
      {
        ATerm n_14 = NULL;
        t = not_null(j_14);
        {
          ATerm p_14 = NULL;
          t = o_31(t);
          n_14 = t;
          t = not_null(k_14);
          t = p_31(t);
          p_14 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(n_14), not_null(p_14));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm w_14 = NULL;
  w_14 = t;
  t = SSL_is_int(not_null(w_14));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm m_31 (ATerm), ATerm n_31 (ATerm))
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
  d_15 = t;
  c_15 :
  if(match_cons(d_15, sym_Path_2))
    {
      e_15 = ATgetArgument(d_15, 0);
      f_15 = ATgetArgument(d_15, 1);
      {
        ATerm i_15 = NULL;
        t = not_null(e_15);
        {
          ATerm k_15 = NULL;
          t = m_31(t);
          i_15 = t;
          t = not_null(f_15);
          t = n_31(t);
          k_15 = t;
          t = (ATerm) ATmakeAppl(sym_Path_2, not_null(i_15), not_null(k_15));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm w_30 (ATerm), ATerm x_30 (ATerm))
{
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
  t_15 = t;
  s_15 :
  if(match_cons(t_15, sym_Rec_2))
    {
      u_15 = ATgetArgument(t_15, 0);
      v_15 = ATgetArgument(t_15, 1);
      {
        ATerm y_15 = NULL;
        t = not_null(u_15);
        {
          ATerm a_16 = NULL;
          t = w_30(t);
          y_15 = t;
          t = not_null(v_15);
          t = x_30(t);
          a_16 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(y_15), not_null(a_16));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm v_30 (ATerm))
{
  ATerm i_16 = NULL,j_16 = NULL;
  i_16 = t;
  h_16 :
  if(match_cons(i_16, sym_SVar_1))
    {
      j_16 = ATgetArgument(i_16, 0);
      {
        ATerm l_16 = NULL;
        t = not_null(j_16);
        t = v_30(t);
        l_16 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(l_16));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm k_31 (ATerm), ATerm l_31 (ATerm))
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
  t_16 = t;
  s_16 :
  if(match_cons(t_16, sym_Call_2))
    {
      u_16 = ATgetArgument(t_16, 0);
      v_16 = ATgetArgument(t_16, 1);
      {
        ATerm y_16 = NULL;
        t = not_null(u_16);
        {
          ATerm a_17 = NULL;
          t = k_31(t);
          y_16 = t;
          t = not_null(v_16);
          t = l_31(t);
          a_17 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(y_16), not_null(a_17));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm t_30 (ATerm), ATerm u_30 (ATerm))
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
  j_17 = t;
  i_17 :
  if(match_cons(j_17, sym_LChoice_2))
    {
      k_17 = ATgetArgument(j_17, 0);
      l_17 = ATgetArgument(j_17, 1);
      {
        ATerm o_17 = NULL;
        t = not_null(k_17);
        {
          ATerm q_17 = NULL;
          t = t_30(t);
          o_17 = t;
          t = not_null(l_17);
          t = u_30(t);
          q_17 = t;
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_17), not_null(q_17));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm r_30 (ATerm), ATerm s_30 (ATerm))
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  z_17 = t;
  y_17 :
  if(match_cons(z_17, sym_Choice_2))
    {
      a_18 = ATgetArgument(z_17, 0);
      b_18 = ATgetArgument(z_17, 1);
      {
        ATerm e_18 = NULL;
        t = not_null(a_18);
        {
          ATerm g_18 = NULL;
          t = r_30(t);
          e_18 = t;
          t = not_null(b_18);
          t = s_30(t);
          g_18 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(e_18), not_null(g_18));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm p_30 (ATerm), ATerm q_30 (ATerm))
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
  p_18 = t;
  o_18 :
  if(match_cons(p_18, sym_Seq_2))
    {
      q_18 = ATgetArgument(p_18, 0);
      r_18 = ATgetArgument(p_18, 1);
      {
        ATerm u_18 = NULL;
        t = not_null(q_18);
        {
          ATerm w_18 = NULL;
          t = p_30(t);
          u_18 = t;
          t = not_null(r_18);
          t = q_30(t);
          w_18 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_18), not_null(w_18));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Test_1 (ATerm t, ATerm n_30 (ATerm))
{
  ATerm f_19 = NULL,g_19 = NULL;
  f_19 = t;
  e_19 :
  if(match_cons(f_19, sym_Test_1))
    {
      g_19 = ATgetArgument(f_19, 0);
      {
        ATerm i_19 = NULL;
        t = not_null(g_19);
        t = n_30(t);
        i_19 = t;
        t = (ATerm) ATmakeAppl(sym_Test_1, not_null(i_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Not_1 (ATerm t, ATerm o_30 (ATerm))
{
  ATerm p_19 = NULL,q_19 = NULL;
  p_19 = t;
  o_19 :
  if(match_cons(p_19, sym_Not_1))
    {
      q_19 = ATgetArgument(p_19, 0);
      {
        ATerm s_19 = NULL;
        t = not_null(q_19);
        t = o_30(t);
        s_19 = t;
        t = (ATerm) ATmakeAppl(sym_Not_1, not_null(s_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm x_19 = NULL;
  x_19 = t;
  w_19 :
  if(!(match_cons(x_19, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm z_19 = NULL;
  z_19 = t;
  y_19 :
  if(!(match_cons(z_19, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm p_3 = t;
  if(PushChoice()==0)
    {
      t = Id_0(t);
      PopChoice();
    }
  else
    {
      t = p_3;
      {
        ATerm q_3 = t;
        if(PushChoice()==0)
          {
            t = Fail_0(t);
            PopChoice();
          }
        else
          {
            t = q_3;
            {
              ATerm r_3 = t;
              if(PushChoice()==0)
                {
                  t = Not_1(t, strategy_expression_0);
                  PopChoice();
                }
              else
                {
                  t = r_3;
                  {
                    ATerm s_3 = t;
                    if(PushChoice()==0)
                      {
                        t = Test_1(t, strategy_expression_0);
                        PopChoice();
                      }
                    else
                      {
                        t = s_3;
                        {
                          ATerm t_3 = t;
                          if(PushChoice()==0)
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              PopChoice();
                            }
                          else
                            {
                              t = t_3;
                              {
                                ATerm u_3 = t;
                                if(PushChoice()==0)
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = u_3;
                                    {
                                      ATerm v_3 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = v_3;
                                          {
                                            ATerm w_3 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm g_0 (ATerm t)
                                                {
                                                  ATerm i_0 (ATerm t)
                                                  {
                                                    ATerm x_3 = t;
                                                    if(PushChoice()==0)
                                                      {
                                                        t = is_string_0(t);
                                                        PopChoice();
                                                      }
                                                    else
                                                      {
                                                        t = x_3;
                                                        t = Mod_2(t, is_string_0, is_string_0);
                                                      }
                                                    return(t);
                                                  }
                                                  t = SVar_1(t, i_0);
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
                                                t = w_3;
                                                {
                                                  ATerm y_3 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = Rec_2(t, is_string_0, strategy_expression_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = y_3;
                                                      {
                                                        ATerm z_3 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = Path_2(t, is_int_0, strategy_expression_0);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = z_3;
                                                            {
                                                              ATerm a_4 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm j_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = Cong_2(t, is_string_0, j_0);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = a_4;
                                                                  {
                                                                    ATerm b_4 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = One_1(t, strategy_expression_0);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_4;
                                                                        {
                                                                          ATerm c_4 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = Some_1(t, strategy_expression_0);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = c_4;
                                                                              {
                                                                                ATerm d_4 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    t = All_1(t, strategy_expression_0);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = d_4;
                                                                                    {
                                                                                      ATerm e_4 = t;
                                                                                      if(PushChoice()==0)
                                                                                        {
                                                                                          t = Thread_1(t, strategy_expression_0);
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = e_4;
                                                                                          {
                                                                                            ATerm f_4 = t;
                                                                                            if(PushChoice()==0)
                                                                                              {
                                                                                                t = Match_1(t, term_expression_0);
                                                                                                PopChoice();
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = f_4;
                                                                                                {
                                                                                                  ATerm g_4 = t;
                                                                                                  if(PushChoice()==0)
                                                                                                    {
                                                                                                      t = Build_1(t, term_expression_0);
                                                                                                      PopChoice();
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = g_4;
                                                                                                      {
                                                                                                        ATerm i_4 = t;
                                                                                                        if(PushChoice()==0)
                                                                                                          {
                                                                                                            ATerm k_0 (ATerm t)
                                                                                                            {
                                                                                                              t = list_1(t, is_string_0);
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Scope_2(t, k_0, strategy_expression_0);
                                                                                                            PopChoice();
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = i_4;
                                                                                                            {
                                                                                                              ATerm k_4 = t;
                                                                                                              if(PushChoice()==0)
                                                                                                                {
                                                                                                                  t = Where_1(t, strategy_expression_0);
                                                                                                                  PopChoice();
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = k_4;
                                                                                                                  {
                                                                                                                    ATerm l_4 = t;
                                                                                                                    if(PushChoice()==0)
                                                                                                                      {
                                                                                                                        ATerm l_0 (ATerm t)
                                                                                                                        {
                                                                                                                          t = list_1(t, term_expression_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Prim_2(t, is_string_0, l_0);
                                                                                                                        PopChoice();
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = l_4;
                                                                                                                        {
                                                                                                                          ATerm m_4 = t;
                                                                                                                          if(PushChoice()==0)
                                                                                                                            {
                                                                                                                              ATerm m_0 (ATerm t)
                                                                                                                              {
                                                                                                                                ATerm n_0 (ATerm t)
                                                                                                                                {
                                                                                                                                  t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = list_1(t, n_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Let_2(t, m_0, strategy_expression_0);
                                                                                                                              PopChoice();
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = m_4;
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
      }
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm c_20 = NULL;
  c_20 = t;
  t = SSL_is_string(not_null(c_20));
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm d_31 (ATerm), ATerm e_31 (ATerm))
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  j_20 = t;
  i_20 :
  if(match_cons(j_20, sym_VarDec_2))
    {
      k_20 = ATgetArgument(j_20, 0);
      l_20 = ATgetArgument(j_20, 1);
      {
        ATerm o_20 = NULL;
        t = not_null(k_20);
        {
          ATerm q_20 = NULL;
          t = d_31(t);
          o_20 = t;
          t = not_null(l_20);
          t = e_31(t);
          q_20 = t;
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(o_20), not_null(q_20));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Mod_2 (ATerm t, ATerm n_29 (ATerm), ATerm o_29 (ATerm))
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  z_20 = t;
  y_20 :
  if(match_cons(z_20, sym_Mod_2))
    {
      a_21 = ATgetArgument(z_20, 0);
      b_21 = ATgetArgument(z_20, 1);
      {
        ATerm e_21 = NULL;
        t = not_null(a_21);
        {
          ATerm g_21 = NULL;
          t = n_29(t);
          e_21 = t;
          t = not_null(b_21);
          t = o_29(t);
          g_21 = t;
          t = (ATerm) ATmakeAppl(sym_Mod_2, not_null(e_21), not_null(g_21));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm a_31 (ATerm), ATerm b_31 (ATerm), ATerm c_31 (ATerm))
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL;
  q_21 = t;
  p_21 :
  if(match_cons(q_21, sym_SDef_3))
    {
      r_21 = ATgetArgument(q_21, 0);
      s_21 = ATgetArgument(q_21, 1);
      t_21 = ATgetArgument(q_21, 2);
      {
        ATerm x_21 = NULL;
        t = not_null(r_21);
        {
          ATerm z_21 = NULL;
          t = a_31(t);
          x_21 = t;
          t = not_null(s_21);
          {
            ATerm b_22 = NULL;
            t = b_31(t);
            z_21 = t;
            t = not_null(t_21);
            t = c_31(t);
            b_22 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(x_21), not_null(z_21), not_null(b_22));
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
  ATerm n_4 = t;
  if(PushChoice()==0)
    {
      ATerm p_0 (ATerm t)
      {
        ATerm o_4 = t;
        if(PushChoice()==0)
          {
            t = is_string_0(t);
            PopChoice();
          }
        else
          {
            t = o_4;
            t = Mod_2(t, is_string_0, is_string_0);
          }
        return(t);
      }
      ATerm q_0 (ATerm t)
      {
        ATerm r_0 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, r_0);
        return(t);
      }
      t = SDef_3(t, p_0, q_0, strategy_expression_0);
      PopChoice();
    }
  else
    {
      t = n_4;
      {
        ATerm s_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, s_0);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm q_45 (ATerm))
{
  ATerm h_22 (ATerm t)
  {
    ATerm p_4 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = p_4;
        t = Cons_2(t, q_45, h_22);
      }
    return(t);
  }
  t = h_22(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm v_29 (ATerm))
{
  ATerm l_22 = NULL,m_22 = NULL;
  l_22 = t;
  k_22 :
  if(match_cons(l_22, sym_Strategies_1))
    {
      m_22 = ATgetArgument(l_22, 0);
      {
        ATerm o_22 = NULL;
        t = not_null(m_22);
        t = v_29(t);
        o_22 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(o_22));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm x_29 (ATerm))
{
  ATerm v_22 = NULL,w_22 = NULL;
  v_22 = t;
  u_22 :
  if(match_cons(v_22, sym_Specification_1))
    {
      w_22 = ATgetArgument(v_22, 0);
      {
        ATerm y_22 = NULL;
        t = not_null(w_22);
        t = x_29(t);
        y_22 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(y_22));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm u_4 = t;
  if(PushChoice()==0)
    {
      ATerm t_0 (ATerm t)
      {
        ATerm u_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            ATerm w_0 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, w_0);
            return(t);
          }
          t = Cons_2(t, v_0, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, u_0);
        return(t);
      }
      t = Specification_1(t, t_0);
      PopChoice();
    }
  else
    {
      t = u_4;
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
  ATerm d_23 = NULL;
  d_23 = t;
  c_23 :
  if(!(match_cons(d_23, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm f_32 (ATerm), ATerm g_32 (ATerm))
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL;
  i_23 = t;
  h_23 :
  if(match_cons(i_23, sym_TCons_2))
    {
      j_23 = ATgetArgument(i_23, 0);
      k_23 = ATgetArgument(i_23, 1);
      {
        ATerm n_23 = NULL;
        t = not_null(j_23);
        {
          ATerm p_23 = NULL;
          t = f_32(t);
          n_23 = t;
          t = not_null(k_23);
          t = g_32(t);
          p_23 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_23), not_null(p_23));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm w_23 = NULL;
  ATerm v_4;
  v_4 = t;
  {
    ATerm y_0 (ATerm t)
    {
      ATerm x_23 = NULL,y_23 = NULL;
      x_23 = t;
      v_23 :
      if(match_cons(x_23, sym_Program_1))
        {
          y_23 = ATgetArgument(x_23, 0);
          if(w_23 != NULL && w_23 != y_23)
            _fail(y_23);
          else
            w_23 = y_23;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, y_0);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_23), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = v_4;
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
  ATerm b_24 = NULL;
  b_24 = t;
  t = SSL_exit(not_null(b_24));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL;
  i_24 = t;
  f_24 :
  if(match_cons(i_24, sym_TCons_2))
    {
      j_24 = ATgetArgument(i_24, 0);
      k_24 = ATgetArgument(i_24, 1);
      g_24 :
      if(match_cons(k_24, sym_TCons_2))
        {
          l_24 = ATgetArgument(k_24, 0);
          m_24 = ATgetArgument(k_24, 1);
          h_24 :
          if(match_cons(m_24, sym_TNil_0))
            {
              ATerm x_4;
              x_4 = t;
              t = SSL_printnl(not_null(j_24), not_null(l_24));
              t = x_4;
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
ATerm try_1 (ATerm t, ATerm e_52 (ATerm))
{
  ATerm z_4 = t;
  if(PushChoice()==0)
    {
      t = e_52(t);
      PopChoice();
    }
  else
    t = z_4;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL;
  ATerm z_0 (ATerm t)
  {
    ATerm a_1 (ATerm t)
    {
      ATerm a_5 = t;
      if(PushChoice()==0)
        {
          ATerm c_1 (ATerm t)
          {
            ATerm x_24 = NULL;
            x_24 = t;
            q_24 :
            if(!(match_cons(x_24, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, c_1);
          PopChoice();
          _fail(t);
        }
      else
        t = a_5;
      return(t);
    }
    ATerm b_1 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, a_1, b_1);
    {
      ATerm d_1 (ATerm t)
      {
        ATerm f_1 (ATerm t)
        {
          ATerm y_24 = NULL,z_24 = NULL;
          y_24 = t;
          s_24 :
          if(match_cons(y_24, sym_Runtime_1))
            {
              z_24 = ATgetArgument(y_24, 0);
              if(w_24 != NULL && w_24 != z_24)
                _fail(z_24);
              else
                w_24 = z_24;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, f_1);
        return(t);
      }
      ATerm e_1 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, d_1, e_1);
      {
        ATerm g_1 (ATerm t)
        {
          ATerm i_1 (ATerm t)
          {
            ATerm a_25 = NULL,b_25 = NULL;
            a_25 = t;
            u_24 :
            if(match_cons(a_25, sym_Program_1))
              {
                b_25 = ATgetArgument(a_25, 0);
                if(v_24 != NULL && v_24 != b_25)
                  _fail(b_25);
                else
                  v_24 = b_25;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, i_1);
          return(t);
        }
        ATerm h_1 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, g_1, h_1);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_24), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_24), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, z_0);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  i_25 = t;
  f_25 :
  if(match_cons(i_25, sym_TCons_2))
    {
      j_25 = ATgetArgument(i_25, 0);
      k_25 = ATgetArgument(i_25, 1);
      g_25 :
      if(match_cons(k_25, sym_TCons_2))
        {
          l_25 = ATgetArgument(k_25, 0);
          m_25 = ATgetArgument(k_25, 1);
          h_25 :
          if(match_cons(m_25, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(j_25), not_null(l_25));
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
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL;
  u_25 = t;
  r_25 :
  if(match_cons(u_25, sym_TCons_2))
    {
      v_25 = ATgetArgument(u_25, 0);
      w_25 = ATgetArgument(u_25, 1);
      s_25 :
      if(match_cons(w_25, sym_TCons_2))
        {
          x_25 = ATgetArgument(w_25, 0);
          y_25 = ATgetArgument(w_25, 1);
          t_25 :
          if(match_cons(y_25, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(v_25), not_null(x_25));
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
  ATerm b_5;
  b_5 = t;
  {
    ATerm j_1 (ATerm t)
    {
      ATerm c_5 = t;
      if(PushChoice()==0)
        {
          ATerm l_1 (ATerm t)
          {
            ATerm h_26 = NULL,i_26 = NULL;
            h_26 = t;
            d_26 :
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
          t = option_defined_1(t, l_1);
          PopChoice();
        }
      else
        {
          t = c_5;
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
    ATerm k_1 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, j_1, k_1);
  }
  t = b_5;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm n_1 (ATerm t)
      {
        ATerm o_1 (ATerm t)
        {
          t = not_null(g_26);
          return(t);
        }
        t = split_2(t, o_1, _id);
        return(t);
      }
      t = TCons_2(t, n_1, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, m_1);
    {
      ATerm d_5 = t;
      if(PushChoice()==0)
        {
          ATerm p_1 (ATerm t)
          {
            ATerm r_1 (ATerm t)
            {
              ATerm k_26 = NULL;
              k_26 = t;
              f_26 :
              if(!(match_cons(k_26, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, r_1);
            return(t);
          }
          ATerm q_1 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, p_1, q_1);
          PopChoice();
        }
      else
        {
          t = d_5;
          {
            ATerm s_1 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, s_1);
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
ATerm apply_strategy_1 (ATerm t, ATerm x_36 (ATerm))
{
  ATerm s_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
  ATerm e_5;
  e_5 = t;
  t = dtime_0(t);
  t = e_5;
  t = x_36(t);
  {
    ATerm f_5;
    f_5 = t;
    {
      ATerm t_26 = NULL;
      t = dtime_0(t);
      t_26 = t;
      if(s_26 != NULL && s_26 != t_26)
        _fail(t_26);
      else
        s_26 = t_26;
    }
    t = f_5;
    u_26 = t;
    p_26 :
    if(match_cons(u_26, sym_TCons_2))
      {
        v_26 = ATgetArgument(u_26, 0);
        w_26 = ATgetArgument(u_26, 1);
        q_26 :
        if(match_cons(w_26, sym_TCons_2))
          {
            x_26 = ATgetArgument(w_26, 0);
            y_26 = ATgetArgument(w_26, 1);
            r_26 :
            if(match_cons(y_26, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(s_26)), not_null(v_26)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_26), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm e_27 = NULL;
  e_27 = t;
  t = SSL_ReadFromFile(not_null(e_27));
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_39 (ATerm), ATerm c_39 (ATerm))
{
  ATerm k_27 = NULL;
  ATerm m_27 = NULL;
  k_27 = t;
  {
    ATerm p_27 = NULL;
    t = b_39(t);
    m_27 = t;
    t = not_null(k_27);
    t = c_39(t);
    p_27 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_27), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_27 = NULL;
  ATerm k_5;
  k_5 = t;
  {
    ATerm l_5 = t;
    if(PushChoice()==0)
      {
        ATerm t_1 (ATerm t)
        {
          ATerm y_27 = NULL,z_27 = NULL;
          y_27 = t;
          v_27 :
          if(match_cons(y_27, sym_Input_1))
            {
              z_27 = ATgetArgument(y_27, 0);
              if(x_27 != NULL && x_27 != z_27)
                _fail(z_27);
              else
                x_27 = z_27;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, t_1);
        PopChoice();
      }
    else
      {
        t = l_5;
        {
          ATerm a_28 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          a_28 = t;
          if(x_27 != NULL && x_27 != a_28)
            _fail(a_28);
          else
            x_27 = a_28;
        }
      }
  }
  t = k_5;
  {
    ATerm u_1 (ATerm t)
    {
      t = not_null(x_27);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, u_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_28 = NULL;
  e_28 = t;
  d_28 :
  if(!(match_cons(e_28, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm o_27 (ATerm))
{
  ATerm i_28 = NULL,j_28 = NULL;
  i_28 = t;
  h_28 :
  if(match_cons(i_28, sym_Undefined_1))
    {
      j_28 = ATgetArgument(i_28, 0);
      {
        ATerm l_28 = NULL;
        t = not_null(j_28);
        t = o_27(t);
        l_28 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_28));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm q_28 = NULL;
  q_28 = t;
  p_28 :
  if(!(match_cons(q_28, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm w_45 (ATerm))
{
  ATerm r_28 (ATerm t)
  {
    ATerm n_5 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, w_45, _id);
        PopChoice();
      }
    else
      {
        t = n_5;
        t = Cons_2(t, _id, r_28);
      }
    return(t);
  }
  t = r_28(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_36 (ATerm))
{
  t = fetch_1(t, b_36);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_36 (ATerm))
{
  ATerm v_1 (ATerm t)
  {
    ATerm p_5 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = p_5;
        {
          ATerm q_5 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = q_5;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, v_1);
  t = w_36(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
  ATerm r_5;
  r_5 = t;
  {
    ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL;
    d_29 = t;
    t_28 :
    if(match_cons(d_29, sym_TCons_2))
      {
        e_29 = ATgetArgument(d_29, 0);
        f_29 = ATgetArgument(d_29, 1);
        u_28 :
        if(match_cons(f_29, sym_TCons_2))
          {
            g_29 = ATgetArgument(f_29, 0);
            h_29 = ATgetArgument(f_29, 1);
            v_28 :
            if(match_cons(h_29, sym_TCons_2))
              {
                i_29 = ATgetArgument(h_29, 0);
                j_29 = ATgetArgument(h_29, 1);
                w_28 :
                if(match_cons(j_29, sym_TNil_0))
                  {
                    if(a_29 != NULL && a_29 != e_29)
                      _fail(e_29);
                    else
                      a_29 = e_29;
                    if(b_29 != NULL && b_29 != g_29)
                      _fail(g_29);
                    else
                      b_29 = g_29;
                    if(c_29 != NULL && c_29 != i_29)
                      _fail(i_29);
                    else
                      c_29 = i_29;
                    t = SSL_table_put(not_null(a_29), not_null(b_29), not_null(c_29));
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
  t = r_5;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm m_29 = NULL;
  m_29 = t;
  t = SSL_table_create(not_null(m_29));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm s_29 = NULL;
  s_29 = t;
  {
    ATerm s_5;
    s_5 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_29), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = s_5;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm u_35 (ATerm), ATerm v_35 (ATerm))
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
  a_30 = t;
  z_29 :
  if(match_cons(a_30, sym_Cons_2))
    {
      b_30 = ATgetArgument(a_30, 0);
      c_30 = ATgetArgument(a_30, 1);
      {
        ATerm f_30 = NULL;
        t = not_null(b_30);
        t = u_35(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = v_35(t);
        f_30 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_30), not_null(c_30));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm w_35 (ATerm), ATerm x_35 (ATerm))
{
  ATerm u_31 = NULL,v_31 = NULL,y_31 = NULL,z_31 = NULL,h_32 = NULL;
  u_31 = t;
  j_31 :
  if(match_cons(u_31, sym_Cons_2))
    {
      v_31 = ATgetArgument(u_31, 0);
      y_31 = ATgetArgument(u_31, 1);
      r_31 :
      if(match_cons(y_31, sym_Cons_2))
        {
          z_31 = ATgetArgument(y_31, 0);
          h_32 = ATgetArgument(y_31, 1);
          {
            ATerm n_32 = NULL;
            t = not_null(v_31);
            t = w_35(t);
            t = not_null(z_31);
            t = x_35(t);
            n_32 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_32), not_null(h_32));
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
  ATerm t_5 = t;
  if(PushChoice()==0)
    {
      ATerm w_1 (ATerm t)
      {
        ATerm l_33 = NULL;
        l_33 = t;
        r_32 :
        if(!(match_string(l_33, "-S")))
          _fail(t);
        return(t);
      }
      ATerm x_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, w_1, x_1);
      PopChoice();
    }
  else
    {
      t = t_5;
      {
        ATerm u_5 = t;
        if(PushChoice()==0)
          {
            ATerm y_1 (ATerm t)
            {
              ATerm m_33 = NULL;
              m_33 = t;
              s_32 :
              if(!(match_string(m_33, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm z_1 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, y_1, z_1);
            PopChoice();
          }
        else
          {
            t = u_5;
            {
              ATerm y_5 = t;
              if(PushChoice()==0)
                {
                  ATerm a_2 (ATerm t)
                  {
                    ATerm n_33 = NULL;
                    n_33 = t;
                    t_32 :
                    if(!(match_string(n_33, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm b_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, a_2, b_2);
                  PopChoice();
                }
              else
                {
                  t = y_5;
                  {
                    ATerm a_6 = t;
                    if(PushChoice()==0)
                      {
                        ATerm c_2 (ATerm t)
                        {
                          ATerm o_33 = NULL;
                          o_33 = t;
                          u_32 :
                          if(!(match_string(o_33, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm d_2 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, c_2, d_2);
                        PopChoice();
                      }
                    else
                      {
                        t = a_6;
                        {
                          ATerm b_6 = t;
                          if(PushChoice()==0)
                            {
                              ATerm e_2 (ATerm t)
                              {
                                ATerm p_33 = NULL;
                                p_33 = t;
                                v_32 :
                                if(!(match_string(p_33, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm f_2 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, e_2, f_2);
                              PopChoice();
                            }
                          else
                            {
                              t = b_6;
                              {
                                ATerm c_6 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm g_2 (ATerm t)
                                    {
                                      ATerm q_33 = NULL;
                                      q_33 = t;
                                      w_32 :
                                      if(!(match_string(q_33, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm h_2 (ATerm t)
                                    {
                                      ATerm r_33 = NULL;
                                      r_33 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(r_33));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, g_2, h_2);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = c_6;
                                    {
                                      ATerm d_6 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm i_2 (ATerm t)
                                          {
                                            ATerm t_33 = NULL;
                                            t_33 = t;
                                            y_32 :
                                            if(!(match_string(t_33, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm j_2 (ATerm t)
                                          {
                                            ATerm u_33 = NULL;
                                            u_33 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_33));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, i_2, j_2);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = d_6;
                                          {
                                            ATerm e_6 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm k_2 (ATerm t)
                                                {
                                                  ATerm w_33 = NULL;
                                                  w_33 = t;
                                                  a_33 :
                                                  if(!(match_string(w_33, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm l_2 (ATerm t)
                                                {
                                                  ATerm x_33 = NULL;
                                                  x_33 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_33));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, k_2, l_2);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = e_6;
                                                {
                                                  ATerm f_6 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm m_2 (ATerm t)
                                                      {
                                                        ATerm z_33 = NULL;
                                                        z_33 = t;
                                                        c_33 :
                                                        if(!(match_string(z_33, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm n_2 (ATerm t)
                                                      {
                                                        ATerm a_34 = NULL;
                                                        a_34 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_34));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, m_2, n_2);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = f_6;
                                                      {
                                                        ATerm k_6 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm o_2 (ATerm t)
                                                            {
                                                              ATerm c_34 = NULL;
                                                              c_34 = t;
                                                              e_33 :
                                                              if(!(match_string(c_34, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm p_2 (ATerm t)
                                                            {
                                                              ATerm d_34 = NULL;
                                                              d_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_34));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, o_2, p_2);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = k_6;
                                                            {
                                                              ATerm l_6 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm q_2 (ATerm t)
                                                                  {
                                                                    ATerm f_34 = NULL;
                                                                    f_34 = t;
                                                                    g_33 :
                                                                    if(!(match_string(f_34, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm r_2 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, q_2, r_2);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = l_6;
                                                                  {
                                                                    ATerm n_6 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm s_2 (ATerm t)
                                                                        {
                                                                          ATerm g_34 = NULL;
                                                                          g_34 = t;
                                                                          h_33 :
                                                                          if(!(match_string(g_34, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm t_2 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, s_2, t_2);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = n_6;
                                                                        {
                                                                          ATerm p_6 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm u_2 (ATerm t)
                                                                              {
                                                                                ATerm h_34 = NULL;
                                                                                h_34 = t;
                                                                                i_33 :
                                                                                if(!(match_string(h_34, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm v_2 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, u_2, v_2);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = p_6;
                                                                              {
                                                                                ATerm q_6 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm w_2 (ATerm t)
                                                                                    {
                                                                                      ATerm i_34 = NULL;
                                                                                      i_34 = t;
                                                                                      j_33 :
                                                                                      if(!(match_string(i_34, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm x_2 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, w_2, x_2);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_6;
                                                                                    {
                                                                                      ATerm y_2 (ATerm t)
                                                                                      {
                                                                                        ATerm j_34 = NULL;
                                                                                        j_34 = t;
                                                                                        k_33 :
                                                                                        if(!(match_string(j_34, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm z_2 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, y_2, z_2);
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
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
  r_34 = t;
  q_34 :
  if(match_cons(r_34, sym_Cons_2))
    {
      s_34 = ATgetArgument(r_34, 0);
      t_34 = ATgetArgument(r_34, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_34)), not_null(t_34));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_32 (ATerm), ATerm k_32 (ATerm))
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
  b_35 = t;
  a_35 :
  if(match_cons(b_35, sym_Cons_2))
    {
      c_35 = ATgetArgument(b_35, 0);
      d_35 = ATgetArgument(b_35, 1);
      {
        ATerm g_35 = NULL;
        t = not_null(c_35);
        {
          ATerm i_35 = NULL;
          t = j_32(t);
          g_35 = t;
          t = not_null(d_35);
          t = k_32(t);
          i_35 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_35), not_null(i_35));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm o_35 = NULL;
  o_35 = t;
  n_35 :
  if(!(match_cons(o_35, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_35 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    ATerm q_35 = NULL;
    q_35 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_35));
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    ATerm r_6 = t;
    if(PushChoice()==0)
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
            t = s_35(t);
            t = Cons_2(t, _id, b_3);
          }
        PopChoice();
      }
    else
      {
        t = r_6;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, a_3, b_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm l_36 (ATerm), ATerm m_36 (ATerm), ATerm n_36 (ATerm))
{
  ATerm c_3 (ATerm t)
  {
    ATerm t_6 = t;
    if(PushChoice()==0)
      {
        t = m_36(t);
        PopChoice();
      }
    else
      {
        t = t_6;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, c_3);
  t = store_options_0(t);
  {
    ATerm u_6 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, n_36);
        PopChoice();
      }
    else
      {
        t = u_6;
        {
          ATerm y_6 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, l_36);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = y_6;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm g_36 (ATerm), ATerm h_36 (ATerm))
{
  t = iowrap_3(t, g_36, h_36, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm d_36 (ATerm))
{
  ATerm d_3 (ATerm t)
  {
    ATerm e_3 (ATerm t)
    {
      t = TCons_2(t, d_36, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, e_3);
    return(t);
  }
  t = iowrap_2(t, d_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
