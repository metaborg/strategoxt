#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
void init_constant_terms ();
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Scopes_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Infinite_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Anno_2;
Symbol sym_ListVar_1;
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
Symbol sym_GuardedLChoice_3;
Symbol sym_GChoice_2;
Symbol sym_LGChoice_2;
Symbol sym_Bagof_1;
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
Symbol sym_NULL_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
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
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
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
  sym_NULL_0 = ATmakeSymbol("NULL", 0, ATfalse);
  ATprotectSymbol(sym_NULL_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_p_4;
ATerm term_o_4;
ATerm term_c_4;
ATerm term_a_4;
ATerm term_z_3;
ATerm term_y_3;
ATerm term_w_3;
ATerm term_p_3;
ATerm term_o_3;
ATerm term_n_3;
ATerm term_m_3;
ATerm term_l_3;
ATerm term_k_3;
ATerm term_z_2;
ATerm term_w_2;
ATerm term_a_2;
ATerm term_x_1;
void init_constant_terms (void)
{
  ATprotect(&(term_x_1));
  term_x_1 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_2));
  term_a_2 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_2));
  term_w_2 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_z_2));
  term_z_2 = (ATerm) ATmakeAppl(ATmakeSymbol("  result not equal: ", 0, ATtrue));
  ATprotect(&(term_k_3));
  term_k_3 = (ATerm) ATmakeAppl(ATmakeSymbol("  expected: ", 0, ATtrue));
  ATprotect(&(term_l_3));
  term_l_3 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_m_3));
  term_m_3 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_n_3));
  term_n_3 = (ATerm) ATmakeAppl(sym_Var_1, term_m_3);
  ATprotect(&(term_o_3));
  term_o_3 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_p_3));
  term_p_3 = (ATerm) ATmakeAppl(ATmakeSymbol("A", 0, ATtrue));
  ATprotect(&(term_w_3));
  term_w_3 = (ATerm) ATmakeAppl(sym_Op_2, term_p_3, (ATerm) ATempty);
  ATprotect(&(term_y_3));
  term_y_3 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_z_3));
  term_z_3 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(sym__2, term_a_4, term_a_4);
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-eval-test", 0, ATtrue));
}
ATerm Var_1 (ATerm, ATerm d_74 (ATerm));
ATerm Nil_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm a_91 (ATerm));
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm b_89 (ATerm), ATerm c_89 (ATerm));
ATerm zip_1 (ATerm, ATerm e_89 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm j_76 (ATerm), ATerm k_76 (ATerm));
ATerm fetch_1 (ATerm, ATerm u_90 (ATerm));
ATerm MatchVar_1 (ATerm, ATerm a_0 (ATerm));
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm y_78 (ATerm), ATerm z_78 (ATerm));
ATerm for_3 (ATerm, ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm d_79 (ATerm));
ATerm pattern_match_1 (ATerm, ATerm s_96 (ATerm));
ATerm debug_0 (ATerm);
ATerm record_failure_0 (ATerm);
ATerm add_0 (ATerm);
ATerm record_success_0 (ATerm);
ATerm do_test_2 (ATerm, ATerm c_81 (ATerm), ATerm d_81 (ATerm));
ATerm apply_test_4 (ATerm, ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm i_81 (ATerm), ATerm j_81 (ATerm));
ATerm test1_0 (ATerm);
ATerm check_for_failures_0 (ATerm);
ATerm _2 (ATerm, ATerm s_65 (ATerm), ATerm t_65 (ATerm));
ATerm report_test_0 (ATerm);
ATerm init_record_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm k_80 (ATerm));
ATerm test_suite_2 (ATerm, ATerm a_81 (ATerm), ATerm b_81 (ATerm));
ATerm main_0 (ATerm);
ATerm Var_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm h_1 = NULL,i_1 = NULL;
  h_1 = t;
  g_1 :
  if(match_cons(h_1, sym_Var_1))
    {
      i_1 = ATgetArgument(h_1, 0);
      {
        ATerm l_1 = NULL,n_1 = NULL;
        ATerm m_1 = NULL;
        t = SSLgetAnnotations(not_null(h_1));
        {
          m_1 = t;
          if(((l_1 != NULL) && (l_1 != m_1)))
            _fail(m_1);
          else
            l_1 = m_1;
        }
        {
          t = not_null(i_1);
          {
            ATerm p_1 = NULL;
            t = d_74(t);
            {
              n_1 = t;
              {
                ATerm q_1 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(n_1)), not_null(l_1));
                {
                  q_1 = t;
                  if(((p_1 != NULL) && (p_1 != q_1)))
                    _fail(q_1);
                  else
                    p_1 = q_1;
                }
                t = not_null(p_1);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm z_1 = NULL;
  z_1 = t;
  y_1 :
  if(((ATermList) z_1 == ATempty))
    {
      {
        ATerm b_2 = NULL,d_2 = NULL;
        ATerm x_0;
        x_0 = t;
        {
          ATerm c_2 = NULL;
          t = SSLgetAnnotations(not_null(z_1));
          {
            c_2 = t;
            if(((b_2 != NULL) && (b_2 != c_2)))
              _fail(c_2);
            else
              b_2 = c_2;
          }
        }
        t = x_0;
        {
          ATerm e_2 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(b_2));
          {
            e_2 = t;
            if(((d_2 != NULL) && (d_2 != e_2)))
              _fail(e_2);
            else
              d_2 = e_2;
          }
          t = not_null(d_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm a_91 (ATerm))
{
  ATerm i_2 (ATerm t)
  {
    ATerm y_0 = t;
    int z_0 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, i_2);
        LocalPopChoice(z_0);
      }
    else
      {
        t = y_0;
        {
          t = Nil_0(t);
          t = a_91(t);
        }
      }
    return(t);
  }
  t = i_2(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL;
  l_2 = t;
  k_2 :
  if(match_cons(l_2, sym__2))
    {
      m_2 = ATgetArgument(l_2, 0);
      n_2 = ATgetArgument(l_2, 1);
      {
        t = not_null(m_2);
        {
          ATerm b_0 (ATerm t)
          {
            t = not_null(n_2);
            return(t);
          }
          t = at_end_1(t, b_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL;
  t_2 = t;
  s_2 :
  if(match_cons(t_2, sym__2))
    {
      u_2 = ATgetArgument(t_2, 0);
      v_2 = ATgetArgument(t_2, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_2)), not_null(u_2));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL;
  d_3 = t;
  a_3 :
  if(match_cons(d_3, sym__2))
    {
      e_3 = ATgetArgument(d_3, 0);
      h_3 = ATgetArgument(d_3, 1);
      b_3 :
      if(((ATgetType(e_3) == AT_LIST) && ((ATermList) e_3 != ATempty)))
        {
          f_3 = ATgetFirst((ATermList) e_3);
          g_3 = (ATerm) ATgetNext((ATermList) e_3);
          c_3 :
          if(((ATgetType(h_3) == AT_LIST) && ((ATermList) h_3 != ATempty)))
            {
              i_3 = ATgetFirst((ATermList) h_3);
              j_3 = (ATerm) ATgetNext((ATermList) h_3);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(f_3), not_null(i_3)), (ATerm) ATmakeAppl(sym__2, not_null(g_3), not_null(j_3)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip1_0 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL;
  t_3 = t;
  q_3 :
  if(match_cons(t_3, sym__2))
    {
      u_3 = ATgetArgument(t_3, 0);
      v_3 = ATgetArgument(t_3, 1);
      r_3 :
      if(((ATermList) u_3 == ATempty))
        {
          s_3 :
          if(((ATermList) v_3 == ATempty))
            {
              t = (ATerm) ATempty;
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm b_89 (ATerm), ATerm c_89 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm a_1 = t;
    int b_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_88(t);
        LocalPopChoice(b_1);
      }
    else
      {
        t = a_1;
        {
          t = a_89(t);
          {
            t = _2(t, c_89, x_3);
            t = b_89(t);
          }
        }
      }
    return(t);
  }
  t = x_3(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm e_89 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, e_89);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL;
  i_4 = t;
  g_4 :
  if(((ATgetType(i_4) == AT_LIST) && ((ATermList) i_4 != ATempty)))
    {
      j_4 = ATgetFirst((ATermList) i_4);
      m_4 = (ATerm) ATgetNext((ATermList) i_4);
      h_4 :
      if(match_cons(j_4, sym__2))
        {
          k_4 = ATgetArgument(j_4, 0);
          l_4 = ATgetArgument(j_4, 1);
          {
            ATerm q_4 = NULL,r_4 = NULL,x_4 = NULL,d_5 = NULL;
            ATerm c_1;
            c_1 = t;
            {
              ATerm s_4 = NULL;
              ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL;
              t = not_null(l_4);
              {
                s_4 = t;
                {
                  t = SSL_explode_term(not_null(s_4));
                  {
                    u_4 = t;
                    b_4 :
                    if(match_cons(u_4, sym__2))
                      {
                        v_4 = ATgetArgument(u_4, 0);
                        w_4 = ATgetArgument(u_4, 1);
                        {
                          if(((q_4 != NULL) && (q_4 != v_4)))
                            _fail(v_4);
                          else
                            q_4 = v_4;
                          if(((r_4 != NULL) && (r_4 != w_4)))
                            _fail(w_4);
                          else
                            r_4 = w_4;
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                }
              }
            }
            t = c_1;
            {
              ATerm d_1;
              d_1 = t;
              {
                ATerm y_4 = NULL;
                ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL;
                t = not_null(k_4);
                {
                  y_4 = t;
                  {
                    t = SSL_explode_term(not_null(y_4));
                    {
                      a_5 = t;
                      e_4 :
                      if(match_cons(a_5, sym__2))
                        {
                          b_5 = ATgetArgument(a_5, 0);
                          c_5 = ATgetArgument(a_5, 1);
                          {
                            if(((q_4 != NULL) && (q_4 != b_5)))
                              _fail(b_5);
                            else
                              q_4 = b_5;
                            if(((x_4 != NULL) && (x_4 != c_5)))
                              _fail(c_5);
                            else
                              x_4 = c_5;
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                }
              }
              t = d_1;
              {
                ATerm e_5 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_4), not_null(r_4));
                {
                  t = zip_1(t, _id);
                  {
                    e_5 = t;
                    if(((d_5 != NULL) && (d_5 != e_5)))
                      _fail(e_5);
                    else
                      d_5 = e_5;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_5), not_null(m_4));
                  t = conc_0(t);
                }
              }
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL;
  n_5 = t;
  m_5 :
  if(match_cons(n_5, sym__2))
    {
      o_5 = ATgetArgument(n_5, 0);
      p_5 = ATgetArgument(n_5, 1);
      if(((o_5 != NULL) && (o_5 != p_5)))
        _fail(p_5);
      else
        o_5 = p_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_76 (ATerm), ATerm k_76 (ATerm))
{
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
  y_5 = t;
  x_5 :
  if(((ATgetType(y_5) == AT_LIST) && ((ATermList) y_5 != ATempty)))
    {
      z_5 = ATgetFirst((ATermList) y_5);
      a_6 = (ATerm) ATgetNext((ATermList) y_5);
      {
        ATerm e_6 = NULL,g_6 = NULL;
        ATerm f_6 = NULL;
        t = SSLgetAnnotations(not_null(y_5));
        {
          f_6 = t;
          if(((e_6 != NULL) && (e_6 != f_6)))
            _fail(f_6);
          else
            e_6 = f_6;
        }
        {
          t = not_null(z_5);
          {
            ATerm i_6 = NULL;
            t = j_76(t);
            {
              g_6 = t;
              {
                t = not_null(a_6);
                {
                  ATerm k_6 = NULL;
                  t = k_76(t);
                  {
                    i_6 = t;
                    {
                      ATerm l_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_6)), not_null(g_6)), not_null(e_6));
                      {
                        l_6 = t;
                        if(((k_6 != NULL) && (k_6 != l_6)))
                          _fail(l_6);
                        else
                          k_6 = l_6;
                      }
                      t = not_null(k_6);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm u_90 (ATerm))
{
  ATerm r_6 (ATerm t)
  {
    ATerm e_1 = t;
    int f_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, u_90, _id);
        LocalPopChoice(f_1);
      }
    else
      {
        t = e_1;
        t = Cons_2(t, _id, r_6);
      }
    return(t);
  }
  t = r_6(t);
  return(t);
}
ATerm MatchVar_1 (ATerm t, ATerm a_0 (ATerm))
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL;
  h_7 = t;
  z_6 :
  if(match_cons(h_7, sym__2))
    {
      i_7 = ATgetArgument(h_7, 0);
      g_7 = ATgetArgument(h_7, 1);
      a_7 :
      if(((ATgetType(i_7) == AT_LIST) && ((ATermList) i_7 != ATempty)))
        {
          c_7 = ATgetFirst((ATermList) i_7);
          f_7 = (ATerm) ATgetNext((ATermList) i_7);
          b_7 :
          if(match_cons(c_7, sym__2))
            {
              d_7 = ATgetArgument(c_7, 0);
              e_7 = ATgetArgument(c_7, 1);
              {
                t = not_null(d_7);
                {
                  t = a_0(t);
                  {
                    t = not_null(g_7);
                    {
                      ATerm j_1 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm c_0 (ATerm t)
                          {
                            ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
                            n_7 = t;
                            v_6 :
                            if(match_cons(n_7, sym__2))
                              {
                                o_7 = ATgetArgument(n_7, 0);
                                p_7 = ATgetArgument(n_7, 1);
                                {
                                  ATerm q_7 = NULL;
                                  if(((d_7 != NULL) && (d_7 != o_7)))
                                    _fail(o_7);
                                  else
                                    d_7 = o_7;
                                  {
                                    if(((q_7 != NULL) && (q_7 != p_7)))
                                      _fail(p_7);
                                    else
                                      q_7 = p_7;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_7), not_null(q_7));
                                      {
                                        ATerm k_1 = t;
                                        if((PushChoice() == 0))
                                          {
                                            t = eq_0(t);
                                            PopChoice();
                                            _fail(t);
                                          }
                                        else
                                          {
                                            t = k_1;
                                          }
                                      }
                                    }
                                  }
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = fetch_1(t, c_0);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = j_1;
                        }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_7), (ATerm) ATinsert(CheckATermList(not_null(g_7)), (ATerm) ATmakeAppl(sym__2, not_null(d_7), not_null(e_7))));
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(h_7, sym_MatchVar_1))
        {
          i_7 = ATgetArgument(h_7, 0);
          {
            ATerm t_7 = NULL,v_7 = NULL;
            ATerm u_7 = NULL;
            t = SSLgetAnnotations(not_null(h_7));
            {
              u_7 = t;
              if(((t_7 != NULL) && (t_7 != u_7)))
                _fail(u_7);
              else
                t_7 = u_7;
            }
            {
              t = not_null(i_7);
              {
                ATerm x_7 = NULL;
                t = a_0(t);
                {
                  v_7 = t;
                  {
                    ATerm y_7 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MatchVar_1, not_null(v_7)), not_null(t_7));
                    {
                      y_7 = t;
                      if(((x_7 != NULL) && (x_7 != y_7)))
                        _fail(y_7);
                      else
                        x_7 = y_7;
                    }
                    t = not_null(x_7);
                  }
                }
              }
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL;
  i_8 = t;
  g_8 :
  if(((ATgetType(i_8) == AT_LIST) && ((ATermList) i_8 != ATempty)))
    {
      j_8 = ATgetFirst((ATermList) i_8);
      m_8 = (ATerm) ATgetNext((ATermList) i_8);
      h_8 :
      if(match_cons(j_8, sym__2))
        {
          k_8 = ATgetArgument(j_8, 0);
          l_8 = ATgetArgument(j_8, 1);
          {
            ATerm o_8 = NULL;
            if(((k_8 != NULL) && (k_8 != l_8)))
              _fail(l_8);
            else
              k_8 = l_8;
            {
              if(((o_8 != NULL) && (o_8 != m_8)))
                _fail(m_8);
              else
                o_8 = m_8;
              t = not_null(o_8);
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm y_78 (ATerm), ATerm z_78 (ATerm))
{
  ATerm q_8 (ATerm t)
  {
    ATerm o_1 = t;
    int r_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_78(t);
        LocalPopChoice(r_1);
      }
    else
      {
        t = o_1;
        {
          t = z_78(t);
          t = q_8(t);
        }
      }
    return(t);
  }
  t = q_8(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm d_79 (ATerm))
{
  t = b_79(t);
  t = while_not_2(t, c_79, d_79);
  return(t);
}
ATerm pattern_match_1 (ATerm t, ATerm s_96 (ATerm))
{
  ATerm d_0 (ATerm t)
  {
    ATerm v_8 = NULL;
    v_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_8), (ATerm) ATempty);
    return(t);
  }
  ATerm e_0 (ATerm t)
  {
    ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
    x_8 = t;
    t_8 :
    if(match_cons(x_8, sym__2))
      {
        y_8 = ATgetArgument(x_8, 0);
        z_8 = ATgetArgument(x_8, 1);
        u_8 :
        if(((ATermList) y_8 == ATempty))
          {
            t = not_null(z_8);
          }
        else
          {
            _fail(t);
          }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm f_0 (ATerm t)
  {
    ATerm s_1 = t;
    int t_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2(t, UfIdem_0, _id);
        LocalPopChoice(t_1);
      }
    else
      {
        t = s_1;
        {
          ATerm u_1 = t;
          int v_1 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = MatchVar_1(t, s_96);
              LocalPopChoice(v_1);
            }
          else
            {
              t = u_1;
              t = _2(t, UfDecompose_0, _id);
            }
        }
      }
    return(t);
  }
  t = for_3(t, d_0, e_0, f_0);
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm w_1;
  w_1 = t;
  {
    ATerm e_9 = NULL;
    ATerm f_9 = NULL;
    f_9 = t;
    if(((e_9 != NULL) && (e_9 != f_9)))
      _fail(f_9);
    else
      e_9 = f_9;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_1, (ATerm) ATinsert(ATempty, not_null(e_9)));
      t = printnl_0(t);
    }
  }
  t = w_1;
  return(t);
}
ATerm record_failure_0 (ATerm t)
{
  ATerm g_0 (ATerm t)
  {
    ATerm i_9 = NULL;
    i_9 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_9), term_a_2);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, _id, g_0);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
  n_9 = t;
  m_9 :
  if(match_cons(n_9, sym__2))
    {
      o_9 = ATgetArgument(n_9, 0);
      p_9 = ATgetArgument(n_9, 1);
      {
        ATerm f_2 = t;
        int g_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(o_9), not_null(p_9));
            LocalPopChoice(g_2);
          }
        else
          {
            t = f_2;
            t = SSL_addr(not_null(o_9), not_null(p_9));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm record_success_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    ATerm u_9 = NULL;
    u_9 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_9), term_a_2);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, h_0, _id);
  return(t);
}
ATerm do_test_2 (ATerm t, ATerm c_81 (ATerm), ATerm d_81 (ATerm))
{
  ATerm h_2;
  h_2 = t;
  {
    t = c_81(t);
    t = debug_0(t);
  }
  t = h_2;
  {
    ATerm j_2 = t;
    int o_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_2;
        p_2 = t;
        t = d_81(t);
        t = p_2;
        t = record_success_0(t);
        LocalPopChoice(o_2);
      }
    else
      {
        t = j_2;
        t = record_failure_0(t);
      }
  }
  return(t);
}
ATerm apply_test_4 (ATerm t, ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm i_81 (ATerm), ATerm j_81 (ATerm))
{
  ATerm a_10 = NULL,b_10 = NULL;
  ATerm i_0 (ATerm t)
  {
    ATerm d_10 = NULL;
    ATerm q_2 = t;
    int r_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_10 = NULL;
        t = i_81(t);
        {
          t = h_81(t);
          {
            c_10 = t;
            if(((a_10 != NULL) && (a_10 != c_10)))
              _fail(c_10);
            else
              a_10 = c_10;
          }
        }
        LocalPopChoice(r_2);
      }
    else
      {
        t = q_2;
        {
          t = term_w_2;
          {
            t = debug_0(t);
            _fail(t);
          }
        }
      }
    {
      t = j_81(t);
      {
        d_10 = t;
        {
          if(((b_10 != NULL) && (b_10 != d_10)))
            _fail(d_10);
          else
            b_10 = d_10;
          {
            ATerm x_2 = t;
            int y_2 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_10 = NULL;
                t = not_null(b_10);
                {
                  e_10 = t;
                  if(((a_10 != NULL) && (a_10 != e_10)))
                    _fail(e_10);
                  else
                    a_10 = e_10;
                }
                LocalPopChoice(y_2);
              }
            else
              {
                t = x_2;
                {
                  t = not_null(a_10);
                  {
                    ATerm j_0 (ATerm t)
                    {
                      t = term_z_2;
                      return(t);
                    }
                    t = debug_1(t, j_0);
                    {
                      t = not_null(b_10);
                      {
                        ATerm k_0 (ATerm t)
                        {
                          t = term_k_3;
                          return(t);
                        }
                        t = debug_1(t, k_0);
                        _fail(t);
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
  t = do_test_2(t, g_81, i_0);
  return(t);
}
ATerm test1_0 (ATerm t)
{
  ATerm l_0 (ATerm t)
  {
    t = term_l_3;
    return(t);
  }
  ATerm m_0 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      t = Var_1(t, _id);
      return(t);
    }
    t = pattern_match_1(t, p_0);
    return(t);
  }
  ATerm n_0 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_n_3, (ATerm) ATmakeAppl(sym_Op_2, term_o_3, (ATerm) ATinsert(ATempty, term_w_3))));
    return(t);
  }
  ATerm o_0 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_n_3, (ATerm) ATmakeAppl(sym_Op_2, term_o_3, (ATerm) ATinsert(ATempty, term_w_3))));
    return(t);
  }
  t = apply_test_4(t, l_0, m_0, n_0, o_0);
  return(t);
}
ATerm check_for_failures_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    ATerm j_10 = NULL;
    j_10 = t;
    i_10 :
    if(!(match_int(j_10, 0)))
      {
        _fail(t);
      }
    return(t);
  }
  t = _2(t, _id, q_0);
  return(t);
}
ATerm _2 (ATerm t, ATerm s_65 (ATerm), ATerm t_65 (ATerm))
{
  ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
  q_10 = t;
  p_10 :
  if(match_cons(q_10, sym__2))
    {
      r_10 = ATgetArgument(q_10, 0);
      s_10 = ATgetArgument(q_10, 1);
      {
        ATerm w_10 = NULL,y_10 = NULL;
        ATerm x_10 = NULL;
        t = SSLgetAnnotations(not_null(q_10));
        {
          x_10 = t;
          if(((w_10 != NULL) && (w_10 != x_10)))
            _fail(x_10);
          else
            w_10 = x_10;
        }
        {
          t = not_null(r_10);
          {
            ATerm a_11 = NULL;
            t = s_65(t);
            {
              y_10 = t;
              {
                t = not_null(s_10);
                {
                  ATerm c_11 = NULL;
                  t = t_65(t);
                  {
                    a_11 = t;
                    {
                      ATerm d_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_10), not_null(a_11)), not_null(w_10));
                      {
                        d_11 = t;
                        if(((c_11 != NULL) && (c_11 != d_11)))
                          _fail(d_11);
                        else
                          c_11 = d_11;
                      }
                      t = not_null(c_11);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm report_test_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm t_0 (ATerm t)
    {
      t = term_y_3;
      return(t);
    }
    t = debug_1(t, t_0);
    return(t);
  }
  ATerm s_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = term_z_3;
      return(t);
    }
    t = debug_1(t, u_0);
    return(t);
  }
  t = _2(t, r_0, s_0);
  return(t);
}
ATerm init_record_0 (ATerm t)
{
  t = term_c_4;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
  l_11 = t;
  k_11 :
  if(match_cons(l_11, sym__2))
    {
      m_11 = ATgetArgument(l_11, 0);
      n_11 = ATgetArgument(l_11, 1);
      {
        ATerm d_4;
        d_4 = t;
        t = SSL_printnl(not_null(m_11), not_null(n_11));
        t = d_4;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm k_80 (ATerm))
{
  ATerm f_4;
  f_4 = t;
  {
    ATerm t_11 = NULL,v_11 = NULL;
    ATerm n_4;
    n_4 = t;
    {
      ATerm u_11 = NULL;
      t = k_80(t);
      {
        u_11 = t;
        if(((t_11 != NULL) && (t_11 != u_11)))
          _fail(u_11);
        else
          t_11 = u_11;
      }
    }
    t = n_4;
    {
      ATerm w_11 = NULL;
      w_11 = t;
      if(((v_11 != NULL) && (v_11 != w_11)))
        _fail(w_11);
      else
        v_11 = w_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_1, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_11)), not_null(t_11)));
        t = printnl_0(t);
      }
    }
  }
  t = f_4;
  return(t);
}
ATerm test_suite_2 (ATerm t, ATerm a_81 (ATerm), ATerm b_81 (ATerm))
{
  t = a_81(t);
  {
    ATerm v_0 (ATerm t)
    {
      t = term_o_4;
      return(t);
    }
    t = debug_1(t, v_0);
    {
      t = init_record_0(t);
      {
        t = b_81(t);
        {
          t = report_test_0(t);
          t = check_for_failures_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    t = term_p_4;
    return(t);
  }
  t = test_suite_2(t, w_0, test1_0);
  return(t);
}
