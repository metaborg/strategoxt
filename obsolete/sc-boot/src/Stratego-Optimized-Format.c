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
ATerm debug_1 (ATerm, ATerm m_39 (ATerm));
ATerm Var_1 (ATerm, ATerm w_31 (ATerm));
ATerm Assign_1 (ATerm, ATerm d_29 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm o_30 (ATerm));
ATerm Op_2 (ATerm, ATerm a_32 (ATerm), ATerm b_32 (ATerm));
ATerm Str_1 (ATerm, ATerm l_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm k_0 (ATerm));
ATerm Int_1 (ATerm, ATerm j_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm Continue_1 (ATerm, ATerm a_29 (ATerm));
ATerm Alt_3 (ATerm, ATerm x_28 (ATerm), ATerm y_28 (ATerm), ATerm z_28 (ATerm));
ATerm Case_4 (ATerm, ATerm q_28 (ATerm), ATerm r_28 (ATerm), ATerm s_28 (ATerm), ATerm t_28 (ATerm));
ATerm Let_2 (ATerm, ATerm n_32 (ATerm), ATerm o_32 (ATerm));
ATerm Prim_2 (ATerm, ATerm s_33 (ATerm), ATerm t_33 (ATerm));
ATerm Where_1 (ATerm, ATerm r_33 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm p_33 (ATerm), ATerm q_33 (ATerm));
ATerm Build_1 (ATerm, ATerm m_33 (ATerm));
ATerm Thread_1 (ATerm, ATerm i_33 (ATerm));
ATerm All_1 (ATerm, ATerm h_33 (ATerm));
ATerm Some_1 (ATerm, ATerm g_0 (ATerm));
ATerm One_1 (ATerm, ATerm f_33 (ATerm));
ATerm Cong_2 (ATerm, ATerm d_33 (ATerm), ATerm e_33 (ATerm));
ATerm Path_2 (ATerm, ATerm b_33 (ATerm), ATerm c_33 (ATerm));
ATerm Rec_2 (ATerm, ATerm l_32 (ATerm), ATerm m_32 (ATerm));
ATerm SVar_1 (ATerm, ATerm k_32 (ATerm));
ATerm Call_2 (ATerm, ATerm z_32 (ATerm), ATerm a_33 (ATerm));
ATerm LChoice_2 (ATerm, ATerm i_32 (ATerm), ATerm j_32 (ATerm));
ATerm Choice_2 (ATerm, ATerm g_32 (ATerm), ATerm h_32 (ATerm));
ATerm Seq_2 (ATerm, ATerm e_32 (ATerm), ATerm f_32 (ATerm));
ATerm Test_1 (ATerm, ATerm c_32 (ATerm));
ATerm Not_1 (ATerm, ATerm d_32 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm DontInline_0 (ATerm);
ATerm SDef_4 (ATerm, ATerm v_32 (ATerm), ATerm w_32 (ATerm), ATerm x_32 (ATerm), ATerm y_32 (ATerm));
ATerm SDef_3 (ATerm, ATerm p_32 (ATerm), ATerm q_32 (ATerm), ATerm r_32 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm v_47 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm u_33 (ATerm), ATerm v_33 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm c_39 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm g_41 (ATerm), ATerm h_41 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm b_39 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_48 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm i_37 (ATerm));
ATerm map_1 (ATerm, ATerm t_47 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm m_53 (ATerm), ATerm n_53 (ATerm));
ATerm repeat_1 (ATerm, ATerm p_53 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_37 (ATerm));
ATerm Program_1 (ATerm, ATerm i_28 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm j_28 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_48 (ATerm));
ATerm option_defined_1 (ATerm, ATerm g_38 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm j_54 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm m_37 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_33 (ATerm), ATerm z_33 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm k_37 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm j_37 (ATerm));
ATerm iowrap_3 (ATerm, ATerm q_38 (ATerm), ATerm r_38 (ATerm), ATerm s_38 (ATerm));
ATerm iowrap_2 (ATerm, ATerm l_38 (ATerm), ATerm m_38 (ATerm));
ATerm iowrap_1 (ATerm, ATerm i_38 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm m_39 (ATerm))
{
  ATerm y_3;
  y_3 = t;
  {
    ATerm m_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm n_0 (ATerm t)
    {
      ATerm q_5 = NULL;
      ATerm s_5 = NULL;
      q_5 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = m_39(t);
      s_5 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_5), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_5), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, m_0, n_0);
    t = printnl_0(t);
  }
  t = y_3;
  return(t);
}
ATerm Var_1 (ATerm t, ATerm w_31 (ATerm))
{
  ATerm z_5 = NULL,a_6 = NULL;
  z_5 = t;
  y_5 :
  if(match_cons(z_5, sym_Var_1))
    {
      a_6 = ATgetArgument(z_5, 0);
      {
        ATerm c_6 = NULL;
        t = not_null(a_6);
        t = w_31(t);
        c_6 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Assign_1 (ATerm t, ATerm d_29 (ATerm))
{
  ATerm j_6 = NULL,k_6 = NULL;
  j_6 = t;
  i_6 :
  if(match_cons(j_6, sym_Assign_1))
    {
      k_6 = ATgetArgument(j_6, 0);
      {
        ATerm m_6 = NULL;
        t = not_null(k_6);
        t = d_29(t);
        m_6 = t;
        t = (ATerm) ATmakeAppl(sym_Assign_1, not_null(m_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm o_30 (ATerm))
{
  ATerm t_6 = NULL,u_6 = NULL;
  t_6 = t;
  s_6 :
  if(match_cons(t_6, sym_BuildDefault_1))
    {
      u_6 = ATgetArgument(t_6, 0);
      {
        ATerm w_6 = NULL;
        t = not_null(u_6);
        t = o_30(t);
        w_6 = t;
        t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(w_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm a_32 (ATerm), ATerm b_32 (ATerm))
{
  ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL;
  e_7 = t;
  d_7 :
  if(match_cons(e_7, sym_Op_2))
    {
      f_7 = ATgetArgument(e_7, 0);
      g_7 = ATgetArgument(e_7, 1);
      {
        ATerm j_7 = NULL;
        t = not_null(f_7);
        {
          ATerm l_7 = NULL;
          t = a_32(t);
          j_7 = t;
          t = not_null(g_7);
          t = b_32(t);
          l_7 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(j_7), not_null(l_7));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm l_0 (ATerm))
{
  ATerm v_7 = NULL,w_7 = NULL;
  v_7 = t;
  u_7 :
  if(match_cons(v_7, sym_Str_1))
    {
      w_7 = ATgetArgument(v_7, 0);
      {
        ATerm z_3 = t;
        if(PushChoice()==0)
          {
            ATerm y_7 = NULL;
            t = not_null(w_7);
            t = l_0(t);
            y_7 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(y_7));
            PopChoice();
          }
        else
          {
            t = z_3;
            {
              ATerm b_8 = NULL;
              t = not_null(w_7);
              t = l_0(t);
              b_8 = t;
              t = (ATerm) ATmakeAppl(sym_Str_1, not_null(b_8));
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
  ATerm i_8 = NULL;
  i_8 = t;
  t = SSL_is_real(not_null(i_8));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm x_8 = NULL,y_8 = NULL;
  x_8 = t;
  w_8 :
  if(match_cons(x_8, sym_Real_1))
    {
      y_8 = ATgetArgument(x_8, 0);
      {
        ATerm a_4 = t;
        if(PushChoice()==0)
          {
            ATerm a_9 = NULL;
            t = not_null(y_8);
            t = k_0(t);
            a_9 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, not_null(a_9));
            PopChoice();
          }
        else
          {
            t = a_4;
            {
              ATerm g_9 = NULL;
              t = not_null(y_8);
              t = k_0(t);
              g_9 = t;
              t = (ATerm) ATmakeAppl(sym_Real_1, not_null(g_9));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Int_1 (ATerm t, ATerm j_0 (ATerm))
{
  ATerm r_9 = NULL,s_9 = NULL;
  r_9 = t;
  q_9 :
  if(match_cons(r_9, sym_Int_1))
    {
      s_9 = ATgetArgument(r_9, 0);
      {
        ATerm b_4 = t;
        if(PushChoice()==0)
          {
            ATerm u_9 = NULL;
            t = not_null(s_9);
            t = j_0(t);
            u_9 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, not_null(u_9));
            PopChoice();
          }
        else
          {
            t = b_4;
            {
              ATerm y_9 = NULL;
              t = not_null(s_9);
              t = j_0(t);
              y_9 = t;
              t = (ATerm) ATmakeAppl(sym_Int_1, not_null(y_9));
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
  ATerm f_10 = NULL;
  f_10 = t;
  e_10 :
  if(!(match_cons(f_10, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm c_4 = t;
  if(PushChoice()==0)
    {
      t = Wld_0(t);
      PopChoice();
    }
  else
    {
      t = c_4;
      {
        ATerm d_4 = t;
        if(PushChoice()==0)
          {
            t = Var_1(t, is_string_0);
            PopChoice();
          }
        else
          {
            t = d_4;
            {
              ATerm e_4 = t;
              if(PushChoice()==0)
                {
                  t = Int_1(t, is_int_0);
                  PopChoice();
                }
              else
                {
                  t = e_4;
                  {
                    ATerm f_4 = t;
                    if(PushChoice()==0)
                      {
                        t = Real_1(t, is_real_0);
                        PopChoice();
                      }
                    else
                      {
                        t = f_4;
                        {
                          ATerm g_4 = t;
                          if(PushChoice()==0)
                            {
                              t = Str_1(t, is_string_0);
                              PopChoice();
                            }
                          else
                            {
                              t = g_4;
                              {
                                ATerm h_4 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm o_0 (ATerm t)
                                    {
                                      t = list_1(t, term_expression_0);
                                      return(t);
                                    }
                                    t = Op_2(t, is_string_0, o_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = h_4;
                                    {
                                      ATerm i_4 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = BuildDefault_1(t, term_expression_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = i_4;
                                          {
                                            ATerm p_0 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
                                              return(t);
                                            }
                                            t = debug_1(t, p_0);
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Assign_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm o_10 = NULL,y_10 = NULL,z_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym_Assign_2))
    {
      y_10 = ATgetArgument(o_10, 0);
      z_10 = ATgetArgument(o_10, 1);
      {
        ATerm j_4 = t;
        if(PushChoice()==0)
          {
            ATerm f_11 = NULL;
            t = not_null(y_10);
            {
              ATerm s_11 = NULL;
              t = h_0(t);
              f_11 = t;
              t = not_null(z_10);
              t = i_0(t);
              s_11 = t;
              t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(f_11), not_null(s_11));
            }
            PopChoice();
          }
        else
          {
            t = j_4;
            {
              ATerm w_11 = NULL;
              t = not_null(y_10);
              {
                ATerm y_11 = NULL;
                t = h_0(t);
                w_11 = t;
                t = not_null(z_10);
                t = i_0(t);
                y_11 = t;
                t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(w_11), not_null(y_11));
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Continue_1 (ATerm t, ATerm a_29 (ATerm))
{
  ATerm q_12 = NULL,s_12 = NULL;
  q_12 = t;
  k_12 :
  if(match_cons(q_12, sym_Continue_1))
    {
      s_12 = ATgetArgument(q_12, 0);
      {
        ATerm u_12 = NULL;
        t = not_null(s_12);
        t = a_29(t);
        u_12 = t;
        t = (ATerm) ATmakeAppl(sym_Continue_1, not_null(u_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Alt_3 (ATerm t, ATerm x_28 (ATerm), ATerm y_28 (ATerm), ATerm z_28 (ATerm))
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,i_13 = NULL;
  e_13 = t;
  d_13 :
  if(match_cons(e_13, sym_Alt_3))
    {
      f_13 = ATgetArgument(e_13, 0);
      g_13 = ATgetArgument(e_13, 1);
      i_13 = ATgetArgument(e_13, 2);
      {
        ATerm m_13 = NULL;
        t = not_null(f_13);
        {
          ATerm o_13 = NULL;
          t = x_28(t);
          m_13 = t;
          t = not_null(g_13);
          {
            ATerm q_13 = NULL;
            t = y_28(t);
            o_13 = t;
            t = not_null(i_13);
            t = z_28(t);
            q_13 = t;
            t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(m_13), not_null(o_13), not_null(q_13));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Case_4 (ATerm t, ATerm q_28 (ATerm), ATerm r_28 (ATerm), ATerm s_28 (ATerm), ATerm t_28 (ATerm))
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  c_14 = t;
  b_14 :
  if(match_cons(c_14, sym_Case_4))
    {
      d_14 = ATgetArgument(c_14, 0);
      e_14 = ATgetArgument(c_14, 1);
      f_14 = ATgetArgument(c_14, 2);
      g_14 = ATgetArgument(c_14, 3);
      {
        ATerm l_14 = NULL;
        t = not_null(d_14);
        {
          ATerm n_14 = NULL;
          t = q_28(t);
          l_14 = t;
          t = not_null(e_14);
          {
            ATerm p_14 = NULL;
            t = r_28(t);
            n_14 = t;
            t = not_null(f_14);
            {
              ATerm r_14 = NULL;
              t = s_28(t);
              p_14 = t;
              t = not_null(g_14);
              t = t_28(t);
              r_14 = t;
              t = (ATerm) ATmakeAppl(sym_Case_4, not_null(l_14), not_null(n_14), not_null(p_14), not_null(r_14));
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm n_32 (ATerm), ATerm o_32 (ATerm))
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
  c_15 = t;
  b_15 :
  if(match_cons(c_15, sym_Let_2))
    {
      d_15 = ATgetArgument(c_15, 0);
      e_15 = ATgetArgument(c_15, 1);
      {
        ATerm h_15 = NULL;
        t = not_null(d_15);
        {
          ATerm j_15 = NULL;
          t = n_32(t);
          h_15 = t;
          t = not_null(e_15);
          t = o_32(t);
          j_15 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(h_15), not_null(j_15));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm s_33 (ATerm), ATerm t_33 (ATerm))
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  v_15 = t;
  u_15 :
  if(match_cons(v_15, sym_Prim_2))
    {
      w_15 = ATgetArgument(v_15, 0);
      x_15 = ATgetArgument(v_15, 1);
      {
        ATerm a_16 = NULL;
        t = not_null(w_15);
        {
          ATerm c_16 = NULL;
          t = s_33(t);
          a_16 = t;
          t = not_null(x_15);
          t = t_33(t);
          c_16 = t;
          t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(a_16), not_null(c_16));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Where_1 (ATerm t, ATerm r_33 (ATerm))
{
  ATerm k_16 = NULL,l_16 = NULL;
  k_16 = t;
  j_16 :
  if(match_cons(k_16, sym_Where_1))
    {
      l_16 = ATgetArgument(k_16, 0);
      {
        ATerm n_16 = NULL;
        t = not_null(l_16);
        t = r_33(t);
        n_16 = t;
        t = (ATerm) ATmakeAppl(sym_Where_1, not_null(n_16));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm s_16 = NULL;
  s_16 = t;
  t = SSL_is_int(not_null(s_16));
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm p_33 (ATerm), ATerm q_33 (ATerm))
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
  z_16 = t;
  y_16 :
  if(match_cons(z_16, sym_Scope_2))
    {
      a_17 = ATgetArgument(z_16, 0);
      b_17 = ATgetArgument(z_16, 1);
      {
        ATerm e_17 = NULL;
        t = not_null(a_17);
        {
          ATerm g_17 = NULL;
          t = p_33(t);
          e_17 = t;
          t = not_null(b_17);
          t = q_33(t);
          g_17 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_17), not_null(g_17));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm m_33 (ATerm))
{
  ATerm o_17 = NULL,p_17 = NULL;
  o_17 = t;
  n_17 :
  if(match_cons(o_17, sym_Build_1))
    {
      p_17 = ATgetArgument(o_17, 0);
      {
        ATerm r_17 = NULL;
        t = not_null(p_17);
        t = m_33(t);
        r_17 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(r_17));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm i_33 (ATerm))
{
  ATerm y_17 = NULL,z_17 = NULL;
  y_17 = t;
  x_17 :
  if(match_cons(y_17, sym_Thread_1))
    {
      z_17 = ATgetArgument(y_17, 0);
      {
        ATerm b_18 = NULL;
        t = not_null(z_17);
        t = i_33(t);
        b_18 = t;
        t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(b_18));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm All_1 (ATerm t, ATerm h_33 (ATerm))
{
  ATerm i_18 = NULL,j_18 = NULL;
  i_18 = t;
  h_18 :
  if(match_cons(i_18, sym_All_1))
    {
      j_18 = ATgetArgument(i_18, 0);
      {
        ATerm l_18 = NULL;
        t = not_null(j_18);
        t = h_33(t);
        l_18 = t;
        t = (ATerm) ATmakeAppl(sym_All_1, not_null(l_18));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Some_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm u_18 = NULL,v_18 = NULL;
  u_18 = t;
  t_18 :
  if(match_cons(u_18, sym_Some_1))
    {
      v_18 = ATgetArgument(u_18, 0);
      {
        ATerm k_4 = t;
        if(PushChoice()==0)
          {
            ATerm x_18 = NULL;
            t = not_null(v_18);
            t = g_0(t);
            x_18 = t;
            t = (ATerm) ATmakeAppl(sym_Some_1, not_null(x_18));
            PopChoice();
          }
        else
          {
            t = k_4;
            {
              ATerm a_19 = NULL;
              t = not_null(v_18);
              t = g_0(t);
              a_19 = t;
              t = (ATerm) ATmakeAppl(sym_Some_1, not_null(a_19));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm One_1 (ATerm t, ATerm f_33 (ATerm))
{
  ATerm j_19 = NULL,k_19 = NULL;
  j_19 = t;
  i_19 :
  if(match_cons(j_19, sym_One_1))
    {
      k_19 = ATgetArgument(j_19, 0);
      {
        ATerm m_19 = NULL;
        t = not_null(k_19);
        t = f_33(t);
        m_19 = t;
        t = (ATerm) ATmakeAppl(sym_One_1, not_null(m_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm d_33 (ATerm), ATerm e_33 (ATerm))
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
  v_19 = t;
  t_19 :
  if(match_cons(v_19, sym_Cong_2))
    {
      w_19 = ATgetArgument(v_19, 0);
      x_19 = ATgetArgument(v_19, 1);
      {
        ATerm a_20 = NULL;
        t = not_null(w_19);
        {
          ATerm c_20 = NULL;
          t = d_33(t);
          a_20 = t;
          t = not_null(x_19);
          t = e_33(t);
          c_20 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(a_20), not_null(c_20));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Path_2 (ATerm t, ATerm b_33 (ATerm), ATerm c_33 (ATerm))
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
  l_20 = t;
  k_20 :
  if(match_cons(l_20, sym_Path_2))
    {
      m_20 = ATgetArgument(l_20, 0);
      n_20 = ATgetArgument(l_20, 1);
      {
        ATerm q_20 = NULL;
        t = not_null(m_20);
        {
          ATerm s_20 = NULL;
          t = b_33(t);
          q_20 = t;
          t = not_null(n_20);
          t = c_33(t);
          s_20 = t;
          t = (ATerm) ATmakeAppl(sym_Path_2, not_null(q_20), not_null(s_20));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm l_32 (ATerm), ATerm m_32 (ATerm))
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
  b_21 = t;
  a_21 :
  if(match_cons(b_21, sym_Rec_2))
    {
      c_21 = ATgetArgument(b_21, 0);
      d_21 = ATgetArgument(b_21, 1);
      {
        ATerm g_21 = NULL;
        t = not_null(c_21);
        {
          ATerm i_21 = NULL;
          t = l_32(t);
          g_21 = t;
          t = not_null(d_21);
          t = m_32(t);
          i_21 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(g_21), not_null(i_21));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm k_32 (ATerm))
{
  ATerm q_21 = NULL,r_21 = NULL;
  q_21 = t;
  p_21 :
  if(match_cons(q_21, sym_SVar_1))
    {
      r_21 = ATgetArgument(q_21, 0);
      {
        ATerm t_21 = NULL;
        t = not_null(r_21);
        t = k_32(t);
        t_21 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(t_21));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm z_32 (ATerm), ATerm a_33 (ATerm))
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
  b_22 = t;
  a_22 :
  if(match_cons(b_22, sym_Call_2))
    {
      c_22 = ATgetArgument(b_22, 0);
      d_22 = ATgetArgument(b_22, 1);
      {
        ATerm g_22 = NULL;
        t = not_null(c_22);
        {
          ATerm i_22 = NULL;
          t = z_32(t);
          g_22 = t;
          t = not_null(d_22);
          t = a_33(t);
          i_22 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(g_22), not_null(i_22));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm i_32 (ATerm), ATerm j_32 (ATerm))
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
  r_22 = t;
  q_22 :
  if(match_cons(r_22, sym_LChoice_2))
    {
      s_22 = ATgetArgument(r_22, 0);
      t_22 = ATgetArgument(r_22, 1);
      {
        ATerm w_22 = NULL;
        t = not_null(s_22);
        {
          ATerm y_22 = NULL;
          t = i_32(t);
          w_22 = t;
          t = not_null(t_22);
          t = j_32(t);
          y_22 = t;
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(w_22), not_null(y_22));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm g_32 (ATerm), ATerm h_32 (ATerm))
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL;
  h_23 = t;
  g_23 :
  if(match_cons(h_23, sym_Choice_2))
    {
      i_23 = ATgetArgument(h_23, 0);
      j_23 = ATgetArgument(h_23, 1);
      {
        ATerm m_23 = NULL;
        t = not_null(i_23);
        {
          ATerm o_23 = NULL;
          t = g_32(t);
          m_23 = t;
          t = not_null(j_23);
          t = h_32(t);
          o_23 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(m_23), not_null(o_23));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm e_32 (ATerm), ATerm f_32 (ATerm))
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
  x_23 = t;
  w_23 :
  if(match_cons(x_23, sym_Seq_2))
    {
      y_23 = ATgetArgument(x_23, 0);
      z_23 = ATgetArgument(x_23, 1);
      {
        ATerm c_24 = NULL;
        t = not_null(y_23);
        {
          ATerm e_24 = NULL;
          t = e_32(t);
          c_24 = t;
          t = not_null(z_23);
          t = f_32(t);
          e_24 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_24), not_null(e_24));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Test_1 (ATerm t, ATerm c_32 (ATerm))
{
  ATerm m_24 = NULL,n_24 = NULL;
  m_24 = t;
  l_24 :
  if(match_cons(m_24, sym_Test_1))
    {
      n_24 = ATgetArgument(m_24, 0);
      {
        ATerm p_24 = NULL;
        t = not_null(n_24);
        t = c_32(t);
        p_24 = t;
        t = (ATerm) ATmakeAppl(sym_Test_1, not_null(p_24));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Not_1 (ATerm t, ATerm d_32 (ATerm))
{
  ATerm w_24 = NULL,x_24 = NULL;
  w_24 = t;
  v_24 :
  if(match_cons(w_24, sym_Not_1))
    {
      x_24 = ATgetArgument(w_24, 0);
      {
        ATerm z_24 = NULL;
        t = not_null(x_24);
        t = d_32(t);
        z_24 = t;
        t = (ATerm) ATmakeAppl(sym_Not_1, not_null(z_24));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm e_25 = NULL;
  e_25 = t;
  d_25 :
  if(!(match_cons(e_25, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm g_25 = NULL;
  g_25 = t;
  f_25 :
  if(!(match_cons(g_25, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm l_4 = t;
  if(PushChoice()==0)
    {
      t = Id_0(t);
      PopChoice();
    }
  else
    {
      t = l_4;
      {
        ATerm m_4 = t;
        if(PushChoice()==0)
          {
            t = Fail_0(t);
            PopChoice();
          }
        else
          {
            t = m_4;
            {
              ATerm n_4 = t;
              if(PushChoice()==0)
                {
                  t = Not_1(t, strategy_expression_0);
                  PopChoice();
                }
              else
                {
                  t = n_4;
                  {
                    ATerm o_4 = t;
                    if(PushChoice()==0)
                      {
                        t = Test_1(t, strategy_expression_0);
                        PopChoice();
                      }
                    else
                      {
                        t = o_4;
                        {
                          ATerm p_4 = t;
                          if(PushChoice()==0)
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              PopChoice();
                            }
                          else
                            {
                              t = p_4;
                              {
                                ATerm q_4 = t;
                                if(PushChoice()==0)
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = q_4;
                                    {
                                      ATerm r_4 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = r_4;
                                          {
                                            ATerm s_4 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm q_0 (ATerm t)
                                                {
                                                  t = SVar_1(t, is_string_0);
                                                  return(t);
                                                }
                                                t = Call_2(t, q_0, Nil_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = s_4;
                                                {
                                                  ATerm t_4 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = Rec_2(t, is_string_0, strategy_expression_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = t_4;
                                                      {
                                                        ATerm u_4 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = Path_2(t, is_int_0, strategy_expression_0);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = u_4;
                                                            {
                                                              ATerm v_4 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm r_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = Cong_2(t, is_string_0, r_0);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = v_4;
                                                                  {
                                                                    ATerm w_4 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = One_1(t, strategy_expression_0);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = w_4;
                                                                        {
                                                                          ATerm x_4 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = Some_1(t, strategy_expression_0);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = x_4;
                                                                              {
                                                                                ATerm y_4 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    t = All_1(t, strategy_expression_0);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = y_4;
                                                                                    {
                                                                                      ATerm z_4 = t;
                                                                                      if(PushChoice()==0)
                                                                                        {
                                                                                          t = Thread_1(t, strategy_expression_0);
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = z_4;
                                                                                          {
                                                                                            ATerm a_5 = t;
                                                                                            if(PushChoice()==0)
                                                                                              {
                                                                                                t = Build_1(t, term_expression_0);
                                                                                                PopChoice();
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = a_5;
                                                                                                {
                                                                                                  ATerm b_5 = t;
                                                                                                  if(PushChoice()==0)
                                                                                                    {
                                                                                                      ATerm s_0 (ATerm t)
                                                                                                      {
                                                                                                        ATerm t_0 (ATerm t)
                                                                                                        {
                                                                                                          ATerm c_5 = t;
                                                                                                          if(PushChoice()==0)
                                                                                                            {
                                                                                                              t = is_string_0(t);
                                                                                                              PopChoice();
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = c_5;
                                                                                                              t = list_1(t, is_int_0);
                                                                                                            }
                                                                                                          return(t);
                                                                                                        }
                                                                                                        t = list_1(t, t_0);
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Scope_2(t, s_0, strategy_expression_0);
                                                                                                      PopChoice();
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = b_5;
                                                                                                      {
                                                                                                        ATerm d_5 = t;
                                                                                                        if(PushChoice()==0)
                                                                                                          {
                                                                                                            t = Where_1(t, strategy_expression_0);
                                                                                                            PopChoice();
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = d_5;
                                                                                                            {
                                                                                                              ATerm e_5 = t;
                                                                                                              if(PushChoice()==0)
                                                                                                                {
                                                                                                                  ATerm u_0 (ATerm t)
                                                                                                                  {
                                                                                                                    t = list_1(t, term_expression_0);
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Prim_2(t, is_string_0, u_0);
                                                                                                                  PopChoice();
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = e_5;
                                                                                                                  {
                                                                                                                    ATerm f_5 = t;
                                                                                                                    if(PushChoice()==0)
                                                                                                                      {
                                                                                                                        ATerm v_0 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm w_0 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm g_5 = t;
                                                                                                                            if(PushChoice()==0)
                                                                                                                              {
                                                                                                                                t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                PopChoice();
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = g_5;
                                                                                                                                {
                                                                                                                                  ATerm x_0 (ATerm t)
                                                                                                                                  {
                                                                                                                                    t = list_1(t, _id);
                                                                                                                                    return(t);
                                                                                                                                  }
                                                                                                                                  t = SDef_4(t, x_0, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                }
                                                                                                                              }
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          t = list_1(t, w_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Let_2(t, v_0, strategy_expression_0);
                                                                                                                        PopChoice();
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = f_5;
                                                                                                                        {
                                                                                                                          ATerm h_5 = t;
                                                                                                                          if(PushChoice()==0)
                                                                                                                            {
                                                                                                                              ATerm y_0 (ATerm t)
                                                                                                                              {
                                                                                                                                t = Var_1(t, _id);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm z_0 (ATerm t)
                                                                                                                              {
                                                                                                                                ATerm a_1 (ATerm t)
                                                                                                                                {
                                                                                                                                  t = Alt_3(t, _id, _id, strategy_expression_0);
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = list_1(t, a_1);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Case_4(t, is_string_0, y_0, z_0, strategy_expression_0);
                                                                                                                              PopChoice();
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = h_5;
                                                                                                                              {
                                                                                                                                ATerm i_5 = t;
                                                                                                                                if(PushChoice()==0)
                                                                                                                                  {
                                                                                                                                    t = Continue_1(t, is_string_0);
                                                                                                                                    PopChoice();
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = i_5;
                                                                                                                                    {
                                                                                                                                      ATerm j_5 = t;
                                                                                                                                      if(PushChoice()==0)
                                                                                                                                        {
                                                                                                                                          ATerm b_1 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = Var_1(t, _id);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Assign_2(t, b_1, term_expression_0);
                                                                                                                                          PopChoice();
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = j_5;
                                                                                                                                          {
                                                                                                                                            ATerm k_5 = t;
                                                                                                                                            if(PushChoice()==0)
                                                                                                                                              {
                                                                                                                                                ATerm c_1 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  t = Var_1(t, _id);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Assign_1(t, c_1);
                                                                                                                                                PopChoice();
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = k_5;
                                                                                                                                                {
                                                                                                                                                  ATerm d_1 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = debug_1(t, d_1);
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm j_25 = NULL;
  j_25 = t;
  t = SSL_is_string(not_null(j_25));
  return(t);
}
ATerm DontInline_0 (ATerm t)
{
  ATerm n_25 = NULL;
  n_25 = t;
  m_25 :
  if(!(match_cons(n_25, sym_DontInline_0)))
    _fail(t);
  return(t);
}
ATerm SDef_4 (ATerm t, ATerm v_32 (ATerm), ATerm w_32 (ATerm), ATerm x_32 (ATerm), ATerm y_32 (ATerm))
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL;
  u_25 = t;
  t_25 :
  if(match_cons(u_25, sym_SDef_4))
    {
      v_25 = ATgetArgument(u_25, 0);
      w_25 = ATgetArgument(u_25, 1);
      x_25 = ATgetArgument(u_25, 2);
      y_25 = ATgetArgument(u_25, 3);
      {
        ATerm d_26 = NULL;
        t = not_null(v_25);
        {
          ATerm f_26 = NULL;
          t = v_32(t);
          d_26 = t;
          t = not_null(w_25);
          {
            ATerm h_26 = NULL;
            t = w_32(t);
            f_26 = t;
            t = not_null(x_25);
            {
              ATerm j_26 = NULL;
              t = x_32(t);
              h_26 = t;
              t = not_null(y_25);
              t = y_32(t);
              j_26 = t;
              t = (ATerm) ATmakeAppl(sym_SDef_4, not_null(d_26), not_null(f_26), not_null(h_26), not_null(j_26));
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm p_32 (ATerm), ATerm q_32 (ATerm), ATerm r_32 (ATerm))
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
  v_26 = t;
  u_26 :
  if(match_cons(v_26, sym_SDef_3))
    {
      w_26 = ATgetArgument(v_26, 0);
      x_26 = ATgetArgument(v_26, 1);
      y_26 = ATgetArgument(v_26, 2);
      {
        ATerm c_27 = NULL;
        t = not_null(w_26);
        {
          ATerm j_27 = NULL;
          t = p_32(t);
          c_27 = t;
          t = not_null(x_26);
          {
            ATerm l_27 = NULL;
            t = q_32(t);
            j_27 = t;
            t = not_null(y_26);
            t = r_32(t);
            l_27 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(c_27), not_null(j_27), not_null(l_27));
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
  ATerm l_5 = t;
  if(PushChoice()==0)
    {
      t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
      PopChoice();
    }
  else
    {
      t = l_5;
      {
        ATerm m_5 = t;
        if(PushChoice()==0)
          {
            ATerm e_1 (ATerm t)
            {
              t = list_1(t, DontInline_0);
              return(t);
            }
            t = SDef_4(t, e_1, is_string_0, Nil_0, strategy_expression_0);
            PopChoice();
          }
        else
          {
            t = m_5;
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
ATerm list_1 (ATerm t, ATerm v_47 (ATerm))
{
  ATerm t_27 (ATerm t)
  {
    ATerm n_5 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = n_5;
        t = Cons_2(t, v_47, t_27);
      }
    return(t);
  }
  t = t_27(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm o_5 = t;
  if(PushChoice()==0)
    {
      t = list_1(t, strategy_definition_0);
      PopChoice();
    }
  else
    {
      t = o_5;
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
  ATerm v_27 = NULL;
  v_27 = t;
  u_27 :
  if(!(match_cons(v_27, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm u_33 (ATerm), ATerm v_33 (ATerm))
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
  a_28 = t;
  z_27 :
  if(match_cons(a_28, sym_TCons_2))
    {
      b_28 = ATgetArgument(a_28, 0);
      c_28 = ATgetArgument(a_28, 1);
      {
        ATerm f_28 = NULL;
        t = not_null(b_28);
        {
          ATerm h_28 = NULL;
          t = u_33(t);
          f_28 = t;
          t = not_null(c_28);
          t = v_33(t);
          h_28 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_28), not_null(h_28));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm u_28 = NULL;
  ATerm p_5;
  p_5 = t;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm v_28 = NULL,w_28 = NULL;
      v_28 = t;
      p_28 :
      if(match_cons(v_28, sym_Program_1))
        {
          w_28 = ATgetArgument(v_28, 0);
          if(u_28 != NULL && u_28 != w_28)
            _fail(w_28);
          else
            u_28 = w_28;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, h_1);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_28), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = p_5;
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
  ATerm i_29 = NULL,j_29 = NULL;
  ATerm i_1 (ATerm t)
  {
    ATerm j_1 (ATerm t)
    {
      ATerm r_5 = t;
      if(PushChoice()==0)
        {
          ATerm l_1 (ATerm t)
          {
            ATerm k_29 = NULL;
            k_29 = t;
            c_29 :
            if(!(match_cons(k_29, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, l_1);
          PopChoice();
          _fail(t);
        }
      else
        t = r_5;
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
          ATerm l_29 = NULL,m_29 = NULL;
          l_29 = t;
          f_29 :
          if(match_cons(l_29, sym_Runtime_1))
            {
              m_29 = ATgetArgument(l_29, 0);
              if(j_29 != NULL && j_29 != m_29)
                _fail(m_29);
              else
                j_29 = m_29;
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
      {
        ATerm p_1 (ATerm t)
        {
          ATerm r_1 (ATerm t)
          {
            ATerm n_29 = NULL,o_29 = NULL;
            n_29 = t;
            h_29 :
            if(match_cons(n_29, sym_Program_1))
              {
                o_29 = ATgetArgument(n_29, 0);
                if(i_29 != NULL && i_29 != o_29)
                  _fail(o_29);
                else
                  i_29 = o_29;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, r_1);
          return(t);
        }
        ATerm q_1 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, p_1, q_1);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_29), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_29), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, i_1);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL;
  v_29 = t;
  s_29 :
  if(match_cons(v_29, sym_TCons_2))
    {
      w_29 = ATgetArgument(v_29, 0);
      x_29 = ATgetArgument(v_29, 1);
      t_29 :
      if(match_cons(x_29, sym_TCons_2))
        {
          y_29 = ATgetArgument(x_29, 0);
          z_29 = ATgetArgument(x_29, 1);
          u_29 :
          if(match_cons(z_29, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(w_29), not_null(y_29));
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
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL;
  h_30 = t;
  e_30 :
  if(match_cons(h_30, sym_TCons_2))
    {
      i_30 = ATgetArgument(h_30, 0);
      j_30 = ATgetArgument(h_30, 1);
      f_30 :
      if(match_cons(j_30, sym_TCons_2))
        {
          k_30 = ATgetArgument(j_30, 0);
          l_30 = ATgetArgument(j_30, 1);
          g_30 :
          if(match_cons(l_30, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(i_30), not_null(k_30));
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
  ATerm u_30 = NULL;
  ATerm t_5;
  t_5 = t;
  {
    ATerm s_1 (ATerm t)
    {
      ATerm u_5 = t;
      if(PushChoice()==0)
        {
          ATerm u_1 (ATerm t)
          {
            ATerm v_30 = NULL,w_30 = NULL;
            v_30 = t;
            r_30 :
            if(match_cons(v_30, sym_Output_1))
              {
                w_30 = ATgetArgument(v_30, 0);
                if(u_30 != NULL && u_30 != w_30)
                  _fail(w_30);
                else
                  u_30 = w_30;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, u_1);
          PopChoice();
        }
      else
        {
          t = u_5;
          {
            ATerm x_30 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            x_30 = t;
            if(u_30 != NULL && u_30 != x_30)
              _fail(x_30);
            else
              u_30 = x_30;
          }
        }
      return(t);
    }
    ATerm t_1 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, s_1, t_1);
  }
  t = t_5;
  {
    ATerm v_1 (ATerm t)
    {
      ATerm w_1 (ATerm t)
      {
        ATerm x_1 (ATerm t)
        {
          t = not_null(u_30);
          return(t);
        }
        t = split_2(t, x_1, _id);
        return(t);
      }
      t = TCons_2(t, w_1, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, v_1);
    {
      ATerm v_5 = t;
      if(PushChoice()==0)
        {
          ATerm y_1 (ATerm t)
          {
            ATerm a_2 (ATerm t)
            {
              ATerm y_30 = NULL;
              y_30 = t;
              t_30 :
              if(!(match_cons(y_30, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, a_2);
            return(t);
          }
          ATerm z_1 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, y_1, z_1);
          PopChoice();
        }
      else
        {
          t = v_5;
          {
            ATerm b_2 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, b_2);
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
ATerm apply_strategy_1 (ATerm t, ATerm c_39 (ATerm))
{
  ATerm g_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL;
  ATerm w_5;
  w_5 = t;
  t = dtime_0(t);
  t = w_5;
  t = c_39(t);
  {
    ATerm x_5;
    x_5 = t;
    {
      ATerm h_31 = NULL;
      t = dtime_0(t);
      h_31 = t;
      if(g_31 != NULL && g_31 != h_31)
        _fail(h_31);
      else
        g_31 = h_31;
    }
    t = x_5;
    i_31 = t;
    d_31 :
    if(match_cons(i_31, sym_TCons_2))
      {
        j_31 = ATgetArgument(i_31, 0);
        k_31 = ATgetArgument(i_31, 1);
        e_31 :
        if(match_cons(k_31, sym_TCons_2))
          {
            l_31 = ATgetArgument(k_31, 0);
            m_31 = ATgetArgument(k_31, 1);
            f_31 :
            if(match_cons(m_31, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(g_31)), not_null(j_31)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_31), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm s_31 = NULL;
  s_31 = t;
  t = SSL_ReadFromFile(not_null(s_31));
  return(t);
}
ATerm split_2 (ATerm t, ATerm g_41 (ATerm), ATerm h_41 (ATerm))
{
  ATerm z_31 = NULL;
  ATerm t_32 = NULL;
  z_31 = t;
  {
    ATerm g_33 = NULL;
    t = g_41(t);
    t_32 = t;
    t = not_null(z_31);
    t = h_41(t);
    g_33 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_33), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm a_34 = NULL;
  ATerm b_6;
  b_6 = t;
  {
    ATerm d_6 = t;
    if(PushChoice()==0)
      {
        ATerm c_2 (ATerm t)
        {
          ATerm b_34 = NULL,c_34 = NULL;
          b_34 = t;
          w_33 :
          if(match_cons(b_34, sym_Input_1))
            {
              c_34 = ATgetArgument(b_34, 0);
              if(a_34 != NULL && a_34 != c_34)
                _fail(c_34);
              else
                a_34 = c_34;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, c_2);
        PopChoice();
      }
    else
      {
        t = d_6;
        {
          ATerm d_34 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          d_34 = t;
          if(a_34 != NULL && a_34 != d_34)
            _fail(d_34);
          else
            a_34 = d_34;
        }
      }
  }
  t = b_6;
  {
    ATerm d_2 (ATerm t)
    {
      t = not_null(a_34);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, d_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_34 = NULL;
  h_34 = t;
  g_34 :
  if(!(match_cons(h_34, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm b_39 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    ATerm e_6 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = e_6;
        {
          ATerm f_6 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = f_6;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, e_2);
  t = b_39(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm j_34 = NULL;
  j_34 = t;
  t = SSL_table_create(not_null(j_34));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm n_34 = NULL;
  n_34 = t;
  {
    ATerm g_6;
    g_6 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_34), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = g_6;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL;
  z_34 = t;
  t_34 :
  if(match_cons(z_34, sym_Cons_2))
    {
      v_34 = ATgetArgument(z_34, 0);
      w_34 = ATgetArgument(z_34, 1);
      u_34 :
      if(match_cons(w_34, sym_Cons_2))
        {
          x_34 = ATgetArgument(w_34, 0);
          y_34 = ATgetArgument(w_34, 1);
          {
            ATerm d_35 = NULL;
            t = not_null(v_34);
            t = d_0(t);
            t = not_null(x_34);
            t = e_0(t);
            d_35 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_35), not_null(y_34));
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(z_34, "register-usage-info"))
        t = register_usage_1(t, f_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm h_6 = t;
  if(PushChoice()==0)
    {
      ATerm f_2 (ATerm t)
      {
        ATerm t_35 = NULL;
        t_35 = t;
        i_35 :
        if(!(match_string(t_35, "-S")))
          {
            if(!(match_string(t_35, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm g_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm h_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, f_2, g_2, h_2);
      PopChoice();
    }
  else
    {
      t = h_6;
      {
        ATerm l_6 = t;
        if(PushChoice()==0)
          {
            ATerm i_2 (ATerm t)
            {
              ATerm u_35 = NULL;
              u_35 = t;
              j_35 :
              if(!(match_string(u_35, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm j_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm k_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, i_2, j_2, k_2);
            PopChoice();
          }
        else
          {
            t = l_6;
            {
              ATerm n_6 = t;
              if(PushChoice()==0)
                {
                  ATerm l_2 (ATerm t)
                  {
                    ATerm v_35 = NULL;
                    v_35 = t;
                    k_35 :
                    if(!(match_string(v_35, "-v")))
                      {
                        if(!(match_string(v_35, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm m_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm n_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, l_2, m_2, n_2);
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
                          ATerm w_35 = NULL;
                          w_35 = t;
                          l_35 :
                          if(!(match_string(w_35, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm p_2 (ATerm t)
                        {
                          ATerm x_35 = NULL;
                          x_35 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(x_35));
                          return(t);
                        }
                        ATerm q_2 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, o_2, p_2, q_2);
                        PopChoice();
                      }
                    else
                      {
                        t = o_6;
                        {
                          ATerm p_6 = t;
                          if(PushChoice()==0)
                            {
                              ATerm r_2 (ATerm t)
                              {
                                ATerm z_35 = NULL;
                                z_35 = t;
                                n_35 :
                                if(!(match_string(z_35, "-i")))
                                  {
                                    if(!(match_string(z_35, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm s_2 (ATerm t)
                              {
                                ATerm a_36 = NULL;
                                a_36 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_36));
                                return(t);
                              }
                              ATerm t_2 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, r_2, s_2, t_2);
                              PopChoice();
                            }
                          else
                            {
                              t = p_6;
                              {
                                ATerm q_6 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm u_2 (ATerm t)
                                    {
                                      ATerm c_36 = NULL;
                                      c_36 = t;
                                      p_35 :
                                      if(!(match_string(c_36, "-o")))
                                        {
                                          if(!(match_string(c_36, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm v_2 (ATerm t)
                                    {
                                      ATerm d_36 = NULL;
                                      d_36 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_36));
                                      return(t);
                                    }
                                    ATerm w_2 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, u_2, v_2, w_2);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = q_6;
                                    {
                                      ATerm r_6 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm x_2 (ATerm t)
                                          {
                                            ATerm f_36 = NULL;
                                            f_36 = t;
                                            r_35 :
                                            if(!(match_string(f_36, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm y_2 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm z_2 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, x_2, y_2, z_2);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = r_6;
                                          {
                                            ATerm a_3 (ATerm t)
                                            {
                                              ATerm g_36 = NULL;
                                              g_36 = t;
                                              s_35 :
                                              if(!(match_string(g_36, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm b_3 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm c_3 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, a_3, b_3, c_3);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm l_36 = NULL;
  l_36 = t;
  t = SSL_table_destroy(not_null(l_36));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm p_36 = NULL;
  p_36 = t;
  t = SSL_exit(not_null(p_36));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm t_36 = NULL;
  t_36 = t;
  t = SSL_implode_string(not_null(t_36));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_48 (ATerm))
{
  ATerm w_36 (ATerm t)
  {
    ATerm v_6 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, w_36);
        PopChoice();
      }
    else
      {
        t = v_6;
        t = Nil_0(t);
        t = h_48(t);
      }
    return(t);
  }
  t = w_36(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm x_6 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = x_6;
      {
        ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
        z_36 = t;
        y_36 :
        if(match_cons(z_36, sym_Cons_2))
          {
            a_37 = ATgetArgument(z_36, 0);
            b_37 = ATgetArgument(z_36, 1);
            t = not_null(a_37);
            {
              ATerm d_3 (ATerm t)
              {
                t = not_null(b_37);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, d_3);
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
  ATerm n_37 = NULL;
  n_37 = t;
  t = SSL_explode_string(not_null(n_37));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm i_37 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm t_47 (ATerm))
{
  ATerm q_37 (ATerm t)
  {
    ATerm y_6 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = y_6;
        t = Cons_2(t, t_47, q_37);
      }
    return(t);
  }
  t = q_37(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL;
  w_37 = t;
  s_37 :
  if(match_cons(w_37, sym_TCons_2))
    {
      x_37 = ATgetArgument(w_37, 0);
      y_37 = ATgetArgument(w_37, 1);
      t_37 :
      if(match_cons(x_37, sym_Nil_0))
        {
          u_37 :
          if(match_cons(y_37, sym_TCons_2))
            {
              z_37 = ATgetArgument(y_37, 0);
              a_38 = ATgetArgument(y_37, 1);
              v_37 :
              if(match_cons(a_38, sym_TNil_0))
                t = not_null(z_37);
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
  ATerm k_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL;
  k_38 = t;
  e_38 :
  if(match_cons(k_38, sym_TCons_2))
    {
      n_38 = ATgetArgument(k_38, 0);
      t_38 = ATgetArgument(k_38, 1);
      f_38 :
      if(match_cons(n_38, sym_Cons_2))
        {
          o_38 = ATgetArgument(n_38, 0);
          p_38 = ATgetArgument(n_38, 1);
          h_38 :
          if(match_cons(t_38, sym_TCons_2))
            {
              u_38 = ATgetArgument(t_38, 0);
              v_38 = ATgetArgument(t_38, 1);
              j_38 :
              if(match_cons(v_38, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_38), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_38), not_null(u_38)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm m_53 (ATerm), ATerm n_53 (ATerm))
{
  ATerm a_39 (ATerm t)
  {
    ATerm z_6 = t;
    if(PushChoice()==0)
      {
        t = m_53(t);
        t = a_39(t);
        PopChoice();
      }
    else
      {
        t = z_6;
        t = n_53(t);
      }
    return(t);
  }
  t = a_39(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm p_53 (ATerm))
{
  t = repeat_2(t, p_53, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm e_39 = NULL;
  e_39 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_39), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_37 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm i_28 (ATerm))
{
  ATerm k_39 = NULL,l_39 = NULL;
  k_39 = t;
  j_39 :
  if(match_cons(k_39, sym_Program_1))
    {
      l_39 = ATgetArgument(k_39, 0);
      {
        ATerm o_39 = NULL;
        t = not_null(l_39);
        t = i_28(t);
        o_39 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_39));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm w_39 = NULL;
  ATerm e_3 (ATerm t)
  {
    ATerm f_3 (ATerm t)
    {
      ATerm x_39 = NULL;
      x_39 = t;
      if(w_39 != NULL && w_39 != x_39)
        _fail(x_39);
      else
        w_39 = x_39;
      return(t);
    }
    t = Program_1(t, f_3);
    return(t);
  }
  t = option_defined_1(t, e_3);
  {
    ATerm g_3 (ATerm t)
    {
      ATerm y_39 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm h_3 (ATerm t)
        {
          t = not_null(w_39);
          return(t);
        }
        t = short_description_1(t, h_3);
        t = concat_strings_0(t);
        y_39 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_39), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, g_3);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm i_3 (ATerm t)
      {
        ATerm a_40 = NULL;
        a_40 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_40), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, i_3);
      {
        ATerm j_3 (ATerm t)
        {
          ATerm c_40 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm k_3 (ATerm t)
            {
              t = not_null(w_39);
              return(t);
            }
            t = long_description_1(t, k_3);
            t = concat_strings_0(t);
            c_40 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_40), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = printnl_0(t);
          }
          return(t);
        }
        t = try_1(t, j_3);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL;
  m_40 = t;
  j_40 :
  if(match_cons(m_40, sym_TCons_2))
    {
      n_40 = ATgetArgument(m_40, 0);
      o_40 = ATgetArgument(m_40, 1);
      k_40 :
      if(match_cons(o_40, sym_TCons_2))
        {
          p_40 = ATgetArgument(o_40, 0);
          q_40 = ATgetArgument(o_40, 1);
          l_40 :
          if(match_cons(q_40, sym_TNil_0))
            {
              ATerm a_7;
              a_7 = t;
              t = SSL_printnl(not_null(n_40), not_null(p_40));
              t = a_7;
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
ATerm Undefined_1 (ATerm t, ATerm j_28 (ATerm))
{
  ATerm x_40 = NULL,y_40 = NULL;
  x_40 = t;
  w_40 :
  if(match_cons(x_40, sym_Undefined_1))
    {
      y_40 = ATgetArgument(x_40, 0);
      {
        ATerm a_41 = NULL;
        t = not_null(y_40);
        t = j_28(t);
        a_41 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_41));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm b_48 (ATerm))
{
  ATerm e_41 (ATerm t)
  {
    ATerm b_7 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, b_48, _id);
        PopChoice();
      }
    else
      {
        t = b_7;
        t = Cons_2(t, _id, e_41);
      }
    return(t);
  }
  t = e_41(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm g_38 (ATerm))
{
  t = fetch_1(t, g_38);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_41 = NULL;
  i_41 = t;
  f_41 :
  if(!(match_cons(i_41, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm j_54 (ATerm))
{
  ATerm c_7 = t;
  if(PushChoice()==0)
    {
      t = j_54(t);
      PopChoice();
    }
  else
    t = c_7;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL;
  n_41 = t;
  k_41 :
  if(match_cons(n_41, sym_TCons_2))
    {
      o_41 = ATgetArgument(n_41, 0);
      p_41 = ATgetArgument(n_41, 1);
      l_41 :
      if(match_cons(p_41, sym_TCons_2))
        {
          q_41 = ATgetArgument(p_41, 0);
          r_41 = ATgetArgument(p_41, 1);
          m_41 :
          if(match_cons(r_41, sym_TNil_0))
            t = SSL_table_get(not_null(o_41), not_null(q_41));
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
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL;
  b_42 = t;
  x_41 :
  if(match_cons(b_42, sym_TCons_2))
    {
      c_42 = ATgetArgument(b_42, 0);
      d_42 = ATgetArgument(b_42, 1);
      y_41 :
      if(match_cons(d_42, sym_TCons_2))
        {
          e_42 = ATgetArgument(d_42, 0);
          f_42 = ATgetArgument(d_42, 1);
          z_41 :
          if(match_cons(f_42, sym_TCons_2))
            {
              g_42 = ATgetArgument(f_42, 0);
              h_42 = ATgetArgument(f_42, 1);
              a_42 :
              if(match_cons(h_42, sym_TNil_0))
                {
                  ATerm h_7;
                  h_7 = t;
                  {
                    ATerm l_42 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_42), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm i_7 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = i_7;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      l_42 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_42), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_42), not_null(l_42)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = h_7;
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
ATerm register_usage_1 (ATerm t, ATerm m_37 (ATerm))
{
  ATerm q_42 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = m_37(t);
  q_42 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_42), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
  z_42 = t;
  w_42 :
  if(match_cons(z_42, sym_Cons_2))
    {
      x_42 = ATgetArgument(z_42, 0);
      y_42 = ATgetArgument(z_42, 1);
      {
        ATerm c_43 = NULL;
        t = not_null(x_42);
        t = a_0(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = b_0(t);
        c_43 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_43), not_null(y_42));
      }
    }
  else
    {
      if(match_string(z_42, "register-usage-info"))
        t = register_usage_1(t, c_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm i_43 = NULL;
    i_43 = t;
    h_43 :
    if(!(match_string(i_43, "--help")))
      {
        if(!(match_string(i_43, "-h")))
          {
            if(!(match_string(i_43, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, l_3, m_3, n_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL;
  l_43 = t;
  k_43 :
  if(match_cons(l_43, sym_Cons_2))
    {
      m_43 = ATgetArgument(l_43, 0);
      n_43 = ATgetArgument(l_43, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_43)), not_null(n_43));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_33 (ATerm), ATerm z_33 (ATerm))
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  u_43 :
  if(match_cons(v_43, sym_Cons_2))
    {
      w_43 = ATgetArgument(v_43, 0);
      x_43 = ATgetArgument(v_43, 1);
      {
        ATerm a_44 = NULL;
        t = not_null(w_43);
        {
          ATerm c_44 = NULL;
          t = y_33(t);
          a_44 = t;
          t = not_null(x_43);
          t = z_33(t);
          c_44 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_44), not_null(c_44));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm i_44 = NULL;
  i_44 = t;
  h_44 :
  if(!(match_cons(i_44, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm k_37 (ATerm))
{
  ATerm k_7;
  k_7 = t;
  {
    ATerm o_3 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = k_37(t);
      return(t);
    }
    t = try_1(t, o_3);
  }
  t = k_7;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm k_44 = NULL;
      k_44 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_44));
      return(t);
    }
    ATerm q_3 (ATerm t)
    {
      ATerm m_7 = t;
      if(PushChoice()==0)
        {
          ATerm n_7 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = n_7;
              t = k_37(t);
              t = Cons_2(t, _id, q_3);
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
    t = Cons_2(t, p_3, q_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL;
  ATerm o_7;
  o_7 = t;
  {
    ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL;
    w_44 = t;
    p_44 :
    if(match_cons(w_44, sym_TCons_2))
      {
        x_44 = ATgetArgument(w_44, 0);
        y_44 = ATgetArgument(w_44, 1);
        q_44 :
        if(match_cons(y_44, sym_TCons_2))
          {
            z_44 = ATgetArgument(y_44, 0);
            a_45 = ATgetArgument(y_44, 1);
            r_44 :
            if(match_cons(a_45, sym_TCons_2))
              {
                b_45 = ATgetArgument(a_45, 0);
                c_45 = ATgetArgument(a_45, 1);
                s_44 :
                if(match_cons(c_45, sym_TNil_0))
                  {
                    if(t_44 != NULL && t_44 != x_44)
                      _fail(x_44);
                    else
                      t_44 = x_44;
                    if(u_44 != NULL && u_44 != z_44)
                      _fail(z_44);
                    else
                      u_44 = z_44;
                    if(v_44 != NULL && v_44 != b_45)
                      _fail(b_45);
                    else
                      v_44 = b_45;
                    t = SSL_table_put(not_null(t_44), not_null(u_44), not_null(v_44));
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
  t = o_7;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm j_37 (ATerm))
{
  ATerm f_45 = NULL;
  ATerm p_7;
  p_7 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = p_7;
  {
    ATerm r_3 (ATerm t)
    {
      ATerm q_7 = t;
      if(PushChoice()==0)
        {
          t = j_37(t);
          PopChoice();
        }
      else
        {
          t = q_7;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, r_3);
    {
      ATerm s_3 (ATerm t)
      {
        ATerm r_7 = t;
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
            t = r_7;
            {
              ATerm t_3 (ATerm t)
              {
                ATerm u_3 (ATerm t)
                {
                  ATerm g_45 = NULL;
                  g_45 = t;
                  if(f_45 != NULL && f_45 != g_45)
                    _fail(g_45);
                  else
                    f_45 = g_45;
                  return(t);
                }
                t = Undefined_1(t, u_3);
                return(t);
              }
              t = option_defined_1(t, t_3);
              {
                ATerm s_7;
                s_7 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_45), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = s_7;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, s_3);
      {
        ATerm t_7;
        t_7 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = t_7;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm q_38 (ATerm), ATerm r_38 (ATerm), ATerm s_38 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    ATerm x_7 = t;
    if(PushChoice()==0)
      {
        t = r_38(t);
        PopChoice();
      }
    else
      {
        t = x_7;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, v_3);
  t = store_options_0(t);
  {
    ATerm z_7 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, s_38);
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
              t = apply_strategy_1(t, q_38);
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
ATerm iowrap_2 (ATerm t, ATerm l_38 (ATerm), ATerm m_38 (ATerm))
{
  t = iowrap_3(t, l_38, m_38, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm i_38 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      t = TCons_2(t, i_38, TNil_0);
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
