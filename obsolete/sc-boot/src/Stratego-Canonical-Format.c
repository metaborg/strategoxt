#include <stratego.h>
#include <stratego-lib.h>
Symbol sym_Final_1;
Symbol sym_Case_4;
Symbol sym_Case_3;
Symbol sym_Alt_3;
Symbol sym_Continue_1;
Symbol sym_Assign_2;
Symbol sym_Assign_1;
Symbol sym_Fun_2;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
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
Symbol sym_MatchOp_2;
Symbol sym_TNil_0;
Symbol sym_TCons_2;
Symbol sym_Pair_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
  sym_Final_1 = ATmakeSymbol("Final", 1, ATfalse);
  ATprotectSymbol(sym_Final_1);
  sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
  ATprotectSymbol(sym_Case_4);
  sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
  ATprotectSymbol(sym_Case_3);
  sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
  ATprotectSymbol(sym_Alt_3);
  sym_Continue_1 = ATmakeSymbol("Continue", 1, ATfalse);
  ATprotectSymbol(sym_Continue_1);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Assign_1 = ATmakeSymbol("Assign", 1, ATfalse);
  ATprotectSymbol(sym_Assign_1);
  sym_Fun_2 = ATmakeSymbol("Fun", 2, ATfalse);
  ATprotectSymbol(sym_Fun_2);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
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
  sym_MatchOp_2 = ATmakeSymbol("MatchOp", 2, ATfalse);
  ATprotectSymbol(sym_MatchOp_2);
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
ATerm debug_1 (ATerm, ATerm x_38 (ATerm));
ATerm Continue_1 (ATerm, ATerm s_28 (ATerm));
ATerm Var_1 (ATerm, ATerm v_31 (ATerm));
ATerm Assign_1 (ATerm, ATerm v_28 (ATerm));
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm Fun_2 (ATerm, ATerm w_28 (ATerm), ATerm x_28 (ATerm));
ATerm Alt_3 (ATerm, ATerm p_28 (ATerm), ATerm q_28 (ATerm), ATerm r_28 (ATerm));
ATerm case_alternative_1 (ATerm, ATerm c_54 (ATerm));
ATerm Case_4 (ATerm, ATerm i_28 (ATerm), ATerm j_28 (ATerm), ATerm k_28 (ATerm), ATerm l_28 (ATerm));
ATerm Let_2 (ATerm, ATerm m_32 (ATerm), ATerm n_32 (ATerm));
ATerm Prim_2 (ATerm, ATerm r_33 (ATerm), ATerm s_33 (ATerm));
ATerm Where_1 (ATerm, ATerm q_33 (ATerm));
ATerm Scope_2 (ATerm, ATerm o_33 (ATerm), ATerm p_33 (ATerm));
ATerm Build_1 (ATerm, ATerm l_33 (ATerm));
ATerm Op_2 (ATerm, ATerm z_31 (ATerm), ATerm a_32 (ATerm));
ATerm As_2 (ATerm, ATerm l_30 (ATerm), ATerm m_30 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm n_30 (ATerm));
ATerm Str_1 (ATerm, ATerm d_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm c_0 (ATerm));
ATerm Int_1 (ATerm, ATerm b_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm match_term_exp_0 (ATerm);
ATerm Match_1 (ATerm, ATerm k_33 (ATerm));
ATerm Thread_1 (ATerm, ATerm h_33 (ATerm));
ATerm All_1 (ATerm, ATerm g_33 (ATerm));
ATerm Some_1 (ATerm, ATerm a_0 (ATerm));
ATerm One_1 (ATerm, ATerm e_33 (ATerm));
ATerm Cong_2 (ATerm, ATerm c_33 (ATerm), ATerm d_33 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm a_33 (ATerm), ATerm b_33 (ATerm));
ATerm Rec_2 (ATerm, ATerm k_32 (ATerm), ATerm l_32 (ATerm));
ATerm SVar_1 (ATerm, ATerm j_32 (ATerm));
ATerm Call_2 (ATerm, ATerm y_32 (ATerm), ATerm z_32 (ATerm));
ATerm LChoice_2 (ATerm, ATerm h_32 (ATerm), ATerm i_32 (ATerm));
ATerm Choice_2 (ATerm, ATerm f_32 (ATerm), ATerm g_32 (ATerm));
ATerm Seq_2 (ATerm, ATerm d_32 (ATerm), ATerm e_32 (ATerm));
ATerm Test_1 (ATerm, ATerm b_32 (ATerm));
ATerm Not_1 (ATerm, ATerm c_32 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm r_32 (ATerm), ATerm s_32 (ATerm));
ATerm SDef_3 (ATerm, ATerm o_32 (ATerm), ATerm p_32 (ATerm), ATerm q_32 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm e_47 (ATerm));
ATerm Strategies_1 (ATerm, ATerm j_31 (ATerm));
ATerm Specification_1 (ATerm, ATerm l_31 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm v_33 (ATerm), ATerm w_33 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_53 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm n_38 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_40 (ATerm), ATerm r_40 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm c_29 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm l_47 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_37 (ATerm));
ATerm need_help_1 (ATerm, ATerm m_38 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm k_37 (ATerm), ATerm l_37 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm m_37 (ATerm), ATerm n_37 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_33 (ATerm), ATerm a_34 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_37 (ATerm));
ATerm iowrap_3 (ATerm, ATerm b_38 (ATerm), ATerm c_38 (ATerm), ATerm d_38 (ATerm));
ATerm iowrap_2 (ATerm, ATerm w_37 (ATerm), ATerm x_37 (ATerm));
ATerm iowrap_1 (ATerm, ATerm t_37 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm x_38 (ATerm))
{
  ATerm y_3;
  y_3 = t;
  {
    ATerm g_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm h_0 (ATerm t)
    {
      ATerm s_5 = NULL;
      ATerm u_5 = NULL;
      s_5 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = x_38(t);
      u_5 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_5), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, g_0, h_0);
    t = printnl_0(t);
  }
  t = y_3;
  return(t);
}
ATerm Continue_1 (ATerm t, ATerm s_28 (ATerm))
{
  ATerm b_6 = NULL,c_6 = NULL;
  b_6 = t;
  a_6 :
  if(match_cons(b_6, sym_Continue_1))
    {
      c_6 = ATgetArgument(b_6, 0);
      {
        ATerm e_6 = NULL;
        t = not_null(c_6);
        t = s_28(t);
        e_6 = t;
        t = (ATerm) ATmakeAppl(sym_Continue_1, not_null(e_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm v_31 (ATerm))
{
  ATerm l_6 = NULL,m_6 = NULL;
  l_6 = t;
  k_6 :
  if(match_cons(l_6, sym_Var_1))
    {
      m_6 = ATgetArgument(l_6, 0);
      {
        ATerm o_6 = NULL;
        t = not_null(m_6);
        t = v_31(t);
        o_6 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Assign_1 (ATerm t, ATerm v_28 (ATerm))
{
  ATerm v_6 = NULL,w_6 = NULL;
  v_6 = t;
  u_6 :
  if(match_cons(v_6, sym_Assign_1))
    {
      w_6 = ATgetArgument(v_6, 0);
      {
        ATerm y_6 = NULL;
        t = not_null(w_6);
        t = v_28(t);
        y_6 = t;
        t = (ATerm) ATmakeAppl(sym_Assign_1, not_null(y_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm z_3 = t;
  if(PushChoice()==0)
    {
      t = Wld_0(t);
      PopChoice();
    }
  else
    {
      t = z_3;
      {
        ATerm a_4 = t;
        if(PushChoice()==0)
          {
            t = Var_1(t, is_string_0);
            PopChoice();
          }
        else
          {
            t = a_4;
            {
              ATerm b_4 = t;
              if(PushChoice()==0)
                {
                  t = Int_1(t, is_int_0);
                  PopChoice();
                }
              else
                {
                  t = b_4;
                  {
                    ATerm c_4 = t;
                    if(PushChoice()==0)
                      {
                        t = Real_1(t, is_real_0);
                        PopChoice();
                      }
                    else
                      {
                        t = c_4;
                        {
                          ATerm d_4 = t;
                          if(PushChoice()==0)
                            {
                              t = Str_1(t, is_string_0);
                              PopChoice();
                            }
                          else
                            {
                              t = d_4;
                              {
                                ATerm e_4 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = e_4;
                                    {
                                      ATerm f_4 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm i_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, i_0, term_expression_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = f_4;
                                          {
                                            ATerm g_4 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm j_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, j_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = g_4;
                                                {
                                                  ATerm k_0 (ATerm t)
                                                  {
                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
                                                    return(t);
                                                  }
                                                  t = debug_1(t, k_0);
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Assign_2 (ATerm t, ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
  k_7 = t;
  j_7 :
  if(match_cons(k_7, sym_Assign_2))
    {
      l_7 = ATgetArgument(k_7, 0);
      m_7 = ATgetArgument(k_7, 1);
      {
        ATerm h_4 = t;
        if(PushChoice()==0)
          {
            ATerm p_7 = NULL;
            t = not_null(l_7);
            {
              ATerm r_7 = NULL;
              t = e_0(t);
              p_7 = t;
              t = not_null(m_7);
              t = f_0(t);
              r_7 = t;
              t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(p_7), not_null(r_7));
            }
            PopChoice();
          }
        else
          {
            t = h_4;
            {
              ATerm v_7 = NULL;
              t = not_null(l_7);
              {
                ATerm x_7 = NULL;
                t = e_0(t);
                v_7 = t;
                t = not_null(m_7);
                t = f_0(t);
                x_7 = t;
                t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(v_7), not_null(x_7));
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fun_2 (ATerm t, ATerm w_28 (ATerm), ATerm x_28 (ATerm))
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
  j_8 = t;
  i_8 :
  if(match_cons(j_8, sym_Fun_2))
    {
      k_8 = ATgetArgument(j_8, 0);
      l_8 = ATgetArgument(j_8, 1);
      {
        ATerm s_8 = NULL;
        t = not_null(k_8);
        {
          ATerm u_8 = NULL;
          t = w_28(t);
          s_8 = t;
          t = not_null(l_8);
          t = x_28(t);
          u_8 = t;
          t = (ATerm) ATmakeAppl(sym_Fun_2, not_null(s_8), not_null(u_8));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Alt_3 (ATerm t, ATerm p_28 (ATerm), ATerm q_28 (ATerm), ATerm r_28 (ATerm))
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL;
  e_9 = t;
  d_9 :
  if(match_cons(e_9, sym_Alt_3))
    {
      f_9 = ATgetArgument(e_9, 0);
      g_9 = ATgetArgument(e_9, 1);
      h_9 = ATgetArgument(e_9, 2);
      {
        ATerm l_9 = NULL;
        t = not_null(f_9);
        {
          ATerm n_9 = NULL;
          t = p_28(t);
          l_9 = t;
          t = not_null(g_9);
          {
            ATerm p_9 = NULL;
            t = q_28(t);
            n_9 = t;
            t = not_null(h_9);
            t = r_28(t);
            p_9 = t;
            t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(l_9), not_null(n_9), not_null(p_9));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm case_alternative_1 (ATerm t, ATerm c_54 (ATerm))
{
  ATerm i_4 = t;
  if(PushChoice()==0)
    {
      ATerm l_0 (ATerm t)
      {
        ATerm j_4 = t;
        if(PushChoice()==0)
          {
            t = Fun_2(t, is_string_0, is_int_0);
            PopChoice();
          }
        else
          {
            t = j_4;
            {
              ATerm k_4 = t;
              if(PushChoice()==0)
                {
                  t = Str_1(t, is_string_0);
                  PopChoice();
                }
              else
                {
                  t = k_4;
                  {
                    ATerm l_4 = t;
                    if(PushChoice()==0)
                      {
                        t = Int_1(t, is_int_0);
                        PopChoice();
                      }
                    else
                      {
                        t = l_4;
                        t = Real_1(t, is_real_0);
                      }
                  }
                }
            }
          }
        return(t);
      }
      ATerm m_0 (ATerm t)
      {
        ATerm n_0 (ATerm t)
        {
          t = Var_1(t, is_string_0);
          return(t);
        }
        t = list_1(t, n_0);
        return(t);
      }
      t = Alt_3(t, l_0, m_0, c_54);
      PopChoice();
    }
  else
    {
      t = i_4;
      {
        ATerm o_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a case-alternative: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, o_0);
      }
    }
  return(t);
}
ATerm Case_4 (ATerm t, ATerm i_28 (ATerm), ATerm j_28 (ATerm), ATerm k_28 (ATerm), ATerm l_28 (ATerm))
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  c_10 = t;
  b_10 :
  if(match_cons(c_10, sym_Case_4))
    {
      d_10 = ATgetArgument(c_10, 0);
      e_10 = ATgetArgument(c_10, 1);
      f_10 = ATgetArgument(c_10, 2);
      g_10 = ATgetArgument(c_10, 3);
      {
        ATerm l_10 = NULL;
        t = not_null(d_10);
        {
          ATerm n_10 = NULL;
          t = i_28(t);
          l_10 = t;
          t = not_null(e_10);
          {
            ATerm p_10 = NULL;
            t = j_28(t);
            n_10 = t;
            t = not_null(f_10);
            {
              ATerm x_10 = NULL;
              t = k_28(t);
              p_10 = t;
              t = not_null(g_10);
              t = l_28(t);
              x_10 = t;
              t = (ATerm) ATmakeAppl(sym_Case_4, not_null(l_10), not_null(n_10), not_null(p_10), not_null(x_10));
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm m_32 (ATerm), ATerm n_32 (ATerm))
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
  y_11 = t;
  x_11 :
  if(match_cons(y_11, sym_Let_2))
    {
      z_11 = ATgetArgument(y_11, 0);
      a_12 = ATgetArgument(y_11, 1);
      {
        ATerm d_12 = NULL;
        t = not_null(z_11);
        {
          ATerm f_12 = NULL;
          t = m_32(t);
          d_12 = t;
          t = not_null(a_12);
          t = n_32(t);
          f_12 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(d_12), not_null(f_12));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm r_33 (ATerm), ATerm s_33 (ATerm))
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL;
  w_12 = t;
  v_12 :
  if(match_cons(w_12, sym_Prim_2))
    {
      x_12 = ATgetArgument(w_12, 0);
      y_12 = ATgetArgument(w_12, 1);
      {
        ATerm c_13 = NULL;
        t = not_null(x_12);
        {
          ATerm e_13 = NULL;
          t = r_33(t);
          c_13 = t;
          t = not_null(y_12);
          t = s_33(t);
          e_13 = t;
          t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(c_13), not_null(e_13));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Where_1 (ATerm t, ATerm q_33 (ATerm))
{
  ATerm n_13 = NULL,o_13 = NULL;
  n_13 = t;
  m_13 :
  if(match_cons(n_13, sym_Where_1))
    {
      o_13 = ATgetArgument(n_13, 0);
      {
        ATerm q_13 = NULL;
        t = not_null(o_13);
        t = q_33(t);
        q_13 = t;
        t = (ATerm) ATmakeAppl(sym_Where_1, not_null(q_13));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm o_33 (ATerm), ATerm p_33 (ATerm))
{
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
  y_13 = t;
  x_13 :
  if(match_cons(y_13, sym_Scope_2))
    {
      z_13 = ATgetArgument(y_13, 0);
      a_14 = ATgetArgument(y_13, 1);
      {
        ATerm d_14 = NULL;
        t = not_null(z_13);
        {
          ATerm f_14 = NULL;
          t = o_33(t);
          d_14 = t;
          t = not_null(a_14);
          t = p_33(t);
          f_14 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_14), not_null(f_14));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm l_33 (ATerm))
{
  ATerm n_14 = NULL,o_14 = NULL;
  n_14 = t;
  m_14 :
  if(match_cons(n_14, sym_Build_1))
    {
      o_14 = ATgetArgument(n_14, 0);
      {
        ATerm q_14 = NULL;
        t = not_null(o_14);
        t = l_33(t);
        q_14 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(q_14));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm z_31 (ATerm), ATerm a_32 (ATerm))
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
  y_14 = t;
  x_14 :
  if(match_cons(y_14, sym_Op_2))
    {
      z_14 = ATgetArgument(y_14, 0);
      a_15 = ATgetArgument(y_14, 1);
      {
        ATerm d_15 = NULL;
        t = not_null(z_14);
        {
          ATerm f_15 = NULL;
          t = z_31(t);
          d_15 = t;
          t = not_null(a_15);
          t = a_32(t);
          f_15 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(d_15), not_null(f_15));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm As_2 (ATerm t, ATerm l_30 (ATerm), ATerm m_30 (ATerm))
{
  ATerm o_15 = NULL,p_15 = NULL,r_15 = NULL;
  o_15 = t;
  n_15 :
  if(match_cons(o_15, sym_As_2))
    {
      p_15 = ATgetArgument(o_15, 0);
      r_15 = ATgetArgument(o_15, 1);
      {
        ATerm u_15 = NULL;
        t = not_null(p_15);
        {
          ATerm w_15 = NULL;
          t = l_30(t);
          u_15 = t;
          t = not_null(r_15);
          t = m_30(t);
          w_15 = t;
          t = (ATerm) ATmakeAppl(sym_As_2, not_null(u_15), not_null(w_15));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm n_30 (ATerm))
{
  ATerm e_16 = NULL,f_16 = NULL;
  e_16 = t;
  d_16 :
  if(match_cons(e_16, sym_BuildDefault_1))
    {
      f_16 = ATgetArgument(e_16, 0);
      {
        ATerm h_16 = NULL;
        t = not_null(f_16);
        t = n_30(t);
        h_16 = t;
        t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(h_16));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm d_0 (ATerm))
{
  ATerm q_16 = NULL,r_16 = NULL;
  q_16 = t;
  p_16 :
  if(match_cons(q_16, sym_Str_1))
    {
      r_16 = ATgetArgument(q_16, 0);
      {
        ATerm m_4 = t;
        if(PushChoice()==0)
          {
            ATerm t_16 = NULL;
            t = not_null(r_16);
            t = d_0(t);
            t_16 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(t_16));
            PopChoice();
          }
        else
          {
            t = m_4;
            {
              ATerm w_16 = NULL;
              t = not_null(r_16);
              t = d_0(t);
              w_16 = t;
              t = (ATerm) ATmakeAppl(sym_Str_1, not_null(w_16));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_real_0 (ATerm t)
{
  ATerm d_17 = NULL;
  d_17 = t;
  t = SSL_is_real(not_null(d_17));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm c_0 (ATerm))
{
  ATerm l_17 = NULL,m_17 = NULL;
  l_17 = t;
  k_17 :
  if(match_cons(l_17, sym_Real_1))
    {
      m_17 = ATgetArgument(l_17, 0);
      {
        ATerm n_4 = t;
        if(PushChoice()==0)
          {
            ATerm o_17 = NULL;
            t = not_null(m_17);
            t = c_0(t);
            o_17 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, not_null(o_17));
            PopChoice();
          }
        else
          {
            t = n_4;
            {
              ATerm r_17 = NULL;
              t = not_null(m_17);
              t = c_0(t);
              r_17 = t;
              t = (ATerm) ATmakeAppl(sym_Real_1, not_null(r_17));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Int_1 (ATerm t, ATerm b_0 (ATerm))
{
  ATerm c_18 = NULL,d_18 = NULL;
  c_18 = t;
  b_18 :
  if(match_cons(c_18, sym_Int_1))
    {
      d_18 = ATgetArgument(c_18, 0);
      {
        ATerm o_4 = t;
        if(PushChoice()==0)
          {
            ATerm f_18 = NULL;
            t = not_null(d_18);
            t = b_0(t);
            f_18 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, not_null(f_18));
            PopChoice();
          }
        else
          {
            t = o_4;
            {
              ATerm i_18 = NULL;
              t = not_null(d_18);
              t = b_0(t);
              i_18 = t;
              t = (ATerm) ATmakeAppl(sym_Int_1, not_null(i_18));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm p_18 = NULL;
  p_18 = t;
  o_18 :
  if(!(match_cons(p_18, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm match_term_exp_0 (ATerm t)
{
  ATerm p_4 = t;
  if(PushChoice()==0)
    {
      t = Wld_0(t);
      PopChoice();
    }
  else
    {
      t = p_4;
      {
        ATerm q_4 = t;
        if(PushChoice()==0)
          {
            t = Var_1(t, is_string_0);
            PopChoice();
          }
        else
          {
            t = q_4;
            {
              ATerm r_4 = t;
              if(PushChoice()==0)
                {
                  t = Int_1(t, is_int_0);
                  PopChoice();
                }
              else
                {
                  t = r_4;
                  {
                    ATerm s_4 = t;
                    if(PushChoice()==0)
                      {
                        t = Real_1(t, is_real_0);
                        PopChoice();
                      }
                    else
                      {
                        t = s_4;
                        {
                          ATerm t_4 = t;
                          if(PushChoice()==0)
                            {
                              t = Str_1(t, is_string_0);
                              PopChoice();
                            }
                          else
                            {
                              t = t_4;
                              {
                                ATerm u_4 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BuildDefault_1(t, match_term_exp_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = u_4;
                                    {
                                      ATerm v_4 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm p_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, p_0, match_term_exp_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = v_4;
                                          {
                                            ATerm w_4 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm q_0 (ATerm t)
                                                {
                                                  t = list_1(t, match_term_exp_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, q_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = w_4;
                                                {
                                                  ATerm r_0 (ATerm t)
                                                  {
                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
                                                    return(t);
                                                  }
                                                  t = debug_1(t, r_0);
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Match_1 (ATerm t, ATerm k_33 (ATerm))
{
  ATerm u_18 = NULL,v_18 = NULL;
  u_18 = t;
  t_18 :
  if(match_cons(u_18, sym_Match_1))
    {
      v_18 = ATgetArgument(u_18, 0);
      {
        ATerm x_18 = NULL;
        t = not_null(v_18);
        t = k_33(t);
        x_18 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(x_18));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm h_33 (ATerm))
{
  ATerm e_19 = NULL,f_19 = NULL;
  e_19 = t;
  d_19 :
  if(match_cons(e_19, sym_Thread_1))
    {
      f_19 = ATgetArgument(e_19, 0);
      {
        ATerm h_19 = NULL;
        t = not_null(f_19);
        t = h_33(t);
        h_19 = t;
        t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(h_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm All_1 (ATerm t, ATerm g_33 (ATerm))
{
  ATerm o_19 = NULL,p_19 = NULL;
  o_19 = t;
  n_19 :
  if(match_cons(o_19, sym_All_1))
    {
      p_19 = ATgetArgument(o_19, 0);
      {
        ATerm r_19 = NULL;
        t = not_null(p_19);
        t = g_33(t);
        r_19 = t;
        t = (ATerm) ATmakeAppl(sym_All_1, not_null(r_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Some_1 (ATerm t, ATerm a_0 (ATerm))
{
  ATerm b_20 = NULL,c_20 = NULL;
  b_20 = t;
  a_20 :
  if(match_cons(b_20, sym_Some_1))
    {
      c_20 = ATgetArgument(b_20, 0);
      {
        ATerm x_4 = t;
        if(PushChoice()==0)
          {
            ATerm e_20 = NULL;
            t = not_null(c_20);
            t = a_0(t);
            e_20 = t;
            t = (ATerm) ATmakeAppl(sym_Some_1, not_null(e_20));
            PopChoice();
          }
        else
          {
            t = x_4;
            {
              ATerm h_20 = NULL;
              t = not_null(c_20);
              t = a_0(t);
              h_20 = t;
              t = (ATerm) ATmakeAppl(sym_Some_1, not_null(h_20));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm One_1 (ATerm t, ATerm e_33 (ATerm))
{
  ATerm q_20 = NULL,r_20 = NULL;
  q_20 = t;
  p_20 :
  if(match_cons(q_20, sym_One_1))
    {
      r_20 = ATgetArgument(q_20, 0);
      {
        ATerm t_20 = NULL;
        t = not_null(r_20);
        t = e_33(t);
        t_20 = t;
        t = (ATerm) ATmakeAppl(sym_One_1, not_null(t_20));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm c_33 (ATerm), ATerm d_33 (ATerm))
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
  b_21 = t;
  a_21 :
  if(match_cons(b_21, sym_Cong_2))
    {
      c_21 = ATgetArgument(b_21, 0);
      d_21 = ATgetArgument(b_21, 1);
      {
        ATerm g_21 = NULL;
        t = not_null(c_21);
        {
          ATerm i_21 = NULL;
          t = c_33(t);
          g_21 = t;
          t = not_null(d_21);
          t = d_33(t);
          i_21 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(g_21), not_null(i_21));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm o_21 = NULL;
  o_21 = t;
  t = SSL_is_int(not_null(o_21));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm a_33 (ATerm), ATerm b_33 (ATerm))
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
  v_21 = t;
  u_21 :
  if(match_cons(v_21, sym_Path_2))
    {
      w_21 = ATgetArgument(v_21, 0);
      x_21 = ATgetArgument(v_21, 1);
      {
        ATerm a_22 = NULL;
        t = not_null(w_21);
        {
          ATerm c_22 = NULL;
          t = a_33(t);
          a_22 = t;
          t = not_null(x_21);
          t = b_33(t);
          c_22 = t;
          t = (ATerm) ATmakeAppl(sym_Path_2, not_null(a_22), not_null(c_22));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm k_32 (ATerm), ATerm l_32 (ATerm))
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
  l_22 = t;
  k_22 :
  if(match_cons(l_22, sym_Rec_2))
    {
      m_22 = ATgetArgument(l_22, 0);
      n_22 = ATgetArgument(l_22, 1);
      {
        ATerm q_22 = NULL;
        t = not_null(m_22);
        {
          ATerm s_22 = NULL;
          t = k_32(t);
          q_22 = t;
          t = not_null(n_22);
          t = l_32(t);
          s_22 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(q_22), not_null(s_22));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm j_32 (ATerm))
{
  ATerm a_23 = NULL,b_23 = NULL;
  a_23 = t;
  z_22 :
  if(match_cons(a_23, sym_SVar_1))
    {
      b_23 = ATgetArgument(a_23, 0);
      {
        ATerm d_23 = NULL;
        t = not_null(b_23);
        t = j_32(t);
        d_23 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(d_23));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm y_32 (ATerm), ATerm z_32 (ATerm))
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
  l_23 = t;
  k_23 :
  if(match_cons(l_23, sym_Call_2))
    {
      m_23 = ATgetArgument(l_23, 0);
      n_23 = ATgetArgument(l_23, 1);
      {
        ATerm q_23 = NULL;
        t = not_null(m_23);
        {
          ATerm s_23 = NULL;
          t = y_32(t);
          q_23 = t;
          t = not_null(n_23);
          t = z_32(t);
          s_23 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(q_23), not_null(s_23));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm h_32 (ATerm), ATerm i_32 (ATerm))
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
  b_24 = t;
  a_24 :
  if(match_cons(b_24, sym_LChoice_2))
    {
      c_24 = ATgetArgument(b_24, 0);
      d_24 = ATgetArgument(b_24, 1);
      {
        ATerm g_24 = NULL;
        t = not_null(c_24);
        {
          ATerm i_24 = NULL;
          t = h_32(t);
          g_24 = t;
          t = not_null(d_24);
          t = i_32(t);
          i_24 = t;
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_24), not_null(i_24));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm f_32 (ATerm), ATerm g_32 (ATerm))
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
  r_24 = t;
  q_24 :
  if(match_cons(r_24, sym_Choice_2))
    {
      s_24 = ATgetArgument(r_24, 0);
      t_24 = ATgetArgument(r_24, 1);
      {
        ATerm w_24 = NULL;
        t = not_null(s_24);
        {
          ATerm y_24 = NULL;
          t = f_32(t);
          w_24 = t;
          t = not_null(t_24);
          t = g_32(t);
          y_24 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(w_24), not_null(y_24));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm d_32 (ATerm), ATerm e_32 (ATerm))
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
  h_25 = t;
  g_25 :
  if(match_cons(h_25, sym_Seq_2))
    {
      i_25 = ATgetArgument(h_25, 0);
      j_25 = ATgetArgument(h_25, 1);
      {
        ATerm m_25 = NULL;
        t = not_null(i_25);
        {
          ATerm o_25 = NULL;
          t = d_32(t);
          m_25 = t;
          t = not_null(j_25);
          t = e_32(t);
          o_25 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_25), not_null(o_25));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Test_1 (ATerm t, ATerm b_32 (ATerm))
{
  ATerm w_25 = NULL,x_25 = NULL;
  w_25 = t;
  v_25 :
  if(match_cons(w_25, sym_Test_1))
    {
      x_25 = ATgetArgument(w_25, 0);
      {
        ATerm z_25 = NULL;
        t = not_null(x_25);
        t = b_32(t);
        z_25 = t;
        t = (ATerm) ATmakeAppl(sym_Test_1, not_null(z_25));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Not_1 (ATerm t, ATerm c_32 (ATerm))
{
  ATerm g_26 = NULL,h_26 = NULL;
  g_26 = t;
  f_26 :
  if(match_cons(g_26, sym_Not_1))
    {
      h_26 = ATgetArgument(g_26, 0);
      {
        ATerm j_26 = NULL;
        t = not_null(h_26);
        t = c_32(t);
        j_26 = t;
        t = (ATerm) ATmakeAppl(sym_Not_1, not_null(j_26));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm o_26 = NULL;
  o_26 = t;
  n_26 :
  if(!(match_cons(o_26, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm q_26 = NULL;
  q_26 = t;
  p_26 :
  if(!(match_cons(q_26, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm y_4 = t;
  if(PushChoice()==0)
    {
      t = Id_0(t);
      PopChoice();
    }
  else
    {
      t = y_4;
      {
        ATerm z_4 = t;
        if(PushChoice()==0)
          {
            t = Fail_0(t);
            PopChoice();
          }
        else
          {
            t = z_4;
            {
              ATerm a_5 = t;
              if(PushChoice()==0)
                {
                  t = Not_1(t, strategy_expression_0);
                  PopChoice();
                }
              else
                {
                  t = a_5;
                  {
                    ATerm b_5 = t;
                    if(PushChoice()==0)
                      {
                        t = Test_1(t, strategy_expression_0);
                        PopChoice();
                      }
                    else
                      {
                        t = b_5;
                        {
                          ATerm c_5 = t;
                          if(PushChoice()==0)
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              PopChoice();
                            }
                          else
                            {
                              t = c_5;
                              {
                                ATerm d_5 = t;
                                if(PushChoice()==0)
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = d_5;
                                    {
                                      ATerm e_5 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = e_5;
                                          {
                                            ATerm f_5 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm s_0 (ATerm t)
                                                {
                                                  t = SVar_1(t, is_string_0);
                                                  return(t);
                                                }
                                                ATerm t_0 (ATerm t)
                                                {
                                                  ATerm u_0 (ATerm t)
                                                  {
                                                    ATerm v_0 (ATerm t)
                                                    {
                                                      t = SVar_1(t, is_string_0);
                                                      return(t);
                                                    }
                                                    t = Call_2(t, v_0, Nil_0);
                                                    return(t);
                                                  }
                                                  t = list_1(t, u_0);
                                                  return(t);
                                                }
                                                t = Call_2(t, s_0, t_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = f_5;
                                                {
                                                  ATerm g_5 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = Rec_2(t, is_string_0, strategy_expression_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = g_5;
                                                      {
                                                        ATerm h_5 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = Path_2(t, is_int_0, strategy_expression_0);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = h_5;
                                                            {
                                                              ATerm i_5 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm w_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = Cong_2(t, is_string_0, w_0);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = i_5;
                                                                  {
                                                                    ATerm j_5 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = One_1(t, strategy_expression_0);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = j_5;
                                                                        {
                                                                          ATerm k_5 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = Some_1(t, strategy_expression_0);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = k_5;
                                                                              {
                                                                                ATerm l_5 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    t = All_1(t, strategy_expression_0);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_5;
                                                                                    {
                                                                                      ATerm m_5 = t;
                                                                                      if(PushChoice()==0)
                                                                                        {
                                                                                          t = Thread_1(t, strategy_expression_0);
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = m_5;
                                                                                          {
                                                                                            ATerm n_5 = t;
                                                                                            if(PushChoice()==0)
                                                                                              {
                                                                                                t = Match_1(t, match_term_exp_0);
                                                                                                PopChoice();
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = n_5;
                                                                                                {
                                                                                                  ATerm o_5 = t;
                                                                                                  if(PushChoice()==0)
                                                                                                    {
                                                                                                      t = Build_1(t, term_expression_0);
                                                                                                      PopChoice();
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = o_5;
                                                                                                      {
                                                                                                        ATerm p_5 = t;
                                                                                                        if(PushChoice()==0)
                                                                                                          {
                                                                                                            ATerm x_0 (ATerm t)
                                                                                                            {
                                                                                                              t = list_1(t, is_string_0);
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Scope_2(t, x_0, strategy_expression_0);
                                                                                                            PopChoice();
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = p_5;
                                                                                                            {
                                                                                                              ATerm q_5 = t;
                                                                                                              if(PushChoice()==0)
                                                                                                                {
                                                                                                                  t = Where_1(t, strategy_expression_0);
                                                                                                                  PopChoice();
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = q_5;
                                                                                                                  {
                                                                                                                    ATerm r_5 = t;
                                                                                                                    if(PushChoice()==0)
                                                                                                                      {
                                                                                                                        ATerm y_0 (ATerm t)
                                                                                                                        {
                                                                                                                          t = list_1(t, term_expression_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Prim_2(t, is_string_0, y_0);
                                                                                                                        PopChoice();
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = r_5;
                                                                                                                        {
                                                                                                                          ATerm t_5 = t;
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
                                                                                                                                      t = VarDec_2(t, is_string_0, _id);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = list_1(t, c_1);
                                                                                                                                    return(t);
                                                                                                                                  }
                                                                                                                                  t = SDef_3(t, is_string_0, b_1, strategy_expression_0);
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = list_1(t, a_1);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Let_2(t, z_0, strategy_expression_0);
                                                                                                                              PopChoice();
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = t_5;
                                                                                                                              {
                                                                                                                                ATerm v_5 = t;
                                                                                                                                if(PushChoice()==0)
                                                                                                                                  {
                                                                                                                                    ATerm d_1 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = Var_1(t, is_string_0);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    ATerm e_1 (ATerm t)
                                                                                                                                    {
                                                                                                                                      ATerm f_1 (ATerm t)
                                                                                                                                      {
                                                                                                                                        t = case_alternative_1(t, strategy_expression_0);
                                                                                                                                        return(t);
                                                                                                                                      }
                                                                                                                                      t = list_1(t, f_1);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = Case_4(t, is_string_0, d_1, e_1, strategy_expression_0);
                                                                                                                                    PopChoice();
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = v_5;
                                                                                                                                    {
                                                                                                                                      ATerm w_5 = t;
                                                                                                                                      if(PushChoice()==0)
                                                                                                                                        {
                                                                                                                                          ATerm g_1 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = Var_1(t, is_string_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Assign_2(t, g_1, term_expression_0);
                                                                                                                                          PopChoice();
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = w_5;
                                                                                                                                          {
                                                                                                                                            ATerm x_5 = t;
                                                                                                                                            if(PushChoice()==0)
                                                                                                                                              {
                                                                                                                                                ATerm h_1 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  t = Var_1(t, is_string_0);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Assign_1(t, h_1);
                                                                                                                                                PopChoice();
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = x_5;
                                                                                                                                                {
                                                                                                                                                  ATerm y_5 = t;
                                                                                                                                                  if(PushChoice()==0)
                                                                                                                                                    {
                                                                                                                                                      t = Continue_1(t, is_string_0);
                                                                                                                                                      PopChoice();
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = y_5;
                                                                                                                                                      {
                                                                                                                                                        ATerm i_1 (ATerm t)
                                                                                                                                                        {
                                                                                                                                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
                                                                                                                                                          return(t);
                                                                                                                                                        }
                                                                                                                                                        t = debug_1(t, i_1);
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm t_26 = NULL;
  t_26 = t;
  t = SSL_is_string(not_null(t_26));
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm r_32 (ATerm), ATerm s_32 (ATerm))
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL;
  a_27 = t;
  z_26 :
  if(match_cons(a_27, sym_VarDec_2))
    {
      b_27 = ATgetArgument(a_27, 0);
      c_27 = ATgetArgument(a_27, 1);
      {
        ATerm f_27 = NULL;
        t = not_null(b_27);
        {
          ATerm h_27 = NULL;
          t = r_32(t);
          f_27 = t;
          t = not_null(c_27);
          t = s_32(t);
          h_27 = t;
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(f_27), not_null(h_27));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm o_32 (ATerm), ATerm p_32 (ATerm), ATerm q_32 (ATerm))
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL;
  r_27 = t;
  q_27 :
  if(match_cons(r_27, sym_SDef_3))
    {
      s_27 = ATgetArgument(r_27, 0);
      t_27 = ATgetArgument(r_27, 1);
      u_27 = ATgetArgument(r_27, 2);
      {
        ATerm y_27 = NULL;
        t = not_null(s_27);
        {
          ATerm a_28 = NULL;
          t = o_32(t);
          y_27 = t;
          t = not_null(t_27);
          {
            ATerm c_28 = NULL;
            t = p_32(t);
            a_28 = t;
            t = not_null(u_27);
            t = q_32(t);
            c_28 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_27), not_null(a_28), not_null(c_28));
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
  ATerm z_5 = t;
  if(PushChoice()==0)
    {
      ATerm j_1 (ATerm t)
      {
        ATerm k_1 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, k_1);
        return(t);
      }
      t = SDef_3(t, is_string_0, j_1, strategy_expression_0);
      PopChoice();
    }
  else
    {
      t = z_5;
      {
        ATerm l_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, l_1);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm e_47 (ATerm))
{
  ATerm m_28 (ATerm t)
  {
    ATerm d_6 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = d_6;
        t = Cons_2(t, e_47, m_28);
      }
    return(t);
  }
  t = m_28(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm j_31 (ATerm))
{
  ATerm u_28 = NULL,y_28 = NULL;
  u_28 = t;
  t_28 :
  if(match_cons(u_28, sym_Strategies_1))
    {
      y_28 = ATgetArgument(u_28, 0);
      {
        ATerm a_29 = NULL;
        t = not_null(y_28);
        t = j_31(t);
        a_29 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(a_29));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm l_31 (ATerm))
{
  ATerm i_29 = NULL,j_29 = NULL;
  i_29 = t;
  h_29 :
  if(match_cons(i_29, sym_Specification_1))
    {
      j_29 = ATgetArgument(i_29, 0);
      {
        ATerm l_29 = NULL;
        t = not_null(j_29);
        t = l_31(t);
        l_29 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(l_29));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm f_6 = t;
  if(PushChoice()==0)
    {
      ATerm m_1 (ATerm t)
      {
        ATerm n_1 (ATerm t)
        {
          ATerm o_1 (ATerm t)
          {
            ATerm p_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, p_1);
            return(t);
          }
          t = Cons_2(t, o_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, n_1);
        return(t);
      }
      t = Specification_1(t, m_1);
      PopChoice();
    }
  else
    {
      t = f_6;
      {
        ATerm q_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, q_1);
      }
    }
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm q_29 = NULL;
  q_29 = t;
  p_29 :
  if(!(match_cons(q_29, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm v_33 (ATerm), ATerm w_33 (ATerm))
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
  v_29 = t;
  u_29 :
  if(match_cons(v_29, sym_TCons_2))
    {
      w_29 = ATgetArgument(v_29, 0);
      x_29 = ATgetArgument(v_29, 1);
      {
        ATerm a_30 = NULL;
        t = not_null(w_29);
        {
          ATerm c_30 = NULL;
          t = v_33(t);
          a_30 = t;
          t = not_null(x_29);
          t = w_33(t);
          c_30 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_30), not_null(c_30));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm j_30 = NULL;
  ATerm g_6;
  g_6 = t;
  {
    ATerm r_1 (ATerm t)
    {
      ATerm k_30 = NULL,o_30 = NULL;
      k_30 = t;
      i_30 :
      if(match_cons(k_30, sym_Program_1))
        {
          o_30 = ATgetArgument(k_30, 0);
          if(j_30 != NULL && j_30 != o_30)
            _fail(o_30);
          else
            j_30 = o_30;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, r_1);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_30), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = g_6;
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
  ATerm r_30 = NULL;
  r_30 = t;
  t = SSL_exit(not_null(r_30));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
  y_30 = t;
  v_30 :
  if(match_cons(y_30, sym_TCons_2))
    {
      z_30 = ATgetArgument(y_30, 0);
      a_31 = ATgetArgument(y_30, 1);
      w_30 :
      if(match_cons(a_31, sym_TCons_2))
        {
          b_31 = ATgetArgument(a_31, 0);
          c_31 = ATgetArgument(a_31, 1);
          x_30 :
          if(match_cons(c_31, sym_TNil_0))
            {
              ATerm h_6;
              h_6 = t;
              t = SSL_printnl(not_null(z_30), not_null(b_31));
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
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_53 (ATerm))
{
  ATerm i_6 = t;
  if(PushChoice()==0)
    {
      t = q_53(t);
      PopChoice();
    }
  else
    t = i_6;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL;
  ATerm s_1 (ATerm t)
  {
    ATerm t_1 (ATerm t)
    {
      ATerm j_6 = t;
      if(PushChoice()==0)
        {
          ATerm v_1 (ATerm t)
          {
            ATerm p_31 = NULL;
            p_31 = t;
            g_31 :
            if(!(match_cons(p_31, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, v_1);
          PopChoice();
          _fail(t);
        }
      else
        t = j_6;
      return(t);
    }
    ATerm u_1 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, t_1, u_1);
    {
      ATerm w_1 (ATerm t)
      {
        ATerm y_1 (ATerm t)
        {
          ATerm q_31 = NULL,r_31 = NULL;
          q_31 = t;
          i_31 :
          if(match_cons(q_31, sym_Runtime_1))
            {
              r_31 = ATgetArgument(q_31, 0);
              if(o_31 != NULL && o_31 != r_31)
                _fail(r_31);
              else
                o_31 = r_31;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, y_1);
        return(t);
      }
      ATerm x_1 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, w_1, x_1);
      {
        ATerm z_1 (ATerm t)
        {
          ATerm b_2 (ATerm t)
          {
            ATerm s_31 = NULL,t_31 = NULL;
            s_31 = t;
            m_31 :
            if(match_cons(s_31, sym_Program_1))
              {
                t_31 = ATgetArgument(s_31, 0);
                if(n_31 != NULL && n_31 != t_31)
                  _fail(t_31);
                else
                  n_31 = t_31;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, b_2);
          return(t);
        }
        ATerm a_2 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, z_1, a_2);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_31), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_31), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, s_1);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL,f_33 = NULL,i_33 = NULL;
  v_32 = t;
  y_31 :
  if(match_cons(v_32, sym_TCons_2))
    {
      w_32 = ATgetArgument(v_32, 0);
      x_32 = ATgetArgument(v_32, 1);
      t_32 :
      if(match_cons(x_32, sym_TCons_2))
        {
          f_33 = ATgetArgument(x_32, 0);
          i_33 = ATgetArgument(x_32, 1);
          u_32 :
          if(match_cons(i_33, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(w_32), not_null(f_33));
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
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL;
  b_34 = t;
  u_33 :
  if(match_cons(b_34, sym_TCons_2))
    {
      c_34 = ATgetArgument(b_34, 0);
      d_34 = ATgetArgument(b_34, 1);
      x_33 :
      if(match_cons(d_34, sym_TCons_2))
        {
          e_34 = ATgetArgument(d_34, 0);
          f_34 = ATgetArgument(d_34, 1);
          y_33 :
          if(match_cons(f_34, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(c_34), not_null(e_34));
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
  ATerm n_34 = NULL;
  ATerm n_6;
  n_6 = t;
  {
    ATerm c_2 (ATerm t)
    {
      ATerm p_6 = t;
      if(PushChoice()==0)
        {
          ATerm e_2 (ATerm t)
          {
            ATerm o_34 = NULL,p_34 = NULL;
            o_34 = t;
            k_34 :
            if(match_cons(o_34, sym_Output_1))
              {
                p_34 = ATgetArgument(o_34, 0);
                if(n_34 != NULL && n_34 != p_34)
                  _fail(p_34);
                else
                  n_34 = p_34;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, e_2);
          PopChoice();
        }
      else
        {
          t = p_6;
          {
            ATerm q_34 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            q_34 = t;
            if(n_34 != NULL && n_34 != q_34)
              _fail(q_34);
            else
              n_34 = q_34;
          }
        }
      return(t);
    }
    ATerm d_2 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, c_2, d_2);
  }
  t = n_6;
  {
    ATerm f_2 (ATerm t)
    {
      ATerm g_2 (ATerm t)
      {
        ATerm h_2 (ATerm t)
        {
          t = not_null(n_34);
          return(t);
        }
        t = split_2(t, h_2, _id);
        return(t);
      }
      t = TCons_2(t, g_2, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, f_2);
    {
      ATerm q_6 = t;
      if(PushChoice()==0)
        {
          ATerm i_2 (ATerm t)
          {
            ATerm k_2 (ATerm t)
            {
              ATerm r_34 = NULL;
              r_34 = t;
              m_34 :
              if(!(match_cons(r_34, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, k_2);
            return(t);
          }
          ATerm j_2 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, i_2, j_2);
          PopChoice();
        }
      else
        {
          t = q_6;
          {
            ATerm l_2 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, l_2);
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
ATerm apply_strategy_1 (ATerm t, ATerm n_38 (ATerm))
{
  ATerm z_34 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
  ATerm r_6;
  r_6 = t;
  t = dtime_0(t);
  t = r_6;
  t = n_38(t);
  {
    ATerm s_6;
    s_6 = t;
    {
      ATerm a_35 = NULL;
      t = dtime_0(t);
      a_35 = t;
      if(z_34 != NULL && z_34 != a_35)
        _fail(a_35);
      else
        z_34 = a_35;
    }
    t = s_6;
    b_35 = t;
    w_34 :
    if(match_cons(b_35, sym_TCons_2))
      {
        c_35 = ATgetArgument(b_35, 0);
        d_35 = ATgetArgument(b_35, 1);
        x_34 :
        if(match_cons(d_35, sym_TCons_2))
          {
            e_35 = ATgetArgument(d_35, 0);
            f_35 = ATgetArgument(d_35, 1);
            y_34 :
            if(match_cons(f_35, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(z_34)), not_null(c_35)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_35), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm l_35 = NULL;
  l_35 = t;
  t = SSL_ReadFromFile(not_null(l_35));
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_40 (ATerm), ATerm r_40 (ATerm))
{
  ATerm r_35 = NULL;
  ATerm t_35 = NULL;
  r_35 = t;
  {
    ATerm v_35 = NULL;
    t = q_40(t);
    t_35 = t;
    t = not_null(r_35);
    t = r_40(t);
    v_35 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_35), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm d_36 = NULL;
  ATerm t_6;
  t_6 = t;
  {
    ATerm x_6 = t;
    if(PushChoice()==0)
      {
        ATerm m_2 (ATerm t)
        {
          ATerm e_36 = NULL,f_36 = NULL;
          e_36 = t;
          b_36 :
          if(match_cons(e_36, sym_Input_1))
            {
              f_36 = ATgetArgument(e_36, 0);
              if(d_36 != NULL && d_36 != f_36)
                _fail(f_36);
              else
                d_36 = f_36;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, m_2);
        PopChoice();
      }
    else
      {
        t = x_6;
        {
          ATerm g_36 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          g_36 = t;
          if(d_36 != NULL && d_36 != g_36)
            _fail(g_36);
          else
            d_36 = g_36;
        }
      }
  }
  t = t_6;
  {
    ATerm n_2 (ATerm t)
    {
      t = not_null(d_36);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, n_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_36 = NULL;
  k_36 = t;
  j_36 :
  if(!(match_cons(k_36, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm c_29 (ATerm))
{
  ATerm o_36 = NULL,p_36 = NULL;
  o_36 = t;
  n_36 :
  if(match_cons(o_36, sym_Undefined_1))
    {
      p_36 = ATgetArgument(o_36, 0);
      {
        ATerm r_36 = NULL;
        t = not_null(p_36);
        t = c_29(t);
        r_36 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(r_36));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_36 = NULL;
  w_36 = t;
  v_36 :
  if(!(match_cons(w_36, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm l_47 (ATerm))
{
  ATerm x_36 (ATerm t)
  {
    ATerm z_6 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, l_47, _id);
        PopChoice();
      }
    else
      {
        t = z_6;
        t = Cons_2(t, _id, x_36);
      }
    return(t);
  }
  t = x_36(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_37 (ATerm))
{
  t = fetch_1(t, r_37);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_38 (ATerm))
{
  ATerm o_2 (ATerm t)
  {
    ATerm a_7 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = a_7;
        {
          ATerm b_7 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = b_7;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, o_2);
  t = m_38(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
  ATerm c_7;
  c_7 = t;
  {
    ATerm g_37 = NULL,h_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,s_37 = NULL,u_37 = NULL;
    g_37 = t;
    z_36 :
    if(match_cons(g_37, sym_TCons_2))
      {
        h_37 = ATgetArgument(g_37, 0);
        o_37 = ATgetArgument(g_37, 1);
        a_37 :
        if(match_cons(o_37, sym_TCons_2))
          {
            p_37 = ATgetArgument(o_37, 0);
            q_37 = ATgetArgument(o_37, 1);
            b_37 :
            if(match_cons(q_37, sym_TCons_2))
              {
                s_37 = ATgetArgument(q_37, 0);
                u_37 = ATgetArgument(q_37, 1);
                c_37 :
                if(match_cons(u_37, sym_TNil_0))
                  {
                    if(d_37 != NULL && d_37 != h_37)
                      _fail(h_37);
                    else
                      d_37 = h_37;
                    if(e_37 != NULL && e_37 != p_37)
                      _fail(p_37);
                    else
                      e_37 = p_37;
                    if(f_37 != NULL && f_37 != s_37)
                      _fail(s_37);
                    else
                      f_37 = s_37;
                    t = SSL_table_put(not_null(d_37), not_null(e_37), not_null(f_37));
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
  t = c_7;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm z_37 = NULL;
  z_37 = t;
  t = SSL_table_create(not_null(z_37));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_38 = NULL;
  g_38 = t;
  {
    ATerm d_7;
    d_7 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_38), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = d_7;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm k_37 (ATerm), ATerm l_37 (ATerm))
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
  o_38 = t;
  l_38 :
  if(match_cons(o_38, sym_Cons_2))
    {
      p_38 = ATgetArgument(o_38, 0);
      q_38 = ATgetArgument(o_38, 1);
      {
        ATerm t_38 = NULL;
        t = not_null(p_38);
        t = k_37(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = l_37(t);
        t_38 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_38), not_null(q_38));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm m_37 (ATerm), ATerm n_37 (ATerm))
{
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
  c_39 = t;
  a_39 :
  if(match_cons(c_39, sym_Cons_2))
    {
      d_39 = ATgetArgument(c_39, 0);
      e_39 = ATgetArgument(c_39, 1);
      b_39 :
      if(match_cons(e_39, sym_Cons_2))
        {
          f_39 = ATgetArgument(e_39, 0);
          g_39 = ATgetArgument(e_39, 1);
          {
            ATerm k_39 = NULL;
            t = not_null(d_39);
            t = m_37(t);
            t = not_null(f_39);
            t = n_37(t);
            k_39 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_39), not_null(g_39));
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
  ATerm e_7 = t;
  if(PushChoice()==0)
    {
      ATerm p_2 (ATerm t)
      {
        ATerm i_40 = NULL;
        i_40 = t;
        o_39 :
        if(!(match_string(i_40, "-S")))
          _fail(t);
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, p_2, q_2);
      PopChoice();
    }
  else
    {
      t = e_7;
      {
        ATerm f_7 = t;
        if(PushChoice()==0)
          {
            ATerm r_2 (ATerm t)
            {
              ATerm j_40 = NULL;
              j_40 = t;
              p_39 :
              if(!(match_string(j_40, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm s_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, r_2, s_2);
            PopChoice();
          }
        else
          {
            t = f_7;
            {
              ATerm g_7 = t;
              if(PushChoice()==0)
                {
                  ATerm t_2 (ATerm t)
                  {
                    ATerm k_40 = NULL;
                    k_40 = t;
                    q_39 :
                    if(!(match_string(k_40, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm u_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, t_2, u_2);
                  PopChoice();
                }
              else
                {
                  t = g_7;
                  {
                    ATerm h_7 = t;
                    if(PushChoice()==0)
                      {
                        ATerm v_2 (ATerm t)
                        {
                          ATerm l_40 = NULL;
                          l_40 = t;
                          r_39 :
                          if(!(match_string(l_40, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm w_2 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, v_2, w_2);
                        PopChoice();
                      }
                    else
                      {
                        t = h_7;
                        {
                          ATerm i_7 = t;
                          if(PushChoice()==0)
                            {
                              ATerm x_2 (ATerm t)
                              {
                                ATerm m_40 = NULL;
                                m_40 = t;
                                s_39 :
                                if(!(match_string(m_40, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm y_2 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, x_2, y_2);
                              PopChoice();
                            }
                          else
                            {
                              t = i_7;
                              {
                                ATerm n_7 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm z_2 (ATerm t)
                                    {
                                      ATerm n_40 = NULL;
                                      n_40 = t;
                                      t_39 :
                                      if(!(match_string(n_40, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm a_3 (ATerm t)
                                    {
                                      ATerm o_40 = NULL;
                                      o_40 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(o_40));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, z_2, a_3);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = n_7;
                                    {
                                      ATerm o_7 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm b_3 (ATerm t)
                                          {
                                            ATerm s_40 = NULL;
                                            s_40 = t;
                                            v_39 :
                                            if(!(match_string(s_40, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm c_3 (ATerm t)
                                          {
                                            ATerm t_40 = NULL;
                                            t_40 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_40));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, b_3, c_3);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = o_7;
                                          {
                                            ATerm q_7 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm d_3 (ATerm t)
                                                {
                                                  ATerm v_40 = NULL;
                                                  v_40 = t;
                                                  x_39 :
                                                  if(!(match_string(v_40, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm e_3 (ATerm t)
                                                {
                                                  ATerm w_40 = NULL;
                                                  w_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_40));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, d_3, e_3);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = q_7;
                                                {
                                                  ATerm s_7 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm f_3 (ATerm t)
                                                      {
                                                        ATerm y_40 = NULL;
                                                        y_40 = t;
                                                        z_39 :
                                                        if(!(match_string(y_40, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm g_3 (ATerm t)
                                                      {
                                                        ATerm z_40 = NULL;
                                                        z_40 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_40));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, f_3, g_3);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = s_7;
                                                      {
                                                        ATerm t_7 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm h_3 (ATerm t)
                                                            {
                                                              ATerm b_41 = NULL;
                                                              b_41 = t;
                                                              b_40 :
                                                              if(!(match_string(b_41, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm i_3 (ATerm t)
                                                            {
                                                              ATerm c_41 = NULL;
                                                              c_41 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_41));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, h_3, i_3);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = t_7;
                                                            {
                                                              ATerm u_7 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm j_3 (ATerm t)
                                                                  {
                                                                    ATerm e_41 = NULL;
                                                                    e_41 = t;
                                                                    d_40 :
                                                                    if(!(match_string(e_41, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm k_3 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, j_3, k_3);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = u_7;
                                                                  {
                                                                    ATerm w_7 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm l_3 (ATerm t)
                                                                        {
                                                                          ATerm f_41 = NULL;
                                                                          f_41 = t;
                                                                          e_40 :
                                                                          if(!(match_string(f_41, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm m_3 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, l_3, m_3);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = w_7;
                                                                        {
                                                                          ATerm y_7 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm n_3 (ATerm t)
                                                                              {
                                                                                ATerm g_41 = NULL;
                                                                                g_41 = t;
                                                                                f_40 :
                                                                                if(!(match_string(g_41, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm o_3 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, n_3, o_3);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_7;
                                                                              {
                                                                                ATerm z_7 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm p_3 (ATerm t)
                                                                                    {
                                                                                      ATerm h_41 = NULL;
                                                                                      h_41 = t;
                                                                                      g_40 :
                                                                                      if(!(match_string(h_41, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm q_3 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, p_3, q_3);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = z_7;
                                                                                    {
                                                                                      ATerm r_3 (ATerm t)
                                                                                      {
                                                                                        ATerm i_41 = NULL;
                                                                                        i_41 = t;
                                                                                        h_40 :
                                                                                        if(!(match_string(i_41, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm s_3 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, r_3, s_3);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL;
  q_41 = t;
  p_41 :
  if(match_cons(q_41, sym_Cons_2))
    {
      r_41 = ATgetArgument(q_41, 0);
      s_41 = ATgetArgument(q_41, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_41)), not_null(s_41));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_33 (ATerm), ATerm a_34 (ATerm))
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL;
  a_42 = t;
  z_41 :
  if(match_cons(a_42, sym_Cons_2))
    {
      b_42 = ATgetArgument(a_42, 0);
      c_42 = ATgetArgument(a_42, 1);
      {
        ATerm f_42 = NULL;
        t = not_null(b_42);
        {
          ATerm h_42 = NULL;
          t = z_33(t);
          f_42 = t;
          t = not_null(c_42);
          t = a_34(t);
          h_42 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_42), not_null(h_42));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm n_42 = NULL;
  n_42 = t;
  m_42 :
  if(!(match_cons(n_42, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_37 (ATerm))
{
  ATerm t_3 (ATerm t)
  {
    ATerm p_42 = NULL;
    p_42 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_42));
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    ATerm a_8 = t;
    if(PushChoice()==0)
      {
        ATerm b_8 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = b_8;
            t = i_37(t);
            t = Cons_2(t, _id, u_3);
          }
        PopChoice();
      }
    else
      {
        t = a_8;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, t_3, u_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm b_38 (ATerm), ATerm c_38 (ATerm), ATerm d_38 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    ATerm c_8 = t;
    if(PushChoice()==0)
      {
        t = c_38(t);
        PopChoice();
      }
    else
      {
        t = c_8;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, v_3);
  t = store_options_0(t);
  {
    ATerm d_8 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, d_38);
        PopChoice();
      }
    else
      {
        t = d_8;
        {
          ATerm e_8 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, b_38);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = e_8;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm w_37 (ATerm), ATerm x_37 (ATerm))
{
  t = iowrap_3(t, w_37, x_37, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm t_37 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      t = TCons_2(t, t_37, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, x_3);
    return(t);
  }
  t = iowrap_2(t, w_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
