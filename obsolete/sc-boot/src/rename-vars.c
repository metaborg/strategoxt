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
Symbol sym_Operations_1;
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
  sym_Operations_1 = ATmakeSymbol("Operations", 1, ATfalse);
  ATprotectSymbol(sym_Operations_1);
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
ATerm spaste_1 (ATerm, ATerm x_52 (ATerm));
ATerm Rec_2 (ATerm, ATerm l_31 (ATerm), ATerm m_31 (ATerm));
ATerm SDef_3 (ATerm, ATerm p_31 (ATerm), ATerm q_31 (ATerm), ATerm r_31 (ATerm));
ATerm Let_2 (ATerm, ATerm n_31 (ATerm), ATerm o_31 (ATerm));
ATerm sboundin_3 (ATerm, ATerm y_52 (ATerm), ATerm z_52 (ATerm), ATerm a_53 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm k_31 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm t_52 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm j_30 (ATerm));
ATerm Scope_2 (ATerm, ATerm p_32 (ATerm), ATerm q_32 (ATerm));
ATerm tboundin_3 (ATerm, ATerm u_52 (ATerm), ATerm v_52 (ATerm), ATerm w_52 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm m_41 (ATerm), ATerm n_41 (ATerm), ATerm o_41 (ATerm));
ATerm crush_3 (ATerm, ATerm d_43 (ATerm), ATerm e_43 (ATerm), ATerm f_43 (ATerm));
ATerm collect_kids_1 (ATerm, ATerm l_43 (ATerm));
ATerm HdMember_1 (ATerm, ATerm t_42 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm r_35 (ATerm), ATerm s_35 (ATerm));
ATerm for_3 (ATerm, ATerm u_35 (ATerm), ATerm v_35 (ATerm), ATerm w_35 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm k_38 (ATerm), ATerm l_38 (ATerm), ATerm m_38 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm w_30 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm d_40 (ATerm), ATerm e_40 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm at_end_1 (ATerm, ATerm x_46 (ATerm));
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm u_44 (ATerm), ATerm v_44 (ATerm), ATerm w_44 (ATerm), ATerm x_44 (ATerm));
ATerm zip_1 (ATerm, ATerm z_44 (ATerm));
ATerm new_0 (ATerm);
ATerm map_1 (ATerm, ATerm i_46 (ATerm));
ATerm RnBinding_2 (ATerm, ATerm j_40 (ATerm), ATerm k_40 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm x_39 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm f_39 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm k_39 (ATerm));
ATerm rename_4 (ATerm, ATerm l_40 (ATerm, ATerm (ATerm)), ATerm m_40 (ATerm), ATerm n_40 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_40 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm u_32 (ATerm), ATerm v_32 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_48 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm g_38 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_47 (ATerm), ATerm y_47 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm e_28 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm r_46 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_34 (ATerm));
ATerm need_help_1 (ATerm, ATerm f_38 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm c_34 (ATerm), ATerm d_34 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm e_34 (ATerm), ATerm f_34 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_32 (ATerm), ATerm z_32 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm a_34 (ATerm));
ATerm iowrap_3 (ATerm, ATerm u_37 (ATerm), ATerm v_37 (ATerm), ATerm w_37 (ATerm));
ATerm iowrap_2 (ATerm, ATerm p_37 (ATerm), ATerm q_37 (ATerm));
ATerm iowrap_1 (ATerm, ATerm m_37 (ATerm));
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
ATerm spaste_1 (ATerm t, ATerm x_52 (ATerm))
{
  if(PushChoice()==0)
    {
      ATerm a_0 (ATerm t)
      {
        t = split_2(t, _id, x_52);
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
    if(PushChoice()==0)
      {
        ATerm c_0 (ATerm t)
        {
          t = split_2(t, _id, x_52);
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
        ATerm e_0 (ATerm t)
        {
          t = x_52(t);
          t = Hd_0(t);
          return(t);
        }
        t = Rec_2(t, e_0, _id);
      }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm l_31 (ATerm), ATerm m_31 (ATerm))
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
          t = l_31(t);
          g_3 = t;
          t = not_null(d_3);
          t = m_31(t);
          i_3 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(g_3), not_null(i_3));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm p_31 (ATerm), ATerm q_31 (ATerm), ATerm r_31 (ATerm))
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
          t = p_31(t);
          z_3 = t;
          t = not_null(u_3);
          {
            ATerm d_4 = NULL;
            t = q_31(t);
            b_4 = t;
            t = not_null(v_3);
            t = r_31(t);
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
ATerm Let_2 (ATerm t, ATerm n_31 (ATerm), ATerm o_31 (ATerm))
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
          t = n_31(t);
          s_4 = t;
          t = not_null(p_4);
          t = o_31(t);
          u_4 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(s_4), not_null(u_4));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm y_52 (ATerm), ATerm z_52 (ATerm), ATerm a_53 (ATerm))
{
  if(PushChoice()==0)
    {
      t = Let_2(t, y_52, y_52);
      PopChoice();
    }
  else
    if(PushChoice()==0)
      {
        t = SDef_3(t, a_53, a_53, y_52);
        PopChoice();
      }
    else
      t = Rec_2(t, a_53, y_52);
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
ATerm SVar_1 (ATerm t, ATerm k_31 (ATerm))
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
        t = k_31(t);
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
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      if(PushChoice()==0)
        {
          t = Bind2_0(t);
          PopChoice();
        }
      else
        t = Bind3_0(t);
    return(t);
  }
  t = rename_4(t, SVar_1, h_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm t_52 (ATerm))
{
  t = Scope_2(t, t_52, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm j_30 (ATerm))
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
        t = j_30(t);
        u_7 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(u_7));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm p_32 (ATerm), ATerm q_32 (ATerm))
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
          t = p_32(t);
          h_8 = t;
          t = not_null(e_8);
          t = q_32(t);
          j_8 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_8), not_null(j_8));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm u_52 (ATerm), ATerm v_52 (ATerm), ATerm w_52 (ATerm))
{
  if(PushChoice()==0)
    {
      t = Scope_2(t, w_52, u_52);
      PopChoice();
    }
  else
    t = DynamicRules_1(t, u_52);
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
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL;
  p_9 = t;
  m_9 :
  if(match_cons(p_9, sym_TCons_2))
    {
      q_9 = ATgetArgument(p_9, 0);
      r_9 = ATgetArgument(p_9, 1);
      n_9 :
      if(match_cons(r_9, sym_TCons_2))
        {
          s_9 = ATgetArgument(r_9, 0);
          t_9 = ATgetArgument(r_9, 1);
          o_9 :
          if(match_cons(t_9, sym_TNil_0))
            {
              t = not_null(q_9);
              {
                ATerm y_9 (ATerm t)
                {
                  if(PushChoice()==0)
                    {
                      ATerm w_9 = NULL;
                      w_9 = t;
                      l_9 :
                      if(match_cons(w_9, sym_Nil_0))
                        t = not_null(s_9);
                      else
                        _fail(t);
                      PopChoice();
                    }
                  else
                    if(PushChoice()==0)
                      {
                        ATerm i_0 (ATerm t)
                        {
                          t = not_null(s_9);
                          return(t);
                        }
                        t = HdMember_1(t, i_0);
                        t = y_9(t);
                        PopChoice();
                      }
                    else
                      t = Cons_2(t, _id, y_9);
                  return(t);
                }
                t = y_9(t);
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
ATerm foldr_3 (ATerm t, ATerm m_41 (ATerm), ATerm n_41 (ATerm), ATerm o_41 (ATerm))
{
  ATerm o_10 (ATerm t)
  {
    ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL;
    f_10 = t;
    e_10 :
    if(match_cons(f_10, sym_Nil_0))
      t = m_41(t);
    else
      {
        if(match_cons(f_10, sym_Cons_2))
          {
            g_10 = ATgetArgument(f_10, 0);
            h_10 = ATgetArgument(f_10, 1);
            {
              ATerm k_10 = NULL;
              t = not_null(g_10);
              {
                ATerm m_10 = NULL;
                t = o_41(t);
                k_10 = t;
                t = not_null(h_10);
                t = o_10(t);
                m_10 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_10), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_10), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = n_41(t);
              }
            }
          }
        else
          _fail(t);
      }
    return(t);
  }
  t = o_10(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm d_43 (ATerm), ATerm e_43 (ATerm), ATerm f_43 (ATerm))
{
  ATerm z_10 = NULL;
  ATerm b_11 = NULL;
  z_10 = t;
  {
    ATerm c_11 = NULL;
    ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
    t = not_null(z_10);
    c_11 = t;
    t = SSL_explode_term(not_null(c_11));
    e_11 = t;
    w_10 :
    if(match_cons(e_11, sym_TCons_2))
      {
        f_11 = ATgetArgument(e_11, 0);
        g_11 = ATgetArgument(e_11, 1);
        x_10 :
        if(match_cons(g_11, sym_TCons_2))
          {
            h_11 = ATgetArgument(g_11, 0);
            i_11 = ATgetArgument(g_11, 1);
            y_10 :
            if(match_cons(i_11, sym_TNil_0))
              {
                if(b_11 != NULL && b_11 != h_11)
                  _fail(h_11);
                else
                  b_11 = h_11;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(b_11);
    t = foldr_3(t, d_43, e_43, f_43);
  }
  return(t);
}
ATerm collect_kids_1 (ATerm t, ATerm l_43 (ATerm))
{
  ATerm j_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = crush_3(t, j_0, union_0, l_43);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm t_42 (ATerm))
{
  ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL;
  p_11 = t;
  o_11 :
  if(match_cons(p_11, sym_Cons_2))
    {
      q_11 = ATgetArgument(p_11, 0);
      r_11 = ATgetArgument(p_11, 1);
      t = t_42(t);
      {
        ATerm k_0 (ATerm t)
        {
          ATerm u_11 = NULL;
          u_11 = t;
          if(q_11 != NULL && q_11 != u_11)
            _fail(u_11);
          else
            q_11 = u_11;
          return(t);
        }
        t = fetch_1(t, k_0);
      }
      t = not_null(r_11);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL;
  c_12 = t;
  y_11 :
  if(match_cons(c_12, sym_TCons_2))
    {
      d_12 = ATgetArgument(c_12, 0);
      e_12 = ATgetArgument(c_12, 1);
      z_11 :
      if(match_cons(e_12, sym_TCons_2))
        {
          f_12 = ATgetArgument(e_12, 0);
          i_12 = ATgetArgument(e_12, 1);
          a_12 :
          if(match_cons(f_12, sym_Cons_2))
            {
              g_12 = ATgetArgument(f_12, 0);
              h_12 = ATgetArgument(f_12, 1);
              b_12 :
              if(match_cons(i_12, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_12), not_null(d_12)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_12), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL;
  d_13 = t;
  z_12 :
  if(match_cons(d_13, sym_Cons_2))
    {
      e_13 = ATgetArgument(d_13, 0);
      j_13 = ATgetArgument(d_13, 1);
      a_13 :
      if(match_cons(e_13, sym_TCons_2))
        {
          f_13 = ATgetArgument(e_13, 0);
          g_13 = ATgetArgument(e_13, 1);
          b_13 :
          if(match_cons(g_13, sym_TCons_2))
            {
              h_13 = ATgetArgument(g_13, 0);
              i_13 = ATgetArgument(g_13, 1);
              c_13 :
              if(match_cons(i_13, sym_TNil_0))
                {
                  ATerm n_13 = NULL,o_13 = NULL,w_13 = NULL,e_14 = NULL;
                  ATerm d_6;
                  d_6 = t;
                  {
                    ATerm p_13 = NULL;
                    ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
                    t = not_null(h_13);
                    p_13 = t;
                    t = SSL_explode_term(not_null(p_13));
                    r_13 = t;
                    q_12 :
                    if(match_cons(r_13, sym_TCons_2))
                      {
                        s_13 = ATgetArgument(r_13, 0);
                        t_13 = ATgetArgument(r_13, 1);
                        r_12 :
                        if(match_cons(t_13, sym_TCons_2))
                          {
                            u_13 = ATgetArgument(t_13, 0);
                            v_13 = ATgetArgument(t_13, 1);
                            s_12 :
                            if(match_cons(v_13, sym_TNil_0))
                              {
                                if(n_13 != NULL && n_13 != s_13)
                                  _fail(s_13);
                                else
                                  n_13 = s_13;
                                if(o_13 != NULL && o_13 != u_13)
                                  _fail(u_13);
                                else
                                  o_13 = u_13;
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
                  t = d_6;
                  {
                    ATerm x_13 = NULL;
                    ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL;
                    t = not_null(f_13);
                    x_13 = t;
                    t = SSL_explode_term(not_null(x_13));
                    z_13 = t;
                    v_12 :
                    if(match_cons(z_13, sym_TCons_2))
                      {
                        a_14 = ATgetArgument(z_13, 0);
                        b_14 = ATgetArgument(z_13, 1);
                        w_12 :
                        if(match_cons(b_14, sym_TCons_2))
                          {
                            c_14 = ATgetArgument(b_14, 0);
                            d_14 = ATgetArgument(b_14, 1);
                            x_12 :
                            if(match_cons(d_14, sym_TNil_0))
                              {
                                if(n_13 != NULL && n_13 != a_14)
                                  _fail(a_14);
                                else
                                  n_13 = a_14;
                                if(w_13 != NULL && w_13 != c_14)
                                  _fail(c_14);
                                else
                                  w_13 = c_14;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    e_14 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_13), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
  r_14 = t;
  n_14 :
  if(match_cons(r_14, sym_Cons_2))
    {
      s_14 = ATgetArgument(r_14, 0);
      x_14 = ATgetArgument(r_14, 1);
      o_14 :
      if(match_cons(s_14, sym_TCons_2))
        {
          t_14 = ATgetArgument(s_14, 0);
          u_14 = ATgetArgument(s_14, 1);
          p_14 :
          if(match_cons(u_14, sym_TCons_2))
            {
              v_14 = ATgetArgument(u_14, 0);
              w_14 = ATgetArgument(u_14, 1);
              q_14 :
              if(match_cons(w_14, sym_TNil_0))
                {
                  ATerm b_15 = NULL;
                  if(t_14 != NULL && t_14 != v_14)
                    _fail(v_14);
                  else
                    t_14 = v_14;
                  if(b_15 != NULL && b_15 != x_14)
                    _fail(x_14);
                  else
                    b_15 = x_14;
                  t = not_null(b_15);
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
ATerm while_not_2 (ATerm t, ATerm r_35 (ATerm), ATerm s_35 (ATerm))
{
  ATerm d_15 (ATerm t)
  {
    if(PushChoice()==0)
      {
        t = r_35(t);
        PopChoice();
      }
    else
      {
        t = s_35(t);
        t = d_15(t);
      }
    return(t);
  }
  t = d_15(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm u_35 (ATerm), ATerm v_35 (ATerm), ATerm w_35 (ATerm))
{
  t = u_35(t);
  t = while_not_2(t, v_35, w_35);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  if(PushChoice()==0)
    {
      ATerm l_0 (ATerm t)
      {
        ATerm s_15 = NULL;
        s_15 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_15), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm m_0 (ATerm t)
      {
        ATerm o_0 (ATerm t)
        {
          ATerm p_0 (ATerm t)
          {
            ATerm v_15 = NULL;
            v_15 = t;
            f_15 :
            if(!(match_cons(v_15, sym_Nil_0)))
              _fail(t);
            return(t);
          }
          ATerm q_0 (ATerm t)
          {
            ATerm w_15 = NULL;
            w_15 = t;
            g_15 :
            if(!(match_cons(w_15, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, p_0, q_0);
          return(t);
        }
        t = TCons_2(t, _id, o_0);
        return(t);
      }
      ATerm n_0 (ATerm t)
      {
        if(PushChoice()==0)
          {
            ATerm r_0 (ATerm t)
            {
              ATerm s_0 (ATerm t)
              {
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  t = UfDecompose_0(t);
                return(t);
              }
              ATerm t_0 (ATerm t)
              {
                ATerm l_16 = NULL;
                l_16 = t;
                m_15 :
                if(!(match_cons(l_16, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, s_0, t_0);
              return(t);
            }
            t = TCons_2(t, _id, r_0);
            PopChoice();
          }
        else
          t = UfShift_0(t);
        return(t);
      }
      t = for_3(t, l_0, m_0, n_0);
      PopChoice();
    }
  else
    {
      ATerm m_16 = NULL,n_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
      m_16 = t;
      p_15 :
      if(match_cons(m_16, sym_TCons_2))
        {
          n_16 = ATgetArgument(m_16, 0);
          r_16 = ATgetArgument(m_16, 1);
          q_15 :
          if(match_cons(r_16, sym_TCons_2))
            {
              s_16 = ATgetArgument(r_16, 0);
              t_16 = ATgetArgument(r_16, 1);
              r_15 :
              if(match_cons(t_16, sym_TNil_0))
                {
                  t = not_null(n_16);
                  {
                    ATerm z_16 (ATerm t)
                    {
                      if(PushChoice()==0)
                        {
                          ATerm w_16 = NULL;
                          w_16 = t;
                          o_15 :
                          if(!(match_cons(w_16, sym_Nil_0)))
                            _fail(t);
                          PopChoice();
                        }
                      else
                        if(PushChoice()==0)
                          {
                            ATerm u_0 (ATerm t)
                            {
                              t = not_null(s_16);
                              return(t);
                            }
                            t = HdMember_1(t, u_0);
                            t = z_16(t);
                            PopChoice();
                          }
                        else
                          t = Cons_2(t, _id, z_16);
                      return(t);
                    }
                    t = z_16(t);
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
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm k_38 (ATerm), ATerm l_38 (ATerm), ATerm m_38 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm f_17 (ATerm t)
  {
    if(PushChoice()==0)
      {
        t = k_38(t);
        PopChoice();
      }
    else
      if(PushChoice()==0)
        {
          ATerm b_17 = NULL;
          ATerm f_6;
          f_6 = t;
          {
            ATerm e_17 = NULL;
            t = l_38(t);
            e_17 = t;
            if(b_17 != NULL && b_17 != e_17)
              _fail(e_17);
            else
              b_17 = e_17;
          }
          t = f_6;
          {
            ATerm v_0 (ATerm t)
            {
              ATerm x_0 (ATerm t)
              {
                t = not_null(b_17);
                return(t);
              }
              t = split_2(t, f_17, x_0);
              t = diff_0(t);
              return(t);
            }
            ATerm w_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = m_38(t, v_0, f_17, w_0);
            t = collect_kids_1(t, _id);
          }
          PopChoice();
        }
      else
        t = collect_kids_1(t, f_17);
    return(t);
  }
  t = f_17(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      t = Bind4_0(t);
    return(t);
  }
  t = free_vars_3(t, Add1_0, y_0, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,t_17 = NULL,a_18 = NULL,b_18 = NULL;
  m_17 = t;
  j_17 :
  if(match_cons(m_17, sym_Scope_2))
    {
      n_17 = ATgetArgument(m_17, 0);
      l_17 = ATgetArgument(m_17, 1);
      t = not_null(n_17);
    }
  else
    {
      if(match_cons(m_17, sym_LRule_1))
        {
          n_17 = ATgetArgument(m_17, 0);
          k_17 :
          if(match_cons(n_17, sym_Rule_3))
            {
              t_17 = ATgetArgument(n_17, 0);
              a_18 = ATgetArgument(n_17, 1);
              b_18 = ATgetArgument(n_17, 2);
              t = not_null(t_17);
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
ATerm Var_1 (ATerm t, ATerm w_30 (ATerm))
{
  ATerm m_18 = NULL,n_18 = NULL;
  m_18 = t;
  l_18 :
  if(match_cons(m_18, sym_Var_1))
    {
      n_18 = ATgetArgument(m_18, 0);
      {
        ATerm p_18 = NULL;
        t = not_null(n_18);
        t = w_30(t);
        p_18 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_18));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm d_40 (ATerm), ATerm e_40 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
  c_19 = t;
  y_18 :
  if(match_cons(c_19, sym_TCons_2))
    {
      d_19 = ATgetArgument(c_19, 0);
      e_19 = ATgetArgument(c_19, 1);
      z_18 :
      if(match_cons(e_19, sym_TCons_2))
        {
          f_19 = ATgetArgument(e_19, 0);
          g_19 = ATgetArgument(e_19, 1);
          a_19 :
          if(match_cons(g_19, sym_TCons_2))
            {
              h_19 = ATgetArgument(g_19, 0);
              i_19 = ATgetArgument(g_19, 1);
              b_19 :
              if(match_cons(i_19, sym_TNil_0))
                {
                  t = not_null(d_19);
                  {
                    ATerm z_0 (ATerm t)
                    {
                      ATerm m_19 = NULL;
                      m_19 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = d_40(t);
                      return(t);
                    }
                    ATerm a_1 (ATerm t)
                    {
                      ATerm s_19 = NULL;
                      s_19 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = d_40(t);
                      return(t);
                    }
                    t = e_40(t, z_0, a_1, _id);
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
ATerm at_end_1 (ATerm t, ATerm x_46 (ATerm))
{
  ATerm a_20 (ATerm t)
  {
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, a_20);
        PopChoice();
      }
    else
      {
        ATerm z_19 = NULL;
        z_19 = t;
        y_19 :
        if(match_cons(z_19, sym_Nil_0))
          t = x_46(t);
        else
          _fail(t);
      }
    return(t);
  }
  t = a_20(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL;
  m_20 = t;
  f_20 :
  if(match_cons(m_20, sym_TCons_2))
    {
      n_20 = ATgetArgument(m_20, 0);
      o_20 = ATgetArgument(m_20, 1);
      g_20 :
      if(match_cons(o_20, sym_TCons_2))
        {
          p_20 = ATgetArgument(o_20, 0);
          q_20 = ATgetArgument(o_20, 1);
          h_20 :
          if(match_cons(q_20, sym_TNil_0))
            {
              t = not_null(n_20);
              {
                ATerm b_1 (ATerm t)
                {
                  t = not_null(p_20);
                  return(t);
                }
                t = at_end_1(t, b_1);
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
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
  z_20 = t;
  w_20 :
  if(match_cons(z_20, sym_TCons_2))
    {
      a_21 = ATgetArgument(z_20, 0);
      b_21 = ATgetArgument(z_20, 1);
      x_20 :
      if(match_cons(b_21, sym_TCons_2))
        {
          c_21 = ATgetArgument(b_21, 0);
          d_21 = ATgetArgument(b_21, 1);
          y_20 :
          if(match_cons(d_21, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_21), not_null(c_21));
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
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL;
  n_21 = t;
  i_21 :
  if(match_cons(n_21, sym_TCons_2))
    {
      o_21 = ATgetArgument(n_21, 0);
      r_21 = ATgetArgument(n_21, 1);
      j_21 :
      if(match_cons(o_21, sym_Cons_2))
        {
          p_21 = ATgetArgument(o_21, 0);
          q_21 = ATgetArgument(o_21, 1);
          k_21 :
          if(match_cons(r_21, sym_TCons_2))
            {
              s_21 = ATgetArgument(r_21, 0);
              v_21 = ATgetArgument(r_21, 1);
              l_21 :
              if(match_cons(s_21, sym_Cons_2))
                {
                  t_21 = ATgetArgument(s_21, 0);
                  u_21 = ATgetArgument(s_21, 1);
                  m_21 :
                  if(match_cons(v_21, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(p_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_21), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(q_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_21), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL;
  n_22 = t;
  i_22 :
  if(match_cons(n_22, sym_TCons_2))
    {
      o_22 = ATgetArgument(n_22, 0);
      p_22 = ATgetArgument(n_22, 1);
      j_22 :
      if(match_cons(o_22, sym_Nil_0))
        {
          k_22 :
          if(match_cons(p_22, sym_TCons_2))
            {
              q_22 = ATgetArgument(p_22, 0);
              r_22 = ATgetArgument(p_22, 1);
              l_22 :
              if(match_cons(q_22, sym_Nil_0))
                {
                  m_22 :
                  if(match_cons(r_22, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm u_44 (ATerm), ATerm v_44 (ATerm), ATerm w_44 (ATerm), ATerm x_44 (ATerm))
{
  ATerm v_22 (ATerm t)
  {
    if(PushChoice()==0)
      {
        t = u_44(t);
        PopChoice();
      }
    else
      {
        t = v_44(t);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm d_1 (ATerm t)
            {
              ATerm u_22 = NULL;
              u_22 = t;
              t_22 :
              if(!(match_cons(u_22, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, v_22, d_1);
            return(t);
          }
          t = TCons_2(t, x_44, c_1);
          t = w_44(t);
        }
      }
    return(t);
  }
  t = v_22(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm z_44 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, z_44);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_46 (ATerm))
{
  ATerm y_22 (ATerm t)
  {
    if(PushChoice()==0)
      {
        ATerm x_22 = NULL;
        x_22 = t;
        w_22 :
        if(!(match_cons(x_22, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      t = Cons_2(t, i_46, y_22);
    return(t);
  }
  t = y_22(t);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm j_40 (ATerm), ATerm k_40 (ATerm, ATerm (ATerm)))
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL;
  i_23 = t;
  f_23 :
  if(match_cons(i_23, sym_TCons_2))
    {
      j_23 = ATgetArgument(i_23, 0);
      k_23 = ATgetArgument(i_23, 1);
      g_23 :
      if(match_cons(k_23, sym_TCons_2))
        {
          l_23 = ATgetArgument(k_23, 0);
          m_23 = ATgetArgument(k_23, 1);
          h_23 :
          if(match_cons(m_23, sym_TNil_0))
            {
              ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,x_23 = NULL;
              ATerm s_23 = NULL;
              t = not_null(j_23);
              {
                ATerm t_23 = NULL;
                t = j_40(t);
                s_23 = t;
                if(p_23 != NULL && p_23 != s_23)
                  _fail(s_23);
                else
                  p_23 = s_23;
                {
                  ATerm u_23 = NULL;
                  t = map_1(t, new_0);
                  t_23 = t;
                  if(q_23 != NULL && q_23 != t_23)
                    _fail(t_23);
                  else
                    q_23 = t_23;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_23), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm w_23 = NULL;
                    t = zip_1(t, _id);
                    u_23 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_23), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = conc_0(t);
                    w_23 = t;
                    if(r_23 != NULL && r_23 != w_23)
                      _fail(w_23);
                    else
                      r_23 = w_23;
                  }
                }
              }
              t = not_null(j_23);
              {
                ATerm e_1 (ATerm t)
                {
                  t = not_null(q_23);
                  return(t);
                }
                t = k_40(t, e_1);
                x_23 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_23), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL;
  m_24 = t;
  i_24 :
  if(match_cons(m_24, sym_TCons_2))
    {
      n_24 = ATgetArgument(m_24, 0);
      o_24 = ATgetArgument(m_24, 1);
      j_24 :
      if(match_cons(o_24, sym_TCons_2))
        {
          p_24 = ATgetArgument(o_24, 0);
          s_24 = ATgetArgument(o_24, 1);
          k_24 :
          if(match_cons(p_24, sym_Cons_2))
            {
              q_24 = ATgetArgument(p_24, 0);
              r_24 = ATgetArgument(p_24, 1);
              l_24 :
              if(match_cons(s_24, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_24), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
  g_25 = t;
  x_24 :
  if(match_cons(g_25, sym_TCons_2))
    {
      h_25 = ATgetArgument(g_25, 0);
      i_25 = ATgetArgument(g_25, 1);
      y_24 :
      if(match_cons(i_25, sym_TCons_2))
        {
          j_25 = ATgetArgument(i_25, 0);
          q_25 = ATgetArgument(i_25, 1);
          b_25 :
          if(match_cons(j_25, sym_Cons_2))
            {
              k_25 = ATgetArgument(j_25, 0);
              p_25 = ATgetArgument(j_25, 1);
              c_25 :
              if(match_cons(k_25, sym_TCons_2))
                {
                  l_25 = ATgetArgument(k_25, 0);
                  m_25 = ATgetArgument(k_25, 1);
                  d_25 :
                  if(match_cons(m_25, sym_TCons_2))
                    {
                      n_25 = ATgetArgument(m_25, 0);
                      o_25 = ATgetArgument(m_25, 1);
                      e_25 :
                      if(match_cons(o_25, sym_TNil_0))
                        {
                          f_25 :
                          if(match_cons(q_25, sym_TNil_0))
                            {
                              ATerm s_25 = NULL;
                              if(h_25 != NULL && h_25 != l_25)
                                _fail(l_25);
                              else
                                h_25 = l_25;
                              if(s_25 != NULL && s_25 != n_25)
                                _fail(n_25);
                              else
                                s_25 = n_25;
                              t = not_null(s_25);
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
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm x_39 (ATerm, ATerm (ATerm)))
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL;
  a_26 = t;
  x_25 :
  if(match_cons(a_26, sym_TCons_2))
    {
      b_26 = ATgetArgument(a_26, 0);
      c_26 = ATgetArgument(a_26, 1);
      y_25 :
      if(match_cons(c_26, sym_TCons_2))
        {
          d_26 = ATgetArgument(c_26, 0);
          e_26 = ATgetArgument(c_26, 1);
          z_25 :
          if(match_cons(e_26, sym_TNil_0))
            {
              t = not_null(b_26);
              {
                ATerm f_1 (ATerm t)
                {
                  ATerm g_1 (ATerm t)
                  {
                    t = not_null(d_26);
                    return(t);
                  }
                  t = split_2(t, _id, g_1);
                  t = lookup_0(t);
                  return(t);
                }
                t = x_39(t, f_1);
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
ATerm all_dist_1 (ATerm t, ATerm f_39 (ATerm))
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL;
  n_26 = t;
  k_26 :
  if(match_cons(n_26, sym_TCons_2))
    {
      o_26 = ATgetArgument(n_26, 0);
      p_26 = ATgetArgument(n_26, 1);
      l_26 :
      if(match_cons(p_26, sym_TCons_2))
        {
          q_26 = ATgetArgument(p_26, 0);
          r_26 = ATgetArgument(p_26, 1);
          m_26 :
          if(match_cons(r_26, sym_TNil_0))
            {
              t = not_null(o_26);
              {
                ATerm h_1 (ATerm t)
                {
                  ATerm u_26 = NULL;
                  u_26 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_26), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = f_39(t);
                  return(t);
                }
                t = _all(t, h_1);
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
ATerm env_alltd_1 (ATerm t, ATerm k_39 (ATerm))
{
  ATerm z_26 (ATerm t)
  {
    if(PushChoice()==0)
      {
        t = k_39(t);
        PopChoice();
      }
    else
      t = all_dist_1(t, z_26);
    return(t);
  }
  t = z_26(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm l_40 (ATerm, ATerm (ATerm)), ATerm m_40 (ATerm), ATerm n_40 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_40 (ATerm, ATerm (ATerm)))
{
  ATerm b_27 = NULL;
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_27), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  {
    ATerm b_28 (ATerm t)
    {
      ATerm i_1 (ATerm t)
      {
        if(PushChoice()==0)
          {
            t = RnVar_1(t, l_40);
            PopChoice();
          }
        else
          {
            t = RnBinding_2(t, m_40, o_40);
            t = DistBinding_2(t, b_28, n_40);
          }
        return(t);
      }
      t = env_alltd_1(t, i_1);
      return(t);
    }
    t = b_28(t);
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
  ATerm d_28 = NULL;
  d_28 = t;
  c_28 :
  if(!(match_cons(d_28, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm u_32 (ATerm), ATerm v_32 (ATerm))
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
  j_28 = t;
  i_28 :
  if(match_cons(j_28, sym_TCons_2))
    {
      k_28 = ATgetArgument(j_28, 0);
      l_28 = ATgetArgument(j_28, 1);
      {
        ATerm o_28 = NULL;
        t = not_null(k_28);
        {
          ATerm q_28 = NULL;
          t = u_32(t);
          o_28 = t;
          t = not_null(l_28);
          t = v_32(t);
          q_28 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_28), not_null(q_28));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm x_28 = NULL;
  ATerm g_6;
  g_6 = t;
  {
    ATerm n_1 (ATerm t)
    {
      ATerm y_28 = NULL,z_28 = NULL;
      y_28 = t;
      w_28 :
      if(match_cons(y_28, sym_Program_1))
        {
          z_28 = ATgetArgument(y_28, 0);
          if(x_28 != NULL && x_28 != z_28)
            _fail(z_28);
          else
            x_28 = z_28;
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1(t, n_1);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_28), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm c_29 = NULL;
  c_29 = t;
  t = SSL_exit(not_null(c_29));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
  j_29 = t;
  g_29 :
  if(match_cons(j_29, sym_TCons_2))
    {
      k_29 = ATgetArgument(j_29, 0);
      l_29 = ATgetArgument(j_29, 1);
      h_29 :
      if(match_cons(l_29, sym_TCons_2))
        {
          m_29 = ATgetArgument(l_29, 0);
          n_29 = ATgetArgument(l_29, 1);
          i_29 :
          if(match_cons(n_29, sym_TNil_0))
            {
              ATerm h_6;
              h_6 = t;
              t = SSL_printnl(not_null(k_29), not_null(m_29));
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
ATerm try_1 (ATerm t, ATerm p_48 (ATerm))
{
  if(PushChoice()==0)
    {
      t = p_48(t);
      PopChoice();
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  if(PushChoice()==0)
    {
      ATerm o_1 (ATerm t)
      {
        if(PushChoice()==0)
          {
            ATerm q_1 (ATerm t)
            {
              ATerm b_30 = NULL;
              b_30 = t;
              r_29 :
              if(!(match_cons(b_30, sym_Silent_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, q_1);
            PopChoice();
            _fail(t);
          }
        return(t);
      }
      ATerm p_1 (ATerm t)
      {
        ATerm v_1 (ATerm t)
        {
          ATerm c_30 = NULL;
          c_30 = t;
          s_29 :
          if(!(match_cons(c_30, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, v_1);
        return(t);
      }
      t = TCons_2(t, o_1, p_1);
      {
        ATerm i_2 (ATerm t)
        {
          ATerm k_2 (ATerm t)
          {
            ATerm d_30 = NULL,e_30 = NULL;
            d_30 = t;
            u_29 :
            if(match_cons(d_30, sym_Runtime_1))
              {
                e_30 = ATgetArgument(d_30, 0);
                if(a_30 != NULL && a_30 != e_30)
                  _fail(e_30);
                else
                  a_30 = e_30;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, k_2);
          return(t);
        }
        ATerm j_2 (ATerm t)
        {
          ATerm s_2 (ATerm t)
          {
            ATerm f_30 = NULL;
            f_30 = t;
            v_29 :
            if(!(match_cons(f_30, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, s_2);
          return(t);
        }
        t = TCons_2(t, i_2, j_2);
        {
          ATerm t_2 (ATerm t)
          {
            ATerm v_2 (ATerm t)
            {
              ATerm g_30 = NULL,h_30 = NULL;
              g_30 = t;
              x_29 :
              if(match_cons(g_30, sym_Program_1))
                {
                  h_30 = ATgetArgument(g_30, 0);
                  if(z_29 != NULL && z_29 != h_30)
                    _fail(h_30);
                  else
                    z_29 = h_30;
                }
              else
                _fail(t);
              return(t);
            }
            t = fetch_1(t, v_2);
            return(t);
          }
          ATerm u_2 (ATerm t)
          {
            ATerm w_2 (ATerm t)
            {
              ATerm i_30 = NULL;
              i_30 = t;
              y_29 :
              if(!(match_cons(i_30, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, _id, w_2);
            return(t);
          }
          t = TCons_2(t, t_2, u_2);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_29), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_30), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      PopChoice();
    }
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL;
  q_30 = t;
  n_30 :
  if(match_cons(q_30, sym_TCons_2))
    {
      r_30 = ATgetArgument(q_30, 0);
      s_30 = ATgetArgument(q_30, 1);
      o_30 :
      if(match_cons(s_30, sym_TCons_2))
        {
          t_30 = ATgetArgument(s_30, 0);
          u_30 = ATgetArgument(s_30, 1);
          p_30 :
          if(match_cons(u_30, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(r_30), not_null(t_30));
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
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
  d_31 = t;
  a_31 :
  if(match_cons(d_31, sym_TCons_2))
    {
      e_31 = ATgetArgument(d_31, 0);
      f_31 = ATgetArgument(d_31, 1);
      b_31 :
      if(match_cons(f_31, sym_TCons_2))
        {
          g_31 = ATgetArgument(f_31, 0);
          h_31 = ATgetArgument(f_31, 1);
          c_31 :
          if(match_cons(h_31, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(e_31), not_null(g_31));
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
  ATerm b_32 = NULL;
  ATerm j_6;
  j_6 = t;
  {
    ATerm x_2 (ATerm t)
    {
      if(PushChoice()==0)
        {
          ATerm z_2 (ATerm t)
          {
            ATerm c_32 = NULL,d_32 = NULL;
            c_32 = t;
            u_31 :
            if(match_cons(c_32, sym_Output_1))
              {
                d_32 = ATgetArgument(c_32, 0);
                if(b_32 != NULL && b_32 != d_32)
                  _fail(d_32);
                else
                  b_32 = d_32;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, z_2);
          PopChoice();
        }
      else
        {
          ATerm e_32 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdout_0);
          e_32 = t;
          if(b_32 != NULL && b_32 != e_32)
            _fail(e_32);
          else
            b_32 = e_32;
        }
      return(t);
    }
    ATerm y_2 (ATerm t)
    {
      ATerm e_3 (ATerm t)
      {
        ATerm f_32 = NULL;
        f_32 = t;
        w_31 :
        if(!(match_cons(f_32, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, _id, e_3);
      return(t);
    }
    t = TCons_2(t, x_2, y_2);
  }
  t = j_6;
  {
    ATerm f_3 (ATerm t)
    {
      ATerm h_3 (ATerm t)
      {
        ATerm k_3 (ATerm t)
        {
          t = not_null(b_32);
          return(t);
        }
        t = split_2(t, k_3, _id);
        return(t);
      }
      ATerm j_3 (ATerm t)
      {
        ATerm g_32 = NULL;
        g_32 = t;
        x_31 :
        if(!(match_cons(g_32, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, h_3, j_3);
      return(t);
    }
    t = TCons_2(t, _id, f_3);
    if(PushChoice()==0)
      {
        ATerm l_3 (ATerm t)
        {
          ATerm n_3 (ATerm t)
          {
            ATerm h_32 = NULL;
            h_32 = t;
            y_31 :
            if(!(match_cons(h_32, sym_Binary_0)))
              _fail(t);
            return(t);
          }
          t = fetch_1(t, n_3);
          return(t);
        }
        ATerm m_3 (ATerm t)
        {
          ATerm o_3 (ATerm t)
          {
            ATerm i_32 = NULL;
            i_32 = t;
            z_31 :
            if(!(match_cons(i_32, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, WriteToBinaryFile_0, o_3);
          return(t);
        }
        t = TCons_2(t, l_3, m_3);
        PopChoice();
      }
    else
      {
        ATerm p_3 (ATerm t)
        {
          ATerm q_3 (ATerm t)
          {
            ATerm j_32 = NULL;
            j_32 = t;
            a_32 :
            if(!(match_cons(j_32, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, WriteToTextFile_0, q_3);
          return(t);
        }
        t = TCons_2(t, _id, p_3);
      }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm g_38 (ATerm))
{
  ATerm t_32 = NULL,x_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
  ATerm k_6;
  k_6 = t;
  t = dtime_0(t);
  t = k_6;
  t = g_38(t);
  {
    ATerm l_6;
    l_6 = t;
    {
      ATerm w_32 = NULL;
      t = dtime_0(t);
      w_32 = t;
      if(t_32 != NULL && t_32 != w_32)
        _fail(w_32);
      else
        t_32 = w_32;
    }
    t = l_6;
    x_32 = t;
    o_32 :
    if(match_cons(x_32, sym_TCons_2))
      {
        a_33 = ATgetArgument(x_32, 0);
        b_33 = ATgetArgument(x_32, 1);
        r_32 :
        if(match_cons(b_33, sym_TCons_2))
          {
            c_33 = ATgetArgument(b_33, 0);
            d_33 = ATgetArgument(b_33, 1);
            s_32 :
            if(match_cons(d_33, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(t_32)), not_null(a_33)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_33), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm j_33 = NULL;
  j_33 = t;
  t = SSL_ReadFromFile(not_null(j_33));
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_47 (ATerm), ATerm y_47 (ATerm))
{
  ATerm p_33 = NULL;
  ATerm r_33 = NULL;
  p_33 = t;
  {
    ATerm t_33 = NULL;
    t = x_47(t);
    r_33 = t;
    t = not_null(p_33);
    t = y_47(t);
    t_33 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_33), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm h_34 = NULL;
  ATerm m_6;
  m_6 = t;
  if(PushChoice()==0)
    {
      ATerm w_3 (ATerm t)
      {
        ATerm i_34 = NULL,k_34 = NULL;
        i_34 = t;
        z_33 :
        if(match_cons(i_34, sym_Input_1))
          {
            k_34 = ATgetArgument(i_34, 0);
            if(h_34 != NULL && h_34 != k_34)
              _fail(k_34);
            else
              h_34 = k_34;
          }
        else
          _fail(t);
        return(t);
      }
      t = fetch_1(t, w_3);
      PopChoice();
    }
  else
    {
      ATerm l_34 = NULL;
      t = (ATerm) ATmakeAppl(sym_stdin_0);
      l_34 = t;
      if(h_34 != NULL && h_34 != l_34)
        _fail(l_34);
      else
        h_34 = l_34;
    }
  t = m_6;
  {
    ATerm x_3 (ATerm t)
    {
      t = not_null(h_34);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_34 = NULL;
  p_34 = t;
  o_34 :
  if(!(match_cons(p_34, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_28 (ATerm))
{
  ATerm t_34 = NULL,u_34 = NULL;
  t_34 = t;
  s_34 :
  if(match_cons(t_34, sym_Undefined_1))
    {
      u_34 = ATgetArgument(t_34, 0);
      {
        ATerm w_34 = NULL;
        t = not_null(u_34);
        t = e_28(t);
        w_34 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_34));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm b_35 = NULL;
  b_35 = t;
  a_35 :
  if(!(match_cons(b_35, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm r_46 (ATerm))
{
  ATerm c_35 (ATerm t)
  {
    if(PushChoice()==0)
      {
        t = Cons_2(t, r_46, _id);
        PopChoice();
      }
    else
      t = Cons_2(t, _id, c_35);
    return(t);
  }
  t = c_35(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_34 (ATerm))
{
  t = fetch_1(t, j_34);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm f_38 (ATerm))
{
  ATerm y_3 (ATerm t)
  {
    if(PushChoice()==0)
      {
        ATerm f_35 = NULL;
        f_35 = t;
        d_35 :
        if(!(match_cons(f_35, sym_Help_0)))
          _fail(t);
        PopChoice();
      }
    else
      if(PushChoice()==0)
        {
          t = Undefined_1(t, _id);
          PopChoice();
        }
      else
        {
          ATerm g_35 = NULL;
          g_35 = t;
          e_35 :
          if(!(match_cons(g_35, sym_Version_0)))
            _fail(t);
        }
    return(t);
  }
  t = fetch_1(t, y_3);
  t = f_38(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
  ATerm n_6;
  n_6 = t;
  {
    ATerm p_35 = NULL,q_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
    p_35 = t;
    i_35 :
    if(match_cons(p_35, sym_TCons_2))
      {
        q_35 = ATgetArgument(p_35, 0);
        x_35 = ATgetArgument(p_35, 1);
        j_35 :
        if(match_cons(x_35, sym_TCons_2))
          {
            y_35 = ATgetArgument(x_35, 0);
            z_35 = ATgetArgument(x_35, 1);
            k_35 :
            if(match_cons(z_35, sym_TCons_2))
              {
                a_36 = ATgetArgument(z_35, 0);
                b_36 = ATgetArgument(z_35, 1);
                l_35 :
                if(match_cons(b_36, sym_TNil_0))
                  {
                    if(m_35 != NULL && m_35 != q_35)
                      _fail(q_35);
                    else
                      m_35 = q_35;
                    if(n_35 != NULL && n_35 != y_35)
                      _fail(y_35);
                    else
                      n_35 = y_35;
                    if(o_35 != NULL && o_35 != a_36)
                      _fail(a_36);
                    else
                      o_35 = a_36;
                    t = SSL_table_put(not_null(m_35), not_null(n_35), not_null(o_35));
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
  ATerm e_36 = NULL;
  e_36 = t;
  t = SSL_table_create(not_null(e_36));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm i_36 = NULL;
  i_36 = t;
  {
    ATerm t_6;
    t_6 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_36), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = t_6;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm c_34 (ATerm), ATerm d_34 (ATerm))
{
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL;
  o_36 = t;
  n_36 :
  if(match_cons(o_36, sym_Cons_2))
    {
      p_36 = ATgetArgument(o_36, 0);
      q_36 = ATgetArgument(o_36, 1);
      {
        ATerm t_36 = NULL;
        t = not_null(p_36);
        t = c_34(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = d_34(t);
        t_36 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_36), not_null(q_36));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm e_34 (ATerm), ATerm f_34 (ATerm))
{
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL;
  b_37 = t;
  z_36 :
  if(match_cons(b_37, sym_Cons_2))
    {
      c_37 = ATgetArgument(b_37, 0);
      d_37 = ATgetArgument(b_37, 1);
      a_37 :
      if(match_cons(d_37, sym_Cons_2))
        {
          e_37 = ATgetArgument(d_37, 0);
          f_37 = ATgetArgument(d_37, 1);
          {
            ATerm j_37 = NULL;
            t = not_null(c_37);
            t = e_34(t);
            t = not_null(e_37);
            t = f_34(t);
            j_37 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_37), not_null(f_37));
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
  if(PushChoice()==0)
    {
      ATerm a_4 (ATerm t)
      {
        ATerm t_38 = NULL;
        t_38 = t;
        o_37 :
        if(!(match_string(t_38, "-S")))
          _fail(t);
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, a_4, c_4);
      PopChoice();
    }
  else
    if(PushChoice()==0)
      {
        ATerm e_4 (ATerm t)
        {
          ATerm u_38 = NULL;
          u_38 = t;
          r_37 :
          if(!(match_string(u_38, "--silent")))
            _fail(t);
          return(t);
        }
        ATerm f_4 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym_Silent_0);
          return(t);
        }
        t = Option_2(t, e_4, f_4);
        PopChoice();
      }
    else
      if(PushChoice()==0)
        {
          ATerm g_4 (ATerm t)
          {
            ATerm v_38 = NULL;
            v_38 = t;
            s_37 :
            if(!(match_string(v_38, "--verbose")))
              _fail(t);
            return(t);
          }
          ATerm h_4 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Verbose_0);
            return(t);
          }
          t = Option_2(t, g_4, h_4);
          PopChoice();
        }
      else
        if(PushChoice()==0)
          {
            ATerm i_4 (ATerm t)
            {
              ATerm w_38 = NULL;
              w_38 = t;
              t_37 :
              if(!(match_string(w_38, "-v")))
                _fail(t);
              return(t);
            }
            ATerm j_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Version_0);
              return(t);
            }
            t = Option_2(t, i_4, j_4);
            PopChoice();
          }
        else
          if(PushChoice()==0)
            {
              ATerm k_4 (ATerm t)
              {
                ATerm x_38 = NULL;
                x_38 = t;
                x_37 :
                if(!(match_string(x_38, "--version")))
                  _fail(t);
                return(t);
              }
              ATerm l_4 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(sym_Version_0);
                return(t);
              }
              t = Option_2(t, k_4, l_4);
              PopChoice();
            }
          else
            if(PushChoice()==0)
              {
                ATerm q_4 (ATerm t)
                {
                  ATerm y_38 = NULL;
                  y_38 = t;
                  y_37 :
                  if(!(match_string(y_38, "@version")))
                    _fail(t);
                  return(t);
                }
                ATerm r_4 (ATerm t)
                {
                  ATerm z_38 = NULL;
                  z_38 = t;
                  t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(z_38));
                  return(t);
                }
                t = ArgOption_2(t, q_4, r_4);
                PopChoice();
              }
            else
              if(PushChoice()==0)
                {
                  ATerm t_4 (ATerm t)
                  {
                    ATerm b_39 = NULL;
                    b_39 = t;
                    a_38 :
                    if(!(match_string(b_39, "-i")))
                      _fail(t);
                    return(t);
                  }
                  ATerm v_4 (ATerm t)
                  {
                    ATerm c_39 = NULL;
                    c_39 = t;
                    t = (ATerm) ATmakeAppl(sym_Input_1, not_null(c_39));
                    return(t);
                  }
                  t = ArgOption_2(t, t_4, v_4);
                  PopChoice();
                }
              else
                if(PushChoice()==0)
                  {
                    ATerm w_4 (ATerm t)
                    {
                      ATerm e_39 = NULL;
                      e_39 = t;
                      c_38 :
                      if(!(match_string(e_39, "--input")))
                        _fail(t);
                      return(t);
                    }
                    ATerm x_4 (ATerm t)
                    {
                      ATerm g_39 = NULL;
                      g_39 = t;
                      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(g_39));
                      return(t);
                    }
                    t = ArgOption_2(t, w_4, x_4);
                    PopChoice();
                  }
                else
                  if(PushChoice()==0)
                    {
                      ATerm y_4 (ATerm t)
                      {
                        ATerm i_39 = NULL;
                        i_39 = t;
                        e_38 :
                        if(!(match_string(i_39, "-o")))
                          _fail(t);
                        return(t);
                      }
                      ATerm z_4 (ATerm t)
                      {
                        ATerm j_39 = NULL;
                        j_39 = t;
                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_39));
                        return(t);
                      }
                      t = ArgOption_2(t, y_4, z_4);
                      PopChoice();
                    }
                  else
                    if(PushChoice()==0)
                      {
                        ATerm a_5 (ATerm t)
                        {
                          ATerm n_39 = NULL;
                          n_39 = t;
                          i_38 :
                          if(!(match_string(n_39, "--output")))
                            _fail(t);
                          return(t);
                        }
                        ATerm b_5 (ATerm t)
                        {
                          ATerm o_39 = NULL;
                          o_39 = t;
                          t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_39));
                          return(t);
                        }
                        t = ArgOption_2(t, a_5, b_5);
                        PopChoice();
                      }
                    else
                      if(PushChoice()==0)
                        {
                          ATerm c_5 (ATerm t)
                          {
                            ATerm q_39 = NULL;
                            q_39 = t;
                            o_38 :
                            if(!(match_string(q_39, "-b")))
                              _fail(t);
                            return(t);
                          }
                          ATerm d_5 (ATerm t)
                          {
                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                            return(t);
                          }
                          t = Option_2(t, c_5, d_5);
                          PopChoice();
                        }
                      else
                        if(PushChoice()==0)
                          {
                            ATerm e_5 (ATerm t)
                            {
                              ATerm r_39 = NULL;
                              r_39 = t;
                              p_38 :
                              if(!(match_string(r_39, "-s")))
                                _fail(t);
                              return(t);
                            }
                            ATerm f_5 (ATerm t)
                            {
                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                              return(t);
                            }
                            t = Option_2(t, e_5, f_5);
                            PopChoice();
                          }
                        else
                          if(PushChoice()==0)
                            {
                              ATerm g_5 (ATerm t)
                              {
                                ATerm s_39 = NULL;
                                s_39 = t;
                                q_38 :
                                if(!(match_string(s_39, "--help")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm h_5 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                return(t);
                              }
                              t = Option_2(t, g_5, h_5);
                              PopChoice();
                            }
                          else
                            if(PushChoice()==0)
                              {
                                ATerm i_5 (ATerm t)
                                {
                                  ATerm t_39 = NULL;
                                  t_39 = t;
                                  r_38 :
                                  if(!(match_string(t_39, "-h")))
                                    _fail(t);
                                  return(t);
                                }
                                ATerm j_5 (ATerm t)
                                {
                                  t = (ATerm) ATmakeAppl(sym_Help_0);
                                  return(t);
                                }
                                t = Option_2(t, i_5, j_5);
                                PopChoice();
                              }
                            else
                              {
                                ATerm o_5 (ATerm t)
                                {
                                  ATerm u_39 = NULL;
                                  u_39 = t;
                                  s_38 :
                                  if(!(match_string(u_39, "-?")))
                                    _fail(t);
                                  return(t);
                                }
                                ATerm p_5 (ATerm t)
                                {
                                  t = (ATerm) ATmakeAppl(sym_Help_0);
                                  return(t);
                                }
                                t = Option_2(t, o_5, p_5);
                              }
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
  f_40 = t;
  c_40 :
  if(match_cons(f_40, sym_Cons_2))
    {
      g_40 = ATgetArgument(f_40, 0);
      h_40 = ATgetArgument(f_40, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_40)), not_null(h_40));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_32 (ATerm), ATerm z_32 (ATerm))
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL;
  w_40 = t;
  v_40 :
  if(match_cons(w_40, sym_Cons_2))
    {
      x_40 = ATgetArgument(w_40, 0);
      y_40 = ATgetArgument(w_40, 1);
      {
        ATerm b_41 = NULL;
        t = not_null(x_40);
        {
          ATerm d_41 = NULL;
          t = y_32(t);
          b_41 = t;
          t = not_null(y_40);
          t = z_32(t);
          d_41 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_41), not_null(d_41));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm j_41 = NULL;
  j_41 = t;
  i_41 :
  if(!(match_cons(j_41, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm a_34 (ATerm))
{
  ATerm q_5 (ATerm t)
  {
    ATerm q_41 = NULL;
    q_41 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_41));
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    if(PushChoice()==0)
      {
        if(PushChoice()==0)
          {
            ATerm s_41 = NULL;
            s_41 = t;
            l_41 :
            if(!(match_cons(s_41, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = a_34(t);
            t = Cons_2(t, _id, r_5);
          }
        PopChoice();
      }
    else
      t = UndefinedOption_0(t);
    return(t);
  }
  t = Cons_2(t, q_5, r_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm u_37 (ATerm), ATerm v_37 (ATerm), ATerm w_37 (ATerm))
{
  ATerm s_5 (ATerm t)
  {
    if(PushChoice()==0)
      {
        t = v_37(t);
        PopChoice();
      }
    else
      t = io_options_0(t);
    return(t);
  }
  t = parse_options_1(t, s_5);
  t = store_options_0(t);
  if(PushChoice()==0)
    {
      t = need_help_1(t, w_37);
      PopChoice();
    }
  else
    if(PushChoice()==0)
      {
        t = input_file_0(t);
        t = apply_strategy_1(t, u_37);
        t = output_file_0(t);
        t = report_success_0(t);
        PopChoice();
      }
    else
      t = report_failure_0(t);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm p_37 (ATerm), ATerm q_37 (ATerm))
{
  t = iowrap_3(t, p_37, q_37, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm m_37 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm a_6 (ATerm t)
    {
      ATerm b_6 (ATerm t)
      {
        ATerm w_41 = NULL;
        w_41 = t;
        v_41 :
        if(!(match_cons(w_41, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, m_37, b_6);
      return(t);
    }
    t = TCons_2(t, _id, a_6);
    return(t);
  }
  t = iowrap_2(t, z_5, _fail);
  return(t);
}
ATerm rename_vars_0 (ATerm t)
{
  t = iowrap_1(t, strename_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, strename_0);
  return(t);
}
