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
Symbol sym_Operations_1;
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
  sym_Operations_1 = ATmakeSymbol("Operations", 1, ATfalse);
  ATprotectSymbol(sym_Operations_1);
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
ATerm spaste_1 (ATerm, ATerm b_84 (ATerm));
ATerm Rec_2 (ATerm, ATerm i_61 (ATerm), ATerm j_61 (ATerm));
ATerm Let_2 (ATerm, ATerm k_61 (ATerm), ATerm l_61 (ATerm));
ATerm sboundin_3 (ATerm, ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm e_84 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm h_61 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm x_83 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm x_59 (ATerm));
ATerm Scope_2 (ATerm, ATerm m_62 (ATerm), ATerm n_62 (ATerm));
ATerm tboundin_3 (ATerm, ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm a_84 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm collect_kids_1 (ATerm, ATerm w_74 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm l_68 (ATerm), ATerm m_68 (ATerm));
ATerm for_3 (ATerm, ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm q_68 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm v_69 (ATerm), ATerm w_69 (ATerm), ATerm x_69 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm o_71 (ATerm), ATerm p_71 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm u_71 (ATerm), ATerm v_71 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm i_71 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm q_70 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm v_70 (ATerm));
ATerm rename_4 (ATerm, ATerm w_71 (ATerm, ATerm (ATerm)), ATerm x_71 (ATerm), ATerm y_71 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_71 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm Seqs_1 (ATerm, ATerm g_58 (ATerm));
ATerm Call_2 (ATerm, ATerm w_61 (ATerm), ATerm x_61 (ATerm));
ATerm Prim_2 (ATerm, ATerm p_62 (ATerm), ATerm q_62 (ATerm));
ATerm Str_1 (ATerm, ATerm f_0 (ATerm));
ATerm Real_1 (ATerm, ATerm e_0 (ATerm));
ATerm Int_1 (ATerm, ATerm d_0 (ATerm));
ATerm Var_1 (ATerm, ATerm t_60 (ATerm));
ATerm Op_2 (ATerm, ATerm x_60 (ATerm), ATerm y_60 (ATerm));
ATerm Build_1 (ATerm, ATerm j_62 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm simple_strategy_0 (ATerm);
ATerm RowLet_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm g_76 (ATerm));
ATerm MatrixScope_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm assert_1 (ATerm, ATerm d_63 (ATerm));
ATerm WildPat_0 (ATerm);
ATerm default_state_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm MatchCons_2 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm ConsTransition_1 (ATerm, ATerm i_63 (ATerm));
ATerm Transition_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm rzip_1 (ATerm, ATerm l_76 (ATerm));
ATerm transitions_0 (ATerm);
ATerm Uniq_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm p_78 (ATerm));
ATerm uniq_0 (ATerm);
ATerm offsets_0 (ATerm);
ATerm length_0 (ATerm);
ATerm ConsArgs_0 (ATerm);
ATerm filter_1 (ATerm, ATerm b_72 (ATerm));
ATerm outedges_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Mixture_0 (ATerm);
ATerm ShiftColumnRow_0 (ATerm);
ATerm ShiftColumn_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm As_2 (ATerm, ATerm j_59 (ATerm), ATerm k_59 (ATerm));
ATerm Row_3 (ATerm, ATerm z_57 (ATerm), ATerm a_58 (ATerm), ATerm b_58 (ATerm));
ATerm SkipWild_0 (ATerm);
ATerm MatrixRowsEmpty_0 (ATerm);
ATerm reduce_matrix_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm a_63 (ATerm));
ATerm table_get_0 (ATerm);
ATerm begin_scope_1 (ATerm, ATerm z_62 (ATerm));
ATerm scope_2 (ATerm, ATerm b_63 (ATerm), ATerm c_63 (ATerm));
ATerm matrix_to_dfa_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm zip_1 (ATerm, ATerm b_76 (ATerm));
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
ATerm at_end_1 (ATerm, ATerm b_78 (ATerm));
ATerm conc_0 (ATerm);
ATerm MatrixMerge_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm z_72 (ATerm));
ATerm crush_3 (ATerm, ATerm o_74 (ATerm), ATerm p_74 (ATerm), ATerm q_74 (ATerm));
ATerm collect_1 (ATerm, ATerm x_74 (ATerm));
ATerm collect_offsets_0 (ATerm);
ATerm CollectSubst_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm IgnoreVar_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm e_74 (ATerm));
ATerm union_0 (ATerm);
ATerm FoldR_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm u_72 (ATerm), ATerm v_72 (ATerm));
ATerm unions_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm list_1 (ATerm, ATerm o_77 (ATerm));
ATerm CollectSplit_2 (ATerm, ATerm k_75 (ATerm), ATerm l_75 (ATerm));
ATerm is_int_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm collect_split_1 (ATerm, ATerm g_75 (ATerm));
ATerm collect_split_2 (ATerm, ATerm i_75 (ATerm), ATerm j_75 (ATerm));
ATerm collect_substitutions_0 (ATerm);
ATerm Annotate_1 (ATerm, ATerm y_84 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm add_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm z_75 (ATerm));
ATerm NZip00_0 (ATerm);
ATerm nzip0_1 (ATerm, ATerm h_76 (ATerm));
ATerm Propagate_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm e_80 (ATerm));
ATerm term_to_matrix_0 (ATerm);
ATerm MatchToMatrix_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm u_67 (ATerm), ATerm v_67 (ATerm));
ATerm repeat_1 (ATerm, ATerm x_67 (ATerm));
ATerm downup_1 (ATerm, ATerm i_80 (ATerm));
ATerm match_to_matrix_0 (ATerm);
ATerm match_to_dfa_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm m_61 (ATerm), ATerm n_61 (ATerm), ATerm o_61 (ATerm));
ATerm map_1 (ATerm, ATerm m_77 (ATerm));
ATerm Strategies_1 (ATerm, ATerm h_60 (ATerm));
ATerm Specification_1 (ATerm, ATerm j_60 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm z_84 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm r_62 (ATerm), ATerm s_62 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_79 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm x_65 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_79 (ATerm), ATerm c_79 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm x_56 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm v_77 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_65 (ATerm));
ATerm need_help_1 (ATerm, ATerm w_65 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm u_64 (ATerm), ATerm v_64 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm w_64 (ATerm), ATerm x_64 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm v_62 (ATerm), ATerm w_62 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_64 (ATerm));
ATerm iowrap_3 (ATerm, ATerm l_65 (ATerm), ATerm m_65 (ATerm), ATerm n_65 (ATerm));
ATerm iowrap_2 (ATerm, ATerm g_65 (ATerm), ATerm h_65 (ATerm));
ATerm iowrap_1 (ATerm, ATerm d_65 (ATerm));
ATerm compile_match_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL;
  g_3 = t;
  f_3 :
  if(match_cons(g_3, sym_Cons_2))
    {
      h_3 = ATgetArgument(g_3, 0);
      i_3 = ATgetArgument(g_3, 1);
      t = not_null(h_3);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm b_84 (ATerm))
{
  ATerm k_8 = t;
  if(PushChoice()==0)
    {
      ATerm g_0 (ATerm t)
      {
        t = split_2(t, _id, b_84);
        {
          ATerm h_0 (ATerm t)
          {
            ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL;
            w_3 = t;
            n_3 :
            if(match_cons(w_3, sym_TCons_2))
              {
                x_3 = ATgetArgument(w_3, 0);
                b_4 = ATgetArgument(w_3, 1);
                o_3 :
                if(match_cons(x_3, sym_SDef_3))
                  {
                    y_3 = ATgetArgument(x_3, 0);
                    z_3 = ATgetArgument(x_3, 1);
                    a_4 = ATgetArgument(x_3, 2);
                    p_3 :
                    if(match_cons(b_4, sym_TCons_2))
                      {
                        c_4 = ATgetArgument(b_4, 0);
                        d_4 = ATgetArgument(b_4, 1);
                        q_3 :
                        if(match_cons(d_4, sym_TNil_0))
                          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(c_4), not_null(z_3), not_null(a_4));
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
      t = k_8;
      {
        ATerm l_8 = t;
        if(PushChoice()==0)
          {
            ATerm i_0 (ATerm t)
            {
              t = split_2(t, _id, b_84);
              {
                ATerm j_0 (ATerm t)
                {
                  ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL;
                  h_4 = t;
                  s_3 :
                  if(match_cons(h_4, sym_TCons_2))
                    {
                      i_4 = ATgetArgument(h_4, 0);
                      l_4 = ATgetArgument(h_4, 1);
                      t_3 :
                      if(match_cons(i_4, sym_VarDec_2))
                        {
                          j_4 = ATgetArgument(i_4, 0);
                          k_4 = ATgetArgument(i_4, 1);
                          u_3 :
                          if(match_cons(l_4, sym_TCons_2))
                            {
                              m_4 = ATgetArgument(l_4, 0);
                              n_4 = ATgetArgument(l_4, 1);
                              v_3 :
                              if(match_cons(n_4, sym_TNil_0))
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(m_4), not_null(k_4));
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
            t = l_8;
            {
              ATerm k_0 (ATerm t)
              {
                t = b_84(t);
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
ATerm Rec_2 (ATerm t, ATerm i_61 (ATerm), ATerm j_61 (ATerm))
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  w_4 :
  if(match_cons(x_4, sym_Rec_2))
    {
      y_4 = ATgetArgument(x_4, 0);
      z_4 = ATgetArgument(x_4, 1);
      {
        ATerm c_5 = NULL;
        t = not_null(y_4);
        {
          ATerm e_5 = NULL;
          t = i_61(t);
          c_5 = t;
          t = not_null(z_4);
          t = j_61(t);
          e_5 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(c_5), not_null(e_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm k_61 (ATerm), ATerm l_61 (ATerm))
{
  ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL;
  n_5 = t;
  m_5 :
  if(match_cons(n_5, sym_Let_2))
    {
      o_5 = ATgetArgument(n_5, 0);
      p_5 = ATgetArgument(n_5, 1);
      {
        ATerm s_5 = NULL;
        t = not_null(o_5);
        {
          ATerm u_5 = NULL;
          t = k_61(t);
          s_5 = t;
          t = not_null(p_5);
          t = l_61(t);
          u_5 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(s_5), not_null(u_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm e_84 (ATerm))
{
  ATerm m_8 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, c_84, c_84);
      PopChoice();
    }
  else
    {
      t = m_8;
      {
        ATerm r_8 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, e_84, e_84, c_84);
            PopChoice();
          }
        else
          {
            t = r_8;
            t = Rec_2(t, e_84, c_84);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL;
  b_6 = t;
  a_6 :
  if(match_cons(b_6, sym_Rec_2))
    {
      c_6 = ATgetArgument(b_6, 0);
      d_6 = ATgetArgument(b_6, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL;
  l_6 = t;
  k_6 :
  if(match_cons(l_6, sym_SDef_3))
    {
      m_6 = ATgetArgument(l_6, 0);
      n_6 = ATgetArgument(l_6, 1);
      o_6 = ATgetArgument(l_6, 2);
      t = not_null(n_6);
      {
        ATerm l_0 (ATerm t)
        {
          ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL;
          s_6 = t;
          j_6 :
          if(match_cons(s_6, sym_VarDec_2))
            {
              t_6 = ATgetArgument(s_6, 0);
              u_6 = ATgetArgument(s_6, 1);
              t = not_null(t_6);
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
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym_Let_2))
    {
      d_7 = ATgetArgument(c_7, 0);
      e_7 = ATgetArgument(c_7, 1);
      t = not_null(d_7);
      {
        ATerm m_0 (ATerm t)
        {
          ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL;
          h_7 = t;
          a_7 :
          if(match_cons(h_7, sym_SDef_3))
            {
              i_7 = ATgetArgument(h_7, 0);
              j_7 = ATgetArgument(h_7, 1);
              k_7 = ATgetArgument(h_7, 2);
              t = not_null(i_7);
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
ATerm SVar_1 (ATerm t, ATerm h_61 (ATerm))
{
  ATerm t_7 = NULL,u_7 = NULL;
  t_7 = t;
  s_7 :
  if(match_cons(t_7, sym_SVar_1))
    {
      u_7 = ATgetArgument(t_7, 0);
      {
        ATerm w_7 = NULL;
        t = not_null(u_7);
        t = h_61(t);
        w_7 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(w_7));
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
    ATerm s_8 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = s_8;
        {
          ATerm u_8 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = u_8;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, n_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm x_83 (ATerm))
{
  t = Scope_2(t, x_83, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm x_59 (ATerm))
{
  ATerm d_8 = NULL,e_8 = NULL;
  d_8 = t;
  c_8 :
  if(match_cons(d_8, sym_DynamicRules_1))
    {
      e_8 = ATgetArgument(d_8, 0);
      {
        ATerm g_8 = NULL;
        t = not_null(e_8);
        t = x_59(t);
        g_8 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(g_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm m_62 (ATerm), ATerm n_62 (ATerm))
{
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
  o_8 = t;
  n_8 :
  if(match_cons(o_8, sym_Scope_2))
    {
      p_8 = ATgetArgument(o_8, 0);
      q_8 = ATgetArgument(o_8, 1);
      {
        ATerm t_8 = NULL;
        t = not_null(p_8);
        {
          ATerm v_8 = NULL;
          t = m_62(t);
          t_8 = t;
          t = not_null(q_8);
          t = n_62(t);
          v_8 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_8), not_null(v_8));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm a_84 (ATerm))
{
  ATerm w_8 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, a_84, y_83);
      PopChoice();
    }
  else
    {
      t = w_8;
      t = DynamicRules_1(t, y_83);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL;
  c_9 = t;
  b_9 :
  if(match_cons(c_9, sym_DynamicRules_1))
    {
      d_9 = ATgetArgument(c_9, 0);
      t = not_null(d_9);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL;
  i_9 = t;
  h_9 :
  if(match_cons(i_9, sym_Var_1))
    {
      j_9 = ATgetArgument(i_9, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_9), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm collect_kids_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm o_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = crush_3(t, o_0, union_0, w_74);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL;
  r_9 = t;
  n_9 :
  if(match_cons(r_9, sym_TCons_2))
    {
      s_9 = ATgetArgument(r_9, 0);
      t_9 = ATgetArgument(r_9, 1);
      o_9 :
      if(match_cons(t_9, sym_TCons_2))
        {
          u_9 = ATgetArgument(t_9, 0);
          x_9 = ATgetArgument(t_9, 1);
          p_9 :
          if(match_cons(u_9, sym_Cons_2))
            {
              v_9 = ATgetArgument(u_9, 0);
              w_9 = ATgetArgument(u_9, 1);
              q_9 :
              if(match_cons(x_9, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_9), not_null(s_9)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_9), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL;
  f_13 = t;
  b_13 :
  if(match_cons(f_13, sym_Cons_2))
    {
      g_13 = ATgetArgument(f_13, 0);
      l_13 = ATgetArgument(f_13, 1);
      c_13 :
      if(match_cons(g_13, sym_TCons_2))
        {
          h_13 = ATgetArgument(g_13, 0);
          i_13 = ATgetArgument(g_13, 1);
          d_13 :
          if(match_cons(i_13, sym_TCons_2))
            {
              j_13 = ATgetArgument(i_13, 0);
              k_13 = ATgetArgument(i_13, 1);
              e_13 :
              if(match_cons(k_13, sym_TNil_0))
                {
                  ATerm p_13 = NULL,q_13 = NULL,y_13 = NULL,c_15 = NULL;
                  ATerm x_8;
                  x_8 = t;
                  {
                    ATerm r_13 = NULL;
                    ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
                    t = not_null(j_13);
                    r_13 = t;
                    t = SSL_explode_term(not_null(r_13));
                    t_13 = t;
                    f_10 :
                    if(match_cons(t_13, sym_TCons_2))
                      {
                        u_13 = ATgetArgument(t_13, 0);
                        v_13 = ATgetArgument(t_13, 1);
                        g_10 :
                        if(match_cons(v_13, sym_TCons_2))
                          {
                            w_13 = ATgetArgument(v_13, 0);
                            x_13 = ATgetArgument(v_13, 1);
                            h_10 :
                            if(match_cons(x_13, sym_TNil_0))
                              {
                                if(p_13 != NULL && p_13 != u_13)
                                  _fail(u_13);
                                else
                                  p_13 = u_13;
                                if(q_13 != NULL && q_13 != w_13)
                                  _fail(w_13);
                                else
                                  q_13 = w_13;
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
                  t = x_8;
                  {
                    ATerm z_13 = NULL;
                    ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,w_14 = NULL,x_14 = NULL;
                    t = not_null(h_13);
                    z_13 = t;
                    t = SSL_explode_term(not_null(z_13));
                    b_14 = t;
                    u_10 :
                    if(match_cons(b_14, sym_TCons_2))
                      {
                        c_14 = ATgetArgument(b_14, 0);
                        d_14 = ATgetArgument(b_14, 1);
                        v_10 :
                        if(match_cons(d_14, sym_TCons_2))
                          {
                            w_14 = ATgetArgument(d_14, 0);
                            x_14 = ATgetArgument(d_14, 1);
                            w_11 :
                            if(match_cons(x_14, sym_TNil_0))
                              {
                                if(p_13 != NULL && p_13 != c_14)
                                  _fail(c_14);
                                else
                                  p_13 = c_14;
                                if(y_13 != NULL && y_13 != w_14)
                                  _fail(w_14);
                                else
                                  y_13 = w_14;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    c_15 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_15), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_13), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
  y_15 = t;
  u_15 :
  if(match_cons(y_15, sym_Cons_2))
    {
      z_15 = ATgetArgument(y_15, 0);
      e_16 = ATgetArgument(y_15, 1);
      v_15 :
      if(match_cons(z_15, sym_TCons_2))
        {
          a_16 = ATgetArgument(z_15, 0);
          b_16 = ATgetArgument(z_15, 1);
          w_15 :
          if(match_cons(b_16, sym_TCons_2))
            {
              c_16 = ATgetArgument(b_16, 0);
              d_16 = ATgetArgument(b_16, 1);
              x_15 :
              if(match_cons(d_16, sym_TNil_0))
                {
                  ATerm g_16 = NULL;
                  if(a_16 != NULL && a_16 != c_16)
                    _fail(c_16);
                  else
                    a_16 = c_16;
                  if(g_16 != NULL && g_16 != e_16)
                    _fail(e_16);
                  else
                    g_16 = e_16;
                  t = not_null(g_16);
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
ATerm while_not_2 (ATerm t, ATerm l_68 (ATerm), ATerm m_68 (ATerm))
{
  ATerm i_16 (ATerm t)
  {
    ATerm y_8 = t;
    if(PushChoice()==0)
      {
        t = l_68(t);
        PopChoice();
      }
    else
      {
        t = y_8;
        t = m_68(t);
        t = i_16(t);
      }
    return(t);
  }
  t = i_16(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm q_68 (ATerm))
{
  t = o_68(t);
  t = while_not_2(t, p_68, q_68);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm z_8 = t;
  if(PushChoice()==0)
    {
      ATerm p_0 (ATerm t)
      {
        ATerm o_16 = NULL;
        o_16 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_16), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm q_0 (ATerm t)
      {
        ATerm s_0 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, s_0);
        return(t);
      }
      ATerm r_0 (ATerm t)
      {
        ATerm a_9 = t;
        if(PushChoice()==0)
          {
            ATerm t_0 (ATerm t)
            {
              ATerm u_0 (ATerm t)
              {
                ATerm e_9 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = e_9;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, u_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, t_0);
            PopChoice();
          }
        else
          {
            t = a_9;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, p_0, q_0, r_0);
      PopChoice();
    }
  else
    {
      t = z_8;
      {
        ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
        q_16 = t;
        l_16 :
        if(match_cons(q_16, sym_TCons_2))
          {
            r_16 = ATgetArgument(q_16, 0);
            s_16 = ATgetArgument(q_16, 1);
            m_16 :
            if(match_cons(s_16, sym_TCons_2))
              {
                t_16 = ATgetArgument(s_16, 0);
                u_16 = ATgetArgument(s_16, 1);
                n_16 :
                if(match_cons(u_16, sym_TNil_0))
                  {
                    t = not_null(r_16);
                    {
                      ATerm z_16 (ATerm t)
                      {
                        ATerm f_9 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = f_9;
                            {
                              ATerm g_9 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm v_0 (ATerm t)
                                  {
                                    t = not_null(t_16);
                                    return(t);
                                  }
                                  t = HdMember_1(t, v_0);
                                  t = z_16(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = g_9;
                                  t = Cons_2(t, _id, z_16);
                                }
                            }
                          }
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
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm v_69 (ATerm), ATerm w_69 (ATerm), ATerm x_69 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm d_17 (ATerm t)
  {
    ATerm k_9 = t;
    if(PushChoice()==0)
      {
        t = v_69(t);
        PopChoice();
      }
    else
      {
        t = k_9;
        {
          ATerm l_9 = t;
          if(PushChoice()==0)
            {
              ATerm b_17 = NULL;
              ATerm m_9;
              m_9 = t;
              {
                ATerm c_17 = NULL;
                t = w_69(t);
                c_17 = t;
                if(b_17 != NULL && b_17 != c_17)
                  _fail(c_17);
                else
                  b_17 = c_17;
              }
              t = m_9;
              {
                ATerm w_0 (ATerm t)
                {
                  ATerm y_0 (ATerm t)
                  {
                    t = not_null(b_17);
                    return(t);
                  }
                  t = split_2(t, d_17, y_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm x_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = x_69(t, w_0, d_17, x_0);
                t = collect_kids_1(t, _id);
              }
              PopChoice();
            }
          else
            {
              t = l_9;
              t = collect_kids_1(t, d_17);
            }
        }
      }
    return(t);
  }
  t = d_17(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm y_9 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = y_9;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, z_0, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  k_17 = t;
  h_17 :
  if(match_cons(k_17, sym_Scope_2))
    {
      l_17 = ATgetArgument(k_17, 0);
      j_17 = ATgetArgument(k_17, 1);
      t = not_null(l_17);
    }
  else
    {
      if(match_cons(k_17, sym_LRule_1))
        {
          l_17 = ATgetArgument(k_17, 0);
          i_17 :
          if(match_cons(l_17, sym_Rule_3))
            {
              m_17 = ATgetArgument(l_17, 0);
              n_17 = ATgetArgument(l_17, 1);
              o_17 = ATgetArgument(l_17, 2);
              t = not_null(m_17);
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
ATerm DistBinding_2 (ATerm t, ATerm o_71 (ATerm), ATerm p_71 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
  d_18 = t;
  z_17 :
  if(match_cons(d_18, sym_TCons_2))
    {
      e_18 = ATgetArgument(d_18, 0);
      f_18 = ATgetArgument(d_18, 1);
      a_18 :
      if(match_cons(f_18, sym_TCons_2))
        {
          g_18 = ATgetArgument(f_18, 0);
          h_18 = ATgetArgument(f_18, 1);
          b_18 :
          if(match_cons(h_18, sym_TCons_2))
            {
              i_18 = ATgetArgument(h_18, 0);
              j_18 = ATgetArgument(h_18, 1);
              c_18 :
              if(match_cons(j_18, sym_TNil_0))
                {
                  t = not_null(e_18);
                  {
                    ATerm a_1 (ATerm t)
                    {
                      ATerm n_18 = NULL;
                      n_18 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = o_71(t);
                      return(t);
                    }
                    ATerm b_1 (ATerm t)
                    {
                      ATerm p_18 = NULL;
                      p_18 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = o_71(t);
                      return(t);
                    }
                    t = p_71(t, a_1, b_1, _id);
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
ATerm RnBinding_2 (ATerm t, ATerm u_71 (ATerm), ATerm v_71 (ATerm, ATerm (ATerm)))
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
  e_19 = t;
  b_19 :
  if(match_cons(e_19, sym_TCons_2))
    {
      f_19 = ATgetArgument(e_19, 0);
      g_19 = ATgetArgument(e_19, 1);
      c_19 :
      if(match_cons(g_19, sym_TCons_2))
        {
          h_19 = ATgetArgument(g_19, 0);
          i_19 = ATgetArgument(g_19, 1);
          d_19 :
          if(match_cons(i_19, sym_TNil_0))
            {
              ATerm l_19 = NULL,v_19 = NULL,w_19 = NULL,u_20 = NULL;
              ATerm x_19 = NULL;
              t = not_null(f_19);
              {
                ATerm q_20 = NULL;
                t = u_71(t);
                x_19 = t;
                if(l_19 != NULL && l_19 != x_19)
                  _fail(x_19);
                else
                  l_19 = x_19;
                {
                  ATerm r_20 = NULL;
                  t = map_1(t, new_0);
                  q_20 = t;
                  if(v_19 != NULL && v_19 != q_20)
                    _fail(q_20);
                  else
                    v_19 = q_20;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm t_20 = NULL;
                    t = zip_1(t, _id);
                    r_20 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = conc_0(t);
                    t_20 = t;
                    if(w_19 != NULL && w_19 != t_20)
                      _fail(t_20);
                    else
                      w_19 = t_20;
                  }
                }
              }
              t = not_null(f_19);
              {
                ATerm c_1 (ATerm t)
                {
                  t = not_null(v_19);
                  return(t);
                }
                t = v_71(t, c_1);
                u_20 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_19), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,m_21 = NULL,s_21 = NULL,t_21 = NULL;
  h_21 = t;
  d_21 :
  if(match_cons(h_21, sym_TCons_2))
    {
      i_21 = ATgetArgument(h_21, 0);
      j_21 = ATgetArgument(h_21, 1);
      e_21 :
      if(match_cons(j_21, sym_TCons_2))
        {
          k_21 = ATgetArgument(j_21, 0);
          t_21 = ATgetArgument(j_21, 1);
          f_21 :
          if(match_cons(k_21, sym_Cons_2))
            {
              m_21 = ATgetArgument(k_21, 0);
              s_21 = ATgetArgument(k_21, 1);
              g_21 :
              if(match_cons(t_21, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_21), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
  k_22 = t;
  y_21 :
  if(match_cons(k_22, sym_TCons_2))
    {
      l_22 = ATgetArgument(k_22, 0);
      m_22 = ATgetArgument(k_22, 1);
      z_21 :
      if(match_cons(m_22, sym_TCons_2))
        {
          n_22 = ATgetArgument(m_22, 0);
          u_22 = ATgetArgument(m_22, 1);
          a_22 :
          if(match_cons(n_22, sym_Cons_2))
            {
              o_22 = ATgetArgument(n_22, 0);
              t_22 = ATgetArgument(n_22, 1);
              g_22 :
              if(match_cons(o_22, sym_TCons_2))
                {
                  p_22 = ATgetArgument(o_22, 0);
                  q_22 = ATgetArgument(o_22, 1);
                  h_22 :
                  if(match_cons(q_22, sym_TCons_2))
                    {
                      r_22 = ATgetArgument(q_22, 0);
                      s_22 = ATgetArgument(q_22, 1);
                      i_22 :
                      if(match_cons(s_22, sym_TNil_0))
                        {
                          j_22 :
                          if(match_cons(u_22, sym_TNil_0))
                            {
                              ATerm x_22 = NULL;
                              if(l_22 != NULL && l_22 != p_22)
                                _fail(p_22);
                              else
                                l_22 = p_22;
                              if(x_22 != NULL && x_22 != r_22)
                                _fail(r_22);
                              else
                                x_22 = r_22;
                              t = not_null(x_22);
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
  ATerm z_9 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = z_9;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm i_71 (ATerm, ATerm (ATerm)))
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL;
  e_23 = t;
  b_23 :
  if(match_cons(e_23, sym_TCons_2))
    {
      f_23 = ATgetArgument(e_23, 0);
      g_23 = ATgetArgument(e_23, 1);
      c_23 :
      if(match_cons(g_23, sym_TCons_2))
        {
          h_23 = ATgetArgument(g_23, 0);
          i_23 = ATgetArgument(g_23, 1);
          d_23 :
          if(match_cons(i_23, sym_TNil_0))
            {
              t = not_null(f_23);
              {
                ATerm d_1 (ATerm t)
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = not_null(h_23);
                    return(t);
                  }
                  t = split_2(t, _id, e_1);
                  t = lookup_0(t);
                  return(t);
                }
                t = i_71(t, d_1);
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
ATerm all_dist_1 (ATerm t, ATerm q_70 (ATerm))
{
  ATerm x_23 = NULL,y_23 = NULL,c_24 = NULL,d_24 = NULL,r_24 = NULL;
  x_23 = t;
  o_23 :
  if(match_cons(x_23, sym_TCons_2))
    {
      y_23 = ATgetArgument(x_23, 0);
      c_24 = ATgetArgument(x_23, 1);
      v_23 :
      if(match_cons(c_24, sym_TCons_2))
        {
          d_24 = ATgetArgument(c_24, 0);
          r_24 = ATgetArgument(c_24, 1);
          w_23 :
          if(match_cons(r_24, sym_TNil_0))
            {
              t = not_null(y_23);
              {
                ATerm f_1 (ATerm t)
                {
                  ATerm u_24 = NULL;
                  u_24 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_24), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = q_70(t);
                  return(t);
                }
                t = _all(t, f_1);
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
ATerm env_alltd_1 (ATerm t, ATerm v_70 (ATerm))
{
  ATerm y_24 (ATerm t)
  {
    ATerm a_10 = t;
    if(PushChoice()==0)
      {
        t = v_70(t);
        PopChoice();
      }
    else
      {
        t = a_10;
        t = all_dist_1(t, y_24);
      }
    return(t);
  }
  t = y_24(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm w_71 (ATerm, ATerm (ATerm)), ATerm x_71 (ATerm), ATerm y_71 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_71 (ATerm, ATerm (ATerm)))
{
  ATerm a_25 = NULL;
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_25), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  {
    ATerm d_25 (ATerm t)
    {
      ATerm g_1 (ATerm t)
      {
        ATerm b_10 = t;
        if(PushChoice()==0)
          {
            t = RnVar_1(t, w_71);
            PopChoice();
          }
        else
          {
            t = b_10;
            t = RnBinding_2(t, x_71, z_71);
            t = DistBinding_2(t, d_25, y_71);
          }
        return(t);
      }
      t = env_alltd_1(t, g_1);
      return(t);
    }
    t = d_25(t);
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
ATerm concat_0 (ATerm t)
{
  ATerm c_10 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = c_10;
      {
        ATerm i_25 = NULL,j_25 = NULL,p_25 = NULL;
        i_25 = t;
        h_25 :
        if(match_cons(i_25, sym_Cons_2))
          {
            j_25 = ATgetArgument(i_25, 0);
            p_25 = ATgetArgument(i_25, 1);
            t = not_null(j_25);
            {
              ATerm h_1 (ATerm t)
              {
                t = not_null(p_25);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, h_1);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm Seqs_1 (ATerm t, ATerm g_58 (ATerm))
{
  ATerm x_25 = NULL,y_25 = NULL;
  x_25 = t;
  w_25 :
  if(match_cons(x_25, sym_Seqs_1))
    {
      y_25 = ATgetArgument(x_25, 0);
      {
        ATerm a_26 = NULL;
        t = not_null(y_25);
        t = g_58(t);
        a_26 = t;
        t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(a_26));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm w_61 (ATerm), ATerm x_61 (ATerm))
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
  l_26 = t;
  k_26 :
  if(match_cons(l_26, sym_Call_2))
    {
      m_26 = ATgetArgument(l_26, 0);
      n_26 = ATgetArgument(l_26, 1);
      {
        ATerm q_26 = NULL;
        t = not_null(m_26);
        {
          ATerm s_26 = NULL;
          t = w_61(t);
          q_26 = t;
          t = not_null(n_26);
          t = x_61(t);
          s_26 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(q_26), not_null(s_26));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm p_62 (ATerm), ATerm q_62 (ATerm))
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
  b_27 = t;
  a_27 :
  if(match_cons(b_27, sym_Prim_2))
    {
      c_27 = ATgetArgument(b_27, 0);
      d_27 = ATgetArgument(b_27, 1);
      {
        ATerm g_27 = NULL;
        t = not_null(c_27);
        {
          ATerm i_27 = NULL;
          t = p_62(t);
          g_27 = t;
          t = not_null(d_27);
          t = q_62(t);
          i_27 = t;
          t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(g_27), not_null(i_27));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm f_0 (ATerm))
{
  ATerm s_27 = NULL,t_27 = NULL;
  s_27 = t;
  r_27 :
  if(match_cons(s_27, sym_Str_1))
    {
      t_27 = ATgetArgument(s_27, 0);
      {
        ATerm d_10 = t;
        if(PushChoice()==0)
          {
            ATerm v_27 = NULL;
            t = not_null(t_27);
            t = f_0(t);
            v_27 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(v_27));
            PopChoice();
          }
        else
          {
            t = d_10;
            {
              ATerm y_27 = NULL;
              t = not_null(t_27);
              t = f_0(t);
              y_27 = t;
              t = (ATerm) ATmakeAppl(sym_Str_1, not_null(y_27));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Real_1 (ATerm t, ATerm e_0 (ATerm))
{
  ATerm j_28 = NULL,k_28 = NULL;
  j_28 = t;
  i_28 :
  if(match_cons(j_28, sym_Real_1))
    {
      k_28 = ATgetArgument(j_28, 0);
      {
        ATerm e_10 = t;
        if(PushChoice()==0)
          {
            ATerm m_28 = NULL;
            t = not_null(k_28);
            t = e_0(t);
            m_28 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, not_null(m_28));
            PopChoice();
          }
        else
          {
            t = e_10;
            {
              ATerm p_28 = NULL;
              t = not_null(k_28);
              t = e_0(t);
              p_28 = t;
              t = (ATerm) ATmakeAppl(sym_Real_1, not_null(p_28));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Int_1 (ATerm t, ATerm d_0 (ATerm))
{
  ATerm a_29 = NULL,b_29 = NULL;
  a_29 = t;
  z_28 :
  if(match_cons(a_29, sym_Int_1))
    {
      b_29 = ATgetArgument(a_29, 0);
      {
        ATerm i_10 = t;
        if(PushChoice()==0)
          {
            ATerm d_29 = NULL;
            t = not_null(b_29);
            t = d_0(t);
            d_29 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, not_null(d_29));
            PopChoice();
          }
        else
          {
            t = i_10;
            {
              ATerm g_29 = NULL;
              t = not_null(b_29);
              t = d_0(t);
              g_29 = t;
              t = (ATerm) ATmakeAppl(sym_Int_1, not_null(g_29));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm t_60 (ATerm))
{
  ATerm p_29 = NULL,q_29 = NULL;
  p_29 = t;
  o_29 :
  if(match_cons(p_29, sym_Var_1))
    {
      q_29 = ATgetArgument(p_29, 0);
      {
        ATerm s_29 = NULL;
        t = not_null(q_29);
        t = t_60(t);
        s_29 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_29));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm x_60 (ATerm), ATerm y_60 (ATerm))
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
  a_30 = t;
  z_29 :
  if(match_cons(a_30, sym_Op_2))
    {
      b_30 = ATgetArgument(a_30, 0);
      c_30 = ATgetArgument(a_30, 1);
      {
        ATerm f_30 = NULL;
        t = not_null(b_30);
        {
          ATerm h_30 = NULL;
          t = x_60(t);
          f_30 = t;
          t = not_null(c_30);
          t = y_60(t);
          h_30 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(f_30), not_null(h_30));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm j_62 (ATerm))
{
  ATerm p_30 = NULL,q_30 = NULL;
  p_30 = t;
  o_30 :
  if(match_cons(p_30, sym_Build_1))
    {
      q_30 = ATgetArgument(p_30, 0);
      {
        ATerm s_30 = NULL;
        t = not_null(q_30);
        t = j_62(t);
        s_30 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(s_30));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm x_30 = NULL;
  x_30 = t;
  w_30 :
  if(!(match_cons(x_30, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm z_30 = NULL;
  z_30 = t;
  y_30 :
  if(!(match_cons(z_30, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm simple_strategy_0 (ATerm t)
{
  ATerm j_10 = t;
  if(PushChoice()==0)
    {
      t = Id_0(t);
      PopChoice();
    }
  else
    {
      t = j_10;
      {
        ATerm k_10 = t;
        if(PushChoice()==0)
          {
            t = Fail_0(t);
            PopChoice();
          }
        else
          {
            t = k_10;
            {
              ATerm l_10 = t;
              if(PushChoice()==0)
                {
                  t = Seqs_1(t, Nil_0);
                  PopChoice();
                }
              else
                {
                  t = l_10;
                  {
                    ATerm m_10 = t;
                    if(PushChoice()==0)
                      {
                        ATerm i_1 (ATerm t)
                        {
                          ATerm n_10 = t;
                          if(PushChoice()==0)
                            {
                              t = Var_1(t, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = n_10;
                              {
                                ATerm o_10 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm j_1 (ATerm t)
                                    {
                                      ATerm k_1 (ATerm t)
                                      {
                                        t = Var_1(t, _id);
                                        return(t);
                                      }
                                      t = list_1(t, k_1);
                                      return(t);
                                    }
                                    t = Op_2(t, _id, j_1);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = o_10;
                                    {
                                      ATerm p_10 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Int_1(t, _id);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = p_10;
                                          {
                                            ATerm q_10 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = Real_1(t, _id);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = q_10;
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
                        t = Build_1(t, i_1);
                        PopChoice();
                      }
                    else
                      {
                        t = m_10;
                        {
                          ATerm r_10 = t;
                          if(PushChoice()==0)
                            {
                              t = Prim_2(t, _id, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = r_10;
                              {
                                ATerm s_10 = t;
                                if(PushChoice()==0)
                                  {
                                    t = Call_2(t, _id, _id);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = s_10;
                                    {
                                      ATerm l_1 (ATerm t)
                                      {
                                        t = Cons_2(t, simple_strategy_0, Nil_0);
                                        return(t);
                                      }
                                      t = Seqs_1(t, l_1);
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
  ATerm f_31 = NULL,j_31 = NULL,k_31 = NULL;
  f_31 = t;
  e_31 :
  if(match_cons(f_31, sym_Row_2))
    {
      j_31 = ATgetArgument(f_31, 0);
      k_31 = ATgetArgument(f_31, 1);
      {
        ATerm t_10 = t;
        if(PushChoice()==0)
          {
            t = not_null(k_31);
            t = simple_strategy_0(t);
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Row_3, (ATerm)ATmakeAppl(sym_Nil_0), not_null(j_31), not_null(k_31)), (ATerm) ATmakeAppl(sym_TNil_0)));
            PopChoice();
          }
        else
          {
            t = t_10;
            {
              ATerm p_31 = NULL;
              ATerm t_31 = NULL;
              t = not_null(k_31);
              {
                ATerm w_10 = t;
                if(PushChoice()==0)
                  {
                    t = simple_strategy_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = w_10;
                t = new_0(t);
                t_31 = t;
                if(p_31 != NULL && p_31 != t_31)
                  _fail(t_31);
                else
                  p_31 = t_31;
              }
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_3, not_null(p_31), (ATerm)ATmakeAppl(sym_Nil_0), not_null(k_31)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Row_3, (ATerm)ATmakeAppl(sym_Nil_0), not_null(j_31), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_31)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm g_76 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, g_76);
  return(t);
}
ATerm MatrixScope_0 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL;
  d_32 = t;
  c_32 :
  if(match_cons(d_32, sym_Matrix_2))
    {
      e_32 = ATgetArgument(d_32, 0);
      f_32 = ATgetArgument(d_32, 1);
      {
        ATerm i_32 = NULL,j_32 = NULL;
        ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL;
        t = not_null(f_32);
        t = unzip_1(t, RowLet_0);
        {
          ATerm m_1 (ATerm t)
          {
            t = TCons_2(t, _id, TNil_0);
            return(t);
          }
          t = TCons_2(t, concat_0, m_1);
          k_32 = t;
          z_31 :
          if(match_cons(k_32, sym_TCons_2))
            {
              l_32 = ATgetArgument(k_32, 0);
              m_32 = ATgetArgument(k_32, 1);
              a_32 :
              if(match_cons(m_32, sym_TCons_2))
                {
                  n_32 = ATgetArgument(m_32, 0);
                  o_32 = ATgetArgument(m_32, 1);
                  b_32 :
                  if(match_cons(o_32, sym_TNil_0))
                    {
                      if(i_32 != NULL && i_32 != l_32)
                        _fail(l_32);
                      else
                        i_32 = l_32;
                      if(j_32 != NULL && j_32 != n_32)
                        _fail(n_32);
                      else
                        j_32 = n_32;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_32), (ATerm) ATmakeAppl(sym_Let_2, not_null(i_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(j_32)))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
  x_32 = t;
  t_32 :
  if(match_cons(x_32, sym_TCons_2))
    {
      y_32 = ATgetArgument(x_32, 0);
      z_32 = ATgetArgument(x_32, 1);
      u_32 :
      if(match_cons(z_32, sym_TCons_2))
        {
          a_33 = ATgetArgument(z_32, 0);
          b_33 = ATgetArgument(z_32, 1);
          v_32 :
          if(match_cons(b_33, sym_TCons_2))
            {
              c_33 = ATgetArgument(b_33, 0);
              d_33 = ATgetArgument(b_33, 1);
              w_32 :
              if(match_cons(d_33, sym_TNil_0))
                {
                  ATerm x_10;
                  x_10 = t;
                  {
                    ATerm h_33 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_33), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm y_10 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = y_10;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      h_33 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_33), not_null(h_33)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = x_10;
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
ATerm assert_1 (ATerm t, ATerm d_63 (ATerm))
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL;
  s_33 = t;
  p_33 :
  if(match_cons(s_33, sym_TCons_2))
    {
      t_33 = ATgetArgument(s_33, 0);
      u_33 = ATgetArgument(s_33, 1);
      q_33 :
      if(match_cons(u_33, sym_TCons_2))
        {
          v_33 = ATgetArgument(u_33, 0);
          w_33 = ATgetArgument(u_33, 1);
          r_33 :
          if(match_cons(w_33, sym_TNil_0))
            {
              ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
              ATerm z_10;
              z_10 = t;
              {
                ATerm c_34 = NULL;
                ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL;
                t = d_63(t);
                c_34 = t;
                if(z_33 != NULL && z_33 != c_34)
                  _fail(c_34);
                else
                  z_33 = c_34;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_33), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm a_11 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = a_11;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  d_34 = t;
                  o_33 :
                  if(match_cons(d_34, sym_Cons_2))
                    {
                      e_34 = ATgetArgument(d_34, 0);
                      f_34 = ATgetArgument(d_34, 1);
                      if(a_34 != NULL && a_34 != e_34)
                        _fail(e_34);
                      else
                        a_34 = e_34;
                      if(b_34 != NULL && b_34 != f_34)
                        _fail(f_34);
                      else
                        b_34 = f_34;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_33), not_null(a_34)), not_null(b_34)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  else
                    _fail(t);
                }
              }
              t = z_10;
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
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
  o_34 = t;
  k_34 :
  if(match_cons(o_34, sym_Row_3))
    {
      p_34 = ATgetArgument(o_34, 0);
      u_34 = ATgetArgument(o_34, 1);
      v_34 = ATgetArgument(o_34, 2);
      l_34 :
      if(match_cons(p_34, sym_Cons_2))
        {
          q_34 = ATgetArgument(p_34, 0);
          t_34 = ATgetArgument(p_34, 1);
          m_34 :
          if(match_cons(q_34, sym_As_2))
            {
              r_34 = ATgetArgument(q_34, 0);
              s_34 = ATgetArgument(q_34, 1);
              n_34 :
              if(match_cons(s_34, sym_Wld_0))
                t = (ATerm) ATmakeAppl(sym_Row_3, not_null(t_34), not_null(u_34), not_null(v_34));
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
  ATerm b_35 = NULL;
  t = filter_1(t, WildPat_0);
  b_35 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(b_35));
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL;
  m_35 = t;
  g_35 :
  if(match_cons(m_35, sym_TCons_2))
    {
      n_35 = ATgetArgument(m_35, 0);
      o_35 = ATgetArgument(m_35, 1);
      h_35 :
      if(match_cons(o_35, sym_TCons_2))
        {
          p_35 = ATgetArgument(o_35, 0);
          q_35 = ATgetArgument(o_35, 1);
          l_35 :
          if(match_cons(q_35, sym_TNil_0))
            {
              if(n_35 != NULL && n_35 != p_35)
                _fail(p_35);
              else
                n_35 = p_35;
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
ATerm MatchCons_2 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm b_37 = NULL,c_37 = NULL,f_37 = NULL;
  f_37 = t;
  a_37 :
  if(match_cons(f_37, sym_Op_2))
    {
      c_37 = ATgetArgument(f_37, 0);
      b_37 = ATgetArgument(f_37, 1);
      {
        ATerm i_37 = NULL;
        ATerm j_37 = NULL,k_37 = NULL,n_37 = NULL;
        t = b_0(t);
        j_37 = t;
        c_36 :
        if(match_cons(j_37, sym_Fun_2))
          {
            k_37 = ATgetArgument(j_37, 0);
            n_37 = ATgetArgument(j_37, 1);
            {
              ATerm o_37 = NULL;
              if(c_37 != NULL && c_37 != k_37)
                _fail(k_37);
              else
                c_37 = k_37;
              if(i_37 != NULL && i_37 != n_37)
                _fail(n_37);
              else
                i_37 = n_37;
              t = not_null(b_37);
              t = length_0(t);
              o_37 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_37), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_37), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = eq_0(t);
            }
          }
        else
          _fail(t);
        t = not_null(b_37);
      }
    }
  else
    {
      if(match_cons(f_37, sym_Str_1))
        {
          c_37 = ATgetArgument(f_37, 0);
          {
            ATerm r_37 = NULL,s_37 = NULL;
            t = b_0(t);
            r_37 = t;
            f_36 :
            if(match_cons(r_37, sym_Str_1))
              {
                s_37 = ATgetArgument(r_37, 0);
                {
                  ATerm t_37 = NULL;
                  if(c_37 != NULL && c_37 != s_37)
                    _fail(s_37);
                  else
                    c_37 = s_37;
                  t = c_0(t);
                  t_37 = t;
                  e_36 :
                  if(!(match_cons(t_37, sym_Nil_0)))
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Nil_0);
          }
        }
      else
        {
          if(match_cons(f_37, sym_Real_1))
            {
              c_37 = ATgetArgument(f_37, 0);
              {
                ATerm v_37 = NULL,w_37 = NULL;
                t = b_0(t);
                v_37 = t;
                n_36 :
                if(match_cons(v_37, sym_Real_1))
                  {
                    w_37 = ATgetArgument(v_37, 0);
                    {
                      ATerm x_37 = NULL;
                      if(c_37 != NULL && c_37 != w_37)
                        _fail(w_37);
                      else
                        c_37 = w_37;
                      t = c_0(t);
                      x_37 = t;
                      h_36 :
                      if(!(match_cons(x_37, sym_Nil_0)))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Nil_0);
              }
            }
          else
            {
              if(match_cons(f_37, sym_Int_1))
                {
                  c_37 = ATgetArgument(f_37, 0);
                  {
                    ATerm z_37 = NULL,a_38 = NULL;
                    t = b_0(t);
                    z_37 = t;
                    w_36 :
                    if(match_cons(z_37, sym_Int_1))
                      {
                        a_38 = ATgetArgument(z_37, 0);
                        {
                          ATerm b_38 = NULL;
                          if(c_37 != NULL && c_37 != a_38)
                            _fail(a_38);
                          else
                            c_37 = a_38;
                          t = c_0(t);
                          b_38 = t;
                          v_36 :
                          if(!(match_cons(b_38, sym_Nil_0)))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                  }
                }
              else
                {
                  if(match_cons(f_37, sym_Wld_0))
                    {
                      ATerm c_38 = NULL;
                      ATerm g_38 = NULL;
                      t = c_0(t);
                      {
                        ATerm n_1 (ATerm t)
                        {
                          ATerm d_38 = NULL,e_38 = NULL;
                          d_38 = t;
                          y_36 :
                          if(match_cons(d_38, sym_Var_1))
                            {
                              e_38 = ATgetArgument(d_38, 0);
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(e_38)), (ATerm) ATmakeAppl(sym_Wld_0));
                            }
                          else
                            _fail(t);
                          return(t);
                        }
                        t = map_1(t, n_1);
                        g_38 = t;
                        if(c_38 != NULL && c_38 != g_38)
                          _fail(g_38);
                        else
                          c_38 = g_38;
                      }
                      t = not_null(c_38);
                    }
                  else
                    _fail(t);
                }
            }
        }
    }
  return(t);
}
ATerm ConsTransition_1 (ATerm t, ATerm i_63 (ATerm))
{
  ATerm j_39 = NULL,k_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL;
  j_39 = t;
  g_39 :
  if(match_cons(j_39, sym_Row_3))
    {
      k_39 = ATgetArgument(j_39, 0);
      x_39 = ATgetArgument(j_39, 1);
      y_39 = ATgetArgument(j_39, 2);
      h_39 :
      if(match_cons(k_39, sym_Cons_2))
        {
          n_39 = ATgetArgument(k_39, 0);
          w_39 = ATgetArgument(k_39, 1);
          i_39 :
          if(match_cons(n_39, sym_As_2))
            {
              o_39 = ATgetArgument(n_39, 0);
              p_39 = ATgetArgument(n_39, 1);
              {
                ATerm z_40 = NULL,b_41 = NULL;
                ATerm a_41 = NULL;
                t = not_null(p_39);
                t = i_63(t);
                a_41 = t;
                if(z_40 != NULL && z_40 != a_41)
                  _fail(a_41);
                else
                  z_40 = a_41;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_40), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_39), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = conc_0(t);
                b_41 = t;
                t = (ATerm) ATmakeAppl(sym_Row_3, not_null(w_39), not_null(b_41), not_null(y_39));
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
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL;
  o_41 = t;
  i_41 :
  if(match_cons(o_41, sym_TCons_2))
    {
      p_41 = ATgetArgument(o_41, 0);
      q_41 = ATgetArgument(o_41, 1);
      j_41 :
      if(match_cons(q_41, sym_TCons_2))
        {
          r_41 = ATgetArgument(q_41, 0);
          w_41 = ATgetArgument(q_41, 1);
          k_41 :
          if(match_cons(r_41, sym_TCons_2))
            {
              s_41 = ATgetArgument(r_41, 0);
              t_41 = ATgetArgument(r_41, 1);
              l_41 :
              if(match_cons(t_41, sym_TCons_2))
                {
                  u_41 = ATgetArgument(t_41, 0);
                  v_41 = ATgetArgument(t_41, 1);
                  m_41 :
                  if(match_cons(v_41, sym_TNil_0))
                    {
                      n_41 :
                      if(match_cons(w_41, sym_TNil_0))
                        {
                          ATerm a_42 = NULL;
                          ATerm b_42 = NULL;
                          t = not_null(p_41);
                          {
                            ATerm o_1 (ATerm t)
                            {
                              ATerm p_1 (ATerm t)
                              {
                                ATerm q_1 (ATerm t)
                                {
                                  t = not_null(s_41);
                                  return(t);
                                }
                                ATerm r_1 (ATerm t)
                                {
                                  t = not_null(u_41);
                                  return(t);
                                }
                                t = MatchCons_2(t, q_1, r_1);
                                return(t);
                              }
                              t = ConsTransition_1(t, p_1);
                              return(t);
                            }
                            t = filter_1(t, o_1);
                            b_42 = t;
                            if(a_42 != NULL && a_42 != b_42)
                              _fail(b_42);
                            else
                              a_42 = b_42;
                          }
                          t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(s_41), not_null(u_41), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(a_42)));
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
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL;
  j_42 = t;
  f_42 :
  if(match_cons(j_42, sym_TCons_2))
    {
      k_42 = ATgetArgument(j_42, 0);
      l_42 = ATgetArgument(j_42, 1);
      g_42 :
      if(match_cons(l_42, sym_TCons_2))
        {
          m_42 = ATgetArgument(l_42, 0);
          p_42 = ATgetArgument(l_42, 1);
          h_42 :
          if(match_cons(m_42, sym_Cons_2))
            {
              n_42 = ATgetArgument(m_42, 0);
              o_42 = ATgetArgument(m_42, 1);
              i_42 :
              if(match_cons(p_42, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(k_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_42), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(k_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_42), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL;
  e_43 = t;
  z_42 :
  if(match_cons(e_43, sym_TCons_2))
    {
      f_43 = ATgetArgument(e_43, 0);
      g_43 = ATgetArgument(e_43, 1);
      a_43 :
      if(match_cons(g_43, sym_TCons_2))
        {
          h_43 = ATgetArgument(g_43, 0);
          i_43 = ATgetArgument(g_43, 1);
          c_43 :
          if(match_cons(h_43, sym_Nil_0))
            {
              d_43 :
              if(match_cons(i_43, sym_TNil_0))
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
ATerm rzip_1 (ATerm t, ATerm l_76 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, l_76);
  return(t);
}
ATerm transitions_0 (ATerm t)
{
  t = rzip_1(t, Transition_0);
  return(t);
}
ATerm Uniq_0 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
  s_43 = t;
  n_43 :
  if(match_cons(s_43, sym_Cons_2))
    {
      t_43 = ATgetArgument(s_43, 0);
      u_43 = ATgetArgument(s_43, 1);
      {
        ATerm x_43 = NULL;
        ATerm z_43 = NULL;
        t = not_null(u_43);
        {
          ATerm s_1 (ATerm t)
          {
            ATerm b_11 = t;
            if(PushChoice()==0)
              {
                ATerm y_43 = NULL;
                y_43 = t;
                if(t_43 != NULL && t_43 != y_43)
                  _fail(y_43);
                else
                  t_43 = y_43;
                PopChoice();
                _fail(t);
              }
            else
              t = b_11;
            return(t);
          }
          t = filter_1(t, s_1);
          z_43 = t;
          if(x_43 != NULL && x_43 != z_43)
            _fail(z_43);
          else
            x_43 = z_43;
        }
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_43), not_null(x_43));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm p_78 (ATerm))
{
  ATerm d_44 (ATerm t)
  {
    t = p_78(t);
    {
      ATerm c_11 = t;
      if(PushChoice()==0)
        {
          t = Nil_0(t);
          PopChoice();
        }
      else
        {
          t = c_11;
          t = Cons_2(t, _id, d_44);
        }
    }
    return(t);
  }
  t = d_44(t);
  return(t);
}
ATerm uniq_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    t = try_1(t, Uniq_0);
    return(t);
  }
  t = listtd_1(t, t_1);
  return(t);
}
ATerm offsets_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm h_44 = NULL,i_44 = NULL,k_44 = NULL,l_44 = NULL;
    h_44 = t;
    f_44 :
    if(match_cons(h_44, sym_As_2))
      {
        i_44 = ATgetArgument(h_44, 0);
        l_44 = ATgetArgument(h_44, 1);
        g_44 :
        if(match_cons(i_44, sym_Off_1))
          {
            k_44 = ATgetArgument(i_44, 0);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_44));
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = map_1(t, u_1);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm d_11 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = (ATerm) ATmakeInt(0);
      PopChoice();
    }
  else
    {
      t = d_11;
      {
        ATerm q_44 = NULL;
        t = Tl_0(t);
        t = length_0(t);
        q_44 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_44), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = add_0(t);
      }
    }
  return(t);
}
ATerm ConsArgs_0 (ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL;
  g_45 = t;
  b_45 :
  if(match_cons(g_45, sym_Row_3))
    {
      h_45 = ATgetArgument(g_45, 0);
      o_45 = ATgetArgument(g_45, 1);
      p_45 = ATgetArgument(g_45, 2);
      c_45 :
      if(match_cons(h_45, sym_Cons_2))
        {
          i_45 = ATgetArgument(h_45, 0);
          n_45 = ATgetArgument(h_45, 1);
          d_45 :
          if(match_cons(i_45, sym_As_2))
            {
              j_45 = ATgetArgument(i_45, 0);
              l_45 = ATgetArgument(i_45, 1);
              e_45 :
              if(match_cons(l_45, sym_Op_2))
                {
                  m_45 = ATgetArgument(l_45, 0);
                  f_45 = ATgetArgument(l_45, 1);
                  {
                    ATerm p_46 = NULL;
                    t = not_null(f_45);
                    {
                      ATerm z_46 = NULL;
                      t = length_0(t);
                      p_46 = t;
                      t = not_null(f_45);
                      t = offsets_0(t);
                      z_46 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Fun_2, not_null(m_45), not_null(p_46)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_46), (ATerm) ATmakeAppl(sym_TNil_0)));
                    }
                  }
                }
              else
                {
                  if(match_cons(l_45, sym_Int_1))
                    {
                      m_45 = ATgetArgument(l_45, 0);
                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Int_1, not_null(m_45)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                    }
                  else
                    {
                      if(match_cons(l_45, sym_Real_1))
                        {
                          m_45 = ATgetArgument(l_45, 0);
                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Real_1, not_null(m_45)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                        }
                      else
                        {
                          if(match_cons(l_45, sym_Str_1))
                            {
                              m_45 = ATgetArgument(l_45, 0);
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Str_1, not_null(m_45)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm filter_1 (ATerm t, ATerm b_72 (ATerm))
{
  ATerm w_47 (ATerm t)
  {
    ATerm e_11 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = e_11;
        {
          ATerm f_11 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, b_72, w_47);
              PopChoice();
            }
          else
            {
              t = f_11;
              t = Tl_0(t);
              t = w_47(t);
            }
        }
      }
    return(t);
  }
  t = w_47(t);
  return(t);
}
ATerm outedges_0 (ATerm t)
{
  t = filter_1(t, ConsArgs_0);
  t = uniq_0(t);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm y_47 = NULL;
  y_47 = t;
  t = SSL_implode_string(not_null(y_47));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm c_48 = NULL;
  c_48 = t;
  t = SSL_explode_string(not_null(c_48));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  ATerm g_11 = t;
  if(PushChoice()==0)
    {
      ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL;
      m_48 = t;
      g_48 :
      if(match_cons(m_48, sym_Cons_2))
        {
          n_48 = ATgetArgument(m_48, 0);
          w_48 = ATgetArgument(m_48, 1);
          h_48 :
          if(match_cons(n_48, sym_Row_3))
            {
              o_48 = ATgetArgument(n_48, 0);
              u_48 = ATgetArgument(n_48, 1);
              v_48 = ATgetArgument(n_48, 2);
              i_48 :
              if(match_cons(o_48, sym_Cons_2))
                {
                  p_48 = ATgetArgument(o_48, 0);
                  t_48 = ATgetArgument(o_48, 1);
                  j_48 :
                  if(match_cons(p_48, sym_As_2))
                    {
                      q_48 = ATgetArgument(p_48, 0);
                      s_48 = ATgetArgument(p_48, 1);
                      k_48 :
                      if(match_cons(q_48, sym_Off_1))
                        {
                          r_48 = ATgetArgument(q_48, 0);
                          t = not_null(r_48);
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
      t = g_11;
      t = explode_string_0(t);
      {
        ATerm h_11 = t;
        if(PushChoice()==0)
          {
            ATerm a_49 (ATerm t)
            {
              ATerm i_11 = t;
              if(PushChoice()==0)
                {
                  t = Cons_2(t, _id, a_49);
                  PopChoice();
                }
              else
                {
                  t = i_11;
                  {
                    ATerm v_1 (ATerm t)
                    {
                      ATerm y_48 = NULL;
                      y_48 = t;
                      l_48 :
                      if(!(match_int(y_48, 47)))
                        _fail(t);
                      return(t);
                    }
                    ATerm w_1 (ATerm t)
                    {
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                      return(t);
                    }
                    t = Cons_2(t, v_1, w_1);
                  }
                }
              return(t);
            }
            t = a_49(t);
            PopChoice();
          }
        else
          {
            t = h_11;
            t = (ATerm) ATmakeAppl(sym_Nil_0);
          }
        t = implode_string_0(t);
      }
    }
  return(t);
}
ATerm Mixture_0 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL;
  i_49 = t;
  h_49 :
  if(match_cons(i_49, sym_Matrix_1))
    {
      j_49 = ATgetArgument(i_49, 0);
      {
        ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL,s_49 = NULL,t_49 = NULL;
        ATerm u_49 = NULL;
        t = not_null(j_49);
        {
          ATerm v_49 = NULL;
          t = get_path_0(t);
          u_49 = t;
          if(l_49 != NULL && l_49 != u_49)
            _fail(u_49);
          else
            l_49 = u_49;
          t = not_null(j_49);
          {
            ATerm w_49 = NULL;
            t = outedges_0(t);
            v_49 = t;
            if(m_49 != NULL && m_49 != v_49)
              _fail(v_49);
            else
              m_49 = v_49;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_49), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_49), (ATerm) ATmakeAppl(sym_TNil_0)));
            {
              ATerm l_50 = NULL;
              t = transitions_0(t);
              w_49 = t;
              if(n_49 != NULL && n_49 != w_49)
                _fail(w_49);
              else
                n_49 = w_49;
              t = not_null(j_49);
              {
                ATerm m_50 = NULL;
                t = default_state_0(t);
                l_50 = t;
                if(s_49 != NULL && s_49 != l_50)
                  _fail(l_50);
                else
                  s_49 = l_50;
                t = new_0(t);
                m_50 = t;
                if(t_49 != NULL && t_49 != m_50)
                  _fail(m_50);
                else
                  t_49 = m_50;
                {
                  ATerm j_11;
                  j_11 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(j_49)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue)), not_null(t_49)), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm x_1 (ATerm t)
                    {
                      t = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
                      return(t);
                    }
                    t = assert_1(t, x_1);
                  }
                  t = j_11;
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Case_4, not_null(t_49), (ATerm)ATmakeAppl(sym_Var_1, not_null(l_49)), not_null(n_49), not_null(s_49));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ShiftColumnRow_0 (ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL;
  s_52 = t;
  q_52 :
  if(match_cons(s_52, sym_Row_3))
    {
      t_52 = ATgetArgument(s_52, 0);
      u_52 = ATgetArgument(s_52, 1);
      x_52 = ATgetArgument(s_52, 2);
      r_52 :
      if(match_cons(u_52, sym_Cons_2))
        {
          v_52 = ATgetArgument(u_52, 0);
          w_52 = ATgetArgument(u_52, 1);
          t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_52), not_null(t_52)), not_null(w_52), not_null(x_52));
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
  ATerm g_53 = NULL,h_53 = NULL;
  g_53 = t;
  f_53 :
  if(match_cons(g_53, sym_Matrix_1))
    {
      h_53 = ATgetArgument(g_53, 0);
      {
        ATerm j_53 = NULL;
        ATerm k_53 = NULL;
        t = not_null(h_53);
        {
          ATerm k_11 = t;
          if(PushChoice()==0)
            {
              ATerm y_1 (ATerm t)
              {
                ATerm z_1 (ATerm t)
                {
                  ATerm a_2 (ATerm t)
                  {
                    ATerm b_2 (ATerm t)
                    {
                      ATerm l_11 = t;
                      if(PushChoice()==0)
                        {
                          t = Wld_0(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        t = l_11;
                      return(t);
                    }
                    t = As_2(t, _id, b_2);
                    return(t);
                  }
                  t = Cons_2(t, a_2, _id);
                  return(t);
                }
                t = Row_3(t, z_1, _id, _id);
                return(t);
              }
              t = map_1(t, y_1);
              PopChoice();
              _fail(t);
            }
          else
            t = k_11;
          t = not_null(h_53);
          t = map_1(t, ShiftColumnRow_0);
          k_53 = t;
          if(j_53 != NULL && j_53 != k_53)
            _fail(k_53);
          else
            j_53 = k_53;
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(j_53));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm o_53 = NULL;
  o_53 = t;
  n_53 :
  if(!(match_cons(o_53, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm As_2 (ATerm t, ATerm j_59 (ATerm), ATerm k_59 (ATerm))
{
  ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL;
  t_53 = t;
  s_53 :
  if(match_cons(t_53, sym_As_2))
    {
      u_53 = ATgetArgument(t_53, 0);
      v_53 = ATgetArgument(t_53, 1);
      {
        ATerm y_53 = NULL;
        t = not_null(u_53);
        {
          ATerm a_54 = NULL;
          t = j_59(t);
          y_53 = t;
          t = not_null(v_53);
          t = k_59(t);
          a_54 = t;
          t = (ATerm) ATmakeAppl(sym_As_2, not_null(y_53), not_null(a_54));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Row_3 (ATerm t, ATerm z_57 (ATerm), ATerm a_58 (ATerm), ATerm b_58 (ATerm))
{
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL;
  k_54 = t;
  j_54 :
  if(match_cons(k_54, sym_Row_3))
    {
      l_54 = ATgetArgument(k_54, 0);
      m_54 = ATgetArgument(k_54, 1);
      n_54 = ATgetArgument(k_54, 2);
      {
        ATerm r_54 = NULL;
        t = not_null(l_54);
        {
          ATerm t_54 = NULL;
          t = z_57(t);
          r_54 = t;
          t = not_null(m_54);
          {
            ATerm v_54 = NULL;
            t = a_58(t);
            t_54 = t;
            t = not_null(n_54);
            t = b_58(t);
            v_54 = t;
            t = (ATerm) ATmakeAppl(sym_Row_3, not_null(r_54), not_null(t_54), not_null(v_54));
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
  ATerm e_55 = NULL,f_55 = NULL;
  e_55 = t;
  d_55 :
  if(match_cons(e_55, sym_Matrix_1))
    {
      f_55 = ATgetArgument(e_55, 0);
      {
        ATerm h_55 = NULL;
        ATerm i_55 = NULL;
        t = not_null(f_55);
        {
          ATerm c_2 (ATerm t)
          {
            ATerm d_2 (ATerm t)
            {
              ATerm e_2 (ATerm t)
              {
                t = As_2(t, _id, Wld_0);
                return(t);
              }
              t = Cons_2(t, e_2, _id);
              t = Tl_0(t);
              return(t);
            }
            t = Row_3(t, _id, d_2, _id);
            return(t);
          }
          t = map_1(t, c_2);
          i_55 = t;
          if(h_55 != NULL && h_55 != i_55)
            _fail(i_55);
          else
            h_55 = i_55;
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(h_55));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatrixRowsEmpty_0 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL;
  s_55 = t;
  r_55 :
  if(match_cons(s_55, sym_Matrix_1))
    {
      t_55 = ATgetArgument(s_55, 0);
      {
        ATerm v_55 = NULL;
        ATerm b_56 = NULL;
        t = not_null(t_55);
        {
          ATerm f_2 (ATerm t)
          {
            ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL;
            w_55 = t;
            n_55 :
            if(match_cons(w_55, sym_Row_3))
              {
                x_55 = ATgetArgument(w_55, 0);
                y_55 = ATgetArgument(w_55, 1);
                z_55 = ATgetArgument(w_55, 2);
                o_55 :
                if(match_cons(x_55, sym_Nil_0))
                  {
                    p_55 :
                    if(match_cons(y_55, sym_Nil_0))
                      t = not_null(z_55);
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
          t = map_1(t, f_2);
          b_56 = t;
          if(v_55 != NULL && v_55 != b_56)
            _fail(b_56);
          else
            v_55 = b_56;
        }
        t = (ATerm) ATmakeAppl(sym_LChoices_1, not_null(v_55));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm reduce_matrix_0 (ATerm t)
{
  ATerm m_11 = t;
  if(PushChoice()==0)
    {
      t = MatrixRowsEmpty_0(t);
      PopChoice();
    }
  else
    {
      t = m_11;
      {
        ATerm n_11 = t;
        if(PushChoice()==0)
          {
            t = SkipWild_0(t);
            PopChoice();
          }
        else
          {
            t = n_11;
            {
              ATerm o_11 = t;
              if(PushChoice()==0)
                {
                  t = ShiftColumn_0(t);
                  PopChoice();
                }
              else
                {
                  t = o_11;
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
  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL;
  h_56 = t;
  g_56 :
  if(match_cons(h_56, sym_Cons_2))
    {
      i_56 = ATgetArgument(h_56, 0);
      j_56 = ATgetArgument(h_56, 1);
      t = not_null(j_56);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL;
  s_56 = t;
  p_56 :
  if(match_cons(s_56, sym_TCons_2))
    {
      t_56 = ATgetArgument(s_56, 0);
      u_56 = ATgetArgument(s_56, 1);
      q_56 :
      if(match_cons(u_56, sym_TCons_2))
        {
          v_56 = ATgetArgument(u_56, 0);
          w_56 = ATgetArgument(u_56, 1);
          r_56 :
          if(match_cons(w_56, sym_TNil_0))
            {
              ATerm p_11;
              p_11 = t;
              {
                ATerm a_57 = NULL;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_56), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_56), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm q_11 = t;
                  if(PushChoice()==0)
                    {
                      t = table_get_0(t);
                      t = Tl_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = q_11;
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                    }
                  a_57 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_56), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_56), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_57), (ATerm) ATmakeAppl(sym_TNil_0))));
                  t = table_put_0(t);
                }
              }
              t = p_11;
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
ATerm end_scope_1 (ATerm t, ATerm a_63 (ATerm))
{
  ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL;
  ATerm r_11;
  r_11 = t;
  {
    ATerm l_57 = NULL;
    ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL;
    t = a_63(t);
    l_57 = t;
    if(j_57 != NULL && j_57 != l_57)
      _fail(l_57);
    else
      j_57 = l_57;
    {
      ATerm s_11 = t;
      if(PushChoice()==0)
        {
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_57), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = table_get_0(t);
          PopChoice();
        }
      else
        {
          t = s_11;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
        }
      m_57 = t;
      h_57 :
      if(match_cons(m_57, sym_Cons_2))
        {
          n_57 = ATgetArgument(m_57, 0);
          o_57 = ATgetArgument(m_57, 1);
          if(k_57 != NULL && k_57 != n_57)
            _fail(n_57);
          else
            k_57 = n_57;
          if(i_57 != NULL && i_57 != o_57)
            _fail(o_57);
          else
            i_57 = o_57;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_57), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_57), (ATerm) ATmakeAppl(sym_TNil_0))));
          t = table_put_0(t);
          t = not_null(k_57);
          {
            ATerm g_2 (ATerm t)
            {
              ATerm p_57 = NULL;
              p_57 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_57), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_57), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = table_pop_0(t);
              return(t);
            }
            t = map_1(t, g_2);
          }
        }
      else
        _fail(t);
    }
  }
  t = r_11;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm y_57 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL;
  y_57 = t;
  v_57 :
  if(match_cons(y_57, sym_TCons_2))
    {
      c_58 = ATgetArgument(y_57, 0);
      d_58 = ATgetArgument(y_57, 1);
      w_57 :
      if(match_cons(d_58, sym_TCons_2))
        {
          e_58 = ATgetArgument(d_58, 0);
          f_58 = ATgetArgument(d_58, 1);
          x_57 :
          if(match_cons(f_58, sym_TNil_0))
            t = SSL_table_get(not_null(c_58), not_null(e_58));
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
ATerm begin_scope_1 (ATerm t, ATerm z_62 (ATerm))
{
  ATerm m_58 = NULL;
  ATerm t_11;
  t_11 = t;
  {
    ATerm n_58 = NULL;
    ATerm o_58 = NULL;
    t = z_62(t);
    n_58 = t;
    if(m_58 != NULL && m_58 != n_58)
      _fail(n_58);
    else
      m_58 = n_58;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm u_11 = t;
      if(PushChoice()==0)
        {
          t = table_get_0(t);
          PopChoice();
        }
      else
        {
          t = u_11;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      o_58 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(o_58)), (ATerm) ATmakeAppl(sym_TNil_0))));
      t = table_put_0(t);
    }
  }
  t = t_11;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm b_63 (ATerm), ATerm c_63 (ATerm))
{
  t = begin_scope_1(t, b_63);
  {
    ATerm v_11 = t;
    if(PushChoice()==0)
      {
        t = c_63(t);
        t = end_scope_1(t, b_63);
        PopChoice();
      }
    else
      {
        t = v_11;
        t = end_scope_1(t, b_63);
        _fail(t);
      }
  }
  return(t);
}
ATerm matrix_to_dfa_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm j_2 (ATerm t)
    {
      ATerm x_11 = t;
      if(PushChoice()==0)
        {
          t = reduce_matrix_0(t);
          PopChoice();
        }
      else
        {
          t = x_11;
          {
            ATerm y_11 = t;
            if(PushChoice()==0)
              {
                t = MatrixScope_0(t);
                PopChoice();
              }
            else
              {
                t = y_11;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, j_2);
    t = _all(t, i_2);
    return(t);
  }
  t = scope_2(t, h_2, i_2);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL;
  x_58 = t;
  u_58 :
  if(match_cons(x_58, sym_TCons_2))
    {
      y_58 = ATgetArgument(x_58, 0);
      z_58 = ATgetArgument(x_58, 1);
      v_58 :
      if(match_cons(z_58, sym_TCons_2))
        {
          a_59 = ATgetArgument(z_58, 0);
          b_59 = ATgetArgument(z_58, 1);
          w_58 :
          if(match_cons(b_59, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_58), not_null(a_59));
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
  ATerm n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL;
  n_59 = t;
  g_59 :
  if(match_cons(n_59, sym_TCons_2))
    {
      o_59 = ATgetArgument(n_59, 0);
      r_59 = ATgetArgument(n_59, 1);
      h_59 :
      if(match_cons(o_59, sym_Cons_2))
        {
          p_59 = ATgetArgument(o_59, 0);
          q_59 = ATgetArgument(o_59, 1);
          i_59 :
          if(match_cons(r_59, sym_TCons_2))
            {
              s_59 = ATgetArgument(r_59, 0);
              v_59 = ATgetArgument(r_59, 1);
              l_59 :
              if(match_cons(s_59, sym_Cons_2))
                {
                  t_59 = ATgetArgument(s_59, 0);
                  u_59 = ATgetArgument(s_59, 1);
                  m_59 :
                  if(match_cons(v_59, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(p_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_59), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(q_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_59), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL;
  k_60 = t;
  d_60 :
  if(match_cons(k_60, sym_TCons_2))
    {
      l_60 = ATgetArgument(k_60, 0);
      m_60 = ATgetArgument(k_60, 1);
      e_60 :
      if(match_cons(l_60, sym_Nil_0))
        {
          f_60 :
          if(match_cons(m_60, sym_TCons_2))
            {
              n_60 = ATgetArgument(m_60, 0);
              o_60 = ATgetArgument(m_60, 1);
              g_60 :
              if(match_cons(n_60, sym_Nil_0))
                {
                  i_60 :
                  if(match_cons(o_60, sym_TNil_0))
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
ATerm zip_1 (ATerm t, ATerm b_76 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, b_76);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL;
  t_61 = t;
  s_61 :
  if(match_cons(t_61, sym_Cong_2))
    {
      u_61 = ATgetArgument(t_61, 0);
      v_61 = ATgetArgument(t_61, 1);
      {
        ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,t_63 = NULL;
        ATerm f_62 = NULL;
        t = not_null(v_61);
        {
          ATerm i_62 = NULL;
          t = map_1(t, new_0);
          f_62 = t;
          if(c_62 != NULL && c_62 != f_62)
            _fail(f_62);
          else
            c_62 = f_62;
          t = not_null(c_62);
          {
            ATerm k_62 = NULL;
            ATerm k_2 (ATerm t)
            {
              ATerm g_62 = NULL;
              g_62 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_62));
              return(t);
            }
            t = map_1(t, k_2);
            i_62 = t;
            if(a_62 != NULL && a_62 != i_62)
              _fail(i_62);
            else
              a_62 = i_62;
            t = not_null(v_61);
            {
              ATerm t_62 = NULL;
              t = map_1(t, new_0);
              k_62 = t;
              if(d_62 != NULL && d_62 != k_62)
                _fail(k_62);
              else
                d_62 = k_62;
              t = not_null(d_62);
              {
                ATerm u_62 = NULL;
                ATerm l_2 (ATerm t)
                {
                  ATerm l_62 = NULL;
                  l_62 = t;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_62));
                  return(t);
                }
                t = map_1(t, l_2);
                t_62 = t;
                if(b_62 != NULL && b_62 != t_62)
                  _fail(t_62);
                else
                  b_62 = t_62;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_62), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_62), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm s_63 = NULL;
                  t = zip_1(t, _id);
                  u_62 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_62), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_61), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm m_2 (ATerm t)
                    {
                      ATerm y_62 = NULL,e_63 = NULL,f_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL;
                      y_62 = t;
                      c_61 :
                      if(match_cons(y_62, sym_TCons_2))
                        {
                          e_63 = ATgetArgument(y_62, 0);
                          m_63 = ATgetArgument(y_62, 1);
                          d_61 :
                          if(match_cons(e_63, sym_TCons_2))
                            {
                              f_63 = ATgetArgument(e_63, 0);
                              j_63 = ATgetArgument(e_63, 1);
                              e_61 :
                              if(match_cons(j_63, sym_TCons_2))
                                {
                                  k_63 = ATgetArgument(j_63, 0);
                                  l_63 = ATgetArgument(j_63, 1);
                                  f_61 :
                                  if(match_cons(l_63, sym_TNil_0))
                                    {
                                      g_61 :
                                      if(match_cons(m_63, sym_TCons_2))
                                        {
                                          n_63 = ATgetArgument(m_63, 0);
                                          o_63 = ATgetArgument(m_63, 1);
                                          p_61 :
                                          if(match_cons(o_63, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_63))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_63), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_63)))));
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
                    t = zip_1(t, m_2);
                    s_63 = t;
                    if(e_62 != NULL && e_62 != s_63)
                      _fail(s_63);
                    else
                      e_62 = s_63;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_62), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_62), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
        t_63 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_63), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(u_61), not_null(a_62))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(e_62)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(u_61), not_null(b_62))))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm m_64 = NULL,n_64 = NULL,o_64 = NULL;
  m_64 = t;
  l_64 :
  if(match_cons(m_64, sym_Cong_2))
    {
      n_64 = ATgetArgument(m_64, 0);
      o_64 = ATgetArgument(m_64, 1);
      {
        ATerm r_64 = NULL;
        ATerm c_65 = NULL;
        t = not_null(o_64);
        {
          ATerm n_2 (ATerm t)
          {
            ATerm y_64 = NULL,z_64 = NULL;
            z_64 = t;
            j_64 :
            if(match_cons(z_64, sym_Match_1))
              {
                y_64 = ATgetArgument(z_64, 0);
                t = not_null(y_64);
              }
            else
              {
                if(match_cons(z_64, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, n_2);
          c_65 = t;
          if(r_64 != NULL && r_64 != c_65)
            _fail(c_65);
          else
            r_64 = c_65;
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(n_64), not_null(r_64)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm q_65 = NULL,r_65 = NULL,s_65 = NULL;
  q_65 = t;
  o_65 :
  if(match_cons(q_65, sym_Scope_2))
    {
      r_65 = ATgetArgument(q_65, 0);
      s_65 = ATgetArgument(q_65, 1);
      p_65 :
      if(match_cons(r_65, sym_Nil_0))
        t = not_null(s_65);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL;
  l_66 = t;
  d_66 :
  if(match_cons(l_66, sym_Choice_2))
    {
      m_66 = ATgetArgument(l_66, 0);
      k_66 = ATgetArgument(l_66, 1);
      if(m_66 != NULL && m_66 != k_66)
        _fail(k_66);
      else
        m_66 = k_66;
      t = not_null(m_66);
    }
  else
    {
      if(match_cons(l_66, sym_LChoice_2))
        {
          m_66 = ATgetArgument(l_66, 0);
          k_66 = ATgetArgument(l_66, 1);
          if(m_66 != NULL && m_66 != k_66)
            _fail(k_66);
          else
            m_66 = k_66;
          t = not_null(m_66);
        }
      else
        {
          if(match_cons(l_66, sym_Where_1))
            {
              m_66 = ATgetArgument(l_66, 0);
              e_66 :
              if(match_cons(m_66, sym_Where_1))
                {
                  n_66 = ATgetArgument(m_66, 0);
                  t = (ATerm) ATmakeAppl(sym_Where_1, not_null(n_66));
                }
              else
                {
                  if(match_cons(m_66, sym_Seq_2))
                    {
                      n_66 = ATgetArgument(m_66, 0);
                      p_66 = ATgetArgument(m_66, 1);
                      f_66 :
                      if(match_cons(n_66, sym_Where_1))
                        {
                          o_66 = ATgetArgument(n_66, 0);
                          g_66 :
                          if(match_cons(p_66, sym_Seq_2))
                            {
                              q_66 = ATgetArgument(p_66, 0);
                              s_66 = ATgetArgument(p_66, 1);
                              h_66 :
                              if(match_cons(q_66, sym_Build_1))
                                {
                                  r_66 = ATgetArgument(q_66, 0);
                                  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_66), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_66)), not_null(s_66))));
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
              if(match_cons(l_66, sym_Not_1))
                {
                  m_66 = ATgetArgument(l_66, 0);
                  i_66 :
                  if(match_cons(m_66, sym_Not_1))
                    {
                      n_66 = ATgetArgument(m_66, 0);
                      t = (ATerm) ATmakeAppl(sym_Test_1, not_null(n_66));
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(l_66, sym_Test_1))
                    {
                      m_66 = ATgetArgument(l_66, 0);
                      j_66 :
                      if(match_cons(m_66, sym_Test_1))
                        {
                          n_66 = ATgetArgument(m_66, 0);
                          t = (ATerm) ATmakeAppl(sym_Test_1, not_null(n_66));
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
  ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL;
  o_67 = t;
  k_67 :
  if(match_cons(o_67, sym_Choice_2))
    {
      p_67 = ATgetArgument(o_67, 0);
      s_67 = ATgetArgument(o_67, 1);
      l_67 :
      if(match_cons(p_67, sym_Choice_2))
        {
          q_67 = ATgetArgument(p_67, 0);
          r_67 = ATgetArgument(p_67, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(q_67), (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_67), not_null(s_67)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(o_67, sym_Seq_2))
        {
          p_67 = ATgetArgument(o_67, 0);
          s_67 = ATgetArgument(o_67, 1);
          m_67 :
          if(match_cons(p_67, sym_Seq_2))
            {
              q_67 = ATgetArgument(p_67, 0);
              r_67 = ATgetArgument(p_67, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_67), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_67), not_null(s_67)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(o_67, sym_LChoice_2))
            {
              p_67 = ATgetArgument(o_67, 0);
              s_67 = ATgetArgument(o_67, 1);
              n_67 :
              if(match_cons(p_67, sym_LChoice_2))
                {
                  q_67 = ATgetArgument(p_67, 0);
                  r_67 = ATgetArgument(p_67, 1);
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(q_67), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(r_67), not_null(s_67)));
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
  ATerm g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL;
  i_69 = t;
  b_69 :
  if(match_cons(i_69, sym_Seqs_1))
    {
      j_69 = ATgetArgument(i_69, 0);
      c_69 :
      if(match_cons(j_69, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(j_69, sym_Cons_2))
            {
              g_69 = ATgetArgument(j_69, 0);
              h_69 = ATgetArgument(j_69, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_69), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(h_69)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(i_69, sym_Choices_1))
        {
          j_69 = ATgetArgument(i_69, 0);
          d_69 :
          if(match_cons(j_69, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(j_69, sym_Cons_2))
                {
                  g_69 = ATgetArgument(j_69, 0);
                  h_69 = ATgetArgument(j_69, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_69), (ATerm) ATmakeAppl(sym_Choices_1, not_null(h_69)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(i_69, sym_LChoices_1))
            {
              j_69 = ATgetArgument(i_69, 0);
              f_69 :
              if(match_cons(j_69, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(j_69, sym_Cons_2))
                    {
                      g_69 = ATgetArgument(j_69, 0);
                      h_69 = ATgetArgument(j_69, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_69), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(h_69)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(i_69, sym_Lets_2))
                {
                  j_69 = ATgetArgument(i_69, 0);
                  k_69 = ATgetArgument(i_69, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(j_69), not_null(k_69));
                }
              else
                {
                  if(match_cons(i_69, sym_BA_2))
                    {
                      j_69 = ATgetArgument(i_69, 0);
                      k_69 = ATgetArgument(i_69, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_69)), not_null(j_69));
                    }
                  else
                    {
                      if(match_cons(i_69, sym_MA_2))
                        {
                          j_69 = ATgetArgument(i_69, 0);
                          k_69 = ATgetArgument(i_69, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_69)), not_null(k_69));
                        }
                      else
                        {
                          if(match_cons(i_69, sym_AM_2))
                            {
                              j_69 = ATgetArgument(i_69, 0);
                              k_69 = ATgetArgument(i_69, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_69), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_69)));
                            }
                          else
                            {
                              if(match_cons(i_69, sym_BAM_3))
                                {
                                  j_69 = ATgetArgument(i_69, 0);
                                  k_69 = ATgetArgument(i_69, 1);
                                  l_69 = ATgetArgument(i_69, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_69)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_69), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_69)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(i_69, sym_InfixApp_3))
                                    {
                                      j_69 = ATgetArgument(i_69, 0);
                                      k_69 = ATgetArgument(i_69, 1);
                                      l_69 = ATgetArgument(i_69, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(k_69), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_69), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_69), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm c_71 = NULL,d_71 = NULL;
  c_71 = t;
  a_71 :
  if(match_cons(c_71, sym_Where_1))
    {
      d_71 = ATgetArgument(c_71, 0);
      b_71 :
      if(match_cons(d_71, sym_Fail_0))
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
  ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL;
  j_71 = t;
  g_71 :
  if(match_cons(j_71, sym_LChoice_2))
    {
      k_71 = ATgetArgument(j_71, 0);
      l_71 = ATgetArgument(j_71, 1);
      h_71 :
      if(match_cons(l_71, sym_Fail_0))
        t = not_null(k_71);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm t_71 = NULL,d_72 = NULL,e_72 = NULL;
  t_71 = t;
  r_71 :
  if(match_cons(t_71, sym_LChoice_2))
    {
      d_72 = ATgetArgument(t_71, 0);
      e_72 = ATgetArgument(t_71, 1);
      s_71 :
      if(match_cons(d_72, sym_Fail_0))
        t = not_null(e_72);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL;
  k_72 = t;
  i_72 :
  if(match_cons(k_72, sym_Choice_2))
    {
      l_72 = ATgetArgument(k_72, 0);
      m_72 = ATgetArgument(k_72, 1);
      j_72 :
      if(match_cons(m_72, sym_Fail_0))
        t = not_null(l_72);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL,b_73 = NULL;
  s_72 = t;
  q_72 :
  if(match_cons(s_72, sym_Choice_2))
    {
      t_72 = ATgetArgument(s_72, 0);
      b_73 = ATgetArgument(s_72, 1);
      r_72 :
      if(match_cons(t_72, sym_Fail_0))
        t = not_null(b_73);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL;
  h_73 = t;
  g_73 :
  if(match_cons(h_73, sym_Cong_2))
    {
      i_73 = ATgetArgument(h_73, 0);
      j_73 = ATgetArgument(h_73, 1);
      t = not_null(j_73);
      {
        ATerm o_2 (ATerm t)
        {
          ATerm m_73 = NULL;
          m_73 = t;
          f_73 :
          if(!(match_cons(m_73, sym_Fail_0)))
            _fail(t);
          return(t);
        }
        t = fetch_1(t, o_2);
      }
      t = (ATerm) ATmakeAppl(sym_Fail_0);
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL;
  r_73 = t;
  p_73 :
  if(match_cons(r_73, sym_Path_2))
    {
      s_73 = ATgetArgument(r_73, 0);
      t_73 = ATgetArgument(r_73, 1);
      q_73 :
      if(match_cons(t_73, sym_Fail_0))
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
  ATerm a_74 = NULL,b_74 = NULL;
  a_74 = t;
  x_73 :
  if(match_cons(a_74, sym_One_1))
    {
      b_74 = ATgetArgument(a_74, 0);
      y_73 :
      if(match_cons(b_74, sym_Fail_0))
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
  ATerm j_74 = NULL,k_74 = NULL;
  j_74 = t;
  f_74 :
  if(match_cons(j_74, sym_Some_1))
    {
      k_74 = ATgetArgument(j_74, 0);
      g_74 :
      if(match_cons(k_74, sym_Fail_0))
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
  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL;
  s_74 = t;
  n_74 :
  if(match_cons(s_74, sym_Rec_2))
    {
      t_74 = ATgetArgument(s_74, 0);
      u_74 = ATgetArgument(s_74, 1);
      r_74 :
      if(match_cons(u_74, sym_Fail_0))
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
  ATerm d_75 = NULL,e_75 = NULL,f_75 = NULL;
  d_75 = t;
  b_75 :
  if(match_cons(d_75, sym_Scope_2))
    {
      e_75 = ATgetArgument(d_75, 0);
      f_75 = ATgetArgument(d_75, 1);
      c_75 :
      if(match_cons(f_75, sym_Fail_0))
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
  ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL;
  r_75 = t;
  p_75 :
  if(match_cons(r_75, sym_Seq_2))
    {
      s_75 = ATgetArgument(r_75, 0);
      t_75 = ATgetArgument(r_75, 1);
      q_75 :
      if(match_cons(s_75, sym_Fail_0))
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
  ATerm f_76 = NULL,i_76 = NULL;
  f_76 = t;
  d_76 :
  if(match_cons(f_76, sym_Not_1))
    {
      i_76 = ATgetArgument(f_76, 0);
      e_76 :
      if(match_cons(i_76, sym_Fail_0))
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
  ATerm o_76 = NULL,p_76 = NULL;
  o_76 = t;
  m_76 :
  if(match_cons(o_76, sym_Test_1))
    {
      p_76 = ATgetArgument(o_76, 0);
      n_76 :
      if(match_cons(p_76, sym_Fail_0))
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
  ATerm z_11 = t;
  if(PushChoice()==0)
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = z_11;
      {
        ATerm a_12 = t;
        if(PushChoice()==0)
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = a_12;
            {
              ATerm b_12 = t;
              if(PushChoice()==0)
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = b_12;
                  {
                    ATerm c_12 = t;
                    if(PushChoice()==0)
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = c_12;
                        {
                          ATerm d_12 = t;
                          if(PushChoice()==0)
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = d_12;
                              {
                                ATerm e_12 = t;
                                if(PushChoice()==0)
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = e_12;
                                    {
                                      ATerm f_12 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = f_12;
                                          {
                                            ATerm g_12 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = g_12;
                                                {
                                                  ATerm h_12 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = h_12;
                                                      {
                                                        ATerm i_12 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = i_12;
                                                            {
                                                              ATerm j_12 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = j_12;
                                                                  {
                                                                    ATerm k_12 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = k_12;
                                                                        {
                                                                          ATerm l_12 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = l_12;
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
  ATerm u_76 = NULL,v_76 = NULL;
  u_76 = t;
  s_76 :
  if(match_cons(u_76, sym_Match_1))
    {
      v_76 = ATgetArgument(u_76, 0);
      t_76 :
      if(match_cons(v_76, sym_Wld_0))
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
  ATerm a_77 = NULL,b_77 = NULL;
  a_77 = t;
  y_76 :
  if(match_cons(a_77, sym_Where_1))
    {
      b_77 = ATgetArgument(a_77, 0);
      z_76 :
      if(match_cons(b_77, sym_Id_0))
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
  ATerm g_77 = NULL,h_77 = NULL;
  g_77 = t;
  e_77 :
  if(match_cons(g_77, sym_All_1))
    {
      h_77 = ATgetArgument(g_77, 0);
      f_77 :
      if(match_cons(h_77, sym_Id_0))
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
  ATerm q_77 = NULL,r_77 = NULL,s_77 = NULL;
  q_77 = t;
  k_77 :
  if(match_cons(q_77, sym_Rec_2))
    {
      r_77 = ATgetArgument(q_77, 0);
      s_77 = ATgetArgument(q_77, 1);
      l_77 :
      if(match_cons(s_77, sym_Id_0))
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
  ATerm d_78 = NULL,e_78 = NULL,f_78 = NULL;
  d_78 = t;
  z_77 :
  if(match_cons(d_78, sym_Scope_2))
    {
      e_78 = ATgetArgument(d_78, 0);
      f_78 = ATgetArgument(d_78, 1);
      a_78 :
      if(match_cons(f_78, sym_Id_0))
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
  ATerm l_78 = NULL,m_78 = NULL,n_78 = NULL;
  l_78 = t;
  j_78 :
  if(match_cons(l_78, sym_LChoice_2))
    {
      m_78 = ATgetArgument(l_78, 0);
      n_78 = ATgetArgument(l_78, 1);
      k_78 :
      if(match_cons(m_78, sym_Id_0))
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
  ATerm v_78 = NULL,w_78 = NULL,y_78 = NULL;
  v_78 = t;
  t_78 :
  if(match_cons(v_78, sym_Seq_2))
    {
      w_78 = ATgetArgument(v_78, 0);
      y_78 = ATgetArgument(v_78, 1);
      u_78 :
      if(match_cons(y_78, sym_Id_0))
        t = not_null(w_78);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm g_79 = NULL,h_79 = NULL,i_79 = NULL;
  g_79 = t;
  e_79 :
  if(match_cons(g_79, sym_Seq_2))
    {
      h_79 = ATgetArgument(g_79, 0);
      i_79 = ATgetArgument(g_79, 1);
      f_79 :
      if(match_cons(h_79, sym_Id_0))
        t = not_null(i_79);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm o_79 = NULL,p_79 = NULL;
  o_79 = t;
  m_79 :
  if(match_cons(o_79, sym_Not_1))
    {
      p_79 = ATgetArgument(o_79, 0);
      n_79 :
      if(match_cons(p_79, sym_Id_0))
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
  ATerm v_79 = NULL,w_79 = NULL;
  v_79 = t;
  s_79 :
  if(match_cons(v_79, sym_Test_1))
    {
      w_79 = ATgetArgument(v_79, 0);
      u_79 :
      if(match_cons(w_79, sym_Id_0))
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
  ATerm m_12 = t;
  if(PushChoice()==0)
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = m_12;
      {
        ATerm n_12 = t;
        if(PushChoice()==0)
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = n_12;
            {
              ATerm o_12 = t;
              if(PushChoice()==0)
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = o_12;
                  {
                    ATerm p_12 = t;
                    if(PushChoice()==0)
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = p_12;
                        {
                          ATerm q_12 = t;
                          if(PushChoice()==0)
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = q_12;
                              {
                                ATerm r_12 = t;
                                if(PushChoice()==0)
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = r_12;
                                    {
                                      ATerm s_12 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = s_12;
                                          {
                                            ATerm t_12 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = t_12;
                                                {
                                                  ATerm u_12 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = u_12;
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
  ATerm v_12 = t;
  if(PushChoice()==0)
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = v_12;
      {
        ATerm w_12 = t;
        if(PushChoice()==0)
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = w_12;
            {
              ATerm x_12 = t;
              if(PushChoice()==0)
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = x_12;
                  {
                    ATerm y_12 = t;
                    if(PushChoice()==0)
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = y_12;
                        {
                          ATerm z_12 = t;
                          if(PushChoice()==0)
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = z_12;
                              {
                                ATerm a_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = a_13;
                                    {
                                      ATerm m_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = m_13;
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
ATerm at_end_1 (ATerm t, ATerm b_78 (ATerm))
{
  ATerm y_79 (ATerm t)
  {
    ATerm n_13 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, y_79);
        PopChoice();
      }
    else
      {
        t = n_13;
        t = Nil_0(t);
        t = b_78(t);
      }
    return(t);
  }
  t = y_79(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm d_80 = NULL,g_80 = NULL,h_80 = NULL,k_80 = NULL,l_80 = NULL;
  d_80 = t;
  a_80 :
  if(match_cons(d_80, sym_TCons_2))
    {
      g_80 = ATgetArgument(d_80, 0);
      h_80 = ATgetArgument(d_80, 1);
      b_80 :
      if(match_cons(h_80, sym_TCons_2))
        {
          k_80 = ATgetArgument(h_80, 0);
          l_80 = ATgetArgument(h_80, 1);
          c_80 :
          if(match_cons(l_80, sym_TNil_0))
            {
              t = not_null(g_80);
              {
                ATerm p_2 (ATerm t)
                {
                  t = not_null(k_80);
                  return(t);
                }
                t = at_end_1(t, p_2);
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
  ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL,d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL;
  e_82 = t;
  m_81 :
  if(match_cons(e_82, sym_Seq_2))
    {
      f_82 = ATgetArgument(e_82, 0);
      i_82 = ATgetArgument(e_82, 1);
      n_81 :
      if(match_cons(f_82, sym_Matrix_2))
        {
          g_82 = ATgetArgument(f_82, 0);
          h_82 = ATgetArgument(f_82, 1);
          o_81 :
          if(match_cons(h_82, sym_Cons_2))
            {
              a_82 = ATgetArgument(h_82, 0);
              d_82 = ATgetArgument(h_82, 1);
              p_81 :
              if(match_cons(a_82, sym_Row_2))
                {
                  b_82 = ATgetArgument(a_82, 0);
                  c_82 = ATgetArgument(a_82, 1);
                  q_81 :
                  if(match_cons(d_82, sym_Nil_0))
                    t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(g_82), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Row_2, not_null(b_82), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_82), not_null(i_82))), (ATerm) ATmakeAppl(sym_Nil_0)));
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
      if(match_cons(e_82, sym_Scope_2))
        {
          f_82 = ATgetArgument(e_82, 0);
          i_82 = ATgetArgument(e_82, 1);
          r_81 :
          if(match_cons(i_82, sym_Matrix_2))
            {
              j_82 = ATgetArgument(i_82, 0);
              m_82 = ATgetArgument(i_82, 1);
              {
                ATerm z_82 = NULL;
                t = not_null(m_82);
                {
                  ATerm q_2 (ATerm t)
                  {
                    ATerm u_82 = NULL,v_82 = NULL,w_82 = NULL;
                    u_82 = t;
                    y_80 :
                    if(match_cons(u_82, sym_Row_2))
                      {
                        v_82 = ATgetArgument(u_82, 0);
                        w_82 = ATgetArgument(u_82, 1);
                        t = (ATerm) ATmakeAppl(sym_Row_2, not_null(v_82), (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_82), not_null(w_82)));
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = map_1(t, q_2);
                  z_82 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(j_82), not_null(z_82));
                }
              }
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(e_82, sym_Choice_2))
            {
              f_82 = ATgetArgument(e_82, 0);
              i_82 = ATgetArgument(e_82, 1);
              s_81 :
              if(match_cons(f_82, sym_Matrix_2))
                {
                  g_82 = ATgetArgument(f_82, 0);
                  h_82 = ATgetArgument(f_82, 1);
                  t_81 :
                  if(match_cons(i_82, sym_Matrix_2))
                    {
                      j_82 = ATgetArgument(i_82, 0);
                      m_82 = ATgetArgument(i_82, 1);
                      {
                        ATerm f_83 = NULL;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                        {
                          ATerm h_83 = NULL;
                          t = union_0(t);
                          f_83 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = conc_0(t);
                          h_83 = t;
                          t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(f_83), not_null(h_83));
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(i_82, sym_Choice_2))
                        {
                          j_82 = ATgetArgument(i_82, 0);
                          m_82 = ATgetArgument(i_82, 1);
                          u_81 :
                          if(match_cons(j_82, sym_Matrix_2))
                            {
                              k_82 = ATgetArgument(j_82, 0);
                              l_82 = ATgetArgument(j_82, 1);
                              {
                                ATerm o_83 = NULL;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm q_83 = NULL;
                                  t = union_0(t);
                                  o_83 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = conc_0(t);
                                  q_83 = t;
                                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(o_83), not_null(q_83)), not_null(m_82));
                                }
                              }
                            }
                          else
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(i_82, sym_LChoice_2))
                            {
                              j_82 = ATgetArgument(i_82, 0);
                              m_82 = ATgetArgument(i_82, 1);
                              v_81 :
                              if(match_cons(j_82, sym_Matrix_2))
                                {
                                  k_82 = ATgetArgument(j_82, 0);
                                  l_82 = ATgetArgument(j_82, 1);
                                  {
                                    ATerm f_84 = NULL;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                                    {
                                      ATerm h_84 = NULL;
                                      t = union_0(t);
                                      f_84 = t;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = conc_0(t);
                                      h_84 = t;
                                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(f_84), not_null(h_84)), not_null(m_82));
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
              if(match_cons(e_82, sym_LChoice_2))
                {
                  f_82 = ATgetArgument(e_82, 0);
                  i_82 = ATgetArgument(e_82, 1);
                  w_81 :
                  if(match_cons(f_82, sym_Matrix_2))
                    {
                      g_82 = ATgetArgument(f_82, 0);
                      h_82 = ATgetArgument(f_82, 1);
                      x_81 :
                      if(match_cons(i_82, sym_Matrix_2))
                        {
                          j_82 = ATgetArgument(i_82, 0);
                          m_82 = ATgetArgument(i_82, 1);
                          {
                            ATerm n_84 = NULL;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                            {
                              ATerm p_84 = NULL;
                              t = union_0(t);
                              n_84 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = conc_0(t);
                              p_84 = t;
                              t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(n_84), not_null(p_84));
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(i_82, sym_LChoice_2))
                            {
                              j_82 = ATgetArgument(i_82, 0);
                              m_82 = ATgetArgument(i_82, 1);
                              y_81 :
                              if(match_cons(j_82, sym_Matrix_2))
                                {
                                  k_82 = ATgetArgument(j_82, 0);
                                  l_82 = ATgetArgument(j_82, 1);
                                  {
                                    ATerm w_84 = NULL;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                                    {
                                      ATerm a_85 = NULL;
                                      t = union_0(t);
                                      w_84 = t;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = conc_0(t);
                                      a_85 = t;
                                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(w_84), not_null(a_85)), not_null(m_82));
                                    }
                                  }
                                }
                              else
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(i_82, sym_Choice_2))
                                {
                                  j_82 = ATgetArgument(i_82, 0);
                                  m_82 = ATgetArgument(i_82, 1);
                                  z_81 :
                                  if(match_cons(j_82, sym_Matrix_2))
                                    {
                                      k_82 = ATgetArgument(j_82, 0);
                                      l_82 = ATgetArgument(j_82, 1);
                                      {
                                        ATerm i_85 = NULL;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        {
                                          ATerm k_85 = NULL;
                                          t = union_0(t);
                                          i_85 = t;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                                          t = conc_0(t);
                                          k_85 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(i_85), not_null(k_85)), not_null(m_82));
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
ATerm foldr_3 (ATerm t, ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm z_72 (ATerm))
{
  ATerm v_86 (ATerm t)
  {
    ATerm o_13 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        t = x_72(t);
        PopChoice();
      }
    else
      {
        t = o_13;
        {
          ATerm m_86 = NULL,n_86 = NULL,o_86 = NULL;
          m_86 = t;
          l_86 :
          if(match_cons(m_86, sym_Cons_2))
            {
              n_86 = ATgetArgument(m_86, 0);
              o_86 = ATgetArgument(m_86, 1);
              {
                ATerm r_86 = NULL;
                t = not_null(n_86);
                {
                  ATerm t_86 = NULL;
                  t = z_72(t);
                  r_86 = t;
                  t = not_null(o_86);
                  t = v_86(t);
                  t_86 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_86), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_86), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = y_72(t);
                }
              }
            }
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = v_86(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm o_74 (ATerm), ATerm p_74 (ATerm), ATerm q_74 (ATerm))
{
  ATerm f_87 = NULL;
  ATerm h_87 = NULL;
  f_87 = t;
  {
    ATerm i_87 = NULL;
    ATerm k_87 = NULL,l_87 = NULL,m_87 = NULL,n_87 = NULL,o_87 = NULL;
    t = not_null(f_87);
    i_87 = t;
    t = SSL_explode_term(not_null(i_87));
    k_87 = t;
    c_87 :
    if(match_cons(k_87, sym_TCons_2))
      {
        l_87 = ATgetArgument(k_87, 0);
        m_87 = ATgetArgument(k_87, 1);
        d_87 :
        if(match_cons(m_87, sym_TCons_2))
          {
            n_87 = ATgetArgument(m_87, 0);
            o_87 = ATgetArgument(m_87, 1);
            e_87 :
            if(match_cons(o_87, sym_TNil_0))
              {
                if(h_87 != NULL && h_87 != n_87)
                  _fail(n_87);
                else
                  h_87 = n_87;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(h_87);
    t = foldr_3(t, o_74, p_74, q_74);
  }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm v_87 (ATerm t)
  {
    ATerm s_13 = t;
    if(PushChoice()==0)
      {
        ATerm t_87 = NULL;
        t = x_74(t);
        t_87 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_87), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = s_13;
        {
          ATerm r_2 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, r_2, union_0, v_87);
        }
      }
    return(t);
  }
  t = v_87(t);
  return(t);
}
ATerm collect_offsets_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm z_87 = NULL,a_88 = NULL;
    z_87 = t;
    y_87 :
    if(match_cons(z_87, sym_Off_1))
      {
        a_88 = ATgetArgument(z_87, 0);
        t = not_null(a_88);
      }
    else
      _fail(t);
    return(t);
  }
  t = collect_1(t, s_2);
  return(t);
}
ATerm CollectSubst_0 (ATerm t)
{
  ATerm k_88 = NULL,l_88 = NULL,m_88 = NULL,n_88 = NULL,o_88 = NULL,p_88 = NULL,q_88 = NULL;
  k_88 = t;
  f_88 :
  if(match_cons(k_88, sym_As_2))
    {
      l_88 = ATgetArgument(k_88, 0);
      n_88 = ATgetArgument(k_88, 1);
      g_88 :
      if(match_cons(l_88, sym_Off_1))
        {
          m_88 = ATgetArgument(l_88, 0);
          h_88 :
          if(match_cons(n_88, sym_Var_1))
            {
              o_88 = ATgetArgument(n_88, 0);
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_88)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_88))), (ATerm) ATmakeAppl(sym_Nil_0));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(l_88, sym_Var_1))
            {
              m_88 = ATgetArgument(l_88, 0);
              i_88 :
              if(match_cons(n_88, sym_As_2))
                {
                  o_88 = ATgetArgument(n_88, 0);
                  q_88 = ATgetArgument(n_88, 1);
                  j_88 :
                  if(match_cons(o_88, sym_Off_1))
                    {
                      p_88 = ATgetArgument(o_88, 0);
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_88)), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_88))), (ATerm) ATmakeAppl(sym_Nil_0));
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
  ATerm a_14 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = a_14;
      t = Cons_2(t, _id, _id);
    }
  return(t);
}
ATerm IgnoreVar_0 (ATerm t)
{
  ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL,i_89 = NULL,j_89 = NULL,k_89 = NULL,l_89 = NULL;
  f_89 = t;
  a_89 :
  if(match_cons(f_89, sym_As_2))
    {
      g_89 = ATgetArgument(f_89, 0);
      i_89 = ATgetArgument(f_89, 1);
      b_89 :
      if(match_cons(g_89, sym_Off_1))
        {
          h_89 = ATgetArgument(g_89, 0);
          c_89 :
          if(match_cons(i_89, sym_Var_1))
            {
              j_89 = ATgetArgument(i_89, 0);
              t = not_null(h_89);
              t = is_list_0(t);
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(h_89)), (ATerm) ATmakeAppl(sym_Wld_0));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(g_89, sym_Var_1))
            {
              h_89 = ATgetArgument(g_89, 0);
              d_89 :
              if(match_cons(i_89, sym_As_2))
                {
                  j_89 = ATgetArgument(i_89, 0);
                  l_89 = ATgetArgument(i_89, 1);
                  e_89 :
                  if(match_cons(j_89, sym_Off_1))
                    {
                      k_89 = ATgetArgument(j_89, 0);
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(k_89)), not_null(l_89));
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
ATerm HdMember_1 (ATerm t, ATerm e_74 (ATerm))
{
  ATerm w_89 = NULL,x_89 = NULL,y_89 = NULL;
  w_89 = t;
  v_89 :
  if(match_cons(w_89, sym_Cons_2))
    {
      x_89 = ATgetArgument(w_89, 0);
      y_89 = ATgetArgument(w_89, 1);
      t = e_74(t);
      {
        ATerm t_2 (ATerm t)
        {
          ATerm b_90 = NULL;
          b_90 = t;
          if(x_89 != NULL && x_89 != b_90)
            _fail(b_90);
          else
            x_89 = b_90;
          return(t);
        }
        t = fetch_1(t, t_2);
      }
      t = not_null(y_89);
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL;
  i_90 = t;
  f_90 :
  if(match_cons(i_90, sym_TCons_2))
    {
      j_90 = ATgetArgument(i_90, 0);
      k_90 = ATgetArgument(i_90, 1);
      g_90 :
      if(match_cons(k_90, sym_TCons_2))
        {
          l_90 = ATgetArgument(k_90, 0);
          m_90 = ATgetArgument(k_90, 1);
          h_90 :
          if(match_cons(m_90, sym_TNil_0))
            {
              t = not_null(j_90);
              {
                ATerm q_90 (ATerm t)
                {
                  ATerm e_14 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(l_90);
                      PopChoice();
                    }
                  else
                    {
                      t = e_14;
                      {
                        ATerm f_14 = t;
                        if(PushChoice()==0)
                          {
                            ATerm u_2 (ATerm t)
                            {
                              t = not_null(l_90);
                              return(t);
                            }
                            t = HdMember_1(t, u_2);
                            t = q_90(t);
                            PopChoice();
                          }
                        else
                          {
                            t = f_14;
                            t = Cons_2(t, _id, q_90);
                          }
                      }
                    }
                  return(t);
                }
                t = q_90(t);
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
ATerm FoldR_0 (ATerm t)
{
  ATerm t_90 = NULL,u_90 = NULL,v_90 = NULL;
  t_90 = t;
  s_90 :
  if(match_cons(t_90, sym_Cons_2))
    {
      u_90 = ATgetArgument(t_90, 0);
      v_90 = ATgetArgument(t_90, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_90), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_90), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm u_72 (ATerm), ATerm v_72 (ATerm))
{
  ATerm z_90 (ATerm t)
  {
    ATerm g_14 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        t = u_72(t);
        PopChoice();
      }
    else
      {
        t = g_14;
        t = FoldR_0(t);
        {
          ATerm v_2 (ATerm t)
          {
            t = TCons_2(t, z_90, TNil_0);
            return(t);
          }
          t = TCons_2(t, _id, v_2);
          t = v_72(t);
        }
      }
    return(t);
  }
  t = z_90(t);
  return(t);
}
ATerm unions_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = foldr_2(t, w_2, union_0);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm k_91 = NULL,l_91 = NULL,m_91 = NULL,n_91 = NULL,o_91 = NULL,p_91 = NULL,q_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL,u_91 = NULL,v_91 = NULL,w_91 = NULL;
  k_91 = t;
  b_91 :
  if(match_cons(k_91, sym_TCons_2))
    {
      l_91 = ATgetArgument(k_91, 0);
      q_91 = ATgetArgument(k_91, 1);
      c_91 :
      if(match_cons(l_91, sym_TCons_2))
        {
          m_91 = ATgetArgument(l_91, 0);
          n_91 = ATgetArgument(l_91, 1);
          d_91 :
          if(match_cons(n_91, sym_TCons_2))
            {
              o_91 = ATgetArgument(n_91, 0);
              p_91 = ATgetArgument(n_91, 1);
              e_91 :
              if(match_cons(p_91, sym_TNil_0))
                {
                  f_91 :
                  if(match_cons(q_91, sym_TCons_2))
                    {
                      r_91 = ATgetArgument(q_91, 0);
                      w_91 = ATgetArgument(q_91, 1);
                      g_91 :
                      if(match_cons(r_91, sym_TCons_2))
                        {
                          s_91 = ATgetArgument(r_91, 0);
                          t_91 = ATgetArgument(r_91, 1);
                          h_91 :
                          if(match_cons(t_91, sym_TCons_2))
                            {
                              u_91 = ATgetArgument(t_91, 0);
                              v_91 = ATgetArgument(t_91, 1);
                              i_91 :
                              if(match_cons(v_91, sym_TNil_0))
                                {
                                  j_91 :
                                  if(match_cons(w_91, sym_TNil_0))
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_91), not_null(s_91)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_91), not_null(u_91)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm g_92 = NULL,h_92 = NULL,i_92 = NULL;
  g_92 = t;
  f_92 :
  if(match_cons(g_92, sym_Cons_2))
    {
      h_92 = ATgetArgument(g_92, 0);
      i_92 = ATgetArgument(g_92, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_92), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_92), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm o_92 = NULL;
  o_92 = t;
  n_92 :
  if(match_cons(o_92, sym_Nil_0))
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
ATerm list_1 (ATerm t, ATerm o_77 (ATerm))
{
  ATerm q_92 (ATerm t)
  {
    ATerm h_14 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = h_14;
        t = Cons_2(t, o_77, q_92);
      }
    return(t);
  }
  t = q_92(t);
  return(t);
}
ATerm CollectSplit_2 (ATerm t, ATerm k_75 (ATerm), ATerm l_75 (ATerm))
{
  ATerm i_93 = NULL;
  ATerm k_93 = NULL,l_93 = NULL,u_93 = NULL,v_93 = NULL,w_93 = NULL,x_93 = NULL,l_94 = NULL;
  i_93 = t;
  {
    ATerm i_14;
    i_14 = t;
    {
      ATerm m_93 = NULL;
      ATerm o_93 = NULL,p_93 = NULL,q_93 = NULL,r_93 = NULL,t_93 = NULL;
      t = not_null(i_93);
      m_93 = t;
      t = SSL_explode_term(not_null(m_93));
      o_93 = t;
      u_92 :
      if(match_cons(o_93, sym_TCons_2))
        {
          p_93 = ATgetArgument(o_93, 0);
          q_93 = ATgetArgument(o_93, 1);
          v_92 :
          if(match_cons(q_93, sym_TCons_2))
            {
              r_93 = ATgetArgument(q_93, 0);
              t_93 = ATgetArgument(q_93, 1);
              w_92 :
              if(match_cons(t_93, sym_TNil_0))
                {
                  if(k_93 != NULL && k_93 != p_93)
                    _fail(p_93);
                  else
                    k_93 = p_93;
                  if(l_93 != NULL && l_93 != r_93)
                    _fail(r_93);
                  else
                    l_93 = r_93;
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
    t = i_14;
    {
      ATerm y_93 = NULL,z_93 = NULL,a_94 = NULL,b_94 = NULL,c_94 = NULL;
      t = not_null(l_93);
      t = list_1(t, k_75);
      t = unzip_0(t);
      y_93 = t;
      d_93 :
      if(match_cons(y_93, sym_TCons_2))
        {
          z_93 = ATgetArgument(y_93, 0);
          a_94 = ATgetArgument(y_93, 1);
          e_93 :
          if(match_cons(a_94, sym_TCons_2))
            {
              b_94 = ATgetArgument(a_94, 0);
              c_94 = ATgetArgument(a_94, 1);
              f_93 :
              if(match_cons(c_94, sym_TNil_0))
                {
                  ATerm d_94 = NULL;
                  if(v_93 != NULL && v_93 != z_93)
                    _fail(z_93);
                  else
                    v_93 = z_93;
                  if(u_93 != NULL && u_93 != b_94)
                    _fail(b_94);
                  else
                    u_93 = b_94;
                  {
                    ATerm g_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL;
                    t = SSL_mkterm(not_null(k_93), not_null(v_93));
                    d_94 = t;
                    t = l_75(t);
                    g_94 = t;
                    a_93 :
                    if(match_cons(g_94, sym_TCons_2))
                      {
                        h_94 = ATgetArgument(g_94, 0);
                        i_94 = ATgetArgument(g_94, 1);
                        b_93 :
                        if(match_cons(i_94, sym_TCons_2))
                          {
                            j_94 = ATgetArgument(i_94, 0);
                            k_94 = ATgetArgument(i_94, 1);
                            c_93 :
                            if(match_cons(k_94, sym_TNil_0))
                              {
                                if(w_93 != NULL && w_93 != h_94)
                                  _fail(h_94);
                                else
                                  w_93 = h_94;
                                if(x_93 != NULL && x_93 != j_94)
                                  _fail(j_94);
                                else
                                  x_93 = j_94;
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
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      t = not_null(u_93);
      {
        ATerm n_94 = NULL;
        t = unions_0(t);
        l_94 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_93), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_94), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = union_0(t);
        n_94 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_93), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_94), (ATerm) ATmakeAppl(sym_TNil_0)));
      }
    }
  }
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm y_94 = NULL;
  y_94 = t;
  t = SSL_is_int(not_null(y_94));
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm c_95 = NULL;
  c_95 = t;
  t = SSL_is_string(not_null(c_95));
  return(t);
}
ATerm collect_split_1 (ATerm t, ATerm g_75 (ATerm))
{
  ATerm f_95 (ATerm t)
  {
    ATerm j_14 = t;
    if(PushChoice()==0)
      {
        ATerm k_14 = t;
        if(PushChoice()==0)
          {
            t = is_string_0(t);
            PopChoice();
          }
        else
          {
            t = k_14;
            t = is_int_0(t);
          }
        t = g_75(t);
        PopChoice();
      }
    else
      {
        t = j_14;
        t = CollectSplit_2(t, f_95, g_75);
      }
    return(t);
  }
  t = f_95(t);
  return(t);
}
ATerm collect_split_2 (ATerm t, ATerm i_75 (ATerm), ATerm j_75 (ATerm))
{
  ATerm x_2 (ATerm t)
  {
    ATerm y_2 (ATerm t)
    {
      t = try_1(t, i_75);
      return(t);
    }
    ATerm z_2 (ATerm t)
    {
      ATerm l_14 = t;
      if(PushChoice()==0)
        {
          t = j_75(t);
          PopChoice();
        }
      else
        {
          t = l_14;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      return(t);
    }
    t = split_2(t, y_2, z_2);
    return(t);
  }
  t = collect_split_1(t, x_2);
  return(t);
}
ATerm collect_substitutions_0 (ATerm t)
{
  t = collect_split_2(t, IgnoreVar_0, CollectSubst_0);
  return(t);
}
ATerm Annotate_1 (ATerm t, ATerm y_84 (ATerm))
{
  ATerm l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL;
  l_95 = t;
  i_95 :
  if(match_cons(l_95, sym_TCons_2))
    {
      m_95 = ATgetArgument(l_95, 0);
      n_95 = ATgetArgument(l_95, 1);
      j_95 :
      if(match_cons(n_95, sym_TCons_2))
        {
          o_95 = ATgetArgument(n_95, 0);
          p_95 = ATgetArgument(n_95, 1);
          k_95 :
          if(match_cons(p_95, sym_TNil_0))
            {
              ATerm s_95 = NULL;
              ATerm t_95 = NULL;
              t = y_84(t);
              t_95 = t;
              if(s_95 != NULL && s_95 != t_95)
                _fail(t_95);
              else
                s_95 = t_95;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_95), not_null(s_95))), not_null(o_95));
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
  ATerm a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL;
  a_96 = t;
  x_95 :
  if(match_cons(a_96, sym_TCons_2))
    {
      b_96 = ATgetArgument(a_96, 0);
      c_96 = ATgetArgument(a_96, 1);
      y_95 :
      if(match_cons(c_96, sym_TCons_2))
        {
          d_96 = ATgetArgument(c_96, 0);
          e_96 = ATgetArgument(c_96, 1);
          z_95 :
          if(match_cons(e_96, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_96), not_null(d_96));
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
  ATerm m_96 = NULL,n_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL;
  m_96 = t;
  j_96 :
  if(match_cons(m_96, sym_TCons_2))
    {
      n_96 = ATgetArgument(m_96, 0);
      o_96 = ATgetArgument(m_96, 1);
      k_96 :
      if(match_cons(o_96, sym_TCons_2))
        {
          p_96 = ATgetArgument(o_96, 0);
          q_96 = ATgetArgument(o_96, 1);
          l_96 :
          if(match_cons(q_96, sym_TNil_0))
            {
              ATerm m_14 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(n_96), not_null(p_96));
                  PopChoice();
                }
              else
                {
                  t = m_14;
                  t = SSL_addr(not_null(n_96), not_null(p_96));
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
  ATerm a_97 = NULL,b_97 = NULL,c_97 = NULL,d_97 = NULL,e_97 = NULL,f_97 = NULL,g_97 = NULL;
  a_97 = t;
  w_96 :
  if(match_cons(a_97, sym_TCons_2))
    {
      b_97 = ATgetArgument(a_97, 0);
      c_97 = ATgetArgument(a_97, 1);
      x_96 :
      if(match_cons(c_97, sym_TCons_2))
        {
          d_97 = ATgetArgument(c_97, 0);
          g_97 = ATgetArgument(c_97, 1);
          y_96 :
          if(match_cons(d_97, sym_Cons_2))
            {
              e_97 = ATgetArgument(d_97, 0);
              f_97 = ATgetArgument(d_97, 1);
              z_96 :
              if(match_cons(g_97, sym_TNil_0))
                {
                  ATerm k_97 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_97), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = add_0(t);
                  k_97 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(b_97), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_97), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(k_97), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_97), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL;
  t_97 = t;
  p_97 :
  if(match_cons(t_97, sym_TCons_2))
    {
      u_97 = ATgetArgument(t_97, 0);
      v_97 = ATgetArgument(t_97, 1);
      q_97 :
      if(match_cons(v_97, sym_TCons_2))
        {
          w_97 = ATgetArgument(v_97, 0);
          x_97 = ATgetArgument(v_97, 1);
          r_97 :
          if(match_cons(w_97, sym_Nil_0))
            {
              s_97 :
              if(match_cons(x_97, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm z_75 (ATerm))
{
  ATerm a_98 (ATerm t)
  {
    ATerm n_14 = t;
    if(PushChoice()==0)
      {
        t = w_75(t);
        PopChoice();
      }
    else
      {
        t = n_14;
        t = x_75(t);
        {
          ATerm a_3 (ATerm t)
          {
            t = TCons_2(t, a_98, TNil_0);
            return(t);
          }
          t = TCons_2(t, z_75, a_3);
          t = y_75(t);
        }
      }
    return(t);
  }
  t = a_98(t);
  return(t);
}
ATerm NZip00_0 (ATerm t)
{
  ATerm c_98 = NULL;
  c_98 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_98), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm nzip0_1 (ATerm t, ATerm h_76 (ATerm))
{
  t = NZip00_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, h_76);
  return(t);
}
ATerm Propagate_0 (ATerm t)
{
  ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL,r_98 = NULL,s_98 = NULL,t_98 = NULL,u_98 = NULL;
  ATerm k_99 (ATerm t)
  {
    ATerm f_99 = NULL;
    ATerm g_99 = NULL;
    t = not_null(u_98);
    {
      ATerm b_3 (ATerm t)
      {
        ATerm c_3 (ATerm t)
        {
          t = not_null(t_98);
          return(t);
        }
        t = Annotate_1(t, c_3);
        return(t);
      }
      t = nzip0_1(t, b_3);
      g_99 = t;
      if(f_99 != NULL && f_99 != g_99)
        _fail(g_99);
      else
        f_99 = g_99;
    }
    t = not_null(f_99);
    return(t);
  }
  r_98 = t;
  k_98 :
  if(match_cons(r_98, sym_As_2))
    {
      s_98 = ATgetArgument(r_98, 0);
      u_98 = ATgetArgument(r_98, 1);
      l_98 :
      if(match_cons(s_98, sym_Off_1))
        {
          t_98 = ATgetArgument(s_98, 0);
          m_98 :
          if(match_cons(u_98, sym_Op_2))
            {
              q_98 = ATgetArgument(u_98, 0);
              p_98 = ATgetArgument(u_98, 1);
              {
                ATerm o_14 = t;
                if(PushChoice()==0)
                  {
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(t_98)), (ATerm) ATmakeAppl(sym_Op_2, not_null(q_98), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(t_98)), not_null(p_98))));
                    PopChoice();
                  }
                else
                  {
                    t = o_14;
                    t = k_99(t);
                  }
              }
            }
          else
            {
              if(match_cons(u_98, sym_As_2))
                {
                  q_98 = ATgetArgument(u_98, 0);
                  p_98 = ATgetArgument(u_98, 1);
                  n_98 :
                  if(match_cons(q_98, sym_Var_1))
                    {
                      o_98 = ATgetArgument(q_98, 0);
                      {
                        ATerm p_14 = t;
                        if(PushChoice()==0)
                          {
                            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_98)), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(t_98)), not_null(p_98)));
                            PopChoice();
                          }
                        else
                          {
                            t = p_14;
                            t = k_99(t);
                          }
                      }
                    }
                  else
                    t = k_99(t);
                }
              else
                {
                  if(match_cons(u_98, sym_BuildDefault_1))
                    {
                      q_98 = ATgetArgument(u_98, 0);
                      {
                        ATerm q_14 = t;
                        if(PushChoice()==0)
                          {
                            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(t_98)), (ATerm) ATmakeAppl(sym_Wld_0));
                            PopChoice();
                          }
                        else
                          {
                            t = q_14;
                            t = k_99(t);
                          }
                      }
                    }
                  else
                    t = k_99(t);
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
ATerm topdown_1 (ATerm t, ATerm e_80 (ATerm))
{
  ATerm m_99 (ATerm t)
  {
    t = e_80(t);
    t = _all(t, m_99);
    return(t);
  }
  t = m_99(t);
  return(t);
}
ATerm term_to_matrix_0 (ATerm t)
{
  ATerm t_99 = NULL;
  ATerm v_99 = NULL,w_99 = NULL,x_99 = NULL,y_99 = NULL,z_99 = NULL;
  t_99 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_99), (ATerm) ATmakeAppl(sym_Nil_0)));
  {
    ATerm d_3 (ATerm t)
    {
      t = try_1(t, Propagate_0);
      return(t);
    }
    t = topdown_1(t, d_3);
    t = collect_substitutions_0(t);
    v_99 = t;
    q_99 :
    if(match_cons(v_99, sym_TCons_2))
      {
        w_99 = ATgetArgument(v_99, 0);
        x_99 = ATgetArgument(v_99, 1);
        r_99 :
        if(match_cons(x_99, sym_TCons_2))
          {
            y_99 = ATgetArgument(x_99, 0);
            z_99 = ATgetArgument(x_99, 1);
            s_99 :
            if(match_cons(z_99, sym_TNil_0))
              {
                ATerm c_100 = NULL;
                t = not_null(w_99);
                t = collect_offsets_0(t);
                c_100 = t;
                t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(c_100), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Row_2, not_null(w_99), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(y_99))), (ATerm) ATmakeAppl(sym_Nil_0)));
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
  ATerm j_100 = NULL,k_100 = NULL;
  j_100 = t;
  i_100 :
  if(match_cons(j_100, sym_Match_1))
    {
      k_100 = ATgetArgument(j_100, 0);
      t = not_null(k_100);
      t = term_to_matrix_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm u_67 (ATerm), ATerm v_67 (ATerm))
{
  ATerm n_100 (ATerm t)
  {
    ATerm r_14 = t;
    if(PushChoice()==0)
      {
        t = u_67(t);
        t = n_100(t);
        PopChoice();
      }
    else
      {
        t = r_14;
        t = v_67(t);
      }
    return(t);
  }
  t = n_100(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm x_67 (ATerm))
{
  t = repeat_2(t, x_67, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm i_80 (ATerm))
{
  ATerm o_100 (ATerm t)
  {
    t = i_80(t);
    t = _all(t, o_100);
    t = i_80(t);
    return(t);
  }
  t = o_100(t);
  return(t);
}
ATerm match_to_matrix_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm j_3 (ATerm t)
    {
      ATerm s_14 = t;
      if(PushChoice()==0)
        {
          t = MatchToMatrix_0(t);
          PopChoice();
        }
      else
        {
          t = s_14;
          {
            ATerm t_14 = t;
            if(PushChoice()==0)
              {
                t = MatrixMerge_0(t);
                PopChoice();
              }
            else
              {
                t = t_14;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, j_3);
    return(t);
  }
  t = downup_1(t, e_3);
  return(t);
}
ATerm match_to_dfa_0 (ATerm t)
{
  t = match_to_matrix_0(t);
  t = matrix_to_dfa_0(t);
  t = strename_0(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm m_61 (ATerm), ATerm n_61 (ATerm), ATerm o_61 (ATerm))
{
  ATerm v_100 = NULL,w_100 = NULL,x_100 = NULL,y_100 = NULL;
  v_100 = t;
  u_100 :
  if(match_cons(v_100, sym_SDef_3))
    {
      w_100 = ATgetArgument(v_100, 0);
      x_100 = ATgetArgument(v_100, 1);
      y_100 = ATgetArgument(v_100, 2);
      {
        ATerm c_101 = NULL;
        t = not_null(w_100);
        {
          ATerm e_101 = NULL;
          t = m_61(t);
          c_101 = t;
          t = not_null(x_100);
          {
            ATerm g_101 = NULL;
            t = n_61(t);
            e_101 = t;
            t = not_null(y_100);
            t = o_61(t);
            g_101 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(c_101), not_null(e_101), not_null(g_101));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm m_77 (ATerm))
{
  ATerm n_101 (ATerm t)
  {
    ATerm u_14 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = u_14;
        t = Cons_2(t, m_77, n_101);
      }
    return(t);
  }
  t = n_101(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm h_60 (ATerm))
{
  ATerm r_101 = NULL,s_101 = NULL;
  r_101 = t;
  q_101 :
  if(match_cons(r_101, sym_Strategies_1))
    {
      s_101 = ATgetArgument(r_101, 0);
      {
        ATerm u_101 = NULL;
        t = not_null(s_101);
        t = h_60(t);
        u_101 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(u_101));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm j_60 (ATerm))
{
  ATerm b_102 = NULL,c_102 = NULL;
  b_102 = t;
  a_102 :
  if(match_cons(b_102, sym_Specification_1))
    {
      c_102 = ATgetArgument(b_102, 0);
      {
        ATerm e_102 = NULL;
        t = not_null(c_102);
        t = j_60(t);
        e_102 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(e_102));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm z_84 (ATerm))
{
  ATerm k_3 (ATerm t)
  {
    ATerm l_3 (ATerm t)
    {
      ATerm m_3 (ATerm t)
      {
        ATerm r_3 (ATerm t)
        {
          ATerm e_4 (ATerm t)
          {
            t = SDef_3(t, _id, _id, z_84);
            return(t);
          }
          t = map_1(t, e_4);
          return(t);
        }
        t = Strategies_1(t, r_3);
        return(t);
      }
      t = Cons_2(t, m_3, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, l_3);
    return(t);
  }
  t = Specification_1(t, k_3);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm j_102 = NULL;
  j_102 = t;
  i_102 :
  if(!(match_cons(j_102, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm r_62 (ATerm), ATerm s_62 (ATerm))
{
  ATerm o_102 = NULL,p_102 = NULL,q_102 = NULL;
  o_102 = t;
  n_102 :
  if(match_cons(o_102, sym_TCons_2))
    {
      p_102 = ATgetArgument(o_102, 0);
      q_102 = ATgetArgument(o_102, 1);
      {
        ATerm t_102 = NULL;
        t = not_null(p_102);
        {
          ATerm v_102 = NULL;
          t = r_62(t);
          t_102 = t;
          t = not_null(q_102);
          t = s_62(t);
          v_102 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_102), not_null(v_102));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm c_103 = NULL;
  ATerm v_14;
  v_14 = t;
  {
    ATerm f_4 (ATerm t)
    {
      ATerm d_103 = NULL,e_103 = NULL;
      d_103 = t;
      b_103 :
      if(match_cons(d_103, sym_Program_1))
        {
          e_103 = ATgetArgument(d_103, 0);
          if(c_103 != NULL && c_103 != e_103)
            _fail(e_103);
          else
            c_103 = e_103;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, f_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_103), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = v_14;
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
  ATerm h_103 = NULL;
  h_103 = t;
  t = SSL_exit(not_null(h_103));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm o_103 = NULL,p_103 = NULL,q_103 = NULL,r_103 = NULL,s_103 = NULL;
  o_103 = t;
  l_103 :
  if(match_cons(o_103, sym_TCons_2))
    {
      p_103 = ATgetArgument(o_103, 0);
      q_103 = ATgetArgument(o_103, 1);
      m_103 :
      if(match_cons(q_103, sym_TCons_2))
        {
          r_103 = ATgetArgument(q_103, 0);
          s_103 = ATgetArgument(q_103, 1);
          n_103 :
          if(match_cons(s_103, sym_TNil_0))
            {
              ATerm y_14;
              y_14 = t;
              t = SSL_printnl(not_null(p_103), not_null(r_103));
              t = y_14;
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
ATerm try_1 (ATerm t, ATerm t_79 (ATerm))
{
  ATerm z_14 = t;
  if(PushChoice()==0)
    {
      t = t_79(t);
      PopChoice();
    }
  else
    t = z_14;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_104 = NULL,c_104 = NULL;
  ATerm g_4 (ATerm t)
  {
    ATerm o_4 (ATerm t)
    {
      ATerm a_15 = t;
      if(PushChoice()==0)
        {
          ATerm q_4 (ATerm t)
          {
            ATerm d_104 = NULL;
            d_104 = t;
            w_103 :
            if(!(match_cons(d_104, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, q_4);
          PopChoice();
          _fail(t);
        }
      else
        t = a_15;
      return(t);
    }
    ATerm p_4 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, o_4, p_4);
    {
      ATerm r_4 (ATerm t)
      {
        ATerm t_4 (ATerm t)
        {
          ATerm e_104 = NULL,f_104 = NULL;
          e_104 = t;
          y_103 :
          if(match_cons(e_104, sym_Runtime_1))
            {
              f_104 = ATgetArgument(e_104, 0);
              if(c_104 != NULL && c_104 != f_104)
                _fail(f_104);
              else
                c_104 = f_104;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, t_4);
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, r_4, s_4);
      {
        ATerm u_4 (ATerm t)
        {
          ATerm a_5 (ATerm t)
          {
            ATerm g_104 = NULL,h_104 = NULL;
            g_104 = t;
            a_104 :
            if(match_cons(g_104, sym_Program_1))
              {
                h_104 = ATgetArgument(g_104, 0);
                if(b_104 != NULL && b_104 != h_104)
                  _fail(h_104);
                else
                  b_104 = h_104;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, a_5);
          return(t);
        }
        ATerm v_4 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, u_4, v_4);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_104), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_104), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, g_4);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm o_104 = NULL,p_104 = NULL,q_104 = NULL,r_104 = NULL,s_104 = NULL;
  o_104 = t;
  l_104 :
  if(match_cons(o_104, sym_TCons_2))
    {
      p_104 = ATgetArgument(o_104, 0);
      q_104 = ATgetArgument(o_104, 1);
      m_104 :
      if(match_cons(q_104, sym_TCons_2))
        {
          r_104 = ATgetArgument(q_104, 0);
          s_104 = ATgetArgument(q_104, 1);
          n_104 :
          if(match_cons(s_104, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(p_104), not_null(r_104));
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
  ATerm a_105 = NULL,b_105 = NULL,c_105 = NULL,d_105 = NULL,e_105 = NULL;
  a_105 = t;
  x_104 :
  if(match_cons(a_105, sym_TCons_2))
    {
      b_105 = ATgetArgument(a_105, 0);
      c_105 = ATgetArgument(a_105, 1);
      y_104 :
      if(match_cons(c_105, sym_TCons_2))
        {
          d_105 = ATgetArgument(c_105, 0);
          e_105 = ATgetArgument(c_105, 1);
          z_104 :
          if(match_cons(e_105, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(b_105), not_null(d_105));
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
  ATerm m_105 = NULL;
  ATerm b_15;
  b_15 = t;
  {
    ATerm b_5 (ATerm t)
    {
      ATerm d_15 = t;
      if(PushChoice()==0)
        {
          ATerm f_5 (ATerm t)
          {
            ATerm n_105 = NULL,o_105 = NULL;
            n_105 = t;
            j_105 :
            if(match_cons(n_105, sym_Output_1))
              {
                o_105 = ATgetArgument(n_105, 0);
                if(m_105 != NULL && m_105 != o_105)
                  _fail(o_105);
                else
                  m_105 = o_105;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, f_5);
          PopChoice();
        }
      else
        {
          t = d_15;
          {
            ATerm p_105 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            p_105 = t;
            if(m_105 != NULL && m_105 != p_105)
              _fail(p_105);
            else
              m_105 = p_105;
          }
        }
      return(t);
    }
    ATerm d_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, b_5, d_5);
  }
  t = b_15;
  {
    ATerm g_5 (ATerm t)
    {
      ATerm h_5 (ATerm t)
      {
        ATerm i_5 (ATerm t)
        {
          t = not_null(m_105);
          return(t);
        }
        t = split_2(t, i_5, _id);
        return(t);
      }
      t = TCons_2(t, h_5, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, g_5);
    {
      ATerm e_15 = t;
      if(PushChoice()==0)
        {
          ATerm j_5 (ATerm t)
          {
            ATerm l_5 (ATerm t)
            {
              ATerm q_105 = NULL;
              q_105 = t;
              l_105 :
              if(!(match_cons(q_105, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, l_5);
            return(t);
          }
          ATerm k_5 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, j_5, k_5);
          PopChoice();
        }
      else
        {
          t = e_15;
          {
            ATerm q_5 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, q_5);
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
ATerm apply_strategy_1 (ATerm t, ATerm x_65 (ATerm))
{
  ATerm y_105 = NULL,a_106 = NULL,b_106 = NULL,c_106 = NULL,d_106 = NULL,e_106 = NULL;
  ATerm f_15;
  f_15 = t;
  t = dtime_0(t);
  t = f_15;
  t = x_65(t);
  {
    ATerm g_15;
    g_15 = t;
    {
      ATerm z_105 = NULL;
      t = dtime_0(t);
      z_105 = t;
      if(y_105 != NULL && y_105 != z_105)
        _fail(z_105);
      else
        y_105 = z_105;
    }
    t = g_15;
    a_106 = t;
    v_105 :
    if(match_cons(a_106, sym_TCons_2))
      {
        b_106 = ATgetArgument(a_106, 0);
        c_106 = ATgetArgument(a_106, 1);
        w_105 :
        if(match_cons(c_106, sym_TCons_2))
          {
            d_106 = ATgetArgument(c_106, 0);
            e_106 = ATgetArgument(c_106, 1);
            x_105 :
            if(match_cons(e_106, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(y_105)), not_null(b_106)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_106), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm k_106 = NULL;
  k_106 = t;
  t = SSL_ReadFromFile(not_null(k_106));
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_79 (ATerm), ATerm c_79 (ATerm))
{
  ATerm q_106 = NULL;
  ATerm s_106 = NULL;
  q_106 = t;
  {
    ATerm u_106 = NULL;
    t = b_79(t);
    s_106 = t;
    t = not_null(q_106);
    t = c_79(t);
    u_106 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_106), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_106), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm c_107 = NULL;
  ATerm h_15;
  h_15 = t;
  {
    ATerm i_15 = t;
    if(PushChoice()==0)
      {
        ATerm r_5 (ATerm t)
        {
          ATerm d_107 = NULL,e_107 = NULL;
          d_107 = t;
          a_107 :
          if(match_cons(d_107, sym_Input_1))
            {
              e_107 = ATgetArgument(d_107, 0);
              if(c_107 != NULL && c_107 != e_107)
                _fail(e_107);
              else
                c_107 = e_107;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, r_5);
        PopChoice();
      }
    else
      {
        t = i_15;
        {
          ATerm f_107 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          f_107 = t;
          if(c_107 != NULL && c_107 != f_107)
            _fail(f_107);
          else
            c_107 = f_107;
        }
      }
  }
  t = h_15;
  {
    ATerm t_5 (ATerm t)
    {
      t = not_null(c_107);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, t_5);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_107 = NULL;
  j_107 = t;
  i_107 :
  if(!(match_cons(j_107, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_56 (ATerm))
{
  ATerm n_107 = NULL,o_107 = NULL;
  n_107 = t;
  m_107 :
  if(match_cons(n_107, sym_Undefined_1))
    {
      o_107 = ATgetArgument(n_107, 0);
      {
        ATerm q_107 = NULL;
        t = not_null(o_107);
        t = x_56(t);
        q_107 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_107));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm v_107 = NULL;
  v_107 = t;
  u_107 :
  if(!(match_cons(v_107, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm v_77 (ATerm))
{
  ATerm w_107 (ATerm t)
  {
    ATerm j_15 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, v_77, _id);
        PopChoice();
      }
    else
      {
        t = j_15;
        t = Cons_2(t, _id, w_107);
      }
    return(t);
  }
  t = w_107(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_65 (ATerm))
{
  t = fetch_1(t, b_65);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_65 (ATerm))
{
  ATerm v_5 (ATerm t)
  {
    ATerm k_15 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = k_15;
        {
          ATerm l_15 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = l_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, v_5);
  t = w_65(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm c_108 = NULL,d_108 = NULL,e_108 = NULL;
  ATerm m_15;
  m_15 = t;
  {
    ATerm f_108 = NULL,g_108 = NULL,h_108 = NULL,i_108 = NULL,j_108 = NULL,k_108 = NULL,l_108 = NULL;
    f_108 = t;
    y_107 :
    if(match_cons(f_108, sym_TCons_2))
      {
        g_108 = ATgetArgument(f_108, 0);
        h_108 = ATgetArgument(f_108, 1);
        z_107 :
        if(match_cons(h_108, sym_TCons_2))
          {
            i_108 = ATgetArgument(h_108, 0);
            j_108 = ATgetArgument(h_108, 1);
            a_108 :
            if(match_cons(j_108, sym_TCons_2))
              {
                k_108 = ATgetArgument(j_108, 0);
                l_108 = ATgetArgument(j_108, 1);
                b_108 :
                if(match_cons(l_108, sym_TNil_0))
                  {
                    if(c_108 != NULL && c_108 != g_108)
                      _fail(g_108);
                    else
                      c_108 = g_108;
                    if(d_108 != NULL && d_108 != i_108)
                      _fail(i_108);
                    else
                      d_108 = i_108;
                    if(e_108 != NULL && e_108 != k_108)
                      _fail(k_108);
                    else
                      e_108 = k_108;
                    t = SSL_table_put(not_null(c_108), not_null(d_108), not_null(e_108));
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
  t = m_15;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm o_108 = NULL;
  o_108 = t;
  t = SSL_table_create(not_null(o_108));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm s_108 = NULL;
  s_108 = t;
  {
    ATerm n_15;
    n_15 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_108), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = n_15;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm u_64 (ATerm), ATerm v_64 (ATerm))
{
  ATerm y_108 = NULL,z_108 = NULL,a_109 = NULL;
  y_108 = t;
  x_108 :
  if(match_cons(y_108, sym_Cons_2))
    {
      z_108 = ATgetArgument(y_108, 0);
      a_109 = ATgetArgument(y_108, 1);
      {
        ATerm d_109 = NULL;
        t = not_null(z_108);
        t = u_64(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = v_64(t);
        d_109 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_109), not_null(a_109));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm w_64 (ATerm), ATerm x_64 (ATerm))
{
  ATerm l_109 = NULL,m_109 = NULL,n_109 = NULL,o_109 = NULL,p_109 = NULL;
  l_109 = t;
  j_109 :
  if(match_cons(l_109, sym_Cons_2))
    {
      m_109 = ATgetArgument(l_109, 0);
      n_109 = ATgetArgument(l_109, 1);
      k_109 :
      if(match_cons(n_109, sym_Cons_2))
        {
          o_109 = ATgetArgument(n_109, 0);
          p_109 = ATgetArgument(n_109, 1);
          {
            ATerm t_109 = NULL;
            t = not_null(m_109);
            t = w_64(t);
            t = not_null(o_109);
            t = x_64(t);
            t_109 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_109), not_null(p_109));
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
  ATerm o_15 = t;
  if(PushChoice()==0)
    {
      ATerm w_5 (ATerm t)
      {
        ATerm r_110 = NULL;
        r_110 = t;
        x_109 :
        if(!(match_string(r_110, "-S")))
          _fail(t);
        return(t);
      }
      ATerm x_5 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, w_5, x_5);
      PopChoice();
    }
  else
    {
      t = o_15;
      {
        ATerm p_15 = t;
        if(PushChoice()==0)
          {
            ATerm y_5 (ATerm t)
            {
              ATerm s_110 = NULL;
              s_110 = t;
              y_109 :
              if(!(match_string(s_110, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm z_5 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, y_5, z_5);
            PopChoice();
          }
        else
          {
            t = p_15;
            {
              ATerm q_15 = t;
              if(PushChoice()==0)
                {
                  ATerm e_6 (ATerm t)
                  {
                    ATerm t_110 = NULL;
                    t_110 = t;
                    z_109 :
                    if(!(match_string(t_110, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm f_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, e_6, f_6);
                  PopChoice();
                }
              else
                {
                  t = q_15;
                  {
                    ATerm r_15 = t;
                    if(PushChoice()==0)
                      {
                        ATerm g_6 (ATerm t)
                        {
                          ATerm u_110 = NULL;
                          u_110 = t;
                          a_110 :
                          if(!(match_string(u_110, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm h_6 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, g_6, h_6);
                        PopChoice();
                      }
                    else
                      {
                        t = r_15;
                        {
                          ATerm s_15 = t;
                          if(PushChoice()==0)
                            {
                              ATerm i_6 (ATerm t)
                              {
                                ATerm v_110 = NULL;
                                v_110 = t;
                                b_110 :
                                if(!(match_string(v_110, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm p_6 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, i_6, p_6);
                              PopChoice();
                            }
                          else
                            {
                              t = s_15;
                              {
                                ATerm t_15 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm q_6 (ATerm t)
                                    {
                                      ATerm w_110 = NULL;
                                      w_110 = t;
                                      c_110 :
                                      if(!(match_string(w_110, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm r_6 (ATerm t)
                                    {
                                      ATerm x_110 = NULL;
                                      x_110 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(x_110));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, q_6, r_6);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = t_15;
                                    {
                                      ATerm f_16 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm v_6 (ATerm t)
                                          {
                                            ATerm z_110 = NULL;
                                            z_110 = t;
                                            e_110 :
                                            if(!(match_string(z_110, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm w_6 (ATerm t)
                                          {
                                            ATerm a_111 = NULL;
                                            a_111 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_111));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, v_6, w_6);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = f_16;
                                          {
                                            ATerm h_16 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm x_6 (ATerm t)
                                                {
                                                  ATerm c_111 = NULL;
                                                  c_111 = t;
                                                  g_110 :
                                                  if(!(match_string(c_111, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm y_6 (ATerm t)
                                                {
                                                  ATerm d_111 = NULL;
                                                  d_111 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_111));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, x_6, y_6);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = h_16;
                                                {
                                                  ATerm j_16 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm z_6 (ATerm t)
                                                      {
                                                        ATerm f_111 = NULL;
                                                        f_111 = t;
                                                        i_110 :
                                                        if(!(match_string(f_111, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm f_7 (ATerm t)
                                                      {
                                                        ATerm g_111 = NULL;
                                                        g_111 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_111));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, z_6, f_7);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = j_16;
                                                      {
                                                        ATerm k_16 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm g_7 (ATerm t)
                                                            {
                                                              ATerm i_111 = NULL;
                                                              i_111 = t;
                                                              k_110 :
                                                              if(!(match_string(i_111, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm l_7 (ATerm t)
                                                            {
                                                              ATerm j_111 = NULL;
                                                              j_111 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_111));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, g_7, l_7);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = k_16;
                                                            {
                                                              ATerm p_16 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm m_7 (ATerm t)
                                                                  {
                                                                    ATerm l_111 = NULL;
                                                                    l_111 = t;
                                                                    m_110 :
                                                                    if(!(match_string(l_111, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm n_7 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, m_7, n_7);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = p_16;
                                                                  {
                                                                    ATerm v_16 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm o_7 (ATerm t)
                                                                        {
                                                                          ATerm m_111 = NULL;
                                                                          m_111 = t;
                                                                          n_110 :
                                                                          if(!(match_string(m_111, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm p_7 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, o_7, p_7);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = v_16;
                                                                        {
                                                                          ATerm w_16 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm q_7 (ATerm t)
                                                                              {
                                                                                ATerm n_111 = NULL;
                                                                                n_111 = t;
                                                                                o_110 :
                                                                                if(!(match_string(n_111, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm r_7 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, q_7, r_7);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = w_16;
                                                                              {
                                                                                ATerm x_16 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm v_7 (ATerm t)
                                                                                    {
                                                                                      ATerm o_111 = NULL;
                                                                                      o_111 = t;
                                                                                      p_110 :
                                                                                      if(!(match_string(o_111, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm x_7 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, v_7, x_7);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = x_16;
                                                                                    {
                                                                                      ATerm y_7 (ATerm t)
                                                                                      {
                                                                                        ATerm p_111 = NULL;
                                                                                        p_111 = t;
                                                                                        q_110 :
                                                                                        if(!(match_string(p_111, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm z_7 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, y_7, z_7);
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
  ATerm x_111 = NULL,y_111 = NULL,z_111 = NULL;
  x_111 = t;
  w_111 :
  if(match_cons(x_111, sym_Cons_2))
    {
      y_111 = ATgetArgument(x_111, 0);
      z_111 = ATgetArgument(x_111, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_111)), not_null(z_111));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_62 (ATerm), ATerm w_62 (ATerm))
{
  ATerm h_112 = NULL,i_112 = NULL,j_112 = NULL;
  h_112 = t;
  g_112 :
  if(match_cons(h_112, sym_Cons_2))
    {
      i_112 = ATgetArgument(h_112, 0);
      j_112 = ATgetArgument(h_112, 1);
      {
        ATerm m_112 = NULL;
        t = not_null(i_112);
        {
          ATerm o_112 = NULL;
          t = v_62(t);
          m_112 = t;
          t = not_null(j_112);
          t = w_62(t);
          o_112 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_112), not_null(o_112));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm u_112 = NULL;
  u_112 = t;
  t_112 :
  if(!(match_cons(u_112, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_64 (ATerm))
{
  ATerm a_8 (ATerm t)
  {
    ATerm w_112 = NULL;
    w_112 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_112));
    return(t);
  }
  ATerm b_8 (ATerm t)
  {
    ATerm y_16 = t;
    if(PushChoice()==0)
      {
        ATerm a_17 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = a_17;
            t = s_64(t);
            t = Cons_2(t, _id, b_8);
          }
        PopChoice();
      }
    else
      {
        t = y_16;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, a_8, b_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm l_65 (ATerm), ATerm m_65 (ATerm), ATerm n_65 (ATerm))
{
  ATerm f_8 (ATerm t)
  {
    ATerm e_17 = t;
    if(PushChoice()==0)
      {
        t = m_65(t);
        PopChoice();
      }
    else
      {
        t = e_17;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, f_8);
  t = store_options_0(t);
  {
    ATerm f_17 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, n_65);
        PopChoice();
      }
    else
      {
        t = f_17;
        {
          ATerm g_17 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, l_65);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = g_17;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm g_65 (ATerm), ATerm h_65 (ATerm))
{
  t = iowrap_3(t, g_65, h_65, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm h_8 (ATerm t)
  {
    ATerm i_8 (ATerm t)
    {
      t = TCons_2(t, d_65, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, i_8);
    return(t);
  }
  t = iowrap_2(t, h_8, _fail);
  return(t);
}
ATerm compile_match_comp_0 (ATerm t)
{
  ATerm j_8 (ATerm t)
  {
    t = apply_to_bodies_1(t, match_to_dfa_0);
    return(t);
  }
  t = iowrap_1(t, j_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = compile_match_comp_0(t);
  return(t);
}
