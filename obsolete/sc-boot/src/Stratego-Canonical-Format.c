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
ATerm debug_1 (ATerm, ATerm d_38 (ATerm));
ATerm Continue_1 (ATerm, ATerm c_28 (ATerm));
ATerm Var_1 (ATerm, ATerm f_31 (ATerm));
ATerm Assign_1 (ATerm, ATerm f_28 (ATerm));
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm Fun_2 (ATerm, ATerm g_28 (ATerm), ATerm h_28 (ATerm));
ATerm Alt_3 (ATerm, ATerm z_27 (ATerm), ATerm a_28 (ATerm), ATerm b_28 (ATerm));
ATerm case_alternative_1 (ATerm, ATerm e_53 (ATerm));
ATerm Case_4 (ATerm, ATerm s_27 (ATerm), ATerm t_27 (ATerm), ATerm u_27 (ATerm), ATerm v_27 (ATerm));
ATerm Let_2 (ATerm, ATerm w_31 (ATerm), ATerm x_31 (ATerm));
ATerm Prim_2 (ATerm, ATerm b_33 (ATerm), ATerm c_33 (ATerm));
ATerm Where_1 (ATerm, ATerm a_33 (ATerm));
ATerm Scope_2 (ATerm, ATerm y_32 (ATerm), ATerm z_32 (ATerm));
ATerm Build_1 (ATerm, ATerm v_32 (ATerm));
ATerm Op_2 (ATerm, ATerm j_31 (ATerm), ATerm k_31 (ATerm));
ATerm As_2 (ATerm, ATerm v_29 (ATerm), ATerm w_29 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm x_29 (ATerm));
ATerm Str_1 (ATerm, ATerm d_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm c_0 (ATerm));
ATerm Int_1 (ATerm, ATerm b_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm match_term_exp_0 (ATerm);
ATerm Match_1 (ATerm, ATerm u_32 (ATerm));
ATerm Thread_1 (ATerm, ATerm r_32 (ATerm));
ATerm All_1 (ATerm, ATerm q_32 (ATerm));
ATerm Some_1 (ATerm, ATerm a_0 (ATerm));
ATerm One_1 (ATerm, ATerm o_32 (ATerm));
ATerm Cong_2 (ATerm, ATerm m_32 (ATerm), ATerm n_32 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm k_32 (ATerm), ATerm l_32 (ATerm));
ATerm Rec_2 (ATerm, ATerm u_31 (ATerm), ATerm v_31 (ATerm));
ATerm SVar_1 (ATerm, ATerm t_31 (ATerm));
ATerm Call_2 (ATerm, ATerm i_32 (ATerm), ATerm j_32 (ATerm));
ATerm LChoice_2 (ATerm, ATerm r_31 (ATerm), ATerm s_31 (ATerm));
ATerm Choice_2 (ATerm, ATerm p_31 (ATerm), ATerm q_31 (ATerm));
ATerm Seq_2 (ATerm, ATerm n_31 (ATerm), ATerm o_31 (ATerm));
ATerm Test_1 (ATerm, ATerm l_31 (ATerm));
ATerm Not_1 (ATerm, ATerm m_31 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm b_32 (ATerm), ATerm c_32 (ATerm));
ATerm SDef_3 (ATerm, ATerm y_31 (ATerm), ATerm z_31 (ATerm), ATerm a_32 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm g_46 (ATerm));
ATerm Strategies_1 (ATerm, ATerm t_30 (ATerm));
ATerm Specification_1 (ATerm, ATerm v_30 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm f_33 (ATerm), ATerm g_33 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm s_52 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm u_37 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm u_39 (ATerm), ATerm v_39 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm m_28 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm n_46 (ATerm));
ATerm option_defined_1 (ATerm, ATerm y_36 (ATerm));
ATerm need_help_1 (ATerm, ATerm t_37 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm r_36 (ATerm), ATerm s_36 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm t_36 (ATerm), ATerm u_36 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm j_33 (ATerm), ATerm k_33 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_36 (ATerm));
ATerm iowrap_3 (ATerm, ATerm i_37 (ATerm), ATerm j_37 (ATerm), ATerm k_37 (ATerm));
ATerm iowrap_2 (ATerm, ATerm d_37 (ATerm), ATerm e_37 (ATerm));
ATerm iowrap_1 (ATerm, ATerm a_37 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm d_38 (ATerm))
{
  ATerm h_4;
  h_4 = t;
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
      t = d_38(t);
      u_5 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_5), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, g_0, h_0);
    t = printnl_0(t);
  }
  t = h_4;
  return(t);
}
ATerm Continue_1 (ATerm t, ATerm c_28 (ATerm))
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
        t = c_28(t);
        e_6 = t;
        t = (ATerm) ATmakeAppl(sym_Continue_1, not_null(e_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm f_31 (ATerm))
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
        t = f_31(t);
        o_6 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Assign_1 (ATerm t, ATerm f_28 (ATerm))
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
        t = f_28(t);
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
  ATerm i_4 = t;
  if(PushChoice()==0)
    {
      ATerm d_7 = NULL;
      d_7 = t;
      c_7 :
      if(!(match_cons(d_7, sym_Wld_0)))
        _fail(t);
      PopChoice();
    }
  else
    {
      t = i_4;
      {
        ATerm j_4 = t;
        if(PushChoice()==0)
          {
            t = Var_1(t, is_string_0);
            PopChoice();
          }
        else
          {
            t = j_4;
            {
              ATerm k_4 = t;
              if(PushChoice()==0)
                {
                  t = Int_1(t, is_int_0);
                  PopChoice();
                }
              else
                {
                  t = k_4;
                  {
                    ATerm l_4 = t;
                    if(PushChoice()==0)
                      {
                        t = Real_1(t, is_real_0);
                        PopChoice();
                      }
                    else
                      {
                        t = l_4;
                        {
                          ATerm m_4 = t;
                          if(PushChoice()==0)
                            {
                              t = Str_1(t, is_string_0);
                              PopChoice();
                            }
                          else
                            {
                              t = m_4;
                              {
                                ATerm n_4 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = n_4;
                                    {
                                      ATerm o_4 = t;
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
                                          t = o_4;
                                          {
                                            ATerm p_4 = t;
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
                                                t = p_4;
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
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL;
  m_7 = t;
  l_7 :
  if(match_cons(m_7, sym_Assign_2))
    {
      n_7 = ATgetArgument(m_7, 0);
      o_7 = ATgetArgument(m_7, 1);
      {
        ATerm q_4 = t;
        if(PushChoice()==0)
          {
            ATerm r_7 = NULL;
            t = not_null(n_7);
            {
              ATerm t_7 = NULL;
              t = e_0(t);
              r_7 = t;
              t = not_null(o_7);
              t = f_0(t);
              t_7 = t;
              t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(r_7), not_null(t_7));
            }
            PopChoice();
          }
        else
          {
            t = q_4;
            {
              ATerm x_7 = NULL;
              t = not_null(n_7);
              {
                ATerm z_7 = NULL;
                t = e_0(t);
                x_7 = t;
                t = not_null(o_7);
                t = f_0(t);
                z_7 = t;
                t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(x_7), not_null(z_7));
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fun_2 (ATerm t, ATerm g_28 (ATerm), ATerm h_28 (ATerm))
{
  ATerm l_8 = NULL,m_8 = NULL,o_8 = NULL;
  l_8 = t;
  k_8 :
  if(match_cons(l_8, sym_Fun_2))
    {
      m_8 = ATgetArgument(l_8, 0);
      o_8 = ATgetArgument(l_8, 1);
      {
        ATerm u_8 = NULL;
        t = not_null(m_8);
        {
          ATerm w_8 = NULL;
          t = g_28(t);
          u_8 = t;
          t = not_null(o_8);
          t = h_28(t);
          w_8 = t;
          t = (ATerm) ATmakeAppl(sym_Fun_2, not_null(u_8), not_null(w_8));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Alt_3 (ATerm t, ATerm z_27 (ATerm), ATerm a_28 (ATerm), ATerm b_28 (ATerm))
{
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL;
  g_9 = t;
  f_9 :
  if(match_cons(g_9, sym_Alt_3))
    {
      h_9 = ATgetArgument(g_9, 0);
      i_9 = ATgetArgument(g_9, 1);
      j_9 = ATgetArgument(g_9, 2);
      {
        ATerm n_9 = NULL;
        t = not_null(h_9);
        {
          ATerm p_9 = NULL;
          t = z_27(t);
          n_9 = t;
          t = not_null(i_9);
          {
            ATerm r_9 = NULL;
            t = a_28(t);
            p_9 = t;
            t = not_null(j_9);
            t = b_28(t);
            r_9 = t;
            t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(n_9), not_null(p_9), not_null(r_9));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm case_alternative_1 (ATerm t, ATerm e_53 (ATerm))
{
  ATerm r_4 = t;
  if(PushChoice()==0)
    {
      ATerm l_0 (ATerm t)
      {
        ATerm s_4 = t;
        if(PushChoice()==0)
          {
            t = Fun_2(t, is_string_0, is_int_0);
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
                        t = Int_1(t, is_int_0);
                        PopChoice();
                      }
                    else
                      {
                        t = u_4;
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
      t = Alt_3(t, l_0, m_0, e_53);
      PopChoice();
    }
  else
    {
      t = r_4;
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
ATerm Case_4 (ATerm t, ATerm s_27 (ATerm), ATerm t_27 (ATerm), ATerm u_27 (ATerm), ATerm v_27 (ATerm))
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL;
  e_10 = t;
  d_10 :
  if(match_cons(e_10, sym_Case_4))
    {
      f_10 = ATgetArgument(e_10, 0);
      g_10 = ATgetArgument(e_10, 1);
      h_10 = ATgetArgument(e_10, 2);
      i_10 = ATgetArgument(e_10, 3);
      {
        ATerm n_10 = NULL;
        t = not_null(f_10);
        {
          ATerm p_10 = NULL;
          t = s_27(t);
          n_10 = t;
          t = not_null(g_10);
          {
            ATerm x_10 = NULL;
            t = t_27(t);
            p_10 = t;
            t = not_null(h_10);
            {
              ATerm z_10 = NULL;
              t = u_27(t);
              x_10 = t;
              t = not_null(i_10);
              t = v_27(t);
              z_10 = t;
              t = (ATerm) ATmakeAppl(sym_Case_4, not_null(n_10), not_null(p_10), not_null(x_10), not_null(z_10));
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm w_31 (ATerm), ATerm x_31 (ATerm))
{
  ATerm a_12 = NULL,d_12 = NULL,e_12 = NULL;
  a_12 = t;
  z_11 :
  if(match_cons(a_12, sym_Let_2))
    {
      d_12 = ATgetArgument(a_12, 0);
      e_12 = ATgetArgument(a_12, 1);
      {
        ATerm h_12 = NULL;
        t = not_null(d_12);
        {
          ATerm o_12 = NULL;
          t = w_31(t);
          h_12 = t;
          t = not_null(e_12);
          t = x_31(t);
          o_12 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(h_12), not_null(o_12));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm b_33 (ATerm), ATerm c_33 (ATerm))
{
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL;
  z_12 = t;
  y_12 :
  if(match_cons(z_12, sym_Prim_2))
    {
      a_13 = ATgetArgument(z_12, 0);
      b_13 = ATgetArgument(z_12, 1);
      {
        ATerm f_13 = NULL;
        t = not_null(a_13);
        {
          ATerm h_13 = NULL;
          t = b_33(t);
          f_13 = t;
          t = not_null(b_13);
          t = c_33(t);
          h_13 = t;
          t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(f_13), not_null(h_13));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Where_1 (ATerm t, ATerm a_33 (ATerm))
{
  ATerm p_13 = NULL,q_13 = NULL;
  p_13 = t;
  o_13 :
  if(match_cons(p_13, sym_Where_1))
    {
      q_13 = ATgetArgument(p_13, 0);
      {
        ATerm s_13 = NULL;
        t = not_null(q_13);
        t = a_33(t);
        s_13 = t;
        t = (ATerm) ATmakeAppl(sym_Where_1, not_null(s_13));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm y_32 (ATerm), ATerm z_32 (ATerm))
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
  a_14 = t;
  z_13 :
  if(match_cons(a_14, sym_Scope_2))
    {
      b_14 = ATgetArgument(a_14, 0);
      c_14 = ATgetArgument(a_14, 1);
      {
        ATerm f_14 = NULL;
        t = not_null(b_14);
        {
          ATerm h_14 = NULL;
          t = y_32(t);
          f_14 = t;
          t = not_null(c_14);
          t = z_32(t);
          h_14 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_14), not_null(h_14));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm v_32 (ATerm))
{
  ATerm p_14 = NULL,q_14 = NULL;
  p_14 = t;
  o_14 :
  if(match_cons(p_14, sym_Build_1))
    {
      q_14 = ATgetArgument(p_14, 0);
      {
        ATerm s_14 = NULL;
        t = not_null(q_14);
        t = v_32(t);
        s_14 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(s_14));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm j_31 (ATerm), ATerm k_31 (ATerm))
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
  a_15 = t;
  z_14 :
  if(match_cons(a_15, sym_Op_2))
    {
      b_15 = ATgetArgument(a_15, 0);
      c_15 = ATgetArgument(a_15, 1);
      {
        ATerm f_15 = NULL;
        t = not_null(b_15);
        {
          ATerm h_15 = NULL;
          t = j_31(t);
          f_15 = t;
          t = not_null(c_15);
          t = k_31(t);
          h_15 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(f_15), not_null(h_15));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm As_2 (ATerm t, ATerm v_29 (ATerm), ATerm w_29 (ATerm))
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL;
  r_15 = t;
  q_15 :
  if(match_cons(r_15, sym_As_2))
    {
      s_15 = ATgetArgument(r_15, 0);
      t_15 = ATgetArgument(r_15, 1);
      {
        ATerm w_15 = NULL;
        t = not_null(s_15);
        {
          ATerm y_15 = NULL;
          t = v_29(t);
          w_15 = t;
          t = not_null(t_15);
          t = w_29(t);
          y_15 = t;
          t = (ATerm) ATmakeAppl(sym_As_2, not_null(w_15), not_null(y_15));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm x_29 (ATerm))
{
  ATerm g_16 = NULL,h_16 = NULL;
  g_16 = t;
  f_16 :
  if(match_cons(g_16, sym_BuildDefault_1))
    {
      h_16 = ATgetArgument(g_16, 0);
      {
        ATerm j_16 = NULL;
        t = not_null(h_16);
        t = x_29(t);
        j_16 = t;
        t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(j_16));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm d_0 (ATerm))
{
  ATerm s_16 = NULL,t_16 = NULL;
  s_16 = t;
  r_16 :
  if(match_cons(s_16, sym_Str_1))
    {
      t_16 = ATgetArgument(s_16, 0);
      {
        ATerm v_4 = t;
        if(PushChoice()==0)
          {
            ATerm v_16 = NULL;
            t = not_null(t_16);
            t = d_0(t);
            v_16 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(v_16));
            PopChoice();
          }
        else
          {
            t = v_4;
            {
              ATerm y_16 = NULL;
              t = not_null(t_16);
              t = d_0(t);
              y_16 = t;
              t = (ATerm) ATmakeAppl(sym_Str_1, not_null(y_16));
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
  ATerm f_17 = NULL;
  f_17 = t;
  t = SSL_is_real(not_null(f_17));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm c_0 (ATerm))
{
  ATerm n_17 = NULL,o_17 = NULL;
  n_17 = t;
  m_17 :
  if(match_cons(n_17, sym_Real_1))
    {
      o_17 = ATgetArgument(n_17, 0);
      {
        ATerm w_4 = t;
        if(PushChoice()==0)
          {
            ATerm q_17 = NULL;
            t = not_null(o_17);
            t = c_0(t);
            q_17 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, not_null(q_17));
            PopChoice();
          }
        else
          {
            t = w_4;
            {
              ATerm t_17 = NULL;
              t = not_null(o_17);
              t = c_0(t);
              t_17 = t;
              t = (ATerm) ATmakeAppl(sym_Real_1, not_null(t_17));
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
  ATerm e_18 = NULL,f_18 = NULL;
  e_18 = t;
  d_18 :
  if(match_cons(e_18, sym_Int_1))
    {
      f_18 = ATgetArgument(e_18, 0);
      {
        ATerm x_4 = t;
        if(PushChoice()==0)
          {
            ATerm h_18 = NULL;
            t = not_null(f_18);
            t = b_0(t);
            h_18 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, not_null(h_18));
            PopChoice();
          }
        else
          {
            t = x_4;
            {
              ATerm k_18 = NULL;
              t = not_null(f_18);
              t = b_0(t);
              k_18 = t;
              t = (ATerm) ATmakeAppl(sym_Int_1, not_null(k_18));
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
  ATerm r_18 = NULL;
  r_18 = t;
  q_18 :
  if(!(match_cons(r_18, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm match_term_exp_0 (ATerm t)
{
  ATerm y_4 = t;
  if(PushChoice()==0)
    {
      ATerm t_18 = NULL;
      t_18 = t;
      s_18 :
      if(!(match_cons(t_18, sym_Wld_0)))
        _fail(t);
      PopChoice();
    }
  else
    {
      t = y_4;
      {
        ATerm z_4 = t;
        if(PushChoice()==0)
          {
            t = Var_1(t, is_string_0);
            PopChoice();
          }
        else
          {
            t = z_4;
            {
              ATerm a_5 = t;
              if(PushChoice()==0)
                {
                  t = Int_1(t, is_int_0);
                  PopChoice();
                }
              else
                {
                  t = a_5;
                  {
                    ATerm b_5 = t;
                    if(PushChoice()==0)
                      {
                        t = Real_1(t, is_real_0);
                        PopChoice();
                      }
                    else
                      {
                        t = b_5;
                        {
                          ATerm c_5 = t;
                          if(PushChoice()==0)
                            {
                              t = Str_1(t, is_string_0);
                              PopChoice();
                            }
                          else
                            {
                              t = c_5;
                              {
                                ATerm d_5 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BuildDefault_1(t, match_term_exp_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = d_5;
                                    {
                                      ATerm e_5 = t;
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
                                          t = e_5;
                                          {
                                            ATerm f_5 = t;
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
                                                t = f_5;
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
ATerm Match_1 (ATerm t, ATerm u_32 (ATerm))
{
  ATerm y_18 = NULL,z_18 = NULL;
  y_18 = t;
  x_18 :
  if(match_cons(y_18, sym_Match_1))
    {
      z_18 = ATgetArgument(y_18, 0);
      {
        ATerm b_19 = NULL;
        t = not_null(z_18);
        t = u_32(t);
        b_19 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(b_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm r_32 (ATerm))
{
  ATerm i_19 = NULL,j_19 = NULL;
  i_19 = t;
  h_19 :
  if(match_cons(i_19, sym_Thread_1))
    {
      j_19 = ATgetArgument(i_19, 0);
      {
        ATerm l_19 = NULL;
        t = not_null(j_19);
        t = r_32(t);
        l_19 = t;
        t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(l_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm All_1 (ATerm t, ATerm q_32 (ATerm))
{
  ATerm t_19 = NULL,u_19 = NULL;
  t_19 = t;
  s_19 :
  if(match_cons(t_19, sym_All_1))
    {
      u_19 = ATgetArgument(t_19, 0);
      {
        ATerm w_19 = NULL;
        t = not_null(u_19);
        t = q_32(t);
        w_19 = t;
        t = (ATerm) ATmakeAppl(sym_All_1, not_null(w_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Some_1 (ATerm t, ATerm a_0 (ATerm))
{
  ATerm f_20 = NULL,g_20 = NULL;
  f_20 = t;
  e_20 :
  if(match_cons(f_20, sym_Some_1))
    {
      g_20 = ATgetArgument(f_20, 0);
      {
        ATerm g_5 = t;
        if(PushChoice()==0)
          {
            ATerm i_20 = NULL;
            t = not_null(g_20);
            t = a_0(t);
            i_20 = t;
            t = (ATerm) ATmakeAppl(sym_Some_1, not_null(i_20));
            PopChoice();
          }
        else
          {
            t = g_5;
            {
              ATerm l_20 = NULL;
              t = not_null(g_20);
              t = a_0(t);
              l_20 = t;
              t = (ATerm) ATmakeAppl(sym_Some_1, not_null(l_20));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm One_1 (ATerm t, ATerm o_32 (ATerm))
{
  ATerm u_20 = NULL,v_20 = NULL;
  u_20 = t;
  t_20 :
  if(match_cons(u_20, sym_One_1))
    {
      v_20 = ATgetArgument(u_20, 0);
      {
        ATerm x_20 = NULL;
        t = not_null(v_20);
        t = o_32(t);
        x_20 = t;
        t = (ATerm) ATmakeAppl(sym_One_1, not_null(x_20));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm m_32 (ATerm), ATerm n_32 (ATerm))
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
  f_21 = t;
  e_21 :
  if(match_cons(f_21, sym_Cong_2))
    {
      g_21 = ATgetArgument(f_21, 0);
      h_21 = ATgetArgument(f_21, 1);
      {
        ATerm k_21 = NULL;
        t = not_null(g_21);
        {
          ATerm m_21 = NULL;
          t = m_32(t);
          k_21 = t;
          t = not_null(h_21);
          t = n_32(t);
          m_21 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(k_21), not_null(m_21));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm s_21 = NULL;
  s_21 = t;
  t = SSL_is_int(not_null(s_21));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm k_32 (ATerm), ATerm l_32 (ATerm))
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
  z_21 = t;
  y_21 :
  if(match_cons(z_21, sym_Path_2))
    {
      a_22 = ATgetArgument(z_21, 0);
      b_22 = ATgetArgument(z_21, 1);
      {
        ATerm e_22 = NULL;
        t = not_null(a_22);
        {
          ATerm g_22 = NULL;
          t = k_32(t);
          e_22 = t;
          t = not_null(b_22);
          t = l_32(t);
          g_22 = t;
          t = (ATerm) ATmakeAppl(sym_Path_2, not_null(e_22), not_null(g_22));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm u_31 (ATerm), ATerm v_31 (ATerm))
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
  p_22 = t;
  o_22 :
  if(match_cons(p_22, sym_Rec_2))
    {
      q_22 = ATgetArgument(p_22, 0);
      r_22 = ATgetArgument(p_22, 1);
      {
        ATerm u_22 = NULL;
        t = not_null(q_22);
        {
          ATerm w_22 = NULL;
          t = u_31(t);
          u_22 = t;
          t = not_null(r_22);
          t = v_31(t);
          w_22 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(u_22), not_null(w_22));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm t_31 (ATerm))
{
  ATerm e_23 = NULL,f_23 = NULL;
  e_23 = t;
  d_23 :
  if(match_cons(e_23, sym_SVar_1))
    {
      f_23 = ATgetArgument(e_23, 0);
      {
        ATerm h_23 = NULL;
        t = not_null(f_23);
        t = t_31(t);
        h_23 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(h_23));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm i_32 (ATerm), ATerm j_32 (ATerm))
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
  p_23 = t;
  o_23 :
  if(match_cons(p_23, sym_Call_2))
    {
      q_23 = ATgetArgument(p_23, 0);
      r_23 = ATgetArgument(p_23, 1);
      {
        ATerm u_23 = NULL;
        t = not_null(q_23);
        {
          ATerm w_23 = NULL;
          t = i_32(t);
          u_23 = t;
          t = not_null(r_23);
          t = j_32(t);
          w_23 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(u_23), not_null(w_23));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm r_31 (ATerm), ATerm s_31 (ATerm))
{
  ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL;
  f_24 = t;
  e_24 :
  if(match_cons(f_24, sym_LChoice_2))
    {
      g_24 = ATgetArgument(f_24, 0);
      h_24 = ATgetArgument(f_24, 1);
      {
        ATerm k_24 = NULL;
        t = not_null(g_24);
        {
          ATerm m_24 = NULL;
          t = r_31(t);
          k_24 = t;
          t = not_null(h_24);
          t = s_31(t);
          m_24 = t;
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(k_24), not_null(m_24));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm p_31 (ATerm), ATerm q_31 (ATerm))
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL;
  v_24 = t;
  u_24 :
  if(match_cons(v_24, sym_Choice_2))
    {
      w_24 = ATgetArgument(v_24, 0);
      x_24 = ATgetArgument(v_24, 1);
      {
        ATerm a_25 = NULL;
        t = not_null(w_24);
        {
          ATerm c_25 = NULL;
          t = p_31(t);
          a_25 = t;
          t = not_null(x_24);
          t = q_31(t);
          c_25 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(a_25), not_null(c_25));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm n_31 (ATerm), ATerm o_31 (ATerm))
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  l_25 = t;
  k_25 :
  if(match_cons(l_25, sym_Seq_2))
    {
      m_25 = ATgetArgument(l_25, 0);
      n_25 = ATgetArgument(l_25, 1);
      {
        ATerm q_25 = NULL;
        t = not_null(m_25);
        {
          ATerm s_25 = NULL;
          t = n_31(t);
          q_25 = t;
          t = not_null(n_25);
          t = o_31(t);
          s_25 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_25), not_null(s_25));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Test_1 (ATerm t, ATerm l_31 (ATerm))
{
  ATerm a_26 = NULL,b_26 = NULL;
  a_26 = t;
  z_25 :
  if(match_cons(a_26, sym_Test_1))
    {
      b_26 = ATgetArgument(a_26, 0);
      {
        ATerm d_26 = NULL;
        t = not_null(b_26);
        t = l_31(t);
        d_26 = t;
        t = (ATerm) ATmakeAppl(sym_Test_1, not_null(d_26));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Not_1 (ATerm t, ATerm m_31 (ATerm))
{
  ATerm k_26 = NULL,l_26 = NULL;
  k_26 = t;
  j_26 :
  if(match_cons(k_26, sym_Not_1))
    {
      l_26 = ATgetArgument(k_26, 0);
      {
        ATerm n_26 = NULL;
        t = not_null(l_26);
        t = m_31(t);
        n_26 = t;
        t = (ATerm) ATmakeAppl(sym_Not_1, not_null(n_26));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm s_26 = NULL;
  s_26 = t;
  r_26 :
  if(!(match_cons(s_26, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm u_26 = NULL;
  u_26 = t;
  t_26 :
  if(!(match_cons(u_26, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm h_5 = t;
  if(PushChoice()==0)
    {
      ATerm x_26 = NULL;
      x_26 = t;
      v_26 :
      if(!(match_cons(x_26, sym_Id_0)))
        {
          if(!(match_cons(x_26, sym_Fail_0)))
            _fail(t);
        }
      PopChoice();
    }
  else
    {
      t = h_5;
      {
        ATerm i_5 = t;
        if(PushChoice()==0)
          {
            t = Not_1(t, strategy_expression_0);
            PopChoice();
          }
        else
          {
            t = i_5;
            {
              ATerm j_5 = t;
              if(PushChoice()==0)
                {
                  t = Test_1(t, strategy_expression_0);
                  PopChoice();
                }
              else
                {
                  t = j_5;
                  {
                    ATerm k_5 = t;
                    if(PushChoice()==0)
                      {
                        t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                        PopChoice();
                      }
                    else
                      {
                        t = k_5;
                        {
                          ATerm l_5 = t;
                          if(PushChoice()==0)
                            {
                              t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                              PopChoice();
                            }
                          else
                            {
                              t = l_5;
                              {
                                ATerm m_5 = t;
                                if(PushChoice()==0)
                                  {
                                    t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = m_5;
                                    {
                                      ATerm n_5 = t;
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
                                              ATerm w_0 (ATerm t)
                                              {
                                                ATerm y_26 = NULL;
                                                y_26 = t;
                                                w_26 :
                                                if(!(match_cons(y_26, sym_Nil_0)))
                                                  _fail(t);
                                                return(t);
                                              }
                                              t = Call_2(t, v_0, w_0);
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
                                          t = n_5;
                                          {
                                            ATerm o_5 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = Rec_2(t, is_string_0, strategy_expression_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = o_5;
                                                {
                                                  ATerm p_5 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = Path_2(t, is_int_0, strategy_expression_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = p_5;
                                                      {
                                                        ATerm q_5 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm x_0 (ATerm t)
                                                            {
                                                              t = list_1(t, strategy_expression_0);
                                                              return(t);
                                                            }
                                                            t = Cong_2(t, is_string_0, x_0);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = q_5;
                                                            {
                                                              ATerm r_5 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = One_1(t, strategy_expression_0);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = r_5;
                                                                  {
                                                                    ATerm t_5 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = Some_1(t, strategy_expression_0);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_5;
                                                                        {
                                                                          ATerm v_5 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = All_1(t, strategy_expression_0);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = v_5;
                                                                              {
                                                                                ATerm w_5 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    t = Thread_1(t, strategy_expression_0);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_5;
                                                                                    {
                                                                                      ATerm x_5 = t;
                                                                                      if(PushChoice()==0)
                                                                                        {
                                                                                          t = Match_1(t, match_term_exp_0);
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = x_5;
                                                                                          {
                                                                                            ATerm y_5 = t;
                                                                                            if(PushChoice()==0)
                                                                                              {
                                                                                                t = Build_1(t, term_expression_0);
                                                                                                PopChoice();
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = y_5;
                                                                                                {
                                                                                                  ATerm z_5 = t;
                                                                                                  if(PushChoice()==0)
                                                                                                    {
                                                                                                      ATerm y_0 (ATerm t)
                                                                                                      {
                                                                                                        t = list_1(t, is_string_0);
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Scope_2(t, y_0, strategy_expression_0);
                                                                                                      PopChoice();
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = z_5;
                                                                                                      {
                                                                                                        ATerm d_6 = t;
                                                                                                        if(PushChoice()==0)
                                                                                                          {
                                                                                                            t = Where_1(t, strategy_expression_0);
                                                                                                            PopChoice();
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = d_6;
                                                                                                            {
                                                                                                              ATerm f_6 = t;
                                                                                                              if(PushChoice()==0)
                                                                                                                {
                                                                                                                  ATerm z_0 (ATerm t)
                                                                                                                  {
                                                                                                                    t = list_1(t, term_expression_0);
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Prim_2(t, is_string_0, z_0);
                                                                                                                  PopChoice();
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = f_6;
                                                                                                                  {
                                                                                                                    ATerm g_6 = t;
                                                                                                                    if(PushChoice()==0)
                                                                                                                      {
                                                                                                                        ATerm a_1 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm b_1 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm c_1 (ATerm t)
                                                                                                                            {
                                                                                                                              ATerm d_1 (ATerm t)
                                                                                                                              {
                                                                                                                                t = VarDec_2(t, is_string_0, _id);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = list_1(t, d_1);
                                                                                                                              return(t);
                                                                                                                            }
                                                                                                                            t = SDef_3(t, is_string_0, c_1, strategy_expression_0);
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          t = list_1(t, b_1);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Let_2(t, a_1, strategy_expression_0);
                                                                                                                        PopChoice();
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = g_6;
                                                                                                                        {
                                                                                                                          ATerm h_6 = t;
                                                                                                                          if(PushChoice()==0)
                                                                                                                            {
                                                                                                                              ATerm e_1 (ATerm t)
                                                                                                                              {
                                                                                                                                t = Var_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm f_1 (ATerm t)
                                                                                                                              {
                                                                                                                                ATerm g_1 (ATerm t)
                                                                                                                                {
                                                                                                                                  t = case_alternative_1(t, strategy_expression_0);
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = list_1(t, g_1);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Case_4(t, is_string_0, e_1, f_1, strategy_expression_0);
                                                                                                                              PopChoice();
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = h_6;
                                                                                                                              {
                                                                                                                                ATerm i_6 = t;
                                                                                                                                if(PushChoice()==0)
                                                                                                                                  {
                                                                                                                                    ATerm h_1 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = Var_1(t, is_string_0);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = Assign_2(t, h_1, term_expression_0);
                                                                                                                                    PopChoice();
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = i_6;
                                                                                                                                    {
                                                                                                                                      ATerm j_6 = t;
                                                                                                                                      if(PushChoice()==0)
                                                                                                                                        {
                                                                                                                                          ATerm i_1 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = Var_1(t, is_string_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Assign_1(t, i_1);
                                                                                                                                          PopChoice();
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = j_6;
                                                                                                                                          {
                                                                                                                                            ATerm n_6 = t;
                                                                                                                                            if(PushChoice()==0)
                                                                                                                                              {
                                                                                                                                                t = Continue_1(t, is_string_0);
                                                                                                                                                PopChoice();
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = n_6;
                                                                                                                                                {
                                                                                                                                                  ATerm j_1 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = debug_1(t, j_1);
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm b_27 = NULL;
  b_27 = t;
  t = SSL_is_string(not_null(b_27));
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm b_32 (ATerm), ATerm c_32 (ATerm))
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
  i_27 = t;
  h_27 :
  if(match_cons(i_27, sym_VarDec_2))
    {
      j_27 = ATgetArgument(i_27, 0);
      k_27 = ATgetArgument(i_27, 1);
      {
        ATerm n_27 = NULL;
        t = not_null(j_27);
        {
          ATerm p_27 = NULL;
          t = b_32(t);
          n_27 = t;
          t = not_null(k_27);
          t = c_32(t);
          p_27 = t;
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(n_27), not_null(p_27));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm y_31 (ATerm), ATerm z_31 (ATerm), ATerm a_32 (ATerm))
{
  ATerm k_28 = NULL,l_28 = NULL,n_28 = NULL,o_28 = NULL;
  k_28 = t;
  j_28 :
  if(match_cons(k_28, sym_SDef_3))
    {
      l_28 = ATgetArgument(k_28, 0);
      n_28 = ATgetArgument(k_28, 1);
      o_28 = ATgetArgument(k_28, 2);
      {
        ATerm s_28 = NULL;
        t = not_null(l_28);
        {
          ATerm u_28 = NULL;
          t = y_31(t);
          s_28 = t;
          t = not_null(n_28);
          {
            ATerm w_28 = NULL;
            t = z_31(t);
            u_28 = t;
            t = not_null(o_28);
            t = a_32(t);
            w_28 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(s_28), not_null(u_28), not_null(w_28));
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
  ATerm p_6 = t;
  if(PushChoice()==0)
    {
      ATerm k_1 (ATerm t)
      {
        ATerm l_1 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, l_1);
        return(t);
      }
      t = SDef_3(t, is_string_0, k_1, strategy_expression_0);
      PopChoice();
    }
  else
    {
      t = p_6;
      {
        ATerm m_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, m_1);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm g_46 (ATerm))
{
  ATerm e_29 (ATerm t)
  {
    ATerm q_6 = t;
    if(PushChoice()==0)
      {
        ATerm d_29 = NULL;
        d_29 = t;
        c_29 :
        if(!(match_cons(d_29, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = q_6;
        t = Cons_2(t, g_46, e_29);
      }
    return(t);
  }
  t = e_29(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm t_30 (ATerm))
{
  ATerm i_29 = NULL,j_29 = NULL;
  i_29 = t;
  h_29 :
  if(match_cons(i_29, sym_Strategies_1))
    {
      j_29 = ATgetArgument(i_29, 0);
      {
        ATerm l_29 = NULL;
        t = not_null(j_29);
        t = t_30(t);
        l_29 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(l_29));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm v_30 (ATerm))
{
  ATerm s_29 = NULL,t_29 = NULL;
  s_29 = t;
  r_29 :
  if(match_cons(s_29, sym_Specification_1))
    {
      t_29 = ATgetArgument(s_29, 0);
      {
        ATerm y_29 = NULL;
        t = not_null(t_29);
        t = v_30(t);
        y_29 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(y_29));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm r_6 = t;
  if(PushChoice()==0)
    {
      ATerm n_1 (ATerm t)
      {
        ATerm o_1 (ATerm t)
        {
          ATerm p_1 (ATerm t)
          {
            ATerm r_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, r_1);
            return(t);
          }
          ATerm q_1 (ATerm t)
          {
            ATerm d_30 = NULL;
            d_30 = t;
            c_30 :
            if(!(match_cons(d_30, sym_Nil_0)))
              _fail(t);
            return(t);
          }
          t = Cons_2(t, p_1, q_1);
          return(t);
        }
        t = Cons_2(t, _id, o_1);
        return(t);
      }
      t = Specification_1(t, n_1);
      PopChoice();
    }
  else
    {
      t = r_6;
      {
        ATerm s_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, s_1);
      }
    }
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm f_30 = NULL;
  f_30 = t;
  e_30 :
  if(!(match_cons(f_30, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm f_33 (ATerm), ATerm g_33 (ATerm))
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
  k_30 = t;
  j_30 :
  if(match_cons(k_30, sym_TCons_2))
    {
      l_30 = ATgetArgument(k_30, 0);
      m_30 = ATgetArgument(k_30, 1);
      {
        ATerm p_30 = NULL;
        t = not_null(l_30);
        {
          ATerm r_30 = NULL;
          t = f_33(t);
          p_30 = t;
          t = not_null(m_30);
          t = g_33(t);
          r_30 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_30), not_null(r_30));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm a_31 = NULL;
  ATerm s_6;
  s_6 = t;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm b_31 = NULL,c_31 = NULL;
      b_31 = t;
      z_30 :
      if(match_cons(b_31, sym_Program_1))
        {
          c_31 = ATgetArgument(b_31, 0);
          if(a_31 != NULL && a_31 != c_31)
            _fail(c_31);
          else
            a_31 = c_31;
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1(t, t_1);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_31), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = s_6;
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
  ATerm g_31 = NULL;
  g_31 = t;
  t = SSL_exit(not_null(g_31));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm h_32 = NULL,p_32 = NULL,s_32 = NULL,t_32 = NULL,w_32 = NULL;
  h_32 = t;
  e_32 :
  if(match_cons(h_32, sym_TCons_2))
    {
      p_32 = ATgetArgument(h_32, 0);
      s_32 = ATgetArgument(h_32, 1);
      f_32 :
      if(match_cons(s_32, sym_TCons_2))
        {
          t_32 = ATgetArgument(s_32, 0);
          w_32 = ATgetArgument(s_32, 1);
          g_32 :
          if(match_cons(w_32, sym_TNil_0))
            {
              ATerm t_6;
              t_6 = t;
              t = SSL_printnl(not_null(p_32), not_null(t_32));
              t = t_6;
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
ATerm try_1 (ATerm t, ATerm s_52 (ATerm))
{
  ATerm x_6 = t;
  if(PushChoice()==0)
    {
      t = s_52(t);
      PopChoice();
    }
  else
    t = x_6;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL;
  ATerm z_6 = t;
  if(PushChoice()==0)
    {
      ATerm u_1 (ATerm t)
      {
        ATerm a_7 = t;
        if(PushChoice()==0)
          {
            ATerm w_1 (ATerm t)
            {
              ATerm t_33 = NULL;
              t_33 = t;
              h_33 :
              if(!(match_cons(t_33, sym_Silent_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, w_1);
            PopChoice();
            _fail(t);
          }
        else
          t = a_7;
        return(t);
      }
      ATerm v_1 (ATerm t)
      {
        ATerm x_1 (ATerm t)
        {
          ATerm u_33 = NULL;
          u_33 = t;
          i_33 :
          if(!(match_cons(u_33, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, x_1);
        return(t);
      }
      t = TCons_2(t, u_1, v_1);
      {
        ATerm y_1 (ATerm t)
        {
          ATerm a_2 (ATerm t)
          {
            ATerm v_33 = NULL,w_33 = NULL;
            v_33 = t;
            m_33 :
            if(match_cons(v_33, sym_Runtime_1))
              {
                w_33 = ATgetArgument(v_33, 0);
                if(s_33 != NULL && s_33 != w_33)
                  _fail(w_33);
                else
                  s_33 = w_33;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, a_2);
          return(t);
        }
        ATerm z_1 (ATerm t)
        {
          ATerm b_2 (ATerm t)
          {
            ATerm x_33 = NULL;
            x_33 = t;
            n_33 :
            if(!(match_cons(x_33, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, b_2);
          return(t);
        }
        t = TCons_2(t, y_1, z_1);
        {
          ATerm c_2 (ATerm t)
          {
            ATerm e_2 (ATerm t)
            {
              ATerm y_33 = NULL,z_33 = NULL;
              y_33 = t;
              p_33 :
              if(match_cons(y_33, sym_Program_1))
                {
                  z_33 = ATgetArgument(y_33, 0);
                  if(r_33 != NULL && r_33 != z_33)
                    _fail(z_33);
                  else
                    r_33 = z_33;
                }
              else
                _fail(t);
              return(t);
            }
            t = fetch_1(t, e_2);
            return(t);
          }
          ATerm d_2 (ATerm t)
          {
            ATerm f_2 (ATerm t)
            {
              ATerm a_34 = NULL;
              a_34 = t;
              q_33 :
              if(!(match_cons(a_34, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, _id, f_2);
            return(t);
          }
          t = TCons_2(t, c_2, d_2);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_33), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_33), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      PopChoice();
    }
  else
    t = z_6;
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL;
  h_34 = t;
  e_34 :
  if(match_cons(h_34, sym_TCons_2))
    {
      i_34 = ATgetArgument(h_34, 0);
      j_34 = ATgetArgument(h_34, 1);
      f_34 :
      if(match_cons(j_34, sym_TCons_2))
        {
          k_34 = ATgetArgument(j_34, 0);
          l_34 = ATgetArgument(j_34, 1);
          g_34 :
          if(match_cons(l_34, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(i_34), not_null(k_34));
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
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL;
  t_34 = t;
  q_34 :
  if(match_cons(t_34, sym_TCons_2))
    {
      u_34 = ATgetArgument(t_34, 0);
      v_34 = ATgetArgument(t_34, 1);
      r_34 :
      if(match_cons(v_34, sym_TCons_2))
        {
          w_34 = ATgetArgument(v_34, 0);
          x_34 = ATgetArgument(v_34, 1);
          s_34 :
          if(match_cons(x_34, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(u_34), not_null(w_34));
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
  ATerm j_35 = NULL;
  ATerm b_7;
  b_7 = t;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm e_7 = t;
      if(PushChoice()==0)
        {
          ATerm i_2 (ATerm t)
          {
            ATerm k_35 = NULL,l_35 = NULL;
            k_35 = t;
            c_35 :
            if(match_cons(k_35, sym_Output_1))
              {
                l_35 = ATgetArgument(k_35, 0);
                if(j_35 != NULL && j_35 != l_35)
                  _fail(l_35);
                else
                  j_35 = l_35;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, i_2);
          PopChoice();
        }
      else
        {
          t = e_7;
          {
            ATerm m_35 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            m_35 = t;
            if(j_35 != NULL && j_35 != m_35)
              _fail(m_35);
            else
              j_35 = m_35;
          }
        }
      return(t);
    }
    ATerm h_2 (ATerm t)
    {
      ATerm j_2 (ATerm t)
      {
        ATerm n_35 = NULL;
        n_35 = t;
        e_35 :
        if(!(match_cons(n_35, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, _id, j_2);
      return(t);
    }
    t = TCons_2(t, g_2, h_2);
  }
  t = b_7;
  {
    ATerm k_2 (ATerm t)
    {
      ATerm l_2 (ATerm t)
      {
        ATerm n_2 (ATerm t)
        {
          t = not_null(j_35);
          return(t);
        }
        t = split_2(t, n_2, _id);
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        ATerm o_35 = NULL;
        o_35 = t;
        f_35 :
        if(!(match_cons(o_35, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, l_2, m_2);
      return(t);
    }
    t = TCons_2(t, _id, k_2);
    {
      ATerm f_7 = t;
      if(PushChoice()==0)
        {
          ATerm o_2 (ATerm t)
          {
            ATerm q_2 (ATerm t)
            {
              ATerm p_35 = NULL;
              p_35 = t;
              g_35 :
              if(!(match_cons(p_35, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, q_2);
            return(t);
          }
          ATerm p_2 (ATerm t)
          {
            ATerm r_2 (ATerm t)
            {
              ATerm q_35 = NULL;
              q_35 = t;
              h_35 :
              if(!(match_cons(q_35, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, WriteToBinaryFile_0, r_2);
            return(t);
          }
          t = TCons_2(t, o_2, p_2);
          PopChoice();
        }
      else
        {
          t = f_7;
          {
            ATerm s_2 (ATerm t)
            {
              ATerm t_2 (ATerm t)
              {
                ATerm r_35 = NULL;
                r_35 = t;
                i_35 :
                if(!(match_cons(r_35, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, WriteToTextFile_0, t_2);
              return(t);
            }
            t = TCons_2(t, _id, s_2);
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
ATerm apply_strategy_1 (ATerm t, ATerm u_37 (ATerm))
{
  ATerm z_35 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL;
  ATerm g_7;
  g_7 = t;
  t = dtime_0(t);
  t = g_7;
  t = u_37(t);
  {
    ATerm h_7;
    h_7 = t;
    {
      ATerm a_36 = NULL;
      t = dtime_0(t);
      a_36 = t;
      if(z_35 != NULL && z_35 != a_36)
        _fail(a_36);
      else
        z_35 = a_36;
    }
    t = h_7;
    b_36 = t;
    w_35 :
    if(match_cons(b_36, sym_TCons_2))
      {
        c_36 = ATgetArgument(b_36, 0);
        d_36 = ATgetArgument(b_36, 1);
        x_35 :
        if(match_cons(d_36, sym_TCons_2))
          {
            e_36 = ATgetArgument(d_36, 0);
            f_36 = ATgetArgument(d_36, 1);
            y_35 :
            if(match_cons(f_36, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(z_35)), not_null(c_36)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_36), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm l_36 = NULL;
  l_36 = t;
  t = SSL_ReadFromFile(not_null(l_36));
  return(t);
}
ATerm split_2 (ATerm t, ATerm u_39 (ATerm), ATerm v_39 (ATerm))
{
  ATerm x_36 = NULL;
  ATerm b_37 = NULL;
  x_36 = t;
  {
    ATerm f_37 = NULL;
    t = u_39(t);
    b_37 = t;
    t = not_null(x_36);
    t = v_39(t);
    f_37 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_37), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_37), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm q_37 = NULL;
  ATerm i_7;
  i_7 = t;
  {
    ATerm j_7 = t;
    if(PushChoice()==0)
      {
        ATerm u_2 (ATerm t)
        {
          ATerm r_37 = NULL,s_37 = NULL;
          r_37 = t;
          o_37 :
          if(match_cons(r_37, sym_Input_1))
            {
              s_37 = ATgetArgument(r_37, 0);
              if(q_37 != NULL && q_37 != s_37)
                _fail(s_37);
              else
                q_37 = s_37;
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1(t, u_2);
        PopChoice();
      }
    else
      {
        t = j_7;
        {
          ATerm v_37 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          v_37 = t;
          if(q_37 != NULL && q_37 != v_37)
            _fail(v_37);
          else
            q_37 = v_37;
        }
      }
  }
  t = i_7;
  {
    ATerm v_2 (ATerm t)
    {
      t = not_null(q_37);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, v_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm z_37 = NULL;
  z_37 = t;
  y_37 :
  if(!(match_cons(z_37, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm m_28 (ATerm))
{
  ATerm e_38 = NULL,f_38 = NULL;
  e_38 = t;
  c_38 :
  if(match_cons(e_38, sym_Undefined_1))
    {
      f_38 = ATgetArgument(e_38, 0);
      {
        ATerm h_38 = NULL;
        t = not_null(f_38);
        t = m_28(t);
        h_38 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_38));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_38 = NULL;
  m_38 = t;
  l_38 :
  if(!(match_cons(m_38, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm n_46 (ATerm))
{
  ATerm n_38 (ATerm t)
  {
    ATerm k_7 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, n_46, _id);
        PopChoice();
      }
    else
      {
        t = k_7;
        t = Cons_2(t, _id, n_38);
      }
    return(t);
  }
  t = n_38(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm y_36 (ATerm))
{
  t = fetch_1(t, y_36);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_37 (ATerm))
{
  ATerm w_2 (ATerm t)
  {
    ATerm p_7 = t;
    if(PushChoice()==0)
      {
        ATerm q_38 = NULL;
        q_38 = t;
        o_38 :
        if(!(match_cons(q_38, sym_Help_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = p_7;
        {
          ATerm q_7 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = q_7;
              {
                ATerm r_38 = NULL;
                r_38 = t;
                p_38 :
                if(!(match_cons(r_38, sym_Version_0)))
                  _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, w_2);
  t = t_37(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
  ATerm s_7;
  s_7 = t;
  {
    ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
    a_39 = t;
    t_38 :
    if(match_cons(a_39, sym_TCons_2))
      {
        b_39 = ATgetArgument(a_39, 0);
        c_39 = ATgetArgument(a_39, 1);
        u_38 :
        if(match_cons(c_39, sym_TCons_2))
          {
            d_39 = ATgetArgument(c_39, 0);
            e_39 = ATgetArgument(c_39, 1);
            v_38 :
            if(match_cons(e_39, sym_TCons_2))
              {
                f_39 = ATgetArgument(e_39, 0);
                g_39 = ATgetArgument(e_39, 1);
                w_38 :
                if(match_cons(g_39, sym_TNil_0))
                  {
                    if(x_38 != NULL && x_38 != b_39)
                      _fail(b_39);
                    else
                      x_38 = b_39;
                    if(y_38 != NULL && y_38 != d_39)
                      _fail(d_39);
                    else
                      y_38 = d_39;
                    if(z_38 != NULL && z_38 != f_39)
                      _fail(f_39);
                    else
                      z_38 = f_39;
                    t = SSL_table_put(not_null(x_38), not_null(y_38), not_null(z_38));
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
ATerm table_create_0 (ATerm t)
{
  ATerm j_39 = NULL;
  j_39 = t;
  t = SSL_table_create(not_null(j_39));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm n_39 = NULL;
  n_39 = t;
  {
    ATerm u_7;
    u_7 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_39), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = u_7;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm r_36 (ATerm), ATerm s_36 (ATerm))
{
  ATerm t_39 = NULL,w_39 = NULL,x_39 = NULL;
  t_39 = t;
  s_39 :
  if(match_cons(t_39, sym_Cons_2))
    {
      w_39 = ATgetArgument(t_39, 0);
      x_39 = ATgetArgument(t_39, 1);
      {
        ATerm a_40 = NULL;
        t = not_null(w_39);
        t = r_36(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = s_36(t);
        a_40 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_40), not_null(x_39));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm t_36 (ATerm), ATerm u_36 (ATerm))
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL;
  i_40 = t;
  g_40 :
  if(match_cons(i_40, sym_Cons_2))
    {
      j_40 = ATgetArgument(i_40, 0);
      k_40 = ATgetArgument(i_40, 1);
      h_40 :
      if(match_cons(k_40, sym_Cons_2))
        {
          l_40 = ATgetArgument(k_40, 0);
          m_40 = ATgetArgument(k_40, 1);
          {
            ATerm q_40 = NULL;
            t = not_null(j_40);
            t = t_36(t);
            t = not_null(l_40);
            t = u_36(t);
            q_40 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_40), not_null(m_40));
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
  ATerm v_7 = t;
  if(PushChoice()==0)
    {
      ATerm x_2 (ATerm t)
      {
        ATerm o_41 = NULL;
        o_41 = t;
        u_40 :
        if(!(match_string(o_41, "-S")))
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
      t = v_7;
      {
        ATerm w_7 = t;
        if(PushChoice()==0)
          {
            ATerm z_2 (ATerm t)
            {
              ATerm p_41 = NULL;
              p_41 = t;
              v_40 :
              if(!(match_string(p_41, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm a_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, z_2, a_3);
            PopChoice();
          }
        else
          {
            t = w_7;
            {
              ATerm y_7 = t;
              if(PushChoice()==0)
                {
                  ATerm b_3 (ATerm t)
                  {
                    ATerm q_41 = NULL;
                    q_41 = t;
                    w_40 :
                    if(!(match_string(q_41, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm c_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, b_3, c_3);
                  PopChoice();
                }
              else
                {
                  t = y_7;
                  {
                    ATerm a_8 = t;
                    if(PushChoice()==0)
                      {
                        ATerm d_3 (ATerm t)
                        {
                          ATerm r_41 = NULL;
                          r_41 = t;
                          x_40 :
                          if(!(match_string(r_41, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm e_3 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, d_3, e_3);
                        PopChoice();
                      }
                    else
                      {
                        t = a_8;
                        {
                          ATerm b_8 = t;
                          if(PushChoice()==0)
                            {
                              ATerm f_3 (ATerm t)
                              {
                                ATerm s_41 = NULL;
                                s_41 = t;
                                y_40 :
                                if(!(match_string(s_41, "--version")))
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
                              t = b_8;
                              {
                                ATerm c_8 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm h_3 (ATerm t)
                                    {
                                      ATerm t_41 = NULL;
                                      t_41 = t;
                                      z_40 :
                                      if(!(match_string(t_41, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm i_3 (ATerm t)
                                    {
                                      ATerm u_41 = NULL;
                                      u_41 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(u_41));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, h_3, i_3);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = c_8;
                                    {
                                      ATerm d_8 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm j_3 (ATerm t)
                                          {
                                            ATerm w_41 = NULL;
                                            w_41 = t;
                                            b_41 :
                                            if(!(match_string(w_41, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm k_3 (ATerm t)
                                          {
                                            ATerm x_41 = NULL;
                                            x_41 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_41));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, j_3, k_3);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = d_8;
                                          {
                                            ATerm e_8 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm l_3 (ATerm t)
                                                {
                                                  ATerm z_41 = NULL;
                                                  z_41 = t;
                                                  d_41 :
                                                  if(!(match_string(z_41, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm m_3 (ATerm t)
                                                {
                                                  ATerm a_42 = NULL;
                                                  a_42 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_42));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, l_3, m_3);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = e_8;
                                                {
                                                  ATerm f_8 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm n_3 (ATerm t)
                                                      {
                                                        ATerm c_42 = NULL;
                                                        c_42 = t;
                                                        f_41 :
                                                        if(!(match_string(c_42, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm o_3 (ATerm t)
                                                      {
                                                        ATerm d_42 = NULL;
                                                        d_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_42));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, n_3, o_3);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = f_8;
                                                      {
                                                        ATerm g_8 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm p_3 (ATerm t)
                                                            {
                                                              ATerm f_42 = NULL;
                                                              f_42 = t;
                                                              h_41 :
                                                              if(!(match_string(f_42, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm q_3 (ATerm t)
                                                            {
                                                              ATerm g_42 = NULL;
                                                              g_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_42));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, p_3, q_3);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = g_8;
                                                            {
                                                              ATerm h_8 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm r_3 (ATerm t)
                                                                  {
                                                                    ATerm i_42 = NULL;
                                                                    i_42 = t;
                                                                    j_41 :
                                                                    if(!(match_string(i_42, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm s_3 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, r_3, s_3);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = h_8;
                                                                  {
                                                                    ATerm i_8 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm t_3 (ATerm t)
                                                                        {
                                                                          ATerm j_42 = NULL;
                                                                          j_42 = t;
                                                                          k_41 :
                                                                          if(!(match_string(j_42, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm u_3 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, t_3, u_3);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = i_8;
                                                                        {
                                                                          ATerm j_8 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm v_3 (ATerm t)
                                                                              {
                                                                                ATerm k_42 = NULL;
                                                                                k_42 = t;
                                                                                l_41 :
                                                                                if(!(match_string(k_42, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm w_3 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, v_3, w_3);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = j_8;
                                                                              {
                                                                                ATerm n_8 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm x_3 (ATerm t)
                                                                                    {
                                                                                      ATerm l_42 = NULL;
                                                                                      l_42 = t;
                                                                                      m_41 :
                                                                                      if(!(match_string(l_42, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm y_3 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, x_3, y_3);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = n_8;
                                                                                    {
                                                                                      ATerm z_3 (ATerm t)
                                                                                      {
                                                                                        ATerm m_42 = NULL;
                                                                                        m_42 = t;
                                                                                        n_41 :
                                                                                        if(!(match_string(m_42, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm a_4 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, z_3, a_4);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL;
  u_42 = t;
  t_42 :
  if(match_cons(u_42, sym_Cons_2))
    {
      v_42 = ATgetArgument(u_42, 0);
      w_42 = ATgetArgument(u_42, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(v_42)), not_null(w_42));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_33 (ATerm), ATerm k_33 (ATerm))
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL;
  e_43 = t;
  d_43 :
  if(match_cons(e_43, sym_Cons_2))
    {
      f_43 = ATgetArgument(e_43, 0);
      g_43 = ATgetArgument(e_43, 1);
      {
        ATerm j_43 = NULL;
        t = not_null(f_43);
        {
          ATerm l_43 = NULL;
          t = j_33(t);
          j_43 = t;
          t = not_null(g_43);
          t = k_33(t);
          l_43 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_43), not_null(l_43));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm r_43 = NULL;
  r_43 = t;
  q_43 :
  if(!(match_cons(r_43, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_36 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    ATerm u_43 = NULL;
    u_43 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_43));
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    ATerm p_8 = t;
    if(PushChoice()==0)
      {
        ATerm q_8 = t;
        if(PushChoice()==0)
          {
            ATerm w_43 = NULL;
            w_43 = t;
            t_43 :
            if(!(match_cons(w_43, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = q_8;
            t = p_36(t);
            t = Cons_2(t, _id, c_4);
          }
        PopChoice();
      }
    else
      {
        t = p_8;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, b_4, c_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm i_37 (ATerm), ATerm j_37 (ATerm), ATerm k_37 (ATerm))
{
  ATerm d_4 (ATerm t)
  {
    ATerm r_8 = t;
    if(PushChoice()==0)
      {
        t = j_37(t);
        PopChoice();
      }
    else
      {
        t = r_8;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, d_4);
  t = store_options_0(t);
  {
    ATerm s_8 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, k_37);
        PopChoice();
      }
    else
      {
        t = s_8;
        {
          ATerm t_8 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, i_37);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = t_8;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm d_37 (ATerm), ATerm e_37 (ATerm))
{
  t = iowrap_3(t, d_37, e_37, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm a_37 (ATerm))
{
  ATerm e_4 (ATerm t)
  {
    ATerm f_4 (ATerm t)
    {
      ATerm g_4 (ATerm t)
      {
        ATerm a_44 = NULL;
        a_44 = t;
        z_43 :
        if(!(match_cons(a_44, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, a_37, g_4);
      return(t);
    }
    t = TCons_2(t, _id, f_4);
    return(t);
  }
  t = iowrap_2(t, e_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
