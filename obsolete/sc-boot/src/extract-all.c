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
ATerm Rec_2 (ATerm, ATerm t_53 (ATerm), ATerm u_53 (ATerm));
ATerm SDef_3 (ATerm, ATerm x_53 (ATerm), ATerm y_53 (ATerm), ATerm z_53 (ATerm));
ATerm Let_2 (ATerm, ATerm v_53 (ATerm), ATerm w_53 (ATerm));
ATerm sboundin_3 (ATerm, ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm d_76 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm q_62 (ATerm), ATerm r_62 (ATerm), ATerm s_62 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm g_62 (ATerm), ATerm h_62 (ATerm));
ATerm diff_1 (ATerm, ATerm l_62 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm w_66 (ATerm), ATerm x_66 (ATerm), ATerm y_66 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_66 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm h_61 (ATerm), ATerm i_61 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm e_75 (ATerm), ATerm f_75 (ATerm));
ATerm alltd_1 (ATerm, ATerm e_74 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm g_75 (ATerm), ATerm h_75 (ATerm));
ATerm substitute_1 (ATerm, ATerm i_75 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm a_54 (ATerm), ATerm b_54 (ATerm));
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
ATerm Explode_2 (ATerm, ATerm z_51 (ATerm), ATerm a_52 (ATerm));
ATerm Op_2 (ATerm, ATerm i_53 (ATerm), ATerm j_53 (ATerm));
ATerm pat_td_1 (ATerm, ATerm y_78 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm e_64 (ATerm), ATerm f_64 (ATerm));
ATerm repeat_1 (ATerm, ATerm h_64 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm t_51 (ATerm), ATerm u_51 (ATerm));
ATerm Con_3 (ATerm, ATerm q_51 (ATerm), ATerm r_51 (ATerm), ATerm s_51 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm x_54 (ATerm), ATerm y_54 (ATerm));
ATerm oncetd_1 (ATerm, ATerm q_73 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm a_72 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm j_71 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm w_61 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm o_69 (ATerm));
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
ATerm genzip_4 (ATerm, ATerm g_69 (ATerm), ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm j_69 (ATerm));
ATerm zip_1 (ATerm, ATerm l_69 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm u_55 (ATerm), ATerm v_55 (ATerm), ATerm w_55 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm v_64 (ATerm), ATerm w_64 (ATerm));
ATerm for_3 (ATerm, ATerm y_64 (ATerm), ATerm z_64 (ATerm), ATerm a_65 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm d_56 (ATerm), ATerm e_56 (ATerm), ATerm f_56 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm o_55 (ATerm));
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm q_55 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm f_62 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm j_61 (ATerm), ATerm k_61 (ATerm), ATerm l_61 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm b_53 (ATerm));
ATerm Cons_2 (ATerm, ATerm c_55 (ATerm), ATerm d_55 (ATerm));
ATerm Specification_1 (ATerm, ATerm d_53 (ATerm));
ATerm _2 (ATerm, ATerm u_44 (ATerm), ATerm v_44 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm j_59 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm t_70 (ATerm), ATerm u_70 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm i_59 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_77 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm p_57 (ATerm));
ATerm map_1 (ATerm, ATerm z_76 (ATerm));
ATerm reverse_1 (ATerm, ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm o_57 (ATerm));
ATerm Program_1 (ATerm, ATerm j_50 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm k_50 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_77 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_58 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_71 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm t_57 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm r_57 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm q_57 (ATerm));
ATerm iowrap_3 (ATerm, ATerm x_58 (ATerm), ATerm y_58 (ATerm), ATerm z_58 (ATerm));
ATerm iowrap_2 (ATerm, ATerm s_58 (ATerm), ATerm t_58 (ATerm));
ATerm iowrap_1 (ATerm, ATerm p_58 (ATerm));
ATerm extract_all_0 (ATerm);
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
                ATerm z_8 = t;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = z_8;
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
  ATerm a_9;
  a_9 = t;
  {
    t = error_0(t);
    {
      t = (ATerm) ATmakeInt(1);
      t = exit_0(t);
    }
  }
  t = a_9;
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
  ATerm b_9;
  b_9 = t;
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
  t = b_9;
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
          ATerm c_9 = t;
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
                            ATerm d_9 = t;
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
                              t = d_9;
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
              t = c_9;
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
ATerm Rec_2 (ATerm t, ATerm t_53 (ATerm), ATerm u_53 (ATerm))
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
          t = t_53(t);
          {
            u_5 = t;
            {
              t = not_null(r_5);
              {
                t = u_53(t);
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
ATerm SDef_3 (ATerm t, ATerm x_53 (ATerm), ATerm y_53 (ATerm), ATerm z_53 (ATerm))
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
          t = x_53(t);
          {
            n_6 = t;
            {
              t = not_null(i_6);
              {
                ATerm r_6 = NULL;
                t = y_53(t);
                {
                  p_6 = t;
                  {
                    t = not_null(j_6);
                    {
                      t = z_53(t);
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
ATerm Let_2 (ATerm t, ATerm v_53 (ATerm), ATerm w_53 (ATerm))
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
          t = v_53(t);
          {
            g_7 = t;
            {
              t = not_null(d_7);
              {
                t = w_53(t);
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
ATerm sboundin_3 (ATerm t, ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm d_76 (ATerm))
{
  ATerm e_9 = t;
  if((PushChoice() == 0))
    {
      t = Let_2(t, b_76, b_76);
      PopChoice();
    }
  else
    {
      t = e_9;
      {
        ATerm f_9 = t;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, d_76, d_76, b_76);
            PopChoice();
          }
        else
          {
            t = f_9;
            t = Rec_2(t, d_76, b_76);
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
ATerm crush_3 (ATerm t, ATerm q_62 (ATerm), ATerm r_62 (ATerm), ATerm s_62 (ATerm))
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
      t = foldr_3(t, q_62, r_62, s_62);
    }
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm g_62 (ATerm), ATerm h_62 (ATerm))
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL;
  w_9 = t;
  v_9 :
  if(((ATgetType(w_9) == AT_LIST) && ((ATermList) w_9 != ATempty)))
    {
      x_9 = ATgetFirst((ATermList) w_9);
      y_9 = (ATerm) ATgetNext((ATermList) w_9);
      {
        t = h_62(t);
        {
          ATerm n_0 (ATerm t)
          {
            ATerm b_10 = NULL;
            b_10 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_9), not_null(b_10));
              t = g_62(t);
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
ATerm diff_1 (ATerm t, ATerm l_62 (ATerm))
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
            ATerm g_9 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
              }
            else
              {
                t = g_9;
                {
                  ATerm j_9 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm o_0 (ATerm t)
                      {
                        t = not_null(j_10);
                        return(t);
                      }
                      t = HdMember_p__2(t, l_62, o_0);
                      t = n_10(t);
                      PopChoice();
                    }
                  else
                    {
                      t = j_9;
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
ATerm free_vars2_4 (ATerm t, ATerm w_66 (ATerm), ATerm x_66 (ATerm), ATerm y_66 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_66 (ATerm))
{
  ATerm r_10 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      ATerm m_9 = t;
      if((PushChoice() == 0))
        {
          t = w_66(t);
          PopChoice();
        }
      else
        {
          t = m_9;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm q_0 (ATerm t)
    {
      ATerm q_9 = t;
      if((PushChoice() == 0))
        {
          ATerm p_10 = NULL;
          ATerm r_9;
          r_9 = t;
          {
            ATerm q_10 = NULL;
            t = x_66(t);
            {
              q_10 = t;
              if(((p_10 != NULL) && (p_10 != q_10)))
                _fail(q_10);
              else
                p_10 = q_10;
            }
          }
          t = r_9;
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = not_null(p_10);
                return(t);
              }
              t = split_2(t, r_10, t_0);
              t = diff_1(t, z_66);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = y_66(t, r_0, r_10, s_0);
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
          t = q_9;
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
    ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
    j_11 = t;
    a_11 :
    if(match_cons(j_11, sym_Call_2))
      {
        k_11 = ATgetArgument(j_11, 0);
        m_11 = ATgetArgument(j_11, 1);
        b_11 :
        if(match_cons(k_11, sym_SVar_1))
          {
            l_11 = ATgetArgument(k_11, 0);
            {
              ATerm p_11 = NULL;
              ATerm q_11 = NULL;
              t = not_null(m_11);
              {
                t = length_0(t);
                {
                  q_11 = t;
                  if(((p_11 != NULL) && (p_11 != q_11)))
                    _fail(q_11);
                  else
                    p_11 = q_11;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(l_11), not_null(p_11)));
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
    ATerm s_9 = t;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = s_9;
        {
          ATerm t_9 = t;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = t_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    ATerm r_11 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
    r_11 = t;
    e_11 :
    if(match_cons(r_11, sym__2))
      {
        m_12 = ATgetArgument(r_11, 0);
        p_12 = ATgetArgument(r_11, 1);
        f_11 :
        if(match_cons(m_12, sym__2))
          {
            n_12 = ATgetArgument(m_12, 0);
            o_12 = ATgetArgument(m_12, 1);
            if(((n_12 != NULL) && (n_12 != p_12)))
              _fail(p_12);
            else
              n_12 = p_12;
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
  ATerm l_13 = NULL;
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
  l_13 = t;
  {
    ATerm q_13 = NULL;
    ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL;
    t = not_null(l_13);
    {
      q_13 = t;
      {
        t = SSL_explode_term(not_null(q_13));
        {
          s_13 = t;
          h_13 :
          if(match_cons(s_13, sym__2))
            {
              t_13 = ATgetArgument(s_13, 0);
              u_13 = ATgetArgument(s_13, 1);
              i_13 :
              if(match_string(t_13, ""))
                {
                  j_13 :
                  if(((ATgetType(u_13) == AT_LIST) && ((ATermList) u_13 != ATempty)))
                    {
                      c_14 = ATgetFirst((ATermList) u_13);
                      d_14 = (ATerm) ATgetNext((ATermList) u_13);
                      k_13 :
                      if(((ATgetType(d_14) == AT_LIST) && ((ATermList) d_14 != ATempty)))
                        {
                          e_14 = ATgetFirst((ATermList) d_14);
                          f_14 = (ATerm) ATgetNext((ATermList) d_14);
                          {
                            if(((n_13 != NULL) && (n_13 != c_14)))
                              _fail(c_14);
                            else
                              n_13 = c_14;
                            {
                              if(((p_13 != NULL) && (p_13 != e_14)))
                                _fail(e_14);
                              else
                                p_13 = e_14;
                              if(((o_13 != NULL) && (o_13 != f_14)))
                                _fail(f_14);
                              else
                                o_13 = f_14;
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
    t = not_null(p_13);
  }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm h_61 (ATerm), ATerm i_61 (ATerm))
{
  ATerm u_9 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_61(t);
      PopChoice();
    }
  else
    {
      t = u_9;
      {
        ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
        p_14 = t;
        o_14 :
        if(((ATgetType(p_14) == AT_LIST) && ((ATermList) p_14 != ATempty)))
          {
            q_14 = ATgetFirst((ATermList) p_14);
            r_14 = (ATerm) ATgetNext((ATermList) p_14);
            {
              ATerm w_14 = NULL;
              ATerm x_14 = NULL;
              t = not_null(r_14);
              {
                t = foldr_2(t, h_61, i_61);
                {
                  x_14 = t;
                  if(((w_14 != NULL) && (w_14 != x_14)))
                    _fail(x_14);
                  else
                    w_14 = x_14;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_14), not_null(w_14));
                t = i_61(t);
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
    ATerm c_15 = NULL,e_15 = NULL;
    ATerm z_9;
    z_9 = t;
    {
      ATerm d_15 = NULL;
      t = Fst_0(t);
      {
        d_15 = t;
        if(((c_15 != NULL) && (c_15 != d_15)))
          _fail(d_15);
        else
          c_15 = d_15;
      }
    }
    t = z_9;
    {
      ATerm f_15 = NULL;
      t = Snd_0(t);
      {
        f_15 = t;
        if(((e_15 != NULL) && (e_15 != f_15)))
          _fail(f_15);
        else
          e_15 = f_15;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(c_15), not_null(e_15));
    }
    return(t);
  }
  t = foldr_2(t, z_0, a_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
  n_15 = t;
  k_15 :
  if(match_cons(n_15, sym_Call_2))
    {
      o_15 = ATgetArgument(n_15, 0);
      q_15 = ATgetArgument(n_15, 1);
      l_15 :
      if(match_cons(o_15, sym_SVar_1))
        {
          p_15 = ATgetArgument(o_15, 0);
          m_15 :
          if(((ATermList) q_15 == ATempty))
            {
              t = not_null(p_15);
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
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,i_16 = NULL,j_16 = NULL;
  w_15 = t;
  u_15 :
  if(match_cons(w_15, sym__2))
    {
      x_15 = ATgetArgument(w_15, 0);
      y_15 = ATgetArgument(w_15, 1);
      v_15 :
      if(((ATgetType(y_15) == AT_LIST) && ((ATermList) y_15 != ATempty)))
        {
          i_16 = ATgetFirst((ATermList) y_15);
          j_16 = (ATerm) ATgetNext((ATermList) y_15);
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_15), not_null(j_16));
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
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
  c_17 = t;
  z_16 :
  if(match_cons(c_17, sym__2))
    {
      d_17 = ATgetArgument(c_17, 0);
      e_17 = ATgetArgument(c_17, 1);
      a_17 :
      if(((ATgetType(e_17) == AT_LIST) && ((ATermList) e_17 != ATempty)))
        {
          f_17 = ATgetFirst((ATermList) e_17);
          i_17 = (ATerm) ATgetNext((ATermList) e_17);
          b_17 :
          if(match_cons(f_17, sym__2))
            {
              g_17 = ATgetArgument(f_17, 0);
              h_17 = ATgetArgument(f_17, 1);
              {
                ATerm k_17 = NULL;
                if(((d_17 != NULL) && (d_17 != g_17)))
                  _fail(g_17);
                else
                  d_17 = g_17;
                {
                  if(((k_17 != NULL) && (k_17 != h_17)))
                    _fail(h_17);
                  else
                    k_17 = h_17;
                  t = not_null(k_17);
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
  ATerm a_10 = t;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = a_10;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm e_75 (ATerm), ATerm f_75 (ATerm))
{
  ATerm s_17 = NULL;
  ATerm z_17 = NULL,a_18 = NULL;
  s_17 = t;
  {
    ATerm b_18 = NULL;
    t = not_null(s_17);
    {
      ATerm c_18 = NULL;
      t = e_75(t);
      {
        b_18 = t;
        {
          if(((z_17 != NULL) && (z_17 != b_18)))
            _fail(b_18);
          else
            z_17 = b_18;
          {
            t = f_75(t);
            {
              c_18 = t;
              if(((a_18 != NULL) && (a_18 != c_18)))
                _fail(c_18);
              else
                a_18 = c_18;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_17), not_null(a_18));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm e_74 (ATerm))
{
  ATerm g_18 (ATerm t)
  {
    ATerm c_10 = t;
    if((PushChoice() == 0))
      {
        t = e_74(t);
        PopChoice();
      }
    else
      {
        t = c_10;
        t = _all(t, g_18);
      }
    return(t);
  }
  t = g_18(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,s_18 = NULL;
  n_18 = t;
  m_18 :
  if(match_cons(n_18, sym__2))
    {
      o_18 = ATgetArgument(n_18, 0);
      p_18 = ATgetArgument(n_18, 1);
      {
        ATerm u_18 = NULL;
        if(((u_18 != NULL) && (u_18 != p_18)))
          _fail(p_18);
        else
          u_18 = p_18;
      }
    }
  else
    {
      if(match_cons(n_18, sym__3))
        {
          o_18 = ATgetArgument(n_18, 0);
          p_18 = ATgetArgument(n_18, 1);
          s_18 = ATgetArgument(n_18, 2);
          {
            ATerm a_19 = NULL;
            ATerm b_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_18), not_null(p_18));
            {
              t = zip_1(t, _id);
              {
                b_19 = t;
                if(((a_19 != NULL) && (a_19 != b_19)))
                  _fail(b_19);
                else
                  a_19 = b_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_19), not_null(s_18));
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm g_75 (ATerm), ATerm h_75 (ATerm))
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
  t = subs_args_0(t);
  {
    h_19 = t;
    g_19 :
    if(match_cons(h_19, sym__2))
      {
        i_19 = ATgetArgument(h_19, 0);
        j_19 = ATgetArgument(h_19, 1);
        {
          t = not_null(j_19);
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = not_null(i_19);
                return(t);
              }
              t = SubsVar_2(t, g_75, c_1);
              t = h_75(t);
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
ATerm substitute_1 (ATerm t, ATerm i_75 (ATerm))
{
  t = substitute_2(t, i_75, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm a_54 (ATerm), ATerm b_54 (ATerm))
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
  u_19 = t;
  t_19 :
  if(match_cons(u_19, sym_VarDec_2))
    {
      v_19 = ATgetArgument(u_19, 0);
      w_19 = ATgetArgument(u_19, 1);
      {
        ATerm z_19 = NULL;
        t = not_null(v_19);
        {
          ATerm b_20 = NULL;
          t = a_54(t);
          {
            z_19 = t;
            {
              t = not_null(w_19);
              {
                t = b_54(t);
                {
                  b_20 = t;
                  t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(z_19), not_null(b_20));
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
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL;
  y_20 = t;
  w_20 :
  if(((ATgetType(y_20) == AT_LIST) && ((ATermList) y_20 != ATempty)))
    {
      z_20 = ATgetFirst((ATermList) y_20);
      k_21 = (ATerm) ATgetNext((ATermList) y_20);
      x_20 :
      if(match_cons(z_20, sym_SDef_3))
        {
          a_21 = ATgetArgument(z_20, 0);
          i_21 = ATgetArgument(z_20, 1);
          j_21 = ATgetArgument(z_20, 2);
          {
            ATerm p_21 = NULL,b_22 = NULL,c_22 = NULL,a_23 = NULL;
            ATerm d_10;
            d_10 = t;
            {
              ATerm d_22 = NULL;
              t = not_null(i_21);
              {
                ATerm k_22 = NULL;
                ATerm d_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, d_1);
                {
                  d_22 = t;
                  {
                    if(((p_21 != NULL) && (p_21 != d_22)))
                      _fail(d_22);
                    else
                      p_21 = d_22;
                    {
                      t = not_null(p_21);
                      {
                        ATerm z_22 = NULL;
                        ATerm e_1 (ATerm t)
                        {
                          ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
                          f_22 = t;
                          j_20 :
                          if(match_cons(f_22, sym_VarDec_2))
                            {
                              g_22 = ATgetArgument(f_22, 0);
                              h_22 = ATgetArgument(f_22, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_22)), (ATerm) ATempty);
                            }
                          else
                            _fail(t);
                          return(t);
                        }
                        t = map_1(t, e_1);
                        {
                          k_22 = t;
                          {
                            if(((b_22 != NULL) && (b_22 != k_22)))
                              _fail(k_22);
                            else
                              b_22 = k_22;
                            {
                              t = not_null(y_20);
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL;
                                  l_22 = t;
                                  t_20 :
                                  if(match_cons(l_22, sym_SDef_3))
                                    {
                                      m_22 = ATgetArgument(l_22, 0);
                                      n_22 = ATgetArgument(l_22, 1);
                                      o_22 = ATgetArgument(l_22, 2);
                                      {
                                        ATerm r_22 = NULL;
                                        ATerm y_22 = NULL;
                                        t = not_null(n_22);
                                        {
                                          ATerm g_1 (ATerm t)
                                          {
                                            ATerm s_22 = NULL,t_22 = NULL,w_22 = NULL;
                                            s_22 = t;
                                            r_20 :
                                            if(match_cons(s_22, sym_VarDec_2))
                                              {
                                                t_22 = ATgetArgument(s_22, 0);
                                                w_22 = ATgetArgument(s_22, 1);
                                                t = not_null(t_22);
                                              }
                                            else
                                              _fail(t);
                                            return(t);
                                          }
                                          t = map_1(t, g_1);
                                          {
                                            y_22 = t;
                                            if(((r_22 != NULL) && (r_22 != y_22)))
                                              _fail(y_22);
                                            else
                                              r_22 = y_22;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(r_22), not_null(b_22), not_null(o_22));
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
                                  z_22 = t;
                                  if(((c_22 != NULL) && (c_22 != z_22)))
                                    _fail(z_22);
                                  else
                                    c_22 = z_22;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = d_10;
            {
              ATerm b_23 = NULL;
              t = not_null(c_22);
              {
                t = choices_0(t);
                {
                  b_23 = t;
                  if(((a_23 != NULL) && (a_23 != b_23)))
                    _fail(b_23);
                  else
                    a_23 = b_23;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(a_21), not_null(p_21), not_null(a_23));
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
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
  o_23 = t;
  m_23 :
  if(((ATgetType(o_23) == AT_LIST) && ((ATermList) o_23 != ATempty)))
    {
      p_23 = ATgetFirst((ATermList) o_23);
      q_23 = (ATerm) ATgetNext((ATermList) o_23);
      n_23 :
      if(((ATermList) q_23 == ATempty))
        {
          t = not_null(p_23);
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
  ATerm e_10 = t;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      PopChoice();
    }
  else
    {
      t = e_10;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL;
  x_23 = t;
  v_23 :
  if(match_cons(x_23, sym__2))
    {
      y_23 = ATgetArgument(x_23, 0);
      b_24 = ATgetArgument(x_23, 1);
      w_23 :
      if(match_cons(y_23, sym__2))
        {
          z_23 = ATgetArgument(y_23, 0);
          a_24 = ATgetArgument(y_23, 1);
          {
            ATerm f_24 = NULL;
            ATerm g_24 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_23), not_null(a_24));
            {
              t = Definitions_0(t);
              {
                g_24 = t;
                if(((f_24 != NULL) && (f_24 != g_24)))
                  _fail(g_24);
                else
                  f_24 = g_24;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_24), not_null(b_24));
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
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  b_25 = t;
  z_24 :
  if(match_cons(b_25, sym_ExplodeCong_2))
    {
      c_25 = ATgetArgument(b_25, 0);
      a_25 = ATgetArgument(b_25, 1);
      {
        ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
        ATerm j_25 = NULL;
        ATerm k_25 = NULL;
        t = new_0(t);
        {
          j_25 = t;
          {
            if(((f_25 != NULL) && (f_25 != j_25)))
              _fail(j_25);
            else
              f_25 = j_25;
            {
              ATerm l_25 = NULL;
              t = new_0(t);
              {
                k_25 = t;
                {
                  if(((g_25 != NULL) && (g_25 != k_25)))
                    _fail(k_25);
                  else
                    g_25 = k_25;
                  {
                    ATerm m_25 = NULL;
                    t = new_0(t);
                    {
                      l_25 = t;
                      {
                        if(((h_25 != NULL) && (h_25 != l_25)))
                          _fail(l_25);
                        else
                          h_25 = l_25;
                        {
                          t = new_0(t);
                          {
                            m_25 = t;
                            if(((i_25 != NULL) && (i_25 != m_25)))
                              _fail(m_25);
                            else
                              i_25 = m_25;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(i_25)), not_null(h_25)), not_null(g_25)), not_null(f_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_25)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(c_25), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_25))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(a_25), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_25))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_25))), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_25)))))));
      }
    }
  else
    {
      if(match_cons(b_25, sym_Build_1))
        {
          c_25 = ATgetArgument(b_25, 0);
          {
            ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
            ATerm s_25 = NULL;
            ATerm w_25 = NULL;
            t = new_0(t);
            {
              s_25 = t;
              {
                if(((q_25 != NULL) && (q_25 != s_25)))
                  _fail(s_25);
                else
                  q_25 = s_25;
                {
                  t = not_null(c_25);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
                      t_25 = t;
                      s_24 :
                      if(match_cons(t_25, sym_Explode_2))
                        {
                          u_25 = ATgetArgument(t_25, 0);
                          v_25 = ATgetArgument(t_25, 1);
                          {
                            if(((o_25 != NULL) && (o_25 != u_25)))
                              _fail(u_25);
                            else
                              o_25 = u_25;
                            {
                              if(((p_25 != NULL) && (p_25 != v_25)))
                                _fail(v_25);
                              else
                                p_25 = v_25;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25));
                            }
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = oncetd_1(t, h_1);
                    {
                      w_25 = t;
                      if(((r_25 != NULL) && (r_25 != w_25)))
                        _fail(w_25);
                      else
                        r_25 = w_25;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_25)), not_null(o_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_25)))));
          }
        }
      else
        {
          if(match_cons(b_25, sym_Match_1))
            {
              c_25 = ATgetArgument(b_25, 0);
              {
                ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
                ATerm d_26 = NULL;
                ATerm e_26 = NULL;
                t = new_0(t);
                {
                  d_26 = t;
                  {
                    if(((a_26 != NULL) && (a_26 != d_26)))
                      _fail(d_26);
                    else
                      a_26 = d_26;
                    {
                      ATerm i_26 = NULL;
                      t = new_0(t);
                      {
                        e_26 = t;
                        {
                          if(((b_26 != NULL) && (b_26 != e_26)))
                            _fail(e_26);
                          else
                            b_26 = e_26;
                          {
                            t = not_null(c_25);
                            {
                              ATerm i_1 (ATerm t)
                              {
                                ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
                                f_26 = t;
                                x_24 :
                                if(match_cons(f_26, sym_Explode_2))
                                  {
                                    g_26 = ATgetArgument(f_26, 0);
                                    h_26 = ATgetArgument(f_26, 1);
                                    {
                                      if(((y_25 != NULL) && (y_25 != g_26)))
                                        _fail(g_26);
                                      else
                                        y_25 = g_26;
                                      {
                                        if(((z_25 != NULL) && (z_25 != h_26)))
                                          _fail(h_26);
                                        else
                                          z_25 = h_26;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_26));
                                      }
                                    }
                                  }
                                else
                                  _fail(t);
                                return(t);
                              }
                              t = oncetd_1(t, i_1);
                              {
                                i_26 = t;
                                if(((c_26 != NULL) && (c_26 != i_26)))
                                  _fail(i_26);
                                else
                                  c_26 = i_26;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_26)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_26))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_26)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_26)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, not_null(z_25)), not_null(y_25)))))));
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
  ATerm i_27 = NULL,j_27 = NULL;
  i_27 = t;
  h_27 :
  if(match_cons(i_27, sym_Match_1))
    {
      j_27 = ATgetArgument(i_27, 0);
      {
        ATerm f_10 = t;
        if((PushChoice() == 0))
          {
            ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
            ATerm o_27 = NULL;
            ATerm r_27 = NULL;
            t = new_0(t);
            {
              o_27 = t;
              {
                if(((m_27 != NULL) && (m_27 != o_27)))
                  _fail(o_27);
                else
                  m_27 = o_27;
                {
                  t = not_null(j_27);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm p_27 = NULL,q_27 = NULL;
                      p_27 = t;
                      c_27 :
                      if(match_cons(p_27, sym_RootApp_1))
                        {
                          q_27 = ATgetArgument(p_27, 0);
                          {
                            if(((l_27 != NULL) && (l_27 != q_27)))
                              _fail(q_27);
                            else
                              l_27 = q_27;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_27));
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = pat_td_1(t, j_1);
                    {
                      r_27 = t;
                      if(((n_27 != NULL) && (n_27 != r_27)))
                        _fail(r_27);
                      else
                        n_27 = r_27;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_27))), not_null(l_27))));
            PopChoice();
          }
        else
          {
            t = f_10;
            {
              ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
              ATerm z_27 = NULL;
              t = not_null(j_27);
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
                  w_27 = t;
                  f_27 :
                  if(match_cons(w_27, sym_App_2))
                    {
                      x_27 = ATgetArgument(w_27, 0);
                      y_27 = ATgetArgument(w_27, 1);
                      {
                        if(((t_27 != NULL) && (t_27 != x_27)))
                          _fail(x_27);
                        else
                          t_27 = x_27;
                        {
                          if(((u_27 != NULL) && (u_27 != y_27)))
                            _fail(y_27);
                          else
                            u_27 = y_27;
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
                  z_27 = t;
                  if(((v_27 != NULL) && (v_27 != z_27)))
                    _fail(z_27);
                  else
                    v_27 = z_27;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_27)), (ATerm) ATmakeAppl(sym_BA_2, not_null(t_27), not_null(u_27)));
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
  ATerm p_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
  p_28 = t;
  n_28 :
  if(match_cons(p_28, sym_Match_1))
    {
      u_28 = ATgetArgument(p_28, 0);
      o_28 :
      if(match_cons(u_28, sym_RootApp_1))
        {
          v_28 = ATgetArgument(u_28, 0);
          t = not_null(v_28);
        }
      else
        {
          if(match_cons(u_28, sym_App_2))
            {
              v_28 = ATgetArgument(u_28, 0);
              w_28 = ATgetArgument(u_28, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(v_28), not_null(w_28));
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
  ATerm k_29 = NULL,l_29 = NULL;
  k_29 = t;
  j_29 :
  if(match_cons(k_29, sym_Match_1))
    {
      l_29 = ATgetArgument(k_29, 0);
      {
        ATerm n_29 = NULL,o_29 = NULL;
        ATerm s_29 = NULL;
        t = not_null(l_29);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
            p_29 = t;
            g_29 :
            if(match_cons(p_29, sym_RootApp_1))
              {
                q_29 = ATgetArgument(p_29, 0);
                h_29 :
                if(match_cons(q_29, sym_Match_1))
                  {
                    r_29 = ATgetArgument(q_29, 0);
                    {
                      if(((n_29 != NULL) && (n_29 != r_29)))
                        _fail(r_29);
                      else
                        n_29 = r_29;
                      t = not_null(n_29);
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
            s_29 = t;
            if(((o_29 != NULL) && (o_29 != s_29)))
              _fail(s_29);
            else
              o_29 = s_29;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(o_29));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL;
  h_30 = t;
  g_30 :
  if(match_cons(h_30, sym_Build_1))
    {
      i_30 = ATgetArgument(h_30, 0);
      {
        ATerm k_10 = t;
        if((PushChoice() == 0))
          {
            ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
            ATerm n_30 = NULL;
            ATerm q_30 = NULL;
            t = new_0(t);
            {
              n_30 = t;
              {
                if(((l_30 != NULL) && (l_30 != n_30)))
                  _fail(n_30);
                else
                  l_30 = n_30;
                {
                  t = not_null(i_30);
                  {
                    ATerm m_1 (ATerm t)
                    {
                      ATerm o_30 = NULL,p_30 = NULL;
                      o_30 = t;
                      a_30 :
                      if(match_cons(o_30, sym_RootApp_1))
                        {
                          p_30 = ATgetArgument(o_30, 0);
                          {
                            if(((k_30 != NULL) && (k_30 != p_30)))
                              _fail(p_30);
                            else
                              k_30 = p_30;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_30));
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = pat_td_1(t, m_1);
                    {
                      q_30 = t;
                      if(((m_30 != NULL) && (m_30 != q_30)))
                        _fail(q_30);
                      else
                        m_30 = q_30;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_30), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_30))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_30))));
            PopChoice();
          }
        else
          {
            t = k_10;
            {
              ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL;
              ATerm w_30 = NULL;
              ATerm a_31 = NULL;
              t = new_0(t);
              {
                w_30 = t;
                {
                  if(((u_30 != NULL) && (u_30 != w_30)))
                    _fail(w_30);
                  else
                    u_30 = w_30;
                  {
                    t = not_null(i_30);
                    {
                      ATerm n_1 (ATerm t)
                      {
                        ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL;
                        x_30 = t;
                        e_30 :
                        if(match_cons(x_30, sym_App_2))
                          {
                            y_30 = ATgetArgument(x_30, 0);
                            z_30 = ATgetArgument(x_30, 1);
                            {
                              if(((s_30 != NULL) && (s_30 != y_30)))
                                _fail(y_30);
                              else
                                s_30 = y_30;
                              {
                                if(((t_30 != NULL) && (t_30 != z_30)))
                                  _fail(z_30);
                                else
                                  t_30 = z_30;
                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_30));
                              }
                            }
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = pat_td_1(t, n_1);
                      {
                        a_31 = t;
                        if(((v_30 != NULL) && (v_30 != a_31)))
                          _fail(a_31);
                        else
                          v_30 = a_31;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(s_30), not_null(t_30), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_30)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_30))));
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
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
  s_31 = t;
  l_31 :
  if(match_cons(s_31, sym_Build_1))
    {
      t_31 = ATgetArgument(s_31, 0);
      m_31 :
      if(match_cons(t_31, sym_RootApp_1))
        {
          u_31 = ATgetArgument(t_31, 0);
          t = not_null(u_31);
        }
      else
        {
          if(match_cons(t_31, sym_App_2))
            {
              u_31 = ATgetArgument(t_31, 0);
              v_31 = ATgetArgument(t_31, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_31)), not_null(u_31));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Explode_2 (ATerm t, ATerm z_51 (ATerm), ATerm a_52 (ATerm))
{
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL;
  s_32 = t;
  q_32 :
  if(match_cons(s_32, sym_Explode_2))
    {
      t_32 = ATgetArgument(s_32, 0);
      u_32 = ATgetArgument(s_32, 1);
      {
        ATerm x_32 = NULL;
        t = not_null(t_32);
        {
          ATerm z_32 = NULL;
          t = z_51(t);
          {
            x_32 = t;
            {
              t = not_null(u_32);
              {
                t = a_52(t);
                {
                  z_32 = t;
                  t = (ATerm) ATmakeAppl(sym_Explode_2, not_null(x_32), not_null(z_32));
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
ATerm Op_2 (ATerm t, ATerm i_53 (ATerm), ATerm j_53 (ATerm))
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
  w_33 = t;
  v_33 :
  if(match_cons(w_33, sym_Op_2))
    {
      x_33 = ATgetArgument(w_33, 0);
      y_33 = ATgetArgument(w_33, 1);
      {
        ATerm b_34 = NULL;
        t = not_null(x_33);
        {
          ATerm d_34 = NULL;
          t = i_53(t);
          {
            b_34 = t;
            {
              t = not_null(y_33);
              {
                t = j_53(t);
                {
                  d_34 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(b_34), not_null(d_34));
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
ATerm pat_td_1 (ATerm t, ATerm y_78 (ATerm))
{
  ATerm l_10 = t;
  if((PushChoice() == 0))
    {
      t = y_78(t);
      PopChoice();
    }
  else
    {
      t = l_10;
      {
        ATerm m_10 = t;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              ATerm p_1 (ATerm t)
              {
                t = pat_td_1(t, y_78);
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
            t = m_10;
            {
              ATerm o_10 = t;
              if((PushChoice() == 0))
                {
                  ATerm q_1 (ATerm t)
                  {
                    t = pat_td_1(t, y_78);
                    return(t);
                  }
                  t = Explode_2(t, _id, q_1);
                  PopChoice();
                }
              else
                {
                  t = o_10;
                  {
                    ATerm r_1 (ATerm t)
                    {
                      t = pat_td_1(t, y_78);
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
  ATerm t_34 = NULL,u_34 = NULL;
  t_34 = t;
  s_34 :
  if(match_cons(t_34, sym_Build_1))
    {
      u_34 = ATgetArgument(t_34, 0);
      {
        ATerm s_10 = t;
        if((PushChoice() == 0))
          {
            ATerm w_34 = NULL,x_34 = NULL;
            ATerm b_35 = NULL;
            t = not_null(u_34);
            {
              ATerm s_1 (ATerm t)
              {
                ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
                y_34 = t;
                l_34 :
                if(match_cons(y_34, sym_RootApp_1))
                  {
                    z_34 = ATgetArgument(y_34, 0);
                    m_34 :
                    if(match_cons(z_34, sym_Build_1))
                      {
                        a_35 = ATgetArgument(z_34, 0);
                        {
                          if(((w_34 != NULL) && (w_34 != a_35)))
                            _fail(a_35);
                          else
                            w_34 = a_35;
                          t = not_null(w_34);
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
                b_35 = t;
                if(((x_34 != NULL) && (x_34 != b_35)))
                  _fail(b_35);
                else
                  x_34 = b_35;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(x_34));
            PopChoice();
          }
        else
          {
            t = s_10;
            {
              ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
              ATerm k_35 = NULL;
              t = not_null(u_34);
              {
                ATerm t_1 (ATerm t)
                {
                  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL;
                  g_35 = t;
                  p_34 :
                  if(match_cons(g_35, sym_App_2))
                    {
                      h_35 = ATgetArgument(g_35, 0);
                      j_35 = ATgetArgument(g_35, 1);
                      q_34 :
                      if(match_cons(h_35, sym_Build_1))
                        {
                          i_35 = ATgetArgument(h_35, 0);
                          {
                            if(((e_35 != NULL) && (e_35 != i_35)))
                              _fail(i_35);
                            else
                              e_35 = i_35;
                            {
                              if(((d_35 != NULL) && (d_35 != j_35)))
                                _fail(j_35);
                              else
                                d_35 = j_35;
                              t = not_null(e_35);
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
                  k_35 = t;
                  if(((f_35 != NULL) && (f_35 != k_35)))
                    _fail(k_35);
                  else
                    f_35 = k_35;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(f_35));
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
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL;
  q_36 = t;
  d_36 :
  if(match_cons(q_36, sym_InfixApp_3))
    {
      r_36 = ATgetArgument(q_36, 0);
      i_36 = ATgetArgument(q_36, 1);
      h_36 = ATgetArgument(q_36, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(i_36), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, not_null(h_36)), not_null(r_36))));
    }
  else
    {
      if(match_cons(q_36, sym_BAM_3))
        {
          r_36 = ATgetArgument(q_36, 0);
          i_36 = ATgetArgument(q_36, 1);
          h_36 = ATgetArgument(q_36, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(h_36))), not_null(r_36)), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_36))));
        }
      else
        {
          if(match_cons(q_36, sym_AM_2))
            {
              r_36 = ATgetArgument(q_36, 0);
              i_36 = ATgetArgument(q_36, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_36), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_36)));
            }
          else
            {
              if(match_cons(q_36, sym_MA_2))
                {
                  r_36 = ATgetArgument(q_36, 0);
                  i_36 = ATgetArgument(q_36, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_36)), not_null(i_36));
                }
              else
                {
                  if(match_cons(q_36, sym_BA_2))
                    {
                      r_36 = ATgetArgument(q_36, 0);
                      i_36 = ATgetArgument(q_36, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_36)), not_null(r_36));
                    }
                  else
                    {
                      if(match_cons(q_36, sym_Lets_2))
                        {
                          r_36 = ATgetArgument(q_36, 0);
                          i_36 = ATgetArgument(q_36, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(r_36), not_null(i_36));
                        }
                      else
                        {
                          if(match_cons(q_36, sym_LChoices_1))
                            {
                              r_36 = ATgetArgument(q_36, 0);
                              e_36 :
                              if(((ATgetType(r_36) == AT_LIST) && ((ATermList) r_36 != ATempty)))
                                {
                                  j_36 = ATgetFirst((ATermList) r_36);
                                  p_36 = (ATerm) ATgetNext((ATermList) r_36);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(j_36), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(p_36)));
                                }
                              else
                                {
                                  if(((ATermList) r_36 == ATempty))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_Fail_0);
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(q_36, sym_Choices_1))
                                {
                                  r_36 = ATgetArgument(q_36, 0);
                                  f_36 :
                                  if(((ATgetType(r_36) == AT_LIST) && ((ATermList) r_36 != ATempty)))
                                    {
                                      j_36 = ATgetFirst((ATermList) r_36);
                                      p_36 = (ATerm) ATgetNext((ATermList) r_36);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(j_36), (ATerm) ATmakeAppl(sym_Choices_1, not_null(p_36)));
                                    }
                                  else
                                    {
                                      if(((ATermList) r_36 == ATempty))
                                        {
                                          t = (ATerm) ATmakeAppl(sym_Fail_0);
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(q_36, sym_Seqs_1))
                                    {
                                      r_36 = ATgetArgument(q_36, 0);
                                      g_36 :
                                      if(((ATgetType(r_36) == AT_LIST) && ((ATermList) r_36 != ATempty)))
                                        {
                                          j_36 = ATgetFirst((ATermList) r_36);
                                          p_36 = (ATerm) ATgetNext((ATermList) r_36);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_36), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(p_36)));
                                        }
                                      else
                                        {
                                          if(((ATermList) r_36 == ATempty))
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
ATerm repeat_2 (ATerm t, ATerm e_64 (ATerm), ATerm f_64 (ATerm))
{
  ATerm c_41 (ATerm t)
  {
    ATerm t_10 = t;
    if((PushChoice() == 0))
      {
        t = e_64(t);
        t = c_41(t);
        PopChoice();
      }
    else
      {
        t = t_10;
        t = f_64(t);
      }
    return(t);
  }
  t = c_41(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm h_64 (ATerm))
{
  t = repeat_2(t, h_64, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm e_41 = NULL;
  e_41 = t;
  d_41 :
  if(!(match_cons(e_41, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm u_10 = t;
  if((PushChoice() == 0))
    {
      ATerm u_1 (ATerm t)
      {
        ATerm v_10 = t;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = v_10;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, u_1);
      PopChoice();
      _fail(t);
    }
  else
    t = u_10;
  return(t);
}
ATerm App_2 (ATerm t, ATerm t_51 (ATerm), ATerm u_51 (ATerm))
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL;
  j_41 = t;
  i_41 :
  if(match_cons(j_41, sym_App_2))
    {
      k_41 = ATgetArgument(j_41, 0);
      l_41 = ATgetArgument(j_41, 1);
      {
        ATerm o_41 = NULL;
        t = not_null(k_41);
        {
          ATerm t_44 = NULL;
          t = t_51(t);
          {
            o_41 = t;
            {
              t = not_null(l_41);
              {
                t = u_51(t);
                {
                  t_44 = t;
                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(o_41), not_null(t_44));
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
ATerm Con_3 (ATerm t, ATerm q_51 (ATerm), ATerm r_51 (ATerm), ATerm s_51 (ATerm))
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL;
  f_45 = t;
  e_45 :
  if(match_cons(f_45, sym_Con_3))
    {
      g_45 = ATgetArgument(f_45, 0);
      h_45 = ATgetArgument(f_45, 1);
      i_45 = ATgetArgument(f_45, 2);
      {
        ATerm m_45 = NULL;
        t = not_null(g_45);
        {
          ATerm o_45 = NULL;
          t = q_51(t);
          {
            m_45 = t;
            {
              t = not_null(h_45);
              {
                ATerm q_45 = NULL;
                t = r_51(t);
                {
                  o_45 = t;
                  {
                    t = not_null(i_45);
                    {
                      t = s_51(t);
                      {
                        q_45 = t;
                        t = (ATerm) ATmakeAppl(sym_Con_3, not_null(m_45), not_null(o_45), not_null(q_45));
                      }
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
  ATerm w_10 = t;
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
    t = w_10;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL;
  a_46 = t;
  y_45 :
  if(match_cons(a_46, sym_SRule_1))
    {
      b_46 = ATgetArgument(a_46, 0);
      z_45 :
      if(match_cons(b_46, sym_StratRule_3))
        {
          c_46 = ATgetArgument(b_46, 0);
          d_46 = ATgetArgument(b_46, 1);
          e_46 = ATgetArgument(b_46, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(d_46)), (ATerm) ATmakeAppl(sym_Where_1, not_null(e_46))), not_null(c_46)));
        }
      else
        {
          if(match_cons(b_46, sym_Rule_3))
            {
              c_46 = ATgetArgument(b_46, 0);
              d_46 = ATgetArgument(b_46, 1);
              e_46 = ATgetArgument(b_46, 2);
              {
                t = not_null(c_46);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(d_46);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(d_46))), (ATerm) ATmakeAppl(sym_Where_1, not_null(e_46))), (ATerm) ATmakeAppl(sym_Match_1, not_null(c_46))));
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
ATerm Scope_2 (ATerm t, ATerm x_54 (ATerm), ATerm y_54 (ATerm))
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
  r_46 = t;
  q_46 :
  if(match_cons(r_46, sym_Scope_2))
    {
      s_46 = ATgetArgument(r_46, 0);
      t_46 = ATgetArgument(r_46, 1);
      {
        ATerm w_46 = NULL;
        t = not_null(s_46);
        {
          ATerm y_46 = NULL;
          t = x_54(t);
          {
            w_46 = t;
            {
              t = not_null(t_46);
              {
                t = y_54(t);
                {
                  y_46 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_46), not_null(y_46));
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
ATerm oncetd_1 (ATerm t, ATerm q_73 (ATerm))
{
  ATerm d_47 (ATerm t)
  {
    ATerm y_10 = t;
    if((PushChoice() == 0))
      {
        t = q_73(t);
        PopChoice();
      }
    else
      {
        t = y_10;
        t = _one(t, d_47);
      }
    return(t);
  }
  t = d_47(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL;
  s_47 = t;
  q_47 :
  if(match_cons(s_47, sym_SRule_1))
    {
      t_47 = ATgetArgument(s_47, 0);
      r_47 :
      if(match_cons(t_47, sym_Rule_3))
        {
          u_47 = ATgetArgument(t_47, 0);
          v_47 = ATgetArgument(t_47, 1);
          w_47 = ATgetArgument(t_47, 2);
          {
            ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL;
            ATerm i_48 = NULL;
            ATerm o_48 = NULL;
            t = new_0(t);
            {
              i_48 = t;
              {
                if(((f_48 != NULL) && (f_48 != i_48)))
                  _fail(i_48);
                else
                  f_48 = i_48;
                {
                  t = not_null(u_47);
                  {
                    ATerm w_48 = NULL;
                    ATerm w_1 (ATerm t)
                    {
                      ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL;
                      j_48 = t;
                      h_47 :
                      if(match_cons(j_48, sym_Con_3))
                        {
                          k_48 = ATgetArgument(j_48, 0);
                          m_48 = ATgetArgument(j_48, 1);
                          n_48 = ATgetArgument(j_48, 2);
                          i_47 :
                          if(match_cons(k_48, sym_Var_1))
                            {
                              l_48 = ATgetArgument(k_48, 0);
                              {
                                if(((e_48 != NULL) && (e_48 != l_48)))
                                  _fail(l_48);
                                else
                                  e_48 = l_48;
                                {
                                  if(((c_48 != NULL) && (c_48 != m_48)))
                                    _fail(m_48);
                                  else
                                    c_48 = m_48;
                                  {
                                    if(((a_48 != NULL) && (a_48 != n_48)))
                                      _fail(n_48);
                                    else
                                      a_48 = n_48;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_48));
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
                      o_48 = t;
                      {
                        if(((g_48 != NULL) && (g_48 != o_48)))
                          _fail(o_48);
                        else
                          g_48 = o_48;
                        {
                          t = not_null(v_47);
                          {
                            ATerm x_1 (ATerm t)
                            {
                              ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL;
                              p_48 = t;
                              l_47 :
                              if(match_cons(p_48, sym_Con_3))
                                {
                                  q_48 = ATgetArgument(p_48, 0);
                                  s_48 = ATgetArgument(p_48, 1);
                                  t_48 = ATgetArgument(p_48, 2);
                                  m_47 :
                                  if(match_cons(q_48, sym_Var_1))
                                    {
                                      r_48 = ATgetArgument(q_48, 0);
                                      n_47 :
                                      if(match_cons(t_48, sym_Call_2))
                                        {
                                          u_48 = ATgetArgument(t_48, 0);
                                          v_48 = ATgetArgument(t_48, 1);
                                          o_47 :
                                          if(((ATermList) v_48 == ATempty))
                                            {
                                              {
                                                if(((e_48 != NULL) && (e_48 != r_48)))
                                                  _fail(r_48);
                                                else
                                                  e_48 = r_48;
                                                {
                                                  if(((d_48 != NULL) && (d_48 != s_48)))
                                                    _fail(s_48);
                                                  else
                                                    d_48 = s_48;
                                                  {
                                                    if(((b_48 != NULL) && (b_48 != u_48)))
                                                      _fail(u_48);
                                                    else
                                                      b_48 = u_48;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_48));
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
                              w_48 = t;
                              if(((h_48 != NULL) && (h_48 != w_48)))
                                _fail(w_48);
                              else
                                h_48 = w_48;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_48)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_48), not_null(h_48), (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_47), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(b_48), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(c_48), not_null(d_48), (ATerm) ATmakeAppl(sym_Id_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(e_48)), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_48)))))));
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
    ATerm z_10 = t;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      {
        t = z_10;
        {
          ATerm c_11 = t;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              PopChoice();
            }
          else
            {
              t = c_11;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, y_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm a_72 (ATerm))
{
  ATerm e_49 (ATerm t)
  {
    t = a_72(t);
    t = _all(t, e_49);
    return(t);
  }
  t = e_49(t);
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
        ATerm d_11 = t;
        if((PushChoice() == 0))
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = d_11;
            {
              ATerm g_11 = t;
              if((PushChoice() == 0))
                {
                  ATerm h_11 = t;
                  if((PushChoice() == 0))
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = h_11;
                      {
                        ATerm i_11 = t;
                        if((PushChoice() == 0))
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = i_11;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = g_11;
                  {
                    ATerm n_11 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm o_11 = t;
                        if((PushChoice() == 0))
                          {
                            t = Mapp0_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = o_11;
                            {
                              ATerm s_11 = t;
                              if((PushChoice() == 0))
                                {
                                  t = Mapp1_0(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = s_11;
                                  t = Mapp2_0(t);
                                }
                            }
                          }
                        PopChoice();
                      }
                    else
                      {
                        t = n_11;
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
  ATerm g_49 = NULL;
  g_49 = t;
  f_49 :
  if(!(match_cons(g_49, sym__0)))
    _fail(t);
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm o_49 = NULL;
  ATerm q_49 = NULL,r_49 = NULL,z_49 = NULL;
  o_49 = t;
  {
    ATerm t_11;
    t_11 = t;
    {
      ATerm s_49 = NULL;
      ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL;
      t = not_null(o_49);
      {
        s_49 = t;
        {
          t = SSL_explode_term(not_null(s_49));
          {
            u_49 = t;
            k_49 :
            if(match_cons(u_49, sym__2))
              {
                v_49 = ATgetArgument(u_49, 0);
                w_49 = ATgetArgument(u_49, 1);
                l_49 :
                if(match_string(v_49, ""))
                  {
                    m_49 :
                    if(((ATgetType(w_49) == AT_LIST) && ((ATermList) w_49 != ATempty)))
                      {
                        x_49 = ATgetFirst((ATermList) w_49);
                        y_49 = (ATerm) ATgetNext((ATermList) w_49);
                        {
                          if(((q_49 != NULL) && (q_49 != x_49)))
                            _fail(x_49);
                          else
                            q_49 = x_49;
                          if(((r_49 != NULL) && (r_49 != y_49)))
                            _fail(y_49);
                          else
                            r_49 = y_49;
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
    t = t_11;
    {
      t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), not_null(r_49));
      {
        z_49 = t;
        t = not_null(z_49);
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm n_50 = NULL;
  ATerm p_50 = NULL,q_50 = NULL;
  n_50 = t;
  {
    ATerm r_50 = NULL;
    ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL;
    t = not_null(n_50);
    {
      r_50 = t;
      {
        t = SSL_explode_term(not_null(r_50));
        {
          t_50 = t;
          i_50 :
          if(match_cons(t_50, sym__2))
            {
              u_50 = ATgetArgument(t_50, 0);
              v_50 = ATgetArgument(t_50, 1);
              l_50 :
              if(match_string(u_50, ""))
                {
                  m_50 :
                  if(((ATgetType(v_50) == AT_LIST) && ((ATermList) v_50 != ATempty)))
                    {
                      w_50 = ATgetFirst((ATermList) v_50);
                      x_50 = (ATerm) ATgetNext((ATermList) v_50);
                      {
                        if(((q_50 != NULL) && (q_50 != w_50)))
                          _fail(w_50);
                        else
                          q_50 = w_50;
                        if(((p_50 != NULL) && (p_50 != x_50)))
                          _fail(x_50);
                        else
                          p_50 = x_50;
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
    t = not_null(q_50);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm j_71 (ATerm))
{
  ATerm j_51 = NULL,l_51 = NULL;
  ATerm n_51 (ATerm t)
  {
    ATerm u_11 = t;
    if((PushChoice() == 0))
      {
        ATerm f_51 = NULL,h_51 = NULL;
        ATerm v_11;
        v_11 = t;
        {
          ATerm g_51 = NULL;
          t = map_1(t, Thd_0);
          {
            t = j_71(t);
            {
              g_51 = t;
              if(((f_51 != NULL) && (f_51 != g_51)))
                _fail(g_51);
              else
                f_51 = g_51;
            }
          }
        }
        t = v_11;
        {
          ATerm i_51 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = n_51(t);
            {
              i_51 = t;
              if(((h_51 != NULL) && (h_51 != i_51)))
                _fail(i_51);
              else
                h_51 = i_51;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(h_51)), not_null(f_51));
        }
        PopChoice();
      }
    else
      {
        t = u_11;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = n_51(t);
  {
    ATerm w_11;
    w_11 = t;
    {
      ATerm k_51 = NULL;
      k_51 = t;
      if(((j_51 != NULL) && (j_51 != k_51)))
        _fail(k_51);
      else
        j_51 = k_51;
    }
    t = w_11;
    {
      t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), not_null(j_51));
      {
        l_51 = t;
        t = not_null(l_51);
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm d_52 = NULL;
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL;
  d_52 = t;
  {
    ATerm i_52 = NULL;
    ATerm j_52 = NULL;
    t = new_0(t);
    {
      i_52 = t;
      {
        if(((f_52 != NULL) && (f_52 != i_52)))
          _fail(i_52);
        else
          f_52 = i_52;
        {
          ATerm k_52 = NULL;
          t = new_0(t);
          {
            j_52 = t;
            {
              if(((g_52 != NULL) && (g_52 != j_52)))
                _fail(j_52);
              else
                g_52 = j_52;
              {
                t = new_0(t);
                {
                  k_52 = t;
                  if(((h_52 != NULL) && (h_52 != k_52)))
                    _fail(k_52);
                  else
                    h_52 = k_52;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_52)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_52)), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_52)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_52))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(f_52), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATempty))), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATempty)))), not_null(g_52), (ATerm)ATmakeAppl(sym_Var_1, not_null(g_52)), not_null(h_52), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_52)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL;
  r_52 = t;
  q_52 :
  if(match_cons(r_52, sym__2))
    {
      s_52 = ATgetArgument(r_52, 0);
      t_52 = ATgetArgument(r_52, 1);
      {
        ATerm x_11 = t;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(s_52), not_null(t_52));
            PopChoice();
          }
        else
          {
            t = x_11;
            t = SSL_subtr(not_null(s_52), not_null(t_52));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL,c_53 = NULL;
  z_52 = t;
  y_52 :
  if(match_cons(z_52, sym__2))
    {
      a_53 = ATgetArgument(z_52, 0);
      c_53 = ATgetArgument(z_52, 1);
      {
        ATerm y_11;
        y_11 = t;
        {
          ATerm z_11 = t;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(a_53), not_null(c_53));
              PopChoice();
            }
          else
            {
              t = z_11;
              t = SSL_gtr(not_null(a_53), not_null(c_53));
            }
        }
        t = y_11;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm l_53 = NULL;
  ATerm a_12 = t;
  if((PushChoice() == 0))
    {
      ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL;
      m_53 = t;
      k_53 :
      if(match_cons(m_53, sym__2))
        {
          n_53 = ATgetArgument(m_53, 0);
          o_53 = ATgetArgument(m_53, 1);
          {
            if(((l_53 != NULL) && (l_53 != n_53)))
              _fail(n_53);
            else
              l_53 = n_53;
            if(((l_53 != NULL) && (l_53 != o_53)))
              _fail(o_53);
            else
              l_53 = o_53;
          }
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = a_12;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm w_61 (ATerm))
{
  ATerm b_2 (ATerm t)
  {
    ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL;
    i_54 = t;
    r_53 :
    if(match_cons(i_54, sym__2))
      {
        j_54 = ATgetArgument(i_54, 0);
        k_54 = ATgetArgument(i_54, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(j_54), not_null(k_54), (ATerm) ATempty);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL;
    n_54 = t;
    c_54 :
    if(match_cons(n_54, sym__3))
      {
        o_54 = ATgetArgument(n_54, 0);
        p_54 = ATgetArgument(n_54, 1);
        q_54 = ATgetArgument(n_54, 2);
        d_54 :
        if(match_int(o_54, 0))
          t = not_null(q_54);
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL;
    t_54 = t;
    h_54 :
    if(match_cons(t_54, sym__3))
      {
        u_54 = ATgetArgument(t_54, 0);
        v_54 = ATgetArgument(t_54, 1);
        w_54 = ATgetArgument(t_54, 2);
        {
          ATerm e_55 = NULL,g_55 = NULL;
          ATerm b_12;
          b_12 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_54), (ATerm) ATmakeInt(1));
            t = geq_0(t);
          }
          t = b_12;
          {
            ATerm c_12;
            c_12 = t;
            {
              ATerm f_55 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_54), (ATerm) ATmakeInt(1));
              {
                t = subt_0(t);
                {
                  f_55 = t;
                  if(((e_55 != NULL) && (e_55 != f_55)))
                    _fail(f_55);
                  else
                    e_55 = f_55;
                }
              }
            }
            t = c_12;
            {
              ATerm h_55 = NULL;
              t = not_null(v_54);
              {
                t = w_61(t);
                {
                  h_55 = t;
                  if(((g_55 != NULL) && (g_55 != h_55)))
                    _fail(h_55);
                  else
                    g_55 = h_55;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(e_55), not_null(v_54), (ATerm) ATinsert(CheckATermList(not_null(w_54)), not_null(g_55)));
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
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
  x_55 = t;
  t_55 :
  if(match_cons(x_55, sym__2))
    {
      y_55 = ATgetArgument(x_55, 0);
      z_55 = ATgetArgument(x_55, 1);
      {
        ATerm c_56 = NULL,g_56 = NULL,h_56 = NULL;
        ATerm i_56 = NULL;
        ATerm j_56 = NULL;
        t = new_0(t);
        {
          i_56 = t;
          {
            if(((c_56 != NULL) && (c_56 != i_56)))
              _fail(i_56);
            else
              c_56 = i_56;
            {
              ATerm k_56 = NULL;
              t = new_0(t);
              {
                j_56 = t;
                {
                  if(((g_56 != NULL) && (g_56 != j_56)))
                    _fail(j_56);
                  else
                    g_56 = j_56;
                  {
                    t = new_0(t);
                    {
                      k_56 = t;
                      if(((h_56 != NULL) && (h_56 != k_56)))
                        _fail(k_56);
                      else
                        h_56 = k_56;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_56)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_55))), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_56)))), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_55))), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_56))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(c_56), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATempty))), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATempty)))), not_null(g_56), (ATerm)ATmakeAppl(sym_Var_1, not_null(g_56)), not_null(h_56), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_56)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL;
  s_56 = t;
  q_56 :
  if(match_cons(s_56, sym__2))
    {
      t_56 = ATgetArgument(s_56, 0);
      u_56 = ATgetArgument(s_56, 1);
      r_56 :
      if(((ATermList) u_56 == ATempty))
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
ATerm zipr_1 (ATerm t, ATerm o_69 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, o_69);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL;
  y_56 = t;
  x_56 :
  if(((ATgetType(y_56) == AT_LIST) && ((ATermList) y_56 != ATempty)))
    {
      z_56 = ATgetFirst((ATermList) y_56);
      a_57 = (ATerm) ATgetNext((ATermList) y_56);
      t = not_null(a_57);
    }
  else
    _fail(t);
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL;
  h_57 = t;
  f_57 :
  if(((ATgetType(h_57) == AT_LIST) && ((ATermList) h_57 != ATempty)))
    {
      i_57 = ATgetFirst((ATermList) h_57);
      j_57 = (ATerm) ATgetNext((ATermList) h_57);
      g_57 :
      if(((ATermList) j_57 == ATempty))
        {
          t = not_null(i_57);
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
  ATerm d_12 = t;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      PopChoice();
    }
  else
    {
      t = d_12;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm l_58 = NULL,m_58 = NULL,o_58 = NULL,q_58 = NULL;
  ATerm u_60 (ATerm t)
  {
    ATerm v_58 = NULL,w_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,w_59 = NULL;
    ATerm e_12;
    e_12 = t;
    {
      ATerm h_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL;
      ATerm k_59 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_58), (ATerm) ATmakeInt(1));
      {
        t = add_0(t);
        {
          k_59 = t;
          if(((h_59 != NULL) && (h_59 != k_59)))
            _fail(k_59);
          else
            h_59 = k_59;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_59), (ATerm) ATmakeAppl(sym__0));
        {
          t = copy_1(t, new_0);
          {
            l_59 = t;
            b_58 :
            if(((ATgetType(l_59) == AT_LIST) && ((ATermList) l_59 != ATempty)))
              {
                m_59 = ATgetFirst((ATermList) l_59);
                n_59 = (ATerm) ATgetNext((ATermList) l_59);
                {
                  ATerm o_59 = NULL;
                  if(((w_58 != NULL) && (w_58 != m_59)))
                    _fail(m_59);
                  else
                    w_58 = m_59;
                  {
                    if(((a_59 != NULL) && (a_59 != n_59)))
                      _fail(n_59);
                    else
                      a_59 = n_59;
                    {
                      t = not_null(a_59);
                      {
                        ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL;
                        t = last_0(t);
                        {
                          o_59 = t;
                          {
                            if(((v_58 != NULL) && (v_58 != o_59)))
                              _fail(o_59);
                            else
                              v_58 = o_59;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_59)), not_null(w_58)), not_null(a_59));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    p_59 = t;
                                    a_58 :
                                    if(match_cons(p_59, sym__6))
                                      {
                                        q_59 = ATgetArgument(p_59, 0);
                                        r_59 = ATgetArgument(p_59, 1);
                                        s_59 = ATgetArgument(p_59, 2);
                                        t_59 = ATgetArgument(p_59, 3);
                                        u_59 = ATgetArgument(p_59, 4);
                                        v_59 = ATgetArgument(p_59, 5);
                                        {
                                          if(((b_59 != NULL) && (b_59 != q_59)))
                                            _fail(q_59);
                                          else
                                            b_59 = q_59;
                                          {
                                            if(((c_59 != NULL) && (c_59 != r_59)))
                                              _fail(r_59);
                                            else
                                              c_59 = r_59;
                                            {
                                              if(((d_59 != NULL) && (d_59 != s_59)))
                                                _fail(s_59);
                                              else
                                                d_59 = s_59;
                                              {
                                                if(((e_59 != NULL) && (e_59 != t_59)))
                                                  _fail(t_59);
                                                else
                                                  e_59 = t_59;
                                                {
                                                  if(((f_59 != NULL) && (f_59 != u_59)))
                                                    _fail(u_59);
                                                  else
                                                    f_59 = u_59;
                                                  if(((g_59 != NULL) && (g_59 != v_59)))
                                                    _fail(v_59);
                                                  else
                                                    g_59 = v_59;
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
    t = e_12;
    {
      ATerm x_59 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(f_59)), not_null(d_59)), not_null(a_59));
      {
        t = concat_0(t);
        {
          x_59 = t;
          if(((w_59 != NULL) && (w_59 != x_59)))
            _fail(x_59);
          else
            w_59 = x_59;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(m_58), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), not_null(c_59), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(w_59)), not_null(w_58)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_58))), (ATerm) ATmakeAppl(sym_Op_2, not_null(m_58), not_null(e_59)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_58))), (ATerm) ATmakeAppl(sym_Op_2, not_null(m_58), not_null(g_59)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(b_59))))));
    }
    return(t);
  }
  ATerm v_60 (ATerm t)
  {
    ATerm z_59 = NULL;
    ATerm a_60 = NULL;
    t = new_0(t);
    {
      a_60 = t;
      if(((z_59 != NULL) && (z_59 != a_60)))
        _fail(a_60);
      else
        z_59 = a_60;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(m_58), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_59)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_59))), (ATerm) ATmakeAppl(sym_Op_2, not_null(m_58), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_59))), (ATerm) ATmakeAppl(sym_Op_2, not_null(m_58), (ATerm) ATempty))), (ATerm) ATmakeAppl(sym_Id_0)))));
    return(t);
  }
  ATerm w_60 (ATerm t)
  {
    ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,s_60 = NULL;
    ATerm f_12;
    f_12 = t;
    {
      ATerm k_60 = NULL;
      ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL;
      t = new_0(t);
      {
        k_60 = t;
        {
          if(((d_60 != NULL) && (d_60 != k_60)))
            _fail(k_60);
          else
            d_60 = k_60;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_58), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_60)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  l_60 = t;
                  g_58 :
                  if(match_cons(l_60, sym__6))
                    {
                      m_60 = ATgetArgument(l_60, 0);
                      n_60 = ATgetArgument(l_60, 1);
                      o_60 = ATgetArgument(l_60, 2);
                      p_60 = ATgetArgument(l_60, 3);
                      q_60 = ATgetArgument(l_60, 4);
                      r_60 = ATgetArgument(l_60, 5);
                      {
                        if(((e_60 != NULL) && (e_60 != m_60)))
                          _fail(m_60);
                        else
                          e_60 = m_60;
                        {
                          if(((f_60 != NULL) && (f_60 != n_60)))
                            _fail(n_60);
                          else
                            f_60 = n_60;
                          {
                            if(((g_60 != NULL) && (g_60 != o_60)))
                              _fail(o_60);
                            else
                              g_60 = o_60;
                            {
                              if(((h_60 != NULL) && (h_60 != p_60)))
                                _fail(p_60);
                              else
                                h_60 = p_60;
                              {
                                if(((i_60 != NULL) && (i_60 != q_60)))
                                  _fail(q_60);
                                else
                                  i_60 = q_60;
                                if(((j_60 != NULL) && (j_60 != r_60)))
                                  _fail(r_60);
                                else
                                  j_60 = r_60;
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
    t = f_12;
    {
      ATerm t_60 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_60), not_null(i_60));
      {
        t = conc_0(t);
        {
          t_60 = t;
          if(((s_60 != NULL) && (s_60 != t_60)))
            _fail(t_60);
          else
            s_60 = t_60;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(m_58), (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue))), not_null(f_60), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(s_60)), not_null(d_60)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_60))), (ATerm) ATmakeAppl(sym_Op_2, not_null(m_58), not_null(h_60)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(m_58), not_null(j_60)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(e_60))))));
    }
    return(t);
  }
  l_58 = t;
  i_58 :
  if(match_cons(l_58, sym__3))
    {
      m_58 = ATgetArgument(l_58, 0);
      o_58 = ATgetArgument(l_58, 1);
      q_58 = ATgetArgument(l_58, 2);
      j_58 :
      if(match_string(o_58, "T"))
        {
          k_58 :
          if(match_int(q_58, 0))
            {
              ATerm g_12 = t;
              if((PushChoice() == 0))
                {
                  t = u_60(t);
                  PopChoice();
                }
              else
                {
                  t = g_12;
                  t = v_60(t);
                }
            }
          else
            t = u_60(t);
        }
      else
        {
          if(match_string(o_58, "D"))
            t = w_60(t);
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
  ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL,x_61 = NULL,y_61 = NULL;
  q_61 = t;
  n_61 :
  if(match_cons(q_61, sym__2))
    {
      r_61 = ATgetArgument(q_61, 0);
      y_61 = ATgetArgument(q_61, 1);
      o_61 :
      if(match_cons(r_61, sym__2))
        {
          s_61 = ATgetArgument(r_61, 0);
          x_61 = ATgetArgument(r_61, 1);
          p_61 :
          if(match_cons(s_61, sym_Mod_2))
            {
              t_61 = ATgetArgument(s_61, 0);
              u_61 = ATgetArgument(s_61, 1);
              {
                ATerm d_62 = NULL;
                ATerm e_62 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(t_61), not_null(u_61), not_null(x_61));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      e_62 = t;
                      if(((d_62 != NULL) && (d_62 != e_62)))
                        _fail(e_62);
                      else
                        d_62 = e_62;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_62), not_null(y_61));
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
  ATerm h_12 = t;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      PopChoice();
    }
  else
    {
      t = h_12;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL;
  u_62 = t;
  p_62 :
  if(match_cons(u_62, sym__5))
    {
      v_62 = ATgetArgument(u_62, 0);
      y_62 = ATgetArgument(u_62, 1);
      z_62 = ATgetArgument(u_62, 2);
      a_63 = ATgetArgument(u_62, 3);
      b_63 = ATgetArgument(u_62, 4);
      t_62 :
      if(((ATgetType(v_62) == AT_LIST) && ((ATermList) v_62 != ATempty)))
        {
          w_62 = ATgetFirst((ATermList) v_62);
          x_62 = (ATerm) ATgetNext((ATermList) v_62);
          t = (ATerm) ATmakeAppl(sym__5, not_null(x_62), not_null(y_62), not_null(z_62), not_null(a_63), (ATerm) ATinsert(CheckATermList(not_null(b_63)), not_null(w_62)));
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
  ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL;
  l_63 = t;
  k_63 :
  if(match_cons(l_63, sym__2))
    {
      m_63 = ATgetArgument(l_63, 0);
      n_63 = ATgetArgument(l_63, 1);
      {
        t = not_null(m_63);
        {
          ATerm e_2 (ATerm t)
          {
            t = not_null(n_63);
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
  ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL;
  u_63 = t;
  s_63 :
  if(match_cons(u_63, sym__2))
    {
      v_63 = ATgetArgument(u_63, 0);
      w_63 = ATgetArgument(u_63, 1);
      t_63 :
      if(((ATgetType(w_63) == AT_LIST) && ((ATermList) w_63 != ATempty)))
        {
          x_63 = ATgetFirst((ATermList) w_63);
          y_63 = (ATerm) ATgetNext((ATermList) w_63);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_63)), not_null(x_63)), not_null(y_63));
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
  ATerm j_64 = NULL,k_64 = NULL,l_64 = NULL;
  j_64 = t;
  i_64 :
  if(match_cons(j_64, sym__2))
    {
      k_64 = ATgetArgument(j_64, 0);
      l_64 = ATgetArgument(j_64, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_64)), not_null(k_64));
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm t_64 = NULL,u_64 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL;
  t_64 = t;
  q_64 :
  if(match_cons(t_64, sym__2))
    {
      u_64 = ATgetArgument(t_64, 0);
      d_65 = ATgetArgument(t_64, 1);
      r_64 :
      if(((ATgetType(u_64) == AT_LIST) && ((ATermList) u_64 != ATempty)))
        {
          b_65 = ATgetFirst((ATermList) u_64);
          c_65 = (ATerm) ATgetNext((ATermList) u_64);
          s_64 :
          if(((ATgetType(d_65) == AT_LIST) && ((ATermList) d_65 != ATempty)))
            {
              e_65 = ATgetFirst((ATermList) d_65);
              f_65 = (ATerm) ATgetNext((ATermList) d_65);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(b_65), not_null(e_65)), (ATerm) ATmakeAppl(sym__2, not_null(c_65), not_null(f_65)));
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
  ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL;
  p_65 = t;
  m_65 :
  if(match_cons(p_65, sym__2))
    {
      q_65 = ATgetArgument(p_65, 0);
      r_65 = ATgetArgument(p_65, 1);
      n_65 :
      if(((ATermList) q_65 == ATempty))
        {
          o_65 :
          if(((ATermList) r_65 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm g_69 (ATerm), ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm j_69 (ATerm))
{
  ATerm t_65 (ATerm t)
  {
    ATerm i_12 = t;
    if((PushChoice() == 0))
      {
        t = g_69(t);
        PopChoice();
      }
    else
      {
        t = i_12;
        {
          t = h_69(t);
          {
            t = _2(t, j_69, t_65);
            t = i_69(t);
          }
        }
      }
    return(t);
  }
  t = t_65(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm l_69 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, l_69);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL;
  e_66 = t;
  c_66 :
  if(((ATgetType(e_66) == AT_LIST) && ((ATermList) e_66 != ATempty)))
    {
      f_66 = ATgetFirst((ATermList) e_66);
      i_66 = (ATerm) ATgetNext((ATermList) e_66);
      d_66 :
      if(match_cons(f_66, sym__2))
        {
          g_66 = ATgetArgument(f_66, 0);
          h_66 = ATgetArgument(f_66, 1);
          {
            ATerm m_66 = NULL,n_66 = NULL,t_66 = NULL,e_67 = NULL;
            ATerm j_12;
            j_12 = t;
            {
              ATerm o_66 = NULL;
              ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL;
              t = not_null(h_66);
              {
                o_66 = t;
                {
                  t = SSL_explode_term(not_null(o_66));
                  {
                    q_66 = t;
                    x_65 :
                    if(match_cons(q_66, sym__2))
                      {
                        r_66 = ATgetArgument(q_66, 0);
                        s_66 = ATgetArgument(q_66, 1);
                        {
                          if(((m_66 != NULL) && (m_66 != r_66)))
                            _fail(r_66);
                          else
                            m_66 = r_66;
                          if(((n_66 != NULL) && (n_66 != s_66)))
                            _fail(s_66);
                          else
                            n_66 = s_66;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = j_12;
            {
              ATerm k_12;
              k_12 = t;
              {
                ATerm u_66 = NULL;
                ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL;
                t = not_null(g_66);
                {
                  u_66 = t;
                  {
                    t = SSL_explode_term(not_null(u_66));
                    {
                      b_67 = t;
                      a_66 :
                      if(match_cons(b_67, sym__2))
                        {
                          c_67 = ATgetArgument(b_67, 0);
                          d_67 = ATgetArgument(b_67, 1);
                          {
                            if(((m_66 != NULL) && (m_66 != c_67)))
                              _fail(c_67);
                            else
                              m_66 = c_67;
                            if(((t_66 != NULL) && (t_66 != d_67)))
                              _fail(d_67);
                            else
                              t_66 = d_67;
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
              t = k_12;
              {
                ATerm f_67 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_66), not_null(n_66));
                {
                  t = zip_1(t, _id);
                  {
                    f_67 = t;
                    if(((e_67 != NULL) && (e_67 != f_67)))
                      _fail(f_67);
                    else
                      e_67 = f_67;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_67), not_null(i_66));
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
  ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL;
  p_67 = t;
  n_67 :
  if(((ATgetType(p_67) == AT_LIST) && ((ATermList) p_67 != ATempty)))
    {
      q_67 = ATgetFirst((ATermList) p_67);
      t_67 = (ATerm) ATgetNext((ATermList) p_67);
      o_67 :
      if(match_cons(q_67, sym__2))
        {
          r_67 = ATgetArgument(q_67, 0);
          s_67 = ATgetArgument(q_67, 1);
          {
            ATerm v_67 = NULL;
            if(((r_67 != NULL) && (r_67 != s_67)))
              _fail(s_67);
            else
              r_67 = s_67;
            {
              if(((v_67 != NULL) && (v_67 != t_67)))
                _fail(t_67);
              else
                v_67 = t_67;
              t = not_null(v_67);
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
  ATerm l_12 = t;
  if((PushChoice() == 0))
    {
      ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL;
      a_68 = t;
      y_67 :
      if(match_cons(a_68, sym__2))
        {
          b_68 = ATgetArgument(a_68, 0);
          c_68 = ATgetArgument(a_68, 1);
          {
            t = not_null(b_68);
            {
              ATerm i_68 (ATerm t)
              {
                ATerm q_12 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = q_12;
                    {
                      ATerm r_12 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm f_2 (ATerm t)
                          {
                            t = not_null(c_68);
                            return(t);
                          }
                          t = HdMember_1(t, f_2);
                          t = i_68(t);
                          PopChoice();
                        }
                      else
                        {
                          t = r_12;
                          t = Cons_2(t, _id, i_68);
                        }
                    }
                  }
                return(t);
              }
              t = i_68(t);
            }
          }
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = l_12;
      {
        ATerm g_2 (ATerm t)
        {
          ATerm f_68 = NULL;
          f_68 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(f_68));
          return(t);
        }
        ATerm h_2 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm i_2 (ATerm t)
        {
          ATerm s_12 = t;
          if((PushChoice() == 0))
            {
              ATerm j_2 (ATerm t)
              {
                ATerm t_12 = t;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = t_12;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, j_2);
              PopChoice();
            }
          else
            {
              t = s_12;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, g_2, h_2, i_2);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm u_55 (ATerm), ATerm v_55 (ATerm), ATerm w_55 (ATerm))
{
  ATerm u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL;
  u_68 = t;
  s_68 :
  if(match_cons(u_68, sym__5))
    {
      v_68 = ATgetArgument(u_68, 0);
      y_68 = ATgetArgument(u_68, 1);
      a_69 = ATgetArgument(u_68, 2);
      b_69 = ATgetArgument(u_68, 3);
      c_69 = ATgetArgument(u_68, 4);
      t_68 :
      if(((ATgetType(v_68) == AT_LIST) && ((ATermList) v_68 != ATempty)))
        {
          w_68 = ATgetFirst((ATermList) v_68);
          x_68 = (ATerm) ATgetNext((ATermList) v_68);
          {
            ATerm q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL,z_69 = NULL,b_70 = NULL,d_70 = NULL;
            ATerm u_12;
            u_12 = t;
            {
              ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_68), not_null(a_69));
              {
                t = u_55(t);
                {
                  u_69 = t;
                  o_68 :
                  if(match_cons(u_69, sym__2))
                    {
                      v_69 = ATgetArgument(u_69, 0);
                      w_69 = ATgetArgument(u_69, 1);
                      {
                        ATerm x_69 = NULL;
                        if(((r_69 != NULL) && (r_69 != v_69)))
                          _fail(v_69);
                        else
                          r_69 = v_69;
                        {
                          if(((q_69 != NULL) && (q_69 != w_69)))
                            _fail(w_69);
                          else
                            q_69 = w_69;
                          {
                            t = not_null(r_69);
                            {
                              ATerm y_69 = NULL;
                              t = v_55(t);
                              {
                                x_69 = t;
                                {
                                  if(((s_69 != NULL) && (s_69 != x_69)))
                                    _fail(x_69);
                                  else
                                    s_69 = x_69;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_69), not_null(y_68));
                                    {
                                      t = diff_0(t);
                                      {
                                        y_69 = t;
                                        if(((t_69 != NULL) && (t_69 != y_69)))
                                          _fail(y_69);
                                        else
                                          t_69 = y_69;
                                      }
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
            t = u_12;
            {
              ATerm v_12;
              v_12 = t;
              {
                ATerm a_70 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_69), not_null(x_68));
                {
                  t = conc_0(t);
                  {
                    a_70 = t;
                    if(((z_69 != NULL) && (z_69 != a_70)))
                      _fail(a_70);
                    else
                      z_69 = a_70;
                  }
                }
              }
              t = v_12;
              {
                ATerm w_12;
                w_12 = t;
                {
                  ATerm c_70 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_69), not_null(y_68));
                  {
                    t = conc_0(t);
                    {
                      c_70 = t;
                      if(((b_70 != NULL) && (b_70 != c_70)))
                        _fail(c_70);
                      else
                        b_70 = c_70;
                    }
                  }
                }
                t = w_12;
                {
                  ATerm e_70 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(w_68), not_null(r_69), not_null(b_69));
                  {
                    t = w_55(t);
                    {
                      e_70 = t;
                      if(((d_70 != NULL) && (d_70 != e_70)))
                        _fail(e_70);
                      else
                        d_70 = e_70;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(z_69), not_null(b_70), not_null(q_69), not_null(d_70), not_null(c_69));
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
  ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,v_70 = NULL,w_70 = NULL;
  p_70 = t;
  n_70 :
  if(match_cons(p_70, sym__5))
    {
      q_70 = ATgetArgument(p_70, 0);
      r_70 = ATgetArgument(p_70, 1);
      s_70 = ATgetArgument(p_70, 2);
      v_70 = ATgetArgument(p_70, 3);
      w_70 = ATgetArgument(p_70, 4);
      o_70 :
      if(((ATermList) q_70 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_70), not_null(w_70));
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
  ATerm e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL;
  e_71 = t;
  d_71 :
  if(match_cons(e_71, sym__3))
    {
      f_71 = ATgetArgument(e_71, 0);
      g_71 = ATgetArgument(e_71, 1);
      h_71 = ATgetArgument(e_71, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(f_71), not_null(f_71), not_null(g_71), not_null(h_71), (ATerm) ATempty);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm v_64 (ATerm), ATerm w_64 (ATerm))
{
  ATerm p_71 (ATerm t)
  {
    ATerm x_12 = t;
    if((PushChoice() == 0))
      {
        t = v_64(t);
        PopChoice();
      }
    else
      {
        t = x_12;
        {
          t = w_64(t);
          t = p_71(t);
        }
      }
    return(t);
  }
  t = p_71(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm y_64 (ATerm), ATerm z_64 (ATerm), ATerm a_65 (ATerm))
{
  t = y_64(t);
  t = while_not_2(t, z_64, a_65);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm d_56 (ATerm), ATerm e_56 (ATerm), ATerm f_56 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm y_12 = t;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, d_56, e_56, f_56);
        PopChoice();
      }
    else
      {
        t = y_12;
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
    ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL;
    s_71 = t;
    r_71 :
    if(match_cons(s_71, sym__3))
      {
        t_71 = ATgetArgument(s_71, 0);
        u_71 = ATgetArgument(s_71, 1);
        v_71 = ATgetArgument(s_71, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(v_71)), not_null(u_71));
      }
    else
      _fail(t);
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, l_2, m_2);
  {
    ATerm z_12 = t;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        PopChoice();
      }
    else
      {
        t = z_12;
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
ATerm assert_1 (ATerm t, ATerm o_55 (ATerm))
{
  ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL;
  g_72 = t;
  f_72 :
  if(match_cons(g_72, sym__2))
    {
      h_72 = ATgetArgument(g_72, 0);
      i_72 = ATgetArgument(g_72, 1);
      {
        ATerm l_72 = NULL,m_72 = NULL,n_72 = NULL;
        ATerm a_13;
        a_13 = t;
        {
          ATerm o_72 = NULL;
          ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL;
          t = o_55(t);
          {
            o_72 = t;
            {
              if(((l_72 != NULL) && (l_72 != o_72)))
                _fail(o_72);
              else
                l_72 = o_72;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(l_72), not_null(h_72), not_null(i_72));
                {
                  t = table_push_0(t);
                  {
                    ATerm b_13 = t;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_72), (ATerm) ATmakeAppl(sym_Scopes_0));
                        t = table_get_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = b_13;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      p_72 = t;
                      e_72 :
                      if(((ATgetType(p_72) == AT_LIST) && ((ATermList) p_72 != ATempty)))
                        {
                          q_72 = ATgetFirst((ATermList) p_72);
                          r_72 = (ATerm) ATgetNext((ATermList) p_72);
                          {
                            if(((m_72 != NULL) && (m_72 != q_72)))
                              _fail(q_72);
                            else
                              m_72 = q_72;
                            {
                              if(((n_72 != NULL) && (n_72 != r_72)))
                                _fail(r_72);
                              else
                                n_72 = r_72;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(l_72), (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(not_null(n_72)), (ATerm) ATinsert(CheckATermList(not_null(m_72)), not_null(h_72))));
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
        t = a_13;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Arities_0 (ATerm t)
{
  ATerm z_72 = NULL;
  ATerm b_73 = NULL;
  z_72 = t;
  {
    ATerm c_73 = NULL,d_73 = NULL,e_73 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(z_72));
    {
      ATerm u_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, u_2);
      {
        c_73 = t;
        x_72 :
        if(match_cons(c_73, sym_Defined_2))
          {
            d_73 = ATgetArgument(c_73, 0);
            e_73 = ATgetArgument(c_73, 1);
            y_72 :
            if(match_string(d_73, "c_0"))
              {
                if(((b_73 != NULL) && (b_73 != e_73)))
                  _fail(e_73);
                else
                  b_73 = e_73;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
    t = not_null(b_73);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm j_73 = NULL,k_73 = NULL,l_73 = NULL;
  j_73 = t;
  i_73 :
  if(((ATgetType(j_73) == AT_LIST) && ((ATermList) j_73 != ATempty)))
    {
      k_73 = ATgetFirst((ATermList) j_73);
      l_73 = (ATerm) ATgetNext((ATermList) j_73);
      t = not_null(k_73);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL;
  t_73 = t;
  s_73 :
  if(match_cons(t_73, sym__2))
    {
      u_73 = ATgetArgument(t_73, 0);
      v_73 = ATgetArgument(t_73, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_73), not_null(v_73));
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
ATerm rewrite_1 (ATerm t, ATerm q_55 (ATerm))
{
  ATerm b_74 = NULL;
  ATerm d_74 = NULL;
  b_74 = t;
  {
    ATerm g_74 = NULL;
    t = (ATerm) ATmakeAppl(sym__0);
    {
      t = q_55(t);
      {
        g_74 = t;
        if(((d_74 != NULL) && (d_74 != g_74)))
          _fail(g_74);
        else
          d_74 = g_74;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_74), not_null(b_74));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL;
  o_74 = t;
  n_74 :
  if(match_cons(o_74, sym__2))
    {
      p_74 = ATgetArgument(o_74, 0);
      q_74 = ATgetArgument(o_74, 1);
      {
        ATerm t_74 = NULL,u_74 = NULL;
        ATerm v_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(q_74), not_null(p_74));
        {
          ATerm v_2 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
            return(t);
          }
          t = rewrite_1(t, v_2);
          {
            v_74 = t;
            l_74 :
            if(match_cons(v_74, sym_Defined_3))
              {
                w_74 = ATgetArgument(v_74, 0);
                x_74 = ATgetArgument(v_74, 1);
                y_74 = ATgetArgument(v_74, 2);
                m_74 :
                if(match_string(w_74, "b_0"))
                  {
                    if(((t_74 != NULL) && (t_74 != x_74)))
                      _fail(x_74);
                    else
                      t_74 = x_74;
                    if(((u_74 != NULL) && (u_74 != y_74)))
                      _fail(y_74);
                    else
                      u_74 = y_74;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(u_74)), not_null(t_74));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL;
    m_75 = t;
    l_75 :
    if(match_cons(m_75, sym_SDef_3))
      {
        n_75 = ATgetArgument(m_75, 0);
        o_75 = ATgetArgument(m_75, 1);
        p_75 = ATgetArgument(m_75, 2);
        {
          ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL;
          ATerm c_13;
          c_13 = t;
          {
            ATerm x_75 = NULL;
            t = not_null(o_75);
            {
              ATerm y_75 = NULL;
              t = length_0(t);
              {
                x_75 = t;
                {
                  if(((v_75 != NULL) && (v_75 != x_75)))
                    _fail(x_75);
                  else
                    v_75 = x_75;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(n_75), not_null(v_75));
                    {
                      ATerm z_75 = NULL,e_76 = NULL;
                      ATerm d_13 = t;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = d_13;
                          t = (ATerm) ATempty;
                        }
                      {
                        y_75 = t;
                        {
                          if(((u_75 != NULL) && (u_75 != y_75)))
                            _fail(y_75);
                          else
                            u_75 = y_75;
                          {
                            ATerm a_76 = NULL;
                            t = not_null(n_75);
                            {
                              ATerm e_13 = t;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = e_13;
                                  t = (ATerm) ATempty;
                                }
                              {
                                a_76 = t;
                                if(((z_75 != NULL) && (z_75 != a_76)))
                                  _fail(a_76);
                                else
                                  z_75 = a_76;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(v_75)), not_null(z_75));
                              {
                                t = union_0(t);
                                {
                                  e_76 = t;
                                  {
                                    if(((w_75 != NULL) && (w_75 != e_76)))
                                      _fail(e_76);
                                    else
                                      w_75 = e_76;
                                    {
                                      ATerm f_13;
                                      f_13 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(v_75), not_null(n_75)), (ATerm) ATmakeAppl(sym_Defined_3, (ATerm)ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue)), not_null(m_75), not_null(u_75)));
                                        {
                                          ATerm x_2 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
                                            return(t);
                                          }
                                          t = assert_1(t, x_2);
                                        }
                                      }
                                      t = f_13;
                                      {
                                        ATerm g_13;
                                        g_13 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(n_75)), (ATerm) ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue)), not_null(w_75)));
                                          {
                                            ATerm f_3 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
                                              return(t);
                                            }
                                            t = assert_1(t, f_3);
                                          }
                                        }
                                        t = g_13;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = c_13;
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = map_1(t, w_2);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL,o_76 = NULL;
  m_76 = t;
  l_76 :
  if(match_cons(m_76, sym__2))
    {
      n_76 = ATgetArgument(m_76, 0);
      o_76 = ATgetArgument(m_76, 1);
      {
        ATerm m_13 = t;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(n_76), not_null(o_76));
            PopChoice();
          }
        else
          {
            t = m_13;
            t = SSL_addr(not_null(n_76), not_null(o_76));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, g_3, add_0, h_3);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm f_62 (ATerm))
{
  ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL;
  v_76 = t;
  u_76 :
  if(((ATgetType(v_76) == AT_LIST) && ((ATermList) v_76 != ATempty)))
    {
      w_76 = ATgetFirst((ATermList) v_76);
      x_76 = (ATerm) ATgetNext((ATermList) v_76);
      {
        t = f_62(t);
        {
          ATerm i_3 (ATerm t)
          {
            ATerm c_77 = NULL;
            c_77 = t;
            if(((w_76 != NULL) && (w_76 != c_77)))
              _fail(c_77);
            else
              w_76 = c_77;
            return(t);
          }
          t = fetch_1(t, i_3);
        }
        t = not_null(x_76);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm j_77 = NULL,k_77 = NULL,l_77 = NULL;
  j_77 = t;
  g_77 :
  if(match_cons(j_77, sym__2))
    {
      k_77 = ATgetArgument(j_77, 0);
      l_77 = ATgetArgument(j_77, 1);
      {
        t = not_null(k_77);
        {
          ATerm r_77 (ATerm t)
          {
            ATerm r_13 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(l_77);
                PopChoice();
              }
            else
              {
                t = r_13;
                {
                  ATerm v_13 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm j_3 (ATerm t)
                      {
                        t = not_null(l_77);
                        return(t);
                      }
                      t = HdMember_1(t, j_3);
                      t = r_77(t);
                      PopChoice();
                    }
                  else
                    {
                      t = v_13;
                      t = Cons_2(t, _id, r_77);
                    }
                }
              }
            return(t);
          }
          t = r_77(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm j_61 (ATerm), ATerm k_61 (ATerm), ATerm l_61 (ATerm))
{
  ATerm w_13 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_61(t);
      PopChoice();
    }
  else
    {
      t = w_13;
      {
        ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL;
        w_77 = t;
        v_77 :
        if(((ATgetType(w_77) == AT_LIST) && ((ATermList) w_77 != ATempty)))
          {
            x_77 = ATgetFirst((ATermList) w_77);
            y_77 = (ATerm) ATgetNext((ATermList) w_77);
            {
              ATerm b_78 = NULL,d_78 = NULL;
              ATerm x_13;
              x_13 = t;
              {
                ATerm c_78 = NULL;
                t = not_null(x_77);
                {
                  t = l_61(t);
                  {
                    c_78 = t;
                    if(((b_78 != NULL) && (b_78 != c_78)))
                      _fail(c_78);
                    else
                      b_78 = c_78;
                  }
                }
              }
              t = x_13;
              {
                ATerm e_78 = NULL;
                t = not_null(y_77);
                {
                  t = foldr_3(t, j_61, k_61, l_61);
                  {
                    e_78 = t;
                    if(((d_78 != NULL) && (d_78 != e_78)))
                      _fail(e_78);
                    else
                      d_78 = e_78;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_78), not_null(d_78));
                  t = k_61(t);
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
ATerm definition_names_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL;
    m_78 = t;
    k_78 :
    if(match_cons(m_78, sym_SDef_3))
      {
        n_78 = ATgetArgument(m_78, 0);
        o_78 = ATgetArgument(m_78, 1);
        p_78 = ATgetArgument(m_78, 2);
        {
          ATerm s_78 = NULL;
          ATerm t_78 = NULL;
          t = not_null(o_78);
          {
            t = length_0(t);
            {
              t_78 = t;
              if(((s_78 != NULL) && (s_78 != t_78)))
                _fail(t_78);
              else
                s_78 = t_78;
            }
          }
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(n_78), not_null(s_78)));
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = foldr_3(t, r_3, union_0, s_3);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm a_79 = NULL,c_79 = NULL;
  ATerm y_13;
  y_13 = t;
  {
    ATerm b_79 = NULL;
    t = definition_names_0(t);
    {
      b_79 = t;
      if(((a_79 != NULL) && (a_79 != b_79)))
        _fail(b_79);
      else
        a_79 = b_79;
    }
  }
  t = y_13;
  {
    ATerm d_79 = NULL;
    t = sort_defs_0(t);
    {
      d_79 = t;
      if(((c_79 != NULL) && (c_79 != d_79)))
        _fail(d_79);
      else
        c_79 = d_79;
    }
    {
      t = (ATerm) ATmakeAppl(sym__3, not_null(a_79), not_null(c_79), (ATerm) ATempty);
      t = extract_needed_defs_0(t);
    }
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm b_53 (ATerm))
{
  ATerm j_79 = NULL,k_79 = NULL;
  j_79 = t;
  i_79 :
  if(match_cons(j_79, sym_Strategies_1))
    {
      k_79 = ATgetArgument(j_79, 0);
      {
        ATerm m_79 = NULL;
        t = not_null(k_79);
        {
          t = b_53(t);
          {
            m_79 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(m_79));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm c_55 (ATerm), ATerm d_55 (ATerm))
{
  ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL;
  u_79 = t;
  t_79 :
  if(((ATgetType(u_79) == AT_LIST) && ((ATermList) u_79 != ATempty)))
    {
      v_79 = ATgetFirst((ATermList) u_79);
      w_79 = (ATerm) ATgetNext((ATermList) u_79);
      {
        ATerm z_79 = NULL;
        t = not_null(v_79);
        {
          ATerm b_80 = NULL;
          t = c_55(t);
          {
            z_79 = t;
            {
              t = not_null(w_79);
              {
                t = d_55(t);
                {
                  b_80 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_80)), not_null(z_79));
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
ATerm Specification_1 (ATerm t, ATerm d_53 (ATerm))
{
  ATerm j_80 = NULL,k_80 = NULL;
  j_80 = t;
  i_80 :
  if(match_cons(j_80, sym_Specification_1))
    {
      k_80 = ATgetArgument(j_80, 0);
      {
        ATerm m_80 = NULL;
        t = not_null(k_80);
        {
          t = d_53(t);
          {
            m_80 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(m_80));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm u_44 (ATerm), ATerm v_44 (ATerm))
{
  ATerm u_80 = NULL,v_80 = NULL,w_80 = NULL;
  u_80 = t;
  t_80 :
  if(match_cons(u_80, sym__2))
    {
      v_80 = ATgetArgument(u_80, 0);
      w_80 = ATgetArgument(u_80, 1);
      {
        ATerm z_80 = NULL;
        t = not_null(v_80);
        {
          ATerm b_81 = NULL;
          t = u_44(t);
          {
            z_80 = t;
            {
              t = not_null(w_80);
              {
                t = v_44(t);
                {
                  b_81 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_80), not_null(b_81));
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
  ATerm i_81 = NULL;
  ATerm z_13;
  z_13 = t;
  {
    ATerm t_3 (ATerm t)
    {
      ATerm j_81 = NULL,k_81 = NULL;
      j_81 = t;
      h_81 :
      if(match_cons(j_81, sym_Program_1))
        {
          k_81 = ATgetArgument(j_81, 0);
          if(((i_81 != NULL) && (i_81 != k_81)))
            _fail(k_81);
          else
            i_81 = k_81;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, t_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), not_null(i_81)), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeInt(1);
          t = exit_0(t);
        }
      }
    }
  }
  t = z_13;
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
  ATerm r_81 = NULL,s_81 = NULL;
  ATerm u_3 (ATerm t)
  {
    ATerm v_3 (ATerm t)
    {
      ATerm a_14 = t;
      if((PushChoice() == 0))
        {
          ATerm b_4 (ATerm t)
          {
            ATerm t_81 = NULL;
            t_81 = t;
            m_81 :
            if(!(match_cons(t_81, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, b_4);
          PopChoice();
          _fail(t);
        }
      else
        t = a_14;
      return(t);
    }
    t = _2(t, v_3, _id);
    {
      ATerm c_4 (ATerm t)
      {
        ATerm d_4 (ATerm t)
        {
          ATerm u_81 = NULL,v_81 = NULL;
          u_81 = t;
          o_81 :
          if(match_cons(u_81, sym_Runtime_1))
            {
              v_81 = ATgetArgument(u_81, 0);
              if(((s_81 != NULL) && (s_81 != v_81)))
                _fail(v_81);
              else
                s_81 = v_81;
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
        ATerm g_4 (ATerm t)
        {
          ATerm h_4 (ATerm t)
          {
            ATerm w_81 = NULL,x_81 = NULL;
            w_81 = t;
            q_81 :
            if(match_cons(w_81, sym_Program_1))
              {
                x_81 = ATgetArgument(w_81, 0);
                if(((r_81 != NULL) && (r_81 != x_81)))
                  _fail(x_81);
                else
                  r_81 = x_81;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, h_4);
          return(t);
        }
        t = _2(t, g_4, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), not_null(s_81)), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), not_null(r_81)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, u_3);
  {
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm c_82 = NULL,d_82 = NULL,e_82 = NULL;
  c_82 = t;
  b_82 :
  if(match_cons(c_82, sym__2))
    {
      d_82 = ATgetArgument(c_82, 0);
      e_82 = ATgetArgument(c_82, 1);
      t = SSL_WriteToTextFile(not_null(d_82), not_null(e_82));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm l_82 = NULL,m_82 = NULL,n_82 = NULL;
  l_82 = t;
  k_82 :
  if(match_cons(l_82, sym__2))
    {
      m_82 = ATgetArgument(l_82, 0);
      n_82 = ATgetArgument(l_82, 1);
      t = SSL_WriteToBinaryFile(not_null(m_82), not_null(n_82));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm v_82 = NULL;
  ATerm b_14;
  b_14 = t;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm g_14 = t;
      if((PushChoice() == 0))
        {
          ATerm j_4 (ATerm t)
          {
            ATerm w_82 = NULL,x_82 = NULL;
            w_82 = t;
            s_82 :
            if(match_cons(w_82, sym_Output_1))
              {
                x_82 = ATgetArgument(w_82, 0);
                if(((v_82 != NULL) && (v_82 != x_82)))
                  _fail(x_82);
                else
                  v_82 = x_82;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, j_4);
          PopChoice();
        }
      else
        {
          t = g_14;
          {
            ATerm y_82 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            {
              y_82 = t;
              if(((v_82 != NULL) && (v_82 != y_82)))
                _fail(y_82);
              else
                v_82 = y_82;
            }
          }
        }
      return(t);
    }
    t = _2(t, i_4, _id);
  }
  t = b_14;
  {
    ATerm n_4 (ATerm t)
    {
      ATerm v_4 (ATerm t)
      {
        t = not_null(v_82);
        return(t);
      }
      t = split_2(t, v_4, _id);
      return(t);
    }
    t = _2(t, _id, n_4);
    {
      ATerm h_14 = t;
      if((PushChoice() == 0))
        {
          ATerm c_5 (ATerm t)
          {
            ATerm h_5 (ATerm t)
            {
              ATerm z_82 = NULL;
              z_82 = t;
              u_82 :
              if(!(match_cons(z_82, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, h_5);
            return(t);
          }
          t = _2(t, c_5, WriteToBinaryFile_0);
          PopChoice();
        }
      else
        {
          t = h_14;
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
ATerm apply_strategy_1 (ATerm t, ATerm j_59 (ATerm))
{
  ATerm f_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL;
  ATerm i_14;
  i_14 = t;
  t = dtime_0(t);
  t = i_14;
  {
    t = j_59(t);
    {
      ATerm j_14;
      j_14 = t;
      {
        ATerm g_83 = NULL;
        t = dtime_0(t);
        {
          g_83 = t;
          if(((f_83 != NULL) && (f_83 != g_83)))
            _fail(g_83);
          else
            f_83 = g_83;
        }
      }
      t = j_14;
      {
        h_83 = t;
        e_83 :
        if(match_cons(h_83, sym__2))
          {
            i_83 = ATgetArgument(h_83, 0);
            j_83 = ATgetArgument(h_83, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_83)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(f_83))), not_null(j_83));
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
  ATerm p_83 = NULL;
  p_83 = t;
  t = SSL_ReadFromFile(not_null(p_83));
  return(t);
}
ATerm split_2 (ATerm t, ATerm t_70 (ATerm), ATerm u_70 (ATerm))
{
  ATerm u_83 = NULL,w_83 = NULL;
  ATerm k_14;
  k_14 = t;
  {
    ATerm v_83 = NULL;
    t = t_70(t);
    {
      v_83 = t;
      if(((u_83 != NULL) && (u_83 != v_83)))
        _fail(v_83);
      else
        u_83 = v_83;
    }
  }
  t = k_14;
  {
    ATerm x_83 = NULL;
    t = u_70(t);
    {
      x_83 = t;
      if(((w_83 != NULL) && (w_83 != x_83)))
        _fail(x_83);
      else
        w_83 = x_83;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_83), not_null(w_83));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm d_84 = NULL;
  ATerm l_14;
  l_14 = t;
  {
    ATerm m_14 = t;
    if((PushChoice() == 0))
      {
        ATerm i_5 (ATerm t)
        {
          ATerm e_84 = NULL,f_84 = NULL;
          e_84 = t;
          b_84 :
          if(match_cons(e_84, sym_Input_1))
            {
              f_84 = ATgetArgument(e_84, 0);
              if(((d_84 != NULL) && (d_84 != f_84)))
                _fail(f_84);
              else
                d_84 = f_84;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, i_5);
        PopChoice();
      }
    else
      {
        t = m_14;
        {
          ATerm g_84 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          {
            g_84 = t;
            if(((d_84 != NULL) && (d_84 != g_84)))
              _fail(g_84);
            else
              d_84 = g_84;
          }
        }
      }
  }
  t = l_14;
  {
    ATerm j_5 (ATerm t)
    {
      t = not_null(d_84);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, j_5);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_84 = NULL;
  k_84 = t;
  j_84 :
  if(!(match_cons(k_84, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm i_59 (ATerm))
{
  ATerm k_5 (ATerm t)
  {
    ATerm n_14 = t;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = n_14;
        {
          ATerm s_14 = t;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = s_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, k_5);
  t = i_59(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm m_84 = NULL;
  m_84 = t;
  t = SSL_table_create(not_null(m_84));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm q_84 = NULL;
  q_84 = t;
  {
    ATerm t_14;
    t_14 = t;
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), not_null(q_84));
          t = table_put_0(t);
        }
      }
    }
    t = t_14;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL;
  y_84 = t;
  w_84 :
  if(match_string(y_84, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(y_84) == AT_LIST) && ((ATermList) y_84 != ATempty)))
        {
          z_84 = ATgetFirst((ATermList) y_84);
          a_85 = (ATerm) ATgetNext((ATermList) y_84);
          x_84 :
          if(((ATgetType(a_85) == AT_LIST) && ((ATermList) a_85 != ATempty)))
            {
              b_85 = ATgetFirst((ATermList) a_85);
              c_85 = (ATerm) ATgetNext((ATermList) a_85);
              {
                ATerm g_85 = NULL;
                ATerm u_14;
                u_14 = t;
                {
                  t = not_null(z_84);
                  t = h_0(t);
                }
                t = u_14;
                {
                  ATerm h_85 = NULL;
                  t = not_null(b_85);
                  {
                    t = i_0(t);
                    {
                      h_85 = t;
                      if(((g_85 != NULL) && (g_85 != h_85)))
                        _fail(h_85);
                      else
                        g_85 = h_85;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_85)), not_null(g_85));
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
  ATerm v_14 = t;
  if((PushChoice() == 0))
    {
      ATerm l_5 (ATerm t)
      {
        ATerm w_85 = NULL;
        w_85 = t;
        l_85 :
        if(!(match_string(w_85, "-S")))
          {
            if(!(match_string(w_85, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm m_5 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm n_5 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, l_5, m_5, n_5);
      PopChoice();
    }
  else
    {
      t = v_14;
      {
        ATerm y_14 = t;
        if((PushChoice() == 0))
          {
            ATerm s_5 (ATerm t)
            {
              ATerm x_85 = NULL;
              x_85 = t;
              m_85 :
              if(!(match_string(x_85, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm t_5 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm v_5 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, s_5, t_5, v_5);
            PopChoice();
          }
        else
          {
            t = y_14;
            {
              ATerm z_14 = t;
              if((PushChoice() == 0))
                {
                  ATerm x_5 (ATerm t)
                  {
                    ATerm y_85 = NULL;
                    y_85 = t;
                    n_85 :
                    if(!(match_string(y_85, "-v")))
                      {
                        if(!(match_string(y_85, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm y_5 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm z_5 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, x_5, y_5, z_5);
                  PopChoice();
                }
              else
                {
                  t = z_14;
                  {
                    ATerm a_15 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm a_6 (ATerm t)
                        {
                          ATerm z_85 = NULL;
                          z_85 = t;
                          o_85 :
                          if(!(match_string(z_85, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm b_6 (ATerm t)
                        {
                          ATerm b_86 = NULL;
                          ATerm c_86 = NULL;
                          c_86 = t;
                          if(((b_86 != NULL) && (b_86 != c_86)))
                            _fail(c_86);
                          else
                            b_86 = c_86;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(b_86));
                          return(t);
                        }
                        ATerm c_6 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, a_6, b_6, c_6);
                        PopChoice();
                      }
                    else
                      {
                        t = a_15;
                        {
                          ATerm b_15 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm d_6 (ATerm t)
                              {
                                ATerm d_86 = NULL;
                                d_86 = t;
                                q_85 :
                                if(!(match_string(d_86, "-i")))
                                  {
                                    if(!(match_string(d_86, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm e_6 (ATerm t)
                              {
                                ATerm e_86 = NULL;
                                ATerm f_86 = NULL;
                                f_86 = t;
                                if(((e_86 != NULL) && (e_86 != f_86)))
                                  _fail(f_86);
                                else
                                  e_86 = f_86;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_86));
                                return(t);
                              }
                              ATerm k_6 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, d_6, e_6, k_6);
                              PopChoice();
                            }
                          else
                            {
                              t = b_15;
                              {
                                ATerm g_15 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm l_6 (ATerm t)
                                    {
                                      ATerm g_86 = NULL;
                                      g_86 = t;
                                      s_85 :
                                      if(!(match_string(g_86, "-o")))
                                        {
                                          if(!(match_string(g_86, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm m_6 (ATerm t)
                                    {
                                      ATerm h_86 = NULL;
                                      ATerm j_86 = NULL;
                                      j_86 = t;
                                      if(((h_86 != NULL) && (h_86 != j_86)))
                                        _fail(j_86);
                                      else
                                        h_86 = j_86;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_86));
                                      return(t);
                                    }
                                    ATerm o_6 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, l_6, m_6, o_6);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = g_15;
                                    {
                                      ATerm h_15 = t;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm q_6 (ATerm t)
                                          {
                                            ATerm k_86 = NULL;
                                            k_86 = t;
                                            u_85 :
                                            if(!(match_string(k_86, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm s_6 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm t_6 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, q_6, s_6, t_6);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = h_15;
                                          {
                                            ATerm u_6 (ATerm t)
                                            {
                                              ATerm l_86 = NULL;
                                              l_86 = t;
                                              v_85 :
                                              if(!(match_string(l_86, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm v_6 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm w_6 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, u_6, v_6, w_6);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm r_86 = NULL;
  r_86 = t;
  t = SSL_table_destroy(not_null(r_86));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm v_86 = NULL;
  v_86 = t;
  t = SSL_exit(not_null(v_86));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm z_86 = NULL;
  z_86 = t;
  t = SSL_implode_string(not_null(z_86));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_77 (ATerm))
{
  ATerm c_87 (ATerm t)
  {
    ATerm i_15 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, c_87);
        PopChoice();
      }
    else
      {
        t = i_15;
        {
          t = Nil_0(t);
          t = n_77(t);
        }
      }
    return(t);
  }
  t = c_87(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_15 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = j_15;
      {
        ATerm f_87 = NULL,g_87 = NULL,h_87 = NULL;
        f_87 = t;
        e_87 :
        if(((ATgetType(f_87) == AT_LIST) && ((ATermList) f_87 != ATempty)))
          {
            g_87 = ATgetFirst((ATermList) f_87);
            h_87 = (ATerm) ATgetNext((ATermList) f_87);
            {
              t = not_null(g_87);
              {
                ATerm x_6 (ATerm t)
                {
                  t = not_null(h_87);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_6);
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
  ATerm n_87 = NULL;
  n_87 = t;
  t = SSL_explode_string(not_null(n_87));
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
ATerm long_description_1 (ATerm t, ATerm p_57 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_76 (ATerm))
{
  ATerm q_87 (ATerm t)
  {
    ATerm r_15 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = r_15;
        t = Cons_2(t, z_76, q_87);
      }
    return(t);
  }
  t = q_87(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm v_87 = NULL,w_87 = NULL,x_87 = NULL;
  x_87 = t;
  u_87 :
  if(((ATgetType(x_87) == AT_LIST) && ((ATermList) x_87 != ATempty)))
    {
      v_87 = ATgetFirst((ATermList) x_87);
      w_87 = (ATerm) ATgetNext((ATermList) x_87);
      {
        t = not_null(w_87);
        {
          ATerm y_6 (ATerm t)
          {
            ATerm a_88 = NULL;
            ATerm b_88 = NULL;
            t = g_0(t);
            {
              b_88 = t;
              if(((a_88 != NULL) && (a_88 != b_88)))
                _fail(b_88);
              else
                a_88 = b_88;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(a_88)), not_null(v_87));
            return(t);
          }
          t = reverse_1(t, y_6);
        }
      }
    }
  else
    {
      if(((ATermList) x_87 == ATempty))
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
  ATerm z_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, z_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm o_57 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm j_50 (ATerm))
{
  ATerm i_88 = NULL,j_88 = NULL;
  i_88 = t;
  h_88 :
  if(match_cons(i_88, sym_Program_1))
    {
      j_88 = ATgetArgument(i_88, 0);
      {
        ATerm n_88 = NULL;
        t = not_null(j_88);
        {
          t = j_50(t);
          {
            n_88 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_88));
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
  ATerm x_88 = NULL;
  ATerm e_7 (ATerm t)
  {
    ATerm f_7 (ATerm t)
    {
      ATerm y_88 = NULL;
      y_88 = t;
      if(((x_88 != NULL) && (x_88 != y_88)))
        _fail(y_88);
      else
        x_88 = y_88;
      return(t);
    }
    t = Program_1(t, f_7);
    return(t);
  }
  t = option_defined_1(t, e_7);
  {
    ATerm h_7 (ATerm t)
    {
      ATerm z_88 = NULL;
      ATerm a_89 = NULL;
      t = (ATerm) ATmakeAppl(sym__0);
      {
        ATerm j_7 (ATerm t)
        {
          t = not_null(x_88);
          return(t);
        }
        t = short_description_1(t, j_7);
        {
          t = concat_strings_0(t);
          {
            a_89 = t;
            if(((z_88 != NULL) && (z_88 != a_89)))
              _fail(a_89);
            else
              z_88 = a_89;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, not_null(z_88)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, h_7);
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
                ATerm k_7 (ATerm t)
                {
                  ATerm b_89 = NULL;
                  b_89 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(b_89)), (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue))));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, k_7);
                {
                  ATerm l_7 (ATerm t)
                  {
                    ATerm d_89 = NULL;
                    ATerm e_89 = NULL;
                    t = (ATerm) ATmakeAppl(sym__0);
                    {
                      ATerm m_7 (ATerm t)
                      {
                        t = not_null(x_88);
                        return(t);
                      }
                      t = long_description_1(t, m_7);
                      {
                        t = concat_strings_0(t);
                        {
                          e_89 = t;
                          if(((d_89 != NULL) && (d_89 != e_89)))
                            _fail(e_89);
                          else
                            d_89 = e_89;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_89)), (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue))));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, l_7);
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
  ATerm l_89 = NULL,n_89 = NULL,o_89 = NULL;
  l_89 = t;
  k_89 :
  if(match_cons(l_89, sym__2))
    {
      n_89 = ATgetArgument(l_89, 0);
      o_89 = ATgetArgument(l_89, 1);
      {
        ATerm s_15;
        s_15 = t;
        t = SSL_printnl(not_null(n_89), not_null(o_89));
        t = s_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm k_50 (ATerm))
{
  ATerm v_89 = NULL,w_89 = NULL;
  v_89 = t;
  u_89 :
  if(match_cons(v_89, sym_Undefined_1))
    {
      w_89 = ATgetArgument(v_89, 0);
      {
        ATerm y_89 = NULL;
        t = not_null(w_89);
        {
          t = k_50(t);
          {
            y_89 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_89));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm h_77 (ATerm))
{
  ATerm c_90 (ATerm t)
  {
    ATerm t_15 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_77, _id);
        PopChoice();
      }
    else
      {
        t = t_15;
        t = Cons_2(t, _id, c_90);
      }
    return(t);
  }
  t = c_90(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_58 (ATerm))
{
  t = fetch_1(t, n_58);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_90 = NULL;
  e_90 = t;
  d_90 :
  if(!(match_cons(e_90, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_71 (ATerm))
{
  ATerm z_15 = t;
  if((PushChoice() == 0))
    {
      t = l_71(t);
      PopChoice();
    }
  else
    {
      t = z_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL;
  h_90 = t;
  g_90 :
  if(match_cons(h_90, sym__2))
    {
      i_90 = ATgetArgument(h_90, 0);
      j_90 = ATgetArgument(h_90, 1);
      t = SSL_table_get(not_null(i_90), not_null(j_90));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_90 = NULL,r_90 = NULL,s_90 = NULL,t_90 = NULL;
  q_90 = t;
  p_90 :
  if(match_cons(q_90, sym__3))
    {
      r_90 = ATgetArgument(q_90, 0);
      s_90 = ATgetArgument(q_90, 1);
      t_90 = ATgetArgument(q_90, 2);
      {
        ATerm a_16;
        a_16 = t;
        {
          ATerm x_90 = NULL;
          ATerm y_90 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_90), not_null(s_90));
          {
            ATerm b_16 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                PopChoice();
              }
            else
              {
                t = b_16;
                t = (ATerm) ATempty;
              }
            {
              y_90 = t;
              if(((x_90 != NULL) && (x_90 != y_90)))
                _fail(y_90);
              else
                x_90 = y_90;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_90), not_null(s_90), (ATerm) ATinsert(CheckATermList(not_null(x_90)), not_null(t_90)));
            t = table_put_0(t);
          }
        }
        t = a_16;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm t_57 (ATerm))
{
  ATerm c_91 = NULL;
  ATerm d_91 = NULL;
  t = (ATerm) ATmakeAppl(sym__0);
  {
    t = t_57(t);
    {
      d_91 = t;
      if(((c_91 != NULL) && (c_91 != d_91)))
        _fail(d_91);
      else
        c_91 = d_91;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), not_null(c_91));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm j_91 = NULL,k_91 = NULL,l_91 = NULL;
  j_91 = t;
  i_91 :
  if(match_string(j_91, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(j_91) == AT_LIST) && ((ATermList) j_91 != ATempty)))
        {
          k_91 = ATgetFirst((ATermList) j_91);
          l_91 = (ATerm) ATgetNext((ATermList) j_91);
          {
            ATerm o_91 = NULL;
            ATerm c_16;
            c_16 = t;
            {
              t = not_null(k_91);
              t = d_0(t);
            }
            t = c_16;
            {
              ATerm p_91 = NULL;
              t = (ATerm) ATmakeAppl(sym__0);
              {
                t = e_0(t);
                {
                  p_91 = t;
                  if(((o_91 != NULL) && (o_91 != p_91)))
                    _fail(p_91);
                  else
                    o_91 = p_91;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_91)), not_null(o_91));
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
  ATerm n_7 (ATerm t)
  {
    ATerm u_91 = NULL;
    u_91 = t;
    t_91 :
    if(!(match_string(u_91, "--help")))
      {
        if(!(match_string(u_91, "-h")))
          {
            if(!(match_string(u_91, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm t_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, n_7, s_7, t_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_91 = NULL,y_91 = NULL,z_91 = NULL;
  x_91 = t;
  w_91 :
  if(((ATgetType(x_91) == AT_LIST) && ((ATermList) x_91 != ATempty)))
    {
      y_91 = ATgetFirst((ATermList) x_91);
      z_91 = (ATerm) ATgetNext((ATermList) x_91);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_91)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_91)));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm r_57 (ATerm))
{
  ATerm d_16;
  d_16 = t;
  {
    ATerm u_7 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = r_57(t);
      return(t);
    }
    t = try_1(t, u_7);
  }
  t = d_16;
  {
    ATerm v_7 (ATerm t)
    {
      ATerm e_92 = NULL;
      e_92 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_92));
      return(t);
    }
    ATerm w_7 (ATerm t)
    {
      ATerm e_16 = t;
      if((PushChoice() == 0))
        {
          ATerm f_16 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = f_16;
              {
                t = r_57(t);
                t = Cons_2(t, _id, w_7);
              }
            }
          PopChoice();
        }
      else
        {
          t = e_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, v_7, w_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm k_92 = NULL,l_92 = NULL,m_92 = NULL;
  ATerm g_16;
  g_16 = t;
  {
    ATerm n_92 = NULL,o_92 = NULL,p_92 = NULL,q_92 = NULL;
    n_92 = t;
    j_92 :
    if(match_cons(n_92, sym__3))
      {
        o_92 = ATgetArgument(n_92, 0);
        p_92 = ATgetArgument(n_92, 1);
        q_92 = ATgetArgument(n_92, 2);
        {
          if(((k_92 != NULL) && (k_92 != o_92)))
            _fail(o_92);
          else
            k_92 = o_92;
          {
            if(((l_92 != NULL) && (l_92 != p_92)))
              _fail(p_92);
            else
              l_92 = p_92;
            {
              if(((m_92 != NULL) && (m_92 != q_92)))
                _fail(q_92);
              else
                m_92 = q_92;
              t = SSL_table_put(not_null(k_92), not_null(l_92), not_null(m_92));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = g_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm q_57 (ATerm))
{
  ATerm t_92 = NULL;
  ATerm h_16;
  h_16 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
    t = table_put_0(t);
  }
  t = h_16;
  {
    ATerm d_8 (ATerm t)
    {
      ATerm k_16 = t;
      if((PushChoice() == 0))
        {
          t = q_57(t);
          PopChoice();
        }
      else
        {
          t = k_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, d_8);
    {
      ATerm e_8 (ATerm t)
      {
        ATerm l_16 = t;
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
            t = l_16;
            {
              ATerm f_8 (ATerm t)
              {
                ATerm j_8 (ATerm t)
                {
                  ATerm u_92 = NULL;
                  u_92 = t;
                  if(((t_92 != NULL) && (t_92 != u_92)))
                    _fail(u_92);
                  else
                    t_92 = u_92;
                  return(t);
                }
                t = Undefined_1(t, j_8);
                return(t);
              }
              t = option_defined_1(t, f_8);
              {
                ATerm m_16;
                m_16 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_92)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                  t = printnl_0(t);
                }
                t = m_16;
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
      t = try_1(t, e_8);
      {
        ATerm n_16;
        n_16 = t;
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
          t = table_destroy_0(t);
        }
        t = n_16;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm x_58 (ATerm), ATerm y_58 (ATerm), ATerm z_58 (ATerm))
{
  ATerm k_8 (ATerm t)
  {
    ATerm o_16 = t;
    if((PushChoice() == 0))
      {
        t = y_58(t);
        PopChoice();
      }
    else
      {
        t = o_16;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, k_8);
  {
    t = store_options_0(t);
    {
      ATerm p_16 = t;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, z_58);
          PopChoice();
        }
      else
        {
          t = p_16;
          {
            ATerm q_16 = t;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, x_58);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                PopChoice();
              }
            else
              {
                t = q_16;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm s_58 (ATerm), ATerm t_58 (ATerm))
{
  t = iowrap_3(t, s_58, t_58, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm p_58 (ATerm))
{
  ATerm l_8 (ATerm t)
  {
    t = _2(t, _id, p_58);
    return(t);
  }
  t = iowrap_2(t, l_8, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm m_8 (ATerm t)
  {
    ATerm n_8 (ATerm t)
    {
      ATerm t_8 (ATerm t)
      {
        ATerm u_8 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
          return(t);
        }
        t = Cons_2(t, u_8, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, t_8);
      return(t);
    }
    t = Specification_1(t, n_8);
    return(t);
  }
  t = iowrap_1(t, m_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_all_0(t);
  return(t);
}
