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
ATerm spaste_1 (ATerm, ATerm h_84 (ATerm));
ATerm Rec_2 (ATerm, ATerm k_61 (ATerm), ATerm l_61 (ATerm));
ATerm Let_2 (ATerm, ATerm m_61 (ATerm), ATerm n_61 (ATerm));
ATerm sboundin_3 (ATerm, ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm k_84 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm j_61 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm d_84 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm z_59 (ATerm));
ATerm Scope_2 (ATerm, ATerm o_62 (ATerm), ATerm p_62 (ATerm));
ATerm tboundin_3 (ATerm, ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm g_84 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm n_68 (ATerm), ATerm o_68 (ATerm));
ATerm for_3 (ATerm, ATerm q_68 (ATerm), ATerm r_68 (ATerm), ATerm s_68 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm y_69 (ATerm), ATerm z_69 (ATerm), ATerm a_70 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm r_71 (ATerm), ATerm s_71 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm x_71 (ATerm), ATerm y_71 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm l_71 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm t_70 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm y_70 (ATerm));
ATerm rename_4 (ATerm, ATerm z_71 (ATerm, ATerm (ATerm)), ATerm a_72 (ATerm), ATerm b_72 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_72 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm Seqs_1 (ATerm, ATerm i_58 (ATerm));
ATerm Call_2 (ATerm, ATerm y_61 (ATerm), ATerm z_61 (ATerm));
ATerm Prim_2 (ATerm, ATerm r_62 (ATerm), ATerm s_62 (ATerm));
ATerm Str_1 (ATerm, ATerm f_0 (ATerm));
ATerm Real_1 (ATerm, ATerm e_0 (ATerm));
ATerm Int_1 (ATerm, ATerm d_0 (ATerm));
ATerm Var_1 (ATerm, ATerm v_60 (ATerm));
ATerm Op_2 (ATerm, ATerm z_60 (ATerm), ATerm a_61 (ATerm));
ATerm Build_1 (ATerm, ATerm l_62 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm simple_strategy_0 (ATerm);
ATerm RowLet_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm k_76 (ATerm));
ATerm MatrixScope_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm assert_1 (ATerm, ATerm f_63 (ATerm));
ATerm WildPat_0 (ATerm);
ATerm default_state_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm MatchCons_2 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm ConsTransition_1 (ATerm, ATerm k_63 (ATerm));
ATerm Transition_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm rzip_1 (ATerm, ATerm p_76 (ATerm));
ATerm transitions_0 (ATerm);
ATerm Uniq_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm s_78 (ATerm));
ATerm uniq_0 (ATerm);
ATerm offsets_0 (ATerm);
ATerm length_0 (ATerm);
ATerm ConsArgs_0 (ATerm);
ATerm filter_1 (ATerm, ATerm e_72 (ATerm));
ATerm outedges_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Mixture_0 (ATerm);
ATerm ShiftColumnRow_0 (ATerm);
ATerm ShiftColumn_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm As_2 (ATerm, ATerm l_59 (ATerm), ATerm m_59 (ATerm));
ATerm Row_3 (ATerm, ATerm b_58 (ATerm), ATerm c_58 (ATerm), ATerm d_58 (ATerm));
ATerm SkipWild_0 (ATerm);
ATerm MatrixRowsEmpty_0 (ATerm);
ATerm reduce_matrix_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm c_63 (ATerm));
ATerm table_get_0 (ATerm);
ATerm begin_scope_1 (ATerm, ATerm b_63 (ATerm));
ATerm scope_2 (ATerm, ATerm d_63 (ATerm), ATerm e_63 (ATerm));
ATerm matrix_to_dfa_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm zip_1 (ATerm, ATerm f_76 (ATerm));
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
ATerm at_end_1 (ATerm, ATerm e_78 (ATerm));
ATerm conc_0 (ATerm);
ATerm MatrixMerge_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm y_72 (ATerm), ATerm z_72 (ATerm), ATerm a_73 (ATerm));
ATerm crush_3 (ATerm, ATerm o_74 (ATerm), ATerm p_74 (ATerm), ATerm q_74 (ATerm));
ATerm collect_1 (ATerm, ATerm x_74 (ATerm));
ATerm collect_offsets_0 (ATerm);
ATerm CollectSubst_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm IgnoreVar_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm d_74 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm w_72 (ATerm), ATerm x_72 (ATerm));
ATerm unions_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm list_1 (ATerm, ATerm s_77 (ATerm));
ATerm CollectSplit_2 (ATerm, ATerm n_75 (ATerm), ATerm o_75 (ATerm));
ATerm is_int_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm collect_split_1 (ATerm, ATerm j_75 (ATerm));
ATerm collect_split_2 (ATerm, ATerm l_75 (ATerm), ATerm m_75 (ATerm));
ATerm collect_substitutions_0 (ATerm);
ATerm Annotate_1 (ATerm, ATerm e_85 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm add_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm a_76 (ATerm), ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm d_76 (ATerm));
ATerm NZip00_0 (ATerm);
ATerm nzip0_1 (ATerm, ATerm l_76 (ATerm));
ATerm Propagate_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm h_80 (ATerm));
ATerm term_to_matrix_0 (ATerm);
ATerm MatchToMatrix_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm w_67 (ATerm), ATerm x_67 (ATerm));
ATerm repeat_1 (ATerm, ATerm z_67 (ATerm));
ATerm downup_1 (ATerm, ATerm l_80 (ATerm));
ATerm match_to_matrix_0 (ATerm);
ATerm match_to_dfa_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm o_61 (ATerm), ATerm p_61 (ATerm), ATerm q_61 (ATerm));
ATerm map_1 (ATerm, ATerm q_77 (ATerm));
ATerm Strategies_1 (ATerm, ATerm j_60 (ATerm));
ATerm Specification_1 (ATerm, ATerm l_60 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm f_85 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm t_62 (ATerm), ATerm u_62 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_79 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm z_65 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm e_79 (ATerm), ATerm f_79 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm z_56 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm y_77 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_65 (ATerm));
ATerm need_help_1 (ATerm, ATerm y_65 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm w_64 (ATerm), ATerm x_64 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm y_64 (ATerm), ATerm z_64 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm x_62 (ATerm), ATerm y_62 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm u_64 (ATerm));
ATerm iowrap_3 (ATerm, ATerm n_65 (ATerm), ATerm o_65 (ATerm), ATerm p_65 (ATerm));
ATerm iowrap_2 (ATerm, ATerm i_65 (ATerm), ATerm j_65 (ATerm));
ATerm iowrap_1 (ATerm, ATerm f_65 (ATerm));
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
ATerm spaste_1 (ATerm t, ATerm h_84 (ATerm))
{
  ATerm r_8 = t;
  if(PushChoice()==0)
    {
      ATerm g_0 (ATerm t)
      {
        t = split_2(t, _id, h_84);
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
      t = r_8;
      {
        ATerm s_8 = t;
        if(PushChoice()==0)
          {
            ATerm i_0 (ATerm t)
            {
              t = split_2(t, _id, h_84);
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
            t = s_8;
            {
              ATerm k_0 (ATerm t)
              {
                t = h_84(t);
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
ATerm Rec_2 (ATerm t, ATerm k_61 (ATerm), ATerm l_61 (ATerm))
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
          t = k_61(t);
          c_5 = t;
          t = not_null(z_4);
          t = l_61(t);
          e_5 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(c_5), not_null(e_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm m_61 (ATerm), ATerm n_61 (ATerm))
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
          t = m_61(t);
          s_5 = t;
          t = not_null(p_5);
          t = n_61(t);
          u_5 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(s_5), not_null(u_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm k_84 (ATerm))
{
  ATerm u_8 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, i_84, i_84);
      PopChoice();
    }
  else
    {
      t = u_8;
      {
        ATerm w_8 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, k_84, k_84, i_84);
            PopChoice();
          }
        else
          {
            t = w_8;
            t = Rec_2(t, k_84, i_84);
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
ATerm SVar_1 (ATerm t, ATerm j_61 (ATerm))
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
        t = j_61(t);
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
    ATerm x_8 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = x_8;
        {
          ATerm y_8 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = y_8;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, n_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm d_84 (ATerm))
{
  t = Scope_2(t, d_84, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm z_59 (ATerm))
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
        t = z_59(t);
        g_8 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(g_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm o_62 (ATerm), ATerm p_62 (ATerm))
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
          t = o_62(t);
          t_8 = t;
          t = not_null(q_8);
          t = p_62(t);
          v_8 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_8), not_null(v_8));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm g_84 (ATerm))
{
  ATerm z_8 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, g_84, e_84);
      PopChoice();
    }
  else
    {
      t = z_8;
      t = DynamicRules_1(t, e_84);
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
                  ATerm a_9;
                  a_9 = t;
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
                  t = a_9;
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
ATerm while_not_2 (ATerm t, ATerm n_68 (ATerm), ATerm o_68 (ATerm))
{
  ATerm i_16 (ATerm t)
  {
    ATerm e_9 = t;
    if(PushChoice()==0)
      {
        t = n_68(t);
        PopChoice();
      }
    else
      {
        t = e_9;
        t = o_68(t);
        t = i_16(t);
      }
    return(t);
  }
  t = i_16(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm q_68 (ATerm), ATerm r_68 (ATerm), ATerm s_68 (ATerm))
{
  t = q_68(t);
  t = while_not_2(t, r_68, s_68);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm f_9 = t;
  if(PushChoice()==0)
    {
      ATerm o_0 (ATerm t)
      {
        ATerm o_16 = NULL;
        o_16 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_16), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm p_0 (ATerm t)
      {
        ATerm r_0 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, r_0);
        return(t);
      }
      ATerm q_0 (ATerm t)
      {
        ATerm g_9 = t;
        if(PushChoice()==0)
          {
            ATerm s_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                ATerm k_9 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = k_9;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, t_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, s_0);
            PopChoice();
          }
        else
          {
            t = g_9;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, o_0, p_0, q_0);
      PopChoice();
    }
  else
    {
      t = f_9;
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
                        ATerm l_9 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = l_9;
                            {
                              ATerm m_9 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm u_0 (ATerm t)
                                  {
                                    t = not_null(t_16);
                                    return(t);
                                  }
                                  t = HdMember_1(t, u_0);
                                  t = z_16(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = m_9;
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
ATerm free_vars_3 (ATerm t, ATerm y_69 (ATerm), ATerm z_69 (ATerm), ATerm a_70 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm d_17 (ATerm t)
  {
    ATerm y_9 = t;
    if(PushChoice()==0)
      {
        t = y_69(t);
        PopChoice();
      }
    else
      {
        t = y_9;
        {
          ATerm z_9 = t;
          if(PushChoice()==0)
            {
              ATerm b_17 = NULL;
              ATerm a_10;
              a_10 = t;
              {
                ATerm c_17 = NULL;
                t = z_69(t);
                c_17 = t;
                if(b_17 != NULL && b_17 != c_17)
                  _fail(c_17);
                else
                  b_17 = c_17;
              }
              t = a_10;
              {
                ATerm v_0 (ATerm t)
                {
                  ATerm x_0 (ATerm t)
                  {
                    t = not_null(b_17);
                    return(t);
                  }
                  t = split_2(t, d_17, x_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm w_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = a_70(t, v_0, d_17, w_0);
                {
                  ATerm y_0 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = crush_3(t, y_0, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = z_9;
              {
                ATerm z_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = crush_3(t, z_0, union_0, d_17);
              }
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
  ATerm a_1 (ATerm t)
  {
    ATerm b_10 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = b_10;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, a_1, tboundin_3);
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
ATerm DistBinding_2 (ATerm t, ATerm r_71 (ATerm), ATerm s_71 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
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
                    ATerm b_1 (ATerm t)
                    {
                      ATerm n_18 = NULL;
                      n_18 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = r_71(t);
                      return(t);
                    }
                    ATerm c_1 (ATerm t)
                    {
                      ATerm p_18 = NULL;
                      p_18 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = r_71(t);
                      return(t);
                    }
                    t = s_71(t, b_1, c_1, _id);
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
ATerm RnBinding_2 (ATerm t, ATerm x_71 (ATerm), ATerm y_71 (ATerm, ATerm (ATerm)))
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
              ATerm l_19 = NULL;
              t = not_null(f_19);
              {
                ATerm w_19 = NULL;
                t = x_71(t);
                l_19 = t;
                {
                  ATerm q_20 = NULL;
                  t = map_1(t, new_0);
                  w_19 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm s_20 = NULL;
                    t = zip_1(t, _id);
                    q_20 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm u_20 = NULL;
                      t = conc_0(t);
                      s_20 = t;
                      t = not_null(f_19);
                      {
                        ATerm d_1 (ATerm t)
                        {
                          t = not_null(w_19);
                          return(t);
                        }
                        t = y_71(t, d_1);
                        u_20 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_20), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm c_10 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = c_10;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm l_71 (ATerm, ATerm (ATerm)))
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
                ATerm e_1 (ATerm t)
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = not_null(h_23);
                    return(t);
                  }
                  t = split_2(t, _id, f_1);
                  t = lookup_0(t);
                  return(t);
                }
                t = l_71(t, e_1);
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
ATerm all_dist_1 (ATerm t, ATerm t_70 (ATerm))
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
                ATerm g_1 (ATerm t)
                {
                  ATerm u_24 = NULL;
                  u_24 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_24), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = t_70(t);
                  return(t);
                }
                t = _all(t, g_1);
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
ATerm env_alltd_1 (ATerm t, ATerm y_70 (ATerm))
{
  ATerm y_24 (ATerm t)
  {
    ATerm d_10 = t;
    if(PushChoice()==0)
      {
        t = y_70(t);
        PopChoice();
      }
    else
      {
        t = d_10;
        t = all_dist_1(t, y_24);
      }
    return(t);
  }
  t = y_24(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm z_71 (ATerm, ATerm (ATerm)), ATerm a_72 (ATerm), ATerm b_72 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_72 (ATerm, ATerm (ATerm)))
{
  ATerm a_25 = NULL;
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_25), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  {
    ATerm d_25 (ATerm t)
    {
      ATerm h_1 (ATerm t)
      {
        ATerm e_10 = t;
        if(PushChoice()==0)
          {
            t = RnVar_1(t, z_71);
            PopChoice();
          }
        else
          {
            t = e_10;
            t = RnBinding_2(t, a_72, c_72);
            t = DistBinding_2(t, d_25, b_72);
          }
        return(t);
      }
      t = env_alltd_1(t, h_1);
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
  ATerm i_10 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = i_10;
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
              ATerm i_1 (ATerm t)
              {
                t = not_null(p_25);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, i_1);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm Seqs_1 (ATerm t, ATerm i_58 (ATerm))
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
        t = i_58(t);
        a_26 = t;
        t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(a_26));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm y_61 (ATerm), ATerm z_61 (ATerm))
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
          t = y_61(t);
          q_26 = t;
          t = not_null(n_26);
          t = z_61(t);
          s_26 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(q_26), not_null(s_26));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm r_62 (ATerm), ATerm s_62 (ATerm))
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
          t = r_62(t);
          g_27 = t;
          t = not_null(d_27);
          t = s_62(t);
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
        ATerm j_10 = t;
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
            t = j_10;
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
        ATerm k_10 = t;
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
            t = k_10;
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
        ATerm l_10 = t;
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
            t = l_10;
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
ATerm Var_1 (ATerm t, ATerm v_60 (ATerm))
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
        t = v_60(t);
        s_29 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_29));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm z_60 (ATerm), ATerm a_61 (ATerm))
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
          t = z_60(t);
          f_30 = t;
          t = not_null(c_30);
          t = a_61(t);
          h_30 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(f_30), not_null(h_30));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm l_62 (ATerm))
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
        t = l_62(t);
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
  ATerm m_10 = t;
  if(PushChoice()==0)
    {
      t = Id_0(t);
      PopChoice();
    }
  else
    {
      t = m_10;
      {
        ATerm n_10 = t;
        if(PushChoice()==0)
          {
            t = Fail_0(t);
            PopChoice();
          }
        else
          {
            t = n_10;
            {
              ATerm o_10 = t;
              if(PushChoice()==0)
                {
                  t = Seqs_1(t, Nil_0);
                  PopChoice();
                }
              else
                {
                  t = o_10;
                  {
                    ATerm p_10 = t;
                    if(PushChoice()==0)
                      {
                        ATerm j_1 (ATerm t)
                        {
                          ATerm q_10 = t;
                          if(PushChoice()==0)
                            {
                              t = Var_1(t, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = q_10;
                              {
                                ATerm r_10 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm k_1 (ATerm t)
                                    {
                                      ATerm l_1 (ATerm t)
                                      {
                                        t = Var_1(t, _id);
                                        return(t);
                                      }
                                      t = list_1(t, l_1);
                                      return(t);
                                    }
                                    t = Op_2(t, _id, k_1);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = r_10;
                                    {
                                      ATerm s_10 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Int_1(t, _id);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = s_10;
                                          {
                                            ATerm t_10 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = Real_1(t, _id);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = t_10;
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
                        t = Build_1(t, j_1);
                        PopChoice();
                      }
                    else
                      {
                        t = p_10;
                        {
                          ATerm w_10 = t;
                          if(PushChoice()==0)
                            {
                              t = Prim_2(t, _id, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = w_10;
                              {
                                ATerm x_10 = t;
                                if(PushChoice()==0)
                                  {
                                    t = Call_2(t, _id, _id);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = x_10;
                                    {
                                      ATerm m_1 (ATerm t)
                                      {
                                        t = Cons_2(t, simple_strategy_0, Nil_0);
                                        return(t);
                                      }
                                      t = Seqs_1(t, m_1);
                                    }
                                  }
                              }
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
        ATerm y_10 = t;
        if(PushChoice()==0)
          {
            t = not_null(k_31);
            t = simple_strategy_0(t);
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Row_3, (ATerm)ATmakeAppl(sym_Nil_0), not_null(j_31), not_null(k_31)), (ATerm) ATmakeAppl(sym_TNil_0)));
            PopChoice();
          }
        else
          {
            t = y_10;
            {
              ATerm p_31 = NULL;
              t = not_null(k_31);
              {
                ATerm z_10 = t;
                if(PushChoice()==0)
                  {
                    t = simple_strategy_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = z_10;
                t = new_0(t);
                p_31 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_3, not_null(p_31), (ATerm)ATmakeAppl(sym_Nil_0), not_null(k_31)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Row_3, (ATerm)ATmakeAppl(sym_Nil_0), not_null(j_31), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_31)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm k_76 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, k_76);
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
        ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
        t = not_null(f_32);
        t = unzip_1(t, RowLet_0);
        {
          ATerm n_1 (ATerm t)
          {
            t = TCons_2(t, _id, TNil_0);
            return(t);
          }
          t = TCons_2(t, concat_0, n_1);
          i_32 = t;
          z_31 :
          if(match_cons(i_32, sym_TCons_2))
            {
              j_32 = ATgetArgument(i_32, 0);
              k_32 = ATgetArgument(i_32, 1);
              a_32 :
              if(match_cons(k_32, sym_TCons_2))
                {
                  l_32 = ATgetArgument(k_32, 0);
                  m_32 = ATgetArgument(k_32, 1);
                  b_32 :
                  if(match_cons(m_32, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_32), (ATerm) ATmakeAppl(sym_Let_2, not_null(j_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(l_32)))));
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
                  ATerm a_11;
                  a_11 = t;
                  {
                    ATerm h_33 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_33), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm b_11 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = b_11;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      h_33 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_33), not_null(h_33)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = a_11;
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
ATerm assert_1 (ATerm t, ATerm f_63 (ATerm))
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
              ATerm c_11;
              c_11 = t;
              {
                ATerm c_34 = NULL;
                ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL;
                t = f_63(t);
                c_34 = t;
                if(z_33 != NULL && z_33 != c_34)
                  _fail(c_34);
                else
                  z_33 = c_34;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_33), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm d_11 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = d_11;
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
              t = c_11;
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
  ATerm j_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL;
  j_35 = t;
  f_35 :
  if(match_cons(j_35, sym_TCons_2))
    {
      n_35 = ATgetArgument(j_35, 0);
      o_35 = ATgetArgument(j_35, 1);
      h_35 :
      if(match_cons(o_35, sym_TCons_2))
        {
          p_35 = ATgetArgument(o_35, 0);
          q_35 = ATgetArgument(o_35, 1);
          i_35 :
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
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
  h_37 = t;
  e_37 :
  if(match_cons(h_37, sym_Op_2))
    {
      g_37 = ATgetArgument(h_37, 0);
      f_37 = ATgetArgument(h_37, 1);
      {
        ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
        t = b_0(t);
        k_37 = t;
        c_36 :
        if(match_cons(k_37, sym_Fun_2))
          {
            l_37 = ATgetArgument(k_37, 0);
            m_37 = ATgetArgument(k_37, 1);
            {
              ATerm n_37 = NULL,s_37 = NULL;
              if(g_37 != NULL && g_37 != l_37)
                _fail(l_37);
              else
                g_37 = l_37;
              if(n_37 != NULL && n_37 != m_37)
                _fail(m_37);
              else
                n_37 = m_37;
              t = not_null(f_37);
              t = length_0(t);
              s_37 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_37), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_37), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = eq_0(t);
              t = not_null(f_37);
            }
          }
        else
          _fail(t);
      }
    }
  else
    {
      if(match_cons(h_37, sym_Str_1))
        {
          g_37 = ATgetArgument(h_37, 0);
          {
            ATerm v_37 = NULL,w_37 = NULL;
            t = b_0(t);
            v_37 = t;
            g_36 :
            if(match_cons(v_37, sym_Str_1))
              {
                w_37 = ATgetArgument(v_37, 0);
                {
                  ATerm x_37 = NULL;
                  if(g_37 != NULL && g_37 != w_37)
                    _fail(w_37);
                  else
                    g_37 = w_37;
                  t = c_0(t);
                  x_37 = t;
                  f_36 :
                  if(match_cons(x_37, sym_Nil_0))
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
          if(match_cons(h_37, sym_Real_1))
            {
              g_37 = ATgetArgument(h_37, 0);
              {
                ATerm z_37 = NULL,a_38 = NULL;
                t = b_0(t);
                z_37 = t;
                p_36 :
                if(match_cons(z_37, sym_Real_1))
                  {
                    a_38 = ATgetArgument(z_37, 0);
                    {
                      ATerm b_38 = NULL;
                      if(g_37 != NULL && g_37 != a_38)
                        _fail(a_38);
                      else
                        g_37 = a_38;
                      t = c_0(t);
                      b_38 = t;
                      j_36 :
                      if(match_cons(b_38, sym_Nil_0))
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
              if(match_cons(h_37, sym_Int_1))
                {
                  g_37 = ATgetArgument(h_37, 0);
                  {
                    ATerm d_38 = NULL,e_38 = NULL;
                    t = b_0(t);
                    d_38 = t;
                    a_37 :
                    if(match_cons(d_38, sym_Int_1))
                      {
                        e_38 = ATgetArgument(d_38, 0);
                        {
                          ATerm f_38 = NULL;
                          if(g_37 != NULL && g_37 != e_38)
                            _fail(e_38);
                          else
                            g_37 = e_38;
                          t = c_0(t);
                          f_38 = t;
                          z_36 :
                          if(match_cons(f_38, sym_Nil_0))
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
                  if(match_cons(h_37, sym_Wld_0))
                    {
                      ATerm j_38 = NULL;
                      t = c_0(t);
                      {
                        ATerm o_1 (ATerm t)
                        {
                          ATerm g_38 = NULL,h_38 = NULL;
                          g_38 = t;
                          c_37 :
                          if(match_cons(g_38, sym_Var_1))
                            {
                              h_38 = ATgetArgument(g_38, 0);
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(h_38)), (ATerm) ATmakeAppl(sym_Wld_0));
                            }
                          else
                            _fail(t);
                          return(t);
                        }
                        t = map_1(t, o_1);
                        j_38 = t;
                        t = not_null(j_38);
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
ATerm ConsTransition_1 (ATerm t, ATerm k_63 (ATerm))
{
  ATerm s_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,v_40 = NULL;
  s_39 = t;
  n_39 :
  if(match_cons(s_39, sym_Row_3))
    {
      z_39 = ATgetArgument(s_39, 0);
      i_40 = ATgetArgument(s_39, 1);
      v_40 = ATgetArgument(s_39, 2);
      q_39 :
      if(match_cons(z_39, sym_Cons_2))
        {
          a_40 = ATgetArgument(z_39, 0);
          h_40 = ATgetArgument(z_39, 1);
          r_39 :
          if(match_cons(a_40, sym_As_2))
            {
              b_40 = ATgetArgument(a_40, 0);
              g_40 = ATgetArgument(a_40, 1);
              {
                ATerm g_41 = NULL;
                t = not_null(g_40);
                {
                  ATerm i_41 = NULL;
                  t = k_63(t);
                  g_41 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_40), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = conc_0(t);
                  i_41 = t;
                  t = (ATerm) ATmakeAppl(sym_Row_3, not_null(h_40), not_null(i_41), not_null(v_40));
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
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL;
  v_41 = t;
  p_41 :
  if(match_cons(v_41, sym_TCons_2))
    {
      w_41 = ATgetArgument(v_41, 0);
      x_41 = ATgetArgument(v_41, 1);
      q_41 :
      if(match_cons(x_41, sym_TCons_2))
        {
          y_41 = ATgetArgument(x_41, 0);
          d_42 = ATgetArgument(x_41, 1);
          r_41 :
          if(match_cons(y_41, sym_TCons_2))
            {
              z_41 = ATgetArgument(y_41, 0);
              a_42 = ATgetArgument(y_41, 1);
              s_41 :
              if(match_cons(a_42, sym_TCons_2))
                {
                  b_42 = ATgetArgument(a_42, 0);
                  c_42 = ATgetArgument(a_42, 1);
                  t_41 :
                  if(match_cons(c_42, sym_TNil_0))
                    {
                      u_41 :
                      if(match_cons(d_42, sym_TNil_0))
                        {
                          ATerm h_42 = NULL;
                          t = not_null(w_41);
                          {
                            ATerm p_1 (ATerm t)
                            {
                              ATerm q_1 (ATerm t)
                              {
                                ATerm r_1 (ATerm t)
                                {
                                  t = not_null(z_41);
                                  return(t);
                                }
                                ATerm s_1 (ATerm t)
                                {
                                  t = not_null(b_42);
                                  return(t);
                                }
                                t = MatchCons_2(t, r_1, s_1);
                                return(t);
                              }
                              t = ConsTransition_1(t, q_1);
                              return(t);
                            }
                            t = filter_1(t, p_1);
                            h_42 = t;
                            t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(z_41), not_null(b_42), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(h_42)));
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
  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
  q_42 = t;
  m_42 :
  if(match_cons(q_42, sym_TCons_2))
    {
      r_42 = ATgetArgument(q_42, 0);
      s_42 = ATgetArgument(q_42, 1);
      n_42 :
      if(match_cons(s_42, sym_TCons_2))
        {
          t_42 = ATgetArgument(s_42, 0);
          a_43 = ATgetArgument(s_42, 1);
          o_42 :
          if(match_cons(t_42, sym_Cons_2))
            {
              y_42 = ATgetArgument(t_42, 0);
              z_42 = ATgetArgument(t_42, 1);
              p_42 :
              if(match_cons(a_43, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(r_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_42), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(r_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_42), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL;
  k_43 = t;
  g_43 :
  if(match_cons(k_43, sym_TCons_2))
    {
      l_43 = ATgetArgument(k_43, 0);
      m_43 = ATgetArgument(k_43, 1);
      h_43 :
      if(match_cons(m_43, sym_TCons_2))
        {
          n_43 = ATgetArgument(m_43, 0);
          o_43 = ATgetArgument(m_43, 1);
          i_43 :
          if(match_cons(n_43, sym_Nil_0))
            {
              j_43 :
              if(match_cons(o_43, sym_TNil_0))
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
ATerm rzip_1 (ATerm t, ATerm p_76 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, p_76);
  return(t);
}
ATerm transitions_0 (ATerm t)
{
  t = rzip_1(t, Transition_0);
  return(t);
}
ATerm Uniq_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL;
  y_43 = t;
  x_43 :
  if(match_cons(y_43, sym_Cons_2))
    {
      z_43 = ATgetArgument(y_43, 0);
      a_44 = ATgetArgument(y_43, 1);
      {
        ATerm e_44 = NULL;
        t = not_null(a_44);
        {
          ATerm t_1 (ATerm t)
          {
            ATerm e_11 = t;
            if(PushChoice()==0)
              {
                ATerm d_44 = NULL;
                d_44 = t;
                if(z_43 != NULL && z_43 != d_44)
                  _fail(d_44);
                else
                  z_43 = d_44;
                PopChoice();
                _fail(t);
              }
            else
              t = e_11;
            return(t);
          }
          t = filter_1(t, t_1);
          e_44 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_43), not_null(e_44));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm s_78 (ATerm))
{
  ATerm j_44 (ATerm t)
  {
    t = s_78(t);
    {
      ATerm f_11 = t;
      if(PushChoice()==0)
        {
          t = Nil_0(t);
          PopChoice();
        }
      else
        {
          t = f_11;
          t = Cons_2(t, _id, j_44);
        }
    }
    return(t);
  }
  t = j_44(t);
  return(t);
}
ATerm uniq_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    t = try_1(t, Uniq_0);
    return(t);
  }
  t = listtd_1(t, u_1);
  return(t);
}
ATerm offsets_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL;
    o_44 = t;
    m_44 :
    if(match_cons(o_44, sym_As_2))
      {
        p_44 = ATgetArgument(o_44, 0);
        r_44 = ATgetArgument(o_44, 1);
        n_44 :
        if(match_cons(p_44, sym_Off_1))
          {
            q_44 = ATgetArgument(p_44, 0);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_44));
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = map_1(t, v_1);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, w_1, add_0, x_1);
  return(t);
}
ATerm ConsArgs_0 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL;
  h_45 = t;
  c_45 :
  if(match_cons(h_45, sym_Row_3))
    {
      i_45 = ATgetArgument(h_45, 0);
      p_45 = ATgetArgument(h_45, 1);
      q_45 = ATgetArgument(h_45, 2);
      d_45 :
      if(match_cons(i_45, sym_Cons_2))
        {
          j_45 = ATgetArgument(i_45, 0);
          o_45 = ATgetArgument(i_45, 1);
          e_45 :
          if(match_cons(j_45, sym_As_2))
            {
              k_45 = ATgetArgument(j_45, 0);
              l_45 = ATgetArgument(j_45, 1);
              f_45 :
              if(match_cons(l_45, sym_Op_2))
                {
                  n_45 = ATgetArgument(l_45, 0);
                  g_45 = ATgetArgument(l_45, 1);
                  {
                    ATerm q_46 = NULL;
                    t = not_null(g_45);
                    {
                      ATerm s_46 = NULL;
                      t = length_0(t);
                      q_46 = t;
                      t = not_null(g_45);
                      t = offsets_0(t);
                      s_46 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Fun_2, not_null(n_45), not_null(q_46)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_46), (ATerm) ATmakeAppl(sym_TNil_0)));
                    }
                  }
                }
              else
                {
                  if(match_cons(l_45, sym_Int_1))
                    {
                      n_45 = ATgetArgument(l_45, 0);
                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Int_1, not_null(n_45)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                    }
                  else
                    {
                      if(match_cons(l_45, sym_Real_1))
                        {
                          n_45 = ATgetArgument(l_45, 0);
                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Real_1, not_null(n_45)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                        }
                      else
                        {
                          if(match_cons(l_45, sym_Str_1))
                            {
                              n_45 = ATgetArgument(l_45, 0);
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Str_1, not_null(n_45)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm filter_1 (ATerm t, ATerm e_72 (ATerm))
{
  ATerm g_11 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = g_11;
      {
        ATerm h_11 = t;
        if(PushChoice()==0)
          {
            ATerm y_1 (ATerm t)
            {
              t = filter_1(t, e_72);
              return(t);
            }
            t = Cons_2(t, e_72, y_1);
            PopChoice();
          }
        else
          {
            t = h_11;
            {
              ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL;
              z_47 = t;
              y_47 :
              if(match_cons(z_47, sym_Cons_2))
                {
                  a_48 = ATgetArgument(z_47, 0);
                  b_48 = ATgetArgument(z_47, 1);
                  t = not_null(b_48);
                  t = filter_1(t, e_72);
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
ATerm implode_string_0 (ATerm t)
{
  ATerm f_48 = NULL;
  f_48 = t;
  t = SSL_implode_string(not_null(f_48));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm j_48 = NULL;
  j_48 = t;
  t = SSL_explode_string(not_null(j_48));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  ATerm i_11 = t;
  if(PushChoice()==0)
    {
      ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL;
      t_48 = t;
      n_48 :
      if(match_cons(t_48, sym_Cons_2))
        {
          u_48 = ATgetArgument(t_48, 0);
          d_49 = ATgetArgument(t_48, 1);
          o_48 :
          if(match_cons(u_48, sym_Row_3))
            {
              v_48 = ATgetArgument(u_48, 0);
              b_49 = ATgetArgument(u_48, 1);
              c_49 = ATgetArgument(u_48, 2);
              p_48 :
              if(match_cons(v_48, sym_Cons_2))
                {
                  w_48 = ATgetArgument(v_48, 0);
                  a_49 = ATgetArgument(v_48, 1);
                  q_48 :
                  if(match_cons(w_48, sym_As_2))
                    {
                      x_48 = ATgetArgument(w_48, 0);
                      z_48 = ATgetArgument(w_48, 1);
                      r_48 :
                      if(match_cons(x_48, sym_Off_1))
                        {
                          y_48 = ATgetArgument(x_48, 0);
                          t = not_null(y_48);
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
      t = i_11;
      t = explode_string_0(t);
      {
        ATerm j_11 = t;
        if(PushChoice()==0)
          {
            ATerm h_49 (ATerm t)
            {
              ATerm k_11 = t;
              if(PushChoice()==0)
                {
                  t = Cons_2(t, _id, h_49);
                  PopChoice();
                }
              else
                {
                  t = k_11;
                  {
                    ATerm z_1 (ATerm t)
                    {
                      ATerm f_49 = NULL;
                      f_49 = t;
                      s_48 :
                      if(!(match_int(f_49, 47)))
                        _fail(t);
                      return(t);
                    }
                    ATerm a_2 (ATerm t)
                    {
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                      return(t);
                    }
                    t = Cons_2(t, z_1, a_2);
                  }
                }
              return(t);
            }
            t = h_49(t);
            PopChoice();
          }
        else
          {
            t = j_11;
            t = (ATerm) ATmakeAppl(sym_Nil_0);
          }
        t = implode_string_0(t);
      }
    }
  return(t);
}
ATerm Mixture_0 (ATerm t)
{
  ATerm p_49 = NULL,u_49 = NULL;
  p_49 = t;
  o_49 :
  if(match_cons(p_49, sym_Matrix_1))
    {
      u_49 = ATgetArgument(p_49, 0);
      {
        ATerm w_49 = NULL;
        t = not_null(u_49);
        {
          ATerm y_49 = NULL;
          t = get_path_0(t);
          w_49 = t;
          t = not_null(u_49);
          {
            ATerm o_50 = NULL;
            t = outedges_0(t);
            y_49 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_49), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_49), (ATerm) ATmakeAppl(sym_TNil_0)));
            {
              ATerm q_50 = NULL;
              t = transitions_0(t);
              o_50 = t;
              t = not_null(u_49);
              {
                ATerm o_52 = NULL;
                t = default_state_0(t);
                q_50 = t;
                t = new_0(t);
                o_52 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(u_49)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue)), not_null(o_52)), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm b_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
                    return(t);
                  }
                  t = assert_1(t, b_2);
                }
                t = (ATerm) ATmakeAppl(sym_Case_4, not_null(o_52), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_49)), not_null(o_50), not_null(q_50));
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
  ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL;
  z_52 = t;
  x_52 :
  if(match_cons(z_52, sym_Row_3))
    {
      a_53 = ATgetArgument(z_52, 0);
      b_53 = ATgetArgument(z_52, 1);
      e_53 = ATgetArgument(z_52, 2);
      y_52 :
      if(match_cons(b_53, sym_Cons_2))
        {
          c_53 = ATgetArgument(b_53, 0);
          d_53 = ATgetArgument(b_53, 1);
          t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_53), not_null(a_53)), not_null(d_53), not_null(e_53));
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
  ATerm n_53 = NULL,o_53 = NULL;
  n_53 = t;
  m_53 :
  if(match_cons(n_53, sym_Matrix_1))
    {
      o_53 = ATgetArgument(n_53, 0);
      {
        ATerm q_53 = NULL;
        t = not_null(o_53);
        {
          ATerm l_11 = t;
          if(PushChoice()==0)
            {
              ATerm c_2 (ATerm t)
              {
                ATerm d_2 (ATerm t)
                {
                  ATerm e_2 (ATerm t)
                  {
                    ATerm f_2 (ATerm t)
                    {
                      ATerm m_11 = t;
                      if(PushChoice()==0)
                        {
                          t = Wld_0(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        t = m_11;
                      return(t);
                    }
                    t = As_2(t, _id, f_2);
                    return(t);
                  }
                  t = Cons_2(t, e_2, _id);
                  return(t);
                }
                t = Row_3(t, d_2, _id, _id);
                return(t);
              }
              t = map_1(t, c_2);
              PopChoice();
              _fail(t);
            }
          else
            t = l_11;
          t = not_null(o_53);
          t = map_1(t, ShiftColumnRow_0);
          q_53 = t;
          t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(q_53));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm v_53 = NULL;
  v_53 = t;
  u_53 :
  if(!(match_cons(v_53, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm As_2 (ATerm t, ATerm l_59 (ATerm), ATerm m_59 (ATerm))
{
  ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL;
  a_54 = t;
  z_53 :
  if(match_cons(a_54, sym_As_2))
    {
      b_54 = ATgetArgument(a_54, 0);
      c_54 = ATgetArgument(a_54, 1);
      {
        ATerm f_54 = NULL;
        t = not_null(b_54);
        {
          ATerm h_54 = NULL;
          t = l_59(t);
          f_54 = t;
          t = not_null(c_54);
          t = m_59(t);
          h_54 = t;
          t = (ATerm) ATmakeAppl(sym_As_2, not_null(f_54), not_null(h_54));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Row_3 (ATerm t, ATerm b_58 (ATerm), ATerm c_58 (ATerm), ATerm d_58 (ATerm))
{
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL;
  r_54 = t;
  q_54 :
  if(match_cons(r_54, sym_Row_3))
    {
      s_54 = ATgetArgument(r_54, 0);
      t_54 = ATgetArgument(r_54, 1);
      u_54 = ATgetArgument(r_54, 2);
      {
        ATerm y_54 = NULL;
        t = not_null(s_54);
        {
          ATerm a_55 = NULL;
          t = b_58(t);
          y_54 = t;
          t = not_null(t_54);
          {
            ATerm c_55 = NULL;
            t = c_58(t);
            a_55 = t;
            t = not_null(u_54);
            t = d_58(t);
            c_55 = t;
            t = (ATerm) ATmakeAppl(sym_Row_3, not_null(y_54), not_null(a_55), not_null(c_55));
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
  ATerm l_55 = NULL,m_55 = NULL;
  l_55 = t;
  k_55 :
  if(match_cons(l_55, sym_Matrix_1))
    {
      m_55 = ATgetArgument(l_55, 0);
      {
        ATerm o_55 = NULL;
        t = not_null(m_55);
        {
          ATerm g_2 (ATerm t)
          {
            ATerm h_2 (ATerm t)
            {
              ATerm i_2 (ATerm t)
              {
                t = As_2(t, _id, Wld_0);
                return(t);
              }
              t = Cons_2(t, i_2, _id);
              t = Tl_0(t);
              return(t);
            }
            t = Row_3(t, _id, h_2, _id);
            return(t);
          }
          t = map_1(t, g_2);
          o_55 = t;
          t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(o_55));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatrixRowsEmpty_0 (ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL;
  z_55 = t;
  y_55 :
  if(match_cons(z_55, sym_Matrix_1))
    {
      a_56 = ATgetArgument(z_55, 0);
      {
        ATerm h_56 = NULL;
        t = not_null(a_56);
        {
          ATerm j_2 (ATerm t)
          {
            ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL;
            c_56 = t;
            u_55 :
            if(match_cons(c_56, sym_Row_3))
              {
                d_56 = ATgetArgument(c_56, 0);
                e_56 = ATgetArgument(c_56, 1);
                f_56 = ATgetArgument(c_56, 2);
                v_55 :
                if(match_cons(d_56, sym_Nil_0))
                  {
                    w_55 :
                    if(match_cons(e_56, sym_Nil_0))
                      t = not_null(f_56);
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
          t = map_1(t, j_2);
          h_56 = t;
          t = (ATerm) ATmakeAppl(sym_LChoices_1, not_null(h_56));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm reduce_matrix_0 (ATerm t)
{
  ATerm n_11 = t;
  if(PushChoice()==0)
    {
      t = MatrixRowsEmpty_0(t);
      PopChoice();
    }
  else
    {
      t = n_11;
      {
        ATerm o_11 = t;
        if(PushChoice()==0)
          {
            t = SkipWild_0(t);
            PopChoice();
          }
        else
          {
            t = o_11;
            {
              ATerm p_11 = t;
              if(PushChoice()==0)
                {
                  t = ShiftColumn_0(t);
                  PopChoice();
                }
              else
                {
                  t = p_11;
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
  ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL;
  o_56 = t;
  n_56 :
  if(match_cons(o_56, sym_Cons_2))
    {
      p_56 = ATgetArgument(o_56, 0);
      q_56 = ATgetArgument(o_56, 1);
      t = not_null(q_56);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL;
  a_57 = t;
  w_56 :
  if(match_cons(a_57, sym_TCons_2))
    {
      b_57 = ATgetArgument(a_57, 0);
      c_57 = ATgetArgument(a_57, 1);
      x_56 :
      if(match_cons(c_57, sym_TCons_2))
        {
          d_57 = ATgetArgument(c_57, 0);
          e_57 = ATgetArgument(c_57, 1);
          y_56 :
          if(match_cons(e_57, sym_TNil_0))
            {
              ATerm q_11;
              q_11 = t;
              {
                ATerm h_57 = NULL;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_57), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_57), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm r_11 = t;
                  if(PushChoice()==0)
                    {
                      t = table_get_0(t);
                      t = Tl_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = r_11;
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                    }
                  h_57 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_57), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_57), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_57), (ATerm) ATmakeAppl(sym_TNil_0))));
                  t = table_put_0(t);
                }
              }
              t = q_11;
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
ATerm end_scope_1 (ATerm t, ATerm c_63 (ATerm))
{
  ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL;
  ATerm s_11;
  s_11 = t;
  {
    ATerm s_57 = NULL;
    ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL;
    t = c_63(t);
    s_57 = t;
    if(q_57 != NULL && q_57 != s_57)
      _fail(s_57);
    else
      q_57 = s_57;
    {
      ATerm t_11 = t;
      if(PushChoice()==0)
        {
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_57), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = table_get_0(t);
          PopChoice();
        }
      else
        {
          t = t_11;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
        }
      t_57 = t;
      o_57 :
      if(match_cons(t_57, sym_Cons_2))
        {
          u_57 = ATgetArgument(t_57, 0);
          v_57 = ATgetArgument(t_57, 1);
          if(r_57 != NULL && r_57 != u_57)
            _fail(u_57);
          else
            r_57 = u_57;
          if(p_57 != NULL && p_57 != v_57)
            _fail(v_57);
          else
            p_57 = v_57;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_57), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_57), (ATerm) ATmakeAppl(sym_TNil_0))));
          t = table_put_0(t);
          t = not_null(r_57);
          {
            ATerm k_2 (ATerm t)
            {
              ATerm w_57 = NULL;
              w_57 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_57), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_57), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = table_pop_0(t);
              return(t);
            }
            t = map_1(t, k_2);
          }
        }
      else
        _fail(t);
    }
  }
  t = s_11;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL;
  j_58 = t;
  f_58 :
  if(match_cons(j_58, sym_TCons_2))
    {
      k_58 = ATgetArgument(j_58, 0);
      l_58 = ATgetArgument(j_58, 1);
      g_58 :
      if(match_cons(l_58, sym_TCons_2))
        {
          m_58 = ATgetArgument(l_58, 0);
          n_58 = ATgetArgument(l_58, 1);
          h_58 :
          if(match_cons(n_58, sym_TNil_0))
            t = SSL_table_get(not_null(k_58), not_null(m_58));
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
ATerm begin_scope_1 (ATerm t, ATerm b_63 (ATerm))
{
  ATerm t_58 = NULL;
  ATerm u_11;
  u_11 = t;
  {
    ATerm u_58 = NULL;
    ATerm v_58 = NULL;
    t = b_63(t);
    u_58 = t;
    if(t_58 != NULL && t_58 != u_58)
      _fail(u_58);
    else
      t_58 = u_58;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm v_11 = t;
      if(PushChoice()==0)
        {
          t = table_get_0(t);
          PopChoice();
        }
      else
        {
          t = v_11;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      v_58 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(v_58)), (ATerm) ATmakeAppl(sym_TNil_0))));
      t = table_put_0(t);
    }
  }
  t = u_11;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm d_63 (ATerm), ATerm e_63 (ATerm))
{
  t = begin_scope_1(t, d_63);
  {
    ATerm x_11 = t;
    if(PushChoice()==0)
      {
        t = e_63(t);
        t = end_scope_1(t, d_63);
        PopChoice();
      }
    else
      {
        t = x_11;
        t = end_scope_1(t, d_63);
        _fail(t);
      }
  }
  return(t);
}
ATerm matrix_to_dfa_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    ATerm n_2 (ATerm t)
    {
      ATerm y_11 = t;
      if(PushChoice()==0)
        {
          t = reduce_matrix_0(t);
          PopChoice();
        }
      else
        {
          t = y_11;
          {
            ATerm z_11 = t;
            if(PushChoice()==0)
              {
                t = MatrixScope_0(t);
                PopChoice();
              }
            else
              {
                t = z_11;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, n_2);
    t = _all(t, m_2);
    return(t);
  }
  t = scope_2(t, l_2, m_2);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL;
  e_59 = t;
  b_59 :
  if(match_cons(e_59, sym_TCons_2))
    {
      f_59 = ATgetArgument(e_59, 0);
      g_59 = ATgetArgument(e_59, 1);
      c_59 :
      if(match_cons(g_59, sym_TCons_2))
        {
          h_59 = ATgetArgument(g_59, 0);
          i_59 = ATgetArgument(g_59, 1);
          d_59 :
          if(match_cons(i_59, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_59), not_null(h_59));
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
  ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL;
  u_59 = t;
  p_59 :
  if(match_cons(u_59, sym_TCons_2))
    {
      v_59 = ATgetArgument(u_59, 0);
      y_59 = ATgetArgument(u_59, 1);
      q_59 :
      if(match_cons(v_59, sym_Cons_2))
        {
          w_59 = ATgetArgument(v_59, 0);
          x_59 = ATgetArgument(v_59, 1);
          r_59 :
          if(match_cons(y_59, sym_TCons_2))
            {
              a_60 = ATgetArgument(y_59, 0);
              d_60 = ATgetArgument(y_59, 1);
              s_59 :
              if(match_cons(a_60, sym_Cons_2))
                {
                  b_60 = ATgetArgument(a_60, 0);
                  c_60 = ATgetArgument(a_60, 1);
                  t_59 :
                  if(match_cons(d_60, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(w_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_60), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(x_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_60), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,w_60 = NULL;
  r_60 = t;
  m_60 :
  if(match_cons(r_60, sym_TCons_2))
    {
      s_60 = ATgetArgument(r_60, 0);
      t_60 = ATgetArgument(r_60, 1);
      n_60 :
      if(match_cons(s_60, sym_Nil_0))
        {
          o_60 :
          if(match_cons(t_60, sym_TCons_2))
            {
              u_60 = ATgetArgument(t_60, 0);
              w_60 = ATgetArgument(t_60, 1);
              p_60 :
              if(match_cons(u_60, sym_Nil_0))
                {
                  q_60 :
                  if(match_cons(w_60, sym_TNil_0))
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
ATerm zip_1 (ATerm t, ATerm f_76 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, f_76);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL;
  c_62 = t;
  b_62 :
  if(match_cons(c_62, sym_Cong_2))
    {
      d_62 = ATgetArgument(c_62, 0);
      e_62 = ATgetArgument(c_62, 1);
      {
        ATerm h_62 = NULL;
        t = not_null(e_62);
        {
          ATerm m_62 = NULL;
          t = map_1(t, new_0);
          h_62 = t;
          {
            ATerm q_62 = NULL;
            ATerm o_2 (ATerm t)
            {
              ATerm j_62 = NULL;
              j_62 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_62));
              return(t);
            }
            t = map_1(t, o_2);
            m_62 = t;
            t = not_null(e_62);
            {
              ATerm a_63 = NULL;
              t = map_1(t, new_0);
              q_62 = t;
              {
                ATerm h_63 = NULL;
                ATerm p_2 (ATerm t)
                {
                  ATerm w_62 = NULL;
                  w_62 = t;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_62));
                  return(t);
                }
                t = map_1(t, p_2);
                a_63 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_62), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_62), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm y_63 = NULL;
                  t = zip_1(t, _id);
                  h_63 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_62), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm a_64 = NULL;
                    ATerm q_2 (ATerm t)
                    {
                      ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL;
                      m_63 = t;
                      r_61 :
                      if(match_cons(m_63, sym_TCons_2))
                        {
                          n_63 = ATgetArgument(m_63, 0);
                          s_63 = ATgetArgument(m_63, 1);
                          s_61 :
                          if(match_cons(n_63, sym_TCons_2))
                            {
                              o_63 = ATgetArgument(n_63, 0);
                              p_63 = ATgetArgument(n_63, 1);
                              t_61 :
                              if(match_cons(p_63, sym_TCons_2))
                                {
                                  q_63 = ATgetArgument(p_63, 0);
                                  r_63 = ATgetArgument(p_63, 1);
                                  u_61 :
                                  if(match_cons(r_63, sym_TNil_0))
                                    {
                                      v_61 :
                                      if(match_cons(s_63, sym_TCons_2))
                                        {
                                          t_63 = ATgetArgument(s_63, 0);
                                          u_63 = ATgetArgument(s_63, 1);
                                          w_61 :
                                          if(match_cons(u_63, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_63))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_63), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_63)))));
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
                    t = zip_1(t, q_2);
                    y_63 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_62), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_62), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = conc_0(t);
                    a_64 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_64), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(d_62), not_null(m_62))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(y_63)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(d_62), not_null(a_63))))));
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
  ATerm t_64 = NULL,a_65 = NULL,b_65 = NULL;
  t_64 = t;
  s_64 :
  if(match_cons(t_64, sym_Cong_2))
    {
      a_65 = ATgetArgument(t_64, 0);
      b_65 = ATgetArgument(t_64, 1);
      {
        ATerm l_65 = NULL;
        t = not_null(b_65);
        {
          ATerm r_2 (ATerm t)
          {
            ATerm g_65 = NULL,h_65 = NULL;
            h_65 = t;
            q_64 :
            if(match_cons(h_65, sym_Match_1))
              {
                g_65 = ATgetArgument(h_65, 0);
                t = not_null(g_65);
              }
            else
              {
                if(match_cons(h_65, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, r_2);
          l_65 = t;
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(a_65), not_null(l_65)));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm x_65 = NULL,a_66 = NULL,b_66 = NULL;
  x_65 = t;
  v_65 :
  if(match_cons(x_65, sym_Scope_2))
    {
      a_66 = ATgetArgument(x_65, 0);
      b_66 = ATgetArgument(x_65, 1);
      w_65 :
      if(match_cons(a_66, sym_Nil_0))
        t = not_null(b_66);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL;
  s_66 = t;
  k_66 :
  if(match_cons(s_66, sym_Choice_2))
    {
      t_66 = ATgetArgument(s_66, 0);
      r_66 = ATgetArgument(s_66, 1);
      if(t_66 != NULL && t_66 != r_66)
        _fail(r_66);
      else
        t_66 = r_66;
      t = not_null(t_66);
    }
  else
    {
      if(match_cons(s_66, sym_LChoice_2))
        {
          t_66 = ATgetArgument(s_66, 0);
          r_66 = ATgetArgument(s_66, 1);
          if(t_66 != NULL && t_66 != r_66)
            _fail(r_66);
          else
            t_66 = r_66;
          t = not_null(t_66);
        }
      else
        {
          if(match_cons(s_66, sym_Where_1))
            {
              t_66 = ATgetArgument(s_66, 0);
              l_66 :
              if(match_cons(t_66, sym_Where_1))
                {
                  u_66 = ATgetArgument(t_66, 0);
                  t = (ATerm) ATmakeAppl(sym_Where_1, not_null(u_66));
                }
              else
                {
                  if(match_cons(t_66, sym_Seq_2))
                    {
                      u_66 = ATgetArgument(t_66, 0);
                      w_66 = ATgetArgument(t_66, 1);
                      m_66 :
                      if(match_cons(u_66, sym_Where_1))
                        {
                          v_66 = ATgetArgument(u_66, 0);
                          n_66 :
                          if(match_cons(w_66, sym_Seq_2))
                            {
                              x_66 = ATgetArgument(w_66, 0);
                              z_66 = ATgetArgument(w_66, 1);
                              o_66 :
                              if(match_cons(x_66, sym_Build_1))
                                {
                                  y_66 = ATgetArgument(x_66, 0);
                                  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_66), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_66)), not_null(z_66))));
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
              if(match_cons(s_66, sym_Not_1))
                {
                  t_66 = ATgetArgument(s_66, 0);
                  p_66 :
                  if(match_cons(t_66, sym_Not_1))
                    {
                      u_66 = ATgetArgument(t_66, 0);
                      t = (ATerm) ATmakeAppl(sym_Test_1, not_null(u_66));
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(s_66, sym_Test_1))
                    {
                      t_66 = ATgetArgument(s_66, 0);
                      q_66 :
                      if(match_cons(t_66, sym_Test_1))
                        {
                          u_66 = ATgetArgument(t_66, 0);
                          t = (ATerm) ATmakeAppl(sym_Test_1, not_null(u_66));
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
  ATerm v_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL;
  v_67 = t;
  r_67 :
  if(match_cons(v_67, sym_Choice_2))
    {
      a_68 = ATgetArgument(v_67, 0);
      d_68 = ATgetArgument(v_67, 1);
      s_67 :
      if(match_cons(a_68, sym_Choice_2))
        {
          b_68 = ATgetArgument(a_68, 0);
          c_68 = ATgetArgument(a_68, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(b_68), (ATerm) ATmakeAppl(sym_Choice_2, not_null(c_68), not_null(d_68)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(v_67, sym_Seq_2))
        {
          a_68 = ATgetArgument(v_67, 0);
          d_68 = ATgetArgument(v_67, 1);
          t_67 :
          if(match_cons(a_68, sym_Seq_2))
            {
              b_68 = ATgetArgument(a_68, 0);
              c_68 = ATgetArgument(a_68, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_68), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_68), not_null(d_68)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(v_67, sym_LChoice_2))
            {
              a_68 = ATgetArgument(v_67, 0);
              d_68 = ATgetArgument(v_67, 1);
              u_67 :
              if(match_cons(a_68, sym_LChoice_2))
                {
                  b_68 = ATgetArgument(a_68, 0);
                  c_68 = ATgetArgument(a_68, 1);
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(b_68), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(c_68), not_null(d_68)));
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
  ATerm n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL;
  p_69 = t;
  j_69 :
  if(match_cons(p_69, sym_Seqs_1))
    {
      q_69 = ATgetArgument(p_69, 0);
      k_69 :
      if(match_cons(q_69, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(q_69, sym_Cons_2))
            {
              n_69 = ATgetArgument(q_69, 0);
              o_69 = ATgetArgument(q_69, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_69), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(o_69)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(p_69, sym_Choices_1))
        {
          q_69 = ATgetArgument(p_69, 0);
          l_69 :
          if(match_cons(q_69, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(q_69, sym_Cons_2))
                {
                  n_69 = ATgetArgument(q_69, 0);
                  o_69 = ATgetArgument(q_69, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_69), (ATerm) ATmakeAppl(sym_Choices_1, not_null(o_69)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(p_69, sym_LChoices_1))
            {
              q_69 = ATgetArgument(p_69, 0);
              m_69 :
              if(match_cons(q_69, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(q_69, sym_Cons_2))
                    {
                      n_69 = ATgetArgument(q_69, 0);
                      o_69 = ATgetArgument(q_69, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_69), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(o_69)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(p_69, sym_Lets_2))
                {
                  q_69 = ATgetArgument(p_69, 0);
                  r_69 = ATgetArgument(p_69, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(q_69), not_null(r_69));
                }
              else
                {
                  if(match_cons(p_69, sym_BA_2))
                    {
                      q_69 = ATgetArgument(p_69, 0);
                      r_69 = ATgetArgument(p_69, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_69)), not_null(q_69));
                    }
                  else
                    {
                      if(match_cons(p_69, sym_MA_2))
                        {
                          q_69 = ATgetArgument(p_69, 0);
                          r_69 = ATgetArgument(p_69, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_69)), not_null(r_69));
                        }
                      else
                        {
                          if(match_cons(p_69, sym_AM_2))
                            {
                              q_69 = ATgetArgument(p_69, 0);
                              r_69 = ATgetArgument(p_69, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_69), (ATerm) ATmakeAppl(sym_Match_1, not_null(r_69)));
                            }
                          else
                            {
                              if(match_cons(p_69, sym_BAM_3))
                                {
                                  q_69 = ATgetArgument(p_69, 0);
                                  r_69 = ATgetArgument(p_69, 1);
                                  s_69 = ATgetArgument(p_69, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_69)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_69), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(s_69)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(p_69, sym_InfixApp_3))
                                    {
                                      q_69 = ATgetArgument(p_69, 0);
                                      r_69 = ATgetArgument(p_69, 1);
                                      s_69 = ATgetArgument(p_69, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(r_69), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_69), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_69), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm j_71 = NULL,k_71 = NULL;
  j_71 = t;
  h_71 :
  if(match_cons(j_71, sym_Where_1))
    {
      k_71 = ATgetArgument(j_71, 0);
      i_71 :
      if(match_cons(k_71, sym_Fail_0))
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
  ATerm q_71 = NULL,t_71 = NULL,u_71 = NULL;
  q_71 = t;
  o_71 :
  if(match_cons(q_71, sym_LChoice_2))
    {
      t_71 = ATgetArgument(q_71, 0);
      u_71 = ATgetArgument(q_71, 1);
      p_71 :
      if(match_cons(u_71, sym_Fail_0))
        t = not_null(t_71);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL;
  i_72 = t;
  g_72 :
  if(match_cons(i_72, sym_LChoice_2))
    {
      j_72 = ATgetArgument(i_72, 0);
      k_72 = ATgetArgument(i_72, 1);
      h_72 :
      if(match_cons(j_72, sym_Fail_0))
        t = not_null(k_72);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm q_72 = NULL,r_72 = NULL,s_72 = NULL;
  q_72 = t;
  o_72 :
  if(match_cons(q_72, sym_Choice_2))
    {
      r_72 = ATgetArgument(q_72, 0);
      s_72 = ATgetArgument(q_72, 1);
      p_72 :
      if(match_cons(s_72, sym_Fail_0))
        t = not_null(r_72);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL;
  d_73 = t;
  b_73 :
  if(match_cons(d_73, sym_Choice_2))
    {
      e_73 = ATgetArgument(d_73, 0);
      f_73 = ATgetArgument(d_73, 1);
      c_73 :
      if(match_cons(e_73, sym_Fail_0))
        t = not_null(f_73);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm l_73 = NULL,m_73 = NULL,n_73 = NULL;
  l_73 = t;
  k_73 :
  if(match_cons(l_73, sym_Cong_2))
    {
      m_73 = ATgetArgument(l_73, 0);
      n_73 = ATgetArgument(l_73, 1);
      t = not_null(n_73);
      {
        ATerm s_2 (ATerm t)
        {
          ATerm q_73 = NULL;
          q_73 = t;
          j_73 :
          if(!(match_cons(q_73, sym_Fail_0)))
            _fail(t);
          return(t);
        }
        t = fetch_1(t, s_2);
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL;
  v_73 = t;
  t_73 :
  if(match_cons(v_73, sym_Path_2))
    {
      w_73 = ATgetArgument(v_73, 0);
      x_73 = ATgetArgument(v_73, 1);
      u_73 :
      if(match_cons(x_73, sym_Fail_0))
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
  ATerm f_74 = NULL,i_74 = NULL;
  f_74 = t;
  c_74 :
  if(match_cons(f_74, sym_One_1))
    {
      i_74 = ATgetArgument(f_74, 0);
      e_74 :
      if(match_cons(i_74, sym_Fail_0))
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
  ATerm n_74 = NULL,r_74 = NULL;
  n_74 = t;
  l_74 :
  if(match_cons(n_74, sym_Some_1))
    {
      r_74 = ATgetArgument(n_74, 0);
      m_74 :
      if(match_cons(r_74, sym_Fail_0))
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
  ATerm w_74 = NULL,z_74 = NULL,a_75 = NULL;
  w_74 = t;
  u_74 :
  if(match_cons(w_74, sym_Rec_2))
    {
      z_74 = ATgetArgument(w_74, 0);
      a_75 = ATgetArgument(w_74, 1);
      v_74 :
      if(match_cons(a_75, sym_Fail_0))
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
  ATerm g_75 = NULL,h_75 = NULL,i_75 = NULL;
  g_75 = t;
  e_75 :
  if(match_cons(g_75, sym_Scope_2))
    {
      h_75 = ATgetArgument(g_75, 0);
      i_75 = ATgetArgument(g_75, 1);
      f_75 :
      if(match_cons(i_75, sym_Fail_0))
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
  ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL;
  u_75 = t;
  s_75 :
  if(match_cons(u_75, sym_Seq_2))
    {
      v_75 = ATgetArgument(u_75, 0);
      w_75 = ATgetArgument(u_75, 1);
      t_75 :
      if(match_cons(v_75, sym_Fail_0))
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
  ATerm i_76 = NULL,j_76 = NULL;
  i_76 = t;
  g_76 :
  if(match_cons(i_76, sym_Not_1))
    {
      j_76 = ATgetArgument(i_76, 0);
      h_76 :
      if(match_cons(j_76, sym_Fail_0))
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
  ATerm r_76 = NULL,s_76 = NULL;
  r_76 = t;
  o_76 :
  if(match_cons(r_76, sym_Test_1))
    {
      s_76 = ATgetArgument(r_76, 0);
      q_76 :
      if(match_cons(s_76, sym_Fail_0))
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
  ATerm a_12 = t;
  if(PushChoice()==0)
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = a_12;
      {
        ATerm b_12 = t;
        if(PushChoice()==0)
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = b_12;
            {
              ATerm c_12 = t;
              if(PushChoice()==0)
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = c_12;
                  {
                    ATerm d_12 = t;
                    if(PushChoice()==0)
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = d_12;
                        {
                          ATerm e_12 = t;
                          if(PushChoice()==0)
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = e_12;
                              {
                                ATerm f_12 = t;
                                if(PushChoice()==0)
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = f_12;
                                    {
                                      ATerm g_12 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = g_12;
                                          {
                                            ATerm h_12 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = h_12;
                                                {
                                                  ATerm i_12 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = i_12;
                                                      {
                                                        ATerm j_12 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = j_12;
                                                            {
                                                              ATerm k_12 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = k_12;
                                                                  {
                                                                    ATerm l_12 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = l_12;
                                                                        {
                                                                          ATerm m_12 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = m_12;
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
  ATerm x_76 = NULL,y_76 = NULL;
  x_76 = t;
  v_76 :
  if(match_cons(x_76, sym_Match_1))
    {
      y_76 = ATgetArgument(x_76, 0);
      w_76 :
      if(match_cons(y_76, sym_Wld_0))
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
  ATerm d_77 = NULL,e_77 = NULL;
  d_77 = t;
  b_77 :
  if(match_cons(d_77, sym_Where_1))
    {
      e_77 = ATgetArgument(d_77, 0);
      c_77 :
      if(match_cons(e_77, sym_Id_0))
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
  ATerm j_77 = NULL,k_77 = NULL;
  j_77 = t;
  h_77 :
  if(match_cons(j_77, sym_All_1))
    {
      k_77 = ATgetArgument(j_77, 0);
      i_77 :
      if(match_cons(k_77, sym_Id_0))
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
  ATerm p_77 = NULL,u_77 = NULL,v_77 = NULL;
  p_77 = t;
  n_77 :
  if(match_cons(p_77, sym_Rec_2))
    {
      u_77 = ATgetArgument(p_77, 0);
      v_77 = ATgetArgument(p_77, 1);
      o_77 :
      if(match_cons(v_77, sym_Id_0))
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
  ATerm d_78 = NULL,g_78 = NULL,h_78 = NULL;
  d_78 = t;
  b_78 :
  if(match_cons(d_78, sym_Scope_2))
    {
      g_78 = ATgetArgument(d_78, 0);
      h_78 = ATgetArgument(d_78, 1);
      c_78 :
      if(match_cons(h_78, sym_Id_0))
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
  ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL;
  n_78 = t;
  l_78 :
  if(match_cons(n_78, sym_LChoice_2))
    {
      o_78 = ATgetArgument(n_78, 0);
      p_78 = ATgetArgument(n_78, 1);
      m_78 :
      if(match_cons(o_78, sym_Id_0))
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
  ATerm x_78 = NULL,y_78 = NULL,z_78 = NULL;
  x_78 = t;
  v_78 :
  if(match_cons(x_78, sym_Seq_2))
    {
      y_78 = ATgetArgument(x_78, 0);
      z_78 = ATgetArgument(x_78, 1);
      w_78 :
      if(match_cons(z_78, sym_Id_0))
        t = not_null(y_78);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL;
  i_79 = t;
  g_79 :
  if(match_cons(i_79, sym_Seq_2))
    {
      j_79 = ATgetArgument(i_79, 0);
      k_79 = ATgetArgument(i_79, 1);
      h_79 :
      if(match_cons(j_79, sym_Id_0))
        t = not_null(k_79);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm q_79 = NULL,r_79 = NULL;
  q_79 = t;
  o_79 :
  if(match_cons(q_79, sym_Not_1))
    {
      r_79 = ATgetArgument(q_79, 0);
      p_79 :
      if(match_cons(r_79, sym_Id_0))
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
  ATerm x_79 = NULL,y_79 = NULL;
  x_79 = t;
  u_79 :
  if(match_cons(x_79, sym_Test_1))
    {
      y_79 = ATgetArgument(x_79, 0);
      v_79 :
      if(match_cons(y_79, sym_Id_0))
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
  ATerm n_12 = t;
  if(PushChoice()==0)
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = n_12;
      {
        ATerm o_12 = t;
        if(PushChoice()==0)
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = o_12;
            {
              ATerm p_12 = t;
              if(PushChoice()==0)
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = p_12;
                  {
                    ATerm q_12 = t;
                    if(PushChoice()==0)
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = q_12;
                        {
                          ATerm r_12 = t;
                          if(PushChoice()==0)
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = r_12;
                              {
                                ATerm s_12 = t;
                                if(PushChoice()==0)
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = s_12;
                                    {
                                      ATerm t_12 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = t_12;
                                          {
                                            ATerm u_12 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = u_12;
                                                {
                                                  ATerm v_12 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = v_12;
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
  ATerm w_12 = t;
  if(PushChoice()==0)
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = w_12;
      {
        ATerm x_12 = t;
        if(PushChoice()==0)
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = x_12;
            {
              ATerm y_12 = t;
              if(PushChoice()==0)
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = y_12;
                  {
                    ATerm z_12 = t;
                    if(PushChoice()==0)
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = z_12;
                        {
                          ATerm a_13 = t;
                          if(PushChoice()==0)
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = a_13;
                              {
                                ATerm m_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = m_13;
                                    {
                                      ATerm n_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = n_13;
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
ATerm at_end_1 (ATerm t, ATerm e_78 (ATerm))
{
  ATerm a_80 (ATerm t)
  {
    ATerm o_13 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, a_80);
        PopChoice();
      }
    else
      {
        t = o_13;
        t = Nil_0(t);
        t = e_78(t);
      }
    return(t);
  }
  t = a_80(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm f_80 = NULL,g_80 = NULL,j_80 = NULL,k_80 = NULL,n_80 = NULL;
  f_80 = t;
  c_80 :
  if(match_cons(f_80, sym_TCons_2))
    {
      g_80 = ATgetArgument(f_80, 0);
      j_80 = ATgetArgument(f_80, 1);
      d_80 :
      if(match_cons(j_80, sym_TCons_2))
        {
          k_80 = ATgetArgument(j_80, 0);
          n_80 = ATgetArgument(j_80, 1);
          e_80 :
          if(match_cons(n_80, sym_TNil_0))
            {
              t = not_null(g_80);
              {
                ATerm t_2 (ATerm t)
                {
                  t = not_null(k_80);
                  return(t);
                }
                t = at_end_1(t, t_2);
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
  ATerm c_82 = NULL,d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL;
  g_82 = t;
  o_81 :
  if(match_cons(g_82, sym_Seq_2))
    {
      h_82 = ATgetArgument(g_82, 0);
      k_82 = ATgetArgument(g_82, 1);
      p_81 :
      if(match_cons(h_82, sym_Matrix_2))
        {
          i_82 = ATgetArgument(h_82, 0);
          j_82 = ATgetArgument(h_82, 1);
          q_81 :
          if(match_cons(j_82, sym_Cons_2))
            {
              c_82 = ATgetArgument(j_82, 0);
              f_82 = ATgetArgument(j_82, 1);
              r_81 :
              if(match_cons(c_82, sym_Row_2))
                {
                  d_82 = ATgetArgument(c_82, 0);
                  e_82 = ATgetArgument(c_82, 1);
                  s_81 :
                  if(match_cons(f_82, sym_Nil_0))
                    t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(i_82), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Row_2, not_null(d_82), (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_82), not_null(k_82))), (ATerm) ATmakeAppl(sym_Nil_0)));
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
      if(match_cons(g_82, sym_Scope_2))
        {
          h_82 = ATgetArgument(g_82, 0);
          k_82 = ATgetArgument(g_82, 1);
          t_81 :
          if(match_cons(k_82, sym_Matrix_2))
            {
              l_82 = ATgetArgument(k_82, 0);
              o_82 = ATgetArgument(k_82, 1);
              {
                ATerm b_83 = NULL;
                t = not_null(o_82);
                {
                  ATerm u_2 (ATerm t)
                  {
                    ATerm w_82 = NULL,x_82 = NULL,y_82 = NULL;
                    w_82 = t;
                    a_81 :
                    if(match_cons(w_82, sym_Row_2))
                      {
                        x_82 = ATgetArgument(w_82, 0);
                        y_82 = ATgetArgument(w_82, 1);
                        t = (ATerm) ATmakeAppl(sym_Row_2, not_null(x_82), (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_82), not_null(y_82)));
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = map_1(t, u_2);
                  b_83 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(l_82), not_null(b_83));
                }
              }
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(g_82, sym_Choice_2))
            {
              h_82 = ATgetArgument(g_82, 0);
              k_82 = ATgetArgument(g_82, 1);
              u_81 :
              if(match_cons(h_82, sym_Matrix_2))
                {
                  i_82 = ATgetArgument(h_82, 0);
                  j_82 = ATgetArgument(h_82, 1);
                  v_81 :
                  if(match_cons(k_82, sym_Matrix_2))
                    {
                      l_82 = ATgetArgument(k_82, 0);
                      o_82 = ATgetArgument(k_82, 1);
                      {
                        ATerm h_83 = NULL;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                        {
                          ATerm j_83 = NULL;
                          t = union_0(t);
                          h_83 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = conc_0(t);
                          j_83 = t;
                          t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(h_83), not_null(j_83));
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(k_82, sym_Choice_2))
                        {
                          l_82 = ATgetArgument(k_82, 0);
                          o_82 = ATgetArgument(k_82, 1);
                          w_81 :
                          if(match_cons(l_82, sym_Matrix_2))
                            {
                              m_82 = ATgetArgument(l_82, 0);
                              n_82 = ATgetArgument(l_82, 1);
                              {
                                ATerm q_83 = NULL;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm s_83 = NULL;
                                  t = union_0(t);
                                  q_83 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = conc_0(t);
                                  s_83 = t;
                                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(q_83), not_null(s_83)), not_null(o_82));
                                }
                              }
                            }
                          else
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(k_82, sym_LChoice_2))
                            {
                              l_82 = ATgetArgument(k_82, 0);
                              o_82 = ATgetArgument(k_82, 1);
                              x_81 :
                              if(match_cons(l_82, sym_Matrix_2))
                                {
                                  m_82 = ATgetArgument(l_82, 0);
                                  n_82 = ATgetArgument(l_82, 1);
                                  {
                                    ATerm z_83 = NULL;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                                    {
                                      ATerm b_84 = NULL;
                                      t = union_0(t);
                                      z_83 = t;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = conc_0(t);
                                      b_84 = t;
                                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(z_83), not_null(b_84)), not_null(o_82));
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
              if(match_cons(g_82, sym_LChoice_2))
                {
                  h_82 = ATgetArgument(g_82, 0);
                  k_82 = ATgetArgument(g_82, 1);
                  y_81 :
                  if(match_cons(h_82, sym_Matrix_2))
                    {
                      i_82 = ATgetArgument(h_82, 0);
                      j_82 = ATgetArgument(h_82, 1);
                      z_81 :
                      if(match_cons(k_82, sym_Matrix_2))
                        {
                          l_82 = ATgetArgument(k_82, 0);
                          o_82 = ATgetArgument(k_82, 1);
                          {
                            ATerm p_84 = NULL;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                            {
                              ATerm r_84 = NULL;
                              t = union_0(t);
                              p_84 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = conc_0(t);
                              r_84 = t;
                              t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(p_84), not_null(r_84));
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(k_82, sym_LChoice_2))
                            {
                              l_82 = ATgetArgument(k_82, 0);
                              o_82 = ATgetArgument(k_82, 1);
                              a_82 :
                              if(match_cons(l_82, sym_Matrix_2))
                                {
                                  m_82 = ATgetArgument(l_82, 0);
                                  n_82 = ATgetArgument(l_82, 1);
                                  {
                                    ATerm y_84 = NULL;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                                    {
                                      ATerm a_85 = NULL;
                                      t = union_0(t);
                                      y_84 = t;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = conc_0(t);
                                      a_85 = t;
                                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(y_84), not_null(a_85)), not_null(o_82));
                                    }
                                  }
                                }
                              else
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(k_82, sym_Choice_2))
                                {
                                  l_82 = ATgetArgument(k_82, 0);
                                  o_82 = ATgetArgument(k_82, 1);
                                  b_82 :
                                  if(match_cons(l_82, sym_Matrix_2))
                                    {
                                      m_82 = ATgetArgument(l_82, 0);
                                      n_82 = ATgetArgument(l_82, 1);
                                      {
                                        ATerm j_85 = NULL;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        {
                                          ATerm l_85 = NULL;
                                          t = union_0(t);
                                          j_85 = t;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                                          t = conc_0(t);
                                          l_85 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(j_85), not_null(l_85)), not_null(o_82));
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
ATerm foldr_3 (ATerm t, ATerm y_72 (ATerm), ATerm z_72 (ATerm), ATerm a_73 (ATerm))
{
  ATerm s_13 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = y_72(t);
      PopChoice();
    }
  else
    {
      t = s_13;
      {
        ATerm o_86 = NULL,p_86 = NULL,q_86 = NULL;
        o_86 = t;
        n_86 :
        if(match_cons(o_86, sym_Cons_2))
          {
            p_86 = ATgetArgument(o_86, 0);
            q_86 = ATgetArgument(o_86, 1);
            {
              ATerm t_86 = NULL;
              t = not_null(p_86);
              {
                ATerm v_86 = NULL;
                t = a_73(t);
                t_86 = t;
                t = not_null(q_86);
                t = foldr_3(t, y_72, z_72, a_73);
                v_86 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_86), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_86), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = z_72(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm o_74 (ATerm), ATerm p_74 (ATerm), ATerm q_74 (ATerm))
{
  ATerm g_87 = NULL;
  ATerm i_87 = NULL;
  g_87 = t;
  {
    ATerm j_87 = NULL;
    ATerm l_87 = NULL,m_87 = NULL,n_87 = NULL,o_87 = NULL,p_87 = NULL;
    t = not_null(g_87);
    j_87 = t;
    t = SSL_explode_term(not_null(j_87));
    l_87 = t;
    d_87 :
    if(match_cons(l_87, sym_TCons_2))
      {
        m_87 = ATgetArgument(l_87, 0);
        n_87 = ATgetArgument(l_87, 1);
        e_87 :
        if(match_cons(n_87, sym_TCons_2))
          {
            o_87 = ATgetArgument(n_87, 0);
            p_87 = ATgetArgument(n_87, 1);
            f_87 :
            if(match_cons(p_87, sym_TNil_0))
              {
                if(i_87 != NULL && i_87 != o_87)
                  _fail(o_87);
                else
                  i_87 = o_87;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(i_87);
    t = foldr_3(t, o_74, p_74, q_74);
  }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm w_87 (ATerm t)
  {
    ATerm a_14 = t;
    if(PushChoice()==0)
      {
        ATerm u_87 = NULL;
        t = x_74(t);
        u_87 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_87), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = a_14;
        {
          ATerm v_2 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, v_2, union_0, w_87);
        }
      }
    return(t);
  }
  t = w_87(t);
  return(t);
}
ATerm collect_offsets_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm a_88 = NULL,b_88 = NULL;
    a_88 = t;
    z_87 :
    if(match_cons(a_88, sym_Off_1))
      {
        b_88 = ATgetArgument(a_88, 0);
        t = not_null(b_88);
      }
    else
      _fail(t);
    return(t);
  }
  t = collect_1(t, w_2);
  return(t);
}
ATerm CollectSubst_0 (ATerm t)
{
  ATerm l_88 = NULL,m_88 = NULL,n_88 = NULL,o_88 = NULL,p_88 = NULL,q_88 = NULL,r_88 = NULL;
  l_88 = t;
  g_88 :
  if(match_cons(l_88, sym_As_2))
    {
      m_88 = ATgetArgument(l_88, 0);
      o_88 = ATgetArgument(l_88, 1);
      h_88 :
      if(match_cons(m_88, sym_Off_1))
        {
          n_88 = ATgetArgument(m_88, 0);
          i_88 :
          if(match_cons(o_88, sym_Var_1))
            {
              p_88 = ATgetArgument(o_88, 0);
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_88)), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_88))), (ATerm) ATmakeAppl(sym_Nil_0));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(m_88, sym_Var_1))
            {
              n_88 = ATgetArgument(m_88, 0);
              j_88 :
              if(match_cons(o_88, sym_As_2))
                {
                  p_88 = ATgetArgument(o_88, 0);
                  r_88 = ATgetArgument(o_88, 1);
                  k_88 :
                  if(match_cons(p_88, sym_Off_1))
                    {
                      q_88 = ATgetArgument(p_88, 0);
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_88)), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_88))), (ATerm) ATmakeAppl(sym_Nil_0));
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
  ATerm e_14 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = e_14;
      t = Cons_2(t, _id, _id);
    }
  return(t);
}
ATerm IgnoreVar_0 (ATerm t)
{
  ATerm g_89 = NULL,h_89 = NULL,i_89 = NULL,j_89 = NULL,k_89 = NULL,l_89 = NULL,m_89 = NULL;
  g_89 = t;
  b_89 :
  if(match_cons(g_89, sym_As_2))
    {
      h_89 = ATgetArgument(g_89, 0);
      j_89 = ATgetArgument(g_89, 1);
      c_89 :
      if(match_cons(h_89, sym_Off_1))
        {
          i_89 = ATgetArgument(h_89, 0);
          d_89 :
          if(match_cons(j_89, sym_Var_1))
            {
              k_89 = ATgetArgument(j_89, 0);
              t = not_null(i_89);
              t = is_list_0(t);
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(i_89)), (ATerm) ATmakeAppl(sym_Wld_0));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(h_89, sym_Var_1))
            {
              i_89 = ATgetArgument(h_89, 0);
              e_89 :
              if(match_cons(j_89, sym_As_2))
                {
                  k_89 = ATgetArgument(j_89, 0);
                  m_89 = ATgetArgument(j_89, 1);
                  f_89 :
                  if(match_cons(k_89, sym_Off_1))
                    {
                      l_89 = ATgetArgument(k_89, 0);
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(l_89)), not_null(m_89));
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
ATerm HdMember_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm x_89 = NULL,y_89 = NULL,z_89 = NULL;
  x_89 = t;
  w_89 :
  if(match_cons(x_89, sym_Cons_2))
    {
      y_89 = ATgetArgument(x_89, 0);
      z_89 = ATgetArgument(x_89, 1);
      t = d_74(t);
      {
        ATerm x_2 (ATerm t)
        {
          ATerm c_90 = NULL;
          c_90 = t;
          if(y_89 != NULL && y_89 != c_90)
            _fail(c_90);
          else
            y_89 = c_90;
          return(t);
        }
        t = fetch_1(t, x_2);
        t = not_null(z_89);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL,n_90 = NULL;
  j_90 = t;
  g_90 :
  if(match_cons(j_90, sym_TCons_2))
    {
      k_90 = ATgetArgument(j_90, 0);
      l_90 = ATgetArgument(j_90, 1);
      h_90 :
      if(match_cons(l_90, sym_TCons_2))
        {
          m_90 = ATgetArgument(l_90, 0);
          n_90 = ATgetArgument(l_90, 1);
          i_90 :
          if(match_cons(n_90, sym_TNil_0))
            {
              t = not_null(k_90);
              {
                ATerm r_90 (ATerm t)
                {
                  ATerm f_14 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(m_90);
                      PopChoice();
                    }
                  else
                    {
                      t = f_14;
                      {
                        ATerm g_14 = t;
                        if(PushChoice()==0)
                          {
                            ATerm y_2 (ATerm t)
                            {
                              t = not_null(m_90);
                              return(t);
                            }
                            t = HdMember_1(t, y_2);
                            t = r_90(t);
                            PopChoice();
                          }
                        else
                          {
                            t = g_14;
                            t = Cons_2(t, _id, r_90);
                          }
                      }
                    }
                  return(t);
                }
                t = r_90(t);
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
ATerm foldr_2 (ATerm t, ATerm w_72 (ATerm), ATerm x_72 (ATerm))
{
  ATerm h_14 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = w_72(t);
      PopChoice();
    }
  else
    {
      t = h_14;
      {
        ATerm v_90 = NULL,w_90 = NULL,x_90 = NULL;
        v_90 = t;
        u_90 :
        if(match_cons(v_90, sym_Cons_2))
          {
            w_90 = ATgetArgument(v_90, 0);
            x_90 = ATgetArgument(v_90, 1);
            {
              ATerm a_91 = NULL;
              t = not_null(x_90);
              t = foldr_2(t, w_72, x_72);
              a_91 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_90), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_91), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = x_72(t);
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
  ATerm z_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = foldr_2(t, z_2, union_0);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm o_91 = NULL,p_91 = NULL,q_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL,u_91 = NULL,v_91 = NULL,w_91 = NULL,x_91 = NULL,y_91 = NULL,z_91 = NULL,a_92 = NULL;
  o_91 = t;
  f_91 :
  if(match_cons(o_91, sym_TCons_2))
    {
      p_91 = ATgetArgument(o_91, 0);
      u_91 = ATgetArgument(o_91, 1);
      g_91 :
      if(match_cons(p_91, sym_TCons_2))
        {
          q_91 = ATgetArgument(p_91, 0);
          r_91 = ATgetArgument(p_91, 1);
          h_91 :
          if(match_cons(r_91, sym_TCons_2))
            {
              s_91 = ATgetArgument(r_91, 0);
              t_91 = ATgetArgument(r_91, 1);
              i_91 :
              if(match_cons(t_91, sym_TNil_0))
                {
                  j_91 :
                  if(match_cons(u_91, sym_TCons_2))
                    {
                      v_91 = ATgetArgument(u_91, 0);
                      a_92 = ATgetArgument(u_91, 1);
                      k_91 :
                      if(match_cons(v_91, sym_TCons_2))
                        {
                          w_91 = ATgetArgument(v_91, 0);
                          x_91 = ATgetArgument(v_91, 1);
                          l_91 :
                          if(match_cons(x_91, sym_TCons_2))
                            {
                              y_91 = ATgetArgument(x_91, 0);
                              z_91 = ATgetArgument(x_91, 1);
                              m_91 :
                              if(match_cons(z_91, sym_TNil_0))
                                {
                                  n_91 :
                                  if(match_cons(a_92, sym_TNil_0))
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_91), not_null(w_91)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_91), not_null(y_91)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm k_92 = NULL,l_92 = NULL,m_92 = NULL;
  k_92 = t;
  j_92 :
  if(match_cons(k_92, sym_Cons_2))
    {
      l_92 = ATgetArgument(k_92, 0);
      m_92 = ATgetArgument(k_92, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_92), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_92), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm s_92 = NULL;
  s_92 = t;
  r_92 :
  if(match_cons(s_92, sym_Nil_0))
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
ATerm list_1 (ATerm t, ATerm s_77 (ATerm))
{
  ATerm u_92 (ATerm t)
  {
    ATerm i_14 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = i_14;
        t = Cons_2(t, s_77, u_92);
      }
    return(t);
  }
  t = u_92(t);
  return(t);
}
ATerm CollectSplit_2 (ATerm t, ATerm n_75 (ATerm), ATerm o_75 (ATerm))
{
  ATerm m_93 = NULL;
  ATerm o_93 = NULL,p_93 = NULL,x_93 = NULL,z_93 = NULL,a_94 = NULL,b_94 = NULL,c_94 = NULL;
  m_93 = t;
  {
    ATerm q_93 = NULL;
    ATerm s_93 = NULL,t_93 = NULL,u_93 = NULL,v_93 = NULL,w_93 = NULL;
    t = not_null(m_93);
    q_93 = t;
    t = SSL_explode_term(not_null(q_93));
    s_93 = t;
    y_92 :
    if(match_cons(s_93, sym_TCons_2))
      {
        t_93 = ATgetArgument(s_93, 0);
        u_93 = ATgetArgument(s_93, 1);
        z_92 :
        if(match_cons(u_93, sym_TCons_2))
          {
            v_93 = ATgetArgument(u_93, 0);
            w_93 = ATgetArgument(u_93, 1);
            a_93 :
            if(match_cons(w_93, sym_TNil_0))
              {
                if(o_93 != NULL && o_93 != t_93)
                  _fail(t_93);
                else
                  o_93 = t_93;
                if(p_93 != NULL && p_93 != v_93)
                  _fail(v_93);
                else
                  p_93 = v_93;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(p_93);
    t = list_1(t, n_75);
    t = unzip_0(t);
    x_93 = t;
    j_93 :
    if(match_cons(x_93, sym_TCons_2))
      {
        z_93 = ATgetArgument(x_93, 0);
        a_94 = ATgetArgument(x_93, 1);
        k_93 :
        if(match_cons(a_94, sym_TCons_2))
          {
            b_94 = ATgetArgument(a_94, 0);
            c_94 = ATgetArgument(a_94, 1);
            l_93 :
            if(match_cons(c_94, sym_TNil_0))
              {
                ATerm f_94 = NULL;
                ATerm h_94 = NULL,i_94 = NULL,j_94 = NULL,l_94 = NULL,m_94 = NULL;
                t = SSL_mkterm(not_null(o_93), not_null(z_93));
                f_94 = t;
                t = o_75(t);
                h_94 = t;
                g_93 :
                if(match_cons(h_94, sym_TCons_2))
                  {
                    i_94 = ATgetArgument(h_94, 0);
                    j_94 = ATgetArgument(h_94, 1);
                    h_93 :
                    if(match_cons(j_94, sym_TCons_2))
                      {
                        l_94 = ATgetArgument(j_94, 0);
                        m_94 = ATgetArgument(j_94, 1);
                        i_93 :
                        if(match_cons(m_94, sym_TNil_0))
                          {
                            ATerm p_94 = NULL;
                            t = not_null(b_94);
                            {
                              ATerm r_94 = NULL;
                              t = unions_0(t);
                              p_94 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_94), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_94), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = union_0(t);
                              r_94 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_94), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_94), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm c_95 = NULL;
  c_95 = t;
  t = SSL_is_int(not_null(c_95));
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_95 = NULL;
  g_95 = t;
  t = SSL_is_string(not_null(g_95));
  return(t);
}
ATerm collect_split_1 (ATerm t, ATerm j_75 (ATerm))
{
  ATerm j_95 (ATerm t)
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
        t = j_75(t);
        PopChoice();
      }
    else
      {
        t = j_14;
        t = CollectSplit_2(t, j_95, j_75);
      }
    return(t);
  }
  t = j_95(t);
  return(t);
}
ATerm collect_split_2 (ATerm t, ATerm l_75 (ATerm), ATerm m_75 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    ATerm b_3 (ATerm t)
    {
      t = try_1(t, l_75);
      return(t);
    }
    ATerm c_3 (ATerm t)
    {
      ATerm l_14 = t;
      if(PushChoice()==0)
        {
          t = m_75(t);
          PopChoice();
        }
      else
        {
          t = l_14;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      return(t);
    }
    t = split_2(t, b_3, c_3);
    return(t);
  }
  t = collect_split_1(t, a_3);
  return(t);
}
ATerm collect_substitutions_0 (ATerm t)
{
  t = collect_split_2(t, IgnoreVar_0, CollectSubst_0);
  return(t);
}
ATerm Annotate_1 (ATerm t, ATerm e_85 (ATerm))
{
  ATerm p_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL;
  p_95 = t;
  m_95 :
  if(match_cons(p_95, sym_TCons_2))
    {
      q_95 = ATgetArgument(p_95, 0);
      r_95 = ATgetArgument(p_95, 1);
      n_95 :
      if(match_cons(r_95, sym_TCons_2))
        {
          s_95 = ATgetArgument(r_95, 0);
          t_95 = ATgetArgument(r_95, 1);
          o_95 :
          if(match_cons(t_95, sym_TNil_0))
            {
              ATerm w_95 = NULL;
              t = e_85(t);
              w_95 = t;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_95), not_null(w_95))), not_null(s_95));
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
  ATerm e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL,i_96 = NULL;
  e_96 = t;
  b_96 :
  if(match_cons(e_96, sym_TCons_2))
    {
      f_96 = ATgetArgument(e_96, 0);
      g_96 = ATgetArgument(e_96, 1);
      c_96 :
      if(match_cons(g_96, sym_TCons_2))
        {
          h_96 = ATgetArgument(g_96, 0);
          i_96 = ATgetArgument(g_96, 1);
          d_96 :
          if(match_cons(i_96, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_96), not_null(h_96));
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
  ATerm q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL;
  q_96 = t;
  n_96 :
  if(match_cons(q_96, sym_TCons_2))
    {
      r_96 = ATgetArgument(q_96, 0);
      s_96 = ATgetArgument(q_96, 1);
      o_96 :
      if(match_cons(s_96, sym_TCons_2))
        {
          t_96 = ATgetArgument(s_96, 0);
          u_96 = ATgetArgument(s_96, 1);
          p_96 :
          if(match_cons(u_96, sym_TNil_0))
            {
              ATerm m_14 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(r_96), not_null(t_96));
                  PopChoice();
                }
              else
                {
                  t = m_14;
                  t = SSL_addr(not_null(r_96), not_null(t_96));
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
  ATerm e_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL,i_97 = NULL,j_97 = NULL,k_97 = NULL;
  e_97 = t;
  a_97 :
  if(match_cons(e_97, sym_TCons_2))
    {
      f_97 = ATgetArgument(e_97, 0);
      g_97 = ATgetArgument(e_97, 1);
      b_97 :
      if(match_cons(g_97, sym_TCons_2))
        {
          h_97 = ATgetArgument(g_97, 0);
          k_97 = ATgetArgument(g_97, 1);
          c_97 :
          if(match_cons(h_97, sym_Cons_2))
            {
              i_97 = ATgetArgument(h_97, 0);
              j_97 = ATgetArgument(h_97, 1);
              d_97 :
              if(match_cons(k_97, sym_TNil_0))
                {
                  ATerm o_97 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_97), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = add_0(t);
                  o_97 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(f_97), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_97), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(o_97), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_97), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm x_97 = NULL,y_97 = NULL,z_97 = NULL,a_98 = NULL,b_98 = NULL;
  x_97 = t;
  t_97 :
  if(match_cons(x_97, sym_TCons_2))
    {
      y_97 = ATgetArgument(x_97, 0);
      z_97 = ATgetArgument(x_97, 1);
      u_97 :
      if(match_cons(z_97, sym_TCons_2))
        {
          a_98 = ATgetArgument(z_97, 0);
          b_98 = ATgetArgument(z_97, 1);
          v_97 :
          if(match_cons(a_98, sym_Nil_0))
            {
              w_97 :
              if(match_cons(b_98, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm a_76 (ATerm), ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm d_76 (ATerm))
{
  ATerm e_98 (ATerm t)
  {
    ATerm n_14 = t;
    if(PushChoice()==0)
      {
        t = a_76(t);
        PopChoice();
      }
    else
      {
        t = n_14;
        t = b_76(t);
        {
          ATerm d_3 (ATerm t)
          {
            t = TCons_2(t, e_98, TNil_0);
            return(t);
          }
          t = TCons_2(t, d_76, d_3);
          t = c_76(t);
        }
      }
    return(t);
  }
  t = e_98(t);
  return(t);
}
ATerm NZip00_0 (ATerm t)
{
  ATerm g_98 = NULL;
  g_98 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_98), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm nzip0_1 (ATerm t, ATerm l_76 (ATerm))
{
  t = NZip00_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, l_76);
  return(t);
}
ATerm Propagate_0 (ATerm t)
{
  ATerm s_98 = NULL,t_98 = NULL,u_98 = NULL,v_98 = NULL,w_98 = NULL,x_98 = NULL,y_98 = NULL;
  ATerm o_99 (ATerm t)
  {
    ATerm j_99 = NULL;
    t = not_null(y_98);
    {
      ATerm e_3 (ATerm t)
      {
        ATerm j_3 (ATerm t)
        {
          t = not_null(x_98);
          return(t);
        }
        t = Annotate_1(t, j_3);
        return(t);
      }
      t = nzip0_1(t, e_3);
      j_99 = t;
      t = not_null(j_99);
    }
    return(t);
  }
  v_98 = t;
  o_98 :
  if(match_cons(v_98, sym_As_2))
    {
      w_98 = ATgetArgument(v_98, 0);
      y_98 = ATgetArgument(v_98, 1);
      p_98 :
      if(match_cons(w_98, sym_Off_1))
        {
          x_98 = ATgetArgument(w_98, 0);
          q_98 :
          if(match_cons(y_98, sym_Op_2))
            {
              u_98 = ATgetArgument(y_98, 0);
              t_98 = ATgetArgument(y_98, 1);
              {
                ATerm o_14 = t;
                if(PushChoice()==0)
                  {
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(x_98)), (ATerm) ATmakeAppl(sym_Op_2, not_null(u_98), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(x_98)), not_null(t_98))));
                    PopChoice();
                  }
                else
                  {
                    t = o_14;
                    t = o_99(t);
                  }
              }
            }
          else
            {
              if(match_cons(y_98, sym_As_2))
                {
                  u_98 = ATgetArgument(y_98, 0);
                  t_98 = ATgetArgument(y_98, 1);
                  r_98 :
                  if(match_cons(u_98, sym_Var_1))
                    {
                      s_98 = ATgetArgument(u_98, 0);
                      {
                        ATerm p_14 = t;
                        if(PushChoice()==0)
                          {
                            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_98)), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(x_98)), not_null(t_98)));
                            PopChoice();
                          }
                        else
                          {
                            t = p_14;
                            t = o_99(t);
                          }
                      }
                    }
                  else
                    t = o_99(t);
                }
              else
                {
                  if(match_cons(y_98, sym_BuildDefault_1))
                    {
                      u_98 = ATgetArgument(y_98, 0);
                      {
                        ATerm q_14 = t;
                        if(PushChoice()==0)
                          {
                            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(x_98)), (ATerm) ATmakeAppl(sym_Wld_0));
                            PopChoice();
                          }
                        else
                          {
                            t = q_14;
                            t = o_99(t);
                          }
                      }
                    }
                  else
                    t = o_99(t);
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
ATerm topdown_1 (ATerm t, ATerm h_80 (ATerm))
{
  ATerm q_99 (ATerm t)
  {
    t = h_80(t);
    t = _all(t, q_99);
    return(t);
  }
  t = q_99(t);
  return(t);
}
ATerm term_to_matrix_0 (ATerm t)
{
  ATerm x_99 = NULL;
  ATerm z_99 = NULL,a_100 = NULL,b_100 = NULL,c_100 = NULL,d_100 = NULL;
  x_99 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_99), (ATerm) ATmakeAppl(sym_Nil_0)));
  {
    ATerm k_3 (ATerm t)
    {
      t = try_1(t, Propagate_0);
      return(t);
    }
    t = topdown_1(t, k_3);
    t = collect_substitutions_0(t);
    z_99 = t;
    u_99 :
    if(match_cons(z_99, sym_TCons_2))
      {
        a_100 = ATgetArgument(z_99, 0);
        b_100 = ATgetArgument(z_99, 1);
        v_99 :
        if(match_cons(b_100, sym_TCons_2))
          {
            c_100 = ATgetArgument(b_100, 0);
            d_100 = ATgetArgument(b_100, 1);
            w_99 :
            if(match_cons(d_100, sym_TNil_0))
              {
                ATerm g_100 = NULL;
                t = not_null(a_100);
                t = collect_offsets_0(t);
                g_100 = t;
                t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(g_100), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Row_2, not_null(a_100), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(c_100))), (ATerm) ATmakeAppl(sym_Nil_0)));
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
  ATerm n_100 = NULL,o_100 = NULL;
  n_100 = t;
  m_100 :
  if(match_cons(n_100, sym_Match_1))
    {
      o_100 = ATgetArgument(n_100, 0);
      t = not_null(o_100);
      t = term_to_matrix_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm w_67 (ATerm), ATerm x_67 (ATerm))
{
  ATerm r_100 (ATerm t)
  {
    ATerm r_14 = t;
    if(PushChoice()==0)
      {
        t = w_67(t);
        t = r_100(t);
        PopChoice();
      }
    else
      {
        t = r_14;
        t = x_67(t);
      }
    return(t);
  }
  t = r_100(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm z_67 (ATerm))
{
  t = repeat_2(t, z_67, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm l_80 (ATerm))
{
  ATerm s_100 (ATerm t)
  {
    t = l_80(t);
    t = _all(t, s_100);
    t = l_80(t);
    return(t);
  }
  t = s_100(t);
  return(t);
}
ATerm match_to_matrix_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm m_3 (ATerm t)
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
    t = repeat_1(t, m_3);
    return(t);
  }
  t = downup_1(t, l_3);
  return(t);
}
ATerm match_to_dfa_0 (ATerm t)
{
  t = match_to_matrix_0(t);
  t = matrix_to_dfa_0(t);
  t = strename_0(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm o_61 (ATerm), ATerm p_61 (ATerm), ATerm q_61 (ATerm))
{
  ATerm y_100 = NULL,a_101 = NULL,b_101 = NULL,c_101 = NULL;
  y_100 = t;
  x_100 :
  if(match_cons(y_100, sym_SDef_3))
    {
      a_101 = ATgetArgument(y_100, 0);
      b_101 = ATgetArgument(y_100, 1);
      c_101 = ATgetArgument(y_100, 2);
      {
        ATerm g_101 = NULL;
        t = not_null(a_101);
        {
          ATerm i_101 = NULL;
          t = o_61(t);
          g_101 = t;
          t = not_null(b_101);
          {
            ATerm k_101 = NULL;
            t = p_61(t);
            i_101 = t;
            t = not_null(c_101);
            t = q_61(t);
            k_101 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(g_101), not_null(i_101), not_null(k_101));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_77 (ATerm))
{
  ATerm r_101 (ATerm t)
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
        t = Cons_2(t, q_77, r_101);
      }
    return(t);
  }
  t = r_101(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm j_60 (ATerm))
{
  ATerm v_101 = NULL,w_101 = NULL;
  v_101 = t;
  u_101 :
  if(match_cons(v_101, sym_Strategies_1))
    {
      w_101 = ATgetArgument(v_101, 0);
      {
        ATerm y_101 = NULL;
        t = not_null(w_101);
        t = j_60(t);
        y_101 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(y_101));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm l_60 (ATerm))
{
  ATerm f_102 = NULL,g_102 = NULL;
  f_102 = t;
  e_102 :
  if(match_cons(f_102, sym_Specification_1))
    {
      g_102 = ATgetArgument(f_102, 0);
      {
        ATerm i_102 = NULL;
        t = not_null(g_102);
        t = l_60(t);
        i_102 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(i_102));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm f_85 (ATerm))
{
  ATerm r_3 (ATerm t)
  {
    ATerm e_4 (ATerm t)
    {
      ATerm f_4 (ATerm t)
      {
        ATerm g_4 (ATerm t)
        {
          ATerm o_4 (ATerm t)
          {
            t = SDef_3(t, _id, _id, f_85);
            return(t);
          }
          t = map_1(t, o_4);
          return(t);
        }
        t = Strategies_1(t, g_4);
        return(t);
      }
      t = Cons_2(t, f_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, e_4);
    return(t);
  }
  t = Specification_1(t, r_3);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm n_102 = NULL;
  n_102 = t;
  m_102 :
  if(!(match_cons(n_102, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm t_62 (ATerm), ATerm u_62 (ATerm))
{
  ATerm s_102 = NULL,t_102 = NULL,u_102 = NULL;
  s_102 = t;
  r_102 :
  if(match_cons(s_102, sym_TCons_2))
    {
      t_102 = ATgetArgument(s_102, 0);
      u_102 = ATgetArgument(s_102, 1);
      {
        ATerm x_102 = NULL;
        t = not_null(t_102);
        {
          ATerm z_102 = NULL;
          t = t_62(t);
          x_102 = t;
          t = not_null(u_102);
          t = u_62(t);
          z_102 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_102), not_null(z_102));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm g_103 = NULL;
  ATerm v_14;
  v_14 = t;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm h_103 = NULL,i_103 = NULL;
      h_103 = t;
      f_103 :
      if(match_cons(h_103, sym_Program_1))
        {
          i_103 = ATgetArgument(h_103, 0);
          if(g_103 != NULL && g_103 != i_103)
            _fail(i_103);
          else
            g_103 = i_103;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, p_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_103), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm l_103 = NULL;
  l_103 = t;
  t = SSL_exit(not_null(l_103));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm s_103 = NULL,t_103 = NULL,u_103 = NULL,v_103 = NULL,w_103 = NULL;
  s_103 = t;
  p_103 :
  if(match_cons(s_103, sym_TCons_2))
    {
      t_103 = ATgetArgument(s_103, 0);
      u_103 = ATgetArgument(s_103, 1);
      q_103 :
      if(match_cons(u_103, sym_TCons_2))
        {
          v_103 = ATgetArgument(u_103, 0);
          w_103 = ATgetArgument(u_103, 1);
          r_103 :
          if(match_cons(w_103, sym_TNil_0))
            {
              ATerm y_14;
              y_14 = t;
              t = SSL_printnl(not_null(t_103), not_null(v_103));
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
ATerm try_1 (ATerm t, ATerm w_79 (ATerm))
{
  ATerm z_14 = t;
  if(PushChoice()==0)
    {
      t = w_79(t);
      PopChoice();
    }
  else
    t = z_14;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm f_104 = NULL,g_104 = NULL;
  ATerm q_4 (ATerm t)
  {
    ATerm r_4 (ATerm t)
    {
      ATerm a_15 = t;
      if(PushChoice()==0)
        {
          ATerm t_4 (ATerm t)
          {
            ATerm h_104 = NULL;
            h_104 = t;
            a_104 :
            if(!(match_cons(h_104, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, t_4);
          PopChoice();
          _fail(t);
        }
      else
        t = a_15;
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
          ATerm i_104 = NULL,j_104 = NULL;
          i_104 = t;
          c_104 :
          if(match_cons(i_104, sym_Runtime_1))
            {
              j_104 = ATgetArgument(i_104, 0);
              if(g_104 != NULL && g_104 != j_104)
                _fail(j_104);
              else
                g_104 = j_104;
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
      {
        ATerm b_5 (ATerm t)
        {
          ATerm f_5 (ATerm t)
          {
            ATerm k_104 = NULL,l_104 = NULL;
            k_104 = t;
            e_104 :
            if(match_cons(k_104, sym_Program_1))
              {
                l_104 = ATgetArgument(k_104, 0);
                if(f_104 != NULL && f_104 != l_104)
                  _fail(l_104);
                else
                  f_104 = l_104;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, f_5);
          return(t);
        }
        ATerm d_5 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, b_5, d_5);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_104), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_104), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, q_4);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm s_104 = NULL,t_104 = NULL,u_104 = NULL,v_104 = NULL,w_104 = NULL;
  s_104 = t;
  p_104 :
  if(match_cons(s_104, sym_TCons_2))
    {
      t_104 = ATgetArgument(s_104, 0);
      u_104 = ATgetArgument(s_104, 1);
      q_104 :
      if(match_cons(u_104, sym_TCons_2))
        {
          v_104 = ATgetArgument(u_104, 0);
          w_104 = ATgetArgument(u_104, 1);
          r_104 :
          if(match_cons(w_104, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(t_104), not_null(v_104));
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
  ATerm e_105 = NULL,f_105 = NULL,g_105 = NULL,h_105 = NULL,i_105 = NULL;
  e_105 = t;
  b_105 :
  if(match_cons(e_105, sym_TCons_2))
    {
      f_105 = ATgetArgument(e_105, 0);
      g_105 = ATgetArgument(e_105, 1);
      c_105 :
      if(match_cons(g_105, sym_TCons_2))
        {
          h_105 = ATgetArgument(g_105, 0);
          i_105 = ATgetArgument(g_105, 1);
          d_105 :
          if(match_cons(i_105, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(f_105), not_null(h_105));
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
  ATerm q_105 = NULL;
  ATerm b_15;
  b_15 = t;
  {
    ATerm g_5 (ATerm t)
    {
      ATerm d_15 = t;
      if(PushChoice()==0)
        {
          ATerm i_5 (ATerm t)
          {
            ATerm r_105 = NULL,s_105 = NULL;
            r_105 = t;
            n_105 :
            if(match_cons(r_105, sym_Output_1))
              {
                s_105 = ATgetArgument(r_105, 0);
                if(q_105 != NULL && q_105 != s_105)
                  _fail(s_105);
                else
                  q_105 = s_105;
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
          t = d_15;
          {
            ATerm t_105 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            t_105 = t;
            if(q_105 != NULL && q_105 != t_105)
              _fail(t_105);
            else
              q_105 = t_105;
          }
        }
      return(t);
    }
    ATerm h_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, g_5, h_5);
  }
  t = b_15;
  {
    ATerm j_5 (ATerm t)
    {
      ATerm k_5 (ATerm t)
      {
        ATerm l_5 (ATerm t)
        {
          t = not_null(q_105);
          return(t);
        }
        t = split_2(t, l_5, _id);
        return(t);
      }
      t = TCons_2(t, k_5, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, j_5);
    {
      ATerm e_15 = t;
      if(PushChoice()==0)
        {
          ATerm q_5 (ATerm t)
          {
            ATerm t_5 (ATerm t)
            {
              ATerm u_105 = NULL;
              u_105 = t;
              p_105 :
              if(!(match_cons(u_105, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, t_5);
            return(t);
          }
          ATerm r_5 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, q_5, r_5);
          PopChoice();
        }
      else
        {
          t = e_15;
          {
            ATerm v_5 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, v_5);
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
ATerm apply_strategy_1 (ATerm t, ATerm z_65 (ATerm))
{
  ATerm c_106 = NULL,e_106 = NULL,f_106 = NULL,g_106 = NULL,h_106 = NULL,i_106 = NULL;
  ATerm f_15;
  f_15 = t;
  t = dtime_0(t);
  t = f_15;
  t = z_65(t);
  {
    ATerm g_15;
    g_15 = t;
    {
      ATerm d_106 = NULL;
      t = dtime_0(t);
      d_106 = t;
      if(c_106 != NULL && c_106 != d_106)
        _fail(d_106);
      else
        c_106 = d_106;
    }
    t = g_15;
    e_106 = t;
    z_105 :
    if(match_cons(e_106, sym_TCons_2))
      {
        f_106 = ATgetArgument(e_106, 0);
        g_106 = ATgetArgument(e_106, 1);
        a_106 :
        if(match_cons(g_106, sym_TCons_2))
          {
            h_106 = ATgetArgument(g_106, 0);
            i_106 = ATgetArgument(g_106, 1);
            b_106 :
            if(match_cons(i_106, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(c_106)), not_null(f_106)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_106), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm o_106 = NULL;
  o_106 = t;
  t = SSL_ReadFromFile(not_null(o_106));
  return(t);
}
ATerm split_2 (ATerm t, ATerm e_79 (ATerm), ATerm f_79 (ATerm))
{
  ATerm u_106 = NULL;
  ATerm w_106 = NULL;
  u_106 = t;
  {
    ATerm y_106 = NULL;
    t = e_79(t);
    w_106 = t;
    t = not_null(u_106);
    t = f_79(t);
    y_106 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_106), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_106), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm g_107 = NULL;
  ATerm h_15;
  h_15 = t;
  {
    ATerm i_15 = t;
    if(PushChoice()==0)
      {
        ATerm w_5 (ATerm t)
        {
          ATerm h_107 = NULL,i_107 = NULL;
          h_107 = t;
          e_107 :
          if(match_cons(h_107, sym_Input_1))
            {
              i_107 = ATgetArgument(h_107, 0);
              if(g_107 != NULL && g_107 != i_107)
                _fail(i_107);
              else
                g_107 = i_107;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, w_5);
        PopChoice();
      }
    else
      {
        t = i_15;
        {
          ATerm j_107 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          j_107 = t;
          if(g_107 != NULL && g_107 != j_107)
            _fail(j_107);
          else
            g_107 = j_107;
        }
      }
  }
  t = h_15;
  {
    ATerm x_5 (ATerm t)
    {
      t = not_null(g_107);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_5);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_107 = NULL;
  n_107 = t;
  m_107 :
  if(!(match_cons(n_107, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_56 (ATerm))
{
  ATerm r_107 = NULL,s_107 = NULL;
  r_107 = t;
  q_107 :
  if(match_cons(r_107, sym_Undefined_1))
    {
      s_107 = ATgetArgument(r_107, 0);
      {
        ATerm u_107 = NULL;
        t = not_null(s_107);
        t = z_56(t);
        u_107 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_107));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_107 = NULL;
  z_107 = t;
  y_107 :
  if(!(match_cons(z_107, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm y_77 (ATerm))
{
  ATerm a_108 (ATerm t)
  {
    ATerm j_15 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, y_77, _id);
        PopChoice();
      }
    else
      {
        t = j_15;
        t = Cons_2(t, _id, a_108);
      }
    return(t);
  }
  t = a_108(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_65 (ATerm))
{
  t = fetch_1(t, d_65);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_65 (ATerm))
{
  ATerm y_5 (ATerm t)
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
  t = option_defined_1(t, y_5);
  t = y_65(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_108 = NULL,h_108 = NULL,i_108 = NULL;
  ATerm m_15;
  m_15 = t;
  {
    ATerm j_108 = NULL,k_108 = NULL,l_108 = NULL,m_108 = NULL,n_108 = NULL,o_108 = NULL,p_108 = NULL;
    j_108 = t;
    c_108 :
    if(match_cons(j_108, sym_TCons_2))
      {
        k_108 = ATgetArgument(j_108, 0);
        l_108 = ATgetArgument(j_108, 1);
        d_108 :
        if(match_cons(l_108, sym_TCons_2))
          {
            m_108 = ATgetArgument(l_108, 0);
            n_108 = ATgetArgument(l_108, 1);
            e_108 :
            if(match_cons(n_108, sym_TCons_2))
              {
                o_108 = ATgetArgument(n_108, 0);
                p_108 = ATgetArgument(n_108, 1);
                f_108 :
                if(match_cons(p_108, sym_TNil_0))
                  {
                    if(g_108 != NULL && g_108 != k_108)
                      _fail(k_108);
                    else
                      g_108 = k_108;
                    if(h_108 != NULL && h_108 != m_108)
                      _fail(m_108);
                    else
                      h_108 = m_108;
                    if(i_108 != NULL && i_108 != o_108)
                      _fail(o_108);
                    else
                      i_108 = o_108;
                    t = SSL_table_put(not_null(g_108), not_null(h_108), not_null(i_108));
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
  ATerm s_108 = NULL;
  s_108 = t;
  t = SSL_table_create(not_null(s_108));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_108 = NULL;
  w_108 = t;
  {
    ATerm n_15;
    n_15 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_108), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = n_15;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm w_64 (ATerm), ATerm x_64 (ATerm))
{
  ATerm c_109 = NULL,d_109 = NULL,e_109 = NULL;
  c_109 = t;
  b_109 :
  if(match_cons(c_109, sym_Cons_2))
    {
      d_109 = ATgetArgument(c_109, 0);
      e_109 = ATgetArgument(c_109, 1);
      {
        ATerm h_109 = NULL;
        t = not_null(d_109);
        t = w_64(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = x_64(t);
        h_109 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_109), not_null(e_109));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm y_64 (ATerm), ATerm z_64 (ATerm))
{
  ATerm p_109 = NULL,q_109 = NULL,r_109 = NULL,s_109 = NULL,t_109 = NULL;
  p_109 = t;
  n_109 :
  if(match_cons(p_109, sym_Cons_2))
    {
      q_109 = ATgetArgument(p_109, 0);
      r_109 = ATgetArgument(p_109, 1);
      o_109 :
      if(match_cons(r_109, sym_Cons_2))
        {
          s_109 = ATgetArgument(r_109, 0);
          t_109 = ATgetArgument(r_109, 1);
          {
            ATerm x_109 = NULL;
            t = not_null(q_109);
            t = y_64(t);
            t = not_null(s_109);
            t = z_64(t);
            x_109 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_109), not_null(t_109));
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
      ATerm z_5 (ATerm t)
      {
        ATerm v_110 = NULL;
        v_110 = t;
        b_110 :
        if(!(match_string(v_110, "-S")))
          _fail(t);
        return(t);
      }
      ATerm e_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, z_5, e_6);
      PopChoice();
    }
  else
    {
      t = o_15;
      {
        ATerm p_15 = t;
        if(PushChoice()==0)
          {
            ATerm f_6 (ATerm t)
            {
              ATerm w_110 = NULL;
              w_110 = t;
              c_110 :
              if(!(match_string(w_110, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm g_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, f_6, g_6);
            PopChoice();
          }
        else
          {
            t = p_15;
            {
              ATerm q_15 = t;
              if(PushChoice()==0)
                {
                  ATerm h_6 (ATerm t)
                  {
                    ATerm x_110 = NULL;
                    x_110 = t;
                    d_110 :
                    if(!(match_string(x_110, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm i_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, h_6, i_6);
                  PopChoice();
                }
              else
                {
                  t = q_15;
                  {
                    ATerm r_15 = t;
                    if(PushChoice()==0)
                      {
                        ATerm p_6 (ATerm t)
                        {
                          ATerm y_110 = NULL;
                          y_110 = t;
                          e_110 :
                          if(!(match_string(y_110, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm q_6 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, p_6, q_6);
                        PopChoice();
                      }
                    else
                      {
                        t = r_15;
                        {
                          ATerm s_15 = t;
                          if(PushChoice()==0)
                            {
                              ATerm r_6 (ATerm t)
                              {
                                ATerm z_110 = NULL;
                                z_110 = t;
                                f_110 :
                                if(!(match_string(z_110, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm v_6 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, r_6, v_6);
                              PopChoice();
                            }
                          else
                            {
                              t = s_15;
                              {
                                ATerm t_15 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm w_6 (ATerm t)
                                    {
                                      ATerm a_111 = NULL;
                                      a_111 = t;
                                      g_110 :
                                      if(!(match_string(a_111, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm x_6 (ATerm t)
                                    {
                                      ATerm b_111 = NULL;
                                      b_111 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(b_111));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, w_6, x_6);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = t_15;
                                    {
                                      ATerm f_16 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm y_6 (ATerm t)
                                          {
                                            ATerm d_111 = NULL;
                                            d_111 = t;
                                            i_110 :
                                            if(!(match_string(d_111, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm z_6 (ATerm t)
                                          {
                                            ATerm e_111 = NULL;
                                            e_111 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_111));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, y_6, z_6);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = f_16;
                                          {
                                            ATerm h_16 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm f_7 (ATerm t)
                                                {
                                                  ATerm g_111 = NULL;
                                                  g_111 = t;
                                                  k_110 :
                                                  if(!(match_string(g_111, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm g_7 (ATerm t)
                                                {
                                                  ATerm h_111 = NULL;
                                                  h_111 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_111));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, f_7, g_7);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = h_16;
                                                {
                                                  ATerm j_16 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm l_7 (ATerm t)
                                                      {
                                                        ATerm j_111 = NULL;
                                                        j_111 = t;
                                                        m_110 :
                                                        if(!(match_string(j_111, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm m_7 (ATerm t)
                                                      {
                                                        ATerm k_111 = NULL;
                                                        k_111 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(k_111));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, l_7, m_7);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = j_16;
                                                      {
                                                        ATerm k_16 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm n_7 (ATerm t)
                                                            {
                                                              ATerm m_111 = NULL;
                                                              m_111 = t;
                                                              o_110 :
                                                              if(!(match_string(m_111, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm o_7 (ATerm t)
                                                            {
                                                              ATerm n_111 = NULL;
                                                              n_111 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_111));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, n_7, o_7);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = k_16;
                                                            {
                                                              ATerm p_16 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm p_7 (ATerm t)
                                                                  {
                                                                    ATerm p_111 = NULL;
                                                                    p_111 = t;
                                                                    q_110 :
                                                                    if(!(match_string(p_111, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm q_7 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, p_7, q_7);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = p_16;
                                                                  {
                                                                    ATerm v_16 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm r_7 (ATerm t)
                                                                        {
                                                                          ATerm q_111 = NULL;
                                                                          q_111 = t;
                                                                          r_110 :
                                                                          if(!(match_string(q_111, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm v_7 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, r_7, v_7);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = v_16;
                                                                        {
                                                                          ATerm w_16 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm x_7 (ATerm t)
                                                                              {
                                                                                ATerm r_111 = NULL;
                                                                                r_111 = t;
                                                                                s_110 :
                                                                                if(!(match_string(r_111, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm y_7 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, x_7, y_7);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = w_16;
                                                                              {
                                                                                ATerm x_16 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm z_7 (ATerm t)
                                                                                    {
                                                                                      ATerm s_111 = NULL;
                                                                                      s_111 = t;
                                                                                      t_110 :
                                                                                      if(!(match_string(s_111, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm a_8 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, z_7, a_8);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = x_16;
                                                                                    {
                                                                                      ATerm b_8 (ATerm t)
                                                                                      {
                                                                                        ATerm t_111 = NULL;
                                                                                        t_111 = t;
                                                                                        u_110 :
                                                                                        if(!(match_string(t_111, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm f_8 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, b_8, f_8);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm b_112 = NULL,c_112 = NULL,d_112 = NULL;
  b_112 = t;
  a_112 :
  if(match_cons(b_112, sym_Cons_2))
    {
      c_112 = ATgetArgument(b_112, 0);
      d_112 = ATgetArgument(b_112, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(c_112)), not_null(d_112));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm x_62 (ATerm), ATerm y_62 (ATerm))
{
  ATerm l_112 = NULL,m_112 = NULL,n_112 = NULL;
  l_112 = t;
  k_112 :
  if(match_cons(l_112, sym_Cons_2))
    {
      m_112 = ATgetArgument(l_112, 0);
      n_112 = ATgetArgument(l_112, 1);
      {
        ATerm q_112 = NULL;
        t = not_null(m_112);
        {
          ATerm s_112 = NULL;
          t = x_62(t);
          q_112 = t;
          t = not_null(n_112);
          t = y_62(t);
          s_112 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_112), not_null(s_112));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm y_112 = NULL;
  y_112 = t;
  x_112 :
  if(!(match_cons(y_112, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm u_64 (ATerm))
{
  ATerm h_8 (ATerm t)
  {
    ATerm a_113 = NULL;
    a_113 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_113));
    return(t);
  }
  ATerm i_8 (ATerm t)
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
            t = u_64(t);
            t = Cons_2(t, _id, i_8);
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
  t = Cons_2(t, h_8, i_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm n_65 (ATerm), ATerm o_65 (ATerm), ATerm p_65 (ATerm))
{
  ATerm j_8 (ATerm t)
  {
    ATerm e_17 = t;
    if(PushChoice()==0)
      {
        t = o_65(t);
        PopChoice();
      }
    else
      {
        t = e_17;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, j_8);
  t = store_options_0(t);
  {
    ATerm f_17 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, p_65);
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
              t = apply_strategy_1(t, n_65);
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
ATerm iowrap_2 (ATerm t, ATerm i_65 (ATerm), ATerm j_65 (ATerm))
{
  t = iowrap_3(t, i_65, j_65, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm f_65 (ATerm))
{
  ATerm k_8 (ATerm t)
  {
    ATerm l_8 (ATerm t)
    {
      t = TCons_2(t, f_65, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, l_8);
    return(t);
  }
  t = iowrap_2(t, k_8, _fail);
  return(t);
}
ATerm compile_match_comp_0 (ATerm t)
{
  ATerm m_8 (ATerm t)
  {
    t = apply_to_bodies_1(t, match_to_dfa_0);
    return(t);
  }
  t = iowrap_1(t, m_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = compile_match_comp_0(t);
  return(t);
}
