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
ATerm spaste_1 (ATerm, ATerm v_53 (ATerm));
ATerm Rec_2 (ATerm, ATerm b_32 (ATerm), ATerm c_32 (ATerm));
ATerm SDef_3 (ATerm, ATerm f_32 (ATerm), ATerm g_32 (ATerm), ATerm h_32 (ATerm));
ATerm Let_2 (ATerm, ATerm d_32 (ATerm), ATerm e_32 (ATerm));
ATerm sboundin_3 (ATerm, ATerm w_53 (ATerm), ATerm x_53 (ATerm), ATerm y_53 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm a_32 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm r_53 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm z_30 (ATerm));
ATerm Scope_2 (ATerm, ATerm f_33 (ATerm), ATerm g_33 (ATerm));
ATerm tboundin_3 (ATerm, ATerm s_53 (ATerm), ATerm t_53 (ATerm), ATerm u_53 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm i_42 (ATerm), ATerm j_42 (ATerm), ATerm k_42 (ATerm));
ATerm crush_3 (ATerm, ATerm z_43 (ATerm), ATerm a_44 (ATerm), ATerm b_44 (ATerm));
ATerm collect_kids_1 (ATerm, ATerm h_44 (ATerm));
ATerm HdMember_1 (ATerm, ATerm p_43 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm w_37 (ATerm), ATerm x_37 (ATerm));
ATerm for_3 (ATerm, ATerm z_37 (ATerm), ATerm a_38 (ATerm), ATerm b_38 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm g_39 (ATerm), ATerm h_39 (ATerm), ATerm i_39 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm m_31 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm z_40 (ATerm), ATerm a_41 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm at_end_1 (ATerm, ATerm v_47 (ATerm));
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm q_45 (ATerm), ATerm r_45 (ATerm), ATerm s_45 (ATerm), ATerm t_45 (ATerm));
ATerm zip_1 (ATerm, ATerm v_45 (ATerm));
ATerm new_0 (ATerm);
ATerm map_1 (ATerm, ATerm g_47 (ATerm));
ATerm RnBinding_2 (ATerm, ATerm f_41 (ATerm), ATerm g_41 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm t_40 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm b_40 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm g_40 (ATerm));
ATerm rename_4 (ATerm, ATerm h_41 (ATerm, ATerm (ATerm)), ATerm i_41 (ATerm), ATerm j_41 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm k_41 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm k_33 (ATerm), ATerm l_33 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_49 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm d_37 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_48 (ATerm), ATerm w_48 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm u_28 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm p_47 (ATerm));
ATerm option_defined_1 (ATerm, ATerm z_34 (ATerm));
ATerm need_help_1 (ATerm, ATerm c_37 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm s_34 (ATerm), ATerm t_34 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm u_34 (ATerm), ATerm v_34 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_33 (ATerm), ATerm p_33 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm q_34 (ATerm));
ATerm iowrap_3 (ATerm, ATerm r_36 (ATerm), ATerm s_36 (ATerm), ATerm t_36 (ATerm));
ATerm iowrap_2 (ATerm, ATerm m_36 (ATerm), ATerm n_36 (ATerm));
ATerm iowrap_1 (ATerm, ATerm j_36 (ATerm));
ATerm rename_vars_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL,m_1 = NULL;
  k_1 = t;
  j_1 :
  if(match_cons(k_1, sym_Cons_2))
    {
      l_1 = ATgetArgument(k_1, 0);
      m_1 = ATgetArgument(k_1, 1);
      t = not_null(l_1);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm v_53 (ATerm))
{
  ATerm h_5 = t;
  if(PushChoice()==0)
    {
      ATerm a_0 (ATerm t)
      {
        t = split_2(t, _id, v_53);
        {
          ATerm b_0 (ATerm t)
          {
            ATerm a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL;
            a_2 = t;
            r_1 :
            if(match_cons(a_2, sym_TCons_2))
              {
                b_2 = ATgetArgument(a_2, 0);
                f_2 = ATgetArgument(a_2, 1);
                s_1 :
                if(match_cons(b_2, sym_SDef_3))
                  {
                    c_2 = ATgetArgument(b_2, 0);
                    d_2 = ATgetArgument(b_2, 1);
                    e_2 = ATgetArgument(b_2, 2);
                    t_1 :
                    if(match_cons(f_2, sym_TCons_2))
                      {
                        g_2 = ATgetArgument(f_2, 0);
                        h_2 = ATgetArgument(f_2, 1);
                        u_1 :
                        if(match_cons(h_2, sym_TNil_0))
                          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(g_2), not_null(d_2), not_null(e_2));
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
          t = zip_1(t, b_0);
        }
        return(t);
      }
      t = Let_2(t, a_0, _id);
      PopChoice();
    }
  else
    {
      t = h_5;
      {
        ATerm i_5 = t;
        if(PushChoice()==0)
          {
            ATerm c_0 (ATerm t)
            {
              t = split_2(t, _id, v_53);
              {
                ATerm d_0 (ATerm t)
                {
                  ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
                  l_2 = t;
                  w_1 :
                  if(match_cons(l_2, sym_TCons_2))
                    {
                      m_2 = ATgetArgument(l_2, 0);
                      p_2 = ATgetArgument(l_2, 1);
                      x_1 :
                      if(match_cons(m_2, sym_VarDec_2))
                        {
                          n_2 = ATgetArgument(m_2, 0);
                          o_2 = ATgetArgument(m_2, 1);
                          y_1 :
                          if(match_cons(p_2, sym_TCons_2))
                            {
                              q_2 = ATgetArgument(p_2, 0);
                              r_2 = ATgetArgument(p_2, 1);
                              z_1 :
                              if(match_cons(r_2, sym_TNil_0))
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(q_2), not_null(o_2));
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
                t = zip_1(t, d_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, c_0, _id);
            PopChoice();
          }
        else
          {
            t = i_5;
            {
              ATerm e_0 (ATerm t)
              {
                t = v_53(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, e_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm b_32 (ATerm), ATerm c_32 (ATerm))
{
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL;
  b_3 = t;
  a_3 :
  if(match_cons(b_3, sym_Rec_2))
    {
      c_3 = ATgetArgument(b_3, 0);
      d_3 = ATgetArgument(b_3, 1);
      {
        ATerm g_3 = NULL;
        t = not_null(c_3);
        {
          ATerm i_3 = NULL;
          t = b_32(t);
          g_3 = t;
          t = not_null(d_3);
          t = c_32(t);
          i_3 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(g_3), not_null(i_3));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm f_32 (ATerm), ATerm g_32 (ATerm), ATerm h_32 (ATerm))
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL;
  s_3 = t;
  r_3 :
  if(match_cons(s_3, sym_SDef_3))
    {
      t_3 = ATgetArgument(s_3, 0);
      u_3 = ATgetArgument(s_3, 1);
      v_3 = ATgetArgument(s_3, 2);
      {
        ATerm z_3 = NULL;
        t = not_null(t_3);
        {
          ATerm b_4 = NULL;
          t = f_32(t);
          z_3 = t;
          t = not_null(u_3);
          {
            ATerm d_4 = NULL;
            t = g_32(t);
            b_4 = t;
            t = not_null(v_3);
            t = h_32(t);
            d_4 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(z_3), not_null(b_4), not_null(d_4));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm d_32 (ATerm), ATerm e_32 (ATerm))
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
          t = d_32(t);
          s_4 = t;
          t = not_null(p_4);
          t = e_32(t);
          u_4 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(s_4), not_null(u_4));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm w_53 (ATerm), ATerm x_53 (ATerm), ATerm y_53 (ATerm))
{
  ATerm j_5 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, w_53, w_53);
      PopChoice();
    }
  else
    {
      t = j_5;
      {
        ATerm o_5 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, y_53, y_53, w_53);
            PopChoice();
          }
        else
          {
            t = o_5;
            t = Rec_2(t, y_53, w_53);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL;
  l_5 = t;
  k_5 :
  if(match_cons(l_5, sym_Rec_2))
    {
      m_5 = ATgetArgument(l_5, 0);
      n_5 = ATgetArgument(l_5, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_5), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL;
  v_5 = t;
  u_5 :
  if(match_cons(v_5, sym_SDef_3))
    {
      w_5 = ATgetArgument(v_5, 0);
      x_5 = ATgetArgument(v_5, 1);
      y_5 = ATgetArgument(v_5, 2);
      t = not_null(x_5);
      {
        ATerm f_0 (ATerm t)
        {
          ATerm c_6 = NULL,e_6 = NULL,i_6 = NULL;
          c_6 = t;
          t_5 :
          if(match_cons(c_6, sym_VarDec_2))
            {
              e_6 = ATgetArgument(c_6, 0);
              i_6 = ATgetArgument(c_6, 1);
              t = not_null(e_6);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, f_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL;
  q_6 = t;
  p_6 :
  if(match_cons(q_6, sym_Let_2))
    {
      r_6 = ATgetArgument(q_6, 0);
      s_6 = ATgetArgument(q_6, 1);
      t = not_null(r_6);
      {
        ATerm g_0 (ATerm t)
        {
          ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL;
          v_6 = t;
          o_6 :
          if(match_cons(v_6, sym_SDef_3))
            {
              w_6 = ATgetArgument(v_6, 0);
              x_6 = ATgetArgument(v_6, 1);
              y_6 = ATgetArgument(v_6, 2);
              t = not_null(w_6);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, g_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm a_32 (ATerm))
{
  ATerm h_7 = NULL,i_7 = NULL;
  h_7 = t;
  g_7 :
  if(match_cons(h_7, sym_SVar_1))
    {
      i_7 = ATgetArgument(h_7, 0);
      {
        ATerm k_7 = NULL;
        t = not_null(i_7);
        t = a_32(t);
        k_7 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(k_7));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    ATerm p_5 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = p_5;
        {
          ATerm q_5 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = q_5;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, h_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm r_53 (ATerm))
{
  t = Scope_2(t, r_53, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm z_30 (ATerm))
{
  ATerm r_7 = NULL,s_7 = NULL;
  r_7 = t;
  q_7 :
  if(match_cons(r_7, sym_DynamicRules_1))
    {
      s_7 = ATgetArgument(r_7, 0);
      {
        ATerm u_7 = NULL;
        t = not_null(s_7);
        t = z_30(t);
        u_7 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(u_7));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm f_33 (ATerm), ATerm g_33 (ATerm))
{
  ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
  c_8 = t;
  b_8 :
  if(match_cons(c_8, sym_Scope_2))
    {
      d_8 = ATgetArgument(c_8, 0);
      e_8 = ATgetArgument(c_8, 1);
      {
        ATerm h_8 = NULL;
        t = not_null(d_8);
        {
          ATerm j_8 = NULL;
          t = f_33(t);
          h_8 = t;
          t = not_null(e_8);
          t = g_33(t);
          j_8 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_8), not_null(j_8));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm s_53 (ATerm), ATerm t_53 (ATerm), ATerm u_53 (ATerm))
{
  ATerm r_5 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, u_53, s_53);
      PopChoice();
    }
  else
    {
      t = r_5;
      t = DynamicRules_1(t, s_53);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL;
  z_8 = t;
  y_8 :
  if(match_cons(z_8, sym_DynamicRules_1))
    {
      a_9 = ATgetArgument(z_8, 0);
      t = not_null(a_9);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  f_9 = t;
  e_9 :
  if(match_cons(f_9, sym_Var_1))
    {
      g_9 = ATgetArgument(f_9, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_9), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL;
  n_9 = t;
  k_9 :
  if(match_cons(n_9, sym_TCons_2))
    {
      o_9 = ATgetArgument(n_9, 0);
      p_9 = ATgetArgument(n_9, 1);
      l_9 :
      if(match_cons(p_9, sym_TCons_2))
        {
          q_9 = ATgetArgument(p_9, 0);
          r_9 = ATgetArgument(p_9, 1);
          m_9 :
          if(match_cons(r_9, sym_TNil_0))
            {
              t = not_null(o_9);
              {
                ATerm v_9 (ATerm t)
                {
                  ATerm s_5 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(q_9);
                      PopChoice();
                    }
                  else
                    {
                      t = s_5;
                      {
                        ATerm z_5 = t;
                        if(PushChoice()==0)
                          {
                            ATerm i_0 (ATerm t)
                            {
                              t = not_null(q_9);
                              return(t);
                            }
                            t = HdMember_1(t, i_0);
                            t = v_9(t);
                            PopChoice();
                          }
                        else
                          {
                            t = z_5;
                            t = Cons_2(t, _id, v_9);
                          }
                      }
                    }
                  return(t);
                }
                t = v_9(t);
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
ATerm foldr_3 (ATerm t, ATerm i_42 (ATerm), ATerm j_42 (ATerm), ATerm k_42 (ATerm))
{
  ATerm j_10 (ATerm t)
  {
    ATerm a_6 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        t = i_42(t);
        PopChoice();
      }
    else
      {
        t = a_6;
        {
          ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL;
          a_10 = t;
          z_9 :
          if(match_cons(a_10, sym_Cons_2))
            {
              b_10 = ATgetArgument(a_10, 0);
              c_10 = ATgetArgument(a_10, 1);
              {
                ATerm f_10 = NULL;
                t = not_null(b_10);
                {
                  ATerm h_10 = NULL;
                  t = k_42(t);
                  f_10 = t;
                  t = not_null(c_10);
                  t = j_10(t);
                  h_10 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_10), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_10), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = j_42(t);
                }
              }
            }
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = j_10(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm z_43 (ATerm), ATerm a_44 (ATerm), ATerm b_44 (ATerm))
{
  ATerm t_10 = NULL;
  ATerm v_10 = NULL;
  t_10 = t;
  {
    ATerm w_10 = NULL;
    ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
    t = not_null(t_10);
    w_10 = t;
    t = SSL_explode_term(not_null(w_10));
    y_10 = t;
    q_10 :
    if(match_cons(y_10, sym_TCons_2))
      {
        z_10 = ATgetArgument(y_10, 0);
        a_11 = ATgetArgument(y_10, 1);
        r_10 :
        if(match_cons(a_11, sym_TCons_2))
          {
            b_11 = ATgetArgument(a_11, 0);
            c_11 = ATgetArgument(a_11, 1);
            s_10 :
            if(match_cons(c_11, sym_TNil_0))
              {
                if(v_10 != NULL && v_10 != b_11)
                  _fail(b_11);
                else
                  v_10 = b_11;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(v_10);
    t = foldr_3(t, z_43, a_44, b_44);
  }
  return(t);
}
ATerm collect_kids_1 (ATerm t, ATerm h_44 (ATerm))
{
  ATerm j_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = crush_3(t, j_0, union_0, h_44);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm p_43 (ATerm))
{
  ATerm j_11 = NULL,m_11 = NULL,n_11 = NULL;
  j_11 = t;
  i_11 :
  if(match_cons(j_11, sym_Cons_2))
    {
      m_11 = ATgetArgument(j_11, 0);
      n_11 = ATgetArgument(j_11, 1);
      t = p_43(t);
      {
        ATerm k_0 (ATerm t)
        {
          ATerm v_11 = NULL;
          v_11 = t;
          if(m_11 != NULL && m_11 != v_11)
            _fail(v_11);
          else
            m_11 = v_11;
          return(t);
        }
        t = fetch_1(t, k_0);
      }
      t = not_null(n_11);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
  e_12 = t;
  z_11 :
  if(match_cons(e_12, sym_TCons_2))
    {
      f_12 = ATgetArgument(e_12, 0);
      t_12 = ATgetArgument(e_12, 1);
      a_12 :
      if(match_cons(t_12, sym_TCons_2))
        {
          u_12 = ATgetArgument(t_12, 0);
          x_12 = ATgetArgument(t_12, 1);
          b_12 :
          if(match_cons(u_12, sym_Cons_2))
            {
              v_12 = ATgetArgument(u_12, 0);
              w_12 = ATgetArgument(u_12, 1);
              c_12 :
              if(match_cons(x_12, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_12), not_null(f_12)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_12), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
  s_13 = t;
  o_13 :
  if(match_cons(s_13, sym_Cons_2))
    {
      t_13 = ATgetArgument(s_13, 0);
      y_13 = ATgetArgument(s_13, 1);
      p_13 :
      if(match_cons(t_13, sym_TCons_2))
        {
          u_13 = ATgetArgument(t_13, 0);
          v_13 = ATgetArgument(t_13, 1);
          q_13 :
          if(match_cons(v_13, sym_TCons_2))
            {
              w_13 = ATgetArgument(v_13, 0);
              x_13 = ATgetArgument(v_13, 1);
              r_13 :
              if(match_cons(x_13, sym_TNil_0))
                {
                  ATerm c_14 = NULL,d_14 = NULL,l_14 = NULL,t_14 = NULL;
                  ATerm b_6;
                  b_6 = t;
                  {
                    ATerm e_14 = NULL;
                    ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL;
                    t = not_null(w_13);
                    e_14 = t;
                    t = SSL_explode_term(not_null(e_14));
                    g_14 = t;
                    f_13 :
                    if(match_cons(g_14, sym_TCons_2))
                      {
                        h_14 = ATgetArgument(g_14, 0);
                        i_14 = ATgetArgument(g_14, 1);
                        g_13 :
                        if(match_cons(i_14, sym_TCons_2))
                          {
                            j_14 = ATgetArgument(i_14, 0);
                            k_14 = ATgetArgument(i_14, 1);
                            h_13 :
                            if(match_cons(k_14, sym_TNil_0))
                              {
                                if(c_14 != NULL && c_14 != h_14)
                                  _fail(h_14);
                                else
                                  c_14 = h_14;
                                if(d_14 != NULL && d_14 != j_14)
                                  _fail(j_14);
                                else
                                  d_14 = j_14;
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
                  t = b_6;
                  {
                    ATerm m_14 = NULL;
                    ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
                    t = not_null(u_13);
                    m_14 = t;
                    t = SSL_explode_term(not_null(m_14));
                    o_14 = t;
                    k_13 :
                    if(match_cons(o_14, sym_TCons_2))
                      {
                        p_14 = ATgetArgument(o_14, 0);
                        q_14 = ATgetArgument(o_14, 1);
                        l_13 :
                        if(match_cons(q_14, sym_TCons_2))
                          {
                            r_14 = ATgetArgument(q_14, 0);
                            s_14 = ATgetArgument(q_14, 1);
                            m_13 :
                            if(match_cons(s_14, sym_TNil_0))
                              {
                                if(c_14 != NULL && c_14 != p_14)
                                  _fail(p_14);
                                else
                                  c_14 = p_14;
                                if(l_14 != NULL && l_14 != r_14)
                                  _fail(r_14);
                                else
                                  l_14 = r_14;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_14), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    t_14 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = conc_0(t);
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
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL;
  g_15 = t;
  c_15 :
  if(match_cons(g_15, sym_Cons_2))
    {
      h_15 = ATgetArgument(g_15, 0);
      m_15 = ATgetArgument(g_15, 1);
      d_15 :
      if(match_cons(h_15, sym_TCons_2))
        {
          i_15 = ATgetArgument(h_15, 0);
          j_15 = ATgetArgument(h_15, 1);
          e_15 :
          if(match_cons(j_15, sym_TCons_2))
            {
              k_15 = ATgetArgument(j_15, 0);
              l_15 = ATgetArgument(j_15, 1);
              f_15 :
              if(match_cons(l_15, sym_TNil_0))
                {
                  ATerm o_15 = NULL;
                  if(i_15 != NULL && i_15 != k_15)
                    _fail(k_15);
                  else
                    i_15 = k_15;
                  if(o_15 != NULL && o_15 != m_15)
                    _fail(m_15);
                  else
                    o_15 = m_15;
                  t = not_null(o_15);
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
ATerm while_not_2 (ATerm t, ATerm w_37 (ATerm), ATerm x_37 (ATerm))
{
  ATerm q_15 (ATerm t)
  {
    ATerm d_6 = t;
    if(PushChoice()==0)
      {
        t = w_37(t);
        PopChoice();
      }
    else
      {
        t = d_6;
        t = x_37(t);
        t = q_15(t);
      }
    return(t);
  }
  t = q_15(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm z_37 (ATerm), ATerm a_38 (ATerm), ATerm b_38 (ATerm))
{
  t = z_37(t);
  t = while_not_2(t, a_38, b_38);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm f_6 = t;
  if(PushChoice()==0)
    {
      ATerm l_0 (ATerm t)
      {
        ATerm w_15 = NULL;
        w_15 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_15), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm m_0 (ATerm t)
      {
        ATerm o_0 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, o_0);
        return(t);
      }
      ATerm n_0 (ATerm t)
      {
        ATerm g_6 = t;
        if(PushChoice()==0)
          {
            ATerm p_0 (ATerm t)
            {
              ATerm q_0 (ATerm t)
              {
                ATerm h_6 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = h_6;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, q_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, p_0);
            PopChoice();
          }
        else
          {
            t = g_6;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, l_0, m_0, n_0);
      PopChoice();
    }
  else
    {
      t = f_6;
      {
        ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
        y_15 = t;
        t_15 :
        if(match_cons(y_15, sym_TCons_2))
          {
            z_15 = ATgetArgument(y_15, 0);
            a_16 = ATgetArgument(y_15, 1);
            u_15 :
            if(match_cons(a_16, sym_TCons_2))
              {
                b_16 = ATgetArgument(a_16, 0);
                c_16 = ATgetArgument(a_16, 1);
                v_15 :
                if(match_cons(c_16, sym_TNil_0))
                  {
                    t = not_null(z_15);
                    {
                      ATerm h_16 (ATerm t)
                      {
                        ATerm j_6 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = j_6;
                            {
                              ATerm k_6 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm r_0 (ATerm t)
                                  {
                                    t = not_null(b_16);
                                    return(t);
                                  }
                                  t = HdMember_1(t, r_0);
                                  t = h_16(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = k_6;
                                  t = Cons_2(t, _id, h_16);
                                }
                            }
                          }
                        return(t);
                      }
                      t = h_16(t);
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
ATerm free_vars_3 (ATerm t, ATerm g_39 (ATerm), ATerm h_39 (ATerm), ATerm i_39 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm l_16 (ATerm t)
  {
    ATerm l_6 = t;
    if(PushChoice()==0)
      {
        t = g_39(t);
        PopChoice();
      }
    else
      {
        t = l_6;
        {
          ATerm m_6 = t;
          if(PushChoice()==0)
            {
              ATerm j_16 = NULL;
              ATerm n_6;
              n_6 = t;
              {
                ATerm k_16 = NULL;
                t = h_39(t);
                k_16 = t;
                if(j_16 != NULL && j_16 != k_16)
                  _fail(k_16);
                else
                  j_16 = k_16;
              }
              t = n_6;
              {
                ATerm s_0 (ATerm t)
                {
                  ATerm u_0 (ATerm t)
                  {
                    t = not_null(j_16);
                    return(t);
                  }
                  t = split_2(t, l_16, u_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm t_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = i_39(t, s_0, l_16, t_0);
                t = collect_kids_1(t, _id);
              }
              PopChoice();
            }
          else
            {
              t = m_6;
              t = collect_kids_1(t, l_16);
            }
        }
      }
    return(t);
  }
  t = l_16(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm t_6 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = t_6;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, v_0, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL;
  w_16 = t;
  q_16 :
  if(match_cons(w_16, sym_Scope_2))
    {
      x_16 = ATgetArgument(w_16, 0);
      v_16 = ATgetArgument(w_16, 1);
      t = not_null(x_16);
    }
  else
    {
      if(match_cons(w_16, sym_LRule_1))
        {
          x_16 = ATgetArgument(w_16, 0);
          r_16 :
          if(match_cons(x_16, sym_Rule_3))
            {
              y_16 = ATgetArgument(x_16, 0);
              z_16 = ATgetArgument(x_16, 1);
              a_17 = ATgetArgument(x_16, 2);
              t = not_null(y_16);
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
ATerm Var_1 (ATerm t, ATerm m_31 (ATerm))
{
  ATerm n_17 = NULL,o_17 = NULL;
  n_17 = t;
  m_17 :
  if(match_cons(n_17, sym_Var_1))
    {
      o_17 = ATgetArgument(n_17, 0);
      {
        ATerm q_17 = NULL;
        t = not_null(o_17);
        t = m_31(t);
        q_17 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_17));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm z_40 (ATerm), ATerm a_41 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
  m_18 = t;
  i_18 :
  if(match_cons(m_18, sym_TCons_2))
    {
      n_18 = ATgetArgument(m_18, 0);
      o_18 = ATgetArgument(m_18, 1);
      j_18 :
      if(match_cons(o_18, sym_TCons_2))
        {
          p_18 = ATgetArgument(o_18, 0);
          q_18 = ATgetArgument(o_18, 1);
          k_18 :
          if(match_cons(q_18, sym_TCons_2))
            {
              r_18 = ATgetArgument(q_18, 0);
              s_18 = ATgetArgument(q_18, 1);
              l_18 :
              if(match_cons(s_18, sym_TNil_0))
                {
                  t = not_null(n_18);
                  {
                    ATerm w_0 (ATerm t)
                    {
                      ATerm y_18 = NULL;
                      y_18 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = z_40(t);
                      return(t);
                    }
                    ATerm x_0 (ATerm t)
                    {
                      ATerm a_19 = NULL;
                      a_19 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = z_40(t);
                      return(t);
                    }
                    t = a_41(t, w_0, x_0, _id);
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
ATerm at_end_1 (ATerm t, ATerm v_47 (ATerm))
{
  ATerm f_19 (ATerm t)
  {
    ATerm u_6 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, f_19);
        PopChoice();
      }
    else
      {
        t = u_6;
        t = Nil_0(t);
        t = v_47(t);
      }
    return(t);
  }
  t = f_19(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
  k_19 = t;
  h_19 :
  if(match_cons(k_19, sym_TCons_2))
    {
      l_19 = ATgetArgument(k_19, 0);
      m_19 = ATgetArgument(k_19, 1);
      i_19 :
      if(match_cons(m_19, sym_TCons_2))
        {
          n_19 = ATgetArgument(m_19, 0);
          o_19 = ATgetArgument(m_19, 1);
          j_19 :
          if(match_cons(o_19, sym_TNil_0))
            {
              t = not_null(l_19);
              {
                ATerm y_0 (ATerm t)
                {
                  t = not_null(n_19);
                  return(t);
                }
                t = at_end_1(t, y_0);
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
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
  a_20 = t;
  x_19 :
  if(match_cons(a_20, sym_TCons_2))
    {
      b_20 = ATgetArgument(a_20, 0);
      c_20 = ATgetArgument(a_20, 1);
      y_19 :
      if(match_cons(c_20, sym_TCons_2))
        {
          d_20 = ATgetArgument(c_20, 0);
          e_20 = ATgetArgument(c_20, 1);
          z_19 :
          if(match_cons(e_20, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_20), not_null(d_20));
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
  ATerm u_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
  u_20 = t;
  l_20 :
  if(match_cons(u_20, sym_TCons_2))
    {
      w_20 = ATgetArgument(u_20, 0);
      z_20 = ATgetArgument(u_20, 1);
      q_20 :
      if(match_cons(w_20, sym_Cons_2))
        {
          x_20 = ATgetArgument(w_20, 0);
          y_20 = ATgetArgument(w_20, 1);
          r_20 :
          if(match_cons(z_20, sym_TCons_2))
            {
              a_21 = ATgetArgument(z_20, 0);
              d_21 = ATgetArgument(z_20, 1);
              s_20 :
              if(match_cons(a_21, sym_Cons_2))
                {
                  b_21 = ATgetArgument(a_21, 0);
                  c_21 = ATgetArgument(a_21, 1);
                  t_20 :
                  if(match_cons(d_21, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(x_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_21), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(y_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_21), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL;
  p_21 = t;
  k_21 :
  if(match_cons(p_21, sym_TCons_2))
    {
      q_21 = ATgetArgument(p_21, 0);
      r_21 = ATgetArgument(p_21, 1);
      l_21 :
      if(match_cons(q_21, sym_Nil_0))
        {
          m_21 :
          if(match_cons(r_21, sym_TCons_2))
            {
              s_21 = ATgetArgument(r_21, 0);
              t_21 = ATgetArgument(r_21, 1);
              n_21 :
              if(match_cons(s_21, sym_Nil_0))
                {
                  o_21 :
                  if(match_cons(t_21, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm q_45 (ATerm), ATerm r_45 (ATerm), ATerm s_45 (ATerm), ATerm t_45 (ATerm))
{
  ATerm v_21 (ATerm t)
  {
    ATerm z_6 = t;
    if(PushChoice()==0)
      {
        t = q_45(t);
        PopChoice();
      }
    else
      {
        t = z_6;
        t = r_45(t);
        {
          ATerm z_0 (ATerm t)
          {
            t = TCons_2(t, v_21, TNil_0);
            return(t);
          }
          t = TCons_2(t, t_45, z_0);
          t = s_45(t);
        }
      }
    return(t);
  }
  t = v_21(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm v_45 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, v_45);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm map_1 (ATerm t, ATerm g_47 (ATerm))
{
  ATerm w_21 (ATerm t)
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
        t = Cons_2(t, g_47, w_21);
      }
    return(t);
  }
  t = w_21(t);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm f_41 (ATerm), ATerm g_41 (ATerm, ATerm (ATerm)))
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
  m_22 = t;
  h_22 :
  if(match_cons(m_22, sym_TCons_2))
    {
      n_22 = ATgetArgument(m_22, 0);
      o_22 = ATgetArgument(m_22, 1);
      i_22 :
      if(match_cons(o_22, sym_TCons_2))
        {
          p_22 = ATgetArgument(o_22, 0);
          q_22 = ATgetArgument(o_22, 1);
          j_22 :
          if(match_cons(q_22, sym_TNil_0))
            {
              ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,b_23 = NULL;
              ATerm w_22 = NULL;
              t = not_null(n_22);
              {
                ATerm x_22 = NULL;
                t = f_41(t);
                w_22 = t;
                if(t_22 != NULL && t_22 != w_22)
                  _fail(w_22);
                else
                  t_22 = w_22;
                {
                  ATerm y_22 = NULL;
                  t = map_1(t, new_0);
                  x_22 = t;
                  if(u_22 != NULL && u_22 != x_22)
                    _fail(x_22);
                  else
                    u_22 = x_22;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm a_23 = NULL;
                    t = zip_1(t, _id);
                    y_22 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = conc_0(t);
                    a_23 = t;
                    if(v_22 != NULL && v_22 != a_23)
                      _fail(a_23);
                    else
                      v_22 = a_23;
                  }
                }
              }
              t = not_null(n_22);
              {
                ATerm a_1 (ATerm t)
                {
                  t = not_null(u_22);
                  return(t);
                }
                t = g_41(t, a_1);
                b_23 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_22), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
  o_23 = t;
  k_23 :
  if(match_cons(o_23, sym_TCons_2))
    {
      p_23 = ATgetArgument(o_23, 0);
      q_23 = ATgetArgument(o_23, 1);
      l_23 :
      if(match_cons(q_23, sym_TCons_2))
        {
          r_23 = ATgetArgument(q_23, 0);
          u_23 = ATgetArgument(q_23, 1);
          m_23 :
          if(match_cons(r_23, sym_Cons_2))
            {
              s_23 = ATgetArgument(r_23, 0);
              t_23 = ATgetArgument(r_23, 1);
              n_23 :
              if(match_cons(u_23, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_23), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
  g_24 = t;
  z_23 :
  if(match_cons(g_24, sym_TCons_2))
    {
      h_24 = ATgetArgument(g_24, 0);
      i_24 = ATgetArgument(g_24, 1);
      a_24 :
      if(match_cons(i_24, sym_TCons_2))
        {
          j_24 = ATgetArgument(i_24, 0);
          q_24 = ATgetArgument(i_24, 1);
          b_24 :
          if(match_cons(j_24, sym_Cons_2))
            {
              k_24 = ATgetArgument(j_24, 0);
              p_24 = ATgetArgument(j_24, 1);
              c_24 :
              if(match_cons(k_24, sym_TCons_2))
                {
                  l_24 = ATgetArgument(k_24, 0);
                  m_24 = ATgetArgument(k_24, 1);
                  d_24 :
                  if(match_cons(m_24, sym_TCons_2))
                    {
                      n_24 = ATgetArgument(m_24, 0);
                      o_24 = ATgetArgument(m_24, 1);
                      e_24 :
                      if(match_cons(o_24, sym_TNil_0))
                        {
                          f_24 :
                          if(match_cons(q_24, sym_TNil_0))
                            {
                              ATerm u_24 = NULL;
                              if(h_24 != NULL && h_24 != l_24)
                                _fail(l_24);
                              else
                                h_24 = l_24;
                              if(u_24 != NULL && u_24 != n_24)
                                _fail(n_24);
                              else
                                u_24 = n_24;
                              t = not_null(u_24);
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
  ATerm b_7 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = b_7;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm t_40 (ATerm, ATerm (ATerm)))
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
  b_25 = t;
  y_24 :
  if(match_cons(b_25, sym_TCons_2))
    {
      c_25 = ATgetArgument(b_25, 0);
      d_25 = ATgetArgument(b_25, 1);
      z_24 :
      if(match_cons(d_25, sym_TCons_2))
        {
          e_25 = ATgetArgument(d_25, 0);
          f_25 = ATgetArgument(d_25, 1);
          a_25 :
          if(match_cons(f_25, sym_TNil_0))
            {
              t = not_null(c_25);
              {
                ATerm b_1 (ATerm t)
                {
                  ATerm c_1 (ATerm t)
                  {
                    t = not_null(e_25);
                    return(t);
                  }
                  t = split_2(t, _id, c_1);
                  t = lookup_0(t);
                  return(t);
                }
                t = t_40(t, b_1);
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
ATerm all_dist_1 (ATerm t, ATerm b_40 (ATerm))
{
  ATerm o_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
  o_25 = t;
  l_25 :
  if(match_cons(o_25, sym_TCons_2))
    {
      r_25 = ATgetArgument(o_25, 0);
      s_25 = ATgetArgument(o_25, 1);
      m_25 :
      if(match_cons(s_25, sym_TCons_2))
        {
          t_25 = ATgetArgument(s_25, 0);
          u_25 = ATgetArgument(s_25, 1);
          n_25 :
          if(match_cons(u_25, sym_TNil_0))
            {
              t = not_null(r_25);
              {
                ATerm d_1 (ATerm t)
                {
                  ATerm x_25 = NULL;
                  x_25 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_25), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = b_40(t);
                  return(t);
                }
                t = _all(t, d_1);
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
ATerm env_alltd_1 (ATerm t, ATerm g_40 (ATerm))
{
  ATerm b_26 (ATerm t)
  {
    ATerm c_7 = t;
    if(PushChoice()==0)
      {
        t = g_40(t);
        PopChoice();
      }
    else
      {
        t = c_7;
        t = all_dist_1(t, b_26);
      }
    return(t);
  }
  t = b_26(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm h_41 (ATerm, ATerm (ATerm)), ATerm i_41 (ATerm), ATerm j_41 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm k_41 (ATerm, ATerm (ATerm)))
{
  ATerm d_26 = NULL;
  d_26 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_26), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  {
    ATerm g_26 (ATerm t)
    {
      ATerm e_1 (ATerm t)
      {
        ATerm d_7 = t;
        if(PushChoice()==0)
          {
            t = RnVar_1(t, h_41);
            PopChoice();
          }
        else
          {
            t = d_7;
            t = RnBinding_2(t, i_41, k_41);
            t = DistBinding_2(t, g_26, j_41);
          }
        return(t);
      }
      t = env_alltd_1(t, e_1);
      return(t);
    }
    t = g_26(t);
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
  ATerm i_26 = NULL;
  i_26 = t;
  h_26 :
  if(!(match_cons(i_26, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm k_33 (ATerm), ATerm l_33 (ATerm))
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
  o_26 = t;
  n_26 :
  if(match_cons(o_26, sym_TCons_2))
    {
      p_26 = ATgetArgument(o_26, 0);
      q_26 = ATgetArgument(o_26, 1);
      {
        ATerm t_26 = NULL;
        t = not_null(p_26);
        {
          ATerm v_26 = NULL;
          t = k_33(t);
          t_26 = t;
          t = not_null(q_26);
          t = l_33(t);
          v_26 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_26), not_null(v_26));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm c_27 = NULL;
  ATerm e_7;
  e_7 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm d_27 = NULL,e_27 = NULL;
      d_27 = t;
      b_27 :
      if(match_cons(d_27, sym_Program_1))
        {
          e_27 = ATgetArgument(d_27, 0);
          if(c_27 != NULL && c_27 != e_27)
            _fail(e_27);
          else
            c_27 = e_27;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, f_1);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_27), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = e_7;
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
  ATerm h_27 = NULL;
  h_27 = t;
  t = SSL_exit(not_null(h_27));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL,p_28 = NULL,q_28 = NULL;
  p_27 = t;
  m_27 :
  if(match_cons(p_27, sym_TCons_2))
    {
      q_27 = ATgetArgument(p_27, 0);
      r_27 = ATgetArgument(p_27, 1);
      n_27 :
      if(match_cons(r_27, sym_TCons_2))
        {
          p_28 = ATgetArgument(r_27, 0);
          q_28 = ATgetArgument(r_27, 1);
          o_27 :
          if(match_cons(q_28, sym_TNil_0))
            {
              ATerm f_7;
              f_7 = t;
              t = SSL_printnl(not_null(q_27), not_null(p_28));
              t = f_7;
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
ATerm try_1 (ATerm t, ATerm n_49 (ATerm))
{
  ATerm j_7 = t;
  if(PushChoice()==0)
    {
      t = n_49(t);
      PopChoice();
    }
  else
    t = j_7;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL;
  ATerm g_1 (ATerm t)
  {
    ATerm h_1 (ATerm t)
    {
      ATerm l_7 = t;
      if(PushChoice()==0)
        {
          ATerm n_1 (ATerm t)
          {
            ATerm c_29 = NULL;
            c_29 = t;
            v_28 :
            if(!(match_cons(c_29, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, n_1);
          PopChoice();
          _fail(t);
        }
      else
        t = l_7;
      return(t);
    }
    ATerm i_1 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, h_1, i_1);
    {
      ATerm o_1 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          ATerm d_29 = NULL,e_29 = NULL;
          d_29 = t;
          x_28 :
          if(match_cons(d_29, sym_Runtime_1))
            {
              e_29 = ATgetArgument(d_29, 0);
              if(b_29 != NULL && b_29 != e_29)
                _fail(e_29);
              else
                b_29 = e_29;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, q_1);
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
          ATerm j_2 (ATerm t)
          {
            ATerm f_29 = NULL,g_29 = NULL;
            f_29 = t;
            z_28 :
            if(match_cons(f_29, sym_Program_1))
              {
                g_29 = ATgetArgument(f_29, 0);
                if(a_29 != NULL && a_29 != g_29)
                  _fail(g_29);
                else
                  a_29 = g_29;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, j_2);
          return(t);
        }
        ATerm i_2 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, v_1, i_2);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_29), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_29), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, g_1);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL;
  n_29 = t;
  k_29 :
  if(match_cons(n_29, sym_TCons_2))
    {
      o_29 = ATgetArgument(n_29, 0);
      p_29 = ATgetArgument(n_29, 1);
      l_29 :
      if(match_cons(p_29, sym_TCons_2))
        {
          q_29 = ATgetArgument(p_29, 0);
          r_29 = ATgetArgument(p_29, 1);
          m_29 :
          if(match_cons(r_29, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(o_29), not_null(q_29));
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
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL;
  z_29 = t;
  w_29 :
  if(match_cons(z_29, sym_TCons_2))
    {
      a_30 = ATgetArgument(z_29, 0);
      b_30 = ATgetArgument(z_29, 1);
      x_29 :
      if(match_cons(b_30, sym_TCons_2))
        {
          c_30 = ATgetArgument(b_30, 0);
          d_30 = ATgetArgument(b_30, 1);
          y_29 :
          if(match_cons(d_30, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(a_30), not_null(c_30));
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
  ATerm l_30 = NULL;
  ATerm m_7;
  m_7 = t;
  {
    ATerm k_2 (ATerm t)
    {
      ATerm n_7 = t;
      if(PushChoice()==0)
        {
          ATerm t_2 (ATerm t)
          {
            ATerm m_30 = NULL,n_30 = NULL;
            m_30 = t;
            i_30 :
            if(match_cons(m_30, sym_Output_1))
              {
                n_30 = ATgetArgument(m_30, 0);
                if(l_30 != NULL && l_30 != n_30)
                  _fail(n_30);
                else
                  l_30 = n_30;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, t_2);
          PopChoice();
        }
      else
        {
          t = n_7;
          {
            ATerm o_30 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            o_30 = t;
            if(l_30 != NULL && l_30 != o_30)
              _fail(o_30);
            else
              l_30 = o_30;
          }
        }
      return(t);
    }
    ATerm s_2 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, k_2, s_2);
  }
  t = m_7;
  {
    ATerm u_2 (ATerm t)
    {
      ATerm v_2 (ATerm t)
      {
        ATerm w_2 (ATerm t)
        {
          t = not_null(l_30);
          return(t);
        }
        t = split_2(t, w_2, _id);
        return(t);
      }
      t = TCons_2(t, v_2, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, u_2);
    {
      ATerm o_7 = t;
      if(PushChoice()==0)
        {
          ATerm x_2 (ATerm t)
          {
            ATerm z_2 (ATerm t)
            {
              ATerm p_30 = NULL;
              p_30 = t;
              k_30 :
              if(!(match_cons(p_30, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, z_2);
            return(t);
          }
          ATerm y_2 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, x_2, y_2);
          PopChoice();
        }
      else
        {
          t = o_7;
          {
            ATerm e_3 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, e_3);
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
ATerm apply_strategy_1 (ATerm t, ATerm d_37 (ATerm))
{
  ATerm x_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
  ATerm p_7;
  p_7 = t;
  t = dtime_0(t);
  t = p_7;
  t = d_37(t);
  {
    ATerm t_7;
    t_7 = t;
    {
      ATerm y_30 = NULL;
      t = dtime_0(t);
      y_30 = t;
      if(x_30 != NULL && x_30 != y_30)
        _fail(y_30);
      else
        x_30 = y_30;
    }
    t = t_7;
    a_31 = t;
    u_30 :
    if(match_cons(a_31, sym_TCons_2))
      {
        b_31 = ATgetArgument(a_31, 0);
        c_31 = ATgetArgument(a_31, 1);
        v_30 :
        if(match_cons(c_31, sym_TCons_2))
          {
            d_31 = ATgetArgument(c_31, 0);
            e_31 = ATgetArgument(c_31, 1);
            w_30 :
            if(match_cons(e_31, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(x_30)), not_null(b_31)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_31), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm k_31 = NULL;
  k_31 = t;
  t = SSL_ReadFromFile(not_null(k_31));
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_48 (ATerm), ATerm w_48 (ATerm))
{
  ATerm r_31 = NULL;
  ATerm t_31 = NULL;
  r_31 = t;
  {
    ATerm v_31 = NULL;
    t = v_48(t);
    t_31 = t;
    t = not_null(r_31);
    t = w_48(t);
    v_31 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_31), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_31), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm l_32 = NULL;
  ATerm v_7;
  v_7 = t;
  {
    ATerm w_7 = t;
    if(PushChoice()==0)
      {
        ATerm f_3 (ATerm t)
        {
          ATerm m_32 = NULL,n_32 = NULL;
          m_32 = t;
          j_32 :
          if(match_cons(m_32, sym_Input_1))
            {
              n_32 = ATgetArgument(m_32, 0);
              if(l_32 != NULL && l_32 != n_32)
                _fail(n_32);
              else
                l_32 = n_32;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, f_3);
        PopChoice();
      }
    else
      {
        t = w_7;
        {
          ATerm o_32 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          o_32 = t;
          if(l_32 != NULL && l_32 != o_32)
            _fail(o_32);
          else
            l_32 = o_32;
        }
      }
  }
  t = v_7;
  {
    ATerm h_3 (ATerm t)
    {
      t = not_null(l_32);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, h_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_32 = NULL;
  s_32 = t;
  r_32 :
  if(!(match_cons(s_32, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_28 (ATerm))
{
  ATerm w_32 = NULL,x_32 = NULL;
  w_32 = t;
  v_32 :
  if(match_cons(w_32, sym_Undefined_1))
    {
      x_32 = ATgetArgument(w_32, 0);
      {
        ATerm z_32 = NULL;
        t = not_null(x_32);
        t = u_28(t);
        z_32 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(z_32));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_33 = NULL;
  e_33 = t;
  d_33 :
  if(!(match_cons(e_33, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm p_47 (ATerm))
{
  ATerm h_33 (ATerm t)
  {
    ATerm x_7 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, p_47, _id);
        PopChoice();
      }
    else
      {
        t = x_7;
        t = Cons_2(t, _id, h_33);
      }
    return(t);
  }
  t = h_33(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm z_34 (ATerm))
{
  t = fetch_1(t, z_34);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_37 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm y_7 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = y_7;
        {
          ATerm z_7 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = z_7;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, j_3);
  t = c_37(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL;
  ATerm a_8;
  a_8 = t;
  {
    ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL;
    u_33 = t;
    j_33 :
    if(match_cons(u_33, sym_TCons_2))
      {
        v_33 = ATgetArgument(u_33, 0);
        w_33 = ATgetArgument(u_33, 1);
        m_33 :
        if(match_cons(w_33, sym_TCons_2))
          {
            x_33 = ATgetArgument(w_33, 0);
            y_33 = ATgetArgument(w_33, 1);
            n_33 :
            if(match_cons(y_33, sym_TCons_2))
              {
                z_33 = ATgetArgument(y_33, 0);
                a_34 = ATgetArgument(y_33, 1);
                q_33 :
                if(match_cons(a_34, sym_TNil_0))
                  {
                    if(r_33 != NULL && r_33 != v_33)
                      _fail(v_33);
                    else
                      r_33 = v_33;
                    if(s_33 != NULL && s_33 != x_33)
                      _fail(x_33);
                    else
                      s_33 = x_33;
                    if(t_33 != NULL && t_33 != z_33)
                      _fail(z_33);
                    else
                      t_33 = z_33;
                    t = SSL_table_put(not_null(r_33), not_null(s_33), not_null(t_33));
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
  t = a_8;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm d_34 = NULL;
  d_34 = t;
  t = SSL_table_create(not_null(d_34));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm h_34 = NULL;
  h_34 = t;
  {
    ATerm f_8;
    f_8 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_34), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = f_8;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm s_34 (ATerm), ATerm t_34 (ATerm))
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
  n_34 = t;
  m_34 :
  if(match_cons(n_34, sym_Cons_2))
    {
      o_34 = ATgetArgument(n_34, 0);
      p_34 = ATgetArgument(n_34, 1);
      {
        ATerm y_34 = NULL;
        t = not_null(o_34);
        t = s_34(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = t_34(t);
        y_34 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_34), not_null(p_34));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm u_34 (ATerm), ATerm v_34 (ATerm))
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL;
  h_35 = t;
  f_35 :
  if(match_cons(h_35, sym_Cons_2))
    {
      i_35 = ATgetArgument(h_35, 0);
      j_35 = ATgetArgument(h_35, 1);
      g_35 :
      if(match_cons(j_35, sym_Cons_2))
        {
          k_35 = ATgetArgument(j_35, 0);
          l_35 = ATgetArgument(j_35, 1);
          {
            ATerm p_35 = NULL;
            t = not_null(i_35);
            t = u_34(t);
            t = not_null(k_35);
            t = v_34(t);
            p_35 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_35), not_null(l_35));
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
  ATerm g_8 = t;
  if(PushChoice()==0)
    {
      ATerm k_3 (ATerm t)
      {
        ATerm q_36 = NULL;
        q_36 = t;
        t_35 :
        if(!(match_string(q_36, "-S")))
          _fail(t);
        return(t);
      }
      ATerm l_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, k_3, l_3);
      PopChoice();
    }
  else
    {
      t = g_8;
      {
        ATerm i_8 = t;
        if(PushChoice()==0)
          {
            ATerm m_3 (ATerm t)
            {
              ATerm u_36 = NULL;
              u_36 = t;
              u_35 :
              if(!(match_string(u_36, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm n_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, m_3, n_3);
            PopChoice();
          }
        else
          {
            t = i_8;
            {
              ATerm k_8 = t;
              if(PushChoice()==0)
                {
                  ATerm o_3 (ATerm t)
                  {
                    ATerm v_36 = NULL;
                    v_36 = t;
                    v_35 :
                    if(!(match_string(v_36, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm p_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, o_3, p_3);
                  PopChoice();
                }
              else
                {
                  t = k_8;
                  {
                    ATerm l_8 = t;
                    if(PushChoice()==0)
                      {
                        ATerm q_3 (ATerm t)
                        {
                          ATerm w_36 = NULL;
                          w_36 = t;
                          w_35 :
                          if(!(match_string(w_36, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm w_3 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, q_3, w_3);
                        PopChoice();
                      }
                    else
                      {
                        t = l_8;
                        {
                          ATerm m_8 = t;
                          if(PushChoice()==0)
                            {
                              ATerm x_3 (ATerm t)
                              {
                                ATerm x_36 = NULL;
                                x_36 = t;
                                x_35 :
                                if(!(match_string(x_36, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm y_3 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, x_3, y_3);
                              PopChoice();
                            }
                          else
                            {
                              t = m_8;
                              {
                                ATerm n_8 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm a_4 (ATerm t)
                                    {
                                      ATerm y_36 = NULL;
                                      y_36 = t;
                                      y_35 :
                                      if(!(match_string(y_36, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm c_4 (ATerm t)
                                    {
                                      ATerm z_36 = NULL;
                                      z_36 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(z_36));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, a_4, c_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = n_8;
                                    {
                                      ATerm o_8 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm e_4 (ATerm t)
                                          {
                                            ATerm b_37 = NULL;
                                            b_37 = t;
                                            a_36 :
                                            if(!(match_string(b_37, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm f_4 (ATerm t)
                                          {
                                            ATerm e_37 = NULL;
                                            e_37 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_37));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, e_4, f_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = o_8;
                                          {
                                            ATerm p_8 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm g_4 (ATerm t)
                                                {
                                                  ATerm g_37 = NULL;
                                                  g_37 = t;
                                                  c_36 :
                                                  if(!(match_string(g_37, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm h_4 (ATerm t)
                                                {
                                                  ATerm h_37 = NULL;
                                                  h_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_37));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, g_4, h_4);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = p_8;
                                                {
                                                  ATerm q_8 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm i_4 (ATerm t)
                                                      {
                                                        ATerm j_37 = NULL;
                                                        j_37 = t;
                                                        e_36 :
                                                        if(!(match_string(j_37, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm j_4 (ATerm t)
                                                      {
                                                        ATerm k_37 = NULL;
                                                        k_37 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(k_37));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, i_4, j_4);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = q_8;
                                                      {
                                                        ATerm r_8 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm k_4 (ATerm t)
                                                            {
                                                              ATerm m_37 = NULL;
                                                              m_37 = t;
                                                              g_36 :
                                                              if(!(match_string(m_37, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm l_4 (ATerm t)
                                                            {
                                                              ATerm n_37 = NULL;
                                                              n_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_37));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, k_4, l_4);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = r_8;
                                                            {
                                                              ATerm s_8 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm q_4 (ATerm t)
                                                                  {
                                                                    ATerm p_37 = NULL;
                                                                    p_37 = t;
                                                                    i_36 :
                                                                    if(!(match_string(p_37, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm r_4 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, q_4, r_4);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = s_8;
                                                                  {
                                                                    ATerm t_8 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm t_4 (ATerm t)
                                                                        {
                                                                          ATerm q_37 = NULL;
                                                                          q_37 = t;
                                                                          k_36 :
                                                                          if(!(match_string(q_37, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm v_4 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, t_4, v_4);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_8;
                                                                        {
                                                                          ATerm u_8 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm w_4 (ATerm t)
                                                                              {
                                                                                ATerm r_37 = NULL;
                                                                                r_37 = t;
                                                                                l_36 :
                                                                                if(!(match_string(r_37, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm x_4 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, w_4, x_4);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_8;
                                                                              {
                                                                                ATerm v_8 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm y_4 (ATerm t)
                                                                                    {
                                                                                      ATerm s_37 = NULL;
                                                                                      s_37 = t;
                                                                                      o_36 :
                                                                                      if(!(match_string(s_37, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm z_4 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, y_4, z_4);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = v_8;
                                                                                    {
                                                                                      ATerm a_5 (ATerm t)
                                                                                      {
                                                                                        ATerm t_37 = NULL;
                                                                                        t_37 = t;
                                                                                        p_36 :
                                                                                        if(!(match_string(t_37, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm b_5 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, a_5, b_5);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL;
  h_38 = t;
  g_38 :
  if(match_cons(h_38, sym_Cons_2))
    {
      i_38 = ATgetArgument(h_38, 0);
      j_38 = ATgetArgument(h_38, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(i_38)), not_null(j_38));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_33 (ATerm), ATerm p_33 (ATerm))
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL;
  r_38 = t;
  q_38 :
  if(match_cons(r_38, sym_Cons_2))
    {
      s_38 = ATgetArgument(r_38, 0);
      t_38 = ATgetArgument(r_38, 1);
      {
        ATerm w_38 = NULL;
        t = not_null(s_38);
        {
          ATerm y_38 = NULL;
          t = o_33(t);
          w_38 = t;
          t = not_null(t_38);
          t = p_33(t);
          y_38 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_38), not_null(y_38));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm e_39 = NULL;
  e_39 = t;
  d_39 :
  if(!(match_cons(e_39, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm q_34 (ATerm))
{
  ATerm c_5 (ATerm t)
  {
    ATerm k_39 = NULL;
    k_39 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_39));
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    ATerm w_8 = t;
    if(PushChoice()==0)
      {
        ATerm x_8 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = x_8;
            t = q_34(t);
            t = Cons_2(t, _id, d_5);
          }
        PopChoice();
      }
    else
      {
        t = w_8;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, c_5, d_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm r_36 (ATerm), ATerm s_36 (ATerm), ATerm t_36 (ATerm))
{
  ATerm e_5 (ATerm t)
  {
    ATerm b_9 = t;
    if(PushChoice()==0)
      {
        t = s_36(t);
        PopChoice();
      }
    else
      {
        t = b_9;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, e_5);
  t = store_options_0(t);
  {
    ATerm c_9 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, t_36);
        PopChoice();
      }
    else
      {
        t = c_9;
        {
          ATerm d_9 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, r_36);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = d_9;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm m_36 (ATerm), ATerm n_36 (ATerm))
{
  t = iowrap_3(t, m_36, n_36, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm j_36 (ATerm))
{
  ATerm f_5 (ATerm t)
  {
    ATerm g_5 (ATerm t)
    {
      t = TCons_2(t, j_36, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, g_5);
    return(t);
  }
  t = iowrap_2(t, f_5, _fail);
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
