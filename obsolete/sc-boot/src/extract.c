#include <stratego.h>
#include <stratego-lib.h>
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  {
    sym__1 = ATmakeSymbol("", 1, ATfalse);
    ATprotectSymbol(sym__1);
  }
  {
    sym__2 = ATmakeSymbol("", 2, ATfalse);
    ATprotectSymbol(sym__2);
  }
  {
    sym__3 = ATmakeSymbol("", 3, ATfalse);
    ATprotectSymbol(sym__3);
  }
  {
    sym__4 = ATmakeSymbol("", 4, ATfalse);
    ATprotectSymbol(sym__4);
  }
  {
    sym__5 = ATmakeSymbol("", 5, ATfalse);
    ATprotectSymbol(sym__5);
  }
  {
    sym__6 = ATmakeSymbol("", 6, ATfalse);
    ATprotectSymbol(sym__6);
  }
  {
    sym__7 = ATmakeSymbol("", 7, ATfalse);
    ATprotectSymbol(sym__7);
  }
  {
    sym__8 = ATmakeSymbol("", 8, ATfalse);
    ATprotectSymbol(sym__8);
  }
  {
    sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
    ATprotectSymbol(sym_Scopes_0);
  }
  {
    sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
    ATprotectSymbol(sym_Keys_0);
  }
  {
    sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
    ATprotectSymbol(sym_Keys_1);
  }
  {
    sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
    ATprotectSymbol(sym_Keys_2);
  }
  {
    sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
    ATprotectSymbol(sym_Keys_3);
  }
  {
    sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
    ATprotectSymbol(sym_Keys_4);
  }
  {
    sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
    ATprotectSymbol(sym_Keys_5);
  }
  {
    sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
    ATprotectSymbol(sym_Keys_6);
  }
  {
    sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
    ATprotectSymbol(sym_Keys_7);
  }
  {
    sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
    ATprotectSymbol(sym_Keys_8);
  }
  {
    sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
    ATprotectSymbol(sym_Keys_9);
  }
  {
    sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
    ATprotectSymbol(sym_Keys_10);
  }
  {
    sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
    ATprotectSymbol(sym_Defined_0);
  }
  {
    sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
    ATprotectSymbol(sym_Defined_1);
  }
  {
    sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
    ATprotectSymbol(sym_Defined_2);
  }
  {
    sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
    ATprotectSymbol(sym_Defined_3);
  }
  {
    sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
    ATprotectSymbol(sym_Defined_4);
  }
  {
    sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
    ATprotectSymbol(sym_Defined_5);
  }
  {
    sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
    ATprotectSymbol(sym_Defined_6);
  }
  {
    sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
    ATprotectSymbol(sym_Defined_7);
  }
  {
    sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
    ATprotectSymbol(sym_Defined_8);
  }
  {
    sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
    ATprotectSymbol(sym_Defined_9);
  }
  {
    sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
    ATprotectSymbol(sym_Defined_10);
  }
  {
    sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
    ATprotectSymbol(sym_Undefined_0);
  }
  {
    sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
    ATprotectSymbol(sym_Program_1);
  }
  {
    sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
    ATprotectSymbol(sym_Undefined_1);
  }
  {
    sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
    ATprotectSymbol(sym_Silent_0);
  }
  {
    sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
    ATprotectSymbol(sym_Verbose_0);
  }
  {
    sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
    ATprotectSymbol(sym_Version_0);
  }
  {
    sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
    ATprotectSymbol(sym_Input_1);
  }
  {
    sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
    ATprotectSymbol(sym_Output_1);
  }
  {
    sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
    ATprotectSymbol(sym_Binary_0);
  }
  {
    sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
    ATprotectSymbol(sym_Statistics_0);
  }
  {
    sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
    ATprotectSymbol(sym_Help_0);
  }
  {
    sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
    ATprotectSymbol(sym_Runtime_1);
  }
  {
    sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
    ATprotectSymbol(sym_DeclVersion_1);
  }
  {
    sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
    ATprotectSymbol(sym_stdin_0);
  }
  {
    sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
    ATprotectSymbol(sym_stdout_0);
  }
  {
    sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
    ATprotectSymbol(sym_stderr_0);
  }
  {
    sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
    ATprotectSymbol(sym_None_0);
  }
  {
    sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
    ATprotectSymbol(sym_Some_1);
  }
  {
    sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
    ATprotectSymbol(sym_CUT_0);
  }
  {
    sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
    ATprotectSymbol(sym_ConstType_1);
  }
  {
    sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
    ATprotectSymbol(sym_FunType_2);
  }
  {
    sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
    ATprotectSymbol(sym_Sort_2);
  }
  {
    sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
    ATprotectSymbol(sym_OpDecl_2);
  }
  {
    sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
    ATprotectSymbol(sym_Sorts_1);
  }
  {
    sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
    ATprotectSymbol(sym_Constructors_1);
  }
  {
    sym_NoKind_0 = ATmakeSymbol("NoKind", 0, ATfalse);
    ATprotectSymbol(sym_NoKind_0);
  }
  {
    sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
    ATprotectSymbol(sym_Seqs_1);
  }
  {
    sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
    ATprotectSymbol(sym_Choices_1);
  }
  {
    sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
    ATprotectSymbol(sym_LChoices_1);
  }
  {
    sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
    ATprotectSymbol(sym_Lets_2);
  }
  {
    sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
    ATprotectSymbol(sym_ScopeDefault_1);
  }
  {
    sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
    ATprotectSymbol(sym_DynRuleScope_2);
  }
  {
    sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
    ATprotectSymbol(sym_MA_2);
  }
  {
    sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
    ATprotectSymbol(sym_AM_2);
  }
  {
    sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
    ATprotectSymbol(sym_BA_2);
  }
  {
    sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
    ATprotectSymbol(sym_BAM_3);
  }
  {
    sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
    ATprotectSymbol(sym_Con_3);
  }
  {
    sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
    ATprotectSymbol(sym_App_2);
  }
  {
    sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
    ATprotectSymbol(sym_RootApp_1);
  }
  {
    sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
    ATprotectSymbol(sym_InfixApp_3);
  }
  {
    sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
    ATprotectSymbol(sym_Explode_2);
  }
  {
    sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
    ATprotectSymbol(sym_ExplodeCong_2);
  }
  {
    sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
    ATprotectSymbol(sym_As_2);
  }
  {
    sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
    ATprotectSymbol(sym_BuildDefault_1);
  }
  {
    sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
    ATprotectSymbol(sym_Rule_3);
  }
  {
    sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
    ATprotectSymbol(sym_StratRule_3);
  }
  {
    sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
    ATprotectSymbol(sym_LRule_1);
  }
  {
    sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
    ATprotectSymbol(sym_SRule_1);
  }
  {
    sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
    ATprotectSymbol(sym_RDef_3);
  }
  {
    sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
    ATprotectSymbol(sym_DynamicRules_1);
  }
  {
    sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
    ATprotectSymbol(sym_OverrideDynamicRules_1);
  }
  {
    sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
    ATprotectSymbol(sym_Mod_2);
  }
  {
    sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
    ATprotectSymbol(sym_Overlay_3);
  }
  {
    sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
    ATprotectSymbol(sym_Signature_1);
  }
  {
    sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
    ATprotectSymbol(sym_Overlays_1);
  }
  {
    sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
    ATprotectSymbol(sym_Rules_1);
  }
  {
    sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
    ATprotectSymbol(sym_Strategies_1);
  }
  {
    sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
    ATprotectSymbol(sym_Imports_1);
  }
  {
    sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
    ATprotectSymbol(sym_Specification_1);
  }
  {
    sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
    ATprotectSymbol(sym_Wld_0);
  }
  {
    sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
    ATprotectSymbol(sym_Var_1);
  }
  {
    sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
    ATprotectSymbol(sym_Int_1);
  }
  {
    sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
    ATprotectSymbol(sym_Real_1);
  }
  {
    sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
    ATprotectSymbol(sym_Str_1);
  }
  {
    sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
    ATprotectSymbol(sym_Op_2);
  }
  {
    sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
    ATprotectSymbol(sym_Id_0);
  }
  {
    sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
    ATprotectSymbol(sym_Fail_0);
  }
  {
    sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
    ATprotectSymbol(sym_Test_1);
  }
  {
    sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
    ATprotectSymbol(sym_Not_1);
  }
  {
    sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
    ATprotectSymbol(sym_Seq_2);
  }
  {
    sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
    ATprotectSymbol(sym_Choice_2);
  }
  {
    sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
    ATprotectSymbol(sym_LChoice_2);
  }
  {
    sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
    ATprotectSymbol(sym_SVar_1);
  }
  {
    sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
    ATprotectSymbol(sym_Rec_2);
  }
  {
    sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
    ATprotectSymbol(sym_Let_2);
  }
  {
    sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
    ATprotectSymbol(sym_SDef_3);
  }
  {
    sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
    ATprotectSymbol(sym_VarDec_2);
  }
  {
    sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
    ATprotectSymbol(sym_DefaultVarDec_1);
  }
  {
    sym_SDef_4 = ATmakeSymbol("SDef", 4, ATfalse);
    ATprotectSymbol(sym_SDef_4);
  }
  {
    sym_DontInline_0 = ATmakeSymbol("DontInline", 0, ATfalse);
    ATprotectSymbol(sym_DontInline_0);
  }
  {
    sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
    ATprotectSymbol(sym_Call_2);
  }
  {
    sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
    ATprotectSymbol(sym_Path_2);
  }
  {
    sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
    ATprotectSymbol(sym_Cong_2);
  }
  {
    sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
    ATprotectSymbol(sym_One_1);
  }
  {
    sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
    ATprotectSymbol(sym_Some_1);
  }
  {
    sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
    ATprotectSymbol(sym_All_1);
  }
  {
    sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
    ATprotectSymbol(sym_Thread_1);
  }
  {
    sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
    ATprotectSymbol(sym_Assign_2);
  }
  {
    sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
    ATprotectSymbol(sym_Match_1);
  }
  {
    sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
    ATprotectSymbol(sym_Build_1);
  }
  {
    sym_MatchVar_1 = ATmakeSymbol("MatchVar", 1, ATfalse);
    ATprotectSymbol(sym_MatchVar_1);
  }
  {
    sym_MatchFun_1 = ATmakeSymbol("MatchFun", 1, ATfalse);
    ATprotectSymbol(sym_MatchFun_1);
  }
  {
    sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
    ATprotectSymbol(sym_Scope_2);
  }
  {
    sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
    ATprotectSymbol(sym_Where_1);
  }
  {
    sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
    ATprotectSymbol(sym_Prim_2);
  }
  {
    sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
    ATprotectSymbol(sym_Nil_0);
  }
  {
    sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
    ATprotectSymbol(sym_Cons_2);
  }
}
ATerm Nil_0 (ATerm);
ATerm MissingDef_0 (ATerm);
ATerm MissingDefMod_0 (ATerm);
ATerm MissingDefs_0 (ATerm);
ATerm NoMissingDefs_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm giving_up_0 (ATerm);
ATerm error_0 (ATerm);
ATerm DefinitionExists_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm j_55 (ATerm), ATerm k_55 (ATerm));
ATerm SDef_3 (ATerm, ATerm n_55 (ATerm), ATerm o_55 (ATerm), ATerm p_55 (ATerm));
ATerm Let_2 (ATerm, ATerm l_55 (ATerm), ATerm m_55 (ATerm));
ATerm sboundin_3 (ATerm, ATerm v_79 (ATerm), ATerm w_79 (ATerm), ATerm x_79 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm v_69 (ATerm), ATerm w_69 (ATerm), ATerm x_69 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm l_69 (ATerm), ATerm m_69 (ATerm));
ATerm diff_1 (ATerm, ATerm q_69 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm w_65 (ATerm), ATerm x_65 (ATerm), ATerm y_65 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_65 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_68 (ATerm), ATerm h_68 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm y_78 (ATerm), ATerm z_78 (ATerm));
ATerm alltd_1 (ATerm, ATerm y_77 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm a_79 (ATerm), ATerm b_79 (ATerm));
ATerm substitute_1 (ATerm, ATerm c_79 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm q_55 (ATerm), ATerm r_55 (ATerm));
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm OverloadedDef_0 (ATerm);
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Explode_2 (ATerm, ATerm p_53 (ATerm), ATerm q_53 (ATerm));
ATerm Op_2 (ATerm, ATerm y_54 (ATerm), ATerm z_54 (ATerm));
ATerm pat_td_1 (ATerm, ATerm b_57 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm e_63 (ATerm), ATerm f_63 (ATerm));
ATerm repeat_1 (ATerm, ATerm h_63 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm j_53 (ATerm), ATerm k_53 (ATerm));
ATerm Con_3 (ATerm, ATerm g_53 (ATerm), ATerm h_53 (ATerm), ATerm i_53 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm n_56 (ATerm), ATerm o_56 (ATerm));
ATerm oncetd_1 (ATerm, ATerm k_77 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm u_75 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm d_75 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm v_68 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm i_73 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm d_73 (ATerm));
ATerm zip_1 (ATerm, ATerm f_73 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm p_57 (ATerm), ATerm q_57 (ATerm), ATerm r_57 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm v_63 (ATerm), ATerm w_63 (ATerm));
ATerm for_3 (ATerm, ATerm y_63 (ATerm), ATerm z_63 (ATerm), ATerm a_64 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm y_57 (ATerm), ATerm z_57 (ATerm), ATerm a_58 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm j_57 (ATerm));
ATerm HdMember_1 (ATerm, ATerm k_69 (ATerm));
ATerm union_0 (ATerm);
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm l_57 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm k_68 (ATerm));
ATerm length_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm r_54 (ATerm));
ATerm Cons_2 (ATerm, ATerm s_56 (ATerm), ATerm t_56 (ATerm));
ATerm Specification_1 (ATerm, ATerm t_54 (ATerm));
ATerm _2 (ATerm, ATerm k_46 (ATerm), ATerm l_46 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm e_61 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm n_74 (ATerm), ATerm o_74 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm d_61 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm w_71 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_59 (ATerm));
ATerm map_1 (ATerm, ATerm i_71 (ATerm));
ATerm reverse_1 (ATerm, ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_59 (ATerm));
ATerm Program_1 (ATerm, ATerm z_51 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm a_52 (ATerm));
ATerm fetch_1 (ATerm, ATerm q_71 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_60 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm f_75 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_59 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_59 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_59 (ATerm));
ATerm iowrap_3 (ATerm, ATerm s_60 (ATerm), ATerm t_60 (ATerm), ATerm u_60 (ATerm));
ATerm iowrap_2 (ATerm, ATerm n_60 (ATerm), ATerm o_60 (ATerm));
ATerm iowrap_1 (ATerm, ATerm k_60 (ATerm));
ATerm extract_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm o_2 = NULL;
  o_2 = t;
  n_2 :
  if(((ATermList) o_2 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MissingDef_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL;
  r_2 = t;
  q_2 :
  if(match_cons(r_2, sym__2))
    {
      s_2 = ATgetArgument(r_2, 0);
      t_2 = ATgetArgument(r_2, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue))), not_null(t_2)), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), not_null(s_2)), (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue)));
        t = error_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MissingDefMod_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL;
  a_3 = t;
  y_2 :
  if(match_cons(a_3, sym__2))
    {
      b_3 = ATgetArgument(a_3, 0);
      e_3 = ATgetArgument(a_3, 1);
      z_2 :
      if(match_cons(b_3, sym_Mod_2))
        {
          c_3 = ATgetArgument(b_3, 0);
          d_3 = ATgetArgument(b_3, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue))), not_null(e_3)), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), not_null(d_3)), (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue))), not_null(c_3)), (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue)));
            t = error_0(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm MissingDefs_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL;
  m_3 = t;
  k_3 :
  if(match_cons(m_3, sym__2))
    {
      n_3 = ATgetArgument(m_3, 0);
      o_3 = ATgetArgument(m_3, 1);
      l_3 :
      if(((ATgetType(o_3) == AT_LIST) && ((ATermList) o_3 != ATempty)))
        {
          p_3 = ATgetFirst((ATermList) o_3);
          q_3 = (ATerm) ATgetNext((ATermList) o_3);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(q_3)), not_null(p_3));
            {
              ATerm a_0 (ATerm t)
              {
                ATerm t_8 = t;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = t_8;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, a_0);
            }
            t = not_null(n_3);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm NoMissingDefs_0 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL;
  y_3 = t;
  w_3 :
  if(match_cons(y_3, sym__2))
    {
      z_3 = ATgetArgument(y_3, 0);
      a_4 = ATgetArgument(y_3, 1);
      x_3 :
      if(((ATermList) a_4 == ATempty))
        {
          t = not_null(z_3);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm u_8;
  u_8 = t;
  {
    t = error_0(t);
    {
      t = (ATerm) ATmakeInt(1);
      t = exit_0(t);
    }
  }
  t = u_8;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue)));
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm z_8;
  z_8 = t;
  {
    ATerm e_4 = NULL;
    ATerm f_4 = NULL;
    f_4 = t;
    if(((e_4 != NULL) && (e_4 != f_4)))
      _fail(f_4);
    else
      e_4 = f_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), not_null(e_4));
      t = printnl_0(t);
    }
  }
  t = z_8;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL;
  s_4 = t;
  q_4 :
  if(match_cons(s_4, sym__2))
    {
      t_4 = ATgetArgument(s_4, 0);
      u_4 = ATgetArgument(s_4, 1);
      r_4 :
      if(match_int(u_4, 0))
        {
          ATerm a_9 = t;
          if((PushChoice() == 0))
            {
              ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL;
              t = not_null(t_4);
              {
                t = Arities_0(t);
                {
                  w_4 = t;
                  l_4 :
                  if(((ATgetType(w_4) == AT_LIST) && ((ATermList) w_4 != ATempty)))
                    {
                      x_4 = ATgetFirst((ATermList) w_4);
                      y_4 = (ATerm) ATgetNext((ATermList) w_4);
                      m_4 :
                      if(((ATgetType(y_4) == AT_LIST) && ((ATermList) y_4 != ATempty)))
                        {
                          z_4 = ATgetFirst((ATermList) y_4);
                          a_5 = (ATerm) ATgetNext((ATermList) y_4);
                          {
                            ATerm b_9 = t;
                            if((PushChoice() == 0))
                              {
                                ATerm k_0 (ATerm t)
                                {
                                  ATerm b_5 = NULL;
                                  b_5 = t;
                                  k_4 :
                                  if(!(match_int(b_5, 0)))
                                    _fail(t);
                                  return(t);
                                }
                                t = fetch_1(t, k_0);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = b_9;
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_4)), (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue)));
                              {
                                t = error_0(t);
                                t = giving_up_0(t);
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
              }
              PopChoice();
            }
          else
            {
              t = a_9;
              {
                ATerm d_5 = NULL;
                ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
                t = not_null(t_4);
                {
                  t = Arities_0(t);
                  {
                    e_5 = t;
                    o_4 :
                    if(((ATgetType(e_5) == AT_LIST) && ((ATermList) e_5 != ATempty)))
                      {
                        f_5 = ATgetFirst((ATermList) e_5);
                        g_5 = (ATerm) ATgetNext((ATermList) e_5);
                        p_4 :
                        if(((ATermList) g_5 == ATempty))
                          {
                            {
                              if(((d_5 != NULL) && (d_5 != f_5)))
                                _fail(f_5);
                              else
                                d_5 = f_5;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_4), not_null(d_5));
                                t = Definitions_0(t);
                              }
                            }
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_4), not_null(d_5));
              }
            }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm j_55 (ATerm), ATerm k_55 (ATerm))
{
  ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
  p_5 = t;
  o_5 :
  if(match_cons(p_5, sym_Rec_2))
    {
      q_5 = ATgetArgument(p_5, 0);
      r_5 = ATgetArgument(p_5, 1);
      {
        ATerm u_5 = NULL;
        t = not_null(q_5);
        {
          ATerm w_5 = NULL;
          t = j_55(t);
          {
            u_5 = t;
            {
              t = not_null(r_5);
              {
                t = k_55(t);
                {
                  w_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(u_5), not_null(w_5));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm n_55 (ATerm), ATerm o_55 (ATerm), ATerm p_55 (ATerm))
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL;
  g_6 = t;
  f_6 :
  if(match_cons(g_6, sym_SDef_3))
    {
      h_6 = ATgetArgument(g_6, 0);
      i_6 = ATgetArgument(g_6, 1);
      j_6 = ATgetArgument(g_6, 2);
      {
        ATerm n_6 = NULL;
        t = not_null(h_6);
        {
          ATerm p_6 = NULL;
          t = n_55(t);
          {
            n_6 = t;
            {
              t = not_null(i_6);
              {
                ATerm r_6 = NULL;
                t = o_55(t);
                {
                  p_6 = t;
                  {
                    t = not_null(j_6);
                    {
                      t = p_55(t);
                      {
                        r_6 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(n_6), not_null(p_6), not_null(r_6));
                      }
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
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm l_55 (ATerm), ATerm m_55 (ATerm))
{
  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
  b_7 = t;
  a_7 :
  if(match_cons(b_7, sym_Let_2))
    {
      c_7 = ATgetArgument(b_7, 0);
      d_7 = ATgetArgument(b_7, 1);
      {
        ATerm g_7 = NULL;
        t = not_null(c_7);
        {
          ATerm i_7 = NULL;
          t = l_55(t);
          {
            g_7 = t;
            {
              t = not_null(d_7);
              {
                t = m_55(t);
                {
                  i_7 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(g_7), not_null(i_7));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm v_79 (ATerm), ATerm w_79 (ATerm), ATerm x_79 (ATerm))
{
  ATerm c_9 = t;
  if((PushChoice() == 0))
    {
      t = Let_2(t, v_79, v_79);
      PopChoice();
    }
  else
    {
      t = c_9;
      {
        ATerm d_9 = t;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, x_79, x_79, v_79);
            PopChoice();
          }
        else
          {
            t = d_9;
            t = Rec_2(t, x_79, v_79);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL;
  p_7 = t;
  o_7 :
  if(match_cons(p_7, sym_Rec_2))
    {
      q_7 = ATgetArgument(p_7, 0);
      r_7 = ATgetArgument(p_7, 1);
      t = (ATerm) ATinsert(ATempty, not_null(q_7));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
  z_7 = t;
  y_7 :
  if(match_cons(z_7, sym_SDef_3))
    {
      a_8 = ATgetArgument(z_7, 0);
      b_8 = ATgetArgument(z_7, 1);
      c_8 = ATgetArgument(z_7, 2);
      {
        t = not_null(b_8);
        {
          ATerm l_0 (ATerm t)
          {
            ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
            g_8 = t;
            x_7 :
            if(match_cons(g_8, sym_VarDec_2))
              {
                h_8 = ATgetArgument(g_8, 0);
                i_8 = ATgetArgument(g_8, 1);
                t = not_null(h_8);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, l_0);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
  q_8 = t;
  p_8 :
  if(match_cons(q_8, sym_Let_2))
    {
      r_8 = ATgetArgument(q_8, 0);
      s_8 = ATgetArgument(q_8, 1);
      {
        t = not_null(r_8);
        {
          ATerm m_0 (ATerm t)
          {
            ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
            v_8 = t;
            o_8 :
            if(match_cons(v_8, sym_SDef_3))
              {
                w_8 = ATgetArgument(v_8, 0);
                x_8 = ATgetArgument(v_8, 1);
                y_8 = ATgetArgument(v_8, 2);
                t = not_null(w_8);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, m_0);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm v_69 (ATerm), ATerm w_69 (ATerm), ATerm x_69 (ATerm))
{
  ATerm i_9 = NULL;
  ATerm k_9 = NULL;
  i_9 = t;
  {
    ATerm l_9 = NULL;
    ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
    t = not_null(i_9);
    {
      l_9 = t;
      {
        t = SSL_explode_term(not_null(l_9));
        {
          n_9 = t;
          h_9 :
          if(match_cons(n_9, sym__2))
            {
              o_9 = ATgetArgument(n_9, 0);
              p_9 = ATgetArgument(n_9, 1);
              if(((k_9 != NULL) && (k_9 != p_9)))
                _fail(p_9);
              else
                k_9 = p_9;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(k_9);
      t = foldr_3(t, v_69, w_69, x_69);
    }
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm l_69 (ATerm), ATerm m_69 (ATerm))
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL;
  w_9 = t;
  v_9 :
  if(((ATgetType(w_9) == AT_LIST) && ((ATermList) w_9 != ATempty)))
    {
      x_9 = ATgetFirst((ATermList) w_9);
      y_9 = (ATerm) ATgetNext((ATermList) w_9);
      {
        t = m_69(t);
        {
          ATerm n_0 (ATerm t)
          {
            ATerm b_10 = NULL;
            b_10 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_9), not_null(b_10));
              t = l_69(t);
            }
            return(t);
          }
          t = fetch_1(t, n_0);
        }
        t = not_null(y_9);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_1 (ATerm t, ATerm q_69 (ATerm))
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
  h_10 = t;
  g_10 :
  if(match_cons(h_10, sym__2))
    {
      i_10 = ATgetArgument(h_10, 0);
      j_10 = ATgetArgument(h_10, 1);
      {
        t = not_null(i_10);
        {
          ATerm n_10 (ATerm t)
          {
            ATerm e_9 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
              }
            else
              {
                t = e_9;
                {
                  ATerm f_9 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm o_0 (ATerm t)
                      {
                        t = not_null(j_10);
                        return(t);
                      }
                      t = HdMember_p__2(t, q_69, o_0);
                      t = n_10(t);
                      PopChoice();
                    }
                  else
                    {
                      t = f_9;
                      t = Cons_2(t, _id, n_10);
                    }
                }
              }
            return(t);
          }
          t = n_10(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm w_65 (ATerm), ATerm x_65 (ATerm), ATerm y_65 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_65 (ATerm))
{
  ATerm r_10 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      ATerm g_9 = t;
      if((PushChoice() == 0))
        {
          t = w_65(t);
          PopChoice();
        }
      else
        {
          t = g_9;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm q_0 (ATerm t)
    {
      ATerm j_9 = t;
      if((PushChoice() == 0))
        {
          ATerm p_10 = NULL;
          ATerm m_9;
          m_9 = t;
          {
            ATerm q_10 = NULL;
            t = x_65(t);
            {
              q_10 = t;
              if(((p_10 != NULL) && (p_10 != q_10)))
                _fail(q_10);
              else
                p_10 = q_10;
            }
          }
          t = m_9;
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = not_null(p_10);
                return(t);
              }
              t = split_2(t, r_10, t_0);
              t = diff_1(t, z_65);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = y_65(t, r_0, r_10, s_0);
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, u_0, union_0, _id);
            }
          }
          PopChoice();
        }
      else
        {
          t = j_9;
          {
            ATerm v_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, v_0, union_0, r_10);
          }
        }
      return(t);
    }
    t = split_2(t, p_0, q_0);
    t = union_0(t);
    return(t);
  }
  t = r_10(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL;
    a_11 = t;
    v_10 :
    if(match_cons(a_11, sym_Call_2))
      {
        b_11 = ATgetArgument(a_11, 0);
        d_11 = ATgetArgument(a_11, 1);
        w_10 :
        if(match_cons(b_11, sym_SVar_1))
          {
            c_11 = ATgetArgument(b_11, 0);
            {
              ATerm g_11 = NULL;
              ATerm h_11 = NULL;
              t = not_null(d_11);
              {
                t = length_0(t);
                {
                  h_11 = t;
                  if(((g_11 != NULL) && (g_11 != h_11)))
                    _fail(h_11);
                  else
                    g_11 = h_11;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(c_11), not_null(g_11)));
            }
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm x_0 (ATerm t)
  {
    ATerm q_9 = t;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = q_9;
        {
          ATerm r_9 = t;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = r_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
    i_11 = t;
    y_10 :
    if(match_cons(i_11, sym__2))
      {
        j_11 = ATgetArgument(i_11, 0);
        m_11 = ATgetArgument(i_11, 1);
        z_10 :
        if(match_cons(j_11, sym__2))
          {
            k_11 = ATgetArgument(j_11, 0);
            l_11 = ATgetArgument(j_11, 1);
            if(((k_11 != NULL) && (k_11 != m_11)))
              _fail(m_11);
            else
              k_11 = m_11;
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = free_vars2_4(t, w_0, x_0, sboundin_3, y_0);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm y_11 = NULL;
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL;
  y_11 = t;
  {
    ATerm d_12 = NULL;
    ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
    t = not_null(y_11);
    {
      d_12 = t;
      {
        t = SSL_explode_term(not_null(d_12));
        {
          f_12 = t;
          u_11 :
          if(match_cons(f_12, sym__2))
            {
              g_12 = ATgetArgument(f_12, 0);
              h_12 = ATgetArgument(f_12, 1);
              v_11 :
              if(match_string(g_12, ""))
                {
                  w_11 :
                  if(((ATgetType(h_12) == AT_LIST) && ((ATermList) h_12 != ATempty)))
                    {
                      i_12 = ATgetFirst((ATermList) h_12);
                      j_12 = (ATerm) ATgetNext((ATermList) h_12);
                      x_11 :
                      if(((ATgetType(j_12) == AT_LIST) && ((ATermList) j_12 != ATempty)))
                        {
                          k_12 = ATgetFirst((ATermList) j_12);
                          l_12 = (ATerm) ATgetNext((ATermList) j_12);
                          {
                            if(((a_12 != NULL) && (a_12 != i_12)))
                              _fail(i_12);
                            else
                              a_12 = i_12;
                            {
                              if(((c_12 != NULL) && (c_12 != k_12)))
                                _fail(k_12);
                              else
                                c_12 = k_12;
                              if(((b_12 != NULL) && (b_12 != l_12)))
                                _fail(l_12);
                              else
                                b_12 = l_12;
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
        }
      }
    }
    t = not_null(c_12);
  }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_68 (ATerm), ATerm h_68 (ATerm))
{
  ATerm s_9 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_68(t);
      PopChoice();
    }
  else
    {
      t = s_9;
      {
        ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
        s_12 = t;
        r_12 :
        if(((ATgetType(s_12) == AT_LIST) && ((ATermList) s_12 != ATempty)))
          {
            t_12 = ATgetFirst((ATermList) s_12);
            u_12 = (ATerm) ATgetNext((ATermList) s_12);
            {
              ATerm x_12 = NULL;
              ATerm y_12 = NULL;
              t = not_null(u_12);
              {
                t = foldr_2(t, g_68, h_68);
                {
                  y_12 = t;
                  if(((x_12 != NULL) && (x_12 != y_12)))
                    _fail(y_12);
                  else
                    x_12 = y_12;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_12), not_null(x_12));
                t = h_68(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Fail_0);
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm d_13 = NULL,n_13 = NULL;
    ATerm t_9;
    t_9 = t;
    {
      ATerm m_13 = NULL;
      t = Fst_0(t);
      {
        m_13 = t;
        if(((d_13 != NULL) && (d_13 != m_13)))
          _fail(m_13);
        else
          d_13 = m_13;
      }
    }
    t = t_9;
    {
      ATerm e_16 = NULL;
      t = Snd_0(t);
      {
        e_16 = t;
        if(((n_13 != NULL) && (n_13 != e_16)))
          _fail(e_16);
        else
          n_13 = e_16;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(d_13), not_null(n_13));
    }
    return(t);
  }
  t = foldr_2(t, z_0, a_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
  l_16 = t;
  i_16 :
  if(match_cons(l_16, sym_Call_2))
    {
      m_16 = ATgetArgument(l_16, 0);
      o_16 = ATgetArgument(l_16, 1);
      j_16 :
      if(match_cons(m_16, sym_SVar_1))
        {
          n_16 = ATgetArgument(m_16, 0);
          k_16 :
          if(((ATermList) o_16 == ATempty))
            {
              t = not_null(n_16);
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
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,c_17 = NULL,d_17 = NULL;
  u_16 = t;
  s_16 :
  if(match_cons(u_16, sym__2))
    {
      v_16 = ATgetArgument(u_16, 0);
      w_16 = ATgetArgument(u_16, 1);
      t_16 :
      if(((ATgetType(w_16) == AT_LIST) && ((ATermList) w_16 != ATempty)))
        {
          c_17 = ATgetFirst((ATermList) w_16);
          d_17 = (ATerm) ATgetNext((ATermList) w_16);
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_16), not_null(d_17));
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
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,p_18 = NULL;
  p_17 = t;
  m_17 :
  if(match_cons(p_17, sym__2))
    {
      q_17 = ATgetArgument(p_17, 0);
      r_17 = ATgetArgument(p_17, 1);
      n_17 :
      if(((ATgetType(r_17) == AT_LIST) && ((ATermList) r_17 != ATempty)))
        {
          s_17 = ATgetFirst((ATermList) r_17);
          p_18 = (ATerm) ATgetNext((ATermList) r_17);
          o_17 :
          if(match_cons(s_17, sym__2))
            {
              t_17 = ATgetArgument(s_17, 0);
              u_17 = ATgetArgument(s_17, 1);
              {
                ATerm r_18 = NULL;
                if(((q_17 != NULL) && (q_17 != t_17)))
                  _fail(t_17);
                else
                  q_17 = t_17;
                {
                  if(((r_18 != NULL) && (r_18 != u_17)))
                    _fail(u_17);
                  else
                    r_18 = u_17;
                  t = not_null(r_18);
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
ATerm lookup_0 (ATerm t)
{
  ATerm u_9 = t;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = u_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm y_78 (ATerm), ATerm z_78 (ATerm))
{
  ATerm h_19 = NULL;
  ATerm j_19 = NULL,k_19 = NULL;
  h_19 = t;
  {
    ATerm l_19 = NULL;
    t = not_null(h_19);
    {
      ATerm m_19 = NULL;
      t = y_78(t);
      {
        l_19 = t;
        {
          if(((j_19 != NULL) && (j_19 != l_19)))
            _fail(l_19);
          else
            j_19 = l_19;
          {
            t = z_78(t);
            {
              m_19 = t;
              if(((k_19 != NULL) && (k_19 != m_19)))
                _fail(m_19);
              else
                k_19 = m_19;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_19), not_null(k_19));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm y_77 (ATerm))
{
  ATerm q_19 (ATerm t)
  {
    ATerm z_9 = t;
    if((PushChoice() == 0))
      {
        t = y_77(t);
        PopChoice();
      }
    else
      {
        t = z_9;
        t = _all(t, q_19);
      }
    return(t);
  }
  t = q_19(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,f_20 = NULL;
  v_19 = t;
  u_19 :
  if(match_cons(v_19, sym__2))
    {
      w_19 = ATgetArgument(v_19, 0);
      x_19 = ATgetArgument(v_19, 1);
      {
        ATerm h_20 = NULL;
        if(((h_20 != NULL) && (h_20 != x_19)))
          _fail(x_19);
        else
          h_20 = x_19;
      }
    }
  else
    {
      if(match_cons(v_19, sym__3))
        {
          w_19 = ATgetArgument(v_19, 0);
          x_19 = ATgetArgument(v_19, 1);
          f_20 = ATgetArgument(v_19, 2);
          {
            ATerm n_20 = NULL;
            ATerm r_20 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), not_null(x_19));
            {
              t = zip_1(t, _id);
              {
                r_20 = t;
                if(((n_20 != NULL) && (n_20 != r_20)))
                  _fail(r_20);
                else
                  n_20 = r_20;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_20), not_null(f_20));
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm a_79 (ATerm), ATerm b_79 (ATerm))
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  t = subs_args_0(t);
  {
    z_20 = t;
    w_20 :
    if(match_cons(z_20, sym__2))
      {
        a_21 = ATgetArgument(z_20, 0);
        b_21 = ATgetArgument(z_20, 1);
        {
          t = not_null(b_21);
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = not_null(a_21);
                return(t);
              }
              t = SubsVar_2(t, a_79, c_1);
              t = b_79(t);
              return(t);
            }
            t = alltd_1(t, b_1);
          }
        }
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm substitute_1 (ATerm t, ATerm c_79 (ATerm))
{
  t = substitute_2(t, c_79, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm q_55 (ATerm), ATerm r_55 (ATerm))
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
  k_21 = t;
  i_21 :
  if(match_cons(k_21, sym_VarDec_2))
    {
      l_21 = ATgetArgument(k_21, 0);
      m_21 = ATgetArgument(k_21, 1);
      {
        ATerm p_21 = NULL;
        t = not_null(l_21);
        {
          ATerm r_21 = NULL;
          t = q_55(t);
          {
            p_21 = t;
            {
              t = not_null(m_21);
              {
                t = r_55(t);
                {
                  r_21 = t;
                  t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(p_21), not_null(r_21));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
  e_23 = t;
  c_23 :
  if(((ATgetType(e_23) == AT_LIST) && ((ATermList) e_23 != ATempty)))
    {
      f_23 = ATgetFirst((ATermList) e_23);
      j_23 = (ATerm) ATgetNext((ATermList) e_23);
      d_23 :
      if(match_cons(f_23, sym_SDef_3))
        {
          g_23 = ATgetArgument(f_23, 0);
          h_23 = ATgetArgument(f_23, 1);
          i_23 = ATgetArgument(f_23, 2);
          {
            ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,w_24 = NULL;
            ATerm a_10;
            a_10 = t;
            {
              ATerm t_23 = NULL;
              t = not_null(h_23);
              {
                ATerm e_24 = NULL;
                ATerm d_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, d_1);
                {
                  t_23 = t;
                  {
                    if(((o_23 != NULL) && (o_23 != t_23)))
                      _fail(t_23);
                    else
                      o_23 = t_23;
                    {
                      t = not_null(o_23);
                      {
                        ATerm v_24 = NULL;
                        ATerm e_1 (ATerm t)
                        {
                          ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL;
                          u_23 = t;
                          z_21 :
                          if(match_cons(u_23, sym_VarDec_2))
                            {
                              v_23 = ATgetArgument(u_23, 0);
                              w_23 = ATgetArgument(u_23, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_23)), (ATerm) ATempty);
                            }
                          else
                            _fail(t);
                          return(t);
                        }
                        t = map_1(t, e_1);
                        {
                          e_24 = t;
                          {
                            if(((p_23 != NULL) && (p_23 != e_24)))
                              _fail(e_24);
                            else
                              p_23 = e_24;
                            {
                              t = not_null(e_23);
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL;
                                  f_24 = t;
                                  o_22 :
                                  if(match_cons(f_24, sym_SDef_3))
                                    {
                                      g_24 = ATgetArgument(f_24, 0);
                                      h_24 = ATgetArgument(f_24, 1);
                                      i_24 = ATgetArgument(f_24, 2);
                                      {
                                        ATerm l_24 = NULL;
                                        ATerm s_24 = NULL;
                                        t = not_null(h_24);
                                        {
                                          ATerm g_1 (ATerm t)
                                          {
                                            ATerm m_24 = NULL,p_24 = NULL,q_24 = NULL;
                                            m_24 = t;
                                            m_22 :
                                            if(match_cons(m_24, sym_VarDec_2))
                                              {
                                                p_24 = ATgetArgument(m_24, 0);
                                                q_24 = ATgetArgument(m_24, 1);
                                                t = not_null(p_24);
                                              }
                                            else
                                              _fail(t);
                                            return(t);
                                          }
                                          t = map_1(t, g_1);
                                          {
                                            s_24 = t;
                                            if(((l_24 != NULL) && (l_24 != s_24)))
                                              _fail(s_24);
                                            else
                                              l_24 = s_24;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(l_24), not_null(p_23), not_null(i_24));
                                          t = ssubs_0(t);
                                        }
                                      }
                                    }
                                  else
                                    _fail(t);
                                  return(t);
                                }
                                t = map_1(t, f_1);
                                {
                                  v_24 = t;
                                  if(((q_23 != NULL) && (q_23 != v_24)))
                                    _fail(v_24);
                                  else
                                    q_23 = v_24;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = a_10;
            {
              ATerm x_24 = NULL;
              t = not_null(q_23);
              {
                t = choices_0(t);
                {
                  x_24 = t;
                  if(((w_24 != NULL) && (w_24 != x_24)))
                    _fail(x_24);
                  else
                    w_24 = x_24;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(g_23), not_null(o_23), not_null(w_24));
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefs1_0 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
  k_25 = t;
  i_25 :
  if(((ATgetType(k_25) == AT_LIST) && ((ATermList) k_25 != ATempty)))
    {
      l_25 = ATgetFirst((ATermList) k_25);
      m_25 = (ATerm) ATgetNext((ATermList) k_25);
      j_25 :
      if(((ATermList) m_25 == ATempty))
        {
          t = not_null(l_25);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm joindefs_0 (ATerm t)
{
  ATerm c_10 = t;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      PopChoice();
    }
  else
    {
      t = c_10;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL;
  w_25 = t;
  u_25 :
  if(match_cons(w_25, sym__2))
    {
      x_25 = ATgetArgument(w_25, 0);
      a_26 = ATgetArgument(w_25, 1);
      v_25 :
      if(match_cons(x_25, sym__2))
        {
          y_25 = ATgetArgument(x_25, 0);
          z_25 = ATgetArgument(x_25, 1);
          {
            ATerm e_26 = NULL;
            ATerm f_26 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_25), not_null(z_25));
            {
              t = Definitions_0(t);
              {
                f_26 = t;
                if(((e_26 != NULL) && (e_26 != f_26)))
                  _fail(f_26);
                else
                  e_26 = f_26;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_26), not_null(a_26));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Expl_0 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
  b_30 = t;
  z_29 :
  if(match_cons(b_30, sym_ExplodeCong_2))
    {
      c_30 = ATgetArgument(b_30, 0);
      a_30 = ATgetArgument(b_30, 1);
      {
        ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
        ATerm l_30 = NULL;
        ATerm m_30 = NULL;
        t = new_0(t);
        {
          l_30 = t;
          {
            if(((f_30 != NULL) && (f_30 != l_30)))
              _fail(l_30);
            else
              f_30 = l_30;
            {
              ATerm n_30 = NULL;
              t = new_0(t);
              {
                m_30 = t;
                {
                  if(((g_30 != NULL) && (g_30 != m_30)))
                    _fail(m_30);
                  else
                    g_30 = m_30;
                  {
                    ATerm o_30 = NULL;
                    t = new_0(t);
                    {
                      n_30 = t;
                      {
                        if(((h_30 != NULL) && (h_30 != n_30)))
                          _fail(n_30);
                        else
                          h_30 = n_30;
                        {
                          t = new_0(t);
                          {
                            o_30 = t;
                            if(((i_30 != NULL) && (i_30 != o_30)))
                              _fail(o_30);
                            else
                              i_30 = o_30;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(i_30)), not_null(h_30)), not_null(g_30)), not_null(f_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_30)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(c_30), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_30))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(a_30), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_30))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_30))), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_30)))))));
      }
    }
  else
    {
      if(match_cons(b_30, sym_Build_1))
        {
          c_30 = ATgetArgument(b_30, 0);
          {
            ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL;
            ATerm u_30 = NULL;
            ATerm y_30 = NULL;
            t = new_0(t);
            {
              u_30 = t;
              {
                if(((s_30 != NULL) && (s_30 != u_30)))
                  _fail(u_30);
                else
                  s_30 = u_30;
                {
                  t = not_null(c_30);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL;
                      v_30 = t;
                      s_29 :
                      if(match_cons(v_30, sym_Explode_2))
                        {
                          w_30 = ATgetArgument(v_30, 0);
                          x_30 = ATgetArgument(v_30, 1);
                          {
                            if(((q_30 != NULL) && (q_30 != w_30)))
                              _fail(w_30);
                            else
                              q_30 = w_30;
                            {
                              if(((r_30 != NULL) && (r_30 != x_30)))
                                _fail(x_30);
                              else
                                r_30 = x_30;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_30));
                            }
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = oncetd_1(t, h_1);
                    {
                      y_30 = t;
                      if(((t_30 != NULL) && (t_30 != y_30)))
                        _fail(y_30);
                      else
                        t_30 = y_30;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_30)), not_null(q_30))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_30))), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_30)))));
          }
        }
      else
        {
          if(match_cons(b_30, sym_Match_1))
            {
              c_30 = ATgetArgument(b_30, 0);
              {
                ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
                ATerm f_31 = NULL;
                ATerm g_31 = NULL;
                t = new_0(t);
                {
                  f_31 = t;
                  {
                    if(((c_31 != NULL) && (c_31 != f_31)))
                      _fail(f_31);
                    else
                      c_31 = f_31;
                    {
                      ATerm k_31 = NULL;
                      t = new_0(t);
                      {
                        g_31 = t;
                        {
                          if(((d_31 != NULL) && (d_31 != g_31)))
                            _fail(g_31);
                          else
                            d_31 = g_31;
                          {
                            t = not_null(c_30);
                            {
                              ATerm i_1 (ATerm t)
                              {
                                ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL;
                                h_31 = t;
                                x_29 :
                                if(match_cons(h_31, sym_Explode_2))
                                  {
                                    i_31 = ATgetArgument(h_31, 0);
                                    j_31 = ATgetArgument(h_31, 1);
                                    {
                                      if(((a_31 != NULL) && (a_31 != i_31)))
                                        _fail(i_31);
                                      else
                                        a_31 = i_31;
                                      {
                                        if(((b_31 != NULL) && (b_31 != j_31)))
                                          _fail(j_31);
                                        else
                                          b_31 = j_31;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_31));
                                      }
                                    }
                                  }
                                else
                                  _fail(t);
                                return(t);
                              }
                              t = oncetd_1(t, i_1);
                              {
                                k_31 = t;
                                if(((e_31 != NULL) && (e_31 != k_31)))
                                  _fail(k_31);
                                else
                                  e_31 = k_31;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_31)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_31))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_31)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_31)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, not_null(b_31)), not_null(a_31)))))));
              }
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm Mapp2_0 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL;
  j_32 = t;
  i_32 :
  if(match_cons(j_32, sym_Match_1))
    {
      k_32 = ATgetArgument(j_32, 0);
      {
        ATerm d_10 = t;
        if((PushChoice() == 0))
          {
            ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL;
            ATerm p_32 = NULL;
            ATerm s_32 = NULL;
            t = new_0(t);
            {
              p_32 = t;
              {
                if(((n_32 != NULL) && (n_32 != p_32)))
                  _fail(p_32);
                else
                  n_32 = p_32;
                {
                  t = not_null(k_32);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm q_32 = NULL,r_32 = NULL;
                      q_32 = t;
                      d_32 :
                      if(match_cons(q_32, sym_RootApp_1))
                        {
                          r_32 = ATgetArgument(q_32, 0);
                          {
                            if(((m_32 != NULL) && (m_32 != r_32)))
                              _fail(r_32);
                            else
                              m_32 = r_32;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_32));
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = pat_td_1(t, j_1);
                    {
                      s_32 = t;
                      if(((o_32 != NULL) && (o_32 != s_32)))
                        _fail(s_32);
                      else
                        o_32 = s_32;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_32))), not_null(m_32))));
            PopChoice();
          }
        else
          {
            t = d_10;
            {
              ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
              ATerm a_33 = NULL;
              t = not_null(k_32);
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
                  x_32 = t;
                  g_32 :
                  if(match_cons(x_32, sym_App_2))
                    {
                      y_32 = ATgetArgument(x_32, 0);
                      z_32 = ATgetArgument(x_32, 1);
                      {
                        if(((u_32 != NULL) && (u_32 != y_32)))
                          _fail(y_32);
                        else
                          u_32 = y_32;
                        {
                          if(((v_32 != NULL) && (v_32 != z_32)))
                            _fail(z_32);
                          else
                            v_32 = z_32;
                          t = (ATerm) ATmakeAppl(sym_Wld_0);
                        }
                      }
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = pat_td_1(t, k_1);
                {
                  a_33 = t;
                  if(((w_32 != NULL) && (w_32 != a_33)))
                    _fail(a_33);
                  else
                    w_32 = a_33;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_32)), (ATerm) ATmakeAppl(sym_BA_2, not_null(u_32), not_null(v_32)));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Mapp1_0 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL;
  m_33 = t;
  k_33 :
  if(match_cons(m_33, sym_Match_1))
    {
      n_33 = ATgetArgument(m_33, 0);
      l_33 :
      if(match_cons(n_33, sym_RootApp_1))
        {
          o_33 = ATgetArgument(n_33, 0);
          t = not_null(o_33);
        }
      else
        {
          if(match_cons(n_33, sym_App_2))
            {
              o_33 = ATgetArgument(n_33, 0);
              p_33 = ATgetArgument(n_33, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(o_33), not_null(p_33));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Mapp0_0 (ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL;
  c_34 = t;
  a_34 :
  if(match_cons(c_34, sym_Match_1))
    {
      d_34 = ATgetArgument(c_34, 0);
      {
        ATerm f_34 = NULL,g_34 = NULL;
        ATerm k_34 = NULL;
        t = not_null(d_34);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL;
            h_34 = t;
            x_33 :
            if(match_cons(h_34, sym_RootApp_1))
              {
                i_34 = ATgetArgument(h_34, 0);
                y_33 :
                if(match_cons(i_34, sym_Match_1))
                  {
                    j_34 = ATgetArgument(i_34, 0);
                    {
                      if(((f_34 != NULL) && (f_34 != j_34)))
                        _fail(j_34);
                      else
                        f_34 = j_34;
                      t = not_null(f_34);
                    }
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = pat_td_1(t, l_1);
          {
            k_34 = t;
            if(((g_34 != NULL) && (g_34 != k_34)))
              _fail(k_34);
            else
              g_34 = k_34;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(g_34));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL;
  z_34 = t;
  y_34 :
  if(match_cons(z_34, sym_Build_1))
    {
      a_35 = ATgetArgument(z_34, 0);
      {
        ATerm e_10 = t;
        if((PushChoice() == 0))
          {
            ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
            ATerm f_35 = NULL;
            ATerm i_35 = NULL;
            t = new_0(t);
            {
              f_35 = t;
              {
                if(((d_35 != NULL) && (d_35 != f_35)))
                  _fail(f_35);
                else
                  d_35 = f_35;
                {
                  t = not_null(a_35);
                  {
                    ATerm m_1 (ATerm t)
                    {
                      ATerm g_35 = NULL,h_35 = NULL;
                      g_35 = t;
                      s_34 :
                      if(match_cons(g_35, sym_RootApp_1))
                        {
                          h_35 = ATgetArgument(g_35, 0);
                          {
                            if(((c_35 != NULL) && (c_35 != h_35)))
                              _fail(h_35);
                            else
                              c_35 = h_35;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_35));
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = pat_td_1(t, m_1);
                    {
                      i_35 = t;
                      if(((e_35 != NULL) && (e_35 != i_35)))
                        _fail(i_35);
                      else
                        e_35 = i_35;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_35), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_35))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_35))));
            PopChoice();
          }
        else
          {
            t = e_10;
            {
              ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL;
              ATerm o_35 = NULL;
              ATerm s_35 = NULL;
              t = new_0(t);
              {
                o_35 = t;
                {
                  if(((m_35 != NULL) && (m_35 != o_35)))
                    _fail(o_35);
                  else
                    m_35 = o_35;
                  {
                    t = not_null(a_35);
                    {
                      ATerm n_1 (ATerm t)
                      {
                        ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
                        p_35 = t;
                        w_34 :
                        if(match_cons(p_35, sym_App_2))
                          {
                            q_35 = ATgetArgument(p_35, 0);
                            r_35 = ATgetArgument(p_35, 1);
                            {
                              if(((k_35 != NULL) && (k_35 != q_35)))
                                _fail(q_35);
                              else
                                k_35 = q_35;
                              {
                                if(((l_35 != NULL) && (l_35 != r_35)))
                                  _fail(r_35);
                                else
                                  l_35 = r_35;
                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_35));
                              }
                            }
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = pat_td_1(t, n_1);
                      {
                        s_35 = t;
                        if(((n_35 != NULL) && (n_35 != s_35)))
                          _fail(s_35);
                        else
                          n_35 = s_35;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(k_35), not_null(l_35), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_35)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(n_35))));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp1_0 (ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL;
  j_36 = t;
  h_36 :
  if(match_cons(j_36, sym_Build_1))
    {
      k_36 = ATgetArgument(j_36, 0);
      i_36 :
      if(match_cons(k_36, sym_RootApp_1))
        {
          l_36 = ATgetArgument(k_36, 0);
          t = not_null(l_36);
        }
      else
        {
          if(match_cons(k_36, sym_App_2))
            {
              l_36 = ATgetArgument(k_36, 0);
              m_36 = ATgetArgument(k_36, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_36)), not_null(l_36));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Explode_2 (ATerm t, ATerm p_53 (ATerm), ATerm q_53 (ATerm))
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
  h_37 = t;
  g_37 :
  if(match_cons(h_37, sym_Explode_2))
    {
      i_37 = ATgetArgument(h_37, 0);
      j_37 = ATgetArgument(h_37, 1);
      {
        ATerm m_37 = NULL;
        t = not_null(i_37);
        {
          ATerm o_37 = NULL;
          t = p_53(t);
          {
            m_37 = t;
            {
              t = not_null(j_37);
              {
                t = q_53(t);
                {
                  o_37 = t;
                  t = (ATerm) ATmakeAppl(sym_Explode_2, not_null(m_37), not_null(o_37));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm y_54 (ATerm), ATerm z_54 (ATerm))
{
  ATerm j_38 = NULL,k_38 = NULL,q_38 = NULL;
  j_38 = t;
  i_38 :
  if(match_cons(j_38, sym_Op_2))
    {
      k_38 = ATgetArgument(j_38, 0);
      q_38 = ATgetArgument(j_38, 1);
      {
        ATerm t_38 = NULL;
        t = not_null(k_38);
        {
          ATerm v_38 = NULL;
          t = y_54(t);
          {
            t_38 = t;
            {
              t = not_null(q_38);
              {
                t = z_54(t);
                {
                  v_38 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(t_38), not_null(v_38));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm pat_td_1 (ATerm t, ATerm b_57 (ATerm))
{
  ATerm f_10 = t;
  if((PushChoice() == 0))
    {
      t = b_57(t);
      PopChoice();
    }
  else
    {
      t = f_10;
      {
        ATerm k_10 = t;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              ATerm p_1 (ATerm t)
              {
                t = pat_td_1(t, b_57);
                return(t);
              }
              t = fetch_1(t, p_1);
              return(t);
            }
            t = Op_2(t, _id, o_1);
            PopChoice();
          }
        else
          {
            t = k_10;
            {
              ATerm l_10 = t;
              if((PushChoice() == 0))
                {
                  ATerm q_1 (ATerm t)
                  {
                    t = pat_td_1(t, b_57);
                    return(t);
                  }
                  t = Explode_2(t, _id, q_1);
                  PopChoice();
                }
              else
                {
                  t = l_10;
                  {
                    ATerm r_1 (ATerm t)
                    {
                      t = pat_td_1(t, b_57);
                      return(t);
                    }
                    t = Explode_2(t, r_1, _id);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bapp0_0 (ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL;
  v_39 = t;
  u_39 :
  if(match_cons(v_39, sym_Build_1))
    {
      w_39 = ATgetArgument(v_39, 0);
      {
        ATerm m_10 = t;
        if((PushChoice() == 0))
          {
            ATerm a_40 = NULL,b_40 = NULL;
            ATerm f_40 = NULL;
            t = not_null(w_39);
            {
              ATerm s_1 (ATerm t)
              {
                ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL;
                c_40 = t;
                f_39 :
                if(match_cons(c_40, sym_RootApp_1))
                  {
                    d_40 = ATgetArgument(c_40, 0);
                    k_39 :
                    if(match_cons(d_40, sym_Build_1))
                      {
                        e_40 = ATgetArgument(d_40, 0);
                        {
                          if(((a_40 != NULL) && (a_40 != e_40)))
                            _fail(e_40);
                          else
                            a_40 = e_40;
                          t = not_null(a_40);
                        }
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = pat_td_1(t, s_1);
              {
                f_40 = t;
                if(((b_40 != NULL) && (b_40 != f_40)))
                  _fail(f_40);
                else
                  b_40 = f_40;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(b_40));
            PopChoice();
          }
        else
          {
            t = m_10;
            {
              ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL;
              ATerm o_40 = NULL;
              t = not_null(w_39);
              {
                ATerm t_1 (ATerm t)
                {
                  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL;
                  k_40 = t;
                  n_39 :
                  if(match_cons(k_40, sym_App_2))
                    {
                      l_40 = ATgetArgument(k_40, 0);
                      n_40 = ATgetArgument(k_40, 1);
                      s_39 :
                      if(match_cons(l_40, sym_Build_1))
                        {
                          m_40 = ATgetArgument(l_40, 0);
                          {
                            if(((i_40 != NULL) && (i_40 != m_40)))
                              _fail(m_40);
                            else
                              i_40 = m_40;
                            {
                              if(((h_40 != NULL) && (h_40 != n_40)))
                                _fail(n_40);
                              else
                                h_40 = n_40;
                              t = not_null(i_40);
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = pat_td_1(t, t_1);
                {
                  o_40 = t;
                  if(((j_40 != NULL) && (j_40 != o_40)))
                    _fail(o_40);
                  else
                    j_40 = o_40;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(j_40));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL;
  p_41 = t;
  h_41 :
  if(match_cons(p_41, sym_InfixApp_3))
    {
      q_41 = ATgetArgument(p_41, 0);
      m_41 = ATgetArgument(p_41, 1);
      l_41 = ATgetArgument(p_41, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(m_41), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, not_null(l_41)), not_null(q_41))));
    }
  else
    {
      if(match_cons(p_41, sym_BAM_3))
        {
          q_41 = ATgetArgument(p_41, 0);
          m_41 = ATgetArgument(p_41, 1);
          l_41 = ATgetArgument(p_41, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(l_41))), not_null(q_41)), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_41))));
        }
      else
        {
          if(match_cons(p_41, sym_AM_2))
            {
              q_41 = ATgetArgument(p_41, 0);
              m_41 = ATgetArgument(p_41, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_41), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_41)));
            }
          else
            {
              if(match_cons(p_41, sym_MA_2))
                {
                  q_41 = ATgetArgument(p_41, 0);
                  m_41 = ATgetArgument(p_41, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_41)), not_null(m_41));
                }
              else
                {
                  if(match_cons(p_41, sym_BA_2))
                    {
                      q_41 = ATgetArgument(p_41, 0);
                      m_41 = ATgetArgument(p_41, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_41)), not_null(q_41));
                    }
                  else
                    {
                      if(match_cons(p_41, sym_Lets_2))
                        {
                          q_41 = ATgetArgument(p_41, 0);
                          m_41 = ATgetArgument(p_41, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(q_41), not_null(m_41));
                        }
                      else
                        {
                          if(match_cons(p_41, sym_LChoices_1))
                            {
                              q_41 = ATgetArgument(p_41, 0);
                              i_41 :
                              if(((ATgetType(q_41) == AT_LIST) && ((ATermList) q_41 != ATempty)))
                                {
                                  n_41 = ATgetFirst((ATermList) q_41);
                                  o_41 = (ATerm) ATgetNext((ATermList) q_41);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_41), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(o_41)));
                                }
                              else
                                {
                                  if(((ATermList) q_41 == ATempty))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_Fail_0);
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(p_41, sym_Choices_1))
                                {
                                  q_41 = ATgetArgument(p_41, 0);
                                  j_41 :
                                  if(((ATgetType(q_41) == AT_LIST) && ((ATermList) q_41 != ATempty)))
                                    {
                                      n_41 = ATgetFirst((ATermList) q_41);
                                      o_41 = (ATerm) ATgetNext((ATermList) q_41);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_41), (ATerm) ATmakeAppl(sym_Choices_1, not_null(o_41)));
                                    }
                                  else
                                    {
                                      if(((ATermList) q_41 == ATempty))
                                        {
                                          t = (ATerm) ATmakeAppl(sym_Fail_0);
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(p_41, sym_Seqs_1))
                                    {
                                      q_41 = ATgetArgument(p_41, 0);
                                      k_41 :
                                      if(((ATgetType(q_41) == AT_LIST) && ((ATermList) q_41 != ATempty)))
                                        {
                                          n_41 = ATgetFirst((ATermList) q_41);
                                          o_41 = (ATerm) ATgetNext((ATermList) q_41);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_41), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(o_41)));
                                        }
                                      else
                                        {
                                          if(((ATermList) q_41 == ATempty))
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Id_0);
                                            }
                                          else
                                            _fail(t);
                                        }
                                    }
                                  else
                                    _fail(t);
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
ATerm repeat_2 (ATerm t, ATerm e_63 (ATerm), ATerm f_63 (ATerm))
{
  ATerm o_43 (ATerm t)
  {
    ATerm o_10 = t;
    if((PushChoice() == 0))
      {
        t = e_63(t);
        t = o_43(t);
        PopChoice();
      }
    else
      {
        t = o_10;
        t = f_63(t);
      }
    return(t);
  }
  t = o_43(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm h_63 (ATerm))
{
  t = repeat_2(t, h_63, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm r_43 = NULL;
  r_43 = t;
  q_43 :
  if(!(match_cons(r_43, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm s_10 = t;
  if((PushChoice() == 0))
    {
      ATerm u_1 (ATerm t)
      {
        ATerm t_10 = t;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = t_10;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, u_1);
      PopChoice();
      _fail(t);
    }
  else
    t = s_10;
  return(t);
}
ATerm App_2 (ATerm t, ATerm j_53 (ATerm), ATerm k_53 (ATerm))
{
  ATerm w_43 = NULL,x_43 = NULL,j_44 = NULL;
  w_43 = t;
  v_43 :
  if(match_cons(w_43, sym_App_2))
    {
      x_43 = ATgetArgument(w_43, 0);
      j_44 = ATgetArgument(w_43, 1);
      {
        ATerm m_44 = NULL;
        t = not_null(x_43);
        {
          ATerm o_44 = NULL;
          t = j_53(t);
          {
            m_44 = t;
            {
              t = not_null(j_44);
              {
                t = k_53(t);
                {
                  o_44 = t;
                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(m_44), not_null(o_44));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm g_53 (ATerm), ATerm h_53 (ATerm), ATerm i_53 (ATerm))
{
  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL;
  b_45 = t;
  a_45 :
  if(match_cons(b_45, sym_Con_3))
    {
      c_45 = ATgetArgument(b_45, 0);
      d_45 = ATgetArgument(b_45, 1);
      e_45 = ATgetArgument(b_45, 2);
      {
        ATerm i_45 = NULL;
        t = not_null(c_45);
        {
          ATerm k_45 = NULL;
          t = g_53(t);
          {
            i_45 = t;
            {
              t = not_null(d_45);
              {
                ATerm m_45 = NULL;
                t = h_53(t);
                {
                  k_45 = t;
                  {
                    t = not_null(e_45);
                    {
                      t = i_53(t);
                      {
                        m_45 = t;
                        t = (ATerm) ATmakeAppl(sym_Con_3, not_null(i_45), not_null(k_45), not_null(m_45));
                      }
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
    _fail(t);
  return(t);
}
ATerm pureterm_0 (ATerm t)
{
  ATerm u_10 = t;
  if((PushChoice() == 0))
    {
      ATerm v_1 (ATerm t)
      {
        ATerm x_10 = t;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = x_10;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, v_1);
      PopChoice();
      _fail(t);
    }
  else
    t = u_10;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL;
  w_45 = t;
  u_45 :
  if(match_cons(w_45, sym_SRule_1))
    {
      x_45 = ATgetArgument(w_45, 0);
      v_45 :
      if(match_cons(x_45, sym_StratRule_3))
        {
          y_45 = ATgetArgument(x_45, 0);
          z_45 = ATgetArgument(x_45, 1);
          a_46 = ATgetArgument(x_45, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_45)), (ATerm) ATmakeAppl(sym_Where_1, not_null(a_46))), not_null(y_45)));
        }
      else
        {
          if(match_cons(x_45, sym_Rule_3))
            {
              y_45 = ATgetArgument(x_45, 0);
              z_45 = ATgetArgument(x_45, 1);
              a_46 = ATgetArgument(x_45, 2);
              {
                t = not_null(y_45);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(z_45);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(z_45))), (ATerm) ATmakeAppl(sym_Where_1, not_null(a_46))), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_45))));
              }
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm n_56 (ATerm), ATerm o_56 (ATerm))
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL;
  p_46 = t;
  o_46 :
  if(match_cons(p_46, sym_Scope_2))
    {
      q_46 = ATgetArgument(p_46, 0);
      r_46 = ATgetArgument(p_46, 1);
      {
        ATerm u_46 = NULL;
        t = not_null(q_46);
        {
          ATerm w_46 = NULL;
          t = n_56(t);
          {
            u_46 = t;
            {
              t = not_null(r_46);
              {
                t = o_56(t);
                {
                  w_46 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_46), not_null(w_46));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm k_77 (ATerm))
{
  ATerm b_47 (ATerm t)
  {
    ATerm e_11 = t;
    if((PushChoice() == 0))
      {
        t = k_77(t);
        PopChoice();
      }
    else
      {
        t = e_11;
        t = _one(t, b_47);
      }
    return(t);
  }
  t = b_47(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL;
  q_47 = t;
  o_47 :
  if(match_cons(q_47, sym_SRule_1))
    {
      r_47 = ATgetArgument(q_47, 0);
      p_47 :
      if(match_cons(r_47, sym_Rule_3))
        {
          s_47 = ATgetArgument(r_47, 0);
          t_47 = ATgetArgument(r_47, 1);
          u_47 = ATgetArgument(r_47, 2);
          {
            ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL;
            ATerm g_48 = NULL;
            ATerm m_48 = NULL;
            t = new_0(t);
            {
              g_48 = t;
              {
                if(((d_48 != NULL) && (d_48 != g_48)))
                  _fail(g_48);
                else
                  d_48 = g_48;
                {
                  t = not_null(s_47);
                  {
                    ATerm u_48 = NULL;
                    ATerm w_1 (ATerm t)
                    {
                      ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL;
                      h_48 = t;
                      f_47 :
                      if(match_cons(h_48, sym_Con_3))
                        {
                          i_48 = ATgetArgument(h_48, 0);
                          k_48 = ATgetArgument(h_48, 1);
                          l_48 = ATgetArgument(h_48, 2);
                          g_47 :
                          if(match_cons(i_48, sym_Var_1))
                            {
                              j_48 = ATgetArgument(i_48, 0);
                              {
                                if(((c_48 != NULL) && (c_48 != j_48)))
                                  _fail(j_48);
                                else
                                  c_48 = j_48;
                                {
                                  if(((a_48 != NULL) && (a_48 != k_48)))
                                    _fail(k_48);
                                  else
                                    a_48 = k_48;
                                  {
                                    if(((y_47 != NULL) && (y_47 != l_48)))
                                      _fail(l_48);
                                    else
                                      y_47 = l_48;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_48));
                                  }
                                }
                              }
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = oncetd_1(t, w_1);
                    {
                      m_48 = t;
                      {
                        if(((e_48 != NULL) && (e_48 != m_48)))
                          _fail(m_48);
                        else
                          e_48 = m_48;
                        {
                          t = not_null(t_47);
                          {
                            ATerm x_1 (ATerm t)
                            {
                              ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL;
                              n_48 = t;
                              j_47 :
                              if(match_cons(n_48, sym_Con_3))
                                {
                                  o_48 = ATgetArgument(n_48, 0);
                                  q_48 = ATgetArgument(n_48, 1);
                                  r_48 = ATgetArgument(n_48, 2);
                                  k_47 :
                                  if(match_cons(o_48, sym_Var_1))
                                    {
                                      p_48 = ATgetArgument(o_48, 0);
                                      l_47 :
                                      if(match_cons(r_48, sym_Call_2))
                                        {
                                          s_48 = ATgetArgument(r_48, 0);
                                          t_48 = ATgetArgument(r_48, 1);
                                          m_47 :
                                          if(((ATermList) t_48 == ATempty))
                                            {
                                              {
                                                if(((c_48 != NULL) && (c_48 != p_48)))
                                                  _fail(p_48);
                                                else
                                                  c_48 = p_48;
                                                {
                                                  if(((b_48 != NULL) && (b_48 != q_48)))
                                                    _fail(q_48);
                                                  else
                                                    b_48 = q_48;
                                                  {
                                                    if(((z_47 != NULL) && (z_47 != s_48)))
                                                      _fail(s_48);
                                                    else
                                                      z_47 = s_48;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_48));
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
                                }
                              else
                                _fail(t);
                              return(t);
                            }
                            t = oncetd_1(t, x_1);
                            {
                              u_48 = t;
                              if(((f_48 != NULL) && (f_48 != u_48)))
                                _fail(u_48);
                              else
                                f_48 = u_48;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_48)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_48), not_null(f_48), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_47), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(z_47), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(a_48), not_null(b_48), (ATerm) ATmakeAppl(sym_Id_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_48)), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_48)))))));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm desugarRule_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm f_11 = t;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      {
        t = f_11;
        {
          ATerm n_11 = t;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              PopChoice();
            }
          else
            {
              t = n_11;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, y_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm u_75 (ATerm))
{
  ATerm c_49 (ATerm t)
  {
    t = u_75(t);
    t = _all(t, c_49);
    return(t);
  }
  t = c_49(t);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm a_2 (ATerm t)
      {
        ATerm o_11 = t;
        if((PushChoice() == 0))
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = o_11;
            {
              ATerm p_11 = t;
              if((PushChoice() == 0))
                {
                  ATerm q_11 = t;
                  if((PushChoice() == 0))
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = q_11;
                      {
                        ATerm r_11 = t;
                        if((PushChoice() == 0))
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = r_11;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = p_11;
                  {
                    ATerm s_11 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm t_11 = t;
                        if((PushChoice() == 0))
                          {
                            t = Mapp0_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = t_11;
                            {
                              ATerm z_11 = t;
                              if((PushChoice() == 0))
                                {
                                  t = Mapp1_0(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = z_11;
                                  t = Mapp2_0(t);
                                }
                            }
                          }
                        PopChoice();
                      }
                    else
                      {
                        t = s_11;
                        t = Expl_0(t);
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, a_2);
    }
    return(t);
  }
  t = topdown_1(t, z_1);
  return(t);
}
ATerm _0 (ATerm t)
{
  ATerm e_49 = NULL;
  e_49 = t;
  d_49 :
  if(!(match_cons(e_49, sym__0)))
    _fail(t);
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm m_49 = NULL;
  ATerm o_49 = NULL,p_49 = NULL,x_49 = NULL;
  m_49 = t;
  {
    ATerm e_12;
    e_12 = t;
    {
      ATerm q_49 = NULL;
      ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL;
      t = not_null(m_49);
      {
        q_49 = t;
        {
          t = SSL_explode_term(not_null(q_49));
          {
            s_49 = t;
            i_49 :
            if(match_cons(s_49, sym__2))
              {
                t_49 = ATgetArgument(s_49, 0);
                u_49 = ATgetArgument(s_49, 1);
                j_49 :
                if(match_string(t_49, ""))
                  {
                    k_49 :
                    if(((ATgetType(u_49) == AT_LIST) && ((ATermList) u_49 != ATempty)))
                      {
                        v_49 = ATgetFirst((ATermList) u_49);
                        w_49 = (ATerm) ATgetNext((ATermList) u_49);
                        {
                          if(((o_49 != NULL) && (o_49 != v_49)))
                            _fail(v_49);
                          else
                            o_49 = v_49;
                          if(((p_49 != NULL) && (p_49 != w_49)))
                            _fail(w_49);
                          else
                            p_49 = w_49;
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
      }
    }
    t = e_12;
    {
      t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), not_null(p_49));
      {
        x_49 = t;
        t = not_null(x_49);
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm j_50 = NULL;
  ATerm l_50 = NULL,m_50 = NULL;
  j_50 = t;
  {
    ATerm n_50 = NULL;
    ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL;
    t = not_null(j_50);
    {
      n_50 = t;
      {
        t = SSL_explode_term(not_null(n_50));
        {
          p_50 = t;
          g_50 :
          if(match_cons(p_50, sym__2))
            {
              q_50 = ATgetArgument(p_50, 0);
              r_50 = ATgetArgument(p_50, 1);
              h_50 :
              if(match_string(q_50, ""))
                {
                  i_50 :
                  if(((ATgetType(r_50) == AT_LIST) && ((ATermList) r_50 != ATempty)))
                    {
                      s_50 = ATgetFirst((ATermList) r_50);
                      t_50 = (ATerm) ATgetNext((ATermList) r_50);
                      {
                        if(((m_50 != NULL) && (m_50 != s_50)))
                          _fail(s_50);
                        else
                          m_50 = s_50;
                        if(((l_50 != NULL) && (l_50 != t_50)))
                          _fail(t_50);
                        else
                          l_50 = t_50;
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
    }
    t = not_null(m_50);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm d_75 (ATerm))
{
  ATerm f_51 = NULL,h_51 = NULL;
  ATerm j_51 (ATerm t)
  {
    ATerm m_12 = t;
    if((PushChoice() == 0))
      {
        ATerm b_51 = NULL,d_51 = NULL;
        ATerm n_12;
        n_12 = t;
        {
          ATerm c_51 = NULL;
          t = map_1(t, Thd_0);
          {
            t = d_75(t);
            {
              c_51 = t;
              if(((b_51 != NULL) && (b_51 != c_51)))
                _fail(c_51);
              else
                b_51 = c_51;
            }
          }
        }
        t = n_12;
        {
          ATerm e_51 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = j_51(t);
            {
              e_51 = t;
              if(((d_51 != NULL) && (d_51 != e_51)))
                _fail(e_51);
              else
                d_51 = e_51;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(d_51)), not_null(b_51));
        }
        PopChoice();
      }
    else
      {
        t = m_12;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = j_51(t);
  {
    ATerm o_12;
    o_12 = t;
    {
      ATerm g_51 = NULL;
      g_51 = t;
      if(((f_51 != NULL) && (f_51 != g_51)))
        _fail(g_51);
      else
        f_51 = g_51;
    }
    t = o_12;
    {
      t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), not_null(f_51));
      {
        h_51 = t;
        t = not_null(h_51);
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm s_51 = NULL;
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL;
  s_51 = t;
  {
    ATerm x_51 = NULL;
    ATerm y_51 = NULL;
    t = new_0(t);
    {
      x_51 = t;
      {
        if(((u_51 != NULL) && (u_51 != x_51)))
          _fail(x_51);
        else
          u_51 = x_51;
        {
          ATerm b_52 = NULL;
          t = new_0(t);
          {
            y_51 = t;
            {
              if(((v_51 != NULL) && (v_51 != y_51)))
                _fail(y_51);
              else
                v_51 = y_51;
              {
                t = new_0(t);
                {
                  b_52 = t;
                  if(((w_51 != NULL) && (w_51 != b_52)))
                    _fail(b_52);
                  else
                    w_51 = b_52;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_51)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, not_null(s_51)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_51)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_51))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(u_51), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATempty))), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATempty)))), not_null(v_51), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_51)), not_null(w_51), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_51)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL;
  i_52 = t;
  h_52 :
  if(match_cons(i_52, sym__2))
    {
      j_52 = ATgetArgument(i_52, 0);
      k_52 = ATgetArgument(i_52, 1);
      {
        ATerm p_12 = t;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(j_52), not_null(k_52));
            PopChoice();
          }
        else
          {
            t = p_12;
            t = SSL_subtr(not_null(j_52), not_null(k_52));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL;
  q_52 = t;
  p_52 :
  if(match_cons(q_52, sym__2))
    {
      r_52 = ATgetArgument(q_52, 0);
      s_52 = ATgetArgument(q_52, 1);
      {
        ATerm q_12;
        q_12 = t;
        {
          ATerm v_12 = t;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_52), not_null(s_52));
              PopChoice();
            }
          else
            {
              t = v_12;
              t = SSL_gtr(not_null(r_52), not_null(s_52));
            }
        }
        t = q_12;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm y_52 = NULL;
  ATerm w_12 = t;
  if((PushChoice() == 0))
    {
      ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL;
      z_52 = t;
      x_52 :
      if(match_cons(z_52, sym__2))
        {
          a_53 = ATgetArgument(z_52, 0);
          b_53 = ATgetArgument(z_52, 1);
          {
            if(((y_52 != NULL) && (y_52 != a_53)))
              _fail(a_53);
            else
              y_52 = a_53;
            if(((y_52 != NULL) && (y_52 != b_53)))
              _fail(b_53);
            else
              y_52 = b_53;
          }
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = w_12;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm v_68 (ATerm))
{
  ATerm b_2 (ATerm t)
  {
    ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL;
    t_53 = t;
    e_53 :
    if(match_cons(t_53, sym__2))
      {
        u_53 = ATgetArgument(t_53, 0);
        v_53 = ATgetArgument(t_53, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(u_53), not_null(v_53), (ATerm) ATempty);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL;
    y_53 = t;
    l_53 :
    if(match_cons(y_53, sym__3))
      {
        z_53 = ATgetArgument(y_53, 0);
        a_54 = ATgetArgument(y_53, 1);
        b_54 = ATgetArgument(y_53, 2);
        m_53 :
        if(match_int(z_53, 0))
          t = not_null(b_54);
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL;
    e_54 = t;
    s_53 :
    if(match_cons(e_54, sym__3))
      {
        f_54 = ATgetArgument(e_54, 0);
        g_54 = ATgetArgument(e_54, 1);
        h_54 = ATgetArgument(e_54, 2);
        {
          ATerm l_54 = NULL,n_54 = NULL;
          ATerm z_12;
          z_12 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_54), (ATerm) ATmakeInt(1));
            t = geq_0(t);
          }
          t = z_12;
          {
            ATerm a_13;
            a_13 = t;
            {
              ATerm m_54 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_54), (ATerm) ATmakeInt(1));
              {
                t = subt_0(t);
                {
                  m_54 = t;
                  if(((l_54 != NULL) && (l_54 != m_54)))
                    _fail(m_54);
                  else
                    l_54 = m_54;
                }
              }
            }
            t = a_13;
            {
              ATerm o_54 = NULL;
              t = not_null(g_54);
              {
                t = v_68(t);
                {
                  o_54 = t;
                  if(((n_54 != NULL) && (n_54 != o_54)))
                    _fail(o_54);
                  else
                    n_54 = o_54;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(l_54), not_null(g_54), (ATerm) ATinsert(CheckATermList(not_null(h_54)), not_null(n_54)));
            }
          }
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = for_3(t, b_2, c_2, d_2);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL;
  d_55 = t;
  c_55 :
  if(match_cons(d_55, sym__2))
    {
      e_55 = ATgetArgument(d_55, 0);
      f_55 = ATgetArgument(d_55, 1);
      {
        ATerm i_55 = NULL,s_55 = NULL,t_55 = NULL;
        ATerm u_55 = NULL;
        ATerm v_55 = NULL;
        t = new_0(t);
        {
          u_55 = t;
          {
            if(((i_55 != NULL) && (i_55 != u_55)))
              _fail(u_55);
            else
              i_55 = u_55;
            {
              ATerm w_55 = NULL;
              t = new_0(t);
              {
                v_55 = t;
                {
                  if(((s_55 != NULL) && (s_55 != v_55)))
                    _fail(v_55);
                  else
                    s_55 = v_55;
                  {
                    t = new_0(t);
                    {
                      w_55 = t;
                      if(((t_55 != NULL) && (t_55 != w_55)))
                        _fail(w_55);
                      else
                        t_55 = w_55;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_55)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_55))), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_55)))), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_55))), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_55))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(i_55), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATempty))), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATempty)))), not_null(s_55), (ATerm)ATmakeAppl(sym_Var_1, not_null(s_55)), not_null(t_55), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_55)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL;
  e_56 = t;
  c_56 :
  if(match_cons(e_56, sym__2))
    {
      f_56 = ATgetArgument(e_56, 0);
      g_56 = ATgetArgument(e_56, 1);
      d_56 :
      if(((ATermList) g_56 == ATempty))
        {
          t = (ATerm) ATempty;
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm zipr_1 (ATerm t, ATerm i_73 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, i_73);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL;
  k_56 = t;
  j_56 :
  if(((ATgetType(k_56) == AT_LIST) && ((ATermList) k_56 != ATempty)))
    {
      l_56 = ATgetFirst((ATermList) k_56);
      m_56 = (ATerm) ATgetNext((ATermList) k_56);
      t = not_null(m_56);
    }
  else
    _fail(t);
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL;
  x_56 = t;
  v_56 :
  if(((ATgetType(x_56) == AT_LIST) && ((ATermList) x_56 != ATempty)))
    {
      y_56 = ATgetFirst((ATermList) x_56);
      z_56 = (ATerm) ATgetNext((ATermList) x_56);
      w_56 :
      if(((ATermList) z_56 == ATempty))
        {
          t = not_null(y_56);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm last_0 (ATerm t)
{
  ATerm b_13 = t;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      PopChoice();
    }
  else
    {
      t = b_13;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL;
  ATerm p_60 (ATerm t)
  {
    ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,h_59 = NULL;
    ATerm c_13;
    c_13 = t;
    {
      ATerm u_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL;
      ATerm v_58 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_58), (ATerm) ATmakeInt(1));
      {
        t = add_0(t);
        {
          v_58 = t;
          if(((u_58 != NULL) && (u_58 != v_58)))
            _fail(v_58);
          else
            u_58 = v_58;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_58), (ATerm) ATmakeAppl(sym__0));
        {
          t = copy_1(t, new_0);
          {
            w_58 = t;
            s_57 :
            if(((ATgetType(w_58) == AT_LIST) && ((ATermList) w_58 != ATempty)))
              {
                x_58 = ATgetFirst((ATermList) w_58);
                y_58 = (ATerm) ATgetNext((ATermList) w_58);
                {
                  ATerm z_58 = NULL;
                  if(((m_58 != NULL) && (m_58 != x_58)))
                    _fail(x_58);
                  else
                    m_58 = x_58;
                  {
                    if(((n_58 != NULL) && (n_58 != y_58)))
                      _fail(y_58);
                    else
                      n_58 = y_58;
                    {
                      t = not_null(n_58);
                      {
                        ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL;
                        t = last_0(t);
                        {
                          z_58 = t;
                          {
                            if(((l_58 != NULL) && (l_58 != z_58)))
                              _fail(z_58);
                            else
                              l_58 = z_58;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_58)), not_null(m_58)), not_null(n_58));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    a_59 = t;
                                    o_57 :
                                    if(match_cons(a_59, sym__6))
                                      {
                                        b_59 = ATgetArgument(a_59, 0);
                                        c_59 = ATgetArgument(a_59, 1);
                                        d_59 = ATgetArgument(a_59, 2);
                                        e_59 = ATgetArgument(a_59, 3);
                                        f_59 = ATgetArgument(a_59, 4);
                                        g_59 = ATgetArgument(a_59, 5);
                                        {
                                          if(((o_58 != NULL) && (o_58 != b_59)))
                                            _fail(b_59);
                                          else
                                            o_58 = b_59;
                                          {
                                            if(((p_58 != NULL) && (p_58 != c_59)))
                                              _fail(c_59);
                                            else
                                              p_58 = c_59;
                                            {
                                              if(((q_58 != NULL) && (q_58 != d_59)))
                                                _fail(d_59);
                                              else
                                                q_58 = d_59;
                                              {
                                                if(((r_58 != NULL) && (r_58 != e_59)))
                                                  _fail(e_59);
                                                else
                                                  r_58 = e_59;
                                                {
                                                  if(((s_58 != NULL) && (s_58 != f_59)))
                                                    _fail(f_59);
                                                  else
                                                    s_58 = f_59;
                                                  if(((t_58 != NULL) && (t_58 != g_59)))
                                                    _fail(g_59);
                                                  else
                                                    t_58 = g_59;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    else
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
                }
              }
            else
              _fail(t);
          }
        }
      }
    }
    t = c_13;
    {
      ATerm i_59 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(s_58)), not_null(q_58)), not_null(n_58));
      {
        t = concat_0(t);
        {
          i_59 = t;
          if(((h_59 != NULL) && (h_59 != i_59)))
            _fail(i_59);
          else
            h_59 = i_59;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(g_58), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), not_null(p_58), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(h_59)), not_null(m_58)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_58))), (ATerm) ATmakeAppl(sym_Op_2, not_null(g_58), not_null(r_58)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_58))), (ATerm) ATmakeAppl(sym_Op_2, not_null(g_58), not_null(t_58)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(o_58))))));
    }
    return(t);
  }
  ATerm q_60 (ATerm t)
  {
    ATerm q_59 = NULL;
    ATerm r_59 = NULL;
    t = new_0(t);
    {
      r_59 = t;
      if(((q_59 != NULL) && (q_59 != r_59)))
        _fail(r_59);
      else
        q_59 = r_59;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(g_58), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_59)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_59))), (ATerm) ATmakeAppl(sym_Op_2, not_null(g_58), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_59))), (ATerm) ATmakeAppl(sym_Op_2, not_null(g_58), (ATerm) ATempty))), (ATerm) ATmakeAppl(sym_Id_0)))));
    return(t);
  }
  ATerm r_60 (ATerm t)
  {
    ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,l_60 = NULL;
    ATerm e_13;
    e_13 = t;
    {
      ATerm b_60 = NULL;
      ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,j_60 = NULL;
      t = new_0(t);
      {
        b_60 = t;
        {
          if(((u_59 != NULL) && (u_59 != b_60)))
            _fail(b_60);
          else
            u_59 = b_60;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_58), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_59)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  c_60 = t;
                  x_57 :
                  if(match_cons(c_60, sym__6))
                    {
                      d_60 = ATgetArgument(c_60, 0);
                      e_60 = ATgetArgument(c_60, 1);
                      f_60 = ATgetArgument(c_60, 2);
                      g_60 = ATgetArgument(c_60, 3);
                      h_60 = ATgetArgument(c_60, 4);
                      j_60 = ATgetArgument(c_60, 5);
                      {
                        if(((v_59 != NULL) && (v_59 != d_60)))
                          _fail(d_60);
                        else
                          v_59 = d_60;
                        {
                          if(((w_59 != NULL) && (w_59 != e_60)))
                            _fail(e_60);
                          else
                            w_59 = e_60;
                          {
                            if(((x_59 != NULL) && (x_59 != f_60)))
                              _fail(f_60);
                            else
                              x_59 = f_60;
                            {
                              if(((y_59 != NULL) && (y_59 != g_60)))
                                _fail(g_60);
                              else
                                y_59 = g_60;
                              {
                                if(((z_59 != NULL) && (z_59 != h_60)))
                                  _fail(h_60);
                                else
                                  z_59 = h_60;
                                if(((a_60 != NULL) && (a_60 != j_60)))
                                  _fail(j_60);
                                else
                                  a_60 = j_60;
                              }
                            }
                          }
                        }
                      }
                    }
                  else
                    _fail(t);
                }
              }
            }
          }
        }
      }
    }
    t = e_13;
    {
      ATerm m_60 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_59), not_null(z_59));
      {
        t = conc_0(t);
        {
          m_60 = t;
          if(((l_60 != NULL) && (l_60 != m_60)))
            _fail(m_60);
          else
            l_60 = m_60;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(g_58), (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue))), not_null(w_59), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(l_60)), not_null(u_59)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_59))), (ATerm) ATmakeAppl(sym_Op_2, not_null(g_58), not_null(y_59)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(g_58), not_null(a_60)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(v_59))))));
    }
    return(t);
  }
  f_58 = t;
  c_58 :
  if(match_cons(f_58, sym__3))
    {
      g_58 = ATgetArgument(f_58, 0);
      h_58 = ATgetArgument(f_58, 1);
      i_58 = ATgetArgument(f_58, 2);
      d_58 :
      if(match_string(h_58, "T"))
        {
          e_58 :
          if(match_int(i_58, 0))
            {
              ATerm f_13 = t;
              if((PushChoice() == 0))
                {
                  t = p_60(t);
                  PopChoice();
                }
              else
                {
                  t = f_13;
                  t = q_60(t);
                }
            }
          else
            t = p_60(t);
        }
      else
        {
          if(match_string(h_58, "D"))
            t = r_60(t);
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CongruenceDef_0 (ATerm t)
{
  ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL;
  l_61 = t;
  i_61 :
  if(match_cons(l_61, sym__2))
    {
      m_61 = ATgetArgument(l_61, 0);
      r_61 = ATgetArgument(l_61, 1);
      j_61 :
      if(match_cons(m_61, sym__2))
        {
          n_61 = ATgetArgument(m_61, 0);
          q_61 = ATgetArgument(m_61, 1);
          k_61 :
          if(match_cons(n_61, sym_Mod_2))
            {
              o_61 = ATgetArgument(n_61, 0);
              p_61 = ATgetArgument(n_61, 1);
              {
                ATerm w_61 = NULL;
                ATerm x_61 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(o_61), not_null(p_61), not_null(q_61));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      x_61 = t;
                      if(((w_61 != NULL) && (w_61 != x_61)))
                        _fail(x_61);
                      else
                        w_61 = x_61;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_61), not_null(r_61));
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
ATerm get_definition_0 (ATerm t)
{
  ATerm g_13 = t;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      PopChoice();
    }
  else
    {
      t = g_13;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL;
  d_62 = t;
  b_62 :
  if(match_cons(d_62, sym__5))
    {
      e_62 = ATgetArgument(d_62, 0);
      h_62 = ATgetArgument(d_62, 1);
      i_62 = ATgetArgument(d_62, 2);
      j_62 = ATgetArgument(d_62, 3);
      k_62 = ATgetArgument(d_62, 4);
      c_62 :
      if(((ATgetType(e_62) == AT_LIST) && ((ATermList) e_62 != ATempty)))
        {
          f_62 = ATgetFirst((ATermList) e_62);
          g_62 = (ATerm) ATgetNext((ATermList) e_62);
          t = (ATerm) ATmakeAppl(sym__5, not_null(g_62), not_null(h_62), not_null(i_62), not_null(j_62), (ATerm) ATinsert(CheckATermList(not_null(k_62)), not_null(f_62)));
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
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL;
  u_62 = t;
  t_62 :
  if(match_cons(u_62, sym__2))
    {
      v_62 = ATgetArgument(u_62, 0);
      w_62 = ATgetArgument(u_62, 1);
      {
        t = not_null(v_62);
        {
          ATerm e_2 (ATerm t)
          {
            t = not_null(w_62);
            return(t);
          }
          t = at_end_1(t, e_2);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm d_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL;
  d_63 = t;
  b_63 :
  if(match_cons(d_63, sym__2))
    {
      i_63 = ATgetArgument(d_63, 0);
      j_63 = ATgetArgument(d_63, 1);
      c_63 :
      if(((ATgetType(j_63) == AT_LIST) && ((ATermList) j_63 != ATempty)))
        {
          k_63 = ATgetFirst((ATermList) j_63);
          l_63 = (ATerm) ATgetNext((ATermList) j_63);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_63)), not_null(k_63)), not_null(l_63));
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
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL;
  s_63 = t;
  r_63 :
  if(match_cons(s_63, sym__2))
    {
      t_63 = ATgetArgument(s_63, 0);
      u_63 = ATgetArgument(s_63, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_63)), not_null(t_63));
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL;
  i_64 = t;
  f_64 :
  if(match_cons(i_64, sym__2))
    {
      j_64 = ATgetArgument(i_64, 0);
      m_64 = ATgetArgument(i_64, 1);
      g_64 :
      if(((ATgetType(j_64) == AT_LIST) && ((ATermList) j_64 != ATempty)))
        {
          k_64 = ATgetFirst((ATermList) j_64);
          l_64 = (ATerm) ATgetNext((ATermList) j_64);
          h_64 :
          if(((ATgetType(m_64) == AT_LIST) && ((ATermList) m_64 != ATempty)))
            {
              n_64 = ATgetFirst((ATermList) m_64);
              o_64 = (ATerm) ATgetNext((ATermList) m_64);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(k_64), not_null(n_64)), (ATerm) ATmakeAppl(sym__2, not_null(l_64), not_null(o_64)));
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
  ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL;
  y_64 = t;
  v_64 :
  if(match_cons(y_64, sym__2))
    {
      z_64 = ATgetArgument(y_64, 0);
      a_65 = ATgetArgument(y_64, 1);
      w_64 :
      if(((ATermList) z_64 == ATempty))
        {
          x_64 :
          if(((ATermList) a_65 == ATempty))
            {
              t = (ATerm) ATempty;
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
ATerm genzip_4 (ATerm t, ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm d_73 (ATerm))
{
  ATerm c_65 (ATerm t)
  {
    ATerm h_13 = t;
    if((PushChoice() == 0))
      {
        t = a_73(t);
        PopChoice();
      }
    else
      {
        t = h_13;
        {
          t = b_73(t);
          {
            t = _2(t, d_73, c_65);
            t = c_73(t);
          }
        }
      }
    return(t);
  }
  t = c_65(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm f_73 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, f_73);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL;
  n_65 = t;
  l_65 :
  if(((ATgetType(n_65) == AT_LIST) && ((ATermList) n_65 != ATempty)))
    {
      o_65 = ATgetFirst((ATermList) n_65);
      r_65 = (ATerm) ATgetNext((ATermList) n_65);
      m_65 :
      if(match_cons(o_65, sym__2))
        {
          p_65 = ATgetArgument(o_65, 0);
          q_65 = ATgetArgument(o_65, 1);
          {
            ATerm v_65 = NULL,b_66 = NULL,h_66 = NULL,n_66 = NULL;
            ATerm i_13;
            i_13 = t;
            {
              ATerm c_66 = NULL;
              ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL;
              t = not_null(q_65);
              {
                c_66 = t;
                {
                  t = SSL_explode_term(not_null(c_66));
                  {
                    e_66 = t;
                    g_65 :
                    if(match_cons(e_66, sym__2))
                      {
                        f_66 = ATgetArgument(e_66, 0);
                        g_66 = ATgetArgument(e_66, 1);
                        {
                          if(((v_65 != NULL) && (v_65 != f_66)))
                            _fail(f_66);
                          else
                            v_65 = f_66;
                          if(((b_66 != NULL) && (b_66 != g_66)))
                            _fail(g_66);
                          else
                            b_66 = g_66;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = i_13;
            {
              ATerm j_13;
              j_13 = t;
              {
                ATerm i_66 = NULL;
                ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL;
                t = not_null(p_65);
                {
                  i_66 = t;
                  {
                    t = SSL_explode_term(not_null(i_66));
                    {
                      k_66 = t;
                      j_65 :
                      if(match_cons(k_66, sym__2))
                        {
                          l_66 = ATgetArgument(k_66, 0);
                          m_66 = ATgetArgument(k_66, 1);
                          {
                            if(((v_65 != NULL) && (v_65 != l_66)))
                              _fail(l_66);
                            else
                              v_65 = l_66;
                            if(((h_66 != NULL) && (h_66 != m_66)))
                              _fail(m_66);
                            else
                              h_66 = m_66;
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
              t = j_13;
              {
                ATerm o_66 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_66), not_null(b_66));
                {
                  t = zip_1(t, _id);
                  {
                    o_66 = t;
                    if(((n_66 != NULL) && (n_66 != o_66)))
                      _fail(o_66);
                    else
                      n_66 = o_66;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_66), not_null(r_65));
                  t = conc_0(t);
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
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL;
  y_66 = t;
  w_66 :
  if(((ATgetType(y_66) == AT_LIST) && ((ATermList) y_66 != ATempty)))
    {
      z_66 = ATgetFirst((ATermList) y_66);
      c_67 = (ATerm) ATgetNext((ATermList) y_66);
      x_66 :
      if(match_cons(z_66, sym__2))
        {
          a_67 = ATgetArgument(z_66, 0);
          b_67 = ATgetArgument(z_66, 1);
          {
            ATerm e_67 = NULL;
            if(((a_67 != NULL) && (a_67 != b_67)))
              _fail(b_67);
            else
              a_67 = b_67;
            {
              if(((e_67 != NULL) && (e_67 != c_67)))
                _fail(c_67);
              else
                e_67 = c_67;
              t = not_null(e_67);
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm k_13 = t;
  if((PushChoice() == 0))
    {
      ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL;
      j_67 = t;
      h_67 :
      if(match_cons(j_67, sym__2))
        {
          k_67 = ATgetArgument(j_67, 0);
          l_67 = ATgetArgument(j_67, 1);
          {
            t = not_null(k_67);
            {
              ATerm r_67 (ATerm t)
              {
                ATerm l_13 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = l_13;
                    {
                      ATerm o_13 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm f_2 (ATerm t)
                          {
                            t = not_null(l_67);
                            return(t);
                          }
                          t = HdMember_1(t, f_2);
                          t = r_67(t);
                          PopChoice();
                        }
                      else
                        {
                          t = o_13;
                          t = Cons_2(t, _id, r_67);
                        }
                    }
                  }
                return(t);
              }
              t = r_67(t);
            }
          }
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = k_13;
      {
        ATerm g_2 (ATerm t)
        {
          ATerm o_67 = NULL;
          o_67 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(o_67));
          return(t);
        }
        ATerm h_2 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm i_2 (ATerm t)
        {
          ATerm p_13 = t;
          if((PushChoice() == 0))
            {
              ATerm j_2 (ATerm t)
              {
                ATerm q_13 = t;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = q_13;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, j_2);
              PopChoice();
            }
          else
            {
              t = p_13;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, g_2, h_2, i_2);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm p_57 (ATerm), ATerm q_57 (ATerm), ATerm r_57 (ATerm))
{
  ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL;
  d_68 = t;
  b_68 :
  if(match_cons(d_68, sym__5))
    {
      e_68 = ATgetArgument(d_68, 0);
      m_68 = ATgetArgument(d_68, 1);
      n_68 = ATgetArgument(d_68, 2);
      o_68 = ATgetArgument(d_68, 3);
      p_68 = ATgetArgument(d_68, 4);
      c_68 :
      if(((ATgetType(e_68) == AT_LIST) && ((ATermList) e_68 != ATempty)))
        {
          f_68 = ATgetFirst((ATermList) e_68);
          l_68 = (ATerm) ATgetNext((ATermList) e_68);
          {
            ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,i_69 = NULL,p_69 = NULL,t_69 = NULL;
            ATerm r_13;
            r_13 = t;
            {
              ATerm c_69 = NULL,d_69 = NULL,e_69 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_68), not_null(n_68));
              {
                t = p_57(t);
                {
                  c_69 = t;
                  x_67 :
                  if(match_cons(c_69, sym__2))
                    {
                      d_69 = ATgetArgument(c_69, 0);
                      e_69 = ATgetArgument(c_69, 1);
                      {
                        ATerm g_69 = NULL;
                        if(((z_68 != NULL) && (z_68 != d_69)))
                          _fail(d_69);
                        else
                          z_68 = d_69;
                        {
                          if(((y_68 != NULL) && (y_68 != e_69)))
                            _fail(e_69);
                          else
                            y_68 = e_69;
                          {
                            t = not_null(z_68);
                            {
                              ATerm h_69 = NULL;
                              t = q_57(t);
                              {
                                g_69 = t;
                                {
                                  if(((a_69 != NULL) && (a_69 != g_69)))
                                    _fail(g_69);
                                  else
                                    a_69 = g_69;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_69), not_null(m_68));
                                    {
                                      t = diff_0(t);
                                      {
                                        h_69 = t;
                                        if(((b_69 != NULL) && (b_69 != h_69)))
                                          _fail(h_69);
                                        else
                                          b_69 = h_69;
                                      }
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
                    _fail(t);
                }
              }
            }
            t = r_13;
            {
              ATerm s_13;
              s_13 = t;
              {
                ATerm j_69 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_69), not_null(l_68));
                {
                  t = conc_0(t);
                  {
                    j_69 = t;
                    if(((i_69 != NULL) && (i_69 != j_69)))
                      _fail(j_69);
                    else
                      i_69 = j_69;
                  }
                }
              }
              t = s_13;
              {
                ATerm t_13;
                t_13 = t;
                {
                  ATerm s_69 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_69), not_null(m_68));
                  {
                    t = conc_0(t);
                    {
                      s_69 = t;
                      if(((p_69 != NULL) && (p_69 != s_69)))
                        _fail(s_69);
                      else
                        p_69 = s_69;
                    }
                  }
                }
                t = t_13;
                {
                  ATerm u_69 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(f_68), not_null(z_68), not_null(o_68));
                  {
                    t = r_57(t);
                    {
                      u_69 = t;
                      if(((t_69 != NULL) && (t_69 != u_69)))
                        _fail(u_69);
                      else
                        t_69 = u_69;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(i_69), not_null(p_69), not_null(y_68), not_null(t_69), not_null(p_68));
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
  return(t);
}
ATerm GnExit_0 (ATerm t)
{
  ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL;
  i_70 = t;
  g_70 :
  if(match_cons(i_70, sym__5))
    {
      j_70 = ATgetArgument(i_70, 0);
      k_70 = ATgetArgument(i_70, 1);
      l_70 = ATgetArgument(i_70, 2);
      m_70 = ATgetArgument(i_70, 3);
      n_70 = ATgetArgument(i_70, 4);
      h_70 :
      if(((ATermList) j_70 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_70), not_null(n_70));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm GnInitRoots_0 (ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL;
  v_70 = t;
  u_70 :
  if(match_cons(v_70, sym__3))
    {
      w_70 = ATgetArgument(v_70, 0);
      x_70 = ATgetArgument(v_70, 1);
      y_70 = ATgetArgument(v_70, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(w_70), not_null(w_70), not_null(x_70), not_null(y_70), (ATerm) ATempty);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm v_63 (ATerm), ATerm w_63 (ATerm))
{
  ATerm d_71 (ATerm t)
  {
    ATerm u_13 = t;
    if((PushChoice() == 0))
      {
        t = v_63(t);
        PopChoice();
      }
    else
      {
        t = u_13;
        {
          t = w_63(t);
          t = d_71(t);
        }
      }
    return(t);
  }
  t = d_71(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm y_63 (ATerm), ATerm z_63 (ATerm), ATerm a_64 (ATerm))
{
  t = y_63(t);
  t = while_not_2(t, z_63, a_64);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm y_57 (ATerm), ATerm z_57 (ATerm), ATerm a_58 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm v_13 = t;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, y_57, z_57, a_58);
        PopChoice();
      }
    else
      {
        t = v_13;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, k_2);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    t = svars_arity_0(t);
    {
      ATerm p_2 (ATerm t)
      {
        t = try_1(t, DefinitionExists_0);
        return(t);
      }
      t = map_1(t, p_2);
    }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    ATerm g_71 = NULL,h_71 = NULL,k_71 = NULL,l_71 = NULL;
    g_71 = t;
    f_71 :
    if(match_cons(g_71, sym__3))
      {
        h_71 = ATgetArgument(g_71, 0);
        k_71 = ATgetArgument(g_71, 1);
        l_71 = ATgetArgument(g_71, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(l_71)), not_null(k_71));
      }
    else
      _fail(t);
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, l_2, m_2);
  {
    ATerm w_13 = t;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        PopChoice();
      }
    else
      {
        t = w_13;
        {
          t = MissingDefs_0(t);
          {
            t = (ATerm) ATmakeInt(1);
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm j_57 (ATerm))
{
  ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL;
  y_71 = t;
  v_71 :
  if(match_cons(y_71, sym__2))
    {
      z_71 = ATgetArgument(y_71, 0);
      a_72 = ATgetArgument(y_71, 1);
      {
        ATerm d_72 = NULL,e_72 = NULL,f_72 = NULL;
        ATerm x_13;
        x_13 = t;
        {
          ATerm g_72 = NULL;
          ATerm h_72 = NULL,i_72 = NULL,j_72 = NULL;
          t = j_57(t);
          {
            g_72 = t;
            {
              if(((d_72 != NULL) && (d_72 != g_72)))
                _fail(g_72);
              else
                d_72 = g_72;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(d_72), not_null(z_71), not_null(a_72));
                {
                  t = table_push_0(t);
                  {
                    ATerm y_13 = t;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_72), (ATerm) ATmakeAppl(sym_Scopes_0));
                        t = table_get_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = y_13;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      h_72 = t;
                      u_71 :
                      if(((ATgetType(h_72) == AT_LIST) && ((ATermList) h_72 != ATempty)))
                        {
                          i_72 = ATgetFirst((ATermList) h_72);
                          j_72 = (ATerm) ATgetNext((ATermList) h_72);
                          {
                            if(((e_72 != NULL) && (e_72 != i_72)))
                              _fail(i_72);
                            else
                              e_72 = i_72;
                            {
                              if(((f_72 != NULL) && (f_72 != j_72)))
                                _fail(j_72);
                              else
                                f_72 = j_72;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(d_72), (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(not_null(f_72)), (ATerm) ATinsert(CheckATermList(not_null(e_72)), not_null(z_71))));
                                t = table_put_0(t);
                              }
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
            }
          }
        }
        t = x_13;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm k_69 (ATerm))
{
  ATerm q_72 = NULL,r_72 = NULL,s_72 = NULL;
  q_72 = t;
  p_72 :
  if(((ATgetType(q_72) == AT_LIST) && ((ATermList) q_72 != ATempty)))
    {
      r_72 = ATgetFirst((ATermList) q_72);
      s_72 = (ATerm) ATgetNext((ATermList) q_72);
      {
        t = k_69(t);
        {
          ATerm u_2 (ATerm t)
          {
            ATerm w_72 = NULL;
            w_72 = t;
            if(((r_72 != NULL) && (r_72 != w_72)))
              _fail(w_72);
            else
              r_72 = w_72;
            return(t);
          }
          t = fetch_1(t, u_2);
        }
        t = not_null(s_72);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm h_73 = NULL,j_73 = NULL,k_73 = NULL;
  h_73 = t;
  g_73 :
  if(match_cons(h_73, sym__2))
    {
      j_73 = ATgetArgument(h_73, 0);
      k_73 = ATgetArgument(h_73, 1);
      {
        t = not_null(j_73);
        {
          ATerm o_73 (ATerm t)
          {
            ATerm z_13 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(k_73);
                PopChoice();
              }
            else
              {
                t = z_13;
                {
                  ATerm a_14 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm v_2 (ATerm t)
                      {
                        t = not_null(k_73);
                        return(t);
                      }
                      t = HdMember_1(t, v_2);
                      t = o_73(t);
                      PopChoice();
                    }
                  else
                    {
                      t = a_14;
                      t = Cons_2(t, _id, o_73);
                    }
                }
              }
            return(t);
          }
          t = o_73(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Arities_0 (ATerm t)
{
  ATerm t_73 = NULL;
  ATerm v_73 = NULL;
  t_73 = t;
  {
    ATerm w_73 = NULL,x_73 = NULL,y_73 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(t_73));
    {
      ATerm w_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, w_2);
      {
        w_73 = t;
        r_73 :
        if(match_cons(w_73, sym_Defined_2))
          {
            x_73 = ATgetArgument(w_73, 0);
            y_73 = ATgetArgument(w_73, 1);
            s_73 :
            if(match_string(x_73, "c_0"))
              {
                if(((v_73 != NULL) && (v_73 != y_73)))
                  _fail(y_73);
                else
                  v_73 = y_73;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
    t = not_null(v_73);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL;
  d_74 = t;
  c_74 :
  if(((ATgetType(d_74) == AT_LIST) && ((ATermList) d_74 != ATempty)))
    {
      e_74 = ATgetFirst((ATermList) d_74);
      f_74 = (ATerm) ATgetNext((ATermList) d_74);
      t = not_null(e_74);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm l_74 = NULL,m_74 = NULL,p_74 = NULL;
  l_74 = t;
  k_74 :
  if(match_cons(l_74, sym__2))
    {
      m_74 = ATgetArgument(l_74, 0);
      p_74 = ATgetArgument(l_74, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_74), not_null(p_74));
        {
          t = table_get_0(t);
          t = Hd_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm l_57 (ATerm))
{
  ATerm v_74 = NULL;
  ATerm x_74 = NULL;
  v_74 = t;
  {
    ATerm y_74 = NULL;
    t = (ATerm) ATmakeAppl(sym__0);
    {
      t = l_57(t);
      {
        y_74 = t;
        if(((x_74 != NULL) && (x_74 != y_74)))
          _fail(y_74);
        else
          x_74 = y_74;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_74), not_null(v_74));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm j_75 = NULL,k_75 = NULL,l_75 = NULL;
  j_75 = t;
  i_75 :
  if(match_cons(j_75, sym__2))
    {
      k_75 = ATgetArgument(j_75, 0);
      l_75 = ATgetArgument(j_75, 1);
      {
        ATerm o_75 = NULL,p_75 = NULL;
        ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(l_75), not_null(k_75));
        {
          ATerm x_2 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
            return(t);
          }
          t = rewrite_1(t, x_2);
          {
            q_75 = t;
            g_75 :
            if(match_cons(q_75, sym_Defined_3))
              {
                r_75 = ATgetArgument(q_75, 0);
                s_75 = ATgetArgument(q_75, 1);
                t_75 = ATgetArgument(q_75, 2);
                h_75 :
                if(match_string(r_75, "b_0"))
                  {
                    if(((o_75 != NULL) && (o_75 != s_75)))
                      _fail(s_75);
                    else
                      o_75 = s_75;
                    if(((p_75 != NULL) && (p_75 != t_75)))
                      _fail(t_75);
                    else
                      p_75 = t_75;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(p_75)), not_null(o_75));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL;
  a_76 = t;
  z_75 :
  if(match_cons(a_76, sym__2))
    {
      b_76 = ATgetArgument(a_76, 0);
      c_76 = ATgetArgument(a_76, 1);
      {
        ATerm b_14 = t;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_76), not_null(c_76));
            PopChoice();
          }
        else
          {
            t = b_14;
            t = SSL_addr(not_null(b_76), not_null(c_76));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm k_68 (ATerm))
{
  ATerm c_14 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_68(t);
      PopChoice();
    }
  else
    {
      t = c_14;
      {
        ATerm k_76 = NULL,l_76 = NULL,m_76 = NULL;
        k_76 = t;
        j_76 :
        if(((ATgetType(k_76) == AT_LIST) && ((ATermList) k_76 != ATempty)))
          {
            l_76 = ATgetFirst((ATermList) k_76);
            m_76 = (ATerm) ATgetNext((ATermList) k_76);
            {
              ATerm p_76 = NULL,r_76 = NULL;
              ATerm d_14;
              d_14 = t;
              {
                ATerm q_76 = NULL;
                t = not_null(l_76);
                {
                  t = k_68(t);
                  {
                    q_76 = t;
                    if(((p_76 != NULL) && (p_76 != q_76)))
                      _fail(q_76);
                    else
                      p_76 = q_76;
                  }
                }
              }
              t = d_14;
              {
                ATerm s_76 = NULL;
                t = not_null(m_76);
                {
                  t = foldr_3(t, i_68, j_68, k_68);
                  {
                    s_76 = t;
                    if(((r_76 != NULL) && (r_76 != s_76)))
                      _fail(s_76);
                    else
                      r_76 = s_76;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_76), not_null(r_76));
                  t = j_68(t);
                }
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, f_3, add_0, g_3);
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL,f_77 = NULL;
    c_77 = t;
    b_77 :
    if(match_cons(c_77, sym_SDef_3))
      {
        d_77 = ATgetArgument(c_77, 0);
        e_77 = ATgetArgument(c_77, 1);
        f_77 = ATgetArgument(c_77, 2);
        {
          ATerm m_77 = NULL,n_77 = NULL,o_77 = NULL;
          ATerm e_14;
          e_14 = t;
          {
            ATerm p_77 = NULL;
            t = not_null(e_77);
            {
              ATerm q_77 = NULL;
              t = length_0(t);
              {
                p_77 = t;
                {
                  if(((n_77 != NULL) && (n_77 != p_77)))
                    _fail(p_77);
                  else
                    n_77 = p_77;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_77), not_null(n_77));
                    {
                      ATerm r_77 = NULL,t_77 = NULL;
                      ATerm f_14 = t;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = f_14;
                          t = (ATerm) ATempty;
                        }
                      {
                        q_77 = t;
                        {
                          if(((m_77 != NULL) && (m_77 != q_77)))
                            _fail(q_77);
                          else
                            m_77 = q_77;
                          {
                            ATerm s_77 = NULL;
                            t = not_null(d_77);
                            {
                              ATerm g_14 = t;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = g_14;
                                  t = (ATerm) ATempty;
                                }
                              {
                                s_77 = t;
                                if(((r_77 != NULL) && (r_77 != s_77)))
                                  _fail(s_77);
                                else
                                  r_77 = s_77;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(n_77)), not_null(r_77));
                              {
                                t = union_0(t);
                                {
                                  t_77 = t;
                                  {
                                    if(((o_77 != NULL) && (o_77 != t_77)))
                                      _fail(t_77);
                                    else
                                      o_77 = t_77;
                                    {
                                      ATerm h_14;
                                      h_14 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(n_77), not_null(d_77)), (ATerm) ATmakeAppl(sym_Defined_3, (ATerm)ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue)), not_null(c_77), not_null(m_77)));
                                        {
                                          ATerm i_3 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
                                            return(t);
                                          }
                                          t = assert_1(t, i_3);
                                        }
                                      }
                                      t = h_14;
                                      {
                                        ATerm i_14;
                                        i_14 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(d_77)), (ATerm) ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue)), not_null(o_77)));
                                          {
                                            ATerm j_3 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
                                              return(t);
                                            }
                                            t = assert_1(t, j_3);
                                          }
                                        }
                                        t = i_14;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = e_14;
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = map_1(t, h_3);
  return(t);
}
ATerm needed_defs_0 (ATerm t)
{
  ATerm c_78 = NULL;
  ATerm d_78 = NULL;
  t = sort_defs_0(t);
  {
    d_78 = t;
    if(((c_78 != NULL) && (c_78 != d_78)))
      _fail(d_78);
    else
      c_78 = d_78;
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(ATmakeSymbol("main", 0, ATtrue)), (ATerm) ATmakeInt(0))), not_null(c_78), (ATerm) ATempty);
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm r_54 (ATerm))
{
  ATerm i_78 = NULL,j_78 = NULL;
  i_78 = t;
  h_78 :
  if(match_cons(i_78, sym_Strategies_1))
    {
      j_78 = ATgetArgument(i_78, 0);
      {
        ATerm l_78 = NULL;
        t = not_null(j_78);
        {
          t = r_54(t);
          {
            l_78 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(l_78));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm s_56 (ATerm), ATerm t_56 (ATerm))
{
  ATerm t_78 = NULL,u_78 = NULL,v_78 = NULL;
  t_78 = t;
  s_78 :
  if(((ATgetType(t_78) == AT_LIST) && ((ATermList) t_78 != ATempty)))
    {
      u_78 = ATgetFirst((ATermList) t_78);
      v_78 = (ATerm) ATgetNext((ATermList) t_78);
      {
        ATerm d_79 = NULL;
        t = not_null(u_78);
        {
          ATerm f_79 = NULL;
          t = s_56(t);
          {
            d_79 = t;
            {
              t = not_null(v_78);
              {
                t = t_56(t);
                {
                  f_79 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_79)), not_null(d_79));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm t_54 (ATerm))
{
  ATerm n_79 = NULL,o_79 = NULL;
  n_79 = t;
  m_79 :
  if(match_cons(n_79, sym_Specification_1))
    {
      o_79 = ATgetArgument(n_79, 0);
      {
        ATerm q_79 = NULL;
        t = not_null(o_79);
        {
          t = t_54(t);
          {
            q_79 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(q_79));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm k_46 (ATerm), ATerm l_46 (ATerm))
{
  ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL;
  b_80 = t;
  a_80 :
  if(match_cons(b_80, sym__2))
    {
      c_80 = ATgetArgument(b_80, 0);
      d_80 = ATgetArgument(b_80, 1);
      {
        ATerm g_80 = NULL;
        t = not_null(c_80);
        {
          ATerm i_80 = NULL;
          t = k_46(t);
          {
            g_80 = t;
            {
              t = not_null(d_80);
              {
                t = l_46(t);
                {
                  i_80 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_80), not_null(i_80));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm p_80 = NULL;
  ATerm j_14;
  j_14 = t;
  {
    ATerm r_3 (ATerm t)
    {
      ATerm q_80 = NULL,r_80 = NULL;
      q_80 = t;
      o_80 :
      if(match_cons(q_80, sym_Program_1))
        {
          r_80 = ATgetArgument(q_80, 0);
          if(((p_80 != NULL) && (p_80 != r_80)))
            _fail(r_80);
          else
            p_80 = r_80;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, r_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), not_null(p_80)), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeInt(1);
          t = exit_0(t);
        }
      }
    }
  }
  t = j_14;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue))));
  {
    t = printnl_0(t);
    {
      t = (ATerm) ATmakeInt(1);
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm y_80 = NULL,z_80 = NULL;
  ATerm s_3 (ATerm t)
  {
    ATerm t_3 (ATerm t)
    {
      ATerm k_14 = t;
      if((PushChoice() == 0))
        {
          ATerm u_3 (ATerm t)
          {
            ATerm a_81 = NULL;
            a_81 = t;
            t_80 :
            if(!(match_cons(a_81, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, u_3);
          PopChoice();
          _fail(t);
        }
      else
        t = k_14;
      return(t);
    }
    t = _2(t, t_3, _id);
    {
      ATerm v_3 (ATerm t)
      {
        ATerm b_4 (ATerm t)
        {
          ATerm b_81 = NULL,c_81 = NULL;
          b_81 = t;
          v_80 :
          if(match_cons(b_81, sym_Runtime_1))
            {
              c_81 = ATgetArgument(b_81, 0);
              if(((z_80 != NULL) && (z_80 != c_81)))
                _fail(c_81);
              else
                z_80 = c_81;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, b_4);
        return(t);
      }
      t = _2(t, v_3, _id);
      {
        ATerm c_4 (ATerm t)
        {
          ATerm d_4 (ATerm t)
          {
            ATerm d_81 = NULL,e_81 = NULL;
            d_81 = t;
            x_80 :
            if(match_cons(d_81, sym_Program_1))
              {
                e_81 = ATgetArgument(d_81, 0);
                if(((y_80 != NULL) && (y_80 != e_81)))
                  _fail(e_81);
                else
                  y_80 = e_81;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, d_4);
          return(t);
        }
        t = _2(t, c_4, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), not_null(z_80)), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), not_null(y_80)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, s_3);
  {
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm j_81 = NULL,k_81 = NULL,l_81 = NULL;
  j_81 = t;
  i_81 :
  if(match_cons(j_81, sym__2))
    {
      k_81 = ATgetArgument(j_81, 0);
      l_81 = ATgetArgument(j_81, 1);
      t = SSL_WriteToTextFile(not_null(k_81), not_null(l_81));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm r_81 = NULL,s_81 = NULL,t_81 = NULL;
  r_81 = t;
  q_81 :
  if(match_cons(r_81, sym__2))
    {
      s_81 = ATgetArgument(r_81, 0);
      t_81 = ATgetArgument(r_81, 1);
      t = SSL_WriteToBinaryFile(not_null(s_81), not_null(t_81));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm b_82 = NULL;
  ATerm l_14;
  l_14 = t;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm m_14 = t;
      if((PushChoice() == 0))
        {
          ATerm h_4 (ATerm t)
          {
            ATerm c_82 = NULL,d_82 = NULL;
            c_82 = t;
            y_81 :
            if(match_cons(c_82, sym_Output_1))
              {
                d_82 = ATgetArgument(c_82, 0);
                if(((b_82 != NULL) && (b_82 != d_82)))
                  _fail(d_82);
                else
                  b_82 = d_82;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, h_4);
          PopChoice();
        }
      else
        {
          t = m_14;
          {
            ATerm e_82 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            {
              e_82 = t;
              if(((b_82 != NULL) && (b_82 != e_82)))
                _fail(e_82);
              else
                b_82 = e_82;
            }
          }
        }
      return(t);
    }
    t = _2(t, g_4, _id);
  }
  t = l_14;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm j_4 (ATerm t)
      {
        t = not_null(b_82);
        return(t);
      }
      t = split_2(t, j_4, _id);
      return(t);
    }
    t = _2(t, _id, i_4);
    {
      ATerm n_14 = t;
      if((PushChoice() == 0))
        {
          ATerm n_4 (ATerm t)
          {
            ATerm v_4 (ATerm t)
            {
              ATerm f_82 = NULL;
              f_82 = t;
              a_82 :
              if(!(match_cons(f_82, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, v_4);
            return(t);
          }
          t = _2(t, n_4, WriteToBinaryFile_0);
          PopChoice();
        }
      else
        {
          t = n_14;
          t = _2(t, _id, WriteToTextFile_0);
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
ATerm apply_strategy_1 (ATerm t, ATerm e_61 (ATerm))
{
  ATerm l_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL;
  ATerm o_14;
  o_14 = t;
  t = dtime_0(t);
  t = o_14;
  {
    t = e_61(t);
    {
      ATerm p_14;
      p_14 = t;
      {
        ATerm m_82 = NULL;
        t = dtime_0(t);
        {
          m_82 = t;
          if(((l_82 != NULL) && (l_82 != m_82)))
            _fail(m_82);
          else
            l_82 = m_82;
        }
      }
      t = p_14;
      {
        n_82 = t;
        k_82 :
        if(match_cons(n_82, sym__2))
          {
            o_82 = ATgetArgument(n_82, 0);
            p_82 = ATgetArgument(n_82, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_82)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_82))), not_null(p_82));
          }
        else
          _fail(t);
      }
    }
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm v_82 = NULL;
  v_82 = t;
  t = SSL_ReadFromFile(not_null(v_82));
  return(t);
}
ATerm split_2 (ATerm t, ATerm n_74 (ATerm), ATerm o_74 (ATerm))
{
  ATerm a_83 = NULL,c_83 = NULL;
  ATerm q_14;
  q_14 = t;
  {
    ATerm b_83 = NULL;
    t = n_74(t);
    {
      b_83 = t;
      if(((a_83 != NULL) && (a_83 != b_83)))
        _fail(b_83);
      else
        a_83 = b_83;
    }
  }
  t = q_14;
  {
    ATerm d_83 = NULL;
    t = o_74(t);
    {
      d_83 = t;
      if(((c_83 != NULL) && (c_83 != d_83)))
        _fail(d_83);
      else
        c_83 = d_83;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_83), not_null(c_83));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm j_83 = NULL;
  ATerm r_14;
  r_14 = t;
  {
    ATerm s_14 = t;
    if((PushChoice() == 0))
      {
        ATerm c_5 (ATerm t)
        {
          ATerm k_83 = NULL,l_83 = NULL;
          k_83 = t;
          h_83 :
          if(match_cons(k_83, sym_Input_1))
            {
              l_83 = ATgetArgument(k_83, 0);
              if(((j_83 != NULL) && (j_83 != l_83)))
                _fail(l_83);
              else
                j_83 = l_83;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, c_5);
        PopChoice();
      }
    else
      {
        t = s_14;
        {
          ATerm m_83 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          {
            m_83 = t;
            if(((j_83 != NULL) && (j_83 != m_83)))
              _fail(m_83);
            else
              j_83 = m_83;
          }
        }
      }
  }
  t = r_14;
  {
    ATerm h_5 (ATerm t)
    {
      t = not_null(j_83);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, h_5);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_83 = NULL;
  q_83 = t;
  p_83 :
  if(!(match_cons(q_83, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm d_61 (ATerm))
{
  ATerm i_5 (ATerm t)
  {
    ATerm t_14 = t;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = t_14;
        {
          ATerm u_14 = t;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = u_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, i_5);
  t = d_61(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_83 = NULL;
  s_83 = t;
  t = SSL_table_create(not_null(s_83));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_83 = NULL;
  w_83 = t;
  {
    ATerm v_14;
    v_14 = t;
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), not_null(w_83));
          t = table_put_0(t);
        }
      }
    }
    t = v_14;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm e_84 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL;
  e_84 = t;
  c_84 :
  if(match_string(e_84, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(e_84) == AT_LIST) && ((ATermList) e_84 != ATempty)))
        {
          f_84 = ATgetFirst((ATermList) e_84);
          g_84 = (ATerm) ATgetNext((ATermList) e_84);
          d_84 :
          if(((ATgetType(g_84) == AT_LIST) && ((ATermList) g_84 != ATempty)))
            {
              h_84 = ATgetFirst((ATermList) g_84);
              i_84 = (ATerm) ATgetNext((ATermList) g_84);
              {
                ATerm m_84 = NULL;
                ATerm w_14;
                w_14 = t;
                {
                  t = not_null(f_84);
                  t = h_0(t);
                }
                t = w_14;
                {
                  ATerm n_84 = NULL;
                  t = not_null(h_84);
                  {
                    t = i_0(t);
                    {
                      n_84 = t;
                      if(((m_84 != NULL) && (m_84 != n_84)))
                        _fail(n_84);
                      else
                        m_84 = n_84;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_84)), not_null(m_84));
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm x_14 = t;
  if((PushChoice() == 0))
    {
      ATerm j_5 (ATerm t)
      {
        ATerm c_85 = NULL;
        c_85 = t;
        r_84 :
        if(!(match_string(c_85, "-S")))
          {
            if(!(match_string(c_85, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm k_5 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm l_5 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, j_5, k_5, l_5);
      PopChoice();
    }
  else
    {
      t = x_14;
      {
        ATerm y_14 = t;
        if((PushChoice() == 0))
          {
            ATerm m_5 (ATerm t)
            {
              ATerm d_85 = NULL;
              d_85 = t;
              s_84 :
              if(!(match_string(d_85, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm n_5 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm s_5 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, m_5, n_5, s_5);
            PopChoice();
          }
        else
          {
            t = y_14;
            {
              ATerm z_14 = t;
              if((PushChoice() == 0))
                {
                  ATerm t_5 (ATerm t)
                  {
                    ATerm e_85 = NULL;
                    e_85 = t;
                    t_84 :
                    if(!(match_string(e_85, "-v")))
                      {
                        if(!(match_string(e_85, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm v_5 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm x_5 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, t_5, v_5, x_5);
                  PopChoice();
                }
              else
                {
                  t = z_14;
                  {
                    ATerm a_15 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm y_5 (ATerm t)
                        {
                          ATerm f_85 = NULL;
                          f_85 = t;
                          u_84 :
                          if(!(match_string(f_85, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm z_5 (ATerm t)
                        {
                          ATerm g_85 = NULL;
                          ATerm h_85 = NULL;
                          h_85 = t;
                          if(((g_85 != NULL) && (g_85 != h_85)))
                            _fail(h_85);
                          else
                            g_85 = h_85;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(g_85));
                          return(t);
                        }
                        ATerm a_6 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, y_5, z_5, a_6);
                        PopChoice();
                      }
                    else
                      {
                        t = a_15;
                        {
                          ATerm b_15 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm b_6 (ATerm t)
                              {
                                ATerm i_85 = NULL;
                                i_85 = t;
                                w_84 :
                                if(!(match_string(i_85, "-i")))
                                  {
                                    if(!(match_string(i_85, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm c_6 (ATerm t)
                              {
                                ATerm j_85 = NULL;
                                ATerm k_85 = NULL;
                                k_85 = t;
                                if(((j_85 != NULL) && (j_85 != k_85)))
                                  _fail(k_85);
                                else
                                  j_85 = k_85;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_85));
                                return(t);
                              }
                              ATerm d_6 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, b_6, c_6, d_6);
                              PopChoice();
                            }
                          else
                            {
                              t = b_15;
                              {
                                ATerm c_15 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm e_6 (ATerm t)
                                    {
                                      ATerm l_85 = NULL;
                                      l_85 = t;
                                      y_84 :
                                      if(!(match_string(l_85, "-o")))
                                        {
                                          if(!(match_string(l_85, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm k_6 (ATerm t)
                                    {
                                      ATerm m_85 = NULL;
                                      ATerm n_85 = NULL;
                                      n_85 = t;
                                      if(((m_85 != NULL) && (m_85 != n_85)))
                                        _fail(n_85);
                                      else
                                        m_85 = n_85;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_85));
                                      return(t);
                                    }
                                    ATerm l_6 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, e_6, k_6, l_6);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = c_15;
                                    {
                                      ATerm d_15 = t;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_6 (ATerm t)
                                          {
                                            ATerm o_85 = NULL;
                                            o_85 = t;
                                            a_85 :
                                            if(!(match_string(o_85, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm o_6 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm q_6 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, m_6, o_6, q_6);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = d_15;
                                          {
                                            ATerm s_6 (ATerm t)
                                            {
                                              ATerm p_85 = NULL;
                                              p_85 = t;
                                              b_85 :
                                              if(!(match_string(p_85, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm t_6 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm u_6 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, s_6, t_6, u_6);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm u_85 = NULL;
  u_85 = t;
  t = SSL_table_destroy(not_null(u_85));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm y_85 = NULL;
  y_85 = t;
  t = SSL_exit(not_null(y_85));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm c_86 = NULL;
  c_86 = t;
  t = SSL_implode_string(not_null(c_86));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm w_71 (ATerm))
{
  ATerm f_86 (ATerm t)
  {
    ATerm e_15 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, f_86);
        PopChoice();
      }
    else
      {
        t = e_15;
        {
          t = Nil_0(t);
          t = w_71(t);
        }
      }
    return(t);
  }
  t = f_86(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm f_15 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = f_15;
      {
        ATerm i_86 = NULL,j_86 = NULL,k_86 = NULL;
        i_86 = t;
        h_86 :
        if(((ATgetType(i_86) == AT_LIST) && ((ATermList) i_86 != ATempty)))
          {
            j_86 = ATgetFirst((ATermList) i_86);
            k_86 = (ATerm) ATgetNext((ATermList) i_86);
            {
              t = not_null(j_86);
              {
                ATerm v_6 (ATerm t)
                {
                  t = not_null(k_86);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, v_6);
              }
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
  ATerm q_86 = NULL;
  q_86 = t;
  t = SSL_explode_string(not_null(q_86));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_59 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_71 (ATerm))
{
  ATerm t_86 (ATerm t)
  {
    ATerm g_15 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = g_15;
        t = Cons_2(t, i_71, t_86);
      }
    return(t);
  }
  t = t_86(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm y_86 = NULL,z_86 = NULL,a_87 = NULL;
  a_87 = t;
  x_86 :
  if(((ATgetType(a_87) == AT_LIST) && ((ATermList) a_87 != ATempty)))
    {
      y_86 = ATgetFirst((ATermList) a_87);
      z_86 = (ATerm) ATgetNext((ATermList) a_87);
      {
        t = not_null(z_86);
        {
          ATerm w_6 (ATerm t)
          {
            ATerm d_87 = NULL;
            ATerm e_87 = NULL;
            t = g_0(t);
            {
              e_87 = t;
              if(((d_87 != NULL) && (d_87 != e_87)))
                _fail(e_87);
              else
                d_87 = e_87;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(d_87)), not_null(y_86));
            return(t);
          }
          t = reverse_1(t, w_6);
        }
      }
    }
  else
    {
      if(((ATermList) a_87 == ATempty))
        {
          {
            t = (ATerm) ATmakeAppl(sym__0);
            t = g_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, x_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm j_59 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm z_51 (ATerm))
{
  ATerm l_87 = NULL,m_87 = NULL;
  l_87 = t;
  k_87 :
  if(match_cons(l_87, sym_Program_1))
    {
      m_87 = ATgetArgument(l_87, 0);
      {
        ATerm o_87 = NULL;
        t = not_null(m_87);
        {
          t = z_51(t);
          {
            o_87 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_87));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm w_87 = NULL;
  ATerm y_6 (ATerm t)
  {
    ATerm z_6 (ATerm t)
    {
      ATerm x_87 = NULL;
      x_87 = t;
      if(((w_87 != NULL) && (w_87 != x_87)))
        _fail(x_87);
      else
        w_87 = x_87;
      return(t);
    }
    t = Program_1(t, z_6);
    return(t);
  }
  t = option_defined_1(t, y_6);
  {
    ATerm e_7 (ATerm t)
    {
      ATerm y_87 = NULL;
      ATerm z_87 = NULL;
      t = (ATerm) ATmakeAppl(sym__0);
      {
        ATerm f_7 (ATerm t)
        {
          t = not_null(w_87);
          return(t);
        }
        t = short_description_1(t, f_7);
        {
          t = concat_strings_0(t);
          {
            z_87 = t;
            if(((y_87 != NULL) && (y_87 != z_87)))
              _fail(z_87);
            else
              y_87 = z_87;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, not_null(y_87)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, e_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm h_7 (ATerm t)
                {
                  ATerm a_88 = NULL;
                  a_88 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_88)), (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue))));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, h_7);
                {
                  ATerm j_7 (ATerm t)
                  {
                    ATerm c_88 = NULL;
                    ATerm d_88 = NULL;
                    t = (ATerm) ATmakeAppl(sym__0);
                    {
                      ATerm k_7 (ATerm t)
                      {
                        t = not_null(w_87);
                        return(t);
                      }
                      t = long_description_1(t, k_7);
                      {
                        t = concat_strings_0(t);
                        {
                          d_88 = t;
                          if(((c_88 != NULL) && (c_88 != d_88)))
                            _fail(d_88);
                          else
                            c_88 = d_88;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(c_88)), (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue))));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, j_7);
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
ATerm printnl_0 (ATerm t)
{
  ATerm k_88 = NULL,l_88 = NULL,m_88 = NULL;
  k_88 = t;
  j_88 :
  if(match_cons(k_88, sym__2))
    {
      l_88 = ATgetArgument(k_88, 0);
      m_88 = ATgetArgument(k_88, 1);
      {
        ATerm h_15;
        h_15 = t;
        t = SSL_printnl(not_null(l_88), not_null(m_88));
        t = h_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm a_52 (ATerm))
{
  ATerm t_88 = NULL,u_88 = NULL;
  t_88 = t;
  s_88 :
  if(match_cons(t_88, sym_Undefined_1))
    {
      u_88 = ATgetArgument(t_88, 0);
      {
        ATerm w_88 = NULL;
        t = not_null(u_88);
        {
          t = a_52(t);
          {
            w_88 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_88));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm q_71 (ATerm))
{
  ATerm a_89 (ATerm t)
  {
    ATerm i_15 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, q_71, _id);
        PopChoice();
      }
    else
      {
        t = i_15;
        t = Cons_2(t, _id, a_89);
      }
    return(t);
  }
  t = a_89(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_60 (ATerm))
{
  t = fetch_1(t, i_60);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm c_89 = NULL;
  c_89 = t;
  b_89 :
  if(!(match_cons(c_89, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm f_75 (ATerm))
{
  ATerm j_15 = t;
  if((PushChoice() == 0))
    {
      t = f_75(t);
      PopChoice();
    }
  else
    {
      t = j_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL;
  f_89 = t;
  e_89 :
  if(match_cons(f_89, sym__2))
    {
      g_89 = ATgetArgument(f_89, 0);
      h_89 = ATgetArgument(f_89, 1);
      t = SSL_table_get(not_null(g_89), not_null(h_89));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm o_89 = NULL,p_89 = NULL,q_89 = NULL,r_89 = NULL;
  o_89 = t;
  n_89 :
  if(match_cons(o_89, sym__3))
    {
      p_89 = ATgetArgument(o_89, 0);
      q_89 = ATgetArgument(o_89, 1);
      r_89 = ATgetArgument(o_89, 2);
      {
        ATerm k_15;
        k_15 = t;
        {
          ATerm v_89 = NULL;
          ATerm w_89 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_89), not_null(q_89));
          {
            ATerm l_15 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                PopChoice();
              }
            else
              {
                t = l_15;
                t = (ATerm) ATempty;
              }
            {
              w_89 = t;
              if(((v_89 != NULL) && (v_89 != w_89)))
                _fail(w_89);
              else
                v_89 = w_89;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_89), not_null(q_89), (ATerm) ATinsert(CheckATermList(not_null(v_89)), not_null(r_89)));
            t = table_put_0(t);
          }
        }
        t = k_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm o_59 (ATerm))
{
  ATerm a_90 = NULL;
  ATerm b_90 = NULL;
  t = (ATerm) ATmakeAppl(sym__0);
  {
    t = o_59(t);
    {
      b_90 = t;
      if(((a_90 != NULL) && (a_90 != b_90)))
        _fail(b_90);
      else
        a_90 = b_90;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), not_null(a_90));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL;
  h_90 = t;
  g_90 :
  if(match_string(h_90, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(h_90) == AT_LIST) && ((ATermList) h_90 != ATempty)))
        {
          i_90 = ATgetFirst((ATermList) h_90);
          j_90 = (ATerm) ATgetNext((ATermList) h_90);
          {
            ATerm m_90 = NULL;
            ATerm m_15;
            m_15 = t;
            {
              t = not_null(i_90);
              t = d_0(t);
            }
            t = m_15;
            {
              ATerm n_90 = NULL;
              t = (ATerm) ATmakeAppl(sym__0);
              {
                t = e_0(t);
                {
                  n_90 = t;
                  if(((m_90 != NULL) && (m_90 != n_90)))
                    _fail(n_90);
                  else
                    m_90 = n_90;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(j_90)), not_null(m_90));
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm l_7 (ATerm t)
  {
    ATerm s_90 = NULL;
    s_90 = t;
    r_90 :
    if(!(match_string(s_90, "--help")))
      {
        if(!(match_string(s_90, "-h")))
          {
            if(!(match_string(s_90, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm m_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm n_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, l_7, m_7, n_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm v_90 = NULL,w_90 = NULL,x_90 = NULL;
  v_90 = t;
  u_90 :
  if(((ATgetType(v_90) == AT_LIST) && ((ATermList) v_90 != ATempty)))
    {
      w_90 = ATgetFirst((ATermList) v_90);
      x_90 = (ATerm) ATgetNext((ATermList) v_90);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_90)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_90)));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm n_15;
  n_15 = t;
  {
    ATerm s_7 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = m_59(t);
      return(t);
    }
    t = try_1(t, s_7);
  }
  t = n_15;
  {
    ATerm t_7 (ATerm t)
    {
      ATerm c_91 = NULL;
      c_91 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_91));
      return(t);
    }
    ATerm u_7 (ATerm t)
    {
      ATerm o_15 = t;
      if((PushChoice() == 0))
        {
          ATerm p_15 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = p_15;
              {
                t = m_59(t);
                t = Cons_2(t, _id, u_7);
              }
            }
          PopChoice();
        }
      else
        {
          t = o_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, t_7, u_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_91 = NULL,j_91 = NULL,k_91 = NULL;
  ATerm q_15;
  q_15 = t;
  {
    ATerm l_91 = NULL,m_91 = NULL,n_91 = NULL,o_91 = NULL;
    l_91 = t;
    h_91 :
    if(match_cons(l_91, sym__3))
      {
        m_91 = ATgetArgument(l_91, 0);
        n_91 = ATgetArgument(l_91, 1);
        o_91 = ATgetArgument(l_91, 2);
        {
          if(((i_91 != NULL) && (i_91 != m_91)))
            _fail(m_91);
          else
            i_91 = m_91;
          {
            if(((j_91 != NULL) && (j_91 != n_91)))
              _fail(n_91);
            else
              j_91 = n_91;
            {
              if(((k_91 != NULL) && (k_91 != o_91)))
                _fail(o_91);
              else
                k_91 = o_91;
              t = SSL_table_put(not_null(i_91), not_null(j_91), not_null(k_91));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = q_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_59 (ATerm))
{
  ATerm r_91 = NULL;
  ATerm r_15;
  r_15 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
    t = table_put_0(t);
  }
  t = r_15;
  {
    ATerm v_7 (ATerm t)
    {
      ATerm s_15 = t;
      if((PushChoice() == 0))
        {
          t = l_59(t);
          PopChoice();
        }
      else
        {
          t = s_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, v_7);
    {
      ATerm w_7 (ATerm t)
      {
        ATerm t_15 = t;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = (ATerm) ATmakeInt(0);
                t = exit_0(t);
              }
            }
            PopChoice();
          }
        else
          {
            t = t_15;
            {
              ATerm d_8 (ATerm t)
              {
                ATerm e_8 (ATerm t)
                {
                  ATerm s_91 = NULL;
                  s_91 = t;
                  if(((r_91 != NULL) && (r_91 != s_91)))
                    _fail(s_91);
                  else
                    r_91 = s_91;
                  return(t);
                }
                t = Undefined_1(t, e_8);
                return(t);
              }
              t = option_defined_1(t, d_8);
              {
                ATerm u_15;
                u_15 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_91)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                  t = printnl_0(t);
                }
                t = u_15;
                {
                  t = system_usage_0(t);
                  {
                    t = (ATerm) ATmakeInt(1);
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, w_7);
      {
        ATerm v_15;
        v_15 = t;
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
          t = table_destroy_0(t);
        }
        t = v_15;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm s_60 (ATerm), ATerm t_60 (ATerm), ATerm u_60 (ATerm))
{
  ATerm f_8 (ATerm t)
  {
    ATerm w_15 = t;
    if((PushChoice() == 0))
      {
        t = t_60(t);
        PopChoice();
      }
    else
      {
        t = w_15;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, f_8);
  {
    t = store_options_0(t);
    {
      ATerm x_15 = t;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, u_60);
          PopChoice();
        }
      else
        {
          t = x_15;
          {
            ATerm y_15 = t;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, s_60);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                PopChoice();
              }
            else
              {
                t = y_15;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm n_60 (ATerm), ATerm o_60 (ATerm))
{
  t = iowrap_3(t, n_60, o_60, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm k_60 (ATerm))
{
  ATerm j_8 (ATerm t)
  {
    t = _2(t, _id, k_60);
    return(t);
  }
  t = iowrap_2(t, j_8, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm k_8 (ATerm t)
  {
    ATerm l_8 (ATerm t)
    {
      ATerm m_8 (ATerm t)
      {
        ATerm n_8 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, n_8, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, m_8);
      return(t);
    }
    t = Specification_1(t, l_8);
    return(t);
  }
  t = iowrap_1(t, k_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_0(t);
  return(t);
}
