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
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Explode_2 (ATerm, ATerm i_52 (ATerm), ATerm j_52 (ATerm));
ATerm pat_td_1 (ATerm, ATerm e_56 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm c_52 (ATerm), ATerm d_52 (ATerm));
ATerm Con_3 (ATerm, ATerm z_51 (ATerm), ATerm a_52 (ATerm), ATerm b_52 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm e_76 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm k_53 (ATerm));
ATerm Specification_1 (ATerm, ATerm m_53 (ATerm));
ATerm spaste_1 (ATerm, ATerm q_56 (ATerm));
ATerm Rec_2 (ATerm, ATerm l_54 (ATerm), ATerm m_54 (ATerm));
ATerm Let_2 (ATerm, ATerm n_54 (ATerm), ATerm o_54 (ATerm));
ATerm sboundin_3 (ATerm, ATerm r_56 (ATerm), ATerm s_56 (ATerm), ATerm t_56 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm k_54 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm k_59 (ATerm, ATerm (ATerm)), ATerm l_59 (ATerm), ATerm m_59 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm n_59 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm DeclareVariables_0 (ATerm);
ATerm RDtoSD_0 (ATerm);
ATerm MkCall_0 (ATerm);
ATerm MkCongDef_0 (ATerm);
ATerm MkCongDefs_0 (ATerm);
ATerm congdefs_0 (ATerm);
ATerm RulesToSdefs_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm CheckConsError_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm b_63 (ATerm));
ATerm CheckCons_0 (ATerm);
ATerm manytd_1 (ATerm, ATerm m_77 (ATerm));
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm w_62 (ATerm));
ATerm restore_always_2 (ATerm, ATerm c_79 (ATerm), ATerm d_79 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm v_62 (ATerm));
ATerm scope_2 (ATerm, ATerm x_62 (ATerm), ATerm y_62 (ATerm));
ATerm check_constructors_p__2 (ATerm, ATerm g_56 (ATerm), ATerm h_56 (ATerm));
ATerm check_constructors_0 (ATerm);
ATerm assert_1 (ATerm, ATerm z_62 (ATerm));
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm GenerateCheckRule_0 (ATerm);
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm p_57 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm a_54 (ATerm), ATerm b_54 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm m_56 (ATerm));
ATerm Var_1 (ATerm, ATerm w_53 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm c_59 (ATerm), ATerm d_59 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm i_59 (ATerm), ATerm j_59 (ATerm, ATerm (ATerm)));
ATerm Fst_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm w_58 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm l_73 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm q_73 (ATerm));
ATerm substitute_6 (ATerm, ATerm u_59 (ATerm), ATerm v_59 (ATerm, ATerm (ATerm)), ATerm w_59 (ATerm), ATerm x_59 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm y_59 (ATerm, ATerm (ATerm)), ATerm z_59 (ATerm));
ATerm substitute_5 (ATerm, ATerm b_60 (ATerm), ATerm c_60 (ATerm, ATerm (ATerm)), ATerm d_60 (ATerm), ATerm e_60 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm f_60 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm n_57 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm o_57 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm MsgR_0 (ATerm);
ATerm MsgE_0 (ATerm);
ATerm MsgU_0 (ATerm);
ATerm MsgS_0 (ATerm);
ATerm MkMsg_0 (ATerm);
ATerm err_msg_0 (ATerm);
ATerm _3 (ATerm, ATerm o_45 (ATerm), ATerm p_45 (ATerm), ATerm q_45 (ATerm));
ATerm Overlay_3 (ATerm, ATerm e_53 (ATerm), ATerm f_53 (ATerm), ATerm g_53 (ATerm));
ATerm Union_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm explode_term_0 (ATerm);
ATerm default_join_0 (ATerm);
ATerm SeqUnion_0 (ATerm);
ATerm cart_1 (ATerm, ATerm g_70 (ATerm));
ATerm seqs_join_0 (ATerm);
ATerm JoinScope_1 (ATerm, ATerm j_56 (ATerm));
ATerm UDjoin_0 (ATerm);
ATerm Cong_2 (ATerm, ATerm d_55 (ATerm), ATerm e_55 (ATerm));
ATerm use_term_0 (ATerm);
ATerm def_term_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm p_52 (ATerm), ATerm q_52 (ATerm), ATerm r_52 (ATerm));
ATerm BAM_3 (ATerm, ATerm w_51 (ATerm), ATerm x_51 (ATerm), ATerm y_51 (ATerm));
ATerm BA_2 (ATerm, ATerm u_51 (ATerm), ATerm v_51 (ATerm));
ATerm AM_2 (ATerm, ATerm s_51 (ATerm), ATerm t_51 (ATerm));
ATerm MA_2 (ATerm, ATerm q_51 (ATerm), ATerm r_51 (ATerm));
ATerm Match_1 (ATerm, ATerm l_55 (ATerm));
ATerm Build_1 (ATerm, ATerm m_55 (ATerm));
ATerm constructs_1 (ATerm, ATerm i_56 (ATerm));
ATerm use_def_0 (ATerm);
ATerm RDef_3 (ATerm, ATerm x_52 (ATerm), ATerm y_52 (ATerm), ATerm z_52 (ATerm));
ATerm SDef_3 (ATerm, ATerm p_54 (ATerm), ATerm q_54 (ATerm), ATerm r_54 (ATerm));
ATerm check_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm i_53 (ATerm));
ATerm Signature_1 (ATerm, ATerm h_53 (ATerm));
ATerm spec_use_def_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm strings_to_vars_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm isect_0 (ATerm);
ATerm new_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm SplitDynamicRule_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm split_dynamic_rules_0 (ATerm);
ATerm dist_scope_1 (ATerm, ATerm f_79 (ATerm));
ATerm one_dist_1 (ATerm, ATerm m_73 (ATerm));
ATerm env_oncetd_1 (ATerm, ATerm b_74 (ATerm));
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm s_77 (ATerm), ATerm t_77 (ATerm));
ATerm repeat_1 (ATerm, ATerm v_77 (ATerm));
ATerm listtd_1 (ATerm, ATerm x_72 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm a_53 (ATerm));
ATerm Scope_2 (ATerm, ATerm p_55 (ATerm), ATerm q_55 (ATerm));
ATerm tboundin_3 (ATerm, ATerm n_56 (ATerm), ATerm o_56 (ATerm), ATerm p_56 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm x_66 (ATerm), ATerm y_66 (ATerm), ATerm z_66 (ATerm));
ATerm crush_3 (ATerm, ATerm k_68 (ATerm), ATerm l_68 (ATerm), ATerm m_68 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm j_78 (ATerm), ATerm k_78 (ATerm));
ATerm for_3 (ATerm, ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm o_78 (ATerm));
ATerm HdMember_1 (ATerm, ATerm z_67 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm t_57 (ATerm), ATerm u_57 (ATerm), ATerm v_57 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm q_74 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm p_59 (ATerm), ATerm q_59 (ATerm));
ATerm alltd_1 (ATerm, ATerm s_76 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm l_70 (ATerm));
ATerm zip_1 (ATerm, ATerm n_70 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm r_59 (ATerm), ATerm s_59 (ATerm));
ATerm substitute_1 (ATerm, ATerm t_59 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm OpName_0 (ATerm);
ATerm OpNames_0 (ATerm);
ATerm OLName_0 (ATerm);
ATerm Names_0 (ATerm);
ATerm filter_1 (ATerm, ATerm b_66 (ATerm));
ATerm const_names_0 (ATerm);
ATerm vars_to_consts_0 (ATerm);
ATerm MkSpec_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Combine_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm v_66 (ATerm), ATerm w_66 (ATerm));
ATerm NormBSIG_0 (ATerm);
ATerm normalize_sigs_0 (ATerm);
ATerm NormBSP_0 (ATerm);
ATerm BSpecs_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm o_74 (ATerm));
ATerm DefineSugar_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm _2 (ATerm, ATerm m_45 (ATerm), ATerm n_45 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm s_62 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm j_65 (ATerm), ATerm k_65 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_62 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_72 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm y_60 (ATerm));
ATerm map_1 (ATerm, ATerm v_71 (ATerm));
ATerm reverse_1 (ATerm, ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm x_60 (ATerm));
ATerm Program_1 (ATerm, ATerm v_46 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm w_46 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_72 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_61 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_78 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm c_61 (ATerm));
ATerm Option_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm u_55 (ATerm), ATerm v_55 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm a_61 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm z_60 (ATerm));
ATerm iowrap_3 (ATerm, ATerm g_62 (ATerm), ATerm h_62 (ATerm), ATerm i_62 (ATerm));
ATerm iowrap_2 (ATerm, ATerm b_62 (ATerm), ATerm c_62 (ATerm));
ATerm iowrap_1 (ATerm, ATerm y_61 (ATerm));
ATerm frontend_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Expl_0 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
  q_5 = t;
  o_5 :
  if(match_cons(q_5, sym_ExplodeCong_2))
    {
      r_5 = ATgetArgument(q_5, 0);
      p_5 = ATgetArgument(q_5, 1);
      {
        ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
        ATerm y_5 = NULL;
        ATerm z_5 = NULL;
        t = new_0(t);
        {
          y_5 = t;
          {
            if(((u_5 != NULL) && (u_5 != y_5)))
              _fail(y_5);
            else
              u_5 = y_5;
            {
              ATerm a_6 = NULL;
              t = new_0(t);
              {
                z_5 = t;
                {
                  if(((v_5 != NULL) && (v_5 != z_5)))
                    _fail(z_5);
                  else
                    v_5 = z_5;
                  {
                    ATerm b_6 = NULL;
                    t = new_0(t);
                    {
                      a_6 = t;
                      {
                        if(((w_5 != NULL) && (w_5 != a_6)))
                          _fail(a_6);
                        else
                          w_5 = a_6;
                        {
                          t = new_0(t);
                          {
                            b_6 = t;
                            if(((x_5 != NULL) && (x_5 != b_6)))
                              _fail(b_6);
                            else
                              x_5 = b_6;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(x_5)), not_null(w_5)), not_null(v_5)), not_null(u_5)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_5)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_5)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(r_5), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_5)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_5))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_5), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_5)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_5))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_5))), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_5)))))));
      }
    }
  else
    {
      if(match_cons(q_5, sym_Build_1))
        {
          r_5 = ATgetArgument(q_5, 0);
          {
            ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL;
            ATerm h_6 = NULL;
            ATerm l_6 = NULL;
            t = new_0(t);
            {
              h_6 = t;
              {
                if(((f_6 != NULL) && (f_6 != h_6)))
                  _fail(h_6);
                else
                  f_6 = h_6;
                {
                  t = not_null(r_5);
                  {
                    ATerm c_0 (ATerm t)
                    {
                      ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL;
                      i_6 = t;
                      h_5 :
                      if(match_cons(i_6, sym_Explode_2))
                        {
                          j_6 = ATgetArgument(i_6, 0);
                          k_6 = ATgetArgument(i_6, 1);
                          {
                            if(((d_6 != NULL) && (d_6 != j_6)))
                              _fail(j_6);
                            else
                              d_6 = j_6;
                            {
                              if(((e_6 != NULL) && (e_6 != k_6)))
                                _fail(k_6);
                              else
                                e_6 = k_6;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_6));
                            }
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = oncetd_1(t, c_0);
                    {
                      l_6 = t;
                      if(((g_6 != NULL) && (g_6 != l_6)))
                        _fail(l_6);
                      else
                        g_6 = l_6;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_6)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, not_null(e_6)), not_null(d_6))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_6))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_6)))));
          }
        }
      else
        {
          if(match_cons(q_5, sym_Match_1))
            {
              r_5 = ATgetArgument(q_5, 0);
              {
                ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL;
                ATerm s_6 = NULL;
                ATerm t_6 = NULL;
                t = new_0(t);
                {
                  s_6 = t;
                  {
                    if(((p_6 != NULL) && (p_6 != s_6)))
                      _fail(s_6);
                    else
                      p_6 = s_6;
                    {
                      ATerm x_6 = NULL;
                      t = new_0(t);
                      {
                        t_6 = t;
                        {
                          if(((q_6 != NULL) && (q_6 != t_6)))
                            _fail(t_6);
                          else
                            q_6 = t_6;
                          {
                            t = not_null(r_5);
                            {
                              ATerm d_0 (ATerm t)
                              {
                                ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL;
                                u_6 = t;
                                m_5 :
                                if(match_cons(u_6, sym_Explode_2))
                                  {
                                    v_6 = ATgetArgument(u_6, 0);
                                    w_6 = ATgetArgument(u_6, 1);
                                    {
                                      if(((n_6 != NULL) && (n_6 != v_6)))
                                        _fail(v_6);
                                      else
                                        n_6 = v_6;
                                      {
                                        if(((o_6 != NULL) && (o_6 != w_6)))
                                          _fail(w_6);
                                        else
                                          o_6 = w_6;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_6));
                                      }
                                    }
                                  }
                                else
                                  _fail(t);
                                return(t);
                              }
                              t = oncetd_1(t, d_0);
                              {
                                x_6 = t;
                                if(((r_6 != NULL) && (r_6 != x_6)))
                                  _fail(x_6);
                                else
                                  r_6 = x_6;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_6)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_6)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_6)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_6))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_6)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_6)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_6)), not_null(n_6)))))));
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
  ATerm w_7 = NULL,x_7 = NULL;
  w_7 = t;
  v_7 :
  if(match_cons(w_7, sym_Match_1))
    {
      x_7 = ATgetArgument(w_7, 0);
      {
        ATerm e_11 = t;
        if((PushChoice() == 0))
          {
            ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
            ATerm c_8 = NULL;
            ATerm f_8 = NULL;
            t = new_0(t);
            {
              c_8 = t;
              {
                if(((a_8 != NULL) && (a_8 != c_8)))
                  _fail(c_8);
                else
                  a_8 = c_8;
                {
                  t = not_null(x_7);
                  {
                    ATerm f_0 (ATerm t)
                    {
                      ATerm d_8 = NULL,e_8 = NULL;
                      d_8 = t;
                      q_7 :
                      if(match_cons(d_8, sym_RootApp_1))
                        {
                          e_8 = ATgetArgument(d_8, 0);
                          {
                            if(((z_7 != NULL) && (z_7 != e_8)))
                              _fail(e_8);
                            else
                              z_7 = e_8;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_8));
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = pat_td_1(t, f_0);
                    {
                      f_8 = t;
                      if(((b_8 != NULL) && (b_8 != f_8)))
                        _fail(f_8);
                      else
                        b_8 = f_8;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(b_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_8))), not_null(z_7))));
            PopChoice();
          }
        else
          {
            t = e_11;
            {
              ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
              ATerm n_8 = NULL;
              t = not_null(x_7);
              {
                ATerm p_0 (ATerm t)
                {
                  ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL;
                  k_8 = t;
                  t_7 :
                  if(match_cons(k_8, sym_App_2))
                    {
                      l_8 = ATgetArgument(k_8, 0);
                      m_8 = ATgetArgument(k_8, 1);
                      {
                        if(((h_8 != NULL) && (h_8 != l_8)))
                          _fail(l_8);
                        else
                          h_8 = l_8;
                        {
                          if(((i_8 != NULL) && (i_8 != m_8)))
                            _fail(m_8);
                          else
                            i_8 = m_8;
                          t = (ATerm) ATmakeAppl(sym_Wld_0);
                        }
                      }
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = pat_td_1(t, p_0);
                {
                  n_8 = t;
                  if(((j_8 != NULL) && (j_8 != n_8)))
                    _fail(n_8);
                  else
                    j_8 = n_8;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_8)), (ATerm) ATmakeAppl(sym_BA_2, not_null(h_8), not_null(i_8)));
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
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL;
  z_8 = t;
  x_8 :
  if(match_cons(z_8, sym_Match_1))
    {
      a_9 = ATgetArgument(z_8, 0);
      y_8 :
      if(match_cons(a_9, sym_RootApp_1))
        {
          b_9 = ATgetArgument(a_9, 0);
          t = not_null(b_9);
        }
      else
        {
          if(match_cons(a_9, sym_App_2))
            {
              b_9 = ATgetArgument(a_9, 0);
              c_9 = ATgetArgument(a_9, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(b_9), not_null(c_9));
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
  ATerm o_9 = NULL,p_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym_Match_1))
    {
      p_9 = ATgetArgument(o_9, 0);
      {
        ATerm r_9 = NULL,s_9 = NULL;
        ATerm w_9 = NULL;
        t = not_null(p_9);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
            t_9 = t;
            k_9 :
            if(match_cons(t_9, sym_RootApp_1))
              {
                u_9 = ATgetArgument(t_9, 0);
                l_9 :
                if(match_cons(u_9, sym_Match_1))
                  {
                    v_9 = ATgetArgument(u_9, 0);
                    {
                      if(((r_9 != NULL) && (r_9 != v_9)))
                        _fail(v_9);
                      else
                        r_9 = v_9;
                      t = not_null(r_9);
                    }
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = pat_td_1(t, q_0);
          {
            w_9 = t;
            if(((s_9 != NULL) && (s_9 != w_9)))
              _fail(w_9);
            else
              s_9 = w_9;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(s_9));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL;
  l_10 = t;
  k_10 :
  if(match_cons(l_10, sym_Build_1))
    {
      m_10 = ATgetArgument(l_10, 0);
      {
        ATerm f_11 = t;
        if((PushChoice() == 0))
          {
            ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
            ATerm z_10 = NULL;
            ATerm s_13 = NULL;
            t = new_0(t);
            {
              z_10 = t;
              {
                if(((p_10 != NULL) && (p_10 != z_10)))
                  _fail(z_10);
                else
                  p_10 = z_10;
                {
                  t = not_null(m_10);
                  {
                    ATerm r_0 (ATerm t)
                    {
                      ATerm a_11 = NULL,r_13 = NULL;
                      a_11 = t;
                      e_10 :
                      if(match_cons(a_11, sym_RootApp_1))
                        {
                          r_13 = ATgetArgument(a_11, 0);
                          {
                            if(((o_10 != NULL) && (o_10 != r_13)))
                              _fail(r_13);
                            else
                              o_10 = r_13;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_10));
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = pat_td_1(t, r_0);
                    {
                      s_13 = t;
                      if(((q_10 != NULL) && (q_10 != s_13)))
                        _fail(s_13);
                      else
                        q_10 = s_13;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_10), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_10))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_10))));
            PopChoice();
          }
        else
          {
            t = f_11;
            {
              ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
              ATerm y_13 = NULL;
              ATerm c_14 = NULL;
              t = new_0(t);
              {
                y_13 = t;
                {
                  if(((w_13 != NULL) && (w_13 != y_13)))
                    _fail(y_13);
                  else
                    w_13 = y_13;
                  {
                    t = not_null(m_10);
                    {
                      ATerm s_0 (ATerm t)
                      {
                        ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
                        z_13 = t;
                        i_10 :
                        if(match_cons(z_13, sym_App_2))
                          {
                            a_14 = ATgetArgument(z_13, 0);
                            b_14 = ATgetArgument(z_13, 1);
                            {
                              if(((u_13 != NULL) && (u_13 != a_14)))
                                _fail(a_14);
                              else
                                u_13 = a_14;
                              {
                                if(((v_13 != NULL) && (v_13 != b_14)))
                                  _fail(b_14);
                                else
                                  v_13 = b_14;
                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_13));
                              }
                            }
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = pat_td_1(t, s_0);
                      {
                        c_14 = t;
                        if(((x_13 != NULL) && (x_13 != c_14)))
                          _fail(c_14);
                        else
                          x_13 = c_14;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(u_13), not_null(v_13), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_13)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(x_13))));
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
  ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL,d_19 = NULL;
  c_18 = t;
  f_17 :
  if(match_cons(c_18, sym_Build_1))
    {
      d_18 = ATgetArgument(c_18, 0);
      a_18 :
      if(match_cons(d_18, sym_RootApp_1))
        {
          e_18 = ATgetArgument(d_18, 0);
          t = not_null(e_18);
        }
      else
        {
          if(match_cons(d_18, sym_App_2))
            {
              e_18 = ATgetArgument(d_18, 0);
              d_19 = ATgetArgument(d_18, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_19)), not_null(e_18));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Explode_2 (ATerm t, ATerm i_52 (ATerm), ATerm j_52 (ATerm))
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
  k_21 = t;
  z_20 :
  if(match_cons(k_21, sym_Explode_2))
    {
      l_21 = ATgetArgument(k_21, 0);
      m_21 = ATgetArgument(k_21, 1);
      {
        ATerm p_21 = NULL;
        t = not_null(l_21);
        {
          ATerm r_21 = NULL;
          t = i_52(t);
          {
            p_21 = t;
            {
              t = not_null(m_21);
              {
                t = j_52(t);
                {
                  r_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Explode_2, not_null(p_21), not_null(r_21));
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
ATerm pat_td_1 (ATerm t, ATerm e_56 (ATerm))
{
  ATerm g_11 = t;
  if((PushChoice() == 0))
    {
      t = e_56(t);
      PopChoice();
    }
  else
    {
      t = g_11;
      {
        ATerm h_11 = t;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              ATerm u_0 (ATerm t)
              {
                t = pat_td_1(t, e_56);
                return(t);
              }
              t = fetch_1(t, u_0);
              return(t);
            }
            t = Op_2(t, _id, t_0);
            PopChoice();
          }
        else
          {
            t = h_11;
            {
              ATerm i_11 = t;
              if((PushChoice() == 0))
                {
                  ATerm v_0 (ATerm t)
                  {
                    t = pat_td_1(t, e_56);
                    return(t);
                  }
                  t = Explode_2(t, _id, v_0);
                  PopChoice();
                }
              else
                {
                  t = i_11;
                  {
                    ATerm w_0 (ATerm t)
                    {
                      t = pat_td_1(t, e_56);
                      return(t);
                    }
                    t = Explode_2(t, w_0, _id);
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
  ATerm j_22 = NULL,k_22 = NULL;
  j_22 = t;
  i_22 :
  if(match_cons(j_22, sym_Build_1))
    {
      k_22 = ATgetArgument(j_22, 0);
      {
        ATerm j_11 = t;
        if((PushChoice() == 0))
          {
            ATerm m_22 = NULL,n_22 = NULL;
            ATerm w_22 = NULL;
            t = not_null(k_22);
            {
              ATerm x_0 (ATerm t)
              {
                ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL;
                o_22 = t;
                z_21 :
                if(match_cons(o_22, sym_RootApp_1))
                  {
                    p_22 = ATgetArgument(o_22, 0);
                    a_22 :
                    if(match_cons(p_22, sym_Build_1))
                      {
                        q_22 = ATgetArgument(p_22, 0);
                        {
                          if(((m_22 != NULL) && (m_22 != q_22)))
                            _fail(q_22);
                          else
                            m_22 = q_22;
                          t = not_null(m_22);
                        }
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = pat_td_1(t, x_0);
              {
                w_22 = t;
                if(((n_22 != NULL) && (n_22 != w_22)))
                  _fail(w_22);
                else
                  n_22 = w_22;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(n_22));
            PopChoice();
          }
        else
          {
            t = j_11;
            {
              ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
              ATerm e_24 = NULL;
              t = not_null(k_22);
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
                  a_24 = t;
                  d_22 :
                  if(match_cons(a_24, sym_App_2))
                    {
                      b_24 = ATgetArgument(a_24, 0);
                      d_24 = ATgetArgument(a_24, 1);
                      e_22 :
                      if(match_cons(b_24, sym_Build_1))
                        {
                          c_24 = ATgetArgument(b_24, 0);
                          {
                            if(((y_23 != NULL) && (y_23 != c_24)))
                              _fail(c_24);
                            else
                              y_23 = c_24;
                            {
                              if(((x_23 != NULL) && (x_23 != d_24)))
                                _fail(d_24);
                              else
                                x_23 = d_24;
                              t = not_null(y_23);
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
                t = pat_td_1(t, y_0);
                {
                  e_24 = t;
                  if(((z_23 != NULL) && (z_23 != e_24)))
                    _fail(e_24);
                  else
                    z_23 = e_24;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(z_23));
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
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
  n_25 = t;
  f_25 :
  if(match_cons(n_25, sym_InfixApp_3))
    {
      o_25 = ATgetArgument(n_25, 0);
      k_25 = ATgetArgument(n_25, 1);
      j_25 = ATgetArgument(n_25, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(k_25), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, not_null(j_25)), not_null(o_25))));
    }
  else
    {
      if(match_cons(n_25, sym_BAM_3))
        {
          o_25 = ATgetArgument(n_25, 0);
          k_25 = ATgetArgument(n_25, 1);
          j_25 = ATgetArgument(n_25, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(j_25))), not_null(o_25)), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_25))));
        }
      else
        {
          if(match_cons(n_25, sym_AM_2))
            {
              o_25 = ATgetArgument(n_25, 0);
              k_25 = ATgetArgument(n_25, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_25), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_25)));
            }
          else
            {
              if(match_cons(n_25, sym_MA_2))
                {
                  o_25 = ATgetArgument(n_25, 0);
                  k_25 = ATgetArgument(n_25, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_25)), not_null(k_25));
                }
              else
                {
                  if(match_cons(n_25, sym_BA_2))
                    {
                      o_25 = ATgetArgument(n_25, 0);
                      k_25 = ATgetArgument(n_25, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_25)), not_null(o_25));
                    }
                  else
                    {
                      if(match_cons(n_25, sym_Lets_2))
                        {
                          o_25 = ATgetArgument(n_25, 0);
                          k_25 = ATgetArgument(n_25, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(o_25), not_null(k_25));
                        }
                      else
                        {
                          if(match_cons(n_25, sym_LChoices_1))
                            {
                              o_25 = ATgetArgument(n_25, 0);
                              g_25 :
                              if(((ATgetType(o_25) == AT_LIST) && ((ATermList) o_25 != ATempty)))
                                {
                                  l_25 = ATgetFirst((ATermList) o_25);
                                  m_25 = (ATerm) ATgetNext((ATermList) o_25);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(l_25), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(m_25)));
                                }
                              else
                                {
                                  if(((ATermList) o_25 == ATempty))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_Fail_0);
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(n_25, sym_Choices_1))
                                {
                                  o_25 = ATgetArgument(n_25, 0);
                                  h_25 :
                                  if(((ATgetType(o_25) == AT_LIST) && ((ATermList) o_25 != ATempty)))
                                    {
                                      l_25 = ATgetFirst((ATermList) o_25);
                                      m_25 = (ATerm) ATgetNext((ATermList) o_25);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(l_25), (ATerm) ATmakeAppl(sym_Choices_1, not_null(m_25)));
                                    }
                                  else
                                    {
                                      if(((ATermList) o_25 == ATempty))
                                        {
                                          t = (ATerm) ATmakeAppl(sym_Fail_0);
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(n_25, sym_Seqs_1))
                                    {
                                      o_25 = ATgetArgument(n_25, 0);
                                      i_25 :
                                      if(((ATgetType(o_25) == AT_LIST) && ((ATermList) o_25 != ATempty)))
                                        {
                                          l_25 = ATgetFirst((ATermList) o_25);
                                          m_25 = (ATerm) ATgetNext((ATermList) o_25);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_25), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(m_25)));
                                        }
                                      else
                                        {
                                          if(((ATermList) o_25 == ATempty))
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
ATerm Wld_0 (ATerm t)
{
  ATerm i_28 = NULL;
  i_28 = t;
  h_28 :
  if(!(match_cons(i_28, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm k_11 = t;
  if((PushChoice() == 0))
    {
      ATerm z_0 (ATerm t)
      {
        ATerm l_11 = t;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = l_11;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, z_0);
      PopChoice();
      _fail(t);
    }
  else
    t = k_11;
  return(t);
}
ATerm App_2 (ATerm t, ATerm c_52 (ATerm), ATerm d_52 (ATerm))
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
  n_28 = t;
  m_28 :
  if(match_cons(n_28, sym_App_2))
    {
      o_28 = ATgetArgument(n_28, 0);
      p_28 = ATgetArgument(n_28, 1);
      {
        ATerm u_28 = NULL;
        t = not_null(o_28);
        {
          ATerm w_28 = NULL;
          t = c_52(t);
          {
            u_28 = t;
            {
              t = not_null(p_28);
              {
                t = d_52(t);
                {
                  w_28 = t;
                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(u_28), not_null(w_28));
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
ATerm Con_3 (ATerm t, ATerm z_51 (ATerm), ATerm a_52 (ATerm), ATerm b_52 (ATerm))
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL;
  g_29 = t;
  f_29 :
  if(match_cons(g_29, sym_Con_3))
    {
      h_29 = ATgetArgument(g_29, 0);
      i_29 = ATgetArgument(g_29, 1);
      j_29 = ATgetArgument(g_29, 2);
      {
        ATerm n_29 = NULL;
        t = not_null(h_29);
        {
          ATerm p_29 = NULL;
          t = z_51(t);
          {
            n_29 = t;
            {
              t = not_null(i_29);
              {
                ATerm r_29 = NULL;
                t = a_52(t);
                {
                  p_29 = t;
                  {
                    t = not_null(j_29);
                    {
                      t = b_52(t);
                      {
                        r_29 = t;
                        t = (ATerm) ATmakeAppl(sym_Con_3, not_null(n_29), not_null(p_29), not_null(r_29));
                      }
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
  ATerm m_11 = t;
  if((PushChoice() == 0))
    {
      ATerm a_1 (ATerm t)
      {
        ATerm n_11 = t;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = n_11;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, a_1);
      PopChoice();
      _fail(t);
    }
  else
    t = m_11;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL;
  c_30 = t;
  z_29 :
  if(match_cons(c_30, sym_SRule_1))
    {
      d_30 = ATgetArgument(c_30, 0);
      b_30 :
      if(match_cons(d_30, sym_StratRule_3))
        {
          e_30 = ATgetArgument(d_30, 0);
          f_30 = ATgetArgument(d_30, 1);
          g_30 = ATgetArgument(d_30, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(f_30)), (ATerm) ATmakeAppl(sym_Where_1, not_null(g_30))), not_null(e_30)));
        }
      else
        {
          if(match_cons(d_30, sym_Rule_3))
            {
              e_30 = ATgetArgument(d_30, 0);
              f_30 = ATgetArgument(d_30, 1);
              g_30 = ATgetArgument(d_30, 2);
              {
                t = not_null(e_30);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(f_30);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(f_30))), (ATerm) ATmakeAppl(sym_Where_1, not_null(g_30))), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_30))));
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
ATerm oncetd_1 (ATerm t, ATerm e_76 (ATerm))
{
  ATerm q_30 (ATerm t)
  {
    ATerm o_11 = t;
    if((PushChoice() == 0))
      {
        t = e_76(t);
        PopChoice();
      }
    else
      {
        t = o_11;
        t = _one(t, q_30);
      }
    return(t);
  }
  t = q_30(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL;
  h_31 = t;
  f_31 :
  if(match_cons(h_31, sym_SRule_1))
    {
      i_31 = ATgetArgument(h_31, 0);
      g_31 :
      if(match_cons(i_31, sym_Rule_3))
        {
          j_31 = ATgetArgument(i_31, 0);
          k_31 = ATgetArgument(i_31, 1);
          l_31 = ATgetArgument(i_31, 2);
          {
            ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
            ATerm x_31 = NULL;
            ATerm d_32 = NULL;
            t = new_0(t);
            {
              x_31 = t;
              {
                if(((u_31 != NULL) && (u_31 != x_31)))
                  _fail(x_31);
                else
                  u_31 = x_31;
                {
                  t = not_null(j_31);
                  {
                    ATerm l_32 = NULL;
                    ATerm b_1 (ATerm t)
                    {
                      ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL;
                      y_31 = t;
                      u_30 :
                      if(match_cons(y_31, sym_Con_3))
                        {
                          z_31 = ATgetArgument(y_31, 0);
                          b_32 = ATgetArgument(y_31, 1);
                          c_32 = ATgetArgument(y_31, 2);
                          v_30 :
                          if(match_cons(z_31, sym_Var_1))
                            {
                              a_32 = ATgetArgument(z_31, 0);
                              {
                                if(((t_31 != NULL) && (t_31 != a_32)))
                                  _fail(a_32);
                                else
                                  t_31 = a_32;
                                {
                                  if(((r_31 != NULL) && (r_31 != b_32)))
                                    _fail(b_32);
                                  else
                                    r_31 = b_32;
                                  {
                                    if(((p_31 != NULL) && (p_31 != c_32)))
                                      _fail(c_32);
                                    else
                                      p_31 = c_32;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_31));
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
                    t = oncetd_1(t, b_1);
                    {
                      d_32 = t;
                      {
                        if(((v_31 != NULL) && (v_31 != d_32)))
                          _fail(d_32);
                        else
                          v_31 = d_32;
                        {
                          t = not_null(k_31);
                          {
                            ATerm c_1 (ATerm t)
                            {
                              ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL;
                              e_32 = t;
                              y_30 :
                              if(match_cons(e_32, sym_Con_3))
                                {
                                  f_32 = ATgetArgument(e_32, 0);
                                  h_32 = ATgetArgument(e_32, 1);
                                  i_32 = ATgetArgument(e_32, 2);
                                  z_30 :
                                  if(match_cons(f_32, sym_Var_1))
                                    {
                                      g_32 = ATgetArgument(f_32, 0);
                                      c_31 :
                                      if(match_cons(i_32, sym_Call_2))
                                        {
                                          j_32 = ATgetArgument(i_32, 0);
                                          k_32 = ATgetArgument(i_32, 1);
                                          d_31 :
                                          if(((ATermList) k_32 == ATempty))
                                            {
                                              {
                                                if(((t_31 != NULL) && (t_31 != g_32)))
                                                  _fail(g_32);
                                                else
                                                  t_31 = g_32;
                                                {
                                                  if(((s_31 != NULL) && (s_31 != h_32)))
                                                    _fail(h_32);
                                                  else
                                                    s_31 = h_32;
                                                  {
                                                    if(((q_31 != NULL) && (q_31 != j_32)))
                                                      _fail(j_32);
                                                    else
                                                      q_31 = j_32;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_31));
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
                            t = oncetd_1(t, c_1);
                            {
                              l_32 = t;
                              if(((w_31 != NULL) && (w_31 != l_32)))
                                _fail(l_32);
                              else
                                w_31 = l_32;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_31)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_31), not_null(w_31), (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_31), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(q_31), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(r_31), not_null(s_31), (ATerm) ATmakeAppl(sym_Id_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_31)), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_31)))))));
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
  ATerm d_1 (ATerm t)
  {
    ATerm p_11 = t;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      {
        t = p_11;
        {
          ATerm q_11 = t;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              PopChoice();
            }
          else
            {
              t = q_11;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, d_1);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm f_1 (ATerm t)
      {
        ATerm r_11 = t;
        if((PushChoice() == 0))
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = r_11;
            {
              ATerm s_11 = t;
              if((PushChoice() == 0))
                {
                  ATerm t_11 = t;
                  if((PushChoice() == 0))
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = t_11;
                      {
                        ATerm u_11 = t;
                        if((PushChoice() == 0))
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = u_11;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = s_11;
                  {
                    ATerm v_11 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm w_11 = t;
                        if((PushChoice() == 0))
                          {
                            t = Mapp0_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = w_11;
                            {
                              ATerm x_11 = t;
                              if((PushChoice() == 0))
                                {
                                  t = Mapp1_0(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = x_11;
                                  t = Mapp2_0(t);
                                }
                            }
                          }
                        PopChoice();
                      }
                    else
                      {
                        t = v_11;
                        t = Expl_0(t);
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, f_1);
    }
    return(t);
  }
  t = topdown_1(t, e_1);
  return(t);
}
ATerm desugar_spec_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    t = SDef_3(t, _id, _id, desugar_0);
    return(t);
  }
  t = map_1(t, g_1);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm k_53 (ATerm))
{
  ATerm w_32 = NULL,x_32 = NULL;
  w_32 = t;
  v_32 :
  if(match_cons(w_32, sym_Strategies_1))
    {
      x_32 = ATgetArgument(w_32, 0);
      {
        ATerm z_32 = NULL;
        t = not_null(x_32);
        {
          t = k_53(t);
          {
            z_32 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(z_32));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm m_53 (ATerm))
{
  ATerm g_33 = NULL,h_33 = NULL;
  g_33 = t;
  f_33 :
  if(match_cons(g_33, sym_Specification_1))
    {
      h_33 = ATgetArgument(g_33, 0);
      {
        ATerm j_33 = NULL;
        t = not_null(h_33);
        {
          t = m_53(t);
          {
            j_33 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(j_33));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm q_56 (ATerm))
{
  ATerm y_11 = t;
  if((PushChoice() == 0))
    {
      ATerm h_1 (ATerm t)
      {
        t = split_2(t, _id, q_56);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL;
            t_33 = t;
            o_33 :
            if(match_cons(t_33, sym__2))
              {
                u_33 = ATgetArgument(t_33, 0);
                y_33 = ATgetArgument(t_33, 1);
                p_33 :
                if(match_cons(u_33, sym_SDef_3))
                  {
                    v_33 = ATgetArgument(u_33, 0);
                    w_33 = ATgetArgument(u_33, 1);
                    x_33 = ATgetArgument(u_33, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_33), not_null(w_33), not_null(x_33));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = zip_1(t, i_1);
        }
        return(t);
      }
      t = Let_2(t, h_1, _id);
      PopChoice();
    }
  else
    {
      t = y_11;
      {
        ATerm z_11 = t;
        if((PushChoice() == 0))
          {
            ATerm j_1 (ATerm t)
            {
              t = split_2(t, _id, q_56);
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL;
                  c_34 = t;
                  r_33 :
                  if(match_cons(c_34, sym__2))
                    {
                      d_34 = ATgetArgument(c_34, 0);
                      g_34 = ATgetArgument(c_34, 1);
                      s_33 :
                      if(match_cons(d_34, sym_VarDec_2))
                        {
                          e_34 = ATgetArgument(d_34, 0);
                          f_34 = ATgetArgument(d_34, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(g_34), not_null(f_34));
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = zip_1(t, k_1);
              }
              return(t);
            }
            t = SDef_3(t, _id, j_1, _id);
            PopChoice();
          }
        else
          {
            t = z_11;
            {
              ATerm l_1 (ATerm t)
              {
                t = q_56(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, l_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm l_54 (ATerm), ATerm m_54 (ATerm))
{
  ATerm q_34 = NULL,w_34 = NULL,x_34 = NULL;
  q_34 = t;
  p_34 :
  if(match_cons(q_34, sym_Rec_2))
    {
      w_34 = ATgetArgument(q_34, 0);
      x_34 = ATgetArgument(q_34, 1);
      {
        ATerm a_35 = NULL;
        t = not_null(w_34);
        {
          ATerm c_35 = NULL;
          t = l_54(t);
          {
            a_35 = t;
            {
              t = not_null(x_34);
              {
                t = m_54(t);
                {
                  c_35 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(a_35), not_null(c_35));
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
ATerm Let_2 (ATerm t, ATerm n_54 (ATerm), ATerm o_54 (ATerm))
{
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL;
  l_35 = t;
  k_35 :
  if(match_cons(l_35, sym_Let_2))
    {
      m_35 = ATgetArgument(l_35, 0);
      n_35 = ATgetArgument(l_35, 1);
      {
        ATerm q_35 = NULL;
        t = not_null(m_35);
        {
          ATerm s_35 = NULL;
          t = n_54(t);
          {
            q_35 = t;
            {
              t = not_null(n_35);
              {
                t = o_54(t);
                {
                  s_35 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(q_35), not_null(s_35));
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
ATerm sboundin_3 (ATerm t, ATerm r_56 (ATerm), ATerm s_56 (ATerm), ATerm t_56 (ATerm))
{
  ATerm a_12 = t;
  if((PushChoice() == 0))
    {
      t = Let_2(t, r_56, r_56);
      PopChoice();
    }
  else
    {
      t = a_12;
      {
        ATerm b_12 = t;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, t_56, t_56, r_56);
            PopChoice();
          }
        else
          {
            t = b_12;
            t = Rec_2(t, t_56, r_56);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
  d_36 = t;
  c_36 :
  if(match_cons(d_36, sym_Rec_2))
    {
      e_36 = ATgetArgument(d_36, 0);
      f_36 = ATgetArgument(d_36, 1);
      t = (ATerm) ATinsert(ATempty, not_null(e_36));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL;
  n_36 = t;
  m_36 :
  if(match_cons(n_36, sym_SDef_3))
    {
      o_36 = ATgetArgument(n_36, 0);
      p_36 = ATgetArgument(n_36, 1);
      q_36 = ATgetArgument(n_36, 2);
      {
        t = not_null(p_36);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm y_36 = NULL,z_36 = NULL,c_37 = NULL;
            y_36 = t;
            l_36 :
            if(match_cons(y_36, sym_VarDec_2))
              {
                z_36 = ATgetArgument(y_36, 0);
                c_37 = ATgetArgument(y_36, 1);
                t = not_null(z_36);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, m_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL;
  r_37 = t;
  q_37 :
  if(match_cons(r_37, sym_Let_2))
    {
      s_37 = ATgetArgument(r_37, 0);
      t_37 = ATgetArgument(r_37, 1);
      {
        t = not_null(s_37);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL;
            w_37 = t;
            p_37 :
            if(match_cons(w_37, sym_SDef_3))
              {
                x_37 = ATgetArgument(w_37, 0);
                y_37 = ATgetArgument(w_37, 1);
                z_37 = ATgetArgument(w_37, 2);
                t = not_null(x_37);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, n_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm k_54 (ATerm))
{
  ATerm i_38 = NULL,j_38 = NULL;
  i_38 = t;
  h_38 :
  if(match_cons(i_38, sym_SVar_1))
    {
      j_38 = ATgetArgument(i_38, 0);
      {
        ATerm l_38 = NULL;
        t = not_null(j_38);
        {
          t = k_54(t);
          {
            l_38 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(l_38));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm c_12 = t;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = c_12;
        {
          ATerm d_12 = t;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = d_12;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, o_1, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm k_59 (ATerm, ATerm (ATerm)), ATerm l_59 (ATerm), ATerm m_59 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm n_59 (ATerm, ATerm (ATerm)))
{
  ATerm u_38 = NULL;
  u_38 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_38), (ATerm) ATempty);
    {
      ATerm x_38 (ATerm t)
      {
        ATerm p_1 (ATerm t)
        {
          ATerm e_12 = t;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, k_59);
              PopChoice();
            }
          else
            {
              t = e_12;
              {
                t = RnBinding_2(t, l_59, n_59);
                t = DistBinding_2(t, x_38, m_59);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, p_1);
        return(t);
      }
      t = x_38(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm y_38 (ATerm t, ATerm h_39 (ATerm))
  {
    t = Scope_2(t, h_39, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, y_38);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm DeclareVariables_0 (ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL;
  l_39 = t;
  k_39 :
  if(match_cons(l_39, sym_SDef_3))
    {
      m_39 = ATgetArgument(l_39, 0);
      n_39 = ATgetArgument(l_39, 1);
      o_39 = ATgetArgument(l_39, 2);
      {
        ATerm w_39 = NULL;
        ATerm x_39 = NULL;
        t = not_null(o_39);
        {
          t = tvars_0(t);
          {
            x_39 = t;
            if(((w_39 != NULL) && (w_39 != x_39)))
              _fail(x_39);
            else
              w_39 = x_39;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_39), not_null(n_39), (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_39), not_null(o_39)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RDtoSD_0 (ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL;
  d_40 = t;
  c_40 :
  if(match_cons(d_40, sym_RDef_3))
    {
      e_40 = ATgetArgument(d_40, 0);
      f_40 = ATgetArgument(d_40, 1);
      g_40 = ATgetArgument(d_40, 2);
      {
        ATerm k_40 = NULL;
        ATerm l_40 = NULL;
        t = not_null(g_40);
        {
          t = tvars_0(t);
          {
            l_40 = t;
            if(((k_40 != NULL) && (k_40 != l_40)))
              _fail(l_40);
            else
              k_40 = l_40;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(e_40), not_null(f_40), (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_40), (ATerm) ATmakeAppl(sym_SRule_1, not_null(g_40))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkCall_0 (ATerm t)
{
  ATerm p_40 = NULL;
  p_40 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_40)), (ATerm) ATempty);
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL;
  c_41 = t;
  z_40 :
  if(match_cons(c_41, sym_OpDecl_2))
    {
      d_41 = ATgetArgument(c_41, 0);
      e_41 = ATgetArgument(c_41, 1);
      a_41 :
      if(match_cons(e_41, sym_FunType_2))
        {
          f_41 = ATgetArgument(e_41, 0);
          b_41 = ATgetArgument(e_41, 1);
          {
            ATerm j_41 = NULL,o_41 = NULL,w_41 = NULL;
            ATerm f_12;
            f_12 = t;
            {
              ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL;
              t = not_null(f_41);
              {
                ATerm q_1 (ATerm t)
                {
                  ATerm p_41 = NULL,r_41 = NULL;
                  t = new_0(t);
                  {
                    ATerm g_12;
                    g_12 = t;
                    {
                      ATerm q_41 = NULL;
                      q_41 = t;
                      if(((p_41 != NULL) && (p_41 != q_41)))
                        _fail(q_41);
                      else
                        p_41 = q_41;
                    }
                    t = g_12;
                    {
                      ATerm s_41 = NULL;
                      s_41 = t;
                      if(((r_41 != NULL) && (r_41 != s_41)))
                        _fail(s_41);
                      else
                        r_41 = s_41;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(p_41), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATempty))), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATempty)))), not_null(r_41));
                    }
                  }
                  return(t);
                }
                t = map_1(t, q_1);
                {
                  t = unzip_0(t);
                  {
                    t_41 = t;
                    x_40 :
                    if(match_cons(t_41, sym__2))
                      {
                        u_41 = ATgetArgument(t_41, 0);
                        v_41 = ATgetArgument(t_41, 1);
                        {
                          if(((j_41 != NULL) && (j_41 != u_41)))
                            _fail(u_41);
                          else
                            j_41 = u_41;
                          if(((o_41 != NULL) && (o_41 != v_41)))
                            _fail(v_41);
                          else
                            o_41 = v_41;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = f_12;
            {
              ATerm x_41 = NULL;
              t = not_null(o_41);
              {
                t = map_1(t, MkCall_0);
                {
                  x_41 = t;
                  if(((w_41 != NULL) && (w_41 != x_41)))
                    _fail(x_41);
                  else
                    w_41 = x_41;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_41), not_null(j_41), (ATerm) ATmakeAppl(sym_Cong_2, not_null(d_41), not_null(w_41)));
            }
          }
        }
      else
        {
          if(match_cons(e_41, sym_ConstType_1))
            {
              f_41 = ATgetArgument(e_41, 0);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_41), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(d_41), (ATerm) ATempty));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkCongDefs_0 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL;
  v_42 = t;
  u_42 :
  if(match_cons(v_42, sym_Constructors_1))
    {
      w_42 = ATgetArgument(v_42, 0);
      {
        t = not_null(w_42);
        t = map_1(t, MkCongDef_0);
      }
    }
  else
    {
      if(match_cons(v_42, sym_Sorts_1))
        {
          w_42 = ATgetArgument(v_42, 0);
          t = (ATerm) ATempty;
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm congdefs_0 (ATerm t)
{
  t = map_1(t, MkCongDefs_0);
  t = concat_0(t);
  return(t);
}
ATerm RulesToSdefs_0 (ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL;
  z_45 = t;
  t_45 :
  if(match_cons(z_45, sym_Specification_1))
    {
      a_46 = ATgetArgument(z_45, 0);
      u_45 :
      if(((ATgetType(a_46) == AT_LIST) && ((ATermList) a_46 != ATempty)))
        {
          b_46 = ATgetFirst((ATermList) a_46);
          d_46 = (ATerm) ATgetNext((ATermList) a_46);
          v_45 :
          if(match_cons(b_46, sym_Signature_1))
            {
              c_46 = ATgetArgument(b_46, 0);
              w_45 :
              if(((ATgetType(d_46) == AT_LIST) && ((ATermList) d_46 != ATempty)))
                {
                  e_46 = ATgetFirst((ATermList) d_46);
                  g_46 = (ATerm) ATgetNext((ATermList) d_46);
                  x_45 :
                  if(match_cons(e_46, sym_Strategies_1))
                    {
                      f_46 = ATgetArgument(e_46, 0);
                      y_45 :
                      if(((ATermList) g_46 == ATempty))
                        {
                          {
                            ATerm j_46 = NULL;
                            ATerm k_46 = NULL,m_46 = NULL,o_46 = NULL;
                            ATerm h_12;
                            h_12 = t;
                            {
                              ATerm l_46 = NULL;
                              t = not_null(c_46);
                              {
                                t = congdefs_0(t);
                                {
                                  l_46 = t;
                                  if(((k_46 != NULL) && (k_46 != l_46)))
                                    _fail(l_46);
                                  else
                                    k_46 = l_46;
                                }
                              }
                            }
                            t = h_12;
                            {
                              ATerm n_46 = NULL;
                              t = not_null(f_46);
                              {
                                ATerm r_1 (ATerm t)
                                {
                                  ATerm i_12 = t;
                                  if((PushChoice() == 0))
                                    {
                                      t = RDtoSD_0(t);
                                      PopChoice();
                                    }
                                  else
                                    {
                                      t = i_12;
                                      t = DeclareVariables_0(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, r_1);
                                {
                                  n_46 = t;
                                  if(((m_46 != NULL) && (m_46 != n_46)))
                                    _fail(n_46);
                                  else
                                    m_46 = n_46;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_46), not_null(m_46));
                                {
                                  t = conc_0(t);
                                  {
                                    o_46 = t;
                                    if(((j_46 != NULL) && (j_46 != o_46)))
                                      _fail(o_46);
                                    else
                                      j_46 = o_46;
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(j_46))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(c_46))));
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
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm u_46 = NULL;
  u_46 = t;
  t = SSL_int_to_string(not_null(u_46));
  return(t);
}
ATerm CheckConsError_0 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL;
  f_47 = t;
  e_47 :
  if(match_cons(f_47, sym_Op_2))
    {
      g_47 = ATgetArgument(f_47, 0);
      h_47 = ATgetArgument(f_47, 1);
      {
        ATerm k_47 = NULL,l_47 = NULL;
        ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_0);
        {
          ATerm s_1 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
            return(t);
          }
          t = rewrite_1(t, s_1);
          {
            m_47 = t;
            c_47 :
            if(match_cons(m_47, sym_Defined_3))
              {
                n_47 = ATgetArgument(m_47, 0);
                o_47 = ATgetArgument(m_47, 1);
                p_47 = ATgetArgument(m_47, 2);
                d_47 :
                if(match_string(n_47, "e_0"))
                  {
                    ATerm q_47 = NULL;
                    if(((l_47 != NULL) && (l_47 != o_47)))
                      _fail(o_47);
                    else
                      l_47 = o_47;
                    {
                      if(((k_47 != NULL) && (k_47 != p_47)))
                        _fail(p_47);
                      else
                        k_47 = p_47;
                      {
                        ATerm r_47 = NULL;
                        t = not_null(h_47);
                        {
                          t = length_0(t);
                          {
                            t = int_to_string_0(t);
                            {
                              r_47 = t;
                              if(((q_47 != NULL) && (q_47 != r_47)))
                                _fail(r_47);
                              else
                                q_47 = r_47;
                            }
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue))), not_null(q_47)), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), not_null(g_47)), (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue))), not_null(l_47)), (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue))), not_null(k_47)), (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue))));
                          t = printnl_0(t);
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
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(g_47), not_null(h_47));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL;
  x_47 = t;
  w_47 :
  if(((ATgetType(x_47) == AT_LIST) && ((ATermList) x_47 != ATempty)))
    {
      y_47 = ATgetFirst((ATermList) x_47);
      z_47 = (ATerm) ATgetNext((ATermList) x_47);
      t = not_null(y_47);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL;
  f_48 = t;
  e_48 :
  if(match_cons(f_48, sym__2))
    {
      g_48 = ATgetArgument(f_48, 0);
      h_48 = ATgetArgument(f_48, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_48), not_null(h_48));
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
ATerm rewrite_1 (ATerm t, ATerm b_63 (ATerm))
{
  ATerm n_48 = NULL;
  ATerm p_48 = NULL;
  n_48 = t;
  {
    ATerm q_48 = NULL;
    t = (ATerm) ATmakeAppl(sym__0);
    {
      t = b_63(t);
      {
        q_48 = t;
        if(((p_48 != NULL) && (p_48 != q_48)))
          _fail(q_48);
        else
          p_48 = q_48;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_48), not_null(n_48));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm CheckCons_0 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL;
  g_49 = t;
  f_49 :
  if(match_cons(g_49, sym_Op_2))
    {
      h_49 = ATgetArgument(g_49, 0);
      i_49 = ATgetArgument(g_49, 1);
      {
        ATerm j_12 = t;
        if((PushChoice() == 0))
          {
            ATerm l_49 = NULL;
            ATerm n_49 = NULL;
            t = not_null(i_49);
            {
              l_49 = t;
              {
                t = length_0(t);
                {
                  n_49 = t;
                  {
                    ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(h_49), not_null(n_49));
                    {
                      ATerm t_1 (ATerm t)
                      {
                        t = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
                        return(t);
                      }
                      t = rewrite_1(t, t_1);
                      {
                        p_49 = t;
                        y_48 :
                        if(match_cons(p_49, sym_Defined_2))
                          {
                            q_49 = ATgetArgument(p_49, 0);
                            r_49 = ATgetArgument(p_49, 1);
                            z_48 :
                            if(match_string(q_49, "b_0"))
                              {
                                if(((h_49 != NULL) && (h_49 != r_49)))
                                  _fail(r_49);
                                else
                                  h_49 = r_49;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(h_49), not_null(l_49));
                  }
                }
              }
            }
            PopChoice();
          }
        else
          {
            t = j_12;
            {
              ATerm u_49 = NULL;
              ATerm w_49 = NULL;
              t = not_null(i_49);
              {
                u_49 = t;
                {
                  t = length_0(t);
                  {
                    w_49 = t;
                    {
                      ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(h_49), not_null(w_49));
                      {
                        ATerm u_1 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
                          return(t);
                        }
                        t = rewrite_1(t, u_1);
                        {
                          y_49 = t;
                          d_49 :
                          if(match_cons(y_49, sym_Defined_2))
                            {
                              z_49 = ATgetArgument(y_49, 0);
                              a_50 = ATgetArgument(y_49, 1);
                              e_49 :
                              if(match_string(z_49, "a_0"))
                                {
                                  if(((h_49 != NULL) && (h_49 != a_50)))
                                    _fail(a_50);
                                  else
                                    h_49 = a_50;
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(h_49), (ATerm) ATempty);
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
ATerm manytd_1 (ATerm t, ATerm m_77 (ATerm))
{
  ATerm j_50 (ATerm t)
  {
    ATerm k_12 = t;
    if((PushChoice() == 0))
      {
        t = m_77(t);
        {
          ATerm v_1 (ATerm t)
          {
            t = try_1(t, j_50);
            return(t);
          }
          t = _all(t, v_1);
        }
        PopChoice();
      }
    else
      {
        t = k_12;
        t = _some(t, j_50);
      }
    return(t);
  }
  t = j_50(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
  n_50 = t;
  m_50 :
  if(match_cons(n_50, sym__2))
    {
      o_50 = ATgetArgument(n_50, 0);
      p_50 = ATgetArgument(n_50, 1);
      {
        ATerm l_12;
        l_12 = t;
        {
          ATerm s_50 = NULL;
          ATerm t_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_50), not_null(p_50));
          {
            ATerm m_12 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                PopChoice();
              }
            else
              {
                t = m_12;
                t = (ATerm) ATempty;
              }
            {
              t_50 = t;
              if(((s_50 != NULL) && (s_50 != t_50)))
                _fail(t_50);
              else
                s_50 = t_50;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_50), not_null(p_50), not_null(s_50));
            t = table_put_0(t);
          }
        }
        t = l_12;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL;
  ATerm n_12;
  n_12 = t;
  {
    ATerm d_51 = NULL;
    ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL;
    t = w_62(t);
    {
      d_51 = t;
      {
        if(((b_51 != NULL) && (b_51 != d_51)))
          _fail(d_51);
        else
          b_51 = d_51;
        {
          ATerm o_12 = t;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_51), (ATerm) ATmakeAppl(sym_Scopes_0));
              t = table_get_0(t);
              PopChoice();
            }
          else
            {
              t = o_12;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            e_51 = t;
            z_50 :
            if(((ATgetType(e_51) == AT_LIST) && ((ATermList) e_51 != ATempty)))
              {
                f_51 = ATgetFirst((ATermList) e_51);
                g_51 = (ATerm) ATgetNext((ATermList) e_51);
                {
                  if(((c_51 != NULL) && (c_51 != f_51)))
                    _fail(f_51);
                  else
                    c_51 = f_51;
                  {
                    if(((a_51 != NULL) && (a_51 != g_51)))
                      _fail(g_51);
                    else
                      a_51 = g_51;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(b_51), (ATerm)ATmakeAppl(sym_Scopes_0), not_null(a_51));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(c_51);
                          {
                            ATerm w_1 (ATerm t)
                            {
                              ATerm h_51 = NULL;
                              h_51 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_51), not_null(h_51));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, w_1);
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
  }
  t = n_12;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm c_79 (ATerm), ATerm d_79 (ATerm))
{
  ATerm p_12 = t;
  if((PushChoice() == 0))
    {
      t = c_79(t);
      t = d_79(t);
      PopChoice();
    }
  else
    {
      t = p_12;
      {
        t = d_79(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm v_62 (ATerm))
{
  ATerm o_51 = NULL;
  ATerm q_12;
  q_12 = t;
  {
    ATerm p_51 = NULL;
    ATerm e_52 = NULL;
    t = v_62(t);
    {
      p_51 = t;
      {
        if(((o_51 != NULL) && (o_51 != p_51)))
          _fail(p_51);
        else
          o_51 = p_51;
        {
          ATerm f_52 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_51), (ATerm) ATmakeAppl(sym_Scopes_0));
          {
            ATerm r_12 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                PopChoice();
              }
            else
              {
                t = r_12;
                t = (ATerm) ATempty;
              }
            {
              f_52 = t;
              if(((e_52 != NULL) && (e_52 != f_52)))
                _fail(f_52);
              else
                e_52 = f_52;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_51), (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(not_null(e_52)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = q_12;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm x_62 (ATerm), ATerm y_62 (ATerm))
{
  t = begin_scope_1(t, x_62);
  {
    ATerm x_1 (ATerm t)
    {
      t = end_scope_1(t, x_62);
      return(t);
    }
    t = restore_always_2(t, y_62, x_1);
  }
  return(t);
}
ATerm check_constructors_p__2 (ATerm t, ATerm g_56 (ATerm), ATerm h_56 (ATerm))
{
  ATerm m_52 = NULL,n_52 = NULL;
  ATerm y_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm s_12;
    s_12 = t;
    {
      ATerm o_52 = NULL;
      ATerm s_52 = NULL;
      t = g_56(t);
      {
        o_52 = t;
        {
          if(((m_52 != NULL) && (m_52 != o_52)))
            _fail(o_52);
          else
            m_52 = o_52;
          {
            t = h_56(t);
            {
              s_52 = t;
              if(((n_52 != NULL) && (n_52 != s_52)))
                _fail(s_52);
              else
                n_52 = s_52;
            }
          }
        }
      }
    }
    t = s_12;
    {
      ATerm t_12;
      t_12 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_0), (ATerm) ATmakeAppl(sym_Defined_3, (ATerm)ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue)), not_null(m_52), not_null(n_52)));
        {
          ATerm a_2 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
            return(t);
          }
          t = assert_1(t, a_2);
        }
      }
      t = t_12;
      {
        ATerm b_2 (ATerm t)
        {
          ATerm u_12 = t;
          if((PushChoice() == 0))
            {
              t = CheckCons_0(t);
              PopChoice();
              _fail(t);
            }
          else
            t = u_12;
          t = CheckConsError_0(t);
          return(t);
        }
        t = manytd_1(t, b_2);
      }
    }
    return(t);
  }
  t = scope_2(t, y_1, z_1);
  return(t);
}
ATerm check_constructors_0 (ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL,j_53 = NULL,l_53 = NULL;
  c_53 = t;
  b_53 :
  if(match_cons(c_53, sym_SDef_3))
    {
      d_53 = ATgetArgument(c_53, 0);
      j_53 = ATgetArgument(c_53, 1);
      l_53 = ATgetArgument(c_53, 2);
      {
        t = not_null(l_53);
        {
          ATerm c_2 (ATerm t)
          {
            t = not_null(d_53);
            return(t);
          }
          ATerm d_2 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
            return(t);
          }
          t = check_constructors_p__2(t, c_2, d_2);
        }
      }
    }
  else
    {
      if(match_cons(c_53, sym_RDef_3))
        {
          d_53 = ATgetArgument(c_53, 0);
          j_53 = ATgetArgument(c_53, 1);
          l_53 = ATgetArgument(c_53, 2);
          {
            t = not_null(l_53);
            {
              ATerm e_2 (ATerm t)
              {
                t = not_null(d_53);
                return(t);
              }
              ATerm f_2 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
                return(t);
              }
              t = check_constructors_p__2(t, e_2, f_2);
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_62 (ATerm))
{
  ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL;
  d_54 = t;
  c_54 :
  if(match_cons(d_54, sym__2))
    {
      e_54 = ATgetArgument(d_54, 0);
      f_54 = ATgetArgument(d_54, 1);
      {
        ATerm i_54 = NULL,j_54 = NULL,s_54 = NULL;
        ATerm v_12;
        v_12 = t;
        {
          ATerm t_54 = NULL;
          ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL;
          t = z_62(t);
          {
            t_54 = t;
            {
              if(((i_54 != NULL) && (i_54 != t_54)))
                _fail(t_54);
              else
                i_54 = t_54;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(i_54), not_null(e_54), not_null(f_54));
                {
                  t = table_push_0(t);
                  {
                    ATerm w_12 = t;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_54), (ATerm) ATmakeAppl(sym_Scopes_0));
                        t = table_get_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = w_12;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      u_54 = t;
                      z_53 :
                      if(((ATgetType(u_54) == AT_LIST) && ((ATermList) u_54 != ATempty)))
                        {
                          v_54 = ATgetFirst((ATermList) u_54);
                          w_54 = (ATerm) ATgetNext((ATermList) u_54);
                          {
                            if(((j_54 != NULL) && (j_54 != v_54)))
                              _fail(v_54);
                            else
                              j_54 = v_54;
                            {
                              if(((s_54 != NULL) && (s_54 != w_54)))
                                _fail(w_54);
                              else
                                s_54 = w_54;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(i_54), (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(not_null(s_54)), (ATerm) ATinsert(CheckATermList(not_null(j_54)), not_null(e_54))));
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
        t = v_12;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm c_55 = NULL,f_55 = NULL,g_55 = NULL;
  c_55 = t;
  b_55 :
  if(match_cons(c_55, sym__2))
    {
      f_55 = ATgetArgument(c_55, 0);
      g_55 = ATgetArgument(c_55, 1);
      {
        ATerm x_12 = t;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(f_55), not_null(g_55));
            PopChoice();
          }
        else
          {
            t = x_12;
            t = SSL_addr(not_null(f_55), not_null(g_55));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, g_2, add_0, h_2);
  return(t);
}
ATerm GenerateCheckRule_0 (ATerm t)
{
  ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL;
  x_55 = t;
  s_55 :
  if(match_cons(x_55, sym_OpDecl_2))
    {
      y_55 = ATgetArgument(x_55, 0);
      z_55 = ATgetArgument(x_55, 1);
      t_55 :
      if(match_cons(z_55, sym_FunType_2))
        {
          a_56 = ATgetArgument(z_55, 0);
          w_55 = ATgetArgument(z_55, 1);
          {
            ATerm l_56 = NULL;
            ATerm y_12;
            y_12 = t;
            {
              ATerm u_56 = NULL;
              t = not_null(a_56);
              {
                t = length_0(t);
                {
                  u_56 = t;
                  if(((l_56 != NULL) && (l_56 != u_56)))
                    _fail(u_56);
                  else
                    l_56 = u_56;
                }
              }
            }
            t = y_12;
            {
              ATerm z_12;
              z_12 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(y_55), not_null(l_56)), (ATerm) ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue)), not_null(y_55)));
                {
                  ATerm i_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
                    return(t);
                  }
                  t = assert_1(t, i_2);
                }
              }
              t = z_12;
            }
          }
        }
      else
        {
          if(match_cons(z_55, sym_ConstType_1))
            {
              a_56 = ATgetArgument(z_55, 0);
              {
                ATerm x_56 = NULL;
                ATerm a_13;
                a_13 = t;
                {
                  ATerm y_56 = NULL;
                  t = (ATerm) ATmakeInt(0);
                  {
                    y_56 = t;
                    if(((x_56 != NULL) && (x_56 != y_56)))
                      _fail(y_56);
                    else
                      x_56 = y_56;
                  }
                }
                t = a_13;
                {
                  ATerm b_13;
                  b_13 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(y_55), not_null(x_56)), (ATerm) ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue)), not_null(y_55)));
                    {
                      ATerm j_2 (ATerm t)
                      {
                        t = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
                        return(t);
                      }
                      t = assert_1(t, j_2);
                    }
                  }
                  t = b_13;
                }
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
ATerm CheckConstructors_0 (ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL;
  x_57 = t;
  g_57 :
  if(match_cons(x_57, sym_Specification_1))
    {
      y_57 = ATgetArgument(x_57, 0);
      h_57 :
      if(((ATgetType(y_57) == AT_LIST) && ((ATermList) y_57 != ATempty)))
        {
          z_57 = ATgetFirst((ATermList) y_57);
          e_58 = (ATerm) ATgetNext((ATermList) y_57);
          i_57 :
          if(match_cons(z_57, sym_Signature_1))
            {
              a_58 = ATgetArgument(z_57, 0);
              j_57 :
              if(((ATgetType(a_58) == AT_LIST) && ((ATermList) a_58 != ATempty)))
                {
                  b_58 = ATgetFirst((ATermList) a_58);
                  d_58 = (ATerm) ATgetNext((ATermList) a_58);
                  k_57 :
                  if(match_cons(b_58, sym_Constructors_1))
                    {
                      c_58 = ATgetArgument(b_58, 0);
                      l_57 :
                      if(((ATermList) d_58 == ATempty))
                        {
                          q_57 :
                          if(((ATgetType(e_58) == AT_LIST) && ((ATermList) e_58 != ATempty)))
                            {
                              f_58 = ATgetFirst((ATermList) e_58);
                              h_58 = (ATerm) ATgetNext((ATermList) e_58);
                              r_57 :
                              if(match_cons(f_58, sym_Strategies_1))
                                {
                                  g_58 = ATgetArgument(f_58, 0);
                                  s_57 :
                                  if(((ATermList) h_58 == ATempty))
                                    {
                                      {
                                        ATerm k_58 = NULL;
                                        ATerm l_58 = NULL;
                                        ATerm m_58 = NULL;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(c_58)), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue))))));
                                        {
                                          l_58 = t;
                                          {
                                            if(((k_58 != NULL) && (k_58 != l_58)))
                                              _fail(l_58);
                                            else
                                              k_58 = l_58;
                                            {
                                              t = not_null(k_58);
                                              {
                                                t = map_1(t, GenerateCheckRule_0);
                                                {
                                                  t = not_null(g_58);
                                                  {
                                                    t = filter_1(t, check_constructors_0);
                                                    {
                                                      m_58 = t;
                                                      f_57 :
                                                      if(((ATermList) m_58 == ATempty))
                                                        {
                                                          {
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
                                        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(g_58))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(k_58))))));
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
ATerm exp_overlays2_1 (ATerm t, ATerm p_57 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm c_13;
    c_13 = t;
    {
      ATerm d_13 = t;
      if((PushChoice() == 0))
        {
          ATerm q_58 = NULL;
          t = p_57(t);
          {
            q_58 = t;
            p_58 :
            if(((ATermList) q_58 == ATempty))
              {
                {
                }
              }
            else
              _fail(t);
          }
          PopChoice();
          _fail(t);
        }
      else
        t = d_13;
    }
    t = c_13;
    {
      ATerm l_2 (ATerm t)
      {
        ATerm m_2 (ATerm t)
        {
          t = ExpOverlay_1(t, p_57);
          return(t);
        }
        t = try_1(t, m_2);
        return(t);
      }
      t = topdown_1(t, l_2);
    }
    return(t);
  }
  t = try_1(t, k_2);
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL;
  a_59 = t;
  y_58 :
  if(match_cons(a_59, sym_BuildDefault_1))
    {
      b_59 = ATgetArgument(a_59, 0);
      t = (ATerm) ATmakeAppl(sym_Id_0);
    }
  else
    {
      if(match_cons(a_59, sym_Real_1))
        {
          b_59 = ATgetArgument(a_59, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(b_59)));
        }
      else
        {
          if(match_cons(a_59, sym_Int_1))
            {
              b_59 = ATgetArgument(a_59, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(b_59)));
            }
          else
            {
              if(match_cons(a_59, sym_Str_1))
                {
                  b_59 = ATgetArgument(a_59, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(b_59)));
                }
              else
                {
                  if(match_cons(a_59, sym_Op_2))
                    {
                      b_59 = ATgetArgument(a_59, 0);
                      z_58 = ATgetArgument(a_59, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_59)), not_null(z_58));
                    }
                  else
                    {
                      if(match_cons(a_59, sym_Var_1))
                        {
                          b_59 = ATgetArgument(a_59, 0);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_59)), (ATerm) ATempty);
                        }
                      else
                        _fail(t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm a_54 (ATerm), ATerm b_54 (ATerm))
{
  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL;
  t_60 = t;
  s_60 :
  if(match_cons(t_60, sym_Op_2))
    {
      u_60 = ATgetArgument(t_60, 0);
      v_60 = ATgetArgument(t_60, 1);
      {
        ATerm e_61 = NULL;
        t = not_null(u_60);
        {
          ATerm g_61 = NULL;
          t = a_54(t);
          {
            e_61 = t;
            {
              t = not_null(v_60);
              {
                t = b_54(t);
                {
                  g_61 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(e_61), not_null(g_61));
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
ATerm trm_to_cong_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm o_2 (ATerm t)
    {
      t = map_1(t, trm_to_cong_0);
      return(t);
    }
    t = Op_2(t, _id, o_2);
    return(t);
  }
  t = try_1(t, n_2);
  t = Trm_to_Cong_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0 (ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL;
  r_61 = t;
  q_61 :
  if(match_cons(r_61, sym_Overlay_3))
    {
      s_61 = ATgetArgument(r_61, 0);
      t_61 = ATgetArgument(r_61, 1);
      u_61 = ATgetArgument(r_61, 2);
      {
        ATerm a_62 = NULL,j_62 = NULL;
        ATerm e_13;
        e_13 = t;
        {
          ATerm f_62 = NULL;
          t = not_null(t_61);
          {
            ATerm p_2 (ATerm t)
            {
              ATerm d_62 = NULL;
              ATerm e_62 = NULL;
              e_62 = t;
              if(((d_62 != NULL) && (d_62 != e_62)))
                _fail(e_62);
              else
                d_62 = e_62;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(d_62), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATempty))), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATempty))));
              return(t);
            }
            t = map_1(t, p_2);
            {
              f_62 = t;
              if(((a_62 != NULL) && (a_62 != f_62)))
                _fail(f_62);
              else
                a_62 = f_62;
            }
          }
        }
        t = e_13;
        {
          ATerm k_62 = NULL;
          t = not_null(u_61);
          {
            t = trm_to_cong_0(t);
            {
              k_62 = t;
              if(((j_62 != NULL) && (j_62 != k_62)))
                _fail(k_62);
              else
                j_62 = k_62;
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(s_61), not_null(a_62), not_null(j_62));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm m_56 (ATerm))
{
  t = Scope_2(t, m_56, _id);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm w_53 (ATerm))
{
  ATerm u_62 = NULL,a_63 = NULL;
  u_62 = t;
  t_62 :
  if(match_cons(u_62, sym_Var_1))
    {
      a_63 = ATgetArgument(u_62, 0);
      {
        ATerm d_63 = NULL;
        t = not_null(a_63);
        {
          t = w_53(t);
          {
            d_63 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_63));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm c_59 (ATerm), ATerm d_59 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL;
  l_63 = t;
  k_63 :
  if(match_cons(l_63, sym__3))
    {
      m_63 = ATgetArgument(l_63, 0);
      n_63 = ATgetArgument(l_63, 1);
      o_63 = ATgetArgument(l_63, 2);
      {
        t = not_null(m_63);
        {
          ATerm q_2 (ATerm t)
          {
            ATerm s_63 = NULL;
            s_63 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_63), not_null(o_63));
              t = c_59(t);
            }
            return(t);
          }
          ATerm r_2 (ATerm t)
          {
            ATerm u_63 = NULL;
            u_63 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_63), not_null(n_63));
              t = c_59(t);
            }
            return(t);
          }
          t = d_59(t, q_2, r_2, _id);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm i_59 (ATerm), ATerm j_59 (ATerm, ATerm (ATerm)))
{
  ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL;
  g_64 = t;
  f_64 :
  if(match_cons(g_64, sym__2))
    {
      h_64 = ATgetArgument(g_64, 0);
      i_64 = ATgetArgument(g_64, 1);
      {
        ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL,t_64 = NULL;
        ATerm f_13;
        f_13 = t;
        {
          ATerm o_64 = NULL;
          t = not_null(h_64);
          {
            ATerm p_64 = NULL;
            t = i_59(t);
            {
              o_64 = t;
              {
                if(((l_64 != NULL) && (l_64 != o_64)))
                  _fail(o_64);
                else
                  l_64 = o_64;
                {
                  ATerm q_64 = NULL,s_64 = NULL;
                  t = map_1(t, new_0);
                  {
                    p_64 = t;
                    {
                      if(((m_64 != NULL) && (m_64 != p_64)))
                        _fail(p_64);
                      else
                        m_64 = p_64;
                      {
                        ATerm r_64 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_64), not_null(m_64));
                        {
                          t = zip_1(t, _id);
                          {
                            r_64 = t;
                            if(((q_64 != NULL) && (q_64 != r_64)))
                              _fail(r_64);
                            else
                              q_64 = r_64;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_64), not_null(i_64));
                          {
                            t = conc_0(t);
                            {
                              s_64 = t;
                              if(((n_64 != NULL) && (n_64 != s_64)))
                                _fail(s_64);
                              else
                                n_64 = s_64;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = f_13;
        {
          ATerm u_64 = NULL;
          t = not_null(h_64);
          {
            ATerm s_2 (ATerm t)
            {
              t = not_null(m_64);
              return(t);
            }
            t = j_59(t, s_2);
            {
              u_64 = t;
              if(((t_64 != NULL) && (t_64 != u_64)))
                _fail(u_64);
              else
                t_64 = u_64;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(t_64), not_null(i_64), not_null(n_64));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm h_65 = NULL;
  ATerm l_65 = NULL,m_65 = NULL;
  h_65 = t;
  {
    ATerm n_65 = NULL;
    ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL;
    t = not_null(h_65);
    {
      n_65 = t;
      {
        t = SSL_explode_term(not_null(n_65));
        {
          p_65 = t;
          e_65 :
          if(match_cons(p_65, sym__2))
            {
              q_65 = ATgetArgument(p_65, 0);
              r_65 = ATgetArgument(p_65, 1);
              f_65 :
              if(match_string(q_65, ""))
                {
                  g_65 :
                  if(((ATgetType(r_65) == AT_LIST) && ((ATermList) r_65 != ATempty)))
                    {
                      s_65 = ATgetFirst((ATermList) r_65);
                      t_65 = (ATerm) ATgetNext((ATermList) r_65);
                      {
                        if(((m_65 != NULL) && (m_65 != s_65)))
                          _fail(s_65);
                        else
                          m_65 = s_65;
                        if(((l_65 != NULL) && (l_65 != t_65)))
                          _fail(t_65);
                        else
                          l_65 = t_65;
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
    t = not_null(m_65);
  }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm w_58 (ATerm, ATerm (ATerm)))
{
  ATerm z_65 = NULL,a_66 = NULL,c_66 = NULL;
  z_65 = t;
  y_65 :
  if(match_cons(z_65, sym__2))
    {
      a_66 = ATgetArgument(z_65, 0);
      c_66 = ATgetArgument(z_65, 1);
      {
        t = not_null(a_66);
        {
          ATerm t_2 (ATerm t)
          {
            ATerm u_2 (ATerm t)
            {
              t = not_null(c_66);
              return(t);
            }
            t = split_2(t, _id, u_2);
            t = lookup_0(t);
            return(t);
          }
          t = w_58(t, t_2);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm l_73 (ATerm))
{
  ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL;
  j_66 = t;
  i_66 :
  if(match_cons(j_66, sym__2))
    {
      k_66 = ATgetArgument(j_66, 0);
      l_66 = ATgetArgument(j_66, 1);
      {
        t = not_null(k_66);
        {
          ATerm v_2 (ATerm t)
          {
            ATerm o_66 = NULL;
            o_66 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_66), not_null(l_66));
              t = l_73(t);
            }
            return(t);
          }
          t = _all(t, v_2);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm q_73 (ATerm))
{
  ATerm s_66 (ATerm t)
  {
    ATerm g_13 = t;
    if((PushChoice() == 0))
      {
        t = q_73(t);
        PopChoice();
      }
    else
      {
        t = g_13;
        t = all_dist_1(t, s_66);
      }
    return(t);
  }
  t = s_66(t);
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm u_59 (ATerm), ATerm v_59 (ATerm, ATerm (ATerm)), ATerm w_59 (ATerm), ATerm x_59 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm y_59 (ATerm, ATerm (ATerm)), ATerm z_59 (ATerm))
{
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL;
  t = subs_args_0(t);
  {
    a_67 = t;
    u_66 :
    if(match_cons(a_67, sym__2))
      {
        b_67 = ATgetArgument(a_67, 0);
        c_67 = ATgetArgument(a_67, 1);
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_67), (ATerm) ATempty);
          {
            ATerm g_67 (ATerm t)
            {
              ATerm w_2 (ATerm t)
              {
                ATerm h_13 = t;
                if((PushChoice() == 0))
                  {
                    t = RnVar_1(t, v_59);
                    PopChoice();
                  }
                else
                  {
                    t = h_13;
                    {
                      ATerm i_13 = t;
                      if((PushChoice() == 0))
                        {
                          t = Fst_0(t);
                          {
                            ATerm x_2 (ATerm t)
                            {
                              t = not_null(b_67);
                              return(t);
                            }
                            t = SubsVar_2(t, u_59, x_2);
                            t = z_59(t);
                          }
                          PopChoice();
                        }
                      else
                        {
                          t = i_13;
                          {
                            t = RnBinding_2(t, w_59, y_59);
                            t = DistBinding_2(t, g_67, x_59);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = env_alltd_1(t, w_2);
              return(t);
            }
            t = g_67(t);
          }
        }
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm substitute_5 (ATerm t, ATerm b_60 (ATerm), ATerm c_60 (ATerm, ATerm (ATerm)), ATerm d_60 (ATerm), ATerm e_60 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm f_60 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, b_60, c_60, d_60, e_60, f_60, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  ATerm h_67 (ATerm t, ATerm i_67 (ATerm))
  {
    t = Scope_2(t, i_67, _id);
    return(t);
  }
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, h_67);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm n_57 (ATerm))
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL;
  q_67 = t;
  p_67 :
  if(match_cons(q_67, sym_Op_2))
    {
      r_67 = ATgetArgument(q_67, 0);
      s_67 = ATgetArgument(q_67, 1);
      {
        ATerm w_67 = NULL,x_67 = NULL;
        t = n_57(t);
        {
          ATerm y_2 (ATerm t)
          {
            ATerm j_13;
            j_13 = t;
            {
              ATerm y_67 = NULL,a_68 = NULL,b_68 = NULL,e_68 = NULL;
              y_67 = t;
              o_67 :
              if(match_cons(y_67, sym_Overlay_3))
                {
                  a_68 = ATgetArgument(y_67, 0);
                  b_68 = ATgetArgument(y_67, 1);
                  e_68 = ATgetArgument(y_67, 2);
                  {
                    ATerm f_68 = NULL,g_68 = NULL,i_68 = NULL,n_68 = NULL;
                    if(((r_67 != NULL) && (r_67 != a_68)))
                      _fail(a_68);
                    else
                      r_67 = a_68;
                    {
                      if(((f_68 != NULL) && (f_68 != b_68)))
                        _fail(b_68);
                      else
                        f_68 = b_68;
                      {
                        if(((g_68 != NULL) && (g_68 != e_68)))
                          _fail(e_68);
                        else
                          g_68 = e_68;
                        {
                          ATerm k_13;
                          k_13 = t;
                          {
                            ATerm j_68 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(f_68), not_null(s_67));
                            {
                              t = zip_1(t, _id);
                              {
                                j_68 = t;
                                if(((i_68 != NULL) && (i_68 != j_68)))
                                  _fail(j_68);
                                else
                                  i_68 = j_68;
                              }
                            }
                          }
                          t = k_13;
                          {
                            ATerm o_68 = NULL;
                            t = not_null(i_68);
                            {
                              n_68 = t;
                              {
                                if(((w_67 != NULL) && (w_67 != n_68)))
                                  _fail(n_68);
                                else
                                  w_67 = n_68;
                                {
                                  t = not_null(g_68);
                                  {
                                    o_68 = t;
                                    {
                                      if(((x_67 != NULL) && (x_67 != o_68)))
                                        _fail(o_68);
                                      else
                                        x_67 = o_68;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(i_68), not_null(g_68));
                                    }
                                  }
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
            t = j_13;
            return(t);
          }
          t = fetch_1(t, y_2);
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_67), not_null(x_67));
          t = tsubstitute_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm exp_overlays1_1 (ATerm t, ATerm o_57 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    ATerm l_13;
    l_13 = t;
    {
      ATerm m_13 = t;
      if((PushChoice() == 0))
        {
          ATerm v_68 = NULL;
          t = o_57(t);
          {
            v_68 = t;
            u_68 :
            if(((ATermList) v_68 == ATempty))
              {
                {
                }
              }
            else
              _fail(t);
          }
          PopChoice();
          _fail(t);
        }
      else
        t = m_13;
    }
    t = l_13;
    {
      ATerm a_3 (ATerm t)
      {
        ATerm b_3 (ATerm t)
        {
          t = ExpOverlay_1(t, o_57);
          return(t);
        }
        t = repeat_1(t, b_3);
        return(t);
      }
      t = topdown_1(t, a_3);
    }
    return(t);
  }
  t = try_1(t, z_2);
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL;
  j_69 = t;
  b_69 :
  if(match_cons(j_69, sym_Specification_1))
    {
      k_69 = ATgetArgument(j_69, 0);
      c_69 :
      if(((ATgetType(k_69) == AT_LIST) && ((ATermList) k_69 != ATempty)))
        {
          l_69 = ATgetFirst((ATermList) k_69);
          n_69 = (ATerm) ATgetNext((ATermList) k_69);
          d_69 :
          if(match_cons(l_69, sym_Signature_1))
            {
              m_69 = ATgetArgument(l_69, 0);
              e_69 :
              if(((ATgetType(n_69) == AT_LIST) && ((ATermList) n_69 != ATempty)))
                {
                  o_69 = ATgetFirst((ATermList) n_69);
                  q_69 = (ATerm) ATgetNext((ATermList) n_69);
                  f_69 :
                  if(match_cons(o_69, sym_Overlays_1))
                    {
                      p_69 = ATgetArgument(o_69, 0);
                      g_69 :
                      if(((ATgetType(q_69) == AT_LIST) && ((ATermList) q_69 != ATempty)))
                        {
                          r_69 = ATgetFirst((ATermList) q_69);
                          t_69 = (ATerm) ATgetNext((ATermList) q_69);
                          h_69 :
                          if(match_cons(r_69, sym_Strategies_1))
                            {
                              s_69 = ATgetArgument(r_69, 0);
                              i_69 :
                              if(((ATermList) t_69 == ATempty))
                                {
                                  {
                                    ATerm x_69 = NULL,z_69 = NULL;
                                    ATerm n_13;
                                    n_13 = t;
                                    {
                                      ATerm y_69 = NULL;
                                      t = not_null(p_69);
                                      {
                                        ATerm c_3 (ATerm t)
                                        {
                                          t = not_null(p_69);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, c_3);
                                        {
                                          y_69 = t;
                                          if(((x_69 != NULL) && (x_69 != y_69)))
                                            _fail(y_69);
                                          else
                                            x_69 = y_69;
                                        }
                                      }
                                    }
                                    t = n_13;
                                    {
                                      ATerm a_70 = NULL,c_70 = NULL,e_70 = NULL;
                                      ATerm o_13;
                                      o_13 = t;
                                      {
                                        ATerm b_70 = NULL;
                                        t = not_null(p_69);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            b_70 = t;
                                            if(((a_70 != NULL) && (a_70 != b_70)))
                                              _fail(b_70);
                                            else
                                              a_70 = b_70;
                                          }
                                        }
                                      }
                                      t = o_13;
                                      {
                                        ATerm d_70 = NULL;
                                        t = not_null(s_69);
                                        {
                                          ATerm d_3 (ATerm t)
                                          {
                                            t = not_null(x_69);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, d_3);
                                          {
                                            d_70 = t;
                                            if(((c_70 != NULL) && (c_70 != d_70)))
                                              _fail(d_70);
                                            else
                                              c_70 = d_70;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_70), not_null(c_70));
                                          {
                                            t = conc_0(t);
                                            {
                                              e_70 = t;
                                              if(((z_69 != NULL) && (z_69 != e_70)))
                                                _fail(e_70);
                                              else
                                                z_69 = e_70;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(z_69))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(m_69))));
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
ATerm error_0 (ATerm t)
{
  ATerm p_13;
  p_13 = t;
  {
    ATerm s_70 = NULL;
    ATerm t_70 = NULL;
    t_70 = t;
    if(((s_70 != NULL) && (s_70 != t_70)))
      _fail(t_70);
    else
      s_70 = t_70;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), not_null(s_70));
      t = printnl_0(t);
    }
  }
  t = p_13;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm q_13;
  q_13 = t;
  {
    t = error_0(t);
    {
      t = (ATerm) ATmakeInt(1);
      t = exit_0(t);
    }
  }
  t = q_13;
  return(t);
}
ATerm MsgR_0 (ATerm t)
{
  ATerm z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL;
  z_70 = t;
  y_70 :
  if(match_cons(z_70, sym__3))
    {
      a_71 = ATgetArgument(z_70, 0);
      b_71 = ATgetArgument(z_70, 1);
      c_71 = ATgetArgument(z_70, 2);
      {
        ATerm g_71 = NULL,i_71 = NULL;
        ATerm t_13;
        t_13 = t;
        {
          ATerm h_71 = NULL;
          t = not_null(a_71);
          {
            t = MsgU_0(t);
            {
              h_71 = t;
              if(((g_71 != NULL) && (g_71 != h_71)))
                _fail(h_71);
              else
                g_71 = h_71;
            }
          }
        }
        t = t_13;
        {
          ATerm j_71 = NULL;
          t = not_null(c_71);
          {
            t = MsgE_0(t);
            {
              j_71 = t;
              if(((i_71 != NULL) && (i_71 != j_71)))
                _fail(j_71);
              else
                i_71 = j_71;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_71)), not_null(g_71));
            t = concat_0(t);
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MsgE_0 (ATerm t)
{
  ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL,x_71 = NULL,y_71 = NULL;
  y_71 = t;
  q_71 :
  if(((ATgetType(y_71) == AT_LIST) && ((ATermList) y_71 != ATempty)))
    {
      u_71 = ATgetFirst((ATermList) y_71);
      x_71 = (ATerm) ATgetNext((ATermList) y_71);
      r_71 :
      if(((ATgetType(x_71) == AT_LIST) && ((ATermList) x_71 != ATempty)))
        {
          s_71 = ATgetFirst((ATermList) x_71);
          t_71 = (ATerm) ATgetNext((ATermList) x_71);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue))), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(t_71)), not_null(s_71)), not_null(u_71))), (ATerm) ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue)));
        }
      else
        {
          if(((ATermList) x_71 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue))), not_null(u_71)), (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(((ATermList) y_71 == ATempty))
        {
          t = (ATerm) ATempty;
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm MsgU_0 (ATerm t)
{
  ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL;
  t_72 = t;
  n_72 :
  if(((ATgetType(t_72) == AT_LIST) && ((ATermList) t_72 != ATempty)))
    {
      r_72 = ATgetFirst((ATermList) t_72);
      s_72 = (ATerm) ATgetNext((ATermList) t_72);
      o_72 :
      if(((ATgetType(s_72) == AT_LIST) && ((ATermList) s_72 != ATempty)))
        {
          p_72 = ATgetFirst((ATermList) s_72);
          q_72 = (ATerm) ATgetNext((ATermList) s_72);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue))), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(q_72)), not_null(p_72)), not_null(r_72))), (ATerm) ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue)));
        }
      else
        {
          if(((ATermList) s_72 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue))), not_null(r_72)), (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(((ATermList) t_72 == ATempty))
        {
          t = (ATerm) ATempty;
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm MsgS_0 (ATerm t)
{
  ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL,n_73 = NULL;
  i_73 = t;
  g_73 :
  if(match_cons(i_73, sym__3))
    {
      j_73 = ATgetArgument(i_73, 0);
      k_73 = ATgetArgument(i_73, 1);
      n_73 = ATgetArgument(i_73, 2);
      {
        ATerm t_73 = NULL,v_73 = NULL;
        ATerm d_14;
        d_14 = t;
        {
          ATerm u_73 = NULL;
          t = not_null(j_73);
          {
            t = MsgU_0(t);
            {
              u_73 = t;
              if(((t_73 != NULL) && (t_73 != u_73)))
                _fail(u_73);
              else
                t_73 = u_73;
            }
          }
        }
        t = d_14;
        {
          ATerm w_73 = NULL;
          t = not_null(n_73);
          {
            t = MsgE_0(t);
            {
              w_73 = t;
              if(((v_73 != NULL) && (v_73 != w_73)))
                _fail(w_73);
              else
                v_73 = w_73;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_73)), not_null(t_73));
            t = concat_0(t);
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkMsg_0 (ATerm t)
{
  ATerm j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL;
  j_74 = t;
  i_74 :
  if(match_cons(j_74, sym_Overlay_3))
    {
      k_74 = ATgetArgument(j_74, 0);
      l_74 = ATgetArgument(j_74, 1);
      m_74 = ATgetArgument(j_74, 2);
      {
        ATerm u_74 = NULL;
        ATerm v_74 = NULL;
        t = not_null(m_74);
        {
          t = map_1(t, MsgR_0);
          {
            t = concat_0(t);
            {
              v_74 = t;
              if(((u_74 != NULL) && (u_74 != v_74)))
                _fail(v_74);
              else
                u_74 = v_74;
            }
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(u_74)), (ATerm) ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue))), not_null(k_74)), (ATerm) ATmakeAppl(ATmakeSymbol("error in overlay ", 0, ATtrue)));
      }
    }
  else
    {
      if(match_cons(j_74, sym_SDef_3))
        {
          k_74 = ATgetArgument(j_74, 0);
          l_74 = ATgetArgument(j_74, 1);
          m_74 = ATgetArgument(j_74, 2);
          {
            ATerm z_74 = NULL;
            ATerm a_75 = NULL;
            t = not_null(m_74);
            {
              t = map_1(t, MsgS_0);
              {
                t = concat_0(t);
                {
                  a_75 = t;
                  if(((z_74 != NULL) && (z_74 != a_75)))
                    _fail(a_75);
                  else
                    z_74 = a_75;
                }
              }
            }
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(z_74)), (ATerm) ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue))), not_null(k_74)), (ATerm) ATmakeAppl(ATmakeSymbol("error in definition ", 0, ATtrue)));
          }
        }
      else
        {
          if(match_cons(j_74, sym_RDef_3))
            {
              k_74 = ATgetArgument(j_74, 0);
              l_74 = ATgetArgument(j_74, 1);
              m_74 = ATgetArgument(j_74, 2);
              {
                ATerm e_75 = NULL;
                ATerm f_75 = NULL;
                t = not_null(m_74);
                {
                  t = map_1(t, MsgR_0);
                  {
                    t = concat_0(t);
                    {
                      f_75 = t;
                      if(((e_75 != NULL) && (e_75 != f_75)))
                        _fail(f_75);
                      else
                        e_75 = f_75;
                    }
                  }
                }
                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(e_75)), (ATerm) ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue))), not_null(k_74)), (ATerm) ATmakeAppl(ATmakeSymbol("error in rule ", 0, ATtrue)));
              }
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm err_msg_0 (ATerm t)
{
  t = MkMsg_0(t);
  t = fatal_error_0(t);
  return(t);
}
ATerm _3 (ATerm t, ATerm o_45 (ATerm), ATerm p_45 (ATerm), ATerm q_45 (ATerm))
{
  ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL;
  r_75 = t;
  q_75 :
  if(match_cons(r_75, sym__3))
    {
      s_75 = ATgetArgument(r_75, 0);
      t_75 = ATgetArgument(r_75, 1);
      u_75 = ATgetArgument(r_75, 2);
      {
        ATerm y_75 = NULL;
        t = not_null(s_75);
        {
          ATerm a_76 = NULL;
          t = o_45(t);
          {
            y_75 = t;
            {
              t = not_null(t_75);
              {
                ATerm c_76 = NULL;
                t = p_45(t);
                {
                  a_76 = t;
                  {
                    t = not_null(u_75);
                    {
                      t = q_45(t);
                      {
                        c_76 = t;
                        t = (ATerm) ATmakeAppl(sym__3, not_null(y_75), not_null(a_76), not_null(c_76));
                      }
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
ATerm Overlay_3 (ATerm t, ATerm e_53 (ATerm), ATerm f_53 (ATerm), ATerm g_53 (ATerm))
{
  ATerm p_76 = NULL,q_76 = NULL,r_76 = NULL,u_76 = NULL;
  p_76 = t;
  o_76 :
  if(match_cons(p_76, sym_Overlay_3))
    {
      q_76 = ATgetArgument(p_76, 0);
      r_76 = ATgetArgument(p_76, 1);
      u_76 = ATgetArgument(p_76, 2);
      {
        ATerm y_76 = NULL;
        t = not_null(q_76);
        {
          ATerm a_77 = NULL;
          t = e_53(t);
          {
            y_76 = t;
            {
              t = not_null(r_76);
              {
                ATerm c_77 = NULL;
                t = f_53(t);
                {
                  a_77 = t;
                  {
                    t = not_null(u_76);
                    {
                      t = g_53(t);
                      {
                        c_77 = t;
                        t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(y_76), not_null(a_77), not_null(c_77));
                      }
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
ATerm Union_0 (ATerm t)
{
  ATerm r_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL,b_78 = NULL,c_78 = NULL,d_78 = NULL;
  r_77 = t;
  o_77 :
  if(match_cons(r_77, sym__2))
    {
      w_77 = ATgetArgument(r_77, 0);
      a_78 = ATgetArgument(r_77, 1);
      p_77 :
      if(match_cons(w_77, sym__3))
        {
          x_77 = ATgetArgument(w_77, 0);
          y_77 = ATgetArgument(w_77, 1);
          z_77 = ATgetArgument(w_77, 2);
          q_77 :
          if(match_cons(a_78, sym__3))
            {
              b_78 = ATgetArgument(a_78, 0);
              c_78 = ATgetArgument(a_78, 1);
              d_78 = ATgetArgument(a_78, 2);
              {
                ATerm r_78 = NULL,t_78 = NULL,v_78 = NULL;
                ATerm e_14;
                e_14 = t;
                {
                  ATerm s_78 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_77), not_null(b_78));
                  {
                    t = union_0(t);
                    {
                      s_78 = t;
                      if(((r_78 != NULL) && (r_78 != s_78)))
                        _fail(s_78);
                      else
                        r_78 = s_78;
                    }
                  }
                }
                t = e_14;
                {
                  ATerm f_14;
                  f_14 = t;
                  {
                    ATerm u_78 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_77), not_null(c_78));
                    {
                      t = union_0(t);
                      {
                        u_78 = t;
                        if(((t_78 != NULL) && (t_78 != u_78)))
                          _fail(u_78);
                        else
                          t_78 = u_78;
                      }
                    }
                  }
                  t = f_14;
                  {
                    ATerm w_78 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_77), not_null(d_78));
                    {
                      t = union_0(t);
                      {
                        w_78 = t;
                        if(((v_78 != NULL) && (v_78 != w_78)))
                          _fail(w_78);
                        else
                          v_78 = w_78;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(r_78), not_null(t_78), not_null(v_78));
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
ATerm Snd_0 (ATerm t)
{
  ATerm m_79 = NULL;
  ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL;
  m_79 = t;
  {
    ATerm r_79 = NULL;
    ATerm t_79 = NULL,u_79 = NULL,v_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL;
    t = not_null(m_79);
    {
      r_79 = t;
      {
        t = SSL_explode_term(not_null(r_79));
        {
          t_79 = t;
          i_79 :
          if(match_cons(t_79, sym__2))
            {
              u_79 = ATgetArgument(t_79, 0);
              v_79 = ATgetArgument(t_79, 1);
              j_79 :
              if(match_string(u_79, ""))
                {
                  k_79 :
                  if(((ATgetType(v_79) == AT_LIST) && ((ATermList) v_79 != ATempty)))
                    {
                      w_79 = ATgetFirst((ATermList) v_79);
                      x_79 = (ATerm) ATgetNext((ATermList) v_79);
                      l_79 :
                      if(((ATgetType(x_79) == AT_LIST) && ((ATermList) x_79 != ATempty)))
                        {
                          y_79 = ATgetFirst((ATermList) x_79);
                          z_79 = (ATerm) ATgetNext((ATermList) x_79);
                          {
                            if(((o_79 != NULL) && (o_79 != w_79)))
                              _fail(w_79);
                            else
                              o_79 = w_79;
                            {
                              if(((q_79 != NULL) && (q_79 != y_79)))
                                _fail(y_79);
                              else
                                q_79 = y_79;
                              if(((p_79 != NULL) && (p_79 != z_79)))
                                _fail(z_79);
                              else
                                p_79 = z_79;
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
    t = not_null(q_79);
  }
  return(t);
}
ATerm explode_term_0 (ATerm t)
{
  ATerm e_80 = NULL;
  e_80 = t;
  t = SSL_explode_term(not_null(e_80));
  return(t);
}
ATerm default_join_0 (ATerm t)
{
  t = explode_term_0(t);
  {
    t = Snd_0(t);
    {
      ATerm e_3 (ATerm t)
      {
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        t = cart_1(t, Union_0);
        return(t);
      }
      t = foldr_2(t, e_3, f_3);
    }
  }
  return(t);
}
ATerm SeqUnion_0 (ATerm t)
{
  ATerm p_80 = NULL,q_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL,u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL;
  p_80 = t;
  m_80 :
  if(match_cons(p_80, sym__2))
    {
      q_80 = ATgetArgument(p_80, 0);
      u_80 = ATgetArgument(p_80, 1);
      n_80 :
      if(match_cons(q_80, sym__3))
        {
          r_80 = ATgetArgument(q_80, 0);
          s_80 = ATgetArgument(q_80, 1);
          t_80 = ATgetArgument(q_80, 2);
          o_80 :
          if(match_cons(u_80, sym__3))
            {
              v_80 = ATgetArgument(u_80, 0);
              w_80 = ATgetArgument(u_80, 1);
              x_80 = ATgetArgument(u_80, 2);
              {
                ATerm e_81 = NULL,i_81 = NULL,k_81 = NULL;
                ATerm g_14;
                g_14 = t;
                {
                  ATerm f_81 = NULL,h_81 = NULL;
                  ATerm g_81 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_80), not_null(s_80));
                  {
                    t = diff_0(t);
                    {
                      g_81 = t;
                      if(((f_81 != NULL) && (f_81 != g_81)))
                        _fail(g_81);
                      else
                        f_81 = g_81;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_80), not_null(f_81));
                    {
                      t = union_0(t);
                      {
                        h_81 = t;
                        if(((e_81 != NULL) && (e_81 != h_81)))
                          _fail(h_81);
                        else
                          e_81 = h_81;
                      }
                    }
                  }
                }
                t = g_14;
                {
                  ATerm h_14;
                  h_14 = t;
                  {
                    ATerm j_81 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_80), not_null(w_80));
                    {
                      t = union_0(t);
                      {
                        j_81 = t;
                        if(((i_81 != NULL) && (i_81 != j_81)))
                          _fail(j_81);
                        else
                          i_81 = j_81;
                      }
                    }
                  }
                  t = h_14;
                  {
                    ATerm l_81 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(t_80), not_null(x_80));
                    {
                      t = union_0(t);
                      {
                        l_81 = t;
                        if(((k_81 != NULL) && (k_81 != l_81)))
                          _fail(l_81);
                        else
                          k_81 = l_81;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(e_81), not_null(i_81), not_null(k_81));
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
ATerm cart_1 (ATerm t, ATerm g_70 (ATerm))
{
  ATerm v_81 = NULL,w_81 = NULL,x_81 = NULL;
  v_81 = t;
  u_81 :
  if(match_cons(v_81, sym__2))
    {
      w_81 = ATgetArgument(v_81, 0);
      x_81 = ATgetArgument(v_81, 1);
      {
        t = not_null(w_81);
        {
          ATerm g_3 (ATerm t)
          {
            ATerm a_82 = NULL;
            a_82 = t;
            {
              t = not_null(x_81);
              {
                ATerm h_3 (ATerm t)
                {
                  ATerm c_82 = NULL;
                  c_82 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_82), not_null(c_82));
                    t = g_70(t);
                  }
                  return(t);
                }
                t = map_1(t, h_3);
              }
            }
            return(t);
          }
          t = map_1(t, g_3);
          {
            ATerm i_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = foldr_2(t, i_3, union_0);
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm seqs_join_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = cart_1(t, SeqUnion_0);
    return(t);
  }
  t = foldr_2(t, j_3, k_3);
  return(t);
}
ATerm JoinScope_1 (ATerm t, ATerm j_56 (ATerm))
{
  ATerm o_82 = NULL,p_82 = NULL,q_82 = NULL,r_82 = NULL;
  o_82 = t;
  n_82 :
  if(match_cons(o_82, sym__3))
    {
      p_82 = ATgetArgument(o_82, 0);
      q_82 = ATgetArgument(o_82, 1);
      r_82 = ATgetArgument(o_82, 2);
      {
        ATerm v_82 = NULL,z_82 = NULL;
        ATerm i_14;
        i_14 = t;
        {
          ATerm w_82 = NULL,y_82 = NULL;
          ATerm x_82 = NULL;
          t = (ATerm) ATmakeAppl(sym__0);
          {
            t = j_56(t);
            {
              x_82 = t;
              if(((w_82 != NULL) && (w_82 != x_82)))
                _fail(x_82);
              else
                w_82 = x_82;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_82), not_null(w_82));
            {
              t = diff_0(t);
              {
                y_82 = t;
                if(((v_82 != NULL) && (v_82 != y_82)))
                  _fail(y_82);
                else
                  v_82 = y_82;
              }
            }
          }
        }
        t = i_14;
        {
          ATerm a_83 = NULL,e_83 = NULL;
          ATerm b_83 = NULL,d_83 = NULL;
          ATerm c_83 = NULL;
          t = (ATerm) ATmakeAppl(sym__0);
          {
            t = j_56(t);
            {
              c_83 = t;
              if(((b_83 != NULL) && (b_83 != c_83)))
                _fail(c_83);
              else
                b_83 = c_83;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_82), not_null(b_83));
            {
              t = isect_0(t);
              {
                d_83 = t;
                if(((a_83 != NULL) && (a_83 != d_83)))
                  _fail(d_83);
                else
                  a_83 = d_83;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_83), not_null(r_82));
            {
              t = conc_0(t);
              {
                e_83 = t;
                if(((z_82 != NULL) && (z_82 != e_83)))
                  _fail(e_83);
                else
                  z_82 = e_83;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(p_82), not_null(v_82), not_null(z_82));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UDjoin_0 (ATerm t)
{
  ATerm y_83 = NULL,z_83 = NULL,a_84 = NULL,b_84 = NULL;
  a_84 = t;
  x_83 :
  if(match_cons(a_84, sym_Overlay_3))
    {
      b_84 = ATgetArgument(a_84, 0);
      z_83 = ATgetArgument(a_84, 1);
      y_83 = ATgetArgument(a_84, 2);
      {
        ATerm f_84 = NULL;
        ATerm g_84 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_83)), (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(z_83), (ATerm) ATempty));
        {
          t = seqs_join_0(t);
          {
            g_84 = t;
            if(((f_84 != NULL) && (f_84 != g_84)))
              _fail(g_84);
            else
              f_84 = g_84;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(b_84), not_null(z_83), not_null(f_84));
      }
    }
  else
    {
      if(match_cons(a_84, sym_Scope_2))
        {
          b_84 = ATgetArgument(a_84, 0);
          z_83 = ATgetArgument(a_84, 1);
          {
            t = not_null(z_83);
            {
              ATerm l_3 (ATerm t)
              {
                ATerm m_3 (ATerm t)
                {
                  t = not_null(b_84);
                  return(t);
                }
                t = JoinScope_1(t, m_3);
                return(t);
              }
              t = map_1(t, l_3);
            }
          }
        }
      else
        {
          if(match_cons(a_84, sym_Cong_2))
            {
              b_84 = ATgetArgument(a_84, 0);
              z_83 = ATgetArgument(a_84, 1);
              {
                t = not_null(z_83);
                t = seqs_join_0(t);
              }
            }
          else
            {
              if(match_cons(a_84, sym_BAM_3))
                {
                  b_84 = ATgetArgument(a_84, 0);
                  z_83 = ATgetArgument(a_84, 1);
                  y_83 = ATgetArgument(a_84, 2);
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(y_83)), not_null(b_84)), not_null(z_83));
                    t = seqs_join_0(t);
                  }
                }
              else
                {
                  if(match_cons(a_84, sym_BA_2))
                    {
                      b_84 = ATgetArgument(a_84, 0);
                      z_83 = ATgetArgument(a_84, 1);
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_84)), not_null(z_83));
                        t = seqs_join_0(t);
                      }
                    }
                  else
                    {
                      if(match_cons(a_84, sym_AM_2))
                        {
                          b_84 = ATgetArgument(a_84, 0);
                          z_83 = ATgetArgument(a_84, 1);
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_83)), not_null(b_84));
                            t = seqs_join_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(a_84, sym_MA_2))
                            {
                              b_84 = ATgetArgument(a_84, 0);
                              z_83 = ATgetArgument(a_84, 1);
                              {
                                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_83)), not_null(b_84));
                                t = seqs_join_0(t);
                              }
                            }
                          else
                            {
                              if(match_cons(a_84, sym_StratRule_3))
                                {
                                  b_84 = ATgetArgument(a_84, 0);
                                  z_83 = ATgetArgument(a_84, 1);
                                  y_83 = ATgetArgument(a_84, 2);
                                  {
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_83)), not_null(y_83)), not_null(b_84));
                                    t = seqs_join_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(a_84, sym_Rule_3))
                                    {
                                      b_84 = ATgetArgument(a_84, 0);
                                      z_83 = ATgetArgument(a_84, 1);
                                      y_83 = ATgetArgument(a_84, 2);
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_83)), not_null(y_83)), not_null(b_84));
                                        t = seqs_join_0(t);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(a_84, sym_Seq_2))
                                        {
                                          b_84 = ATgetArgument(a_84, 0);
                                          z_83 = ATgetArgument(a_84, 1);
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_83)), not_null(b_84));
                                            t = seqs_join_0(t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(a_84, sym_Seqs_1))
                                            {
                                              b_84 = ATgetArgument(a_84, 0);
                                              {
                                                t = not_null(b_84);
                                                t = seqs_join_0(t);
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
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm d_55 (ATerm), ATerm e_55 (ATerm))
{
  ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL;
  t_85 = t;
  s_85 :
  if(match_cons(t_85, sym_Cong_2))
    {
      u_85 = ATgetArgument(t_85, 0);
      v_85 = ATgetArgument(t_85, 1);
      {
        ATerm y_85 = NULL;
        t = not_null(u_85);
        {
          ATerm a_86 = NULL;
          t = d_55(t);
          {
            y_85 = t;
            {
              t = not_null(v_85);
              {
                t = e_55(t);
                {
                  a_86 = t;
                  t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(y_85), not_null(a_86));
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
ATerm use_term_0 (ATerm t)
{
  ATerm g_86 = NULL;
  ATerm h_86 = NULL;
  t = tvars_0(t);
  {
    h_86 = t;
    if(((g_86 != NULL) && (g_86 != h_86)))
      _fail(h_86);
    else
      g_86 = h_86;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, not_null(g_86), (ATerm)ATempty, (ATerm) ATempty));
  return(t);
}
ATerm def_term_0 (ATerm t)
{
  ATerm k_86 = NULL;
  ATerm l_86 = NULL;
  t = tvars_0(t);
  {
    l_86 = t;
    if(((k_86 != NULL) && (k_86 != l_86)))
      _fail(l_86);
    else
      k_86 = l_86;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(k_86), (ATerm) ATempty));
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm p_52 (ATerm), ATerm q_52 (ATerm), ATerm r_52 (ATerm))
{
  ATerm s_86 = NULL,t_86 = NULL,u_86 = NULL,v_86 = NULL;
  s_86 = t;
  r_86 :
  if(match_cons(s_86, sym_Rule_3))
    {
      t_86 = ATgetArgument(s_86, 0);
      u_86 = ATgetArgument(s_86, 1);
      v_86 = ATgetArgument(s_86, 2);
      {
        ATerm z_86 = NULL;
        t = not_null(t_86);
        {
          ATerm b_87 = NULL;
          t = p_52(t);
          {
            z_86 = t;
            {
              t = not_null(u_86);
              {
                ATerm d_87 = NULL;
                t = q_52(t);
                {
                  b_87 = t;
                  {
                    t = not_null(v_86);
                    {
                      t = r_52(t);
                      {
                        d_87 = t;
                        t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_86), not_null(b_87), not_null(d_87));
                      }
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
ATerm BAM_3 (ATerm t, ATerm w_51 (ATerm), ATerm x_51 (ATerm), ATerm y_51 (ATerm))
{
  ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL;
  o_87 = t;
  n_87 :
  if(match_cons(o_87, sym_BAM_3))
    {
      p_87 = ATgetArgument(o_87, 0);
      q_87 = ATgetArgument(o_87, 1);
      r_87 = ATgetArgument(o_87, 2);
      {
        ATerm v_87 = NULL;
        t = not_null(p_87);
        {
          ATerm x_87 = NULL;
          t = w_51(t);
          {
            v_87 = t;
            {
              t = not_null(q_87);
              {
                ATerm z_87 = NULL;
                t = x_51(t);
                {
                  x_87 = t;
                  {
                    t = not_null(r_87);
                    {
                      t = y_51(t);
                      {
                        z_87 = t;
                        t = (ATerm) ATmakeAppl(sym_BAM_3, not_null(v_87), not_null(x_87), not_null(z_87));
                      }
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
ATerm BA_2 (ATerm t, ATerm u_51 (ATerm), ATerm v_51 (ATerm))
{
  ATerm j_88 = NULL,k_88 = NULL,l_88 = NULL;
  j_88 = t;
  i_88 :
  if(match_cons(j_88, sym_BA_2))
    {
      k_88 = ATgetArgument(j_88, 0);
      l_88 = ATgetArgument(j_88, 1);
      {
        ATerm o_88 = NULL;
        t = not_null(k_88);
        {
          ATerm q_88 = NULL;
          t = u_51(t);
          {
            o_88 = t;
            {
              t = not_null(l_88);
              {
                t = v_51(t);
                {
                  q_88 = t;
                  t = (ATerm) ATmakeAppl(sym_BA_2, not_null(o_88), not_null(q_88));
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
ATerm AM_2 (ATerm t, ATerm s_51 (ATerm), ATerm t_51 (ATerm))
{
  ATerm z_88 = NULL,a_89 = NULL,b_89 = NULL;
  z_88 = t;
  y_88 :
  if(match_cons(z_88, sym_AM_2))
    {
      a_89 = ATgetArgument(z_88, 0);
      b_89 = ATgetArgument(z_88, 1);
      {
        ATerm e_89 = NULL;
        t = not_null(a_89);
        {
          ATerm g_89 = NULL;
          t = s_51(t);
          {
            e_89 = t;
            {
              t = not_null(b_89);
              {
                t = t_51(t);
                {
                  g_89 = t;
                  t = (ATerm) ATmakeAppl(sym_AM_2, not_null(e_89), not_null(g_89));
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
ATerm MA_2 (ATerm t, ATerm q_51 (ATerm), ATerm r_51 (ATerm))
{
  ATerm p_89 = NULL,q_89 = NULL,r_89 = NULL;
  p_89 = t;
  o_89 :
  if(match_cons(p_89, sym_MA_2))
    {
      q_89 = ATgetArgument(p_89, 0);
      r_89 = ATgetArgument(p_89, 1);
      {
        ATerm u_89 = NULL;
        t = not_null(q_89);
        {
          ATerm w_89 = NULL;
          t = q_51(t);
          {
            u_89 = t;
            {
              t = not_null(r_89);
              {
                t = r_51(t);
                {
                  w_89 = t;
                  t = (ATerm) ATmakeAppl(sym_MA_2, not_null(u_89), not_null(w_89));
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
ATerm Match_1 (ATerm t, ATerm l_55 (ATerm))
{
  ATerm f_90 = NULL,g_90 = NULL;
  f_90 = t;
  e_90 :
  if(match_cons(f_90, sym_Match_1))
    {
      g_90 = ATgetArgument(f_90, 0);
      {
        ATerm i_90 = NULL;
        t = not_null(g_90);
        {
          t = l_55(t);
          {
            i_90 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(i_90));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm m_55 (ATerm))
{
  ATerm p_90 = NULL,q_90 = NULL;
  p_90 = t;
  o_90 :
  if(match_cons(p_90, sym_Build_1))
    {
      q_90 = ATgetArgument(p_90, 0);
      {
        ATerm s_90 = NULL;
        t = not_null(q_90);
        {
          t = m_55(t);
          {
            s_90 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(s_90));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm constructs_1 (ATerm t, ATerm i_56 (ATerm))
{
  ATerm j_14 = t;
  if((PushChoice() == 0))
    {
      t = Build_1(t, use_term_0);
      PopChoice();
    }
  else
    {
      t = j_14;
      {
        ATerm k_14 = t;
        if((PushChoice() == 0))
          {
            t = Match_1(t, def_term_0);
            PopChoice();
          }
        else
          {
            t = k_14;
            {
              ATerm l_14 = t;
              if((PushChoice() == 0))
                {
                  t = MA_2(t, def_term_0, i_56);
                  PopChoice();
                }
              else
                {
                  t = l_14;
                  {
                    ATerm m_14 = t;
                    if((PushChoice() == 0))
                      {
                        t = AM_2(t, i_56, def_term_0);
                        PopChoice();
                      }
                    else
                      {
                        t = m_14;
                        {
                          ATerm n_14 = t;
                          if((PushChoice() == 0))
                            {
                              t = BA_2(t, i_56, use_term_0);
                              PopChoice();
                            }
                          else
                            {
                              t = n_14;
                              {
                                ATerm o_14 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = BAM_3(t, i_56, use_term_0, def_term_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = o_14;
                                    {
                                      ATerm p_14 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = Scope_2(t, _id, i_56);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = p_14;
                                          {
                                            ATerm q_14 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = Rule_3(t, def_term_0, use_term_0, i_56);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = q_14;
                                                {
                                                  ATerm r_14 = t;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Overlay_3(t, _id, _id, use_term_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = r_14;
                                                      {
                                                        ATerm n_3 (ATerm t)
                                                        {
                                                          t = map_1(t, i_56);
                                                          return(t);
                                                        }
                                                        t = Cong_2(t, _id, n_3);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm use_def_0 (ATerm t)
{
  ATerm s_14 = t;
  if((PushChoice() == 0))
    {
      t = constructs_1(t, use_def_0);
      PopChoice();
    }
  else
    {
      t = s_14;
      t = _all(t, use_def_0);
    }
  {
    ATerm t_14 = t;
    if((PushChoice() == 0))
      {
        t = UDjoin_0(t);
        PopChoice();
      }
    else
      {
        t = t_14;
        t = default_join_0(t);
      }
  }
  return(t);
}
ATerm RDef_3 (ATerm t, ATerm x_52 (ATerm), ATerm y_52 (ATerm), ATerm z_52 (ATerm))
{
  ATerm d_91 = NULL,e_91 = NULL,f_91 = NULL,g_91 = NULL;
  d_91 = t;
  c_91 :
  if(match_cons(d_91, sym_RDef_3))
    {
      e_91 = ATgetArgument(d_91, 0);
      f_91 = ATgetArgument(d_91, 1);
      g_91 = ATgetArgument(d_91, 2);
      {
        ATerm k_91 = NULL;
        t = not_null(e_91);
        {
          ATerm m_91 = NULL;
          t = x_52(t);
          {
            k_91 = t;
            {
              t = not_null(f_91);
              {
                ATerm o_91 = NULL;
                t = y_52(t);
                {
                  m_91 = t;
                  {
                    t = not_null(g_91);
                    {
                      t = z_52(t);
                      {
                        o_91 = t;
                        t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(k_91), not_null(m_91), not_null(o_91));
                      }
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
ATerm SDef_3 (ATerm t, ATerm p_54 (ATerm), ATerm q_54 (ATerm), ATerm r_54 (ATerm))
{
  ATerm a_92 = NULL,b_92 = NULL,c_92 = NULL,d_92 = NULL;
  a_92 = t;
  z_91 :
  if(match_cons(a_92, sym_SDef_3))
    {
      b_92 = ATgetArgument(a_92, 0);
      c_92 = ATgetArgument(a_92, 1);
      d_92 = ATgetArgument(a_92, 2);
      {
        ATerm h_92 = NULL;
        t = not_null(b_92);
        {
          ATerm j_92 = NULL;
          t = p_54(t);
          {
            h_92 = t;
            {
              t = not_null(c_92);
              {
                ATerm l_92 = NULL;
                t = q_54(t);
                {
                  j_92 = t;
                  {
                    t = not_null(d_92);
                    {
                      t = r_54(t);
                      {
                        l_92 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(h_92), not_null(j_92), not_null(l_92));
                      }
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
ATerm check_0 (ATerm t)
{
  ATerm u_14 = t;
  if((PushChoice() == 0))
    {
      ATerm o_3 (ATerm t)
      {
        t = use_def_0(t);
        {
          ATerm v_14 = t;
          if((PushChoice() == 0))
            {
              ATerm p_3 (ATerm t)
              {
                t = _3(t, Nil_0, _id, Nil_0);
                return(t);
              }
              t = Cons_2(t, p_3, Nil_0);
              PopChoice();
              _fail(t);
            }
          else
            t = v_14;
        }
        return(t);
      }
      t = SDef_3(t, _id, _id, o_3);
      t = err_msg_0(t);
      PopChoice();
    }
  else
    {
      t = u_14;
      {
        ATerm w_14 = t;
        if((PushChoice() == 0))
          {
            ATerm q_3 (ATerm t)
            {
              t = use_def_0(t);
              {
                ATerm x_14 = t;
                if((PushChoice() == 0))
                  {
                    ATerm r_3 (ATerm t)
                    {
                      t = _3(t, Nil_0, _id, Nil_0);
                      return(t);
                    }
                    t = Cons_2(t, r_3, Nil_0);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = x_14;
              }
              return(t);
            }
            t = RDef_3(t, _id, _id, q_3);
            t = err_msg_0(t);
            PopChoice();
          }
        else
          {
            t = w_14;
            {
              t = Overlay_3(t, _id, _id, _id);
              {
                t = use_def_0(t);
                {
                  ATerm y_14 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm s_3 (ATerm t)
                      {
                        ATerm t_3 (ATerm t)
                        {
                          t = _3(t, Nil_0, Nil_0, Nil_0);
                          return(t);
                        }
                        t = Cons_2(t, t_3, Nil_0);
                        return(t);
                      }
                      t = Overlay_3(t, _id, _id, s_3);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    t = y_14;
                  t = err_msg_0(t);
                }
              }
            }
          }
      }
    }
  return(t);
}
ATerm defs_use_def_0 (ATerm t)
{
  ATerm s_92 = NULL;
  t = filter_1(t, check_0);
  {
    s_92 = t;
    r_92 :
    if(((ATermList) s_92 == ATempty))
      {
        {
        }
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm Overlays_1 (ATerm t, ATerm i_53 (ATerm))
{
  ATerm w_92 = NULL,x_92 = NULL;
  w_92 = t;
  v_92 :
  if(match_cons(w_92, sym_Overlays_1))
    {
      x_92 = ATgetArgument(w_92, 0);
      {
        ATerm z_92 = NULL;
        t = not_null(x_92);
        {
          t = i_53(t);
          {
            z_92 = t;
            t = (ATerm) ATmakeAppl(sym_Overlays_1, not_null(z_92));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm h_53 (ATerm))
{
  ATerm h_93 = NULL,i_93 = NULL;
  h_93 = t;
  g_93 :
  if(match_cons(h_93, sym_Signature_1))
    {
      i_93 = ATgetArgument(h_93, 0);
      {
        ATerm k_93 = NULL;
        t = not_null(i_93);
        {
          t = h_53(t);
          {
            k_93 = t;
            t = (ATerm) ATmakeAppl(sym_Signature_1, not_null(k_93));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm spec_use_def_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm v_3 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm w_3 (ATerm t)
    {
      ATerm x_3 (ATerm t)
      {
        t = Overlays_1(t, defs_use_def_0);
        return(t);
      }
      ATerm y_3 (ATerm t)
      {
        ATerm z_3 (ATerm t)
        {
          t = Strategies_1(t, defs_use_def_0);
          return(t);
        }
        t = Cons_2(t, z_3, Nil_0);
        return(t);
      }
      t = Cons_2(t, x_3, y_3);
      return(t);
    }
    t = Cons_2(t, v_3, w_3);
    return(t);
  }
  t = Specification_1(t, u_3);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm s_93 = NULL,t_93 = NULL,u_93 = NULL,v_93 = NULL,w_93 = NULL,x_93 = NULL,y_93 = NULL;
  s_93 = t;
  p_93 :
  if(match_cons(s_93, sym__2))
    {
      t_93 = ATgetArgument(s_93, 0);
      w_93 = ATgetArgument(s_93, 1);
      q_93 :
      if(match_cons(t_93, sym__2))
        {
          u_93 = ATgetArgument(t_93, 0);
          v_93 = ATgetArgument(t_93, 1);
          r_93 :
          if(match_cons(w_93, sym__2))
            {
              x_93 = ATgetArgument(w_93, 0);
              y_93 = ATgetArgument(w_93, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_93)), not_null(u_93)), (ATerm) ATinsert(CheckATermList(not_null(y_93)), not_null(v_93)));
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
ATerm UnZip3_0 (ATerm t)
{
  ATerm h_94 = NULL,i_94 = NULL,j_94 = NULL;
  h_94 = t;
  g_94 :
  if(((ATgetType(h_94) == AT_LIST) && ((ATermList) h_94 != ATempty)))
    {
      i_94 = ATgetFirst((ATermList) h_94);
      j_94 = (ATerm) ATgetNext((ATermList) h_94);
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_94), not_null(j_94));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm p_94 = NULL;
  p_94 = t;
  o_94 :
  if(((ATermList) p_94 == ATempty))
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
    }
  else
    _fail(t);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, _id);
  return(t);
}
ATerm strings_to_vars_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm s_94 = NULL;
    s_94 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_94));
    return(t);
  }
  t = map_1(t, a_4);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm x_94 = NULL,y_94 = NULL,z_94 = NULL;
  x_94 = t;
  w_94 :
  if(((ATgetType(x_94) == AT_LIST) && ((ATermList) x_94 != ATempty)))
    {
      y_94 = ATgetFirst((ATermList) x_94);
      z_94 = (ATerm) ATgetNext((ATermList) x_94);
      t = not_null(z_94);
    }
  else
    _fail(t);
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm g_95 = NULL,h_95 = NULL,i_95 = NULL;
  g_95 = t;
  f_95 :
  if(match_cons(g_95, sym__2))
    {
      h_95 = ATgetArgument(g_95, 0);
      i_95 = ATgetArgument(g_95, 1);
      {
        t = not_null(h_95);
        {
          ATerm m_95 (ATerm t)
          {
            ATerm z_14 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
              }
            else
              {
                t = z_14;
                {
                  ATerm a_15 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm b_15;
                      b_15 = t;
                      {
                        ATerm b_4 (ATerm t)
                        {
                          t = not_null(i_95);
                          return(t);
                        }
                        t = HdMember_1(t, b_4);
                      }
                      t = b_15;
                      t = Cons_2(t, _id, m_95);
                      PopChoice();
                    }
                  else
                    {
                      t = a_15;
                      {
                        t = Tl_0(t);
                        t = m_95(t);
                      }
                    }
                }
              }
            return(t);
          }
          t = m_95(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm p_95 = NULL,q_95 = NULL,r_95 = NULL;
  p_95 = t;
  o_95 :
  if(match_cons(p_95, sym__2))
    {
      q_95 = ATgetArgument(p_95, 0);
      r_95 = ATgetArgument(p_95, 1);
      if(((q_95 != NULL) && (q_95 != r_95)))
        _fail(r_95);
      else
        q_95 = r_95;
    }
  else
    _fail(t);
  return(t);
}
ATerm SplitDynamicRule_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm p_96 = NULL,q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL,w_96 = NULL,x_96 = NULL;
  ATerm h_98 (ATerm t)
  {
    ATerm e_97 = NULL,f_97 = NULL,g_97 = NULL,s_97 = NULL;
    ATerm c_15;
    c_15 = t;
    {
      ATerm h_97 = NULL,j_97 = NULL,l_97 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_96), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATempty));
      {
        ATerm d_15 = t;
        if((PushChoice() == 0))
          {
            t = eq_0(t);
            PopChoice();
            _fail(t);
          }
        else
          t = d_15;
        {
          ATerm e_15;
          e_15 = t;
          {
            ATerm i_97 = NULL;
            t = (ATerm) ATmakeAppl(sym__0);
            {
              t = n_0(t);
              {
                i_97 = t;
                if(((h_97 != NULL) && (h_97 != i_97)))
                  _fail(i_97);
                else
                  h_97 = i_97;
              }
            }
          }
          t = e_15;
          {
            ATerm k_97 = NULL;
            t = not_null(t_96);
            {
              t = tvars_0(t);
              {
                k_97 = t;
                if(((j_97 != NULL) && (j_97 != k_97)))
                  _fail(k_97);
                else
                  j_97 = k_97;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_97), not_null(j_97));
              {
                t = isect_0(t);
                {
                  ATerm m_97 = NULL,o_97 = NULL,q_97 = NULL;
                  t = strings_to_vars_0(t);
                  {
                    l_97 = t;
                    {
                      if(((e_97 != NULL) && (e_97 != l_97)))
                        _fail(l_97);
                      else
                        e_97 = l_97;
                      {
                        ATerm f_15;
                        f_15 = t;
                        {
                          ATerm n_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__0);
                          {
                            t = n_0(t);
                            {
                              n_97 = t;
                              if(((m_97 != NULL) && (m_97 != n_97)))
                                _fail(n_97);
                              else
                                m_97 = n_97;
                            }
                          }
                        }
                        t = f_15;
                        {
                          ATerm p_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_96), not_null(x_96));
                          {
                            t = tvars_0(t);
                            {
                              p_97 = t;
                              if(((o_97 != NULL) && (o_97 != p_97)))
                                _fail(p_97);
                              else
                                o_97 = p_97;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(m_97), not_null(o_97));
                            {
                              t = isect_0(t);
                              {
                                ATerm r_97 = NULL;
                                t = strings_to_vars_0(t);
                                {
                                  q_97 = t;
                                  {
                                    if(((f_97 != NULL) && (f_97 != q_97)))
                                      _fail(q_97);
                                    else
                                      f_97 = q_97;
                                    {
                                      t = new_0(t);
                                      {
                                        r_97 = t;
                                        if(((g_97 != NULL) && (g_97 != r_97)))
                                          _fail(r_97);
                                        else
                                          g_97 = r_97;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = c_15;
    {
      ATerm t_97 = NULL;
      t = not_null(q_96);
      {
        t = o_0(t);
        {
          t_97 = t;
          if(((s_97 != NULL) && (s_97 != t_97)))
            _fail(t_97);
          else
            s_97 = t_97;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(s_97), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue)), (ATerm) ATinsert(CheckATermList(not_null(f_97)), (ATerm) ATmakeAppl(sym_Str_1, not_null(g_97))))), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(e_97)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(q_96), not_null(r_96), (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_96), not_null(u_96), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(q_96))))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(e_97)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue)), (ATerm) ATinsert(CheckATermList(not_null(f_97)), (ATerm) ATmakeAppl(sym_Str_1, not_null(g_97))))), not_null(x_96)))));
    }
    return(t);
  }
  ATerm i_98 (ATerm t)
  {
    ATerm y_97 = NULL,f_98 = NULL;
    ATerm g_15;
    g_15 = t;
    {
      ATerm z_97 = NULL,c_98 = NULL,e_98 = NULL;
      ATerm h_15;
      h_15 = t;
      {
        ATerm a_98 = NULL;
        t = (ATerm) ATmakeAppl(sym__0);
        {
          t = n_0(t);
          {
            a_98 = t;
            if(((z_97 != NULL) && (z_97 != a_98)))
              _fail(a_98);
            else
              z_97 = a_98;
          }
        }
      }
      t = h_15;
      {
        ATerm d_98 = NULL;
        t = not_null(t_96);
        {
          t = tvars_0(t);
          {
            d_98 = t;
            if(((c_98 != NULL) && (c_98 != d_98)))
              _fail(d_98);
            else
              c_98 = d_98;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_97), not_null(c_98));
          {
            t = isect_0(t);
            {
              t = strings_to_vars_0(t);
              {
                e_98 = t;
                if(((y_97 != NULL) && (y_97 != e_98)))
                  _fail(e_98);
                else
                  y_97 = e_98;
              }
            }
          }
        }
      }
    }
    t = g_15;
    {
      ATerm g_98 = NULL;
      t = not_null(q_96);
      {
        t = o_0(t);
        {
          g_98 = t;
          if(((f_98 != NULL) && (f_98 != g_98)))
            _fail(g_98);
          else
            f_98 = g_98;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(f_98), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(y_97)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(q_96), not_null(r_96), (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_96), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(q_96))))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(y_97)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_96), (ATerm) ATmakeAppl(sym_Fail_0))))));
    }
    return(t);
  }
  p_96 = t;
  j_96 :
  if(match_cons(p_96, sym_RDef_3))
    {
      q_96 = ATgetArgument(p_96, 0);
      r_96 = ATgetArgument(p_96, 1);
      s_96 = ATgetArgument(p_96, 2);
      k_96 :
      if(match_cons(s_96, sym_Rule_3))
        {
          t_96 = ATgetArgument(s_96, 0);
          u_96 = ATgetArgument(s_96, 1);
          x_96 = ATgetArgument(s_96, 2);
          l_96 :
          if(match_cons(u_96, sym_Op_2))
            {
              v_96 = ATgetArgument(u_96, 0);
              w_96 = ATgetArgument(u_96, 1);
              m_96 :
              if(((ATermList) w_96 == ATempty))
                {
                  n_96 :
                  if(match_string(v_96, "Undefined"))
                    {
                      ATerm i_15 = t;
                      if((PushChoice() == 0))
                        {
                          t = h_98(t);
                          PopChoice();
                        }
                      else
                        {
                          t = i_15;
                          t = i_98(t);
                        }
                    }
                  else
                    t = h_98(t);
                }
              else
                {
                  o_96 :
                  t = h_98(t);
                }
            }
          else
            t = h_98(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm split_dynamic_rules_0 (ATerm t)
{
  ATerm b_99 = NULL,c_99 = NULL,d_99 = NULL,e_99 = NULL;
  b_99 = t;
  z_98 :
  if(match_cons(b_99, sym__2))
    {
      c_99 = ATgetArgument(b_99, 0);
      e_99 = ATgetArgument(b_99, 1);
      a_99 :
      if(match_cons(c_99, sym_OverrideDynamicRules_1))
        {
          d_99 = ATgetArgument(c_99, 0);
          {
            t = not_null(d_99);
            {
              ATerm c_4 (ATerm t)
              {
                ATerm d_4 (ATerm t)
                {
                  t = not_null(e_99);
                  return(t);
                }
                ATerm e_4 (ATerm t)
                {
                  ATerm h_99 = NULL;
                  h_99 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(h_99)))));
                  return(t);
                }
                t = SplitDynamicRule_2(t, d_4, e_4);
                return(t);
              }
              t = map_1(t, c_4);
              t = unzip_0(t);
            }
          }
        }
      else
        {
          if(match_cons(c_99, sym_DynamicRules_1))
            {
              d_99 = ATgetArgument(c_99, 0);
              {
                t = not_null(d_99);
                {
                  ATerm f_4 (ATerm t)
                  {
                    ATerm g_4 (ATerm t)
                    {
                      t = not_null(e_99);
                      return(t);
                    }
                    ATerm h_4 (ATerm t)
                    {
                      ATerm l_99 = NULL;
                      l_99 = t;
                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(l_99)))));
                      return(t);
                    }
                    t = SplitDynamicRule_2(t, g_4, h_4);
                    return(t);
                  }
                  t = map_1(t, f_4);
                  t = unzip_0(t);
                }
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
ATerm dist_scope_1 (ATerm t, ATerm f_79 (ATerm))
{
  ATerm w_99 = NULL,x_99 = NULL,y_99 = NULL,z_99 = NULL,a_100 = NULL;
  w_99 = t;
  u_99 :
  if(match_cons(w_99, sym__2))
    {
      x_99 = ATgetArgument(w_99, 0);
      a_100 = ATgetArgument(w_99, 1);
      v_99 :
      if(match_cons(x_99, sym_Scope_2))
        {
          y_99 = ATgetArgument(x_99, 0);
          z_99 = ATgetArgument(x_99, 1);
          {
            ATerm e_100 = NULL;
            ATerm f_100 = NULL,h_100 = NULL;
            ATerm g_100 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_99), not_null(a_100));
            {
              t = union_0(t);
              {
                g_100 = t;
                if(((f_100 != NULL) && (f_100 != g_100)))
                  _fail(g_100);
                else
                  f_100 = g_100;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_99), not_null(f_100));
              {
                t = f_79(t);
                {
                  h_100 = t;
                  if(((e_100 != NULL) && (e_100 != h_100)))
                    _fail(h_100);
                  else
                    e_100 = h_100;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_99), not_null(e_100));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm one_dist_1 (ATerm t, ATerm m_73 (ATerm))
{
  ATerm q_100 = NULL,r_100 = NULL,s_100 = NULL;
  q_100 = t;
  p_100 :
  if(match_cons(q_100, sym__2))
    {
      r_100 = ATgetArgument(q_100, 0);
      s_100 = ATgetArgument(q_100, 1);
      {
        t = not_null(r_100);
        {
          ATerm i_4 (ATerm t)
          {
            ATerm v_100 = NULL;
            v_100 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_100), not_null(s_100));
              t = m_73(t);
            }
            return(t);
          }
          t = _one(t, i_4);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm env_oncetd_1 (ATerm t, ATerm b_74 (ATerm))
{
  ATerm z_100 (ATerm t)
  {
    ATerm j_15 = t;
    if((PushChoice() == 0))
      {
        t = b_74(t);
        PopChoice();
      }
    else
      {
        t = j_15;
        t = one_dist_1(t, z_100);
      }
    return(t);
  }
  t = z_100(t);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm g_101 = NULL,h_101 = NULL,i_101 = NULL;
  g_101 = t;
  f_101 :
  if(((ATgetType(g_101) == AT_LIST) && ((ATermList) g_101 != ATempty)))
    {
      h_101 = ATgetFirst((ATermList) g_101);
      i_101 = (ATerm) ATgetNext((ATermList) g_101);
      {
        ATerm l_101 = NULL,m_101 = NULL,n_101 = NULL,o_101 = NULL;
        ATerm p_101 = NULL;
        t = not_null(h_101);
        {
          ATerm t_101 = NULL;
          t = tvars_0(t);
          {
            p_101 = t;
            {
              if(((n_101 != NULL) && (n_101 != p_101)))
                _fail(p_101);
              else
                n_101 = p_101;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_101), not_null(n_101));
                {
                  ATerm w_101 (ATerm t)
                  {
                    ATerm j_4 (ATerm t)
                    {
                      ATerm k_15 = t;
                      if((PushChoice() == 0))
                        {
                          t = dist_scope_1(t, w_101);
                          PopChoice();
                        }
                      else
                        {
                          t = k_15;
                          {
                            ATerm q_101 = NULL,r_101 = NULL,s_101 = NULL;
                            t = split_dynamic_rules_0(t);
                            {
                              q_101 = t;
                              d_101 :
                              if(match_cons(q_101, sym__2))
                                {
                                  r_101 = ATgetArgument(q_101, 0);
                                  s_101 = ATgetArgument(q_101, 1);
                                  {
                                    if(((m_101 != NULL) && (m_101 != r_101)))
                                      _fail(r_101);
                                    else
                                      m_101 = r_101;
                                    {
                                      if(((l_101 != NULL) && (l_101 != s_101)))
                                        _fail(s_101);
                                      else
                                        l_101 = s_101;
                                      t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(m_101));
                                    }
                                  }
                                }
                              else
                                _fail(t);
                            }
                          }
                        }
                      return(t);
                    }
                    t = env_oncetd_1(t, j_4);
                    return(t);
                  }
                  t = w_101(t);
                  {
                    t_101 = t;
                    if(((o_101 != NULL) && (o_101 != t_101)))
                      _fail(t_101);
                    else
                      o_101 = t_101;
                  }
                }
              }
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_101)), not_null(o_101)), not_null(i_101));
          t = conc_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm s_77 (ATerm), ATerm t_77 (ATerm))
{
  ATerm z_101 (ATerm t)
  {
    ATerm l_15 = t;
    if((PushChoice() == 0))
      {
        t = s_77(t);
        t = z_101(t);
        PopChoice();
      }
    else
      {
        t = l_15;
        t = t_77(t);
      }
    return(t);
  }
  t = z_101(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm v_77 (ATerm))
{
  t = repeat_2(t, v_77, _id);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm x_72 (ATerm))
{
  ATerm a_102 (ATerm t)
  {
    t = x_72(t);
    {
      ATerm m_15 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          PopChoice();
        }
      else
        {
          t = m_15;
          t = Cons_2(t, _id, a_102);
        }
    }
    return(t);
  }
  t = a_102(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    t = repeat_1(t, lift_dynamic_rule_0);
    return(t);
  }
  t = listtd_1(t, k_4);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm f_102 = NULL,g_102 = NULL,h_102 = NULL,i_102 = NULL,j_102 = NULL;
  h_102 = t;
  d_102 :
  if(match_cons(h_102, sym_DynRuleScope_2))
    {
      i_102 = ATgetArgument(h_102, 0);
      j_102 = ATgetArgument(h_102, 1);
      e_102 :
      if(((ATgetType(i_102) == AT_LIST) && ((ATermList) i_102 != ATempty)))
        {
          f_102 = ATgetFirst((ATermList) i_102);
          g_102 = (ATerm) ATgetNext((ATermList) i_102);
          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(g_102), not_null(j_102))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(f_102)))));
        }
      else
        {
          if(((ATermList) i_102 == ATempty))
            {
              t = not_null(j_102);
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm define_rule_scope_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    t = try_1(t, DefDynamicRuleScope_0);
    return(t);
  }
  t = topdown_1(t, l_4);
  return(t);
}
ATerm LiftDynamicRules_0 (ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    ATerm n_4 (ATerm t)
    {
      ATerm o_4 (ATerm t)
      {
        ATerm p_4 (ATerm t)
        {
          ATerm q_4 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, q_4);
          return(t);
        }
        t = Cons_2(t, p_4, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, o_4);
      return(t);
    }
    t = Cons_2(t, _id, n_4);
    return(t);
  }
  t = Specification_1(t, m_4);
  return(t);
}
ATerm DefScopeDefault_0 (ATerm t)
{
  ATerm t_102 = NULL,u_102 = NULL;
  t_102 = t;
  s_102 :
  if(match_cons(t_102, sym_ScopeDefault_1))
    {
      u_102 = ATgetArgument(t_102, 0);
      {
        ATerm w_102 = NULL;
        ATerm x_102 = NULL;
        t = not_null(u_102);
        {
          t = tvars_0(t);
          {
            x_102 = t;
            if(((w_102 != NULL) && (w_102 != x_102)))
              _fail(x_102);
            else
              w_102 = x_102;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_102), not_null(u_102));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm a_53 (ATerm))
{
  ATerm d_103 = NULL,e_103 = NULL;
  d_103 = t;
  c_103 :
  if(match_cons(d_103, sym_DynamicRules_1))
    {
      e_103 = ATgetArgument(d_103, 0);
      {
        ATerm g_103 = NULL;
        t = not_null(e_103);
        {
          t = a_53(t);
          {
            g_103 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(g_103));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm p_55 (ATerm), ATerm q_55 (ATerm))
{
  ATerm o_103 = NULL,p_103 = NULL,q_103 = NULL;
  o_103 = t;
  n_103 :
  if(match_cons(o_103, sym_Scope_2))
    {
      p_103 = ATgetArgument(o_103, 0);
      q_103 = ATgetArgument(o_103, 1);
      {
        ATerm t_103 = NULL;
        t = not_null(p_103);
        {
          ATerm v_103 = NULL;
          t = p_55(t);
          {
            t_103 = t;
            {
              t = not_null(q_103);
              {
                t = q_55(t);
                {
                  v_103 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_103), not_null(v_103));
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
ATerm tboundin_3 (ATerm t, ATerm n_56 (ATerm), ATerm o_56 (ATerm), ATerm p_56 (ATerm))
{
  ATerm n_15 = t;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, p_56, n_56);
      PopChoice();
    }
  else
    {
      t = n_15;
      t = DynamicRules_1(t, n_56);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm c_104 = NULL,d_104 = NULL;
  c_104 = t;
  b_104 :
  if(match_cons(c_104, sym_DynamicRules_1))
    {
      d_104 = ATgetArgument(c_104, 0);
      {
        t = not_null(d_104);
        t = tvars_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm k_104 = NULL,l_104 = NULL,m_104 = NULL,n_104 = NULL,o_104 = NULL,p_104 = NULL;
  n_104 = t;
  i_104 :
  if(match_cons(n_104, sym_LRule_1))
    {
      o_104 = ATgetArgument(n_104, 0);
      j_104 :
      if(match_cons(o_104, sym_Rule_3))
        {
          k_104 = ATgetArgument(o_104, 0);
          l_104 = ATgetArgument(o_104, 1);
          m_104 = ATgetArgument(o_104, 2);
          {
            t = not_null(k_104);
            t = tvars_0(t);
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(n_104, sym_Scope_2))
        {
          o_104 = ATgetArgument(n_104, 0);
          p_104 = ATgetArgument(n_104, 1);
          t = not_null(o_104);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm z_104 = NULL,a_105 = NULL;
  z_104 = t;
  y_104 :
  if(match_cons(z_104, sym_Var_1))
    {
      a_105 = ATgetArgument(z_104, 0);
      t = (ATerm) ATinsert(ATempty, not_null(a_105));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm f_105 = NULL,g_105 = NULL,h_105 = NULL;
  f_105 = t;
  e_105 :
  if(match_cons(f_105, sym__2))
    {
      g_105 = ATgetArgument(f_105, 0);
      h_105 = ATgetArgument(f_105, 1);
      {
        t = not_null(g_105);
        {
          ATerm l_105 (ATerm t)
          {
            ATerm o_15 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(h_105);
                PopChoice();
              }
            else
              {
                t = o_15;
                {
                  ATerm p_15 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm r_4 (ATerm t)
                      {
                        t = not_null(h_105);
                        return(t);
                      }
                      t = HdMember_1(t, r_4);
                      t = l_105(t);
                      PopChoice();
                    }
                  else
                    {
                      t = p_15;
                      t = Cons_2(t, _id, l_105);
                    }
                }
              }
            return(t);
          }
          t = l_105(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm x_66 (ATerm), ATerm y_66 (ATerm), ATerm z_66 (ATerm))
{
  ATerm q_15 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_66(t);
      PopChoice();
    }
  else
    {
      t = q_15;
      {
        ATerm r_105 = NULL,s_105 = NULL,t_105 = NULL;
        r_105 = t;
        q_105 :
        if(((ATgetType(r_105) == AT_LIST) && ((ATermList) r_105 != ATempty)))
          {
            s_105 = ATgetFirst((ATermList) r_105);
            t_105 = (ATerm) ATgetNext((ATermList) r_105);
            {
              ATerm w_105 = NULL,y_105 = NULL;
              ATerm r_15;
              r_15 = t;
              {
                ATerm x_105 = NULL;
                t = not_null(s_105);
                {
                  t = z_66(t);
                  {
                    x_105 = t;
                    if(((w_105 != NULL) && (w_105 != x_105)))
                      _fail(x_105);
                    else
                      w_105 = x_105;
                  }
                }
              }
              t = r_15;
              {
                ATerm z_105 = NULL;
                t = not_null(t_105);
                {
                  t = foldr_3(t, x_66, y_66, z_66);
                  {
                    z_105 = t;
                    if(((y_105 != NULL) && (y_105 != z_105)))
                      _fail(z_105);
                    else
                      y_105 = z_105;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_105), not_null(y_105));
                  t = y_66(t);
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
ATerm crush_3 (ATerm t, ATerm k_68 (ATerm), ATerm l_68 (ATerm), ATerm m_68 (ATerm))
{
  ATerm h_106 = NULL;
  ATerm j_106 = NULL;
  h_106 = t;
  {
    ATerm k_106 = NULL;
    ATerm m_106 = NULL,n_106 = NULL,o_106 = NULL;
    t = not_null(h_106);
    {
      k_106 = t;
      {
        t = SSL_explode_term(not_null(k_106));
        {
          m_106 = t;
          g_106 :
          if(match_cons(m_106, sym__2))
            {
              n_106 = ATgetArgument(m_106, 0);
              o_106 = ATgetArgument(m_106, 1);
              if(((j_106 != NULL) && (j_106 != o_106)))
                _fail(o_106);
              else
                j_106 = o_106;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(j_106);
      t = foldr_3(t, k_68, l_68, m_68);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm v_106 = NULL,w_106 = NULL,x_106 = NULL,y_106 = NULL,z_106 = NULL;
  v_106 = t;
  t_106 :
  if(match_cons(v_106, sym__2))
    {
      w_106 = ATgetArgument(v_106, 0);
      x_106 = ATgetArgument(v_106, 1);
      u_106 :
      if(((ATgetType(x_106) == AT_LIST) && ((ATermList) x_106 != ATempty)))
        {
          y_106 = ATgetFirst((ATermList) x_106);
          z_106 = (ATerm) ATgetNext((ATermList) x_106);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_106)), not_null(y_106)), not_null(z_106));
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
  ATerm p_107 = NULL,q_107 = NULL,r_107 = NULL,s_107 = NULL,t_107 = NULL;
  p_107 = t;
  n_107 :
  if(((ATgetType(p_107) == AT_LIST) && ((ATermList) p_107 != ATempty)))
    {
      q_107 = ATgetFirst((ATermList) p_107);
      t_107 = (ATerm) ATgetNext((ATermList) p_107);
      o_107 :
      if(match_cons(q_107, sym__2))
        {
          r_107 = ATgetArgument(q_107, 0);
          s_107 = ATgetArgument(q_107, 1);
          {
            ATerm x_107 = NULL,y_107 = NULL,e_108 = NULL,k_108 = NULL;
            ATerm s_15;
            s_15 = t;
            {
              ATerm z_107 = NULL;
              ATerm b_108 = NULL,c_108 = NULL,d_108 = NULL;
              t = not_null(s_107);
              {
                z_107 = t;
                {
                  t = SSL_explode_term(not_null(z_107));
                  {
                    b_108 = t;
                    i_107 :
                    if(match_cons(b_108, sym__2))
                      {
                        c_108 = ATgetArgument(b_108, 0);
                        d_108 = ATgetArgument(b_108, 1);
                        {
                          if(((x_107 != NULL) && (x_107 != c_108)))
                            _fail(c_108);
                          else
                            x_107 = c_108;
                          if(((y_107 != NULL) && (y_107 != d_108)))
                            _fail(d_108);
                          else
                            y_107 = d_108;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = s_15;
            {
              ATerm t_15;
              t_15 = t;
              {
                ATerm f_108 = NULL;
                ATerm h_108 = NULL,i_108 = NULL,j_108 = NULL;
                t = not_null(r_107);
                {
                  f_108 = t;
                  {
                    t = SSL_explode_term(not_null(f_108));
                    {
                      h_108 = t;
                      l_107 :
                      if(match_cons(h_108, sym__2))
                        {
                          i_108 = ATgetArgument(h_108, 0);
                          j_108 = ATgetArgument(h_108, 1);
                          {
                            if(((x_107 != NULL) && (x_107 != i_108)))
                              _fail(i_108);
                            else
                              x_107 = i_108;
                            if(((e_108 != NULL) && (e_108 != j_108)))
                              _fail(j_108);
                            else
                              e_108 = j_108;
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
              t = t_15;
              {
                ATerm l_108 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_108), not_null(y_107));
                {
                  t = zip_1(t, _id);
                  {
                    l_108 = t;
                    if(((k_108 != NULL) && (k_108 != l_108)))
                      _fail(l_108);
                    else
                      k_108 = l_108;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_108), not_null(t_107));
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
  ATerm v_108 = NULL,w_108 = NULL,x_108 = NULL,y_108 = NULL,z_108 = NULL;
  v_108 = t;
  t_108 :
  if(((ATgetType(v_108) == AT_LIST) && ((ATermList) v_108 != ATempty)))
    {
      w_108 = ATgetFirst((ATermList) v_108);
      z_108 = (ATerm) ATgetNext((ATermList) v_108);
      u_108 :
      if(match_cons(w_108, sym__2))
        {
          x_108 = ATgetArgument(w_108, 0);
          y_108 = ATgetArgument(w_108, 1);
          {
            ATerm b_109 = NULL;
            if(((x_108 != NULL) && (x_108 != y_108)))
              _fail(y_108);
            else
              x_108 = y_108;
            {
              if(((b_109 != NULL) && (b_109 != z_108)))
                _fail(z_108);
              else
                b_109 = z_108;
              t = not_null(b_109);
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
ATerm while_not_2 (ATerm t, ATerm j_78 (ATerm), ATerm k_78 (ATerm))
{
  ATerm d_109 (ATerm t)
  {
    ATerm u_15 = t;
    if((PushChoice() == 0))
      {
        t = j_78(t);
        PopChoice();
      }
    else
      {
        t = u_15;
        {
          t = k_78(t);
          t = d_109(t);
        }
      }
    return(t);
  }
  t = d_109(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm o_78 (ATerm))
{
  t = m_78(t);
  t = while_not_2(t, n_78, o_78);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm z_67 (ATerm))
{
  ATerm h_109 = NULL,i_109 = NULL,j_109 = NULL;
  h_109 = t;
  g_109 :
  if(((ATgetType(h_109) == AT_LIST) && ((ATermList) h_109 != ATempty)))
    {
      i_109 = ATgetFirst((ATermList) h_109);
      j_109 = (ATerm) ATgetNext((ATermList) h_109);
      {
        t = z_67(t);
        {
          ATerm s_4 (ATerm t)
          {
            ATerm m_109 = NULL;
            m_109 = t;
            if(((i_109 != NULL) && (i_109 != m_109)))
              _fail(m_109);
            else
              i_109 = m_109;
            return(t);
          }
          t = fetch_1(t, s_4);
        }
        t = not_null(j_109);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm v_15 = t;
  if((PushChoice() == 0))
    {
      ATerm s_109 = NULL,t_109 = NULL,u_109 = NULL;
      s_109 = t;
      q_109 :
      if(match_cons(s_109, sym__2))
        {
          t_109 = ATgetArgument(s_109, 0);
          u_109 = ATgetArgument(s_109, 1);
          {
            t = not_null(t_109);
            {
              ATerm a_110 (ATerm t)
              {
                ATerm w_15 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = w_15;
                    {
                      ATerm x_15 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm t_4 (ATerm t)
                          {
                            t = not_null(u_109);
                            return(t);
                          }
                          t = HdMember_1(t, t_4);
                          t = a_110(t);
                          PopChoice();
                        }
                      else
                        {
                          t = x_15;
                          t = Cons_2(t, _id, a_110);
                        }
                    }
                  }
                return(t);
              }
              t = a_110(t);
            }
          }
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = v_15;
      {
        ATerm u_4 (ATerm t)
        {
          ATerm x_109 = NULL;
          x_109 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(x_109));
          return(t);
        }
        ATerm v_4 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm w_4 (ATerm t)
        {
          ATerm y_15 = t;
          if((PushChoice() == 0))
            {
              ATerm x_4 (ATerm t)
              {
                ATerm z_15 = t;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = z_15;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, x_4);
              PopChoice();
            }
          else
            {
              t = y_15;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, u_4, v_4, w_4);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm t_57 (ATerm), ATerm u_57 (ATerm), ATerm v_57 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm f_110 (ATerm t)
  {
    ATerm a_16 = t;
    if((PushChoice() == 0))
      {
        t = t_57(t);
        PopChoice();
      }
    else
      {
        t = a_16;
        {
          ATerm b_16 = t;
          if((PushChoice() == 0))
            {
              ATerm d_110 = NULL;
              ATerm c_16;
              c_16 = t;
              {
                ATerm e_110 = NULL;
                t = u_57(t);
                {
                  e_110 = t;
                  if(((d_110 != NULL) && (d_110 != e_110)))
                    _fail(e_110);
                  else
                    d_110 = e_110;
                }
              }
              t = c_16;
              {
                ATerm y_4 (ATerm t)
                {
                  ATerm a_5 (ATerm t)
                  {
                    t = not_null(d_110);
                    return(t);
                  }
                  t = split_2(t, f_110, a_5);
                  t = diff_0(t);
                  return(t);
                }
                ATerm z_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = v_57(t, y_4, f_110, z_4);
                {
                  ATerm b_5 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, b_5, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = b_16;
              {
                ATerm c_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, c_5, union_0, f_110);
              }
            }
        }
      }
    return(t);
  }
  t = f_110(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm d_16 = t;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = d_16;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, d_5, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm l_110 = NULL,m_110 = NULL,n_110 = NULL,o_110 = NULL,p_110 = NULL;
  l_110 = t;
  j_110 :
  if(match_cons(l_110, sym_LRule_1))
    {
      m_110 = ATgetArgument(l_110, 0);
      k_110 :
      if(match_cons(m_110, sym_Rule_3))
        {
          n_110 = ATgetArgument(m_110, 0);
          o_110 = ATgetArgument(m_110, 1);
          p_110 = ATgetArgument(m_110, 2);
          {
            ATerm t_110 = NULL;
            ATerm u_110 = NULL;
            t = not_null(n_110);
            {
              t = tvars_0(t);
              {
                u_110 = t;
                if(((t_110 != NULL) && (t_110 != u_110)))
                  _fail(u_110);
                else
                  t_110 = u_110;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_110), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(n_110), not_null(o_110), not_null(p_110))));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm x_110 (ATerm t)
  {
    t = _all(t, x_110);
    t = q_74(t);
    return(t);
  }
  t = x_110(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm f_5 (ATerm t)
    {
      ATerm e_16 = t;
      if((PushChoice() == 0))
        {
          t = DefLRule_0(t);
          PopChoice();
        }
      else
        {
          t = e_16;
          t = DefScopeDefault_0(t);
        }
      return(t);
    }
    t = try_1(t, f_5);
    return(t);
  }
  t = bottomup_1(t, e_5);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm a_111 = NULL,b_111 = NULL;
  a_111 = t;
  z_110 :
  if(match_cons(a_111, sym_Var_1))
    {
      b_111 = ATgetArgument(a_111, 0);
      t = not_null(b_111);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm h_111 = NULL,i_111 = NULL,j_111 = NULL,k_111 = NULL,l_111 = NULL;
  h_111 = t;
  f_111 :
  if(match_cons(h_111, sym__2))
    {
      i_111 = ATgetArgument(h_111, 0);
      j_111 = ATgetArgument(h_111, 1);
      g_111 :
      if(((ATgetType(j_111) == AT_LIST) && ((ATermList) j_111 != ATempty)))
        {
          k_111 = ATgetFirst((ATermList) j_111);
          l_111 = (ATerm) ATgetNext((ATermList) j_111);
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_111), not_null(l_111));
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
  ATerm u_111 = NULL,v_111 = NULL,w_111 = NULL,x_111 = NULL,y_111 = NULL,z_111 = NULL,b_112 = NULL;
  u_111 = t;
  r_111 :
  if(match_cons(u_111, sym__2))
    {
      v_111 = ATgetArgument(u_111, 0);
      w_111 = ATgetArgument(u_111, 1);
      s_111 :
      if(((ATgetType(w_111) == AT_LIST) && ((ATermList) w_111 != ATempty)))
        {
          x_111 = ATgetFirst((ATermList) w_111);
          b_112 = (ATerm) ATgetNext((ATermList) w_111);
          t_111 :
          if(match_cons(x_111, sym__2))
            {
              y_111 = ATgetArgument(x_111, 0);
              z_111 = ATgetArgument(x_111, 1);
              {
                ATerm d_112 = NULL;
                if(((v_111 != NULL) && (v_111 != y_111)))
                  _fail(y_111);
                else
                  v_111 = y_111;
                {
                  if(((d_112 != NULL) && (d_112 != z_111)))
                    _fail(z_111);
                  else
                    d_112 = z_111;
                  t = not_null(d_112);
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
  ATerm f_16 = t;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = f_16;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm p_59 (ATerm), ATerm q_59 (ATerm))
{
  ATerm j_112 = NULL;
  ATerm l_112 = NULL,m_112 = NULL;
  j_112 = t;
  {
    ATerm n_112 = NULL;
    t = not_null(j_112);
    {
      ATerm o_112 = NULL;
      t = p_59(t);
      {
        n_112 = t;
        {
          if(((l_112 != NULL) && (l_112 != n_112)))
            _fail(n_112);
          else
            l_112 = n_112;
          {
            t = q_59(t);
            {
              o_112 = t;
              if(((m_112 != NULL) && (m_112 != o_112)))
                _fail(o_112);
              else
                m_112 = o_112;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_112), not_null(m_112));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm s_76 (ATerm))
{
  ATerm s_112 (ATerm t)
  {
    ATerm g_16 = t;
    if((PushChoice() == 0))
      {
        t = s_76(t);
        PopChoice();
      }
    else
      {
        t = g_16;
        t = _all(t, s_112);
      }
    return(t);
  }
  t = s_112(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm v_112 = NULL,w_112 = NULL,x_112 = NULL;
  v_112 = t;
  u_112 :
  if(match_cons(v_112, sym__2))
    {
      w_112 = ATgetArgument(v_112, 0);
      x_112 = ATgetArgument(v_112, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_112)), not_null(w_112));
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm f_113 = NULL,g_113 = NULL,h_113 = NULL,i_113 = NULL,j_113 = NULL,k_113 = NULL,l_113 = NULL;
  f_113 = t;
  c_113 :
  if(match_cons(f_113, sym__2))
    {
      g_113 = ATgetArgument(f_113, 0);
      j_113 = ATgetArgument(f_113, 1);
      d_113 :
      if(((ATgetType(g_113) == AT_LIST) && ((ATermList) g_113 != ATempty)))
        {
          h_113 = ATgetFirst((ATermList) g_113);
          i_113 = (ATerm) ATgetNext((ATermList) g_113);
          e_113 :
          if(((ATgetType(j_113) == AT_LIST) && ((ATermList) j_113 != ATempty)))
            {
              k_113 = ATgetFirst((ATermList) j_113);
              l_113 = (ATerm) ATgetNext((ATermList) j_113);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(h_113), not_null(k_113)), (ATerm) ATmakeAppl(sym__2, not_null(i_113), not_null(l_113)));
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
  ATerm w_113 = NULL,x_113 = NULL,y_113 = NULL;
  w_113 = t;
  t_113 :
  if(match_cons(w_113, sym__2))
    {
      x_113 = ATgetArgument(w_113, 0);
      y_113 = ATgetArgument(w_113, 1);
      u_113 :
      if(((ATermList) x_113 == ATempty))
        {
          v_113 :
          if(((ATermList) y_113 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm l_70 (ATerm))
{
  ATerm a_114 (ATerm t)
  {
    ATerm h_16 = t;
    if((PushChoice() == 0))
      {
        t = i_70(t);
        PopChoice();
      }
    else
      {
        t = h_16;
        {
          t = j_70(t);
          {
            t = _2(t, l_70, a_114);
            t = k_70(t);
          }
        }
      }
    return(t);
  }
  t = a_114(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm n_70 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, n_70);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm g_114 = NULL,h_114 = NULL,i_114 = NULL,j_114 = NULL;
  g_114 = t;
  f_114 :
  if(match_cons(g_114, sym__2))
    {
      h_114 = ATgetArgument(g_114, 0);
      i_114 = ATgetArgument(g_114, 1);
      {
        ATerm m_114 = NULL;
        if(((m_114 != NULL) && (m_114 != i_114)))
          _fail(i_114);
        else
          m_114 = i_114;
      }
    }
  else
    {
      if(match_cons(g_114, sym__3))
        {
          h_114 = ATgetArgument(g_114, 0);
          i_114 = ATgetArgument(g_114, 1);
          j_114 = ATgetArgument(g_114, 2);
          {
            ATerm s_114 = NULL;
            ATerm t_114 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_114), not_null(i_114));
            {
              t = zip_1(t, _id);
              {
                t_114 = t;
                if(((s_114 != NULL) && (s_114 != t_114)))
                  _fail(t_114);
                else
                  s_114 = t_114;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_114), not_null(j_114));
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm r_59 (ATerm), ATerm s_59 (ATerm))
{
  ATerm a_115 = NULL,b_115 = NULL,c_115 = NULL;
  t = subs_args_0(t);
  {
    a_115 = t;
    z_114 :
    if(match_cons(a_115, sym__2))
      {
        b_115 = ATgetArgument(a_115, 0);
        c_115 = ATgetArgument(a_115, 1);
        {
          t = not_null(c_115);
          {
            ATerm g_5 (ATerm t)
            {
              ATerm i_5 (ATerm t)
              {
                t = not_null(b_115);
                return(t);
              }
              t = SubsVar_2(t, r_59, i_5);
              t = s_59(t);
              return(t);
            }
            t = alltd_1(t, g_5);
          }
        }
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm substitute_1 (ATerm t, ATerm t_59 (ATerm))
{
  t = substitute_2(t, t_59, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm OpName_0 (ATerm t)
{
  ATerm k_115 = NULL,l_115 = NULL,n_115 = NULL,o_115 = NULL;
  k_115 = t;
  i_115 :
  if(match_cons(k_115, sym_OpDecl_2))
    {
      l_115 = ATgetArgument(k_115, 0);
      n_115 = ATgetArgument(k_115, 1);
      j_115 :
      if(match_cons(n_115, sym_ConstType_1))
        {
          o_115 = ATgetArgument(n_115, 0);
          t = not_null(l_115);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm OpNames_0 (ATerm t)
{
  ATerm t_115 = NULL,u_115 = NULL;
  t_115 = t;
  s_115 :
  if(match_cons(t_115, sym_Constructors_1))
    {
      u_115 = ATgetArgument(t_115, 0);
      {
        t = not_null(u_115);
        t = filter_1(t, OpName_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm OLName_0 (ATerm t)
{
  ATerm a_116 = NULL,c_116 = NULL,e_116 = NULL,f_116 = NULL;
  a_116 = t;
  y_115 :
  if(match_cons(a_116, sym_Overlay_3))
    {
      c_116 = ATgetArgument(a_116, 0);
      e_116 = ATgetArgument(a_116, 1);
      f_116 = ATgetArgument(a_116, 2);
      z_115 :
      if(((ATermList) e_116 == ATempty))
        {
          t = not_null(c_116);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Names_0 (ATerm t)
{
  ATerm m_116 = NULL,n_116 = NULL;
  m_116 = t;
  l_116 :
  if(match_cons(m_116, sym_Overlays_1))
    {
      n_116 = ATgetArgument(m_116, 0);
      {
        t = not_null(n_116);
        t = filter_1(t, OLName_0);
      }
    }
  else
    {
      if(match_cons(m_116, sym_Signature_1))
        {
          n_116 = ATgetArgument(m_116, 0);
          {
            t = not_null(n_116);
            {
              t = filter_1(t, OpNames_0);
              t = concat_0(t);
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm b_66 (ATerm))
{
  ATerm i_16 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = i_16;
      {
        ATerm j_16 = t;
        if((PushChoice() == 0))
          {
            ATerm j_5 (ATerm t)
            {
              t = filter_1(t, b_66);
              return(t);
            }
            t = Cons_2(t, b_66, j_5);
            PopChoice();
          }
        else
          {
            t = j_16;
            {
              ATerm v_116 = NULL,w_116 = NULL,x_116 = NULL;
              v_116 = t;
              u_116 :
              if(((ATgetType(v_116) == AT_LIST) && ((ATermList) v_116 != ATempty)))
                {
                  w_116 = ATgetFirst((ATermList) v_116);
                  x_116 = (ATerm) ATgetNext((ATermList) v_116);
                  {
                    t = not_null(x_116);
                    t = filter_1(t, b_66);
                  }
                }
              else
                _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm const_names_0 (ATerm t)
{
  t = filter_1(t, Names_0);
  t = concat_0(t);
  return(t);
}
ATerm vars_to_consts_0 (ATerm t)
{
  ATerm f_117 = NULL,l_117 = NULL;
  ATerm k_16;
  k_16 = t;
  {
    ATerm k_117 = NULL;
    t = const_names_0(t);
    {
      ATerm k_5 (ATerm t)
      {
        ATerm g_117 = NULL,i_117 = NULL;
        ATerm l_16;
        l_16 = t;
        {
          ATerm h_117 = NULL;
          h_117 = t;
          if(((g_117 != NULL) && (g_117 != h_117)))
            _fail(h_117);
          else
            g_117 = h_117;
        }
        t = l_16;
        {
          ATerm j_117 = NULL;
          j_117 = t;
          if(((i_117 != NULL) && (i_117 != j_117)))
            _fail(j_117);
          else
            i_117 = j_117;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_117), (ATerm) ATmakeAppl(sym_Op_2, not_null(i_117), (ATerm) ATempty));
        }
        return(t);
      }
      t = map_1(t, k_5);
      {
        k_117 = t;
        if(((f_117 != NULL) && (f_117 != k_117)))
          _fail(k_117);
        else
          f_117 = k_117;
      }
    }
  }
  t = k_16;
  {
    ATerm m_117 = NULL;
    m_117 = t;
    if(((l_117 != NULL) && (l_117 != m_117)))
      _fail(m_117);
    else
      l_117 = m_117;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_117), not_null(l_117));
      t = tsubs_0(t);
    }
  }
  return(t);
}
ATerm MkSpec_0 (ATerm t)
{
  ATerm t_117 = NULL,u_117 = NULL,v_117 = NULL,w_117 = NULL;
  t_117 = t;
  s_117 :
  if(match_cons(t_117, sym__3))
    {
      u_117 = ATgetArgument(t_117, 0);
      v_117 = ATgetArgument(t_117, 1);
      w_117 = ATgetArgument(t_117, 2);
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(w_117))), (ATerm) ATmakeAppl(sym_Overlays_1, not_null(v_117))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(u_117))))));
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm d_118 = NULL,e_118 = NULL,f_118 = NULL;
  d_118 = t;
  c_118 :
  if(match_cons(d_118, sym__2))
    {
      e_118 = ATgetArgument(d_118, 0);
      f_118 = ATgetArgument(d_118, 1);
      {
        t = not_null(e_118);
        {
          ATerm l_5 (ATerm t)
          {
            t = not_null(f_118);
            return(t);
          }
          t = at_end_1(t, l_5);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Combine_0 (ATerm t)
{
  ATerm q_118 = NULL,r_118 = NULL,s_118 = NULL,t_118 = NULL,u_118 = NULL,v_118 = NULL,w_118 = NULL,x_118 = NULL,y_118 = NULL;
  q_118 = t;
  n_118 :
  if(match_cons(q_118, sym__2))
    {
      r_118 = ATgetArgument(q_118, 0);
      v_118 = ATgetArgument(q_118, 1);
      o_118 :
      if(match_cons(r_118, sym__3))
        {
          s_118 = ATgetArgument(r_118, 0);
          t_118 = ATgetArgument(r_118, 1);
          u_118 = ATgetArgument(r_118, 2);
          p_118 :
          if(match_cons(v_118, sym__3))
            {
              w_118 = ATgetArgument(v_118, 0);
              x_118 = ATgetArgument(v_118, 1);
              y_118 = ATgetArgument(v_118, 2);
              {
                ATerm f_119 = NULL,h_119 = NULL,j_119 = NULL;
                ATerm m_16;
                m_16 = t;
                {
                  ATerm g_119 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_118), not_null(w_118));
                  {
                    t = conc_0(t);
                    {
                      g_119 = t;
                      if(((f_119 != NULL) && (f_119 != g_119)))
                        _fail(g_119);
                      else
                        f_119 = g_119;
                    }
                  }
                }
                t = m_16;
                {
                  ATerm n_16;
                  n_16 = t;
                  {
                    ATerm i_119 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(t_118), not_null(x_118));
                    {
                      t = conc_0(t);
                      {
                        i_119 = t;
                        if(((h_119 != NULL) && (h_119 != i_119)))
                          _fail(i_119);
                        else
                          h_119 = i_119;
                      }
                    }
                  }
                  t = n_16;
                  {
                    ATerm k_119 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_118), not_null(y_118));
                    {
                      t = conc_0(t);
                      {
                        k_119 = t;
                        if(((j_119 != NULL) && (j_119 != k_119)))
                          _fail(k_119);
                        else
                          j_119 = k_119;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(f_119), not_null(h_119), not_null(j_119));
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
ATerm foldr_2 (ATerm t, ATerm v_66 (ATerm), ATerm w_66 (ATerm))
{
  ATerm o_16 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_66(t);
      PopChoice();
    }
  else
    {
      t = o_16;
      {
        ATerm s_119 = NULL,t_119 = NULL,u_119 = NULL;
        s_119 = t;
        r_119 :
        if(((ATgetType(s_119) == AT_LIST) && ((ATermList) s_119 != ATempty)))
          {
            t_119 = ATgetFirst((ATermList) s_119);
            u_119 = (ATerm) ATgetNext((ATermList) s_119);
            {
              ATerm x_119 = NULL;
              ATerm y_119 = NULL;
              t = not_null(u_119);
              {
                t = foldr_2(t, v_66, w_66);
                {
                  y_119 = t;
                  if(((x_119 != NULL) && (x_119 != y_119)))
                    _fail(y_119);
                  else
                    x_119 = y_119;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_119), not_null(x_119));
                t = w_66(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm NormBSIG_0 (ATerm t)
{
  ATerm e_120 = NULL,f_120 = NULL;
  e_120 = t;
  d_120 :
  if(match_cons(e_120, sym_Sorts_1))
    {
      f_120 = ATgetArgument(e_120, 0);
      t = (ATerm) ATempty;
    }
  else
    {
      if(match_cons(e_120, sym_Constructors_1))
        {
          f_120 = ATgetArgument(e_120, 0);
          t = not_null(f_120);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm normalize_sigs_0 (ATerm t)
{
  t = map_1(t, NormBSIG_0);
  t = concat_0(t);
  return(t);
}
ATerm NormBSP_0 (ATerm t)
{
  ATerm r_120 = NULL,s_120 = NULL;
  r_120 = t;
  q_120 :
  if(match_cons(r_120, sym_Overlays_1))
    {
      s_120 = ATgetArgument(r_120, 0);
      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(s_120), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(r_120, sym_Rules_1))
        {
          s_120 = ATgetArgument(r_120, 0);
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(s_120));
        }
      else
        {
          if(match_cons(r_120, sym_Strategies_1))
            {
              s_120 = ATgetArgument(r_120, 0);
              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(s_120));
            }
          else
            {
              if(match_cons(r_120, sym_Signature_1))
                {
                  s_120 = ATgetArgument(r_120, 0);
                  {
                    ATerm x_120 = NULL;
                    ATerm y_120 = NULL;
                    t = not_null(s_120);
                    {
                      t = normalize_sigs_0(t);
                      {
                        y_120 = t;
                        if(((x_120 != NULL) && (x_120 != y_120)))
                          _fail(y_120);
                        else
                          x_120 = y_120;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(x_120), (ATerm)ATempty, (ATerm) ATempty);
                  }
                }
              else
                _fail(t);
            }
        }
    }
  return(t);
}
ATerm BSpecs_0 (ATerm t)
{
  ATerm i_121 = NULL,j_121 = NULL;
  i_121 = t;
  h_121 :
  if(match_cons(i_121, sym_Specification_1))
    {
      j_121 = ATgetArgument(i_121, 0);
      t = not_null(j_121);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm o_74 (ATerm))
{
  ATerm m_121 (ATerm t)
  {
    t = o_74(t);
    t = _all(t, m_121);
    return(t);
  }
  t = m_121(t);
  return(t);
}
ATerm DefineSugar_0 (ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm s_5 (ATerm t)
    {
      ATerm p_121 = NULL,q_121 = NULL;
      p_121 = t;
      o_121 :
      if(match_cons(p_121, sym_DefaultVarDec_1))
        {
          q_121 = ATgetArgument(p_121, 0);
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(q_121), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATempty))), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATempty))));
        }
      else
        _fail(t);
      return(t);
    }
    t = try_1(t, s_5);
    return(t);
  }
  t = topdown_1(t, n_5);
  return(t);
}
ATerm normalize_spec_0 (ATerm t)
{
  t = DefineSugar_0(t);
  {
    t = BSpecs_0(t);
    {
      t = map_1(t, NormBSP_0);
      {
        ATerm t_5 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
          return(t);
        }
        t = foldr_2(t, t_5, Combine_0);
        {
          t = MkSpec_0(t);
          {
            t = Specification_1(t, vars_to_consts_0);
            {
              t = define_lrules_0(t);
              t = LiftDynamicRules_0(t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm frontend_transformation_0 (ATerm t)
{
  t = normalize_spec_0(t);
  {
    ATerm p_16;
    p_16 = t;
    t = spec_use_def_0(t);
    t = p_16;
    {
      t = ExpandOverlays_0(t);
      {
        t = CheckConstructors_0(t);
        {
          t = RulesToSdefs_0(t);
          {
            t = strename_0(t);
            {
              ATerm c_6 (ATerm t)
              {
                ATerm m_6 (ATerm t)
                {
                  ATerm y_6 (ATerm t)
                  {
                    t = Strategies_1(t, desugar_spec_0);
                    return(t);
                  }
                  t = Cons_2(t, y_6, Nil_0);
                  return(t);
                }
                t = Cons_2(t, _id, m_6);
                return(t);
              }
              t = Specification_1(t, c_6);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm m_45 (ATerm), ATerm n_45 (ATerm))
{
  ATerm a_122 = NULL,b_122 = NULL,c_122 = NULL;
  a_122 = t;
  z_121 :
  if(match_cons(a_122, sym__2))
    {
      b_122 = ATgetArgument(a_122, 0);
      c_122 = ATgetArgument(a_122, 1);
      {
        ATerm f_122 = NULL;
        t = not_null(b_122);
        {
          ATerm h_122 = NULL;
          t = m_45(t);
          {
            f_122 = t;
            {
              t = not_null(c_122);
              {
                t = n_45(t);
                {
                  h_122 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_122), not_null(h_122));
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
  ATerm o_122 = NULL;
  ATerm q_16;
  q_16 = t;
  {
    ATerm z_6 (ATerm t)
    {
      ATerm p_122 = NULL,q_122 = NULL;
      p_122 = t;
      n_122 :
      if(match_cons(p_122, sym_Program_1))
        {
          q_122 = ATgetArgument(p_122, 0);
          if(((o_122 != NULL) && (o_122 != q_122)))
            _fail(q_122);
          else
            o_122 = q_122;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, z_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), not_null(o_122)), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeInt(1);
          t = exit_0(t);
        }
      }
    }
  }
  t = q_16;
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
  ATerm x_122 = NULL,y_122 = NULL;
  ATerm a_7 (ATerm t)
  {
    ATerm b_7 (ATerm t)
    {
      ATerm r_16 = t;
      if((PushChoice() == 0))
        {
          ATerm c_7 (ATerm t)
          {
            ATerm z_122 = NULL;
            z_122 = t;
            s_122 :
            if(!(match_cons(z_122, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, c_7);
          PopChoice();
          _fail(t);
        }
      else
        t = r_16;
      return(t);
    }
    t = _2(t, b_7, _id);
    {
      ATerm d_7 (ATerm t)
      {
        ATerm e_7 (ATerm t)
        {
          ATerm a_123 = NULL,b_123 = NULL;
          a_123 = t;
          u_122 :
          if(match_cons(a_123, sym_Runtime_1))
            {
              b_123 = ATgetArgument(a_123, 0);
              if(((y_122 != NULL) && (y_122 != b_123)))
                _fail(b_123);
              else
                y_122 = b_123;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, e_7);
        return(t);
      }
      t = _2(t, d_7, _id);
      {
        ATerm f_7 (ATerm t)
        {
          ATerm g_7 (ATerm t)
          {
            ATerm c_123 = NULL,d_123 = NULL;
            c_123 = t;
            w_122 :
            if(match_cons(c_123, sym_Program_1))
              {
                d_123 = ATgetArgument(c_123, 0);
                if(((x_122 != NULL) && (x_122 != d_123)))
                  _fail(d_123);
                else
                  x_122 = d_123;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, g_7);
          return(t);
        }
        t = _2(t, f_7, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), not_null(y_122)), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), not_null(x_122)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, a_7);
  {
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm i_123 = NULL,j_123 = NULL,k_123 = NULL;
  i_123 = t;
  h_123 :
  if(match_cons(i_123, sym__2))
    {
      j_123 = ATgetArgument(i_123, 0);
      k_123 = ATgetArgument(i_123, 1);
      t = SSL_WriteToTextFile(not_null(j_123), not_null(k_123));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm q_123 = NULL,r_123 = NULL,s_123 = NULL;
  q_123 = t;
  p_123 :
  if(match_cons(q_123, sym__2))
    {
      r_123 = ATgetArgument(q_123, 0);
      s_123 = ATgetArgument(q_123, 1);
      t = SSL_WriteToBinaryFile(not_null(r_123), not_null(s_123));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm a_124 = NULL;
  ATerm s_16;
  s_16 = t;
  {
    ATerm h_7 (ATerm t)
    {
      ATerm t_16 = t;
      if((PushChoice() == 0))
        {
          ATerm i_7 (ATerm t)
          {
            ATerm b_124 = NULL,c_124 = NULL;
            b_124 = t;
            x_123 :
            if(match_cons(b_124, sym_Output_1))
              {
                c_124 = ATgetArgument(b_124, 0);
                if(((a_124 != NULL) && (a_124 != c_124)))
                  _fail(c_124);
                else
                  a_124 = c_124;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, i_7);
          PopChoice();
        }
      else
        {
          t = t_16;
          {
            ATerm d_124 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            {
              d_124 = t;
              if(((a_124 != NULL) && (a_124 != d_124)))
                _fail(d_124);
              else
                a_124 = d_124;
            }
          }
        }
      return(t);
    }
    t = _2(t, h_7, _id);
  }
  t = s_16;
  {
    ATerm j_7 (ATerm t)
    {
      ATerm k_7 (ATerm t)
      {
        t = not_null(a_124);
        return(t);
      }
      t = split_2(t, k_7, _id);
      return(t);
    }
    t = _2(t, _id, j_7);
    {
      ATerm u_16 = t;
      if((PushChoice() == 0))
        {
          ATerm l_7 (ATerm t)
          {
            ATerm m_7 (ATerm t)
            {
              ATerm e_124 = NULL;
              e_124 = t;
              z_123 :
              if(!(match_cons(e_124, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, m_7);
            return(t);
          }
          t = _2(t, l_7, WriteToBinaryFile_0);
          PopChoice();
        }
      else
        {
          t = u_16;
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
ATerm apply_strategy_1 (ATerm t, ATerm s_62 (ATerm))
{
  ATerm k_124 = NULL,m_124 = NULL,n_124 = NULL,o_124 = NULL;
  ATerm v_16;
  v_16 = t;
  t = dtime_0(t);
  t = v_16;
  {
    t = s_62(t);
    {
      ATerm w_16;
      w_16 = t;
      {
        ATerm l_124 = NULL;
        t = dtime_0(t);
        {
          l_124 = t;
          if(((k_124 != NULL) && (k_124 != l_124)))
            _fail(l_124);
          else
            k_124 = l_124;
        }
      }
      t = w_16;
      {
        m_124 = t;
        j_124 :
        if(match_cons(m_124, sym__2))
          {
            n_124 = ATgetArgument(m_124, 0);
            o_124 = ATgetArgument(m_124, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_124)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(k_124))), not_null(o_124));
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
  ATerm u_124 = NULL;
  u_124 = t;
  t = SSL_ReadFromFile(not_null(u_124));
  return(t);
}
ATerm split_2 (ATerm t, ATerm j_65 (ATerm), ATerm k_65 (ATerm))
{
  ATerm z_124 = NULL,b_125 = NULL;
  ATerm x_16;
  x_16 = t;
  {
    ATerm a_125 = NULL;
    t = j_65(t);
    {
      a_125 = t;
      if(((z_124 != NULL) && (z_124 != a_125)))
        _fail(a_125);
      else
        z_124 = a_125;
    }
  }
  t = x_16;
  {
    ATerm c_125 = NULL;
    t = k_65(t);
    {
      c_125 = t;
      if(((b_125 != NULL) && (b_125 != c_125)))
        _fail(c_125);
      else
        b_125 = c_125;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_124), not_null(b_125));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm i_125 = NULL;
  ATerm y_16;
  y_16 = t;
  {
    ATerm z_16 = t;
    if((PushChoice() == 0))
      {
        ATerm n_7 (ATerm t)
        {
          ATerm j_125 = NULL,k_125 = NULL;
          j_125 = t;
          g_125 :
          if(match_cons(j_125, sym_Input_1))
            {
              k_125 = ATgetArgument(j_125, 0);
              if(((i_125 != NULL) && (i_125 != k_125)))
                _fail(k_125);
              else
                i_125 = k_125;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, n_7);
        PopChoice();
      }
    else
      {
        t = z_16;
        {
          ATerm l_125 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          {
            l_125 = t;
            if(((i_125 != NULL) && (i_125 != l_125)))
              _fail(l_125);
            else
              i_125 = l_125;
          }
        }
      }
  }
  t = y_16;
  {
    ATerm o_7 (ATerm t)
    {
      t = not_null(i_125);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, o_7);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_125 = NULL;
  q_125 = t;
  p_125 :
  if(!(match_cons(q_125, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_62 (ATerm))
{
  ATerm p_7 (ATerm t)
  {
    ATerm a_17 = t;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = a_17;
        {
          ATerm b_17 = t;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = b_17;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, p_7);
  t = r_62(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_125 = NULL;
  s_125 = t;
  t = SSL_table_create(not_null(s_125));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_125 = NULL;
  x_125 = t;
  {
    ATerm c_17;
    c_17 = t;
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), not_null(x_125));
          t = table_put_0(t);
        }
      }
    }
    t = c_17;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm f_126 = NULL,g_126 = NULL,h_126 = NULL,i_126 = NULL,j_126 = NULL;
  f_126 = t;
  d_126 :
  if(match_string(f_126, "register-usage-info"))
    t = register_usage_1(t, m_0);
  else
    {
      if(((ATgetType(f_126) == AT_LIST) && ((ATermList) f_126 != ATempty)))
        {
          g_126 = ATgetFirst((ATermList) f_126);
          h_126 = (ATerm) ATgetNext((ATermList) f_126);
          e_126 :
          if(((ATgetType(h_126) == AT_LIST) && ((ATermList) h_126 != ATempty)))
            {
              i_126 = ATgetFirst((ATermList) h_126);
              j_126 = (ATerm) ATgetNext((ATermList) h_126);
              {
                ATerm o_126 = NULL;
                ATerm d_17;
                d_17 = t;
                {
                  t = not_null(g_126);
                  t = k_0(t);
                }
                t = d_17;
                {
                  ATerm p_126 = NULL;
                  t = not_null(i_126);
                  {
                    t = l_0(t);
                    {
                      p_126 = t;
                      if(((o_126 != NULL) && (o_126 != p_126)))
                        _fail(p_126);
                      else
                        o_126 = p_126;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_126)), not_null(o_126));
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
  ATerm e_17 = t;
  if((PushChoice() == 0))
    {
      ATerm r_7 (ATerm t)
      {
        ATerm f_127 = NULL;
        f_127 = t;
        u_126 :
        if(!(match_string(f_127, "-S")))
          {
            if(!(match_string(f_127, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm s_7 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm u_7 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, r_7, s_7, u_7);
      PopChoice();
    }
  else
    {
      t = e_17;
      {
        ATerm g_17 = t;
        if((PushChoice() == 0))
          {
            ATerm y_7 (ATerm t)
            {
              ATerm g_127 = NULL;
              g_127 = t;
              v_126 :
              if(!(match_string(g_127, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm g_8 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm o_8 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, y_7, g_8, o_8);
            PopChoice();
          }
        else
          {
            t = g_17;
            {
              ATerm h_17 = t;
              if((PushChoice() == 0))
                {
                  ATerm p_8 (ATerm t)
                  {
                    ATerm i_127 = NULL;
                    i_127 = t;
                    w_126 :
                    if(!(match_string(i_127, "-v")))
                      {
                        if(!(match_string(i_127, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm q_8 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm r_8 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, p_8, q_8, r_8);
                  PopChoice();
                }
              else
                {
                  t = h_17;
                  {
                    ATerm i_17 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm s_8 (ATerm t)
                        {
                          ATerm j_127 = NULL;
                          j_127 = t;
                          x_126 :
                          if(!(match_string(j_127, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm t_8 (ATerm t)
                        {
                          ATerm k_127 = NULL;
                          ATerm l_127 = NULL;
                          l_127 = t;
                          if(((k_127 != NULL) && (k_127 != l_127)))
                            _fail(l_127);
                          else
                            k_127 = l_127;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(k_127));
                          return(t);
                        }
                        ATerm u_8 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, s_8, t_8, u_8);
                        PopChoice();
                      }
                    else
                      {
                        t = i_17;
                        {
                          ATerm j_17 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm v_8 (ATerm t)
                              {
                                ATerm m_127 = NULL;
                                m_127 = t;
                                z_126 :
                                if(!(match_string(m_127, "-i")))
                                  {
                                    if(!(match_string(m_127, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm w_8 (ATerm t)
                              {
                                ATerm n_127 = NULL;
                                ATerm o_127 = NULL;
                                o_127 = t;
                                if(((n_127 != NULL) && (n_127 != o_127)))
                                  _fail(o_127);
                                else
                                  n_127 = o_127;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_127));
                                return(t);
                              }
                              ATerm d_9 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, v_8, w_8, d_9);
                              PopChoice();
                            }
                          else
                            {
                              t = j_17;
                              {
                                ATerm k_17 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm e_9 (ATerm t)
                                    {
                                      ATerm p_127 = NULL;
                                      p_127 = t;
                                      b_127 :
                                      if(!(match_string(p_127, "-o")))
                                        {
                                          if(!(match_string(p_127, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm f_9 (ATerm t)
                                    {
                                      ATerm q_127 = NULL;
                                      ATerm r_127 = NULL;
                                      r_127 = t;
                                      if(((q_127 != NULL) && (q_127 != r_127)))
                                        _fail(r_127);
                                      else
                                        q_127 = r_127;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_127));
                                      return(t);
                                    }
                                    ATerm g_9 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, e_9, f_9, g_9);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = k_17;
                                    {
                                      ATerm l_17 = t;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm h_9 (ATerm t)
                                          {
                                            ATerm s_127 = NULL;
                                            s_127 = t;
                                            d_127 :
                                            if(!(match_string(s_127, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm i_9 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm j_9 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, h_9, i_9, j_9);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = l_17;
                                          {
                                            ATerm m_9 (ATerm t)
                                            {
                                              ATerm t_127 = NULL;
                                              t_127 = t;
                                              e_127 :
                                              if(!(match_string(t_127, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm q_9 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm x_9 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, m_9, q_9, x_9);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm z_127 = NULL;
  z_127 = t;
  t = SSL_table_destroy(not_null(z_127));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_128 = NULL;
  d_128 = t;
  t = SSL_exit(not_null(d_128));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm h_128 = NULL;
  h_128 = t;
  t = SSL_implode_string(not_null(h_128));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_72 (ATerm))
{
  ATerm k_128 (ATerm t)
  {
    ATerm m_17 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_128);
        PopChoice();
      }
    else
      {
        t = m_17;
        {
          t = Nil_0(t);
          t = j_72(t);
        }
      }
    return(t);
  }
  t = k_128(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm n_17 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = n_17;
      {
        ATerm o_128 = NULL,p_128 = NULL,q_128 = NULL;
        o_128 = t;
        n_128 :
        if(((ATgetType(o_128) == AT_LIST) && ((ATermList) o_128 != ATempty)))
          {
            p_128 = ATgetFirst((ATermList) o_128);
            q_128 = (ATerm) ATgetNext((ATermList) o_128);
            {
              t = not_null(p_128);
              {
                ATerm y_9 (ATerm t)
                {
                  t = not_null(q_128);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, y_9);
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
  ATerm w_128 = NULL;
  w_128 = t;
  t = SSL_explode_string(not_null(w_128));
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
ATerm long_description_1 (ATerm t, ATerm y_60 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_71 (ATerm))
{
  ATerm z_128 (ATerm t)
  {
    ATerm o_17 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = o_17;
        t = Cons_2(t, v_71, z_128);
      }
    return(t);
  }
  t = z_128(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm j_0 (ATerm))
{
  ATerm e_129 = NULL,f_129 = NULL,g_129 = NULL;
  g_129 = t;
  d_129 :
  if(((ATgetType(g_129) == AT_LIST) && ((ATermList) g_129 != ATempty)))
    {
      e_129 = ATgetFirst((ATermList) g_129);
      f_129 = (ATerm) ATgetNext((ATermList) g_129);
      {
        t = not_null(f_129);
        {
          ATerm z_9 (ATerm t)
          {
            ATerm j_129 = NULL;
            ATerm k_129 = NULL;
            t = j_0(t);
            {
              k_129 = t;
              if(((j_129 != NULL) && (j_129 != k_129)))
                _fail(k_129);
              else
                j_129 = k_129;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(j_129)), not_null(e_129));
            return(t);
          }
          t = reverse_1(t, z_9);
        }
      }
    }
  else
    {
      if(((ATermList) g_129 == ATempty))
        {
          {
            t = (ATerm) ATmakeAppl(sym__0);
            t = j_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm a_10 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, a_10);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm x_60 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm v_46 (ATerm))
{
  ATerm r_129 = NULL,s_129 = NULL;
  r_129 = t;
  q_129 :
  if(match_cons(r_129, sym_Program_1))
    {
      s_129 = ATgetArgument(r_129, 0);
      {
        ATerm u_129 = NULL;
        t = not_null(s_129);
        {
          t = v_46(t);
          {
            u_129 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_129));
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
  ATerm c_130 = NULL;
  ATerm b_10 (ATerm t)
  {
    ATerm c_10 (ATerm t)
    {
      ATerm d_130 = NULL;
      d_130 = t;
      if(((c_130 != NULL) && (c_130 != d_130)))
        _fail(d_130);
      else
        c_130 = d_130;
      return(t);
    }
    t = Program_1(t, c_10);
    return(t);
  }
  t = option_defined_1(t, b_10);
  {
    ATerm d_10 (ATerm t)
    {
      ATerm e_130 = NULL;
      ATerm f_130 = NULL;
      t = (ATerm) ATmakeAppl(sym__0);
      {
        ATerm f_10 (ATerm t)
        {
          t = not_null(c_130);
          return(t);
        }
        t = short_description_1(t, f_10);
        {
          t = concat_strings_0(t);
          {
            f_130 = t;
            if(((e_130 != NULL) && (e_130 != f_130)))
              _fail(f_130);
            else
              e_130 = f_130;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, not_null(e_130)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, d_10);
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
                ATerm g_10 (ATerm t)
                {
                  ATerm g_130 = NULL;
                  g_130 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(g_130)), (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue))));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_10);
                {
                  ATerm h_10 (ATerm t)
                  {
                    ATerm i_130 = NULL;
                    ATerm j_130 = NULL;
                    t = (ATerm) ATmakeAppl(sym__0);
                    {
                      ATerm j_10 (ATerm t)
                      {
                        t = not_null(c_130);
                        return(t);
                      }
                      t = long_description_1(t, j_10);
                      {
                        t = concat_strings_0(t);
                        {
                          j_130 = t;
                          if(((i_130 != NULL) && (i_130 != j_130)))
                            _fail(j_130);
                          else
                            i_130 = j_130;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(i_130)), (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue))));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_10);
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
  ATerm q_130 = NULL,r_130 = NULL,s_130 = NULL;
  q_130 = t;
  p_130 :
  if(match_cons(q_130, sym__2))
    {
      r_130 = ATgetArgument(q_130, 0);
      s_130 = ATgetArgument(q_130, 1);
      {
        ATerm p_17;
        p_17 = t;
        t = SSL_printnl(not_null(r_130), not_null(s_130));
        t = p_17;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm w_46 (ATerm))
{
  ATerm z_130 = NULL,a_131 = NULL;
  z_130 = t;
  y_130 :
  if(match_cons(z_130, sym_Undefined_1))
    {
      a_131 = ATgetArgument(z_130, 0);
      {
        ATerm c_131 = NULL;
        t = not_null(a_131);
        {
          t = w_46(t);
          {
            c_131 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_131));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm d_72 (ATerm))
{
  ATerm g_131 (ATerm t)
  {
    ATerm q_17 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_72, _id);
        PopChoice();
      }
    else
      {
        t = q_17;
        t = Cons_2(t, _id, g_131);
      }
    return(t);
  }
  t = g_131(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_61 (ATerm))
{
  t = fetch_1(t, w_61);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_131 = NULL;
  i_131 = t;
  h_131 :
  if(!(match_cons(i_131, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm p_78 (ATerm))
{
  ATerm r_17 = t;
  if((PushChoice() == 0))
    {
      t = p_78(t);
      PopChoice();
    }
  else
    {
      t = r_17;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_131 = NULL,m_131 = NULL,n_131 = NULL;
  l_131 = t;
  k_131 :
  if(match_cons(l_131, sym__2))
    {
      m_131 = ATgetArgument(l_131, 0);
      n_131 = ATgetArgument(l_131, 1);
      t = SSL_table_get(not_null(m_131), not_null(n_131));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_131 = NULL,v_131 = NULL,w_131 = NULL,x_131 = NULL;
  u_131 = t;
  t_131 :
  if(match_cons(u_131, sym__3))
    {
      v_131 = ATgetArgument(u_131, 0);
      w_131 = ATgetArgument(u_131, 1);
      x_131 = ATgetArgument(u_131, 2);
      {
        ATerm s_17;
        s_17 = t;
        {
          ATerm b_132 = NULL;
          ATerm c_132 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_131), not_null(w_131));
          {
            ATerm t_17 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                PopChoice();
              }
            else
              {
                t = t_17;
                t = (ATerm) ATempty;
              }
            {
              c_132 = t;
              if(((b_132 != NULL) && (b_132 != c_132)))
                _fail(c_132);
              else
                b_132 = c_132;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_131), not_null(w_131), (ATerm) ATinsert(CheckATermList(not_null(b_132)), not_null(x_131)));
            t = table_put_0(t);
          }
        }
        t = s_17;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm c_61 (ATerm))
{
  ATerm g_132 = NULL;
  ATerm h_132 = NULL;
  t = (ATerm) ATmakeAppl(sym__0);
  {
    t = c_61(t);
    {
      h_132 = t;
      if(((g_132 != NULL) && (g_132 != h_132)))
        _fail(h_132);
      else
        g_132 = h_132;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), not_null(g_132));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm n_132 = NULL,o_132 = NULL,p_132 = NULL;
  n_132 = t;
  m_132 :
  if(match_string(n_132, "register-usage-info"))
    t = register_usage_1(t, i_0);
  else
    {
      if(((ATgetType(n_132) == AT_LIST) && ((ATermList) n_132 != ATempty)))
        {
          o_132 = ATgetFirst((ATermList) n_132);
          p_132 = (ATerm) ATgetNext((ATermList) n_132);
          {
            ATerm s_132 = NULL;
            ATerm u_17;
            u_17 = t;
            {
              t = not_null(o_132);
              t = g_0(t);
            }
            t = u_17;
            {
              ATerm t_132 = NULL;
              t = (ATerm) ATmakeAppl(sym__0);
              {
                t = h_0(t);
                {
                  t_132 = t;
                  if(((s_132 != NULL) && (s_132 != t_132)))
                    _fail(t_132);
                  else
                    s_132 = t_132;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_132)), not_null(s_132));
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
  ATerm n_10 (ATerm t)
  {
    ATerm y_132 = NULL;
    y_132 = t;
    x_132 :
    if(!(match_string(y_132, "--help")))
      {
        if(!(match_string(y_132, "-h")))
          {
            if(!(match_string(y_132, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm r_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm s_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, n_10, r_10, s_10);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_133 = NULL,c_133 = NULL,d_133 = NULL;
  b_133 = t;
  a_133 :
  if(((ATgetType(b_133) == AT_LIST) && ((ATermList) b_133 != ATempty)))
    {
      c_133 = ATgetFirst((ATermList) b_133);
      d_133 = (ATerm) ATgetNext((ATermList) b_133);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_133)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_133)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_55 (ATerm), ATerm v_55 (ATerm))
{
  ATerm l_133 = NULL,m_133 = NULL,n_133 = NULL;
  l_133 = t;
  k_133 :
  if(((ATgetType(l_133) == AT_LIST) && ((ATermList) l_133 != ATempty)))
    {
      m_133 = ATgetFirst((ATermList) l_133);
      n_133 = (ATerm) ATgetNext((ATermList) l_133);
      {
        ATerm q_133 = NULL;
        t = not_null(m_133);
        {
          ATerm s_133 = NULL;
          t = u_55(t);
          {
            q_133 = t;
            {
              t = not_null(n_133);
              {
                t = v_55(t);
                {
                  s_133 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_133)), not_null(q_133));
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
  ATerm y_133 = NULL;
  y_133 = t;
  x_133 :
  if(((ATermList) y_133 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm a_61 (ATerm))
{
  ATerm v_17;
  v_17 = t;
  {
    ATerm t_10 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = a_61(t);
      return(t);
    }
    t = try_1(t, t_10);
  }
  t = v_17;
  {
    ATerm u_10 (ATerm t)
    {
      ATerm a_134 = NULL;
      a_134 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_134));
      return(t);
    }
    ATerm v_10 (ATerm t)
    {
      ATerm w_17 = t;
      if((PushChoice() == 0))
        {
          ATerm x_17 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = x_17;
              {
                t = a_61(t);
                t = Cons_2(t, _id, v_10);
              }
            }
          PopChoice();
        }
      else
        {
          t = w_17;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, u_10, v_10);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_134 = NULL,h_134 = NULL,i_134 = NULL;
  ATerm y_17;
  y_17 = t;
  {
    ATerm j_134 = NULL,k_134 = NULL,l_134 = NULL,m_134 = NULL;
    j_134 = t;
    f_134 :
    if(match_cons(j_134, sym__3))
      {
        k_134 = ATgetArgument(j_134, 0);
        l_134 = ATgetArgument(j_134, 1);
        m_134 = ATgetArgument(j_134, 2);
        {
          if(((g_134 != NULL) && (g_134 != k_134)))
            _fail(k_134);
          else
            g_134 = k_134;
          {
            if(((h_134 != NULL) && (h_134 != l_134)))
              _fail(l_134);
            else
              h_134 = l_134;
            {
              if(((i_134 != NULL) && (i_134 != m_134)))
                _fail(m_134);
              else
                i_134 = m_134;
              t = SSL_table_put(not_null(g_134), not_null(h_134), not_null(i_134));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = y_17;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm z_60 (ATerm))
{
  ATerm p_134 = NULL;
  ATerm z_17;
  z_17 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
    t = table_put_0(t);
  }
  t = z_17;
  {
    ATerm w_10 (ATerm t)
    {
      ATerm b_18 = t;
      if((PushChoice() == 0))
        {
          t = z_60(t);
          PopChoice();
        }
      else
        {
          t = b_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, w_10);
    {
      ATerm x_10 (ATerm t)
      {
        ATerm f_18 = t;
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
            t = f_18;
            {
              ATerm y_10 (ATerm t)
              {
                ATerm b_11 (ATerm t)
                {
                  ATerm r_134 = NULL;
                  r_134 = t;
                  if(((p_134 != NULL) && (p_134 != r_134)))
                    _fail(r_134);
                  else
                    p_134 = r_134;
                  return(t);
                }
                t = Undefined_1(t, b_11);
                return(t);
              }
              t = option_defined_1(t, y_10);
              {
                ATerm g_18;
                g_18 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_134)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                  t = printnl_0(t);
                }
                t = g_18;
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
      t = try_1(t, x_10);
      {
        ATerm h_18;
        h_18 = t;
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
          t = table_destroy_0(t);
        }
        t = h_18;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm g_62 (ATerm), ATerm h_62 (ATerm), ATerm i_62 (ATerm))
{
  ATerm c_11 (ATerm t)
  {
    ATerm i_18 = t;
    if((PushChoice() == 0))
      {
        t = h_62(t);
        PopChoice();
      }
    else
      {
        t = i_18;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, c_11);
  {
    t = store_options_0(t);
    {
      ATerm j_18 = t;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, i_62);
          PopChoice();
        }
      else
        {
          t = j_18;
          {
            ATerm k_18 = t;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, g_62);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                PopChoice();
              }
            else
              {
                t = k_18;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm b_62 (ATerm), ATerm c_62 (ATerm))
{
  t = iowrap_3(t, b_62, c_62, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm y_61 (ATerm))
{
  ATerm d_11 (ATerm t)
  {
    t = _2(t, _id, y_61);
    return(t);
  }
  t = iowrap_2(t, d_11, _fail);
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  t = iowrap_1(t, frontend_transformation_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = frontend_0(t);
  return(t);
}
