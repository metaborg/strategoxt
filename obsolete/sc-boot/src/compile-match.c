#include <stratego.h>
#include <stratego-lib.h>
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
Symbol sym_Row_2;
Symbol sym_Row_3;
Symbol sym_Matrix_2;
Symbol sym_Matrix_1;
Symbol sym_Off_1;
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
Symbol sym_TNil_0;
Symbol sym_TCons_2;
Symbol sym_Pair_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
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
  sym_Row_2 = ATmakeSymbol("Row", 2, ATfalse);
  ATprotectSymbol(sym_Row_2);
  sym_Row_3 = ATmakeSymbol("Row", 3, ATfalse);
  ATprotectSymbol(sym_Row_3);
  sym_Matrix_2 = ATmakeSymbol("Matrix", 2, ATfalse);
  ATprotectSymbol(sym_Matrix_2);
  sym_Matrix_1 = ATmakeSymbol("Matrix", 1, ATfalse);
  ATprotectSymbol(sym_Matrix_1);
  sym_Off_1 = ATmakeSymbol("Off", 1, ATfalse);
  ATprotectSymbol(sym_Off_1);
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
ATerm spaste_1 (ATerm, ATerm r_85 (ATerm));
ATerm Rec_2 (ATerm, ATerm e_62 (ATerm), ATerm f_62 (ATerm));
ATerm Let_2 (ATerm, ATerm g_62 (ATerm), ATerm h_62 (ATerm));
ATerm sboundin_3 (ATerm, ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm u_85 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm d_62 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm n_85 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm t_60 (ATerm));
ATerm Scope_2 (ATerm, ATerm i_63 (ATerm), ATerm j_63 (ATerm));
ATerm tboundin_3 (ATerm, ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm q_85 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm x_69 (ATerm), ATerm y_69 (ATerm));
ATerm for_3 (ATerm, ATerm a_70 (ATerm), ATerm b_70 (ATerm), ATerm c_70 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm k_71 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm b_73 (ATerm), ATerm c_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm h_73 (ATerm), ATerm i_73 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm v_72 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm d_72 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm i_72 (ATerm));
ATerm rename_4 (ATerm, ATerm j_73 (ATerm, ATerm (ATerm)), ATerm k_73 (ATerm), ATerm l_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_73 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Seqs_1 (ATerm, ATerm b_59 (ATerm));
ATerm Call_2 (ATerm, ATerm s_62 (ATerm), ATerm t_62 (ATerm));
ATerm Prim_2 (ATerm, ATerm l_63 (ATerm), ATerm m_63 (ATerm));
ATerm Str_1 (ATerm, ATerm l_0 (ATerm));
ATerm Real_1 (ATerm, ATerm k_0 (ATerm));
ATerm Int_1 (ATerm, ATerm j_0 (ATerm));
ATerm Var_1 (ATerm, ATerm p_61 (ATerm));
ATerm Op_2 (ATerm, ATerm t_61 (ATerm), ATerm u_61 (ATerm));
ATerm Build_1 (ATerm, ATerm f_63 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm simple_strategy_0 (ATerm);
ATerm RowLet_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm u_77 (ATerm));
ATerm MatrixScope_0 (ATerm);
ATerm assert_1 (ATerm, ATerm z_63 (ATerm));
ATerm WildPat_0 (ATerm);
ATerm default_state_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm MatchCons_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm ConsTransition_1 (ATerm, ATerm e_64 (ATerm));
ATerm Transition_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm rzip_1 (ATerm, ATerm z_77 (ATerm));
ATerm transitions_0 (ATerm);
ATerm Uniq_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm c_80 (ATerm));
ATerm uniq_0 (ATerm);
ATerm offsets_0 (ATerm);
ATerm length_0 (ATerm);
ATerm ConsArgs_0 (ATerm);
ATerm filter_1 (ATerm, ATerm o_73 (ATerm));
ATerm outedges_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Mixture_0 (ATerm);
ATerm ShiftColumnRow_0 (ATerm);
ATerm ShiftColumn_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm As_2 (ATerm, ATerm f_60 (ATerm), ATerm g_60 (ATerm));
ATerm Row_3 (ATerm, ATerm u_58 (ATerm), ATerm v_58 (ATerm), ATerm w_58 (ATerm));
ATerm SkipWild_0 (ATerm);
ATerm MatrixRowsEmpty_0 (ATerm);
ATerm reduce_matrix_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm w_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm v_63 (ATerm));
ATerm scope_2 (ATerm, ATerm x_63 (ATerm), ATerm y_63 (ATerm));
ATerm matrix_to_dfa_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm zip_1 (ATerm, ATerm p_77 (ATerm));
ATerm new_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm MatchingCongruence_0 (ATerm);
ATerm EmptyScope_0 (ATerm);
ATerm Idempotency_0 (ATerm);
ATerm AssociateR_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm F15_0 (ATerm);
ATerm F14_0 (ATerm);
ATerm F13_0 (ATerm);
ATerm F12_0 (ATerm);
ATerm F11_0 (ATerm);
ATerm F10_0 (ATerm);
ATerm F9_0 (ATerm);
ATerm F8_0 (ATerm);
ATerm F7_0 (ATerm);
ATerm F6_0 (ATerm);
ATerm F5_0 (ATerm);
ATerm F3_0 (ATerm);
ATerm F2_0 (ATerm);
ATerm F1_0 (ATerm);
ATerm ElimFail_0 (ATerm);
ATerm I16_0 (ATerm);
ATerm I12_0 (ATerm);
ATerm I10_0 (ATerm);
ATerm I9_0 (ATerm);
ATerm I8_0 (ATerm);
ATerm I7_0 (ATerm);
ATerm I4_0 (ATerm);
ATerm I3_0 (ATerm);
ATerm I2_0 (ATerm);
ATerm I1_0 (ATerm);
ATerm ElimId_0 (ATerm);
ATerm Simplify_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm MatrixMerge_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm i_74 (ATerm), ATerm j_74 (ATerm), ATerm k_74 (ATerm));
ATerm crush_3 (ATerm, ATerm y_75 (ATerm), ATerm z_75 (ATerm), ATerm a_76 (ATerm));
ATerm collect_1 (ATerm, ATerm h_76 (ATerm));
ATerm collect_offsets_0 (ATerm);
ATerm CollectSubst_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm IgnoreVar_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm n_75 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_74 (ATerm), ATerm h_74 (ATerm));
ATerm unions_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm list_1 (ATerm, ATerm c_79 (ATerm));
ATerm CollectSplit_2 (ATerm, ATerm x_76 (ATerm), ATerm y_76 (ATerm));
ATerm is_int_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm collect_split_1 (ATerm, ATerm t_76 (ATerm));
ATerm collect_split_2 (ATerm, ATerm v_76 (ATerm), ATerm w_76 (ATerm));
ATerm collect_substitutions_0 (ATerm);
ATerm Annotate_1 (ATerm, ATerm o_86 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm add_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm k_77 (ATerm), ATerm l_77 (ATerm), ATerm m_77 (ATerm), ATerm n_77 (ATerm));
ATerm NZip00_0 (ATerm);
ATerm nzip0_1 (ATerm, ATerm v_77 (ATerm));
ATerm Propagate_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm r_81 (ATerm));
ATerm term_to_matrix_0 (ATerm);
ATerm MatchToMatrix_0 (ATerm);
ATerm downup_1 (ATerm, ATerm v_81 (ATerm));
ATerm match_to_matrix_0 (ATerm);
ATerm match_to_dfa_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm i_62 (ATerm), ATerm j_62 (ATerm), ATerm k_62 (ATerm));
ATerm Strategies_1 (ATerm, ATerm d_61 (ATerm));
ATerm Specification_1 (ATerm, ATerm f_61 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm p_86 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm n_63 (ATerm), ATerm o_63 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm j_67 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm o_80 (ATerm), ATerm p_80 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm i_67 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_79 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm p_65 (ATerm));
ATerm map_1 (ATerm, ATerm a_79 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm g_69 (ATerm), ATerm h_69 (ATerm));
ATerm repeat_1 (ATerm, ATerm j_69 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm o_65 (ATerm));
ATerm Program_1 (ATerm, ATerm r_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm s_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm i_79 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_66 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_81 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm t_65 (ATerm));
ATerm Option_3 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_63 (ATerm), ATerm s_63 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm r_65 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm q_65 (ATerm));
ATerm iowrap_3 (ATerm, ATerm x_66 (ATerm), ATerm y_66 (ATerm), ATerm z_66 (ATerm));
ATerm iowrap_2 (ATerm, ATerm s_66 (ATerm), ATerm t_66 (ATerm));
ATerm iowrap_1 (ATerm, ATerm p_66 (ATerm));
ATerm compile_match_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL;
  o_3 = t;
  n_3 :
  if(match_cons(o_3, sym_Cons_2))
    {
      p_3 = ATgetArgument(o_3, 0);
      q_3 = ATgetArgument(o_3, 1);
      t = not_null(p_3);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm r_85 (ATerm))
{
  ATerm i_9 = t;
  if(PushChoice()==0)
    {
      ATerm m_0 (ATerm t)
      {
        t = split_2(t, _id, r_85);
        {
          ATerm n_0 (ATerm t)
          {
            ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL;
            e_4 = t;
            v_3 :
            if(match_cons(e_4, sym_TCons_2))
              {
                f_4 = ATgetArgument(e_4, 0);
                j_4 = ATgetArgument(e_4, 1);
                w_3 :
                if(match_cons(f_4, sym_SDef_3))
                  {
                    g_4 = ATgetArgument(f_4, 0);
                    h_4 = ATgetArgument(f_4, 1);
                    i_4 = ATgetArgument(f_4, 2);
                    x_3 :
                    if(match_cons(j_4, sym_TCons_2))
                      {
                        k_4 = ATgetArgument(j_4, 0);
                        l_4 = ATgetArgument(j_4, 1);
                        y_3 :
                        if(match_cons(l_4, sym_TNil_0))
                          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_4), not_null(h_4), not_null(i_4));
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
          t = zip_1(t, n_0);
        }
        return(t);
      }
      t = Let_2(t, m_0, _id);
      PopChoice();
    }
  else
    {
      t = i_9;
      {
        ATerm m_9 = t;
        if(PushChoice()==0)
          {
            ATerm o_0 (ATerm t)
            {
              t = split_2(t, _id, r_85);
              {
                ATerm p_0 (ATerm t)
                {
                  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
                  p_4 = t;
                  a_4 :
                  if(match_cons(p_4, sym_TCons_2))
                    {
                      q_4 = ATgetArgument(p_4, 0);
                      t_4 = ATgetArgument(p_4, 1);
                      b_4 :
                      if(match_cons(q_4, sym_VarDec_2))
                        {
                          r_4 = ATgetArgument(q_4, 0);
                          s_4 = ATgetArgument(q_4, 1);
                          c_4 :
                          if(match_cons(t_4, sym_TCons_2))
                            {
                              u_4 = ATgetArgument(t_4, 0);
                              v_4 = ATgetArgument(t_4, 1);
                              d_4 :
                              if(match_cons(v_4, sym_TNil_0))
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(u_4), not_null(s_4));
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
                t = zip_1(t, p_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, o_0, _id);
            PopChoice();
          }
        else
          {
            t = m_9;
            {
              ATerm q_0 (ATerm t)
              {
                t = r_85(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, q_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm e_62 (ATerm), ATerm f_62 (ATerm))
{
  ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL;
  f_5 = t;
  e_5 :
  if(match_cons(f_5, sym_Rec_2))
    {
      g_5 = ATgetArgument(f_5, 0);
      h_5 = ATgetArgument(f_5, 1);
      {
        ATerm k_5 = NULL;
        t = not_null(g_5);
        {
          ATerm m_5 = NULL;
          t = e_62(t);
          k_5 = t;
          t = not_null(h_5);
          t = f_62(t);
          m_5 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(k_5), not_null(m_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm g_62 (ATerm), ATerm h_62 (ATerm))
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
  v_5 = t;
  u_5 :
  if(match_cons(v_5, sym_Let_2))
    {
      w_5 = ATgetArgument(v_5, 0);
      x_5 = ATgetArgument(v_5, 1);
      {
        ATerm a_6 = NULL;
        t = not_null(w_5);
        {
          ATerm c_6 = NULL;
          t = g_62(t);
          a_6 = t;
          t = not_null(x_5);
          t = h_62(t);
          c_6 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(a_6), not_null(c_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm u_85 (ATerm))
{
  ATerm n_9 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, s_85, s_85);
      PopChoice();
    }
  else
    {
      t = n_9;
      {
        ATerm o_9 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, u_85, u_85, s_85);
            PopChoice();
          }
        else
          {
            t = o_9;
            t = Rec_2(t, u_85, s_85);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL;
  j_6 = t;
  i_6 :
  if(match_cons(j_6, sym_Rec_2))
    {
      k_6 = ATgetArgument(j_6, 0);
      l_6 = ATgetArgument(j_6, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_6), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL;
  t_6 = t;
  s_6 :
  if(match_cons(t_6, sym_SDef_3))
    {
      u_6 = ATgetArgument(t_6, 0);
      v_6 = ATgetArgument(t_6, 1);
      w_6 = ATgetArgument(t_6, 2);
      t = not_null(v_6);
      {
        ATerm r_0 (ATerm t)
        {
          ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL;
          a_7 = t;
          r_6 :
          if(match_cons(a_7, sym_VarDec_2))
            {
              b_7 = ATgetArgument(a_7, 0);
              c_7 = ATgetArgument(a_7, 1);
              t = not_null(b_7);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, r_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
  k_7 = t;
  j_7 :
  if(match_cons(k_7, sym_Let_2))
    {
      l_7 = ATgetArgument(k_7, 0);
      m_7 = ATgetArgument(k_7, 1);
      t = not_null(l_7);
      {
        ATerm s_0 (ATerm t)
        {
          ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
          p_7 = t;
          i_7 :
          if(match_cons(p_7, sym_SDef_3))
            {
              q_7 = ATgetArgument(p_7, 0);
              r_7 = ATgetArgument(p_7, 1);
              s_7 = ATgetArgument(p_7, 2);
              t = not_null(q_7);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, s_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm d_62 (ATerm))
{
  ATerm b_8 = NULL,c_8 = NULL;
  b_8 = t;
  a_8 :
  if(match_cons(b_8, sym_SVar_1))
    {
      c_8 = ATgetArgument(b_8, 0);
      {
        ATerm e_8 = NULL;
        t = not_null(c_8);
        t = d_62(t);
        e_8 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(e_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm s_9 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = s_9;
        {
          ATerm t_9 = t;
          if(PushChoice()==0)
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
  t = rename_4(t, SVar_1, t_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm n_85 (ATerm))
{
  t = Scope_2(t, n_85, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm t_60 (ATerm))
{
  ATerm l_8 = NULL,m_8 = NULL;
  l_8 = t;
  k_8 :
  if(match_cons(l_8, sym_DynamicRules_1))
    {
      m_8 = ATgetArgument(l_8, 0);
      {
        ATerm o_8 = NULL;
        t = not_null(m_8);
        t = t_60(t);
        o_8 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(o_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm i_63 (ATerm), ATerm j_63 (ATerm))
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
  w_8 = t;
  v_8 :
  if(match_cons(w_8, sym_Scope_2))
    {
      x_8 = ATgetArgument(w_8, 0);
      y_8 = ATgetArgument(w_8, 1);
      {
        ATerm b_9 = NULL;
        t = not_null(x_8);
        {
          ATerm d_9 = NULL;
          t = i_63(t);
          b_9 = t;
          t = not_null(y_8);
          t = j_63(t);
          d_9 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_9), not_null(d_9));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm q_85 (ATerm))
{
  ATerm u_9 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, q_85, o_85);
      PopChoice();
    }
  else
    {
      t = u_9;
      t = DynamicRules_1(t, o_85);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL;
  k_9 = t;
  j_9 :
  if(match_cons(k_9, sym_DynamicRules_1))
    {
      l_9 = ATgetArgument(k_9, 0);
      t = not_null(l_9);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL;
  q_9 = t;
  p_9 :
  if(match_cons(q_9, sym_Var_1))
    {
      r_9 = ATgetArgument(q_9, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_9), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL;
  z_9 = t;
  v_9 :
  if(match_cons(z_9, sym_TCons_2))
    {
      a_10 = ATgetArgument(z_9, 0);
      b_10 = ATgetArgument(z_9, 1);
      w_9 :
      if(match_cons(b_10, sym_TCons_2))
        {
          c_10 = ATgetArgument(b_10, 0);
          f_10 = ATgetArgument(b_10, 1);
          x_9 :
          if(match_cons(c_10, sym_Cons_2))
            {
              d_10 = ATgetArgument(c_10, 0);
              e_10 = ATgetArgument(c_10, 1);
              y_9 :
              if(match_cons(f_10, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_10), not_null(a_10)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_10), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
  n_13 = t;
  j_13 :
  if(match_cons(n_13, sym_Cons_2))
    {
      o_13 = ATgetArgument(n_13, 0);
      t_13 = ATgetArgument(n_13, 1);
      k_13 :
      if(match_cons(o_13, sym_TCons_2))
        {
          p_13 = ATgetArgument(o_13, 0);
          q_13 = ATgetArgument(o_13, 1);
          l_13 :
          if(match_cons(q_13, sym_TCons_2))
            {
              r_13 = ATgetArgument(q_13, 0);
              s_13 = ATgetArgument(q_13, 1);
              m_13 :
              if(match_cons(s_13, sym_TNil_0))
                {
                  ATerm x_13 = NULL,y_13 = NULL,y_14 = NULL,t_15 = NULL;
                  ATerm g_10;
                  g_10 = t;
                  {
                    ATerm z_13 = NULL;
                    ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,x_14 = NULL;
                    t = not_null(r_13);
                    z_13 = t;
                    t = SSL_explode_term(not_null(z_13));
                    b_14 = t;
                    x_11 :
                    if(match_cons(b_14, sym_TCons_2))
                      {
                        c_14 = ATgetArgument(b_14, 0);
                        d_14 = ATgetArgument(b_14, 1);
                        y_11 :
                        if(match_cons(d_14, sym_TCons_2))
                          {
                            e_14 = ATgetArgument(d_14, 0);
                            x_14 = ATgetArgument(d_14, 1);
                            c_13 :
                            if(match_cons(x_14, sym_TNil_0))
                              {
                                if(x_13 != NULL && x_13 != c_14)
                                  _fail(c_14);
                                else
                                  x_13 = c_14;
                                if(y_13 != NULL && y_13 != e_14)
                                  _fail(e_14);
                                else
                                  y_13 = e_14;
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
                  t = g_10;
                  {
                    ATerm h_10;
                    h_10 = t;
                    {
                      ATerm d_15 = NULL;
                      ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
                      t = not_null(p_13);
                      d_15 = t;
                      t = SSL_explode_term(not_null(d_15));
                      o_15 = t;
                      f_13 :
                      if(match_cons(o_15, sym_TCons_2))
                        {
                          p_15 = ATgetArgument(o_15, 0);
                          q_15 = ATgetArgument(o_15, 1);
                          g_13 :
                          if(match_cons(q_15, sym_TCons_2))
                            {
                              r_15 = ATgetArgument(q_15, 0);
                              s_15 = ATgetArgument(q_15, 1);
                              h_13 :
                              if(match_cons(s_15, sym_TNil_0))
                                {
                                  if(x_13 != NULL && x_13 != p_15)
                                    _fail(p_15);
                                  else
                                    x_13 = p_15;
                                  if(y_14 != NULL && y_14 != r_15)
                                    _fail(r_15);
                                  else
                                    y_14 = r_15;
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
                    t = h_10;
                    {
                      ATerm u_15 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      u_15 = t;
                      if(t_15 != NULL && t_15 != u_15)
                        _fail(u_15);
                      else
                        t_15 = u_15;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_15), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_13), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
  g_16 = t;
  c_16 :
  if(match_cons(g_16, sym_Cons_2))
    {
      h_16 = ATgetArgument(g_16, 0);
      m_16 = ATgetArgument(g_16, 1);
      d_16 :
      if(match_cons(h_16, sym_TCons_2))
        {
          i_16 = ATgetArgument(h_16, 0);
          j_16 = ATgetArgument(h_16, 1);
          e_16 :
          if(match_cons(j_16, sym_TCons_2))
            {
              k_16 = ATgetArgument(j_16, 0);
              l_16 = ATgetArgument(j_16, 1);
              f_16 :
              if(match_cons(l_16, sym_TNil_0))
                {
                  ATerm o_16 = NULL;
                  if(i_16 != NULL && i_16 != k_16)
                    _fail(k_16);
                  else
                    i_16 = k_16;
                  if(o_16 != NULL && o_16 != m_16)
                    _fail(m_16);
                  else
                    o_16 = m_16;
                  t = not_null(o_16);
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
ATerm while_not_2 (ATerm t, ATerm x_69 (ATerm), ATerm y_69 (ATerm))
{
  ATerm q_16 (ATerm t)
  {
    ATerm i_10 = t;
    if(PushChoice()==0)
      {
        t = x_69(t);
        PopChoice();
      }
    else
      {
        t = i_10;
        t = y_69(t);
        t = q_16(t);
      }
    return(t);
  }
  t = q_16(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm a_70 (ATerm), ATerm b_70 (ATerm), ATerm c_70 (ATerm))
{
  t = a_70(t);
  t = while_not_2(t, b_70, c_70);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm j_10 = t;
  if(PushChoice()==0)
    {
      ATerm u_0 (ATerm t)
      {
        ATerm w_16 = NULL;
        w_16 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_16), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm v_0 (ATerm t)
      {
        ATerm x_0 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, x_0);
        return(t);
      }
      ATerm w_0 (ATerm t)
      {
        ATerm k_10 = t;
        if(PushChoice()==0)
          {
            ATerm y_0 (ATerm t)
            {
              ATerm z_0 (ATerm t)
              {
                ATerm l_10 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = l_10;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, z_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, y_0);
            PopChoice();
          }
        else
          {
            t = k_10;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, u_0, v_0, w_0);
      PopChoice();
    }
  else
    {
      t = j_10;
      {
        ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL;
        y_16 = t;
        t_16 :
        if(match_cons(y_16, sym_TCons_2))
          {
            z_16 = ATgetArgument(y_16, 0);
            a_17 = ATgetArgument(y_16, 1);
            u_16 :
            if(match_cons(a_17, sym_TCons_2))
              {
                b_17 = ATgetArgument(a_17, 0);
                c_17 = ATgetArgument(a_17, 1);
                v_16 :
                if(match_cons(c_17, sym_TNil_0))
                  {
                    t = not_null(z_16);
                    {
                      ATerm h_17 (ATerm t)
                      {
                        ATerm m_10 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = m_10;
                            {
                              ATerm n_10 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm a_1 (ATerm t)
                                  {
                                    t = not_null(b_17);
                                    return(t);
                                  }
                                  t = HdMember_1(t, a_1);
                                  t = h_17(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = n_10;
                                  t = Cons_2(t, _id, h_17);
                                }
                            }
                          }
                        return(t);
                      }
                      t = h_17(t);
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
ATerm free_vars_3 (ATerm t, ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm k_71 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm l_17 (ATerm t)
  {
    ATerm o_10 = t;
    if(PushChoice()==0)
      {
        t = i_71(t);
        PopChoice();
      }
    else
      {
        t = o_10;
        {
          ATerm p_10 = t;
          if(PushChoice()==0)
            {
              ATerm j_17 = NULL;
              ATerm q_10;
              q_10 = t;
              {
                ATerm k_17 = NULL;
                t = j_71(t);
                k_17 = t;
                if(j_17 != NULL && j_17 != k_17)
                  _fail(k_17);
                else
                  j_17 = k_17;
              }
              t = q_10;
              {
                ATerm b_1 (ATerm t)
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = not_null(j_17);
                    return(t);
                  }
                  t = split_2(t, l_17, d_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm c_1 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = k_71(t, b_1, l_17, c_1);
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = crush_3(t, e_1, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = p_10;
              {
                ATerm f_1 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = crush_3(t, f_1, union_0, l_17);
              }
            }
        }
      }
    return(t);
  }
  t = l_17(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm r_10 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = r_10;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, g_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL;
  s_17 = t;
  p_17 :
  if(match_cons(s_17, sym_Scope_2))
    {
      t_17 = ATgetArgument(s_17, 0);
      r_17 = ATgetArgument(s_17, 1);
      t = not_null(t_17);
    }
  else
    {
      if(match_cons(s_17, sym_LRule_1))
        {
          t_17 = ATgetArgument(s_17, 0);
          q_17 :
          if(match_cons(t_17, sym_Rule_3))
            {
              u_17 = ATgetArgument(t_17, 0);
              v_17 = ATgetArgument(t_17, 1);
              w_17 = ATgetArgument(t_17, 2);
              t = not_null(u_17);
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
ATerm DistBinding_2 (ATerm t, ATerm b_73 (ATerm), ATerm c_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  l_18 = t;
  h_18 :
  if(match_cons(l_18, sym_TCons_2))
    {
      m_18 = ATgetArgument(l_18, 0);
      n_18 = ATgetArgument(l_18, 1);
      i_18 :
      if(match_cons(n_18, sym_TCons_2))
        {
          o_18 = ATgetArgument(n_18, 0);
          p_18 = ATgetArgument(n_18, 1);
          j_18 :
          if(match_cons(p_18, sym_TCons_2))
            {
              q_18 = ATgetArgument(p_18, 0);
              r_18 = ATgetArgument(p_18, 1);
              k_18 :
              if(match_cons(r_18, sym_TNil_0))
                {
                  t = not_null(m_18);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm w_18 = NULL;
                      w_18 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = b_73(t);
                      return(t);
                    }
                    ATerm i_1 (ATerm t)
                    {
                      ATerm y_18 = NULL;
                      y_18 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = b_73(t);
                      return(t);
                    }
                    t = c_73(t, h_1, i_1, _id);
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
ATerm RnBinding_2 (ATerm t, ATerm h_73 (ATerm), ATerm i_73 (ATerm, ATerm (ATerm)))
{
  ATerm m_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,r_20 = NULL;
  m_19 = t;
  j_19 :
  if(match_cons(m_19, sym_TCons_2))
    {
      w_19 = ATgetArgument(m_19, 0);
      x_19 = ATgetArgument(m_19, 1);
      k_19 :
      if(match_cons(x_19, sym_TCons_2))
        {
          y_19 = ATgetArgument(x_19, 0);
          r_20 = ATgetArgument(x_19, 1);
          l_19 :
          if(match_cons(r_20, sym_TNil_0))
            {
              ATerm u_20 = NULL;
              t = not_null(w_19);
              {
                ATerm w_20 = NULL;
                t = h_73(t);
                u_20 = t;
                {
                  ATerm y_20 = NULL,a_21 = NULL;
                  t = map_1(t, new_0);
                  w_20 = t;
                  {
                    ATerm z_20 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_20), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    z_20 = t;
                    if(y_20 != NULL && y_20 != z_20)
                      _fail(z_20);
                    else
                      y_20 = z_20;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm c_21 = NULL;
                      t = conc_0(t);
                      a_21 = t;
                      {
                        ATerm d_21 = NULL;
                        t = not_null(w_19);
                        {
                          ATerm j_1 (ATerm t)
                          {
                            t = not_null(w_20);
                            return(t);
                          }
                          t = i_73(t, j_1);
                          d_21 = t;
                          if(c_21 != NULL && c_21 != d_21)
                            _fail(d_21);
                          else
                            c_21 = d_21;
                        }
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_21), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,h_22 = NULL;
  w_21 = t;
  l_21 :
  if(match_cons(w_21, sym_TCons_2))
    {
      x_21 = ATgetArgument(w_21, 0);
      y_21 = ATgetArgument(w_21, 1);
      t_21 :
      if(match_cons(y_21, sym_TCons_2))
        {
          z_21 = ATgetArgument(y_21, 0);
          h_22 = ATgetArgument(y_21, 1);
          u_21 :
          if(match_cons(z_21, sym_Cons_2))
            {
              a_22 = ATgetArgument(z_21, 0);
              b_22 = ATgetArgument(z_21, 1);
              v_21 :
              if(match_cons(h_22, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_22), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
  t_22 = t;
  m_22 :
  if(match_cons(t_22, sym_TCons_2))
    {
      u_22 = ATgetArgument(t_22, 0);
      v_22 = ATgetArgument(t_22, 1);
      n_22 :
      if(match_cons(v_22, sym_TCons_2))
        {
          w_22 = ATgetArgument(v_22, 0);
          e_23 = ATgetArgument(v_22, 1);
          o_22 :
          if(match_cons(w_22, sym_Cons_2))
            {
              y_22 = ATgetArgument(w_22, 0);
              d_23 = ATgetArgument(w_22, 1);
              p_22 :
              if(match_cons(y_22, sym_TCons_2))
                {
                  z_22 = ATgetArgument(y_22, 0);
                  a_23 = ATgetArgument(y_22, 1);
                  q_22 :
                  if(match_cons(a_23, sym_TCons_2))
                    {
                      b_23 = ATgetArgument(a_23, 0);
                      c_23 = ATgetArgument(a_23, 1);
                      r_22 :
                      if(match_cons(c_23, sym_TNil_0))
                        {
                          s_22 :
                          if(match_cons(e_23, sym_TNil_0))
                            {
                              ATerm g_23 = NULL;
                              if(u_22 != NULL && u_22 != z_22)
                                _fail(z_22);
                              else
                                u_22 = z_22;
                              if(g_23 != NULL && g_23 != b_23)
                                _fail(b_23);
                              else
                                g_23 = b_23;
                              t = not_null(g_23);
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
  ATerm s_10 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = s_10;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm v_72 (ATerm, ATerm (ATerm)))
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,z_23 = NULL,a_24 = NULL;
  n_23 = t;
  k_23 :
  if(match_cons(n_23, sym_TCons_2))
    {
      o_23 = ATgetArgument(n_23, 0);
      p_23 = ATgetArgument(n_23, 1);
      l_23 :
      if(match_cons(p_23, sym_TCons_2))
        {
          z_23 = ATgetArgument(p_23, 0);
          a_24 = ATgetArgument(p_23, 1);
          m_23 :
          if(match_cons(a_24, sym_TNil_0))
            {
              t = not_null(o_23);
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm l_1 (ATerm t)
                  {
                    t = not_null(z_23);
                    return(t);
                  }
                  t = split_2(t, _id, l_1);
                  t = lookup_0(t);
                  return(t);
                }
                t = v_72(t, k_1);
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
ATerm all_dist_1 (ATerm t, ATerm d_72 (ATerm))
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
  x_24 = t;
  u_24 :
  if(match_cons(x_24, sym_TCons_2))
    {
      y_24 = ATgetArgument(x_24, 0);
      z_24 = ATgetArgument(x_24, 1);
      v_24 :
      if(match_cons(z_24, sym_TCons_2))
        {
          a_25 = ATgetArgument(z_24, 0);
          b_25 = ATgetArgument(z_24, 1);
          w_24 :
          if(match_cons(b_25, sym_TNil_0))
            {
              t = not_null(y_24);
              {
                ATerm m_1 (ATerm t)
                {
                  ATerm e_25 = NULL;
                  e_25 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_25), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = d_72(t);
                  return(t);
                }
                t = _all(t, m_1);
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
ATerm env_alltd_1 (ATerm t, ATerm i_72 (ATerm))
{
  ATerm k_25 (ATerm t)
  {
    ATerm t_10 = t;
    if(PushChoice()==0)
      {
        t = i_72(t);
        PopChoice();
      }
    else
      {
        t = t_10;
        t = all_dist_1(t, k_25);
      }
    return(t);
  }
  t = k_25(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm j_73 (ATerm, ATerm (ATerm)), ATerm k_73 (ATerm), ATerm l_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_73 (ATerm, ATerm (ATerm)))
{
  ATerm r_25 = NULL;
  r_25 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_25), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  {
    ATerm u_25 (ATerm t)
    {
      ATerm n_1 (ATerm t)
      {
        ATerm u_10 = t;
        if(PushChoice()==0)
          {
            t = RnVar_1(t, j_73);
            PopChoice();
          }
        else
          {
            t = u_10;
            t = RnBinding_2(t, k_73, m_73);
            t = DistBinding_2(t, u_25, l_73);
          }
        return(t);
      }
      t = env_alltd_1(t, n_1);
      return(t);
    }
    t = u_25(t);
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
ATerm Seqs_1 (ATerm t, ATerm b_59 (ATerm))
{
  ATerm y_25 = NULL,z_25 = NULL;
  y_25 = t;
  x_25 :
  if(match_cons(y_25, sym_Seqs_1))
    {
      z_25 = ATgetArgument(y_25, 0);
      {
        ATerm b_26 = NULL;
        t = not_null(z_25);
        t = b_59(t);
        b_26 = t;
        t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(b_26));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm s_62 (ATerm), ATerm t_62 (ATerm))
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
  m_26 = t;
  l_26 :
  if(match_cons(m_26, sym_Call_2))
    {
      n_26 = ATgetArgument(m_26, 0);
      o_26 = ATgetArgument(m_26, 1);
      {
        ATerm r_26 = NULL;
        t = not_null(n_26);
        {
          ATerm t_26 = NULL;
          t = s_62(t);
          r_26 = t;
          t = not_null(o_26);
          t = t_62(t);
          t_26 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(r_26), not_null(t_26));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm l_63 (ATerm), ATerm m_63 (ATerm))
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
  c_27 = t;
  b_27 :
  if(match_cons(c_27, sym_Prim_2))
    {
      d_27 = ATgetArgument(c_27, 0);
      e_27 = ATgetArgument(c_27, 1);
      {
        ATerm h_27 = NULL;
        t = not_null(d_27);
        {
          ATerm j_27 = NULL;
          t = l_63(t);
          h_27 = t;
          t = not_null(e_27);
          t = m_63(t);
          j_27 = t;
          t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(h_27), not_null(j_27));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm l_0 (ATerm))
{
  ATerm t_27 = NULL,u_27 = NULL;
  t_27 = t;
  s_27 :
  if(match_cons(t_27, sym_Str_1))
    {
      u_27 = ATgetArgument(t_27, 0);
      {
        ATerm v_10 = t;
        if(PushChoice()==0)
          {
            ATerm w_27 = NULL;
            t = not_null(u_27);
            t = l_0(t);
            w_27 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(w_27));
            PopChoice();
          }
        else
          {
            t = v_10;
            {
              ATerm z_27 = NULL;
              t = not_null(u_27);
              t = l_0(t);
              z_27 = t;
              t = (ATerm) ATmakeAppl(sym_Str_1, not_null(z_27));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Real_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm k_28 = NULL,l_28 = NULL;
  k_28 = t;
  j_28 :
  if(match_cons(k_28, sym_Real_1))
    {
      l_28 = ATgetArgument(k_28, 0);
      {
        ATerm w_10 = t;
        if(PushChoice()==0)
          {
            ATerm n_28 = NULL;
            t = not_null(l_28);
            t = k_0(t);
            n_28 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, not_null(n_28));
            PopChoice();
          }
        else
          {
            t = w_10;
            {
              ATerm q_28 = NULL;
              t = not_null(l_28);
              t = k_0(t);
              q_28 = t;
              t = (ATerm) ATmakeAppl(sym_Real_1, not_null(q_28));
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
  ATerm b_29 = NULL,c_29 = NULL;
  b_29 = t;
  a_29 :
  if(match_cons(b_29, sym_Int_1))
    {
      c_29 = ATgetArgument(b_29, 0);
      {
        ATerm x_10 = t;
        if(PushChoice()==0)
          {
            ATerm e_29 = NULL;
            t = not_null(c_29);
            t = j_0(t);
            e_29 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, not_null(e_29));
            PopChoice();
          }
        else
          {
            t = x_10;
            {
              ATerm h_29 = NULL;
              t = not_null(c_29);
              t = j_0(t);
              h_29 = t;
              t = (ATerm) ATmakeAppl(sym_Int_1, not_null(h_29));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm p_61 (ATerm))
{
  ATerm q_29 = NULL,r_29 = NULL;
  q_29 = t;
  p_29 :
  if(match_cons(q_29, sym_Var_1))
    {
      r_29 = ATgetArgument(q_29, 0);
      {
        ATerm t_29 = NULL;
        t = not_null(r_29);
        t = p_61(t);
        t_29 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_29));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm t_61 (ATerm), ATerm u_61 (ATerm))
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
  b_30 = t;
  a_30 :
  if(match_cons(b_30, sym_Op_2))
    {
      c_30 = ATgetArgument(b_30, 0);
      d_30 = ATgetArgument(b_30, 1);
      {
        ATerm g_30 = NULL;
        t = not_null(c_30);
        {
          ATerm i_30 = NULL;
          t = t_61(t);
          g_30 = t;
          t = not_null(d_30);
          t = u_61(t);
          i_30 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(g_30), not_null(i_30));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm f_63 (ATerm))
{
  ATerm q_30 = NULL,r_30 = NULL;
  q_30 = t;
  p_30 :
  if(match_cons(q_30, sym_Build_1))
    {
      r_30 = ATgetArgument(q_30, 0);
      {
        ATerm t_30 = NULL;
        t = not_null(r_30);
        t = f_63(t);
        t_30 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(t_30));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm y_30 = NULL;
  y_30 = t;
  x_30 :
  if(!(match_cons(y_30, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm a_31 = NULL;
  a_31 = t;
  z_30 :
  if(!(match_cons(a_31, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm simple_strategy_0 (ATerm t)
{
  ATerm y_10 = t;
  if(PushChoice()==0)
    {
      t = Id_0(t);
      PopChoice();
    }
  else
    {
      t = y_10;
      {
        ATerm z_10 = t;
        if(PushChoice()==0)
          {
            t = Fail_0(t);
            PopChoice();
          }
        else
          {
            t = z_10;
            {
              ATerm a_11 = t;
              if(PushChoice()==0)
                {
                  t = Seqs_1(t, Nil_0);
                  PopChoice();
                }
              else
                {
                  t = a_11;
                  {
                    ATerm b_11 = t;
                    if(PushChoice()==0)
                      {
                        ATerm o_1 (ATerm t)
                        {
                          ATerm c_11 = t;
                          if(PushChoice()==0)
                            {
                              t = Var_1(t, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = c_11;
                              {
                                ATerm d_11 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm p_1 (ATerm t)
                                    {
                                      ATerm q_1 (ATerm t)
                                      {
                                        t = Var_1(t, _id);
                                        return(t);
                                      }
                                      t = list_1(t, q_1);
                                      return(t);
                                    }
                                    t = Op_2(t, _id, p_1);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = d_11;
                                    {
                                      ATerm e_11 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Int_1(t, _id);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = e_11;
                                          {
                                            ATerm f_11 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = Real_1(t, _id);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = f_11;
                                                t = Str_1(t, _id);
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                          return(t);
                        }
                        t = Build_1(t, o_1);
                        PopChoice();
                      }
                    else
                      {
                        t = b_11;
                        {
                          ATerm g_11 = t;
                          if(PushChoice()==0)
                            {
                              t = Prim_2(t, _id, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = g_11;
                              {
                                ATerm h_11 = t;
                                if(PushChoice()==0)
                                  {
                                    t = Call_2(t, _id, _id);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = h_11;
                                    {
                                      ATerm r_1 (ATerm t)
                                      {
                                        t = Cons_2(t, simple_strategy_0, Nil_0);
                                        return(t);
                                      }
                                      t = Seqs_1(t, r_1);
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
ATerm RowLet_0 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,l_31 = NULL;
  g_31 = t;
  f_31 :
  if(match_cons(g_31, sym_Row_2))
    {
      h_31 = ATgetArgument(g_31, 0);
      l_31 = ATgetArgument(g_31, 1);
      {
        ATerm i_11 = t;
        if(PushChoice()==0)
          {
            t = not_null(l_31);
            t = simple_strategy_0(t);
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Row_3, (ATerm)ATmakeAppl(sym_Nil_0), not_null(h_31), not_null(l_31)), (ATerm) ATmakeAppl(sym_TNil_0)));
            PopChoice();
          }
        else
          {
            t = i_11;
            {
              ATerm q_31 = NULL;
              t = not_null(l_31);
              {
                ATerm j_11 = t;
                if(PushChoice()==0)
                  {
                    t = simple_strategy_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = j_11;
                t = new_0(t);
                q_31 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_3, not_null(q_31), (ATerm)ATmakeAppl(sym_Nil_0), not_null(l_31)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Row_3, (ATerm)ATmakeAppl(sym_Nil_0), not_null(h_31), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_31)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm u_77 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, u_77);
  return(t);
}
ATerm MatrixScope_0 (ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
  e_32 = t;
  d_32 :
  if(match_cons(e_32, sym_Matrix_2))
    {
      f_32 = ATgetArgument(e_32, 0);
      g_32 = ATgetArgument(e_32, 1);
      {
        ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL;
        t = not_null(g_32);
        t = unzip_1(t, RowLet_0);
        {
          ATerm s_1 (ATerm t)
          {
            t = TCons_2(t, _id, TNil_0);
            return(t);
          }
          t = TCons_2(t, concat_0, s_1);
          j_32 = t;
          a_32 :
          if(match_cons(j_32, sym_TCons_2))
            {
              k_32 = ATgetArgument(j_32, 0);
              l_32 = ATgetArgument(j_32, 1);
              b_32 :
              if(match_cons(l_32, sym_TCons_2))
                {
                  m_32 = ATgetArgument(l_32, 0);
                  n_32 = ATgetArgument(l_32, 1);
                  c_32 :
                  if(match_cons(n_32, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_32), (ATerm) ATmakeAppl(sym_Let_2, not_null(k_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(m_32)))));
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
  else
    _fail(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_63 (ATerm))
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
  z_32 = t;
  w_32 :
  if(match_cons(z_32, sym_TCons_2))
    {
      a_33 = ATgetArgument(z_32, 0);
      b_33 = ATgetArgument(z_32, 1);
      x_32 :
      if(match_cons(b_33, sym_TCons_2))
        {
          c_33 = ATgetArgument(b_33, 0);
          d_33 = ATgetArgument(b_33, 1);
          y_32 :
          if(match_cons(d_33, sym_TNil_0))
            {
              ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
              ATerm k_11;
              k_11 = t;
              {
                ATerm j_33 = NULL;
                ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL;
                t = z_63(t);
                j_33 = t;
                if(g_33 != NULL && g_33 != j_33)
                  _fail(j_33);
                else
                  g_33 = j_33;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_33), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm l_11 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = l_11;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  k_33 = t;
                  v_32 :
                  if(match_cons(k_33, sym_Cons_2))
                    {
                      l_33 = ATgetArgument(k_33, 0);
                      m_33 = ATgetArgument(k_33, 1);
                      if(h_33 != NULL && h_33 != l_33)
                        _fail(l_33);
                      else
                        h_33 = l_33;
                      if(i_33 != NULL && i_33 != m_33)
                        _fail(m_33);
                      else
                        i_33 = m_33;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_33), not_null(h_33)), not_null(i_33)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  else
                    _fail(t);
                }
              }
              t = k_11;
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
ATerm WildPat_0 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL;
  v_33 = t;
  r_33 :
  if(match_cons(v_33, sym_Row_3))
    {
      w_33 = ATgetArgument(v_33, 0);
      b_34 = ATgetArgument(v_33, 1);
      c_34 = ATgetArgument(v_33, 2);
      s_33 :
      if(match_cons(w_33, sym_Cons_2))
        {
          x_33 = ATgetArgument(w_33, 0);
          a_34 = ATgetArgument(w_33, 1);
          t_33 :
          if(match_cons(x_33, sym_As_2))
            {
              y_33 = ATgetArgument(x_33, 0);
              z_33 = ATgetArgument(x_33, 1);
              u_33 :
              if(match_cons(z_33, sym_Wld_0))
                t = (ATerm) ATmakeAppl(sym_Row_3, not_null(a_34), not_null(b_34), not_null(c_34));
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
ATerm default_state_0 (ATerm t)
{
  ATerm i_34 = NULL;
  t = filter_1(t, WildPat_0);
  i_34 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(i_34));
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL;
  p_34 = t;
  m_34 :
  if(match_cons(p_34, sym_TCons_2))
    {
      q_34 = ATgetArgument(p_34, 0);
      r_34 = ATgetArgument(p_34, 1);
      n_34 :
      if(match_cons(r_34, sym_TCons_2))
        {
          s_34 = ATgetArgument(r_34, 0);
          t_34 = ATgetArgument(r_34, 1);
          o_34 :
          if(match_cons(t_34, sym_TNil_0))
            {
              if(q_34 != NULL && q_34 != s_34)
                _fail(s_34);
              else
                q_34 = s_34;
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
ATerm MatchCons_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm y_35 = NULL,z_35 = NULL,c_36 = NULL;
  c_36 = t;
  x_35 :
  if(match_cons(c_36, sym_Op_2))
    {
      z_35 = ATgetArgument(c_36, 0);
      y_35 = ATgetArgument(c_36, 1);
      {
        ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL;
        t = h_0(t);
        f_36 = t;
        d_35 :
        if(match_cons(f_36, sym_Fun_2))
          {
            g_36 = ATgetArgument(f_36, 0);
            h_36 = ATgetArgument(f_36, 1);
            {
              ATerm i_36 = NULL,j_36 = NULL;
              if(z_35 != NULL && z_35 != g_36)
                _fail(g_36);
              else
                z_35 = g_36;
              if(i_36 != NULL && i_36 != h_36)
                _fail(h_36);
              else
                i_36 = h_36;
              {
                ATerm k_36 = NULL;
                t = not_null(y_35);
                t = length_0(t);
                k_36 = t;
                if(j_36 != NULL && j_36 != k_36)
                  _fail(k_36);
                else
                  j_36 = k_36;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_36), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_36), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = eq_0(t);
                t = not_null(y_35);
              }
            }
          }
        else
          _fail(t);
      }
    }
  else
    {
      if(match_cons(c_36, sym_Str_1))
        {
          z_35 = ATgetArgument(c_36, 0);
          {
            ATerm r_36 = NULL,z_36 = NULL;
            t = h_0(t);
            r_36 = t;
            h_35 :
            if(match_cons(r_36, sym_Str_1))
              {
                z_36 = ATgetArgument(r_36, 0);
                {
                  ATerm a_37 = NULL;
                  if(z_35 != NULL && z_35 != z_36)
                    _fail(z_36);
                  else
                    z_35 = z_36;
                  t = i_0(t);
                  a_37 = t;
                  g_35 :
                  if(match_cons(a_37, sym_Nil_0))
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        {
          if(match_cons(c_36, sym_Real_1))
            {
              z_35 = ATgetArgument(c_36, 0);
              {
                ATerm c_37 = NULL,d_37 = NULL;
                t = h_0(t);
                c_37 = t;
                p_35 :
                if(match_cons(c_37, sym_Real_1))
                  {
                    d_37 = ATgetArgument(c_37, 0);
                    {
                      ATerm e_37 = NULL;
                      if(z_35 != NULL && z_35 != d_37)
                        _fail(d_37);
                      else
                        z_35 = d_37;
                      t = i_0(t);
                      e_37 = t;
                      l_35 :
                      if(match_cons(e_37, sym_Nil_0))
                        t = (ATerm) ATmakeAppl(sym_Nil_0);
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            {
              if(match_cons(c_36, sym_Int_1))
                {
                  z_35 = ATgetArgument(c_36, 0);
                  {
                    ATerm g_37 = NULL,h_37 = NULL;
                    t = h_0(t);
                    g_37 = t;
                    t_35 :
                    if(match_cons(g_37, sym_Int_1))
                      {
                        h_37 = ATgetArgument(g_37, 0);
                        {
                          ATerm i_37 = NULL;
                          if(z_35 != NULL && z_35 != h_37)
                            _fail(h_37);
                          else
                            z_35 = h_37;
                          t = i_0(t);
                          i_37 = t;
                          s_35 :
                          if(match_cons(i_37, sym_Nil_0))
                            t = (ATerm) ATmakeAppl(sym_Nil_0);
                          else
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                {
                  if(match_cons(c_36, sym_Wld_0))
                    {
                      ATerm m_37 = NULL;
                      t = i_0(t);
                      {
                        ATerm t_1 (ATerm t)
                        {
                          ATerm j_37 = NULL,k_37 = NULL;
                          j_37 = t;
                          v_35 :
                          if(match_cons(j_37, sym_Var_1))
                            {
                              k_37 = ATgetArgument(j_37, 0);
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(k_37)), (ATerm) ATmakeAppl(sym_Wld_0));
                            }
                          else
                            _fail(t);
                          return(t);
                        }
                        t = map_1(t, t_1);
                        m_37 = t;
                        t = not_null(m_37);
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
ATerm ConsTransition_1 (ATerm t, ATerm e_64 (ATerm))
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL;
  r_38 = t;
  k_38 :
  if(match_cons(r_38, sym_Row_3))
    {
      s_38 = ATgetArgument(r_38, 0);
      x_38 = ATgetArgument(r_38, 1);
      y_38 = ATgetArgument(r_38, 2);
      l_38 :
      if(match_cons(s_38, sym_Cons_2))
        {
          t_38 = ATgetArgument(s_38, 0);
          w_38 = ATgetArgument(s_38, 1);
          m_38 :
          if(match_cons(t_38, sym_As_2))
            {
              u_38 = ATgetArgument(t_38, 0);
              v_38 = ATgetArgument(t_38, 1);
              {
                ATerm f_39 = NULL;
                t = not_null(v_38);
                {
                  ATerm l_39 = NULL;
                  t = e_64(t);
                  f_39 = t;
                  {
                    ATerm m_39 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_39), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_38), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = conc_0(t);
                    m_39 = t;
                    if(l_39 != NULL && l_39 != m_39)
                      _fail(m_39);
                    else
                      l_39 = m_39;
                    t = (ATerm) ATmakeAppl(sym_Row_3, not_null(w_38), not_null(l_39), not_null(y_38));
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
ATerm Transition_0 (ATerm t)
{
  ATerm k_40 = NULL,x_40 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL;
  k_40 = t;
  u_39 :
  if(match_cons(k_40, sym_TCons_2))
    {
      x_40 = ATgetArgument(k_40, 0);
      e_41 = ATgetArgument(k_40, 1);
      b_40 :
      if(match_cons(e_41, sym_TCons_2))
        {
          f_41 = ATgetArgument(e_41, 0);
          k_41 = ATgetArgument(e_41, 1);
          c_40 :
          if(match_cons(f_41, sym_TCons_2))
            {
              g_41 = ATgetArgument(f_41, 0);
              h_41 = ATgetArgument(f_41, 1);
              d_40 :
              if(match_cons(h_41, sym_TCons_2))
                {
                  i_41 = ATgetArgument(h_41, 0);
                  j_41 = ATgetArgument(h_41, 1);
                  i_40 :
                  if(match_cons(j_41, sym_TNil_0))
                    {
                      j_40 :
                      if(match_cons(k_41, sym_TNil_0))
                        {
                          ATerm o_41 = NULL;
                          t = not_null(x_40);
                          {
                            ATerm u_1 (ATerm t)
                            {
                              ATerm v_1 (ATerm t)
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = not_null(g_41);
                                  return(t);
                                }
                                ATerm x_1 (ATerm t)
                                {
                                  t = not_null(i_41);
                                  return(t);
                                }
                                t = MatchCons_2(t, w_1, x_1);
                                return(t);
                              }
                              t = ConsTransition_1(t, v_1);
                              return(t);
                            }
                            t = filter_1(t, u_1);
                            o_41 = t;
                            t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(g_41), not_null(i_41), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(o_41)));
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
ATerm RZip2_0 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL;
  x_41 = t;
  t_41 :
  if(match_cons(x_41, sym_TCons_2))
    {
      y_41 = ATgetArgument(x_41, 0);
      z_41 = ATgetArgument(x_41, 1);
      u_41 :
      if(match_cons(z_41, sym_TCons_2))
        {
          a_42 = ATgetArgument(z_41, 0);
          d_42 = ATgetArgument(z_41, 1);
          v_41 :
          if(match_cons(a_42, sym_Cons_2))
            {
              b_42 = ATgetArgument(a_42, 0);
              c_42 = ATgetArgument(a_42, 1);
              w_41 :
              if(match_cons(d_42, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(y_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_42), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(y_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_42), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
  n_42 = t;
  j_42 :
  if(match_cons(n_42, sym_TCons_2))
    {
      o_42 = ATgetArgument(n_42, 0);
      p_42 = ATgetArgument(n_42, 1);
      k_42 :
      if(match_cons(p_42, sym_TCons_2))
        {
          q_42 = ATgetArgument(p_42, 0);
          r_42 = ATgetArgument(p_42, 1);
          l_42 :
          if(match_cons(q_42, sym_Nil_0))
            {
              m_42 :
              if(match_cons(r_42, sym_TNil_0))
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
  return(t);
}
ATerm rzip_1 (ATerm t, ATerm z_77 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, z_77);
  return(t);
}
ATerm transitions_0 (ATerm t)
{
  t = rzip_1(t, Transition_0);
  return(t);
}
ATerm Uniq_0 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL;
  b_43 = t;
  a_43 :
  if(match_cons(b_43, sym_Cons_2))
    {
      c_43 = ATgetArgument(b_43, 0);
      d_43 = ATgetArgument(b_43, 1);
      {
        ATerm h_43 = NULL;
        t = not_null(d_43);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm m_11 = t;
            if(PushChoice()==0)
              {
                ATerm g_43 = NULL;
                g_43 = t;
                if(c_43 != NULL && c_43 != g_43)
                  _fail(g_43);
                else
                  c_43 = g_43;
                PopChoice();
                _fail(t);
              }
            else
              t = m_11;
            return(t);
          }
          t = filter_1(t, y_1);
          h_43 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_43), not_null(h_43));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm c_80 (ATerm))
{
  ATerm r_43 (ATerm t)
  {
    t = c_80(t);
    {
      ATerm n_11 = t;
      if(PushChoice()==0)
        {
          t = Nil_0(t);
          PopChoice();
        }
      else
        {
          t = n_11;
          t = Cons_2(t, _id, r_43);
        }
    }
    return(t);
  }
  t = r_43(t);
  return(t);
}
ATerm uniq_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    t = try_1(t, Uniq_0);
    return(t);
  }
  t = listtd_1(t, z_1);
  return(t);
}
ATerm offsets_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL;
    z_43 = t;
    x_43 :
    if(match_cons(z_43, sym_As_2))
      {
        a_44 = ATgetArgument(z_43, 0);
        c_44 = ATgetArgument(z_43, 1);
        y_43 :
        if(match_cons(a_44, sym_Off_1))
          {
            b_44 = ATgetArgument(a_44, 0);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_44));
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = map_1(t, a_2);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, b_2, add_0, c_2);
  return(t);
}
ATerm ConsArgs_0 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL;
  s_44 = t;
  m_44 :
  if(match_cons(s_44, sym_Row_3))
    {
      t_44 = ATgetArgument(s_44, 0);
      z_44 = ATgetArgument(s_44, 1);
      a_45 = ATgetArgument(s_44, 2);
      o_44 :
      if(match_cons(t_44, sym_Cons_2))
        {
          u_44 = ATgetArgument(t_44, 0);
          y_44 = ATgetArgument(t_44, 1);
          p_44 :
          if(match_cons(u_44, sym_As_2))
            {
              v_44 = ATgetArgument(u_44, 0);
              w_44 = ATgetArgument(u_44, 1);
              q_44 :
              if(match_cons(w_44, sym_Op_2))
                {
                  x_44 = ATgetArgument(w_44, 0);
                  r_44 = ATgetArgument(w_44, 1);
                  {
                    ATerm e_45 = NULL,g_45 = NULL;
                    ATerm o_11;
                    o_11 = t;
                    {
                      ATerm f_45 = NULL;
                      t = not_null(r_44);
                      t = length_0(t);
                      f_45 = t;
                      if(e_45 != NULL && e_45 != f_45)
                        _fail(f_45);
                      else
                        e_45 = f_45;
                    }
                    t = o_11;
                    {
                      ATerm h_45 = NULL;
                      t = not_null(r_44);
                      t = offsets_0(t);
                      h_45 = t;
                      if(g_45 != NULL && g_45 != h_45)
                        _fail(h_45);
                      else
                        g_45 = h_45;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Fun_2, not_null(x_44), not_null(e_45)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_45), (ATerm) ATmakeAppl(sym_TNil_0)));
                    }
                  }
                }
              else
                {
                  if(match_cons(w_44, sym_Int_1))
                    {
                      x_44 = ATgetArgument(w_44, 0);
                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Int_1, not_null(x_44)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                    }
                  else
                    {
                      if(match_cons(w_44, sym_Real_1))
                        {
                          x_44 = ATgetArgument(w_44, 0);
                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Real_1, not_null(x_44)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                        }
                      else
                        {
                          if(match_cons(w_44, sym_Str_1))
                            {
                              x_44 = ATgetArgument(w_44, 0);
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Str_1, not_null(x_44)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                            }
                          else
                            _fail(t);
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
ATerm filter_1 (ATerm t, ATerm o_73 (ATerm))
{
  ATerm p_11 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = p_11;
      {
        ATerm q_11 = t;
        if(PushChoice()==0)
          {
            ATerm d_2 (ATerm t)
            {
              t = filter_1(t, o_73);
              return(t);
            }
            t = Cons_2(t, o_73, d_2);
            PopChoice();
          }
        else
          {
            t = q_11;
            {
              ATerm u_45 = NULL,s_46 = NULL,t_46 = NULL;
              u_45 = t;
              t_45 :
              if(match_cons(u_45, sym_Cons_2))
                {
                  s_46 = ATgetArgument(u_45, 0);
                  t_46 = ATgetArgument(u_45, 1);
                  t = not_null(t_46);
                  t = filter_1(t, o_73);
                }
              else
                _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm outedges_0 (ATerm t)
{
  t = filter_1(t, ConsArgs_0);
  t = uniq_0(t);
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  ATerm r_11 = t;
  if(PushChoice()==0)
    {
      ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL;
      x_47 = t;
      r_47 :
      if(match_cons(x_47, sym_Cons_2))
        {
          y_47 = ATgetArgument(x_47, 0);
          h_48 = ATgetArgument(x_47, 1);
          s_47 :
          if(match_cons(y_47, sym_Row_3))
            {
              z_47 = ATgetArgument(y_47, 0);
              f_48 = ATgetArgument(y_47, 1);
              g_48 = ATgetArgument(y_47, 2);
              t_47 :
              if(match_cons(z_47, sym_Cons_2))
                {
                  a_48 = ATgetArgument(z_47, 0);
                  e_48 = ATgetArgument(z_47, 1);
                  u_47 :
                  if(match_cons(a_48, sym_As_2))
                    {
                      b_48 = ATgetArgument(a_48, 0);
                      d_48 = ATgetArgument(a_48, 1);
                      v_47 :
                      if(match_cons(b_48, sym_Off_1))
                        {
                          c_48 = ATgetArgument(b_48, 0);
                          t = not_null(c_48);
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
      PopChoice();
    }
  else
    {
      t = r_11;
      t = explode_string_0(t);
      {
        ATerm s_11 = t;
        if(PushChoice()==0)
          {
            ATerm l_48 (ATerm t)
            {
              ATerm t_11 = t;
              if(PushChoice()==0)
                {
                  t = Cons_2(t, _id, l_48);
                  PopChoice();
                }
              else
                {
                  t = t_11;
                  {
                    ATerm e_2 (ATerm t)
                    {
                      ATerm j_48 = NULL;
                      j_48 = t;
                      w_47 :
                      if(!(match_int(j_48, 47)))
                        _fail(t);
                      return(t);
                    }
                    ATerm f_2 (ATerm t)
                    {
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                      return(t);
                    }
                    t = Cons_2(t, e_2, f_2);
                  }
                }
              return(t);
            }
            t = l_48(t);
            PopChoice();
          }
        else
          {
            t = s_11;
            t = (ATerm) ATmakeAppl(sym_Nil_0);
          }
        t = implode_string_0(t);
      }
    }
  return(t);
}
ATerm Mixture_0 (ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL;
  t_48 = t;
  s_48 :
  if(match_cons(t_48, sym_Matrix_1))
    {
      u_48 = ATgetArgument(t_48, 0);
      {
        ATerm w_48 = NULL;
        t = not_null(u_48);
        {
          ATerm y_48 = NULL;
          t = get_path_0(t);
          w_48 = t;
          t = not_null(u_48);
          {
            ATerm a_49 = NULL;
            t = outedges_0(t);
            y_48 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_48), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_48), (ATerm) ATmakeAppl(sym_TNil_0)));
            {
              ATerm c_49 = NULL;
              t = transitions_0(t);
              a_49 = t;
              t = not_null(u_48);
              {
                ATerm e_49 = NULL;
                t = default_state_0(t);
                c_49 = t;
                t = new_0(t);
                e_49 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(u_48)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue)), not_null(e_49)), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm g_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
                    return(t);
                  }
                  t = assert_1(t, g_2);
                }
                t = (ATerm) ATmakeAppl(sym_Case_4, not_null(e_49), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_48)), not_null(a_49), not_null(c_49));
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
ATerm ShiftColumnRow_0 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL;
  p_49 = t;
  n_49 :
  if(match_cons(p_49, sym_Row_3))
    {
      q_49 = ATgetArgument(p_49, 0);
      r_49 = ATgetArgument(p_49, 1);
      u_49 = ATgetArgument(p_49, 2);
      o_49 :
      if(match_cons(r_49, sym_Cons_2))
        {
          s_49 = ATgetArgument(r_49, 0);
          t_49 = ATgetArgument(r_49, 1);
          t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_49), not_null(q_49)), not_null(t_49), not_null(u_49));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ShiftColumn_0 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL;
  d_50 = t;
  c_50 :
  if(match_cons(d_50, sym_Matrix_1))
    {
      e_50 = ATgetArgument(d_50, 0);
      {
        ATerm g_50 = NULL;
        t = not_null(e_50);
        {
          ATerm u_11 = t;
          if(PushChoice()==0)
            {
              ATerm h_2 (ATerm t)
              {
                ATerm i_2 (ATerm t)
                {
                  ATerm j_2 (ATerm t)
                  {
                    ATerm k_2 (ATerm t)
                    {
                      ATerm v_11 = t;
                      if(PushChoice()==0)
                        {
                          t = Wld_0(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        t = v_11;
                      return(t);
                    }
                    t = As_2(t, _id, k_2);
                    return(t);
                  }
                  t = Cons_2(t, j_2, _id);
                  return(t);
                }
                t = Row_3(t, i_2, _id, _id);
                return(t);
              }
              t = map_1(t, h_2);
              PopChoice();
              _fail(t);
            }
          else
            t = u_11;
          t = not_null(e_50);
          t = map_1(t, ShiftColumnRow_0);
          g_50 = t;
          t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(g_50));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm p_50 = NULL;
  p_50 = t;
  o_50 :
  if(!(match_cons(p_50, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm As_2 (ATerm t, ATerm f_60 (ATerm), ATerm g_60 (ATerm))
{
  ATerm i_51 = NULL,j_51 = NULL,g_53 = NULL;
  i_51 = t;
  h_51 :
  if(match_cons(i_51, sym_As_2))
    {
      j_51 = ATgetArgument(i_51, 0);
      g_53 = ATgetArgument(i_51, 1);
      {
        ATerm j_53 = NULL;
        t = not_null(j_51);
        {
          ATerm l_53 = NULL;
          t = f_60(t);
          j_53 = t;
          t = not_null(g_53);
          t = g_60(t);
          l_53 = t;
          t = (ATerm) ATmakeAppl(sym_As_2, not_null(j_53), not_null(l_53));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Row_3 (ATerm t, ATerm u_58 (ATerm), ATerm v_58 (ATerm), ATerm w_58 (ATerm))
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL;
  v_53 = t;
  u_53 :
  if(match_cons(v_53, sym_Row_3))
    {
      w_53 = ATgetArgument(v_53, 0);
      x_53 = ATgetArgument(v_53, 1);
      y_53 = ATgetArgument(v_53, 2);
      {
        ATerm c_54 = NULL;
        t = not_null(w_53);
        {
          ATerm e_54 = NULL;
          t = u_58(t);
          c_54 = t;
          t = not_null(x_53);
          {
            ATerm g_54 = NULL;
            t = v_58(t);
            e_54 = t;
            t = not_null(y_53);
            t = w_58(t);
            g_54 = t;
            t = (ATerm) ATmakeAppl(sym_Row_3, not_null(c_54), not_null(e_54), not_null(g_54));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SkipWild_0 (ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL;
  p_54 = t;
  o_54 :
  if(match_cons(p_54, sym_Matrix_1))
    {
      q_54 = ATgetArgument(p_54, 0);
      {
        ATerm s_54 = NULL;
        t = not_null(q_54);
        {
          ATerm l_2 (ATerm t)
          {
            ATerm m_2 (ATerm t)
            {
              ATerm n_2 (ATerm t)
              {
                t = As_2(t, _id, Wld_0);
                return(t);
              }
              t = Cons_2(t, n_2, _id);
              t = Tl_0(t);
              return(t);
            }
            t = Row_3(t, _id, m_2, _id);
            return(t);
          }
          t = map_1(t, l_2);
          s_54 = t;
          t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(s_54));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatrixRowsEmpty_0 (ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL;
  d_55 = t;
  c_55 :
  if(match_cons(d_55, sym_Matrix_1))
    {
      e_55 = ATgetArgument(d_55, 0);
      {
        ATerm l_55 = NULL;
        t = not_null(e_55);
        {
          ATerm o_2 (ATerm t)
          {
            ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL;
            g_55 = t;
            y_54 :
            if(match_cons(g_55, sym_Row_3))
              {
                h_55 = ATgetArgument(g_55, 0);
                i_55 = ATgetArgument(g_55, 1);
                j_55 = ATgetArgument(g_55, 2);
                z_54 :
                if(match_cons(h_55, sym_Nil_0))
                  {
                    a_55 :
                    if(match_cons(i_55, sym_Nil_0))
                      t = not_null(j_55);
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
          t = map_1(t, o_2);
          l_55 = t;
          t = (ATerm) ATmakeAppl(sym_LChoices_1, not_null(l_55));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm reduce_matrix_0 (ATerm t)
{
  ATerm w_11 = t;
  if(PushChoice()==0)
    {
      t = MatrixRowsEmpty_0(t);
      PopChoice();
    }
  else
    {
      t = w_11;
      {
        ATerm z_11 = t;
        if(PushChoice()==0)
          {
            t = SkipWild_0(t);
            PopChoice();
          }
        else
          {
            t = z_11;
            {
              ATerm a_12 = t;
              if(PushChoice()==0)
                {
                  t = ShiftColumn_0(t);
                  PopChoice();
                }
              else
                {
                  t = a_12;
                  t = Mixture_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL;
  s_55 = t;
  r_55 :
  if(match_cons(s_55, sym_Cons_2))
    {
      t_55 = ATgetArgument(s_55, 0);
      u_55 = ATgetArgument(s_55, 1);
      t = not_null(u_55);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
  d_56 = t;
  a_56 :
  if(match_cons(d_56, sym_TCons_2))
    {
      e_56 = ATgetArgument(d_56, 0);
      f_56 = ATgetArgument(d_56, 1);
      b_56 :
      if(match_cons(f_56, sym_TCons_2))
        {
          g_56 = ATgetArgument(f_56, 0);
          h_56 = ATgetArgument(f_56, 1);
          c_56 :
          if(match_cons(h_56, sym_TNil_0))
            {
              ATerm b_12;
              b_12 = t;
              {
                ATerm k_56 = NULL;
                ATerm l_56 = NULL;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_56), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_56), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm c_12 = t;
                  if(PushChoice()==0)
                    {
                      t = table_get_0(t);
                      t = Tl_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = c_12;
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                    }
                  l_56 = t;
                  if(k_56 != NULL && k_56 != l_56)
                    _fail(l_56);
                  else
                    k_56 = l_56;
                }
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_56), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_56), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_56), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_put_0(t);
              }
              t = b_12;
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
ATerm end_scope_1 (ATerm t, ATerm w_63 (ATerm))
{
  ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL;
  ATerm d_12;
  d_12 = t;
  {
    ATerm v_56 = NULL;
    ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
    t = w_63(t);
    v_56 = t;
    if(t_56 != NULL && t_56 != v_56)
      _fail(v_56);
    else
      t_56 = v_56;
    {
      ATerm e_12 = t;
      if(PushChoice()==0)
        {
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = table_get_0(t);
          PopChoice();
        }
      else
        {
          t = e_12;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
        }
      w_56 = t;
      r_56 :
      if(match_cons(w_56, sym_Cons_2))
        {
          x_56 = ATgetArgument(w_56, 0);
          y_56 = ATgetArgument(w_56, 1);
          if(u_56 != NULL && u_56 != x_56)
            _fail(x_56);
          else
            u_56 = x_56;
          if(s_56 != NULL && s_56 != y_56)
            _fail(y_56);
          else
            s_56 = y_56;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_56), (ATerm) ATmakeAppl(sym_TNil_0))));
          t = table_put_0(t);
          t = not_null(u_56);
          {
            ATerm p_2 (ATerm t)
            {
              ATerm z_56 = NULL;
              z_56 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_56), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_56), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = table_pop_0(t);
              return(t);
            }
            t = map_1(t, p_2);
          }
        }
      else
        _fail(t);
    }
  }
  t = d_12;
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm v_63 (ATerm))
{
  ATerm g_57 = NULL;
  ATerm f_12;
  f_12 = t;
  {
    ATerm h_57 = NULL;
    ATerm i_57 = NULL;
    t = v_63(t);
    h_57 = t;
    if(g_57 != NULL && g_57 != h_57)
      _fail(h_57);
    else
      g_57 = h_57;
    {
      ATerm j_57 = NULL;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_57), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
      {
        ATerm g_12 = t;
        if(PushChoice()==0)
          {
            t = table_get_0(t);
            PopChoice();
          }
        else
          {
            t = g_12;
            t = (ATerm) ATmakeAppl(sym_Nil_0);
          }
        j_57 = t;
        if(i_57 != NULL && i_57 != j_57)
          _fail(j_57);
        else
          i_57 = j_57;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_57), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(i_57)), (ATerm) ATmakeAppl(sym_TNil_0))));
      t = table_put_0(t);
    }
  }
  t = f_12;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm x_63 (ATerm), ATerm y_63 (ATerm))
{
  t = begin_scope_1(t, x_63);
  {
    ATerm h_12 = t;
    if(PushChoice()==0)
      {
        t = y_63(t);
        t = end_scope_1(t, x_63);
        PopChoice();
      }
    else
      {
        t = h_12;
        t = end_scope_1(t, x_63);
        _fail(t);
      }
  }
  return(t);
}
ATerm matrix_to_dfa_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm s_2 (ATerm t)
    {
      ATerm i_12 = t;
      if(PushChoice()==0)
        {
          t = reduce_matrix_0(t);
          PopChoice();
        }
      else
        {
          t = i_12;
          {
            ATerm j_12 = t;
            if(PushChoice()==0)
              {
                t = MatrixScope_0(t);
                PopChoice();
              }
            else
              {
                t = j_12;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, s_2);
    t = _all(t, r_2);
    return(t);
  }
  t = scope_2(t, q_2, r_2);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL;
  t_57 = t;
  o_57 :
  if(match_cons(t_57, sym_TCons_2))
    {
      u_57 = ATgetArgument(t_57, 0);
      v_57 = ATgetArgument(t_57, 1);
      p_57 :
      if(match_cons(v_57, sym_TCons_2))
        {
          w_57 = ATgetArgument(v_57, 0);
          x_57 = ATgetArgument(v_57, 1);
          q_57 :
          if(match_cons(x_57, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_57), not_null(w_57));
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
  ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL;
  h_58 = t;
  c_58 :
  if(match_cons(h_58, sym_TCons_2))
    {
      i_58 = ATgetArgument(h_58, 0);
      l_58 = ATgetArgument(h_58, 1);
      d_58 :
      if(match_cons(i_58, sym_Cons_2))
        {
          j_58 = ATgetArgument(i_58, 0);
          k_58 = ATgetArgument(i_58, 1);
          e_58 :
          if(match_cons(l_58, sym_TCons_2))
            {
              m_58 = ATgetArgument(l_58, 0);
              p_58 = ATgetArgument(l_58, 1);
              f_58 :
              if(match_cons(m_58, sym_Cons_2))
                {
                  n_58 = ATgetArgument(m_58, 0);
                  o_58 = ATgetArgument(m_58, 1);
                  g_58 :
                  if(match_cons(p_58, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(j_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_58), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(k_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_58), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL;
  f_59 = t;
  z_58 :
  if(match_cons(f_59, sym_TCons_2))
    {
      g_59 = ATgetArgument(f_59, 0);
      h_59 = ATgetArgument(f_59, 1);
      a_59 :
      if(match_cons(g_59, sym_Nil_0))
        {
          c_59 :
          if(match_cons(h_59, sym_TCons_2))
            {
              i_59 = ATgetArgument(h_59, 0);
              j_59 = ATgetArgument(h_59, 1);
              d_59 :
              if(match_cons(i_59, sym_Nil_0))
                {
                  e_59 :
                  if(match_cons(j_59, sym_TNil_0))
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
ATerm zip_1 (ATerm t, ATerm p_77 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, p_77);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL,h_60 = NULL;
  d_60 = t;
  c_60 :
  if(match_cons(d_60, sym_Cong_2))
    {
      e_60 = ATgetArgument(d_60, 0);
      h_60 = ATgetArgument(d_60, 1);
      {
        ATerm k_60 = NULL;
        t = not_null(h_60);
        {
          ATerm o_60 = NULL;
          t = map_1(t, new_0);
          k_60 = t;
          {
            ATerm q_60 = NULL;
            ATerm t_2 (ATerm t)
            {
              ATerm m_60 = NULL;
              m_60 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_60));
              return(t);
            }
            t = map_1(t, t_2);
            o_60 = t;
            t = not_null(h_60);
            {
              ATerm v_60 = NULL;
              t = map_1(t, new_0);
              q_60 = t;
              {
                ATerm x_60 = NULL,n_61 = NULL;
                ATerm u_2 (ATerm t)
                {
                  ATerm s_60 = NULL;
                  s_60 = t;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_60));
                  return(t);
                }
                t = map_1(t, u_2);
                v_60 = t;
                {
                  ATerm y_60 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_60), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_60), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = zip_1(t, _id);
                  y_60 = t;
                  if(x_60 != NULL && x_60 != y_60)
                    _fail(y_60);
                  else
                    x_60 = y_60;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_60), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_60), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm q_61 = NULL;
                    ATerm v_2 (ATerm t)
                    {
                      ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,e_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL;
                      z_60 = t;
                      u_59 :
                      if(match_cons(z_60, sym_TCons_2))
                        {
                          a_61 = ATgetArgument(z_60, 0);
                          h_61 = ATgetArgument(z_60, 1);
                          v_59 :
                          if(match_cons(a_61, sym_TCons_2))
                            {
                              b_61 = ATgetArgument(a_61, 0);
                              c_61 = ATgetArgument(a_61, 1);
                              w_59 :
                              if(match_cons(c_61, sym_TCons_2))
                                {
                                  e_61 = ATgetArgument(c_61, 0);
                                  g_61 = ATgetArgument(c_61, 1);
                                  x_59 :
                                  if(match_cons(g_61, sym_TNil_0))
                                    {
                                      y_59 :
                                      if(match_cons(h_61, sym_TCons_2))
                                        {
                                          i_61 = ATgetArgument(h_61, 0);
                                          j_61 = ATgetArgument(h_61, 1);
                                          z_59 :
                                          if(match_cons(j_61, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_61))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_61), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_61)))));
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
                    t = zip_1(t, v_2);
                    n_61 = t;
                    {
                      ATerm r_61 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_60), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_60), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = conc_0(t);
                      r_61 = t;
                      if(q_61 != NULL && q_61 != r_61)
                        _fail(r_61);
                      else
                        q_61 = r_61;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(q_61), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(e_60), not_null(o_60))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(n_61)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(e_60), not_null(v_60))))));
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
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm v_62 = NULL,w_62 = NULL,x_62 = NULL;
  v_62 = t;
  u_62 :
  if(match_cons(v_62, sym_Cong_2))
    {
      w_62 = ATgetArgument(v_62, 0);
      x_62 = ATgetArgument(v_62, 1);
      {
        ATerm d_63 = NULL;
        t = not_null(x_62);
        {
          ATerm w_2 (ATerm t)
          {
            ATerm a_63 = NULL,b_63 = NULL;
            b_63 = t;
            q_62 :
            if(match_cons(b_63, sym_Match_1))
              {
                a_63 = ATgetArgument(b_63, 0);
                t = not_null(a_63);
              }
            else
              {
                if(match_cons(b_63, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, w_2);
          d_63 = t;
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(w_62), not_null(d_63)));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm a_64 = NULL,b_64 = NULL,f_64 = NULL;
  a_64 = t;
  t_63 :
  if(match_cons(a_64, sym_Scope_2))
    {
      b_64 = ATgetArgument(a_64, 0);
      f_64 = ATgetArgument(a_64, 1);
      u_63 :
      if(match_cons(b_64, sym_Nil_0))
        t = not_null(f_64);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL;
  w_64 = t;
  o_64 :
  if(match_cons(w_64, sym_Choice_2))
    {
      x_64 = ATgetArgument(w_64, 0);
      v_64 = ATgetArgument(w_64, 1);
      if(x_64 != NULL && x_64 != v_64)
        _fail(v_64);
      else
        x_64 = v_64;
      t = not_null(x_64);
    }
  else
    {
      if(match_cons(w_64, sym_LChoice_2))
        {
          x_64 = ATgetArgument(w_64, 0);
          v_64 = ATgetArgument(w_64, 1);
          if(x_64 != NULL && x_64 != v_64)
            _fail(v_64);
          else
            x_64 = v_64;
          t = not_null(x_64);
        }
      else
        {
          if(match_cons(w_64, sym_Where_1))
            {
              x_64 = ATgetArgument(w_64, 0);
              p_64 :
              if(match_cons(x_64, sym_Where_1))
                {
                  y_64 = ATgetArgument(x_64, 0);
                  t = (ATerm) ATmakeAppl(sym_Where_1, not_null(y_64));
                }
              else
                {
                  if(match_cons(x_64, sym_Seq_2))
                    {
                      y_64 = ATgetArgument(x_64, 0);
                      a_65 = ATgetArgument(x_64, 1);
                      q_64 :
                      if(match_cons(y_64, sym_Where_1))
                        {
                          z_64 = ATgetArgument(y_64, 0);
                          r_64 :
                          if(match_cons(a_65, sym_Seq_2))
                            {
                              b_65 = ATgetArgument(a_65, 0);
                              d_65 = ATgetArgument(a_65, 1);
                              s_64 :
                              if(match_cons(b_65, sym_Build_1))
                                {
                                  c_65 = ATgetArgument(b_65, 0);
                                  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_64), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_65)), not_null(d_65))));
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
          else
            {
              if(match_cons(w_64, sym_Not_1))
                {
                  x_64 = ATgetArgument(w_64, 0);
                  t_64 :
                  if(match_cons(x_64, sym_Not_1))
                    {
                      y_64 = ATgetArgument(x_64, 0);
                      t = (ATerm) ATmakeAppl(sym_Test_1, not_null(y_64));
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(w_64, sym_Test_1))
                    {
                      x_64 = ATgetArgument(w_64, 0);
                      u_64 :
                      if(match_cons(x_64, sym_Test_1))
                        {
                          y_64 = ATgetArgument(x_64, 0);
                          t = (ATerm) ATmakeAppl(sym_Test_1, not_null(y_64));
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
  return(t);
}
ATerm AssociateR_0 (ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL;
  f_66 = t;
  b_66 :
  if(match_cons(f_66, sym_Choice_2))
    {
      g_66 = ATgetArgument(f_66, 0);
      j_66 = ATgetArgument(f_66, 1);
      c_66 :
      if(match_cons(g_66, sym_Choice_2))
        {
          h_66 = ATgetArgument(g_66, 0);
          i_66 = ATgetArgument(g_66, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_66), (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_66), not_null(j_66)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(f_66, sym_Seq_2))
        {
          g_66 = ATgetArgument(f_66, 0);
          j_66 = ATgetArgument(f_66, 1);
          d_66 :
          if(match_cons(g_66, sym_Seq_2))
            {
              h_66 = ATgetArgument(g_66, 0);
              i_66 = ATgetArgument(g_66, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_66), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_66), not_null(j_66)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(f_66, sym_LChoice_2))
            {
              g_66 = ATgetArgument(f_66, 0);
              j_66 = ATgetArgument(f_66, 1);
              e_66 :
              if(match_cons(g_66, sym_LChoice_2))
                {
                  h_66 = ATgetArgument(g_66, 0);
                  i_66 = ATgetArgument(g_66, 1);
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_66), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(i_66), not_null(j_66)));
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
ATerm HL_0 (ATerm t)
{
  ATerm v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL;
  x_67 = t;
  r_67 :
  if(match_cons(x_67, sym_Seqs_1))
    {
      y_67 = ATgetArgument(x_67, 0);
      s_67 :
      if(match_cons(y_67, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(y_67, sym_Cons_2))
            {
              v_67 = ATgetArgument(y_67, 0);
              w_67 = ATgetArgument(y_67, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_67), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(w_67)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(x_67, sym_Choices_1))
        {
          y_67 = ATgetArgument(x_67, 0);
          t_67 :
          if(match_cons(y_67, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(y_67, sym_Cons_2))
                {
                  v_67 = ATgetArgument(y_67, 0);
                  w_67 = ATgetArgument(y_67, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(v_67), (ATerm) ATmakeAppl(sym_Choices_1, not_null(w_67)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(x_67, sym_LChoices_1))
            {
              y_67 = ATgetArgument(x_67, 0);
              u_67 :
              if(match_cons(y_67, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(y_67, sym_Cons_2))
                    {
                      v_67 = ATgetArgument(y_67, 0);
                      w_67 = ATgetArgument(y_67, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(v_67), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(w_67)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(x_67, sym_Lets_2))
                {
                  y_67 = ATgetArgument(x_67, 0);
                  z_67 = ATgetArgument(x_67, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(y_67), not_null(z_67));
                }
              else
                {
                  if(match_cons(x_67, sym_BA_2))
                    {
                      y_67 = ATgetArgument(x_67, 0);
                      z_67 = ATgetArgument(x_67, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_67)), not_null(y_67));
                    }
                  else
                    {
                      if(match_cons(x_67, sym_MA_2))
                        {
                          y_67 = ATgetArgument(x_67, 0);
                          z_67 = ATgetArgument(x_67, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(y_67)), not_null(z_67));
                        }
                      else
                        {
                          if(match_cons(x_67, sym_AM_2))
                            {
                              y_67 = ATgetArgument(x_67, 0);
                              z_67 = ATgetArgument(x_67, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_67), (ATerm) ATmakeAppl(sym_Match_1, not_null(z_67)));
                            }
                          else
                            {
                              if(match_cons(x_67, sym_BAM_3))
                                {
                                  y_67 = ATgetArgument(x_67, 0);
                                  z_67 = ATgetArgument(x_67, 1);
                                  a_68 = ATgetArgument(x_67, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_67)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_67), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_68)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(x_67, sym_InfixApp_3))
                                    {
                                      y_67 = ATgetArgument(x_67, 0);
                                      z_67 = ATgetArgument(x_67, 1);
                                      a_68 = ATgetArgument(x_67, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(z_67), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_67), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_68), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
ATerm F15_0 (ATerm t)
{
  ATerm o_69 = NULL,p_69 = NULL;
  o_69 = t;
  m_69 :
  if(match_cons(o_69, sym_Where_1))
    {
      p_69 = ATgetArgument(o_69, 0);
      n_69 :
      if(match_cons(p_69, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F14_0 (ATerm t)
{
  ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL;
  u_69 = t;
  s_69 :
  if(match_cons(u_69, sym_LChoice_2))
    {
      v_69 = ATgetArgument(u_69, 0);
      w_69 = ATgetArgument(u_69, 1);
      t_69 :
      if(match_cons(w_69, sym_Fail_0))
        t = not_null(v_69);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL;
  i_70 = t;
  g_70 :
  if(match_cons(i_70, sym_LChoice_2))
    {
      j_70 = ATgetArgument(i_70, 0);
      k_70 = ATgetArgument(i_70, 1);
      h_70 :
      if(match_cons(j_70, sym_Fail_0))
        t = not_null(k_70);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm q_70 = NULL,s_70 = NULL,t_70 = NULL;
  q_70 = t;
  o_70 :
  if(match_cons(q_70, sym_Choice_2))
    {
      s_70 = ATgetArgument(q_70, 0);
      t_70 = ATgetArgument(q_70, 1);
      p_70 :
      if(match_cons(t_70, sym_Fail_0))
        t = not_null(s_70);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm z_70 = NULL,a_71 = NULL,b_71 = NULL;
  z_70 = t;
  x_70 :
  if(match_cons(z_70, sym_Choice_2))
    {
      a_71 = ATgetArgument(z_70, 0);
      b_71 = ATgetArgument(z_70, 1);
      y_70 :
      if(match_cons(a_71, sym_Fail_0))
        t = not_null(b_71);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm h_71 = NULL,m_71 = NULL,n_71 = NULL;
  h_71 = t;
  g_71 :
  if(match_cons(h_71, sym_Cong_2))
    {
      m_71 = ATgetArgument(h_71, 0);
      n_71 = ATgetArgument(h_71, 1);
      t = not_null(n_71);
      {
        ATerm x_2 (ATerm t)
        {
          ATerm q_71 = NULL;
          q_71 = t;
          f_71 :
          if(!(match_cons(q_71, sym_Fail_0)))
            _fail(t);
          return(t);
        }
        t = fetch_1(t, x_2);
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL;
  v_71 = t;
  t_71 :
  if(match_cons(v_71, sym_Path_2))
    {
      w_71 = ATgetArgument(v_71, 0);
      x_71 = ATgetArgument(v_71, 1);
      u_71 :
      if(match_cons(x_71, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F8_0 (ATerm t)
{
  ATerm e_72 = NULL,f_72 = NULL;
  e_72 = t;
  b_72 :
  if(match_cons(e_72, sym_One_1))
    {
      f_72 = ATgetArgument(e_72, 0);
      c_72 :
      if(match_cons(f_72, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F7_0 (ATerm t)
{
  ATerm m_72 = NULL,n_72 = NULL;
  m_72 = t;
  k_72 :
  if(match_cons(m_72, sym_Some_1))
    {
      n_72 = ATgetArgument(m_72, 0);
      l_72 :
      if(match_cons(n_72, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F6_0 (ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL;
  s_72 = t;
  q_72 :
  if(match_cons(s_72, sym_Rec_2))
    {
      t_72 = ATgetArgument(s_72, 0);
      u_72 = ATgetArgument(s_72, 1);
      r_72 :
      if(match_cons(u_72, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F5_0 (ATerm t)
{
  ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL;
  d_73 = t;
  z_72 :
  if(match_cons(d_73, sym_Scope_2))
    {
      e_73 = ATgetArgument(d_73, 0);
      f_73 = ATgetArgument(d_73, 1);
      a_73 :
      if(match_cons(f_73, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F3_0 (ATerm t)
{
  ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL;
  t_73 = t;
  r_73 :
  if(match_cons(t_73, sym_Seq_2))
    {
      u_73 = ATgetArgument(t_73, 0);
      v_73 = ATgetArgument(t_73, 1);
      s_73 :
      if(match_cons(u_73, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F2_0 (ATerm t)
{
  ATerm b_74 = NULL,c_74 = NULL;
  b_74 = t;
  z_73 :
  if(match_cons(b_74, sym_Not_1))
    {
      c_74 = ATgetArgument(b_74, 0);
      a_74 :
      if(match_cons(c_74, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F1_0 (ATerm t)
{
  ATerm m_74 = NULL,n_74 = NULL;
  m_74 = t;
  f_74 :
  if(match_cons(m_74, sym_Test_1))
    {
      n_74 = ATgetArgument(m_74, 0);
      l_74 :
      if(match_cons(n_74, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ElimFail_0 (ATerm t)
{
  ATerm k_12 = t;
  if(PushChoice()==0)
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = k_12;
      {
        ATerm l_12 = t;
        if(PushChoice()==0)
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = l_12;
            {
              ATerm m_12 = t;
              if(PushChoice()==0)
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = m_12;
                  {
                    ATerm n_12 = t;
                    if(PushChoice()==0)
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = n_12;
                        {
                          ATerm o_12 = t;
                          if(PushChoice()==0)
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = o_12;
                              {
                                ATerm p_12 = t;
                                if(PushChoice()==0)
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = p_12;
                                    {
                                      ATerm q_12 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = q_12;
                                          {
                                            ATerm r_12 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = r_12;
                                                {
                                                  ATerm s_12 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = s_12;
                                                      {
                                                        ATerm t_12 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = t_12;
                                                            {
                                                              ATerm u_12 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = u_12;
                                                                  {
                                                                    ATerm v_12 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = v_12;
                                                                        {
                                                                          ATerm w_12 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = w_12;
                                                                              t = F15_0(t);
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
ATerm I16_0 (ATerm t)
{
  ATerm s_74 = NULL,t_74 = NULL;
  s_74 = t;
  q_74 :
  if(match_cons(s_74, sym_Match_1))
    {
      t_74 = ATgetArgument(s_74, 0);
      r_74 :
      if(match_cons(t_74, sym_Wld_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I12_0 (ATerm t)
{
  ATerm y_74 = NULL,z_74 = NULL;
  y_74 = t;
  w_74 :
  if(match_cons(y_74, sym_Where_1))
    {
      z_74 = ATgetArgument(y_74, 0);
      x_74 :
      if(match_cons(z_74, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I10_0 (ATerm t)
{
  ATerm e_75 = NULL,f_75 = NULL;
  e_75 = t;
  c_75 :
  if(match_cons(e_75, sym_All_1))
    {
      f_75 = ATgetArgument(e_75, 0);
      d_75 :
      if(match_cons(f_75, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I9_0 (ATerm t)
{
  ATerm l_75 = NULL,m_75 = NULL,o_75 = NULL;
  l_75 = t;
  j_75 :
  if(match_cons(l_75, sym_Rec_2))
    {
      m_75 = ATgetArgument(l_75, 0);
      o_75 = ATgetArgument(l_75, 1);
      k_75 :
      if(match_cons(o_75, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I8_0 (ATerm t)
{
  ATerm w_75 = NULL,x_75 = NULL,b_76 = NULL;
  w_75 = t;
  u_75 :
  if(match_cons(w_75, sym_Scope_2))
    {
      x_75 = ATgetArgument(w_75, 0);
      b_76 = ATgetArgument(w_75, 1);
      v_75 :
      if(match_cons(b_76, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I7_0 (ATerm t)
{
  ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL;
  j_76 = t;
  f_76 :
  if(match_cons(j_76, sym_LChoice_2))
    {
      k_76 = ATgetArgument(j_76, 0);
      l_76 = ATgetArgument(j_76, 1);
      g_76 :
      if(match_cons(k_76, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I4_0 (ATerm t)
{
  ATerm r_76 = NULL,s_76 = NULL,z_76 = NULL;
  r_76 = t;
  p_76 :
  if(match_cons(r_76, sym_Seq_2))
    {
      s_76 = ATgetArgument(r_76, 0);
      z_76 = ATgetArgument(r_76, 1);
      q_76 :
      if(match_cons(z_76, sym_Id_0))
        t = not_null(s_76);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL;
  f_77 = t;
  d_77 :
  if(match_cons(f_77, sym_Seq_2))
    {
      g_77 = ATgetArgument(f_77, 0);
      h_77 = ATgetArgument(f_77, 1);
      e_77 :
      if(match_cons(g_77, sym_Id_0))
        t = not_null(h_77);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm t_77 = NULL,w_77 = NULL;
  t_77 = t;
  r_77 :
  if(match_cons(t_77, sym_Not_1))
    {
      w_77 = ATgetArgument(t_77, 0);
      s_77 :
      if(match_cons(w_77, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I1_0 (ATerm t)
{
  ATerm c_78 = NULL,d_78 = NULL;
  c_78 = t;
  a_78 :
  if(match_cons(c_78, sym_Test_1))
    {
      d_78 = ATgetArgument(c_78, 0);
      b_78 :
      if(match_cons(d_78, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ElimId_0 (ATerm t)
{
  ATerm x_12 = t;
  if(PushChoice()==0)
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = x_12;
      {
        ATerm y_12 = t;
        if(PushChoice()==0)
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = y_12;
            {
              ATerm z_12 = t;
              if(PushChoice()==0)
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = z_12;
                  {
                    ATerm a_13 = t;
                    if(PushChoice()==0)
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = a_13;
                        {
                          ATerm b_13 = t;
                          if(PushChoice()==0)
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = b_13;
                              {
                                ATerm d_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = d_13;
                                    {
                                      ATerm e_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = e_13;
                                          {
                                            ATerm i_13 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = i_13;
                                                {
                                                  ATerm u_13 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = u_13;
                                                      t = I16_0(t);
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
ATerm Simplify_0 (ATerm t)
{
  ATerm v_13 = t;
  if(PushChoice()==0)
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = v_13;
      {
        ATerm w_13 = t;
        if(PushChoice()==0)
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = w_13;
            {
              ATerm a_14 = t;
              if(PushChoice()==0)
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = a_14;
                  {
                    ATerm f_14 = t;
                    if(PushChoice()==0)
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = f_14;
                        {
                          ATerm g_14 = t;
                          if(PushChoice()==0)
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = g_14;
                              {
                                ATerm h_14 = t;
                                if(PushChoice()==0)
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = h_14;
                                    {
                                      ATerm i_14 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = i_14;
                                          t = TransformingCongruence_0(t);
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
ATerm conc_0 (ATerm t)
{
  ATerm j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL;
  j_78 = t;
  g_78 :
  if(match_cons(j_78, sym_TCons_2))
    {
      k_78 = ATgetArgument(j_78, 0);
      l_78 = ATgetArgument(j_78, 1);
      h_78 :
      if(match_cons(l_78, sym_TCons_2))
        {
          m_78 = ATgetArgument(l_78, 0);
          n_78 = ATgetArgument(l_78, 1);
          i_78 :
          if(match_cons(n_78, sym_TNil_0))
            {
              t = not_null(k_78);
              {
                ATerm y_2 (ATerm t)
                {
                  t = not_null(m_78);
                  return(t);
                }
                t = at_end_1(t, y_2);
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
ATerm MatrixMerge_0 (ATerm t)
{
  ATerm n_80 = NULL,q_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL,u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL,a_81 = NULL,b_81 = NULL;
  t_80 = t;
  w_79 :
  if(match_cons(t_80, sym_Seq_2))
    {
      u_80 = ATgetArgument(t_80, 0);
      x_80 = ATgetArgument(t_80, 1);
      x_79 :
      if(match_cons(u_80, sym_Matrix_2))
        {
          v_80 = ATgetArgument(u_80, 0);
          w_80 = ATgetArgument(u_80, 1);
          y_79 :
          if(match_cons(w_80, sym_Cons_2))
            {
              n_80 = ATgetArgument(w_80, 0);
              s_80 = ATgetArgument(w_80, 1);
              z_79 :
              if(match_cons(n_80, sym_Row_2))
                {
                  q_80 = ATgetArgument(n_80, 0);
                  r_80 = ATgetArgument(n_80, 1);
                  a_80 :
                  if(match_cons(s_80, sym_Nil_0))
                    t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(v_80), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Row_2, not_null(q_80), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_80), not_null(x_80))), (ATerm) ATmakeAppl(sym_Nil_0)));
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
    {
      if(match_cons(t_80, sym_Scope_2))
        {
          u_80 = ATgetArgument(t_80, 0);
          x_80 = ATgetArgument(t_80, 1);
          b_80 :
          if(match_cons(x_80, sym_Matrix_2))
            {
              y_80 = ATgetArgument(x_80, 0);
              b_81 = ATgetArgument(x_80, 1);
              {
                ATerm k_81 = NULL;
                ATerm q_81 = NULL;
                t = not_null(b_81);
                {
                  ATerm z_2 (ATerm t)
                  {
                    ATerm l_81 = NULL,m_81 = NULL,n_81 = NULL;
                    l_81 = t;
                    e_79 :
                    if(match_cons(l_81, sym_Row_2))
                      {
                        m_81 = ATgetArgument(l_81, 0);
                        n_81 = ATgetArgument(l_81, 1);
                        t = (ATerm) ATmakeAppl(sym_Row_2, not_null(m_81), (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_80), not_null(n_81)));
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = map_1(t, z_2);
                  q_81 = t;
                  if(k_81 != NULL && k_81 != q_81)
                    _fail(q_81);
                  else
                    k_81 = q_81;
                }
                t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(y_80), not_null(k_81));
              }
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t_80, sym_Choice_2))
            {
              u_80 = ATgetArgument(t_80, 0);
              x_80 = ATgetArgument(t_80, 1);
              e_80 :
              if(match_cons(u_80, sym_Matrix_2))
                {
                  v_80 = ATgetArgument(u_80, 0);
                  w_80 = ATgetArgument(u_80, 1);
                  f_80 :
                  if(match_cons(x_80, sym_Matrix_2))
                    {
                      y_80 = ATgetArgument(x_80, 0);
                      b_81 = ATgetArgument(x_80, 1);
                      {
                        ATerm z_81 = NULL,b_82 = NULL;
                        ATerm j_14;
                        j_14 = t;
                        {
                          ATerm a_82 = NULL;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_80), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = union_0(t);
                          a_82 = t;
                          if(z_81 != NULL && z_81 != a_82)
                            _fail(a_82);
                          else
                            z_81 = a_82;
                        }
                        t = j_14;
                        {
                          ATerm c_82 = NULL;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_81), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = conc_0(t);
                          c_82 = t;
                          if(b_82 != NULL && b_82 != c_82)
                            _fail(c_82);
                          else
                            b_82 = c_82;
                          t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(z_81), not_null(b_82));
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(x_80, sym_Choice_2))
                        {
                          y_80 = ATgetArgument(x_80, 0);
                          b_81 = ATgetArgument(x_80, 1);
                          g_80 :
                          if(match_cons(y_80, sym_Matrix_2))
                            {
                              z_80 = ATgetArgument(y_80, 0);
                              a_81 = ATgetArgument(y_80, 1);
                              {
                                ATerm i_82 = NULL,k_82 = NULL;
                                ATerm k_14;
                                k_14 = t;
                                {
                                  ATerm j_82 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_80), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = union_0(t);
                                  j_82 = t;
                                  if(i_82 != NULL && i_82 != j_82)
                                    _fail(j_82);
                                  else
                                    i_82 = j_82;
                                }
                                t = k_14;
                                {
                                  ATerm l_82 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_81), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = conc_0(t);
                                  l_82 = t;
                                  if(k_82 != NULL && k_82 != l_82)
                                    _fail(l_82);
                                  else
                                    k_82 = l_82;
                                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(i_82), not_null(k_82)), not_null(b_81));
                                }
                              }
                            }
                          else
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(x_80, sym_LChoice_2))
                            {
                              y_80 = ATgetArgument(x_80, 0);
                              b_81 = ATgetArgument(x_80, 1);
                              h_80 :
                              if(match_cons(y_80, sym_Matrix_2))
                                {
                                  z_80 = ATgetArgument(y_80, 0);
                                  a_81 = ATgetArgument(y_80, 1);
                                  {
                                    ATerm r_82 = NULL,t_82 = NULL;
                                    ATerm l_14;
                                    l_14 = t;
                                    {
                                      ATerm s_82 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_80), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = union_0(t);
                                      s_82 = t;
                                      if(r_82 != NULL && r_82 != s_82)
                                        _fail(s_82);
                                      else
                                        r_82 = s_82;
                                    }
                                    t = l_14;
                                    {
                                      ATerm u_82 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_81), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = conc_0(t);
                                      u_82 = t;
                                      if(t_82 != NULL && t_82 != u_82)
                                        _fail(u_82);
                                      else
                                        t_82 = u_82;
                                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(r_82), not_null(t_82)), not_null(b_81));
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
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(t_80, sym_LChoice_2))
                {
                  u_80 = ATgetArgument(t_80, 0);
                  x_80 = ATgetArgument(t_80, 1);
                  i_80 :
                  if(match_cons(u_80, sym_Matrix_2))
                    {
                      v_80 = ATgetArgument(u_80, 0);
                      w_80 = ATgetArgument(u_80, 1);
                      j_80 :
                      if(match_cons(x_80, sym_Matrix_2))
                        {
                          y_80 = ATgetArgument(x_80, 0);
                          b_81 = ATgetArgument(x_80, 1);
                          {
                            ATerm z_82 = NULL,b_83 = NULL;
                            ATerm m_14;
                            m_14 = t;
                            {
                              ATerm a_83 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_80), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = union_0(t);
                              a_83 = t;
                              if(z_82 != NULL && z_82 != a_83)
                                _fail(a_83);
                              else
                                z_82 = a_83;
                            }
                            t = m_14;
                            {
                              ATerm c_83 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_81), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = conc_0(t);
                              c_83 = t;
                              if(b_83 != NULL && b_83 != c_83)
                                _fail(c_83);
                              else
                                b_83 = c_83;
                              t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(z_82), not_null(b_83));
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(x_80, sym_LChoice_2))
                            {
                              y_80 = ATgetArgument(x_80, 0);
                              b_81 = ATgetArgument(x_80, 1);
                              l_80 :
                              if(match_cons(y_80, sym_Matrix_2))
                                {
                                  z_80 = ATgetArgument(y_80, 0);
                                  a_81 = ATgetArgument(y_80, 1);
                                  {
                                    ATerm i_83 = NULL,k_83 = NULL;
                                    ATerm n_14;
                                    n_14 = t;
                                    {
                                      ATerm j_83 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_80), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = union_0(t);
                                      j_83 = t;
                                      if(i_83 != NULL && i_83 != j_83)
                                        _fail(j_83);
                                      else
                                        i_83 = j_83;
                                    }
                                    t = n_14;
                                    {
                                      ATerm l_83 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_81), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = conc_0(t);
                                      l_83 = t;
                                      if(k_83 != NULL && k_83 != l_83)
                                        _fail(l_83);
                                      else
                                        k_83 = l_83;
                                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(i_83), not_null(k_83)), not_null(b_81));
                                    }
                                  }
                                }
                              else
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(x_80, sym_Choice_2))
                                {
                                  y_80 = ATgetArgument(x_80, 0);
                                  b_81 = ATgetArgument(x_80, 1);
                                  m_80 :
                                  if(match_cons(y_80, sym_Matrix_2))
                                    {
                                      z_80 = ATgetArgument(y_80, 0);
                                      a_81 = ATgetArgument(y_80, 1);
                                      {
                                        ATerm r_83 = NULL,t_83 = NULL;
                                        ATerm o_14;
                                        o_14 = t;
                                        {
                                          ATerm s_83 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_80), (ATerm) ATmakeAppl(sym_TNil_0)));
                                          t = union_0(t);
                                          s_83 = t;
                                          if(r_83 != NULL && r_83 != s_83)
                                            _fail(s_83);
                                          else
                                            r_83 = s_83;
                                        }
                                        t = o_14;
                                        {
                                          ATerm u_83 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_81), (ATerm) ATmakeAppl(sym_TNil_0)));
                                          t = conc_0(t);
                                          u_83 = t;
                                          if(t_83 != NULL && t_83 != u_83)
                                            _fail(u_83);
                                          else
                                            t_83 = u_83;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(r_83), not_null(t_83)), not_null(b_81));
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
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
        }
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm i_74 (ATerm), ATerm j_74 (ATerm), ATerm k_74 (ATerm))
{
  ATerm p_14 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = i_74(t);
      PopChoice();
    }
  else
    {
      t = p_14;
      {
        ATerm v_84 = NULL,w_84 = NULL,x_84 = NULL;
        v_84 = t;
        u_84 :
        if(match_cons(v_84, sym_Cons_2))
          {
            w_84 = ATgetArgument(v_84, 0);
            x_84 = ATgetArgument(v_84, 1);
            {
              ATerm a_85 = NULL,c_85 = NULL;
              ATerm q_14;
              q_14 = t;
              {
                ATerm b_85 = NULL;
                t = not_null(w_84);
                t = k_74(t);
                b_85 = t;
                if(a_85 != NULL && a_85 != b_85)
                  _fail(b_85);
                else
                  a_85 = b_85;
              }
              t = q_14;
              {
                ATerm d_85 = NULL;
                t = not_null(x_84);
                t = foldr_3(t, i_74, j_74, k_74);
                d_85 = t;
                if(c_85 != NULL && c_85 != d_85)
                  _fail(d_85);
                else
                  c_85 = d_85;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_85), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_85), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = j_74(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm y_75 (ATerm), ATerm z_75 (ATerm), ATerm a_76 (ATerm))
{
  ATerm v_85 = NULL;
  ATerm x_85 = NULL;
  v_85 = t;
  {
    ATerm y_85 = NULL;
    ATerm a_86 = NULL,b_86 = NULL,c_86 = NULL,d_86 = NULL,e_86 = NULL;
    t = not_null(v_85);
    y_85 = t;
    t = SSL_explode_term(not_null(y_85));
    a_86 = t;
    k_85 :
    if(match_cons(a_86, sym_TCons_2))
      {
        b_86 = ATgetArgument(a_86, 0);
        c_86 = ATgetArgument(a_86, 1);
        l_85 :
        if(match_cons(c_86, sym_TCons_2))
          {
            d_86 = ATgetArgument(c_86, 0);
            e_86 = ATgetArgument(c_86, 1);
            m_85 :
            if(match_cons(e_86, sym_TNil_0))
              {
                if(x_85 != NULL && x_85 != d_86)
                  _fail(d_86);
                else
                  x_85 = d_86;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(x_85);
    t = foldr_3(t, y_75, z_75, a_76);
  }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm h_76 (ATerm))
{
  ATerm l_86 (ATerm t)
  {
    ATerm r_14 = t;
    if(PushChoice()==0)
      {
        ATerm j_86 = NULL;
        t = h_76(t);
        j_86 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_86), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = r_14;
        {
          ATerm a_3 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, a_3, union_0, l_86);
        }
      }
    return(t);
  }
  t = l_86(t);
  return(t);
}
ATerm collect_offsets_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm r_86 = NULL,s_86 = NULL;
    r_86 = t;
    q_86 :
    if(match_cons(r_86, sym_Off_1))
      {
        s_86 = ATgetArgument(r_86, 0);
        t = not_null(s_86);
      }
    else
      _fail(t);
    return(t);
  }
  t = collect_1(t, b_3);
  return(t);
}
ATerm CollectSubst_0 (ATerm t)
{
  ATerm d_87 = NULL,e_87 = NULL,f_87 = NULL,g_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL;
  d_87 = t;
  x_86 :
  if(match_cons(d_87, sym_As_2))
    {
      e_87 = ATgetArgument(d_87, 0);
      g_87 = ATgetArgument(d_87, 1);
      y_86 :
      if(match_cons(e_87, sym_Off_1))
        {
          f_87 = ATgetArgument(e_87, 0);
          a_87 :
          if(match_cons(g_87, sym_Var_1))
            {
              h_87 = ATgetArgument(g_87, 0);
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_87)), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_87))), (ATerm) ATmakeAppl(sym_Nil_0));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(e_87, sym_Var_1))
            {
              f_87 = ATgetArgument(e_87, 0);
              b_87 :
              if(match_cons(g_87, sym_As_2))
                {
                  h_87 = ATgetArgument(g_87, 0);
                  j_87 = ATgetArgument(g_87, 1);
                  c_87 :
                  if(match_cons(h_87, sym_Off_1))
                    {
                      i_87 = ATgetArgument(h_87, 0);
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_87)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_87))), (ATerm) ATmakeAppl(sym_Nil_0));
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
  else
    _fail(t);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm s_14 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = s_14;
      t = Cons_2(t, _id, _id);
    }
  return(t);
}
ATerm IgnoreVar_0 (ATerm t)
{
  ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL,e_88 = NULL;
  y_87 = t;
  t_87 :
  if(match_cons(y_87, sym_As_2))
    {
      z_87 = ATgetArgument(y_87, 0);
      b_88 = ATgetArgument(y_87, 1);
      u_87 :
      if(match_cons(z_87, sym_Off_1))
        {
          a_88 = ATgetArgument(z_87, 0);
          v_87 :
          if(match_cons(b_88, sym_Var_1))
            {
              c_88 = ATgetArgument(b_88, 0);
              t = not_null(a_88);
              t = is_list_0(t);
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(a_88)), (ATerm) ATmakeAppl(sym_Wld_0));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(z_87, sym_Var_1))
            {
              a_88 = ATgetArgument(z_87, 0);
              w_87 :
              if(match_cons(b_88, sym_As_2))
                {
                  c_88 = ATgetArgument(b_88, 0);
                  e_88 = ATgetArgument(b_88, 1);
                  x_87 :
                  if(match_cons(c_88, sym_Off_1))
                    {
                      d_88 = ATgetArgument(c_88, 0);
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(d_88)), not_null(e_88));
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
  else
    _fail(t);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm n_75 (ATerm))
{
  ATerm p_88 = NULL,q_88 = NULL,r_88 = NULL;
  p_88 = t;
  o_88 :
  if(match_cons(p_88, sym_Cons_2))
    {
      q_88 = ATgetArgument(p_88, 0);
      r_88 = ATgetArgument(p_88, 1);
      t = n_75(t);
      {
        ATerm c_3 (ATerm t)
        {
          ATerm u_88 = NULL;
          u_88 = t;
          if(q_88 != NULL && q_88 != u_88)
            _fail(u_88);
          else
            q_88 = u_88;
          return(t);
        }
        t = fetch_1(t, c_3);
        t = not_null(r_88);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL;
  b_89 = t;
  y_88 :
  if(match_cons(b_89, sym_TCons_2))
    {
      c_89 = ATgetArgument(b_89, 0);
      d_89 = ATgetArgument(b_89, 1);
      z_88 :
      if(match_cons(d_89, sym_TCons_2))
        {
          e_89 = ATgetArgument(d_89, 0);
          f_89 = ATgetArgument(d_89, 1);
          a_89 :
          if(match_cons(f_89, sym_TNil_0))
            {
              t = not_null(c_89);
              {
                ATerm j_89 (ATerm t)
                {
                  ATerm t_14 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(e_89);
                      PopChoice();
                    }
                  else
                    {
                      t = t_14;
                      {
                        ATerm u_14 = t;
                        if(PushChoice()==0)
                          {
                            ATerm d_3 (ATerm t)
                            {
                              t = not_null(e_89);
                              return(t);
                            }
                            t = HdMember_1(t, d_3);
                            t = j_89(t);
                            PopChoice();
                          }
                        else
                          {
                            t = u_14;
                            t = Cons_2(t, _id, j_89);
                          }
                      }
                    }
                  return(t);
                }
                t = j_89(t);
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
ATerm foldr_2 (ATerm t, ATerm g_74 (ATerm), ATerm h_74 (ATerm))
{
  ATerm v_14 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = g_74(t);
      PopChoice();
    }
  else
    {
      t = v_14;
      {
        ATerm n_89 = NULL,o_89 = NULL,p_89 = NULL;
        n_89 = t;
        m_89 :
        if(match_cons(n_89, sym_Cons_2))
          {
            o_89 = ATgetArgument(n_89, 0);
            p_89 = ATgetArgument(n_89, 1);
            {
              ATerm s_89 = NULL;
              ATerm t_89 = NULL;
              t = not_null(p_89);
              t = foldr_2(t, g_74, h_74);
              t_89 = t;
              if(s_89 != NULL && s_89 != t_89)
                _fail(t_89);
              else
                s_89 = t_89;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_89), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_89), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = h_74(t);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm unions_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = foldr_2(t, e_3, union_0);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm g_90 = NULL,h_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL,n_90 = NULL,o_90 = NULL,p_90 = NULL,q_90 = NULL,r_90 = NULL,s_90 = NULL;
  g_90 = t;
  x_89 :
  if(match_cons(g_90, sym_TCons_2))
    {
      h_90 = ATgetArgument(g_90, 0);
      m_90 = ATgetArgument(g_90, 1);
      y_89 :
      if(match_cons(h_90, sym_TCons_2))
        {
          i_90 = ATgetArgument(h_90, 0);
          j_90 = ATgetArgument(h_90, 1);
          z_89 :
          if(match_cons(j_90, sym_TCons_2))
            {
              k_90 = ATgetArgument(j_90, 0);
              l_90 = ATgetArgument(j_90, 1);
              a_90 :
              if(match_cons(l_90, sym_TNil_0))
                {
                  b_90 :
                  if(match_cons(m_90, sym_TCons_2))
                    {
                      n_90 = ATgetArgument(m_90, 0);
                      s_90 = ATgetArgument(m_90, 1);
                      c_90 :
                      if(match_cons(n_90, sym_TCons_2))
                        {
                          o_90 = ATgetArgument(n_90, 0);
                          p_90 = ATgetArgument(n_90, 1);
                          d_90 :
                          if(match_cons(p_90, sym_TCons_2))
                            {
                              q_90 = ATgetArgument(p_90, 0);
                              r_90 = ATgetArgument(p_90, 1);
                              e_90 :
                              if(match_cons(r_90, sym_TNil_0))
                                {
                                  f_90 :
                                  if(match_cons(s_90, sym_TNil_0))
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_90), not_null(o_90)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_90), not_null(q_90)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm UnZip3_0 (ATerm t)
{
  ATerm a_91 = NULL,b_91 = NULL,c_91 = NULL;
  a_91 = t;
  z_90 :
  if(match_cons(a_91, sym_Cons_2))
    {
      b_91 = ATgetArgument(a_91, 0);
      c_91 = ATgetArgument(a_91, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_91), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_91), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm i_91 = NULL;
  i_91 = t;
  h_91 :
  if(match_cons(i_91, sym_Nil_0))
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  else
    _fail(t);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, _id);
  return(t);
}
ATerm list_1 (ATerm t, ATerm c_79 (ATerm))
{
  ATerm k_91 (ATerm t)
  {
    ATerm w_14 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = w_14;
        t = Cons_2(t, c_79, k_91);
      }
    return(t);
  }
  t = k_91(t);
  return(t);
}
ATerm CollectSplit_2 (ATerm t, ATerm x_76 (ATerm), ATerm y_76 (ATerm))
{
  ATerm c_92 = NULL;
  ATerm e_92 = NULL,f_92 = NULL,n_92 = NULL,o_92 = NULL,p_92 = NULL,q_92 = NULL,r_92 = NULL;
  c_92 = t;
  {
    ATerm g_92 = NULL;
    ATerm i_92 = NULL,j_92 = NULL,k_92 = NULL,l_92 = NULL,m_92 = NULL;
    t = not_null(c_92);
    g_92 = t;
    t = SSL_explode_term(not_null(g_92));
    i_92 = t;
    o_91 :
    if(match_cons(i_92, sym_TCons_2))
      {
        j_92 = ATgetArgument(i_92, 0);
        k_92 = ATgetArgument(i_92, 1);
        p_91 :
        if(match_cons(k_92, sym_TCons_2))
          {
            l_92 = ATgetArgument(k_92, 0);
            m_92 = ATgetArgument(k_92, 1);
            q_91 :
            if(match_cons(m_92, sym_TNil_0))
              {
                if(e_92 != NULL && e_92 != j_92)
                  _fail(j_92);
                else
                  e_92 = j_92;
                if(f_92 != NULL && f_92 != l_92)
                  _fail(l_92);
                else
                  f_92 = l_92;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(f_92);
    t = list_1(t, x_76);
    t = unzip_0(t);
    n_92 = t;
    z_91 :
    if(match_cons(n_92, sym_TCons_2))
      {
        o_92 = ATgetArgument(n_92, 0);
        p_92 = ATgetArgument(n_92, 1);
        a_92 :
        if(match_cons(p_92, sym_TCons_2))
          {
            q_92 = ATgetArgument(p_92, 0);
            r_92 = ATgetArgument(p_92, 1);
            b_92 :
            if(match_cons(r_92, sym_TNil_0))
              {
                ATerm u_92 = NULL;
                ATerm w_92 = NULL,x_92 = NULL,y_92 = NULL,z_92 = NULL,a_93 = NULL;
                t = SSL_mkterm(not_null(e_92), not_null(o_92));
                u_92 = t;
                t = y_76(t);
                w_92 = t;
                w_91 :
                if(match_cons(w_92, sym_TCons_2))
                  {
                    x_92 = ATgetArgument(w_92, 0);
                    y_92 = ATgetArgument(w_92, 1);
                    x_91 :
                    if(match_cons(y_92, sym_TCons_2))
                      {
                        z_92 = ATgetArgument(y_92, 0);
                        a_93 = ATgetArgument(y_92, 1);
                        y_91 :
                        if(match_cons(a_93, sym_TNil_0))
                          {
                            ATerm d_93 = NULL;
                            ATerm e_93 = NULL,g_93 = NULL;
                            ATerm f_93 = NULL;
                            t = not_null(q_92);
                            t = unions_0(t);
                            f_93 = t;
                            if(e_93 != NULL && e_93 != f_93)
                              _fail(f_93);
                            else
                              e_93 = f_93;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_92), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_93), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = union_0(t);
                            g_93 = t;
                            if(d_93 != NULL && d_93 != g_93)
                              _fail(g_93);
                            else
                              d_93 = g_93;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_92), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_93), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm q_93 = NULL;
  q_93 = t;
  t = SSL_is_int(not_null(q_93));
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm u_93 = NULL;
  u_93 = t;
  t = SSL_is_string(not_null(u_93));
  return(t);
}
ATerm collect_split_1 (ATerm t, ATerm t_76 (ATerm))
{
  ATerm x_93 (ATerm t)
  {
    ATerm z_14 = t;
    if(PushChoice()==0)
      {
        ATerm a_15 = t;
        if(PushChoice()==0)
          {
            t = is_string_0(t);
            PopChoice();
          }
        else
          {
            t = a_15;
            t = is_int_0(t);
          }
        t = t_76(t);
        PopChoice();
      }
    else
      {
        t = z_14;
        t = CollectSplit_2(t, x_93, t_76);
      }
    return(t);
  }
  t = x_93(t);
  return(t);
}
ATerm collect_split_2 (ATerm t, ATerm v_76 (ATerm), ATerm w_76 (ATerm))
{
  ATerm f_3 (ATerm t)
  {
    ATerm g_3 (ATerm t)
    {
      t = try_1(t, v_76);
      return(t);
    }
    ATerm h_3 (ATerm t)
    {
      ATerm b_15 = t;
      if(PushChoice()==0)
        {
          t = w_76(t);
          PopChoice();
        }
      else
        {
          t = b_15;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      return(t);
    }
    t = split_2(t, g_3, h_3);
    return(t);
  }
  t = collect_split_1(t, f_3);
  return(t);
}
ATerm collect_substitutions_0 (ATerm t)
{
  t = collect_split_2(t, IgnoreVar_0, CollectSubst_0);
  return(t);
}
ATerm Annotate_1 (ATerm t, ATerm o_86 (ATerm))
{
  ATerm d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL;
  d_94 = t;
  a_94 :
  if(match_cons(d_94, sym_TCons_2))
    {
      e_94 = ATgetArgument(d_94, 0);
      f_94 = ATgetArgument(d_94, 1);
      b_94 :
      if(match_cons(f_94, sym_TCons_2))
        {
          g_94 = ATgetArgument(f_94, 0);
          h_94 = ATgetArgument(f_94, 1);
          c_94 :
          if(match_cons(h_94, sym_TNil_0))
            {
              ATerm k_94 = NULL;
              t = o_86(t);
              k_94 = t;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_94), not_null(k_94))), not_null(g_94));
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
ATerm NZip3_0 (ATerm t)
{
  ATerm s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL,w_94 = NULL;
  s_94 = t;
  p_94 :
  if(match_cons(s_94, sym_TCons_2))
    {
      t_94 = ATgetArgument(s_94, 0);
      u_94 = ATgetArgument(s_94, 1);
      q_94 :
      if(match_cons(u_94, sym_TCons_2))
        {
          v_94 = ATgetArgument(u_94, 0);
          w_94 = ATgetArgument(u_94, 1);
          r_94 :
          if(match_cons(w_94, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_94), not_null(v_94));
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
ATerm add_0 (ATerm t)
{
  ATerm e_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL;
  e_95 = t;
  b_95 :
  if(match_cons(e_95, sym_TCons_2))
    {
      f_95 = ATgetArgument(e_95, 0);
      g_95 = ATgetArgument(e_95, 1);
      c_95 :
      if(match_cons(g_95, sym_TCons_2))
        {
          h_95 = ATgetArgument(g_95, 0);
          i_95 = ATgetArgument(g_95, 1);
          d_95 :
          if(match_cons(i_95, sym_TNil_0))
            {
              ATerm c_15 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(f_95), not_null(h_95));
                  PopChoice();
                }
              else
                {
                  t = c_15;
                  t = SSL_addr(not_null(f_95), not_null(h_95));
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
ATerm NZip2_0 (ATerm t)
{
  ATerm s_95 = NULL,t_95 = NULL,u_95 = NULL,v_95 = NULL,w_95 = NULL,x_95 = NULL,y_95 = NULL;
  s_95 = t;
  o_95 :
  if(match_cons(s_95, sym_TCons_2))
    {
      t_95 = ATgetArgument(s_95, 0);
      u_95 = ATgetArgument(s_95, 1);
      p_95 :
      if(match_cons(u_95, sym_TCons_2))
        {
          v_95 = ATgetArgument(u_95, 0);
          y_95 = ATgetArgument(u_95, 1);
          q_95 :
          if(match_cons(v_95, sym_Cons_2))
            {
              w_95 = ATgetArgument(v_95, 0);
              x_95 = ATgetArgument(v_95, 1);
              r_95 :
              if(match_cons(y_95, sym_TNil_0))
                {
                  ATerm c_96 = NULL;
                  ATerm d_96 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_95), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = add_0(t);
                  d_96 = t;
                  if(c_96 != NULL && c_96 != d_96)
                    _fail(d_96);
                  else
                    c_96 = d_96;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(t_95), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_95), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(c_96), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_95), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm NZip1_0 (ATerm t)
{
  ATerm l_96 = NULL,m_96 = NULL,n_96 = NULL,o_96 = NULL,p_96 = NULL;
  l_96 = t;
  h_96 :
  if(match_cons(l_96, sym_TCons_2))
    {
      m_96 = ATgetArgument(l_96, 0);
      n_96 = ATgetArgument(l_96, 1);
      i_96 :
      if(match_cons(n_96, sym_TCons_2))
        {
          o_96 = ATgetArgument(n_96, 0);
          p_96 = ATgetArgument(n_96, 1);
          j_96 :
          if(match_cons(o_96, sym_Nil_0))
            {
              k_96 :
              if(match_cons(p_96, sym_TNil_0))
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
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm k_77 (ATerm), ATerm l_77 (ATerm), ATerm m_77 (ATerm), ATerm n_77 (ATerm))
{
  ATerm t_96 (ATerm t)
  {
    ATerm e_15 = t;
    if(PushChoice()==0)
      {
        t = k_77(t);
        PopChoice();
      }
    else
      {
        t = e_15;
        t = l_77(t);
        {
          ATerm i_3 (ATerm t)
          {
            t = TCons_2(t, t_96, TNil_0);
            return(t);
          }
          t = TCons_2(t, n_77, i_3);
          t = m_77(t);
        }
      }
    return(t);
  }
  t = t_96(t);
  return(t);
}
ATerm NZip00_0 (ATerm t)
{
  ATerm v_96 = NULL;
  v_96 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_96), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm nzip0_1 (ATerm t, ATerm v_77 (ATerm))
{
  t = NZip00_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, v_77);
  return(t);
}
ATerm Propagate_0 (ATerm t)
{
  ATerm i_97 = NULL,j_97 = NULL,k_97 = NULL,l_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL;
  ATerm e_98 (ATerm t)
  {
    ATerm z_97 = NULL;
    t = not_null(o_97);
    {
      ATerm j_3 (ATerm t)
      {
        ATerm k_3 (ATerm t)
        {
          t = not_null(n_97);
          return(t);
        }
        t = Annotate_1(t, k_3);
        return(t);
      }
      t = nzip0_1(t, j_3);
      z_97 = t;
      t = not_null(z_97);
    }
    return(t);
  }
  l_97 = t;
  e_97 :
  if(match_cons(l_97, sym_As_2))
    {
      m_97 = ATgetArgument(l_97, 0);
      o_97 = ATgetArgument(l_97, 1);
      f_97 :
      if(match_cons(m_97, sym_Off_1))
        {
          n_97 = ATgetArgument(m_97, 0);
          g_97 :
          if(match_cons(o_97, sym_Op_2))
            {
              k_97 = ATgetArgument(o_97, 0);
              j_97 = ATgetArgument(o_97, 1);
              {
                ATerm f_15 = t;
                if(PushChoice()==0)
                  {
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(n_97)), (ATerm) ATmakeAppl(sym_Op_2, not_null(k_97), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(n_97)), not_null(j_97))));
                    PopChoice();
                  }
                else
                  {
                    t = f_15;
                    t = e_98(t);
                  }
              }
            }
          else
            {
              if(match_cons(o_97, sym_As_2))
                {
                  k_97 = ATgetArgument(o_97, 0);
                  j_97 = ATgetArgument(o_97, 1);
                  h_97 :
                  if(match_cons(k_97, sym_Var_1))
                    {
                      i_97 = ATgetArgument(k_97, 0);
                      {
                        ATerm g_15 = t;
                        if(PushChoice()==0)
                          {
                            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_97)), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(n_97)), not_null(j_97)));
                            PopChoice();
                          }
                        else
                          {
                            t = g_15;
                            t = e_98(t);
                          }
                      }
                    }
                  else
                    t = e_98(t);
                }
              else
                {
                  if(match_cons(o_97, sym_BuildDefault_1))
                    {
                      k_97 = ATgetArgument(o_97, 0);
                      {
                        ATerm h_15 = t;
                        if(PushChoice()==0)
                          {
                            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(n_97)), (ATerm) ATmakeAppl(sym_Wld_0));
                            PopChoice();
                          }
                        else
                          {
                            t = h_15;
                            t = e_98(t);
                          }
                      }
                    }
                  else
                    t = e_98(t);
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
ATerm topdown_1 (ATerm t, ATerm r_81 (ATerm))
{
  ATerm g_98 (ATerm t)
  {
    t = r_81(t);
    t = _all(t, g_98);
    return(t);
  }
  t = g_98(t);
  return(t);
}
ATerm term_to_matrix_0 (ATerm t)
{
  ATerm n_98 = NULL;
  ATerm p_98 = NULL,q_98 = NULL,r_98 = NULL,s_98 = NULL,t_98 = NULL;
  n_98 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_98), (ATerm) ATmakeAppl(sym_Nil_0)));
  {
    ATerm l_3 (ATerm t)
    {
      t = try_1(t, Propagate_0);
      return(t);
    }
    t = topdown_1(t, l_3);
    t = collect_substitutions_0(t);
    p_98 = t;
    k_98 :
    if(match_cons(p_98, sym_TCons_2))
      {
        q_98 = ATgetArgument(p_98, 0);
        r_98 = ATgetArgument(p_98, 1);
        l_98 :
        if(match_cons(r_98, sym_TCons_2))
          {
            s_98 = ATgetArgument(r_98, 0);
            t_98 = ATgetArgument(r_98, 1);
            m_98 :
            if(match_cons(t_98, sym_TNil_0))
              {
                ATerm w_98 = NULL;
                ATerm x_98 = NULL;
                t = not_null(q_98);
                t = collect_offsets_0(t);
                x_98 = t;
                if(w_98 != NULL && w_98 != x_98)
                  _fail(x_98);
                else
                  w_98 = x_98;
                t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(w_98), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Row_2, not_null(q_98), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(s_98))), (ATerm) ATmakeAppl(sym_Nil_0)));
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
ATerm MatchToMatrix_0 (ATerm t)
{
  ATerm d_99 = NULL,e_99 = NULL;
  d_99 = t;
  c_99 :
  if(match_cons(d_99, sym_Match_1))
    {
      e_99 = ATgetArgument(d_99, 0);
      t = not_null(e_99);
      t = term_to_matrix_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm v_81 (ATerm))
{
  ATerm i_99 (ATerm t)
  {
    t = v_81(t);
    t = _all(t, i_99);
    t = v_81(t);
    return(t);
  }
  t = i_99(t);
  return(t);
}
ATerm match_to_matrix_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm r_3 (ATerm t)
    {
      ATerm i_15 = t;
      if(PushChoice()==0)
        {
          t = MatchToMatrix_0(t);
          PopChoice();
        }
      else
        {
          t = i_15;
          {
            ATerm j_15 = t;
            if(PushChoice()==0)
              {
                t = MatrixMerge_0(t);
                PopChoice();
              }
            else
              {
                t = j_15;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, r_3);
    return(t);
  }
  t = downup_1(t, m_3);
  return(t);
}
ATerm match_to_dfa_0 (ATerm t)
{
  t = match_to_matrix_0(t);
  t = matrix_to_dfa_0(t);
  t = strename_0(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm i_62 (ATerm), ATerm j_62 (ATerm), ATerm k_62 (ATerm))
{
  ATerm o_99 = NULL,p_99 = NULL,q_99 = NULL,r_99 = NULL;
  o_99 = t;
  n_99 :
  if(match_cons(o_99, sym_SDef_3))
    {
      p_99 = ATgetArgument(o_99, 0);
      q_99 = ATgetArgument(o_99, 1);
      r_99 = ATgetArgument(o_99, 2);
      {
        ATerm v_99 = NULL;
        t = not_null(p_99);
        {
          ATerm y_99 = NULL;
          t = i_62(t);
          v_99 = t;
          t = not_null(q_99);
          {
            ATerm a_100 = NULL;
            t = j_62(t);
            y_99 = t;
            t = not_null(r_99);
            t = k_62(t);
            a_100 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(v_99), not_null(y_99), not_null(a_100));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm d_61 (ATerm))
{
  ATerm j_100 = NULL,k_100 = NULL;
  j_100 = t;
  i_100 :
  if(match_cons(j_100, sym_Strategies_1))
    {
      k_100 = ATgetArgument(j_100, 0);
      {
        ATerm m_100 = NULL;
        t = not_null(k_100);
        t = d_61(t);
        m_100 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(m_100));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm f_61 (ATerm))
{
  ATerm t_100 = NULL,u_100 = NULL;
  t_100 = t;
  s_100 :
  if(match_cons(t_100, sym_Specification_1))
    {
      u_100 = ATgetArgument(t_100, 0);
      {
        ATerm w_100 = NULL;
        t = not_null(u_100);
        t = f_61(t);
        w_100 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(w_100));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm p_86 (ATerm))
{
  ATerm s_3 (ATerm t)
  {
    ATerm t_3 (ATerm t)
    {
      ATerm u_3 (ATerm t)
      {
        ATerm z_3 (ATerm t)
        {
          ATerm m_4 (ATerm t)
          {
            t = SDef_3(t, _id, _id, p_86);
            return(t);
          }
          t = map_1(t, m_4);
          return(t);
        }
        t = Strategies_1(t, z_3);
        return(t);
      }
      t = Cons_2(t, u_3, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, t_3);
    return(t);
  }
  t = Specification_1(t, s_3);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm b_101 = NULL;
  b_101 = t;
  a_101 :
  if(!(match_cons(b_101, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm n_63 (ATerm), ATerm o_63 (ATerm))
{
  ATerm g_101 = NULL,h_101 = NULL,i_101 = NULL;
  g_101 = t;
  f_101 :
  if(match_cons(g_101, sym_TCons_2))
    {
      h_101 = ATgetArgument(g_101, 0);
      i_101 = ATgetArgument(g_101, 1);
      {
        ATerm l_101 = NULL;
        t = not_null(h_101);
        {
          ATerm n_101 = NULL;
          t = n_63(t);
          l_101 = t;
          t = not_null(i_101);
          t = o_63(t);
          n_101 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_101), not_null(n_101));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm u_101 = NULL;
  ATerm k_15;
  k_15 = t;
  {
    ATerm n_4 (ATerm t)
    {
      ATerm v_101 = NULL,w_101 = NULL;
      v_101 = t;
      t_101 :
      if(match_cons(v_101, sym_Program_1))
        {
          w_101 = ATgetArgument(v_101, 0);
          if(u_101 != NULL && u_101 != w_101)
            _fail(w_101);
          else
            u_101 = w_101;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, n_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_101), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = k_15;
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
  ATerm d_102 = NULL,e_102 = NULL;
  ATerm o_4 (ATerm t)
  {
    ATerm w_4 (ATerm t)
    {
      ATerm l_15 = t;
      if(PushChoice()==0)
        {
          ATerm y_4 (ATerm t)
          {
            ATerm f_102 = NULL;
            f_102 = t;
            y_101 :
            if(!(match_cons(f_102, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, y_4);
          PopChoice();
          _fail(t);
        }
      else
        t = l_15;
      return(t);
    }
    ATerm x_4 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, w_4, x_4);
    {
      ATerm z_4 (ATerm t)
      {
        ATerm b_5 (ATerm t)
        {
          ATerm g_102 = NULL,h_102 = NULL;
          g_102 = t;
          a_102 :
          if(match_cons(g_102, sym_Runtime_1))
            {
              h_102 = ATgetArgument(g_102, 0);
              if(e_102 != NULL && e_102 != h_102)
                _fail(h_102);
              else
                e_102 = h_102;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, b_5);
        return(t);
      }
      ATerm a_5 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, z_4, a_5);
      {
        ATerm c_5 (ATerm t)
        {
          ATerm i_5 (ATerm t)
          {
            ATerm i_102 = NULL,j_102 = NULL;
            i_102 = t;
            c_102 :
            if(match_cons(i_102, sym_Program_1))
              {
                j_102 = ATgetArgument(i_102, 0);
                if(d_102 != NULL && d_102 != j_102)
                  _fail(j_102);
                else
                  d_102 = j_102;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, i_5);
          return(t);
        }
        ATerm d_5 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, c_5, d_5);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_102), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_102), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, o_4);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm q_102 = NULL,r_102 = NULL,s_102 = NULL,t_102 = NULL,u_102 = NULL;
  q_102 = t;
  n_102 :
  if(match_cons(q_102, sym_TCons_2))
    {
      r_102 = ATgetArgument(q_102, 0);
      s_102 = ATgetArgument(q_102, 1);
      o_102 :
      if(match_cons(s_102, sym_TCons_2))
        {
          t_102 = ATgetArgument(s_102, 0);
          u_102 = ATgetArgument(s_102, 1);
          p_102 :
          if(match_cons(u_102, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(r_102), not_null(t_102));
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
  ATerm c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL,g_103 = NULL;
  c_103 = t;
  z_102 :
  if(match_cons(c_103, sym_TCons_2))
    {
      d_103 = ATgetArgument(c_103, 0);
      e_103 = ATgetArgument(c_103, 1);
      a_103 :
      if(match_cons(e_103, sym_TCons_2))
        {
          f_103 = ATgetArgument(e_103, 0);
          g_103 = ATgetArgument(e_103, 1);
          b_103 :
          if(match_cons(g_103, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(d_103), not_null(f_103));
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
  ATerm o_103 = NULL;
  ATerm m_15;
  m_15 = t;
  {
    ATerm j_5 (ATerm t)
    {
      ATerm n_15 = t;
      if(PushChoice()==0)
        {
          ATerm n_5 (ATerm t)
          {
            ATerm p_103 = NULL,q_103 = NULL;
            p_103 = t;
            l_103 :
            if(match_cons(p_103, sym_Output_1))
              {
                q_103 = ATgetArgument(p_103, 0);
                if(o_103 != NULL && o_103 != q_103)
                  _fail(q_103);
                else
                  o_103 = q_103;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, n_5);
          PopChoice();
        }
      else
        {
          t = n_15;
          {
            ATerm r_103 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            r_103 = t;
            if(o_103 != NULL && o_103 != r_103)
              _fail(r_103);
            else
              o_103 = r_103;
          }
        }
      return(t);
    }
    ATerm l_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, j_5, l_5);
  }
  t = m_15;
  {
    ATerm o_5 (ATerm t)
    {
      ATerm p_5 (ATerm t)
      {
        ATerm q_5 (ATerm t)
        {
          t = not_null(o_103);
          return(t);
        }
        t = split_2(t, q_5, _id);
        return(t);
      }
      t = TCons_2(t, p_5, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, o_5);
    {
      ATerm v_15 = t;
      if(PushChoice()==0)
        {
          ATerm r_5 (ATerm t)
          {
            ATerm t_5 (ATerm t)
            {
              ATerm s_103 = NULL;
              s_103 = t;
              n_103 :
              if(!(match_cons(s_103, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, t_5);
            return(t);
          }
          ATerm s_5 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, r_5, s_5);
          PopChoice();
        }
      else
        {
          t = v_15;
          {
            ATerm y_5 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, y_5);
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
ATerm apply_strategy_1 (ATerm t, ATerm j_67 (ATerm))
{
  ATerm a_104 = NULL,c_104 = NULL,d_104 = NULL,e_104 = NULL,f_104 = NULL,g_104 = NULL;
  ATerm w_15;
  w_15 = t;
  t = dtime_0(t);
  t = w_15;
  t = j_67(t);
  {
    ATerm x_15;
    x_15 = t;
    {
      ATerm b_104 = NULL;
      t = dtime_0(t);
      b_104 = t;
      if(a_104 != NULL && a_104 != b_104)
        _fail(b_104);
      else
        a_104 = b_104;
    }
    t = x_15;
    c_104 = t;
    x_103 :
    if(match_cons(c_104, sym_TCons_2))
      {
        d_104 = ATgetArgument(c_104, 0);
        e_104 = ATgetArgument(c_104, 1);
        y_103 :
        if(match_cons(e_104, sym_TCons_2))
          {
            f_104 = ATgetArgument(e_104, 0);
            g_104 = ATgetArgument(e_104, 1);
            z_103 :
            if(match_cons(g_104, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(a_104)), not_null(d_104)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_104), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm m_104 = NULL;
  m_104 = t;
  t = SSL_ReadFromFile(not_null(m_104));
  return(t);
}
ATerm split_2 (ATerm t, ATerm o_80 (ATerm), ATerm p_80 (ATerm))
{
  ATerm s_104 = NULL;
  ATerm u_104 = NULL,w_104 = NULL;
  s_104 = t;
  {
    ATerm y_15;
    y_15 = t;
    {
      ATerm v_104 = NULL;
      t = not_null(s_104);
      t = o_80(t);
      v_104 = t;
      if(u_104 != NULL && u_104 != v_104)
        _fail(v_104);
      else
        u_104 = v_104;
    }
    t = y_15;
    {
      ATerm x_104 = NULL;
      t = not_null(s_104);
      t = p_80(t);
      x_104 = t;
      if(w_104 != NULL && w_104 != x_104)
        _fail(x_104);
      else
        w_104 = x_104;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_104), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_104), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm e_105 = NULL;
  ATerm z_15;
  z_15 = t;
  {
    ATerm a_16 = t;
    if(PushChoice()==0)
      {
        ATerm z_5 (ATerm t)
        {
          ATerm f_105 = NULL,g_105 = NULL;
          f_105 = t;
          c_105 :
          if(match_cons(f_105, sym_Input_1))
            {
              g_105 = ATgetArgument(f_105, 0);
              if(e_105 != NULL && e_105 != g_105)
                _fail(g_105);
              else
                e_105 = g_105;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, z_5);
        PopChoice();
      }
    else
      {
        t = a_16;
        {
          ATerm h_105 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          h_105 = t;
          if(e_105 != NULL && e_105 != h_105)
            _fail(h_105);
          else
            e_105 = h_105;
        }
      }
  }
  t = z_15;
  {
    ATerm b_6 (ATerm t)
    {
      t = not_null(e_105);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, b_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_105 = NULL;
  l_105 = t;
  k_105 :
  if(!(match_cons(l_105, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm i_67 (ATerm))
{
  ATerm d_6 (ATerm t)
  {
    ATerm b_16 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = b_16;
        {
          ATerm n_16 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = n_16;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, d_6);
  t = i_67(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_105 = NULL;
  n_105 = t;
  t = SSL_table_create(not_null(n_105));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_105 = NULL;
  r_105 = t;
  {
    ATerm p_16;
    p_16 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_105), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = p_16;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm z_105 = NULL,a_106 = NULL,b_106 = NULL,c_106 = NULL,d_106 = NULL;
  d_106 = t;
  x_105 :
  if(match_cons(d_106, sym_Cons_2))
    {
      z_105 = ATgetArgument(d_106, 0);
      a_106 = ATgetArgument(d_106, 1);
      y_105 :
      if(match_cons(a_106, sym_Cons_2))
        {
          b_106 = ATgetArgument(a_106, 0);
          c_106 = ATgetArgument(a_106, 1);
          {
            ATerm h_106 = NULL;
            t = not_null(z_105);
            t = e_0(t);
            {
              ATerm i_106 = NULL;
              t = not_null(b_106);
              t = f_0(t);
              i_106 = t;
              if(h_106 != NULL && h_106 != i_106)
                _fail(i_106);
              else
                h_106 = i_106;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_106), not_null(c_106));
            }
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(d_106, "register-usage-info"))
        t = register_usage_1(t, g_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm r_16 = t;
  if(PushChoice()==0)
    {
      ATerm e_6 (ATerm t)
      {
        ATerm x_106 = NULL;
        x_106 = t;
        m_106 :
        if(!(match_string(x_106, "-S")))
          {
            if(!(match_string(x_106, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm f_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm g_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, e_6, f_6, g_6);
      PopChoice();
    }
  else
    {
      t = r_16;
      {
        ATerm s_16 = t;
        if(PushChoice()==0)
          {
            ATerm h_6 (ATerm t)
            {
              ATerm y_106 = NULL;
              y_106 = t;
              n_106 :
              if(!(match_string(y_106, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm m_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm n_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, h_6, m_6, n_6);
            PopChoice();
          }
        else
          {
            t = s_16;
            {
              ATerm x_16 = t;
              if(PushChoice()==0)
                {
                  ATerm o_6 (ATerm t)
                  {
                    ATerm z_106 = NULL;
                    z_106 = t;
                    o_106 :
                    if(!(match_string(z_106, "-v")))
                      {
                        if(!(match_string(z_106, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm p_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm q_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, o_6, p_6, q_6);
                  PopChoice();
                }
              else
                {
                  t = x_16;
                  {
                    ATerm d_17 = t;
                    if(PushChoice()==0)
                      {
                        ATerm x_6 (ATerm t)
                        {
                          ATerm a_107 = NULL;
                          a_107 = t;
                          p_106 :
                          if(!(match_string(a_107, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm y_6 (ATerm t)
                        {
                          ATerm b_107 = NULL;
                          b_107 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(b_107));
                          return(t);
                        }
                        ATerm z_6 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, x_6, y_6, z_6);
                        PopChoice();
                      }
                    else
                      {
                        t = d_17;
                        {
                          ATerm e_17 = t;
                          if(PushChoice()==0)
                            {
                              ATerm d_7 (ATerm t)
                              {
                                ATerm d_107 = NULL;
                                d_107 = t;
                                r_106 :
                                if(!(match_string(d_107, "-i")))
                                  {
                                    if(!(match_string(d_107, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm e_7 (ATerm t)
                              {
                                ATerm e_107 = NULL;
                                e_107 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_107));
                                return(t);
                              }
                              ATerm f_7 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, d_7, e_7, f_7);
                              PopChoice();
                            }
                          else
                            {
                              t = e_17;
                              {
                                ATerm f_17 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm g_7 (ATerm t)
                                    {
                                      ATerm g_107 = NULL;
                                      g_107 = t;
                                      t_106 :
                                      if(!(match_string(g_107, "-o")))
                                        {
                                          if(!(match_string(g_107, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm h_7 (ATerm t)
                                    {
                                      ATerm h_107 = NULL;
                                      h_107 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_107));
                                      return(t);
                                    }
                                    ATerm n_7 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, g_7, h_7, n_7);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = f_17;
                                    {
                                      ATerm g_17 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm o_7 (ATerm t)
                                          {
                                            ATerm j_107 = NULL;
                                            j_107 = t;
                                            v_106 :
                                            if(!(match_string(j_107, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm t_7 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm u_7 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, o_7, t_7, u_7);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = g_17;
                                          {
                                            ATerm v_7 (ATerm t)
                                            {
                                              ATerm k_107 = NULL;
                                              k_107 = t;
                                              w_106 :
                                              if(!(match_string(k_107, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm w_7 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm x_7 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, v_7, w_7, x_7);
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
  ATerm p_107 = NULL;
  p_107 = t;
  t = SSL_table_destroy(not_null(p_107));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm t_107 = NULL;
  t_107 = t;
  t = SSL_exit(not_null(t_107));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm x_107 = NULL;
  x_107 = t;
  t = SSL_implode_string(not_null(x_107));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_79 (ATerm))
{
  ATerm a_108 (ATerm t)
  {
    ATerm i_17 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, a_108);
        PopChoice();
      }
    else
      {
        t = i_17;
        t = Nil_0(t);
        t = o_79(t);
      }
    return(t);
  }
  t = a_108(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm m_17 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = m_17;
      {
        ATerm d_108 = NULL,e_108 = NULL,f_108 = NULL;
        d_108 = t;
        c_108 :
        if(match_cons(d_108, sym_Cons_2))
          {
            e_108 = ATgetArgument(d_108, 0);
            f_108 = ATgetArgument(d_108, 1);
            t = not_null(e_108);
            {
              ATerm y_7 (ATerm t)
              {
                t = not_null(f_108);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, y_7);
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
  ATerm l_108 = NULL;
  l_108 = t;
  t = SSL_explode_string(not_null(l_108));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm p_65 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm a_79 (ATerm))
{
  ATerm o_108 (ATerm t)
  {
    ATerm n_17 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = n_17;
        t = Cons_2(t, a_79, o_108);
      }
    return(t);
  }
  t = o_108(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm u_108 = NULL,v_108 = NULL,w_108 = NULL,x_108 = NULL,y_108 = NULL;
  u_108 = t;
  q_108 :
  if(match_cons(u_108, sym_TCons_2))
    {
      v_108 = ATgetArgument(u_108, 0);
      w_108 = ATgetArgument(u_108, 1);
      r_108 :
      if(match_cons(v_108, sym_Nil_0))
        {
          s_108 :
          if(match_cons(w_108, sym_TCons_2))
            {
              x_108 = ATgetArgument(w_108, 0);
              y_108 = ATgetArgument(w_108, 1);
              t_108 :
              if(match_cons(y_108, sym_TNil_0))
                t = not_null(x_108);
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
  ATerm h_109 = NULL,i_109 = NULL,j_109 = NULL,k_109 = NULL,l_109 = NULL,m_109 = NULL,n_109 = NULL;
  h_109 = t;
  c_109 :
  if(match_cons(h_109, sym_TCons_2))
    {
      i_109 = ATgetArgument(h_109, 0);
      l_109 = ATgetArgument(h_109, 1);
      d_109 :
      if(match_cons(i_109, sym_Cons_2))
        {
          j_109 = ATgetArgument(i_109, 0);
          k_109 = ATgetArgument(i_109, 1);
          e_109 :
          if(match_cons(l_109, sym_TCons_2))
            {
              m_109 = ATgetArgument(l_109, 0);
              n_109 = ATgetArgument(l_109, 1);
              f_109 :
              if(match_cons(n_109, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_109), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_109), not_null(m_109)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm g_69 (ATerm), ATerm h_69 (ATerm))
{
  ATerm s_109 (ATerm t)
  {
    ATerm o_17 = t;
    if(PushChoice()==0)
      {
        t = g_69(t);
        t = s_109(t);
        PopChoice();
      }
    else
      {
        t = o_17;
        t = h_69(t);
      }
    return(t);
  }
  t = s_109(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm j_69 (ATerm))
{
  t = repeat_2(t, j_69, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm u_109 = NULL;
  u_109 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_109), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm o_65 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_57 (ATerm))
{
  ATerm b_110 = NULL,c_110 = NULL;
  b_110 = t;
  z_109 :
  if(match_cons(b_110, sym_Program_1))
    {
      c_110 = ATgetArgument(b_110, 0);
      {
        ATerm e_110 = NULL;
        t = not_null(c_110);
        t = r_57(t);
        e_110 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_110));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm m_110 = NULL;
  ATerm z_7 (ATerm t)
  {
    ATerm d_8 (ATerm t)
    {
      ATerm n_110 = NULL;
      n_110 = t;
      if(m_110 != NULL && m_110 != n_110)
        _fail(n_110);
      else
        m_110 = n_110;
      return(t);
    }
    t = Program_1(t, d_8);
    return(t);
  }
  t = option_defined_1(t, z_7);
  {
    ATerm f_8 (ATerm t)
    {
      ATerm o_110 = NULL;
      ATerm p_110 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm g_8 (ATerm t)
        {
          t = not_null(m_110);
          return(t);
        }
        t = short_description_1(t, g_8);
        t = concat_strings_0(t);
        p_110 = t;
        if(o_110 != NULL && o_110 != p_110)
          _fail(p_110);
        else
          o_110 = p_110;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_110), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, f_8);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm h_8 (ATerm t)
      {
        ATerm q_110 = NULL;
        q_110 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_110), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, h_8);
      {
        ATerm i_8 (ATerm t)
        {
          ATerm s_110 = NULL;
          ATerm t_110 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm j_8 (ATerm t)
            {
              t = not_null(m_110);
              return(t);
            }
            t = long_description_1(t, j_8);
            t = concat_strings_0(t);
            t_110 = t;
            if(s_110 != NULL && s_110 != t_110)
              _fail(t_110);
            else
              s_110 = t_110;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_110), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, i_8);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm c_111 = NULL,d_111 = NULL,e_111 = NULL,f_111 = NULL,g_111 = NULL;
  c_111 = t;
  z_110 :
  if(match_cons(c_111, sym_TCons_2))
    {
      d_111 = ATgetArgument(c_111, 0);
      e_111 = ATgetArgument(c_111, 1);
      a_111 :
      if(match_cons(e_111, sym_TCons_2))
        {
          f_111 = ATgetArgument(e_111, 0);
          g_111 = ATgetArgument(e_111, 1);
          b_111 :
          if(match_cons(g_111, sym_TNil_0))
            {
              ATerm x_17;
              x_17 = t;
              t = SSL_printnl(not_null(d_111), not_null(f_111));
              t = x_17;
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
ATerm Undefined_1 (ATerm t, ATerm s_57 (ATerm))
{
  ATerm n_111 = NULL,o_111 = NULL;
  n_111 = t;
  m_111 :
  if(match_cons(n_111, sym_Undefined_1))
    {
      o_111 = ATgetArgument(n_111, 0);
      {
        ATerm q_111 = NULL;
        t = not_null(o_111);
        t = s_57(t);
        q_111 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_111));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm i_79 (ATerm))
{
  ATerm u_111 (ATerm t)
  {
    ATerm y_17 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, i_79, _id);
        PopChoice();
      }
    else
      {
        t = y_17;
        t = Cons_2(t, _id, u_111);
      }
    return(t);
  }
  t = u_111(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_66 (ATerm))
{
  t = fetch_1(t, n_66);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_111 = NULL;
  w_111 = t;
  v_111 :
  if(!(match_cons(w_111, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_81 (ATerm))
{
  ATerm z_17 = t;
  if(PushChoice()==0)
    {
      t = g_81(t);
      PopChoice();
    }
  else
    t = z_17;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm b_112 = NULL,c_112 = NULL,d_112 = NULL,e_112 = NULL,f_112 = NULL;
  b_112 = t;
  y_111 :
  if(match_cons(b_112, sym_TCons_2))
    {
      c_112 = ATgetArgument(b_112, 0);
      d_112 = ATgetArgument(b_112, 1);
      z_111 :
      if(match_cons(d_112, sym_TCons_2))
        {
          e_112 = ATgetArgument(d_112, 0);
          f_112 = ATgetArgument(d_112, 1);
          a_112 :
          if(match_cons(f_112, sym_TNil_0))
            t = SSL_table_get(not_null(c_112), not_null(e_112));
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
  ATerm p_112 = NULL,q_112 = NULL,r_112 = NULL,s_112 = NULL,t_112 = NULL,u_112 = NULL,v_112 = NULL;
  p_112 = t;
  l_112 :
  if(match_cons(p_112, sym_TCons_2))
    {
      q_112 = ATgetArgument(p_112, 0);
      r_112 = ATgetArgument(p_112, 1);
      m_112 :
      if(match_cons(r_112, sym_TCons_2))
        {
          s_112 = ATgetArgument(r_112, 0);
          t_112 = ATgetArgument(r_112, 1);
          n_112 :
          if(match_cons(t_112, sym_TCons_2))
            {
              u_112 = ATgetArgument(t_112, 0);
              v_112 = ATgetArgument(t_112, 1);
              o_112 :
              if(match_cons(v_112, sym_TNil_0))
                {
                  ATerm a_18;
                  a_18 = t;
                  {
                    ATerm z_112 = NULL;
                    ATerm a_113 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_112), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_112), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm b_18 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = b_18;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      a_113 = t;
                      if(z_112 != NULL && z_112 != a_113)
                        _fail(a_113);
                      else
                        z_112 = a_113;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_112), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_112), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_112), not_null(z_112)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = a_18;
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
ATerm register_usage_1 (ATerm t, ATerm t_65 (ATerm))
{
  ATerm e_113 = NULL;
  ATerm f_113 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = t_65(t);
  f_113 = t;
  if(e_113 != NULL && e_113 != f_113)
    _fail(f_113);
  else
    e_113 = f_113;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_113), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm l_113 = NULL,m_113 = NULL,n_113 = NULL;
  n_113 = t;
  k_113 :
  if(match_cons(n_113, sym_Cons_2))
    {
      l_113 = ATgetArgument(n_113, 0);
      m_113 = ATgetArgument(n_113, 1);
      {
        ATerm q_113 = NULL;
        t = not_null(l_113);
        t = b_0(t);
        {
          ATerm r_113 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = c_0(t);
          r_113 = t;
          if(q_113 != NULL && q_113 != r_113)
            _fail(r_113);
          else
            q_113 = r_113;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_113), not_null(m_113));
        }
      }
    }
  else
    {
      if(match_string(n_113, "register-usage-info"))
        t = register_usage_1(t, d_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm n_8 (ATerm t)
  {
    ATerm w_113 = NULL;
    w_113 = t;
    v_113 :
    if(!(match_string(w_113, "--help")))
      {
        if(!(match_string(w_113, "-h")))
          {
            if(!(match_string(w_113, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm p_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm q_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, n_8, p_8, q_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm z_113 = NULL,a_114 = NULL,b_114 = NULL;
  z_113 = t;
  y_113 :
  if(match_cons(z_113, sym_Cons_2))
    {
      a_114 = ATgetArgument(z_113, 0);
      b_114 = ATgetArgument(z_113, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_114)), not_null(b_114));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_63 (ATerm), ATerm s_63 (ATerm))
{
  ATerm j_114 = NULL,k_114 = NULL,l_114 = NULL;
  j_114 = t;
  i_114 :
  if(match_cons(j_114, sym_Cons_2))
    {
      k_114 = ATgetArgument(j_114, 0);
      l_114 = ATgetArgument(j_114, 1);
      {
        ATerm o_114 = NULL;
        t = not_null(k_114);
        {
          ATerm q_114 = NULL;
          t = r_63(t);
          o_114 = t;
          t = not_null(l_114);
          t = s_63(t);
          q_114 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_114), not_null(q_114));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm w_114 = NULL;
  w_114 = t;
  v_114 :
  if(!(match_cons(w_114, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm r_65 (ATerm))
{
  ATerm c_18;
  c_18 = t;
  {
    ATerm r_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = r_65(t);
      return(t);
    }
    t = try_1(t, r_8);
  }
  t = c_18;
  {
    ATerm s_8 (ATerm t)
    {
      ATerm y_114 = NULL;
      y_114 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_114));
      return(t);
    }
    ATerm t_8 (ATerm t)
    {
      ATerm d_18 = t;
      if(PushChoice()==0)
        {
          ATerm e_18 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = e_18;
              t = r_65(t);
              t = Cons_2(t, _id, t_8);
            }
          PopChoice();
        }
      else
        {
          t = d_18;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_8, t_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm h_115 = NULL,i_115 = NULL,j_115 = NULL;
  ATerm f_18;
  f_18 = t;
  {
    ATerm k_115 = NULL,l_115 = NULL,m_115 = NULL,n_115 = NULL,o_115 = NULL,p_115 = NULL,q_115 = NULL;
    k_115 = t;
    d_115 :
    if(match_cons(k_115, sym_TCons_2))
      {
        l_115 = ATgetArgument(k_115, 0);
        m_115 = ATgetArgument(k_115, 1);
        e_115 :
        if(match_cons(m_115, sym_TCons_2))
          {
            n_115 = ATgetArgument(m_115, 0);
            o_115 = ATgetArgument(m_115, 1);
            f_115 :
            if(match_cons(o_115, sym_TCons_2))
              {
                p_115 = ATgetArgument(o_115, 0);
                q_115 = ATgetArgument(o_115, 1);
                g_115 :
                if(match_cons(q_115, sym_TNil_0))
                  {
                    if(h_115 != NULL && h_115 != l_115)
                      _fail(l_115);
                    else
                      h_115 = l_115;
                    if(i_115 != NULL && i_115 != n_115)
                      _fail(n_115);
                    else
                      i_115 = n_115;
                    if(j_115 != NULL && j_115 != p_115)
                      _fail(p_115);
                    else
                      j_115 = p_115;
                    t = SSL_table_put(not_null(h_115), not_null(i_115), not_null(j_115));
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
  t = f_18;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm q_65 (ATerm))
{
  ATerm t_115 = NULL;
  ATerm g_18;
  g_18 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = g_18;
  {
    ATerm u_8 (ATerm t)
    {
      ATerm s_18 = t;
      if(PushChoice()==0)
        {
          t = q_65(t);
          PopChoice();
        }
      else
        {
          t = s_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_8);
    {
      ATerm z_8 (ATerm t)
      {
        ATerm t_18 = t;
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
            t = t_18;
            {
              ATerm a_9 (ATerm t)
              {
                ATerm c_9 (ATerm t)
                {
                  ATerm u_115 = NULL;
                  u_115 = t;
                  if(t_115 != NULL && t_115 != u_115)
                    _fail(u_115);
                  else
                    t_115 = u_115;
                  return(t);
                }
                t = Undefined_1(t, c_9);
                return(t);
              }
              t = option_defined_1(t, a_9);
              {
                ATerm u_18;
                u_18 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_115), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = u_18;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, z_8);
      {
        ATerm v_18;
        v_18 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = v_18;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm x_66 (ATerm), ATerm y_66 (ATerm), ATerm z_66 (ATerm))
{
  ATerm e_9 (ATerm t)
  {
    ATerm x_18 = t;
    if(PushChoice()==0)
      {
        t = y_66(t);
        PopChoice();
      }
    else
      {
        t = x_18;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, e_9);
  t = store_options_0(t);
  {
    ATerm z_18 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, z_66);
        PopChoice();
      }
    else
      {
        t = z_18;
        {
          ATerm a_19 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, x_66);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = a_19;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm s_66 (ATerm), ATerm t_66 (ATerm))
{
  t = iowrap_3(t, s_66, t_66, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm p_66 (ATerm))
{
  ATerm f_9 (ATerm t)
  {
    ATerm g_9 (ATerm t)
    {
      t = TCons_2(t, p_66, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, g_9);
    return(t);
  }
  t = iowrap_2(t, f_9, _fail);
  return(t);
}
ATerm compile_match_comp_0 (ATerm t)
{
  ATerm h_9 (ATerm t)
  {
    t = apply_to_bodies_1(t, match_to_dfa_0);
    return(t);
  }
  t = iowrap_1(t, h_9);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = compile_match_comp_0(t);
  return(t);
}
