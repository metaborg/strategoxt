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
ATerm debug_1 (ATerm, ATerm z_37 (ATerm));
ATerm Var_1 (ATerm, ATerm d_31 (ATerm));
ATerm Assign_1 (ATerm, ATerm k_28 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm v_29 (ATerm));
ATerm Op_2 (ATerm, ATerm h_31 (ATerm), ATerm i_31 (ATerm));
ATerm Str_1 (ATerm, ATerm f_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm e_0 (ATerm));
ATerm Int_1 (ATerm, ATerm d_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm Continue_1 (ATerm, ATerm h_28 (ATerm));
ATerm Alt_3 (ATerm, ATerm e_28 (ATerm), ATerm f_28 (ATerm), ATerm g_28 (ATerm));
ATerm Case_4 (ATerm, ATerm x_27 (ATerm), ATerm y_27 (ATerm), ATerm z_27 (ATerm), ATerm a_28 (ATerm));
ATerm Let_2 (ATerm, ATerm u_31 (ATerm), ATerm v_31 (ATerm));
ATerm Prim_2 (ATerm, ATerm z_32 (ATerm), ATerm a_33 (ATerm));
ATerm Where_1 (ATerm, ATerm y_32 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm w_32 (ATerm), ATerm x_32 (ATerm));
ATerm Build_1 (ATerm, ATerm t_32 (ATerm));
ATerm Thread_1 (ATerm, ATerm p_32 (ATerm));
ATerm All_1 (ATerm, ATerm o_32 (ATerm));
ATerm Some_1 (ATerm, ATerm a_0 (ATerm));
ATerm One_1 (ATerm, ATerm m_32 (ATerm));
ATerm Cong_2 (ATerm, ATerm k_32 (ATerm), ATerm l_32 (ATerm));
ATerm Path_2 (ATerm, ATerm i_32 (ATerm), ATerm j_32 (ATerm));
ATerm Rec_2 (ATerm, ATerm s_31 (ATerm), ATerm t_31 (ATerm));
ATerm SVar_1 (ATerm, ATerm r_31 (ATerm));
ATerm Call_2 (ATerm, ATerm g_32 (ATerm), ATerm h_32 (ATerm));
ATerm LChoice_2 (ATerm, ATerm p_31 (ATerm), ATerm q_31 (ATerm));
ATerm Choice_2 (ATerm, ATerm n_31 (ATerm), ATerm o_31 (ATerm));
ATerm Seq_2 (ATerm, ATerm l_31 (ATerm), ATerm m_31 (ATerm));
ATerm Test_1 (ATerm, ATerm j_31 (ATerm));
ATerm Not_1 (ATerm, ATerm k_31 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm DontInline_0 (ATerm);
ATerm SDef_4 (ATerm, ATerm c_32 (ATerm), ATerm d_32 (ATerm), ATerm e_32 (ATerm), ATerm f_32 (ATerm));
ATerm SDef_3 (ATerm, ATerm w_31 (ATerm), ATerm x_31 (ATerm), ATerm y_31 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm c_46 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm b_33 (ATerm), ATerm c_33 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm o_52 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm q_37 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_39 (ATerm), ATerm r_39 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm q_27 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm j_46 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_36 (ATerm));
ATerm need_help_1 (ATerm, ATerm p_37 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm n_36 (ATerm), ATerm o_36 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm p_36 (ATerm), ATerm q_36 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm f_33 (ATerm), ATerm g_33 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_36 (ATerm));
ATerm iowrap_3 (ATerm, ATerm e_37 (ATerm), ATerm f_37 (ATerm), ATerm g_37 (ATerm));
ATerm iowrap_2 (ATerm, ATerm z_36 (ATerm), ATerm a_37 (ATerm));
ATerm iowrap_1 (ATerm, ATerm w_36 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm z_37 (ATerm))
{
  ATerm v_3;
  v_3 = t;
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
      t = z_37(t);
      k_5 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_5), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_5), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, g_0, h_0);
    t = printnl_0(t);
  }
  t = v_3;
  return(t);
}
ATerm Var_1 (ATerm t, ATerm d_31 (ATerm))
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
        t = d_31(t);
        u_5 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_5));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Assign_1 (ATerm t, ATerm k_28 (ATerm))
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
        t = k_28(t);
        e_6 = t;
        t = (ATerm) ATmakeAppl(sym_Assign_1, not_null(e_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm v_29 (ATerm))
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
        t = v_29(t);
        o_6 = t;
        t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(o_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm h_31 (ATerm), ATerm i_31 (ATerm))
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
          t = h_31(t);
          b_7 = t;
          t = not_null(y_6);
          t = i_31(t);
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
        ATerm w_3 = t;
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
            t = w_3;
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
        ATerm x_3 = t;
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
            t = x_3;
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
        ATerm y_3 = t;
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
            t = y_3;
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
  ATerm z_3 = t;
  if(PushChoice()==0)
    {
      ATerm s_9 = NULL;
      s_9 = t;
      r_9 :
      if(!(match_cons(s_9, sym_Wld_0)))
        _fail(t);
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
                                    t = e_4;
                                    {
                                      ATerm f_4 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = BuildDefault_1(t, term_expression_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = f_4;
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
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
  c_10 = t;
  b_10 :
  if(match_cons(c_10, sym_Assign_2))
    {
      d_10 = ATgetArgument(c_10, 0);
      e_10 = ATgetArgument(c_10, 1);
      {
        ATerm g_4 = t;
        if(PushChoice()==0)
          {
            ATerm h_10 = NULL;
            t = not_null(d_10);
            {
              ATerm j_10 = NULL;
              t = b_0(t);
              h_10 = t;
              t = not_null(e_10);
              t = c_0(t);
              j_10 = t;
              t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(h_10), not_null(j_10));
            }
            PopChoice();
          }
        else
          {
            t = g_4;
            {
              ATerm n_10 = NULL;
              t = not_null(d_10);
              {
                ATerm v_10 = NULL;
                t = b_0(t);
                n_10 = t;
                t = not_null(e_10);
                t = c_0(t);
                v_10 = t;
                t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(n_10), not_null(v_10));
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Continue_1 (ATerm t, ATerm h_28 (ATerm))
{
  ATerm w_11 = NULL,x_11 = NULL;
  w_11 = t;
  v_11 :
  if(match_cons(w_11, sym_Continue_1))
    {
      x_11 = ATgetArgument(w_11, 0);
      {
        ATerm b_12 = NULL;
        t = not_null(x_11);
        t = h_28(t);
        b_12 = t;
        t = (ATerm) ATmakeAppl(sym_Continue_1, not_null(b_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Alt_3 (ATerm t, ATerm e_28 (ATerm), ATerm f_28 (ATerm), ATerm g_28 (ATerm))
{
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
  q_12 = t;
  p_12 :
  if(match_cons(q_12, sym_Alt_3))
    {
      r_12 = ATgetArgument(q_12, 0);
      s_12 = ATgetArgument(q_12, 1);
      t_12 = ATgetArgument(q_12, 2);
      {
        ATerm y_12 = NULL;
        t = not_null(r_12);
        {
          ATerm a_13 = NULL;
          t = e_28(t);
          y_12 = t;
          t = not_null(s_12);
          {
            ATerm d_13 = NULL;
            t = f_28(t);
            a_13 = t;
            t = not_null(t_12);
            t = g_28(t);
            d_13 = t;
            t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(y_12), not_null(a_13), not_null(d_13));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Case_4 (ATerm t, ATerm x_27 (ATerm), ATerm y_27 (ATerm), ATerm z_27 (ATerm), ATerm a_28 (ATerm))
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
  p_13 = t;
  o_13 :
  if(match_cons(p_13, sym_Case_4))
    {
      q_13 = ATgetArgument(p_13, 0);
      r_13 = ATgetArgument(p_13, 1);
      s_13 = ATgetArgument(p_13, 2);
      t_13 = ATgetArgument(p_13, 3);
      {
        ATerm y_13 = NULL;
        t = not_null(q_13);
        {
          ATerm a_14 = NULL;
          t = x_27(t);
          y_13 = t;
          t = not_null(r_13);
          {
            ATerm c_14 = NULL;
            t = y_27(t);
            a_14 = t;
            t = not_null(s_13);
            {
              ATerm e_14 = NULL;
              t = z_27(t);
              c_14 = t;
              t = not_null(t_13);
              t = a_28(t);
              e_14 = t;
              t = (ATerm) ATmakeAppl(sym_Case_4, not_null(y_13), not_null(a_14), not_null(c_14), not_null(e_14));
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm u_31 (ATerm), ATerm v_31 (ATerm))
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
  p_14 = t;
  o_14 :
  if(match_cons(p_14, sym_Let_2))
    {
      q_14 = ATgetArgument(p_14, 0);
      r_14 = ATgetArgument(p_14, 1);
      {
        ATerm u_14 = NULL;
        t = not_null(q_14);
        {
          ATerm w_14 = NULL;
          t = u_31(t);
          u_14 = t;
          t = not_null(r_14);
          t = v_31(t);
          w_14 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(u_14), not_null(w_14));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm z_32 (ATerm), ATerm a_33 (ATerm))
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
  f_15 = t;
  e_15 :
  if(match_cons(f_15, sym_Prim_2))
    {
      g_15 = ATgetArgument(f_15, 0);
      h_15 = ATgetArgument(f_15, 1);
      {
        ATerm l_15 = NULL;
        t = not_null(g_15);
        {
          ATerm n_15 = NULL;
          t = z_32(t);
          l_15 = t;
          t = not_null(h_15);
          t = a_33(t);
          n_15 = t;
          t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(l_15), not_null(n_15));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Where_1 (ATerm t, ATerm y_32 (ATerm))
{
  ATerm v_15 = NULL,w_15 = NULL;
  v_15 = t;
  u_15 :
  if(match_cons(v_15, sym_Where_1))
    {
      w_15 = ATgetArgument(v_15, 0);
      {
        ATerm y_15 = NULL;
        t = not_null(w_15);
        t = y_32(t);
        y_15 = t;
        t = (ATerm) ATmakeAppl(sym_Where_1, not_null(y_15));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm d_16 = NULL;
  d_16 = t;
  t = SSL_is_int(not_null(d_16));
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm w_32 (ATerm), ATerm x_32 (ATerm))
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
  k_16 = t;
  j_16 :
  if(match_cons(k_16, sym_Scope_2))
    {
      l_16 = ATgetArgument(k_16, 0);
      m_16 = ATgetArgument(k_16, 1);
      {
        ATerm p_16 = NULL;
        t = not_null(l_16);
        {
          ATerm r_16 = NULL;
          t = w_32(t);
          p_16 = t;
          t = not_null(m_16);
          t = x_32(t);
          r_16 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_16), not_null(r_16));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm t_32 (ATerm))
{
  ATerm z_16 = NULL,a_17 = NULL;
  z_16 = t;
  y_16 :
  if(match_cons(z_16, sym_Build_1))
    {
      a_17 = ATgetArgument(z_16, 0);
      {
        ATerm c_17 = NULL;
        t = not_null(a_17);
        t = t_32(t);
        c_17 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(c_17));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm p_32 (ATerm))
{
  ATerm j_17 = NULL,k_17 = NULL;
  j_17 = t;
  i_17 :
  if(match_cons(j_17, sym_Thread_1))
    {
      k_17 = ATgetArgument(j_17, 0);
      {
        ATerm m_17 = NULL;
        t = not_null(k_17);
        t = p_32(t);
        m_17 = t;
        t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(m_17));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm All_1 (ATerm t, ATerm o_32 (ATerm))
{
  ATerm t_17 = NULL,u_17 = NULL;
  t_17 = t;
  s_17 :
  if(match_cons(t_17, sym_All_1))
    {
      u_17 = ATgetArgument(t_17, 0);
      {
        ATerm w_17 = NULL;
        t = not_null(u_17);
        t = o_32(t);
        w_17 = t;
        t = (ATerm) ATmakeAppl(sym_All_1, not_null(w_17));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Some_1 (ATerm t, ATerm a_0 (ATerm))
{
  ATerm f_18 = NULL,g_18 = NULL;
  f_18 = t;
  e_18 :
  if(match_cons(f_18, sym_Some_1))
    {
      g_18 = ATgetArgument(f_18, 0);
      {
        ATerm h_4 = t;
        if(PushChoice()==0)
          {
            ATerm i_18 = NULL;
            t = not_null(g_18);
            t = a_0(t);
            i_18 = t;
            t = (ATerm) ATmakeAppl(sym_Some_1, not_null(i_18));
            PopChoice();
          }
        else
          {
            t = h_4;
            {
              ATerm l_18 = NULL;
              t = not_null(g_18);
              t = a_0(t);
              l_18 = t;
              t = (ATerm) ATmakeAppl(sym_Some_1, not_null(l_18));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm One_1 (ATerm t, ATerm m_32 (ATerm))
{
  ATerm u_18 = NULL,v_18 = NULL;
  u_18 = t;
  t_18 :
  if(match_cons(u_18, sym_One_1))
    {
      v_18 = ATgetArgument(u_18, 0);
      {
        ATerm x_18 = NULL;
        t = not_null(v_18);
        t = m_32(t);
        x_18 = t;
        t = (ATerm) ATmakeAppl(sym_One_1, not_null(x_18));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm k_32 (ATerm), ATerm l_32 (ATerm))
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
  f_19 = t;
  e_19 :
  if(match_cons(f_19, sym_Cong_2))
    {
      g_19 = ATgetArgument(f_19, 0);
      h_19 = ATgetArgument(f_19, 1);
      {
        ATerm k_19 = NULL;
        t = not_null(g_19);
        {
          ATerm m_19 = NULL;
          t = k_32(t);
          k_19 = t;
          t = not_null(h_19);
          t = l_32(t);
          m_19 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(k_19), not_null(m_19));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Path_2 (ATerm t, ATerm i_32 (ATerm), ATerm j_32 (ATerm))
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
  w_19 = t;
  v_19 :
  if(match_cons(w_19, sym_Path_2))
    {
      x_19 = ATgetArgument(w_19, 0);
      y_19 = ATgetArgument(w_19, 1);
      {
        ATerm b_20 = NULL;
        t = not_null(x_19);
        {
          ATerm d_20 = NULL;
          t = i_32(t);
          b_20 = t;
          t = not_null(y_19);
          t = j_32(t);
          d_20 = t;
          t = (ATerm) ATmakeAppl(sym_Path_2, not_null(b_20), not_null(d_20));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm s_31 (ATerm), ATerm t_31 (ATerm))
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
  m_20 = t;
  l_20 :
  if(match_cons(m_20, sym_Rec_2))
    {
      n_20 = ATgetArgument(m_20, 0);
      o_20 = ATgetArgument(m_20, 1);
      {
        ATerm r_20 = NULL;
        t = not_null(n_20);
        {
          ATerm t_20 = NULL;
          t = s_31(t);
          r_20 = t;
          t = not_null(o_20);
          t = t_31(t);
          t_20 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(r_20), not_null(t_20));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm r_31 (ATerm))
{
  ATerm b_21 = NULL,c_21 = NULL;
  b_21 = t;
  a_21 :
  if(match_cons(b_21, sym_SVar_1))
    {
      c_21 = ATgetArgument(b_21, 0);
      {
        ATerm e_21 = NULL;
        t = not_null(c_21);
        t = r_31(t);
        e_21 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(e_21));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm g_32 (ATerm), ATerm h_32 (ATerm))
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
  m_21 = t;
  l_21 :
  if(match_cons(m_21, sym_Call_2))
    {
      n_21 = ATgetArgument(m_21, 0);
      o_21 = ATgetArgument(m_21, 1);
      {
        ATerm r_21 = NULL;
        t = not_null(n_21);
        {
          ATerm t_21 = NULL;
          t = g_32(t);
          r_21 = t;
          t = not_null(o_21);
          t = h_32(t);
          t_21 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(r_21), not_null(t_21));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm p_31 (ATerm), ATerm q_31 (ATerm))
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
  c_22 = t;
  b_22 :
  if(match_cons(c_22, sym_LChoice_2))
    {
      d_22 = ATgetArgument(c_22, 0);
      e_22 = ATgetArgument(c_22, 1);
      {
        ATerm h_22 = NULL;
        t = not_null(d_22);
        {
          ATerm j_22 = NULL;
          t = p_31(t);
          h_22 = t;
          t = not_null(e_22);
          t = q_31(t);
          j_22 = t;
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_22), not_null(j_22));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm n_31 (ATerm), ATerm o_31 (ATerm))
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  r_22 :
  if(match_cons(s_22, sym_Choice_2))
    {
      t_22 = ATgetArgument(s_22, 0);
      u_22 = ATgetArgument(s_22, 1);
      {
        ATerm x_22 = NULL;
        t = not_null(t_22);
        {
          ATerm z_22 = NULL;
          t = n_31(t);
          x_22 = t;
          t = not_null(u_22);
          t = o_31(t);
          z_22 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(x_22), not_null(z_22));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm l_31 (ATerm), ATerm m_31 (ATerm))
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL;
  i_23 = t;
  h_23 :
  if(match_cons(i_23, sym_Seq_2))
    {
      j_23 = ATgetArgument(i_23, 0);
      k_23 = ATgetArgument(i_23, 1);
      {
        ATerm n_23 = NULL;
        t = not_null(j_23);
        {
          ATerm p_23 = NULL;
          t = l_31(t);
          n_23 = t;
          t = not_null(k_23);
          t = m_31(t);
          p_23 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_23), not_null(p_23));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Test_1 (ATerm t, ATerm j_31 (ATerm))
{
  ATerm x_23 = NULL,y_23 = NULL;
  x_23 = t;
  w_23 :
  if(match_cons(x_23, sym_Test_1))
    {
      y_23 = ATgetArgument(x_23, 0);
      {
        ATerm a_24 = NULL;
        t = not_null(y_23);
        t = j_31(t);
        a_24 = t;
        t = (ATerm) ATmakeAppl(sym_Test_1, not_null(a_24));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Not_1 (ATerm t, ATerm k_31 (ATerm))
{
  ATerm h_24 = NULL,i_24 = NULL;
  h_24 = t;
  g_24 :
  if(match_cons(h_24, sym_Not_1))
    {
      i_24 = ATgetArgument(h_24, 0);
      {
        ATerm k_24 = NULL;
        t = not_null(i_24);
        t = k_31(t);
        k_24 = t;
        t = (ATerm) ATmakeAppl(sym_Not_1, not_null(k_24));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm p_24 = NULL;
  p_24 = t;
  o_24 :
  if(!(match_cons(p_24, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm r_24 = NULL;
  r_24 = t;
  q_24 :
  if(!(match_cons(r_24, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm i_4 = t;
  if(PushChoice()==0)
    {
      ATerm w_24 = NULL;
      w_24 = t;
      s_24 :
      if(!(match_cons(w_24, sym_Id_0)))
        {
          if(!(match_cons(w_24, sym_Fail_0)))
            _fail(t);
        }
      PopChoice();
    }
  else
    {
      t = i_4;
      {
        ATerm j_4 = t;
        if(PushChoice()==0)
          {
            t = Not_1(t, strategy_expression_0);
            PopChoice();
          }
        else
          {
            t = j_4;
            {
              ATerm k_4 = t;
              if(PushChoice()==0)
                {
                  t = Test_1(t, strategy_expression_0);
                  PopChoice();
                }
              else
                {
                  t = k_4;
                  {
                    ATerm l_4 = t;
                    if(PushChoice()==0)
                      {
                        t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                        PopChoice();
                      }
                    else
                      {
                        t = l_4;
                        {
                          ATerm m_4 = t;
                          if(PushChoice()==0)
                            {
                              t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                              PopChoice();
                            }
                          else
                            {
                              t = m_4;
                              {
                                ATerm n_4 = t;
                                if(PushChoice()==0)
                                  {
                                    t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = n_4;
                                    {
                                      ATerm o_4 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm k_0 (ATerm t)
                                          {
                                            t = SVar_1(t, is_string_0);
                                            return(t);
                                          }
                                          ATerm l_0 (ATerm t)
                                          {
                                            ATerm x_24 = NULL;
                                            x_24 = t;
                                            t_24 :
                                            if(!(match_cons(x_24, sym_Nil_0)))
                                              _fail(t);
                                            return(t);
                                          }
                                          t = Call_2(t, k_0, l_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = o_4;
                                          {
                                            ATerm p_4 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = Rec_2(t, is_string_0, strategy_expression_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = p_4;
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
                                                        ATerm r_4 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm m_0 (ATerm t)
                                                            {
                                                              t = list_1(t, strategy_expression_0);
                                                              return(t);
                                                            }
                                                            t = Cong_2(t, is_string_0, m_0);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = r_4;
                                                            {
                                                              ATerm s_4 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = One_1(t, strategy_expression_0);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = s_4;
                                                                  {
                                                                    ATerm t_4 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = Some_1(t, strategy_expression_0);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_4;
                                                                        {
                                                                          ATerm u_4 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = All_1(t, strategy_expression_0);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_4;
                                                                              {
                                                                                ATerm v_4 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    t = Thread_1(t, strategy_expression_0);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = v_4;
                                                                                    {
                                                                                      ATerm w_4 = t;
                                                                                      if(PushChoice()==0)
                                                                                        {
                                                                                          t = Build_1(t, term_expression_0);
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = w_4;
                                                                                          {
                                                                                            ATerm x_4 = t;
                                                                                            if(PushChoice()==0)
                                                                                              {
                                                                                                ATerm n_0 (ATerm t)
                                                                                                {
                                                                                                  ATerm o_0 (ATerm t)
                                                                                                  {
                                                                                                    ATerm y_4 = t;
                                                                                                    if(PushChoice()==0)
                                                                                                      {
                                                                                                        t = is_string_0(t);
                                                                                                        PopChoice();
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = y_4;
                                                                                                        t = list_1(t, is_int_0);
                                                                                                      }
                                                                                                    return(t);
                                                                                                  }
                                                                                                  t = list_1(t, o_0);
                                                                                                  return(t);
                                                                                                }
                                                                                                t = Scope_2(t, n_0, strategy_expression_0);
                                                                                                PopChoice();
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = x_4;
                                                                                                {
                                                                                                  ATerm z_4 = t;
                                                                                                  if(PushChoice()==0)
                                                                                                    {
                                                                                                      t = Where_1(t, strategy_expression_0);
                                                                                                      PopChoice();
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = z_4;
                                                                                                      {
                                                                                                        ATerm a_5 = t;
                                                                                                        if(PushChoice()==0)
                                                                                                          {
                                                                                                            ATerm p_0 (ATerm t)
                                                                                                            {
                                                                                                              t = list_1(t, term_expression_0);
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Prim_2(t, is_string_0, p_0);
                                                                                                            PopChoice();
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = a_5;
                                                                                                            {
                                                                                                              ATerm b_5 = t;
                                                                                                              if(PushChoice()==0)
                                                                                                                {
                                                                                                                  ATerm q_0 (ATerm t)
                                                                                                                  {
                                                                                                                    ATerm r_0 (ATerm t)
                                                                                                                    {
                                                                                                                      ATerm c_5 = t;
                                                                                                                      if(PushChoice()==0)
                                                                                                                        {
                                                                                                                          ATerm s_0 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm y_24 = NULL;
                                                                                                                            y_24 = t;
                                                                                                                            u_24 :
                                                                                                                            if(!(match_cons(y_24, sym_Nil_0)))
                                                                                                                              _fail(t);
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          t = SDef_3(t, is_string_0, s_0, strategy_expression_0);
                                                                                                                          PopChoice();
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = c_5;
                                                                                                                          {
                                                                                                                            ATerm t_0 (ATerm t)
                                                                                                                            {
                                                                                                                              t = list_1(t, _id);
                                                                                                                              return(t);
                                                                                                                            }
                                                                                                                            ATerm u_0 (ATerm t)
                                                                                                                            {
                                                                                                                              ATerm z_24 = NULL;
                                                                                                                              z_24 = t;
                                                                                                                              v_24 :
                                                                                                                              if(!(match_cons(z_24, sym_Nil_0)))
                                                                                                                                _fail(t);
                                                                                                                              return(t);
                                                                                                                            }
                                                                                                                            t = SDef_4(t, t_0, is_string_0, u_0, strategy_expression_0);
                                                                                                                          }
                                                                                                                        }
                                                                                                                      return(t);
                                                                                                                    }
                                                                                                                    t = list_1(t, r_0);
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Let_2(t, q_0, strategy_expression_0);
                                                                                                                  PopChoice();
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = b_5;
                                                                                                                  {
                                                                                                                    ATerm d_5 = t;
                                                                                                                    if(PushChoice()==0)
                                                                                                                      {
                                                                                                                        ATerm v_0 (ATerm t)
                                                                                                                        {
                                                                                                                          t = Var_1(t, _id);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm w_0 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm x_0 (ATerm t)
                                                                                                                          {
                                                                                                                            t = Alt_3(t, _id, _id, strategy_expression_0);
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          t = list_1(t, x_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Case_4(t, is_string_0, v_0, w_0, strategy_expression_0);
                                                                                                                        PopChoice();
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = d_5;
                                                                                                                        {
                                                                                                                          ATerm e_5 = t;
                                                                                                                          if(PushChoice()==0)
                                                                                                                            {
                                                                                                                              t = Continue_1(t, is_string_0);
                                                                                                                              PopChoice();
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = e_5;
                                                                                                                              {
                                                                                                                                ATerm f_5 = t;
                                                                                                                                if(PushChoice()==0)
                                                                                                                                  {
                                                                                                                                    ATerm y_0 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = Var_1(t, _id);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = Assign_2(t, y_0, term_expression_0);
                                                                                                                                    PopChoice();
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = f_5;
                                                                                                                                    {
                                                                                                                                      ATerm g_5 = t;
                                                                                                                                      if(PushChoice()==0)
                                                                                                                                        {
                                                                                                                                          ATerm z_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = Var_1(t, _id);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Assign_1(t, z_0);
                                                                                                                                          PopChoice();
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = g_5;
                                                                                                                                          {
                                                                                                                                            ATerm a_1 (ATerm t)
                                                                                                                                            {
                                                                                                                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
                                                                                                                                              return(t);
                                                                                                                                            }
                                                                                                                                            t = debug_1(t, a_1);
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm c_25 = NULL;
  c_25 = t;
  t = SSL_is_string(not_null(c_25));
  return(t);
}
ATerm DontInline_0 (ATerm t)
{
  ATerm g_25 = NULL;
  g_25 = t;
  f_25 :
  if(!(match_cons(g_25, sym_DontInline_0)))
    _fail(t);
  return(t);
}
ATerm SDef_4 (ATerm t, ATerm c_32 (ATerm), ATerm d_32 (ATerm), ATerm e_32 (ATerm), ATerm f_32 (ATerm))
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
  n_25 = t;
  m_25 :
  if(match_cons(n_25, sym_SDef_4))
    {
      o_25 = ATgetArgument(n_25, 0);
      p_25 = ATgetArgument(n_25, 1);
      q_25 = ATgetArgument(n_25, 2);
      r_25 = ATgetArgument(n_25, 3);
      {
        ATerm w_25 = NULL;
        t = not_null(o_25);
        {
          ATerm y_25 = NULL;
          t = c_32(t);
          w_25 = t;
          t = not_null(p_25);
          {
            ATerm a_26 = NULL;
            t = d_32(t);
            y_25 = t;
            t = not_null(q_25);
            {
              ATerm c_26 = NULL;
              t = e_32(t);
              a_26 = t;
              t = not_null(r_25);
              t = f_32(t);
              c_26 = t;
              t = (ATerm) ATmakeAppl(sym_SDef_4, not_null(w_25), not_null(y_25), not_null(a_26), not_null(c_26));
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm w_31 (ATerm), ATerm x_31 (ATerm), ATerm y_31 (ATerm))
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL;
  o_26 = t;
  n_26 :
  if(match_cons(o_26, sym_SDef_3))
    {
      p_26 = ATgetArgument(o_26, 0);
      q_26 = ATgetArgument(o_26, 1);
      r_26 = ATgetArgument(o_26, 2);
      {
        ATerm v_26 = NULL;
        t = not_null(p_26);
        {
          ATerm x_26 = NULL;
          t = w_31(t);
          v_26 = t;
          t = not_null(q_26);
          {
            ATerm z_26 = NULL;
            t = x_31(t);
            x_26 = t;
            t = not_null(r_26);
            t = y_31(t);
            z_26 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(v_26), not_null(x_26), not_null(z_26));
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
  ATerm h_5 = t;
  if(PushChoice()==0)
    {
      ATerm b_1 (ATerm t)
      {
        ATerm i_27 = NULL;
        i_27 = t;
        f_27 :
        if(!(match_cons(i_27, sym_Nil_0)))
          _fail(t);
        return(t);
      }
      t = SDef_3(t, is_string_0, b_1, strategy_expression_0);
      PopChoice();
    }
  else
    {
      t = h_5;
      {
        ATerm j_5 = t;
        if(PushChoice()==0)
          {
            ATerm c_1 (ATerm t)
            {
              ATerm e_1 (ATerm t)
              {
                ATerm j_27 = NULL;
                j_27 = t;
                g_27 :
                if(!(match_cons(j_27, sym_DontInline_0)))
                  _fail(t);
                return(t);
              }
              t = list_1(t, e_1);
              return(t);
            }
            ATerm d_1 (ATerm t)
            {
              ATerm k_27 = NULL;
              k_27 = t;
              h_27 :
              if(!(match_cons(k_27, sym_Nil_0)))
                _fail(t);
              return(t);
            }
            t = SDef_4(t, c_1, is_string_0, d_1, strategy_expression_0);
            PopChoice();
          }
        else
          {
            t = j_5;
            {
              ATerm f_1 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
                return(t);
              }
              t = debug_1(t, f_1);
            }
          }
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm c_46 (ATerm))
{
  ATerm n_27 (ATerm t)
  {
    ATerm l_5 = t;
    if(PushChoice()==0)
      {
        ATerm m_27 = NULL;
        m_27 = t;
        l_27 :
        if(!(match_cons(m_27, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = l_5;
        t = Cons_2(t, c_46, n_27);
      }
    return(t);
  }
  t = n_27(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm m_5 = t;
  if(PushChoice()==0)
    {
      t = list_1(t, strategy_definition_0);
      PopChoice();
    }
  else
    {
      t = m_5;
      {
        ATerm g_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, g_1);
      }
    }
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm p_27 = NULL;
  p_27 = t;
  o_27 :
  if(!(match_cons(p_27, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm b_33 (ATerm), ATerm c_33 (ATerm))
{
  ATerm v_27 = NULL,w_27 = NULL,b_28 = NULL;
  v_27 = t;
  u_27 :
  if(match_cons(v_27, sym_TCons_2))
    {
      w_27 = ATgetArgument(v_27, 0);
      b_28 = ATgetArgument(v_27, 1);
      {
        ATerm i_28 = NULL;
        t = not_null(w_27);
        {
          ATerm l_28 = NULL;
          t = b_33(t);
          i_28 = t;
          t = not_null(b_28);
          t = c_33(t);
          l_28 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_28), not_null(l_28));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm s_28 = NULL;
  ATerm n_5;
  n_5 = t;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm t_28 = NULL,u_28 = NULL;
      t_28 = t;
      r_28 :
      if(match_cons(t_28, sym_Program_1))
        {
          u_28 = ATgetArgument(t_28, 0);
          if(s_28 != NULL && s_28 != u_28)
            _fail(u_28);
          else
            s_28 = u_28;
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1(t, h_1);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_28), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = n_5;
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
  ATerm x_28 = NULL;
  x_28 = t;
  t = SSL_exit(not_null(x_28));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL;
  e_29 = t;
  b_29 :
  if(match_cons(e_29, sym_TCons_2))
    {
      f_29 = ATgetArgument(e_29, 0);
      g_29 = ATgetArgument(e_29, 1);
      c_29 :
      if(match_cons(g_29, sym_TCons_2))
        {
          h_29 = ATgetArgument(g_29, 0);
          i_29 = ATgetArgument(g_29, 1);
          d_29 :
          if(match_cons(i_29, sym_TNil_0))
            {
              ATerm o_5;
              o_5 = t;
              t = SSL_printnl(not_null(f_29), not_null(h_29));
              t = o_5;
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
ATerm try_1 (ATerm t, ATerm o_52 (ATerm))
{
  ATerm p_5 = t;
  if(PushChoice()==0)
    {
      t = o_52(t);
      PopChoice();
    }
  else
    t = p_5;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm u_29 = NULL,w_29 = NULL;
  ATerm t_5 = t;
  if(PushChoice()==0)
    {
      ATerm i_1 (ATerm t)
      {
        ATerm v_5 = t;
        if(PushChoice()==0)
          {
            ATerm k_1 (ATerm t)
            {
              ATerm x_29 = NULL;
              x_29 = t;
              m_29 :
              if(!(match_cons(x_29, sym_Silent_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, k_1);
            PopChoice();
            _fail(t);
          }
        else
          t = v_5;
        return(t);
      }
      ATerm j_1 (ATerm t)
      {
        ATerm l_1 (ATerm t)
        {
          ATerm y_29 = NULL;
          y_29 = t;
          n_29 :
          if(!(match_cons(y_29, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, l_1);
        return(t);
      }
      t = TCons_2(t, i_1, j_1);
      {
        ATerm m_1 (ATerm t)
        {
          ATerm o_1 (ATerm t)
          {
            ATerm z_29 = NULL,a_30 = NULL;
            z_29 = t;
            p_29 :
            if(match_cons(z_29, sym_Runtime_1))
              {
                a_30 = ATgetArgument(z_29, 0);
                if(w_29 != NULL && w_29 != a_30)
                  _fail(a_30);
                else
                  w_29 = a_30;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, o_1);
          return(t);
        }
        ATerm n_1 (ATerm t)
        {
          ATerm p_1 (ATerm t)
          {
            ATerm b_30 = NULL;
            b_30 = t;
            q_29 :
            if(!(match_cons(b_30, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, p_1);
          return(t);
        }
        t = TCons_2(t, m_1, n_1);
        {
          ATerm q_1 (ATerm t)
          {
            ATerm s_1 (ATerm t)
            {
              ATerm c_30 = NULL,d_30 = NULL;
              c_30 = t;
              s_29 :
              if(match_cons(c_30, sym_Program_1))
                {
                  d_30 = ATgetArgument(c_30, 0);
                  if(u_29 != NULL && u_29 != d_30)
                    _fail(d_30);
                  else
                    u_29 = d_30;
                }
              else
                _fail(t);
              return(t);
            }
            t = fetch_1(t, s_1);
            return(t);
          }
          ATerm r_1 (ATerm t)
          {
            ATerm t_1 (ATerm t)
            {
              ATerm e_30 = NULL;
              e_30 = t;
              t_29 :
              if(!(match_cons(e_30, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, _id, t_1);
            return(t);
          }
          t = TCons_2(t, q_1, r_1);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_29), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_29), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      PopChoice();
    }
  else
    t = t_5;
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL;
  l_30 = t;
  i_30 :
  if(match_cons(l_30, sym_TCons_2))
    {
      m_30 = ATgetArgument(l_30, 0);
      n_30 = ATgetArgument(l_30, 1);
      j_30 :
      if(match_cons(n_30, sym_TCons_2))
        {
          o_30 = ATgetArgument(n_30, 0);
          p_30 = ATgetArgument(n_30, 1);
          k_30 :
          if(match_cons(p_30, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(m_30), not_null(o_30));
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
  ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL;
  x_30 = t;
  u_30 :
  if(match_cons(x_30, sym_TCons_2))
    {
      y_30 = ATgetArgument(x_30, 0);
      z_30 = ATgetArgument(x_30, 1);
      v_30 :
      if(match_cons(z_30, sym_TCons_2))
        {
          a_31 = ATgetArgument(z_30, 0);
          b_31 = ATgetArgument(z_30, 1);
          w_30 :
          if(match_cons(b_31, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(y_30), not_null(a_31));
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
  ATerm u_32 = NULL;
  ATerm w_5;
  w_5 = t;
  {
    ATerm u_1 (ATerm t)
    {
      ATerm x_5 = t;
      if(PushChoice()==0)
        {
          ATerm w_1 (ATerm t)
          {
            ATerm v_32 = NULL,d_33 = NULL;
            v_32 = t;
            z_31 :
            if(match_cons(v_32, sym_Output_1))
              {
                d_33 = ATgetArgument(v_32, 0);
                if(u_32 != NULL && u_32 != d_33)
                  _fail(d_33);
                else
                  u_32 = d_33;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, w_1);
          PopChoice();
        }
      else
        {
          t = x_5;
          {
            ATerm e_33 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            e_33 = t;
            if(u_32 != NULL && u_32 != e_33)
              _fail(e_33);
            else
              u_32 = e_33;
          }
        }
      return(t);
    }
    ATerm v_1 (ATerm t)
    {
      ATerm x_1 (ATerm t)
      {
        ATerm h_33 = NULL;
        h_33 = t;
        b_32 :
        if(!(match_cons(h_33, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, _id, x_1);
      return(t);
    }
    t = TCons_2(t, u_1, v_1);
  }
  t = w_5;
  {
    ATerm y_1 (ATerm t)
    {
      ATerm z_1 (ATerm t)
      {
        ATerm b_2 (ATerm t)
        {
          t = not_null(u_32);
          return(t);
        }
        t = split_2(t, b_2, _id);
        return(t);
      }
      ATerm a_2 (ATerm t)
      {
        ATerm i_33 = NULL;
        i_33 = t;
        n_32 :
        if(!(match_cons(i_33, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, z_1, a_2);
      return(t);
    }
    t = TCons_2(t, _id, y_1);
    {
      ATerm y_5 = t;
      if(PushChoice()==0)
        {
          ATerm c_2 (ATerm t)
          {
            ATerm e_2 (ATerm t)
            {
              ATerm j_33 = NULL;
              j_33 = t;
              q_32 :
              if(!(match_cons(j_33, sym_Binary_0)))
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
              ATerm k_33 = NULL;
              k_33 = t;
              r_32 :
              if(!(match_cons(k_33, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, WriteToBinaryFile_0, f_2);
            return(t);
          }
          t = TCons_2(t, c_2, d_2);
          PopChoice();
        }
      else
        {
          t = y_5;
          {
            ATerm g_2 (ATerm t)
            {
              ATerm h_2 (ATerm t)
              {
                ATerm l_33 = NULL;
                l_33 = t;
                s_32 :
                if(!(match_cons(l_33, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, WriteToTextFile_0, h_2);
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
ATerm apply_strategy_1 (ATerm t, ATerm q_37 (ATerm))
{
  ATerm t_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL;
  ATerm z_5;
  z_5 = t;
  t = dtime_0(t);
  t = z_5;
  t = q_37(t);
  {
    ATerm d_6;
    d_6 = t;
    {
      ATerm u_33 = NULL;
      t = dtime_0(t);
      u_33 = t;
      if(t_33 != NULL && t_33 != u_33)
        _fail(u_33);
      else
        t_33 = u_33;
    }
    t = d_6;
    v_33 = t;
    q_33 :
    if(match_cons(v_33, sym_TCons_2))
      {
        w_33 = ATgetArgument(v_33, 0);
        x_33 = ATgetArgument(v_33, 1);
        r_33 :
        if(match_cons(x_33, sym_TCons_2))
          {
            y_33 = ATgetArgument(x_33, 0);
            z_33 = ATgetArgument(x_33, 1);
            s_33 :
            if(match_cons(z_33, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(t_33)), not_null(w_33)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_33), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm f_34 = NULL;
  f_34 = t;
  t = SSL_ReadFromFile(not_null(f_34));
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_39 (ATerm), ATerm r_39 (ATerm))
{
  ATerm l_34 = NULL;
  ATerm n_34 = NULL;
  l_34 = t;
  {
    ATerm p_34 = NULL;
    t = q_39(t);
    n_34 = t;
    t = not_null(l_34);
    t = r_39(t);
    p_34 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_34), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_34 = NULL;
  ATerm f_6;
  f_6 = t;
  {
    ATerm g_6 = t;
    if(PushChoice()==0)
      {
        ATerm i_2 (ATerm t)
        {
          ATerm y_34 = NULL,z_34 = NULL;
          y_34 = t;
          v_34 :
          if(match_cons(y_34, sym_Input_1))
            {
              z_34 = ATgetArgument(y_34, 0);
              if(x_34 != NULL && x_34 != z_34)
                _fail(z_34);
              else
                x_34 = z_34;
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
        t = g_6;
        {
          ATerm a_35 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          a_35 = t;
          if(x_34 != NULL && x_34 != a_35)
            _fail(a_35);
          else
            x_34 = a_35;
        }
      }
  }
  t = f_6;
  {
    ATerm j_2 (ATerm t)
    {
      t = not_null(x_34);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, j_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_35 = NULL;
  e_35 = t;
  d_35 :
  if(!(match_cons(e_35, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm q_27 (ATerm))
{
  ATerm i_35 = NULL,j_35 = NULL;
  i_35 = t;
  h_35 :
  if(match_cons(i_35, sym_Undefined_1))
    {
      j_35 = ATgetArgument(i_35, 0);
      {
        ATerm l_35 = NULL;
        t = not_null(j_35);
        t = q_27(t);
        l_35 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_35));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm q_35 = NULL;
  q_35 = t;
  p_35 :
  if(!(match_cons(q_35, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm j_46 (ATerm))
{
  ATerm r_35 (ATerm t)
  {
    ATerm h_6 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, j_46, _id);
        PopChoice();
      }
    else
      {
        t = h_6;
        t = Cons_2(t, _id, r_35);
      }
    return(t);
  }
  t = r_35(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_36 (ATerm))
{
  t = fetch_1(t, u_36);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_37 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm i_6 = t;
    if(PushChoice()==0)
      {
        ATerm u_35 = NULL;
        u_35 = t;
        s_35 :
        if(!(match_cons(u_35, sym_Help_0)))
          _fail(t);
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
              {
                ATerm v_35 = NULL;
                v_35 = t;
                t_35 :
                if(!(match_cons(v_35, sym_Version_0)))
                  _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, k_2);
  t = p_37(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL;
  ATerm n_6;
  n_6 = t;
  {
    ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL;
    e_36 = t;
    x_35 :
    if(match_cons(e_36, sym_TCons_2))
      {
        f_36 = ATgetArgument(e_36, 0);
        g_36 = ATgetArgument(e_36, 1);
        y_35 :
        if(match_cons(g_36, sym_TCons_2))
          {
            h_36 = ATgetArgument(g_36, 0);
            i_36 = ATgetArgument(g_36, 1);
            z_35 :
            if(match_cons(i_36, sym_TCons_2))
              {
                j_36 = ATgetArgument(i_36, 0);
                k_36 = ATgetArgument(i_36, 1);
                a_36 :
                if(match_cons(k_36, sym_TNil_0))
                  {
                    if(b_36 != NULL && b_36 != f_36)
                      _fail(f_36);
                    else
                      b_36 = f_36;
                    if(c_36 != NULL && c_36 != h_36)
                      _fail(h_36);
                    else
                      c_36 = h_36;
                    if(d_36 != NULL && d_36 != j_36)
                      _fail(j_36);
                    else
                      d_36 = j_36;
                    t = SSL_table_put(not_null(b_36), not_null(c_36), not_null(d_36));
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
  t = n_6;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_36 = NULL;
  t_36 = t;
  t = SSL_table_create(not_null(t_36));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_37 = NULL;
  b_37 = t;
  {
    ATerm p_6;
    p_6 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_37), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = p_6;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm n_36 (ATerm), ATerm o_36 (ATerm))
{
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
  k_37 = t;
  j_37 :
  if(match_cons(k_37, sym_Cons_2))
    {
      l_37 = ATgetArgument(k_37, 0);
      m_37 = ATgetArgument(k_37, 1);
      {
        ATerm r_37 = NULL;
        t = not_null(l_37);
        t = n_36(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = o_36(t);
        r_37 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_37), not_null(m_37));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm p_36 (ATerm), ATerm q_36 (ATerm))
{
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL;
  a_38 = t;
  x_37 :
  if(match_cons(a_38, sym_Cons_2))
    {
      b_38 = ATgetArgument(a_38, 0);
      c_38 = ATgetArgument(a_38, 1);
      y_37 :
      if(match_cons(c_38, sym_Cons_2))
        {
          d_38 = ATgetArgument(c_38, 0);
          e_38 = ATgetArgument(c_38, 1);
          {
            ATerm i_38 = NULL;
            t = not_null(b_38);
            t = p_36(t);
            t = not_null(d_38);
            t = q_36(t);
            i_38 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_38), not_null(e_38));
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
  ATerm q_6 = t;
  if(PushChoice()==0)
    {
      ATerm l_2 (ATerm t)
      {
        ATerm g_39 = NULL;
        g_39 = t;
        m_38 :
        if(!(match_string(g_39, "-S")))
          _fail(t);
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, l_2, m_2);
      PopChoice();
    }
  else
    {
      t = q_6;
      {
        ATerm r_6 = t;
        if(PushChoice()==0)
          {
            ATerm n_2 (ATerm t)
            {
              ATerm h_39 = NULL;
              h_39 = t;
              n_38 :
              if(!(match_string(h_39, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm o_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, n_2, o_2);
            PopChoice();
          }
        else
          {
            t = r_6;
            {
              ATerm s_6 = t;
              if(PushChoice()==0)
                {
                  ATerm p_2 (ATerm t)
                  {
                    ATerm i_39 = NULL;
                    i_39 = t;
                    o_38 :
                    if(!(match_string(i_39, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm q_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, p_2, q_2);
                  PopChoice();
                }
              else
                {
                  t = s_6;
                  {
                    ATerm t_6 = t;
                    if(PushChoice()==0)
                      {
                        ATerm r_2 (ATerm t)
                        {
                          ATerm j_39 = NULL;
                          j_39 = t;
                          p_38 :
                          if(!(match_string(j_39, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm s_2 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, r_2, s_2);
                        PopChoice();
                      }
                    else
                      {
                        t = t_6;
                        {
                          ATerm u_6 = t;
                          if(PushChoice()==0)
                            {
                              ATerm t_2 (ATerm t)
                              {
                                ATerm k_39 = NULL;
                                k_39 = t;
                                q_38 :
                                if(!(match_string(k_39, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm u_2 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, t_2, u_2);
                              PopChoice();
                            }
                          else
                            {
                              t = u_6;
                              {
                                ATerm z_6 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm v_2 (ATerm t)
                                    {
                                      ATerm l_39 = NULL;
                                      l_39 = t;
                                      r_38 :
                                      if(!(match_string(l_39, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm w_2 (ATerm t)
                                    {
                                      ATerm m_39 = NULL;
                                      m_39 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(m_39));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, v_2, w_2);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = z_6;
                                    {
                                      ATerm a_7 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm x_2 (ATerm t)
                                          {
                                            ATerm o_39 = NULL;
                                            o_39 = t;
                                            t_38 :
                                            if(!(match_string(o_39, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm y_2 (ATerm t)
                                          {
                                            ATerm p_39 = NULL;
                                            p_39 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_39));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, x_2, y_2);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = a_7;
                                          {
                                            ATerm c_7 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm z_2 (ATerm t)
                                                {
                                                  ATerm t_39 = NULL;
                                                  t_39 = t;
                                                  v_38 :
                                                  if(!(match_string(t_39, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm a_3 (ATerm t)
                                                {
                                                  ATerm u_39 = NULL;
                                                  u_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_39));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, z_2, a_3);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = c_7;
                                                {
                                                  ATerm e_7 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm b_3 (ATerm t)
                                                      {
                                                        ATerm w_39 = NULL;
                                                        w_39 = t;
                                                        x_38 :
                                                        if(!(match_string(w_39, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm c_3 (ATerm t)
                                                      {
                                                        ATerm x_39 = NULL;
                                                        x_39 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_39));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, b_3, c_3);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = e_7;
                                                      {
                                                        ATerm f_7 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm d_3 (ATerm t)
                                                            {
                                                              ATerm z_39 = NULL;
                                                              z_39 = t;
                                                              z_38 :
                                                              if(!(match_string(z_39, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm e_3 (ATerm t)
                                                            {
                                                              ATerm a_40 = NULL;
                                                              a_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_40));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, d_3, e_3);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = f_7;
                                                            {
                                                              ATerm g_7 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm f_3 (ATerm t)
                                                                  {
                                                                    ATerm c_40 = NULL;
                                                                    c_40 = t;
                                                                    b_39 :
                                                                    if(!(match_string(c_40, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm g_3 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, f_3, g_3);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = g_7;
                                                                  {
                                                                    ATerm h_7 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm h_3 (ATerm t)
                                                                        {
                                                                          ATerm d_40 = NULL;
                                                                          d_40 = t;
                                                                          c_39 :
                                                                          if(!(match_string(d_40, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm i_3 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, h_3, i_3);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = h_7;
                                                                        {
                                                                          ATerm i_7 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm j_3 (ATerm t)
                                                                              {
                                                                                ATerm e_40 = NULL;
                                                                                e_40 = t;
                                                                                d_39 :
                                                                                if(!(match_string(e_40, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm k_3 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, j_3, k_3);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = i_7;
                                                                              {
                                                                                ATerm j_7 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm l_3 (ATerm t)
                                                                                    {
                                                                                      ATerm f_40 = NULL;
                                                                                      f_40 = t;
                                                                                      e_39 :
                                                                                      if(!(match_string(f_40, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm m_3 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, l_3, m_3);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_7;
                                                                                    {
                                                                                      ATerm n_3 (ATerm t)
                                                                                      {
                                                                                        ATerm g_40 = NULL;
                                                                                        g_40 = t;
                                                                                        f_39 :
                                                                                        if(!(match_string(g_40, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm o_3 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, n_3, o_3);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
  o_40 = t;
  n_40 :
  if(match_cons(o_40, sym_Cons_2))
    {
      p_40 = ATgetArgument(o_40, 0);
      q_40 = ATgetArgument(o_40, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_40)), not_null(q_40));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_33 (ATerm), ATerm g_33 (ATerm))
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
  y_40 = t;
  x_40 :
  if(match_cons(y_40, sym_Cons_2))
    {
      z_40 = ATgetArgument(y_40, 0);
      a_41 = ATgetArgument(y_40, 1);
      {
        ATerm d_41 = NULL;
        t = not_null(z_40);
        {
          ATerm f_41 = NULL;
          t = f_33(t);
          d_41 = t;
          t = not_null(a_41);
          t = g_33(t);
          f_41 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_41), not_null(f_41));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm l_41 = NULL;
  l_41 = t;
  k_41 :
  if(!(match_cons(l_41, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_36 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm o_41 = NULL;
    o_41 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_41));
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    ATerm k_7 = t;
    if(PushChoice()==0)
      {
        ATerm l_7 = t;
        if(PushChoice()==0)
          {
            ATerm q_41 = NULL;
            q_41 = t;
            n_41 :
            if(!(match_cons(q_41, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = l_7;
            t = l_36(t);
            t = Cons_2(t, _id, q_3);
          }
        PopChoice();
      }
    else
      {
        t = k_7;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, p_3, q_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm e_37 (ATerm), ATerm f_37 (ATerm), ATerm g_37 (ATerm))
{
  ATerm r_3 (ATerm t)
  {
    ATerm p_7 = t;
    if(PushChoice()==0)
      {
        t = f_37(t);
        PopChoice();
      }
    else
      {
        t = p_7;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, r_3);
  t = store_options_0(t);
  {
    ATerm r_7 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, g_37);
        PopChoice();
      }
    else
      {
        t = r_7;
        {
          ATerm s_7 = t;
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
              t = s_7;
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
  ATerm s_3 (ATerm t)
  {
    ATerm t_3 (ATerm t)
    {
      ATerm u_3 (ATerm t)
      {
        ATerm u_41 = NULL;
        u_41 = t;
        t_41 :
        if(!(match_cons(u_41, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, w_36, u_3);
      return(t);
    }
    t = TCons_2(t, _id, t_3);
    return(t);
  }
  t = iowrap_2(t, s_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
