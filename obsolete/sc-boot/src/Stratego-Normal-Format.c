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
ATerm debug_1 (ATerm, ATerm a_38 (ATerm));
ATerm Let_2 (ATerm, ATerm b_31 (ATerm), ATerm c_31 (ATerm));
ATerm Op_2 (ATerm, ATerm o_30 (ATerm), ATerm p_30 (ATerm));
ATerm Var_1 (ATerm, ATerm k_30 (ATerm));
ATerm As_2 (ATerm, ATerm a_29 (ATerm), ATerm b_29 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm c_29 (ATerm));
ATerm Str_1 (ATerm, ATerm n_30 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm m_30 (ATerm));
ATerm Int_1 (ATerm, ATerm l_30 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm g_32 (ATerm), ATerm h_32 (ATerm));
ATerm Where_1 (ATerm, ATerm f_32 (ATerm));
ATerm Scope_2 (ATerm, ATerm d_32 (ATerm), ATerm e_32 (ATerm));
ATerm Build_1 (ATerm, ATerm a_32 (ATerm));
ATerm Match_1 (ATerm, ATerm z_31 (ATerm));
ATerm Thread_1 (ATerm, ATerm w_31 (ATerm));
ATerm All_1 (ATerm, ATerm v_31 (ATerm));
ATerm Some_1 (ATerm, ATerm g_0 (ATerm));
ATerm One_1 (ATerm, ATerm t_31 (ATerm));
ATerm Cong_2 (ATerm, ATerm r_31 (ATerm), ATerm s_31 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm p_31 (ATerm), ATerm q_31 (ATerm));
ATerm Rec_2 (ATerm, ATerm z_30 (ATerm), ATerm a_31 (ATerm));
ATerm SVar_1 (ATerm, ATerm y_30 (ATerm));
ATerm Call_2 (ATerm, ATerm n_31 (ATerm), ATerm o_31 (ATerm));
ATerm LChoice_2 (ATerm, ATerm w_30 (ATerm), ATerm x_30 (ATerm));
ATerm Choice_2 (ATerm, ATerm u_30 (ATerm), ATerm v_30 (ATerm));
ATerm Seq_2 (ATerm, ATerm s_30 (ATerm), ATerm t_30 (ATerm));
ATerm Test_1 (ATerm, ATerm q_30 (ATerm));
ATerm Not_1 (ATerm, ATerm r_30 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm g_31 (ATerm), ATerm h_31 (ATerm));
ATerm Mod_2 (ATerm, ATerm q_29 (ATerm), ATerm r_29 (ATerm));
ATerm SDef_3 (ATerm, ATerm d_31 (ATerm), ATerm e_31 (ATerm), ATerm f_31 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm j_46 (ATerm));
ATerm Strategies_1 (ATerm, ATerm y_29 (ATerm));
ATerm Specification_1 (ATerm, ATerm a_30 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm i_32 (ATerm), ATerm j_32 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm q_37 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm u_39 (ATerm), ATerm v_39 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm p_37 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm v_46 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm w_35 (ATerm));
ATerm map_1 (ATerm, ATerm h_46 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm a_52 (ATerm), ATerm b_52 (ATerm));
ATerm repeat_1 (ATerm, ATerm d_52 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm v_35 (ATerm));
ATerm Program_1 (ATerm, ATerm p_27 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm q_27 (ATerm));
ATerm fetch_1 (ATerm, ATerm p_46 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_36 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_52 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm a_36 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm m_32 (ATerm), ATerm n_32 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm y_35 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_35 (ATerm));
ATerm iowrap_3 (ATerm, ATerm e_37 (ATerm), ATerm f_37 (ATerm), ATerm g_37 (ATerm));
ATerm iowrap_2 (ATerm, ATerm z_36 (ATerm), ATerm a_37 (ATerm));
ATerm iowrap_1 (ATerm, ATerm w_36 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm a_38 (ATerm))
{
  ATerm v_3;
  v_3 = t;
  {
    ATerm h_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm i_0 (ATerm t)
    {
      ATerm p_4 = NULL;
      ATerm r_4 = NULL;
      p_4 = t;
      {
        ATerm s_4 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = a_38(t);
        s_4 = t;
        if(r_4 != NULL && r_4 != s_4)
          _fail(s_4);
        else
          r_4 = s_4;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_4), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_4), (ATerm) ATmakeAppl(sym_Nil_0)));
      }
      return(t);
    }
    t = split_2(t, h_0, i_0);
    t = printnl_0(t);
  }
  t = v_3;
  return(t);
}
ATerm Let_2 (ATerm t, ATerm b_31 (ATerm), ATerm c_31 (ATerm))
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL;
  z_4 = t;
  y_4 :
  if(match_cons(z_4, sym_Let_2))
    {
      a_5 = ATgetArgument(z_4, 0);
      b_5 = ATgetArgument(z_4, 1);
      {
        ATerm e_5 = NULL;
        t = not_null(a_5);
        {
          ATerm g_5 = NULL;
          t = b_31(t);
          e_5 = t;
          t = not_null(b_5);
          t = c_31(t);
          g_5 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(e_5), not_null(g_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm o_30 (ATerm), ATerm p_30 (ATerm))
{
  ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
  p_5 = t;
  o_5 :
  if(match_cons(p_5, sym_Op_2))
    {
      q_5 = ATgetArgument(p_5, 0);
      r_5 = ATgetArgument(p_5, 1);
      {
        ATerm u_5 = NULL;
        t = not_null(q_5);
        {
          ATerm w_5 = NULL;
          t = o_30(t);
          u_5 = t;
          t = not_null(r_5);
          t = p_30(t);
          w_5 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(u_5), not_null(w_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm k_30 (ATerm))
{
  ATerm e_6 = NULL,f_6 = NULL;
  e_6 = t;
  d_6 :
  if(match_cons(e_6, sym_Var_1))
    {
      f_6 = ATgetArgument(e_6, 0);
      {
        ATerm h_6 = NULL;
        t = not_null(f_6);
        t = k_30(t);
        h_6 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm As_2 (ATerm t, ATerm a_29 (ATerm), ATerm b_29 (ATerm))
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL;
  p_6 = t;
  o_6 :
  if(match_cons(p_6, sym_As_2))
    {
      q_6 = ATgetArgument(p_6, 0);
      r_6 = ATgetArgument(p_6, 1);
      {
        ATerm u_6 = NULL;
        t = not_null(q_6);
        {
          ATerm w_6 = NULL;
          t = a_29(t);
          u_6 = t;
          t = not_null(r_6);
          t = b_29(t);
          w_6 = t;
          t = (ATerm) ATmakeAppl(sym_As_2, not_null(u_6), not_null(w_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm c_29 (ATerm))
{
  ATerm e_7 = NULL,f_7 = NULL;
  e_7 = t;
  d_7 :
  if(match_cons(e_7, sym_BuildDefault_1))
    {
      f_7 = ATgetArgument(e_7, 0);
      {
        ATerm h_7 = NULL;
        t = not_null(f_7);
        t = c_29(t);
        h_7 = t;
        t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(h_7));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm n_30 (ATerm))
{
  ATerm o_7 = NULL,p_7 = NULL;
  o_7 = t;
  n_7 :
  if(match_cons(o_7, sym_Str_1))
    {
      p_7 = ATgetArgument(o_7, 0);
      {
        ATerm r_7 = NULL;
        t = not_null(p_7);
        t = n_30(t);
        r_7 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, not_null(r_7));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_real_0 (ATerm t)
{
  ATerm d_8 = NULL;
  d_8 = t;
  t = SSL_is_real(not_null(d_8));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm m_30 (ATerm))
{
  ATerm m_8 = NULL,n_8 = NULL;
  m_8 = t;
  l_8 :
  if(match_cons(m_8, sym_Real_1))
    {
      n_8 = ATgetArgument(m_8, 0);
      {
        ATerm p_8 = NULL;
        t = not_null(n_8);
        t = m_30(t);
        p_8 = t;
        t = (ATerm) ATmakeAppl(sym_Real_1, not_null(p_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Int_1 (ATerm t, ATerm l_30 (ATerm))
{
  ATerm w_8 = NULL,x_8 = NULL;
  w_8 = t;
  v_8 :
  if(match_cons(w_8, sym_Int_1))
    {
      x_8 = ATgetArgument(w_8, 0);
      {
        ATerm z_8 = NULL;
        t = not_null(x_8);
        t = l_30(t);
        z_8 = t;
        t = (ATerm) ATmakeAppl(sym_Int_1, not_null(z_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm f_9 = NULL;
  f_9 = t;
  e_9 :
  if(!(match_cons(f_9, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm w_3 = t;
  if(PushChoice()==0)
    {
      t = Wld_0(t);
      PopChoice();
    }
  else
    {
      t = w_3;
      {
        ATerm x_3 = t;
        if(PushChoice()==0)
          {
            t = Var_1(t, is_string_0);
            PopChoice();
          }
        else
          {
            t = x_3;
            {
              ATerm y_3 = t;
              if(PushChoice()==0)
                {
                  t = Int_1(t, is_int_0);
                  PopChoice();
                }
              else
                {
                  t = y_3;
                  {
                    ATerm z_3 = t;
                    if(PushChoice()==0)
                      {
                        t = Real_1(t, is_real_0);
                        PopChoice();
                      }
                    else
                      {
                        t = z_3;
                        {
                          ATerm a_4 = t;
                          if(PushChoice()==0)
                            {
                              t = Str_1(t, is_string_0);
                              PopChoice();
                            }
                          else
                            {
                              t = a_4;
                              {
                                ATerm b_4 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = b_4;
                                    {
                                      ATerm c_4 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm j_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, j_0, term_expression_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = c_4;
                                          {
                                            ATerm d_4 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm k_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, k_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = d_4;
                                                {
                                                  ATerm l_0 (ATerm t)
                                                  {
                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
                                                    return(t);
                                                  }
                                                  t = debug_1(t, l_0);
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Prim_2 (ATerm t, ATerm g_32 (ATerm), ATerm h_32 (ATerm))
{
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL;
  l_9 = t;
  k_9 :
  if(match_cons(l_9, sym_Prim_2))
    {
      m_9 = ATgetArgument(l_9, 0);
      n_9 = ATgetArgument(l_9, 1);
      {
        ATerm q_9 = NULL;
        t = not_null(m_9);
        {
          ATerm s_9 = NULL;
          t = g_32(t);
          q_9 = t;
          t = not_null(n_9);
          t = h_32(t);
          s_9 = t;
          t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(q_9), not_null(s_9));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Where_1 (ATerm t, ATerm f_32 (ATerm))
{
  ATerm m_10 = NULL,n_10 = NULL;
  m_10 = t;
  i_10 :
  if(match_cons(m_10, sym_Where_1))
    {
      n_10 = ATgetArgument(m_10, 0);
      {
        ATerm a_11 = NULL;
        t = not_null(n_10);
        t = f_32(t);
        a_11 = t;
        t = (ATerm) ATmakeAppl(sym_Where_1, not_null(a_11));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm d_32 (ATerm), ATerm e_32 (ATerm))
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
  i_11 = t;
  h_11 :
  if(match_cons(i_11, sym_Scope_2))
    {
      j_11 = ATgetArgument(i_11, 0);
      k_11 = ATgetArgument(i_11, 1);
      {
        ATerm p_11 = NULL;
        t = not_null(j_11);
        {
          ATerm r_11 = NULL;
          t = d_32(t);
          p_11 = t;
          t = not_null(k_11);
          t = e_32(t);
          r_11 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_11), not_null(r_11));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm a_32 (ATerm))
{
  ATerm g_12 = NULL,h_12 = NULL;
  g_12 = t;
  e_12 :
  if(match_cons(g_12, sym_Build_1))
    {
      h_12 = ATgetArgument(g_12, 0);
      {
        ATerm j_12 = NULL;
        t = not_null(h_12);
        t = a_32(t);
        j_12 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(j_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm z_31 (ATerm))
{
  ATerm r_12 = NULL,s_12 = NULL;
  r_12 = t;
  q_12 :
  if(match_cons(r_12, sym_Match_1))
    {
      s_12 = ATgetArgument(r_12, 0);
      {
        ATerm u_12 = NULL;
        t = not_null(s_12);
        t = z_31(t);
        u_12 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(u_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm w_31 (ATerm))
{
  ATerm b_13 = NULL,c_13 = NULL;
  b_13 = t;
  a_13 :
  if(match_cons(b_13, sym_Thread_1))
    {
      c_13 = ATgetArgument(b_13, 0);
      {
        ATerm e_13 = NULL;
        t = not_null(c_13);
        t = w_31(t);
        e_13 = t;
        t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(e_13));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm All_1 (ATerm t, ATerm v_31 (ATerm))
{
  ATerm l_13 = NULL,m_13 = NULL;
  l_13 = t;
  k_13 :
  if(match_cons(l_13, sym_All_1))
    {
      m_13 = ATgetArgument(l_13, 0);
      {
        ATerm o_13 = NULL;
        t = not_null(m_13);
        t = v_31(t);
        o_13 = t;
        t = (ATerm) ATmakeAppl(sym_All_1, not_null(o_13));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Some_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm x_13 = NULL,y_13 = NULL;
  x_13 = t;
  w_13 :
  if(match_cons(x_13, sym_Some_1))
    {
      y_13 = ATgetArgument(x_13, 0);
      {
        ATerm e_4 = t;
        if(PushChoice()==0)
          {
            ATerm a_14 = NULL;
            t = not_null(y_13);
            t = g_0(t);
            a_14 = t;
            t = (ATerm) ATmakeAppl(sym_Some_1, not_null(a_14));
            PopChoice();
          }
        else
          {
            t = e_4;
            {
              ATerm d_14 = NULL;
              t = not_null(y_13);
              t = g_0(t);
              d_14 = t;
              t = (ATerm) ATmakeAppl(sym_Some_1, not_null(d_14));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm One_1 (ATerm t, ATerm t_31 (ATerm))
{
  ATerm m_14 = NULL,n_14 = NULL;
  m_14 = t;
  l_14 :
  if(match_cons(m_14, sym_One_1))
    {
      n_14 = ATgetArgument(m_14, 0);
      {
        ATerm p_14 = NULL;
        t = not_null(n_14);
        t = t_31(t);
        p_14 = t;
        t = (ATerm) ATmakeAppl(sym_One_1, not_null(p_14));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm r_31 (ATerm), ATerm s_31 (ATerm))
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
  a_15 = t;
  z_14 :
  if(match_cons(a_15, sym_Cong_2))
    {
      b_15 = ATgetArgument(a_15, 0);
      c_15 = ATgetArgument(a_15, 1);
      {
        ATerm f_15 = NULL;
        t = not_null(b_15);
        {
          ATerm h_15 = NULL;
          t = r_31(t);
          f_15 = t;
          t = not_null(c_15);
          t = s_31(t);
          h_15 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(f_15), not_null(h_15));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm n_15 = NULL;
  n_15 = t;
  t = SSL_is_int(not_null(n_15));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm p_31 (ATerm), ATerm q_31 (ATerm))
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
  u_15 = t;
  t_15 :
  if(match_cons(u_15, sym_Path_2))
    {
      v_15 = ATgetArgument(u_15, 0);
      w_15 = ATgetArgument(u_15, 1);
      {
        ATerm z_15 = NULL;
        t = not_null(v_15);
        {
          ATerm b_16 = NULL;
          t = p_31(t);
          z_15 = t;
          t = not_null(w_15);
          t = q_31(t);
          b_16 = t;
          t = (ATerm) ATmakeAppl(sym_Path_2, not_null(z_15), not_null(b_16));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm z_30 (ATerm), ATerm a_31 (ATerm))
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
  k_16 = t;
  j_16 :
  if(match_cons(k_16, sym_Rec_2))
    {
      l_16 = ATgetArgument(k_16, 0);
      m_16 = ATgetArgument(k_16, 1);
      {
        ATerm p_16 = NULL;
        t = not_null(l_16);
        {
          ATerm r_16 = NULL;
          t = z_30(t);
          p_16 = t;
          t = not_null(m_16);
          t = a_31(t);
          r_16 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(p_16), not_null(r_16));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm y_30 (ATerm))
{
  ATerm z_16 = NULL,a_17 = NULL;
  z_16 = t;
  y_16 :
  if(match_cons(z_16, sym_SVar_1))
    {
      a_17 = ATgetArgument(z_16, 0);
      {
        ATerm c_17 = NULL;
        t = not_null(a_17);
        t = y_30(t);
        c_17 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(c_17));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm n_31 (ATerm), ATerm o_31 (ATerm))
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
  k_17 = t;
  j_17 :
  if(match_cons(k_17, sym_Call_2))
    {
      l_17 = ATgetArgument(k_17, 0);
      m_17 = ATgetArgument(k_17, 1);
      {
        ATerm p_17 = NULL;
        t = not_null(l_17);
        {
          ATerm r_17 = NULL;
          t = n_31(t);
          p_17 = t;
          t = not_null(m_17);
          t = o_31(t);
          r_17 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(p_17), not_null(r_17));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm w_30 (ATerm), ATerm x_30 (ATerm))
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL;
  a_18 = t;
  z_17 :
  if(match_cons(a_18, sym_LChoice_2))
    {
      b_18 = ATgetArgument(a_18, 0);
      c_18 = ATgetArgument(a_18, 1);
      {
        ATerm f_18 = NULL;
        t = not_null(b_18);
        {
          ATerm h_18 = NULL;
          t = w_30(t);
          f_18 = t;
          t = not_null(c_18);
          t = x_30(t);
          h_18 = t;
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_18), not_null(h_18));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm u_30 (ATerm), ATerm v_30 (ATerm))
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  p_18 :
  if(match_cons(q_18, sym_Choice_2))
    {
      r_18 = ATgetArgument(q_18, 0);
      s_18 = ATgetArgument(q_18, 1);
      {
        ATerm v_18 = NULL;
        t = not_null(r_18);
        {
          ATerm x_18 = NULL;
          t = u_30(t);
          v_18 = t;
          t = not_null(s_18);
          t = v_30(t);
          x_18 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(v_18), not_null(x_18));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm s_30 (ATerm), ATerm t_30 (ATerm))
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
  h_19 = t;
  g_19 :
  if(match_cons(h_19, sym_Seq_2))
    {
      i_19 = ATgetArgument(h_19, 0);
      j_19 = ATgetArgument(h_19, 1);
      {
        ATerm m_19 = NULL;
        t = not_null(i_19);
        {
          ATerm o_19 = NULL;
          t = s_30(t);
          m_19 = t;
          t = not_null(j_19);
          t = t_30(t);
          o_19 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_19), not_null(o_19));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Test_1 (ATerm t, ATerm q_30 (ATerm))
{
  ATerm w_19 = NULL,x_19 = NULL;
  w_19 = t;
  v_19 :
  if(match_cons(w_19, sym_Test_1))
    {
      x_19 = ATgetArgument(w_19, 0);
      {
        ATerm z_19 = NULL;
        t = not_null(x_19);
        t = q_30(t);
        z_19 = t;
        t = (ATerm) ATmakeAppl(sym_Test_1, not_null(z_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Not_1 (ATerm t, ATerm r_30 (ATerm))
{
  ATerm g_20 = NULL,h_20 = NULL;
  g_20 = t;
  f_20 :
  if(match_cons(g_20, sym_Not_1))
    {
      h_20 = ATgetArgument(g_20, 0);
      {
        ATerm j_20 = NULL;
        t = not_null(h_20);
        t = r_30(t);
        j_20 = t;
        t = (ATerm) ATmakeAppl(sym_Not_1, not_null(j_20));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm o_20 = NULL;
  o_20 = t;
  n_20 :
  if(!(match_cons(o_20, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm q_20 = NULL;
  q_20 = t;
  p_20 :
  if(!(match_cons(q_20, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm f_4 = t;
  if(PushChoice()==0)
    {
      t = Id_0(t);
      PopChoice();
    }
  else
    {
      t = f_4;
      {
        ATerm g_4 = t;
        if(PushChoice()==0)
          {
            t = Fail_0(t);
            PopChoice();
          }
        else
          {
            t = g_4;
            {
              ATerm h_4 = t;
              if(PushChoice()==0)
                {
                  t = Not_1(t, strategy_expression_0);
                  PopChoice();
                }
              else
                {
                  t = h_4;
                  {
                    ATerm i_4 = t;
                    if(PushChoice()==0)
                      {
                        t = Test_1(t, strategy_expression_0);
                        PopChoice();
                      }
                    else
                      {
                        t = i_4;
                        {
                          ATerm j_4 = t;
                          if(PushChoice()==0)
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              PopChoice();
                            }
                          else
                            {
                              t = j_4;
                              {
                                ATerm k_4 = t;
                                if(PushChoice()==0)
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = k_4;
                                    {
                                      ATerm l_4 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                  ATerm o_0 (ATerm t)
                                                  {
                                                    ATerm n_4 = t;
                                                    if(PushChoice()==0)
                                                      {
                                                        t = is_string_0(t);
                                                        PopChoice();
                                                      }
                                                    else
                                                      {
                                                        t = n_4;
                                                        t = Mod_2(t, is_string_0, is_string_0);
                                                      }
                                                    return(t);
                                                  }
                                                  t = SVar_1(t, o_0);
                                                  return(t);
                                                }
                                                ATerm n_0 (ATerm t)
                                                {
                                                  t = list_1(t, strategy_expression_0);
                                                  return(t);
                                                }
                                                t = Call_2(t, m_0, n_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = m_4;
                                                {
                                                  ATerm o_4 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = Rec_2(t, is_string_0, strategy_expression_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = o_4;
                                                      {
                                                        ATerm q_4 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = Path_2(t, is_int_0, strategy_expression_0);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = q_4;
                                                            {
                                                              ATerm t_4 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm p_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = Cong_2(t, is_string_0, p_0);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = t_4;
                                                                  {
                                                                    ATerm u_4 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = One_1(t, strategy_expression_0);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = u_4;
                                                                        {
                                                                          ATerm v_4 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = Some_1(t, strategy_expression_0);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = v_4;
                                                                              {
                                                                                ATerm w_4 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    t = All_1(t, strategy_expression_0);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_4;
                                                                                    {
                                                                                      ATerm x_4 = t;
                                                                                      if(PushChoice()==0)
                                                                                        {
                                                                                          t = Thread_1(t, strategy_expression_0);
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = x_4;
                                                                                          {
                                                                                            ATerm c_5 = t;
                                                                                            if(PushChoice()==0)
                                                                                              {
                                                                                                t = Match_1(t, term_expression_0);
                                                                                                PopChoice();
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = c_5;
                                                                                                {
                                                                                                  ATerm d_5 = t;
                                                                                                  if(PushChoice()==0)
                                                                                                    {
                                                                                                      t = Build_1(t, term_expression_0);
                                                                                                      PopChoice();
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = d_5;
                                                                                                      {
                                                                                                        ATerm f_5 = t;
                                                                                                        if(PushChoice()==0)
                                                                                                          {
                                                                                                            ATerm q_0 (ATerm t)
                                                                                                            {
                                                                                                              t = list_1(t, is_string_0);
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Scope_2(t, q_0, strategy_expression_0);
                                                                                                            PopChoice();
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = f_5;
                                                                                                            {
                                                                                                              ATerm h_5 = t;
                                                                                                              if(PushChoice()==0)
                                                                                                                {
                                                                                                                  t = Where_1(t, strategy_expression_0);
                                                                                                                  PopChoice();
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = h_5;
                                                                                                                  {
                                                                                                                    ATerm i_5 = t;
                                                                                                                    if(PushChoice()==0)
                                                                                                                      {
                                                                                                                        ATerm r_0 (ATerm t)
                                                                                                                        {
                                                                                                                          t = list_1(t, term_expression_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Prim_2(t, is_string_0, r_0);
                                                                                                                        PopChoice();
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = i_5;
                                                                                                                        {
                                                                                                                          ATerm j_5 = t;
                                                                                                                          if(PushChoice()==0)
                                                                                                                            {
                                                                                                                              ATerm s_0 (ATerm t)
                                                                                                                              {
                                                                                                                                ATerm t_0 (ATerm t)
                                                                                                                                {
                                                                                                                                  t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = list_1(t, t_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Let_2(t, s_0, strategy_expression_0);
                                                                                                                              PopChoice();
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = j_5;
                                                                                                                              {
                                                                                                                                ATerm u_0 (ATerm t)
                                                                                                                                {
                                                                                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = debug_1(t, u_0);
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm t_20 = NULL;
  t_20 = t;
  t = SSL_is_string(not_null(t_20));
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm g_31 (ATerm), ATerm h_31 (ATerm))
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
  a_21 = t;
  z_20 :
  if(match_cons(a_21, sym_VarDec_2))
    {
      b_21 = ATgetArgument(a_21, 0);
      c_21 = ATgetArgument(a_21, 1);
      {
        ATerm f_21 = NULL;
        t = not_null(b_21);
        {
          ATerm h_21 = NULL;
          t = g_31(t);
          f_21 = t;
          t = not_null(c_21);
          t = h_31(t);
          h_21 = t;
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(f_21), not_null(h_21));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Mod_2 (ATerm t, ATerm q_29 (ATerm), ATerm r_29 (ATerm))
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
  q_21 = t;
  p_21 :
  if(match_cons(q_21, sym_Mod_2))
    {
      r_21 = ATgetArgument(q_21, 0);
      s_21 = ATgetArgument(q_21, 1);
      {
        ATerm v_21 = NULL;
        t = not_null(r_21);
        {
          ATerm x_21 = NULL;
          t = q_29(t);
          v_21 = t;
          t = not_null(s_21);
          t = r_29(t);
          x_21 = t;
          t = (ATerm) ATmakeAppl(sym_Mod_2, not_null(v_21), not_null(x_21));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm d_31 (ATerm), ATerm e_31 (ATerm), ATerm f_31 (ATerm))
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
  h_22 = t;
  g_22 :
  if(match_cons(h_22, sym_SDef_3))
    {
      i_22 = ATgetArgument(h_22, 0);
      j_22 = ATgetArgument(h_22, 1);
      k_22 = ATgetArgument(h_22, 2);
      {
        ATerm o_22 = NULL;
        t = not_null(i_22);
        {
          ATerm q_22 = NULL;
          t = d_31(t);
          o_22 = t;
          t = not_null(j_22);
          {
            ATerm s_22 = NULL;
            t = e_31(t);
            q_22 = t;
            t = not_null(k_22);
            t = f_31(t);
            s_22 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_22), not_null(q_22), not_null(s_22));
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
  ATerm k_5 = t;
  if(PushChoice()==0)
    {
      ATerm v_0 (ATerm t)
      {
        ATerm l_5 = t;
        if(PushChoice()==0)
          {
            t = is_string_0(t);
            PopChoice();
          }
        else
          {
            t = l_5;
            t = Mod_2(t, is_string_0, is_string_0);
          }
        return(t);
      }
      ATerm w_0 (ATerm t)
      {
        ATerm x_0 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, x_0);
        return(t);
      }
      t = SDef_3(t, v_0, w_0, strategy_expression_0);
      PopChoice();
    }
  else
    {
      t = k_5;
      {
        ATerm y_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, y_0);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm j_46 (ATerm))
{
  ATerm y_22 (ATerm t)
  {
    ATerm m_5 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = m_5;
        t = Cons_2(t, j_46, y_22);
      }
    return(t);
  }
  t = y_22(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm y_29 (ATerm))
{
  ATerm c_23 = NULL,d_23 = NULL;
  c_23 = t;
  b_23 :
  if(match_cons(c_23, sym_Strategies_1))
    {
      d_23 = ATgetArgument(c_23, 0);
      {
        ATerm f_23 = NULL;
        t = not_null(d_23);
        t = y_29(t);
        f_23 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(f_23));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm a_30 (ATerm))
{
  ATerm m_23 = NULL,n_23 = NULL;
  m_23 = t;
  l_23 :
  if(match_cons(m_23, sym_Specification_1))
    {
      n_23 = ATgetArgument(m_23, 0);
      {
        ATerm p_23 = NULL;
        t = not_null(n_23);
        t = a_30(t);
        p_23 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(p_23));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm n_5 = t;
  if(PushChoice()==0)
    {
      ATerm z_0 (ATerm t)
      {
        ATerm a_1 (ATerm t)
        {
          ATerm b_1 (ATerm t)
          {
            ATerm c_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, c_1);
            return(t);
          }
          t = Cons_2(t, b_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, a_1);
        return(t);
      }
      t = Specification_1(t, z_0);
      PopChoice();
    }
  else
    {
      t = n_5;
      {
        ATerm d_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, d_1);
      }
    }
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm u_23 = NULL;
  u_23 = t;
  t_23 :
  if(!(match_cons(u_23, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm i_32 (ATerm), ATerm j_32 (ATerm))
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
  z_23 = t;
  y_23 :
  if(match_cons(z_23, sym_TCons_2))
    {
      a_24 = ATgetArgument(z_23, 0);
      b_24 = ATgetArgument(z_23, 1);
      {
        ATerm e_24 = NULL;
        t = not_null(a_24);
        {
          ATerm g_24 = NULL;
          t = i_32(t);
          e_24 = t;
          t = not_null(b_24);
          t = j_32(t);
          g_24 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_24), not_null(g_24));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm n_24 = NULL;
  ATerm s_5;
  s_5 = t;
  {
    ATerm e_1 (ATerm t)
    {
      ATerm o_24 = NULL,p_24 = NULL;
      o_24 = t;
      m_24 :
      if(match_cons(o_24, sym_Program_1))
        {
          p_24 = ATgetArgument(o_24, 0);
          if(n_24 != NULL && n_24 != p_24)
            _fail(p_24);
          else
            n_24 = p_24;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, e_1);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_24), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = s_5;
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
  ATerm w_24 = NULL,x_24 = NULL;
  ATerm f_1 (ATerm t)
  {
    ATerm g_1 (ATerm t)
    {
      ATerm t_5 = t;
      if(PushChoice()==0)
        {
          ATerm i_1 (ATerm t)
          {
            ATerm y_24 = NULL;
            y_24 = t;
            r_24 :
            if(!(match_cons(y_24, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, i_1);
          PopChoice();
          _fail(t);
        }
      else
        t = t_5;
      return(t);
    }
    ATerm h_1 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, g_1, h_1);
    {
      ATerm j_1 (ATerm t)
      {
        ATerm l_1 (ATerm t)
        {
          ATerm z_24 = NULL,a_25 = NULL;
          z_24 = t;
          t_24 :
          if(match_cons(z_24, sym_Runtime_1))
            {
              a_25 = ATgetArgument(z_24, 0);
              if(x_24 != NULL && x_24 != a_25)
                _fail(a_25);
              else
                x_24 = a_25;
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
      t = TCons_2(t, j_1, k_1);
      {
        ATerm m_1 (ATerm t)
        {
          ATerm o_1 (ATerm t)
          {
            ATerm b_25 = NULL,c_25 = NULL;
            b_25 = t;
            v_24 :
            if(match_cons(b_25, sym_Program_1))
              {
                c_25 = ATgetArgument(b_25, 0);
                if(w_24 != NULL && w_24 != c_25)
                  _fail(c_25);
                else
                  w_24 = c_25;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, o_1);
          return(t);
        }
        ATerm n_1 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, m_1, n_1);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_24), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_24), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, f_1);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
  j_25 = t;
  g_25 :
  if(match_cons(j_25, sym_TCons_2))
    {
      k_25 = ATgetArgument(j_25, 0);
      l_25 = ATgetArgument(j_25, 1);
      h_25 :
      if(match_cons(l_25, sym_TCons_2))
        {
          m_25 = ATgetArgument(l_25, 0);
          n_25 = ATgetArgument(l_25, 1);
          i_25 :
          if(match_cons(n_25, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(k_25), not_null(m_25));
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
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL;
  v_25 = t;
  s_25 :
  if(match_cons(v_25, sym_TCons_2))
    {
      w_25 = ATgetArgument(v_25, 0);
      x_25 = ATgetArgument(v_25, 1);
      t_25 :
      if(match_cons(x_25, sym_TCons_2))
        {
          y_25 = ATgetArgument(x_25, 0);
          z_25 = ATgetArgument(x_25, 1);
          u_25 :
          if(match_cons(z_25, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(w_25), not_null(y_25));
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
  ATerm h_26 = NULL;
  ATerm v_5;
  v_5 = t;
  {
    ATerm p_1 (ATerm t)
    {
      ATerm x_5 = t;
      if(PushChoice()==0)
        {
          ATerm r_1 (ATerm t)
          {
            ATerm i_26 = NULL,j_26 = NULL;
            i_26 = t;
            e_26 :
            if(match_cons(i_26, sym_Output_1))
              {
                j_26 = ATgetArgument(i_26, 0);
                if(h_26 != NULL && h_26 != j_26)
                  _fail(j_26);
                else
                  h_26 = j_26;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, r_1);
          PopChoice();
        }
      else
        {
          t = x_5;
          {
            ATerm p_26 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            p_26 = t;
            if(h_26 != NULL && h_26 != p_26)
              _fail(p_26);
            else
              h_26 = p_26;
          }
        }
      return(t);
    }
    ATerm q_1 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, p_1, q_1);
  }
  t = v_5;
  {
    ATerm s_1 (ATerm t)
    {
      ATerm t_1 (ATerm t)
      {
        ATerm u_1 (ATerm t)
        {
          t = not_null(h_26);
          return(t);
        }
        t = split_2(t, u_1, _id);
        return(t);
      }
      t = TCons_2(t, t_1, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, s_1);
    {
      ATerm y_5 = t;
      if(PushChoice()==0)
        {
          ATerm v_1 (ATerm t)
          {
            ATerm x_1 (ATerm t)
            {
              ATerm q_26 = NULL;
              q_26 = t;
              g_26 :
              if(!(match_cons(q_26, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, x_1);
            return(t);
          }
          ATerm w_1 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, v_1, w_1);
          PopChoice();
        }
      else
        {
          t = y_5;
          {
            ATerm y_1 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, y_1);
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
ATerm apply_strategy_1 (ATerm t, ATerm q_37 (ATerm))
{
  ATerm a_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
  ATerm z_5;
  z_5 = t;
  t = dtime_0(t);
  t = z_5;
  t = q_37(t);
  {
    ATerm a_6;
    a_6 = t;
    {
      ATerm b_27 = NULL;
      t = dtime_0(t);
      b_27 = t;
      if(a_27 != NULL && a_27 != b_27)
        _fail(b_27);
      else
        a_27 = b_27;
    }
    t = a_6;
    c_27 = t;
    v_26 :
    if(match_cons(c_27, sym_TCons_2))
      {
        d_27 = ATgetArgument(c_27, 0);
        e_27 = ATgetArgument(c_27, 1);
        y_26 :
        if(match_cons(e_27, sym_TCons_2))
          {
            f_27 = ATgetArgument(e_27, 0);
            g_27 = ATgetArgument(e_27, 1);
            z_26 :
            if(match_cons(g_27, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(a_27)), not_null(d_27)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_27), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm m_27 = NULL;
  m_27 = t;
  t = SSL_ReadFromFile(not_null(m_27));
  return(t);
}
ATerm split_2 (ATerm t, ATerm u_39 (ATerm), ATerm v_39 (ATerm))
{
  ATerm u_27 = NULL;
  ATerm w_27 = NULL,y_27 = NULL;
  u_27 = t;
  {
    ATerm b_6;
    b_6 = t;
    {
      ATerm x_27 = NULL;
      t = not_null(u_27);
      t = u_39(t);
      x_27 = t;
      if(w_27 != NULL && w_27 != x_27)
        _fail(x_27);
      else
        w_27 = x_27;
    }
    t = b_6;
    {
      ATerm z_27 = NULL;
      t = not_null(u_27);
      t = v_39(t);
      z_27 = t;
      if(y_27 != NULL && y_27 != z_27)
        _fail(z_27);
      else
        y_27 = z_27;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_27), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm g_28 = NULL;
  ATerm c_6;
  c_6 = t;
  {
    ATerm g_6 = t;
    if(PushChoice()==0)
      {
        ATerm z_1 (ATerm t)
        {
          ATerm h_28 = NULL,i_28 = NULL;
          h_28 = t;
          e_28 :
          if(match_cons(h_28, sym_Input_1))
            {
              i_28 = ATgetArgument(h_28, 0);
              if(g_28 != NULL && g_28 != i_28)
                _fail(i_28);
              else
                g_28 = i_28;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, z_1);
        PopChoice();
      }
    else
      {
        t = g_6;
        {
          ATerm j_28 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          j_28 = t;
          if(g_28 != NULL && g_28 != j_28)
            _fail(j_28);
          else
            g_28 = j_28;
        }
      }
  }
  t = c_6;
  {
    ATerm a_2 (ATerm t)
    {
      t = not_null(g_28);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, a_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_28 = NULL;
  n_28 = t;
  m_28 :
  if(!(match_cons(n_28, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_37 (ATerm))
{
  ATerm b_2 (ATerm t)
  {
    ATerm i_6 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = i_6;
        {
          ATerm j_6 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = j_6;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, b_2);
  t = p_37(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm p_28 = NULL;
  p_28 = t;
  t = SSL_table_create(not_null(p_28));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm t_28 = NULL;
  t_28 = t;
  {
    ATerm k_6;
    k_6 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_28), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = k_6;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL;
  i_29 = t;
  z_28 :
  if(match_cons(i_29, sym_Cons_2))
    {
      e_29 = ATgetArgument(i_29, 0);
      f_29 = ATgetArgument(i_29, 1);
      d_29 :
      if(match_cons(f_29, sym_Cons_2))
        {
          g_29 = ATgetArgument(f_29, 0);
          h_29 = ATgetArgument(f_29, 1);
          {
            ATerm m_29 = NULL;
            t = not_null(e_29);
            t = d_0(t);
            {
              ATerm n_29 = NULL;
              t = not_null(g_29);
              t = e_0(t);
              n_29 = t;
              if(m_29 != NULL && m_29 != n_29)
                _fail(n_29);
              else
                m_29 = n_29;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_29), not_null(h_29));
            }
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(i_29, "register-usage-info"))
        t = register_usage_1(t, f_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm l_6 = t;
  if(PushChoice()==0)
    {
      ATerm c_2 (ATerm t)
      {
        ATerm g_30 = NULL;
        g_30 = t;
        t_29 :
        if(!(match_string(g_30, "-S")))
          {
            if(!(match_string(g_30, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm d_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm e_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, c_2, d_2, e_2);
      PopChoice();
    }
  else
    {
      t = l_6;
      {
        ATerm m_6 = t;
        if(PushChoice()==0)
          {
            ATerm f_2 (ATerm t)
            {
              ATerm h_30 = NULL;
              h_30 = t;
              u_29 :
              if(!(match_string(h_30, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm g_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm h_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, f_2, g_2, h_2);
            PopChoice();
          }
        else
          {
            t = m_6;
            {
              ATerm n_6 = t;
              if(PushChoice()==0)
                {
                  ATerm i_2 (ATerm t)
                  {
                    ATerm i_30 = NULL;
                    i_30 = t;
                    v_29 :
                    if(!(match_string(i_30, "-v")))
                      {
                        if(!(match_string(i_30, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm j_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm k_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, i_2, j_2, k_2);
                  PopChoice();
                }
              else
                {
                  t = n_6;
                  {
                    ATerm s_6 = t;
                    if(PushChoice()==0)
                      {
                        ATerm l_2 (ATerm t)
                        {
                          ATerm j_30 = NULL;
                          j_30 = t;
                          w_29 :
                          if(!(match_string(j_30, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm m_2 (ATerm t)
                        {
                          ATerm i_31 = NULL;
                          i_31 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(i_31));
                          return(t);
                        }
                        ATerm n_2 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, l_2, m_2, n_2);
                        PopChoice();
                      }
                    else
                      {
                        t = s_6;
                        {
                          ATerm t_6 = t;
                          if(PushChoice()==0)
                            {
                              ATerm o_2 (ATerm t)
                              {
                                ATerm k_31 = NULL;
                                k_31 = t;
                                z_29 :
                                if(!(match_string(k_31, "-i")))
                                  {
                                    if(!(match_string(k_31, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm p_2 (ATerm t)
                              {
                                ATerm l_31 = NULL;
                                l_31 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_31));
                                return(t);
                              }
                              ATerm q_2 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, o_2, p_2, q_2);
                              PopChoice();
                            }
                          else
                            {
                              t = t_6;
                              {
                                ATerm v_6 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm r_2 (ATerm t)
                                    {
                                      ATerm u_31 = NULL;
                                      u_31 = t;
                                      c_30 :
                                      if(!(match_string(u_31, "-o")))
                                        {
                                          if(!(match_string(u_31, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm s_2 (ATerm t)
                                    {
                                      ATerm x_31 = NULL;
                                      x_31 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_31));
                                      return(t);
                                    }
                                    ATerm t_2 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, r_2, s_2, t_2);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = v_6;
                                    {
                                      ATerm x_6 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm u_2 (ATerm t)
                                          {
                                            ATerm b_32 = NULL;
                                            b_32 = t;
                                            e_30 :
                                            if(!(match_string(b_32, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm v_2 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm w_2 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, u_2, v_2, w_2);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = x_6;
                                          {
                                            ATerm x_2 (ATerm t)
                                            {
                                              ATerm c_32 = NULL;
                                              c_32 = t;
                                              f_30 :
                                              if(!(match_string(c_32, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm y_2 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm z_2 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, x_2, y_2, z_2);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm q_32 = NULL;
  q_32 = t;
  t = SSL_table_destroy(not_null(q_32));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm u_32 = NULL;
  u_32 = t;
  t = SSL_exit(not_null(u_32));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm y_32 = NULL;
  y_32 = t;
  t = SSL_implode_string(not_null(y_32));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm v_46 (ATerm))
{
  ATerm b_33 (ATerm t)
  {
    ATerm y_6 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, b_33);
        PopChoice();
      }
    else
      {
        t = y_6;
        t = Nil_0(t);
        t = v_46(t);
      }
    return(t);
  }
  t = b_33(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_6 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = z_6;
      {
        ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
        e_33 = t;
        d_33 :
        if(match_cons(e_33, sym_Cons_2))
          {
            f_33 = ATgetArgument(e_33, 0);
            g_33 = ATgetArgument(e_33, 1);
            t = not_null(f_33);
            {
              ATerm a_3 (ATerm t)
              {
                t = not_null(g_33);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, a_3);
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
  ATerm m_33 = NULL;
  m_33 = t;
  t = SSL_explode_string(not_null(m_33));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm w_35 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm h_46 (ATerm))
{
  ATerm p_33 (ATerm t)
  {
    ATerm a_7 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = a_7;
        t = Cons_2(t, h_46, p_33);
      }
    return(t);
  }
  t = p_33(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL;
  v_33 = t;
  r_33 :
  if(match_cons(v_33, sym_TCons_2))
    {
      w_33 = ATgetArgument(v_33, 0);
      x_33 = ATgetArgument(v_33, 1);
      s_33 :
      if(match_cons(w_33, sym_Nil_0))
        {
          t_33 :
          if(match_cons(x_33, sym_TCons_2))
            {
              y_33 = ATgetArgument(x_33, 0);
              z_33 = ATgetArgument(x_33, 1);
              u_33 :
              if(match_cons(z_33, sym_TNil_0))
                t = not_null(y_33);
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
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
  h_34 = t;
  d_34 :
  if(match_cons(h_34, sym_TCons_2))
    {
      i_34 = ATgetArgument(h_34, 0);
      l_34 = ATgetArgument(h_34, 1);
      e_34 :
      if(match_cons(i_34, sym_Cons_2))
        {
          j_34 = ATgetArgument(i_34, 0);
          k_34 = ATgetArgument(i_34, 1);
          f_34 :
          if(match_cons(l_34, sym_TCons_2))
            {
              m_34 = ATgetArgument(l_34, 0);
              n_34 = ATgetArgument(l_34, 1);
              g_34 :
              if(match_cons(n_34, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_34), not_null(m_34)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm a_52 (ATerm), ATerm b_52 (ATerm))
{
  ATerm s_34 (ATerm t)
  {
    ATerm b_7 = t;
    if(PushChoice()==0)
      {
        t = a_52(t);
        t = s_34(t);
        PopChoice();
      }
    else
      {
        t = b_7;
        t = b_52(t);
      }
    return(t);
  }
  t = s_34(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm d_52 (ATerm))
{
  t = repeat_2(t, d_52, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm u_34 = NULL;
  u_34 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm v_35 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm p_27 (ATerm))
{
  ATerm a_35 = NULL,b_35 = NULL;
  a_35 = t;
  z_34 :
  if(match_cons(a_35, sym_Program_1))
    {
      b_35 = ATgetArgument(a_35, 0);
      {
        ATerm d_35 = NULL;
        t = not_null(b_35);
        t = p_27(t);
        d_35 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(d_35));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm l_35 = NULL;
  ATerm b_3 (ATerm t)
  {
    ATerm c_3 (ATerm t)
    {
      ATerm m_35 = NULL;
      m_35 = t;
      if(l_35 != NULL && l_35 != m_35)
        _fail(m_35);
      else
        l_35 = m_35;
      return(t);
    }
    t = Program_1(t, c_3);
    return(t);
  }
  t = option_defined_1(t, b_3);
  {
    ATerm d_3 (ATerm t)
    {
      ATerm n_35 = NULL;
      ATerm o_35 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm e_3 (ATerm t)
        {
          t = not_null(l_35);
          return(t);
        }
        t = short_description_1(t, e_3);
        t = concat_strings_0(t);
        o_35 = t;
        if(n_35 != NULL && n_35 != o_35)
          _fail(o_35);
        else
          n_35 = o_35;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, d_3);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm f_3 (ATerm t)
      {
        ATerm p_35 = NULL;
        p_35 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_35), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, f_3);
      {
        ATerm g_3 (ATerm t)
        {
          ATerm r_35 = NULL;
          ATerm s_35 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm h_3 (ATerm t)
            {
              t = not_null(l_35);
              return(t);
            }
            t = long_description_1(t, h_3);
            t = concat_strings_0(t);
            s_35 = t;
            if(r_35 != NULL && r_35 != s_35)
              _fail(s_35);
            else
              r_35 = s_35;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_35), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, g_3);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL;
  h_36 = t;
  e_36 :
  if(match_cons(h_36, sym_TCons_2))
    {
      i_36 = ATgetArgument(h_36, 0);
      j_36 = ATgetArgument(h_36, 1);
      f_36 :
      if(match_cons(j_36, sym_TCons_2))
        {
          k_36 = ATgetArgument(j_36, 0);
          l_36 = ATgetArgument(j_36, 1);
          g_36 :
          if(match_cons(l_36, sym_TNil_0))
            {
              ATerm c_7;
              c_7 = t;
              t = SSL_printnl(not_null(i_36), not_null(k_36));
              t = c_7;
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
ATerm Undefined_1 (ATerm t, ATerm q_27 (ATerm))
{
  ATerm s_36 = NULL,t_36 = NULL;
  s_36 = t;
  r_36 :
  if(match_cons(s_36, sym_Undefined_1))
    {
      t_36 = ATgetArgument(s_36, 0);
      {
        ATerm x_36 = NULL;
        t = not_null(t_36);
        t = q_27(t);
        x_36 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_36));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm p_46 (ATerm))
{
  ATerm d_37 (ATerm t)
  {
    ATerm g_7 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, p_46, _id);
        PopChoice();
      }
    else
      {
        t = g_7;
        t = Cons_2(t, _id, d_37);
      }
    return(t);
  }
  t = d_37(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_36 (ATerm))
{
  t = fetch_1(t, u_36);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_37 = NULL;
  i_37 = t;
  h_37 :
  if(!(match_cons(i_37, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_52 (ATerm))
{
  ATerm i_7 = t;
  if(PushChoice()==0)
    {
      t = x_52(t);
      PopChoice();
    }
  else
    t = i_7;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL;
  n_37 = t;
  k_37 :
  if(match_cons(n_37, sym_TCons_2))
    {
      o_37 = ATgetArgument(n_37, 0);
      r_37 = ATgetArgument(n_37, 1);
      l_37 :
      if(match_cons(r_37, sym_TCons_2))
        {
          s_37 = ATgetArgument(r_37, 0);
          t_37 = ATgetArgument(r_37, 1);
          m_37 :
          if(match_cons(t_37, sym_TNil_0))
            t = SSL_table_get(not_null(o_37), not_null(s_37));
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
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL;
  e_38 = t;
  z_37 :
  if(match_cons(e_38, sym_TCons_2))
    {
      f_38 = ATgetArgument(e_38, 0);
      g_38 = ATgetArgument(e_38, 1);
      b_38 :
      if(match_cons(g_38, sym_TCons_2))
        {
          h_38 = ATgetArgument(g_38, 0);
          i_38 = ATgetArgument(g_38, 1);
          c_38 :
          if(match_cons(i_38, sym_TCons_2))
            {
              j_38 = ATgetArgument(i_38, 0);
              k_38 = ATgetArgument(i_38, 1);
              d_38 :
              if(match_cons(k_38, sym_TNil_0))
                {
                  ATerm j_7;
                  j_7 = t;
                  {
                    ATerm o_38 = NULL;
                    ATerm p_38 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_38), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_38), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm k_7 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = k_7;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      p_38 = t;
                      if(o_38 != NULL && o_38 != p_38)
                        _fail(p_38);
                      else
                        o_38 = p_38;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_38), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_38), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_38), not_null(o_38)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = j_7;
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
ATerm register_usage_1 (ATerm t, ATerm a_36 (ATerm))
{
  ATerm t_38 = NULL;
  ATerm u_38 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = a_36(t);
  u_38 = t;
  if(t_38 != NULL && t_38 != u_38)
    _fail(u_38);
  else
    t_38 = u_38;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_38), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
  c_39 = t;
  z_38 :
  if(match_cons(c_39, sym_Cons_2))
    {
      a_39 = ATgetArgument(c_39, 0);
      b_39 = ATgetArgument(c_39, 1);
      {
        ATerm f_39 = NULL;
        t = not_null(a_39);
        t = a_0(t);
        {
          ATerm g_39 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = b_0(t);
          g_39 = t;
          if(f_39 != NULL && f_39 != g_39)
            _fail(g_39);
          else
            f_39 = g_39;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_39), not_null(b_39));
        }
      }
    }
  else
    {
      if(match_string(c_39, "register-usage-info"))
        t = register_usage_1(t, c_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm i_3 (ATerm t)
  {
    ATerm l_39 = NULL;
    l_39 = t;
    k_39 :
    if(!(match_string(l_39, "--help")))
      {
        if(!(match_string(l_39, "-h")))
          {
            if(!(match_string(l_39, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, i_3, j_3, k_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
  o_39 = t;
  n_39 :
  if(match_cons(o_39, sym_Cons_2))
    {
      p_39 = ATgetArgument(o_39, 0);
      q_39 = ATgetArgument(o_39, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_39)), not_null(q_39));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_32 (ATerm), ATerm n_32 (ATerm))
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
  a_40 = t;
  z_39 :
  if(match_cons(a_40, sym_Cons_2))
    {
      b_40 = ATgetArgument(a_40, 0);
      c_40 = ATgetArgument(a_40, 1);
      {
        ATerm f_40 = NULL;
        t = not_null(b_40);
        {
          ATerm h_40 = NULL;
          t = m_32(t);
          f_40 = t;
          t = not_null(c_40);
          t = n_32(t);
          h_40 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_40), not_null(h_40));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm n_40 = NULL;
  n_40 = t;
  m_40 :
  if(!(match_cons(n_40, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm y_35 (ATerm))
{
  ATerm l_7;
  l_7 = t;
  {
    ATerm l_3 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = y_35(t);
      return(t);
    }
    t = try_1(t, l_3);
  }
  t = l_7;
  {
    ATerm m_3 (ATerm t)
    {
      ATerm p_40 = NULL;
      p_40 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_40));
      return(t);
    }
    ATerm n_3 (ATerm t)
    {
      ATerm m_7 = t;
      if(PushChoice()==0)
        {
          ATerm q_7 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = q_7;
              t = y_35(t);
              t = Cons_2(t, _id, n_3);
            }
          PopChoice();
        }
      else
        {
          t = m_7;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_3, n_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
  ATerm s_7;
  s_7 = t;
  {
    ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL;
    b_41 = t;
    u_40 :
    if(match_cons(b_41, sym_TCons_2))
      {
        c_41 = ATgetArgument(b_41, 0);
        d_41 = ATgetArgument(b_41, 1);
        v_40 :
        if(match_cons(d_41, sym_TCons_2))
          {
            e_41 = ATgetArgument(d_41, 0);
            f_41 = ATgetArgument(d_41, 1);
            w_40 :
            if(match_cons(f_41, sym_TCons_2))
              {
                g_41 = ATgetArgument(f_41, 0);
                h_41 = ATgetArgument(f_41, 1);
                x_40 :
                if(match_cons(h_41, sym_TNil_0))
                  {
                    if(y_40 != NULL && y_40 != c_41)
                      _fail(c_41);
                    else
                      y_40 = c_41;
                    if(z_40 != NULL && z_40 != e_41)
                      _fail(e_41);
                    else
                      z_40 = e_41;
                    if(a_41 != NULL && a_41 != g_41)
                      _fail(g_41);
                    else
                      a_41 = g_41;
                    t = SSL_table_put(not_null(y_40), not_null(z_40), not_null(a_41));
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
  t = s_7;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_35 (ATerm))
{
  ATerm k_41 = NULL;
  ATerm t_7;
  t_7 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = t_7;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm u_7 = t;
      if(PushChoice()==0)
        {
          t = x_35(t);
          PopChoice();
        }
      else
        {
          t = u_7;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_3);
    {
      ATerm p_3 (ATerm t)
      {
        ATerm v_7 = t;
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
            t = v_7;
            {
              ATerm q_3 (ATerm t)
              {
                ATerm r_3 (ATerm t)
                {
                  ATerm l_41 = NULL;
                  l_41 = t;
                  if(k_41 != NULL && k_41 != l_41)
                    _fail(l_41);
                  else
                    k_41 = l_41;
                  return(t);
                }
                t = Undefined_1(t, r_3);
                return(t);
              }
              t = option_defined_1(t, q_3);
              {
                ATerm w_7;
                w_7 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_41), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = w_7;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, p_3);
      {
        ATerm x_7;
        x_7 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = x_7;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm e_37 (ATerm), ATerm f_37 (ATerm), ATerm g_37 (ATerm))
{
  ATerm s_3 (ATerm t)
  {
    ATerm y_7 = t;
    if(PushChoice()==0)
      {
        t = f_37(t);
        PopChoice();
      }
    else
      {
        t = y_7;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, s_3);
  t = store_options_0(t);
  {
    ATerm z_7 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, g_37);
        PopChoice();
      }
    else
      {
        t = z_7;
        {
          ATerm a_8 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, e_37);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = a_8;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm z_36 (ATerm), ATerm a_37 (ATerm))
{
  t = iowrap_3(t, z_36, a_37, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm w_36 (ATerm))
{
  ATerm t_3 (ATerm t)
  {
    ATerm u_3 (ATerm t)
    {
      t = TCons_2(t, w_36, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, u_3);
    return(t);
  }
  t = iowrap_2(t, t_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
