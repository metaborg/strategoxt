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
ATerm debug_1 (ATerm, ATerm s_39 (ATerm));
ATerm Continue_1 (ATerm, ATerm w_28 (ATerm));
ATerm Var_1 (ATerm, ATerm a_32 (ATerm));
ATerm Assign_1 (ATerm, ATerm z_28 (ATerm));
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm Fun_2 (ATerm, ATerm a_29 (ATerm), ATerm b_29 (ATerm));
ATerm Alt_3 (ATerm, ATerm t_28 (ATerm), ATerm u_28 (ATerm), ATerm v_28 (ATerm));
ATerm case_alternative_1 (ATerm, ATerm b_55 (ATerm));
ATerm Case_4 (ATerm, ATerm m_28 (ATerm), ATerm n_28 (ATerm), ATerm o_28 (ATerm), ATerm p_28 (ATerm));
ATerm Let_2 (ATerm, ATerm r_32 (ATerm), ATerm s_32 (ATerm));
ATerm Prim_2 (ATerm, ATerm w_33 (ATerm), ATerm x_33 (ATerm));
ATerm Where_1 (ATerm, ATerm v_33 (ATerm));
ATerm Scope_2 (ATerm, ATerm t_33 (ATerm), ATerm u_33 (ATerm));
ATerm Build_1 (ATerm, ATerm q_33 (ATerm));
ATerm Op_2 (ATerm, ATerm e_32 (ATerm), ATerm f_32 (ATerm));
ATerm As_2 (ATerm, ATerm q_30 (ATerm), ATerm r_30 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm s_30 (ATerm));
ATerm Str_1 (ATerm, ATerm j_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm i_0 (ATerm));
ATerm Int_1 (ATerm, ATerm h_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm match_term_exp_0 (ATerm);
ATerm Match_1 (ATerm, ATerm p_33 (ATerm));
ATerm Thread_1 (ATerm, ATerm m_33 (ATerm));
ATerm All_1 (ATerm, ATerm l_33 (ATerm));
ATerm Some_1 (ATerm, ATerm g_0 (ATerm));
ATerm One_1 (ATerm, ATerm j_33 (ATerm));
ATerm Cong_2 (ATerm, ATerm h_33 (ATerm), ATerm i_33 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm f_33 (ATerm), ATerm g_33 (ATerm));
ATerm Rec_2 (ATerm, ATerm p_32 (ATerm), ATerm q_32 (ATerm));
ATerm SVar_1 (ATerm, ATerm o_32 (ATerm));
ATerm Call_2 (ATerm, ATerm d_33 (ATerm), ATerm e_33 (ATerm));
ATerm LChoice_2 (ATerm, ATerm m_32 (ATerm), ATerm n_32 (ATerm));
ATerm Choice_2 (ATerm, ATerm k_32 (ATerm), ATerm l_32 (ATerm));
ATerm Seq_2 (ATerm, ATerm i_32 (ATerm), ATerm j_32 (ATerm));
ATerm Test_1 (ATerm, ATerm g_32 (ATerm));
ATerm Not_1 (ATerm, ATerm h_32 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm w_32 (ATerm), ATerm x_32 (ATerm));
ATerm SDef_3 (ATerm, ATerm t_32 (ATerm), ATerm u_32 (ATerm), ATerm v_32 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm b_48 (ATerm));
ATerm Strategies_1 (ATerm, ATerm o_31 (ATerm));
ATerm Specification_1 (ATerm, ATerm q_31 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm a_34 (ATerm), ATerm b_34 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm i_39 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm m_41 (ATerm), ATerm n_41 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm h_39 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_48 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_37 (ATerm));
ATerm map_1 (ATerm, ATerm z_47 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm s_53 (ATerm), ATerm t_53 (ATerm));
ATerm repeat_1 (ATerm, ATerm v_53 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_37 (ATerm));
ATerm Program_1 (ATerm, ATerm f_29 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm g_29 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_48 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_38 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_54 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_37 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm e_34 (ATerm), ATerm f_34 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_37 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_37 (ATerm));
ATerm iowrap_3 (ATerm, ATerm w_38 (ATerm), ATerm x_38 (ATerm), ATerm y_38 (ATerm));
ATerm iowrap_2 (ATerm, ATerm r_38 (ATerm), ATerm s_38 (ATerm));
ATerm iowrap_1 (ATerm, ATerm o_38 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm s_39 (ATerm))
{
  ATerm o_4;
  o_4 = t;
  {
    ATerm m_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm n_0 (ATerm t)
    {
      ATerm a_6 = NULL;
      ATerm c_6 = NULL;
      a_6 = t;
      {
        ATerm d_6 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = s_39(t);
        d_6 = t;
        if(c_6 != NULL && c_6 != d_6)
          _fail(d_6);
        else
          c_6 = d_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Nil_0)));
      }
      return(t);
    }
    t = split_2(t, m_0, n_0);
    t = printnl_0(t);
  }
  t = o_4;
  return(t);
}
ATerm Continue_1 (ATerm t, ATerm w_28 (ATerm))
{
  ATerm j_6 = NULL,k_6 = NULL;
  j_6 = t;
  i_6 :
  if(match_cons(j_6, sym_Continue_1))
    {
      k_6 = ATgetArgument(j_6, 0);
      {
        ATerm m_6 = NULL;
        t = not_null(k_6);
        t = w_28(t);
        m_6 = t;
        t = (ATerm) ATmakeAppl(sym_Continue_1, not_null(m_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm a_32 (ATerm))
{
  ATerm t_6 = NULL,u_6 = NULL;
  t_6 = t;
  s_6 :
  if(match_cons(t_6, sym_Var_1))
    {
      u_6 = ATgetArgument(t_6, 0);
      {
        ATerm w_6 = NULL;
        t = not_null(u_6);
        t = a_32(t);
        w_6 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Assign_1 (ATerm t, ATerm z_28 (ATerm))
{
  ATerm d_7 = NULL,e_7 = NULL;
  d_7 = t;
  c_7 :
  if(match_cons(d_7, sym_Assign_1))
    {
      e_7 = ATgetArgument(d_7, 0);
      {
        ATerm g_7 = NULL;
        t = not_null(e_7);
        t = z_28(t);
        g_7 = t;
        t = (ATerm) ATmakeAppl(sym_Assign_1, not_null(g_7));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm term_expression_0 (ATerm t)
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
                                    t = BuildDefault_1(t, term_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = u_4;
                                    {
                                      ATerm v_4 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm o_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, o_0, term_expression_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = v_4;
                                          {
                                            ATerm w_4 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm p_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, p_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = w_4;
                                                {
                                                  ATerm q_0 (ATerm t)
                                                  {
                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
                                                    return(t);
                                                  }
                                                  t = debug_1(t, q_0);
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Assign_2 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
  s_7 = t;
  r_7 :
  if(match_cons(s_7, sym_Assign_2))
    {
      t_7 = ATgetArgument(s_7, 0);
      u_7 = ATgetArgument(s_7, 1);
      {
        ATerm x_4 = t;
        if(PushChoice()==0)
          {
            ATerm x_7 = NULL;
            t = not_null(t_7);
            {
              ATerm z_7 = NULL;
              t = k_0(t);
              x_7 = t;
              t = not_null(u_7);
              t = l_0(t);
              z_7 = t;
              t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(x_7), not_null(z_7));
            }
            PopChoice();
          }
        else
          {
            t = x_4;
            {
              ATerm d_8 = NULL;
              t = not_null(t_7);
              {
                ATerm f_8 = NULL;
                t = k_0(t);
                d_8 = t;
                t = not_null(u_7);
                t = l_0(t);
                f_8 = t;
                t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(d_8), not_null(f_8));
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fun_2 (ATerm t, ATerm a_29 (ATerm), ATerm b_29 (ATerm))
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL;
  y_8 = t;
  x_8 :
  if(match_cons(y_8, sym_Fun_2))
    {
      z_8 = ATgetArgument(y_8, 0);
      a_9 = ATgetArgument(y_8, 1);
      {
        ATerm d_9 = NULL;
        t = not_null(z_8);
        {
          ATerm i_9 = NULL;
          t = a_29(t);
          d_9 = t;
          t = not_null(a_9);
          t = b_29(t);
          i_9 = t;
          t = (ATerm) ATmakeAppl(sym_Fun_2, not_null(d_9), not_null(i_9));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Alt_3 (ATerm t, ATerm t_28 (ATerm), ATerm u_28 (ATerm), ATerm v_28 (ATerm))
{
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
  s_9 = t;
  r_9 :
  if(match_cons(s_9, sym_Alt_3))
    {
      t_9 = ATgetArgument(s_9, 0);
      u_9 = ATgetArgument(s_9, 1);
      v_9 = ATgetArgument(s_9, 2);
      {
        ATerm a_10 = NULL;
        t = not_null(t_9);
        {
          ATerm c_10 = NULL;
          t = t_28(t);
          a_10 = t;
          t = not_null(u_9);
          {
            ATerm e_10 = NULL;
            t = u_28(t);
            c_10 = t;
            t = not_null(v_9);
            t = v_28(t);
            e_10 = t;
            t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(a_10), not_null(c_10), not_null(e_10));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm case_alternative_1 (ATerm t, ATerm b_55 (ATerm))
{
  ATerm y_4 = t;
  if(PushChoice()==0)
    {
      ATerm r_0 (ATerm t)
      {
        ATerm z_4 = t;
        if(PushChoice()==0)
          {
            t = Fun_2(t, is_string_0, is_int_0);
            PopChoice();
          }
        else
          {
            t = z_4;
            {
              ATerm a_5 = t;
              if(PushChoice()==0)
                {
                  t = Str_1(t, is_string_0);
                  PopChoice();
                }
              else
                {
                  t = a_5;
                  {
                    ATerm b_5 = t;
                    if(PushChoice()==0)
                      {
                        t = Int_1(t, is_int_0);
                        PopChoice();
                      }
                    else
                      {
                        t = b_5;
                        t = Real_1(t, is_real_0);
                      }
                  }
                }
            }
          }
        return(t);
      }
      ATerm s_0 (ATerm t)
      {
        ATerm t_0 (ATerm t)
        {
          t = Var_1(t, is_string_0);
          return(t);
        }
        t = list_1(t, t_0);
        return(t);
      }
      t = Alt_3(t, r_0, s_0, b_55);
      PopChoice();
    }
  else
    {
      t = y_4;
      {
        ATerm u_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a case-alternative: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, u_0);
      }
    }
  return(t);
}
ATerm Case_4 (ATerm t, ATerm m_28 (ATerm), ATerm n_28 (ATerm), ATerm o_28 (ATerm), ATerm p_28 (ATerm))
{
  ATerm q_10 = NULL,r_10 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL;
  q_10 = t;
  p_10 :
  if(match_cons(q_10, sym_Case_4))
    {
      r_10 = ATgetArgument(q_10, 0);
      b_11 = ATgetArgument(q_10, 1);
      c_11 = ATgetArgument(q_10, 2);
      d_11 = ATgetArgument(q_10, 3);
      {
        ATerm w_11 = NULL;
        t = not_null(r_10);
        {
          ATerm y_11 = NULL;
          t = m_28(t);
          w_11 = t;
          t = not_null(b_11);
          {
            ATerm a_12 = NULL;
            t = n_28(t);
            y_11 = t;
            t = not_null(c_11);
            {
              ATerm c_12 = NULL;
              t = o_28(t);
              a_12 = t;
              t = not_null(d_11);
              t = p_28(t);
              c_12 = t;
              t = (ATerm) ATmakeAppl(sym_Case_4, not_null(w_11), not_null(y_11), not_null(a_12), not_null(c_12));
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm r_32 (ATerm), ATerm s_32 (ATerm))
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
  v_12 = t;
  t_12 :
  if(match_cons(v_12, sym_Let_2))
    {
      w_12 = ATgetArgument(v_12, 0);
      x_12 = ATgetArgument(v_12, 1);
      {
        ATerm a_13 = NULL;
        t = not_null(w_12);
        {
          ATerm d_13 = NULL;
          t = r_32(t);
          a_13 = t;
          t = not_null(x_12);
          t = s_32(t);
          d_13 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(a_13), not_null(d_13));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm w_33 (ATerm), ATerm x_33 (ATerm))
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
  n_13 = t;
  m_13 :
  if(match_cons(n_13, sym_Prim_2))
    {
      o_13 = ATgetArgument(n_13, 0);
      p_13 = ATgetArgument(n_13, 1);
      {
        ATerm s_13 = NULL;
        t = not_null(o_13);
        {
          ATerm u_13 = NULL;
          t = w_33(t);
          s_13 = t;
          t = not_null(p_13);
          t = x_33(t);
          u_13 = t;
          t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(s_13), not_null(u_13));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Where_1 (ATerm t, ATerm v_33 (ATerm))
{
  ATerm c_14 = NULL,d_14 = NULL;
  c_14 = t;
  b_14 :
  if(match_cons(c_14, sym_Where_1))
    {
      d_14 = ATgetArgument(c_14, 0);
      {
        ATerm f_14 = NULL;
        t = not_null(d_14);
        t = v_33(t);
        f_14 = t;
        t = (ATerm) ATmakeAppl(sym_Where_1, not_null(f_14));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm t_33 (ATerm), ATerm u_33 (ATerm))
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  n_14 = t;
  m_14 :
  if(match_cons(n_14, sym_Scope_2))
    {
      o_14 = ATgetArgument(n_14, 0);
      p_14 = ATgetArgument(n_14, 1);
      {
        ATerm s_14 = NULL;
        t = not_null(o_14);
        {
          ATerm u_14 = NULL;
          t = t_33(t);
          s_14 = t;
          t = not_null(p_14);
          t = u_33(t);
          u_14 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_14), not_null(u_14));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm q_33 (ATerm))
{
  ATerm c_15 = NULL,d_15 = NULL;
  c_15 = t;
  b_15 :
  if(match_cons(c_15, sym_Build_1))
    {
      d_15 = ATgetArgument(c_15, 0);
      {
        ATerm f_15 = NULL;
        t = not_null(d_15);
        t = q_33(t);
        f_15 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(f_15));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm e_32 (ATerm), ATerm f_32 (ATerm))
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL;
  n_15 = t;
  m_15 :
  if(match_cons(n_15, sym_Op_2))
    {
      o_15 = ATgetArgument(n_15, 0);
      p_15 = ATgetArgument(n_15, 1);
      {
        ATerm v_15 = NULL;
        t = not_null(o_15);
        {
          ATerm x_15 = NULL;
          t = e_32(t);
          v_15 = t;
          t = not_null(p_15);
          t = f_32(t);
          x_15 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(v_15), not_null(x_15));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm As_2 (ATerm t, ATerm q_30 (ATerm), ATerm r_30 (ATerm))
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  g_16 = t;
  f_16 :
  if(match_cons(g_16, sym_As_2))
    {
      h_16 = ATgetArgument(g_16, 0);
      i_16 = ATgetArgument(g_16, 1);
      {
        ATerm l_16 = NULL;
        t = not_null(h_16);
        {
          ATerm n_16 = NULL;
          t = q_30(t);
          l_16 = t;
          t = not_null(i_16);
          t = r_30(t);
          n_16 = t;
          t = (ATerm) ATmakeAppl(sym_As_2, not_null(l_16), not_null(n_16));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm s_30 (ATerm))
{
  ATerm v_16 = NULL,w_16 = NULL;
  v_16 = t;
  u_16 :
  if(match_cons(v_16, sym_BuildDefault_1))
    {
      w_16 = ATgetArgument(v_16, 0);
      {
        ATerm y_16 = NULL;
        t = not_null(w_16);
        t = s_30(t);
        y_16 = t;
        t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(y_16));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm j_0 (ATerm))
{
  ATerm h_17 = NULL,i_17 = NULL;
  h_17 = t;
  g_17 :
  if(match_cons(h_17, sym_Str_1))
    {
      i_17 = ATgetArgument(h_17, 0);
      {
        ATerm c_5 = t;
        if(PushChoice()==0)
          {
            ATerm k_17 = NULL;
            t = not_null(i_17);
            t = j_0(t);
            k_17 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(k_17));
            PopChoice();
          }
        else
          {
            t = c_5;
            {
              ATerm n_17 = NULL;
              t = not_null(i_17);
              t = j_0(t);
              n_17 = t;
              t = (ATerm) ATmakeAppl(sym_Str_1, not_null(n_17));
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
  ATerm u_17 = NULL;
  u_17 = t;
  t = SSL_is_real(not_null(u_17));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm i_0 (ATerm))
{
  ATerm c_18 = NULL,d_18 = NULL;
  c_18 = t;
  b_18 :
  if(match_cons(c_18, sym_Real_1))
    {
      d_18 = ATgetArgument(c_18, 0);
      {
        ATerm d_5 = t;
        if(PushChoice()==0)
          {
            ATerm f_18 = NULL;
            t = not_null(d_18);
            t = i_0(t);
            f_18 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, not_null(f_18));
            PopChoice();
          }
        else
          {
            t = d_5;
            {
              ATerm i_18 = NULL;
              t = not_null(d_18);
              t = i_0(t);
              i_18 = t;
              t = (ATerm) ATmakeAppl(sym_Real_1, not_null(i_18));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Int_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm t_18 = NULL,u_18 = NULL;
  t_18 = t;
  s_18 :
  if(match_cons(t_18, sym_Int_1))
    {
      u_18 = ATgetArgument(t_18, 0);
      {
        ATerm e_5 = t;
        if(PushChoice()==0)
          {
            ATerm w_18 = NULL;
            t = not_null(u_18);
            t = h_0(t);
            w_18 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, not_null(w_18));
            PopChoice();
          }
        else
          {
            t = e_5;
            {
              ATerm z_18 = NULL;
              t = not_null(u_18);
              t = h_0(t);
              z_18 = t;
              t = (ATerm) ATmakeAppl(sym_Int_1, not_null(z_18));
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
  ATerm g_19 = NULL;
  g_19 = t;
  f_19 :
  if(!(match_cons(g_19, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm match_term_exp_0 (ATerm t)
{
  ATerm f_5 = t;
  if(PushChoice()==0)
    {
      t = Wld_0(t);
      PopChoice();
    }
  else
    {
      t = f_5;
      {
        ATerm g_5 = t;
        if(PushChoice()==0)
          {
            t = Var_1(t, is_string_0);
            PopChoice();
          }
        else
          {
            t = g_5;
            {
              ATerm h_5 = t;
              if(PushChoice()==0)
                {
                  t = Int_1(t, is_int_0);
                  PopChoice();
                }
              else
                {
                  t = h_5;
                  {
                    ATerm i_5 = t;
                    if(PushChoice()==0)
                      {
                        t = Real_1(t, is_real_0);
                        PopChoice();
                      }
                    else
                      {
                        t = i_5;
                        {
                          ATerm j_5 = t;
                          if(PushChoice()==0)
                            {
                              t = Str_1(t, is_string_0);
                              PopChoice();
                            }
                          else
                            {
                              t = j_5;
                              {
                                ATerm k_5 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BuildDefault_1(t, match_term_exp_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = k_5;
                                    {
                                      ATerm l_5 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm v_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, v_0, match_term_exp_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = l_5;
                                          {
                                            ATerm m_5 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm w_0 (ATerm t)
                                                {
                                                  t = list_1(t, match_term_exp_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, w_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = m_5;
                                                {
                                                  ATerm x_0 (ATerm t)
                                                  {
                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
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
  return(t);
}
ATerm Match_1 (ATerm t, ATerm p_33 (ATerm))
{
  ATerm l_19 = NULL,m_19 = NULL;
  l_19 = t;
  k_19 :
  if(match_cons(l_19, sym_Match_1))
    {
      m_19 = ATgetArgument(l_19, 0);
      {
        ATerm o_19 = NULL;
        t = not_null(m_19);
        t = p_33(t);
        o_19 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(o_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm m_33 (ATerm))
{
  ATerm v_19 = NULL,w_19 = NULL;
  v_19 = t;
  u_19 :
  if(match_cons(v_19, sym_Thread_1))
    {
      w_19 = ATgetArgument(v_19, 0);
      {
        ATerm z_19 = NULL;
        t = not_null(w_19);
        t = m_33(t);
        z_19 = t;
        t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(z_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm All_1 (ATerm t, ATerm l_33 (ATerm))
{
  ATerm g_20 = NULL,h_20 = NULL;
  g_20 = t;
  f_20 :
  if(match_cons(g_20, sym_All_1))
    {
      h_20 = ATgetArgument(g_20, 0);
      {
        ATerm j_20 = NULL;
        t = not_null(h_20);
        t = l_33(t);
        j_20 = t;
        t = (ATerm) ATmakeAppl(sym_All_1, not_null(j_20));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Some_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm s_20 = NULL,t_20 = NULL;
  s_20 = t;
  r_20 :
  if(match_cons(s_20, sym_Some_1))
    {
      t_20 = ATgetArgument(s_20, 0);
      {
        ATerm n_5 = t;
        if(PushChoice()==0)
          {
            ATerm v_20 = NULL;
            t = not_null(t_20);
            t = g_0(t);
            v_20 = t;
            t = (ATerm) ATmakeAppl(sym_Some_1, not_null(v_20));
            PopChoice();
          }
        else
          {
            t = n_5;
            {
              ATerm y_20 = NULL;
              t = not_null(t_20);
              t = g_0(t);
              y_20 = t;
              t = (ATerm) ATmakeAppl(sym_Some_1, not_null(y_20));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm One_1 (ATerm t, ATerm j_33 (ATerm))
{
  ATerm h_21 = NULL,i_21 = NULL;
  h_21 = t;
  g_21 :
  if(match_cons(h_21, sym_One_1))
    {
      i_21 = ATgetArgument(h_21, 0);
      {
        ATerm k_21 = NULL;
        t = not_null(i_21);
        t = j_33(t);
        k_21 = t;
        t = (ATerm) ATmakeAppl(sym_One_1, not_null(k_21));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm h_33 (ATerm), ATerm i_33 (ATerm))
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
  s_21 = t;
  r_21 :
  if(match_cons(s_21, sym_Cong_2))
    {
      t_21 = ATgetArgument(s_21, 0);
      u_21 = ATgetArgument(s_21, 1);
      {
        ATerm x_21 = NULL;
        t = not_null(t_21);
        {
          ATerm z_21 = NULL;
          t = h_33(t);
          x_21 = t;
          t = not_null(u_21);
          t = i_33(t);
          z_21 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(x_21), not_null(z_21));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm f_22 = NULL;
  f_22 = t;
  t = SSL_is_int(not_null(f_22));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm f_33 (ATerm), ATerm g_33 (ATerm))
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
  m_22 = t;
  l_22 :
  if(match_cons(m_22, sym_Path_2))
    {
      n_22 = ATgetArgument(m_22, 0);
      o_22 = ATgetArgument(m_22, 1);
      {
        ATerm r_22 = NULL;
        t = not_null(n_22);
        {
          ATerm t_22 = NULL;
          t = f_33(t);
          r_22 = t;
          t = not_null(o_22);
          t = g_33(t);
          t_22 = t;
          t = (ATerm) ATmakeAppl(sym_Path_2, not_null(r_22), not_null(t_22));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm p_32 (ATerm), ATerm q_32 (ATerm))
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
  c_23 = t;
  b_23 :
  if(match_cons(c_23, sym_Rec_2))
    {
      d_23 = ATgetArgument(c_23, 0);
      e_23 = ATgetArgument(c_23, 1);
      {
        ATerm h_23 = NULL;
        t = not_null(d_23);
        {
          ATerm j_23 = NULL;
          t = p_32(t);
          h_23 = t;
          t = not_null(e_23);
          t = q_32(t);
          j_23 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(h_23), not_null(j_23));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm o_32 (ATerm))
{
  ATerm r_23 = NULL,s_23 = NULL;
  r_23 = t;
  q_23 :
  if(match_cons(r_23, sym_SVar_1))
    {
      s_23 = ATgetArgument(r_23, 0);
      {
        ATerm u_23 = NULL;
        t = not_null(s_23);
        t = o_32(t);
        u_23 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(u_23));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm d_33 (ATerm), ATerm e_33 (ATerm))
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL;
  c_24 = t;
  b_24 :
  if(match_cons(c_24, sym_Call_2))
    {
      d_24 = ATgetArgument(c_24, 0);
      e_24 = ATgetArgument(c_24, 1);
      {
        ATerm h_24 = NULL;
        t = not_null(d_24);
        {
          ATerm j_24 = NULL;
          t = d_33(t);
          h_24 = t;
          t = not_null(e_24);
          t = e_33(t);
          j_24 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(h_24), not_null(j_24));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm m_32 (ATerm), ATerm n_32 (ATerm))
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL;
  s_24 = t;
  r_24 :
  if(match_cons(s_24, sym_LChoice_2))
    {
      t_24 = ATgetArgument(s_24, 0);
      u_24 = ATgetArgument(s_24, 1);
      {
        ATerm x_24 = NULL;
        t = not_null(t_24);
        {
          ATerm z_24 = NULL;
          t = m_32(t);
          x_24 = t;
          t = not_null(u_24);
          t = n_32(t);
          z_24 = t;
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(x_24), not_null(z_24));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm k_32 (ATerm), ATerm l_32 (ATerm))
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
  i_25 = t;
  h_25 :
  if(match_cons(i_25, sym_Choice_2))
    {
      j_25 = ATgetArgument(i_25, 0);
      k_25 = ATgetArgument(i_25, 1);
      {
        ATerm n_25 = NULL;
        t = not_null(j_25);
        {
          ATerm p_25 = NULL;
          t = k_32(t);
          n_25 = t;
          t = not_null(k_25);
          t = l_32(t);
          p_25 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_25), not_null(p_25));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm i_32 (ATerm), ATerm j_32 (ATerm))
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
  y_25 = t;
  x_25 :
  if(match_cons(y_25, sym_Seq_2))
    {
      z_25 = ATgetArgument(y_25, 0);
      a_26 = ATgetArgument(y_25, 1);
      {
        ATerm d_26 = NULL;
        t = not_null(z_25);
        {
          ATerm f_26 = NULL;
          t = i_32(t);
          d_26 = t;
          t = not_null(a_26);
          t = j_32(t);
          f_26 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_26), not_null(f_26));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Test_1 (ATerm t, ATerm g_32 (ATerm))
{
  ATerm n_26 = NULL,o_26 = NULL;
  n_26 = t;
  m_26 :
  if(match_cons(n_26, sym_Test_1))
    {
      o_26 = ATgetArgument(n_26, 0);
      {
        ATerm q_26 = NULL;
        t = not_null(o_26);
        t = g_32(t);
        q_26 = t;
        t = (ATerm) ATmakeAppl(sym_Test_1, not_null(q_26));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Not_1 (ATerm t, ATerm h_32 (ATerm))
{
  ATerm x_26 = NULL,y_26 = NULL;
  x_26 = t;
  w_26 :
  if(match_cons(x_26, sym_Not_1))
    {
      y_26 = ATgetArgument(x_26, 0);
      {
        ATerm a_27 = NULL;
        t = not_null(y_26);
        t = h_32(t);
        a_27 = t;
        t = (ATerm) ATmakeAppl(sym_Not_1, not_null(a_27));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm f_27 = NULL;
  f_27 = t;
  e_27 :
  if(!(match_cons(f_27, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm m_27 = NULL;
  m_27 = t;
  l_27 :
  if(!(match_cons(m_27, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm o_5 = t;
  if(PushChoice()==0)
    {
      t = Id_0(t);
      PopChoice();
    }
  else
    {
      t = o_5;
      {
        ATerm p_5 = t;
        if(PushChoice()==0)
          {
            t = Fail_0(t);
            PopChoice();
          }
        else
          {
            t = p_5;
            {
              ATerm q_5 = t;
              if(PushChoice()==0)
                {
                  t = Not_1(t, strategy_expression_0);
                  PopChoice();
                }
              else
                {
                  t = q_5;
                  {
                    ATerm r_5 = t;
                    if(PushChoice()==0)
                      {
                        t = Test_1(t, strategy_expression_0);
                        PopChoice();
                      }
                    else
                      {
                        t = r_5;
                        {
                          ATerm s_5 = t;
                          if(PushChoice()==0)
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              PopChoice();
                            }
                          else
                            {
                              t = s_5;
                              {
                                ATerm t_5 = t;
                                if(PushChoice()==0)
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = t_5;
                                    {
                                      ATerm u_5 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = u_5;
                                          {
                                            ATerm v_5 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm y_0 (ATerm t)
                                                {
                                                  t = SVar_1(t, is_string_0);
                                                  return(t);
                                                }
                                                ATerm z_0 (ATerm t)
                                                {
                                                  ATerm a_1 (ATerm t)
                                                  {
                                                    ATerm b_1 (ATerm t)
                                                    {
                                                      t = SVar_1(t, is_string_0);
                                                      return(t);
                                                    }
                                                    t = Call_2(t, b_1, Nil_0);
                                                    return(t);
                                                  }
                                                  t = list_1(t, a_1);
                                                  return(t);
                                                }
                                                t = Call_2(t, y_0, z_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = v_5;
                                                {
                                                  ATerm w_5 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = Rec_2(t, is_string_0, strategy_expression_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = w_5;
                                                      {
                                                        ATerm x_5 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = Path_2(t, is_int_0, strategy_expression_0);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = x_5;
                                                            {
                                                              ATerm y_5 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm c_1 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = Cong_2(t, is_string_0, c_1);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = y_5;
                                                                  {
                                                                    ATerm z_5 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = One_1(t, strategy_expression_0);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = z_5;
                                                                        {
                                                                          ATerm b_6 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = Some_1(t, strategy_expression_0);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_6;
                                                                              {
                                                                                ATerm e_6 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    t = All_1(t, strategy_expression_0);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = e_6;
                                                                                    {
                                                                                      ATerm f_6 = t;
                                                                                      if(PushChoice()==0)
                                                                                        {
                                                                                          t = Thread_1(t, strategy_expression_0);
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = f_6;
                                                                                          {
                                                                                            ATerm g_6 = t;
                                                                                            if(PushChoice()==0)
                                                                                              {
                                                                                                t = Match_1(t, match_term_exp_0);
                                                                                                PopChoice();
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = g_6;
                                                                                                {
                                                                                                  ATerm h_6 = t;
                                                                                                  if(PushChoice()==0)
                                                                                                    {
                                                                                                      t = Build_1(t, term_expression_0);
                                                                                                      PopChoice();
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = h_6;
                                                                                                      {
                                                                                                        ATerm l_6 = t;
                                                                                                        if(PushChoice()==0)
                                                                                                          {
                                                                                                            ATerm d_1 (ATerm t)
                                                                                                            {
                                                                                                              t = list_1(t, is_string_0);
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Scope_2(t, d_1, strategy_expression_0);
                                                                                                            PopChoice();
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = l_6;
                                                                                                            {
                                                                                                              ATerm n_6 = t;
                                                                                                              if(PushChoice()==0)
                                                                                                                {
                                                                                                                  t = Where_1(t, strategy_expression_0);
                                                                                                                  PopChoice();
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = n_6;
                                                                                                                  {
                                                                                                                    ATerm o_6 = t;
                                                                                                                    if(PushChoice()==0)
                                                                                                                      {
                                                                                                                        ATerm e_1 (ATerm t)
                                                                                                                        {
                                                                                                                          t = list_1(t, term_expression_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Prim_2(t, is_string_0, e_1);
                                                                                                                        PopChoice();
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = o_6;
                                                                                                                        {
                                                                                                                          ATerm p_6 = t;
                                                                                                                          if(PushChoice()==0)
                                                                                                                            {
                                                                                                                              ATerm f_1 (ATerm t)
                                                                                                                              {
                                                                                                                                ATerm g_1 (ATerm t)
                                                                                                                                {
                                                                                                                                  ATerm h_1 (ATerm t)
                                                                                                                                  {
                                                                                                                                    ATerm i_1 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = VarDec_2(t, is_string_0, _id);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = list_1(t, i_1);
                                                                                                                                    return(t);
                                                                                                                                  }
                                                                                                                                  t = SDef_3(t, is_string_0, h_1, strategy_expression_0);
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = list_1(t, g_1);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Let_2(t, f_1, strategy_expression_0);
                                                                                                                              PopChoice();
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = p_6;
                                                                                                                              {
                                                                                                                                ATerm q_6 = t;
                                                                                                                                if(PushChoice()==0)
                                                                                                                                  {
                                                                                                                                    ATerm j_1 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = Var_1(t, is_string_0);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    ATerm k_1 (ATerm t)
                                                                                                                                    {
                                                                                                                                      ATerm l_1 (ATerm t)
                                                                                                                                      {
                                                                                                                                        t = case_alternative_1(t, strategy_expression_0);
                                                                                                                                        return(t);
                                                                                                                                      }
                                                                                                                                      t = list_1(t, l_1);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = Case_4(t, is_string_0, j_1, k_1, strategy_expression_0);
                                                                                                                                    PopChoice();
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = q_6;
                                                                                                                                    {
                                                                                                                                      ATerm r_6 = t;
                                                                                                                                      if(PushChoice()==0)
                                                                                                                                        {
                                                                                                                                          ATerm m_1 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = Var_1(t, is_string_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Assign_2(t, m_1, term_expression_0);
                                                                                                                                          PopChoice();
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = r_6;
                                                                                                                                          {
                                                                                                                                            ATerm v_6 = t;
                                                                                                                                            if(PushChoice()==0)
                                                                                                                                              {
                                                                                                                                                ATerm n_1 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  t = Var_1(t, is_string_0);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Assign_1(t, n_1);
                                                                                                                                                PopChoice();
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = v_6;
                                                                                                                                                {
                                                                                                                                                  ATerm x_6 = t;
                                                                                                                                                  if(PushChoice()==0)
                                                                                                                                                    {
                                                                                                                                                      t = Continue_1(t, is_string_0);
                                                                                                                                                      PopChoice();
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = x_6;
                                                                                                                                                      {
                                                                                                                                                        ATerm o_1 (ATerm t)
                                                                                                                                                        {
                                                                                                                                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
                                                                                                                                                          return(t);
                                                                                                                                                        }
                                                                                                                                                        t = debug_1(t, o_1);
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm p_27 = NULL;
  p_27 = t;
  t = SSL_is_string(not_null(p_27));
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm w_32 (ATerm), ATerm x_32 (ATerm))
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL;
  y_27 = t;
  x_27 :
  if(match_cons(y_27, sym_VarDec_2))
    {
      z_27 = ATgetArgument(y_27, 0);
      a_28 = ATgetArgument(y_27, 1);
      {
        ATerm d_28 = NULL;
        t = not_null(z_27);
        {
          ATerm f_28 = NULL;
          t = w_32(t);
          d_28 = t;
          t = not_null(a_28);
          t = x_32(t);
          f_28 = t;
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(d_28), not_null(f_28));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm t_32 (ATerm), ATerm u_32 (ATerm), ATerm v_32 (ATerm))
{
  ATerm x_28 = NULL,y_28 = NULL,c_29 = NULL,d_29 = NULL;
  x_28 = t;
  s_28 :
  if(match_cons(x_28, sym_SDef_3))
    {
      y_28 = ATgetArgument(x_28, 0);
      c_29 = ATgetArgument(x_28, 1);
      d_29 = ATgetArgument(x_28, 2);
      {
        ATerm j_29 = NULL;
        t = not_null(y_28);
        {
          ATerm l_29 = NULL;
          t = t_32(t);
          j_29 = t;
          t = not_null(c_29);
          {
            ATerm n_29 = NULL;
            t = u_32(t);
            l_29 = t;
            t = not_null(d_29);
            t = v_32(t);
            n_29 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(j_29), not_null(l_29), not_null(n_29));
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
  ATerm y_6 = t;
  if(PushChoice()==0)
    {
      ATerm p_1 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, q_1);
        return(t);
      }
      t = SDef_3(t, is_string_0, p_1, strategy_expression_0);
      PopChoice();
    }
  else
    {
      t = y_6;
      {
        ATerm r_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, r_1);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm b_48 (ATerm))
{
  ATerm t_29 (ATerm t)
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
        t = Cons_2(t, b_48, t_29);
      }
    return(t);
  }
  t = t_29(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm o_31 (ATerm))
{
  ATerm x_29 = NULL,y_29 = NULL;
  x_29 = t;
  w_29 :
  if(match_cons(x_29, sym_Strategies_1))
    {
      y_29 = ATgetArgument(x_29, 0);
      {
        ATerm a_30 = NULL;
        t = not_null(y_29);
        t = o_31(t);
        a_30 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(a_30));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm q_31 (ATerm))
{
  ATerm h_30 = NULL,i_30 = NULL;
  h_30 = t;
  g_30 :
  if(match_cons(h_30, sym_Specification_1))
    {
      i_30 = ATgetArgument(h_30, 0);
      {
        ATerm k_30 = NULL;
        t = not_null(i_30);
        t = q_31(t);
        k_30 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(k_30));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm a_7 = t;
  if(PushChoice()==0)
    {
      ATerm s_1 (ATerm t)
      {
        ATerm t_1 (ATerm t)
        {
          ATerm u_1 (ATerm t)
          {
            ATerm v_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, v_1);
            return(t);
          }
          t = Cons_2(t, u_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, t_1);
        return(t);
      }
      t = Specification_1(t, s_1);
      PopChoice();
    }
  else
    {
      t = a_7;
      {
        ATerm w_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, w_1);
      }
    }
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm p_30 = NULL;
  p_30 = t;
  o_30 :
  if(!(match_cons(p_30, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm a_34 (ATerm), ATerm b_34 (ATerm))
{
  ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL;
  x_30 = t;
  w_30 :
  if(match_cons(x_30, sym_TCons_2))
    {
      y_30 = ATgetArgument(x_30, 0);
      z_30 = ATgetArgument(x_30, 1);
      {
        ATerm c_31 = NULL;
        t = not_null(y_30);
        {
          ATerm e_31 = NULL;
          t = a_34(t);
          c_31 = t;
          t = not_null(z_30);
          t = b_34(t);
          e_31 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_31), not_null(e_31));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm l_31 = NULL;
  ATerm b_7;
  b_7 = t;
  {
    ATerm x_1 (ATerm t)
    {
      ATerm m_31 = NULL,n_31 = NULL;
      m_31 = t;
      k_31 :
      if(match_cons(m_31, sym_Program_1))
        {
          n_31 = ATgetArgument(m_31, 0);
          if(l_31 != NULL && l_31 != n_31)
            _fail(n_31);
          else
            l_31 = n_31;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, x_1);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_31), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = b_7;
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
  ATerm w_31 = NULL,x_31 = NULL;
  ATerm y_1 (ATerm t)
  {
    ATerm z_1 (ATerm t)
    {
      ATerm f_7 = t;
      if(PushChoice()==0)
        {
          ATerm b_2 (ATerm t)
          {
            ATerm y_31 = NULL;
            y_31 = t;
            r_31 :
            if(!(match_cons(y_31, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, b_2);
          PopChoice();
          _fail(t);
        }
      else
        t = f_7;
      return(t);
    }
    ATerm a_2 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, z_1, a_2);
    {
      ATerm c_2 (ATerm t)
      {
        ATerm e_2 (ATerm t)
        {
          ATerm z_31 = NULL,b_32 = NULL;
          z_31 = t;
          t_31 :
          if(match_cons(z_31, sym_Runtime_1))
            {
              b_32 = ATgetArgument(z_31, 0);
              if(x_31 != NULL && x_31 != b_32)
                _fail(b_32);
              else
                x_31 = b_32;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, e_2);
        return(t);
      }
      ATerm d_2 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, c_2, d_2);
      {
        ATerm f_2 (ATerm t)
        {
          ATerm h_2 (ATerm t)
          {
            ATerm c_32 = NULL,d_32 = NULL;
            c_32 = t;
            v_31 :
            if(match_cons(c_32, sym_Program_1))
              {
                d_32 = ATgetArgument(c_32, 0);
                if(w_31 != NULL && w_31 != d_32)
                  _fail(d_32);
                else
                  w_31 = d_32;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, h_2);
          return(t);
        }
        ATerm g_2 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, f_2, g_2);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_31), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_31), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, y_1);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,r_33 = NULL,s_33 = NULL,y_33 = NULL;
  n_33 = t;
  b_33 :
  if(match_cons(n_33, sym_TCons_2))
    {
      o_33 = ATgetArgument(n_33, 0);
      r_33 = ATgetArgument(n_33, 1);
      c_33 :
      if(match_cons(r_33, sym_TCons_2))
        {
          s_33 = ATgetArgument(r_33, 0);
          y_33 = ATgetArgument(r_33, 1);
          k_33 :
          if(match_cons(y_33, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(o_33), not_null(s_33));
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
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL;
  k_34 = t;
  h_34 :
  if(match_cons(k_34, sym_TCons_2))
    {
      l_34 = ATgetArgument(k_34, 0);
      m_34 = ATgetArgument(k_34, 1);
      i_34 :
      if(match_cons(m_34, sym_TCons_2))
        {
          n_34 = ATgetArgument(m_34, 0);
          o_34 = ATgetArgument(m_34, 1);
          j_34 :
          if(match_cons(o_34, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(l_34), not_null(n_34));
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
  ATerm w_34 = NULL;
  ATerm h_7;
  h_7 = t;
  {
    ATerm i_2 (ATerm t)
    {
      ATerm i_7 = t;
      if(PushChoice()==0)
        {
          ATerm k_2 (ATerm t)
          {
            ATerm x_34 = NULL,y_34 = NULL;
            x_34 = t;
            t_34 :
            if(match_cons(x_34, sym_Output_1))
              {
                y_34 = ATgetArgument(x_34, 0);
                if(w_34 != NULL && w_34 != y_34)
                  _fail(y_34);
                else
                  w_34 = y_34;
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
          t = i_7;
          {
            ATerm z_34 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            z_34 = t;
            if(w_34 != NULL && w_34 != z_34)
              _fail(z_34);
            else
              w_34 = z_34;
          }
        }
      return(t);
    }
    ATerm j_2 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, i_2, j_2);
  }
  t = h_7;
  {
    ATerm l_2 (ATerm t)
    {
      ATerm m_2 (ATerm t)
      {
        ATerm n_2 (ATerm t)
        {
          t = not_null(w_34);
          return(t);
        }
        t = split_2(t, n_2, _id);
        return(t);
      }
      t = TCons_2(t, m_2, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, l_2);
    {
      ATerm j_7 = t;
      if(PushChoice()==0)
        {
          ATerm o_2 (ATerm t)
          {
            ATerm q_2 (ATerm t)
            {
              ATerm a_35 = NULL;
              a_35 = t;
              v_34 :
              if(!(match_cons(a_35, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, q_2);
            return(t);
          }
          ATerm p_2 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, o_2, p_2);
          PopChoice();
        }
      else
        {
          t = j_7;
          {
            ATerm r_2 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, r_2);
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
ATerm apply_strategy_1 (ATerm t, ATerm i_39 (ATerm))
{
  ATerm i_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL;
  ATerm k_7;
  k_7 = t;
  t = dtime_0(t);
  t = k_7;
  t = i_39(t);
  {
    ATerm l_7;
    l_7 = t;
    {
      ATerm j_35 = NULL;
      t = dtime_0(t);
      j_35 = t;
      if(i_35 != NULL && i_35 != j_35)
        _fail(j_35);
      else
        i_35 = j_35;
    }
    t = l_7;
    k_35 = t;
    f_35 :
    if(match_cons(k_35, sym_TCons_2))
      {
        l_35 = ATgetArgument(k_35, 0);
        m_35 = ATgetArgument(k_35, 1);
        g_35 :
        if(match_cons(m_35, sym_TCons_2))
          {
            n_35 = ATgetArgument(m_35, 0);
            o_35 = ATgetArgument(m_35, 1);
            h_35 :
            if(match_cons(o_35, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(i_35)), not_null(l_35)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_35), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm u_35 = NULL;
  u_35 = t;
  t = SSL_ReadFromFile(not_null(u_35));
  return(t);
}
ATerm split_2 (ATerm t, ATerm m_41 (ATerm), ATerm n_41 (ATerm))
{
  ATerm a_36 = NULL;
  ATerm c_36 = NULL,e_36 = NULL;
  a_36 = t;
  {
    ATerm m_7;
    m_7 = t;
    {
      ATerm d_36 = NULL;
      t = not_null(a_36);
      t = m_41(t);
      d_36 = t;
      if(c_36 != NULL && c_36 != d_36)
        _fail(d_36);
      else
        c_36 = d_36;
    }
    t = m_7;
    {
      ATerm f_36 = NULL;
      t = not_null(a_36);
      t = n_41(t);
      f_36 = t;
      if(e_36 != NULL && e_36 != f_36)
        _fail(f_36);
      else
        e_36 = f_36;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_36), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_36), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm m_36 = NULL;
  ATerm n_7;
  n_7 = t;
  {
    ATerm o_7 = t;
    if(PushChoice()==0)
      {
        ATerm s_2 (ATerm t)
        {
          ATerm n_36 = NULL,o_36 = NULL;
          n_36 = t;
          k_36 :
          if(match_cons(n_36, sym_Input_1))
            {
              o_36 = ATgetArgument(n_36, 0);
              if(m_36 != NULL && m_36 != o_36)
                _fail(o_36);
              else
                m_36 = o_36;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, s_2);
        PopChoice();
      }
    else
      {
        t = o_7;
        {
          ATerm p_36 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          p_36 = t;
          if(m_36 != NULL && m_36 != p_36)
            _fail(p_36);
          else
            m_36 = p_36;
        }
      }
  }
  t = n_7;
  {
    ATerm t_2 (ATerm t)
    {
      t = not_null(m_36);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, t_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_36 = NULL;
  t_36 = t;
  s_36 :
  if(!(match_cons(t_36, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm h_39 (ATerm))
{
  ATerm u_2 (ATerm t)
  {
    ATerm p_7 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
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
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, u_2);
  t = h_39(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_36 = NULL;
  v_36 = t;
  t = SSL_table_create(not_null(v_36));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_36 = NULL;
  z_36 = t;
  {
    ATerm v_7;
    v_7 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_36), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = v_7;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL;
  l_37 = t;
  f_37 :
  if(match_cons(l_37, sym_Cons_2))
    {
      h_37 = ATgetArgument(l_37, 0);
      i_37 = ATgetArgument(l_37, 1);
      g_37 :
      if(match_cons(i_37, sym_Cons_2))
        {
          j_37 = ATgetArgument(i_37, 0);
          k_37 = ATgetArgument(i_37, 1);
          {
            ATerm v_37 = NULL;
            t = not_null(h_37);
            t = d_0(t);
            {
              ATerm w_37 = NULL;
              t = not_null(j_37);
              t = e_0(t);
              w_37 = t;
              if(v_37 != NULL && v_37 != w_37)
                _fail(w_37);
              else
                v_37 = w_37;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_37), not_null(k_37));
            }
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(l_37, "register-usage-info"))
        t = register_usage_1(t, f_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm w_7 = t;
  if(PushChoice()==0)
    {
      ATerm v_2 (ATerm t)
      {
        ATerm l_38 = NULL;
        l_38 = t;
        a_38 :
        if(!(match_string(l_38, "-S")))
          {
            if(!(match_string(l_38, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm w_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm x_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, v_2, w_2, x_2);
      PopChoice();
    }
  else
    {
      t = w_7;
      {
        ATerm y_7 = t;
        if(PushChoice()==0)
          {
            ATerm y_2 (ATerm t)
            {
              ATerm n_38 = NULL;
              n_38 = t;
              b_38 :
              if(!(match_string(n_38, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm z_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm a_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, y_2, z_2, a_3);
            PopChoice();
          }
        else
          {
            t = y_7;
            {
              ATerm a_8 = t;
              if(PushChoice()==0)
                {
                  ATerm b_3 (ATerm t)
                  {
                    ATerm p_38 = NULL;
                    p_38 = t;
                    c_38 :
                    if(!(match_string(p_38, "-v")))
                      {
                        if(!(match_string(p_38, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm c_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm d_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, b_3, c_3, d_3);
                  PopChoice();
                }
              else
                {
                  t = a_8;
                  {
                    ATerm b_8 = t;
                    if(PushChoice()==0)
                      {
                        ATerm e_3 (ATerm t)
                        {
                          ATerm q_38 = NULL;
                          q_38 = t;
                          d_38 :
                          if(!(match_string(q_38, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm f_3 (ATerm t)
                        {
                          ATerm t_38 = NULL;
                          t_38 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(t_38));
                          return(t);
                        }
                        ATerm g_3 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, e_3, f_3, g_3);
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
                                ATerm v_38 = NULL;
                                v_38 = t;
                                f_38 :
                                if(!(match_string(v_38, "-i")))
                                  {
                                    if(!(match_string(v_38, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm i_3 (ATerm t)
                              {
                                ATerm z_38 = NULL;
                                z_38 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_38));
                                return(t);
                              }
                              ATerm j_3 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, h_3, i_3, j_3);
                              PopChoice();
                            }
                          else
                            {
                              t = c_8;
                              {
                                ATerm e_8 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm k_3 (ATerm t)
                                    {
                                      ATerm b_39 = NULL;
                                      b_39 = t;
                                      h_38 :
                                      if(!(match_string(b_39, "-o")))
                                        {
                                          if(!(match_string(b_39, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm l_3 (ATerm t)
                                    {
                                      ATerm c_39 = NULL;
                                      c_39 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_39));
                                      return(t);
                                    }
                                    ATerm m_3 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, k_3, l_3, m_3);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = e_8;
                                    {
                                      ATerm g_8 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm n_3 (ATerm t)
                                          {
                                            ATerm e_39 = NULL;
                                            e_39 = t;
                                            j_38 :
                                            if(!(match_string(e_39, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm o_3 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm p_3 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, n_3, o_3, p_3);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = g_8;
                                          {
                                            ATerm q_3 (ATerm t)
                                            {
                                              ATerm f_39 = NULL;
                                              f_39 = t;
                                              k_38 :
                                              if(!(match_string(f_39, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm r_3 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm s_3 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, q_3, r_3, s_3);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm m_39 = NULL;
  m_39 = t;
  t = SSL_table_destroy(not_null(m_39));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_39 = NULL;
  q_39 = t;
  t = SSL_exit(not_null(q_39));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm v_39 = NULL;
  v_39 = t;
  t = SSL_implode_string(not_null(v_39));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_48 (ATerm))
{
  ATerm y_39 (ATerm t)
  {
    ATerm h_8 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, y_39);
        PopChoice();
      }
    else
      {
        t = h_8;
        t = Nil_0(t);
        t = n_48(t);
      }
    return(t);
  }
  t = y_39(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm i_8 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = i_8;
      {
        ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL;
        b_40 = t;
        a_40 :
        if(match_cons(b_40, sym_Cons_2))
          {
            c_40 = ATgetArgument(b_40, 0);
            d_40 = ATgetArgument(b_40, 1);
            t = not_null(c_40);
            {
              ATerm t_3 (ATerm t)
              {
                t = not_null(d_40);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, t_3);
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
  ATerm j_40 = NULL;
  j_40 = t;
  t = SSL_explode_string(not_null(j_40));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_37 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_47 (ATerm))
{
  ATerm m_40 (ATerm t)
  {
    ATerm j_8 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = j_8;
        t = Cons_2(t, z_47, m_40);
      }
    return(t);
  }
  t = m_40(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL;
  s_40 = t;
  o_40 :
  if(match_cons(s_40, sym_TCons_2))
    {
      t_40 = ATgetArgument(s_40, 0);
      u_40 = ATgetArgument(s_40, 1);
      p_40 :
      if(match_cons(t_40, sym_Nil_0))
        {
          q_40 :
          if(match_cons(u_40, sym_TCons_2))
            {
              v_40 = ATgetArgument(u_40, 0);
              w_40 = ATgetArgument(u_40, 1);
              r_40 :
              if(match_cons(w_40, sym_TNil_0))
                t = not_null(v_40);
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
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL;
  e_41 = t;
  a_41 :
  if(match_cons(e_41, sym_TCons_2))
    {
      f_41 = ATgetArgument(e_41, 0);
      i_41 = ATgetArgument(e_41, 1);
      b_41 :
      if(match_cons(f_41, sym_Cons_2))
        {
          g_41 = ATgetArgument(f_41, 0);
          h_41 = ATgetArgument(f_41, 1);
          c_41 :
          if(match_cons(i_41, sym_TCons_2))
            {
              j_41 = ATgetArgument(i_41, 0);
              k_41 = ATgetArgument(i_41, 1);
              d_41 :
              if(match_cons(k_41, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_41), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_41), not_null(j_41)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm s_53 (ATerm), ATerm t_53 (ATerm))
{
  ATerm r_41 (ATerm t)
  {
    ATerm k_8 = t;
    if(PushChoice()==0)
      {
        t = s_53(t);
        t = r_41(t);
        PopChoice();
      }
    else
      {
        t = k_8;
        t = t_53(t);
      }
    return(t);
  }
  t = r_41(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm v_53 (ATerm))
{
  t = repeat_2(t, v_53, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm t_41 = NULL;
  t_41 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_41), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm n_37 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm f_29 (ATerm))
{
  ATerm z_41 = NULL,a_42 = NULL;
  z_41 = t;
  y_41 :
  if(match_cons(z_41, sym_Program_1))
    {
      a_42 = ATgetArgument(z_41, 0);
      {
        ATerm c_42 = NULL;
        t = not_null(a_42);
        t = f_29(t);
        c_42 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_42));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm k_42 = NULL;
  ATerm u_3 (ATerm t)
  {
    ATerm v_3 (ATerm t)
    {
      ATerm l_42 = NULL;
      l_42 = t;
      if(k_42 != NULL && k_42 != l_42)
        _fail(l_42);
      else
        k_42 = l_42;
      return(t);
    }
    t = Program_1(t, v_3);
    return(t);
  }
  t = option_defined_1(t, u_3);
  {
    ATerm w_3 (ATerm t)
    {
      ATerm m_42 = NULL;
      ATerm n_42 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm x_3 (ATerm t)
        {
          t = not_null(k_42);
          return(t);
        }
        t = short_description_1(t, x_3);
        t = concat_strings_0(t);
        n_42 = t;
        if(m_42 != NULL && m_42 != n_42)
          _fail(n_42);
        else
          m_42 = n_42;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_42), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, w_3);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm y_3 (ATerm t)
      {
        ATerm o_42 = NULL;
        o_42 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_42), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, y_3);
      {
        ATerm z_3 (ATerm t)
        {
          ATerm q_42 = NULL;
          ATerm r_42 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm a_4 (ATerm t)
            {
              t = not_null(k_42);
              return(t);
            }
            t = long_description_1(t, a_4);
            t = concat_strings_0(t);
            r_42 = t;
            if(q_42 != NULL && q_42 != r_42)
              _fail(r_42);
            else
              q_42 = r_42;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_42), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, z_3);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL;
  a_43 = t;
  x_42 :
  if(match_cons(a_43, sym_TCons_2))
    {
      b_43 = ATgetArgument(a_43, 0);
      c_43 = ATgetArgument(a_43, 1);
      y_42 :
      if(match_cons(c_43, sym_TCons_2))
        {
          d_43 = ATgetArgument(c_43, 0);
          e_43 = ATgetArgument(c_43, 1);
          z_42 :
          if(match_cons(e_43, sym_TNil_0))
            {
              ATerm l_8;
              l_8 = t;
              t = SSL_printnl(not_null(b_43), not_null(d_43));
              t = l_8;
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
ATerm Undefined_1 (ATerm t, ATerm g_29 (ATerm))
{
  ATerm l_43 = NULL,m_43 = NULL;
  l_43 = t;
  k_43 :
  if(match_cons(l_43, sym_Undefined_1))
    {
      m_43 = ATgetArgument(l_43, 0);
      {
        ATerm o_43 = NULL;
        t = not_null(m_43);
        t = g_29(t);
        o_43 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_43));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm h_48 (ATerm))
{
  ATerm s_43 (ATerm t)
  {
    ATerm m_8 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, h_48, _id);
        PopChoice();
      }
    else
      {
        t = m_8;
        t = Cons_2(t, _id, s_43);
      }
    return(t);
  }
  t = s_43(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_38 (ATerm))
{
  t = fetch_1(t, m_38);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm u_43 = NULL;
  u_43 = t;
  t_43 :
  if(!(match_cons(u_43, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm p_54 (ATerm))
{
  ATerm n_8 = t;
  if(PushChoice()==0)
    {
      t = p_54(t);
      PopChoice();
    }
  else
    t = n_8;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL;
  z_43 = t;
  w_43 :
  if(match_cons(z_43, sym_TCons_2))
    {
      a_44 = ATgetArgument(z_43, 0);
      b_44 = ATgetArgument(z_43, 1);
      x_43 :
      if(match_cons(b_44, sym_TCons_2))
        {
          c_44 = ATgetArgument(b_44, 0);
          d_44 = ATgetArgument(b_44, 1);
          y_43 :
          if(match_cons(d_44, sym_TNil_0))
            t = SSL_table_get(not_null(a_44), not_null(c_44));
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
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL;
  n_44 = t;
  j_44 :
  if(match_cons(n_44, sym_TCons_2))
    {
      o_44 = ATgetArgument(n_44, 0);
      p_44 = ATgetArgument(n_44, 1);
      k_44 :
      if(match_cons(p_44, sym_TCons_2))
        {
          q_44 = ATgetArgument(p_44, 0);
          r_44 = ATgetArgument(p_44, 1);
          l_44 :
          if(match_cons(r_44, sym_TCons_2))
            {
              s_44 = ATgetArgument(r_44, 0);
              t_44 = ATgetArgument(r_44, 1);
              m_44 :
              if(match_cons(t_44, sym_TNil_0))
                {
                  ATerm o_8;
                  o_8 = t;
                  {
                    ATerm x_44 = NULL;
                    ATerm y_44 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_44), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_44), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm p_8 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = p_8;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      y_44 = t;
                      if(x_44 != NULL && x_44 != y_44)
                        _fail(y_44);
                      else
                        x_44 = y_44;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_44), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_44), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_44), not_null(x_44)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = o_8;
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
ATerm register_usage_1 (ATerm t, ATerm s_37 (ATerm))
{
  ATerm c_45 = NULL;
  ATerm d_45 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = s_37(t);
  d_45 = t;
  if(c_45 != NULL && c_45 != d_45)
    _fail(d_45);
  else
    c_45 = d_45;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_45), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL;
  l_45 = t;
  i_45 :
  if(match_cons(l_45, sym_Cons_2))
    {
      j_45 = ATgetArgument(l_45, 0);
      k_45 = ATgetArgument(l_45, 1);
      {
        ATerm o_45 = NULL;
        t = not_null(j_45);
        t = a_0(t);
        {
          ATerm p_45 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = b_0(t);
          p_45 = t;
          if(o_45 != NULL && o_45 != p_45)
            _fail(p_45);
          else
            o_45 = p_45;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_45), not_null(k_45));
        }
      }
    }
  else
    {
      if(match_string(l_45, "register-usage-info"))
        t = register_usage_1(t, c_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm u_45 = NULL;
    u_45 = t;
    t_45 :
    if(!(match_string(u_45, "--help")))
      {
        if(!(match_string(u_45, "-h")))
          {
            if(!(match_string(u_45, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, b_4, c_4, d_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL;
  x_45 = t;
  w_45 :
  if(match_cons(x_45, sym_Cons_2))
    {
      y_45 = ATgetArgument(x_45, 0);
      z_45 = ATgetArgument(x_45, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_45)), not_null(z_45));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm e_34 (ATerm), ATerm f_34 (ATerm))
{
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
  h_46 = t;
  g_46 :
  if(match_cons(h_46, sym_Cons_2))
    {
      i_46 = ATgetArgument(h_46, 0);
      j_46 = ATgetArgument(h_46, 1);
      {
        ATerm m_46 = NULL;
        t = not_null(i_46);
        {
          ATerm o_46 = NULL;
          t = e_34(t);
          m_46 = t;
          t = not_null(j_46);
          t = f_34(t);
          o_46 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_46), not_null(o_46));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm u_46 = NULL;
  u_46 = t;
  t_46 :
  if(!(match_cons(u_46, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_37 (ATerm))
{
  ATerm q_8;
  q_8 = t;
  {
    ATerm e_4 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = q_37(t);
      return(t);
    }
    t = try_1(t, e_4);
  }
  t = q_8;
  {
    ATerm f_4 (ATerm t)
    {
      ATerm w_46 = NULL;
      w_46 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_46));
      return(t);
    }
    ATerm g_4 (ATerm t)
    {
      ATerm r_8 = t;
      if(PushChoice()==0)
        {
          ATerm s_8 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = s_8;
              t = q_37(t);
              t = Cons_2(t, _id, g_4);
            }
          PopChoice();
        }
      else
        {
          t = r_8;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, f_4, g_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL;
  ATerm t_8;
  t_8 = t;
  {
    ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL;
    i_47 = t;
    b_47 :
    if(match_cons(i_47, sym_TCons_2))
      {
        j_47 = ATgetArgument(i_47, 0);
        k_47 = ATgetArgument(i_47, 1);
        c_47 :
        if(match_cons(k_47, sym_TCons_2))
          {
            l_47 = ATgetArgument(k_47, 0);
            m_47 = ATgetArgument(k_47, 1);
            d_47 :
            if(match_cons(m_47, sym_TCons_2))
              {
                n_47 = ATgetArgument(m_47, 0);
                o_47 = ATgetArgument(m_47, 1);
                e_47 :
                if(match_cons(o_47, sym_TNil_0))
                  {
                    if(f_47 != NULL && f_47 != j_47)
                      _fail(j_47);
                    else
                      f_47 = j_47;
                    if(g_47 != NULL && g_47 != l_47)
                      _fail(l_47);
                    else
                      g_47 = l_47;
                    if(h_47 != NULL && h_47 != n_47)
                      _fail(n_47);
                    else
                      h_47 = n_47;
                    t = SSL_table_put(not_null(f_47), not_null(g_47), not_null(h_47));
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
  t = t_8;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_37 (ATerm))
{
  ATerm r_47 = NULL;
  ATerm u_8;
  u_8 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = u_8;
  {
    ATerm h_4 (ATerm t)
    {
      ATerm v_8 = t;
      if(PushChoice()==0)
        {
          t = p_37(t);
          PopChoice();
        }
      else
        {
          t = v_8;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, h_4);
    {
      ATerm i_4 (ATerm t)
      {
        ATerm w_8 = t;
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
            t = w_8;
            {
              ATerm j_4 (ATerm t)
              {
                ATerm k_4 (ATerm t)
                {
                  ATerm s_47 = NULL;
                  s_47 = t;
                  if(r_47 != NULL && r_47 != s_47)
                    _fail(s_47);
                  else
                    r_47 = s_47;
                  return(t);
                }
                t = Undefined_1(t, k_4);
                return(t);
              }
              t = option_defined_1(t, j_4);
              {
                ATerm b_9;
                b_9 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_47), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = b_9;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, i_4);
      {
        ATerm c_9;
        c_9 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = c_9;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm w_38 (ATerm), ATerm x_38 (ATerm), ATerm y_38 (ATerm))
{
  ATerm l_4 (ATerm t)
  {
    ATerm e_9 = t;
    if(PushChoice()==0)
      {
        t = x_38(t);
        PopChoice();
      }
    else
      {
        t = e_9;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, l_4);
  t = store_options_0(t);
  {
    ATerm f_9 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, y_38);
        PopChoice();
      }
    else
      {
        t = f_9;
        {
          ATerm g_9 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, w_38);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = g_9;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm r_38 (ATerm), ATerm s_38 (ATerm))
{
  t = iowrap_3(t, r_38, s_38, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm o_38 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    ATerm n_4 (ATerm t)
    {
      t = TCons_2(t, o_38, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, n_4);
    return(t);
  }
  t = iowrap_2(t, m_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
