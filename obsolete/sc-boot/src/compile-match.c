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
ATerm spaste_1 (ATerm, ATerm c_83 (ATerm));
ATerm Rec_2 (ATerm, ATerm r_60 (ATerm), ATerm s_60 (ATerm));
ATerm Let_2 (ATerm, ATerm t_60 (ATerm), ATerm u_60 (ATerm));
ATerm sboundin_3 (ATerm, ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm f_83 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm q_60 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm y_82 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm g_59 (ATerm));
ATerm Scope_2 (ATerm, ATerm v_61 (ATerm), ATerm w_61 (ATerm));
ATerm tboundin_3 (ATerm, ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm collect_kids_1 (ATerm, ATerm z_73 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm o_67 (ATerm), ATerm p_67 (ATerm));
ATerm for_3 (ATerm, ATerm r_67 (ATerm), ATerm s_67 (ATerm), ATerm t_67 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm a_69 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm r_70 (ATerm), ATerm s_70 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm x_70 (ATerm), ATerm y_70 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm l_70 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm t_69 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm y_69 (ATerm));
ATerm rename_4 (ATerm, ATerm z_70 (ATerm, ATerm (ATerm)), ATerm a_71 (ATerm), ATerm b_71 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_71 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm Seqs_1 (ATerm, ATerm p_57 (ATerm));
ATerm Call_2 (ATerm, ATerm f_61 (ATerm), ATerm g_61 (ATerm));
ATerm Prim_2 (ATerm, ATerm y_61 (ATerm), ATerm z_61 (ATerm));
ATerm Str_1 (ATerm, ATerm e_0 (ATerm));
ATerm Real_1 (ATerm, ATerm d_0 (ATerm));
ATerm Int_1 (ATerm, ATerm c_0 (ATerm));
ATerm Var_1 (ATerm, ATerm c_60 (ATerm));
ATerm Op_2 (ATerm, ATerm g_60 (ATerm), ATerm h_60 (ATerm));
ATerm Build_1 (ATerm, ATerm s_61 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm simple_strategy_0 (ATerm);
ATerm RowLet_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm j_75 (ATerm));
ATerm MatrixScope_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm assert_1 (ATerm, ATerm m_62 (ATerm));
ATerm WildPat_0 (ATerm);
ATerm default_state_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm MatchCons_2 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm));
ATerm ConsTransition_1 (ATerm, ATerm r_62 (ATerm));
ATerm Transition_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm rzip_1 (ATerm, ATerm o_75 (ATerm));
ATerm transitions_0 (ATerm);
ATerm Uniq_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm q_77 (ATerm));
ATerm uniq_0 (ATerm);
ATerm offsets_0 (ATerm);
ATerm length_0 (ATerm);
ATerm ConsArgs_0 (ATerm);
ATerm filter_1 (ATerm, ATerm e_71 (ATerm));
ATerm outedges_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Mixture_0 (ATerm);
ATerm ShiftColumnRow_0 (ATerm);
ATerm ShiftColumn_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm As_2 (ATerm, ATerm s_58 (ATerm), ATerm t_58 (ATerm));
ATerm Row_3 (ATerm, ATerm i_57 (ATerm), ATerm j_57 (ATerm), ATerm k_57 (ATerm));
ATerm SkipWild_0 (ATerm);
ATerm MatrixRowsEmpty_0 (ATerm);
ATerm reduce_matrix_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm j_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm begin_scope_1 (ATerm, ATerm i_62 (ATerm));
ATerm scope_2 (ATerm, ATerm k_62 (ATerm), ATerm l_62 (ATerm));
ATerm matrix_to_dfa_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm zip_1 (ATerm, ATerm e_75 (ATerm));
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
ATerm at_end_1 (ATerm, ATerm c_77 (ATerm));
ATerm conc_0 (ATerm);
ATerm MatrixMerge_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm c_72 (ATerm));
ATerm crush_3 (ATerm, ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t_73 (ATerm));
ATerm collect_1 (ATerm, ATerm a_74 (ATerm));
ATerm collect_offsets_0 (ATerm);
ATerm CollectSubst_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm IgnoreVar_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm h_73 (ATerm));
ATerm union_0 (ATerm);
ATerm FoldR_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm x_71 (ATerm), ATerm y_71 (ATerm));
ATerm unions_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm list_1 (ATerm, ATerm p_76 (ATerm));
ATerm CollectSplit_2 (ATerm, ATerm n_74 (ATerm), ATerm o_74 (ATerm));
ATerm is_int_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm collect_split_1 (ATerm, ATerm j_74 (ATerm));
ATerm collect_split_2 (ATerm, ATerm l_74 (ATerm), ATerm m_74 (ATerm));
ATerm collect_substitutions_0 (ATerm);
ATerm Annotate_1 (ATerm, ATerm z_83 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm add_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm c_75 (ATerm));
ATerm NZip00_0 (ATerm);
ATerm nzip0_1 (ATerm, ATerm k_75 (ATerm));
ATerm Propagate_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm f_79 (ATerm));
ATerm term_to_matrix_0 (ATerm);
ATerm MatchToMatrix_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm x_66 (ATerm), ATerm y_66 (ATerm));
ATerm repeat_1 (ATerm, ATerm a_67 (ATerm));
ATerm downup_1 (ATerm, ATerm j_79 (ATerm));
ATerm match_to_matrix_0 (ATerm);
ATerm match_to_dfa_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm v_60 (ATerm), ATerm w_60 (ATerm), ATerm x_60 (ATerm));
ATerm map_1 (ATerm, ATerm n_76 (ATerm));
ATerm Strategies_1 (ATerm, ATerm q_59 (ATerm));
ATerm Specification_1 (ATerm, ATerm s_59 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm a_84 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm a_62 (ATerm), ATerm b_62 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm u_78 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm d_65 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm c_78 (ATerm), ATerm d_78 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm g_56 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm w_76 (ATerm));
ATerm option_defined_1 (ATerm, ATerm h_64 (ATerm));
ATerm need_help_1 (ATerm, ATerm c_65 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm a_64 (ATerm), ATerm b_64 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm c_64 (ATerm), ATerm d_64 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm e_62 (ATerm), ATerm f_62 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_63 (ATerm));
ATerm iowrap_3 (ATerm, ATerm r_64 (ATerm), ATerm s_64 (ATerm), ATerm t_64 (ATerm));
ATerm iowrap_2 (ATerm, ATerm m_64 (ATerm), ATerm n_64 (ATerm));
ATerm iowrap_1 (ATerm, ATerm j_64 (ATerm));
ATerm compile_match_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL;
  f_3 = t;
  e_3 :
  if(match_cons(f_3, sym_Cons_2))
    {
      g_3 = ATgetArgument(f_3, 0);
      h_3 = ATgetArgument(f_3, 1);
      t = not_null(g_3);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm c_83 (ATerm))
{
  ATerm x_9 = t;
  if(PushChoice()==0)
    {
      ATerm f_0 (ATerm t)
      {
        t = split_2(t, _id, c_83);
        {
          ATerm g_0 (ATerm t)
          {
            ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL;
            v_3 = t;
            m_3 :
            if(match_cons(v_3, sym_TCons_2))
              {
                w_3 = ATgetArgument(v_3, 0);
                a_4 = ATgetArgument(v_3, 1);
                n_3 :
                if(match_cons(w_3, sym_SDef_3))
                  {
                    x_3 = ATgetArgument(w_3, 0);
                    y_3 = ATgetArgument(w_3, 1);
                    z_3 = ATgetArgument(w_3, 2);
                    o_3 :
                    if(match_cons(a_4, sym_TCons_2))
                      {
                        b_4 = ATgetArgument(a_4, 0);
                        c_4 = ATgetArgument(a_4, 1);
                        p_3 :
                        if(match_cons(c_4, sym_TNil_0))
                          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(b_4), not_null(y_3), not_null(z_3));
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
          t = zip_1(t, g_0);
        }
        return(t);
      }
      t = Let_2(t, f_0, _id);
      PopChoice();
    }
  else
    {
      t = x_9;
      {
        ATerm y_9 = t;
        if(PushChoice()==0)
          {
            ATerm h_0 (ATerm t)
            {
              t = split_2(t, _id, c_83);
              {
                ATerm i_0 (ATerm t)
                {
                  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL;
                  g_4 = t;
                  r_3 :
                  if(match_cons(g_4, sym_TCons_2))
                    {
                      h_4 = ATgetArgument(g_4, 0);
                      k_4 = ATgetArgument(g_4, 1);
                      s_3 :
                      if(match_cons(h_4, sym_VarDec_2))
                        {
                          i_4 = ATgetArgument(h_4, 0);
                          j_4 = ATgetArgument(h_4, 1);
                          t_3 :
                          if(match_cons(k_4, sym_TCons_2))
                            {
                              l_4 = ATgetArgument(k_4, 0);
                              m_4 = ATgetArgument(k_4, 1);
                              u_3 :
                              if(match_cons(m_4, sym_TNil_0))
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(l_4), not_null(j_4));
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
                t = zip_1(t, i_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, h_0, _id);
            PopChoice();
          }
        else
          {
            t = y_9;
            {
              ATerm j_0 (ATerm t)
              {
                t = c_83(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, j_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm r_60 (ATerm), ATerm s_60 (ATerm))
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL;
  w_4 = t;
  v_4 :
  if(match_cons(w_4, sym_Rec_2))
    {
      x_4 = ATgetArgument(w_4, 0);
      y_4 = ATgetArgument(w_4, 1);
      {
        ATerm b_5 = NULL;
        t = not_null(x_4);
        {
          ATerm d_5 = NULL;
          t = r_60(t);
          b_5 = t;
          t = not_null(y_4);
          t = s_60(t);
          d_5 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(b_5), not_null(d_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm t_60 (ATerm), ATerm u_60 (ATerm))
{
  ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
  m_5 = t;
  l_5 :
  if(match_cons(m_5, sym_Let_2))
    {
      n_5 = ATgetArgument(m_5, 0);
      o_5 = ATgetArgument(m_5, 1);
      {
        ATerm r_5 = NULL;
        t = not_null(n_5);
        {
          ATerm t_5 = NULL;
          t = t_60(t);
          r_5 = t;
          t = not_null(o_5);
          t = u_60(t);
          t_5 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(r_5), not_null(t_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm f_83 (ATerm))
{
  ATerm z_9 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, d_83, d_83);
      PopChoice();
    }
  else
    {
      t = z_9;
      {
        ATerm a_10 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, f_83, f_83, d_83);
            PopChoice();
          }
        else
          {
            t = a_10;
            t = Rec_2(t, f_83, d_83);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
  a_6 = t;
  z_5 :
  if(match_cons(a_6, sym_Rec_2))
    {
      b_6 = ATgetArgument(a_6, 0);
      c_6 = ATgetArgument(a_6, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_6), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL;
  k_6 = t;
  j_6 :
  if(match_cons(k_6, sym_SDef_3))
    {
      l_6 = ATgetArgument(k_6, 0);
      m_6 = ATgetArgument(k_6, 1);
      n_6 = ATgetArgument(k_6, 2);
      t = not_null(m_6);
      {
        ATerm k_0 (ATerm t)
        {
          ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL;
          r_6 = t;
          i_6 :
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
        t = map_1(t, k_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
  b_7 = t;
  a_7 :
  if(match_cons(b_7, sym_Let_2))
    {
      c_7 = ATgetArgument(b_7, 0);
      d_7 = ATgetArgument(b_7, 1);
      t = not_null(c_7);
      {
        ATerm l_0 (ATerm t)
        {
          ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
          g_7 = t;
          z_6 :
          if(match_cons(g_7, sym_SDef_3))
            {
              h_7 = ATgetArgument(g_7, 0);
              i_7 = ATgetArgument(g_7, 1);
              j_7 = ATgetArgument(g_7, 2);
              t = not_null(h_7);
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
ATerm SVar_1 (ATerm t, ATerm q_60 (ATerm))
{
  ATerm s_7 = NULL,t_7 = NULL;
  s_7 = t;
  r_7 :
  if(match_cons(s_7, sym_SVar_1))
    {
      t_7 = ATgetArgument(s_7, 0);
      {
        ATerm v_7 = NULL;
        t = not_null(t_7);
        t = q_60(t);
        v_7 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(v_7));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm m_0 (ATerm t)
  {
    ATerm b_10 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = b_10;
        {
          ATerm c_10 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = c_10;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, m_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm y_82 (ATerm))
{
  t = Scope_2(t, y_82, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm c_8 = NULL,d_8 = NULL;
  c_8 = t;
  b_8 :
  if(match_cons(c_8, sym_DynamicRules_1))
    {
      d_8 = ATgetArgument(c_8, 0);
      {
        ATerm f_8 = NULL;
        t = not_null(d_8);
        t = g_59(t);
        f_8 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(f_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm v_61 (ATerm), ATerm w_61 (ATerm))
{
  ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
  n_8 = t;
  m_8 :
  if(match_cons(n_8, sym_Scope_2))
    {
      o_8 = ATgetArgument(n_8, 0);
      p_8 = ATgetArgument(n_8, 1);
      {
        ATerm s_8 = NULL;
        t = not_null(o_8);
        {
          ATerm u_8 = NULL;
          t = v_61(t);
          s_8 = t;
          t = not_null(p_8);
          t = w_61(t);
          u_8 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_8), not_null(u_8));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm))
{
  ATerm d_10 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, b_83, z_82);
      PopChoice();
    }
  else
    {
      t = d_10;
      t = DynamicRules_1(t, z_82);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL;
  b_9 = t;
  a_9 :
  if(match_cons(b_9, sym_DynamicRules_1))
    {
      c_9 = ATgetArgument(b_9, 0);
      t = not_null(c_9);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL;
  h_9 = t;
  g_9 :
  if(match_cons(h_9, sym_Var_1))
    {
      i_9 = ATgetArgument(h_9, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_9), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm collect_kids_1 (ATerm t, ATerm z_73 (ATerm))
{
  ATerm n_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = crush_3(t, n_0, union_0, z_73);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL;
  q_9 = t;
  m_9 :
  if(match_cons(q_9, sym_TCons_2))
    {
      r_9 = ATgetArgument(q_9, 0);
      s_9 = ATgetArgument(q_9, 1);
      n_9 :
      if(match_cons(s_9, sym_TCons_2))
        {
          t_9 = ATgetArgument(s_9, 0);
          w_9 = ATgetArgument(s_9, 1);
          o_9 :
          if(match_cons(t_9, sym_Cons_2))
            {
              u_9 = ATgetArgument(t_9, 0);
              v_9 = ATgetArgument(t_9, 1);
              p_9 :
              if(match_cons(w_9, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_9), not_null(r_9)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_9), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL;
  e_13 = t;
  a_13 :
  if(match_cons(e_13, sym_Cons_2))
    {
      f_13 = ATgetArgument(e_13, 0);
      k_13 = ATgetArgument(e_13, 1);
      b_13 :
      if(match_cons(f_13, sym_TCons_2))
        {
          g_13 = ATgetArgument(f_13, 0);
          h_13 = ATgetArgument(f_13, 1);
          c_13 :
          if(match_cons(h_13, sym_TCons_2))
            {
              i_13 = ATgetArgument(h_13, 0);
              j_13 = ATgetArgument(h_13, 1);
              d_13 :
              if(match_cons(j_13, sym_TNil_0))
                {
                  ATerm o_13 = NULL,p_13 = NULL,x_13 = NULL,b_15 = NULL;
                  ATerm h_10;
                  h_10 = t;
                  {
                    ATerm q_13 = NULL;
                    ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
                    t = not_null(i_13);
                    q_13 = t;
                    t = SSL_explode_term(not_null(q_13));
                    s_13 = t;
                    e_10 :
                    if(match_cons(s_13, sym_TCons_2))
                      {
                        t_13 = ATgetArgument(s_13, 0);
                        u_13 = ATgetArgument(s_13, 1);
                        f_10 :
                        if(match_cons(u_13, sym_TCons_2))
                          {
                            v_13 = ATgetArgument(u_13, 0);
                            w_13 = ATgetArgument(u_13, 1);
                            g_10 :
                            if(match_cons(w_13, sym_TNil_0))
                              {
                                if(o_13 != NULL && o_13 != t_13)
                                  _fail(t_13);
                                else
                                  o_13 = t_13;
                                if(p_13 != NULL && p_13 != v_13)
                                  _fail(v_13);
                                else
                                  p_13 = v_13;
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
                    ATerm y_13 = NULL;
                    ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,v_14 = NULL,w_14 = NULL;
                    t = not_null(g_13);
                    y_13 = t;
                    t = SSL_explode_term(not_null(y_13));
                    a_14 = t;
                    t_10 :
                    if(match_cons(a_14, sym_TCons_2))
                      {
                        b_14 = ATgetArgument(a_14, 0);
                        c_14 = ATgetArgument(a_14, 1);
                        u_10 :
                        if(match_cons(c_14, sym_TCons_2))
                          {
                            v_14 = ATgetArgument(c_14, 0);
                            w_14 = ATgetArgument(c_14, 1);
                            v_11 :
                            if(match_cons(w_14, sym_TNil_0))
                              {
                                if(o_13 != NULL && o_13 != b_14)
                                  _fail(b_14);
                                else
                                  o_13 = b_14;
                                if(x_13 != NULL && x_13 != v_14)
                                  _fail(v_14);
                                else
                                  x_13 = v_14;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    b_15 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_15), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_13), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL;
  x_15 = t;
  t_15 :
  if(match_cons(x_15, sym_Cons_2))
    {
      y_15 = ATgetArgument(x_15, 0);
      d_16 = ATgetArgument(x_15, 1);
      u_15 :
      if(match_cons(y_15, sym_TCons_2))
        {
          z_15 = ATgetArgument(y_15, 0);
          a_16 = ATgetArgument(y_15, 1);
          v_15 :
          if(match_cons(a_16, sym_TCons_2))
            {
              b_16 = ATgetArgument(a_16, 0);
              c_16 = ATgetArgument(a_16, 1);
              w_15 :
              if(match_cons(c_16, sym_TNil_0))
                {
                  ATerm f_16 = NULL;
                  if(z_15 != NULL && z_15 != b_16)
                    _fail(b_16);
                  else
                    z_15 = b_16;
                  if(f_16 != NULL && f_16 != d_16)
                    _fail(d_16);
                  else
                    f_16 = d_16;
                  t = not_null(f_16);
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
ATerm while_not_2 (ATerm t, ATerm o_67 (ATerm), ATerm p_67 (ATerm))
{
  ATerm h_16 (ATerm t)
  {
    ATerm i_10 = t;
    if(PushChoice()==0)
      {
        t = o_67(t);
        PopChoice();
      }
    else
      {
        t = i_10;
        t = p_67(t);
        t = h_16(t);
      }
    return(t);
  }
  t = h_16(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm r_67 (ATerm), ATerm s_67 (ATerm), ATerm t_67 (ATerm))
{
  t = r_67(t);
  t = while_not_2(t, s_67, t_67);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm j_10 = t;
  if(PushChoice()==0)
    {
      ATerm o_0 (ATerm t)
      {
        ATerm r_16 = NULL;
        r_16 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_16), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm p_0 (ATerm t)
      {
        ATerm r_0 (ATerm t)
        {
          ATerm s_0 (ATerm t)
          {
            ATerm t_16 = NULL;
            t_16 = t;
            j_16 :
            if(!(match_cons(t_16, sym_Nil_0)))
              _fail(t);
            return(t);
          }
          ATerm t_0 (ATerm t)
          {
            ATerm u_16 = NULL;
            u_16 = t;
            k_16 :
            if(!(match_cons(u_16, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, s_0, t_0);
          return(t);
        }
        t = TCons_2(t, _id, r_0);
        return(t);
      }
      ATerm q_0 (ATerm t)
      {
        ATerm k_10 = t;
        if(PushChoice()==0)
          {
            ATerm u_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
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
              ATerm w_0 (ATerm t)
              {
                ATerm v_16 = NULL;
                v_16 = t;
                l_16 :
                if(!(match_cons(v_16, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, v_0, w_0);
              return(t);
            }
            t = TCons_2(t, _id, u_0);
            PopChoice();
          }
        else
          {
            t = k_10;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, o_0, p_0, q_0);
      PopChoice();
    }
  else
    {
      t = j_10;
      {
        ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL;
        w_16 = t;
        o_16 :
        if(match_cons(w_16, sym_TCons_2))
          {
            x_16 = ATgetArgument(w_16, 0);
            y_16 = ATgetArgument(w_16, 1);
            p_16 :
            if(match_cons(y_16, sym_TCons_2))
              {
                z_16 = ATgetArgument(y_16, 0);
                a_17 = ATgetArgument(y_16, 1);
                q_16 :
                if(match_cons(a_17, sym_TNil_0))
                  {
                    t = not_null(x_16);
                    {
                      ATerm g_17 (ATerm t)
                      {
                        ATerm m_10 = t;
                        if(PushChoice()==0)
                          {
                            ATerm d_17 = NULL;
                            d_17 = t;
                            n_16 :
                            if(!(match_cons(d_17, sym_Nil_0)))
                              _fail(t);
                            PopChoice();
                          }
                        else
                          {
                            t = m_10;
                            {
                              ATerm n_10 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm x_0 (ATerm t)
                                  {
                                    t = not_null(z_16);
                                    return(t);
                                  }
                                  t = HdMember_1(t, x_0);
                                  t = g_17(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = n_10;
                                  t = Cons_2(t, _id, g_17);
                                }
                            }
                          }
                        return(t);
                      }
                      t = g_17(t);
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
ATerm free_vars_3 (ATerm t, ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm a_69 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm k_17 (ATerm t)
  {
    ATerm o_10 = t;
    if(PushChoice()==0)
      {
        t = y_68(t);
        PopChoice();
      }
    else
      {
        t = o_10;
        {
          ATerm p_10 = t;
          if(PushChoice()==0)
            {
              ATerm i_17 = NULL;
              ATerm q_10;
              q_10 = t;
              {
                ATerm j_17 = NULL;
                t = z_68(t);
                j_17 = t;
                if(i_17 != NULL && i_17 != j_17)
                  _fail(j_17);
                else
                  i_17 = j_17;
              }
              t = q_10;
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = not_null(i_17);
                    return(t);
                  }
                  t = split_2(t, k_17, a_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm z_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = a_69(t, y_0, k_17, z_0);
                t = collect_kids_1(t, _id);
              }
              PopChoice();
            }
          else
            {
              t = p_10;
              t = collect_kids_1(t, k_17);
            }
        }
      }
    return(t);
  }
  t = k_17(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
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
  t = free_vars_3(t, Add1_0, b_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
  r_17 = t;
  o_17 :
  if(match_cons(r_17, sym_Scope_2))
    {
      s_17 = ATgetArgument(r_17, 0);
      q_17 = ATgetArgument(r_17, 1);
      t = not_null(s_17);
    }
  else
    {
      if(match_cons(r_17, sym_LRule_1))
        {
          s_17 = ATgetArgument(r_17, 0);
          p_17 :
          if(match_cons(s_17, sym_Rule_3))
            {
              t_17 = ATgetArgument(s_17, 0);
              u_17 = ATgetArgument(s_17, 1);
              v_17 = ATgetArgument(s_17, 2);
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
ATerm DistBinding_2 (ATerm t, ATerm r_70 (ATerm), ATerm s_70 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  k_18 = t;
  g_18 :
  if(match_cons(k_18, sym_TCons_2))
    {
      l_18 = ATgetArgument(k_18, 0);
      m_18 = ATgetArgument(k_18, 1);
      h_18 :
      if(match_cons(m_18, sym_TCons_2))
        {
          n_18 = ATgetArgument(m_18, 0);
          o_18 = ATgetArgument(m_18, 1);
          i_18 :
          if(match_cons(o_18, sym_TCons_2))
            {
              p_18 = ATgetArgument(o_18, 0);
              q_18 = ATgetArgument(o_18, 1);
              j_18 :
              if(match_cons(q_18, sym_TNil_0))
                {
                  t = not_null(l_18);
                  {
                    ATerm c_1 (ATerm t)
                    {
                      ATerm v_18 = NULL;
                      v_18 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = r_70(t);
                      return(t);
                    }
                    ATerm d_1 (ATerm t)
                    {
                      ATerm x_18 = NULL;
                      x_18 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = r_70(t);
                      return(t);
                    }
                    t = s_70(t, c_1, d_1, _id);
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
ATerm RnBinding_2 (ATerm t, ATerm x_70 (ATerm), ATerm y_70 (ATerm, ATerm (ATerm)))
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,p_20 = NULL,q_20 = NULL;
  u_19 = t;
  i_19 :
  if(match_cons(u_19, sym_TCons_2))
    {
      v_19 = ATgetArgument(u_19, 0);
      w_19 = ATgetArgument(u_19, 1);
      j_19 :
      if(match_cons(w_19, sym_TCons_2))
        {
          p_20 = ATgetArgument(w_19, 0);
          q_20 = ATgetArgument(w_19, 1);
          k_19 :
          if(match_cons(q_20, sym_TNil_0))
            {
              ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,b_21 = NULL;
              ATerm w_20 = NULL;
              t = not_null(v_19);
              {
                ATerm x_20 = NULL;
                t = x_70(t);
                w_20 = t;
                if(t_20 != NULL && t_20 != w_20)
                  _fail(w_20);
                else
                  t_20 = w_20;
                {
                  ATerm y_20 = NULL;
                  t = map_1(t, new_0);
                  x_20 = t;
                  if(u_20 != NULL && u_20 != x_20)
                    _fail(x_20);
                  else
                    u_20 = x_20;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_20), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm a_21 = NULL;
                    t = zip_1(t, _id);
                    y_20 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_20), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = conc_0(t);
                    a_21 = t;
                    if(v_20 != NULL && v_20 != a_21)
                      _fail(a_21);
                    else
                      v_20 = a_21;
                  }
                }
              }
              t = not_null(v_19);
              {
                ATerm e_1 (ATerm t)
                {
                  t = not_null(u_20);
                  return(t);
                }
                t = y_70(t, e_1);
                b_21 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_20), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,f_22 = NULL;
  u_21 = t;
  l_21 :
  if(match_cons(u_21, sym_TCons_2))
    {
      v_21 = ATgetArgument(u_21, 0);
      w_21 = ATgetArgument(u_21, 1);
      r_21 :
      if(match_cons(w_21, sym_TCons_2))
        {
          x_21 = ATgetArgument(w_21, 0);
          f_22 = ATgetArgument(w_21, 1);
          s_21 :
          if(match_cons(x_21, sym_Cons_2))
            {
              y_21 = ATgetArgument(x_21, 0);
              z_21 = ATgetArgument(x_21, 1);
              t_21 :
              if(match_cons(f_22, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_21), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
  r_22 = t;
  k_22 :
  if(match_cons(r_22, sym_TCons_2))
    {
      s_22 = ATgetArgument(r_22, 0);
      t_22 = ATgetArgument(r_22, 1);
      l_22 :
      if(match_cons(t_22, sym_TCons_2))
        {
          u_22 = ATgetArgument(t_22, 0);
          c_23 = ATgetArgument(t_22, 1);
          m_22 :
          if(match_cons(u_22, sym_Cons_2))
            {
              w_22 = ATgetArgument(u_22, 0);
              b_23 = ATgetArgument(u_22, 1);
              n_22 :
              if(match_cons(w_22, sym_TCons_2))
                {
                  x_22 = ATgetArgument(w_22, 0);
                  y_22 = ATgetArgument(w_22, 1);
                  o_22 :
                  if(match_cons(y_22, sym_TCons_2))
                    {
                      z_22 = ATgetArgument(y_22, 0);
                      a_23 = ATgetArgument(y_22, 1);
                      p_22 :
                      if(match_cons(a_23, sym_TNil_0))
                        {
                          q_22 :
                          if(match_cons(c_23, sym_TNil_0))
                            {
                              ATerm e_23 = NULL;
                              if(s_22 != NULL && s_22 != x_22)
                                _fail(x_22);
                              else
                                s_22 = x_22;
                              if(e_23 != NULL && e_23 != z_22)
                                _fail(z_22);
                              else
                                e_23 = z_22;
                              t = not_null(e_23);
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
ATerm RnVar_1 (ATerm t, ATerm l_70 (ATerm, ATerm (ATerm)))
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,u_23 = NULL,v_23 = NULL;
  l_23 = t;
  i_23 :
  if(match_cons(l_23, sym_TCons_2))
    {
      m_23 = ATgetArgument(l_23, 0);
      n_23 = ATgetArgument(l_23, 1);
      j_23 :
      if(match_cons(n_23, sym_TCons_2))
        {
          u_23 = ATgetArgument(n_23, 0);
          v_23 = ATgetArgument(n_23, 1);
          k_23 :
          if(match_cons(v_23, sym_TNil_0))
            {
              t = not_null(m_23);
              {
                ATerm f_1 (ATerm t)
                {
                  ATerm g_1 (ATerm t)
                  {
                    t = not_null(u_23);
                    return(t);
                  }
                  t = split_2(t, _id, g_1);
                  t = lookup_0(t);
                  return(t);
                }
                t = l_70(t, f_1);
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
ATerm all_dist_1 (ATerm t, ATerm t_69 (ATerm))
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,a_25 = NULL;
  u_24 = t;
  r_24 :
  if(match_cons(u_24, sym_TCons_2))
    {
      v_24 = ATgetArgument(u_24, 0);
      w_24 = ATgetArgument(u_24, 1);
      s_24 :
      if(match_cons(w_24, sym_TCons_2))
        {
          x_24 = ATgetArgument(w_24, 0);
          a_25 = ATgetArgument(w_24, 1);
          t_24 :
          if(match_cons(a_25, sym_TNil_0))
            {
              t = not_null(v_24);
              {
                ATerm h_1 (ATerm t)
                {
                  ATerm d_25 = NULL;
                  d_25 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_24), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = t_69(t);
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
ATerm env_alltd_1 (ATerm t, ATerm y_69 (ATerm))
{
  ATerm m_25 (ATerm t)
  {
    ATerm v_10 = t;
    if(PushChoice()==0)
      {
        t = y_69(t);
        PopChoice();
      }
    else
      {
        t = v_10;
        t = all_dist_1(t, m_25);
      }
    return(t);
  }
  t = m_25(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm z_70 (ATerm, ATerm (ATerm)), ATerm a_71 (ATerm), ATerm b_71 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_71 (ATerm, ATerm (ATerm)))
{
  ATerm o_25 = NULL;
  o_25 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_25), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  {
    ATerm r_25 (ATerm t)
    {
      ATerm i_1 (ATerm t)
      {
        ATerm w_10 = t;
        if(PushChoice()==0)
          {
            t = RnVar_1(t, z_70);
            PopChoice();
          }
        else
          {
            t = w_10;
            t = RnBinding_2(t, a_71, c_71);
            t = DistBinding_2(t, r_25, b_71);
          }
        return(t);
      }
      t = env_alltd_1(t, i_1);
      return(t);
    }
    t = r_25(t);
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
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  u_25 = t;
  t_25 :
  if(!(match_cons(u_25, sym_Nil_0)))
    {
      if(match_cons(u_25, sym_Cons_2))
        {
          v_25 = ATgetArgument(u_25, 0);
          w_25 = ATgetArgument(u_25, 1);
          t = not_null(v_25);
          {
            ATerm j_1 (ATerm t)
            {
              t = not_null(w_25);
              t = concat_0(t);
              return(t);
            }
            t = at_end_1(t, j_1);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Seqs_1 (ATerm t, ATerm p_57 (ATerm))
{
  ATerm h_26 = NULL,i_26 = NULL;
  h_26 = t;
  g_26 :
  if(match_cons(h_26, sym_Seqs_1))
    {
      i_26 = ATgetArgument(h_26, 0);
      {
        ATerm k_26 = NULL;
        t = not_null(i_26);
        t = p_57(t);
        k_26 = t;
        t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(k_26));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm f_61 (ATerm), ATerm g_61 (ATerm))
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
  s_26 = t;
  r_26 :
  if(match_cons(s_26, sym_Call_2))
    {
      t_26 = ATgetArgument(s_26, 0);
      u_26 = ATgetArgument(s_26, 1);
      {
        ATerm x_26 = NULL;
        t = not_null(t_26);
        {
          ATerm z_26 = NULL;
          t = f_61(t);
          x_26 = t;
          t = not_null(u_26);
          t = g_61(t);
          z_26 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(x_26), not_null(z_26));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm y_61 (ATerm), ATerm z_61 (ATerm))
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
  i_27 = t;
  h_27 :
  if(match_cons(i_27, sym_Prim_2))
    {
      j_27 = ATgetArgument(i_27, 0);
      k_27 = ATgetArgument(i_27, 1);
      {
        ATerm n_27 = NULL;
        t = not_null(j_27);
        {
          ATerm p_27 = NULL;
          t = y_61(t);
          n_27 = t;
          t = not_null(k_27);
          t = z_61(t);
          p_27 = t;
          t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(n_27), not_null(p_27));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm e_0 (ATerm))
{
  ATerm z_27 = NULL,a_28 = NULL;
  z_27 = t;
  y_27 :
  if(match_cons(z_27, sym_Str_1))
    {
      a_28 = ATgetArgument(z_27, 0);
      {
        ATerm x_10 = t;
        if(PushChoice()==0)
          {
            ATerm c_28 = NULL;
            t = not_null(a_28);
            t = e_0(t);
            c_28 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(c_28));
            PopChoice();
          }
        else
          {
            t = x_10;
            {
              ATerm f_28 = NULL;
              t = not_null(a_28);
              t = e_0(t);
              f_28 = t;
              t = (ATerm) ATmakeAppl(sym_Str_1, not_null(f_28));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Real_1 (ATerm t, ATerm d_0 (ATerm))
{
  ATerm q_28 = NULL,r_28 = NULL;
  q_28 = t;
  p_28 :
  if(match_cons(q_28, sym_Real_1))
    {
      r_28 = ATgetArgument(q_28, 0);
      {
        ATerm y_10 = t;
        if(PushChoice()==0)
          {
            ATerm t_28 = NULL;
            t = not_null(r_28);
            t = d_0(t);
            t_28 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, not_null(t_28));
            PopChoice();
          }
        else
          {
            t = y_10;
            {
              ATerm w_28 = NULL;
              t = not_null(r_28);
              t = d_0(t);
              w_28 = t;
              t = (ATerm) ATmakeAppl(sym_Real_1, not_null(w_28));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Int_1 (ATerm t, ATerm c_0 (ATerm))
{
  ATerm h_29 = NULL,i_29 = NULL;
  h_29 = t;
  g_29 :
  if(match_cons(h_29, sym_Int_1))
    {
      i_29 = ATgetArgument(h_29, 0);
      {
        ATerm z_10 = t;
        if(PushChoice()==0)
          {
            ATerm k_29 = NULL;
            t = not_null(i_29);
            t = c_0(t);
            k_29 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, not_null(k_29));
            PopChoice();
          }
        else
          {
            t = z_10;
            {
              ATerm n_29 = NULL;
              t = not_null(i_29);
              t = c_0(t);
              n_29 = t;
              t = (ATerm) ATmakeAppl(sym_Int_1, not_null(n_29));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm c_60 (ATerm))
{
  ATerm w_29 = NULL,x_29 = NULL;
  w_29 = t;
  v_29 :
  if(match_cons(w_29, sym_Var_1))
    {
      x_29 = ATgetArgument(w_29, 0);
      {
        ATerm z_29 = NULL;
        t = not_null(x_29);
        t = c_60(t);
        z_29 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_29));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm g_60 (ATerm), ATerm h_60 (ATerm))
{
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
  h_30 = t;
  g_30 :
  if(match_cons(h_30, sym_Op_2))
    {
      i_30 = ATgetArgument(h_30, 0);
      j_30 = ATgetArgument(h_30, 1);
      {
        ATerm m_30 = NULL;
        t = not_null(i_30);
        {
          ATerm o_30 = NULL;
          t = g_60(t);
          m_30 = t;
          t = not_null(j_30);
          t = h_60(t);
          o_30 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(m_30), not_null(o_30));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm s_61 (ATerm))
{
  ATerm w_30 = NULL,x_30 = NULL;
  w_30 = t;
  v_30 :
  if(match_cons(w_30, sym_Build_1))
    {
      x_30 = ATgetArgument(w_30, 0);
      {
        ATerm z_30 = NULL;
        t = not_null(x_30);
        t = s_61(t);
        z_30 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(z_30));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm h_31 = NULL;
  h_31 = t;
  g_31 :
  if(!(match_cons(h_31, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm j_31 = NULL;
  j_31 = t;
  i_31 :
  if(!(match_cons(j_31, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm simple_strategy_0 (ATerm t)
{
  ATerm a_11 = t;
  if(PushChoice()==0)
    {
      ATerm q_31 = NULL;
      q_31 = t;
      k_31 :
      if(!(match_cons(q_31, sym_Id_0)))
        {
          if(!(match_cons(q_31, sym_Fail_0)))
            _fail(t);
        }
      PopChoice();
    }
  else
    {
      t = a_11;
      {
        ATerm b_11 = t;
        if(PushChoice()==0)
          {
            ATerm k_1 (ATerm t)
            {
              ATerm r_31 = NULL;
              r_31 = t;
              o_31 :
              if(!(match_cons(r_31, sym_Nil_0)))
                _fail(t);
              return(t);
            }
            t = Seqs_1(t, k_1);
            PopChoice();
          }
        else
          {
            t = b_11;
            {
              ATerm c_11 = t;
              if(PushChoice()==0)
                {
                  ATerm l_1 (ATerm t)
                  {
                    ATerm d_11 = t;
                    if(PushChoice()==0)
                      {
                        t = Var_1(t, _id);
                        PopChoice();
                      }
                    else
                      {
                        t = d_11;
                        {
                          ATerm e_11 = t;
                          if(PushChoice()==0)
                            {
                              ATerm m_1 (ATerm t)
                              {
                                ATerm n_1 (ATerm t)
                                {
                                  t = Var_1(t, _id);
                                  return(t);
                                }
                                t = list_1(t, n_1);
                                return(t);
                              }
                              t = Op_2(t, _id, m_1);
                              PopChoice();
                            }
                          else
                            {
                              t = e_11;
                              {
                                ATerm f_11 = t;
                                if(PushChoice()==0)
                                  {
                                    t = Int_1(t, _id);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = f_11;
                                    {
                                      ATerm g_11 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Real_1(t, _id);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = g_11;
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
                  t = Build_1(t, l_1);
                  PopChoice();
                }
              else
                {
                  t = c_11;
                  {
                    ATerm h_11 = t;
                    if(PushChoice()==0)
                      {
                        t = Prim_2(t, _id, _id);
                        PopChoice();
                      }
                    else
                      {
                        t = h_11;
                        {
                          ATerm i_11 = t;
                          if(PushChoice()==0)
                            {
                              t = Call_2(t, _id, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = i_11;
                              {
                                ATerm o_1 (ATerm t)
                                {
                                  ATerm p_1 (ATerm t)
                                  {
                                    ATerm s_31 = NULL;
                                    s_31 = t;
                                    p_31 :
                                    if(!(match_cons(s_31, sym_Nil_0)))
                                      _fail(t);
                                    return(t);
                                  }
                                  t = Cons_2(t, simple_strategy_0, p_1);
                                  return(t);
                                }
                                t = Seqs_1(t, o_1);
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
  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL;
  y_31 = t;
  x_31 :
  if(match_cons(y_31, sym_Row_2))
    {
      z_31 = ATgetArgument(y_31, 0);
      a_32 = ATgetArgument(y_31, 1);
      {
        ATerm j_11 = t;
        if(PushChoice()==0)
          {
            t = not_null(a_32);
            t = simple_strategy_0(t);
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Row_3, (ATerm)ATmakeAppl(sym_Nil_0), not_null(z_31), not_null(a_32)), (ATerm) ATmakeAppl(sym_TNil_0)));
            PopChoice();
          }
        else
          {
            t = j_11;
            {
              ATerm f_32 = NULL;
              ATerm g_32 = NULL;
              t = not_null(a_32);
              {
                ATerm k_11 = t;
                if(PushChoice()==0)
                  {
                    t = simple_strategy_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = k_11;
                t = new_0(t);
                g_32 = t;
                if(f_32 != NULL && f_32 != g_32)
                  _fail(g_32);
                else
                  f_32 = g_32;
              }
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_3, not_null(f_32), (ATerm)ATmakeAppl(sym_Nil_0), not_null(a_32)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Row_3, (ATerm)ATmakeAppl(sym_Nil_0), not_null(z_31), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_32)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm j_75 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, j_75);
  return(t);
}
ATerm MatrixScope_0 (ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
  r_32 = t;
  q_32 :
  if(match_cons(r_32, sym_Matrix_2))
    {
      s_32 = ATgetArgument(r_32, 0);
      t_32 = ATgetArgument(r_32, 1);
      {
        ATerm w_32 = NULL,x_32 = NULL;
        ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
        t = not_null(t_32);
        t = unzip_1(t, RowLet_0);
        {
          ATerm q_1 (ATerm t)
          {
            ATerm r_1 (ATerm t)
            {
              ATerm y_32 = NULL;
              y_32 = t;
              l_32 :
              if(!(match_cons(y_32, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, _id, r_1);
            return(t);
          }
          t = TCons_2(t, concat_0, q_1);
          z_32 = t;
          n_32 :
          if(match_cons(z_32, sym_TCons_2))
            {
              a_33 = ATgetArgument(z_32, 0);
              b_33 = ATgetArgument(z_32, 1);
              o_32 :
              if(match_cons(b_33, sym_TCons_2))
                {
                  c_33 = ATgetArgument(b_33, 0);
                  d_33 = ATgetArgument(b_33, 1);
                  p_32 :
                  if(match_cons(d_33, sym_TNil_0))
                    {
                      if(w_32 != NULL && w_32 != a_33)
                        _fail(a_33);
                      else
                        w_32 = a_33;
                      if(x_32 != NULL && x_32 != c_33)
                        _fail(c_33);
                      else
                        x_32 = c_33;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_32), (ATerm) ATmakeAppl(sym_Let_2, not_null(w_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(x_32)))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL;
  m_33 = t;
  i_33 :
  if(match_cons(m_33, sym_TCons_2))
    {
      n_33 = ATgetArgument(m_33, 0);
      o_33 = ATgetArgument(m_33, 1);
      j_33 :
      if(match_cons(o_33, sym_TCons_2))
        {
          p_33 = ATgetArgument(o_33, 0);
          q_33 = ATgetArgument(o_33, 1);
          k_33 :
          if(match_cons(q_33, sym_TCons_2))
            {
              r_33 = ATgetArgument(q_33, 0);
              s_33 = ATgetArgument(q_33, 1);
              l_33 :
              if(match_cons(s_33, sym_TNil_0))
                {
                  ATerm l_11;
                  l_11 = t;
                  {
                    ATerm w_33 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_33), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm m_11 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = m_11;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      w_33 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_33), not_null(w_33)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = l_11;
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
ATerm assert_1 (ATerm t, ATerm m_62 (ATerm))
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL;
  h_34 = t;
  e_34 :
  if(match_cons(h_34, sym_TCons_2))
    {
      i_34 = ATgetArgument(h_34, 0);
      j_34 = ATgetArgument(h_34, 1);
      f_34 :
      if(match_cons(j_34, sym_TCons_2))
        {
          k_34 = ATgetArgument(j_34, 0);
          l_34 = ATgetArgument(j_34, 1);
          g_34 :
          if(match_cons(l_34, sym_TNil_0))
            {
              ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
              ATerm n_11;
              n_11 = t;
              {
                ATerm r_34 = NULL;
                ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
                t = m_62(t);
                r_34 = t;
                if(o_34 != NULL && o_34 != r_34)
                  _fail(r_34);
                else
                  o_34 = r_34;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm o_11 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = o_11;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  s_34 = t;
                  d_34 :
                  if(match_cons(s_34, sym_Cons_2))
                    {
                      t_34 = ATgetArgument(s_34, 0);
                      u_34 = ATgetArgument(s_34, 1);
                      if(p_34 != NULL && p_34 != t_34)
                        _fail(t_34);
                      else
                        p_34 = t_34;
                      if(q_34 != NULL && q_34 != u_34)
                        _fail(u_34);
                      else
                        q_34 = u_34;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_34), not_null(p_34)), not_null(q_34)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  else
                    _fail(t);
                }
              }
              t = n_11;
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
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL;
  h_35 = t;
  a_35 :
  if(match_cons(h_35, sym_Row_3))
    {
      i_35 = ATgetArgument(h_35, 0);
      n_35 = ATgetArgument(h_35, 1);
      o_35 = ATgetArgument(h_35, 2);
      b_35 :
      if(match_cons(i_35, sym_Cons_2))
        {
          j_35 = ATgetArgument(i_35, 0);
          m_35 = ATgetArgument(i_35, 1);
          c_35 :
          if(match_cons(j_35, sym_As_2))
            {
              k_35 = ATgetArgument(j_35, 0);
              l_35 = ATgetArgument(j_35, 1);
              g_35 :
              if(match_cons(l_35, sym_Wld_0))
                t = (ATerm) ATmakeAppl(sym_Row_3, not_null(m_35), not_null(n_35), not_null(o_35));
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
  ATerm w_35 = NULL;
  t = filter_1(t, WildPat_0);
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(w_35));
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm i_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL;
  i_36 = t;
  a_36 :
  if(match_cons(i_36, sym_TCons_2))
    {
      p_36 = ATgetArgument(i_36, 0);
      q_36 = ATgetArgument(i_36, 1);
      b_36 :
      if(match_cons(q_36, sym_TCons_2))
        {
          r_36 = ATgetArgument(q_36, 0);
          s_36 = ATgetArgument(q_36, 1);
          c_36 :
          if(match_cons(s_36, sym_TNil_0))
            {
              if(p_36 != NULL && p_36 != r_36)
                _fail(r_36);
              else
                p_36 = r_36;
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
ATerm MatchCons_2 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm))
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
  w_37 = t;
  t_37 :
  if(match_cons(w_37, sym_Op_2))
    {
      v_37 = ATgetArgument(w_37, 0);
      u_37 = ATgetArgument(w_37, 1);
      {
        ATerm z_37 = NULL;
        ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL;
        t = a_0(t);
        a_38 = t;
        e_37 :
        if(match_cons(a_38, sym_Fun_2))
          {
            b_38 = ATgetArgument(a_38, 0);
            c_38 = ATgetArgument(a_38, 1);
            {
              ATerm h_38 = NULL;
              if(v_37 != NULL && v_37 != b_38)
                _fail(b_38);
              else
                v_37 = b_38;
              if(z_37 != NULL && z_37 != c_38)
                _fail(c_38);
              else
                z_37 = c_38;
              t = not_null(u_37);
              t = length_0(t);
              h_38 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_38), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_37), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = eq_0(t);
            }
          }
        else
          _fail(t);
        t = not_null(u_37);
      }
    }
  else
    {
      if(match_cons(w_37, sym_Str_1))
        {
          v_37 = ATgetArgument(w_37, 0);
          {
            ATerm k_38 = NULL,l_38 = NULL;
            t = a_0(t);
            k_38 = t;
            j_37 :
            if(match_cons(k_38, sym_Str_1))
              {
                l_38 = ATgetArgument(k_38, 0);
                {
                  ATerm m_38 = NULL;
                  if(v_37 != NULL && v_37 != l_38)
                    _fail(l_38);
                  else
                    v_37 = l_38;
                  t = b_0(t);
                  m_38 = t;
                  i_37 :
                  if(!(match_cons(m_38, sym_Nil_0)))
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
          if(match_cons(w_37, sym_Real_1))
            {
              v_37 = ATgetArgument(w_37, 0);
              {
                ATerm o_38 = NULL,p_38 = NULL;
                t = a_0(t);
                o_38 = t;
                m_37 :
                if(match_cons(o_38, sym_Real_1))
                  {
                    p_38 = ATgetArgument(o_38, 0);
                    {
                      ATerm q_38 = NULL;
                      if(v_37 != NULL && v_37 != p_38)
                        _fail(p_38);
                      else
                        v_37 = p_38;
                      t = b_0(t);
                      q_38 = t;
                      l_37 :
                      if(!(match_cons(q_38, sym_Nil_0)))
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
              if(match_cons(w_37, sym_Int_1))
                {
                  v_37 = ATgetArgument(w_37, 0);
                  {
                    ATerm u_38 = NULL,v_38 = NULL;
                    t = a_0(t);
                    u_38 = t;
                    p_37 :
                    if(match_cons(u_38, sym_Int_1))
                      {
                        v_38 = ATgetArgument(u_38, 0);
                        {
                          ATerm w_38 = NULL;
                          if(v_37 != NULL && v_37 != v_38)
                            _fail(v_38);
                          else
                            v_37 = v_38;
                          t = b_0(t);
                          w_38 = t;
                          o_37 :
                          if(!(match_cons(w_38, sym_Nil_0)))
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
                  if(match_cons(w_37, sym_Wld_0))
                    {
                      ATerm b_39 = NULL;
                      ATerm f_39 = NULL;
                      t = b_0(t);
                      {
                        ATerm s_1 (ATerm t)
                        {
                          ATerm c_39 = NULL,d_39 = NULL;
                          c_39 = t;
                          r_37 :
                          if(match_cons(c_39, sym_Var_1))
                            {
                              d_39 = ATgetArgument(c_39, 0);
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(d_39)), (ATerm) ATmakeAppl(sym_Wld_0));
                            }
                          else
                            _fail(t);
                          return(t);
                        }
                        t = map_1(t, s_1);
                        f_39 = t;
                        if(b_39 != NULL && b_39 != f_39)
                          _fail(f_39);
                        else
                          b_39 = f_39;
                      }
                      t = not_null(b_39);
                    }
                  else
                    _fail(t);
                }
            }
        }
    }
  return(t);
}
ATerm ConsTransition_1 (ATerm t, ATerm r_62 (ATerm))
{
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL;
  c_41 = t;
  z_40 :
  if(match_cons(c_41, sym_Row_3))
    {
      d_41 = ATgetArgument(c_41, 0);
      i_41 = ATgetArgument(c_41, 1);
      j_41 = ATgetArgument(c_41, 2);
      a_41 :
      if(match_cons(d_41, sym_Cons_2))
        {
          e_41 = ATgetArgument(d_41, 0);
          h_41 = ATgetArgument(d_41, 1);
          b_41 :
          if(match_cons(e_41, sym_As_2))
            {
              f_41 = ATgetArgument(e_41, 0);
              g_41 = ATgetArgument(e_41, 1);
              {
                ATerm o_41 = NULL,q_41 = NULL;
                ATerm p_41 = NULL;
                t = not_null(g_41);
                t = r_62(t);
                p_41 = t;
                if(o_41 != NULL && o_41 != p_41)
                  _fail(p_41);
                else
                  o_41 = p_41;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_41), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = conc_0(t);
                q_41 = t;
                t = (ATerm) ATmakeAppl(sym_Row_3, not_null(h_41), not_null(q_41), not_null(j_41));
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
  ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL;
  h_42 = t;
  x_41 :
  if(match_cons(h_42, sym_TCons_2))
    {
      i_42 = ATgetArgument(h_42, 0);
      j_42 = ATgetArgument(h_42, 1);
      y_41 :
      if(match_cons(j_42, sym_TCons_2))
        {
          l_42 = ATgetArgument(j_42, 0);
          q_42 = ATgetArgument(j_42, 1);
          z_41 :
          if(match_cons(l_42, sym_TCons_2))
            {
              m_42 = ATgetArgument(l_42, 0);
              n_42 = ATgetArgument(l_42, 1);
              e_42 :
              if(match_cons(n_42, sym_TCons_2))
                {
                  o_42 = ATgetArgument(n_42, 0);
                  p_42 = ATgetArgument(n_42, 1);
                  f_42 :
                  if(match_cons(p_42, sym_TNil_0))
                    {
                      g_42 :
                      if(match_cons(q_42, sym_TNil_0))
                        {
                          ATerm u_42 = NULL;
                          ATerm v_42 = NULL;
                          t = not_null(i_42);
                          {
                            ATerm t_1 (ATerm t)
                            {
                              ATerm u_1 (ATerm t)
                              {
                                ATerm v_1 (ATerm t)
                                {
                                  t = not_null(m_42);
                                  return(t);
                                }
                                ATerm w_1 (ATerm t)
                                {
                                  t = not_null(o_42);
                                  return(t);
                                }
                                t = MatchCons_2(t, v_1, w_1);
                                return(t);
                              }
                              t = ConsTransition_1(t, u_1);
                              return(t);
                            }
                            t = filter_1(t, t_1);
                            v_42 = t;
                            if(u_42 != NULL && u_42 != v_42)
                              _fail(v_42);
                            else
                              u_42 = v_42;
                          }
                          t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(m_42), not_null(o_42), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(u_42)));
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
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL;
  h_43 = t;
  d_43 :
  if(match_cons(h_43, sym_TCons_2))
    {
      i_43 = ATgetArgument(h_43, 0);
      j_43 = ATgetArgument(h_43, 1);
      e_43 :
      if(match_cons(j_43, sym_TCons_2))
        {
          k_43 = ATgetArgument(j_43, 0);
          n_43 = ATgetArgument(j_43, 1);
          f_43 :
          if(match_cons(k_43, sym_Cons_2))
            {
              l_43 = ATgetArgument(k_43, 0);
              m_43 = ATgetArgument(k_43, 1);
              g_43 :
              if(match_cons(n_43, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(i_43), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_43), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(i_43), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_43), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL;
  y_43 = t;
  u_43 :
  if(match_cons(y_43, sym_TCons_2))
    {
      z_43 = ATgetArgument(y_43, 0);
      a_44 = ATgetArgument(y_43, 1);
      v_43 :
      if(match_cons(a_44, sym_TCons_2))
        {
          b_44 = ATgetArgument(a_44, 0);
          c_44 = ATgetArgument(a_44, 1);
          w_43 :
          if(match_cons(b_44, sym_Nil_0))
            {
              x_43 :
              if(match_cons(c_44, sym_TNil_0))
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
ATerm rzip_1 (ATerm t, ATerm o_75 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, o_75);
  return(t);
}
ATerm transitions_0 (ATerm t)
{
  t = rzip_1(t, Transition_0);
  return(t);
}
ATerm Uniq_0 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL;
  j_44 = t;
  i_44 :
  if(match_cons(j_44, sym_Cons_2))
    {
      k_44 = ATgetArgument(j_44, 0);
      l_44 = ATgetArgument(j_44, 1);
      {
        ATerm o_44 = NULL;
        ATerm q_44 = NULL;
        t = not_null(l_44);
        {
          ATerm x_1 (ATerm t)
          {
            ATerm p_11 = t;
            if(PushChoice()==0)
              {
                ATerm p_44 = NULL;
                p_44 = t;
                if(k_44 != NULL && k_44 != p_44)
                  _fail(p_44);
                else
                  k_44 = p_44;
                PopChoice();
                _fail(t);
              }
            else
              t = p_11;
            return(t);
          }
          t = filter_1(t, x_1);
          q_44 = t;
          if(o_44 != NULL && o_44 != q_44)
            _fail(q_44);
          else
            o_44 = q_44;
        }
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_44), not_null(o_44));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm q_77 (ATerm))
{
  ATerm x_44 (ATerm t)
  {
    t = q_77(t);
    {
      ATerm q_11 = t;
      if(PushChoice()==0)
        {
          ATerm w_44 = NULL;
          w_44 = t;
          v_44 :
          if(!(match_cons(w_44, sym_Nil_0)))
            _fail(t);
          PopChoice();
        }
      else
        {
          t = q_11;
          t = Cons_2(t, _id, x_44);
        }
    }
    return(t);
  }
  t = x_44(t);
  return(t);
}
ATerm uniq_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm r_11 = t;
    if(PushChoice()==0)
      {
        t = Uniq_0(t);
        PopChoice();
      }
    else
      t = r_11;
    return(t);
  }
  t = listtd_1(t, y_1);
  return(t);
}
ATerm offsets_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm y_45 = NULL,z_45 = NULL,i_46 = NULL,j_46 = NULL;
    y_45 = t;
    z_44 :
    if(match_cons(y_45, sym_As_2))
      {
        z_45 = ATgetArgument(y_45, 0);
        j_46 = ATgetArgument(y_45, 1);
        x_45 :
        if(match_cons(z_45, sym_Off_1))
          {
            i_46 = ATgetArgument(z_45, 0);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_46));
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = map_1(t, z_1);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm s_11 = t;
  if(PushChoice()==0)
    {
      ATerm c_47 = NULL;
      c_47 = t;
      a_47 :
      if(match_cons(c_47, sym_Nil_0))
        t = (ATerm) ATmakeInt(0);
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = s_11;
      {
        ATerm d_47 = NULL;
        t = Tl_0(t);
        t = length_0(t);
        d_47 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_47), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = add_0(t);
      }
    }
  return(t);
}
ATerm ConsArgs_0 (ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL;
  t_47 = t;
  o_47 :
  if(match_cons(t_47, sym_Row_3))
    {
      u_47 = ATgetArgument(t_47, 0);
      a_48 = ATgetArgument(t_47, 1);
      b_48 = ATgetArgument(t_47, 2);
      p_47 :
      if(match_cons(u_47, sym_Cons_2))
        {
          v_47 = ATgetArgument(u_47, 0);
          z_47 = ATgetArgument(u_47, 1);
          q_47 :
          if(match_cons(v_47, sym_As_2))
            {
              w_47 = ATgetArgument(v_47, 0);
              x_47 = ATgetArgument(v_47, 1);
              r_47 :
              if(match_cons(x_47, sym_Op_2))
                {
                  y_47 = ATgetArgument(x_47, 0);
                  s_47 = ATgetArgument(x_47, 1);
                  {
                    ATerm e_48 = NULL;
                    t = not_null(s_47);
                    {
                      ATerm g_48 = NULL;
                      t = length_0(t);
                      e_48 = t;
                      t = not_null(s_47);
                      t = offsets_0(t);
                      g_48 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Fun_2, not_null(y_47), not_null(e_48)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_48), (ATerm) ATmakeAppl(sym_TNil_0)));
                    }
                  }
                }
              else
                {
                  if(match_cons(x_47, sym_Int_1))
                    {
                      y_47 = ATgetArgument(x_47, 0);
                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Int_1, not_null(y_47)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                    }
                  else
                    {
                      if(match_cons(x_47, sym_Real_1))
                        {
                          y_47 = ATgetArgument(x_47, 0);
                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Real_1, not_null(y_47)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                        }
                      else
                        {
                          if(match_cons(x_47, sym_Str_1))
                            {
                              y_47 = ATgetArgument(x_47, 0);
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Str_1, not_null(y_47)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm filter_1 (ATerm t, ATerm e_71 (ATerm))
{
  ATerm t_48 (ATerm t)
  {
    ATerm t_11 = t;
    if(PushChoice()==0)
      {
        ATerm s_48 = NULL;
        s_48 = t;
        r_48 :
        if(!(match_cons(s_48, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = t_11;
        {
          ATerm u_11 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, e_71, t_48);
              PopChoice();
            }
          else
            {
              t = u_11;
              t = Tl_0(t);
              t = t_48(t);
            }
        }
      }
    return(t);
  }
  t = t_48(t);
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
  ATerm v_48 = NULL;
  v_48 = t;
  t = SSL_implode_string(not_null(v_48));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm d_49 = NULL;
  d_49 = t;
  t = SSL_explode_string(not_null(d_49));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  ATerm w_11 = t;
  if(PushChoice()==0)
    {
      ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL;
      x_51 = t;
      v_49 :
      if(match_cons(x_51, sym_Cons_2))
        {
          y_51 = ATgetArgument(x_51, 0);
          h_52 = ATgetArgument(x_51, 1);
          w_49 :
          if(match_cons(y_51, sym_Row_3))
            {
              z_51 = ATgetArgument(y_51, 0);
              f_52 = ATgetArgument(y_51, 1);
              g_52 = ATgetArgument(y_51, 2);
              x_49 :
              if(match_cons(z_51, sym_Cons_2))
                {
                  a_52 = ATgetArgument(z_51, 0);
                  e_52 = ATgetArgument(z_51, 1);
                  u_51 :
                  if(match_cons(a_52, sym_As_2))
                    {
                      b_52 = ATgetArgument(a_52, 0);
                      d_52 = ATgetArgument(a_52, 1);
                      v_51 :
                      if(match_cons(b_52, sym_Off_1))
                        {
                          c_52 = ATgetArgument(b_52, 0);
                          t = not_null(c_52);
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
      t = w_11;
      t = explode_string_0(t);
      {
        ATerm x_11 = t;
        if(PushChoice()==0)
          {
            ATerm l_52 (ATerm t)
            {
              ATerm y_11 = t;
              if(PushChoice()==0)
                {
                  t = Cons_2(t, _id, l_52);
                  PopChoice();
                }
              else
                {
                  t = y_11;
                  {
                    ATerm a_2 (ATerm t)
                    {
                      ATerm j_52 = NULL;
                      j_52 = t;
                      w_51 :
                      if(!(match_int(j_52, 47)))
                        _fail(t);
                      return(t);
                    }
                    ATerm b_2 (ATerm t)
                    {
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                      return(t);
                    }
                    t = Cons_2(t, a_2, b_2);
                  }
                }
              return(t);
            }
            t = l_52(t);
            PopChoice();
          }
        else
          {
            t = x_11;
            t = (ATerm) ATmakeAppl(sym_Nil_0);
          }
        t = implode_string_0(t);
      }
    }
  return(t);
}
ATerm Mixture_0 (ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL;
  t_52 = t;
  s_52 :
  if(match_cons(t_52, sym_Matrix_1))
    {
      u_52 = ATgetArgument(t_52, 0);
      {
        ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL;
        ATerm b_53 = NULL;
        t = not_null(u_52);
        {
          ATerm c_53 = NULL;
          t = get_path_0(t);
          b_53 = t;
          if(w_52 != NULL && w_52 != b_53)
            _fail(b_53);
          else
            w_52 = b_53;
          t = not_null(u_52);
          {
            ATerm d_53 = NULL;
            t = outedges_0(t);
            c_53 = t;
            if(x_52 != NULL && x_52 != c_53)
              _fail(c_53);
            else
              x_52 = c_53;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_52), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_52), (ATerm) ATmakeAppl(sym_TNil_0)));
            {
              ATerm e_53 = NULL;
              t = rzip_1(t, Transition_0);
              d_53 = t;
              if(y_52 != NULL && y_52 != d_53)
                _fail(d_53);
              else
                y_52 = d_53;
              t = not_null(u_52);
              {
                ATerm f_53 = NULL;
                t = default_state_0(t);
                e_53 = t;
                if(z_52 != NULL && z_52 != e_53)
                  _fail(e_53);
                else
                  z_52 = e_53;
                t = new_0(t);
                f_53 = t;
                if(a_53 != NULL && a_53 != f_53)
                  _fail(f_53);
                else
                  a_53 = f_53;
                {
                  ATerm z_11;
                  z_11 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(u_52)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_1, not_null(a_53)), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm c_2 (ATerm t)
                    {
                      t = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
                      return(t);
                    }
                    t = assert_1(t, c_2);
                  }
                  t = z_11;
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Case_4, not_null(a_53), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_52)), not_null(y_52), not_null(z_52));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ShiftColumnRow_0 (ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL;
  p_53 = t;
  n_53 :
  if(match_cons(p_53, sym_Row_3))
    {
      q_53 = ATgetArgument(p_53, 0);
      r_53 = ATgetArgument(p_53, 1);
      u_53 = ATgetArgument(p_53, 2);
      o_53 :
      if(match_cons(r_53, sym_Cons_2))
        {
          s_53 = ATgetArgument(r_53, 0);
          t_53 = ATgetArgument(r_53, 1);
          t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_53), not_null(q_53)), not_null(t_53), not_null(u_53));
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
  ATerm e_54 = NULL,f_54 = NULL;
  e_54 = t;
  d_54 :
  if(match_cons(e_54, sym_Matrix_1))
    {
      f_54 = ATgetArgument(e_54, 0);
      {
        ATerm h_54 = NULL;
        ATerm j_54 = NULL;
        t = not_null(f_54);
        {
          ATerm a_12 = t;
          if(PushChoice()==0)
            {
              ATerm d_2 (ATerm t)
              {
                ATerm e_2 (ATerm t)
                {
                  ATerm f_2 (ATerm t)
                  {
                    ATerm g_2 (ATerm t)
                    {
                      ATerm b_12 = t;
                      if(PushChoice()==0)
                        {
                          ATerm i_54 = NULL;
                          i_54 = t;
                          b_54 :
                          if(!(match_cons(i_54, sym_Wld_0)))
                            _fail(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        t = b_12;
                      return(t);
                    }
                    t = As_2(t, _id, g_2);
                    return(t);
                  }
                  t = Cons_2(t, f_2, _id);
                  return(t);
                }
                t = Row_3(t, e_2, _id, _id);
                return(t);
              }
              t = map_1(t, d_2);
              PopChoice();
              _fail(t);
            }
          else
            t = a_12;
          t = not_null(f_54);
          t = map_1(t, ShiftColumnRow_0);
          j_54 = t;
          if(h_54 != NULL && h_54 != j_54)
            _fail(j_54);
          else
            h_54 = j_54;
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(h_54));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm n_54 = NULL;
  n_54 = t;
  m_54 :
  if(!(match_cons(n_54, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm As_2 (ATerm t, ATerm s_58 (ATerm), ATerm t_58 (ATerm))
{
  ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL;
  s_54 = t;
  r_54 :
  if(match_cons(s_54, sym_As_2))
    {
      t_54 = ATgetArgument(s_54, 0);
      u_54 = ATgetArgument(s_54, 1);
      {
        ATerm x_54 = NULL;
        t = not_null(t_54);
        {
          ATerm z_54 = NULL;
          t = s_58(t);
          x_54 = t;
          t = not_null(u_54);
          t = t_58(t);
          z_54 = t;
          t = (ATerm) ATmakeAppl(sym_As_2, not_null(x_54), not_null(z_54));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Row_3 (ATerm t, ATerm i_57 (ATerm), ATerm j_57 (ATerm), ATerm k_57 (ATerm))
{
  ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL;
  j_55 = t;
  i_55 :
  if(match_cons(j_55, sym_Row_3))
    {
      k_55 = ATgetArgument(j_55, 0);
      l_55 = ATgetArgument(j_55, 1);
      m_55 = ATgetArgument(j_55, 2);
      {
        ATerm q_55 = NULL;
        t = not_null(k_55);
        {
          ATerm s_55 = NULL;
          t = i_57(t);
          q_55 = t;
          t = not_null(l_55);
          {
            ATerm u_55 = NULL;
            t = j_57(t);
            s_55 = t;
            t = not_null(m_55);
            t = k_57(t);
            u_55 = t;
            t = (ATerm) ATmakeAppl(sym_Row_3, not_null(q_55), not_null(s_55), not_null(u_55));
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
  ATerm e_56 = NULL,f_56 = NULL;
  e_56 = t;
  d_56 :
  if(match_cons(e_56, sym_Matrix_1))
    {
      f_56 = ATgetArgument(e_56, 0);
      {
        ATerm i_56 = NULL;
        ATerm k_56 = NULL;
        t = not_null(f_56);
        {
          ATerm h_2 (ATerm t)
          {
            ATerm i_2 (ATerm t)
            {
              ATerm j_2 (ATerm t)
              {
                ATerm k_2 (ATerm t)
                {
                  ATerm j_56 = NULL;
                  j_56 = t;
                  b_56 :
                  if(!(match_cons(j_56, sym_Wld_0)))
                    _fail(t);
                  return(t);
                }
                t = As_2(t, _id, k_2);
                return(t);
              }
              t = Cons_2(t, j_2, _id);
              t = Tl_0(t);
              return(t);
            }
            t = Row_3(t, _id, i_2, _id);
            return(t);
          }
          t = map_1(t, h_2);
          k_56 = t;
          if(i_56 != NULL && i_56 != k_56)
            _fail(k_56);
          else
            i_56 = k_56;
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(i_56));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatrixRowsEmpty_0 (ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL;
  u_56 = t;
  t_56 :
  if(match_cons(u_56, sym_Matrix_1))
    {
      v_56 = ATgetArgument(u_56, 0);
      {
        ATerm x_56 = NULL;
        ATerm d_57 = NULL;
        t = not_null(v_56);
        {
          ATerm l_2 (ATerm t)
          {
            ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL;
            y_56 = t;
            p_56 :
            if(match_cons(y_56, sym_Row_3))
              {
                z_56 = ATgetArgument(y_56, 0);
                a_57 = ATgetArgument(y_56, 1);
                b_57 = ATgetArgument(y_56, 2);
                q_56 :
                if(match_cons(z_56, sym_Nil_0))
                  {
                    r_56 :
                    if(match_cons(a_57, sym_Nil_0))
                      t = not_null(b_57);
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
          t = map_1(t, l_2);
          d_57 = t;
          if(x_56 != NULL && x_56 != d_57)
            _fail(d_57);
          else
            x_56 = d_57;
        }
        t = (ATerm) ATmakeAppl(sym_LChoices_1, not_null(x_56));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm reduce_matrix_0 (ATerm t)
{
  ATerm c_12 = t;
  if(PushChoice()==0)
    {
      t = MatrixRowsEmpty_0(t);
      PopChoice();
    }
  else
    {
      t = c_12;
      {
        ATerm d_12 = t;
        if(PushChoice()==0)
          {
            t = SkipWild_0(t);
            PopChoice();
          }
        else
          {
            t = d_12;
            {
              ATerm e_12 = t;
              if(PushChoice()==0)
                {
                  t = ShiftColumn_0(t);
                  PopChoice();
                }
              else
                {
                  t = e_12;
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
  ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL;
  m_57 = t;
  l_57 :
  if(match_cons(m_57, sym_Cons_2))
    {
      n_57 = ATgetArgument(m_57, 0);
      o_57 = ATgetArgument(m_57, 1);
      t = not_null(o_57);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL;
  y_57 = t;
  v_57 :
  if(match_cons(y_57, sym_TCons_2))
    {
      z_57 = ATgetArgument(y_57, 0);
      a_58 = ATgetArgument(y_57, 1);
      w_57 :
      if(match_cons(a_58, sym_TCons_2))
        {
          b_58 = ATgetArgument(a_58, 0);
          c_58 = ATgetArgument(a_58, 1);
          x_57 :
          if(match_cons(c_58, sym_TNil_0))
            {
              ATerm f_12;
              f_12 = t;
              {
                ATerm f_58 = NULL;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_57), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_58), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm g_12 = t;
                  if(PushChoice()==0)
                    {
                      t = table_get_0(t);
                      t = Tl_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = g_12;
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                    }
                  f_58 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_57), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_58), (ATerm) ATmakeAppl(sym_TNil_0))));
                  t = table_put_0(t);
                }
              }
              t = f_12;
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
ATerm end_scope_1 (ATerm t, ATerm j_62 (ATerm))
{
  ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL;
  ATerm h_12;
  h_12 = t;
  {
    ATerm q_58 = NULL;
    ATerm r_58 = NULL,u_58 = NULL,v_58 = NULL;
    t = j_62(t);
    q_58 = t;
    if(o_58 != NULL && o_58 != q_58)
      _fail(q_58);
    else
      o_58 = q_58;
    {
      ATerm i_12 = t;
      if(PushChoice()==0)
        {
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = table_get_0(t);
          PopChoice();
        }
      else
        {
          t = i_12;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
        }
      r_58 = t;
      m_58 :
      if(match_cons(r_58, sym_Cons_2))
        {
          u_58 = ATgetArgument(r_58, 0);
          v_58 = ATgetArgument(r_58, 1);
          if(p_58 != NULL && p_58 != u_58)
            _fail(u_58);
          else
            p_58 = u_58;
          if(n_58 != NULL && n_58 != v_58)
            _fail(v_58);
          else
            n_58 = v_58;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_58), (ATerm) ATmakeAppl(sym_TNil_0))));
          t = table_put_0(t);
          t = not_null(p_58);
          {
            ATerm m_2 (ATerm t)
            {
              ATerm w_58 = NULL;
              w_58 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_58), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = table_pop_0(t);
              return(t);
            }
            t = map_1(t, m_2);
          }
        }
      else
        _fail(t);
    }
  }
  t = h_12;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm f_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL;
  f_59 = t;
  c_59 :
  if(match_cons(f_59, sym_TCons_2))
    {
      h_59 = ATgetArgument(f_59, 0);
      i_59 = ATgetArgument(f_59, 1);
      d_59 :
      if(match_cons(i_59, sym_TCons_2))
        {
          j_59 = ATgetArgument(i_59, 0);
          k_59 = ATgetArgument(i_59, 1);
          e_59 :
          if(match_cons(k_59, sym_TNil_0))
            t = SSL_table_get(not_null(h_59), not_null(j_59));
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
ATerm begin_scope_1 (ATerm t, ATerm i_62 (ATerm))
{
  ATerm r_59 = NULL;
  ATerm j_12;
  j_12 = t;
  {
    ATerm t_59 = NULL;
    ATerm u_59 = NULL;
    t = i_62(t);
    t_59 = t;
    if(r_59 != NULL && r_59 != t_59)
      _fail(t_59);
    else
      r_59 = t_59;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_59), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm k_12 = t;
      if(PushChoice()==0)
        {
          t = table_get_0(t);
          PopChoice();
        }
      else
        {
          t = k_12;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      u_59 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_59), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(u_59)), (ATerm) ATmakeAppl(sym_TNil_0))));
      t = table_put_0(t);
    }
  }
  t = j_12;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm k_62 (ATerm), ATerm l_62 (ATerm))
{
  t = begin_scope_1(t, k_62);
  {
    ATerm l_12 = t;
    if(PushChoice()==0)
      {
        t = l_62(t);
        t = end_scope_1(t, k_62);
        PopChoice();
      }
    else
      {
        t = l_12;
        t = end_scope_1(t, k_62);
        _fail(t);
      }
  }
  return(t);
}
ATerm matrix_to_dfa_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm p_2 (ATerm t)
    {
      ATerm m_12 = t;
      if(PushChoice()==0)
        {
          t = reduce_matrix_0(t);
          PopChoice();
        }
      else
        {
          t = m_12;
          {
            ATerm n_12 = t;
            if(PushChoice()==0)
              {
                t = MatrixScope_0(t);
                PopChoice();
              }
            else
              {
                t = n_12;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, p_2);
    t = _all(t, o_2);
    return(t);
  }
  t = scope_2(t, n_2, o_2);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL;
  e_60 = t;
  a_60 :
  if(match_cons(e_60, sym_TCons_2))
    {
      f_60 = ATgetArgument(e_60, 0);
      i_60 = ATgetArgument(e_60, 1);
      b_60 :
      if(match_cons(i_60, sym_TCons_2))
        {
          j_60 = ATgetArgument(i_60, 0);
          k_60 = ATgetArgument(i_60, 1);
          d_60 :
          if(match_cons(k_60, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_60), not_null(j_60));
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
  ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL;
  c_61 = t;
  p_60 :
  if(match_cons(c_61, sym_TCons_2))
    {
      d_61 = ATgetArgument(c_61, 0);
      i_61 = ATgetArgument(c_61, 1);
      y_60 :
      if(match_cons(d_61, sym_Cons_2))
        {
          e_61 = ATgetArgument(d_61, 0);
          h_61 = ATgetArgument(d_61, 1);
          z_60 :
          if(match_cons(i_61, sym_TCons_2))
            {
              j_61 = ATgetArgument(i_61, 0);
              m_61 = ATgetArgument(i_61, 1);
              a_61 :
              if(match_cons(j_61, sym_Cons_2))
                {
                  k_61 = ATgetArgument(j_61, 0);
                  l_61 = ATgetArgument(j_61, 1);
                  b_61 :
                  if(match_cons(m_61, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(e_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_61), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(h_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_61), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm h_62 = NULL,n_62 = NULL,o_62 = NULL,s_62 = NULL,t_62 = NULL;
  h_62 = t;
  u_61 :
  if(match_cons(h_62, sym_TCons_2))
    {
      n_62 = ATgetArgument(h_62, 0);
      o_62 = ATgetArgument(h_62, 1);
      x_61 :
      if(match_cons(n_62, sym_Nil_0))
        {
          c_62 :
          if(match_cons(o_62, sym_TCons_2))
            {
              s_62 = ATgetArgument(o_62, 0);
              t_62 = ATgetArgument(o_62, 1);
              d_62 :
              if(match_cons(s_62, sym_Nil_0))
                {
                  g_62 :
                  if(match_cons(t_62, sym_TNil_0))
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
ATerm zip_1 (ATerm t, ATerm e_75 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, e_75);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL;
  n_63 = t;
  m_63 :
  if(match_cons(n_63, sym_Cong_2))
    {
      o_63 = ATgetArgument(n_63, 0);
      p_63 = ATgetArgument(n_63, 1);
      {
        ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,j_65 = NULL;
        ATerm x_63 = NULL;
        t = not_null(p_63);
        {
          ATerm g_64 = NULL;
          t = map_1(t, new_0);
          x_63 = t;
          if(u_63 != NULL && u_63 != x_63)
            _fail(x_63);
          else
            u_63 = x_63;
          t = not_null(u_63);
          {
            ATerm i_64 = NULL;
            ATerm q_2 (ATerm t)
            {
              ATerm e_64 = NULL;
              e_64 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_64));
              return(t);
            }
            t = map_1(t, q_2);
            g_64 = t;
            if(s_63 != NULL && s_63 != g_64)
              _fail(g_64);
            else
              s_63 = g_64;
            t = not_null(p_63);
            {
              ATerm o_64 = NULL;
              t = map_1(t, new_0);
              i_64 = t;
              if(v_63 != NULL && v_63 != i_64)
                _fail(i_64);
              else
                v_63 = i_64;
              t = not_null(v_63);
              {
                ATerm p_64 = NULL;
                ATerm r_2 (ATerm t)
                {
                  ATerm k_64 = NULL;
                  k_64 = t;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_64));
                  return(t);
                }
                t = map_1(t, r_2);
                o_64 = t;
                if(t_63 != NULL && t_63 != o_64)
                  _fail(o_64);
                else
                  t_63 = o_64;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_63), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm i_65 = NULL;
                  t = zip_1(t, _id);
                  p_64 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_63), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm s_2 (ATerm t)
                    {
                      ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL,e_65 = NULL;
                      u_64 = t;
                      e_63 :
                      if(match_cons(u_64, sym_TCons_2))
                        {
                          v_64 = ATgetArgument(u_64, 0);
                          a_65 = ATgetArgument(u_64, 1);
                          f_63 :
                          if(match_cons(v_64, sym_TCons_2))
                            {
                              w_64 = ATgetArgument(v_64, 0);
                              x_64 = ATgetArgument(v_64, 1);
                              g_63 :
                              if(match_cons(x_64, sym_TCons_2))
                                {
                                  y_64 = ATgetArgument(x_64, 0);
                                  z_64 = ATgetArgument(x_64, 1);
                                  h_63 :
                                  if(match_cons(z_64, sym_TNil_0))
                                    {
                                      i_63 :
                                      if(match_cons(a_65, sym_TCons_2))
                                        {
                                          b_65 = ATgetArgument(a_65, 0);
                                          e_65 = ATgetArgument(a_65, 1);
                                          j_63 :
                                          if(match_cons(e_65, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_64))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_65), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_64)))));
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
                    t = zip_1(t, s_2);
                    i_65 = t;
                    if(w_63 != NULL && w_63 != i_65)
                      _fail(i_65);
                    else
                      w_63 = i_65;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_63), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
        j_65 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_65), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(o_63), not_null(s_63))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(w_63)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(o_63), not_null(t_63))))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL;
  c_66 = t;
  b_66 :
  if(match_cons(c_66, sym_Cong_2))
    {
      d_66 = ATgetArgument(c_66, 0);
      e_66 = ATgetArgument(c_66, 1);
      {
        ATerm h_66 = NULL;
        ATerm l_66 = NULL;
        t = not_null(e_66);
        {
          ATerm t_2 (ATerm t)
          {
            ATerm i_66 = NULL,j_66 = NULL;
            j_66 = t;
            z_65 :
            if(match_cons(j_66, sym_Match_1))
              {
                i_66 = ATgetArgument(j_66, 0);
                t = not_null(i_66);
              }
            else
              {
                if(match_cons(j_66, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, t_2);
          l_66 = t;
          if(h_66 != NULL && h_66 != l_66)
            _fail(l_66);
          else
            h_66 = l_66;
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(d_66), not_null(h_66)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL;
  t_66 = t;
  r_66 :
  if(match_cons(t_66, sym_Scope_2))
    {
      u_66 = ATgetArgument(t_66, 0);
      v_66 = ATgetArgument(t_66, 1);
      s_66 :
      if(match_cons(u_66, sym_Nil_0))
        t = not_null(v_66);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL;
  w_67 = t;
  i_67 :
  if(match_cons(w_67, sym_Choice_2))
    {
      x_67 = ATgetArgument(w_67, 0);
      v_67 = ATgetArgument(w_67, 1);
      if(x_67 != NULL && x_67 != v_67)
        _fail(v_67);
      else
        x_67 = v_67;
      t = not_null(x_67);
    }
  else
    {
      if(match_cons(w_67, sym_LChoice_2))
        {
          x_67 = ATgetArgument(w_67, 0);
          v_67 = ATgetArgument(w_67, 1);
          if(x_67 != NULL && x_67 != v_67)
            _fail(v_67);
          else
            x_67 = v_67;
          t = not_null(x_67);
        }
      else
        {
          if(match_cons(w_67, sym_Where_1))
            {
              x_67 = ATgetArgument(w_67, 0);
              j_67 :
              if(match_cons(x_67, sym_Where_1))
                {
                  y_67 = ATgetArgument(x_67, 0);
                  t = (ATerm) ATmakeAppl(sym_Where_1, not_null(y_67));
                }
              else
                {
                  if(match_cons(x_67, sym_Seq_2))
                    {
                      y_67 = ATgetArgument(x_67, 0);
                      a_68 = ATgetArgument(x_67, 1);
                      k_67 :
                      if(match_cons(y_67, sym_Where_1))
                        {
                          z_67 = ATgetArgument(y_67, 0);
                          l_67 :
                          if(match_cons(a_68, sym_Seq_2))
                            {
                              b_68 = ATgetArgument(a_68, 0);
                              d_68 = ATgetArgument(a_68, 1);
                              m_67 :
                              if(match_cons(b_68, sym_Build_1))
                                {
                                  c_68 = ATgetArgument(b_68, 0);
                                  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_67), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_68)), not_null(d_68))));
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
              if(match_cons(w_67, sym_Not_1))
                {
                  x_67 = ATgetArgument(w_67, 0);
                  n_67 :
                  if(match_cons(x_67, sym_Not_1))
                    {
                      y_67 = ATgetArgument(x_67, 0);
                      t = (ATerm) ATmakeAppl(sym_Test_1, not_null(y_67));
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(w_67, sym_Test_1))
                    {
                      x_67 = ATgetArgument(w_67, 0);
                      u_67 :
                      if(match_cons(x_67, sym_Test_1))
                        {
                          y_67 = ATgetArgument(x_67, 0);
                          t = (ATerm) ATmakeAppl(sym_Test_1, not_null(y_67));
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
  ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL;
  e_69 = t;
  w_68 :
  if(match_cons(e_69, sym_Choice_2))
    {
      f_69 = ATgetArgument(e_69, 0);
      i_69 = ATgetArgument(e_69, 1);
      x_68 :
      if(match_cons(f_69, sym_Choice_2))
        {
          g_69 = ATgetArgument(f_69, 0);
          h_69 = ATgetArgument(f_69, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_69), (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_69), not_null(i_69)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(e_69, sym_Seq_2))
        {
          f_69 = ATgetArgument(e_69, 0);
          i_69 = ATgetArgument(e_69, 1);
          c_69 :
          if(match_cons(f_69, sym_Seq_2))
            {
              g_69 = ATgetArgument(f_69, 0);
              h_69 = ATgetArgument(f_69, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_69), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_69), not_null(i_69)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(e_69, sym_LChoice_2))
            {
              f_69 = ATgetArgument(e_69, 0);
              i_69 = ATgetArgument(e_69, 1);
              d_69 :
              if(match_cons(f_69, sym_LChoice_2))
                {
                  g_69 = ATgetArgument(f_69, 0);
                  h_69 = ATgetArgument(f_69, 1);
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_69), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_69), not_null(i_69)));
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
  ATerm p_70 = NULL,q_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL;
  t_70 = t;
  k_70 :
  if(match_cons(t_70, sym_Seqs_1))
    {
      u_70 = ATgetArgument(t_70, 0);
      m_70 :
      if(match_cons(u_70, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(u_70, sym_Cons_2))
            {
              p_70 = ATgetArgument(u_70, 0);
              q_70 = ATgetArgument(u_70, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_70), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(q_70)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t_70, sym_Choices_1))
        {
          u_70 = ATgetArgument(t_70, 0);
          n_70 :
          if(match_cons(u_70, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(u_70, sym_Cons_2))
                {
                  p_70 = ATgetArgument(u_70, 0);
                  q_70 = ATgetArgument(u_70, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(p_70), (ATerm) ATmakeAppl(sym_Choices_1, not_null(q_70)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(t_70, sym_LChoices_1))
            {
              u_70 = ATgetArgument(t_70, 0);
              o_70 :
              if(match_cons(u_70, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(u_70, sym_Cons_2))
                    {
                      p_70 = ATgetArgument(u_70, 0);
                      q_70 = ATgetArgument(u_70, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(p_70), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(q_70)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(t_70, sym_Lets_2))
                {
                  u_70 = ATgetArgument(t_70, 0);
                  v_70 = ATgetArgument(t_70, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(u_70), not_null(v_70));
                }
              else
                {
                  if(match_cons(t_70, sym_BA_2))
                    {
                      u_70 = ATgetArgument(t_70, 0);
                      v_70 = ATgetArgument(t_70, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_70)), not_null(u_70));
                    }
                  else
                    {
                      if(match_cons(t_70, sym_MA_2))
                        {
                          u_70 = ATgetArgument(t_70, 0);
                          v_70 = ATgetArgument(t_70, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_70)), not_null(v_70));
                        }
                      else
                        {
                          if(match_cons(t_70, sym_AM_2))
                            {
                              u_70 = ATgetArgument(t_70, 0);
                              v_70 = ATgetArgument(t_70, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_70), (ATerm) ATmakeAppl(sym_Match_1, not_null(v_70)));
                            }
                          else
                            {
                              if(match_cons(t_70, sym_BAM_3))
                                {
                                  u_70 = ATgetArgument(t_70, 0);
                                  v_70 = ATgetArgument(t_70, 1);
                                  w_70 = ATgetArgument(t_70, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_70)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_70), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_70)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(t_70, sym_InfixApp_3))
                                    {
                                      u_70 = ATgetArgument(t_70, 0);
                                      v_70 = ATgetArgument(t_70, 1);
                                      w_70 = ATgetArgument(t_70, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(v_70), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_70), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_70), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm w_72 = NULL,x_72 = NULL;
  w_72 = t;
  u_72 :
  if(match_cons(w_72, sym_Where_1))
    {
      x_72 = ATgetArgument(w_72, 0);
      v_72 :
      if(match_cons(x_72, sym_Fail_0))
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
  ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL;
  d_73 = t;
  a_73 :
  if(match_cons(d_73, sym_LChoice_2))
    {
      e_73 = ATgetArgument(d_73, 0);
      f_73 = ATgetArgument(d_73, 1);
      b_73 :
      if(match_cons(f_73, sym_Fail_0))
        t = not_null(e_73);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL;
  o_73 = t;
  m_73 :
  if(match_cons(o_73, sym_LChoice_2))
    {
      p_73 = ATgetArgument(o_73, 0);
      q_73 = ATgetArgument(o_73, 1);
      n_73 :
      if(match_cons(p_73, sym_Fail_0))
        t = not_null(q_73);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm c_74 = NULL,d_74 = NULL,e_74 = NULL;
  c_74 = t;
  x_73 :
  if(match_cons(c_74, sym_Choice_2))
    {
      d_74 = ATgetArgument(c_74, 0);
      e_74 = ATgetArgument(c_74, 1);
      y_73 :
      if(match_cons(e_74, sym_Fail_0))
        t = not_null(d_74);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL;
  q_74 = t;
  i_74 :
  if(match_cons(q_74, sym_Choice_2))
    {
      r_74 = ATgetArgument(q_74, 0);
      s_74 = ATgetArgument(q_74, 1);
      p_74 :
      if(match_cons(r_74, sym_Fail_0))
        t = not_null(s_74);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm y_74 = NULL,f_75 = NULL,g_75 = NULL;
  y_74 = t;
  x_74 :
  if(match_cons(y_74, sym_Cong_2))
    {
      f_75 = ATgetArgument(y_74, 0);
      g_75 = ATgetArgument(y_74, 1);
      t = not_null(g_75);
      {
        ATerm u_2 (ATerm t)
        {
          ATerm l_75 = NULL;
          l_75 = t;
          w_74 :
          if(!(match_cons(l_75, sym_Fail_0)))
            _fail(t);
          return(t);
        }
        t = fetch_1(t, u_2);
      }
      t = (ATerm) ATmakeAppl(sym_Fail_0);
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL;
  r_75 = t;
  p_75 :
  if(match_cons(r_75, sym_Path_2))
    {
      s_75 = ATgetArgument(r_75, 0);
      t_75 = ATgetArgument(r_75, 1);
      q_75 :
      if(match_cons(t_75, sym_Fail_0))
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
  ATerm z_75 = NULL,a_76 = NULL;
  z_75 = t;
  x_75 :
  if(match_cons(z_75, sym_One_1))
    {
      a_76 = ATgetArgument(z_75, 0);
      y_75 :
      if(match_cons(a_76, sym_Fail_0))
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
  ATerm f_76 = NULL,g_76 = NULL;
  f_76 = t;
  d_76 :
  if(match_cons(f_76, sym_Some_1))
    {
      g_76 = ATgetArgument(f_76, 0);
      e_76 :
      if(match_cons(g_76, sym_Fail_0))
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
  ATerm l_76 = NULL,m_76 = NULL,r_76 = NULL;
  l_76 = t;
  j_76 :
  if(match_cons(l_76, sym_Rec_2))
    {
      m_76 = ATgetArgument(l_76, 0);
      r_76 = ATgetArgument(l_76, 1);
      k_76 :
      if(match_cons(r_76, sym_Fail_0))
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
  ATerm a_77 = NULL,b_77 = NULL,e_77 = NULL;
  a_77 = t;
  y_76 :
  if(match_cons(a_77, sym_Scope_2))
    {
      b_77 = ATgetArgument(a_77, 0);
      e_77 = ATgetArgument(a_77, 1);
      z_76 :
      if(match_cons(e_77, sym_Fail_0))
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
  ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL;
  k_77 = t;
  i_77 :
  if(match_cons(k_77, sym_Seq_2))
    {
      l_77 = ATgetArgument(k_77, 0);
      m_77 = ATgetArgument(k_77, 1);
      j_77 :
      if(match_cons(l_77, sym_Fail_0))
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
  ATerm u_77 = NULL,v_77 = NULL;
  u_77 = t;
  s_77 :
  if(match_cons(u_77, sym_Not_1))
    {
      v_77 = ATgetArgument(u_77, 0);
      t_77 :
      if(match_cons(v_77, sym_Fail_0))
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
  ATerm b_78 = NULL,e_78 = NULL;
  b_78 = t;
  z_77 :
  if(match_cons(b_78, sym_Test_1))
    {
      e_78 = ATgetArgument(b_78, 0);
      a_78 :
      if(match_cons(e_78, sym_Fail_0))
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
  ATerm o_12 = t;
  if(PushChoice()==0)
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = o_12;
      {
        ATerm p_12 = t;
        if(PushChoice()==0)
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = p_12;
            {
              ATerm q_12 = t;
              if(PushChoice()==0)
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = q_12;
                  {
                    ATerm r_12 = t;
                    if(PushChoice()==0)
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = r_12;
                        {
                          ATerm s_12 = t;
                          if(PushChoice()==0)
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = s_12;
                              {
                                ATerm t_12 = t;
                                if(PushChoice()==0)
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = t_12;
                                    {
                                      ATerm u_12 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = u_12;
                                          {
                                            ATerm v_12 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = v_12;
                                                {
                                                  ATerm w_12 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = w_12;
                                                      {
                                                        ATerm x_12 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = x_12;
                                                            {
                                                              ATerm y_12 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = y_12;
                                                                  {
                                                                    ATerm z_12 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = z_12;
                                                                        {
                                                                          ATerm l_13 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = l_13;
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
  ATerm j_78 = NULL,k_78 = NULL;
  j_78 = t;
  h_78 :
  if(match_cons(j_78, sym_Match_1))
    {
      k_78 = ATgetArgument(j_78, 0);
      i_78 :
      if(match_cons(k_78, sym_Wld_0))
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
  ATerm p_78 = NULL,q_78 = NULL;
  p_78 = t;
  n_78 :
  if(match_cons(p_78, sym_Where_1))
    {
      q_78 = ATgetArgument(p_78, 0);
      o_78 :
      if(match_cons(q_78, sym_Id_0))
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
  ATerm w_78 = NULL,x_78 = NULL;
  w_78 = t;
  t_78 :
  if(match_cons(w_78, sym_All_1))
    {
      x_78 = ATgetArgument(w_78, 0);
      v_78 :
      if(match_cons(x_78, sym_Id_0))
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
  ATerm c_79 = NULL,d_79 = NULL,e_79 = NULL;
  c_79 = t;
  a_79 :
  if(match_cons(c_79, sym_Rec_2))
    {
      d_79 = ATgetArgument(c_79, 0);
      e_79 = ATgetArgument(c_79, 1);
      b_79 :
      if(match_cons(e_79, sym_Id_0))
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
  ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL;
  o_79 = t;
  m_79 :
  if(match_cons(o_79, sym_Scope_2))
    {
      p_79 = ATgetArgument(o_79, 0);
      q_79 = ATgetArgument(o_79, 1);
      n_79 :
      if(match_cons(q_79, sym_Id_0))
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
  ATerm w_79 = NULL,x_79 = NULL,y_79 = NULL;
  w_79 = t;
  u_79 :
  if(match_cons(w_79, sym_LChoice_2))
    {
      x_79 = ATgetArgument(w_79, 0);
      y_79 = ATgetArgument(w_79, 1);
      v_79 :
      if(match_cons(x_79, sym_Id_0))
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
  ATerm e_80 = NULL,f_80 = NULL,g_80 = NULL;
  e_80 = t;
  c_80 :
  if(match_cons(e_80, sym_Seq_2))
    {
      f_80 = ATgetArgument(e_80, 0);
      g_80 = ATgetArgument(e_80, 1);
      d_80 :
      if(match_cons(g_80, sym_Id_0))
        t = not_null(f_80);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm m_80 = NULL,n_80 = NULL,o_80 = NULL;
  m_80 = t;
  k_80 :
  if(match_cons(m_80, sym_Seq_2))
    {
      n_80 = ATgetArgument(m_80, 0);
      o_80 = ATgetArgument(m_80, 1);
      l_80 :
      if(match_cons(n_80, sym_Id_0))
        t = not_null(o_80);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm u_80 = NULL,v_80 = NULL;
  u_80 = t;
  s_80 :
  if(match_cons(u_80, sym_Not_1))
    {
      v_80 = ATgetArgument(u_80, 0);
      t_80 :
      if(match_cons(v_80, sym_Id_0))
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
  ATerm a_81 = NULL,b_81 = NULL;
  a_81 = t;
  y_80 :
  if(match_cons(a_81, sym_Test_1))
    {
      b_81 = ATgetArgument(a_81, 0);
      z_80 :
      if(match_cons(b_81, sym_Id_0))
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
  ATerm m_13 = t;
  if(PushChoice()==0)
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = m_13;
      {
        ATerm n_13 = t;
        if(PushChoice()==0)
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = n_13;
            {
              ATerm r_13 = t;
              if(PushChoice()==0)
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = r_13;
                  {
                    ATerm z_13 = t;
                    if(PushChoice()==0)
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = z_13;
                        {
                          ATerm d_14 = t;
                          if(PushChoice()==0)
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = d_14;
                              {
                                ATerm e_14 = t;
                                if(PushChoice()==0)
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = e_14;
                                    {
                                      ATerm f_14 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = f_14;
                                          {
                                            ATerm g_14 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = g_14;
                                                {
                                                  ATerm h_14 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = h_14;
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
  ATerm i_14 = t;
  if(PushChoice()==0)
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = i_14;
      {
        ATerm j_14 = t;
        if(PushChoice()==0)
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = j_14;
            {
              ATerm k_14 = t;
              if(PushChoice()==0)
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = k_14;
                  {
                    ATerm l_14 = t;
                    if(PushChoice()==0)
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = l_14;
                        {
                          ATerm m_14 = t;
                          if(PushChoice()==0)
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = m_14;
                              {
                                ATerm n_14 = t;
                                if(PushChoice()==0)
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = n_14;
                                    {
                                      ATerm o_14 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = o_14;
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
ATerm at_end_1 (ATerm t, ATerm c_77 (ATerm))
{
  ATerm g_81 (ATerm t)
  {
    ATerm p_14 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, g_81);
        PopChoice();
      }
    else
      {
        t = p_14;
        {
          ATerm f_81 = NULL;
          f_81 = t;
          e_81 :
          if(match_cons(f_81, sym_Nil_0))
            t = c_77(t);
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = g_81(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm m_81 = NULL,n_81 = NULL,o_81 = NULL,p_81 = NULL,q_81 = NULL;
  m_81 = t;
  j_81 :
  if(match_cons(m_81, sym_TCons_2))
    {
      n_81 = ATgetArgument(m_81, 0);
      o_81 = ATgetArgument(m_81, 1);
      k_81 :
      if(match_cons(o_81, sym_TCons_2))
        {
          p_81 = ATgetArgument(o_81, 0);
          q_81 = ATgetArgument(o_81, 1);
          l_81 :
          if(match_cons(q_81, sym_TNil_0))
            {
              t = not_null(n_81);
              {
                ATerm v_2 (ATerm t)
                {
                  t = not_null(p_81);
                  return(t);
                }
                t = at_end_1(t, v_2);
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
  ATerm n_83 = NULL,o_83 = NULL,p_83 = NULL,q_83 = NULL,r_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL,y_83 = NULL,b_84 = NULL;
  r_83 = t;
  r_82 :
  if(match_cons(r_83, sym_Seq_2))
    {
      s_83 = ATgetArgument(r_83, 0);
      v_83 = ATgetArgument(r_83, 1);
      s_82 :
      if(match_cons(s_83, sym_Matrix_2))
        {
          t_83 = ATgetArgument(s_83, 0);
          u_83 = ATgetArgument(s_83, 1);
          t_82 :
          if(match_cons(u_83, sym_Cons_2))
            {
              n_83 = ATgetArgument(u_83, 0);
              q_83 = ATgetArgument(u_83, 1);
              u_82 :
              if(match_cons(n_83, sym_Row_2))
                {
                  o_83 = ATgetArgument(n_83, 0);
                  p_83 = ATgetArgument(n_83, 1);
                  v_82 :
                  if(match_cons(q_83, sym_Nil_0))
                    t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(t_83), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Row_2, not_null(o_83), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_83), not_null(v_83))), (ATerm) ATmakeAppl(sym_Nil_0)));
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
      if(match_cons(r_83, sym_Scope_2))
        {
          s_83 = ATgetArgument(r_83, 0);
          v_83 = ATgetArgument(r_83, 1);
          w_82 :
          if(match_cons(v_83, sym_Matrix_2))
            {
              w_83 = ATgetArgument(v_83, 0);
              b_84 = ATgetArgument(v_83, 1);
              {
                ATerm p_84 = NULL;
                t = not_null(b_84);
                {
                  ATerm w_2 (ATerm t)
                  {
                    ATerm k_84 = NULL,l_84 = NULL,m_84 = NULL;
                    k_84 = t;
                    d_82 :
                    if(match_cons(k_84, sym_Row_2))
                      {
                        l_84 = ATgetArgument(k_84, 0);
                        m_84 = ATgetArgument(k_84, 1);
                        t = (ATerm) ATmakeAppl(sym_Row_2, not_null(l_84), (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_83), not_null(m_84)));
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = map_1(t, w_2);
                  p_84 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(w_83), not_null(p_84));
                }
              }
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(r_83, sym_Choice_2))
            {
              s_83 = ATgetArgument(r_83, 0);
              v_83 = ATgetArgument(r_83, 1);
              x_82 :
              if(match_cons(s_83, sym_Matrix_2))
                {
                  t_83 = ATgetArgument(s_83, 0);
                  u_83 = ATgetArgument(s_83, 1);
                  g_83 :
                  if(match_cons(v_83, sym_Matrix_2))
                    {
                      w_83 = ATgetArgument(v_83, 0);
                      b_84 = ATgetArgument(v_83, 1);
                      {
                        ATerm v_84 = NULL;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_83), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_83), (ATerm) ATmakeAppl(sym_TNil_0)));
                        {
                          ATerm x_84 = NULL;
                          t = union_0(t);
                          v_84 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_83), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_84), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = conc_0(t);
                          x_84 = t;
                          t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(v_84), not_null(x_84));
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(v_83, sym_Choice_2))
                        {
                          w_83 = ATgetArgument(v_83, 0);
                          b_84 = ATgetArgument(v_83, 1);
                          h_83 :
                          if(match_cons(w_83, sym_Matrix_2))
                            {
                              x_83 = ATgetArgument(w_83, 0);
                              y_83 = ATgetArgument(w_83, 1);
                              {
                                ATerm e_85 = NULL;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_83), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_83), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm g_85 = NULL;
                                  t = union_0(t);
                                  e_85 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_83), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_83), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = conc_0(t);
                                  g_85 = t;
                                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(e_85), not_null(g_85)), not_null(b_84));
                                }
                              }
                            }
                          else
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(v_83, sym_LChoice_2))
                            {
                              w_83 = ATgetArgument(v_83, 0);
                              b_84 = ATgetArgument(v_83, 1);
                              i_83 :
                              if(match_cons(w_83, sym_Matrix_2))
                                {
                                  x_83 = ATgetArgument(w_83, 0);
                                  y_83 = ATgetArgument(w_83, 1);
                                  {
                                    ATerm n_85 = NULL;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_83), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_83), (ATerm) ATmakeAppl(sym_TNil_0)));
                                    {
                                      ATerm p_85 = NULL;
                                      t = union_0(t);
                                      n_85 = t;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_83), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_83), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = conc_0(t);
                                      p_85 = t;
                                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(n_85), not_null(p_85)), not_null(b_84));
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
              if(match_cons(r_83, sym_LChoice_2))
                {
                  s_83 = ATgetArgument(r_83, 0);
                  v_83 = ATgetArgument(r_83, 1);
                  j_83 :
                  if(match_cons(s_83, sym_Matrix_2))
                    {
                      t_83 = ATgetArgument(s_83, 0);
                      u_83 = ATgetArgument(s_83, 1);
                      k_83 :
                      if(match_cons(v_83, sym_Matrix_2))
                        {
                          w_83 = ATgetArgument(v_83, 0);
                          b_84 = ATgetArgument(v_83, 1);
                          {
                            ATerm v_85 = NULL;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_83), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_83), (ATerm) ATmakeAppl(sym_TNil_0)));
                            {
                              ATerm x_85 = NULL;
                              t = union_0(t);
                              v_85 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_83), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_84), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = conc_0(t);
                              x_85 = t;
                              t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(v_85), not_null(x_85));
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(v_83, sym_LChoice_2))
                            {
                              w_83 = ATgetArgument(v_83, 0);
                              b_84 = ATgetArgument(v_83, 1);
                              l_83 :
                              if(match_cons(w_83, sym_Matrix_2))
                                {
                                  x_83 = ATgetArgument(w_83, 0);
                                  y_83 = ATgetArgument(w_83, 1);
                                  {
                                    ATerm e_86 = NULL;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_83), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_83), (ATerm) ATmakeAppl(sym_TNil_0)));
                                    {
                                      ATerm g_86 = NULL;
                                      t = union_0(t);
                                      e_86 = t;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_83), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_83), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = conc_0(t);
                                      g_86 = t;
                                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(e_86), not_null(g_86)), not_null(b_84));
                                    }
                                  }
                                }
                              else
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(v_83, sym_Choice_2))
                                {
                                  w_83 = ATgetArgument(v_83, 0);
                                  b_84 = ATgetArgument(v_83, 1);
                                  m_83 :
                                  if(match_cons(w_83, sym_Matrix_2))
                                    {
                                      x_83 = ATgetArgument(w_83, 0);
                                      y_83 = ATgetArgument(w_83, 1);
                                      {
                                        ATerm n_86 = NULL;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_83), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_83), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        {
                                          ATerm p_86 = NULL;
                                          t = union_0(t);
                                          n_86 = t;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_83), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_83), (ATerm) ATmakeAppl(sym_TNil_0)));
                                          t = conc_0(t);
                                          p_86 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(n_86), not_null(p_86)), not_null(b_84));
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
ATerm foldr_3 (ATerm t, ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm c_72 (ATerm))
{
  ATerm b_88 (ATerm t)
  {
    ATerm s_87 = NULL,t_87 = NULL,u_87 = NULL;
    s_87 = t;
    r_87 :
    if(match_cons(s_87, sym_Nil_0))
      t = a_72(t);
    else
      {
        if(match_cons(s_87, sym_Cons_2))
          {
            t_87 = ATgetArgument(s_87, 0);
            u_87 = ATgetArgument(s_87, 1);
            {
              ATerm x_87 = NULL;
              t = not_null(t_87);
              {
                ATerm z_87 = NULL;
                t = c_72(t);
                x_87 = t;
                t = not_null(u_87);
                t = b_88(t);
                z_87 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_87), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_87), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = b_72(t);
              }
            }
          }
        else
          _fail(t);
      }
    return(t);
  }
  t = b_88(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t_73 (ATerm))
{
  ATerm m_88 = NULL;
  ATerm o_88 = NULL;
  m_88 = t;
  {
    ATerm p_88 = NULL;
    ATerm r_88 = NULL,s_88 = NULL,t_88 = NULL,u_88 = NULL,v_88 = NULL;
    t = not_null(m_88);
    p_88 = t;
    t = SSL_explode_term(not_null(p_88));
    r_88 = t;
    j_88 :
    if(match_cons(r_88, sym_TCons_2))
      {
        s_88 = ATgetArgument(r_88, 0);
        t_88 = ATgetArgument(r_88, 1);
        k_88 :
        if(match_cons(t_88, sym_TCons_2))
          {
            u_88 = ATgetArgument(t_88, 0);
            v_88 = ATgetArgument(t_88, 1);
            l_88 :
            if(match_cons(v_88, sym_TNil_0))
              {
                if(o_88 != NULL && o_88 != u_88)
                  _fail(u_88);
                else
                  o_88 = u_88;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(o_88);
    t = foldr_3(t, r_73, s_73, t_73);
  }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm a_74 (ATerm))
{
  ATerm c_89 (ATerm t)
  {
    ATerm q_14 = t;
    if(PushChoice()==0)
      {
        ATerm a_89 = NULL;
        t = a_74(t);
        a_89 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_89), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = q_14;
        {
          ATerm x_2 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, x_2, union_0, c_89);
        }
      }
    return(t);
  }
  t = c_89(t);
  return(t);
}
ATerm collect_offsets_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm g_89 = NULL,h_89 = NULL;
    g_89 = t;
    f_89 :
    if(match_cons(g_89, sym_Off_1))
      {
        h_89 = ATgetArgument(g_89, 0);
        t = not_null(h_89);
      }
    else
      _fail(t);
    return(t);
  }
  t = collect_1(t, y_2);
  return(t);
}
ATerm CollectSubst_0 (ATerm t)
{
  ATerm r_89 = NULL,s_89 = NULL,t_89 = NULL,u_89 = NULL,v_89 = NULL,w_89 = NULL,x_89 = NULL;
  r_89 = t;
  m_89 :
  if(match_cons(r_89, sym_As_2))
    {
      s_89 = ATgetArgument(r_89, 0);
      u_89 = ATgetArgument(r_89, 1);
      n_89 :
      if(match_cons(s_89, sym_Off_1))
        {
          t_89 = ATgetArgument(s_89, 0);
          o_89 :
          if(match_cons(u_89, sym_Var_1))
            {
              v_89 = ATgetArgument(u_89, 0);
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_89)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_89))), (ATerm) ATmakeAppl(sym_Nil_0));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(s_89, sym_Var_1))
            {
              t_89 = ATgetArgument(s_89, 0);
              p_89 :
              if(match_cons(u_89, sym_As_2))
                {
                  v_89 = ATgetArgument(u_89, 0);
                  x_89 = ATgetArgument(u_89, 1);
                  q_89 :
                  if(match_cons(v_89, sym_Off_1))
                    {
                      w_89 = ATgetArgument(v_89, 0);
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(t_89)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_89))), (ATerm) ATmakeAppl(sym_Nil_0));
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
  ATerm r_14 = t;
  if(PushChoice()==0)
    {
      ATerm g_90 = NULL;
      g_90 = t;
      f_90 :
      if(!(match_cons(g_90, sym_Nil_0)))
        _fail(t);
      PopChoice();
    }
  else
    {
      t = r_14;
      t = Cons_2(t, _id, _id);
    }
  return(t);
}
ATerm IgnoreVar_0 (ATerm t)
{
  ATerm o_90 = NULL,p_90 = NULL,q_90 = NULL,r_90 = NULL,s_90 = NULL,t_90 = NULL,u_90 = NULL;
  o_90 = t;
  j_90 :
  if(match_cons(o_90, sym_As_2))
    {
      p_90 = ATgetArgument(o_90, 0);
      r_90 = ATgetArgument(o_90, 1);
      k_90 :
      if(match_cons(p_90, sym_Off_1))
        {
          q_90 = ATgetArgument(p_90, 0);
          l_90 :
          if(match_cons(r_90, sym_Var_1))
            {
              s_90 = ATgetArgument(r_90, 0);
              t = not_null(q_90);
              t = is_list_0(t);
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(q_90)), (ATerm) ATmakeAppl(sym_Wld_0));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(p_90, sym_Var_1))
            {
              q_90 = ATgetArgument(p_90, 0);
              m_90 :
              if(match_cons(r_90, sym_As_2))
                {
                  s_90 = ATgetArgument(r_90, 0);
                  u_90 = ATgetArgument(r_90, 1);
                  n_90 :
                  if(match_cons(s_90, sym_Off_1))
                    {
                      t_90 = ATgetArgument(s_90, 0);
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(t_90)), not_null(u_90));
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
ATerm HdMember_1 (ATerm t, ATerm h_73 (ATerm))
{
  ATerm h_91 = NULL,i_91 = NULL,j_91 = NULL;
  h_91 = t;
  g_91 :
  if(match_cons(h_91, sym_Cons_2))
    {
      i_91 = ATgetArgument(h_91, 0);
      j_91 = ATgetArgument(h_91, 1);
      t = h_73(t);
      {
        ATerm z_2 (ATerm t)
        {
          ATerm m_91 = NULL;
          m_91 = t;
          if(i_91 != NULL && i_91 != m_91)
            _fail(m_91);
          else
            i_91 = m_91;
          return(t);
        }
        t = fetch_1(t, z_2);
      }
      t = not_null(j_91);
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm v_91 = NULL,w_91 = NULL,x_91 = NULL,y_91 = NULL,z_91 = NULL;
  v_91 = t;
  s_91 :
  if(match_cons(v_91, sym_TCons_2))
    {
      w_91 = ATgetArgument(v_91, 0);
      x_91 = ATgetArgument(v_91, 1);
      t_91 :
      if(match_cons(x_91, sym_TCons_2))
        {
          y_91 = ATgetArgument(x_91, 0);
          z_91 = ATgetArgument(x_91, 1);
          u_91 :
          if(match_cons(z_91, sym_TNil_0))
            {
              t = not_null(w_91);
              {
                ATerm e_92 (ATerm t)
                {
                  ATerm s_14 = t;
                  if(PushChoice()==0)
                    {
                      ATerm c_92 = NULL;
                      c_92 = t;
                      r_91 :
                      if(match_cons(c_92, sym_Nil_0))
                        t = not_null(y_91);
                      else
                        _fail(t);
                      PopChoice();
                    }
                  else
                    {
                      t = s_14;
                      {
                        ATerm t_14 = t;
                        if(PushChoice()==0)
                          {
                            ATerm a_3 (ATerm t)
                            {
                              t = not_null(y_91);
                              return(t);
                            }
                            t = HdMember_1(t, a_3);
                            t = e_92(t);
                            PopChoice();
                          }
                        else
                          {
                            t = t_14;
                            t = Cons_2(t, _id, e_92);
                          }
                      }
                    }
                  return(t);
                }
                t = e_92(t);
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
  ATerm i_92 = NULL,j_92 = NULL,k_92 = NULL;
  i_92 = t;
  h_92 :
  if(match_cons(i_92, sym_Cons_2))
    {
      j_92 = ATgetArgument(i_92, 0);
      k_92 = ATgetArgument(i_92, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_92), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_92), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm x_71 (ATerm), ATerm y_71 (ATerm))
{
  ATerm u_92 (ATerm t)
  {
    ATerm u_14 = t;
    if(PushChoice()==0)
      {
        ATerm r_92 = NULL;
        r_92 = t;
        p_92 :
        if(match_cons(r_92, sym_Nil_0))
          t = x_71(t);
        else
          _fail(t);
        PopChoice();
      }
    else
      {
        t = u_14;
        t = FoldR_0(t);
        {
          ATerm b_3 (ATerm t)
          {
            ATerm c_3 (ATerm t)
            {
              ATerm s_92 = NULL;
              s_92 = t;
              q_92 :
              if(!(match_cons(s_92, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, u_92, c_3);
            return(t);
          }
          t = TCons_2(t, _id, b_3);
          t = y_71(t);
        }
      }
    return(t);
  }
  t = u_92(t);
  return(t);
}
ATerm unions_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = foldr_2(t, d_3, union_0);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm h_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL,r_93 = NULL,s_93 = NULL,t_93 = NULL;
  h_93 = t;
  x_92 :
  if(match_cons(h_93, sym_TCons_2))
    {
      i_93 = ATgetArgument(h_93, 0);
      n_93 = ATgetArgument(h_93, 1);
      y_92 :
      if(match_cons(i_93, sym_TCons_2))
        {
          j_93 = ATgetArgument(i_93, 0);
          k_93 = ATgetArgument(i_93, 1);
          z_92 :
          if(match_cons(k_93, sym_TCons_2))
            {
              l_93 = ATgetArgument(k_93, 0);
              m_93 = ATgetArgument(k_93, 1);
              a_93 :
              if(match_cons(m_93, sym_TNil_0))
                {
                  b_93 :
                  if(match_cons(n_93, sym_TCons_2))
                    {
                      o_93 = ATgetArgument(n_93, 0);
                      t_93 = ATgetArgument(n_93, 1);
                      c_93 :
                      if(match_cons(o_93, sym_TCons_2))
                        {
                          p_93 = ATgetArgument(o_93, 0);
                          q_93 = ATgetArgument(o_93, 1);
                          d_93 :
                          if(match_cons(q_93, sym_TCons_2))
                            {
                              r_93 = ATgetArgument(q_93, 0);
                              s_93 = ATgetArgument(q_93, 1);
                              e_93 :
                              if(match_cons(s_93, sym_TNil_0))
                                {
                                  g_93 :
                                  if(match_cons(t_93, sym_TNil_0))
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_93), not_null(p_93)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_93), not_null(r_93)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm b_94 = NULL,c_94 = NULL,d_94 = NULL;
  b_94 = t;
  a_94 :
  if(match_cons(b_94, sym_Cons_2))
    {
      c_94 = ATgetArgument(b_94, 0);
      d_94 = ATgetArgument(b_94, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_94), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_94), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm j_94 = NULL;
  j_94 = t;
  i_94 :
  if(match_cons(j_94, sym_Nil_0))
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
ATerm list_1 (ATerm t, ATerm p_76 (ATerm))
{
  ATerm n_94 (ATerm t)
  {
    ATerm x_14 = t;
    if(PushChoice()==0)
      {
        ATerm m_94 = NULL;
        m_94 = t;
        l_94 :
        if(!(match_cons(m_94, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = x_14;
        t = Cons_2(t, p_76, n_94);
      }
    return(t);
  }
  t = n_94(t);
  return(t);
}
ATerm CollectSplit_2 (ATerm t, ATerm n_74 (ATerm), ATerm o_74 (ATerm))
{
  ATerm f_95 = NULL;
  ATerm h_95 = NULL,i_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL,g_96 = NULL;
  f_95 = t;
  {
    ATerm y_14;
    y_14 = t;
    {
      ATerm j_95 = NULL;
      ATerm l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL;
      t = not_null(f_95);
      j_95 = t;
      t = SSL_explode_term(not_null(j_95));
      l_95 = t;
      r_94 :
      if(match_cons(l_95, sym_TCons_2))
        {
          m_95 = ATgetArgument(l_95, 0);
          n_95 = ATgetArgument(l_95, 1);
          s_94 :
          if(match_cons(n_95, sym_TCons_2))
            {
              o_95 = ATgetArgument(n_95, 0);
              p_95 = ATgetArgument(n_95, 1);
              t_94 :
              if(match_cons(p_95, sym_TNil_0))
                {
                  if(h_95 != NULL && h_95 != m_95)
                    _fail(m_95);
                  else
                    h_95 = m_95;
                  if(i_95 != NULL && i_95 != o_95)
                    _fail(o_95);
                  else
                    i_95 = o_95;
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
    t = y_14;
    {
      ATerm u_95 = NULL,v_95 = NULL,w_95 = NULL,x_95 = NULL,y_95 = NULL;
      t = not_null(i_95);
      t = list_1(t, n_74);
      t = unzip_0(t);
      u_95 = t;
      a_95 :
      if(match_cons(u_95, sym_TCons_2))
        {
          v_95 = ATgetArgument(u_95, 0);
          w_95 = ATgetArgument(u_95, 1);
          b_95 :
          if(match_cons(w_95, sym_TCons_2))
            {
              x_95 = ATgetArgument(w_95, 0);
              y_95 = ATgetArgument(w_95, 1);
              c_95 :
              if(match_cons(y_95, sym_TNil_0))
                {
                  ATerm z_95 = NULL;
                  if(r_95 != NULL && r_95 != v_95)
                    _fail(v_95);
                  else
                    r_95 = v_95;
                  if(q_95 != NULL && q_95 != x_95)
                    _fail(x_95);
                  else
                    q_95 = x_95;
                  {
                    ATerm b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL;
                    t = SSL_mkterm(not_null(h_95), not_null(r_95));
                    z_95 = t;
                    t = o_74(t);
                    b_96 = t;
                    x_94 :
                    if(match_cons(b_96, sym_TCons_2))
                      {
                        c_96 = ATgetArgument(b_96, 0);
                        d_96 = ATgetArgument(b_96, 1);
                        y_94 :
                        if(match_cons(d_96, sym_TCons_2))
                          {
                            e_96 = ATgetArgument(d_96, 0);
                            f_96 = ATgetArgument(d_96, 1);
                            z_94 :
                            if(match_cons(f_96, sym_TNil_0))
                              {
                                if(s_95 != NULL && s_95 != c_96)
                                  _fail(c_96);
                                else
                                  s_95 = c_96;
                                if(t_95 != NULL && t_95 != e_96)
                                  _fail(e_96);
                                else
                                  t_95 = e_96;
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
      t = not_null(q_95);
      {
        ATerm i_96 = NULL;
        t = unions_0(t);
        g_96 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_95), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_96), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = union_0(t);
        i_96 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_95), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_96), (ATerm) ATmakeAppl(sym_TNil_0)));
      }
    }
  }
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm t_96 = NULL;
  t_96 = t;
  t = SSL_is_int(not_null(t_96));
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm x_96 = NULL;
  x_96 = t;
  t = SSL_is_string(not_null(x_96));
  return(t);
}
ATerm collect_split_1 (ATerm t, ATerm j_74 (ATerm))
{
  ATerm a_97 (ATerm t)
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
        t = j_74(t);
        PopChoice();
      }
    else
      {
        t = z_14;
        t = CollectSplit_2(t, a_97, j_74);
      }
    return(t);
  }
  t = a_97(t);
  return(t);
}
ATerm collect_split_2 (ATerm t, ATerm l_74 (ATerm), ATerm m_74 (ATerm))
{
  ATerm i_3 (ATerm t)
  {
    ATerm j_3 (ATerm t)
    {
      ATerm c_15 = t;
      if(PushChoice()==0)
        {
          t = l_74(t);
          PopChoice();
        }
      else
        t = c_15;
      return(t);
    }
    ATerm k_3 (ATerm t)
    {
      ATerm d_15 = t;
      if(PushChoice()==0)
        {
          t = m_74(t);
          PopChoice();
        }
      else
        {
          t = d_15;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      return(t);
    }
    t = split_2(t, j_3, k_3);
    return(t);
  }
  t = collect_split_1(t, i_3);
  return(t);
}
ATerm collect_substitutions_0 (ATerm t)
{
  t = collect_split_2(t, IgnoreVar_0, CollectSubst_0);
  return(t);
}
ATerm Annotate_1 (ATerm t, ATerm z_83 (ATerm))
{
  ATerm g_97 = NULL,h_97 = NULL,i_97 = NULL,j_97 = NULL,k_97 = NULL;
  g_97 = t;
  d_97 :
  if(match_cons(g_97, sym_TCons_2))
    {
      h_97 = ATgetArgument(g_97, 0);
      i_97 = ATgetArgument(g_97, 1);
      e_97 :
      if(match_cons(i_97, sym_TCons_2))
        {
          j_97 = ATgetArgument(i_97, 0);
          k_97 = ATgetArgument(i_97, 1);
          f_97 :
          if(match_cons(k_97, sym_TNil_0))
            {
              ATerm n_97 = NULL;
              ATerm o_97 = NULL;
              t = z_83(t);
              o_97 = t;
              if(n_97 != NULL && n_97 != o_97)
                _fail(o_97);
              else
                n_97 = o_97;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_97), not_null(n_97))), not_null(j_97));
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
  ATerm v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL,z_97 = NULL;
  v_97 = t;
  s_97 :
  if(match_cons(v_97, sym_TCons_2))
    {
      w_97 = ATgetArgument(v_97, 0);
      x_97 = ATgetArgument(v_97, 1);
      t_97 :
      if(match_cons(x_97, sym_TCons_2))
        {
          y_97 = ATgetArgument(x_97, 0);
          z_97 = ATgetArgument(x_97, 1);
          u_97 :
          if(match_cons(z_97, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_97), not_null(y_97));
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
  ATerm h_98 = NULL,i_98 = NULL,j_98 = NULL,k_98 = NULL,l_98 = NULL;
  h_98 = t;
  e_98 :
  if(match_cons(h_98, sym_TCons_2))
    {
      i_98 = ATgetArgument(h_98, 0);
      j_98 = ATgetArgument(h_98, 1);
      f_98 :
      if(match_cons(j_98, sym_TCons_2))
        {
          k_98 = ATgetArgument(j_98, 0);
          l_98 = ATgetArgument(j_98, 1);
          g_98 :
          if(match_cons(l_98, sym_TNil_0))
            {
              ATerm e_15 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(i_98), not_null(k_98));
                  PopChoice();
                }
              else
                {
                  t = e_15;
                  t = SSL_addr(not_null(i_98), not_null(k_98));
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
  ATerm v_98 = NULL,w_98 = NULL,x_98 = NULL,y_98 = NULL,z_98 = NULL,a_99 = NULL,b_99 = NULL;
  v_98 = t;
  r_98 :
  if(match_cons(v_98, sym_TCons_2))
    {
      w_98 = ATgetArgument(v_98, 0);
      x_98 = ATgetArgument(v_98, 1);
      s_98 :
      if(match_cons(x_98, sym_TCons_2))
        {
          y_98 = ATgetArgument(x_98, 0);
          b_99 = ATgetArgument(x_98, 1);
          t_98 :
          if(match_cons(y_98, sym_Cons_2))
            {
              z_98 = ATgetArgument(y_98, 0);
              a_99 = ATgetArgument(y_98, 1);
              u_98 :
              if(match_cons(b_99, sym_TNil_0))
                {
                  ATerm f_99 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_98), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = add_0(t);
                  f_99 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(w_98), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_98), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(f_99), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_99), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm o_99 = NULL,p_99 = NULL,q_99 = NULL,r_99 = NULL,s_99 = NULL;
  o_99 = t;
  k_99 :
  if(match_cons(o_99, sym_TCons_2))
    {
      p_99 = ATgetArgument(o_99, 0);
      q_99 = ATgetArgument(o_99, 1);
      l_99 :
      if(match_cons(q_99, sym_TCons_2))
        {
          r_99 = ATgetArgument(q_99, 0);
          s_99 = ATgetArgument(q_99, 1);
          m_99 :
          if(match_cons(r_99, sym_Nil_0))
            {
              n_99 :
              if(match_cons(s_99, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm c_75 (ATerm))
{
  ATerm y_99 (ATerm t)
  {
    ATerm f_15 = t;
    if(PushChoice()==0)
      {
        t = z_74(t);
        PopChoice();
      }
    else
      {
        t = f_15;
        t = a_75(t);
        {
          ATerm l_3 (ATerm t)
          {
            ATerm q_3 (ATerm t)
            {
              ATerm x_99 = NULL;
              x_99 = t;
              w_99 :
              if(!(match_cons(x_99, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, y_99, q_3);
            return(t);
          }
          t = TCons_2(t, c_75, l_3);
          t = b_75(t);
        }
      }
    return(t);
  }
  t = y_99(t);
  return(t);
}
ATerm NZip00_0 (ATerm t)
{
  ATerm a_100 = NULL;
  a_100 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_100), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm nzip0_1 (ATerm t, ATerm k_75 (ATerm))
{
  t = NZip00_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, k_75);
  return(t);
}
ATerm Propagate_0 (ATerm t)
{
  ATerm n_100 = NULL,o_100 = NULL,p_100 = NULL,q_100 = NULL,r_100 = NULL,s_100 = NULL,t_100 = NULL;
  ATerm j_101 (ATerm t)
  {
    ATerm e_101 = NULL;
    ATerm f_101 = NULL;
    t = not_null(t_100);
    {
      ATerm d_4 (ATerm t)
      {
        ATerm e_4 (ATerm t)
        {
          t = not_null(s_100);
          return(t);
        }
        t = Annotate_1(t, e_4);
        return(t);
      }
      t = nzip0_1(t, d_4);
      f_101 = t;
      if(e_101 != NULL && e_101 != f_101)
        _fail(f_101);
      else
        e_101 = f_101;
    }
    t = not_null(e_101);
    return(t);
  }
  q_100 = t;
  j_100 :
  if(match_cons(q_100, sym_As_2))
    {
      r_100 = ATgetArgument(q_100, 0);
      t_100 = ATgetArgument(q_100, 1);
      k_100 :
      if(match_cons(r_100, sym_Off_1))
        {
          s_100 = ATgetArgument(r_100, 0);
          l_100 :
          if(match_cons(t_100, sym_Op_2))
            {
              p_100 = ATgetArgument(t_100, 0);
              o_100 = ATgetArgument(t_100, 1);
              {
                ATerm g_15 = t;
                if(PushChoice()==0)
                  {
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(s_100)), (ATerm) ATmakeAppl(sym_Op_2, not_null(p_100), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(s_100)), not_null(o_100))));
                    PopChoice();
                  }
                else
                  {
                    t = g_15;
                    t = j_101(t);
                  }
              }
            }
          else
            {
              if(match_cons(t_100, sym_As_2))
                {
                  p_100 = ATgetArgument(t_100, 0);
                  o_100 = ATgetArgument(t_100, 1);
                  m_100 :
                  if(match_cons(p_100, sym_Var_1))
                    {
                      n_100 = ATgetArgument(p_100, 0);
                      {
                        ATerm h_15 = t;
                        if(PushChoice()==0)
                          {
                            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_100)), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(s_100)), not_null(o_100)));
                            PopChoice();
                          }
                        else
                          {
                            t = h_15;
                            t = j_101(t);
                          }
                      }
                    }
                  else
                    t = j_101(t);
                }
              else
                {
                  if(match_cons(t_100, sym_BuildDefault_1))
                    {
                      p_100 = ATgetArgument(t_100, 0);
                      {
                        ATerm i_15 = t;
                        if(PushChoice()==0)
                          {
                            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(s_100)), (ATerm) ATmakeAppl(sym_Wld_0));
                            PopChoice();
                          }
                        else
                          {
                            t = i_15;
                            t = j_101(t);
                          }
                      }
                    }
                  else
                    t = j_101(t);
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
ATerm topdown_1 (ATerm t, ATerm f_79 (ATerm))
{
  ATerm l_101 (ATerm t)
  {
    t = f_79(t);
    t = _all(t, l_101);
    return(t);
  }
  t = l_101(t);
  return(t);
}
ATerm term_to_matrix_0 (ATerm t)
{
  ATerm s_101 = NULL;
  ATerm u_101 = NULL,v_101 = NULL,w_101 = NULL,x_101 = NULL,y_101 = NULL;
  s_101 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_101), (ATerm) ATmakeAppl(sym_Nil_0)));
  {
    ATerm f_4 (ATerm t)
    {
      ATerm j_15 = t;
      if(PushChoice()==0)
        {
          t = Propagate_0(t);
          PopChoice();
        }
      else
        t = j_15;
      return(t);
    }
    t = topdown_1(t, f_4);
    t = collect_substitutions_0(t);
    u_101 = t;
    p_101 :
    if(match_cons(u_101, sym_TCons_2))
      {
        v_101 = ATgetArgument(u_101, 0);
        w_101 = ATgetArgument(u_101, 1);
        q_101 :
        if(match_cons(w_101, sym_TCons_2))
          {
            x_101 = ATgetArgument(w_101, 0);
            y_101 = ATgetArgument(w_101, 1);
            r_101 :
            if(match_cons(y_101, sym_TNil_0))
              {
                ATerm b_102 = NULL;
                t = not_null(v_101);
                t = collect_offsets_0(t);
                b_102 = t;
                t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(b_102), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Row_2, not_null(v_101), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(x_101))), (ATerm) ATmakeAppl(sym_Nil_0)));
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
  ATerm i_102 = NULL,j_102 = NULL;
  i_102 = t;
  h_102 :
  if(match_cons(i_102, sym_Match_1))
    {
      j_102 = ATgetArgument(i_102, 0);
      t = not_null(j_102);
      t = term_to_matrix_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm x_66 (ATerm), ATerm y_66 (ATerm))
{
  ATerm m_102 (ATerm t)
  {
    ATerm k_15 = t;
    if(PushChoice()==0)
      {
        t = x_66(t);
        t = m_102(t);
        PopChoice();
      }
    else
      {
        t = k_15;
        t = y_66(t);
      }
    return(t);
  }
  t = m_102(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm a_67 (ATerm))
{
  t = repeat_2(t, a_67, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm j_79 (ATerm))
{
  ATerm n_102 (ATerm t)
  {
    t = j_79(t);
    t = _all(t, n_102);
    t = j_79(t);
    return(t);
  }
  t = n_102(t);
  return(t);
}
ATerm match_to_matrix_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm o_4 (ATerm t)
    {
      ATerm l_15 = t;
      if(PushChoice()==0)
        {
          t = MatchToMatrix_0(t);
          PopChoice();
        }
      else
        {
          t = l_15;
          {
            ATerm m_15 = t;
            if(PushChoice()==0)
              {
                t = MatrixMerge_0(t);
                PopChoice();
              }
            else
              {
                t = m_15;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, o_4);
    return(t);
  }
  t = downup_1(t, n_4);
  return(t);
}
ATerm match_to_dfa_0 (ATerm t)
{
  t = match_to_matrix_0(t);
  t = matrix_to_dfa_0(t);
  t = strename_0(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm v_60 (ATerm), ATerm w_60 (ATerm), ATerm x_60 (ATerm))
{
  ATerm t_102 = NULL,u_102 = NULL,v_102 = NULL,w_102 = NULL;
  t_102 = t;
  s_102 :
  if(match_cons(t_102, sym_SDef_3))
    {
      u_102 = ATgetArgument(t_102, 0);
      v_102 = ATgetArgument(t_102, 1);
      w_102 = ATgetArgument(t_102, 2);
      {
        ATerm a_103 = NULL;
        t = not_null(u_102);
        {
          ATerm c_103 = NULL;
          t = v_60(t);
          a_103 = t;
          t = not_null(v_102);
          {
            ATerm e_103 = NULL;
            t = w_60(t);
            c_103 = t;
            t = not_null(w_102);
            t = x_60(t);
            e_103 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(a_103), not_null(c_103), not_null(e_103));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm n_76 (ATerm))
{
  ATerm m_103 (ATerm t)
  {
    ATerm n_15 = t;
    if(PushChoice()==0)
      {
        ATerm l_103 = NULL;
        l_103 = t;
        k_103 :
        if(!(match_cons(l_103, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = n_15;
        t = Cons_2(t, n_76, m_103);
      }
    return(t);
  }
  t = m_103(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm q_59 (ATerm))
{
  ATerm q_103 = NULL,r_103 = NULL;
  q_103 = t;
  p_103 :
  if(match_cons(q_103, sym_Strategies_1))
    {
      r_103 = ATgetArgument(q_103, 0);
      {
        ATerm t_103 = NULL;
        t = not_null(r_103);
        t = q_59(t);
        t_103 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(t_103));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm s_59 (ATerm))
{
  ATerm a_104 = NULL,b_104 = NULL;
  a_104 = t;
  z_103 :
  if(match_cons(a_104, sym_Specification_1))
    {
      b_104 = ATgetArgument(a_104, 0);
      {
        ATerm d_104 = NULL;
        t = not_null(b_104);
        t = s_59(t);
        d_104 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(d_104));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm a_84 (ATerm))
{
  ATerm p_4 (ATerm t)
  {
    ATerm q_4 (ATerm t)
    {
      ATerm r_4 (ATerm t)
      {
        ATerm t_4 (ATerm t)
        {
          ATerm u_4 (ATerm t)
          {
            t = SDef_3(t, _id, _id, a_84);
            return(t);
          }
          t = map_1(t, u_4);
          return(t);
        }
        t = Strategies_1(t, t_4);
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        ATerm i_104 = NULL;
        i_104 = t;
        h_104 :
        if(!(match_cons(i_104, sym_Nil_0)))
          _fail(t);
        return(t);
      }
      t = Cons_2(t, r_4, s_4);
      return(t);
    }
    t = Cons_2(t, _id, q_4);
    return(t);
  }
  t = Specification_1(t, p_4);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm k_104 = NULL;
  k_104 = t;
  j_104 :
  if(!(match_cons(k_104, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm a_62 (ATerm), ATerm b_62 (ATerm))
{
  ATerm p_104 = NULL,q_104 = NULL,r_104 = NULL;
  p_104 = t;
  o_104 :
  if(match_cons(p_104, sym_TCons_2))
    {
      q_104 = ATgetArgument(p_104, 0);
      r_104 = ATgetArgument(p_104, 1);
      {
        ATerm u_104 = NULL;
        t = not_null(q_104);
        {
          ATerm w_104 = NULL;
          t = a_62(t);
          u_104 = t;
          t = not_null(r_104);
          t = b_62(t);
          w_104 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_104), not_null(w_104));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm d_105 = NULL;
  ATerm o_15;
  o_15 = t;
  {
    ATerm z_4 (ATerm t)
    {
      ATerm e_105 = NULL,f_105 = NULL;
      e_105 = t;
      c_105 :
      if(match_cons(e_105, sym_Program_1))
        {
          f_105 = ATgetArgument(e_105, 0);
          if(d_105 != NULL && d_105 != f_105)
            _fail(f_105);
          else
            d_105 = f_105;
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1(t, z_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_105), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = o_15;
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
  ATerm i_105 = NULL;
  i_105 = t;
  t = SSL_exit(not_null(i_105));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm p_105 = NULL,q_105 = NULL,r_105 = NULL,s_105 = NULL,t_105 = NULL;
  p_105 = t;
  m_105 :
  if(match_cons(p_105, sym_TCons_2))
    {
      q_105 = ATgetArgument(p_105, 0);
      r_105 = ATgetArgument(p_105, 1);
      n_105 :
      if(match_cons(r_105, sym_TCons_2))
        {
          s_105 = ATgetArgument(r_105, 0);
          t_105 = ATgetArgument(r_105, 1);
          o_105 :
          if(match_cons(t_105, sym_TNil_0))
            {
              ATerm p_15;
              p_15 = t;
              t = SSL_printnl(not_null(q_105), not_null(s_105));
              t = p_15;
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
ATerm try_1 (ATerm t, ATerm u_78 (ATerm))
{
  ATerm q_15 = t;
  if(PushChoice()==0)
    {
      t = u_78(t);
      PopChoice();
    }
  else
    t = q_15;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm f_106 = NULL,g_106 = NULL;
  ATerm r_15 = t;
  if(PushChoice()==0)
    {
      ATerm a_5 (ATerm t)
      {
        ATerm s_15 = t;
        if(PushChoice()==0)
          {
            ATerm e_5 (ATerm t)
            {
              ATerm h_106 = NULL;
              h_106 = t;
              x_105 :
              if(!(match_cons(h_106, sym_Silent_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, e_5);
            PopChoice();
            _fail(t);
          }
        else
          t = s_15;
        return(t);
      }
      ATerm c_5 (ATerm t)
      {
        ATerm f_5 (ATerm t)
        {
          ATerm i_106 = NULL;
          i_106 = t;
          y_105 :
          if(!(match_cons(i_106, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, f_5);
        return(t);
      }
      t = TCons_2(t, a_5, c_5);
      {
        ATerm g_5 (ATerm t)
        {
          ATerm i_5 (ATerm t)
          {
            ATerm j_106 = NULL,k_106 = NULL;
            j_106 = t;
            a_106 :
            if(match_cons(j_106, sym_Runtime_1))
              {
                k_106 = ATgetArgument(j_106, 0);
                if(g_106 != NULL && g_106 != k_106)
                  _fail(k_106);
                else
                  g_106 = k_106;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, i_5);
          return(t);
        }
        ATerm h_5 (ATerm t)
        {
          ATerm j_5 (ATerm t)
          {
            ATerm l_106 = NULL;
            l_106 = t;
            b_106 :
            if(!(match_cons(l_106, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, j_5);
          return(t);
        }
        t = TCons_2(t, g_5, h_5);
        {
          ATerm k_5 (ATerm t)
          {
            ATerm q_5 (ATerm t)
            {
              ATerm m_106 = NULL,n_106 = NULL;
              m_106 = t;
              d_106 :
              if(match_cons(m_106, sym_Program_1))
                {
                  n_106 = ATgetArgument(m_106, 0);
                  if(f_106 != NULL && f_106 != n_106)
                    _fail(n_106);
                  else
                    f_106 = n_106;
                }
              else
                _fail(t);
              return(t);
            }
            t = fetch_1(t, q_5);
            return(t);
          }
          ATerm p_5 (ATerm t)
          {
            ATerm s_5 (ATerm t)
            {
              ATerm o_106 = NULL;
              o_106 = t;
              e_106 :
              if(!(match_cons(o_106, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, _id, s_5);
            return(t);
          }
          t = TCons_2(t, k_5, p_5);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_106), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_106), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      PopChoice();
    }
  else
    t = r_15;
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm v_106 = NULL,w_106 = NULL,x_106 = NULL,y_106 = NULL,z_106 = NULL;
  v_106 = t;
  s_106 :
  if(match_cons(v_106, sym_TCons_2))
    {
      w_106 = ATgetArgument(v_106, 0);
      x_106 = ATgetArgument(v_106, 1);
      t_106 :
      if(match_cons(x_106, sym_TCons_2))
        {
          y_106 = ATgetArgument(x_106, 0);
          z_106 = ATgetArgument(x_106, 1);
          u_106 :
          if(match_cons(z_106, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(w_106), not_null(y_106));
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
  ATerm h_107 = NULL,i_107 = NULL,j_107 = NULL,k_107 = NULL,l_107 = NULL;
  h_107 = t;
  e_107 :
  if(match_cons(h_107, sym_TCons_2))
    {
      i_107 = ATgetArgument(h_107, 0);
      j_107 = ATgetArgument(h_107, 1);
      f_107 :
      if(match_cons(j_107, sym_TCons_2))
        {
          k_107 = ATgetArgument(j_107, 0);
          l_107 = ATgetArgument(j_107, 1);
          g_107 :
          if(match_cons(l_107, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(i_107), not_null(k_107));
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
  ATerm x_107 = NULL;
  ATerm e_16;
  e_16 = t;
  {
    ATerm u_5 (ATerm t)
    {
      ATerm g_16 = t;
      if(PushChoice()==0)
        {
          ATerm w_5 (ATerm t)
          {
            ATerm y_107 = NULL,z_107 = NULL;
            y_107 = t;
            q_107 :
            if(match_cons(y_107, sym_Output_1))
              {
                z_107 = ATgetArgument(y_107, 0);
                if(x_107 != NULL && x_107 != z_107)
                  _fail(z_107);
                else
                  x_107 = z_107;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, w_5);
          PopChoice();
        }
      else
        {
          t = g_16;
          {
            ATerm a_108 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            a_108 = t;
            if(x_107 != NULL && x_107 != a_108)
              _fail(a_108);
            else
              x_107 = a_108;
          }
        }
      return(t);
    }
    ATerm v_5 (ATerm t)
    {
      ATerm x_5 (ATerm t)
      {
        ATerm b_108 = NULL;
        b_108 = t;
        s_107 :
        if(!(match_cons(b_108, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, _id, x_5);
      return(t);
    }
    t = TCons_2(t, u_5, v_5);
  }
  t = e_16;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm d_6 (ATerm t)
      {
        ATerm f_6 (ATerm t)
        {
          t = not_null(x_107);
          return(t);
        }
        t = split_2(t, f_6, _id);
        return(t);
      }
      ATerm e_6 (ATerm t)
      {
        ATerm c_108 = NULL;
        c_108 = t;
        t_107 :
        if(!(match_cons(c_108, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, d_6, e_6);
      return(t);
    }
    t = TCons_2(t, _id, y_5);
    {
      ATerm i_16 = t;
      if(PushChoice()==0)
        {
          ATerm g_6 (ATerm t)
          {
            ATerm o_6 (ATerm t)
            {
              ATerm d_108 = NULL;
              d_108 = t;
              u_107 :
              if(!(match_cons(d_108, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, o_6);
            return(t);
          }
          ATerm h_6 (ATerm t)
          {
            ATerm p_6 (ATerm t)
            {
              ATerm e_108 = NULL;
              e_108 = t;
              v_107 :
              if(!(match_cons(e_108, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, WriteToBinaryFile_0, p_6);
            return(t);
          }
          t = TCons_2(t, g_6, h_6);
          PopChoice();
        }
      else
        {
          t = i_16;
          {
            ATerm q_6 (ATerm t)
            {
              ATerm u_6 (ATerm t)
              {
                ATerm f_108 = NULL;
                f_108 = t;
                w_107 :
                if(!(match_cons(f_108, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, WriteToTextFile_0, u_6);
              return(t);
            }
            t = TCons_2(t, _id, q_6);
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
ATerm apply_strategy_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm n_108 = NULL,p_108 = NULL,q_108 = NULL,r_108 = NULL,s_108 = NULL,t_108 = NULL;
  ATerm m_16;
  m_16 = t;
  t = dtime_0(t);
  t = m_16;
  t = d_65(t);
  {
    ATerm s_16;
    s_16 = t;
    {
      ATerm o_108 = NULL;
      t = dtime_0(t);
      o_108 = t;
      if(n_108 != NULL && n_108 != o_108)
        _fail(o_108);
      else
        n_108 = o_108;
    }
    t = s_16;
    p_108 = t;
    k_108 :
    if(match_cons(p_108, sym_TCons_2))
      {
        q_108 = ATgetArgument(p_108, 0);
        r_108 = ATgetArgument(p_108, 1);
        l_108 :
        if(match_cons(r_108, sym_TCons_2))
          {
            s_108 = ATgetArgument(r_108, 0);
            t_108 = ATgetArgument(r_108, 1);
            m_108 :
            if(match_cons(t_108, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(n_108)), not_null(q_108)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_108), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm z_108 = NULL;
  z_108 = t;
  t = SSL_ReadFromFile(not_null(z_108));
  return(t);
}
ATerm split_2 (ATerm t, ATerm c_78 (ATerm), ATerm d_78 (ATerm))
{
  ATerm f_109 = NULL;
  ATerm h_109 = NULL;
  f_109 = t;
  {
    ATerm j_109 = NULL;
    t = c_78(t);
    h_109 = t;
    t = not_null(f_109);
    t = d_78(t);
    j_109 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_109), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_109), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm r_109 = NULL;
  ATerm b_17;
  b_17 = t;
  {
    ATerm c_17 = t;
    if(PushChoice()==0)
      {
        ATerm v_6 (ATerm t)
        {
          ATerm s_109 = NULL,t_109 = NULL;
          s_109 = t;
          p_109 :
          if(match_cons(s_109, sym_Input_1))
            {
              t_109 = ATgetArgument(s_109, 0);
              if(r_109 != NULL && r_109 != t_109)
                _fail(t_109);
              else
                r_109 = t_109;
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1(t, v_6);
        PopChoice();
      }
    else
      {
        t = c_17;
        {
          ATerm u_109 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          u_109 = t;
          if(r_109 != NULL && r_109 != u_109)
            _fail(u_109);
          else
            r_109 = u_109;
        }
      }
  }
  t = b_17;
  {
    ATerm w_6 (ATerm t)
    {
      t = not_null(r_109);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm y_109 = NULL;
  y_109 = t;
  x_109 :
  if(!(match_cons(y_109, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_56 (ATerm))
{
  ATerm c_110 = NULL,d_110 = NULL;
  c_110 = t;
  b_110 :
  if(match_cons(c_110, sym_Undefined_1))
    {
      d_110 = ATgetArgument(c_110, 0);
      {
        ATerm f_110 = NULL;
        t = not_null(d_110);
        t = g_56(t);
        f_110 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_110));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_110 = NULL;
  k_110 = t;
  j_110 :
  if(!(match_cons(k_110, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm w_76 (ATerm))
{
  ATerm l_110 (ATerm t)
  {
    ATerm e_17 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, w_76, _id);
        PopChoice();
      }
    else
      {
        t = e_17;
        t = Cons_2(t, _id, l_110);
      }
    return(t);
  }
  t = l_110(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm h_64 (ATerm))
{
  t = fetch_1(t, h_64);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_65 (ATerm))
{
  ATerm x_6 (ATerm t)
  {
    ATerm f_17 = t;
    if(PushChoice()==0)
      {
        ATerm o_110 = NULL;
        o_110 = t;
        m_110 :
        if(!(match_cons(o_110, sym_Help_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = f_17;
        {
          ATerm h_17 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = h_17;
              {
                ATerm p_110 = NULL;
                p_110 = t;
                n_110 :
                if(!(match_cons(p_110, sym_Version_0)))
                  _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, x_6);
  t = c_65(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_110 = NULL,w_110 = NULL,x_110 = NULL;
  ATerm l_17;
  l_17 = t;
  {
    ATerm y_110 = NULL,z_110 = NULL,a_111 = NULL,b_111 = NULL,c_111 = NULL,d_111 = NULL,e_111 = NULL;
    y_110 = t;
    r_110 :
    if(match_cons(y_110, sym_TCons_2))
      {
        z_110 = ATgetArgument(y_110, 0);
        a_111 = ATgetArgument(y_110, 1);
        s_110 :
        if(match_cons(a_111, sym_TCons_2))
          {
            b_111 = ATgetArgument(a_111, 0);
            c_111 = ATgetArgument(a_111, 1);
            t_110 :
            if(match_cons(c_111, sym_TCons_2))
              {
                d_111 = ATgetArgument(c_111, 0);
                e_111 = ATgetArgument(c_111, 1);
                u_110 :
                if(match_cons(e_111, sym_TNil_0))
                  {
                    if(v_110 != NULL && v_110 != z_110)
                      _fail(z_110);
                    else
                      v_110 = z_110;
                    if(w_110 != NULL && w_110 != b_111)
                      _fail(b_111);
                    else
                      w_110 = b_111;
                    if(x_110 != NULL && x_110 != d_111)
                      _fail(d_111);
                    else
                      x_110 = d_111;
                    t = SSL_table_put(not_null(v_110), not_null(w_110), not_null(x_110));
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
  t = l_17;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm h_111 = NULL;
  h_111 = t;
  t = SSL_table_create(not_null(h_111));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm l_111 = NULL;
  l_111 = t;
  {
    ATerm m_17;
    m_17 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_111), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = m_17;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm a_64 (ATerm), ATerm b_64 (ATerm))
{
  ATerm r_111 = NULL,s_111 = NULL,t_111 = NULL;
  r_111 = t;
  q_111 :
  if(match_cons(r_111, sym_Cons_2))
    {
      s_111 = ATgetArgument(r_111, 0);
      t_111 = ATgetArgument(r_111, 1);
      {
        ATerm w_111 = NULL;
        t = not_null(s_111);
        t = a_64(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = b_64(t);
        w_111 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_111), not_null(t_111));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm c_64 (ATerm), ATerm d_64 (ATerm))
{
  ATerm e_112 = NULL,f_112 = NULL,g_112 = NULL,h_112 = NULL,i_112 = NULL;
  e_112 = t;
  c_112 :
  if(match_cons(e_112, sym_Cons_2))
    {
      f_112 = ATgetArgument(e_112, 0);
      g_112 = ATgetArgument(e_112, 1);
      d_112 :
      if(match_cons(g_112, sym_Cons_2))
        {
          h_112 = ATgetArgument(g_112, 0);
          i_112 = ATgetArgument(g_112, 1);
          {
            ATerm m_112 = NULL;
            t = not_null(f_112);
            t = c_64(t);
            t = not_null(h_112);
            t = d_64(t);
            m_112 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_112), not_null(i_112));
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
  ATerm n_17 = t;
  if(PushChoice()==0)
    {
      ATerm y_6 (ATerm t)
      {
        ATerm k_113 = NULL;
        k_113 = t;
        q_112 :
        if(!(match_string(k_113, "-S")))
          _fail(t);
        return(t);
      }
      ATerm e_7 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, y_6, e_7);
      PopChoice();
    }
  else
    {
      t = n_17;
      {
        ATerm w_17 = t;
        if(PushChoice()==0)
          {
            ATerm f_7 (ATerm t)
            {
              ATerm l_113 = NULL;
              l_113 = t;
              r_112 :
              if(!(match_string(l_113, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm k_7 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, f_7, k_7);
            PopChoice();
          }
        else
          {
            t = w_17;
            {
              ATerm x_17 = t;
              if(PushChoice()==0)
                {
                  ATerm l_7 (ATerm t)
                  {
                    ATerm m_113 = NULL;
                    m_113 = t;
                    s_112 :
                    if(!(match_string(m_113, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm m_7 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, l_7, m_7);
                  PopChoice();
                }
              else
                {
                  t = x_17;
                  {
                    ATerm y_17 = t;
                    if(PushChoice()==0)
                      {
                        ATerm n_7 (ATerm t)
                        {
                          ATerm n_113 = NULL;
                          n_113 = t;
                          t_112 :
                          if(!(match_string(n_113, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm o_7 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, n_7, o_7);
                        PopChoice();
                      }
                    else
                      {
                        t = y_17;
                        {
                          ATerm z_17 = t;
                          if(PushChoice()==0)
                            {
                              ATerm p_7 (ATerm t)
                              {
                                ATerm o_113 = NULL;
                                o_113 = t;
                                u_112 :
                                if(!(match_string(o_113, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm q_7 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, p_7, q_7);
                              PopChoice();
                            }
                          else
                            {
                              t = z_17;
                              {
                                ATerm a_18 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm u_7 (ATerm t)
                                    {
                                      ATerm p_113 = NULL;
                                      p_113 = t;
                                      v_112 :
                                      if(!(match_string(p_113, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm w_7 (ATerm t)
                                    {
                                      ATerm q_113 = NULL;
                                      q_113 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(q_113));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, u_7, w_7);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = a_18;
                                    {
                                      ATerm b_18 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm x_7 (ATerm t)
                                          {
                                            ATerm s_113 = NULL;
                                            s_113 = t;
                                            x_112 :
                                            if(!(match_string(s_113, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm y_7 (ATerm t)
                                          {
                                            ATerm t_113 = NULL;
                                            t_113 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_113));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, x_7, y_7);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = b_18;
                                          {
                                            ATerm c_18 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm z_7 (ATerm t)
                                                {
                                                  ATerm v_113 = NULL;
                                                  v_113 = t;
                                                  z_112 :
                                                  if(!(match_string(v_113, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm a_8 (ATerm t)
                                                {
                                                  ATerm w_113 = NULL;
                                                  w_113 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_113));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, z_7, a_8);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = c_18;
                                                {
                                                  ATerm d_18 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm e_8 (ATerm t)
                                                      {
                                                        ATerm y_113 = NULL;
                                                        y_113 = t;
                                                        b_113 :
                                                        if(!(match_string(y_113, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm g_8 (ATerm t)
                                                      {
                                                        ATerm z_113 = NULL;
                                                        z_113 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_113));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, e_8, g_8);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = d_18;
                                                      {
                                                        ATerm e_18 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm h_8 (ATerm t)
                                                            {
                                                              ATerm b_114 = NULL;
                                                              b_114 = t;
                                                              d_113 :
                                                              if(!(match_string(b_114, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm i_8 (ATerm t)
                                                            {
                                                              ATerm c_114 = NULL;
                                                              c_114 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_114));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, h_8, i_8);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = e_18;
                                                            {
                                                              ATerm f_18 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm j_8 (ATerm t)
                                                                  {
                                                                    ATerm e_114 = NULL;
                                                                    e_114 = t;
                                                                    f_113 :
                                                                    if(!(match_string(e_114, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm k_8 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, j_8, k_8);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = f_18;
                                                                  {
                                                                    ATerm r_18 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm l_8 (ATerm t)
                                                                        {
                                                                          ATerm f_114 = NULL;
                                                                          f_114 = t;
                                                                          g_113 :
                                                                          if(!(match_string(f_114, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm q_8 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, l_8, q_8);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_18;
                                                                        {
                                                                          ATerm s_18 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm r_8 (ATerm t)
                                                                              {
                                                                                ATerm g_114 = NULL;
                                                                                g_114 = t;
                                                                                h_113 :
                                                                                if(!(match_string(g_114, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm t_8 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, r_8, t_8);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_18;
                                                                              {
                                                                                ATerm t_18 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm v_8 (ATerm t)
                                                                                    {
                                                                                      ATerm h_114 = NULL;
                                                                                      h_114 = t;
                                                                                      i_113 :
                                                                                      if(!(match_string(h_114, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm w_8 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, v_8, w_8);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = t_18;
                                                                                    {
                                                                                      ATerm x_8 (ATerm t)
                                                                                      {
                                                                                        ATerm i_114 = NULL;
                                                                                        i_114 = t;
                                                                                        j_113 :
                                                                                        if(!(match_string(i_114, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm y_8 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, x_8, y_8);
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
  ATerm q_114 = NULL,r_114 = NULL,s_114 = NULL;
  q_114 = t;
  p_114 :
  if(match_cons(q_114, sym_Cons_2))
    {
      r_114 = ATgetArgument(q_114, 0);
      s_114 = ATgetArgument(q_114, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_114)), not_null(s_114));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm e_62 (ATerm), ATerm f_62 (ATerm))
{
  ATerm a_115 = NULL,b_115 = NULL,c_115 = NULL;
  a_115 = t;
  z_114 :
  if(match_cons(a_115, sym_Cons_2))
    {
      b_115 = ATgetArgument(a_115, 0);
      c_115 = ATgetArgument(a_115, 1);
      {
        ATerm f_115 = NULL;
        t = not_null(b_115);
        {
          ATerm h_115 = NULL;
          t = e_62(t);
          f_115 = t;
          t = not_null(c_115);
          t = f_62(t);
          h_115 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_115), not_null(h_115));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm n_115 = NULL;
  n_115 = t;
  m_115 :
  if(!(match_cons(n_115, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_63 (ATerm))
{
  ATerm z_8 (ATerm t)
  {
    ATerm q_115 = NULL;
    q_115 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_115));
    return(t);
  }
  ATerm d_9 (ATerm t)
  {
    ATerm u_18 = t;
    if(PushChoice()==0)
      {
        ATerm w_18 = t;
        if(PushChoice()==0)
          {
            ATerm s_115 = NULL;
            s_115 = t;
            p_115 :
            if(!(match_cons(s_115, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = w_18;
            t = y_63(t);
            t = Cons_2(t, _id, d_9);
          }
        PopChoice();
      }
    else
      {
        t = u_18;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, z_8, d_9);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm r_64 (ATerm), ATerm s_64 (ATerm), ATerm t_64 (ATerm))
{
  ATerm e_9 (ATerm t)
  {
    ATerm y_18 = t;
    if(PushChoice()==0)
      {
        t = s_64(t);
        PopChoice();
      }
    else
      {
        t = y_18;
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
        t = need_help_1(t, t_64);
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
              t = apply_strategy_1(t, r_64);
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
ATerm iowrap_2 (ATerm t, ATerm m_64 (ATerm), ATerm n_64 (ATerm))
{
  t = iowrap_3(t, m_64, n_64, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm j_64 (ATerm))
{
  ATerm f_9 (ATerm t)
  {
    ATerm j_9 (ATerm t)
    {
      ATerm k_9 (ATerm t)
      {
        ATerm w_115 = NULL;
        w_115 = t;
        v_115 :
        if(!(match_cons(w_115, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, j_64, k_9);
      return(t);
    }
    t = TCons_2(t, _id, j_9);
    return(t);
  }
  t = iowrap_2(t, f_9, _fail);
  return(t);
}
ATerm compile_match_comp_0 (ATerm t)
{
  ATerm l_9 (ATerm t)
  {
    t = apply_to_bodies_1(t, match_to_dfa_0);
    return(t);
  }
  t = iowrap_1(t, l_9);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = compile_match_comp_0(t);
  return(t);
}
