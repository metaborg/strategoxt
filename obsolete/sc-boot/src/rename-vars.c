#include <stratego.h>
#include <stratego-lib.h>
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm u_54 (ATerm));
ATerm Rec_2 (ATerm, ATerm g_32 (ATerm), ATerm h_32 (ATerm));
ATerm SDef_3 (ATerm, ATerm k_32 (ATerm), ATerm l_32 (ATerm), ATerm m_32 (ATerm));
ATerm Let_2 (ATerm, ATerm i_32 (ATerm), ATerm j_32 (ATerm));
ATerm sboundin_3 (ATerm, ATerm v_54 (ATerm), ATerm w_54 (ATerm), ATerm x_54 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm f_32 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm q_54 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm e_31 (ATerm));
ATerm Scope_2 (ATerm, ATerm k_33 (ATerm), ATerm l_33 (ATerm));
ATerm tboundin_3 (ATerm, ATerm r_54 (ATerm), ATerm s_54 (ATerm), ATerm t_54 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm c_43 (ATerm), ATerm d_43 (ATerm), ATerm e_43 (ATerm));
ATerm crush_3 (ATerm, ATerm s_44 (ATerm), ATerm t_44 (ATerm), ATerm u_44 (ATerm));
ATerm HdMember_1 (ATerm, ATerm h_44 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm r_38 (ATerm), ATerm s_38 (ATerm));
ATerm for_3 (ATerm, ATerm u_38 (ATerm), ATerm v_38 (ATerm), ATerm w_38 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm c_40 (ATerm), ATerm d_40 (ATerm), ATerm e_40 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm r_31 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm v_41 (ATerm), ATerm w_41 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm n_46 (ATerm), ATerm o_46 (ATerm), ATerm p_46 (ATerm), ATerm q_46 (ATerm));
ATerm zip_1 (ATerm, ATerm s_46 (ATerm));
ATerm new_0 (ATerm);
ATerm RnBinding_2 (ATerm, ATerm b_42 (ATerm), ATerm c_42 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm p_41 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm x_40 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm c_41 (ATerm));
ATerm rename_4 (ATerm, ATerm d_42 (ATerm, ATerm (ATerm)), ATerm e_42 (ATerm), ATerm f_42 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm g_42 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm p_33 (ATerm), ATerm q_33 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm y_37 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm r_49 (ATerm), ATerm s_49 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm x_37 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_48 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm w_34 (ATerm));
ATerm map_1 (ATerm, ATerm d_48 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm a_38 (ATerm), ATerm b_38 (ATerm));
ATerm repeat_1 (ATerm, ATerm d_38 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm v_34 (ATerm));
ATerm Program_1 (ATerm, ATerm x_28 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm y_28 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_48 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_35 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm j_50 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm a_35 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm t_33 (ATerm), ATerm u_33 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm y_34 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_34 (ATerm));
ATerm iowrap_3 (ATerm, ATerm m_37 (ATerm), ATerm n_37 (ATerm), ATerm o_37 (ATerm));
ATerm iowrap_2 (ATerm, ATerm h_37 (ATerm), ATerm i_37 (ATerm));
ATerm iowrap_1 (ATerm, ATerm e_37 (ATerm));
ATerm rename_vars_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL;
  s_1 = t;
  r_1 :
  if(match_cons(s_1, sym_Cons_2))
    {
      t_1 = ATgetArgument(s_1, 0);
      u_1 = ATgetArgument(s_1, 1);
      t = not_null(t_1);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm u_54 (ATerm))
{
  ATerm f_6 = t;
  if(PushChoice()==0)
    {
      ATerm g_0 (ATerm t)
      {
        t = split_2(t, _id, u_54);
        {
          ATerm h_0 (ATerm t)
          {
            ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL;
            i_2 = t;
            z_1 :
            if(match_cons(i_2, sym_TCons_2))
              {
                j_2 = ATgetArgument(i_2, 0);
                n_2 = ATgetArgument(i_2, 1);
                a_2 :
                if(match_cons(j_2, sym_SDef_3))
                  {
                    k_2 = ATgetArgument(j_2, 0);
                    l_2 = ATgetArgument(j_2, 1);
                    m_2 = ATgetArgument(j_2, 2);
                    b_2 :
                    if(match_cons(n_2, sym_TCons_2))
                      {
                        o_2 = ATgetArgument(n_2, 0);
                        p_2 = ATgetArgument(n_2, 1);
                        c_2 :
                        if(match_cons(p_2, sym_TNil_0))
                          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_2), not_null(l_2), not_null(m_2));
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
          t = zip_1(t, h_0);
        }
        return(t);
      }
      t = Let_2(t, g_0, _id);
      PopChoice();
    }
  else
    {
      t = f_6;
      {
        ATerm g_6 = t;
        if(PushChoice()==0)
          {
            ATerm i_0 (ATerm t)
            {
              t = split_2(t, _id, u_54);
              {
                ATerm j_0 (ATerm t)
                {
                  ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL;
                  t_2 = t;
                  e_2 :
                  if(match_cons(t_2, sym_TCons_2))
                    {
                      u_2 = ATgetArgument(t_2, 0);
                      x_2 = ATgetArgument(t_2, 1);
                      f_2 :
                      if(match_cons(u_2, sym_VarDec_2))
                        {
                          v_2 = ATgetArgument(u_2, 0);
                          w_2 = ATgetArgument(u_2, 1);
                          g_2 :
                          if(match_cons(x_2, sym_TCons_2))
                            {
                              y_2 = ATgetArgument(x_2, 0);
                              z_2 = ATgetArgument(x_2, 1);
                              h_2 :
                              if(match_cons(z_2, sym_TNil_0))
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(y_2), not_null(w_2));
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
                t = zip_1(t, j_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, i_0, _id);
            PopChoice();
          }
        else
          {
            t = g_6;
            {
              ATerm k_0 (ATerm t)
              {
                t = u_54(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, k_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm g_32 (ATerm), ATerm h_32 (ATerm))
{
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL;
  j_3 = t;
  i_3 :
  if(match_cons(j_3, sym_Rec_2))
    {
      k_3 = ATgetArgument(j_3, 0);
      l_3 = ATgetArgument(j_3, 1);
      {
        ATerm o_3 = NULL;
        t = not_null(k_3);
        {
          ATerm q_3 = NULL;
          t = g_32(t);
          o_3 = t;
          t = not_null(l_3);
          t = h_32(t);
          q_3 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(o_3), not_null(q_3));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm k_32 (ATerm), ATerm l_32 (ATerm), ATerm m_32 (ATerm))
{
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL;
  a_4 = t;
  z_3 :
  if(match_cons(a_4, sym_SDef_3))
    {
      b_4 = ATgetArgument(a_4, 0);
      c_4 = ATgetArgument(a_4, 1);
      d_4 = ATgetArgument(a_4, 2);
      {
        ATerm h_4 = NULL;
        t = not_null(b_4);
        {
          ATerm j_4 = NULL;
          t = k_32(t);
          h_4 = t;
          t = not_null(c_4);
          {
            ATerm l_4 = NULL;
            t = l_32(t);
            j_4 = t;
            t = not_null(d_4);
            t = m_32(t);
            l_4 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(h_4), not_null(j_4), not_null(l_4));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm i_32 (ATerm), ATerm j_32 (ATerm))
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL;
  v_4 = t;
  u_4 :
  if(match_cons(v_4, sym_Let_2))
    {
      w_4 = ATgetArgument(v_4, 0);
      x_4 = ATgetArgument(v_4, 1);
      {
        ATerm k_5 = NULL;
        t = not_null(w_4);
        {
          ATerm m_5 = NULL;
          t = i_32(t);
          k_5 = t;
          t = not_null(x_4);
          t = j_32(t);
          m_5 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(k_5), not_null(m_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm v_54 (ATerm), ATerm w_54 (ATerm), ATerm x_54 (ATerm))
{
  ATerm h_6 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, v_54, v_54);
      PopChoice();
    }
  else
    {
      t = h_6;
      {
        ATerm i_6 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, x_54, x_54, v_54);
            PopChoice();
          }
        else
          {
            t = i_6;
            t = Rec_2(t, x_54, v_54);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL;
  t_5 = t;
  s_5 :
  if(match_cons(t_5, sym_Rec_2))
    {
      u_5 = ATgetArgument(t_5, 0);
      v_5 = ATgetArgument(t_5, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm d_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL;
  d_6 = t;
  c_6 :
  if(match_cons(d_6, sym_SDef_3))
    {
      l_6 = ATgetArgument(d_6, 0);
      m_6 = ATgetArgument(d_6, 1);
      n_6 = ATgetArgument(d_6, 2);
      t = not_null(m_6);
      {
        ATerm l_0 (ATerm t)
        {
          ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL;
          r_6 = t;
          b_6 :
          if(match_cons(r_6, sym_VarDec_2))
            {
              s_6 = ATgetArgument(r_6, 0);
              t_6 = ATgetArgument(r_6, 1);
              t = not_null(s_6);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, l_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL;
  e_7 = t;
  d_7 :
  if(match_cons(e_7, sym_Let_2))
    {
      f_7 = ATgetArgument(e_7, 0);
      g_7 = ATgetArgument(e_7, 1);
      t = not_null(f_7);
      {
        ATerm m_0 (ATerm t)
        {
          ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL;
          j_7 = t;
          c_7 :
          if(match_cons(j_7, sym_SDef_3))
            {
              k_7 = ATgetArgument(j_7, 0);
              l_7 = ATgetArgument(j_7, 1);
              m_7 = ATgetArgument(j_7, 2);
              t = not_null(k_7);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, m_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm f_32 (ATerm))
{
  ATerm v_7 = NULL,w_7 = NULL;
  v_7 = t;
  u_7 :
  if(match_cons(v_7, sym_SVar_1))
    {
      w_7 = ATgetArgument(v_7, 0);
      {
        ATerm y_7 = NULL;
        t = not_null(w_7);
        t = f_32(t);
        y_7 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(y_7));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    ATerm j_6 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = j_6;
        {
          ATerm k_6 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = k_6;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, n_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm q_54 (ATerm))
{
  t = Scope_2(t, q_54, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm e_31 (ATerm))
{
  ATerm f_8 = NULL,g_8 = NULL;
  f_8 = t;
  e_8 :
  if(match_cons(f_8, sym_DynamicRules_1))
    {
      g_8 = ATgetArgument(f_8, 0);
      {
        ATerm i_8 = NULL;
        t = not_null(g_8);
        t = e_31(t);
        i_8 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(i_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm k_33 (ATerm), ATerm l_33 (ATerm))
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  c_9 = t;
  y_8 :
  if(match_cons(c_9, sym_Scope_2))
    {
      d_9 = ATgetArgument(c_9, 0);
      e_9 = ATgetArgument(c_9, 1);
      {
        ATerm h_9 = NULL;
        t = not_null(d_9);
        {
          ATerm j_9 = NULL;
          t = k_33(t);
          h_9 = t;
          t = not_null(e_9);
          t = l_33(t);
          j_9 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_9), not_null(j_9));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm r_54 (ATerm), ATerm s_54 (ATerm), ATerm t_54 (ATerm))
{
  ATerm o_6 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, t_54, r_54);
      PopChoice();
    }
  else
    {
      t = o_6;
      t = DynamicRules_1(t, r_54);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL;
  q_9 = t;
  p_9 :
  if(match_cons(q_9, sym_DynamicRules_1))
    {
      r_9 = ATgetArgument(q_9, 0);
      t = not_null(r_9);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL;
  w_9 = t;
  v_9 :
  if(match_cons(w_9, sym_Var_1))
    {
      x_9 = ATgetArgument(w_9, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_9), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL;
  e_10 = t;
  b_10 :
  if(match_cons(e_10, sym_TCons_2))
    {
      f_10 = ATgetArgument(e_10, 0);
      g_10 = ATgetArgument(e_10, 1);
      c_10 :
      if(match_cons(g_10, sym_TCons_2))
        {
          h_10 = ATgetArgument(g_10, 0);
          i_10 = ATgetArgument(g_10, 1);
          d_10 :
          if(match_cons(i_10, sym_TNil_0))
            {
              t = not_null(f_10);
              {
                ATerm m_10 (ATerm t)
                {
                  ATerm p_6 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(h_10);
                      PopChoice();
                    }
                  else
                    {
                      t = p_6;
                      {
                        ATerm q_6 = t;
                        if(PushChoice()==0)
                          {
                            ATerm o_0 (ATerm t)
                            {
                              t = not_null(h_10);
                              return(t);
                            }
                            t = HdMember_1(t, o_0);
                            t = m_10(t);
                            PopChoice();
                          }
                        else
                          {
                            t = q_6;
                            t = Cons_2(t, _id, m_10);
                          }
                      }
                    }
                  return(t);
                }
                t = m_10(t);
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
ATerm foldr_3 (ATerm t, ATerm c_43 (ATerm), ATerm d_43 (ATerm), ATerm e_43 (ATerm))
{
  ATerm u_6 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = c_43(t);
      PopChoice();
    }
  else
    {
      t = u_6;
      {
        ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
        r_10 = t;
        q_10 :
        if(match_cons(r_10, sym_Cons_2))
          {
            s_10 = ATgetArgument(r_10, 0);
            t_10 = ATgetArgument(r_10, 1);
            {
              ATerm w_10 = NULL,y_10 = NULL;
              ATerm v_6;
              v_6 = t;
              {
                ATerm x_10 = NULL;
                t = not_null(s_10);
                t = e_43(t);
                x_10 = t;
                if(w_10 != NULL && w_10 != x_10)
                  _fail(x_10);
                else
                  w_10 = x_10;
              }
              t = v_6;
              {
                ATerm z_10 = NULL;
                t = not_null(t_10);
                t = foldr_3(t, c_43, d_43, e_43);
                z_10 = t;
                if(y_10 != NULL && y_10 != z_10)
                  _fail(z_10);
                else
                  y_10 = z_10;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_10), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_10), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = d_43(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm s_44 (ATerm), ATerm t_44 (ATerm), ATerm u_44 (ATerm))
{
  ATerm j_11 = NULL;
  ATerm l_11 = NULL;
  j_11 = t;
  {
    ATerm m_11 = NULL;
    ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,z_11 = NULL;
    t = not_null(j_11);
    m_11 = t;
    t = SSL_explode_term(not_null(m_11));
    q_11 = t;
    g_11 :
    if(match_cons(q_11, sym_TCons_2))
      {
        r_11 = ATgetArgument(q_11, 0);
        s_11 = ATgetArgument(q_11, 1);
        h_11 :
        if(match_cons(s_11, sym_TCons_2))
          {
            t_11 = ATgetArgument(s_11, 0);
            z_11 = ATgetArgument(s_11, 1);
            i_11 :
            if(match_cons(z_11, sym_TNil_0))
              {
                if(l_11 != NULL && l_11 != t_11)
                  _fail(t_11);
                else
                  l_11 = t_11;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(l_11);
    t = foldr_3(t, s_44, t_44, u_44);
  }
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm h_44 (ATerm))
{
  ATerm g_12 = NULL,i_12 = NULL,j_12 = NULL;
  g_12 = t;
  f_12 :
  if(match_cons(g_12, sym_Cons_2))
    {
      i_12 = ATgetArgument(g_12, 0);
      j_12 = ATgetArgument(g_12, 1);
      t = h_44(t);
      {
        ATerm p_0 (ATerm t)
        {
          ATerm x_12 = NULL;
          x_12 = t;
          if(i_12 != NULL && i_12 != x_12)
            _fail(x_12);
          else
            i_12 = x_12;
          return(t);
        }
        t = fetch_1(t, p_0);
        t = not_null(j_12);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL;
  h_13 = t;
  b_13 :
  if(match_cons(h_13, sym_TCons_2))
    {
      i_13 = ATgetArgument(h_13, 0);
      j_13 = ATgetArgument(h_13, 1);
      c_13 :
      if(match_cons(j_13, sym_TCons_2))
        {
          k_13 = ATgetArgument(j_13, 0);
          n_13 = ATgetArgument(j_13, 1);
          f_13 :
          if(match_cons(k_13, sym_Cons_2))
            {
              l_13 = ATgetArgument(k_13, 0);
              m_13 = ATgetArgument(k_13, 1);
              g_13 :
              if(match_cons(n_13, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_13), not_null(i_13)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_13), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm UfDecompose_0 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL;
  i_14 = t;
  e_14 :
  if(match_cons(i_14, sym_Cons_2))
    {
      j_14 = ATgetArgument(i_14, 0);
      o_14 = ATgetArgument(i_14, 1);
      f_14 :
      if(match_cons(j_14, sym_TCons_2))
        {
          k_14 = ATgetArgument(j_14, 0);
          l_14 = ATgetArgument(j_14, 1);
          g_14 :
          if(match_cons(l_14, sym_TCons_2))
            {
              m_14 = ATgetArgument(l_14, 0);
              n_14 = ATgetArgument(l_14, 1);
              h_14 :
              if(match_cons(n_14, sym_TNil_0))
                {
                  ATerm s_14 = NULL,t_14 = NULL,b_15 = NULL,j_15 = NULL;
                  ATerm w_6;
                  w_6 = t;
                  {
                    ATerm u_14 = NULL;
                    ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL;
                    t = not_null(m_14);
                    u_14 = t;
                    t = SSL_explode_term(not_null(u_14));
                    w_14 = t;
                    v_13 :
                    if(match_cons(w_14, sym_TCons_2))
                      {
                        x_14 = ATgetArgument(w_14, 0);
                        y_14 = ATgetArgument(w_14, 1);
                        w_13 :
                        if(match_cons(y_14, sym_TCons_2))
                          {
                            z_14 = ATgetArgument(y_14, 0);
                            a_15 = ATgetArgument(y_14, 1);
                            x_13 :
                            if(match_cons(a_15, sym_TNil_0))
                              {
                                if(s_14 != NULL && s_14 != x_14)
                                  _fail(x_14);
                                else
                                  s_14 = x_14;
                                if(t_14 != NULL && t_14 != z_14)
                                  _fail(z_14);
                                else
                                  t_14 = z_14;
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
                  t = w_6;
                  {
                    ATerm x_6;
                    x_6 = t;
                    {
                      ATerm c_15 = NULL;
                      ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
                      t = not_null(k_14);
                      c_15 = t;
                      t = SSL_explode_term(not_null(c_15));
                      e_15 = t;
                      a_14 :
                      if(match_cons(e_15, sym_TCons_2))
                        {
                          f_15 = ATgetArgument(e_15, 0);
                          g_15 = ATgetArgument(e_15, 1);
                          b_14 :
                          if(match_cons(g_15, sym_TCons_2))
                            {
                              h_15 = ATgetArgument(g_15, 0);
                              i_15 = ATgetArgument(g_15, 1);
                              c_14 :
                              if(match_cons(i_15, sym_TNil_0))
                                {
                                  if(s_14 != NULL && s_14 != f_15)
                                    _fail(f_15);
                                  else
                                    s_14 = f_15;
                                  if(b_15 != NULL && b_15 != h_15)
                                    _fail(h_15);
                                  else
                                    b_15 = h_15;
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
                    t = x_6;
                    {
                      ATerm k_15 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_15), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_14), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      k_15 = t;
                      if(j_15 != NULL && j_15 != k_15)
                        _fail(k_15);
                      else
                        j_15 = k_15;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_15), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_14), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = conc_0(t);
                    }
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
    }
  else
    _fail(t);
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  w_15 = t;
  s_15 :
  if(match_cons(w_15, sym_Cons_2))
    {
      x_15 = ATgetArgument(w_15, 0);
      c_16 = ATgetArgument(w_15, 1);
      t_15 :
      if(match_cons(x_15, sym_TCons_2))
        {
          y_15 = ATgetArgument(x_15, 0);
          z_15 = ATgetArgument(x_15, 1);
          u_15 :
          if(match_cons(z_15, sym_TCons_2))
            {
              a_16 = ATgetArgument(z_15, 0);
              b_16 = ATgetArgument(z_15, 1);
              v_15 :
              if(match_cons(b_16, sym_TNil_0))
                {
                  ATerm e_16 = NULL;
                  if(y_15 != NULL && y_15 != a_16)
                    _fail(a_16);
                  else
                    y_15 = a_16;
                  if(e_16 != NULL && e_16 != c_16)
                    _fail(c_16);
                  else
                    e_16 = c_16;
                  t = not_null(e_16);
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
ATerm while_not_2 (ATerm t, ATerm r_38 (ATerm), ATerm s_38 (ATerm))
{
  ATerm g_16 (ATerm t)
  {
    ATerm y_6 = t;
    if(PushChoice()==0)
      {
        t = r_38(t);
        PopChoice();
      }
    else
      {
        t = y_6;
        t = s_38(t);
        t = g_16(t);
      }
    return(t);
  }
  t = g_16(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm u_38 (ATerm), ATerm v_38 (ATerm), ATerm w_38 (ATerm))
{
  t = u_38(t);
  t = while_not_2(t, v_38, w_38);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm z_6 = t;
  if(PushChoice()==0)
    {
      ATerm q_0 (ATerm t)
      {
        ATerm m_16 = NULL;
        m_16 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_16), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm r_0 (ATerm t)
      {
        ATerm t_0 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, t_0);
        return(t);
      }
      ATerm s_0 (ATerm t)
      {
        ATerm a_7 = t;
        if(PushChoice()==0)
          {
            ATerm u_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                ATerm b_7 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = b_7;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, v_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, u_0);
            PopChoice();
          }
        else
          {
            t = a_7;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, q_0, r_0, s_0);
      PopChoice();
    }
  else
    {
      t = z_6;
      {
        ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,t_16 = NULL;
        o_16 = t;
        j_16 :
        if(match_cons(o_16, sym_TCons_2))
          {
            p_16 = ATgetArgument(o_16, 0);
            q_16 = ATgetArgument(o_16, 1);
            k_16 :
            if(match_cons(q_16, sym_TCons_2))
              {
                r_16 = ATgetArgument(q_16, 0);
                t_16 = ATgetArgument(q_16, 1);
                l_16 :
                if(match_cons(t_16, sym_TNil_0))
                  {
                    t = not_null(p_16);
                    {
                      ATerm b_17 (ATerm t)
                      {
                        ATerm h_7 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = h_7;
                            {
                              ATerm i_7 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm w_0 (ATerm t)
                                  {
                                    t = not_null(r_16);
                                    return(t);
                                  }
                                  t = HdMember_1(t, w_0);
                                  t = b_17(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = i_7;
                                  t = Cons_2(t, _id, b_17);
                                }
                            }
                          }
                        return(t);
                      }
                      t = b_17(t);
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
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm c_40 (ATerm), ATerm d_40 (ATerm), ATerm e_40 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm f_17 (ATerm t)
  {
    ATerm n_7 = t;
    if(PushChoice()==0)
      {
        t = c_40(t);
        PopChoice();
      }
    else
      {
        t = n_7;
        {
          ATerm o_7 = t;
          if(PushChoice()==0)
            {
              ATerm d_17 = NULL;
              ATerm p_7;
              p_7 = t;
              {
                ATerm e_17 = NULL;
                t = d_40(t);
                e_17 = t;
                if(d_17 != NULL && d_17 != e_17)
                  _fail(e_17);
                else
                  d_17 = e_17;
              }
              t = p_7;
              {
                ATerm x_0 (ATerm t)
                {
                  ATerm z_0 (ATerm t)
                  {
                    t = not_null(d_17);
                    return(t);
                  }
                  t = split_2(t, f_17, z_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm y_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = e_40(t, x_0, f_17, y_0);
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = crush_3(t, a_1, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = o_7;
              {
                ATerm b_1 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = crush_3(t, b_1, union_0, f_17);
              }
            }
        }
      }
    return(t);
  }
  t = f_17(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm q_7 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = q_7;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, c_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
  o_17 = t;
  j_17 :
  if(match_cons(o_17, sym_Scope_2))
    {
      p_17 = ATgetArgument(o_17, 0);
      n_17 = ATgetArgument(o_17, 1);
      t = not_null(p_17);
    }
  else
    {
      if(match_cons(o_17, sym_LRule_1))
        {
          p_17 = ATgetArgument(o_17, 0);
          m_17 :
          if(match_cons(p_17, sym_Rule_3))
            {
              q_17 = ATgetArgument(p_17, 0);
              r_17 = ATgetArgument(p_17, 1);
              s_17 = ATgetArgument(p_17, 2);
              t = not_null(q_17);
              t = tvars_0(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm r_31 (ATerm))
{
  ATerm o_18 = NULL,p_18 = NULL;
  o_18 = t;
  n_18 :
  if(match_cons(o_18, sym_Var_1))
    {
      p_18 = ATgetArgument(o_18, 0);
      {
        ATerm r_18 = NULL;
        t = not_null(p_18);
        t = r_31(t);
        r_18 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_18));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm v_41 (ATerm), ATerm w_41 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  e_19 = t;
  y_18 :
  if(match_cons(e_19, sym_TCons_2))
    {
      f_19 = ATgetArgument(e_19, 0);
      g_19 = ATgetArgument(e_19, 1);
      z_18 :
      if(match_cons(g_19, sym_TCons_2))
        {
          h_19 = ATgetArgument(g_19, 0);
          i_19 = ATgetArgument(g_19, 1);
          a_19 :
          if(match_cons(i_19, sym_TCons_2))
            {
              j_19 = ATgetArgument(i_19, 0);
              k_19 = ATgetArgument(i_19, 1);
              b_19 :
              if(match_cons(k_19, sym_TNil_0))
                {
                  t = not_null(f_19);
                  {
                    ATerm d_1 (ATerm t)
                    {
                      ATerm o_19 = NULL;
                      o_19 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = v_41(t);
                      return(t);
                    }
                    ATerm e_1 (ATerm t)
                    {
                      ATerm q_19 = NULL;
                      q_19 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = v_41(t);
                      return(t);
                    }
                    t = w_41(t, d_1, e_1, _id);
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
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  d_20 = t;
  w_19 :
  if(match_cons(d_20, sym_TCons_2))
    {
      e_20 = ATgetArgument(d_20, 0);
      f_20 = ATgetArgument(d_20, 1);
      b_20 :
      if(match_cons(f_20, sym_TCons_2))
        {
          g_20 = ATgetArgument(f_20, 0);
          h_20 = ATgetArgument(f_20, 1);
          c_20 :
          if(match_cons(h_20, sym_TNil_0))
            {
              t = not_null(e_20);
              {
                ATerm f_1 (ATerm t)
                {
                  t = not_null(g_20);
                  return(t);
                }
                t = at_end_1(t, f_1);
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
ATerm Zip3_0 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL;
  v_20 = t;
  o_20 :
  if(match_cons(v_20, sym_TCons_2))
    {
      w_20 = ATgetArgument(v_20, 0);
      x_20 = ATgetArgument(v_20, 1);
      p_20 :
      if(match_cons(x_20, sym_TCons_2))
        {
          y_20 = ATgetArgument(x_20, 0);
          z_20 = ATgetArgument(x_20, 1);
          q_20 :
          if(match_cons(z_20, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_20), not_null(y_20));
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
ATerm Zip2_0 (ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL;
  k_21 = t;
  f_21 :
  if(match_cons(k_21, sym_TCons_2))
    {
      l_21 = ATgetArgument(k_21, 0);
      o_21 = ATgetArgument(k_21, 1);
      g_21 :
      if(match_cons(l_21, sym_Cons_2))
        {
          m_21 = ATgetArgument(l_21, 0);
          n_21 = ATgetArgument(l_21, 1);
          h_21 :
          if(match_cons(o_21, sym_TCons_2))
            {
              p_21 = ATgetArgument(o_21, 0);
              s_21 = ATgetArgument(o_21, 1);
              i_21 :
              if(match_cons(p_21, sym_Cons_2))
                {
                  q_21 = ATgetArgument(p_21, 0);
                  r_21 = ATgetArgument(p_21, 1);
                  j_21 :
                  if(match_cons(s_21, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(m_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_21), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(n_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_21), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  else
    _fail(t);
  return(t);
}
ATerm Zip1_0 (ATerm t)
{
  ATerm e_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL;
  e_22 = t;
  z_21 :
  if(match_cons(e_22, sym_TCons_2))
    {
      j_22 = ATgetArgument(e_22, 0);
      k_22 = ATgetArgument(e_22, 1);
      a_22 :
      if(match_cons(j_22, sym_Nil_0))
        {
          b_22 :
          if(match_cons(k_22, sym_TCons_2))
            {
              l_22 = ATgetArgument(k_22, 0);
              m_22 = ATgetArgument(k_22, 1);
              c_22 :
              if(match_cons(l_22, sym_Nil_0))
                {
                  d_22 :
                  if(match_cons(m_22, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
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
  else
    _fail(t);
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm n_46 (ATerm), ATerm o_46 (ATerm), ATerm p_46 (ATerm), ATerm q_46 (ATerm))
{
  ATerm o_22 (ATerm t)
  {
    ATerm r_7 = t;
    if(PushChoice()==0)
      {
        t = n_46(t);
        PopChoice();
      }
    else
      {
        t = r_7;
        t = o_46(t);
        {
          ATerm g_1 (ATerm t)
          {
            t = TCons_2(t, o_22, TNil_0);
            return(t);
          }
          t = TCons_2(t, q_46, g_1);
          t = p_46(t);
        }
      }
    return(t);
  }
  t = o_22(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm s_46 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, s_46);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm b_42 (ATerm), ATerm c_42 (ATerm, ATerm (ATerm)))
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
  a_23 = t;
  x_22 :
  if(match_cons(a_23, sym_TCons_2))
    {
      b_23 = ATgetArgument(a_23, 0);
      c_23 = ATgetArgument(a_23, 1);
      y_22 :
      if(match_cons(c_23, sym_TCons_2))
        {
          d_23 = ATgetArgument(c_23, 0);
          e_23 = ATgetArgument(c_23, 1);
          z_22 :
          if(match_cons(e_23, sym_TNil_0))
            {
              ATerm h_23 = NULL;
              t = not_null(b_23);
              {
                ATerm j_23 = NULL;
                t = b_42(t);
                h_23 = t;
                {
                  ATerm l_23 = NULL,n_23 = NULL;
                  t = map_1(t, new_0);
                  j_23 = t;
                  {
                    ATerm m_23 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_23), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    m_23 = t;
                    if(l_23 != NULL && l_23 != m_23)
                      _fail(m_23);
                    else
                      l_23 = m_23;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_23), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm p_23 = NULL;
                      t = conc_0(t);
                      n_23 = t;
                      {
                        ATerm q_23 = NULL;
                        t = not_null(b_23);
                        {
                          ATerm h_1 (ATerm t)
                          {
                            t = not_null(j_23);
                            return(t);
                          }
                          t = c_42(t, h_1);
                          q_23 = t;
                          if(p_23 != NULL && p_23 != q_23)
                            _fail(q_23);
                          else
                            p_23 = q_23;
                        }
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_23), (ATerm) ATmakeAppl(sym_TNil_0))));
                      }
                    }
                  }
                }
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
ATerm Look2_0 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL;
  c_24 = t;
  y_23 :
  if(match_cons(c_24, sym_TCons_2))
    {
      d_24 = ATgetArgument(c_24, 0);
      e_24 = ATgetArgument(c_24, 1);
      z_23 :
      if(match_cons(e_24, sym_TCons_2))
        {
          f_24 = ATgetArgument(e_24, 0);
          i_24 = ATgetArgument(e_24, 1);
          a_24 :
          if(match_cons(f_24, sym_Cons_2))
            {
              g_24 = ATgetArgument(f_24, 0);
              h_24 = ATgetArgument(f_24, 1);
              b_24 :
              if(match_cons(i_24, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_24), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm Look1_0 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
  u_24 = t;
  n_24 :
  if(match_cons(u_24, sym_TCons_2))
    {
      v_24 = ATgetArgument(u_24, 0);
      w_24 = ATgetArgument(u_24, 1);
      o_24 :
      if(match_cons(w_24, sym_TCons_2))
        {
          z_24 = ATgetArgument(w_24, 0);
          g_25 = ATgetArgument(w_24, 1);
          p_24 :
          if(match_cons(z_24, sym_Cons_2))
            {
              a_25 = ATgetArgument(z_24, 0);
              f_25 = ATgetArgument(z_24, 1);
              q_24 :
              if(match_cons(a_25, sym_TCons_2))
                {
                  b_25 = ATgetArgument(a_25, 0);
                  c_25 = ATgetArgument(a_25, 1);
                  r_24 :
                  if(match_cons(c_25, sym_TCons_2))
                    {
                      d_25 = ATgetArgument(c_25, 0);
                      e_25 = ATgetArgument(c_25, 1);
                      s_24 :
                      if(match_cons(e_25, sym_TNil_0))
                        {
                          t_24 :
                          if(match_cons(g_25, sym_TNil_0))
                            {
                              ATerm i_25 = NULL;
                              if(v_24 != NULL && v_24 != b_25)
                                _fail(b_25);
                              else
                                v_24 = b_25;
                              if(i_25 != NULL && i_25 != d_25)
                                _fail(d_25);
                              else
                                i_25 = d_25;
                              t = not_null(i_25);
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
ATerm lookup_0 (ATerm t)
{
  ATerm s_7 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = s_7;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm p_41 (ATerm, ATerm (ATerm)))
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
  y_25 = t;
  r_25 :
  if(match_cons(y_25, sym_TCons_2))
    {
      z_25 = ATgetArgument(y_25, 0);
      a_26 = ATgetArgument(y_25, 1);
      s_25 :
      if(match_cons(a_26, sym_TCons_2))
        {
          b_26 = ATgetArgument(a_26, 0);
          c_26 = ATgetArgument(a_26, 1);
          x_25 :
          if(match_cons(c_26, sym_TNil_0))
            {
              t = not_null(z_25);
              {
                ATerm i_1 (ATerm t)
                {
                  ATerm j_1 (ATerm t)
                  {
                    t = not_null(b_26);
                    return(t);
                  }
                  t = split_2(t, _id, j_1);
                  t = lookup_0(t);
                  return(t);
                }
                t = p_41(t, i_1);
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
ATerm all_dist_1 (ATerm t, ATerm x_40 (ATerm))
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,p_26 = NULL,q_26 = NULL;
  l_26 = t;
  i_26 :
  if(match_cons(l_26, sym_TCons_2))
    {
      m_26 = ATgetArgument(l_26, 0);
      n_26 = ATgetArgument(l_26, 1);
      j_26 :
      if(match_cons(n_26, sym_TCons_2))
        {
          p_26 = ATgetArgument(n_26, 0);
          q_26 = ATgetArgument(n_26, 1);
          k_26 :
          if(match_cons(q_26, sym_TNil_0))
            {
              t = not_null(m_26);
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm t_26 = NULL;
                  t_26 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_26), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = x_40(t);
                  return(t);
                }
                t = _all(t, k_1);
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
ATerm env_alltd_1 (ATerm t, ATerm c_41 (ATerm))
{
  ATerm x_26 (ATerm t)
  {
    ATerm t_7 = t;
    if(PushChoice()==0)
      {
        t = c_41(t);
        PopChoice();
      }
    else
      {
        t = t_7;
        t = all_dist_1(t, x_26);
      }
    return(t);
  }
  t = x_26(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm d_42 (ATerm, ATerm (ATerm)), ATerm e_42 (ATerm), ATerm f_42 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm g_42 (ATerm, ATerm (ATerm)))
{
  ATerm z_26 = NULL;
  z_26 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_26), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  {
    ATerm c_27 (ATerm t)
    {
      ATerm l_1 (ATerm t)
      {
        ATerm x_7 = t;
        if(PushChoice()==0)
          {
            t = RnVar_1(t, d_42);
            PopChoice();
          }
        else
          {
            t = x_7;
            t = RnBinding_2(t, e_42, g_42);
            t = DistBinding_2(t, c_27, f_42);
          }
        return(t);
      }
      t = env_alltd_1(t, l_1);
      return(t);
    }
    t = c_27(t);
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, tpaste_1);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm e_27 = NULL;
  e_27 = t;
  d_27 :
  if(!(match_cons(e_27, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm p_33 (ATerm), ATerm q_33 (ATerm))
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
  j_27 = t;
  i_27 :
  if(match_cons(j_27, sym_TCons_2))
    {
      k_27 = ATgetArgument(j_27, 0);
      l_27 = ATgetArgument(j_27, 1);
      {
        ATerm o_27 = NULL;
        t = not_null(k_27);
        {
          ATerm r_27 = NULL;
          t = p_33(t);
          o_27 = t;
          t = not_null(l_27);
          t = q_33(t);
          r_27 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_27), not_null(r_27));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm v_28 = NULL;
  ATerm z_7;
  z_7 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm w_28 = NULL,z_28 = NULL;
      w_28 = t;
      u_28 :
      if(match_cons(w_28, sym_Program_1))
        {
          z_28 = ATgetArgument(w_28, 0);
          if(v_28 != NULL && v_28 != z_28)
            _fail(z_28);
          else
            v_28 = z_28;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, m_1);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_28), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = z_7;
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
  ATerm g_29 = NULL,h_29 = NULL;
  ATerm n_1 (ATerm t)
  {
    ATerm o_1 (ATerm t)
    {
      ATerm a_8 = t;
      if(PushChoice()==0)
        {
          ATerm q_1 (ATerm t)
          {
            ATerm i_29 = NULL;
            i_29 = t;
            b_29 :
            if(!(match_cons(i_29, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, q_1);
          PopChoice();
          _fail(t);
        }
      else
        t = a_8;
      return(t);
    }
    ATerm p_1 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, o_1, p_1);
    {
      ATerm v_1 (ATerm t)
      {
        ATerm x_1 (ATerm t)
        {
          ATerm j_29 = NULL,k_29 = NULL;
          j_29 = t;
          d_29 :
          if(match_cons(j_29, sym_Runtime_1))
            {
              k_29 = ATgetArgument(j_29, 0);
              if(h_29 != NULL && h_29 != k_29)
                _fail(k_29);
              else
                h_29 = k_29;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, x_1);
        return(t);
      }
      ATerm w_1 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, v_1, w_1);
      {
        ATerm y_1 (ATerm t)
        {
          ATerm q_2 (ATerm t)
          {
            ATerm l_29 = NULL,m_29 = NULL;
            l_29 = t;
            f_29 :
            if(match_cons(l_29, sym_Program_1))
              {
                m_29 = ATgetArgument(l_29, 0);
                if(g_29 != NULL && g_29 != m_29)
                  _fail(m_29);
                else
                  g_29 = m_29;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, q_2);
          return(t);
        }
        ATerm d_2 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, y_1, d_2);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_29), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_29), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, n_1);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL;
  t_29 = t;
  q_29 :
  if(match_cons(t_29, sym_TCons_2))
    {
      u_29 = ATgetArgument(t_29, 0);
      v_29 = ATgetArgument(t_29, 1);
      r_29 :
      if(match_cons(v_29, sym_TCons_2))
        {
          w_29 = ATgetArgument(v_29, 0);
          x_29 = ATgetArgument(v_29, 1);
          s_29 :
          if(match_cons(x_29, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(u_29), not_null(w_29));
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
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
  f_30 = t;
  c_30 :
  if(match_cons(f_30, sym_TCons_2))
    {
      g_30 = ATgetArgument(f_30, 0);
      h_30 = ATgetArgument(f_30, 1);
      d_30 :
      if(match_cons(h_30, sym_TCons_2))
        {
          i_30 = ATgetArgument(h_30, 0);
          j_30 = ATgetArgument(h_30, 1);
          e_30 :
          if(match_cons(j_30, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(g_30), not_null(i_30));
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
  ATerm r_30 = NULL;
  ATerm b_8;
  b_8 = t;
  {
    ATerm r_2 (ATerm t)
    {
      ATerm c_8 = t;
      if(PushChoice()==0)
        {
          ATerm a_3 (ATerm t)
          {
            ATerm s_30 = NULL,t_30 = NULL;
            s_30 = t;
            o_30 :
            if(match_cons(s_30, sym_Output_1))
              {
                t_30 = ATgetArgument(s_30, 0);
                if(r_30 != NULL && r_30 != t_30)
                  _fail(t_30);
                else
                  r_30 = t_30;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, a_3);
          PopChoice();
        }
      else
        {
          t = c_8;
          {
            ATerm u_30 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            u_30 = t;
            if(r_30 != NULL && r_30 != u_30)
              _fail(u_30);
            else
              r_30 = u_30;
          }
        }
      return(t);
    }
    ATerm s_2 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, r_2, s_2);
  }
  t = b_8;
  {
    ATerm b_3 (ATerm t)
    {
      ATerm c_3 (ATerm t)
      {
        ATerm d_3 (ATerm t)
        {
          t = not_null(r_30);
          return(t);
        }
        t = split_2(t, d_3, _id);
        return(t);
      }
      t = TCons_2(t, c_3, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, b_3);
    {
      ATerm d_8 = t;
      if(PushChoice()==0)
        {
          ATerm e_3 (ATerm t)
          {
            ATerm g_3 (ATerm t)
            {
              ATerm v_30 = NULL;
              v_30 = t;
              q_30 :
              if(!(match_cons(v_30, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, g_3);
            return(t);
          }
          ATerm f_3 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, e_3, f_3);
          PopChoice();
        }
      else
        {
          t = d_8;
          {
            ATerm h_3 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, h_3);
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
ATerm apply_strategy_1 (ATerm t, ATerm y_37 (ATerm))
{
  ATerm d_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL;
  ATerm h_8;
  h_8 = t;
  t = dtime_0(t);
  t = h_8;
  t = y_37(t);
  {
    ATerm j_8;
    j_8 = t;
    {
      ATerm f_31 = NULL;
      t = dtime_0(t);
      f_31 = t;
      if(d_31 != NULL && d_31 != f_31)
        _fail(f_31);
      else
        d_31 = f_31;
    }
    t = j_8;
    g_31 = t;
    a_31 :
    if(match_cons(g_31, sym_TCons_2))
      {
        h_31 = ATgetArgument(g_31, 0);
        i_31 = ATgetArgument(g_31, 1);
        b_31 :
        if(match_cons(i_31, sym_TCons_2))
          {
            j_31 = ATgetArgument(i_31, 0);
            k_31 = ATgetArgument(i_31, 1);
            c_31 :
            if(match_cons(k_31, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(d_31)), not_null(h_31)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_31), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm q_31 = NULL;
  q_31 = t;
  t = SSL_ReadFromFile(not_null(q_31));
  return(t);
}
ATerm split_2 (ATerm t, ATerm r_49 (ATerm), ATerm s_49 (ATerm))
{
  ATerm x_31 = NULL;
  ATerm z_31 = NULL,b_32 = NULL;
  x_31 = t;
  {
    ATerm k_8;
    k_8 = t;
    {
      ATerm a_32 = NULL;
      t = not_null(x_31);
      t = r_49(t);
      a_32 = t;
      if(z_31 != NULL && z_31 != a_32)
        _fail(a_32);
      else
        z_31 = a_32;
    }
    t = k_8;
    {
      ATerm c_32 = NULL;
      t = not_null(x_31);
      t = s_49(t);
      c_32 = t;
      if(b_32 != NULL && b_32 != c_32)
        _fail(c_32);
      else
        b_32 = c_32;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_31), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_32), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm r_32 = NULL;
  ATerm l_8;
  l_8 = t;
  {
    ATerm m_8 = t;
    if(PushChoice()==0)
      {
        ATerm m_3 (ATerm t)
        {
          ATerm s_32 = NULL,t_32 = NULL;
          s_32 = t;
          p_32 :
          if(match_cons(s_32, sym_Input_1))
            {
              t_32 = ATgetArgument(s_32, 0);
              if(r_32 != NULL && r_32 != t_32)
                _fail(t_32);
              else
                r_32 = t_32;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, m_3);
        PopChoice();
      }
    else
      {
        t = m_8;
        {
          ATerm u_32 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          u_32 = t;
          if(r_32 != NULL && r_32 != u_32)
            _fail(u_32);
          else
            r_32 = u_32;
        }
      }
  }
  t = l_8;
  {
    ATerm n_3 (ATerm t)
    {
      t = not_null(r_32);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, n_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm y_32 = NULL;
  y_32 = t;
  x_32 :
  if(!(match_cons(y_32, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm x_37 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm n_8 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = n_8;
        {
          ATerm o_8 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = o_8;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, p_3);
  t = x_37(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_33 = NULL;
  a_33 = t;
  t = SSL_table_create(not_null(a_33));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm e_33 = NULL;
  e_33 = t;
  {
    ATerm p_8;
    p_8 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_33), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = p_8;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm o_33 = NULL,r_33 = NULL,s_33 = NULL,v_33 = NULL,w_33 = NULL;
  w_33 = t;
  m_33 :
  if(match_cons(w_33, sym_Cons_2))
    {
      o_33 = ATgetArgument(w_33, 0);
      r_33 = ATgetArgument(w_33, 1);
      n_33 :
      if(match_cons(r_33, sym_Cons_2))
        {
          s_33 = ATgetArgument(r_33, 0);
          v_33 = ATgetArgument(r_33, 1);
          {
            ATerm a_34 = NULL;
            t = not_null(o_33);
            t = d_0(t);
            {
              ATerm b_34 = NULL;
              t = not_null(s_33);
              t = e_0(t);
              b_34 = t;
              if(a_34 != NULL && a_34 != b_34)
                _fail(b_34);
              else
                a_34 = b_34;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_34), not_null(v_33));
            }
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(w_33, "register-usage-info"))
        t = register_usage_1(t, f_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm q_8 = t;
  if(PushChoice()==0)
    {
      ATerm r_3 (ATerm t)
      {
        ATerm q_34 = NULL;
        q_34 = t;
        f_34 :
        if(!(match_string(q_34, "-S")))
          {
            if(!(match_string(q_34, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm s_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm t_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, r_3, s_3, t_3);
      PopChoice();
    }
  else
    {
      t = q_8;
      {
        ATerm r_8 = t;
        if(PushChoice()==0)
          {
            ATerm u_3 (ATerm t)
            {
              ATerm r_34 = NULL;
              r_34 = t;
              g_34 :
              if(!(match_string(r_34, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm v_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm w_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, u_3, v_3, w_3);
            PopChoice();
          }
        else
          {
            t = r_8;
            {
              ATerm s_8 = t;
              if(PushChoice()==0)
                {
                  ATerm x_3 (ATerm t)
                  {
                    ATerm s_34 = NULL;
                    s_34 = t;
                    h_34 :
                    if(!(match_string(s_34, "-v")))
                      {
                        if(!(match_string(s_34, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm y_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm e_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, x_3, y_3, e_4);
                  PopChoice();
                }
              else
                {
                  t = s_8;
                  {
                    ATerm t_8 = t;
                    if(PushChoice()==0)
                      {
                        ATerm f_4 (ATerm t)
                        {
                          ATerm t_34 = NULL;
                          t_34 = t;
                          i_34 :
                          if(!(match_string(t_34, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm g_4 (ATerm t)
                        {
                          ATerm u_34 = NULL;
                          u_34 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(u_34));
                          return(t);
                        }
                        ATerm i_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, f_4, g_4, i_4);
                        PopChoice();
                      }
                    else
                      {
                        t = t_8;
                        {
                          ATerm u_8 = t;
                          if(PushChoice()==0)
                            {
                              ATerm k_4 (ATerm t)
                              {
                                ATerm c_35 = NULL;
                                c_35 = t;
                                k_34 :
                                if(!(match_string(c_35, "-i")))
                                  {
                                    if(!(match_string(c_35, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm m_4 (ATerm t)
                              {
                                ATerm d_35 = NULL;
                                d_35 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_35));
                                return(t);
                              }
                              ATerm n_4 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, k_4, m_4, n_4);
                              PopChoice();
                            }
                          else
                            {
                              t = u_8;
                              {
                                ATerm v_8 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm o_4 (ATerm t)
                                    {
                                      ATerm f_35 = NULL;
                                      f_35 = t;
                                      m_34 :
                                      if(!(match_string(f_35, "-o")))
                                        {
                                          if(!(match_string(f_35, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm p_4 (ATerm t)
                                    {
                                      ATerm g_35 = NULL;
                                      g_35 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_35));
                                      return(t);
                                    }
                                    ATerm q_4 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, o_4, p_4, q_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = v_8;
                                    {
                                      ATerm w_8 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm r_4 (ATerm t)
                                          {
                                            ATerm i_35 = NULL;
                                            i_35 = t;
                                            o_34 :
                                            if(!(match_string(i_35, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm s_4 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm t_4 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, r_4, s_4, t_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = w_8;
                                          {
                                            ATerm y_4 (ATerm t)
                                            {
                                              ATerm j_35 = NULL;
                                              j_35 = t;
                                              p_34 :
                                              if(!(match_string(j_35, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm z_4 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm a_5 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, y_4, z_4, a_5);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm o_35 = NULL;
  o_35 = t;
  t = SSL_table_destroy(not_null(o_35));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm s_35 = NULL;
  s_35 = t;
  t = SSL_exit(not_null(s_35));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm x_35 = NULL;
  x_35 = t;
  t = SSL_implode_string(not_null(x_35));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_48 (ATerm))
{
  ATerm a_36 (ATerm t)
  {
    ATerm x_8 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, a_36);
        PopChoice();
      }
    else
      {
        t = x_8;
        t = Nil_0(t);
        t = r_48(t);
      }
    return(t);
  }
  t = a_36(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_8 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = z_8;
      {
        ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
        d_36 = t;
        c_36 :
        if(match_cons(d_36, sym_Cons_2))
          {
            e_36 = ATgetArgument(d_36, 0);
            f_36 = ATgetArgument(d_36, 1);
            t = not_null(e_36);
            {
              ATerm b_5 (ATerm t)
              {
                t = not_null(f_36);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, b_5);
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
  ATerm l_36 = NULL;
  l_36 = t;
  t = SSL_explode_string(not_null(l_36));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm w_34 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_48 (ATerm))
{
  ATerm o_36 (ATerm t)
  {
    ATerm a_9 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = a_9;
        t = Cons_2(t, d_48, o_36);
      }
    return(t);
  }
  t = o_36(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL;
  u_36 = t;
  q_36 :
  if(match_cons(u_36, sym_TCons_2))
    {
      v_36 = ATgetArgument(u_36, 0);
      w_36 = ATgetArgument(u_36, 1);
      r_36 :
      if(match_cons(v_36, sym_Nil_0))
        {
          s_36 :
          if(match_cons(w_36, sym_TCons_2))
            {
              x_36 = ATgetArgument(w_36, 0);
              y_36 = ATgetArgument(w_36, 1);
              t_36 :
              if(match_cons(y_36, sym_TNil_0))
                t = not_null(x_36);
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
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL;
  j_37 = t;
  c_37 :
  if(match_cons(j_37, sym_TCons_2))
    {
      k_37 = ATgetArgument(j_37, 0);
      q_37 = ATgetArgument(j_37, 1);
      d_37 :
      if(match_cons(k_37, sym_Cons_2))
        {
          l_37 = ATgetArgument(k_37, 0);
          p_37 = ATgetArgument(k_37, 1);
          f_37 :
          if(match_cons(q_37, sym_TCons_2))
            {
              r_37 = ATgetArgument(q_37, 0);
              s_37 = ATgetArgument(q_37, 1);
              g_37 :
              if(match_cons(s_37, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_37), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_37), not_null(r_37)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm a_38 (ATerm), ATerm b_38 (ATerm))
{
  ATerm z_37 (ATerm t)
  {
    ATerm b_9 = t;
    if(PushChoice()==0)
      {
        t = a_38(t);
        t = z_37(t);
        PopChoice();
      }
    else
      {
        t = b_9;
        t = b_38(t);
      }
    return(t);
  }
  t = z_37(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm d_38 (ATerm))
{
  t = repeat_2(t, d_38, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm f_38 = NULL;
  f_38 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_38), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm v_34 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm x_28 (ATerm))
{
  ATerm l_38 = NULL,m_38 = NULL;
  l_38 = t;
  k_38 :
  if(match_cons(l_38, sym_Program_1))
    {
      m_38 = ATgetArgument(l_38, 0);
      {
        ATerm o_38 = NULL;
        t = not_null(m_38);
        t = x_28(t);
        o_38 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_38));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm c_39 = NULL;
  ATerm c_5 (ATerm t)
  {
    ATerm d_5 (ATerm t)
    {
      ATerm d_39 = NULL;
      d_39 = t;
      if(c_39 != NULL && c_39 != d_39)
        _fail(d_39);
      else
        c_39 = d_39;
      return(t);
    }
    t = Program_1(t, d_5);
    return(t);
  }
  t = option_defined_1(t, c_5);
  {
    ATerm e_5 (ATerm t)
    {
      ATerm e_39 = NULL;
      ATerm f_39 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm f_5 (ATerm t)
        {
          t = not_null(c_39);
          return(t);
        }
        t = short_description_1(t, f_5);
        t = concat_strings_0(t);
        f_39 = t;
        if(e_39 != NULL && e_39 != f_39)
          _fail(f_39);
        else
          e_39 = f_39;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_39), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, e_5);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm g_5 (ATerm t)
      {
        ATerm g_39 = NULL;
        g_39 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_39), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, g_5);
      {
        ATerm h_5 (ATerm t)
        {
          ATerm i_39 = NULL;
          ATerm j_39 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm i_5 (ATerm t)
            {
              t = not_null(c_39);
              return(t);
            }
            t = long_description_1(t, i_5);
            t = concat_strings_0(t);
            j_39 = t;
            if(i_39 != NULL && i_39 != j_39)
              _fail(j_39);
            else
              i_39 = j_39;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_39), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, h_5);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL;
  s_39 = t;
  p_39 :
  if(match_cons(s_39, sym_TCons_2))
    {
      t_39 = ATgetArgument(s_39, 0);
      u_39 = ATgetArgument(s_39, 1);
      q_39 :
      if(match_cons(u_39, sym_TCons_2))
        {
          v_39 = ATgetArgument(u_39, 0);
          w_39 = ATgetArgument(u_39, 1);
          r_39 :
          if(match_cons(w_39, sym_TNil_0))
            {
              ATerm f_9;
              f_9 = t;
              t = SSL_printnl(not_null(t_39), not_null(v_39));
              t = f_9;
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
ATerm Undefined_1 (ATerm t, ATerm y_28 (ATerm))
{
  ATerm h_40 = NULL,i_40 = NULL;
  h_40 = t;
  g_40 :
  if(match_cons(h_40, sym_Undefined_1))
    {
      i_40 = ATgetArgument(h_40, 0);
      {
        ATerm k_40 = NULL;
        t = not_null(i_40);
        t = y_28(t);
        k_40 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_40));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm l_48 (ATerm))
{
  ATerm o_40 (ATerm t)
  {
    ATerm g_9 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, l_48, _id);
        PopChoice();
      }
    else
      {
        t = g_9;
        t = Cons_2(t, _id, o_40);
      }
    return(t);
  }
  t = o_40(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_35 (ATerm))
{
  t = fetch_1(t, u_35);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm q_40 = NULL;
  q_40 = t;
  p_40 :
  if(!(match_cons(q_40, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm j_50 (ATerm))
{
  ATerm i_9 = t;
  if(PushChoice()==0)
    {
      t = j_50(t);
      PopChoice();
    }
  else
    t = i_9;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL;
  v_40 = t;
  s_40 :
  if(match_cons(v_40, sym_TCons_2))
    {
      w_40 = ATgetArgument(v_40, 0);
      y_40 = ATgetArgument(v_40, 1);
      t_40 :
      if(match_cons(y_40, sym_TCons_2))
        {
          z_40 = ATgetArgument(y_40, 0);
          a_41 = ATgetArgument(y_40, 1);
          u_40 :
          if(match_cons(a_41, sym_TNil_0))
            t = SSL_table_get(not_null(w_40), not_null(z_40));
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
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL;
  m_41 = t;
  i_41 :
  if(match_cons(m_41, sym_TCons_2))
    {
      n_41 = ATgetArgument(m_41, 0);
      o_41 = ATgetArgument(m_41, 1);
      j_41 :
      if(match_cons(o_41, sym_TCons_2))
        {
          q_41 = ATgetArgument(o_41, 0);
          r_41 = ATgetArgument(o_41, 1);
          k_41 :
          if(match_cons(r_41, sym_TCons_2))
            {
              s_41 = ATgetArgument(r_41, 0);
              t_41 = ATgetArgument(r_41, 1);
              l_41 :
              if(match_cons(t_41, sym_TNil_0))
                {
                  ATerm k_9;
                  k_9 = t;
                  {
                    ATerm z_41 = NULL;
                    ATerm a_42 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_41), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm l_9 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = l_9;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      a_42 = t;
                      if(z_41 != NULL && z_41 != a_42)
                        _fail(a_42);
                      else
                        z_41 = a_42;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_41), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_41), not_null(z_41)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = k_9;
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
ATerm register_usage_1 (ATerm t, ATerm a_35 (ATerm))
{
  ATerm l_42 = NULL;
  ATerm m_42 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = a_35(t);
  m_42 = t;
  if(l_42 != NULL && l_42 != m_42)
    _fail(m_42);
  else
    l_42 = m_42;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_42), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL;
  u_42 = t;
  r_42 :
  if(match_cons(u_42, sym_Cons_2))
    {
      s_42 = ATgetArgument(u_42, 0);
      t_42 = ATgetArgument(u_42, 1);
      {
        ATerm x_42 = NULL;
        t = not_null(s_42);
        t = a_0(t);
        {
          ATerm y_42 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = b_0(t);
          y_42 = t;
          if(x_42 != NULL && x_42 != y_42)
            _fail(y_42);
          else
            x_42 = y_42;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_42), not_null(t_42));
        }
      }
    }
  else
    {
      if(match_string(u_42, "register-usage-info"))
        t = register_usage_1(t, c_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm g_43 = NULL;
    g_43 = t;
    f_43 :
    if(!(match_string(g_43, "--help")))
      {
        if(!(match_string(g_43, "-h")))
          {
            if(!(match_string(g_43, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, j_5, l_5, n_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL;
  j_43 = t;
  i_43 :
  if(match_cons(j_43, sym_Cons_2))
    {
      k_43 = ATgetArgument(j_43, 0);
      l_43 = ATgetArgument(j_43, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(k_43)), not_null(l_43));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_33 (ATerm), ATerm u_33 (ATerm))
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL;
  t_43 = t;
  s_43 :
  if(match_cons(t_43, sym_Cons_2))
    {
      u_43 = ATgetArgument(t_43, 0);
      v_43 = ATgetArgument(t_43, 1);
      {
        ATerm y_43 = NULL;
        t = not_null(u_43);
        {
          ATerm a_44 = NULL;
          t = t_33(t);
          y_43 = t;
          t = not_null(v_43);
          t = u_33(t);
          a_44 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_43), not_null(a_44));
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
  g_44 :
  if(!(match_cons(i_44, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm y_34 (ATerm))
{
  ATerm m_9;
  m_9 = t;
  {
    ATerm o_5 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = y_34(t);
      return(t);
    }
    t = try_1(t, o_5);
  }
  t = m_9;
  {
    ATerm p_5 (ATerm t)
    {
      ATerm m_44 = NULL;
      m_44 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_44));
      return(t);
    }
    ATerm q_5 (ATerm t)
    {
      ATerm n_9 = t;
      if(PushChoice()==0)
        {
          ATerm o_9 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = o_9;
              t = y_34(t);
              t = Cons_2(t, _id, q_5);
            }
          PopChoice();
        }
      else
        {
          t = n_9;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, p_5, q_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL;
  ATerm s_9;
  s_9 = t;
  {
    ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL;
    b_45 = t;
    r_44 :
    if(match_cons(b_45, sym_TCons_2))
      {
        c_45 = ATgetArgument(b_45, 0);
        d_45 = ATgetArgument(b_45, 1);
        v_44 :
        if(match_cons(d_45, sym_TCons_2))
          {
            e_45 = ATgetArgument(d_45, 0);
            f_45 = ATgetArgument(d_45, 1);
            w_44 :
            if(match_cons(f_45, sym_TCons_2))
              {
                g_45 = ATgetArgument(f_45, 0);
                h_45 = ATgetArgument(f_45, 1);
                x_44 :
                if(match_cons(h_45, sym_TNil_0))
                  {
                    if(y_44 != NULL && y_44 != c_45)
                      _fail(c_45);
                    else
                      y_44 = c_45;
                    if(z_44 != NULL && z_44 != e_45)
                      _fail(e_45);
                    else
                      z_44 = e_45;
                    if(a_45 != NULL && a_45 != g_45)
                      _fail(g_45);
                    else
                      a_45 = g_45;
                    t = SSL_table_put(not_null(y_44), not_null(z_44), not_null(a_45));
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
  t = s_9;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_34 (ATerm))
{
  ATerm k_45 = NULL;
  ATerm t_9;
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = t_9;
  {
    ATerm r_5 (ATerm t)
    {
      ATerm u_9 = t;
      if(PushChoice()==0)
        {
          t = x_34(t);
          PopChoice();
        }
      else
        {
          t = u_9;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, r_5);
    {
      ATerm w_5 (ATerm t)
      {
        ATerm y_9 = t;
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
            t = y_9;
            {
              ATerm x_5 (ATerm t)
              {
                ATerm y_5 (ATerm t)
                {
                  ATerm l_45 = NULL;
                  l_45 = t;
                  if(k_45 != NULL && k_45 != l_45)
                    _fail(l_45);
                  else
                    k_45 = l_45;
                  return(t);
                }
                t = Undefined_1(t, y_5);
                return(t);
              }
              t = option_defined_1(t, x_5);
              {
                ATerm z_9;
                z_9 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_45), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = z_9;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, w_5);
      {
        ATerm a_10;
        a_10 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = a_10;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm m_37 (ATerm), ATerm n_37 (ATerm), ATerm o_37 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm j_10 = t;
    if(PushChoice()==0)
      {
        t = n_37(t);
        PopChoice();
      }
    else
      {
        t = j_10;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, z_5);
  t = store_options_0(t);
  {
    ATerm k_10 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, o_37);
        PopChoice();
      }
    else
      {
        t = k_10;
        {
          ATerm l_10 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, m_37);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = l_10;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm h_37 (ATerm), ATerm i_37 (ATerm))
{
  t = iowrap_3(t, h_37, i_37, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm e_37 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    ATerm e_6 (ATerm t)
    {
      t = TCons_2(t, e_37, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, e_6);
    return(t);
  }
  t = iowrap_2(t, a_6, _fail);
  return(t);
}
ATerm rename_vars_0 (ATerm t)
{
  t = iowrap_1(t, strename_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_vars_0(t);
  return(t);
}
