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
ATerm debug_1 (ATerm, ATerm t_38 (ATerm));
ATerm Var_1 (ATerm, ATerm t_31 (ATerm));
ATerm Assign_1 (ATerm, ATerm a_29 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm l_30 (ATerm));
ATerm Op_2 (ATerm, ATerm x_31 (ATerm), ATerm y_31 (ATerm));
ATerm Str_1 (ATerm, ATerm f_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm e_0 (ATerm));
ATerm Int_1 (ATerm, ATerm d_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm Continue_1 (ATerm, ATerm x_28 (ATerm));
ATerm Alt_3 (ATerm, ATerm u_28 (ATerm), ATerm v_28 (ATerm), ATerm w_28 (ATerm));
ATerm Case_4 (ATerm, ATerm n_28 (ATerm), ATerm o_28 (ATerm), ATerm p_28 (ATerm), ATerm q_28 (ATerm));
ATerm Let_2 (ATerm, ATerm k_32 (ATerm), ATerm l_32 (ATerm));
ATerm Prim_2 (ATerm, ATerm p_33 (ATerm), ATerm q_33 (ATerm));
ATerm Where_1 (ATerm, ATerm o_33 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm m_33 (ATerm), ATerm n_33 (ATerm));
ATerm Build_1 (ATerm, ATerm j_33 (ATerm));
ATerm Thread_1 (ATerm, ATerm f_33 (ATerm));
ATerm All_1 (ATerm, ATerm e_33 (ATerm));
ATerm Some_1 (ATerm, ATerm a_0 (ATerm));
ATerm One_1 (ATerm, ATerm c_33 (ATerm));
ATerm Cong_2 (ATerm, ATerm a_33 (ATerm), ATerm b_33 (ATerm));
ATerm Path_2 (ATerm, ATerm y_32 (ATerm), ATerm z_32 (ATerm));
ATerm Rec_2 (ATerm, ATerm i_32 (ATerm), ATerm j_32 (ATerm));
ATerm SVar_1 (ATerm, ATerm h_32 (ATerm));
ATerm Call_2 (ATerm, ATerm w_32 (ATerm), ATerm x_32 (ATerm));
ATerm LChoice_2 (ATerm, ATerm f_32 (ATerm), ATerm g_32 (ATerm));
ATerm Choice_2 (ATerm, ATerm d_32 (ATerm), ATerm e_32 (ATerm));
ATerm Seq_2 (ATerm, ATerm b_32 (ATerm), ATerm c_32 (ATerm));
ATerm Test_1 (ATerm, ATerm z_31 (ATerm));
ATerm Not_1 (ATerm, ATerm a_32 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm DontInline_0 (ATerm);
ATerm SDef_4 (ATerm, ATerm s_32 (ATerm), ATerm t_32 (ATerm), ATerm u_32 (ATerm), ATerm v_32 (ATerm));
ATerm SDef_3 (ATerm, ATerm m_32 (ATerm), ATerm n_32 (ATerm), ATerm o_32 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm a_47 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm r_33 (ATerm), ATerm s_33 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_53 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm j_38 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm m_40 (ATerm), ATerm n_40 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm g_28 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm h_47 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_37 (ATerm));
ATerm need_help_1 (ATerm, ATerm i_38 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm g_37 (ATerm), ATerm h_37 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm i_37 (ATerm), ATerm j_37 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm v_33 (ATerm), ATerm w_33 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm e_37 (ATerm));
ATerm iowrap_3 (ATerm, ATerm x_37 (ATerm), ATerm y_37 (ATerm), ATerm z_37 (ATerm));
ATerm iowrap_2 (ATerm, ATerm s_37 (ATerm), ATerm t_37 (ATerm));
ATerm iowrap_1 (ATerm, ATerm p_37 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm t_38 (ATerm))
{
  ATerm i_3;
  i_3 = t;
  {
    ATerm g_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm h_0 (ATerm t)
    {
      ATerm i_5 = NULL;
      ATerm k_5 = NULL;
      i_5 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = t_38(t);
      k_5 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_5), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_5), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, g_0, h_0);
    t = printnl_0(t);
  }
  t = i_3;
  return(t);
}
ATerm Var_1 (ATerm t, ATerm t_31 (ATerm))
{
  ATerm r_5 = NULL,s_5 = NULL;
  r_5 = t;
  q_5 :
  if(match_cons(r_5, sym_Var_1))
    {
      s_5 = ATgetArgument(r_5, 0);
      {
        ATerm u_5 = NULL;
        t = not_null(s_5);
        t = t_31(t);
        u_5 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_5));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Assign_1 (ATerm t, ATerm a_29 (ATerm))
{
  ATerm b_6 = NULL,c_6 = NULL;
  b_6 = t;
  a_6 :
  if(match_cons(b_6, sym_Assign_1))
    {
      c_6 = ATgetArgument(b_6, 0);
      {
        ATerm e_6 = NULL;
        t = not_null(c_6);
        t = a_29(t);
        e_6 = t;
        t = (ATerm) ATmakeAppl(sym_Assign_1, not_null(e_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm l_30 (ATerm))
{
  ATerm l_6 = NULL,m_6 = NULL;
  l_6 = t;
  k_6 :
  if(match_cons(l_6, sym_BuildDefault_1))
    {
      m_6 = ATgetArgument(l_6, 0);
      {
        ATerm o_6 = NULL;
        t = not_null(m_6);
        t = l_30(t);
        o_6 = t;
        t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(o_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm x_31 (ATerm), ATerm y_31 (ATerm))
{
  ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL;
  w_6 = t;
  v_6 :
  if(match_cons(w_6, sym_Op_2))
    {
      x_6 = ATgetArgument(w_6, 0);
      y_6 = ATgetArgument(w_6, 1);
      {
        ATerm b_7 = NULL;
        t = not_null(x_6);
        {
          ATerm d_7 = NULL;
          t = x_31(t);
          b_7 = t;
          t = not_null(y_6);
          t = y_31(t);
          d_7 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(b_7), not_null(d_7));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm f_0 (ATerm))
{
  ATerm n_7 = NULL,o_7 = NULL;
  n_7 = t;
  m_7 :
  if(match_cons(n_7, sym_Str_1))
    {
      o_7 = ATgetArgument(n_7, 0);
      {
        ATerm j_3 = t;
        if(PushChoice()==0)
          {
            ATerm q_7 = NULL;
            t = not_null(o_7);
            t = f_0(t);
            q_7 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(q_7));
            PopChoice();
          }
        else
          {
            t = j_3;
            {
              ATerm t_7 = NULL;
              t = not_null(o_7);
              t = f_0(t);
              t_7 = t;
              t = (ATerm) ATmakeAppl(sym_Str_1, not_null(t_7));
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
  ATerm a_8 = NULL;
  a_8 = t;
  t = SSL_is_real(not_null(a_8));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm e_0 (ATerm))
{
  ATerm i_8 = NULL,j_8 = NULL;
  i_8 = t;
  h_8 :
  if(match_cons(i_8, sym_Real_1))
    {
      j_8 = ATgetArgument(i_8, 0);
      {
        ATerm k_3 = t;
        if(PushChoice()==0)
          {
            ATerm m_8 = NULL;
            t = not_null(j_8);
            t = e_0(t);
            m_8 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, not_null(m_8));
            PopChoice();
          }
        else
          {
            t = k_3;
            {
              ATerm s_8 = NULL;
              t = not_null(j_8);
              t = e_0(t);
              s_8 = t;
              t = (ATerm) ATmakeAppl(sym_Real_1, not_null(s_8));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Int_1 (ATerm t, ATerm d_0 (ATerm))
{
  ATerm d_9 = NULL,e_9 = NULL;
  d_9 = t;
  c_9 :
  if(match_cons(d_9, sym_Int_1))
    {
      e_9 = ATgetArgument(d_9, 0);
      {
        ATerm l_3 = t;
        if(PushChoice()==0)
          {
            ATerm g_9 = NULL;
            t = not_null(e_9);
            t = d_0(t);
            g_9 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, not_null(g_9));
            PopChoice();
          }
        else
          {
            t = l_3;
            {
              ATerm j_9 = NULL;
              t = not_null(e_9);
              t = d_0(t);
              j_9 = t;
              t = (ATerm) ATmakeAppl(sym_Int_1, not_null(j_9));
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
  ATerm q_9 = NULL;
  q_9 = t;
  p_9 :
  if(!(match_cons(q_9, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm m_3 = t;
  if(PushChoice()==0)
    {
      t = Wld_0(t);
      PopChoice();
    }
  else
    {
      t = m_3;
      {
        ATerm n_3 = t;
        if(PushChoice()==0)
          {
            t = Var_1(t, is_string_0);
            PopChoice();
          }
        else
          {
            t = n_3;
            {
              ATerm o_3 = t;
              if(PushChoice()==0)
                {
                  t = Int_1(t, is_int_0);
                  PopChoice();
                }
              else
                {
                  t = o_3;
                  {
                    ATerm p_3 = t;
                    if(PushChoice()==0)
                      {
                        t = Real_1(t, is_real_0);
                        PopChoice();
                      }
                    else
                      {
                        t = p_3;
                        {
                          ATerm q_3 = t;
                          if(PushChoice()==0)
                            {
                              t = Str_1(t, is_string_0);
                              PopChoice();
                            }
                          else
                            {
                              t = q_3;
                              {
                                ATerm r_3 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm i_0 (ATerm t)
                                    {
                                      t = list_1(t, term_expression_0);
                                      return(t);
                                    }
                                    t = Op_2(t, is_string_0, i_0);
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
                                            ATerm j_0 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
                                              return(t);
                                            }
                                            t = debug_1(t, j_0);
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Assign_2 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL;
  a_10 = t;
  z_9 :
  if(match_cons(a_10, sym_Assign_2))
    {
      b_10 = ATgetArgument(a_10, 0);
      c_10 = ATgetArgument(a_10, 1);
      {
        ATerm t_3 = t;
        if(PushChoice()==0)
          {
            ATerm f_10 = NULL;
            t = not_null(b_10);
            {
              ATerm h_10 = NULL;
              t = b_0(t);
              f_10 = t;
              t = not_null(c_10);
              t = c_0(t);
              h_10 = t;
              t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(f_10), not_null(h_10));
            }
            PopChoice();
          }
        else
          {
            t = t_3;
            {
              ATerm l_10 = NULL;
              t = not_null(b_10);
              {
                ATerm n_10 = NULL;
                t = b_0(t);
                l_10 = t;
                t = not_null(c_10);
                t = c_0(t);
                n_10 = t;
                t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(l_10), not_null(n_10));
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Continue_1 (ATerm t, ATerm x_28 (ATerm))
{
  ATerm u_11 = NULL,v_11 = NULL;
  u_11 = t;
  t_11 :
  if(match_cons(u_11, sym_Continue_1))
    {
      v_11 = ATgetArgument(u_11, 0);
      {
        ATerm x_11 = NULL;
        t = not_null(v_11);
        t = x_28(t);
        x_11 = t;
        t = (ATerm) ATmakeAppl(sym_Continue_1, not_null(x_11));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Alt_3 (ATerm t, ATerm u_28 (ATerm), ATerm v_28 (ATerm), ATerm w_28 (ATerm))
{
  ATerm i_12 = NULL,j_12 = NULL,p_12 = NULL,r_12 = NULL;
  i_12 = t;
  h_12 :
  if(match_cons(i_12, sym_Alt_3))
    {
      j_12 = ATgetArgument(i_12, 0);
      p_12 = ATgetArgument(i_12, 1);
      r_12 = ATgetArgument(i_12, 2);
      {
        ATerm v_12 = NULL;
        t = not_null(j_12);
        {
          ATerm y_12 = NULL;
          t = u_28(t);
          v_12 = t;
          t = not_null(p_12);
          {
            ATerm a_13 = NULL;
            t = v_28(t);
            y_12 = t;
            t = not_null(r_12);
            t = w_28(t);
            a_13 = t;
            t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(v_12), not_null(y_12), not_null(a_13));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Case_4 (ATerm t, ATerm n_28 (ATerm), ATerm o_28 (ATerm), ATerm p_28 (ATerm), ATerm q_28 (ATerm))
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL;
  n_13 = t;
  m_13 :
  if(match_cons(n_13, sym_Case_4))
    {
      o_13 = ATgetArgument(n_13, 0);
      p_13 = ATgetArgument(n_13, 1);
      q_13 = ATgetArgument(n_13, 2);
      r_13 = ATgetArgument(n_13, 3);
      {
        ATerm w_13 = NULL;
        t = not_null(o_13);
        {
          ATerm y_13 = NULL;
          t = n_28(t);
          w_13 = t;
          t = not_null(p_13);
          {
            ATerm a_14 = NULL;
            t = o_28(t);
            y_13 = t;
            t = not_null(q_13);
            {
              ATerm c_14 = NULL;
              t = p_28(t);
              a_14 = t;
              t = not_null(r_13);
              t = q_28(t);
              c_14 = t;
              t = (ATerm) ATmakeAppl(sym_Case_4, not_null(w_13), not_null(y_13), not_null(a_14), not_null(c_14));
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm k_32 (ATerm), ATerm l_32 (ATerm))
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  n_14 = t;
  m_14 :
  if(match_cons(n_14, sym_Let_2))
    {
      o_14 = ATgetArgument(n_14, 0);
      p_14 = ATgetArgument(n_14, 1);
      {
        ATerm s_14 = NULL;
        t = not_null(o_14);
        {
          ATerm u_14 = NULL;
          t = k_32(t);
          s_14 = t;
          t = not_null(p_14);
          t = l_32(t);
          u_14 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(s_14), not_null(u_14));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm p_33 (ATerm), ATerm q_33 (ATerm))
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
  d_15 = t;
  c_15 :
  if(match_cons(d_15, sym_Prim_2))
    {
      e_15 = ATgetArgument(d_15, 0);
      f_15 = ATgetArgument(d_15, 1);
      {
        ATerm i_15 = NULL;
        t = not_null(e_15);
        {
          ATerm k_15 = NULL;
          t = p_33(t);
          i_15 = t;
          t = not_null(f_15);
          t = q_33(t);
          k_15 = t;
          t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(i_15), not_null(k_15));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Where_1 (ATerm t, ATerm o_33 (ATerm))
{
  ATerm t_15 = NULL,u_15 = NULL;
  t_15 = t;
  s_15 :
  if(match_cons(t_15, sym_Where_1))
    {
      u_15 = ATgetArgument(t_15, 0);
      {
        ATerm w_15 = NULL;
        t = not_null(u_15);
        t = o_33(t);
        w_15 = t;
        t = (ATerm) ATmakeAppl(sym_Where_1, not_null(w_15));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm b_16 = NULL;
  b_16 = t;
  t = SSL_is_int(not_null(b_16));
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm m_33 (ATerm), ATerm n_33 (ATerm))
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL;
  i_16 = t;
  h_16 :
  if(match_cons(i_16, sym_Scope_2))
    {
      j_16 = ATgetArgument(i_16, 0);
      k_16 = ATgetArgument(i_16, 1);
      {
        ATerm n_16 = NULL;
        t = not_null(j_16);
        {
          ATerm p_16 = NULL;
          t = m_33(t);
          n_16 = t;
          t = not_null(k_16);
          t = n_33(t);
          p_16 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_16), not_null(p_16));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm j_33 (ATerm))
{
  ATerm x_16 = NULL,y_16 = NULL;
  x_16 = t;
  w_16 :
  if(match_cons(x_16, sym_Build_1))
    {
      y_16 = ATgetArgument(x_16, 0);
      {
        ATerm a_17 = NULL;
        t = not_null(y_16);
        t = j_33(t);
        a_17 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(a_17));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm f_33 (ATerm))
{
  ATerm h_17 = NULL,i_17 = NULL;
  h_17 = t;
  g_17 :
  if(match_cons(h_17, sym_Thread_1))
    {
      i_17 = ATgetArgument(h_17, 0);
      {
        ATerm k_17 = NULL;
        t = not_null(i_17);
        t = f_33(t);
        k_17 = t;
        t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(k_17));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm All_1 (ATerm t, ATerm e_33 (ATerm))
{
  ATerm r_17 = NULL,s_17 = NULL;
  r_17 = t;
  q_17 :
  if(match_cons(r_17, sym_All_1))
    {
      s_17 = ATgetArgument(r_17, 0);
      {
        ATerm u_17 = NULL;
        t = not_null(s_17);
        t = e_33(t);
        u_17 = t;
        t = (ATerm) ATmakeAppl(sym_All_1, not_null(u_17));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Some_1 (ATerm t, ATerm a_0 (ATerm))
{
  ATerm d_18 = NULL,e_18 = NULL;
  d_18 = t;
  c_18 :
  if(match_cons(d_18, sym_Some_1))
    {
      e_18 = ATgetArgument(d_18, 0);
      {
        ATerm u_3 = t;
        if(PushChoice()==0)
          {
            ATerm g_18 = NULL;
            t = not_null(e_18);
            t = a_0(t);
            g_18 = t;
            t = (ATerm) ATmakeAppl(sym_Some_1, not_null(g_18));
            PopChoice();
          }
        else
          {
            t = u_3;
            {
              ATerm j_18 = NULL;
              t = not_null(e_18);
              t = a_0(t);
              j_18 = t;
              t = (ATerm) ATmakeAppl(sym_Some_1, not_null(j_18));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm One_1 (ATerm t, ATerm c_33 (ATerm))
{
  ATerm s_18 = NULL,t_18 = NULL;
  s_18 = t;
  r_18 :
  if(match_cons(s_18, sym_One_1))
    {
      t_18 = ATgetArgument(s_18, 0);
      {
        ATerm v_18 = NULL;
        t = not_null(t_18);
        t = c_33(t);
        v_18 = t;
        t = (ATerm) ATmakeAppl(sym_One_1, not_null(v_18));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm a_33 (ATerm), ATerm b_33 (ATerm))
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
  d_19 = t;
  c_19 :
  if(match_cons(d_19, sym_Cong_2))
    {
      e_19 = ATgetArgument(d_19, 0);
      f_19 = ATgetArgument(d_19, 1);
      {
        ATerm i_19 = NULL;
        t = not_null(e_19);
        {
          ATerm k_19 = NULL;
          t = a_33(t);
          i_19 = t;
          t = not_null(f_19);
          t = b_33(t);
          k_19 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(i_19), not_null(k_19));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Path_2 (ATerm t, ATerm y_32 (ATerm), ATerm z_32 (ATerm))
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
  u_19 = t;
  t_19 :
  if(match_cons(u_19, sym_Path_2))
    {
      v_19 = ATgetArgument(u_19, 0);
      w_19 = ATgetArgument(u_19, 1);
      {
        ATerm z_19 = NULL;
        t = not_null(v_19);
        {
          ATerm b_20 = NULL;
          t = y_32(t);
          z_19 = t;
          t = not_null(w_19);
          t = z_32(t);
          b_20 = t;
          t = (ATerm) ATmakeAppl(sym_Path_2, not_null(z_19), not_null(b_20));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm i_32 (ATerm), ATerm j_32 (ATerm))
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
  k_20 = t;
  j_20 :
  if(match_cons(k_20, sym_Rec_2))
    {
      l_20 = ATgetArgument(k_20, 0);
      m_20 = ATgetArgument(k_20, 1);
      {
        ATerm p_20 = NULL;
        t = not_null(l_20);
        {
          ATerm r_20 = NULL;
          t = i_32(t);
          p_20 = t;
          t = not_null(m_20);
          t = j_32(t);
          r_20 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(p_20), not_null(r_20));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm h_32 (ATerm))
{
  ATerm z_20 = NULL,a_21 = NULL;
  z_20 = t;
  y_20 :
  if(match_cons(z_20, sym_SVar_1))
    {
      a_21 = ATgetArgument(z_20, 0);
      {
        ATerm c_21 = NULL;
        t = not_null(a_21);
        t = h_32(t);
        c_21 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(c_21));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm w_32 (ATerm), ATerm x_32 (ATerm))
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
  k_21 = t;
  j_21 :
  if(match_cons(k_21, sym_Call_2))
    {
      l_21 = ATgetArgument(k_21, 0);
      m_21 = ATgetArgument(k_21, 1);
      {
        ATerm p_21 = NULL;
        t = not_null(l_21);
        {
          ATerm r_21 = NULL;
          t = w_32(t);
          p_21 = t;
          t = not_null(m_21);
          t = x_32(t);
          r_21 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(p_21), not_null(r_21));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm f_32 (ATerm), ATerm g_32 (ATerm))
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
  a_22 = t;
  z_21 :
  if(match_cons(a_22, sym_LChoice_2))
    {
      b_22 = ATgetArgument(a_22, 0);
      c_22 = ATgetArgument(a_22, 1);
      {
        ATerm f_22 = NULL;
        t = not_null(b_22);
        {
          ATerm h_22 = NULL;
          t = f_32(t);
          f_22 = t;
          t = not_null(c_22);
          t = g_32(t);
          h_22 = t;
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_22), not_null(h_22));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm d_32 (ATerm), ATerm e_32 (ATerm))
{
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
  q_22 = t;
  p_22 :
  if(match_cons(q_22, sym_Choice_2))
    {
      r_22 = ATgetArgument(q_22, 0);
      s_22 = ATgetArgument(q_22, 1);
      {
        ATerm v_22 = NULL;
        t = not_null(r_22);
        {
          ATerm x_22 = NULL;
          t = d_32(t);
          v_22 = t;
          t = not_null(s_22);
          t = e_32(t);
          x_22 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(v_22), not_null(x_22));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm b_32 (ATerm), ATerm c_32 (ATerm))
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL;
  g_23 = t;
  f_23 :
  if(match_cons(g_23, sym_Seq_2))
    {
      h_23 = ATgetArgument(g_23, 0);
      i_23 = ATgetArgument(g_23, 1);
      {
        ATerm l_23 = NULL;
        t = not_null(h_23);
        {
          ATerm n_23 = NULL;
          t = b_32(t);
          l_23 = t;
          t = not_null(i_23);
          t = c_32(t);
          n_23 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_23), not_null(n_23));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Test_1 (ATerm t, ATerm z_31 (ATerm))
{
  ATerm v_23 = NULL,w_23 = NULL;
  v_23 = t;
  u_23 :
  if(match_cons(v_23, sym_Test_1))
    {
      w_23 = ATgetArgument(v_23, 0);
      {
        ATerm y_23 = NULL;
        t = not_null(w_23);
        t = z_31(t);
        y_23 = t;
        t = (ATerm) ATmakeAppl(sym_Test_1, not_null(y_23));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Not_1 (ATerm t, ATerm a_32 (ATerm))
{
  ATerm f_24 = NULL,g_24 = NULL;
  f_24 = t;
  e_24 :
  if(match_cons(f_24, sym_Not_1))
    {
      g_24 = ATgetArgument(f_24, 0);
      {
        ATerm i_24 = NULL;
        t = not_null(g_24);
        t = a_32(t);
        i_24 = t;
        t = (ATerm) ATmakeAppl(sym_Not_1, not_null(i_24));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm n_24 = NULL;
  n_24 = t;
  m_24 :
  if(!(match_cons(n_24, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm p_24 = NULL;
  p_24 = t;
  o_24 :
  if(!(match_cons(p_24, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm v_3 = t;
  if(PushChoice()==0)
    {
      t = Id_0(t);
      PopChoice();
    }
  else
    {
      t = v_3;
      {
        ATerm w_3 = t;
        if(PushChoice()==0)
          {
            t = Fail_0(t);
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
                                                ATerm k_0 (ATerm t)
                                                {
                                                  t = SVar_1(t, is_string_0);
                                                  return(t);
                                                }
                                                t = Call_2(t, k_0, Nil_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = c_4;
                                                {
                                                  ATerm d_4 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = Rec_2(t, is_string_0, strategy_expression_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = d_4;
                                                      {
                                                        ATerm e_4 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = Path_2(t, is_int_0, strategy_expression_0);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = e_4;
                                                            {
                                                              ATerm f_4 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm l_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = Cong_2(t, is_string_0, l_0);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = f_4;
                                                                  {
                                                                    ATerm g_4 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = One_1(t, strategy_expression_0);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = g_4;
                                                                        {
                                                                          ATerm h_4 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = Some_1(t, strategy_expression_0);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_4;
                                                                              {
                                                                                ATerm i_4 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    t = All_1(t, strategy_expression_0);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = i_4;
                                                                                    {
                                                                                      ATerm j_4 = t;
                                                                                      if(PushChoice()==0)
                                                                                        {
                                                                                          t = Thread_1(t, strategy_expression_0);
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = j_4;
                                                                                          {
                                                                                            ATerm k_4 = t;
                                                                                            if(PushChoice()==0)
                                                                                              {
                                                                                                t = Build_1(t, term_expression_0);
                                                                                                PopChoice();
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = k_4;
                                                                                                {
                                                                                                  ATerm l_4 = t;
                                                                                                  if(PushChoice()==0)
                                                                                                    {
                                                                                                      ATerm m_0 (ATerm t)
                                                                                                      {
                                                                                                        ATerm n_0 (ATerm t)
                                                                                                        {
                                                                                                          ATerm m_4 = t;
                                                                                                          if(PushChoice()==0)
                                                                                                            {
                                                                                                              t = is_string_0(t);
                                                                                                              PopChoice();
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = m_4;
                                                                                                              t = list_1(t, is_int_0);
                                                                                                            }
                                                                                                          return(t);
                                                                                                        }
                                                                                                        t = list_1(t, n_0);
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Scope_2(t, m_0, strategy_expression_0);
                                                                                                      PopChoice();
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = l_4;
                                                                                                      {
                                                                                                        ATerm n_4 = t;
                                                                                                        if(PushChoice()==0)
                                                                                                          {
                                                                                                            t = Where_1(t, strategy_expression_0);
                                                                                                            PopChoice();
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = n_4;
                                                                                                            {
                                                                                                              ATerm o_4 = t;
                                                                                                              if(PushChoice()==0)
                                                                                                                {
                                                                                                                  ATerm o_0 (ATerm t)
                                                                                                                  {
                                                                                                                    t = list_1(t, term_expression_0);
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Prim_2(t, is_string_0, o_0);
                                                                                                                  PopChoice();
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = o_4;
                                                                                                                  {
                                                                                                                    ATerm p_4 = t;
                                                                                                                    if(PushChoice()==0)
                                                                                                                      {
                                                                                                                        ATerm p_0 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm q_0 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm q_4 = t;
                                                                                                                            if(PushChoice()==0)
                                                                                                                              {
                                                                                                                                t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                PopChoice();
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = q_4;
                                                                                                                                {
                                                                                                                                  ATerm r_0 (ATerm t)
                                                                                                                                  {
                                                                                                                                    t = list_1(t, _id);
                                                                                                                                    return(t);
                                                                                                                                  }
                                                                                                                                  t = SDef_4(t, r_0, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                }
                                                                                                                              }
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          t = list_1(t, q_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Let_2(t, p_0, strategy_expression_0);
                                                                                                                        PopChoice();
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = p_4;
                                                                                                                        {
                                                                                                                          ATerm r_4 = t;
                                                                                                                          if(PushChoice()==0)
                                                                                                                            {
                                                                                                                              ATerm s_0 (ATerm t)
                                                                                                                              {
                                                                                                                                t = Var_1(t, _id);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm t_0 (ATerm t)
                                                                                                                              {
                                                                                                                                ATerm u_0 (ATerm t)
                                                                                                                                {
                                                                                                                                  t = Alt_3(t, _id, _id, strategy_expression_0);
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = list_1(t, u_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Case_4(t, is_string_0, s_0, t_0, strategy_expression_0);
                                                                                                                              PopChoice();
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = r_4;
                                                                                                                              {
                                                                                                                                ATerm s_4 = t;
                                                                                                                                if(PushChoice()==0)
                                                                                                                                  {
                                                                                                                                    t = Continue_1(t, is_string_0);
                                                                                                                                    PopChoice();
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = s_4;
                                                                                                                                    {
                                                                                                                                      ATerm t_4 = t;
                                                                                                                                      if(PushChoice()==0)
                                                                                                                                        {
                                                                                                                                          ATerm v_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = Var_1(t, _id);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Assign_2(t, v_0, term_expression_0);
                                                                                                                                          PopChoice();
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = t_4;
                                                                                                                                          {
                                                                                                                                            ATerm u_4 = t;
                                                                                                                                            if(PushChoice()==0)
                                                                                                                                              {
                                                                                                                                                ATerm w_0 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  t = Var_1(t, _id);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Assign_1(t, w_0);
                                                                                                                                                PopChoice();
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = u_4;
                                                                                                                                                {
                                                                                                                                                  ATerm x_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = debug_1(t, x_0);
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm s_24 = NULL;
  s_24 = t;
  t = SSL_is_string(not_null(s_24));
  return(t);
}
ATerm DontInline_0 (ATerm t)
{
  ATerm w_24 = NULL;
  w_24 = t;
  v_24 :
  if(!(match_cons(w_24, sym_DontInline_0)))
    _fail(t);
  return(t);
}
ATerm SDef_4 (ATerm t, ATerm s_32 (ATerm), ATerm t_32 (ATerm), ATerm u_32 (ATerm), ATerm v_32 (ATerm))
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
  d_25 = t;
  c_25 :
  if(match_cons(d_25, sym_SDef_4))
    {
      e_25 = ATgetArgument(d_25, 0);
      f_25 = ATgetArgument(d_25, 1);
      g_25 = ATgetArgument(d_25, 2);
      h_25 = ATgetArgument(d_25, 3);
      {
        ATerm m_25 = NULL;
        t = not_null(e_25);
        {
          ATerm o_25 = NULL;
          t = s_32(t);
          m_25 = t;
          t = not_null(f_25);
          {
            ATerm q_25 = NULL;
            t = t_32(t);
            o_25 = t;
            t = not_null(g_25);
            {
              ATerm s_25 = NULL;
              t = u_32(t);
              q_25 = t;
              t = not_null(h_25);
              t = v_32(t);
              s_25 = t;
              t = (ATerm) ATmakeAppl(sym_SDef_4, not_null(m_25), not_null(o_25), not_null(q_25), not_null(s_25));
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm m_32 (ATerm), ATerm n_32 (ATerm), ATerm o_32 (ATerm))
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL;
  e_26 = t;
  d_26 :
  if(match_cons(e_26, sym_SDef_3))
    {
      f_26 = ATgetArgument(e_26, 0);
      g_26 = ATgetArgument(e_26, 1);
      h_26 = ATgetArgument(e_26, 2);
      {
        ATerm l_26 = NULL;
        t = not_null(f_26);
        {
          ATerm n_26 = NULL;
          t = m_32(t);
          l_26 = t;
          t = not_null(g_26);
          {
            ATerm p_26 = NULL;
            t = n_32(t);
            n_26 = t;
            t = not_null(h_26);
            t = o_32(t);
            p_26 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(l_26), not_null(n_26), not_null(p_26));
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
  ATerm v_4 = t;
  if(PushChoice()==0)
    {
      t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
      PopChoice();
    }
  else
    {
      t = v_4;
      {
        ATerm w_4 = t;
        if(PushChoice()==0)
          {
            ATerm y_0 (ATerm t)
            {
              t = list_1(t, DontInline_0);
              return(t);
            }
            t = SDef_4(t, y_0, is_string_0, Nil_0, strategy_expression_0);
            PopChoice();
          }
        else
          {
            t = w_4;
            {
              ATerm z_0 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
                return(t);
              }
              t = debug_1(t, z_0);
            }
          }
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm a_47 (ATerm))
{
  ATerm v_26 (ATerm t)
  {
    ATerm x_4 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = x_4;
        t = Cons_2(t, a_47, v_26);
      }
    return(t);
  }
  t = v_26(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm y_4 = t;
  if(PushChoice()==0)
    {
      t = list_1(t, strategy_definition_0);
      PopChoice();
    }
  else
    {
      t = y_4;
      {
        ATerm a_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, a_1);
      }
    }
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm x_26 = NULL;
  x_26 = t;
  w_26 :
  if(!(match_cons(x_26, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm r_33 (ATerm), ATerm s_33 (ATerm))
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
  c_27 = t;
  b_27 :
  if(match_cons(c_27, sym_TCons_2))
    {
      d_27 = ATgetArgument(c_27, 0);
      e_27 = ATgetArgument(c_27, 1);
      {
        ATerm h_27 = NULL;
        t = not_null(d_27);
        {
          ATerm j_27 = NULL;
          t = r_33(t);
          h_27 = t;
          t = not_null(e_27);
          t = s_33(t);
          j_27 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_27), not_null(j_27));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm q_27 = NULL;
  ATerm z_4;
  z_4 = t;
  {
    ATerm b_1 (ATerm t)
    {
      ATerm r_27 = NULL,s_27 = NULL;
      r_27 = t;
      p_27 :
      if(match_cons(r_27, sym_Program_1))
        {
          s_27 = ATgetArgument(r_27, 0);
          if(q_27 != NULL && q_27 != s_27)
            _fail(s_27);
          else
            q_27 = s_27;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, b_1);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_27), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = z_4;
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
  ATerm v_27 = NULL;
  v_27 = t;
  t = SSL_exit(not_null(v_27));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,h_28 = NULL;
  c_28 = t;
  z_27 :
  if(match_cons(c_28, sym_TCons_2))
    {
      d_28 = ATgetArgument(c_28, 0);
      e_28 = ATgetArgument(c_28, 1);
      a_28 :
      if(match_cons(e_28, sym_TCons_2))
        {
          f_28 = ATgetArgument(e_28, 0);
          h_28 = ATgetArgument(e_28, 1);
          b_28 :
          if(match_cons(h_28, sym_TNil_0))
            {
              ATerm a_5;
              a_5 = t;
              t = SSL_printnl(not_null(d_28), not_null(f_28));
              t = a_5;
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
ATerm try_1 (ATerm t, ATerm m_53 (ATerm))
{
  ATerm b_5 = t;
  if(PushChoice()==0)
    {
      t = m_53(t);
      PopChoice();
    }
  else
    t = b_5;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL;
  ATerm c_1 (ATerm t)
  {
    ATerm d_1 (ATerm t)
    {
      ATerm c_5 = t;
      if(PushChoice()==0)
        {
          ATerm f_1 (ATerm t)
          {
            ATerm b_29 = NULL;
            b_29 = t;
            l_28 :
            if(!(match_cons(b_29, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, f_1);
          PopChoice();
          _fail(t);
        }
      else
        t = c_5;
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
          ATerm c_29 = NULL,d_29 = NULL;
          c_29 = t;
          r_28 :
          if(match_cons(c_29, sym_Runtime_1))
            {
              d_29 = ATgetArgument(c_29, 0);
              if(z_28 != NULL && z_28 != d_29)
                _fail(d_29);
              else
                z_28 = d_29;
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
      {
        ATerm j_1 (ATerm t)
        {
          ATerm l_1 (ATerm t)
          {
            ATerm e_29 = NULL,f_29 = NULL;
            e_29 = t;
            t_28 :
            if(match_cons(e_29, sym_Program_1))
              {
                f_29 = ATgetArgument(e_29, 0);
                if(y_28 != NULL && y_28 != f_29)
                  _fail(f_29);
                else
                  y_28 = f_29;
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
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_28), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_28), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, c_1);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
  m_29 = t;
  j_29 :
  if(match_cons(m_29, sym_TCons_2))
    {
      n_29 = ATgetArgument(m_29, 0);
      o_29 = ATgetArgument(m_29, 1);
      k_29 :
      if(match_cons(o_29, sym_TCons_2))
        {
          p_29 = ATgetArgument(o_29, 0);
          q_29 = ATgetArgument(o_29, 1);
          l_29 :
          if(match_cons(q_29, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(n_29), not_null(p_29));
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
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL;
  y_29 = t;
  v_29 :
  if(match_cons(y_29, sym_TCons_2))
    {
      z_29 = ATgetArgument(y_29, 0);
      a_30 = ATgetArgument(y_29, 1);
      w_29 :
      if(match_cons(a_30, sym_TCons_2))
        {
          b_30 = ATgetArgument(a_30, 0);
          c_30 = ATgetArgument(a_30, 1);
          x_29 :
          if(match_cons(c_30, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(z_29), not_null(b_30));
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
  ATerm k_30 = NULL;
  ATerm d_5;
  d_5 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm e_5 = t;
      if(PushChoice()==0)
        {
          ATerm o_1 (ATerm t)
          {
            ATerm m_30 = NULL,n_30 = NULL;
            m_30 = t;
            h_30 :
            if(match_cons(m_30, sym_Output_1))
              {
                n_30 = ATgetArgument(m_30, 0);
                if(k_30 != NULL && k_30 != n_30)
                  _fail(n_30);
                else
                  k_30 = n_30;
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
          t = e_5;
          {
            ATerm o_30 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            o_30 = t;
            if(k_30 != NULL && k_30 != o_30)
              _fail(o_30);
            else
              k_30 = o_30;
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
  t = d_5;
  {
    ATerm p_1 (ATerm t)
    {
      ATerm q_1 (ATerm t)
      {
        ATerm r_1 (ATerm t)
        {
          t = not_null(k_30);
          return(t);
        }
        t = split_2(t, r_1, _id);
        return(t);
      }
      t = TCons_2(t, q_1, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, p_1);
    {
      ATerm f_5 = t;
      if(PushChoice()==0)
        {
          ATerm s_1 (ATerm t)
          {
            ATerm u_1 (ATerm t)
            {
              ATerm p_30 = NULL;
              p_30 = t;
              j_30 :
              if(!(match_cons(p_30, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, u_1);
            return(t);
          }
          ATerm t_1 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, s_1, t_1);
          PopChoice();
        }
      else
        {
          t = f_5;
          {
            ATerm v_1 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, v_1);
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
ATerm apply_strategy_1 (ATerm t, ATerm j_38 (ATerm))
{
  ATerm x_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL;
  ATerm g_5;
  g_5 = t;
  t = dtime_0(t);
  t = g_5;
  t = j_38(t);
  {
    ATerm h_5;
    h_5 = t;
    {
      ATerm y_30 = NULL;
      t = dtime_0(t);
      y_30 = t;
      if(x_30 != NULL && x_30 != y_30)
        _fail(y_30);
      else
        x_30 = y_30;
    }
    t = h_5;
    z_30 = t;
    u_30 :
    if(match_cons(z_30, sym_TCons_2))
      {
        a_31 = ATgetArgument(z_30, 0);
        b_31 = ATgetArgument(z_30, 1);
        v_30 :
        if(match_cons(b_31, sym_TCons_2))
          {
            c_31 = ATgetArgument(b_31, 0);
            d_31 = ATgetArgument(b_31, 1);
            w_30 :
            if(match_cons(d_31, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(x_30)), not_null(a_31)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_31), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm j_31 = NULL;
  j_31 = t;
  t = SSL_ReadFromFile(not_null(j_31));
  return(t);
}
ATerm split_2 (ATerm t, ATerm m_40 (ATerm), ATerm n_40 (ATerm))
{
  ATerm p_31 = NULL;
  ATerm r_31 = NULL;
  p_31 = t;
  {
    ATerm u_31 = NULL;
    t = m_40(t);
    r_31 = t;
    t = not_null(p_31);
    t = n_40(t);
    u_31 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_31), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_31), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm h_33 = NULL;
  ATerm j_5;
  j_5 = t;
  {
    ATerm l_5 = t;
    if(PushChoice()==0)
      {
        ATerm w_1 (ATerm t)
        {
          ATerm i_33 = NULL,k_33 = NULL;
          i_33 = t;
          d_33 :
          if(match_cons(i_33, sym_Input_1))
            {
              k_33 = ATgetArgument(i_33, 0);
              if(h_33 != NULL && h_33 != k_33)
                _fail(k_33);
              else
                h_33 = k_33;
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
        t = l_5;
        {
          ATerm l_33 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          l_33 = t;
          if(h_33 != NULL && h_33 != l_33)
            _fail(l_33);
          else
            h_33 = l_33;
        }
      }
  }
  t = j_5;
  {
    ATerm x_1 (ATerm t)
    {
      t = not_null(h_33);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm y_33 = NULL;
  y_33 = t;
  x_33 :
  if(!(match_cons(y_33, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_28 (ATerm))
{
  ATerm c_34 = NULL,d_34 = NULL;
  c_34 = t;
  b_34 :
  if(match_cons(c_34, sym_Undefined_1))
    {
      d_34 = ATgetArgument(c_34, 0);
      {
        ATerm f_34 = NULL;
        t = not_null(d_34);
        t = g_28(t);
        f_34 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_34));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_34 = NULL;
  k_34 = t;
  j_34 :
  if(!(match_cons(k_34, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm h_47 (ATerm))
{
  ATerm l_34 (ATerm t)
  {
    ATerm m_5 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, h_47, _id);
        PopChoice();
      }
    else
      {
        t = m_5;
        t = Cons_2(t, _id, l_34);
      }
    return(t);
  }
  t = l_34(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_37 (ATerm))
{
  t = fetch_1(t, n_37);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm i_38 (ATerm))
{
  ATerm y_1 (ATerm t)
  {
    ATerm n_5 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = n_5;
        {
          ATerm o_5 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = o_5;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, y_1);
  t = i_38(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
  ATerm p_5;
  p_5 = t;
  {
    ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL;
    u_34 = t;
    n_34 :
    if(match_cons(u_34, sym_TCons_2))
      {
        v_34 = ATgetArgument(u_34, 0);
        w_34 = ATgetArgument(u_34, 1);
        o_34 :
        if(match_cons(w_34, sym_TCons_2))
          {
            x_34 = ATgetArgument(w_34, 0);
            y_34 = ATgetArgument(w_34, 1);
            p_34 :
            if(match_cons(y_34, sym_TCons_2))
              {
                z_34 = ATgetArgument(y_34, 0);
                a_35 = ATgetArgument(y_34, 1);
                q_34 :
                if(match_cons(a_35, sym_TNil_0))
                  {
                    if(r_34 != NULL && r_34 != v_34)
                      _fail(v_34);
                    else
                      r_34 = v_34;
                    if(s_34 != NULL && s_34 != x_34)
                      _fail(x_34);
                    else
                      s_34 = x_34;
                    if(t_34 != NULL && t_34 != z_34)
                      _fail(z_34);
                    else
                      t_34 = z_34;
                    t = SSL_table_put(not_null(r_34), not_null(s_34), not_null(t_34));
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
  t = p_5;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm d_35 = NULL;
  d_35 = t;
  t = SSL_table_create(not_null(d_35));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm h_35 = NULL;
  h_35 = t;
  {
    ATerm t_5;
    t_5 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_35), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = t_5;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm g_37 (ATerm), ATerm h_37 (ATerm))
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
  n_35 = t;
  m_35 :
  if(match_cons(n_35, sym_Cons_2))
    {
      o_35 = ATgetArgument(n_35, 0);
      p_35 = ATgetArgument(n_35, 1);
      {
        ATerm s_35 = NULL;
        t = not_null(o_35);
        t = g_37(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = h_37(t);
        s_35 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_35), not_null(p_35));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm i_37 (ATerm), ATerm j_37 (ATerm))
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
  a_36 = t;
  y_35 :
  if(match_cons(a_36, sym_Cons_2))
    {
      b_36 = ATgetArgument(a_36, 0);
      c_36 = ATgetArgument(a_36, 1);
      z_35 :
      if(match_cons(c_36, sym_Cons_2))
        {
          d_36 = ATgetArgument(c_36, 0);
          e_36 = ATgetArgument(c_36, 1);
          {
            ATerm i_36 = NULL;
            t = not_null(b_36);
            t = i_37(t);
            t = not_null(d_36);
            t = j_37(t);
            i_36 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_36), not_null(e_36));
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
  ATerm v_5 = t;
  if(PushChoice()==0)
    {
      ATerm z_1 (ATerm t)
      {
        ATerm m_37 = NULL;
        m_37 = t;
        m_36 :
        if(!(match_string(m_37, "-S")))
          _fail(t);
        return(t);
      }
      ATerm a_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, z_1, a_2);
      PopChoice();
    }
  else
    {
      t = v_5;
      {
        ATerm w_5 = t;
        if(PushChoice()==0)
          {
            ATerm b_2 (ATerm t)
            {
              ATerm o_37 = NULL;
              o_37 = t;
              n_36 :
              if(!(match_string(o_37, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm c_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, b_2, c_2);
            PopChoice();
          }
        else
          {
            t = w_5;
            {
              ATerm x_5 = t;
              if(PushChoice()==0)
                {
                  ATerm d_2 (ATerm t)
                  {
                    ATerm q_37 = NULL;
                    q_37 = t;
                    o_36 :
                    if(!(match_string(q_37, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm e_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, d_2, e_2);
                  PopChoice();
                }
              else
                {
                  t = x_5;
                  {
                    ATerm y_5 = t;
                    if(PushChoice()==0)
                      {
                        ATerm f_2 (ATerm t)
                        {
                          ATerm r_37 = NULL;
                          r_37 = t;
                          p_36 :
                          if(!(match_string(r_37, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm g_2 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, f_2, g_2);
                        PopChoice();
                      }
                    else
                      {
                        t = y_5;
                        {
                          ATerm z_5 = t;
                          if(PushChoice()==0)
                            {
                              ATerm h_2 (ATerm t)
                              {
                                ATerm u_37 = NULL;
                                u_37 = t;
                                q_36 :
                                if(!(match_string(u_37, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm i_2 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, h_2, i_2);
                              PopChoice();
                            }
                          else
                            {
                              t = z_5;
                              {
                                ATerm d_6 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm j_2 (ATerm t)
                                    {
                                      ATerm v_37 = NULL;
                                      v_37 = t;
                                      r_36 :
                                      if(!(match_string(v_37, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm k_2 (ATerm t)
                                    {
                                      ATerm w_37 = NULL;
                                      w_37 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(w_37));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, j_2, k_2);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = d_6;
                                    {
                                      ATerm f_6 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm l_2 (ATerm t)
                                          {
                                            ATerm b_38 = NULL;
                                            b_38 = t;
                                            t_36 :
                                            if(!(match_string(b_38, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm m_2 (ATerm t)
                                          {
                                            ATerm c_38 = NULL;
                                            c_38 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(c_38));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, l_2, m_2);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = f_6;
                                          {
                                            ATerm g_6 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm n_2 (ATerm t)
                                                {
                                                  ATerm e_38 = NULL;
                                                  e_38 = t;
                                                  v_36 :
                                                  if(!(match_string(e_38, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm o_2 (ATerm t)
                                                {
                                                  ATerm f_38 = NULL;
                                                  f_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_38));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, n_2, o_2);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = g_6;
                                                {
                                                  ATerm h_6 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm p_2 (ATerm t)
                                                      {
                                                        ATerm h_38 = NULL;
                                                        h_38 = t;
                                                        x_36 :
                                                        if(!(match_string(h_38, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm q_2 (ATerm t)
                                                      {
                                                        ATerm k_38 = NULL;
                                                        k_38 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(k_38));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, p_2, q_2);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = h_6;
                                                      {
                                                        ATerm i_6 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm r_2 (ATerm t)
                                                            {
                                                              ATerm m_38 = NULL;
                                                              m_38 = t;
                                                              z_36 :
                                                              if(!(match_string(m_38, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm s_2 (ATerm t)
                                                            {
                                                              ATerm n_38 = NULL;
                                                              n_38 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_38));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, r_2, s_2);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = i_6;
                                                            {
                                                              ATerm j_6 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm t_2 (ATerm t)
                                                                  {
                                                                    ATerm p_38 = NULL;
                                                                    p_38 = t;
                                                                    b_37 :
                                                                    if(!(match_string(p_38, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm u_2 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, t_2, u_2);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = j_6;
                                                                  {
                                                                    ATerm n_6 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm v_2 (ATerm t)
                                                                        {
                                                                          ATerm q_38 = NULL;
                                                                          q_38 = t;
                                                                          c_37 :
                                                                          if(!(match_string(q_38, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm w_2 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, v_2, w_2);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = n_6;
                                                                        {
                                                                          ATerm p_6 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm x_2 (ATerm t)
                                                                              {
                                                                                ATerm r_38 = NULL;
                                                                                r_38 = t;
                                                                                d_37 :
                                                                                if(!(match_string(r_38, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm y_2 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, x_2, y_2);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = p_6;
                                                                              {
                                                                                ATerm q_6 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm z_2 (ATerm t)
                                                                                    {
                                                                                      ATerm s_38 = NULL;
                                                                                      s_38 = t;
                                                                                      k_37 :
                                                                                      if(!(match_string(s_38, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm a_3 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, z_2, a_3);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_6;
                                                                                    {
                                                                                      ATerm b_3 (ATerm t)
                                                                                      {
                                                                                        ATerm u_38 = NULL;
                                                                                        u_38 = t;
                                                                                        l_37 :
                                                                                        if(!(match_string(u_38, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm c_3 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, b_3, c_3);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL;
  c_39 = t;
  b_39 :
  if(match_cons(c_39, sym_Cons_2))
    {
      d_39 = ATgetArgument(c_39, 0);
      e_39 = ATgetArgument(c_39, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(d_39)), not_null(e_39));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_33 (ATerm), ATerm w_33 (ATerm))
{
  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL;
  m_39 = t;
  l_39 :
  if(match_cons(m_39, sym_Cons_2))
    {
      n_39 = ATgetArgument(m_39, 0);
      o_39 = ATgetArgument(m_39, 1);
      {
        ATerm r_39 = NULL;
        t = not_null(n_39);
        {
          ATerm t_39 = NULL;
          t = v_33(t);
          r_39 = t;
          t = not_null(o_39);
          t = w_33(t);
          t_39 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_39), not_null(t_39));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm z_39 = NULL;
  z_39 = t;
  y_39 :
  if(!(match_cons(z_39, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm e_37 (ATerm))
{
  ATerm d_3 (ATerm t)
  {
    ATerm b_40 = NULL;
    b_40 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_40));
    return(t);
  }
  ATerm e_3 (ATerm t)
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
            t = e_37(t);
            t = Cons_2(t, _id, e_3);
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
  t = Cons_2(t, d_3, e_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm x_37 (ATerm), ATerm y_37 (ATerm), ATerm z_37 (ATerm))
{
  ATerm f_3 (ATerm t)
  {
    ATerm t_6 = t;
    if(PushChoice()==0)
      {
        t = y_37(t);
        PopChoice();
      }
    else
      {
        t = t_6;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, f_3);
  t = store_options_0(t);
  {
    ATerm u_6 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, z_37);
        PopChoice();
      }
    else
      {
        t = u_6;
        {
          ATerm z_6 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, x_37);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = z_6;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm s_37 (ATerm), ATerm t_37 (ATerm))
{
  t = iowrap_3(t, s_37, t_37, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm p_37 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    ATerm h_3 (ATerm t)
    {
      t = TCons_2(t, p_37, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, h_3);
    return(t);
  }
  t = iowrap_2(t, g_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
