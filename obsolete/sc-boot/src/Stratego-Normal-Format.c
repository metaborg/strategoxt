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
ATerm debug_1 (ATerm, ATerm c_49 (ATerm));
ATerm Let_2 (ATerm, ATerm u_41 (ATerm), ATerm v_41 (ATerm));
ATerm Op_2 (ATerm, ATerm h_41 (ATerm), ATerm i_41 (ATerm));
ATerm Var_1 (ATerm, ATerm d_41 (ATerm));
ATerm As_2 (ATerm, ATerm t_39 (ATerm), ATerm u_39 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm v_39 (ATerm));
ATerm Str_1 (ATerm, ATerm g_41 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm f_41 (ATerm));
ATerm Int_1 (ATerm, ATerm e_41 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm z_42 (ATerm), ATerm a_43 (ATerm));
ATerm Where_1 (ATerm, ATerm y_42 (ATerm));
ATerm Scope_2 (ATerm, ATerm w_42 (ATerm), ATerm x_42 (ATerm));
ATerm Build_1 (ATerm, ATerm t_42 (ATerm));
ATerm Match_1 (ATerm, ATerm s_42 (ATerm));
ATerm Thread_1 (ATerm, ATerm p_42 (ATerm));
ATerm All_1 (ATerm, ATerm o_42 (ATerm));
ATerm Some_1 (ATerm, ATerm k_0 (ATerm));
ATerm One_1 (ATerm, ATerm m_42 (ATerm));
ATerm Cong_2 (ATerm, ATerm k_42 (ATerm), ATerm l_42 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm i_42 (ATerm), ATerm j_42 (ATerm));
ATerm Rec_2 (ATerm, ATerm s_41 (ATerm), ATerm t_41 (ATerm));
ATerm SVar_1 (ATerm, ATerm r_41 (ATerm));
ATerm Call_2 (ATerm, ATerm g_42 (ATerm), ATerm h_42 (ATerm));
ATerm LChoice_2 (ATerm, ATerm p_41 (ATerm), ATerm q_41 (ATerm));
ATerm Choice_2 (ATerm, ATerm n_41 (ATerm), ATerm o_41 (ATerm));
ATerm Seq_2 (ATerm, ATerm l_41 (ATerm), ATerm m_41 (ATerm));
ATerm Test_1 (ATerm, ATerm j_41 (ATerm));
ATerm Not_1 (ATerm, ATerm k_41 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm z_41 (ATerm), ATerm a_42 (ATerm));
ATerm Mod_2 (ATerm, ATerm j_40 (ATerm), ATerm k_40 (ATerm));
ATerm SDef_3 (ATerm, ATerm w_41 (ATerm), ATerm x_41 (ATerm), ATerm y_41 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm m_57 (ATerm));
ATerm Strategies_1 (ATerm, ATerm r_40 (ATerm));
ATerm Specification_1 (ATerm, ATerm t_40 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm t_32 (ATerm), ATerm u_32 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm h_48 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm y_50 (ATerm), ATerm z_50 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_48 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm y_57 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm n_46 (ATerm));
ATerm map_1 (ATerm, ATerm k_57 (ATerm));
ATerm reverse_1 (ATerm, ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm m_46 (ATerm));
ATerm Program_1 (ATerm, ATerm c_34 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm d_34 (ATerm));
ATerm fetch_1 (ATerm, ATerm s_57 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_47 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_64 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm r_46 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_43 (ATerm), ATerm c_43 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm p_46 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_46 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_47 (ATerm), ATerm w_47 (ATerm), ATerm x_47 (ATerm));
ATerm iowrap_2 (ATerm, ATerm q_47 (ATerm), ATerm r_47 (ATerm));
ATerm iowrap_1 (ATerm, ATerm n_47 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm c_49 (ATerm))
{
  ATerm o_3;
  o_3 = t;
  {
    ATerm q_4 = NULL,s_4 = NULL;
    ATerm p_3;
    p_3 = t;
    {
      ATerm r_4 = NULL;
      t = c_49(t);
      {
        r_4 = t;
        if(((q_4 != NULL) && (q_4 != r_4)))
          _fail(r_4);
        else
          q_4 = r_4;
      }
    }
    t = p_3;
    {
      ATerm t_4 = NULL;
      t_4 = t;
      if(((s_4 != NULL) && (s_4 != t_4)))
        _fail(t_4);
      else
        s_4 = t_4;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(s_4)), not_null(q_4)));
        t = printnl_0(t);
      }
    }
  }
  t = o_3;
  return(t);
}
ATerm Let_2 (ATerm t, ATerm u_41 (ATerm), ATerm v_41 (ATerm))
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL;
  a_5 = t;
  z_4 :
  if(match_cons(a_5, sym_Let_2))
    {
      b_5 = ATgetArgument(a_5, 0);
      c_5 = ATgetArgument(a_5, 1);
      {
        ATerm f_5 = NULL;
        t = not_null(b_5);
        {
          ATerm h_5 = NULL;
          t = u_41(t);
          {
            f_5 = t;
            {
              t = not_null(c_5);
              {
                t = v_41(t);
                {
                  h_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(f_5), not_null(h_5));
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
ATerm Op_2 (ATerm t, ATerm h_41 (ATerm), ATerm i_41 (ATerm))
{
  ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL;
  q_5 = t;
  p_5 :
  if(match_cons(q_5, sym_Op_2))
    {
      r_5 = ATgetArgument(q_5, 0);
      s_5 = ATgetArgument(q_5, 1);
      {
        ATerm v_5 = NULL;
        t = not_null(r_5);
        {
          ATerm x_5 = NULL;
          t = h_41(t);
          {
            v_5 = t;
            {
              t = not_null(s_5);
              {
                t = i_41(t);
                {
                  x_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(v_5), not_null(x_5));
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
ATerm Var_1 (ATerm t, ATerm d_41 (ATerm))
{
  ATerm f_6 = NULL,g_6 = NULL;
  f_6 = t;
  e_6 :
  if(match_cons(f_6, sym_Var_1))
    {
      g_6 = ATgetArgument(f_6, 0);
      {
        ATerm i_6 = NULL;
        t = not_null(g_6);
        {
          t = d_41(t);
          {
            i_6 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_6));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm As_2 (ATerm t, ATerm t_39 (ATerm), ATerm u_39 (ATerm))
{
  ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL;
  q_6 = t;
  p_6 :
  if(match_cons(q_6, sym_As_2))
    {
      r_6 = ATgetArgument(q_6, 0);
      s_6 = ATgetArgument(q_6, 1);
      {
        ATerm v_6 = NULL;
        t = not_null(r_6);
        {
          ATerm x_6 = NULL;
          t = t_39(t);
          {
            v_6 = t;
            {
              t = not_null(s_6);
              {
                t = u_39(t);
                {
                  x_6 = t;
                  t = (ATerm) ATmakeAppl(sym_As_2, not_null(v_6), not_null(x_6));
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
ATerm BuildDefault_1 (ATerm t, ATerm v_39 (ATerm))
{
  ATerm f_7 = NULL,g_7 = NULL;
  f_7 = t;
  e_7 :
  if(match_cons(f_7, sym_BuildDefault_1))
    {
      g_7 = ATgetArgument(f_7, 0);
      {
        ATerm i_7 = NULL;
        t = not_null(g_7);
        {
          t = v_39(t);
          {
            i_7 = t;
            t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(i_7));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm g_41 (ATerm))
{
  ATerm p_7 = NULL,q_7 = NULL;
  p_7 = t;
  o_7 :
  if(match_cons(p_7, sym_Str_1))
    {
      q_7 = ATgetArgument(p_7, 0);
      {
        ATerm s_7 = NULL;
        t = not_null(q_7);
        {
          t = g_41(t);
          {
            s_7 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(s_7));
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
  ATerm x_7 = NULL;
  x_7 = t;
  t = SSL_is_real(not_null(x_7));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm f_41 (ATerm))
{
  ATerm d_8 = NULL,e_8 = NULL;
  d_8 = t;
  c_8 :
  if(match_cons(d_8, sym_Real_1))
    {
      e_8 = ATgetArgument(d_8, 0);
      {
        ATerm g_8 = NULL;
        t = not_null(e_8);
        {
          t = f_41(t);
          {
            g_8 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, not_null(g_8));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Int_1 (ATerm t, ATerm e_41 (ATerm))
{
  ATerm n_8 = NULL,o_8 = NULL;
  n_8 = t;
  m_8 :
  if(match_cons(n_8, sym_Int_1))
    {
      o_8 = ATgetArgument(n_8, 0);
      {
        ATerm q_8 = NULL;
        t = not_null(o_8);
        {
          t = e_41(t);
          {
            q_8 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, not_null(q_8));
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
  ATerm v_8 = NULL;
  v_8 = t;
  u_8 :
  if(!(match_cons(v_8, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm q_3 = t;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      PopChoice();
    }
  else
    {
      t = q_3;
      {
        ATerm r_3 = t;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            PopChoice();
          }
        else
          {
            t = r_3;
            {
              ATerm s_3 = t;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  PopChoice();
                }
              else
                {
                  t = s_3;
                  {
                    ATerm t_3 = t;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        PopChoice();
                      }
                    else
                      {
                        t = t_3;
                        {
                          ATerm u_3 = t;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              PopChoice();
                            }
                          else
                            {
                              t = u_3;
                              {
                                ATerm v_3 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = v_3;
                                    {
                                      ATerm w_3 = t;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm a_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, a_0, term_expression_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = w_3;
                                          {
                                            ATerm x_3 = t;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm b_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, b_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = x_3;
                                                {
                                                  ATerm c_0 (ATerm t)
                                                  {
                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
                                                    return(t);
                                                  }
                                                  t = debug_1(t, c_0);
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Prim_2 (ATerm t, ATerm z_42 (ATerm), ATerm a_43 (ATerm))
{
  ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
  b_9 = t;
  a_9 :
  if(match_cons(b_9, sym_Prim_2))
    {
      c_9 = ATgetArgument(b_9, 0);
      d_9 = ATgetArgument(b_9, 1);
      {
        ATerm g_9 = NULL;
        t = not_null(c_9);
        {
          ATerm i_9 = NULL;
          t = z_42(t);
          {
            g_9 = t;
            {
              t = not_null(d_9);
              {
                t = a_43(t);
                {
                  i_9 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(g_9), not_null(i_9));
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
ATerm Where_1 (ATerm t, ATerm y_42 (ATerm))
{
  ATerm q_9 = NULL,r_9 = NULL;
  q_9 = t;
  p_9 :
  if(match_cons(q_9, sym_Where_1))
    {
      r_9 = ATgetArgument(q_9, 0);
      {
        ATerm t_9 = NULL;
        t = not_null(r_9);
        {
          t = y_42(t);
          {
            t_9 = t;
            t = (ATerm) ATmakeAppl(sym_Where_1, not_null(t_9));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm w_42 (ATerm), ATerm x_42 (ATerm))
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL;
  b_10 = t;
  a_10 :
  if(match_cons(b_10, sym_Scope_2))
    {
      c_10 = ATgetArgument(b_10, 0);
      d_10 = ATgetArgument(b_10, 1);
      {
        ATerm g_10 = NULL;
        t = not_null(c_10);
        {
          ATerm i_10 = NULL;
          t = w_42(t);
          {
            g_10 = t;
            {
              t = not_null(d_10);
              {
                t = x_42(t);
                {
                  i_10 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_10), not_null(i_10));
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
ATerm Build_1 (ATerm t, ATerm t_42 (ATerm))
{
  ATerm q_10 = NULL,r_10 = NULL;
  q_10 = t;
  p_10 :
  if(match_cons(q_10, sym_Build_1))
    {
      r_10 = ATgetArgument(q_10, 0);
      {
        ATerm t_10 = NULL;
        t = not_null(r_10);
        {
          t = t_42(t);
          {
            t_10 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(t_10));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm s_42 (ATerm))
{
  ATerm a_11 = NULL,b_11 = NULL;
  a_11 = t;
  z_10 :
  if(match_cons(a_11, sym_Match_1))
    {
      b_11 = ATgetArgument(a_11, 0);
      {
        ATerm d_11 = NULL;
        t = not_null(b_11);
        {
          t = s_42(t);
          {
            d_11 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(d_11));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm p_42 (ATerm))
{
  ATerm k_11 = NULL,l_11 = NULL;
  k_11 = t;
  j_11 :
  if(match_cons(k_11, sym_Thread_1))
    {
      l_11 = ATgetArgument(k_11, 0);
      {
        ATerm n_11 = NULL;
        t = not_null(l_11);
        {
          t = p_42(t);
          {
            n_11 = t;
            t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(n_11));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm All_1 (ATerm t, ATerm o_42 (ATerm))
{
  ATerm u_11 = NULL,v_11 = NULL;
  u_11 = t;
  t_11 :
  if(match_cons(u_11, sym_All_1))
    {
      v_11 = ATgetArgument(u_11, 0);
      {
        ATerm x_11 = NULL;
        t = not_null(v_11);
        {
          t = o_42(t);
          {
            x_11 = t;
            t = (ATerm) ATmakeAppl(sym_All_1, not_null(x_11));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Some_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm g_12 = NULL,h_12 = NULL;
  g_12 = t;
  f_12 :
  if(match_cons(g_12, sym_Some_1))
    {
      h_12 = ATgetArgument(g_12, 0);
      {
        ATerm y_3 = t;
        if((PushChoice() == 0))
          {
            ATerm j_12 = NULL;
            t = not_null(h_12);
            {
              t = k_0(t);
              {
                j_12 = t;
                t = (ATerm) ATmakeAppl(sym_Some_1, not_null(j_12));
              }
            }
            PopChoice();
          }
        else
          {
            t = y_3;
            {
              ATerm m_12 = NULL;
              t = not_null(h_12);
              {
                t = k_0(t);
                {
                  m_12 = t;
                  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(m_12));
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
ATerm One_1 (ATerm t, ATerm m_42 (ATerm))
{
  ATerm v_12 = NULL,w_12 = NULL;
  v_12 = t;
  u_12 :
  if(match_cons(v_12, sym_One_1))
    {
      w_12 = ATgetArgument(v_12, 0);
      {
        ATerm y_12 = NULL;
        t = not_null(w_12);
        {
          t = m_42(t);
          {
            y_12 = t;
            t = (ATerm) ATmakeAppl(sym_One_1, not_null(y_12));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm k_42 (ATerm), ATerm l_42 (ATerm))
{
  ATerm g_13 = NULL,o_13 = NULL,p_13 = NULL;
  g_13 = t;
  f_13 :
  if(match_cons(g_13, sym_Cong_2))
    {
      o_13 = ATgetArgument(g_13, 0);
      p_13 = ATgetArgument(g_13, 1);
      {
        ATerm s_13 = NULL;
        t = not_null(o_13);
        {
          ATerm u_13 = NULL;
          t = k_42(t);
          {
            s_13 = t;
            {
              t = not_null(p_13);
              {
                t = l_42(t);
                {
                  u_13 = t;
                  t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(s_13), not_null(u_13));
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
ATerm is_int_0 (ATerm t)
{
  ATerm d_14 = NULL;
  d_14 = t;
  t = SSL_is_int(not_null(d_14));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm i_42 (ATerm), ATerm j_42 (ATerm))
{
  ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL;
  k_14 = t;
  j_14 :
  if(match_cons(k_14, sym_Path_2))
    {
      l_14 = ATgetArgument(k_14, 0);
      m_14 = ATgetArgument(k_14, 1);
      {
        ATerm p_14 = NULL;
        t = not_null(l_14);
        {
          ATerm r_14 = NULL;
          t = i_42(t);
          {
            p_14 = t;
            {
              t = not_null(m_14);
              {
                t = j_42(t);
                {
                  r_14 = t;
                  t = (ATerm) ATmakeAppl(sym_Path_2, not_null(p_14), not_null(r_14));
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
ATerm Rec_2 (ATerm t, ATerm s_41 (ATerm), ATerm t_41 (ATerm))
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  b_15 = t;
  a_15 :
  if(match_cons(b_15, sym_Rec_2))
    {
      c_15 = ATgetArgument(b_15, 0);
      d_15 = ATgetArgument(b_15, 1);
      {
        ATerm g_15 = NULL;
        t = not_null(c_15);
        {
          ATerm i_15 = NULL;
          t = s_41(t);
          {
            g_15 = t;
            {
              t = not_null(d_15);
              {
                t = t_41(t);
                {
                  i_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(g_15), not_null(i_15));
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
ATerm SVar_1 (ATerm t, ATerm r_41 (ATerm))
{
  ATerm c_16 = NULL,l_16 = NULL;
  c_16 = t;
  b_16 :
  if(match_cons(c_16, sym_SVar_1))
    {
      l_16 = ATgetArgument(c_16, 0);
      {
        ATerm n_16 = NULL;
        t = not_null(l_16);
        {
          t = r_41(t);
          {
            n_16 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(n_16));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm g_42 (ATerm), ATerm h_42 (ATerm))
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
  v_16 = t;
  u_16 :
  if(match_cons(v_16, sym_Call_2))
    {
      w_16 = ATgetArgument(v_16, 0);
      x_16 = ATgetArgument(v_16, 1);
      {
        ATerm a_17 = NULL;
        t = not_null(w_16);
        {
          ATerm c_17 = NULL;
          t = g_42(t);
          {
            a_17 = t;
            {
              t = not_null(x_16);
              {
                t = h_42(t);
                {
                  c_17 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, not_null(a_17), not_null(c_17));
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
ATerm LChoice_2 (ATerm t, ATerm p_41 (ATerm), ATerm q_41 (ATerm))
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
  l_17 = t;
  k_17 :
  if(match_cons(l_17, sym_LChoice_2))
    {
      m_17 = ATgetArgument(l_17, 0);
      n_17 = ATgetArgument(l_17, 1);
      {
        ATerm s_17 = NULL;
        t = not_null(m_17);
        {
          ATerm z_17 = NULL;
          t = p_41(t);
          {
            s_17 = t;
            {
              t = not_null(n_17);
              {
                t = q_41(t);
                {
                  z_17 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(s_17), not_null(z_17));
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
ATerm Choice_2 (ATerm t, ATerm n_41 (ATerm), ATerm o_41 (ATerm))
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
  k_18 = t;
  i_18 :
  if(match_cons(k_18, sym_Choice_2))
    {
      l_18 = ATgetArgument(k_18, 0);
      m_18 = ATgetArgument(k_18, 1);
      {
        ATerm p_18 = NULL;
        t = not_null(l_18);
        {
          ATerm r_18 = NULL;
          t = n_41(t);
          {
            p_18 = t;
            {
              t = not_null(m_18);
              {
                t = o_41(t);
                {
                  r_18 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(p_18), not_null(r_18));
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
ATerm Seq_2 (ATerm t, ATerm l_41 (ATerm), ATerm m_41 (ATerm))
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
  a_19 = t;
  z_18 :
  if(match_cons(a_19, sym_Seq_2))
    {
      b_19 = ATgetArgument(a_19, 0);
      c_19 = ATgetArgument(a_19, 1);
      {
        ATerm f_19 = NULL;
        t = not_null(b_19);
        {
          ATerm h_19 = NULL;
          t = l_41(t);
          {
            f_19 = t;
            {
              t = not_null(c_19);
              {
                t = m_41(t);
                {
                  h_19 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_19), not_null(h_19));
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
ATerm Test_1 (ATerm t, ATerm j_41 (ATerm))
{
  ATerm p_19 = NULL,q_19 = NULL;
  p_19 = t;
  o_19 :
  if(match_cons(p_19, sym_Test_1))
    {
      q_19 = ATgetArgument(p_19, 0);
      {
        ATerm s_19 = NULL;
        t = not_null(q_19);
        {
          t = j_41(t);
          {
            s_19 = t;
            t = (ATerm) ATmakeAppl(sym_Test_1, not_null(s_19));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Not_1 (ATerm t, ATerm k_41 (ATerm))
{
  ATerm z_19 = NULL,a_20 = NULL;
  z_19 = t;
  y_19 :
  if(match_cons(z_19, sym_Not_1))
    {
      a_20 = ATgetArgument(z_19, 0);
      {
        ATerm c_20 = NULL;
        t = not_null(a_20);
        {
          t = k_41(t);
          {
            c_20 = t;
            t = (ATerm) ATmakeAppl(sym_Not_1, not_null(c_20));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm h_20 = NULL;
  h_20 = t;
  g_20 :
  if(!(match_cons(h_20, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm j_20 = NULL;
  j_20 = t;
  i_20 :
  if(!(match_cons(j_20, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm z_3 = t;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      PopChoice();
    }
  else
    {
      t = z_3;
      {
        ATerm a_4 = t;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            PopChoice();
          }
        else
          {
            t = a_4;
            {
              ATerm b_4 = t;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  PopChoice();
                }
              else
                {
                  t = b_4;
                  {
                    ATerm c_4 = t;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        PopChoice();
                      }
                    else
                      {
                        t = c_4;
                        {
                          ATerm d_4 = t;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              PopChoice();
                            }
                          else
                            {
                              t = d_4;
                              {
                                ATerm e_4 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = e_4;
                                    {
                                      ATerm f_4 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = f_4;
                                          {
                                            ATerm g_4 = t;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm l_0 (ATerm t)
                                                {
                                                  ATerm n_0 (ATerm t)
                                                  {
                                                    ATerm h_4 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = is_string_0(t);
                                                        PopChoice();
                                                      }
                                                    else
                                                      {
                                                        t = h_4;
                                                        t = Mod_2(t, is_string_0, is_string_0);
                                                      }
                                                    return(t);
                                                  }
                                                  t = SVar_1(t, n_0);
                                                  return(t);
                                                }
                                                ATerm m_0 (ATerm t)
                                                {
                                                  t = list_1(t, strategy_expression_0);
                                                  return(t);
                                                }
                                                t = Call_2(t, l_0, m_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = g_4;
                                                {
                                                  ATerm i_4 = t;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Rec_2(t, is_string_0, strategy_expression_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = i_4;
                                                      {
                                                        ATerm j_4 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Path_2(t, is_int_0, strategy_expression_0);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = j_4;
                                                            {
                                                              ATerm k_4 = t;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm o_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = Cong_2(t, is_string_0, o_0);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = k_4;
                                                                  {
                                                                    ATerm l_4 = t;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = One_1(t, strategy_expression_0);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = l_4;
                                                                        {
                                                                          ATerm m_4 = t;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Some_1(t, strategy_expression_0);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = m_4;
                                                                              {
                                                                                ATerm n_4 = t;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = All_1(t, strategy_expression_0);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = n_4;
                                                                                    {
                                                                                      ATerm o_4 = t;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Thread_1(t, strategy_expression_0);
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = o_4;
                                                                                          {
                                                                                            ATerm p_4 = t;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Match_1(t, term_expression_0);
                                                                                                PopChoice();
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = p_4;
                                                                                                {
                                                                                                  ATerm u_4 = t;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Build_1(t, term_expression_0);
                                                                                                      PopChoice();
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = u_4;
                                                                                                      {
                                                                                                        ATerm v_4 = t;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm p_0 (ATerm t)
                                                                                                            {
                                                                                                              t = list_1(t, is_string_0);
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Scope_2(t, p_0, strategy_expression_0);
                                                                                                            PopChoice();
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = v_4;
                                                                                                            {
                                                                                                              ATerm w_4 = t;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Where_1(t, strategy_expression_0);
                                                                                                                  PopChoice();
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = w_4;
                                                                                                                  {
                                                                                                                    ATerm x_4 = t;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm q_0 (ATerm t)
                                                                                                                        {
                                                                                                                          t = list_1(t, term_expression_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Prim_2(t, is_string_0, q_0);
                                                                                                                        PopChoice();
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = x_4;
                                                                                                                        {
                                                                                                                          ATerm y_4 = t;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm r_0 (ATerm t)
                                                                                                                              {
                                                                                                                                ATerm s_0 (ATerm t)
                                                                                                                                {
                                                                                                                                  t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = list_1(t, s_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Let_2(t, r_0, strategy_expression_0);
                                                                                                                              PopChoice();
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = y_4;
                                                                                                                              {
                                                                                                                                ATerm t_0 (ATerm t)
                                                                                                                                {
                                                                                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = debug_1(t, t_0);
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm m_20 = NULL;
  m_20 = t;
  t = SSL_is_string(not_null(m_20));
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm z_41 (ATerm), ATerm a_42 (ATerm))
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
  w_20 = t;
  v_20 :
  if(match_cons(w_20, sym_VarDec_2))
    {
      x_20 = ATgetArgument(w_20, 0);
      y_20 = ATgetArgument(w_20, 1);
      {
        ATerm b_21 = NULL;
        t = not_null(x_20);
        {
          ATerm d_21 = NULL;
          t = z_41(t);
          {
            b_21 = t;
            {
              t = not_null(y_20);
              {
                t = a_42(t);
                {
                  d_21 = t;
                  t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(b_21), not_null(d_21));
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
ATerm Mod_2 (ATerm t, ATerm j_40 (ATerm), ATerm k_40 (ATerm))
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
  m_21 = t;
  l_21 :
  if(match_cons(m_21, sym_Mod_2))
    {
      n_21 = ATgetArgument(m_21, 0);
      o_21 = ATgetArgument(m_21, 1);
      {
        ATerm r_21 = NULL;
        t = not_null(n_21);
        {
          ATerm t_21 = NULL;
          t = j_40(t);
          {
            r_21 = t;
            {
              t = not_null(o_21);
              {
                t = k_40(t);
                {
                  t_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Mod_2, not_null(r_21), not_null(t_21));
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
ATerm SDef_3 (ATerm t, ATerm w_41 (ATerm), ATerm x_41 (ATerm), ATerm y_41 (ATerm))
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL;
  d_22 = t;
  c_22 :
  if(match_cons(d_22, sym_SDef_3))
    {
      e_22 = ATgetArgument(d_22, 0);
      f_22 = ATgetArgument(d_22, 1);
      g_22 = ATgetArgument(d_22, 2);
      {
        ATerm k_22 = NULL;
        t = not_null(e_22);
        {
          ATerm m_22 = NULL;
          t = w_41(t);
          {
            k_22 = t;
            {
              t = not_null(f_22);
              {
                ATerm o_22 = NULL;
                t = x_41(t);
                {
                  m_22 = t;
                  {
                    t = not_null(g_22);
                    {
                      t = y_41(t);
                      {
                        o_22 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_22), not_null(m_22), not_null(o_22));
                      }
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
ATerm strategy_definition_0 (ATerm t)
{
  ATerm d_5 = t;
  if((PushChoice() == 0))
    {
      ATerm u_0 (ATerm t)
      {
        ATerm e_5 = t;
        if((PushChoice() == 0))
          {
            t = is_string_0(t);
            PopChoice();
          }
        else
          {
            t = e_5;
            t = Mod_2(t, is_string_0, is_string_0);
          }
        return(t);
      }
      ATerm v_0 (ATerm t)
      {
        ATerm w_0 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, w_0);
        return(t);
      }
      t = SDef_3(t, u_0, v_0, strategy_expression_0);
      PopChoice();
    }
  else
    {
      t = d_5;
      {
        ATerm x_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, x_0);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm m_57 (ATerm))
{
  ATerm u_22 (ATerm t)
  {
    ATerm g_5 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = g_5;
        t = Cons_2(t, m_57, u_22);
      }
    return(t);
  }
  t = u_22(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm r_40 (ATerm))
{
  ATerm y_22 = NULL,z_22 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym_Strategies_1))
    {
      z_22 = ATgetArgument(y_22, 0);
      {
        ATerm b_23 = NULL;
        t = not_null(z_22);
        {
          t = r_40(t);
          {
            b_23 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(b_23));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm t_40 (ATerm))
{
  ATerm i_23 = NULL,j_23 = NULL;
  i_23 = t;
  h_23 :
  if(match_cons(i_23, sym_Specification_1))
    {
      j_23 = ATgetArgument(i_23, 0);
      {
        ATerm l_23 = NULL;
        t = not_null(j_23);
        {
          t = t_40(t);
          {
            l_23 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(l_23));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm i_5 = t;
  if((PushChoice() == 0))
    {
      ATerm y_0 (ATerm t)
      {
        ATerm z_0 (ATerm t)
        {
          ATerm a_1 (ATerm t)
          {
            ATerm b_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, b_1);
            return(t);
          }
          t = Cons_2(t, a_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, z_0);
        return(t);
      }
      t = Specification_1(t, y_0);
      PopChoice();
    }
  else
    {
      t = i_5;
      {
        ATerm c_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, c_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm t_32 (ATerm), ATerm u_32 (ATerm))
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
  t_23 = t;
  s_23 :
  if(match_cons(t_23, sym__2))
    {
      u_23 = ATgetArgument(t_23, 0);
      v_23 = ATgetArgument(t_23, 1);
      {
        ATerm y_23 = NULL;
        t = not_null(u_23);
        {
          ATerm a_24 = NULL;
          t = t_32(t);
          {
            y_23 = t;
            {
              t = not_null(v_23);
              {
                t = u_32(t);
                {
                  a_24 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_23), not_null(a_24));
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
  ATerm h_24 = NULL;
  ATerm j_5;
  j_5 = t;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm i_24 = NULL,j_24 = NULL;
      i_24 = t;
      g_24 :
      if(match_cons(i_24, sym_Program_1))
        {
          j_24 = ATgetArgument(i_24, 0);
          if(((h_24 != NULL) && (h_24 != j_24)))
            _fail(j_24);
          else
            h_24 = j_24;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, d_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), not_null(h_24)), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeInt(1);
          t = exit_0(t);
        }
      }
    }
  }
  t = j_5;
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
  ATerm q_24 = NULL,r_24 = NULL;
  ATerm e_1 (ATerm t)
  {
    ATerm f_1 (ATerm t)
    {
      ATerm k_5 = t;
      if((PushChoice() == 0))
        {
          ATerm g_1 (ATerm t)
          {
            ATerm s_24 = NULL;
            s_24 = t;
            l_24 :
            if(!(match_cons(s_24, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, g_1);
          PopChoice();
          _fail(t);
        }
      else
        t = k_5;
      return(t);
    }
    t = _2(t, f_1, _id);
    {
      ATerm h_1 (ATerm t)
      {
        ATerm i_1 (ATerm t)
        {
          ATerm t_24 = NULL,u_24 = NULL;
          t_24 = t;
          n_24 :
          if(match_cons(t_24, sym_Runtime_1))
            {
              u_24 = ATgetArgument(t_24, 0);
              if(((r_24 != NULL) && (r_24 != u_24)))
                _fail(u_24);
              else
                r_24 = u_24;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, i_1);
        return(t);
      }
      t = _2(t, h_1, _id);
      {
        ATerm j_1 (ATerm t)
        {
          ATerm k_1 (ATerm t)
          {
            ATerm v_24 = NULL,w_24 = NULL;
            v_24 = t;
            p_24 :
            if(match_cons(v_24, sym_Program_1))
              {
                w_24 = ATgetArgument(v_24, 0);
                if(((q_24 != NULL) && (q_24 != w_24)))
                  _fail(w_24);
                else
                  q_24 = w_24;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, k_1);
          return(t);
        }
        t = _2(t, j_1, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), not_null(r_24)), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), not_null(q_24)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, e_1);
  {
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
  b_25 = t;
  a_25 :
  if(match_cons(b_25, sym__2))
    {
      c_25 = ATgetArgument(b_25, 0);
      d_25 = ATgetArgument(b_25, 1);
      t = SSL_WriteToTextFile(not_null(c_25), not_null(d_25));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL;
  j_25 = t;
  i_25 :
  if(match_cons(j_25, sym__2))
    {
      k_25 = ATgetArgument(j_25, 0);
      l_25 = ATgetArgument(j_25, 1);
      t = SSL_WriteToBinaryFile(not_null(k_25), not_null(l_25));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm t_25 = NULL;
  ATerm l_5;
  l_5 = t;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm m_5 = t;
      if((PushChoice() == 0))
        {
          ATerm m_1 (ATerm t)
          {
            ATerm u_25 = NULL,v_25 = NULL;
            u_25 = t;
            q_25 :
            if(match_cons(u_25, sym_Output_1))
              {
                v_25 = ATgetArgument(u_25, 0);
                if(((t_25 != NULL) && (t_25 != v_25)))
                  _fail(v_25);
                else
                  t_25 = v_25;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, m_1);
          PopChoice();
        }
      else
        {
          t = m_5;
          {
            ATerm w_25 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            {
              w_25 = t;
              if(((t_25 != NULL) && (t_25 != w_25)))
                _fail(w_25);
              else
                t_25 = w_25;
            }
          }
        }
      return(t);
    }
    t = _2(t, l_1, _id);
  }
  t = l_5;
  {
    ATerm n_1 (ATerm t)
    {
      ATerm o_1 (ATerm t)
      {
        t = not_null(t_25);
        return(t);
      }
      t = split_2(t, o_1, _id);
      return(t);
    }
    t = _2(t, _id, n_1);
    {
      ATerm n_5 = t;
      if((PushChoice() == 0))
        {
          ATerm p_1 (ATerm t)
          {
            ATerm q_1 (ATerm t)
            {
              ATerm x_25 = NULL;
              x_25 = t;
              s_25 :
              if(!(match_cons(x_25, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, q_1);
            return(t);
          }
          t = _2(t, p_1, WriteToBinaryFile_0);
          PopChoice();
        }
      else
        {
          t = n_5;
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
ATerm apply_strategy_1 (ATerm t, ATerm h_48 (ATerm))
{
  ATerm d_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL;
  ATerm o_5;
  o_5 = t;
  t = dtime_0(t);
  t = o_5;
  {
    t = h_48(t);
    {
      ATerm t_5;
      t_5 = t;
      {
        ATerm e_26 = NULL;
        t = dtime_0(t);
        {
          e_26 = t;
          if(((d_26 != NULL) && (d_26 != e_26)))
            _fail(e_26);
          else
            d_26 = e_26;
        }
      }
      t = t_5;
      {
        f_26 = t;
        c_26 :
        if(match_cons(f_26, sym__2))
          {
            g_26 = ATgetArgument(f_26, 0);
            h_26 = ATgetArgument(f_26, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_26)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(d_26))), not_null(h_26));
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
  ATerm n_26 = NULL;
  n_26 = t;
  t = SSL_ReadFromFile(not_null(n_26));
  return(t);
}
ATerm split_2 (ATerm t, ATerm y_50 (ATerm), ATerm z_50 (ATerm))
{
  ATerm s_26 = NULL,u_26 = NULL;
  ATerm u_5;
  u_5 = t;
  {
    ATerm t_26 = NULL;
    t = y_50(t);
    {
      t_26 = t;
      if(((s_26 != NULL) && (s_26 != t_26)))
        _fail(t_26);
      else
        s_26 = t_26;
    }
  }
  t = u_5;
  {
    ATerm v_26 = NULL;
    t = z_50(t);
    {
      v_26 = t;
      if(((u_26 != NULL) && (u_26 != v_26)))
        _fail(v_26);
      else
        u_26 = v_26;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_26), not_null(u_26));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm b_27 = NULL;
  ATerm w_5;
  w_5 = t;
  {
    ATerm y_5 = t;
    if((PushChoice() == 0))
      {
        ATerm r_1 (ATerm t)
        {
          ATerm c_27 = NULL,d_27 = NULL;
          c_27 = t;
          z_26 :
          if(match_cons(c_27, sym_Input_1))
            {
              d_27 = ATgetArgument(c_27, 0);
              if(((b_27 != NULL) && (b_27 != d_27)))
                _fail(d_27);
              else
                b_27 = d_27;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, r_1);
        PopChoice();
      }
    else
      {
        t = y_5;
        {
          ATerm e_27 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          {
            e_27 = t;
            if(((b_27 != NULL) && (b_27 != e_27)))
              _fail(e_27);
            else
              b_27 = e_27;
          }
        }
      }
  }
  t = w_5;
  {
    ATerm s_1 (ATerm t)
    {
      t = not_null(b_27);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, s_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm i_27 = NULL;
  i_27 = t;
  h_27 :
  if(!(match_cons(i_27, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_48 (ATerm))
{
  ATerm t_1 (ATerm t)
  {
    ATerm z_5 = t;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = z_5;
        {
          ATerm a_6 = t;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = a_6;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, t_1);
  t = g_48(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm k_27 = NULL;
  k_27 = t;
  t = SSL_table_create(not_null(k_27));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm o_27 = NULL;
  o_27 = t;
  {
    ATerm b_6;
    b_6 = t;
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), not_null(o_27));
          t = table_put_0(t);
        }
      }
    }
    t = b_6;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
  w_27 = t;
  u_27 :
  if(match_string(w_27, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(w_27) == AT_LIST) && ((ATermList) w_27 != ATempty)))
        {
          x_27 = ATgetFirst((ATermList) w_27);
          y_27 = (ATerm) ATgetNext((ATermList) w_27);
          v_27 :
          if(((ATgetType(y_27) == AT_LIST) && ((ATermList) y_27 != ATempty)))
            {
              z_27 = ATgetFirst((ATermList) y_27);
              a_28 = (ATerm) ATgetNext((ATermList) y_27);
              {
                ATerm e_28 = NULL;
                ATerm c_6;
                c_6 = t;
                {
                  t = not_null(x_27);
                  t = h_0(t);
                }
                t = c_6;
                {
                  ATerm f_28 = NULL;
                  t = not_null(z_27);
                  {
                    t = i_0(t);
                    {
                      f_28 = t;
                      if(((e_28 != NULL) && (e_28 != f_28)))
                        _fail(f_28);
                      else
                        e_28 = f_28;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_28)), not_null(e_28));
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
  ATerm d_6 = t;
  if((PushChoice() == 0))
    {
      ATerm u_1 (ATerm t)
      {
        ATerm u_28 = NULL;
        u_28 = t;
        j_28 :
        if(!(match_string(u_28, "-S")))
          {
            if(!(match_string(u_28, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm v_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm w_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, u_1, v_1, w_1);
      PopChoice();
    }
  else
    {
      t = d_6;
      {
        ATerm h_6 = t;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              ATerm v_28 = NULL;
              v_28 = t;
              k_28 :
              if(!(match_string(v_28, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm y_1 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm z_1 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, x_1, y_1, z_1);
            PopChoice();
          }
        else
          {
            t = h_6;
            {
              ATerm j_6 = t;
              if((PushChoice() == 0))
                {
                  ATerm a_2 (ATerm t)
                  {
                    ATerm w_28 = NULL;
                    w_28 = t;
                    l_28 :
                    if(!(match_string(w_28, "-v")))
                      {
                        if(!(match_string(w_28, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm b_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm c_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, a_2, b_2, c_2);
                  PopChoice();
                }
              else
                {
                  t = j_6;
                  {
                    ATerm k_6 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm d_2 (ATerm t)
                        {
                          ATerm x_28 = NULL;
                          x_28 = t;
                          m_28 :
                          if(!(match_string(x_28, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm e_2 (ATerm t)
                        {
                          ATerm y_28 = NULL;
                          ATerm z_28 = NULL;
                          z_28 = t;
                          if(((y_28 != NULL) && (y_28 != z_28)))
                            _fail(z_28);
                          else
                            y_28 = z_28;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(y_28));
                          return(t);
                        }
                        ATerm f_2 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, d_2, e_2, f_2);
                        PopChoice();
                      }
                    else
                      {
                        t = k_6;
                        {
                          ATerm l_6 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm g_2 (ATerm t)
                              {
                                ATerm a_29 = NULL;
                                a_29 = t;
                                o_28 :
                                if(!(match_string(a_29, "-i")))
                                  {
                                    if(!(match_string(a_29, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm h_2 (ATerm t)
                              {
                                ATerm b_29 = NULL;
                                ATerm c_29 = NULL;
                                c_29 = t;
                                if(((b_29 != NULL) && (b_29 != c_29)))
                                  _fail(c_29);
                                else
                                  b_29 = c_29;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(b_29));
                                return(t);
                              }
                              ATerm i_2 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, g_2, h_2, i_2);
                              PopChoice();
                            }
                          else
                            {
                              t = l_6;
                              {
                                ATerm m_6 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_2 (ATerm t)
                                    {
                                      ATerm d_29 = NULL;
                                      d_29 = t;
                                      q_28 :
                                      if(!(match_string(d_29, "-o")))
                                        {
                                          if(!(match_string(d_29, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm k_2 (ATerm t)
                                    {
                                      ATerm e_29 = NULL;
                                      ATerm f_29 = NULL;
                                      f_29 = t;
                                      if(((e_29 != NULL) && (e_29 != f_29)))
                                        _fail(f_29);
                                      else
                                        e_29 = f_29;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_29));
                                      return(t);
                                    }
                                    ATerm l_2 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, j_2, k_2, l_2);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = m_6;
                                    {
                                      ATerm n_6 = t;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_2 (ATerm t)
                                          {
                                            ATerm g_29 = NULL;
                                            g_29 = t;
                                            s_28 :
                                            if(!(match_string(g_29, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm n_2 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm o_2 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, m_2, n_2, o_2);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = n_6;
                                          {
                                            ATerm p_2 (ATerm t)
                                            {
                                              ATerm h_29 = NULL;
                                              h_29 = t;
                                              t_28 :
                                              if(!(match_string(h_29, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm q_2 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm r_2 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, p_2, q_2, r_2);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm m_29 = NULL;
  m_29 = t;
  t = SSL_table_destroy(not_null(m_29));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_29 = NULL;
  q_29 = t;
  t = SSL_exit(not_null(q_29));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm u_29 = NULL;
  u_29 = t;
  t = SSL_implode_string(not_null(u_29));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm y_57 (ATerm))
{
  ATerm x_29 (ATerm t)
  {
    ATerm o_6 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, x_29);
        PopChoice();
      }
    else
      {
        t = o_6;
        {
          t = Nil_0(t);
          t = y_57(t);
        }
      }
    return(t);
  }
  t = x_29(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_6 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = t_6;
      {
        ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
        a_30 = t;
        z_29 :
        if(((ATgetType(a_30) == AT_LIST) && ((ATermList) a_30 != ATempty)))
          {
            b_30 = ATgetFirst((ATermList) a_30);
            c_30 = (ATerm) ATgetNext((ATermList) a_30);
            {
              t = not_null(b_30);
              {
                ATerm s_2 (ATerm t)
                {
                  t = not_null(c_30);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, s_2);
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
  ATerm i_30 = NULL;
  i_30 = t;
  t = SSL_explode_string(not_null(i_30));
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
ATerm long_description_1 (ATerm t, ATerm n_46 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_57 (ATerm))
{
  ATerm l_30 (ATerm t)
  {
    ATerm u_6 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = u_6;
        t = Cons_2(t, k_57, l_30);
      }
    return(t);
  }
  t = l_30(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL;
  s_30 = t;
  p_30 :
  if(((ATgetType(s_30) == AT_LIST) && ((ATermList) s_30 != ATempty)))
    {
      q_30 = ATgetFirst((ATermList) s_30);
      r_30 = (ATerm) ATgetNext((ATermList) s_30);
      {
        t = not_null(r_30);
        {
          ATerm t_2 (ATerm t)
          {
            ATerm v_30 = NULL;
            ATerm w_30 = NULL;
            t = g_0(t);
            {
              w_30 = t;
              if(((v_30 != NULL) && (v_30 != w_30)))
                _fail(w_30);
              else
                v_30 = w_30;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(v_30)), not_null(q_30));
            return(t);
          }
          t = reverse_1(t, t_2);
        }
      }
    }
  else
    {
      if(((ATermList) s_30 == ATempty))
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
  ATerm u_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, u_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm m_46 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm c_34 (ATerm))
{
  ATerm d_31 = NULL,e_31 = NULL;
  d_31 = t;
  c_31 :
  if(match_cons(d_31, sym_Program_1))
    {
      e_31 = ATgetArgument(d_31, 0);
      {
        ATerm g_31 = NULL;
        t = not_null(e_31);
        {
          t = c_34(t);
          {
            g_31 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_31));
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
  ATerm o_31 = NULL;
  ATerm v_2 (ATerm t)
  {
    ATerm w_2 (ATerm t)
    {
      ATerm p_31 = NULL;
      p_31 = t;
      if(((o_31 != NULL) && (o_31 != p_31)))
        _fail(p_31);
      else
        o_31 = p_31;
      return(t);
    }
    t = Program_1(t, w_2);
    return(t);
  }
  t = option_defined_1(t, v_2);
  {
    ATerm x_2 (ATerm t)
    {
      ATerm s_31 = NULL;
      ATerm t_31 = NULL;
      t = (ATerm) ATmakeAppl(sym__0);
      {
        ATerm y_2 (ATerm t)
        {
          t = not_null(o_31);
          return(t);
        }
        t = short_description_1(t, y_2);
        {
          t = concat_strings_0(t);
          {
            t_31 = t;
            if(((s_31 != NULL) && (s_31 != t_31)))
              _fail(t_31);
            else
              s_31 = t_31;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, not_null(s_31)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, x_2);
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
                ATerm z_2 (ATerm t)
                {
                  ATerm u_31 = NULL;
                  u_31 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_31)), (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue))));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, z_2);
                {
                  ATerm a_3 (ATerm t)
                  {
                    ATerm w_31 = NULL;
                    ATerm x_31 = NULL;
                    t = (ATerm) ATmakeAppl(sym__0);
                    {
                      ATerm b_3 (ATerm t)
                      {
                        t = not_null(o_31);
                        return(t);
                      }
                      t = long_description_1(t, b_3);
                      {
                        t = concat_strings_0(t);
                        {
                          x_31 = t;
                          if(((w_31 != NULL) && (w_31 != x_31)))
                            _fail(x_31);
                          else
                            w_31 = x_31;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(w_31)), (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue))));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, a_3);
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
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
  g_32 = t;
  f_32 :
  if(match_cons(g_32, sym__2))
    {
      h_32 = ATgetArgument(g_32, 0);
      i_32 = ATgetArgument(g_32, 1);
      {
        ATerm w_6;
        w_6 = t;
        t = SSL_printnl(not_null(h_32), not_null(i_32));
        t = w_6;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm d_34 (ATerm))
{
  ATerm p_32 = NULL,q_32 = NULL;
  p_32 = t;
  o_32 :
  if(match_cons(p_32, sym_Undefined_1))
    {
      q_32 = ATgetArgument(p_32, 0);
      {
        ATerm s_32 = NULL;
        t = not_null(q_32);
        {
          t = d_34(t);
          {
            s_32 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_32));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm s_57 (ATerm))
{
  ATerm y_32 (ATerm t)
  {
    ATerm y_6 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, s_57, _id);
        PopChoice();
      }
    else
      {
        t = y_6;
        t = Cons_2(t, _id, y_32);
      }
    return(t);
  }
  t = y_32(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_47 (ATerm))
{
  t = fetch_1(t, l_47);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_33 = NULL;
  a_33 = t;
  z_32 :
  if(!(match_cons(a_33, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_64 (ATerm))
{
  ATerm z_6 = t;
  if((PushChoice() == 0))
    {
      t = e_64(t);
      PopChoice();
    }
  else
    {
      t = z_6;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
  d_33 = t;
  c_33 :
  if(match_cons(d_33, sym__2))
    {
      e_33 = ATgetArgument(d_33, 0);
      f_33 = ATgetArgument(d_33, 1);
      t = SSL_table_get(not_null(e_33), not_null(f_33));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL;
  m_33 = t;
  l_33 :
  if(match_cons(m_33, sym__3))
    {
      n_33 = ATgetArgument(m_33, 0);
      o_33 = ATgetArgument(m_33, 1);
      p_33 = ATgetArgument(m_33, 2);
      {
        ATerm a_7;
        a_7 = t;
        {
          ATerm t_33 = NULL;
          ATerm u_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_33), not_null(o_33));
          {
            ATerm b_7 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                PopChoice();
              }
            else
              {
                t = b_7;
                t = (ATerm) ATempty;
              }
            {
              u_33 = t;
              if(((t_33 != NULL) && (t_33 != u_33)))
                _fail(u_33);
              else
                t_33 = u_33;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_33), not_null(o_33), (ATerm) ATinsert(CheckATermList(not_null(t_33)), not_null(p_33)));
            t = table_put_0(t);
          }
        }
        t = a_7;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm r_46 (ATerm))
{
  ATerm y_33 = NULL;
  ATerm z_33 = NULL;
  t = (ATerm) ATmakeAppl(sym__0);
  {
    t = r_46(t);
    {
      z_33 = t;
      if(((y_33 != NULL) && (y_33 != z_33)))
        _fail(z_33);
      else
        y_33 = z_33;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), not_null(y_33));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL;
  h_34 = t;
  g_34 :
  if(match_string(h_34, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(h_34) == AT_LIST) && ((ATermList) h_34 != ATempty)))
        {
          i_34 = ATgetFirst((ATermList) h_34);
          j_34 = (ATerm) ATgetNext((ATermList) h_34);
          {
            ATerm m_34 = NULL;
            ATerm c_7;
            c_7 = t;
            {
              t = not_null(i_34);
              t = d_0(t);
            }
            t = c_7;
            {
              ATerm n_34 = NULL;
              t = (ATerm) ATmakeAppl(sym__0);
              {
                t = e_0(t);
                {
                  n_34 = t;
                  if(((m_34 != NULL) && (m_34 != n_34)))
                    _fail(n_34);
                  else
                    m_34 = n_34;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(j_34)), not_null(m_34));
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
  ATerm c_3 (ATerm t)
  {
    ATerm s_34 = NULL;
    s_34 = t;
    r_34 :
    if(!(match_string(s_34, "--help")))
      {
        if(!(match_string(s_34, "-h")))
          {
            if(!(match_string(s_34, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, c_3, d_3, e_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
  v_34 = t;
  u_34 :
  if(((ATgetType(v_34) == AT_LIST) && ((ATermList) v_34 != ATempty)))
    {
      w_34 = ATgetFirst((ATermList) v_34);
      x_34 = (ATerm) ATgetNext((ATermList) v_34);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_34)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_34)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_43 (ATerm), ATerm c_43 (ATerm))
{
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
  f_35 = t;
  e_35 :
  if(((ATgetType(f_35) == AT_LIST) && ((ATermList) f_35 != ATempty)))
    {
      g_35 = ATgetFirst((ATermList) f_35);
      h_35 = (ATerm) ATgetNext((ATermList) f_35);
      {
        ATerm k_35 = NULL;
        t = not_null(g_35);
        {
          ATerm m_35 = NULL;
          t = b_43(t);
          {
            k_35 = t;
            {
              t = not_null(h_35);
              {
                t = c_43(t);
                {
                  m_35 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_35)), not_null(k_35));
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
ATerm Nil_0 (ATerm t)
{
  ATerm s_35 = NULL;
  s_35 = t;
  r_35 :
  if(((ATermList) s_35 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm p_46 (ATerm))
{
  ATerm d_7;
  d_7 = t;
  {
    ATerm f_3 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = p_46(t);
      return(t);
    }
    t = try_1(t, f_3);
  }
  t = d_7;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm u_35 = NULL;
      u_35 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_35));
      return(t);
    }
    ATerm h_3 (ATerm t)
    {
      ATerm h_7 = t;
      if((PushChoice() == 0))
        {
          ATerm j_7 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = j_7;
              {
                t = p_46(t);
                t = Cons_2(t, _id, h_3);
              }
            }
          PopChoice();
        }
      else
        {
          t = h_7;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_3, h_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
  ATerm k_7;
  k_7 = t;
  {
    ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL;
    d_36 = t;
    z_35 :
    if(match_cons(d_36, sym__3))
      {
        e_36 = ATgetArgument(d_36, 0);
        f_36 = ATgetArgument(d_36, 1);
        g_36 = ATgetArgument(d_36, 2);
        {
          if(((a_36 != NULL) && (a_36 != e_36)))
            _fail(e_36);
          else
            a_36 = e_36;
          {
            if(((b_36 != NULL) && (b_36 != f_36)))
              _fail(f_36);
            else
              b_36 = f_36;
            {
              if(((c_36 != NULL) && (c_36 != g_36)))
                _fail(g_36);
              else
                c_36 = g_36;
              t = SSL_table_put(not_null(a_36), not_null(b_36), not_null(c_36));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = k_7;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_46 (ATerm))
{
  ATerm j_36 = NULL;
  ATerm l_7;
  l_7 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
    t = table_put_0(t);
  }
  t = l_7;
  {
    ATerm i_3 (ATerm t)
    {
      ATerm m_7 = t;
      if((PushChoice() == 0))
        {
          t = o_46(t);
          PopChoice();
        }
      else
        {
          t = m_7;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_3);
    {
      ATerm j_3 (ATerm t)
      {
        ATerm n_7 = t;
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
            t = n_7;
            {
              ATerm k_3 (ATerm t)
              {
                ATerm l_3 (ATerm t)
                {
                  ATerm k_36 = NULL;
                  k_36 = t;
                  if(((j_36 != NULL) && (j_36 != k_36)))
                    _fail(k_36);
                  else
                    j_36 = k_36;
                  return(t);
                }
                t = Undefined_1(t, l_3);
                return(t);
              }
              t = option_defined_1(t, k_3);
              {
                ATerm r_7;
                r_7 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(j_36)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                  t = printnl_0(t);
                }
                t = r_7;
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
      t = try_1(t, j_3);
      {
        ATerm t_7;
        t_7 = t;
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
          t = table_destroy_0(t);
        }
        t = t_7;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_47 (ATerm), ATerm w_47 (ATerm), ATerm x_47 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm u_7 = t;
    if((PushChoice() == 0))
      {
        t = w_47(t);
        PopChoice();
      }
    else
      {
        t = u_7;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, m_3);
  {
    t = store_options_0(t);
    {
      ATerm v_7 = t;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, x_47);
          PopChoice();
        }
      else
        {
          t = v_7;
          {
            ATerm w_7 = t;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, v_47);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                PopChoice();
              }
            else
              {
                t = w_7;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_47 (ATerm), ATerm r_47 (ATerm))
{
  t = iowrap_3(t, q_47, r_47, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm n_47 (ATerm))
{
  ATerm n_3 (ATerm t)
  {
    t = _2(t, _id, n_47);
    return(t);
  }
  t = iowrap_2(t, n_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
