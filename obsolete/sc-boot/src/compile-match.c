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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
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
Symbol sym_Anno_2;
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_l_32;
ATerm term_f_32;
ATerm term_x_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_f_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_h_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_n_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_c_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_m_28;
ATerm term_i_28;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_n_27;
ATerm term_z_26;
ATerm term_q_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_p_25;
ATerm term_i_25;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_b_24;
ATerm term_f_23;
ATerm term_b_17;
ATerm term_v_16;
ATerm term_r_16;
ATerm term_h_16;
ATerm term_c_15;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_g_12;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_i_11;
void init_constant_terms (void)
{
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym__2, term_x_25, term_i_11);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_11);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym__2, term_i_29, term_j_29);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym__2, term_z_29, term_j_29);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym__2, term_d_30, term_j_29);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym__2, term_z_30, term_a_31);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__3, term_z_30, term_a_31, (ATerm) ATempty);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm c_117 (ATerm));
ATerm Rec_2 (ATerm, ATerm m_90 (ATerm), ATerm n_90 (ATerm));
ATerm Let_2 (ATerm, ATerm o_90 (ATerm), ATerm p_90 (ATerm));
ATerm sboundin_3 (ATerm, ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm l_90 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm y_116 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm t_88 (ATerm));
ATerm Scope_2 (ATerm, ATerm q_91 (ATerm), ATerm r_91 (ATerm));
ATerm tboundin_3 (ATerm, ATerm z_116 (ATerm), ATerm a_117 (ATerm), ATerm b_117 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm p_100 (ATerm), ATerm q_100 (ATerm));
ATerm for_3 (ATerm, ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm u_100 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm b_102 (ATerm), ATerm c_102 (ATerm), ATerm d_102 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm u_103 (ATerm), ATerm v_103 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm a_104 (ATerm), ATerm b_104 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm o_103 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm w_102 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm b_103 (ATerm));
ATerm rename_4 (ATerm, ATerm c_104 (ATerm, ATerm (ATerm)), ATerm d_104 (ATerm), ATerm e_104 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm f_104 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Seqs_1 (ATerm, ATerm y_86 (ATerm));
ATerm Call_2 (ATerm, ATerm a_91 (ATerm), ATerm b_91 (ATerm));
ATerm Str_1 (ATerm, ATerm s_0 (ATerm));
ATerm Real_1 (ATerm, ATerm r_0 (ATerm));
ATerm Int_1 (ATerm, ATerm q_0 (ATerm));
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm list_1 (ATerm, ATerm m_108 (ATerm));
ATerm Build_1 (ATerm, ATerm n_91 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm simple_strategy_0 (ATerm);
ATerm RowLet_0 (ATerm);
ATerm MatrixScope_0 (ATerm);
ATerm assert_1 (ATerm, ATerm i_98 (ATerm));
ATerm WildPat_0 (ATerm);
ATerm default_state_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm MatchCons_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm ConsTransition_1 (ATerm, ATerm d_92 (ATerm));
ATerm Transition_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm rzip_1 (ATerm, ATerm w_110 (ATerm));
ATerm transitions_0 (ATerm);
ATerm Uniq_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm o_109 (ATerm));
ATerm uniq_0 (ATerm);
ATerm offsets_0 (ATerm);
ATerm length_0 (ATerm);
ATerm ConsArgs_0 (ATerm);
ATerm filter_1 (ATerm, ATerm h_104 (ATerm));
ATerm outedges_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Mixture_0 (ATerm);
ATerm ShiftColumnRow_0 (ATerm);
ATerm ShiftColumn_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm As_2 (ATerm, ATerm c_88 (ATerm), ATerm d_88 (ATerm));
ATerm Row_3 (ATerm, ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm t_86 (ATerm));
ATerm SkipWild_0 (ATerm);
ATerm MatrixRowsEmpty_0 (ATerm);
ATerm reduce_matrix_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm f_98 (ATerm));
ATerm restore_always_2 (ATerm, ATerm a_113 (ATerm), ATerm b_113 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm e_98 (ATerm));
ATerm scope_2 (ATerm, ATerm g_98 (ATerm), ATerm h_98 (ATerm));
ATerm matrix_to_dfa_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm zip_1 (ATerm, ATerm n_110 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm t_91 (ATerm), ATerm u_91 (ATerm));
ATerm Explode_2 (ATerm, ATerm y_87 (ATerm), ATerm z_87 (ATerm));
ATerm Op_2 (ATerm, ATerm t_89 (ATerm), ATerm u_89 (ATerm));
ATerm pat_td_1 (ATerm, ATerm y_117 (ATerm));
ATerm new_0 (ATerm);
ATerm Mapp2_0 (ATerm);
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
ATerm MatrixMerge_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm f_105 (ATerm));
ATerm crush_3 (ATerm, ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t_106 (ATerm));
ATerm collect_om_1 (ATerm, ATerm f_107 (ATerm));
ATerm collect_1 (ATerm, ATerm h_107 (ATerm));
ATerm collect_offsets_0 (ATerm);
ATerm CollectSubst_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm IgnoreVar_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm g_106 (ATerm));
ATerm union_0 (ATerm);
ATerm unions_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm s_110 (ATerm));
ATerm CollectSplit_2 (ATerm, ATerm z_107 (ATerm), ATerm a_108 (ATerm));
ATerm collect_split_2 (ATerm, ATerm w_107 (ATerm), ATerm x_107 (ATerm));
ATerm collect_substitutions_0 (ATerm);
ATerm Annotate_1 (ATerm, ATerm a_118 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm l_110 (ATerm));
ATerm NZip00_0 (ATerm);
ATerm nzip0_1 (ATerm, ATerm t_110 (ATerm));
ATerm Propagate_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm c_113 (ATerm));
ATerm term_to_matrix_0 (ATerm);
ATerm MatchToMatrix_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm y_99 (ATerm), ATerm z_99 (ATerm));
ATerm repeat_1 (ATerm, ATerm b_100 (ATerm));
ATerm downup_1 (ATerm, ATerm e_113 (ATerm));
ATerm match_to_matrix_0 (ATerm);
ATerm match_to_dfa_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm s_90 (ATerm));
ATerm Strategies_1 (ATerm, ATerm d_89 (ATerm));
ATerm Specification_1 (ATerm, ATerm f_89 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm b_118 (ATerm));
ATerm _2 (ATerm, ATerm s_79 (ATerm), ATerm t_79 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm m_97 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm w_94 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm b_105 (ATerm), ATerm c_105 (ATerm));
ATerm crush_2 (ATerm, ATerm p_106 (ATerm), ATerm q_106 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm v_94 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm w_96 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_111 (ATerm), ATerm w_111 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm u_96 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm y_108 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm v_93 (ATerm));
ATerm map_1 (ATerm, ATerm k_108 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm u_93 (ATerm));
ATerm Program_1 (ATerm, ATerm b_81 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm c_81 (ATerm));
ATerm fetch_1 (ATerm, ATerm s_108 (ATerm));
ATerm option_defined_1 (ATerm, ATerm t_94 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_112 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_93 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm v_91 (ATerm), ATerm w_91 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_93 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_93 (ATerm));
ATerm iowrap_4 (ATerm, ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm l_96 (ATerm));
ATerm iowrap_3 (ATerm, ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm e_96 (ATerm));
ATerm iowrap_2 (ATerm, ATerm a_96 (ATerm), ATerm b_96 (ATerm));
ATerm iowrap_1 (ATerm, ATerm x_95 (ATerm));
ATerm compile_match_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,l_4 = NULL;
  g_4 = t;
  f_4 :
  if(((ATgetType(g_4) == AT_LIST) && ((ATermList) g_4 != ATempty)))
    {
      h_4 = ATgetFirst((ATermList) g_4);
      l_4 = (ATerm) ATgetNext((ATermList) g_4);
      t = not_null(h_4);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm c_117 (ATerm))
{
  ATerm w_6 = t;
  int x_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_0 (ATerm t)
      {
        t = split_2(t, _id, c_117);
        {
          ATerm e_0 (ATerm t)
          {
            ATerm g_8 = NULL,h_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL;
            g_8 = t;
            e_7 :
            if(match_cons(g_8, sym__2))
              {
                h_8 = ATgetArgument(g_8, 0);
                o_8 = ATgetArgument(g_8, 1);
                s_7 :
                if(match_cons(h_8, sym_SDef_3))
                  {
                    l_8 = ATgetArgument(h_8, 0);
                    m_8 = ATgetArgument(h_8, 1);
                    n_8 = ATgetArgument(h_8, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_8), not_null(m_8), not_null(n_8));
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
          t = zip_1(t, e_0);
        }
        return(t);
      }
      t = Let_2(t, d_0, _id);
      LocalPopChoice(x_6);
    }
  else
    {
      t = w_6;
      {
        ATerm y_6 = t;
        int z_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_0 (ATerm t)
            {
              t = split_2(t, _id, c_117);
              {
                ATerm h_0 (ATerm t)
                {
                  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL;
                  s_8 = t;
                  u_7 :
                  if(match_cons(s_8, sym__2))
                    {
                      t_8 = ATgetArgument(s_8, 0);
                      w_8 = ATgetArgument(s_8, 1);
                      f_8 :
                      if(match_cons(t_8, sym_VarDec_2))
                        {
                          u_8 = ATgetArgument(t_8, 0);
                          v_8 = ATgetArgument(t_8, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(w_8), not_null(v_8));
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
                t = zip_1(t, h_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, g_0, _id);
            LocalPopChoice(z_6);
          }
        else
          {
            t = y_6;
            {
              ATerm t_0 (ATerm t)
              {
                t = c_117(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, t_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm m_90 (ATerm), ATerm n_90 (ATerm))
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
  i_9 = t;
  h_9 :
  if(match_cons(i_9, sym_Rec_2))
    {
      j_9 = ATgetArgument(i_9, 0);
      k_9 = ATgetArgument(i_9, 1);
      {
        ATerm o_9 = NULL,q_9 = NULL;
        ATerm p_9 = NULL;
        t = SSLgetAnnotations(not_null(i_9));
        {
          p_9 = t;
          if(((o_9 != NULL) && (o_9 != p_9)))
            _fail(p_9);
          else
            o_9 = p_9;
        }
        {
          t = not_null(j_9);
          {
            ATerm s_9 = NULL;
            t = m_90(t);
            {
              q_9 = t;
              {
                t = not_null(k_9);
                {
                  ATerm u_9 = NULL;
                  t = n_90(t);
                  {
                    s_9 = t;
                    {
                      ATerm v_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(q_9), not_null(s_9)), not_null(o_9));
                      {
                        v_9 = t;
                        if(((u_9 != NULL) && (u_9 != v_9)))
                          _fail(v_9);
                        else
                          u_9 = v_9;
                      }
                      t = not_null(u_9);
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
ATerm Let_2 (ATerm t, ATerm o_90 (ATerm), ATerm p_90 (ATerm))
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
  h_10 = t;
  g_10 :
  if(match_cons(h_10, sym_Let_2))
    {
      i_10 = ATgetArgument(h_10, 0);
      j_10 = ATgetArgument(h_10, 1);
      {
        ATerm n_10 = NULL,p_10 = NULL;
        ATerm o_10 = NULL;
        t = SSLgetAnnotations(not_null(h_10));
        {
          o_10 = t;
          if(((n_10 != NULL) && (n_10 != o_10)))
            _fail(o_10);
          else
            n_10 = o_10;
        }
        {
          t = not_null(i_10);
          {
            ATerm r_10 = NULL;
            t = o_90(t);
            {
              p_10 = t;
              {
                t = not_null(j_10);
                {
                  ATerm t_10 = NULL;
                  t = p_90(t);
                  {
                    r_10 = t;
                    {
                      ATerm u_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(p_10), not_null(r_10)), not_null(n_10));
                      {
                        u_10 = t;
                        if(((t_10 != NULL) && (t_10 != u_10)))
                          _fail(u_10);
                        else
                          t_10 = u_10;
                      }
                      t = not_null(t_10);
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
ATerm sboundin_3 (ATerm t, ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm))
{
  ATerm a_7 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, d_117, d_117);
      LocalPopChoice(b_7);
    }
  else
    {
      t = a_7;
      {
        ATerm c_7 = t;
        int d_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, f_117, f_117, d_117);
            LocalPopChoice(d_7);
          }
        else
          {
            t = c_7;
            t = Rec_2(t, f_117, d_117);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
  c_11 = t;
  b_11 :
  if(match_cons(c_11, sym_Rec_2))
    {
      d_11 = ATgetArgument(c_11, 0);
      e_11 = ATgetArgument(c_11, 1);
      t = (ATerm) ATinsert(ATempty, not_null(d_11));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL;
  m_11 = t;
  l_11 :
  if(match_cons(m_11, sym_SDef_3))
    {
      n_11 = ATgetArgument(m_11, 0);
      o_11 = ATgetArgument(m_11, 1);
      p_11 = ATgetArgument(m_11, 2);
      {
        t = not_null(o_11);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
            t_11 = t;
            k_11 :
            if(match_cons(t_11, sym_VarDec_2))
              {
                u_11 = ATgetArgument(t_11, 0);
                v_11 = ATgetArgument(t_11, 1);
                t = not_null(u_11);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, u_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
  d_12 = t;
  c_12 :
  if(match_cons(d_12, sym_Let_2))
    {
      e_12 = ATgetArgument(d_12, 0);
      f_12 = ATgetArgument(d_12, 1);
      {
        t = not_null(e_12);
        {
          ATerm v_0 (ATerm t)
          {
            ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
            i_12 = t;
            b_12 :
            if(match_cons(i_12, sym_SDef_3))
              {
                j_12 = ATgetArgument(i_12, 0);
                k_12 = ATgetArgument(i_12, 1);
                l_12 = ATgetArgument(i_12, 2);
                t = not_null(j_12);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, v_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm l_90 (ATerm))
{
  ATerm w_12 = NULL,x_12 = NULL;
  w_12 = t;
  v_12 :
  if(match_cons(w_12, sym_SVar_1))
    {
      x_12 = ATgetArgument(w_12, 0);
      {
        ATerm a_13 = NULL,c_13 = NULL;
        ATerm b_13 = NULL;
        t = SSLgetAnnotations(not_null(w_12));
        {
          b_13 = t;
          if(((a_13 != NULL) && (a_13 != b_13)))
            _fail(b_13);
          else
            a_13 = b_13;
        }
        {
          t = not_null(x_12);
          {
            ATerm e_13 = NULL;
            t = l_90(t);
            {
              c_13 = t;
              {
                ATerm f_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(c_13)), not_null(a_13));
                {
                  f_13 = t;
                  if(((e_13 != NULL) && (e_13 != f_13)))
                    _fail(f_13);
                  else
                    e_13 = f_13;
                }
                t = not_null(e_13);
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
ATerm srename_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm f_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(g_7);
      }
    else
      {
        t = f_7;
        {
          ATerm h_7 = t;
          int i_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(i_7);
            }
          else
            {
              t = h_7;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, w_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm y_116 (ATerm))
{
  t = Scope_2(t, y_116, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm t_88 (ATerm))
{
  ATerm p_13 = NULL,q_13 = NULL;
  p_13 = t;
  o_13 :
  if(match_cons(p_13, sym_DynamicRules_1))
    {
      q_13 = ATgetArgument(p_13, 0);
      {
        ATerm t_13 = NULL,v_13 = NULL;
        ATerm u_13 = NULL;
        t = SSLgetAnnotations(not_null(p_13));
        {
          u_13 = t;
          if(((t_13 != NULL) && (t_13 != u_13)))
            _fail(u_13);
          else
            t_13 = u_13;
        }
        {
          t = not_null(q_13);
          {
            ATerm x_13 = NULL;
            t = t_88(t);
            {
              v_13 = t;
              {
                ATerm y_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(v_13)), not_null(t_13));
                {
                  y_13 = t;
                  if(((x_13 != NULL) && (x_13 != y_13)))
                    _fail(y_13);
                  else
                    x_13 = y_13;
                }
                t = not_null(x_13);
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
ATerm Scope_2 (ATerm t, ATerm q_91 (ATerm), ATerm r_91 (ATerm))
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
  j_14 = t;
  i_14 :
  if(match_cons(j_14, sym_Scope_2))
    {
      k_14 = ATgetArgument(j_14, 0);
      l_14 = ATgetArgument(j_14, 1);
      {
        ATerm p_14 = NULL,r_14 = NULL;
        ATerm q_14 = NULL;
        t = SSLgetAnnotations(not_null(j_14));
        {
          q_14 = t;
          if(((p_14 != NULL) && (p_14 != q_14)))
            _fail(q_14);
          else
            p_14 = q_14;
        }
        {
          t = not_null(k_14);
          {
            ATerm t_14 = NULL;
            t = q_91(t);
            {
              r_14 = t;
              {
                t = not_null(l_14);
                {
                  ATerm v_14 = NULL;
                  t = r_91(t);
                  {
                    t_14 = t;
                    {
                      ATerm w_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(r_14), not_null(t_14)), not_null(p_14));
                      {
                        w_14 = t;
                        if(((v_14 != NULL) && (v_14 != w_14)))
                          _fail(w_14);
                        else
                          v_14 = w_14;
                      }
                      t = not_null(v_14);
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
ATerm tboundin_3 (ATerm t, ATerm z_116 (ATerm), ATerm a_117 (ATerm), ATerm b_117 (ATerm))
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, b_117, z_116);
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      t = DynamicRules_1(t, z_116);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL;
  e_15 = t;
  d_15 :
  if(match_cons(e_15, sym_DynamicRules_1))
    {
      f_15 = ATgetArgument(e_15, 0);
      {
        t = not_null(f_15);
        t = tvars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL;
  k_15 = t;
  j_15 :
  if(match_cons(k_15, sym_Var_1))
    {
      l_15 = ATgetArgument(k_15, 0);
      t = (ATerm) ATinsert(ATempty, not_null(l_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL;
  r_15 = t;
  p_15 :
  if(match_cons(r_15, sym__2))
    {
      s_15 = ATgetArgument(r_15, 0);
      t_15 = ATgetArgument(r_15, 1);
      q_15 :
      if(((ATgetType(t_15) == AT_LIST) && ((ATermList) t_15 != ATempty)))
        {
          u_15 = ATgetFirst((ATermList) t_15);
          v_15 = (ATerm) ATgetNext((ATermList) t_15);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_15)), not_null(u_15)), not_null(v_15));
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
ATerm UfDecompose_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
  k_16 = t;
  i_16 :
  if(((ATgetType(k_16) == AT_LIST) && ((ATermList) k_16 != ATempty)))
    {
      l_16 = ATgetFirst((ATermList) k_16);
      o_16 = (ATerm) ATgetNext((ATermList) k_16);
      j_16 :
      if(match_cons(l_16, sym__2))
        {
          m_16 = ATgetArgument(l_16, 0);
          n_16 = ATgetArgument(l_16, 1);
          {
            ATerm s_16 = NULL,t_16 = NULL,z_16 = NULL,f_17 = NULL;
            ATerm l_7;
            l_7 = t;
            {
              ATerm u_16 = NULL;
              ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
              t = not_null(n_16);
              {
                u_16 = t;
                {
                  t = SSL_explode_term(not_null(u_16));
                  {
                    w_16 = t;
                    d_16 :
                    if(match_cons(w_16, sym__2))
                      {
                        x_16 = ATgetArgument(w_16, 0);
                        y_16 = ATgetArgument(w_16, 1);
                        {
                          if(((s_16 != NULL) && (s_16 != x_16)))
                            _fail(x_16);
                          else
                            s_16 = x_16;
                          if(((t_16 != NULL) && (t_16 != y_16)))
                            _fail(y_16);
                          else
                            t_16 = y_16;
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
            t = l_7;
            {
              ATerm m_7;
              m_7 = t;
              {
                ATerm a_17 = NULL;
                ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
                t = not_null(m_16);
                {
                  a_17 = t;
                  {
                    t = SSL_explode_term(not_null(a_17));
                    {
                      c_17 = t;
                      g_16 :
                      if(match_cons(c_17, sym__2))
                        {
                          d_17 = ATgetArgument(c_17, 0);
                          e_17 = ATgetArgument(c_17, 1);
                          {
                            if(((s_16 != NULL) && (s_16 != d_17)))
                              _fail(d_17);
                            else
                              s_16 = d_17;
                            if(((z_16 != NULL) && (z_16 != e_17)))
                              _fail(e_17);
                            else
                              z_16 = e_17;
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
              t = m_7;
              {
                ATerm g_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_16), not_null(t_16));
                {
                  t = zip_1(t, _id);
                  {
                    g_17 = t;
                    if(((f_17 != NULL) && (f_17 != g_17)))
                      _fail(g_17);
                    else
                      f_17 = g_17;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_17), not_null(o_16));
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
ATerm UfIdem_0 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
  q_17 = t;
  o_17 :
  if(((ATgetType(q_17) == AT_LIST) && ((ATermList) q_17 != ATempty)))
    {
      r_17 = ATgetFirst((ATermList) q_17);
      u_17 = (ATerm) ATgetNext((ATermList) q_17);
      p_17 :
      if(match_cons(r_17, sym__2))
        {
          s_17 = ATgetArgument(r_17, 0);
          t_17 = ATgetArgument(r_17, 1);
          {
            ATerm w_17 = NULL;
            if(((s_17 != NULL) && (s_17 != t_17)))
              _fail(t_17);
            else
              s_17 = t_17;
            {
              if(((w_17 != NULL) && (w_17 != u_17)))
                _fail(u_17);
              else
                w_17 = u_17;
              t = not_null(w_17);
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
ATerm while_not_2 (ATerm t, ATerm p_100 (ATerm), ATerm q_100 (ATerm))
{
  ATerm y_17 (ATerm t)
  {
    ATerm n_7 = t;
    int o_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_100(t);
        LocalPopChoice(o_7);
      }
    else
      {
        t = n_7;
        {
          t = q_100(t);
          t = y_17(t);
        }
      }
    return(t);
  }
  t = y_17(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm u_100 (ATerm))
{
  t = s_100(t);
  t = while_not_2(t, t_100, u_100);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL;
      c_18 = t;
      a_18 :
      if(match_cons(c_18, sym__2))
        {
          d_18 = ATgetArgument(c_18, 0);
          e_18 = ATgetArgument(c_18, 1);
          {
            t = not_null(d_18);
            {
              ATerm k_18 (ATerm t)
              {
                ATerm r_7 = t;
                int t_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(t_7);
                  }
                else
                  {
                    t = r_7;
                    {
                      ATerm v_7 = t;
                      int w_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm x_0 (ATerm t)
                          {
                            t = not_null(e_18);
                            return(t);
                          }
                          t = HdMember_1(t, x_0);
                          t = k_18(t);
                          LocalPopChoice(w_7);
                        }
                      else
                        {
                          t = v_7;
                          t = Cons_2(t, _id, k_18);
                        }
                    }
                  }
                return(t);
              }
              t = k_18(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(q_7);
    }
  else
    {
      t = p_7;
      {
        ATerm y_0 (ATerm t)
        {
          ATerm h_18 = NULL;
          h_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(h_18));
          return(t);
        }
        ATerm z_0 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm a_1 (ATerm t)
        {
          ATerm x_7 = t;
          int y_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_1 (ATerm t)
              {
                ATerm z_7 = t;
                int a_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(a_8);
                  }
                else
                  {
                    t = z_7;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, b_1);
              LocalPopChoice(y_7);
            }
          else
            {
              t = x_7;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, y_0, z_0, a_1);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm b_102 (ATerm), ATerm c_102 (ATerm), ATerm d_102 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm p_18 (ATerm t)
  {
    ATerm b_8 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_102(t);
        LocalPopChoice(c_8);
      }
    else
      {
        t = b_8;
        {
          ATerm d_8 = t;
          int e_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_18 = NULL;
              ATerm i_8;
              i_8 = t;
              {
                ATerm o_18 = NULL;
                t = c_102(t);
                {
                  o_18 = t;
                  if(((n_18 != NULL) && (n_18 != o_18)))
                    _fail(o_18);
                  else
                    n_18 = o_18;
                }
              }
              t = i_8;
              {
                ATerm c_1 (ATerm t)
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = not_null(n_18);
                    return(t);
                  }
                  t = split_2(t, p_18, e_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm d_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = d_102(t, c_1, p_18, d_1);
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, f_1, union_0, _id);
                }
              }
              LocalPopChoice(e_8);
            }
          else
            {
              t = d_8;
              {
                ATerm g_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, g_1, union_0, p_18);
              }
            }
        }
      }
    return(t);
  }
  t = p_18(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm j_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(k_8);
      }
    else
      {
        t = j_8;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, h_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  y_18 = t;
  t_18 :
  if(match_cons(y_18, sym_LRule_1))
    {
      z_18 = ATgetArgument(y_18, 0);
      u_18 :
      if(match_cons(z_18, sym_Rule_3))
        {
          v_18 = ATgetArgument(z_18, 0);
          w_18 = ATgetArgument(z_18, 1);
          x_18 = ATgetArgument(z_18, 2);
          {
            t = not_null(v_18);
            t = tvars_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(y_18, sym_Scope_2))
        {
          z_18 = ATgetArgument(y_18, 0);
          a_19 = ATgetArgument(y_18, 1);
          t = not_null(z_18);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm u_103 (ATerm), ATerm v_103 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
  m_19 = t;
  l_19 :
  if(match_cons(m_19, sym__3))
    {
      n_19 = ATgetArgument(m_19, 0);
      o_19 = ATgetArgument(m_19, 1);
      p_19 = ATgetArgument(m_19, 2);
      {
        t = not_null(n_19);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm t_19 = NULL;
            t_19 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_19), not_null(p_19));
              t = u_103(t);
            }
            return(t);
          }
          ATerm j_1 (ATerm t)
          {
            ATerm v_19 = NULL;
            v_19 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), not_null(o_19));
              t = u_103(t);
            }
            return(t);
          }
          t = v_103(t, i_1, j_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm a_104 (ATerm), ATerm b_104 (ATerm, ATerm (ATerm)))
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
  h_20 = t;
  g_20 :
  if(match_cons(h_20, sym__2))
    {
      i_20 = ATgetArgument(h_20, 0);
      j_20 = ATgetArgument(h_20, 1);
      {
        ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,u_20 = NULL;
        ATerm p_8;
        p_8 = t;
        {
          ATerm p_20 = NULL;
          t = not_null(i_20);
          {
            ATerm q_20 = NULL;
            t = a_104(t);
            {
              p_20 = t;
              {
                if(((m_20 != NULL) && (m_20 != p_20)))
                  _fail(p_20);
                else
                  m_20 = p_20;
                {
                  ATerm r_20 = NULL,t_20 = NULL;
                  t = map_1(t, new_0);
                  {
                    q_20 = t;
                    {
                      if(((n_20 != NULL) && (n_20 != q_20)))
                        _fail(q_20);
                      else
                        n_20 = q_20;
                      {
                        ATerm s_20 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_20), not_null(n_20));
                        {
                          t = zip_1(t, _id);
                          {
                            s_20 = t;
                            if(((r_20 != NULL) && (r_20 != s_20)))
                              _fail(s_20);
                            else
                              r_20 = s_20;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_20), not_null(j_20));
                          {
                            t = conc_0(t);
                            {
                              t_20 = t;
                              if(((o_20 != NULL) && (o_20 != t_20)))
                                _fail(t_20);
                              else
                                o_20 = t_20;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = p_8;
        {
          ATerm v_20 = NULL;
          t = not_null(i_20);
          {
            ATerm k_1 (ATerm t)
            {
              t = not_null(n_20);
              return(t);
            }
            t = b_104(t, k_1);
            {
              v_20 = t;
              if(((u_20 != NULL) && (u_20 != v_20)))
                _fail(v_20);
              else
                u_20 = v_20;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(u_20), not_null(j_20), not_null(o_20));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL;
  f_21 = t;
  d_21 :
  if(match_cons(f_21, sym__2))
    {
      g_21 = ATgetArgument(f_21, 0);
      h_21 = ATgetArgument(f_21, 1);
      e_21 :
      if(((ATgetType(h_21) == AT_LIST) && ((ATermList) h_21 != ATempty)))
        {
          i_21 = ATgetFirst((ATermList) h_21);
          j_21 = (ATerm) ATgetNext((ATermList) h_21);
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_21), not_null(j_21));
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
ATerm Look1_0 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL;
  r_21 = t;
  o_21 :
  if(match_cons(r_21, sym__2))
    {
      s_21 = ATgetArgument(r_21, 0);
      t_21 = ATgetArgument(r_21, 1);
      p_21 :
      if(((ATgetType(t_21) == AT_LIST) && ((ATermList) t_21 != ATempty)))
        {
          u_21 = ATgetFirst((ATermList) t_21);
          x_21 = (ATerm) ATgetNext((ATermList) t_21);
          q_21 :
          if(match_cons(u_21, sym__2))
            {
              v_21 = ATgetArgument(u_21, 0);
              w_21 = ATgetArgument(u_21, 1);
              {
                ATerm z_21 = NULL;
                if(((s_21 != NULL) && (s_21 != v_21)))
                  _fail(v_21);
                else
                  s_21 = v_21;
                {
                  if(((z_21 != NULL) && (z_21 != w_21)))
                    _fail(w_21);
                  else
                    z_21 = w_21;
                  t = not_null(z_21);
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm lookup_0 (ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm o_103 (ATerm, ATerm (ATerm)))
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
  e_22 = t;
  d_22 :
  if(match_cons(e_22, sym__2))
    {
      f_22 = ATgetArgument(e_22, 0);
      g_22 = ATgetArgument(e_22, 1);
      {
        t = not_null(f_22);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm m_1 (ATerm t)
            {
              t = not_null(g_22);
              return(t);
            }
            t = split_2(t, _id, m_1);
            t = lookup_0(t);
            return(t);
          }
          t = o_103(t, l_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm w_102 (ATerm))
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
  n_22 = t;
  m_22 :
  if(match_cons(n_22, sym__2))
    {
      o_22 = ATgetArgument(n_22, 0);
      p_22 = ATgetArgument(n_22, 1);
      {
        t = not_null(o_22);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm s_22 = NULL;
            s_22 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_22), not_null(p_22));
              t = w_102(t);
            }
            return(t);
          }
          t = _all(t, n_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm b_103 (ATerm))
{
  ATerm w_22 (ATerm t)
  {
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_103(t);
        LocalPopChoice(y_8);
      }
    else
      {
        t = x_8;
        t = all_dist_1(t, w_22);
      }
    return(t);
  }
  t = w_22(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm c_104 (ATerm, ATerm (ATerm)), ATerm d_104 (ATerm), ATerm e_104 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm f_104 (ATerm, ATerm (ATerm)))
{
  ATerm y_22 = NULL;
  y_22 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_22), (ATerm) ATempty);
    {
      ATerm b_23 (ATerm t)
      {
        ATerm o_1 (ATerm t)
        {
          ATerm z_8 = t;
          int a_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, c_104);
              LocalPopChoice(a_9);
            }
          else
            {
              t = z_8;
              {
                t = RnBinding_2(t, d_104, f_104);
                t = DistBinding_2(t, b_23, e_104);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, o_1);
        return(t);
      }
      t = b_23(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm c_23 (ATerm t, ATerm d_23 (ATerm))
  {
    t = Scope_2(t, d_23, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, c_23);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm Seqs_1 (ATerm t, ATerm y_86 (ATerm))
{
  ATerm j_23 = NULL,k_23 = NULL;
  j_23 = t;
  i_23 :
  if(match_cons(j_23, sym_Seqs_1))
    {
      k_23 = ATgetArgument(j_23, 0);
      {
        ATerm n_23 = NULL,p_23 = NULL;
        ATerm o_23 = NULL;
        t = SSLgetAnnotations(not_null(j_23));
        {
          o_23 = t;
          if(((n_23 != NULL) && (n_23 != o_23)))
            _fail(o_23);
          else
            n_23 = o_23;
        }
        {
          t = not_null(k_23);
          {
            ATerm r_23 = NULL;
            t = y_86(t);
            {
              p_23 = t;
              {
                ATerm s_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seqs_1, not_null(p_23)), not_null(n_23));
                {
                  s_23 = t;
                  if(((r_23 != NULL) && (r_23 != s_23)))
                    _fail(s_23);
                  else
                    r_23 = s_23;
                }
                t = not_null(r_23);
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
ATerm Call_2 (ATerm t, ATerm a_91 (ATerm), ATerm b_91 (ATerm))
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
  d_24 = t;
  c_24 :
  if(match_cons(d_24, sym_Call_2))
    {
      e_24 = ATgetArgument(d_24, 0);
      f_24 = ATgetArgument(d_24, 1);
      {
        ATerm j_24 = NULL,l_24 = NULL;
        ATerm k_24 = NULL;
        t = SSLgetAnnotations(not_null(d_24));
        {
          k_24 = t;
          if(((j_24 != NULL) && (j_24 != k_24)))
            _fail(k_24);
          else
            j_24 = k_24;
        }
        {
          t = not_null(e_24);
          {
            ATerm n_24 = NULL;
            t = a_91(t);
            {
              l_24 = t;
              {
                t = not_null(f_24);
                {
                  ATerm p_24 = NULL;
                  t = b_91(t);
                  {
                    n_24 = t;
                    {
                      ATerm q_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(l_24), not_null(n_24)), not_null(j_24));
                      {
                        q_24 = t;
                        if(((p_24 != NULL) && (p_24 != q_24)))
                          _fail(q_24);
                        else
                          p_24 = q_24;
                      }
                      t = not_null(p_24);
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
ATerm Str_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm f_25 = NULL,g_25 = NULL;
  f_25 = t;
  e_25 :
  if(match_cons(f_25, sym_Str_1))
    {
      g_25 = ATgetArgument(f_25, 0);
      {
        ATerm b_9 = t;
        int c_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_25 = NULL,l_25 = NULL;
            ATerm k_25 = NULL;
            t = SSLgetAnnotations(not_null(f_25));
            {
              k_25 = t;
              if(((j_25 != NULL) && (j_25 != k_25)))
                _fail(k_25);
              else
                j_25 = k_25;
            }
            {
              t = not_null(g_25);
              {
                ATerm n_25 = NULL;
                t = s_0(t);
                {
                  l_25 = t;
                  {
                    ATerm o_25 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(l_25)), not_null(j_25));
                    {
                      o_25 = t;
                      if(((n_25 != NULL) && (n_25 != o_25)))
                        _fail(o_25);
                      else
                        n_25 = o_25;
                    }
                    t = not_null(n_25);
                  }
                }
              }
            }
            LocalPopChoice(c_9);
          }
        else
          {
            t = b_9;
            {
              ATerm r_25 = NULL,t_25 = NULL;
              ATerm s_25 = NULL;
              t = SSLgetAnnotations(not_null(f_25));
              {
                s_25 = t;
                if(((r_25 != NULL) && (r_25 != s_25)))
                  _fail(s_25);
                else
                  r_25 = s_25;
              }
              {
                t = not_null(g_25);
                {
                  ATerm v_25 = NULL;
                  t = s_0(t);
                  {
                    t_25 = t;
                    {
                      ATerm w_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(t_25)), not_null(r_25));
                      {
                        w_25 = t;
                        if(((v_25 != NULL) && (v_25 != w_25)))
                          _fail(w_25);
                        else
                          v_25 = w_25;
                      }
                      t = not_null(v_25);
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
ATerm Real_1 (ATerm t, ATerm r_0 (ATerm))
{
  ATerm o_26 = NULL,p_26 = NULL;
  o_26 = t;
  n_26 :
  if(match_cons(o_26, sym_Real_1))
    {
      p_26 = ATgetArgument(o_26, 0);
      {
        ATerm d_9 = t;
        int e_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_26 = NULL,u_26 = NULL;
            ATerm t_26 = NULL;
            t = SSLgetAnnotations(not_null(o_26));
            {
              t_26 = t;
              if(((s_26 != NULL) && (s_26 != t_26)))
                _fail(t_26);
              else
                s_26 = t_26;
            }
            {
              t = not_null(p_26);
              {
                ATerm w_26 = NULL;
                t = r_0(t);
                {
                  u_26 = t;
                  {
                    ATerm x_26 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(u_26)), not_null(s_26));
                    {
                      x_26 = t;
                      if(((w_26 != NULL) && (w_26 != x_26)))
                        _fail(x_26);
                      else
                        w_26 = x_26;
                    }
                    t = not_null(w_26);
                  }
                }
              }
            }
            LocalPopChoice(e_9);
          }
        else
          {
            t = d_9;
            {
              ATerm a_27 = NULL,c_27 = NULL;
              ATerm b_27 = NULL;
              t = SSLgetAnnotations(not_null(o_26));
              {
                b_27 = t;
                if(((a_27 != NULL) && (a_27 != b_27)))
                  _fail(b_27);
                else
                  a_27 = b_27;
              }
              {
                t = not_null(p_26);
                {
                  ATerm e_27 = NULL;
                  t = r_0(t);
                  {
                    c_27 = t;
                    {
                      ATerm f_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(c_27)), not_null(a_27));
                      {
                        f_27 = t;
                        if(((e_27 != NULL) && (e_27 != f_27)))
                          _fail(f_27);
                        else
                          e_27 = f_27;
                      }
                      t = not_null(e_27);
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
ATerm Int_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm x_27 = NULL,y_27 = NULL;
  x_27 = t;
  w_27 :
  if(match_cons(x_27, sym_Int_1))
    {
      y_27 = ATgetArgument(x_27, 0);
      {
        ATerm f_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_28 = NULL,d_28 = NULL;
            ATerm c_28 = NULL;
            t = SSLgetAnnotations(not_null(x_27));
            {
              c_28 = t;
              if(((b_28 != NULL) && (b_28 != c_28)))
                _fail(c_28);
              else
                b_28 = c_28;
            }
            {
              t = not_null(y_27);
              {
                ATerm f_28 = NULL;
                t = q_0(t);
                {
                  d_28 = t;
                  {
                    ATerm g_28 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(d_28)), not_null(b_28));
                    {
                      g_28 = t;
                      if(((f_28 != NULL) && (f_28 != g_28)))
                        _fail(g_28);
                      else
                        f_28 = g_28;
                    }
                    t = not_null(f_28);
                  }
                }
              }
            }
            LocalPopChoice(g_9);
          }
        else
          {
            t = f_9;
            {
              ATerm j_28 = NULL,l_28 = NULL;
              ATerm k_28 = NULL;
              t = SSLgetAnnotations(not_null(x_27));
              {
                k_28 = t;
                if(((j_28 != NULL) && (j_28 != k_28)))
                  _fail(k_28);
                else
                  j_28 = k_28;
              }
              {
                t = not_null(y_27);
                {
                  ATerm n_28 = NULL;
                  t = q_0(t);
                  {
                    l_28 = t;
                    {
                      ATerm o_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(l_28)), not_null(j_28));
                      {
                        o_28 = t;
                        if(((n_28 != NULL) && (n_28 != o_28)))
                          _fail(o_28);
                        else
                          n_28 = o_28;
                      }
                      t = not_null(n_28);
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
ATerm Var_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm g_29 = NULL,h_29 = NULL;
  g_29 = t;
  f_29 :
  if(match_cons(g_29, sym_Var_1))
    {
      h_29 = ATgetArgument(g_29, 0);
      {
        ATerm l_9 = t;
        int m_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_29 = NULL,m_29 = NULL;
            ATerm l_29 = NULL;
            t = SSLgetAnnotations(not_null(g_29));
            {
              l_29 = t;
              if(((k_29 != NULL) && (k_29 != l_29)))
                _fail(l_29);
              else
                k_29 = l_29;
            }
            {
              t = not_null(h_29);
              {
                ATerm o_29 = NULL;
                t = p_0(t);
                {
                  m_29 = t;
                  {
                    ATerm p_29 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(m_29)), not_null(k_29));
                    {
                      p_29 = t;
                      if(((o_29 != NULL) && (o_29 != p_29)))
                        _fail(p_29);
                      else
                        o_29 = p_29;
                    }
                    t = not_null(o_29);
                  }
                }
              }
            }
            LocalPopChoice(m_9);
          }
        else
          {
            t = l_9;
            {
              ATerm s_29 = NULL,u_29 = NULL;
              ATerm t_29 = NULL;
              t = SSLgetAnnotations(not_null(g_29));
              {
                t_29 = t;
                if(((s_29 != NULL) && (s_29 != t_29)))
                  _fail(t_29);
                else
                  s_29 = t_29;
              }
              {
                t = not_null(h_29);
                {
                  ATerm w_29 = NULL;
                  t = p_0(t);
                  {
                    u_29 = t;
                    {
                      ATerm x_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(u_29)), not_null(s_29));
                      {
                        x_29 = t;
                        if(((w_29 != NULL) && (w_29 != x_29)))
                          _fail(x_29);
                        else
                          w_29 = x_29;
                      }
                      t = not_null(w_29);
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
ATerm list_1 (ATerm t, ATerm m_108 (ATerm))
{
  ATerm g_30 (ATerm t)
  {
    ATerm n_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(r_9);
      }
    else
      {
        t = n_9;
        t = Cons_2(t, m_108, g_30);
      }
    return(t);
  }
  t = g_30(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm n_91 (ATerm))
{
  ATerm m_30 = NULL,n_30 = NULL;
  m_30 = t;
  l_30 :
  if(match_cons(m_30, sym_Build_1))
    {
      n_30 = ATgetArgument(m_30, 0);
      {
        ATerm q_30 = NULL,s_30 = NULL;
        ATerm r_30 = NULL;
        t = SSLgetAnnotations(not_null(m_30));
        {
          r_30 = t;
          if(((q_30 != NULL) && (q_30 != r_30)))
            _fail(r_30);
          else
            q_30 = r_30;
        }
        {
          t = not_null(n_30);
          {
            ATerm u_30 = NULL;
            t = n_91(t);
            {
              s_30 = t;
              {
                ATerm v_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(s_30)), not_null(q_30));
                {
                  v_30 = t;
                  if(((u_30 != NULL) && (u_30 != v_30)))
                    _fail(v_30);
                  else
                    u_30 = v_30;
                }
                t = not_null(u_30);
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
ATerm Fail_0 (ATerm t)
{
  ATerm e_31 = NULL;
  e_31 = t;
  d_31 :
  if(match_cons(e_31, sym_Fail_0))
    {
      ATerm g_31 = NULL,i_31 = NULL;
      ATerm t_9;
      t_9 = t;
      {
        ATerm h_31 = NULL;
        t = SSLgetAnnotations(not_null(e_31));
        {
          h_31 = t;
          if(((g_31 != NULL) && (g_31 != h_31)))
            _fail(h_31);
          else
            g_31 = h_31;
        }
      }
      t = t_9;
      {
        ATerm j_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(g_31));
        {
          j_31 = t;
          if(((i_31 != NULL) && (i_31 != j_31)))
            _fail(j_31);
          else
            i_31 = j_31;
        }
        t = not_null(i_31);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm u_33 = NULL;
  u_33 = t;
  t_33 :
  if(match_cons(u_33, sym_Id_0))
    {
      ATerm w_33 = NULL,y_33 = NULL;
      ATerm w_9;
      w_9 = t;
      {
        ATerm x_33 = NULL;
        t = SSLgetAnnotations(not_null(u_33));
        {
          x_33 = t;
          if(((w_33 != NULL) && (w_33 != x_33)))
            _fail(x_33);
          else
            w_33 = x_33;
        }
      }
      t = w_9;
      {
        ATerm z_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(w_33));
        {
          z_33 = t;
          if(((y_33 != NULL) && (y_33 != z_33)))
            _fail(z_33);
          else
            y_33 = z_33;
        }
        t = not_null(y_33);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm simple_strategy_0 (ATerm t)
{
  ATerm x_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      LocalPopChoice(y_9);
    }
  else
    {
      t = x_9;
      {
        ATerm z_9 = t;
        int a_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            LocalPopChoice(a_10);
          }
        else
          {
            t = z_9;
            {
              ATerm b_10 = t;
              int c_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Seqs_1(t, Nil_0);
                  LocalPopChoice(c_10);
                }
              else
                {
                  t = b_10;
                  {
                    ATerm d_10 = t;
                    int e_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_1 (ATerm t)
                        {
                          ATerm f_10 = t;
                          int k_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Var_1(t, _id);
                              LocalPopChoice(k_10);
                            }
                          else
                            {
                              t = f_10;
                              {
                                ATerm l_10 = t;
                                int m_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm q_1 (ATerm t)
                                    {
                                      ATerm r_1 (ATerm t)
                                      {
                                        t = Var_1(t, _id);
                                        return(t);
                                      }
                                      t = list_1(t, r_1);
                                      return(t);
                                    }
                                    t = Op_2(t, _id, q_1);
                                    LocalPopChoice(m_10);
                                  }
                                else
                                  {
                                    t = l_10;
                                    {
                                      ATerm q_10 = t;
                                      int s_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Int_1(t, _id);
                                          LocalPopChoice(s_10);
                                        }
                                      else
                                        {
                                          t = q_10;
                                          {
                                            ATerm v_10 = t;
                                            int w_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Real_1(t, _id);
                                                LocalPopChoice(w_10);
                                              }
                                            else
                                              {
                                                t = v_10;
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
                        t = Build_1(t, p_1);
                        LocalPopChoice(e_10);
                      }
                    else
                      {
                        t = d_10;
                        {
                          ATerm x_10 = t;
                          int y_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Prim_2(t, _id, _id);
                              LocalPopChoice(y_10);
                            }
                          else
                            {
                              t = x_10;
                              {
                                ATerm z_10 = t;
                                int a_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Call_2(t, _id, _id);
                                    LocalPopChoice(a_11);
                                  }
                                else
                                  {
                                    t = z_10;
                                    {
                                      ATerm s_1 (ATerm t)
                                      {
                                        t = Cons_2(t, simple_strategy_0, Nil_0);
                                        return(t);
                                      }
                                      t = Seqs_1(t, s_1);
                                    }
                                  }
                              }
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
  ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL;
  i_34 = t;
  h_34 :
  if(match_cons(i_34, sym_Row_2))
    {
      j_34 = ATgetArgument(i_34, 0);
      k_34 = ATgetArgument(i_34, 1);
      {
        ATerm f_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_34 = NULL;
            ATerm o_34 = NULL;
            t = not_null(k_34);
            {
              ATerm h_11 = t;
              if((PushChoice() == 0))
                {
                  t = simple_strategy_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = h_11;
                }
              {
                t = new_0(t);
                {
                  o_34 = t;
                  if(((n_34 != NULL) && (n_34 != o_34)))
                    _fail(o_34);
                  else
                    n_34 = o_34;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(n_34), (ATerm)ATempty, not_null(k_34))), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, not_null(j_34), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_34)), (ATerm) ATempty)));
            LocalPopChoice(g_11);
          }
        else
          {
            t = f_11;
            {
              t = not_null(k_34);
              t = simple_strategy_0(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, not_null(j_34), not_null(k_34)));
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
ATerm MatrixScope_0 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
  p_36 = t;
  f_36 :
  if(match_cons(p_36, sym_Matrix_2))
    {
      q_36 = ATgetArgument(p_36, 0);
      r_36 = ATgetArgument(p_36, 1);
      {
        ATerm u_36 = NULL,v_36 = NULL;
        ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL;
        t = not_null(r_36);
        {
          t = unzip_1(t, RowLet_0);
          {
            t = _2(t, concat_0, _id);
            {
              w_36 = t;
              a_36 :
              if(match_cons(w_36, sym__2))
                {
                  x_36 = ATgetArgument(w_36, 0);
                  y_36 = ATgetArgument(w_36, 1);
                  {
                    if(((u_36 != NULL) && (u_36 != x_36)))
                      _fail(x_36);
                    else
                      u_36 = x_36;
                    if(((v_36 != NULL) && (v_36 != y_36)))
                      _fail(y_36);
                    else
                      v_36 = y_36;
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(q_36), (ATerm) ATmakeAppl(sym_Let_2, not_null(u_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_i_11))), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(v_36)))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm i_98 (ATerm))
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
  g_37 = t;
  f_37 :
  if(match_cons(g_37, sym__2))
    {
      h_37 = ATgetArgument(g_37, 0);
      i_37 = ATgetArgument(g_37, 1);
      {
        ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
        ATerm j_11;
        j_11 = t;
        {
          ATerm o_37 = NULL;
          ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL;
          t = i_98(t);
          {
            o_37 = t;
            {
              if(((l_37 != NULL) && (l_37 != o_37)))
                _fail(o_37);
              else
                l_37 = o_37;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(l_37), not_null(h_37), not_null(i_37));
                {
                  t = table_push_0(t);
                  {
                    ATerm q_11 = t;
                    int r_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_37), term_s_11);
                        t = table_get_0(t);
                        LocalPopChoice(r_11);
                      }
                    else
                      {
                        t = q_11;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      p_37 = t;
                      e_37 :
                      if(((ATgetType(p_37) == AT_LIST) && ((ATermList) p_37 != ATempty)))
                        {
                          q_37 = ATgetFirst((ATermList) p_37);
                          r_37 = (ATerm) ATgetNext((ATermList) p_37);
                          {
                            if(((m_37 != NULL) && (m_37 != q_37)))
                              _fail(q_37);
                            else
                              m_37 = q_37;
                            {
                              if(((n_37 != NULL) && (n_37 != r_37)))
                                _fail(r_37);
                              else
                                n_37 = r_37;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(l_37), term_s_11, (ATerm) ATinsert(CheckATermList(not_null(n_37)), (ATerm) ATinsert(CheckATermList(not_null(m_37)), not_null(h_37))));
                                t = table_put_0(t);
                              }
                            }
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
            }
          }
        }
        t = j_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WildPat_0 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL;
  a_38 = t;
  w_37 :
  if(match_cons(a_38, sym_Row_3))
    {
      b_38 = ATgetArgument(a_38, 0);
      g_38 = ATgetArgument(a_38, 1);
      h_38 = ATgetArgument(a_38, 2);
      x_37 :
      if(((ATgetType(b_38) == AT_LIST) && ((ATermList) b_38 != ATempty)))
        {
          c_38 = ATgetFirst((ATermList) b_38);
          f_38 = (ATerm) ATgetNext((ATermList) b_38);
          y_37 :
          if(match_cons(c_38, sym_As_2))
            {
              d_38 = ATgetArgument(c_38, 0);
              e_38 = ATgetArgument(c_38, 1);
              z_37 :
              if(match_cons(e_38, sym_Wld_0))
                {
                  t = (ATerm) ATmakeAppl(sym_Row_3, not_null(f_38), not_null(g_38), not_null(h_38));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_state_0 (ATerm t)
{
  ATerm n_38 = NULL;
  t = filter_1(t, WildPat_0);
  {
    n_38 = t;
    t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(n_38));
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
  s_38 = t;
  r_38 :
  if(match_cons(s_38, sym__2))
    {
      t_38 = ATgetArgument(s_38, 0);
      u_38 = ATgetArgument(s_38, 1);
      if(((t_38 != NULL) && (t_38 != u_38)))
        _fail(u_38);
      else
        t_38 = u_38;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MatchCons_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL;
  s_39 = t;
  r_39 :
  if(match_cons(s_39, sym_Wld_0))
    {
      ATerm v_39 = NULL;
      ATerm a_40 = NULL;
      t = o_0(t);
      {
        ATerm t_1 (ATerm t)
        {
          ATerm w_39 = NULL,x_39 = NULL;
          w_39 = t;
          d_39 :
          if(match_cons(w_39, sym_Var_1))
            {
              x_39 = ATgetArgument(w_39, 0);
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(x_39)), term_w_11);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = map_1(t, t_1);
        {
          a_40 = t;
          if(((v_39 != NULL) && (v_39 != a_40)))
            _fail(a_40);
          else
            v_39 = a_40;
        }
      }
      t = not_null(v_39);
    }
  else
    {
      if(match_cons(s_39, sym_Int_1))
        {
          t_39 = ATgetArgument(s_39, 0);
          {
            ATerm c_40 = NULL,d_40 = NULL;
            t = n_0(t);
            {
              c_40 = t;
              h_39 :
              if(match_cons(c_40, sym_Int_1))
                {
                  d_40 = ATgetArgument(c_40, 0);
                  {
                    ATerm e_40 = NULL;
                    if(((t_39 != NULL) && (t_39 != d_40)))
                      _fail(d_40);
                    else
                      t_39 = d_40;
                    {
                      t = o_0(t);
                      {
                        e_40 = t;
                        g_39 :
                        if(((ATermList) e_40 == ATempty))
                          {
                            {
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
              else
                {
                  _fail(t);
                }
            }
            t = (ATerm) ATempty;
          }
        }
      else
        {
          if(match_cons(s_39, sym_Real_1))
            {
              t_39 = ATgetArgument(s_39, 0);
              {
                ATerm g_40 = NULL,h_40 = NULL;
                t = n_0(t);
                {
                  g_40 = t;
                  k_39 :
                  if(match_cons(g_40, sym_Real_1))
                    {
                      h_40 = ATgetArgument(g_40, 0);
                      {
                        ATerm i_40 = NULL;
                        if(((t_39 != NULL) && (t_39 != h_40)))
                          _fail(h_40);
                        else
                          t_39 = h_40;
                        {
                          t = o_0(t);
                          {
                            i_40 = t;
                            j_39 :
                            if(((ATermList) i_40 == ATempty))
                              {
                                {
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
                  else
                    {
                      _fail(t);
                    }
                }
                t = (ATerm) ATempty;
              }
            }
          else
            {
              if(match_cons(s_39, sym_Str_1))
                {
                  t_39 = ATgetArgument(s_39, 0);
                  {
                    ATerm k_40 = NULL,l_40 = NULL;
                    t = n_0(t);
                    {
                      k_40 = t;
                      n_39 :
                      if(match_cons(k_40, sym_Str_1))
                        {
                          l_40 = ATgetArgument(k_40, 0);
                          {
                            ATerm m_40 = NULL;
                            if(((t_39 != NULL) && (t_39 != l_40)))
                              _fail(l_40);
                            else
                              t_39 = l_40;
                            {
                              t = o_0(t);
                              {
                                m_40 = t;
                                m_39 :
                                if(((ATermList) m_40 == ATempty))
                                  {
                                    {
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
                      else
                        {
                          _fail(t);
                        }
                    }
                    t = (ATerm) ATempty;
                  }
                }
              else
                {
                  if(match_cons(s_39, sym_Op_2))
                    {
                      t_39 = ATgetArgument(s_39, 0);
                      u_39 = ATgetArgument(s_39, 1);
                      {
                        ATerm p_40 = NULL;
                        ATerm q_40 = NULL,r_40 = NULL,b_41 = NULL;
                        t = n_0(t);
                        {
                          q_40 = t;
                          q_39 :
                          if(match_cons(q_40, sym_Fun_2))
                            {
                              r_40 = ATgetArgument(q_40, 0);
                              b_41 = ATgetArgument(q_40, 1);
                              {
                                ATerm c_41 = NULL;
                                if(((t_39 != NULL) && (t_39 != r_40)))
                                  _fail(r_40);
                                else
                                  t_39 = r_40;
                                {
                                  if(((p_40 != NULL) && (p_40 != b_41)))
                                    _fail(b_41);
                                  else
                                    p_40 = b_41;
                                  {
                                    ATerm d_41 = NULL;
                                    t = not_null(u_39);
                                    {
                                      t = length_0(t);
                                      {
                                        d_41 = t;
                                        if(((c_41 != NULL) && (c_41 != d_41)))
                                          _fail(d_41);
                                        else
                                          c_41 = d_41;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_41), not_null(p_40));
                                      t = eq_0(t);
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
                        t = not_null(u_39);
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
  return(t);
}
ATerm ConsTransition_1 (ATerm t, ATerm d_92 (ATerm))
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL;
  o_42 = t;
  l_42 :
  if(match_cons(o_42, sym_Row_3))
    {
      p_42 = ATgetArgument(o_42, 0);
      b_43 = ATgetArgument(o_42, 1);
      c_43 = ATgetArgument(o_42, 2);
      m_42 :
      if(((ATgetType(p_42) == AT_LIST) && ((ATermList) p_42 != ATempty)))
        {
          q_42 = ATgetFirst((ATermList) p_42);
          a_43 = (ATerm) ATgetNext((ATermList) p_42);
          n_42 :
          if(match_cons(q_42, sym_As_2))
            {
              y_42 = ATgetArgument(q_42, 0);
              z_42 = ATgetArgument(q_42, 1);
              {
                ATerm h_43 = NULL,j_43 = NULL;
                ATerm x_11;
                x_11 = t;
                {
                  ATerm i_43 = NULL;
                  t = not_null(z_42);
                  {
                    t = d_92(t);
                    {
                      i_43 = t;
                      if(((h_43 != NULL) && (h_43 != i_43)))
                        _fail(i_43);
                      else
                        h_43 = i_43;
                    }
                  }
                }
                t = x_11;
                {
                  ATerm k_43 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_43), not_null(b_43));
                  {
                    t = conc_0(t);
                    {
                      k_43 = t;
                      if(((j_43 != NULL) && (j_43 != k_43)))
                        _fail(k_43);
                      else
                        j_43 = k_43;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Row_3, not_null(a_43), not_null(j_43), not_null(c_43));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Transition_0 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL;
  x_43 = t;
  v_43 :
  if(match_cons(x_43, sym__2))
    {
      y_43 = ATgetArgument(x_43, 0);
      z_43 = ATgetArgument(x_43, 1);
      w_43 :
      if(match_cons(z_43, sym__2))
        {
          a_44 = ATgetArgument(z_43, 0);
          b_44 = ATgetArgument(z_43, 1);
          {
            ATerm f_44 = NULL;
            ATerm h_44 = NULL;
            t = not_null(y_43);
            {
              ATerm u_1 (ATerm t)
              {
                ATerm v_1 (ATerm t)
                {
                  ATerm w_1 (ATerm t)
                  {
                    t = not_null(a_44);
                    return(t);
                  }
                  ATerm x_1 (ATerm t)
                  {
                    t = not_null(b_44);
                    return(t);
                  }
                  t = MatchCons_2(t, w_1, x_1);
                  return(t);
                }
                t = ConsTransition_1(t, v_1);
                return(t);
              }
              t = filter_1(t, u_1);
              {
                h_44 = t;
                if(((f_44 != NULL) && (f_44 != h_44)))
                  _fail(h_44);
                else
                  f_44 = h_44;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(a_44), not_null(b_44), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(f_44)));
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
ATerm RZip2_0 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL;
  n_44 = t;
  l_44 :
  if(match_cons(n_44, sym__2))
    {
      o_44 = ATgetArgument(n_44, 0);
      p_44 = ATgetArgument(n_44, 1);
      m_44 :
      if(((ATgetType(p_44) == AT_LIST) && ((ATermList) p_44 != ATempty)))
        {
          q_44 = ATgetFirst((ATermList) p_44);
          r_44 = (ATerm) ATgetNext((ATermList) p_44);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(o_44), not_null(q_44)), (ATerm) ATmakeAppl(sym__2, not_null(o_44), not_null(r_44)));
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
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL;
  z_44 = t;
  x_44 :
  if(match_cons(z_44, sym__2))
    {
      a_45 = ATgetArgument(z_44, 0);
      b_45 = ATgetArgument(z_44, 1);
      y_44 :
      if(((ATermList) b_45 == ATempty))
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
  return(t);
}
ATerm rzip_1 (ATerm t, ATerm w_110 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, w_110);
  return(t);
}
ATerm transitions_0 (ATerm t)
{
  t = rzip_1(t, Transition_0);
  return(t);
}
ATerm Uniq_0 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL,v_45 = NULL;
  r_45 = t;
  q_45 :
  if(((ATgetType(r_45) == AT_LIST) && ((ATermList) r_45 != ATempty)))
    {
      s_45 = ATgetFirst((ATermList) r_45);
      v_45 = (ATerm) ATgetNext((ATermList) r_45);
      {
        ATerm y_45 = NULL;
        ATerm a_46 = NULL;
        t = not_null(v_45);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm y_11 = t;
            if((PushChoice() == 0))
              {
                ATerm z_45 = NULL;
                z_45 = t;
                if(((s_45 != NULL) && (s_45 != z_45)))
                  _fail(z_45);
                else
                  s_45 = z_45;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = y_11;
              }
            return(t);
          }
          t = filter_1(t, y_1);
          {
            a_46 = t;
            if(((y_45 != NULL) && (y_45 != a_46)))
              _fail(a_46);
            else
              y_45 = a_46;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(y_45)), not_null(s_45));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm o_109 (ATerm))
{
  ATerm q_46 (ATerm t)
  {
    t = o_109(t);
    {
      ATerm z_11 = t;
      int a_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(a_12);
        }
      else
        {
          t = z_11;
          t = Cons_2(t, _id, q_46);
        }
    }
    return(t);
  }
  t = q_46(t);
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
    ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL;
    u_46 = t;
    s_46 :
    if(match_cons(u_46, sym_As_2))
      {
        v_46 = ATgetArgument(u_46, 0);
        x_46 = ATgetArgument(u_46, 1);
        t_46 :
        if(match_cons(v_46, sym_Off_1))
          {
            w_46 = ATgetArgument(v_46, 0);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_46));
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
  t = map_1(t, a_2);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    t = term_i_11;
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = term_g_12;
    return(t);
  }
  t = foldr_3(t, b_2, add_0, c_2);
  return(t);
}
ATerm ConsArgs_0 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL;
  m_47 = t;
  i_47 :
  if(match_cons(m_47, sym_Row_3))
    {
      n_47 = ATgetArgument(m_47, 0);
      u_47 = ATgetArgument(m_47, 1);
      v_47 = ATgetArgument(m_47, 2);
      j_47 :
      if(((ATgetType(n_47) == AT_LIST) && ((ATermList) n_47 != ATempty)))
        {
          o_47 = ATgetFirst((ATermList) n_47);
          t_47 = (ATerm) ATgetNext((ATermList) n_47);
          k_47 :
          if(match_cons(o_47, sym_As_2))
            {
              p_47 = ATgetArgument(o_47, 0);
              q_47 = ATgetArgument(o_47, 1);
              l_47 :
              if(match_cons(q_47, sym_Str_1))
                {
                  r_47 = ATgetArgument(q_47, 0);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, not_null(r_47)), (ATerm) ATempty);
                }
              else
                {
                  if(match_cons(q_47, sym_Real_1))
                    {
                      r_47 = ATgetArgument(q_47, 0);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, not_null(r_47)), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(q_47, sym_Int_1))
                        {
                          r_47 = ATgetArgument(q_47, 0);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, not_null(r_47)), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(q_47, sym_Op_2))
                            {
                              r_47 = ATgetArgument(q_47, 0);
                              s_47 = ATgetArgument(q_47, 1);
                              {
                                ATerm b_48 = NULL,d_48 = NULL;
                                ATerm h_12;
                                h_12 = t;
                                {
                                  ATerm c_48 = NULL;
                                  t = not_null(s_47);
                                  {
                                    t = length_0(t);
                                    {
                                      c_48 = t;
                                      if(((b_48 != NULL) && (b_48 != c_48)))
                                        _fail(c_48);
                                      else
                                        b_48 = c_48;
                                    }
                                  }
                                }
                                t = h_12;
                                {
                                  ATerm e_48 = NULL;
                                  t = not_null(s_47);
                                  {
                                    t = offsets_0(t);
                                    {
                                      e_48 = t;
                                      if(((d_48 != NULL) && (d_48 != e_48)))
                                        _fail(e_48);
                                      else
                                        d_48 = e_48;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, not_null(r_47), not_null(b_48)), not_null(d_48));
                                }
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
ATerm filter_1 (ATerm t, ATerm h_104 (ATerm))
{
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_2 (ATerm t)
            {
              t = filter_1(t, h_104);
              return(t);
            }
            t = Cons_2(t, h_104, d_2);
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            {
              ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL;
              n_48 = t;
              m_48 :
              if(((ATgetType(n_48) == AT_LIST) && ((ATermList) n_48 != ATempty)))
                {
                  o_48 = ATgetFirst((ATermList) n_48);
                  p_48 = (ATerm) ATgetNext((ATermList) n_48);
                  {
                    t = not_null(p_48);
                    t = filter_1(t, h_104);
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
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = explode_string_0(t);
      {
        ATerm s_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_49 (ATerm t)
            {
              ATerm u_12 = t;
              int y_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Cons_2(t, _id, t_49);
                  LocalPopChoice(y_12);
                }
              else
                {
                  t = u_12;
                  {
                    ATerm e_2 (ATerm t)
                    {
                      ATerm z_48 = NULL;
                      z_48 = t;
                      s_48 :
                      if(!(match_int(z_48, 47)))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    ATerm f_2 (ATerm t)
                    {
                      t = (ATerm) ATempty;
                      return(t);
                    }
                    t = Cons_2(t, e_2, f_2);
                  }
                }
              return(t);
            }
            t = t_49(t);
            LocalPopChoice(t_12);
          }
        else
          {
            t = s_12;
            t = (ATerm) ATempty;
          }
        t = implode_string_0(t);
      }
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      {
        ATerm a_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL;
        a_49 = t;
        u_48 :
        if(((ATgetType(a_49) == AT_LIST) && ((ATermList) a_49 != ATempty)))
          {
            d_49 = ATgetFirst((ATermList) a_49);
            r_49 = (ATerm) ATgetNext((ATermList) a_49);
            v_48 :
            if(match_cons(d_49, sym_Row_3))
              {
                e_49 = ATgetArgument(d_49, 0);
                p_49 = ATgetArgument(d_49, 1);
                q_49 = ATgetArgument(d_49, 2);
                w_48 :
                if(((ATgetType(e_49) == AT_LIST) && ((ATermList) e_49 != ATempty)))
                  {
                    f_49 = ATgetFirst((ATermList) e_49);
                    o_49 = (ATerm) ATgetNext((ATermList) e_49);
                    x_48 :
                    if(match_cons(f_49, sym_As_2))
                      {
                        g_49 = ATgetArgument(f_49, 0);
                        n_49 = ATgetArgument(f_49, 1);
                        y_48 :
                        if(match_cons(g_49, sym_Off_1))
                          {
                            m_49 = ATgetArgument(g_49, 0);
                            t = not_null(m_49);
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
    }
  return(t);
}
ATerm Mixture_0 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL;
  o_50 = t;
  n_50 :
  if(match_cons(o_50, sym_Matrix_1))
    {
      p_50 = ATgetArgument(o_50, 0);
      {
        ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL;
        ATerm w_50 = NULL;
        t = not_null(p_50);
        {
          ATerm x_50 = NULL;
          t = get_path_0(t);
          {
            w_50 = t;
            {
              if(((r_50 != NULL) && (r_50 != w_50)))
                _fail(w_50);
              else
                r_50 = w_50;
              {
                t = not_null(p_50);
                {
                  ATerm y_50 = NULL;
                  t = outedges_0(t);
                  {
                    x_50 = t;
                    {
                      if(((s_50 != NULL) && (s_50 != x_50)))
                        _fail(x_50);
                      else
                        s_50 = x_50;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_50), not_null(s_50));
                        {
                          ATerm z_50 = NULL;
                          t = transitions_0(t);
                          {
                            y_50 = t;
                            {
                              if(((t_50 != NULL) && (t_50 != y_50)))
                                _fail(y_50);
                              else
                                t_50 = y_50;
                              {
                                t = not_null(p_50);
                                {
                                  ATerm a_51 = NULL;
                                  t = default_state_0(t);
                                  {
                                    z_50 = t;
                                    {
                                      if(((u_50 != NULL) && (u_50 != z_50)))
                                        _fail(z_50);
                                      else
                                        u_50 = z_50;
                                      {
                                        t = new_0(t);
                                        {
                                          a_51 = t;
                                          {
                                            if(((v_50 != NULL) && (v_50 != a_51)))
                                              _fail(a_51);
                                            else
                                              v_50 = a_51;
                                            {
                                              ATerm z_12;
                                              z_12 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(p_50)), (ATerm) ATmakeAppl(sym_Defined_2, term_d_13, not_null(v_50)));
                                                {
                                                  ATerm g_2 (ATerm t)
                                                  {
                                                    t = term_g_13;
                                                    return(t);
                                                  }
                                                  t = assert_1(t, g_2);
                                                }
                                              }
                                              t = z_12;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Case_4, not_null(v_50), (ATerm)ATmakeAppl(sym_Var_1, not_null(r_50)), not_null(t_50), not_null(u_50));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ShiftColumnRow_0 (ATerm t)
{
  ATerm k_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,s_51 = NULL;
  k_51 = t;
  i_51 :
  if(match_cons(k_51, sym_Row_3))
    {
      n_51 = ATgetArgument(k_51, 0);
      o_51 = ATgetArgument(k_51, 1);
      s_51 = ATgetArgument(k_51, 2);
      j_51 :
      if(((ATgetType(o_51) == AT_LIST) && ((ATermList) o_51 != ATempty)))
        {
          p_51 = ATgetFirst((ATermList) o_51);
          q_51 = (ATerm) ATgetNext((ATermList) o_51);
          t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(not_null(n_51)), not_null(p_51)), not_null(q_51), not_null(s_51));
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
ATerm ShiftColumn_0 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL;
  c_52 = t;
  b_52 :
  if(match_cons(c_52, sym_Matrix_1))
    {
      d_52 = ATgetArgument(c_52, 0);
      {
        ATerm f_52 = NULL;
        ATerm g_52 = NULL;
        t = not_null(d_52);
        {
          ATerm h_13 = t;
          if((PushChoice() == 0))
            {
              ATerm h_2 (ATerm t)
              {
                ATerm i_2 (ATerm t)
                {
                  ATerm j_2 (ATerm t)
                  {
                    ATerm k_2 (ATerm t)
                    {
                      ATerm i_13 = t;
                      if((PushChoice() == 0))
                        {
                          t = Wld_0(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = i_13;
                        }
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
            {
              t = h_13;
            }
          {
            t = not_null(d_52);
            {
              t = map_1(t, ShiftColumnRow_0);
              {
                g_52 = t;
                if(((f_52 != NULL) && (f_52 != g_52)))
                  _fail(g_52);
                else
                  f_52 = g_52;
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(f_52));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm n_52 = NULL;
  n_52 = t;
  m_52 :
  if(match_cons(n_52, sym_Wld_0))
    {
      ATerm p_52 = NULL,r_52 = NULL;
      ATerm j_13;
      j_13 = t;
      {
        ATerm q_52 = NULL;
        t = SSLgetAnnotations(not_null(n_52));
        {
          q_52 = t;
          if(((p_52 != NULL) && (p_52 != q_52)))
            _fail(q_52);
          else
            p_52 = q_52;
        }
      }
      t = j_13;
      {
        ATerm s_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(p_52));
        {
          s_52 = t;
          if(((r_52 != NULL) && (r_52 != s_52)))
            _fail(s_52);
          else
            r_52 = s_52;
        }
        t = not_null(r_52);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm As_2 (ATerm t, ATerm c_88 (ATerm), ATerm d_88 (ATerm))
{
  ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL;
  c_53 = t;
  b_53 :
  if(match_cons(c_53, sym_As_2))
    {
      d_53 = ATgetArgument(c_53, 0);
      e_53 = ATgetArgument(c_53, 1);
      {
        ATerm i_53 = NULL,k_53 = NULL;
        ATerm j_53 = NULL;
        t = SSLgetAnnotations(not_null(c_53));
        {
          j_53 = t;
          if(((i_53 != NULL) && (i_53 != j_53)))
            _fail(j_53);
          else
            i_53 = j_53;
        }
        {
          t = not_null(d_53);
          {
            ATerm m_53 = NULL;
            t = c_88(t);
            {
              k_53 = t;
              {
                t = not_null(e_53);
                {
                  ATerm o_53 = NULL;
                  t = d_88(t);
                  {
                    m_53 = t;
                    {
                      ATerm p_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(k_53), not_null(m_53)), not_null(i_53));
                      {
                        p_53 = t;
                        if(((o_53 != NULL) && (o_53 != p_53)))
                          _fail(p_53);
                        else
                          o_53 = p_53;
                      }
                      t = not_null(o_53);
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
ATerm Row_3 (ATerm t, ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm t_86 (ATerm))
{
  ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL;
  c_54 = t;
  b_54 :
  if(match_cons(c_54, sym_Row_3))
    {
      d_54 = ATgetArgument(c_54, 0);
      e_54 = ATgetArgument(c_54, 1);
      f_54 = ATgetArgument(c_54, 2);
      {
        ATerm k_54 = NULL,m_54 = NULL;
        ATerm l_54 = NULL;
        t = SSLgetAnnotations(not_null(c_54));
        {
          l_54 = t;
          if(((k_54 != NULL) && (k_54 != l_54)))
            _fail(l_54);
          else
            k_54 = l_54;
        }
        {
          t = not_null(d_54);
          {
            ATerm o_54 = NULL;
            t = r_86(t);
            {
              m_54 = t;
              {
                t = not_null(e_54);
                {
                  ATerm q_54 = NULL;
                  t = s_86(t);
                  {
                    o_54 = t;
                    {
                      t = not_null(f_54);
                      {
                        ATerm s_54 = NULL;
                        t = t_86(t);
                        {
                          q_54 = t;
                          {
                            ATerm t_54 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Row_3, not_null(m_54), not_null(o_54), not_null(q_54)), not_null(k_54));
                            {
                              t_54 = t;
                              if(((s_54 != NULL) && (s_54 != t_54)))
                                _fail(t_54);
                              else
                                s_54 = t_54;
                            }
                            t = not_null(s_54);
                          }
                        }
                      }
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
ATerm SkipWild_0 (ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL;
  d_55 = t;
  c_55 :
  if(match_cons(d_55, sym_Matrix_1))
    {
      e_55 = ATgetArgument(d_55, 0);
      {
        ATerm g_55 = NULL;
        ATerm h_55 = NULL;
        t = not_null(e_55);
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
          {
            h_55 = t;
            if(((g_55 != NULL) && (g_55 != h_55)))
              _fail(h_55);
            else
              g_55 = h_55;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(g_55));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MatrixRowsEmpty_0 (ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL;
  r_55 = t;
  q_55 :
  if(match_cons(r_55, sym_Matrix_1))
    {
      s_55 = ATgetArgument(r_55, 0);
      {
        ATerm u_55 = NULL;
        ATerm d_56 = NULL;
        t = not_null(s_55);
        {
          ATerm o_2 (ATerm t)
          {
            ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL;
            v_55 = t;
            m_55 :
            if(match_cons(v_55, sym_Row_3))
              {
                w_55 = ATgetArgument(v_55, 0);
                x_55 = ATgetArgument(v_55, 1);
                y_55 = ATgetArgument(v_55, 2);
                n_55 :
                if(((ATermList) w_55 == ATempty))
                  {
                    o_55 :
                    if(((ATermList) x_55 == ATempty))
                      {
                        t = not_null(y_55);
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
          t = map_1(t, o_2);
          {
            d_56 = t;
            if(((u_55 != NULL) && (u_55 != d_56)))
              _fail(d_56);
            else
              u_55 = d_56;
          }
        }
        t = (ATerm) ATmakeAppl(sym_LChoices_1, not_null(u_55));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm reduce_matrix_0 (ATerm t)
{
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixRowsEmpty_0(t);
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
      {
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SkipWild_0(t);
            LocalPopChoice(n_13);
          }
        else
          {
            t = m_13;
            {
              ATerm r_13 = t;
              int s_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ShiftColumn_0(t);
                  LocalPopChoice(s_13);
                }
              else
                {
                  t = r_13;
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
  ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL;
  m_56 = t;
  i_56 :
  if(((ATgetType(m_56) == AT_LIST) && ((ATermList) m_56 != ATempty)))
    {
      n_56 = ATgetFirst((ATermList) m_56);
      o_56 = (ATerm) ATgetNext((ATermList) m_56);
      t = not_null(o_56);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL;
  v_56 = t;
  u_56 :
  if(match_cons(v_56, sym__2))
    {
      w_56 = ATgetArgument(v_56, 0);
      x_56 = ATgetArgument(v_56, 1);
      {
        ATerm w_13;
        w_13 = t;
        {
          ATerm a_57 = NULL;
          ATerm b_57 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_56), not_null(x_56));
          {
            ATerm z_13 = t;
            int a_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(a_14);
              }
            else
              {
                t = z_13;
                t = (ATerm) ATempty;
              }
            {
              b_57 = t;
              if(((a_57 != NULL) && (a_57 != b_57)))
                _fail(b_57);
              else
                a_57 = b_57;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_56), not_null(x_56), not_null(a_57));
            t = table_put_0(t);
          }
        }
        t = w_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm f_98 (ATerm))
{
  ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL;
  ATerm b_14;
  b_14 = t;
  {
    ATerm l_57 = NULL;
    ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL;
    t = f_98(t);
    {
      l_57 = t;
      {
        if(((j_57 != NULL) && (j_57 != l_57)))
          _fail(l_57);
        else
          j_57 = l_57;
        {
          ATerm c_14 = t;
          int d_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_57), term_s_11);
              t = table_get_0(t);
              LocalPopChoice(d_14);
            }
          else
            {
              t = c_14;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            m_57 = t;
            h_57 :
            if(((ATgetType(m_57) == AT_LIST) && ((ATermList) m_57 != ATempty)))
              {
                n_57 = ATgetFirst((ATermList) m_57);
                o_57 = (ATerm) ATgetNext((ATermList) m_57);
                {
                  if(((k_57 != NULL) && (k_57 != n_57)))
                    _fail(n_57);
                  else
                    k_57 = n_57;
                  {
                    if(((i_57 != NULL) && (i_57 != o_57)))
                      _fail(o_57);
                    else
                      i_57 = o_57;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(j_57), term_s_11, not_null(i_57));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(k_57);
                          {
                            ATerm p_2 (ATerm t)
                            {
                              ATerm p_57 = NULL;
                              p_57 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_57), not_null(p_57));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, p_2);
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
          }
        }
      }
    }
  }
  t = b_14;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm a_113 (ATerm), ATerm b_113 (ATerm))
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_113(t);
      t = b_113(t);
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      {
        t = b_113(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm e_98 (ATerm))
{
  ATerm w_57 = NULL;
  ATerm g_14;
  g_14 = t;
  {
    ATerm x_57 = NULL;
    ATerm y_57 = NULL;
    t = e_98(t);
    {
      x_57 = t;
      {
        if(((w_57 != NULL) && (w_57 != x_57)))
          _fail(x_57);
        else
          w_57 = x_57;
        {
          ATerm z_57 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_57), term_s_11);
          {
            ATerm h_14 = t;
            int m_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_14);
              }
            else
              {
                t = h_14;
                t = (ATerm) ATempty;
              }
            {
              z_57 = t;
              if(((y_57 != NULL) && (y_57 != z_57)))
                _fail(z_57);
              else
                y_57 = z_57;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_57), term_s_11, (ATerm) ATinsert(CheckATermList(not_null(y_57)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = g_14;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm g_98 (ATerm), ATerm h_98 (ATerm))
{
  t = begin_scope_1(t, g_98);
  {
    ATerm q_2 (ATerm t)
    {
      t = end_scope_1(t, g_98);
      return(t);
    }
    t = restore_always_2(t, h_98, q_2);
  }
  return(t);
}
ATerm matrix_to_dfa_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = term_g_13;
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm t_2 (ATerm t)
    {
      ATerm n_14 = t;
      int o_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = reduce_matrix_0(t);
          LocalPopChoice(o_14);
        }
      else
        {
          t = n_14;
          {
            ATerm s_14 = t;
            int u_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = MatrixScope_0(t);
                LocalPopChoice(u_14);
              }
            else
              {
                t = s_14;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, t_2);
    t = _all(t, s_2);
    return(t);
  }
  t = scope_2(t, r_2, s_2);
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
  u_58 = t;
  t_58 :
  if(match_cons(u_58, sym_Cong_2))
    {
      v_58 = ATgetArgument(u_58, 0);
      w_58 = ATgetArgument(u_58, 1);
      {
        ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,z_59 = NULL,c_60 = NULL,h_60 = NULL;
        ATerm x_14;
        x_14 = t;
        {
          ATerm f_59 = NULL;
          t = not_null(w_58);
          {
            ATerm i_59 = NULL;
            t = map_1(t, new_0);
            {
              f_59 = t;
              {
                if(((c_59 != NULL) && (c_59 != f_59)))
                  _fail(f_59);
                else
                  c_59 = f_59;
                {
                  t = not_null(c_59);
                  {
                    ATerm j_59 = NULL;
                    ATerm u_2 (ATerm t)
                    {
                      ATerm g_59 = NULL;
                      ATerm h_59 = NULL;
                      h_59 = t;
                      if(((g_59 != NULL) && (g_59 != h_59)))
                        _fail(h_59);
                      else
                        g_59 = h_59;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_59));
                      return(t);
                    }
                    t = map_1(t, u_2);
                    {
                      i_59 = t;
                      {
                        if(((z_58 != NULL) && (z_58 != i_59)))
                          _fail(i_59);
                        else
                          z_58 = i_59;
                        {
                          ATerm k_59 = NULL;
                          t = new_0(t);
                          {
                            j_59 = t;
                            {
                              if(((a_59 != NULL) && (a_59 != j_59)))
                                _fail(j_59);
                              else
                                a_59 = j_59;
                              {
                                t = not_null(w_58);
                                {
                                  ATerm n_59 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    k_59 = t;
                                    {
                                      if(((d_59 != NULL) && (d_59 != k_59)))
                                        _fail(k_59);
                                      else
                                        d_59 = k_59;
                                      {
                                        t = not_null(d_59);
                                        {
                                          ATerm o_59 = NULL,y_59 = NULL;
                                          ATerm v_2 (ATerm t)
                                          {
                                            ATerm l_59 = NULL;
                                            ATerm m_59 = NULL;
                                            m_59 = t;
                                            if(((l_59 != NULL) && (l_59 != m_59)))
                                              _fail(m_59);
                                            else
                                              l_59 = m_59;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_59));
                                            return(t);
                                          }
                                          t = map_1(t, v_2);
                                          {
                                            n_59 = t;
                                            {
                                              if(((b_59 != NULL) && (b_59 != n_59)))
                                                _fail(n_59);
                                              else
                                                b_59 = n_59;
                                              {
                                                ATerm p_59 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_59), not_null(d_59));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    p_59 = t;
                                                    if(((o_59 != NULL) && (o_59 != p_59)))
                                                      _fail(p_59);
                                                    else
                                                      o_59 = p_59;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_59), not_null(w_58));
                                                  {
                                                    ATerm w_2 (ATerm t)
                                                    {
                                                      ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL;
                                                      q_59 = t;
                                                      n_58 :
                                                      if(match_cons(q_59, sym__2))
                                                        {
                                                          r_59 = ATgetArgument(q_59, 0);
                                                          u_59 = ATgetArgument(q_59, 1);
                                                          o_58 :
                                                          if(match_cons(r_59, sym__2))
                                                            {
                                                              s_59 = ATgetArgument(r_59, 0);
                                                              t_59 = ATgetArgument(r_59, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_59))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_59), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_59)))));
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
                                                    t = zip_1(t, w_2);
                                                    {
                                                      y_59 = t;
                                                      if(((e_59 != NULL) && (e_59 != y_59)))
                                                        _fail(y_59);
                                                      else
                                                        e_59 = y_59;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = x_14;
        {
          ATerm y_14;
          y_14 = t;
          {
            ATerm b_60 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_59), not_null(d_59));
            {
              t = conc_0(t);
              {
                b_60 = t;
                if(((z_59 != NULL) && (z_59 != b_60)))
                  _fail(b_60);
                else
                  z_59 = b_60;
              }
            }
          }
          t = y_14;
          {
            ATerm z_14;
            z_14 = t;
            {
              ATerm d_60 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(v_58), not_null(z_58)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_59))));
              {
                t = Mapp2_0(t);
                {
                  d_60 = t;
                  if(((c_60 != NULL) && (c_60 != d_60)))
                    _fail(d_60);
                  else
                    c_60 = d_60;
                }
              }
            }
            t = z_14;
            {
              ATerm i_60 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(v_58), not_null(b_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_59))));
              {
                t = Bapp2_0(t);
                {
                  i_60 = t;
                  if(((h_60 != NULL) && (h_60 != i_60)))
                    _fail(i_60);
                  else
                    h_60 = i_60;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(z_59)), not_null(a_59)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_60), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(e_59)), not_null(h_60))));
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
ATerm Bapp2_0 (ATerm t)
{
  ATerm a_62 = NULL,b_62 = NULL;
  a_62 = t;
  z_61 :
  if(match_cons(a_62, sym_Build_1))
    {
      b_62 = ATgetArgument(a_62, 0);
      {
        ATerm a_15 = t;
        int b_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_62 = NULL,e_62 = NULL,j_62 = NULL,k_62 = NULL;
            ATerm l_62 = NULL;
            ATerm p_62 = NULL;
            t = new_0(t);
            {
              l_62 = t;
              {
                if(((j_62 != NULL) && (j_62 != l_62)))
                  _fail(l_62);
                else
                  j_62 = l_62;
                {
                  t = not_null(b_62);
                  {
                    ATerm x_2 (ATerm t)
                    {
                      ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL;
                      m_62 = t;
                      j_61 :
                      if(match_cons(m_62, sym_Anno_2))
                        {
                          n_62 = ATgetArgument(m_62, 0);
                          o_62 = ATgetArgument(m_62, 1);
                          {
                            if(((d_62 != NULL) && (d_62 != n_62)))
                              _fail(n_62);
                            else
                              d_62 = n_62;
                            {
                              if(((e_62 != NULL) && (e_62 != o_62)))
                                _fail(o_62);
                              else
                                e_62 = o_62;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_62));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, x_2);
                    {
                      p_62 = t;
                      if(((k_62 != NULL) && (k_62 != p_62)))
                        _fail(p_62);
                      else
                        k_62 = p_62;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_62)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_c_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_62)), not_null(d_62))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_62))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_62))));
            LocalPopChoice(b_15);
          }
        else
          {
            t = a_15;
            {
              ATerm g_15 = t;
              int h_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL;
                  ATerm u_62 = NULL;
                  ATerm x_62 = NULL;
                  t = new_0(t);
                  {
                    u_62 = t;
                    {
                      if(((s_62 != NULL) && (s_62 != u_62)))
                        _fail(u_62);
                      else
                        s_62 = u_62;
                      {
                        t = not_null(b_62);
                        {
                          ATerm y_2 (ATerm t)
                          {
                            ATerm v_62 = NULL,w_62 = NULL;
                            v_62 = t;
                            t_61 :
                            if(match_cons(v_62, sym_RootApp_1))
                              {
                                w_62 = ATgetArgument(v_62, 0);
                                {
                                  if(((r_62 != NULL) && (r_62 != w_62)))
                                    _fail(w_62);
                                  else
                                    r_62 = w_62;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_62));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, y_2);
                          {
                            x_62 = t;
                            if(((t_62 != NULL) && (t_62 != x_62)))
                              _fail(x_62);
                            else
                              t_62 = x_62;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_62)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_62), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_62))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_62))));
                  LocalPopChoice(h_15);
                }
              else
                {
                  t = g_15;
                  {
                    ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL;
                    ATerm h_63 = NULL;
                    ATerm l_63 = NULL;
                    t = new_0(t);
                    {
                      h_63 = t;
                      {
                        if(((b_63 != NULL) && (b_63 != h_63)))
                          _fail(h_63);
                        else
                          b_63 = h_63;
                        {
                          t = not_null(b_62);
                          {
                            ATerm z_2 (ATerm t)
                            {
                              ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL;
                              i_63 = t;
                              x_61 :
                              if(match_cons(i_63, sym_App_2))
                                {
                                  j_63 = ATgetArgument(i_63, 0);
                                  k_63 = ATgetArgument(i_63, 1);
                                  {
                                    if(((z_62 != NULL) && (z_62 != j_63)))
                                      _fail(j_63);
                                    else
                                      z_62 = j_63;
                                    {
                                      if(((a_63 != NULL) && (a_63 != k_63)))
                                        _fail(k_63);
                                      else
                                        a_63 = k_63;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_63));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, z_2);
                            {
                              l_63 = t;
                              if(((c_63 != NULL) && (c_63 != l_63)))
                                _fail(l_63);
                              else
                                c_63 = l_63;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_63)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(z_62), not_null(a_63), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_63)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_63))));
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
ATerm Zip3_0 (ATerm t)
{
  ATerm i_64 = NULL,j_64 = NULL,q_64 = NULL;
  i_64 = t;
  h_64 :
  if(match_cons(i_64, sym__2))
    {
      j_64 = ATgetArgument(i_64, 0);
      q_64 = ATgetArgument(i_64, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_64)), not_null(j_64));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL;
  c_65 = t;
  z_64 :
  if(match_cons(c_65, sym__2))
    {
      d_65 = ATgetArgument(c_65, 0);
      j_65 = ATgetArgument(c_65, 1);
      a_65 :
      if(((ATgetType(d_65) == AT_LIST) && ((ATermList) d_65 != ATempty)))
        {
          e_65 = ATgetFirst((ATermList) d_65);
          f_65 = (ATerm) ATgetNext((ATermList) d_65);
          b_65 :
          if(((ATgetType(j_65) == AT_LIST) && ((ATermList) j_65 != ATempty)))
            {
              k_65 = ATgetFirst((ATermList) j_65);
              l_65 = (ATerm) ATgetNext((ATermList) j_65);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(e_65), not_null(k_65)), (ATerm) ATmakeAppl(sym__2, not_null(f_65), not_null(l_65)));
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
  ATerm p_66 = NULL,w_66 = NULL,x_66 = NULL;
  p_66 = t;
  a_66 :
  if(match_cons(p_66, sym__2))
    {
      w_66 = ATgetArgument(p_66, 0);
      x_66 = ATgetArgument(p_66, 1);
      b_66 :
      if(((ATermList) w_66 == ATempty))
        {
          c_66 :
          if(((ATermList) x_66 == ATempty))
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
ATerm zip_1 (ATerm t, ATerm n_110 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, n_110);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL;
  x_67 = t;
  q_67 :
  if(match_cons(x_67, sym_Call_2))
    {
      y_67 = ATgetArgument(x_67, 0);
      a_68 = ATgetArgument(x_67, 1);
      r_67 :
      if(match_cons(y_67, sym_SVar_1))
        {
          z_67 = ATgetArgument(y_67, 0);
          s_67 :
          if(match_string(z_67, "Anno_Cong__"))
            {
              t_67 :
              if(((ATgetType(a_68) == AT_LIST) && ((ATermList) a_68 != ATempty)))
                {
                  b_68 = ATgetFirst((ATermList) a_68);
                  e_68 = (ATerm) ATgetNext((ATermList) a_68);
                  u_67 :
                  if(match_cons(b_68, sym_Cong_2))
                    {
                      c_68 = ATgetArgument(b_68, 0);
                      d_68 = ATgetArgument(b_68, 1);
                      v_67 :
                      if(((ATgetType(e_68) == AT_LIST) && ((ATermList) e_68 != ATempty)))
                        {
                          f_68 = ATgetFirst((ATermList) e_68);
                          g_68 = (ATerm) ATgetNext((ATermList) e_68);
                          w_67 :
                          if(((ATermList) g_68 == ATempty))
                            {
                              {
                                ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,p_69 = NULL,r_69 = NULL,t_69 = NULL;
                                ATerm i_15;
                                i_15 = t;
                                {
                                  ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(d_68)), not_null(f_68));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      r_68 = t;
                                      m_67 :
                                      if(((ATgetType(r_68) == AT_LIST) && ((ATermList) r_68 != ATempty)))
                                        {
                                          s_68 = ATgetFirst((ATermList) r_68);
                                          t_68 = (ATerm) ATgetNext((ATermList) r_68);
                                          {
                                            ATerm w_68 = NULL;
                                            if(((k_68 != NULL) && (k_68 != s_68)))
                                              _fail(s_68);
                                            else
                                              k_68 = s_68;
                                            {
                                              if(((o_68 != NULL) && (o_68 != t_68)))
                                                _fail(t_68);
                                              else
                                                o_68 = t_68;
                                              {
                                                ATerm x_68 = NULL,y_68 = NULL,z_68 = NULL;
                                                ATerm a_3 (ATerm t)
                                                {
                                                  ATerm u_68 = NULL;
                                                  ATerm v_68 = NULL;
                                                  v_68 = t;
                                                  if(((u_68 != NULL) && (u_68 != v_68)))
                                                    _fail(v_68);
                                                  else
                                                    u_68 = v_68;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_68));
                                                  return(t);
                                                }
                                                t = map_1(t, a_3);
                                                {
                                                  w_68 = t;
                                                  {
                                                    if(((l_68 != NULL) && (l_68 != w_68)))
                                                      _fail(w_68);
                                                    else
                                                      l_68 = w_68;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(d_68)), not_null(f_68));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          x_68 = t;
                                                          l_67 :
                                                          if(((ATgetType(x_68) == AT_LIST) && ((ATermList) x_68 != ATempty)))
                                                            {
                                                              y_68 = ATgetFirst((ATermList) x_68);
                                                              z_68 = (ATerm) ATgetNext((ATermList) x_68);
                                                              {
                                                                ATerm c_69 = NULL;
                                                                if(((m_68 != NULL) && (m_68 != y_68)))
                                                                  _fail(y_68);
                                                                else
                                                                  m_68 = y_68;
                                                                {
                                                                  if(((p_68 != NULL) && (p_68 != z_68)))
                                                                    _fail(z_68);
                                                                  else
                                                                    p_68 = z_68;
                                                                  {
                                                                    ATerm d_69 = NULL,o_69 = NULL;
                                                                    ATerm b_3 (ATerm t)
                                                                    {
                                                                      ATerm a_69 = NULL;
                                                                      ATerm b_69 = NULL;
                                                                      b_69 = t;
                                                                      if(((a_69 != NULL) && (a_69 != b_69)))
                                                                        _fail(b_69);
                                                                      else
                                                                        a_69 = b_69;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_69));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, b_3);
                                                                    {
                                                                      c_69 = t;
                                                                      {
                                                                        if(((n_68 != NULL) && (n_68 != c_69)))
                                                                          _fail(c_69);
                                                                        else
                                                                          n_68 = c_69;
                                                                        {
                                                                          ATerm e_69 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_68), not_null(p_68));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              e_69 = t;
                                                                              if(((d_69 != NULL) && (d_69 != e_69)))
                                                                                _fail(e_69);
                                                                              else
                                                                                d_69 = e_69;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(d_69), (ATerm) ATinsert(CheckATermList(not_null(d_68)), not_null(f_68)));
                                                                            {
                                                                              ATerm c_3 (ATerm t)
                                                                              {
                                                                                ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL;
                                                                                f_69 = t;
                                                                                i_67 :
                                                                                if(match_cons(f_69, sym__2))
                                                                                  {
                                                                                    g_69 = ATgetArgument(f_69, 0);
                                                                                    j_69 = ATgetArgument(f_69, 1);
                                                                                    j_67 :
                                                                                    if(match_cons(g_69, sym__2))
                                                                                      {
                                                                                        h_69 = ATgetArgument(g_69, 0);
                                                                                        i_69 = ATgetArgument(g_69, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_69))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_69), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_69)))));
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
                                                                              t = zip_1(t, c_3);
                                                                              {
                                                                                o_69 = t;
                                                                                if(((q_68 != NULL) && (q_68 != o_69)))
                                                                                  _fail(o_69);
                                                                                else
                                                                                  q_68 = o_69;
                                                                              }
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
                                    }
                                  }
                                }
                                t = i_15;
                                {
                                  ATerm m_15;
                                  m_15 = t;
                                  {
                                    ATerm q_69 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_68), not_null(p_68));
                                    {
                                      t = conc_0(t);
                                      {
                                        q_69 = t;
                                        if(((p_69 != NULL) && (p_69 != q_69)))
                                          _fail(q_69);
                                        else
                                          p_69 = q_69;
                                      }
                                    }
                                  }
                                  t = m_15;
                                  {
                                    ATerm n_15;
                                    n_15 = t;
                                    {
                                      ATerm s_69 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(c_68), not_null(l_68)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_68))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          s_69 = t;
                                          if(((r_69 != NULL) && (r_69 != s_69)))
                                            _fail(s_69);
                                          else
                                            r_69 = s_69;
                                        }
                                      }
                                    }
                                    t = n_15;
                                    {
                                      ATerm u_69 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(c_68), not_null(n_68)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_68))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          u_69 = t;
                                          if(((t_69 != NULL) && (t_69 != u_69)))
                                            _fail(u_69);
                                          else
                                            t_69 = u_69;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(p_69)), not_null(m_68)), not_null(k_68)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_69), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(q_68)), not_null(t_69))));
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
ATerm Prim_2 (ATerm t, ATerm t_91 (ATerm), ATerm u_91 (ATerm))
{
  ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL;
  g_72 = t;
  f_72 :
  if(match_cons(g_72, sym_Prim_2))
    {
      h_72 = ATgetArgument(g_72, 0);
      i_72 = ATgetArgument(g_72, 1);
      {
        ATerm m_72 = NULL,o_72 = NULL;
        ATerm n_72 = NULL;
        t = SSLgetAnnotations(not_null(g_72));
        {
          n_72 = t;
          if(((m_72 != NULL) && (m_72 != n_72)))
            _fail(n_72);
          else
            m_72 = n_72;
        }
        {
          t = not_null(h_72);
          {
            ATerm v_72 = NULL;
            t = t_91(t);
            {
              o_72 = t;
              {
                t = not_null(i_72);
                {
                  ATerm x_72 = NULL;
                  t = u_91(t);
                  {
                    v_72 = t;
                    {
                      ATerm h_73 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(o_72), not_null(v_72)), not_null(m_72));
                      {
                        h_73 = t;
                        if(((x_72 != NULL) && (x_72 != h_73)))
                          _fail(h_73);
                        else
                          x_72 = h_73;
                      }
                      t = not_null(x_72);
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
ATerm Explode_2 (ATerm t, ATerm y_87 (ATerm), ATerm z_87 (ATerm))
{
  ATerm h_74 = NULL,i_74 = NULL,j_74 = NULL;
  h_74 = t;
  g_74 :
  if(match_cons(h_74, sym_Explode_2))
    {
      i_74 = ATgetArgument(h_74, 0);
      j_74 = ATgetArgument(h_74, 1);
      {
        ATerm n_74 = NULL,p_74 = NULL;
        ATerm o_74 = NULL;
        t = SSLgetAnnotations(not_null(h_74));
        {
          o_74 = t;
          if(((n_74 != NULL) && (n_74 != o_74)))
            _fail(o_74);
          else
            n_74 = o_74;
        }
        {
          t = not_null(i_74);
          {
            ATerm r_74 = NULL;
            t = y_87(t);
            {
              p_74 = t;
              {
                t = not_null(j_74);
                {
                  ATerm t_74 = NULL;
                  t = z_87(t);
                  {
                    r_74 = t;
                    {
                      ATerm u_74 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(p_74), not_null(r_74)), not_null(n_74));
                      {
                        u_74 = t;
                        if(((t_74 != NULL) && (t_74 != u_74)))
                          _fail(u_74);
                        else
                          t_74 = u_74;
                      }
                      t = not_null(t_74);
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
ATerm Op_2 (ATerm t, ATerm t_89 (ATerm), ATerm u_89 (ATerm))
{
  ATerm g_75 = NULL,h_75 = NULL,i_75 = NULL;
  g_75 = t;
  f_75 :
  if(match_cons(g_75, sym_Op_2))
    {
      h_75 = ATgetArgument(g_75, 0);
      i_75 = ATgetArgument(g_75, 1);
      {
        ATerm m_75 = NULL,o_75 = NULL;
        ATerm n_75 = NULL;
        t = SSLgetAnnotations(not_null(g_75));
        {
          n_75 = t;
          if(((m_75 != NULL) && (m_75 != n_75)))
            _fail(n_75);
          else
            m_75 = n_75;
        }
        {
          t = not_null(h_75);
          {
            ATerm q_75 = NULL;
            t = t_89(t);
            {
              o_75 = t;
              {
                t = not_null(i_75);
                {
                  ATerm s_75 = NULL;
                  t = u_89(t);
                  {
                    q_75 = t;
                    {
                      ATerm t_75 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(o_75), not_null(q_75)), not_null(m_75));
                      {
                        t_75 = t;
                        if(((s_75 != NULL) && (s_75 != t_75)))
                          _fail(t_75);
                        else
                          s_75 = t_75;
                      }
                      t = not_null(s_75);
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
ATerm pat_td_1 (ATerm t, ATerm y_117 (ATerm))
{
  ATerm o_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_117(t);
      LocalPopChoice(w_15);
    }
  else
    {
      t = o_15;
      {
        ATerm x_15 = t;
        int y_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_3 (ATerm t)
            {
              ATerm e_3 (ATerm t)
              {
                t = pat_td_1(t, y_117);
                return(t);
              }
              t = fetch_1(t, e_3);
              return(t);
            }
            t = Op_2(t, _id, d_3);
            LocalPopChoice(y_15);
          }
        else
          {
            t = x_15;
            {
              ATerm z_15 = t;
              int a_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_3 (ATerm t)
                  {
                    t = pat_td_1(t, y_117);
                    return(t);
                  }
                  t = Explode_2(t, _id, f_3);
                  LocalPopChoice(a_16);
                }
              else
                {
                  t = z_15;
                  {
                    ATerm b_16 = t;
                    int c_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_3 (ATerm t)
                        {
                          t = pat_td_1(t, y_117);
                          return(t);
                        }
                        t = Explode_2(t, g_3, _id);
                        LocalPopChoice(c_16);
                      }
                    else
                      {
                        t = b_16;
                        {
                          ATerm h_3 (ATerm t)
                          {
                            ATerm i_3 (ATerm t)
                            {
                              t = pat_td_1(t, y_117);
                              return(t);
                            }
                            t = fetch_1(t, i_3);
                            return(t);
                          }
                          t = Prim_2(t, _id, h_3);
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm Mapp2_0 (ATerm t)
{
  ATerm t_76 = NULL,u_76 = NULL;
  t_76 = t;
  o_76 :
  if(match_cons(t_76, sym_Match_1))
    {
      u_76 = ATgetArgument(t_76, 0);
      {
        ATerm e_16 = t;
        int f_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_76 = NULL,x_76 = NULL,m_77 = NULL,n_77 = NULL;
            ATerm o_77 = NULL;
            ATerm o_79 = NULL;
            t = new_0(t);
            {
              o_77 = t;
              {
                if(((m_77 != NULL) && (m_77 != o_77)))
                  _fail(o_77);
                else
                  m_77 = o_77;
                {
                  t = not_null(u_76);
                  {
                    ATerm j_3 (ATerm t)
                    {
                      ATerm p_77 = NULL,m_79 = NULL,n_79 = NULL;
                      p_77 = t;
                      e_76 :
                      if(match_cons(p_77, sym_Anno_2))
                        {
                          m_79 = ATgetArgument(p_77, 0);
                          n_79 = ATgetArgument(p_77, 1);
                          {
                            if(((w_76 != NULL) && (w_76 != m_79)))
                              _fail(m_79);
                            else
                              w_76 = m_79;
                            {
                              if(((x_76 != NULL) && (x_76 != n_79)))
                                _fail(n_79);
                              else
                                x_76 = n_79;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_77)), not_null(w_76));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, j_3);
                    {
                      o_79 = t;
                      if(((n_77 != NULL) && (n_77 != o_79)))
                        _fail(o_79);
                      else
                        n_77 = o_79;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_77)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_77)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_h_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_77)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_76))))));
            LocalPopChoice(f_16);
          }
        else
          {
            t = e_16;
            {
              ATerm p_16 = t;
              int q_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_79 = NULL,r_79 = NULL,u_79 = NULL;
                  ATerm v_79 = NULL;
                  ATerm y_79 = NULL;
                  t = new_0(t);
                  {
                    v_79 = t;
                    {
                      if(((r_79 != NULL) && (r_79 != v_79)))
                        _fail(v_79);
                      else
                        r_79 = v_79;
                      {
                        t = not_null(u_76);
                        {
                          ATerm k_3 (ATerm t)
                          {
                            ATerm w_79 = NULL,x_79 = NULL;
                            w_79 = t;
                            i_76 :
                            if(match_cons(w_79, sym_RootApp_1))
                              {
                                x_79 = ATgetArgument(w_79, 0);
                                {
                                  if(((q_79 != NULL) && (q_79 != x_79)))
                                    _fail(x_79);
                                  else
                                    q_79 = x_79;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_79));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, k_3);
                          {
                            y_79 = t;
                            if(((u_79 != NULL) && (u_79 != y_79)))
                              _fail(y_79);
                            else
                              u_79 = y_79;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_79)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_79)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_79))), not_null(q_79))));
                  LocalPopChoice(q_16);
                }
              else
                {
                  t = p_16;
                  {
                    ATerm a_80 = NULL,b_80 = NULL,c_80 = NULL,d_80 = NULL;
                    ATerm e_80 = NULL;
                    ATerm i_80 = NULL;
                    t = new_0(t);
                    {
                      e_80 = t;
                      {
                        if(((c_80 != NULL) && (c_80 != e_80)))
                          _fail(e_80);
                        else
                          c_80 = e_80;
                        {
                          t = not_null(u_76);
                          {
                            ATerm l_3 (ATerm t)
                            {
                              ATerm f_80 = NULL,g_80 = NULL,h_80 = NULL;
                              f_80 = t;
                              m_76 :
                              if(match_cons(f_80, sym_App_2))
                                {
                                  g_80 = ATgetArgument(f_80, 0);
                                  h_80 = ATgetArgument(f_80, 1);
                                  {
                                    if(((b_80 != NULL) && (b_80 != g_80)))
                                      _fail(g_80);
                                    else
                                      b_80 = g_80;
                                    {
                                      if(((a_80 != NULL) && (a_80 != h_80)))
                                        _fail(h_80);
                                      else
                                        a_80 = h_80;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_80));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, l_3);
                            {
                              i_80 = t;
                              if(((d_80 != NULL) && (d_80 != i_80)))
                                _fail(i_80);
                              else
                                d_80 = i_80;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_80)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_80)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_80))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_80)), not_null(b_80)))));
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
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm d_81 = NULL,e_81 = NULL,f_81 = NULL;
  d_81 = t;
  a_81 :
  if(match_cons(d_81, sym_Cong_2))
    {
      e_81 = ATgetArgument(d_81, 0);
      f_81 = ATgetArgument(d_81, 1);
      {
        ATerm i_81 = NULL;
        ATerm m_81 = NULL;
        t = not_null(f_81);
        {
          ATerm m_3 (ATerm t)
          {
            ATerm j_81 = NULL,k_81 = NULL;
            k_81 = t;
            y_80 :
            if(match_cons(k_81, sym_Match_1))
              {
                j_81 = ATgetArgument(k_81, 0);
                t = not_null(j_81);
              }
            else
              {
                if(match_cons(k_81, sym_Id_0))
                  {
                    t = term_w_11;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, m_3);
          {
            m_81 = t;
            if(((i_81 != NULL) && (i_81 != m_81)))
              _fail(m_81);
            else
              i_81 = m_81;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(e_81), not_null(i_81)));
          t = Mapp2_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL;
  u_81 = t;
  s_81 :
  if(match_cons(u_81, sym_Scope_2))
    {
      v_81 = ATgetArgument(u_81, 0);
      w_81 = ATgetArgument(u_81, 1);
      t_81 :
      if(((ATermList) v_81 == ATempty))
        {
          t = not_null(w_81);
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
ATerm Idempotency_0 (ATerm t)
{
  ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL,t_82 = NULL,u_82 = NULL;
  s_82 = t;
  f_82 :
  if(match_cons(s_82, sym_Where_1))
    {
      t_82 = ATgetArgument(s_82, 0);
      g_82 :
      if(match_cons(t_82, sym_Seq_2))
        {
          r_82 = ATgetArgument(t_82, 0);
          n_82 = ATgetArgument(t_82, 1);
          h_82 :
          if(match_cons(r_82, sym_Where_1))
            {
              m_82 = ATgetArgument(r_82, 0);
              i_82 :
              if(match_cons(n_82, sym_Seq_2))
                {
                  o_82 = ATgetArgument(n_82, 0);
                  q_82 = ATgetArgument(n_82, 1);
                  j_82 :
                  if(match_cons(o_82, sym_Build_1))
                    {
                      p_82 = ATgetArgument(o_82, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_82), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_82)), not_null(q_82))));
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
        }
      else
        {
          if(match_cons(t_82, sym_Where_1))
            {
              r_82 = ATgetArgument(t_82, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(r_82));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(s_82, sym_Test_1))
        {
          t_82 = ATgetArgument(s_82, 0);
          k_82 :
          if(match_cons(t_82, sym_Test_1))
            {
              r_82 = ATgetArgument(t_82, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(r_82));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(s_82, sym_Not_1))
            {
              t_82 = ATgetArgument(s_82, 0);
              l_82 :
              if(match_cons(t_82, sym_Not_1))
                {
                  r_82 = ATgetArgument(t_82, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(r_82));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(s_82, sym_LChoice_2))
                {
                  t_82 = ATgetArgument(s_82, 0);
                  u_82 = ATgetArgument(s_82, 1);
                  {
                    if(((t_82 != NULL) && (t_82 != u_82)))
                      _fail(u_82);
                    else
                      t_82 = u_82;
                    t = not_null(t_82);
                  }
                }
              else
                {
                  if(match_cons(s_82, sym_Choice_2))
                    {
                      t_82 = ATgetArgument(s_82, 0);
                      u_82 = ATgetArgument(s_82, 1);
                      {
                        if(((t_82 != NULL) && (t_82 != u_82)))
                          _fail(u_82);
                        else
                          t_82 = u_82;
                        t = not_null(t_82);
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
  return(t);
}
ATerm AssociateR_0 (ATerm t)
{
  ATerm q_83 = NULL,r_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL;
  q_83 = t;
  m_83 :
  if(match_cons(q_83, sym_LChoice_2))
    {
      r_83 = ATgetArgument(q_83, 0);
      u_83 = ATgetArgument(q_83, 1);
      n_83 :
      if(match_cons(r_83, sym_LChoice_2))
        {
          s_83 = ATgetArgument(r_83, 0);
          t_83 = ATgetArgument(r_83, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(s_83), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_83), not_null(u_83)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(q_83, sym_Seq_2))
        {
          r_83 = ATgetArgument(q_83, 0);
          u_83 = ATgetArgument(q_83, 1);
          o_83 :
          if(match_cons(r_83, sym_Seq_2))
            {
              s_83 = ATgetArgument(r_83, 0);
              t_83 = ATgetArgument(r_83, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_83), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_83), not_null(u_83)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(q_83, sym_Choice_2))
            {
              r_83 = ATgetArgument(q_83, 0);
              u_83 = ATgetArgument(q_83, 1);
              p_83 :
              if(match_cons(r_83, sym_Choice_2))
                {
                  s_83 = ATgetArgument(r_83, 0);
                  t_83 = ATgetArgument(r_83, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(s_83), (ATerm) ATmakeAppl(sym_Choice_2, not_null(t_83), not_null(u_83)));
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
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm x_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL;
  b_85 = t;
  t_84 :
  if(match_cons(b_85, sym_InfixApp_3))
    {
      c_85 = ATgetArgument(b_85, 0);
      y_84 = ATgetArgument(b_85, 1);
      x_84 = ATgetArgument(b_85, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(y_84), (ATerm) ATmakeAppl(sym_Op_2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_84)), not_null(c_85))));
    }
  else
    {
      if(match_cons(b_85, sym_BAM_3))
        {
          c_85 = ATgetArgument(b_85, 0);
          y_84 = ATgetArgument(b_85, 1);
          x_84 = ATgetArgument(b_85, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(x_84))), not_null(c_85)), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_84))));
        }
      else
        {
          if(match_cons(b_85, sym_AM_2))
            {
              c_85 = ATgetArgument(b_85, 0);
              y_84 = ATgetArgument(b_85, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_85), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_84)));
            }
          else
            {
              if(match_cons(b_85, sym_MA_2))
                {
                  c_85 = ATgetArgument(b_85, 0);
                  y_84 = ATgetArgument(b_85, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_85)), not_null(y_84));
                }
              else
                {
                  if(match_cons(b_85, sym_BA_2))
                    {
                      c_85 = ATgetArgument(b_85, 0);
                      y_84 = ATgetArgument(b_85, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_84)), not_null(c_85));
                    }
                  else
                    {
                      if(match_cons(b_85, sym_Lets_2))
                        {
                          c_85 = ATgetArgument(b_85, 0);
                          y_84 = ATgetArgument(b_85, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(c_85), not_null(y_84));
                        }
                      else
                        {
                          if(match_cons(b_85, sym_LChoices_1))
                            {
                              c_85 = ATgetArgument(b_85, 0);
                              u_84 :
                              if(((ATgetType(c_85) == AT_LIST) && ((ATermList) c_85 != ATempty)))
                                {
                                  z_84 = ATgetFirst((ATermList) c_85);
                                  a_85 = (ATerm) ATgetNext((ATermList) c_85);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(z_84), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(a_85)));
                                }
                              else
                                {
                                  if(((ATermList) c_85 == ATempty))
                                    {
                                      t = term_v_16;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(b_85, sym_Choices_1))
                                {
                                  c_85 = ATgetArgument(b_85, 0);
                                  v_84 :
                                  if(((ATgetType(c_85) == AT_LIST) && ((ATermList) c_85 != ATempty)))
                                    {
                                      z_84 = ATgetFirst((ATermList) c_85);
                                      a_85 = (ATerm) ATgetNext((ATermList) c_85);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(z_84), (ATerm) ATmakeAppl(sym_Choices_1, not_null(a_85)));
                                    }
                                  else
                                    {
                                      if(((ATermList) c_85 == ATempty))
                                        {
                                          t = term_v_16;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(b_85, sym_Seqs_1))
                                    {
                                      c_85 = ATgetArgument(b_85, 0);
                                      w_84 :
                                      if(((ATgetType(c_85) == AT_LIST) && ((ATermList) c_85 != ATempty)))
                                        {
                                          z_84 = ATgetFirst((ATermList) c_85);
                                          a_85 = (ATerm) ATgetNext((ATermList) c_85);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_84), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(a_85)));
                                        }
                                      else
                                        {
                                          if(((ATermList) c_85 == ATempty))
                                            {
                                              t = term_b_17;
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
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
                }
            }
        }
    }
  return(t);
}
ATerm F15_0 (ATerm t)
{
  ATerm m_86 = NULL,n_86 = NULL;
  m_86 = t;
  k_86 :
  if(match_cons(m_86, sym_Where_1))
    {
      n_86 = ATgetArgument(m_86, 0);
      l_86 :
      if(match_cons(n_86, sym_Fail_0))
        {
          t = term_v_16;
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
ATerm F14_0 (ATerm t)
{
  ATerm v_86 = NULL,w_86 = NULL,x_86 = NULL;
  v_86 = t;
  q_86 :
  if(match_cons(v_86, sym_LChoice_2))
    {
      w_86 = ATgetArgument(v_86, 0);
      x_86 = ATgetArgument(v_86, 1);
      u_86 :
      if(match_cons(x_86, sym_Fail_0))
        {
          t = not_null(w_86);
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
ATerm F13_0 (ATerm t)
{
  ATerm e_87 = NULL,f_87 = NULL,g_87 = NULL;
  e_87 = t;
  c_87 :
  if(match_cons(e_87, sym_LChoice_2))
    {
      f_87 = ATgetArgument(e_87, 0);
      g_87 = ATgetArgument(e_87, 1);
      d_87 :
      if(match_cons(f_87, sym_Fail_0))
        {
          t = not_null(g_87);
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
ATerm F12_0 (ATerm t)
{
  ATerm m_87 = NULL,n_87 = NULL,o_87 = NULL;
  m_87 = t;
  k_87 :
  if(match_cons(m_87, sym_Choice_2))
    {
      n_87 = ATgetArgument(m_87, 0);
      o_87 = ATgetArgument(m_87, 1);
      l_87 :
      if(match_cons(o_87, sym_Fail_0))
        {
          t = not_null(n_87);
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
ATerm F11_0 (ATerm t)
{
  ATerm u_87 = NULL,v_87 = NULL,w_87 = NULL;
  u_87 = t;
  s_87 :
  if(match_cons(u_87, sym_Choice_2))
    {
      v_87 = ATgetArgument(u_87, 0);
      w_87 = ATgetArgument(u_87, 1);
      t_87 :
      if(match_cons(v_87, sym_Fail_0))
        {
          t = not_null(w_87);
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
ATerm F10_0 (ATerm t)
{
  ATerm g_88 = NULL,h_88 = NULL,i_88 = NULL;
  g_88 = t;
  f_88 :
  if(match_cons(g_88, sym_Cong_2))
    {
      h_88 = ATgetArgument(g_88, 0);
      i_88 = ATgetArgument(g_88, 1);
      {
        t = not_null(i_88);
        {
          ATerm n_3 (ATerm t)
          {
            ATerm l_88 = NULL;
            l_88 = t;
            e_88 :
            if(!(match_cons(l_88, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, n_3);
        }
        t = term_v_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm q_88 = NULL,r_88 = NULL,s_88 = NULL;
  q_88 = t;
  o_88 :
  if(match_cons(q_88, sym_Path_2))
    {
      r_88 = ATgetArgument(q_88, 0);
      s_88 = ATgetArgument(q_88, 1);
      p_88 :
      if(match_cons(s_88, sym_Fail_0))
        {
          t = term_v_16;
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
ATerm F8_0 (ATerm t)
{
  ATerm z_88 = NULL,a_89 = NULL;
  z_88 = t;
  x_88 :
  if(match_cons(z_88, sym_One_1))
    {
      a_89 = ATgetArgument(z_88, 0);
      y_88 :
      if(match_cons(a_89, sym_Fail_0))
        {
          t = term_v_16;
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
ATerm F7_0 (ATerm t)
{
  ATerm h_89 = NULL,i_89 = NULL;
  h_89 = t;
  e_89 :
  if(match_cons(h_89, sym_Some_1))
    {
      i_89 = ATgetArgument(h_89, 0);
      g_89 :
      if(match_cons(i_89, sym_Fail_0))
        {
          t = term_v_16;
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
ATerm F6_0 (ATerm t)
{
  ATerm n_89 = NULL,o_89 = NULL,p_89 = NULL;
  n_89 = t;
  l_89 :
  if(match_cons(n_89, sym_Rec_2))
    {
      o_89 = ATgetArgument(n_89, 0);
      p_89 = ATgetArgument(n_89, 1);
      m_89 :
      if(match_cons(p_89, sym_Fail_0))
        {
          t = term_v_16;
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
ATerm F5_0 (ATerm t)
{
  ATerm x_89 = NULL,y_89 = NULL,z_89 = NULL;
  x_89 = t;
  v_89 :
  if(match_cons(x_89, sym_Scope_2))
    {
      y_89 = ATgetArgument(x_89, 0);
      z_89 = ATgetArgument(x_89, 1);
      w_89 :
      if(match_cons(z_89, sym_Fail_0))
        {
          t = term_v_16;
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
ATerm F3_0 (ATerm t)
{
  ATerm f_90 = NULL,g_90 = NULL,h_90 = NULL;
  f_90 = t;
  d_90 :
  if(match_cons(f_90, sym_Seq_2))
    {
      g_90 = ATgetArgument(f_90, 0);
      h_90 = ATgetArgument(f_90, 1);
      e_90 :
      if(match_cons(g_90, sym_Fail_0))
        {
          t = term_v_16;
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
ATerm F2_0 (ATerm t)
{
  ATerm v_90 = NULL,w_90 = NULL;
  v_90 = t;
  t_90 :
  if(match_cons(v_90, sym_Not_1))
    {
      w_90 = ATgetArgument(v_90, 0);
      u_90 :
      if(match_cons(w_90, sym_Fail_0))
        {
          t = term_b_17;
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
ATerm F1_0 (ATerm t)
{
  ATerm d_91 = NULL,e_91 = NULL;
  d_91 = t;
  z_90 :
  if(match_cons(d_91, sym_Test_1))
    {
      e_91 = ATgetArgument(d_91, 0);
      c_91 :
      if(match_cons(e_91, sym_Fail_0))
        {
          t = term_v_16;
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
ATerm ElimFail_0 (ATerm t)
{
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(i_17);
    }
  else
    {
      t = h_17;
      {
        ATerm j_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(k_17);
          }
        else
          {
            t = j_17;
            {
              ATerm l_17 = t;
              int m_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(m_17);
                }
              else
                {
                  t = l_17;
                  {
                    ATerm n_17 = t;
                    int v_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(v_17);
                      }
                    else
                      {
                        t = n_17;
                        {
                          ATerm x_17 = t;
                          int z_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(z_17);
                            }
                          else
                            {
                              t = x_17;
                              {
                                ATerm b_18 = t;
                                int f_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(f_18);
                                  }
                                else
                                  {
                                    t = b_18;
                                    {
                                      ATerm g_18 = t;
                                      int i_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(i_18);
                                        }
                                      else
                                        {
                                          t = g_18;
                                          {
                                            ATerm j_18 = t;
                                            int l_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(l_18);
                                              }
                                            else
                                              {
                                                t = j_18;
                                                {
                                                  ATerm m_18 = t;
                                                  int q_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      LocalPopChoice(q_18);
                                                    }
                                                  else
                                                    {
                                                      t = m_18;
                                                      {
                                                        ATerm r_18 = t;
                                                        int s_18 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            LocalPopChoice(s_18);
                                                          }
                                                        else
                                                          {
                                                            t = r_18;
                                                            {
                                                              ATerm b_19 = t;
                                                              int c_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(c_19);
                                                                }
                                                              else
                                                                {
                                                                  t = b_19;
                                                                  {
                                                                    ATerm d_19 = t;
                                                                    int e_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(e_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_19;
                                                                        {
                                                                          ATerm f_19 = t;
                                                                          int g_19 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(g_19);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_19;
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
  ATerm j_91 = NULL,k_91 = NULL;
  j_91 = t;
  h_91 :
  if(match_cons(j_91, sym_Match_1))
    {
      k_91 = ATgetArgument(j_91, 0);
      i_91 :
      if(match_cons(k_91, sym_Wld_0))
        {
          t = term_b_17;
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
ATerm I12_0 (ATerm t)
{
  ATerm s_91 = NULL,x_91 = NULL;
  s_91 = t;
  o_91 :
  if(match_cons(s_91, sym_Where_1))
    {
      x_91 = ATgetArgument(s_91, 0);
      p_91 :
      if(match_cons(x_91, sym_Id_0))
        {
          t = term_b_17;
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
ATerm I10_0 (ATerm t)
{
  ATerm f_92 = NULL,g_92 = NULL;
  f_92 = t;
  a_92 :
  if(match_cons(f_92, sym_All_1))
    {
      g_92 = ATgetArgument(f_92, 0);
      e_92 :
      if(match_cons(g_92, sym_Id_0))
        {
          t = term_b_17;
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
ATerm I9_0 (ATerm t)
{
  ATerm l_92 = NULL,m_92 = NULL,n_92 = NULL;
  l_92 = t;
  j_92 :
  if(match_cons(l_92, sym_Rec_2))
    {
      m_92 = ATgetArgument(l_92, 0);
      n_92 = ATgetArgument(l_92, 1);
      k_92 :
      if(match_cons(n_92, sym_Id_0))
        {
          t = term_b_17;
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
ATerm I8_0 (ATerm t)
{
  ATerm t_92 = NULL,u_92 = NULL,v_92 = NULL;
  t_92 = t;
  r_92 :
  if(match_cons(t_92, sym_Scope_2))
    {
      u_92 = ATgetArgument(t_92, 0);
      v_92 = ATgetArgument(t_92, 1);
      s_92 :
      if(match_cons(v_92, sym_Id_0))
        {
          t = term_b_17;
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
ATerm I7_0 (ATerm t)
{
  ATerm b_93 = NULL,c_93 = NULL,d_93 = NULL;
  b_93 = t;
  z_92 :
  if(match_cons(b_93, sym_LChoice_2))
    {
      c_93 = ATgetArgument(b_93, 0);
      d_93 = ATgetArgument(b_93, 1);
      a_93 :
      if(match_cons(c_93, sym_Id_0))
        {
          t = term_b_17;
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
ATerm I4_0 (ATerm t)
{
  ATerm j_93 = NULL,k_93 = NULL,l_93 = NULL;
  j_93 = t;
  h_93 :
  if(match_cons(j_93, sym_Seq_2))
    {
      k_93 = ATgetArgument(j_93, 0);
      l_93 = ATgetArgument(j_93, 1);
      i_93 :
      if(match_cons(l_93, sym_Id_0))
        {
          t = not_null(k_93);
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
ATerm I3_0 (ATerm t)
{
  ATerm r_93 = NULL,s_93 = NULL,t_93 = NULL;
  r_93 = t;
  p_93 :
  if(match_cons(r_93, sym_Seq_2))
    {
      s_93 = ATgetArgument(r_93, 0);
      t_93 = ATgetArgument(r_93, 1);
      q_93 :
      if(match_cons(s_93, sym_Id_0))
        {
          t = not_null(t_93);
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
ATerm I2_0 (ATerm t)
{
  ATerm f_94 = NULL,g_94 = NULL;
  f_94 = t;
  d_94 :
  if(match_cons(f_94, sym_Not_1))
    {
      g_94 = ATgetArgument(f_94, 0);
      e_94 :
      if(match_cons(g_94, sym_Id_0))
        {
          t = term_v_16;
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
ATerm I1_0 (ATerm t)
{
  ATerm l_94 = NULL,m_94 = NULL;
  l_94 = t;
  j_94 :
  if(match_cons(l_94, sym_Test_1))
    {
      m_94 = ATgetArgument(l_94, 0);
      k_94 :
      if(match_cons(m_94, sym_Id_0))
        {
          t = term_b_17;
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
ATerm ElimId_0 (ATerm t)
{
  ATerm h_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(i_19);
    }
  else
    {
      t = h_19;
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
            {
              ATerm q_19 = t;
              int r_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(r_19);
                }
              else
                {
                  t = q_19;
                  {
                    ATerm s_19 = t;
                    int u_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        LocalPopChoice(u_19);
                      }
                    else
                      {
                        t = s_19;
                        {
                          ATerm w_19 = t;
                          int x_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(x_19);
                            }
                          else
                            {
                              t = w_19;
                              {
                                ATerm y_19 = t;
                                int z_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(z_19);
                                  }
                                else
                                  {
                                    t = y_19;
                                    {
                                      ATerm a_20 = t;
                                      int b_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(b_20);
                                        }
                                      else
                                        {
                                          t = a_20;
                                          {
                                            ATerm c_20 = t;
                                            int d_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(d_20);
                                              }
                                            else
                                              {
                                                t = c_20;
                                                {
                                                  ATerm e_20 = t;
                                                  int f_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(f_20);
                                                    }
                                                  else
                                                    {
                                                      t = e_20;
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
  ATerm k_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(l_20);
    }
  else
    {
      t = k_20;
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
            {
              ATerm y_20 = t;
              int z_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(z_20);
                }
              else
                {
                  t = y_20;
                  {
                    ATerm a_21 = t;
                    int b_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(b_21);
                      }
                    else
                      {
                        t = a_21;
                        {
                          ATerm c_21 = t;
                          int k_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(k_21);
                            }
                          else
                            {
                              t = c_21;
                              {
                                ATerm l_21 = t;
                                int m_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(m_21);
                                  }
                                else
                                  {
                                    t = l_21;
                                    {
                                      ATerm n_21 = t;
                                      int y_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(y_21);
                                        }
                                      else
                                        {
                                          t = n_21;
                                          {
                                            ATerm a_22 = t;
                                            int b_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(b_22);
                                              }
                                            else
                                              {
                                                t = a_22;
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
      }
    }
  return(t);
}
ATerm MatrixMerge_0 (ATerm t)
{
  ATerm m_96 = NULL,n_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL,v_96 = NULL,x_96 = NULL,y_96 = NULL,z_96 = NULL,a_97 = NULL;
  q_96 = t;
  o_95 :
  if(match_cons(q_96, sym_LChoice_2))
    {
      r_96 = ATgetArgument(q_96, 0);
      a_97 = ATgetArgument(q_96, 1);
      p_95 :
      if(match_cons(r_96, sym_Matrix_2))
        {
          s_96 = ATgetArgument(r_96, 0);
          t_96 = ATgetArgument(r_96, 1);
          q_95 :
          if(match_cons(a_97, sym_Choice_2))
            {
              o_96 = ATgetArgument(a_97, 0);
              p_96 = ATgetArgument(a_97, 1);
              r_95 :
              if(match_cons(o_96, sym_Matrix_2))
                {
                  m_96 = ATgetArgument(o_96, 0);
                  n_96 = ATgetArgument(o_96, 1);
                  {
                    ATerm g_97 = NULL,i_97 = NULL;
                    ATerm c_22;
                    c_22 = t;
                    {
                      ATerm h_97 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_96), not_null(m_96));
                      {
                        t = union_0(t);
                        {
                          h_97 = t;
                          if(((g_97 != NULL) && (g_97 != h_97)))
                            _fail(h_97);
                          else
                            g_97 = h_97;
                        }
                      }
                    }
                    t = c_22;
                    {
                      ATerm j_97 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_96), not_null(n_96));
                      {
                        t = conc_0(t);
                        {
                          j_97 = t;
                          if(((i_97 != NULL) && (i_97 != j_97)))
                            _fail(j_97);
                          else
                            i_97 = j_97;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(g_97), not_null(i_97)), not_null(p_96));
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
              if(match_cons(a_97, sym_LChoice_2))
                {
                  o_96 = ATgetArgument(a_97, 0);
                  p_96 = ATgetArgument(a_97, 1);
                  s_95 :
                  if(match_cons(o_96, sym_Matrix_2))
                    {
                      m_96 = ATgetArgument(o_96, 0);
                      n_96 = ATgetArgument(o_96, 1);
                      {
                        ATerm q_97 = NULL,s_97 = NULL;
                        ATerm h_22;
                        h_22 = t;
                        {
                          ATerm r_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_96), not_null(m_96));
                          {
                            t = union_0(t);
                            {
                              r_97 = t;
                              if(((q_97 != NULL) && (q_97 != r_97)))
                                _fail(r_97);
                              else
                                q_97 = r_97;
                            }
                          }
                        }
                        t = h_22;
                        {
                          ATerm t_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(t_96), not_null(n_96));
                          {
                            t = conc_0(t);
                            {
                              t_97 = t;
                              if(((s_97 != NULL) && (s_97 != t_97)))
                                _fail(t_97);
                              else
                                s_97 = t_97;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(q_97), not_null(s_97)), not_null(p_96));
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
                  if(match_cons(a_97, sym_Matrix_2))
                    {
                      o_96 = ATgetArgument(a_97, 0);
                      p_96 = ATgetArgument(a_97, 1);
                      {
                        ATerm y_97 = NULL,a_98 = NULL;
                        ATerm i_22;
                        i_22 = t;
                        {
                          ATerm z_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_96), not_null(o_96));
                          {
                            t = union_0(t);
                            {
                              z_97 = t;
                              if(((y_97 != NULL) && (y_97 != z_97)))
                                _fail(z_97);
                              else
                                y_97 = z_97;
                            }
                          }
                        }
                        t = i_22;
                        {
                          ATerm b_98 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(t_96), not_null(p_96));
                          {
                            t = conc_0(t);
                            {
                              b_98 = t;
                              if(((a_98 != NULL) && (a_98 != b_98)))
                                _fail(b_98);
                              else
                                a_98 = b_98;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(y_97), not_null(a_98));
                        }
                      }
                    }
                  else
                    {
                      _fail(t);
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
      if(match_cons(q_96, sym_Choice_2))
        {
          r_96 = ATgetArgument(q_96, 0);
          a_97 = ATgetArgument(q_96, 1);
          t_95 :
          if(match_cons(r_96, sym_Matrix_2))
            {
              s_96 = ATgetArgument(r_96, 0);
              t_96 = ATgetArgument(r_96, 1);
              u_95 :
              if(match_cons(a_97, sym_LChoice_2))
                {
                  o_96 = ATgetArgument(a_97, 0);
                  p_96 = ATgetArgument(a_97, 1);
                  v_95 :
                  if(match_cons(o_96, sym_Matrix_2))
                    {
                      m_96 = ATgetArgument(o_96, 0);
                      n_96 = ATgetArgument(o_96, 1);
                      {
                        ATerm m_98 = NULL,o_98 = NULL;
                        ATerm j_22;
                        j_22 = t;
                        {
                          ATerm n_98 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_96), not_null(m_96));
                          {
                            t = union_0(t);
                            {
                              n_98 = t;
                              if(((m_98 != NULL) && (m_98 != n_98)))
                                _fail(n_98);
                              else
                                m_98 = n_98;
                            }
                          }
                        }
                        t = j_22;
                        {
                          ATerm p_98 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(t_96), not_null(n_96));
                          {
                            t = conc_0(t);
                            {
                              p_98 = t;
                              if(((o_98 != NULL) && (o_98 != p_98)))
                                _fail(p_98);
                              else
                                o_98 = p_98;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(m_98), not_null(o_98)), not_null(p_96));
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
                  if(match_cons(a_97, sym_Choice_2))
                    {
                      o_96 = ATgetArgument(a_97, 0);
                      p_96 = ATgetArgument(a_97, 1);
                      w_95 :
                      if(match_cons(o_96, sym_Matrix_2))
                        {
                          m_96 = ATgetArgument(o_96, 0);
                          n_96 = ATgetArgument(o_96, 1);
                          {
                            ATerm v_98 = NULL,x_98 = NULL;
                            ATerm k_22;
                            k_22 = t;
                            {
                              ATerm w_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(s_96), not_null(m_96));
                              {
                                t = union_0(t);
                                {
                                  w_98 = t;
                                  if(((v_98 != NULL) && (v_98 != w_98)))
                                    _fail(w_98);
                                  else
                                    v_98 = w_98;
                                }
                              }
                            }
                            t = k_22;
                            {
                              ATerm y_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(t_96), not_null(n_96));
                              {
                                t = conc_0(t);
                                {
                                  y_98 = t;
                                  if(((x_98 != NULL) && (x_98 != y_98)))
                                    _fail(y_98);
                                  else
                                    x_98 = y_98;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(v_98), not_null(x_98)), not_null(p_96));
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
                      if(match_cons(a_97, sym_Matrix_2))
                        {
                          o_96 = ATgetArgument(a_97, 0);
                          p_96 = ATgetArgument(a_97, 1);
                          {
                            ATerm d_99 = NULL,f_99 = NULL;
                            ATerm l_22;
                            l_22 = t;
                            {
                              ATerm e_99 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(s_96), not_null(o_96));
                              {
                                t = union_0(t);
                                {
                                  e_99 = t;
                                  if(((d_99 != NULL) && (d_99 != e_99)))
                                    _fail(e_99);
                                  else
                                    d_99 = e_99;
                                }
                              }
                            }
                            t = l_22;
                            {
                              ATerm g_99 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(t_96), not_null(p_96));
                              {
                                t = conc_0(t);
                                {
                                  g_99 = t;
                                  if(((f_99 != NULL) && (f_99 != g_99)))
                                    _fail(g_99);
                                  else
                                    f_99 = g_99;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(d_99), not_null(f_99));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
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
          if(match_cons(q_96, sym_Scope_2))
            {
              r_96 = ATgetArgument(q_96, 0);
              a_97 = ATgetArgument(q_96, 1);
              y_95 :
              if(match_cons(a_97, sym_Matrix_2))
                {
                  o_96 = ATgetArgument(a_97, 0);
                  p_96 = ATgetArgument(a_97, 1);
                  {
                    ATerm k_99 = NULL;
                    ATerm q_99 = NULL;
                    t = not_null(p_96);
                    {
                      ATerm o_3 (ATerm t)
                      {
                        ATerm l_99 = NULL,m_99 = NULL,n_99 = NULL;
                        l_99 = t;
                        m_95 :
                        if(match_cons(l_99, sym_Row_2))
                          {
                            m_99 = ATgetArgument(l_99, 0);
                            n_99 = ATgetArgument(l_99, 1);
                            t = (ATerm) ATmakeAppl(sym_Row_2, not_null(m_99), (ATerm) ATmakeAppl(sym_Scope_2, not_null(r_96), not_null(n_99)));
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = map_1(t, o_3);
                      {
                        q_99 = t;
                        if(((k_99 != NULL) && (k_99 != q_99)))
                          _fail(q_99);
                        else
                          k_99 = q_99;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(o_96), not_null(k_99));
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(q_96, sym_Seq_2))
                {
                  r_96 = ATgetArgument(q_96, 0);
                  a_97 = ATgetArgument(q_96, 1);
                  z_95 :
                  if(match_cons(r_96, sym_Matrix_2))
                    {
                      s_96 = ATgetArgument(r_96, 0);
                      t_96 = ATgetArgument(r_96, 1);
                      f_96 :
                      if(((ATgetType(t_96) == AT_LIST) && ((ATermList) t_96 != ATempty)))
                        {
                          v_96 = ATgetFirst((ATermList) t_96);
                          z_96 = (ATerm) ATgetNext((ATermList) t_96);
                          g_96 :
                          if(match_cons(v_96, sym_Row_2))
                            {
                              x_96 = ATgetArgument(v_96, 0);
                              y_96 = ATgetArgument(v_96, 1);
                              h_96 :
                              if(((ATermList) z_96 == ATempty))
                                {
                                  t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(s_96), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(x_96), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_96), not_null(a_97)))));
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
        }
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm f_105 (ATerm))
{
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = d_105(t);
      LocalPopChoice(r_22);
    }
  else
    {
      t = q_22;
      {
        ATerm f_101 = NULL,g_101 = NULL,h_101 = NULL;
        f_101 = t;
        e_101 :
        if(((ATgetType(f_101) == AT_LIST) && ((ATermList) f_101 != ATempty)))
          {
            g_101 = ATgetFirst((ATermList) f_101);
            h_101 = (ATerm) ATgetNext((ATermList) f_101);
            {
              ATerm l_101 = NULL,n_101 = NULL;
              ATerm t_22;
              t_22 = t;
              {
                ATerm m_101 = NULL;
                t = not_null(g_101);
                {
                  t = f_105(t);
                  {
                    m_101 = t;
                    if(((l_101 != NULL) && (l_101 != m_101)))
                      _fail(m_101);
                    else
                      l_101 = m_101;
                  }
                }
              }
              t = t_22;
              {
                ATerm o_101 = NULL;
                t = not_null(h_101);
                {
                  t = foldr_3(t, d_105, e_105, f_105);
                  {
                    o_101 = t;
                    if(((n_101 != NULL) && (n_101 != o_101)))
                      _fail(o_101);
                    else
                      n_101 = o_101;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_101), not_null(n_101));
                  t = e_105(t);
                }
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t_106 (ATerm))
{
  ATerm w_101 = NULL;
  ATerm y_101 = NULL;
  w_101 = t;
  {
    ATerm z_101 = NULL;
    ATerm f_102 = NULL,g_102 = NULL,h_102 = NULL;
    t = not_null(w_101);
    {
      z_101 = t;
      {
        t = SSL_explode_term(not_null(z_101));
        {
          f_102 = t;
          v_101 :
          if(match_cons(f_102, sym__2))
            {
              g_102 = ATgetArgument(f_102, 0);
              h_102 = ATgetArgument(f_102, 1);
              if(((y_101 != NULL) && (y_101 != h_102)))
                _fail(h_102);
              else
                y_101 = h_102;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_101);
      t = foldr_3(t, r_106, s_106, t_106);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm f_107 (ATerm))
{
  ATerm o_102 (ATerm t)
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_102 = NULL;
        ATerm n_102 = NULL;
        t = f_107(t);
        {
          n_102 = t;
          if(((m_102 != NULL) && (m_102 != n_102)))
            _fail(n_102);
          else
            m_102 = n_102;
        }
        t = (ATerm) ATinsert(ATempty, not_null(m_102));
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        {
          ATerm p_3 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, p_3, union_0, o_102);
        }
      }
    return(t);
  }
  t = o_102(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm h_107 (ATerm))
{
  t = collect_om_1(t, h_107);
  return(t);
}
ATerm collect_offsets_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm s_102 = NULL,t_102 = NULL;
    s_102 = t;
    r_102 :
    if(match_cons(s_102, sym_Off_1))
      {
        t_102 = ATgetArgument(s_102, 0);
        t = not_null(t_102);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = collect_1(t, q_3);
  return(t);
}
ATerm CollectSubst_0 (ATerm t)
{
  ATerm g_103 = NULL,h_103 = NULL,i_103 = NULL,j_103 = NULL,k_103 = NULL,l_103 = NULL,m_103 = NULL;
  i_103 = t;
  z_102 :
  if(match_cons(i_103, sym_As_2))
    {
      j_103 = ATgetArgument(i_103, 0);
      l_103 = ATgetArgument(i_103, 1);
      a_103 :
      if(match_cons(j_103, sym_Var_1))
        {
          k_103 = ATgetArgument(j_103, 0);
          d_103 :
          if(match_cons(l_103, sym_As_2))
            {
              m_103 = ATgetArgument(l_103, 0);
              h_103 = ATgetArgument(l_103, 1);
              e_103 :
              if(match_cons(m_103, sym_Off_1))
                {
                  g_103 = ATgetArgument(m_103, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_103)), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_103))));
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
          if(match_cons(j_103, sym_Off_1))
            {
              k_103 = ATgetArgument(j_103, 0);
              f_103 :
              if(match_cons(l_103, sym_Var_1))
                {
                  m_103 = ATgetArgument(l_103, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_103)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_103))));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm y_103 = NULL,z_103 = NULL,i_104 = NULL;
  y_103 = t;
  x_103 :
  if(((ATermList) y_103 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(y_103) == AT_LIST) && ((ATermList) y_103 != ATempty)))
        {
          z_103 = ATgetFirst((ATermList) y_103);
          i_104 = (ATerm) ATgetNext((ATermList) y_103);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm IgnoreVar_0 (ATerm t)
{
  ATerm q_104 = NULL,r_104 = NULL,s_104 = NULL,t_104 = NULL,u_104 = NULL,v_104 = NULL,w_104 = NULL;
  s_104 = t;
  l_104 :
  if(match_cons(s_104, sym_As_2))
    {
      t_104 = ATgetArgument(s_104, 0);
      v_104 = ATgetArgument(s_104, 1);
      m_104 :
      if(match_cons(t_104, sym_Var_1))
        {
          u_104 = ATgetArgument(t_104, 0);
          n_104 :
          if(match_cons(v_104, sym_As_2))
            {
              w_104 = ATgetArgument(v_104, 0);
              r_104 = ATgetArgument(v_104, 1);
              o_104 :
              if(match_cons(w_104, sym_Off_1))
                {
                  q_104 = ATgetArgument(w_104, 0);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(q_104)), not_null(r_104));
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
          if(match_cons(t_104, sym_Off_1))
            {
              u_104 = ATgetArgument(t_104, 0);
              p_104 :
              if(match_cons(v_104, sym_Var_1))
                {
                  w_104 = ATgetArgument(v_104, 0);
                  {
                    t = not_null(u_104);
                    t = is_list_0(t);
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(u_104)), term_w_11);
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm g_106 (ATerm))
{
  ATerm m_105 = NULL,n_105 = NULL,o_105 = NULL;
  m_105 = t;
  l_105 :
  if(((ATgetType(m_105) == AT_LIST) && ((ATermList) m_105 != ATempty)))
    {
      n_105 = ATgetFirst((ATermList) m_105);
      o_105 = (ATerm) ATgetNext((ATermList) m_105);
      {
        t = g_106(t);
        {
          ATerm r_3 (ATerm t)
          {
            ATerm r_105 = NULL;
            r_105 = t;
            if(((n_105 != NULL) && (n_105 != r_105)))
              _fail(r_105);
            else
              n_105 = r_105;
            return(t);
          }
          t = fetch_1(t, r_3);
        }
        t = not_null(o_105);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm w_105 = NULL,x_105 = NULL,y_105 = NULL;
  w_105 = t;
  v_105 :
  if(match_cons(w_105, sym__2))
    {
      x_105 = ATgetArgument(w_105, 0);
      y_105 = ATgetArgument(w_105, 1);
      {
        t = not_null(x_105);
        {
          ATerm d_106 (ATerm t)
          {
            ATerm x_22 = t;
            int z_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(y_105);
                LocalPopChoice(z_22);
              }
            else
              {
                t = x_22;
                {
                  ATerm a_23 = t;
                  int e_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_3 (ATerm t)
                      {
                        t = not_null(y_105);
                        return(t);
                      }
                      t = HdMember_1(t, s_3);
                      t = d_106(t);
                      LocalPopChoice(e_23);
                    }
                  else
                    {
                      t = a_23;
                      t = Cons_2(t, _id, d_106);
                    }
                }
              }
            return(t);
          }
          t = d_106(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unions_0 (ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = foldr_2(t, t_3, union_0);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm l_106 = NULL,m_106 = NULL,n_106 = NULL,o_106 = NULL,u_106 = NULL,v_106 = NULL,w_106 = NULL;
  l_106 = t;
  f_106 :
  if(match_cons(l_106, sym__2))
    {
      m_106 = ATgetArgument(l_106, 0);
      u_106 = ATgetArgument(l_106, 1);
      h_106 :
      if(match_cons(m_106, sym__2))
        {
          n_106 = ATgetArgument(m_106, 0);
          o_106 = ATgetArgument(m_106, 1);
          i_106 :
          if(match_cons(u_106, sym__2))
            {
              v_106 = ATgetArgument(u_106, 0);
              w_106 = ATgetArgument(u_106, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_106)), not_null(n_106)), (ATerm) ATinsert(CheckATermList(not_null(w_106)), not_null(o_106)));
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
ATerm UnZip3_0 (ATerm t)
{
  ATerm e_107 = NULL,i_107 = NULL,j_107 = NULL;
  e_107 = t;
  d_107 :
  if(((ATgetType(e_107) == AT_LIST) && ((ATermList) e_107 != ATempty)))
    {
      i_107 = ATgetFirst((ATermList) e_107);
      j_107 = (ATerm) ATgetNext((ATermList) e_107);
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_107), not_null(j_107));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm p_107 = NULL;
  p_107 = t;
  o_107 :
  if(((ATermList) p_107 == ATempty))
    {
      t = term_f_23;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm s_110 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, s_110);
  return(t);
}
ATerm CollectSplit_2 (ATerm t, ATerm z_107 (ATerm), ATerm a_108 (ATerm))
{
  ATerm h_108 = NULL;
  ATerm j_108 = NULL,o_108 = NULL,w_108 = NULL,x_108 = NULL,a_109 = NULL,b_109 = NULL,k_109 = NULL;
  h_108 = t;
  {
    ATerm g_23;
    g_23 = t;
    {
      ATerm p_108 = NULL;
      ATerm r_108 = NULL,u_108 = NULL,v_108 = NULL;
      t = not_null(h_108);
      {
        p_108 = t;
        {
          t = SSL_explode_term(not_null(p_108));
          {
            r_108 = t;
            u_107 :
            if(match_cons(r_108, sym__2))
              {
                u_108 = ATgetArgument(r_108, 0);
                v_108 = ATgetArgument(r_108, 1);
                {
                  if(((j_108 != NULL) && (j_108 != u_108)))
                    _fail(u_108);
                  else
                    j_108 = u_108;
                  if(((o_108 != NULL) && (o_108 != v_108)))
                    _fail(v_108);
                  else
                    o_108 = v_108;
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
    t = g_23;
    {
      ATerm h_23;
      h_23 = t;
      {
        ATerm c_109 = NULL,d_109 = NULL,e_109 = NULL;
        t = not_null(o_108);
        {
          t = unzip_1(t, z_107);
          {
            c_109 = t;
            e_108 :
            if(match_cons(c_109, sym__2))
              {
                d_109 = ATgetArgument(c_109, 0);
                e_109 = ATgetArgument(c_109, 1);
                {
                  ATerm f_109 = NULL;
                  if(((x_108 != NULL) && (x_108 != d_109)))
                    _fail(d_109);
                  else
                    x_108 = d_109;
                  {
                    if(((w_108 != NULL) && (w_108 != e_109)))
                      _fail(e_109);
                    else
                      w_108 = e_109;
                    {
                      ATerm h_109 = NULL,i_109 = NULL,j_109 = NULL;
                      t = SSL_mkterm(not_null(j_108), not_null(x_108));
                      {
                        f_109 = t;
                        {
                          t = a_108(t);
                          {
                            h_109 = t;
                            d_108 :
                            if(match_cons(h_109, sym__2))
                              {
                                i_109 = ATgetArgument(h_109, 0);
                                j_109 = ATgetArgument(h_109, 1);
                                {
                                  if(((a_109 != NULL) && (a_109 != i_109)))
                                    _fail(i_109);
                                  else
                                    a_109 = i_109;
                                  if(((b_109 != NULL) && (b_109 != j_109)))
                                    _fail(j_109);
                                  else
                                    b_109 = j_109;
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
                  }
                }
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
      t = h_23;
      {
        ATerm l_109 = NULL,n_109 = NULL;
        ATerm m_109 = NULL;
        t = not_null(w_108);
        {
          t = unions_0(t);
          {
            m_109 = t;
            if(((l_109 != NULL) && (l_109 != m_109)))
              _fail(m_109);
            else
              l_109 = m_109;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_109), not_null(l_109));
          {
            t = union_0(t);
            {
              n_109 = t;
              if(((k_109 != NULL) && (k_109 != n_109)))
                _fail(n_109);
              else
                k_109 = n_109;
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_109), not_null(k_109));
      }
    }
  }
  return(t);
}
ATerm collect_split_2 (ATerm t, ATerm w_107 (ATerm), ATerm x_107 (ATerm))
{
  ATerm f_110 (ATerm t)
  {
    ATerm u_3 (ATerm t)
    {
      ATerm a_110 = NULL,d_110 = NULL;
      ATerm l_23;
      l_23 = t;
      {
        ATerm c_110 = NULL;
        t = try_1(t, w_107);
        {
          c_110 = t;
          if(((a_110 != NULL) && (a_110 != c_110)))
            _fail(c_110);
          else
            a_110 = c_110;
        }
      }
      t = l_23;
      {
        ATerm e_110 = NULL;
        ATerm m_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_107(t);
            LocalPopChoice(q_23);
          }
        else
          {
            t = m_23;
            t = (ATerm) ATempty;
          }
        {
          e_110 = t;
          if(((d_110 != NULL) && (d_110 != e_110)))
            _fail(e_110);
          else
            d_110 = e_110;
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_110), not_null(d_110));
      }
      return(t);
    }
    t = CollectSplit_2(t, f_110, u_3);
    return(t);
  }
  t = f_110(t);
  return(t);
}
ATerm collect_substitutions_0 (ATerm t)
{
  t = collect_split_2(t, IgnoreVar_0, CollectSubst_0);
  return(t);
}
ATerm Annotate_1 (ATerm t, ATerm a_118 (ATerm))
{
  ATerm r_110 = NULL,u_110 = NULL,v_110 = NULL;
  r_110 = t;
  q_110 :
  if(match_cons(r_110, sym__2))
    {
      u_110 = ATgetArgument(r_110, 0);
      v_110 = ATgetArgument(r_110, 1);
      {
        ATerm z_110 = NULL;
        ATerm a_111 = NULL;
        t = a_118(t);
        {
          a_111 = t;
          if(((z_110 != NULL) && (z_110 != a_111)))
            _fail(a_111);
          else
            z_110 = a_111;
        }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(not_null(z_110)), not_null(u_110))), not_null(v_110));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NZip3_0 (ATerm t)
{
  ATerm f_111 = NULL,g_111 = NULL,h_111 = NULL;
  f_111 = t;
  e_111 :
  if(match_cons(f_111, sym__2))
    {
      g_111 = ATgetArgument(f_111, 0);
      h_111 = ATgetArgument(f_111, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_111)), not_null(g_111));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm p_111 = NULL,q_111 = NULL,r_111 = NULL,s_111 = NULL,t_111 = NULL;
  p_111 = t;
  n_111 :
  if(match_cons(p_111, sym__2))
    {
      q_111 = ATgetArgument(p_111, 0);
      r_111 = ATgetArgument(p_111, 1);
      o_111 :
      if(((ATgetType(r_111) == AT_LIST) && ((ATermList) r_111 != ATempty)))
        {
          s_111 = ATgetFirst((ATermList) r_111);
          t_111 = (ATerm) ATgetNext((ATermList) r_111);
          {
            ATerm z_111 = NULL;
            ATerm a_112 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_111), term_g_12);
            {
              t = add_0(t);
              {
                a_112 = t;
                if(((z_111 != NULL) && (z_111 != a_112)))
                  _fail(a_112);
                else
                  z_111 = a_112;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(q_111), not_null(s_111)), (ATerm) ATmakeAppl(sym__2, not_null(z_111), not_null(t_111)));
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
ATerm NZip1_0 (ATerm t)
{
  ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL;
  g_112 = t;
  e_112 :
  if(match_cons(g_112, sym__2))
    {
      h_112 = ATgetArgument(g_112, 0);
      i_112 = ATgetArgument(g_112, 1);
      f_112 :
      if(((ATermList) i_112 == ATempty))
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
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm l_110 (ATerm))
{
  ATerm l_112 (ATerm t)
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_110(t);
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        {
          t = j_110(t);
          {
            t = _2(t, l_110, l_112);
            t = k_110(t);
          }
        }
      }
    return(t);
  }
  t = l_112(t);
  return(t);
}
ATerm NZip00_0 (ATerm t)
{
  ATerm o_112 = NULL;
  o_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_11, not_null(o_112));
  return(t);
}
ATerm nzip0_1 (ATerm t, ATerm t_110 (ATerm))
{
  t = NZip00_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, t_110);
  return(t);
}
ATerm Propagate_0 (ATerm t)
{
  ATerm d_113 = NULL,g_113 = NULL,h_113 = NULL,i_113 = NULL,j_113 = NULL,k_113 = NULL,l_113 = NULL;
  ATerm y_113 (ATerm t)
  {
    ATerm o_113 = NULL;
    ATerm p_113 = NULL;
    t = not_null(j_113);
    {
      ATerm v_3 (ATerm t)
      {
        ATerm w_3 (ATerm t)
        {
          t = not_null(i_113);
          return(t);
        }
        t = Annotate_1(t, w_3);
        return(t);
      }
      t = nzip0_1(t, v_3);
      {
        p_113 = t;
        if(((o_113 != NULL) && (o_113 != p_113)))
          _fail(p_113);
        else
          o_113 = p_113;
      }
    }
    t = not_null(o_113);
    return(t);
  }
  ATerm z_113 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(i_113)), term_w_11);
    return(t);
  }
  ATerm a_114 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_113)), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(i_113)), not_null(l_113)));
    return(t);
  }
  ATerm b_114 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(i_113)), (ATerm) ATmakeAppl(sym_Op_2, not_null(k_113), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(i_113)), not_null(l_113))));
    return(t);
  }
  g_113 = t;
  w_112 :
  if(match_cons(g_113, sym_As_2))
    {
      h_113 = ATgetArgument(g_113, 0);
      j_113 = ATgetArgument(g_113, 1);
      x_112 :
      if(match_cons(h_113, sym_Off_1))
        {
          i_113 = ATgetArgument(h_113, 0);
          y_112 :
          if(match_cons(j_113, sym_BuildDefault_1))
            {
              k_113 = ATgetArgument(j_113, 0);
              {
                ATerm v_23 = t;
                int w_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = y_113(t);
                    LocalPopChoice(w_23);
                  }
                else
                  {
                    t = v_23;
                    t = z_113(t);
                  }
              }
            }
          else
            {
              if(match_cons(j_113, sym_As_2))
                {
                  k_113 = ATgetArgument(j_113, 0);
                  l_113 = ATgetArgument(j_113, 1);
                  z_112 :
                  if(match_cons(k_113, sym_Var_1))
                    {
                      d_113 = ATgetArgument(k_113, 0);
                      {
                        ATerm x_23 = t;
                        int y_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = y_113(t);
                            LocalPopChoice(y_23);
                          }
                        else
                          {
                            t = x_23;
                            t = a_114(t);
                          }
                      }
                    }
                  else
                    {
                      t = y_113(t);
                    }
                }
              else
                {
                  if(match_cons(j_113, sym_Op_2))
                    {
                      k_113 = ATgetArgument(j_113, 0);
                      l_113 = ATgetArgument(j_113, 1);
                      {
                        ATerm z_23 = t;
                        int a_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = y_113(t);
                            LocalPopChoice(a_24);
                          }
                        else
                          {
                            t = z_23;
                            t = b_114(t);
                          }
                      }
                    }
                  else
                    {
                      t = y_113(t);
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
ATerm topdown_1 (ATerm t, ATerm c_113 (ATerm))
{
  t = c_113(t);
  {
    ATerm x_3 (ATerm t)
    {
      t = topdown_1(t, c_113);
      return(t);
    }
    t = _all(t, x_3);
  }
  return(t);
}
ATerm term_to_matrix_0 (ATerm t)
{
  ATerm h_114 = NULL;
  ATerm j_114 = NULL,k_114 = NULL,l_114 = NULL;
  h_114 = t;
  {
    t = (ATerm) ATmakeAppl(sym_As_2, term_b_24, (ATerm) ATinsert(ATempty, not_null(h_114)));
    {
      ATerm y_3 (ATerm t)
      {
        t = try_1(t, Propagate_0);
        return(t);
      }
      t = topdown_1(t, y_3);
      {
        t = collect_substitutions_0(t);
        {
          j_114 = t;
          g_114 :
          if(match_cons(j_114, sym__2))
            {
              k_114 = ATgetArgument(j_114, 0);
              l_114 = ATgetArgument(j_114, 1);
              {
                ATerm o_114 = NULL;
                ATerm p_114 = NULL;
                t = not_null(k_114);
                {
                  t = collect_offsets_0(t);
                  {
                    p_114 = t;
                    if(((o_114 != NULL) && (o_114 != p_114)))
                      _fail(p_114);
                    else
                      o_114 = p_114;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(o_114), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(k_114), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(l_114)))));
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
  return(t);
}
ATerm MatchToMatrix_0 (ATerm t)
{
  ATerm v_114 = NULL,w_114 = NULL;
  v_114 = t;
  u_114 :
  if(match_cons(v_114, sym_Match_1))
    {
      w_114 = ATgetArgument(v_114, 0);
      {
        t = not_null(w_114);
        t = term_to_matrix_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm y_99 (ATerm), ATerm z_99 (ATerm))
{
  ATerm z_114 (ATerm t)
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_99(t);
        t = z_114(t);
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        t = z_99(t);
      }
    return(t);
  }
  t = z_114(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm b_100 (ATerm))
{
  t = repeat_2(t, b_100, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm e_113 (ATerm))
{
  ATerm a_115 (ATerm t)
  {
    t = e_113(t);
    {
      t = _all(t, a_115);
      t = e_113(t);
    }
    return(t);
  }
  t = a_115(t);
  return(t);
}
ATerm match_to_matrix_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm a_4 (ATerm t)
    {
      ATerm i_24 = t;
      int m_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MatchToMatrix_0(t);
          LocalPopChoice(m_24);
        }
      else
        {
          t = i_24;
          {
            ATerm o_24 = t;
            int r_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = MatrixMerge_0(t);
                LocalPopChoice(r_24);
              }
            else
              {
                t = o_24;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, a_4);
    return(t);
  }
  t = downup_1(t, z_3);
  return(t);
}
ATerm match_to_dfa_0 (ATerm t)
{
  t = match_to_matrix_0(t);
  {
    t = matrix_to_dfa_0(t);
    t = strename_0(t);
  }
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm s_90 (ATerm))
{
  ATerm i_115 = NULL,j_115 = NULL,k_115 = NULL,l_115 = NULL;
  i_115 = t;
  h_115 :
  if(match_cons(i_115, sym_SDef_3))
    {
      j_115 = ATgetArgument(i_115, 0);
      k_115 = ATgetArgument(i_115, 1);
      l_115 = ATgetArgument(i_115, 2);
      {
        ATerm q_115 = NULL,s_115 = NULL;
        ATerm r_115 = NULL;
        t = SSLgetAnnotations(not_null(i_115));
        {
          r_115 = t;
          if(((q_115 != NULL) && (q_115 != r_115)))
            _fail(r_115);
          else
            q_115 = r_115;
        }
        {
          t = not_null(j_115);
          {
            ATerm u_115 = NULL;
            t = q_90(t);
            {
              s_115 = t;
              {
                t = not_null(k_115);
                {
                  ATerm w_115 = NULL;
                  t = r_90(t);
                  {
                    u_115 = t;
                    {
                      t = not_null(l_115);
                      {
                        ATerm y_115 = NULL;
                        t = s_90(t);
                        {
                          w_115 = t;
                          {
                            ATerm z_115 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(s_115), not_null(u_115), not_null(w_115)), not_null(q_115));
                            {
                              z_115 = t;
                              if(((y_115 != NULL) && (y_115 != z_115)))
                                _fail(z_115);
                              else
                                y_115 = z_115;
                            }
                            t = not_null(y_115);
                          }
                        }
                      }
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
ATerm Strategies_1 (ATerm t, ATerm d_89 (ATerm))
{
  ATerm l_116 = NULL,m_116 = NULL;
  l_116 = t;
  k_116 :
  if(match_cons(l_116, sym_Strategies_1))
    {
      m_116 = ATgetArgument(l_116, 0);
      {
        ATerm p_116 = NULL,r_116 = NULL;
        ATerm q_116 = NULL;
        t = SSLgetAnnotations(not_null(l_116));
        {
          q_116 = t;
          if(((p_116 != NULL) && (p_116 != q_116)))
            _fail(q_116);
          else
            p_116 = q_116;
        }
        {
          t = not_null(m_116);
          {
            ATerm t_116 = NULL;
            t = d_89(t);
            {
              r_116 = t;
              {
                ATerm u_116 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(r_116)), not_null(p_116));
                {
                  u_116 = t;
                  if(((t_116 != NULL) && (t_116 != u_116)))
                    _fail(u_116);
                  else
                    t_116 = u_116;
                }
                t = not_null(t_116);
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
ATerm Specification_1 (ATerm t, ATerm f_89 (ATerm))
{
  ATerm m_117 = NULL,n_117 = NULL;
  m_117 = t;
  l_117 :
  if(match_cons(m_117, sym_Specification_1))
    {
      n_117 = ATgetArgument(m_117, 0);
      {
        ATerm q_117 = NULL,s_117 = NULL;
        ATerm r_117 = NULL;
        t = SSLgetAnnotations(not_null(m_117));
        {
          r_117 = t;
          if(((q_117 != NULL) && (q_117 != r_117)))
            _fail(r_117);
          else
            q_117 = r_117;
        }
        {
          t = not_null(n_117);
          {
            ATerm u_117 = NULL;
            t = f_89(t);
            {
              s_117 = t;
              {
                ATerm v_117 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(s_117)), not_null(q_117));
                {
                  v_117 = t;
                  if(((u_117 != NULL) && (u_117 != v_117)))
                    _fail(v_117);
                  else
                    u_117 = v_117;
                }
                t = not_null(u_117);
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
ATerm apply_to_bodies_1 (ATerm t, ATerm b_118 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    ATerm c_4 (ATerm t)
    {
      ATerm d_4 (ATerm t)
      {
        ATerm e_4 (ATerm t)
        {
          ATerm i_4 (ATerm t)
          {
            t = SDef_3(t, _id, _id, b_118);
            return(t);
          }
          t = map_1(t, i_4);
          return(t);
        }
        t = Strategies_1(t, e_4);
        return(t);
      }
      t = Cons_2(t, d_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, c_4);
    return(t);
  }
  t = Specification_1(t, b_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm s_79 (ATerm), ATerm t_79 (ATerm))
{
  ATerm j_118 = NULL,k_118 = NULL,l_118 = NULL;
  j_118 = t;
  i_118 :
  if(match_cons(j_118, sym__2))
    {
      k_118 = ATgetArgument(j_118, 0);
      l_118 = ATgetArgument(j_118, 1);
      {
        ATerm p_118 = NULL,r_118 = NULL;
        ATerm q_118 = NULL;
        t = SSLgetAnnotations(not_null(j_118));
        {
          q_118 = t;
          if(((p_118 != NULL) && (p_118 != q_118)))
            _fail(q_118);
          else
            p_118 = q_118;
        }
        {
          t = not_null(k_118);
          {
            ATerm t_118 = NULL;
            t = s_79(t);
            {
              r_118 = t;
              {
                t = not_null(l_118);
                {
                  ATerm v_118 = NULL;
                  t = t_79(t);
                  {
                    t_118 = t;
                    {
                      ATerm w_118 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(r_118), not_null(t_118)), not_null(p_118));
                      {
                        w_118 = t;
                        if(((v_118 != NULL) && (v_118 != w_118)))
                          _fail(w_118);
                        else
                          v_118 = w_118;
                      }
                      t = not_null(v_118);
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
ATerm default_usage_0 (ATerm t)
{
  ATerm e_119 = NULL;
  ATerm s_24;
  s_24 = t;
  {
    ATerm j_4 (ATerm t)
    {
      ATerm f_119 = NULL,g_119 = NULL;
      f_119 = t;
      d_119 :
      if(match_cons(f_119, sym_Program_1))
        {
          g_119 = ATgetArgument(f_119, 0);
          if(((e_119 != NULL) && (e_119 != g_119)))
            _fail(g_119);
          else
            e_119 = g_119;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, j_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_24), not_null(e_119)), term_u_24));
      {
        t = printnl_0(t);
        {
          t = term_g_12;
          t = exit_0(t);
        }
      }
    }
  }
  t = s_24;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm k_119 = NULL,l_119 = NULL,m_119 = NULL;
  k_119 = t;
  j_119 :
  if(match_cons(k_119, sym__2))
    {
      l_119 = ATgetArgument(k_119, 0);
      m_119 = ATgetArgument(k_119, 1);
      {
        ATerm w_24;
        w_24 = t;
        t = SSL_printnl(not_null(l_119), not_null(m_119));
        t = w_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm s_119 = NULL,t_119 = NULL,u_119 = NULL;
  s_119 = t;
  r_119 :
  if(match_cons(s_119, sym__2))
    {
      t_119 = ATgetArgument(s_119, 0);
      u_119 = ATgetArgument(s_119, 1);
      {
        t = not_null(t_119);
        {
          ATerm k_4 (ATerm t)
          {
            t = not_null(u_119);
            return(t);
          }
          t = at_end_1(t, k_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm m_97 (ATerm))
{
  ATerm x_24;
  x_24 = t;
  {
    ATerm a_120 = NULL,c_120 = NULL;
    ATerm y_24;
    y_24 = t;
    {
      ATerm b_120 = NULL;
      t = m_97(t);
      {
        b_120 = t;
        if(((a_120 != NULL) && (a_120 != b_120)))
          _fail(b_120);
        else
          a_120 = b_120;
      }
    }
    t = y_24;
    {
      ATerm d_120 = NULL;
      d_120 = t;
      if(((c_120 != NULL) && (c_120 != d_120)))
        _fail(d_120);
      else
        c_120 = d_120;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_120)), not_null(a_120)));
        t = printnl_0(t);
      }
    }
  }
  t = x_24;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm h_120 = NULL;
  h_120 = t;
  t = SSL_is_string(not_null(h_120));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(a_25);
    }
  else
    {
      t = z_24;
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, m_4);
            LocalPopChoice(c_25);
          }
        else
          {
            t = b_25;
            {
              ATerm q_120 = NULL,r_120 = NULL,s_120 = NULL;
              q_120 = t;
              p_120 :
              if(match_cons(q_120, sym_Path_1))
                {
                  r_120 = ATgetArgument(q_120, 0);
                  t = not_null(r_120);
                }
              else
                {
                  if(match_cons(q_120, sym_Var_1))
                    {
                      r_120 = ATgetArgument(q_120, 0);
                      {
                        t = not_null(r_120);
                        {
                          ATerm d_25 = t;
                          int h_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(h_25);
                            }
                          else
                            {
                              t = d_25;
                              {
                                ATerm n_4 (ATerm t)
                                {
                                  t = term_i_25;
                                  return(t);
                                }
                                t = debug_1(t, n_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(q_120, sym_Prefix_2))
                        {
                          r_120 = ATgetArgument(q_120, 0);
                          s_120 = ATgetArgument(q_120, 1);
                          {
                            ATerm x_120 = NULL,z_120 = NULL;
                            ATerm m_25;
                            m_25 = t;
                            {
                              ATerm y_120 = NULL;
                              t = not_null(r_120);
                              {
                                t = eval_config_0(t);
                                {
                                  y_120 = t;
                                  if(((x_120 != NULL) && (x_120 != y_120)))
                                    _fail(y_120);
                                  else
                                    x_120 = y_120;
                                }
                              }
                            }
                            t = m_25;
                            {
                              ATerm a_121 = NULL;
                              t = not_null(s_120);
                              {
                                t = eval_config_0(t);
                                {
                                  a_121 = t;
                                  if(((z_120 != NULL) && (z_120 != a_121)))
                                    _fail(a_121);
                                  else
                                    z_120 = a_121;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_120), not_null(z_120));
                                t = conc_strings_0(t);
                              }
                            }
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
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm i_121 = NULL;
  i_121 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_25, not_null(i_121));
    {
      t = table_get_0(t);
      {
        ATerm o_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm q_25;
            q_25 = t;
            {
              ATerm k_121 = NULL;
              ATerm l_121 = NULL;
              l_121 = t;
              if(((k_121 != NULL) && (k_121 != l_121)))
                _fail(l_121);
              else
                k_121 = l_121;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_p_25, not_null(i_121), not_null(k_121));
                t = table_put_0(t);
              }
            }
            t = q_25;
          }
          return(t);
        }
        t = try_1(t, o_4);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm w_94 (ATerm))
{
  ATerm p_4 (ATerm t)
  {
    ATerm u_25;
    u_25 = t;
    {
      ATerm p_121 = NULL;
      ATerm q_121 = NULL;
      t = term_x_25;
      {
        t = get_config_0(t);
        {
          q_121 = t;
          if(((p_121 != NULL) && (p_121 != q_121)))
            _fail(q_121);
          else
            p_121 = q_121;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_121), term_y_25);
        t = geq_0(t);
      }
    }
    t = u_25;
    t = w_94(t);
    return(t);
  }
  t = try_1(t, p_4);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATempty, term_z_25));
  {
    t = printnl_0(t);
    {
      t = term_g_12;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm t_121 = NULL;
  t_121 = t;
  t = SSL_TicksToSeconds(not_null(t_121));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm y_121 = NULL,z_121 = NULL,a_122 = NULL;
  y_121 = t;
  x_121 :
  if(match_cons(y_121, sym__2))
    {
      z_121 = ATgetArgument(y_121, 0);
      a_122 = ATgetArgument(y_121, 1);
      {
        ATerm a_26 = t;
        int b_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(z_121), not_null(a_122));
            LocalPopChoice(b_26);
          }
        else
          {
            t = a_26;
            t = SSL_addr(not_null(z_121), not_null(a_122));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm b_105 (ATerm), ATerm c_105 (ATerm))
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_105(t);
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      {
        ATerm h_122 = NULL,i_122 = NULL,j_122 = NULL;
        h_122 = t;
        g_122 :
        if(((ATgetType(h_122) == AT_LIST) && ((ATermList) h_122 != ATempty)))
          {
            i_122 = ATgetFirst((ATermList) h_122);
            j_122 = (ATerm) ATgetNext((ATermList) h_122);
            {
              ATerm m_122 = NULL;
              ATerm n_122 = NULL;
              t = not_null(j_122);
              {
                t = foldr_2(t, b_105, c_105);
                {
                  n_122 = t;
                  if(((m_122 != NULL) && (m_122 != n_122)))
                    _fail(n_122);
                  else
                    m_122 = n_122;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_122), not_null(m_122));
                t = c_105(t);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2 (ATerm t, ATerm p_106 (ATerm), ATerm q_106 (ATerm))
{
  ATerm u_122 = NULL;
  ATerm w_122 = NULL;
  u_122 = t;
  {
    ATerm x_122 = NULL;
    ATerm z_122 = NULL,a_123 = NULL,b_123 = NULL;
    t = not_null(u_122);
    {
      x_122 = t;
      {
        t = SSL_explode_term(not_null(x_122));
        {
          z_122 = t;
          t_122 :
          if(match_cons(z_122, sym__2))
            {
              a_123 = ATgetArgument(z_122, 0);
              b_123 = ATgetArgument(z_122, 1);
              if(((w_122 != NULL) && (w_122 != b_123)))
                _fail(b_123);
              else
                w_122 = b_123;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_122);
      t = foldr_2(t, p_106, q_106);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm q_4 (ATerm t)
    {
      t = term_i_11;
      return(t);
    }
    t = crush_2(t, q_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm h_123 = NULL,i_123 = NULL,j_123 = NULL;
  h_123 = t;
  g_123 :
  if(match_cons(h_123, sym__2))
    {
      i_123 = ATgetArgument(h_123, 0);
      j_123 = ATgetArgument(h_123, 1);
      {
        ATerm e_26;
        e_26 = t;
        {
          ATerm f_26 = t;
          int g_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(i_123), not_null(j_123));
              LocalPopChoice(g_26);
            }
          else
            {
              t = f_26;
              t = SSL_gtr(not_null(i_123), not_null(j_123));
            }
        }
        t = e_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm p_123 = NULL;
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_123 = NULL,r_123 = NULL,s_123 = NULL;
      q_123 = t;
      o_123 :
      if(match_cons(q_123, sym__2))
        {
          r_123 = ATgetArgument(q_123, 0);
          s_123 = ATgetArgument(q_123, 1);
          {
            if(((p_123 != NULL) && (p_123 != r_123)))
              _fail(r_123);
            else
              p_123 = r_123;
            if(((p_123 != NULL) && (p_123 != s_123)))
              _fail(s_123);
            else
              p_123 = s_123;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm v_94 (ATerm))
{
  ATerm r_4 (ATerm t)
  {
    ATerm j_26;
    j_26 = t;
    {
      ATerm v_123 = NULL;
      ATerm w_123 = NULL;
      t = term_x_25;
      {
        t = get_config_0(t);
        {
          w_123 = t;
          if(((v_123 != NULL) && (v_123 != w_123)))
            _fail(w_123);
          else
            v_123 = w_123;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_123), term_g_12);
        t = geq_0(t);
      }
    }
    t = j_26;
    t = v_94(t);
    return(t);
  }
  t = try_1(t, r_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm a_124 = NULL,c_124 = NULL;
    ATerm k_26;
    k_26 = t;
    {
      ATerm b_124 = NULL;
      t = run_time_0(t);
      {
        b_124 = t;
        if(((a_124 != NULL) && (a_124 != b_124)))
          _fail(b_124);
        else
          a_124 = b_124;
      }
    }
    t = k_26;
    {
      ATerm d_124 = NULL;
      t = term_l_26;
      {
        t = get_config_0(t);
        {
          d_124 = t;
          if(((c_124 != NULL) && (c_124 != d_124)))
            _fail(d_124);
          else
            c_124 = d_124;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_26), not_null(a_124)), term_m_26), not_null(c_124)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, s_4);
  {
    t = term_i_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm i_124 = NULL,j_124 = NULL,k_124 = NULL;
  i_124 = t;
  h_124 :
  if(match_cons(i_124, sym__2))
    {
      j_124 = ATgetArgument(i_124, 0);
      k_124 = ATgetArgument(i_124, 1);
      t = SSL_WriteToTextFile(not_null(j_124), not_null(k_124));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm q_124 = NULL,r_124 = NULL,s_124 = NULL;
  q_124 = t;
  p_124 :
  if(match_cons(q_124, sym__2))
    {
      r_124 = ATgetArgument(q_124, 0);
      s_124 = ATgetArgument(q_124, 1);
      t = SSL_WriteToBinaryFile(not_null(r_124), not_null(s_124));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm a_125 = NULL;
  ATerm r_26;
  r_26 = t;
  {
    ATerm t_4 (ATerm t)
    {
      ATerm v_26 = t;
      int y_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_4 (ATerm t)
          {
            ATerm b_125 = NULL,c_125 = NULL;
            b_125 = t;
            x_124 :
            if(match_cons(b_125, sym_Output_1))
              {
                c_125 = ATgetArgument(b_125, 0);
                if(((a_125 != NULL) && (a_125 != c_125)))
                  _fail(c_125);
                else
                  a_125 = c_125;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, u_4);
          LocalPopChoice(y_26);
        }
      else
        {
          t = v_26;
          {
            ATerm d_125 = NULL;
            t = term_z_26;
            {
              d_125 = t;
              if(((a_125 != NULL) && (a_125 != d_125)))
                _fail(d_125);
              else
                a_125 = d_125;
            }
          }
        }
      return(t);
    }
    t = _2(t, t_4, _id);
  }
  t = r_26;
  {
    ATerm v_4 (ATerm t)
    {
      ATerm w_4 (ATerm t)
      {
        t = not_null(a_125);
        return(t);
      }
      t = split_2(t, w_4, _id);
      return(t);
    }
    t = _2(t, _id, v_4);
    {
      ATerm d_27 = t;
      int g_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_4 (ATerm t)
          {
            ATerm y_4 (ATerm t)
            {
              ATerm e_125 = NULL;
              e_125 = t;
              z_124 :
              if(!(match_cons(e_125, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, y_4);
            return(t);
          }
          t = _2(t, x_4, WriteToBinaryFile_0);
          LocalPopChoice(g_27);
        }
      else
        {
          t = d_27;
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
ATerm apply_strategy_1 (ATerm t, ATerm w_96 (ATerm))
{
  ATerm k_125 = NULL,m_125 = NULL,n_125 = NULL,o_125 = NULL;
  ATerm h_27;
  h_27 = t;
  t = dtime_0(t);
  t = h_27;
  {
    t = w_96(t);
    {
      ATerm i_27;
      i_27 = t;
      {
        ATerm l_125 = NULL;
        t = dtime_0(t);
        {
          l_125 = t;
          if(((k_125 != NULL) && (k_125 != l_125)))
            _fail(l_125);
          else
            k_125 = l_125;
        }
      }
      t = i_27;
      {
        m_125 = t;
        j_125 :
        if(match_cons(m_125, sym__2))
          {
            n_125 = ATgetArgument(m_125, 0);
            o_125 = ATgetArgument(m_125, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_125)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(k_125))), not_null(o_125));
          }
        else
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm u_125 = NULL;
  u_125 = t;
  t = SSL_ReadFromFile(not_null(u_125));
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_111 (ATerm), ATerm w_111 (ATerm))
{
  ATerm z_125 = NULL,b_126 = NULL;
  ATerm j_27;
  j_27 = t;
  {
    ATerm a_126 = NULL;
    t = v_111(t);
    {
      a_126 = t;
      if(((z_125 != NULL) && (z_125 != a_126)))
        _fail(a_126);
      else
        z_125 = a_126;
    }
  }
  t = j_27;
  {
    ATerm c_126 = NULL;
    t = w_111(t);
    {
      c_126 = t;
      if(((b_126 != NULL) && (b_126 != c_126)))
        _fail(c_126);
      else
        b_126 = c_126;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_125), not_null(b_126));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm i_126 = NULL;
  ATerm k_27;
  k_27 = t;
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_4 (ATerm t)
        {
          ATerm j_126 = NULL,k_126 = NULL;
          j_126 = t;
          g_126 :
          if(match_cons(j_126, sym_Input_1))
            {
              k_126 = ATgetArgument(j_126, 0);
              if(((i_126 != NULL) && (i_126 != k_126)))
                _fail(k_126);
              else
                i_126 = k_126;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, z_4);
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        {
          ATerm l_126 = NULL;
          t = term_n_27;
          {
            l_126 = t;
            if(((i_126 != NULL) && (i_126 != l_126)))
              _fail(l_126);
            else
              i_126 = l_126;
          }
        }
      }
  }
  t = k_27;
  {
    ATerm a_5 (ATerm t)
    {
      t = not_null(i_126);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, a_5);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_126 = NULL;
  s_126 = t;
  r_126 :
  if(match_cons(s_126, sym_Version_0))
    {
      ATerm u_126 = NULL,w_126 = NULL;
      ATerm o_27;
      o_27 = t;
      {
        ATerm v_126 = NULL;
        t = SSLgetAnnotations(not_null(s_126));
        {
          v_126 = t;
          if(((u_126 != NULL) && (u_126 != v_126)))
            _fail(v_126);
          else
            u_126 = v_126;
        }
      }
      t = o_27;
      {
        ATerm x_126 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(u_126));
        {
          x_126 = t;
          if(((w_126 != NULL) && (w_126 != x_126)))
            _fail(x_126);
          else
            w_126 = x_126;
        }
        t = not_null(w_126);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm u_96 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
        {
          ATerm r_27 = t;
          int s_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(s_27);
            }
          else
            {
              t = r_27;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, b_5);
  t = u_96(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_127 = NULL;
  c_127 = t;
  t = SSL_table_create(not_null(c_127));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_127 = NULL;
  g_127 = t;
  {
    ATerm t_27;
    t_27 = t;
    {
      t = term_u_27;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_27, term_v_27, not_null(g_127));
          t = table_put_0(t);
        }
      }
    }
    t = t_27;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_127 = NULL;
  k_127 = t;
  t = SSL_string_to_int(not_null(k_127));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm s_127 = NULL,t_127 = NULL,u_127 = NULL,v_127 = NULL,w_127 = NULL;
  s_127 = t;
  q_127 :
  if(match_string(s_127, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(s_127) == AT_LIST) && ((ATermList) s_127 != ATempty)))
        {
          t_127 = ATgetFirst((ATermList) s_127);
          u_127 = (ATerm) ATgetNext((ATermList) s_127);
          r_127 :
          if(((ATgetType(u_127) == AT_LIST) && ((ATermList) u_127 != ATempty)))
            {
              v_127 = ATgetFirst((ATermList) u_127);
              w_127 = (ATerm) ATgetNext((ATermList) u_127);
              {
                ATerm a_128 = NULL;
                ATerm z_27;
                z_27 = t;
                {
                  t = not_null(t_127);
                  t = k_0(t);
                }
                t = z_27;
                {
                  ATerm b_128 = NULL;
                  t = not_null(v_127);
                  {
                    t = l_0(t);
                    {
                      b_128 = t;
                      if(((a_128 != NULL) && (a_128 != b_128)))
                        _fail(b_128);
                      else
                        a_128 = b_128;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_127)), not_null(a_128));
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
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm a_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_5 (ATerm t)
      {
        ATerm s_128 = NULL;
        s_128 = t;
        f_128 :
        if(!(match_string(s_128, "-i")))
          {
            if(!(match_string(s_128, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm d_5 (ATerm t)
      {
        ATerm v_128 = NULL;
        ATerm h_28;
        h_28 = t;
        {
          ATerm t_128 = NULL;
          ATerm u_128 = NULL;
          u_128 = t;
          if(((t_128 != NULL) && (t_128 != u_128)))
            _fail(u_128);
          else
            t_128 = u_128;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_i_28, not_null(t_128));
            t = set_config_0(t);
          }
        }
        t = h_28;
        {
          ATerm w_128 = NULL;
          w_128 = t;
          if(((v_128 != NULL) && (v_128 != w_128)))
            _fail(w_128);
          else
            v_128 = w_128;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_128));
        }
        return(t);
      }
      ATerm e_5 (ATerm t)
      {
        t = term_m_28;
        return(t);
      }
      t = ArgOption_3(t, c_5, d_5, e_5);
      LocalPopChoice(e_28);
    }
  else
    {
      t = a_28;
      {
        ATerm p_28 = t;
        int q_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_5 (ATerm t)
            {
              ATerm x_128 = NULL;
              x_128 = t;
              i_128 :
              if(!(match_string(x_128, "-o")))
                {
                  if(!(match_string(x_128, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm g_5 (ATerm t)
            {
              ATerm b_129 = NULL;
              ATerm r_28;
              r_28 = t;
              {
                ATerm y_128 = NULL;
                ATerm a_129 = NULL;
                a_129 = t;
                if(((y_128 != NULL) && (y_128 != a_129)))
                  _fail(a_129);
                else
                  y_128 = a_129;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_28, not_null(y_128));
                  t = set_config_0(t);
                }
              }
              t = r_28;
              {
                ATerm c_129 = NULL;
                c_129 = t;
                if(((b_129 != NULL) && (b_129 != c_129)))
                  _fail(c_129);
                else
                  b_129 = c_129;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_129));
              }
              return(t);
            }
            ATerm h_5 (ATerm t)
            {
              t = term_t_28;
              return(t);
            }
            t = ArgOption_3(t, f_5, g_5, h_5);
            LocalPopChoice(q_28);
          }
        else
          {
            t = p_28;
            {
              ATerm u_28 = t;
              int v_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_5 (ATerm t)
                  {
                    ATerm d_129 = NULL;
                    d_129 = t;
                    l_128 :
                    if(!(match_string(d_129, "-S")))
                      {
                        if(!(match_string(d_129, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm j_5 (ATerm t)
                  {
                    t = term_w_28;
                    t = set_config_0(t);
                    t = term_x_28;
                    return(t);
                  }
                  ATerm k_5 (ATerm t)
                  {
                    t = term_y_28;
                    return(t);
                  }
                  t = Option_3(t, i_5, j_5, k_5);
                  LocalPopChoice(v_28);
                }
              else
                {
                  t = u_28;
                  {
                    ATerm z_28 = t;
                    int a_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_5 (ATerm t)
                        {
                          ATerm e_129 = NULL;
                          e_129 = t;
                          m_128 :
                          if(!(match_string(e_129, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm m_5 (ATerm t)
                        {
                          ATerm h_129 = NULL;
                          ATerm b_29;
                          b_29 = t;
                          {
                            ATerm f_129 = NULL;
                            ATerm g_129 = NULL;
                            t = string_to_int_0(t);
                            {
                              g_129 = t;
                              if(((f_129 != NULL) && (f_129 != g_129)))
                                _fail(g_129);
                              else
                                f_129 = g_129;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_x_25, not_null(f_129));
                              t = set_config_0(t);
                            }
                          }
                          t = b_29;
                          {
                            ATerm i_129 = NULL;
                            i_129 = t;
                            if(((h_129 != NULL) && (h_129 != i_129)))
                              _fail(i_129);
                            else
                              h_129 = i_129;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(h_129));
                          }
                          return(t);
                        }
                        ATerm n_5 (ATerm t)
                        {
                          t = term_c_29;
                          return(t);
                        }
                        t = ArgOption_3(t, l_5, m_5, n_5);
                        LocalPopChoice(a_29);
                      }
                    else
                      {
                        t = z_28;
                        {
                          ATerm d_29 = t;
                          int e_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_5 (ATerm t)
                              {
                                ATerm j_129 = NULL;
                                j_129 = t;
                                p_128 :
                                if(!(match_string(j_129, "-v")))
                                  {
                                    if(!(match_string(j_129, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm p_5 (ATerm t)
                              {
                                t = term_n_29;
                                t = set_config_0(t);
                                t = term_q_29;
                                return(t);
                              }
                              ATerm q_5 (ATerm t)
                              {
                                t = term_r_29;
                                return(t);
                              }
                              t = Option_3(t, o_5, p_5, q_5);
                              LocalPopChoice(e_29);
                            }
                          else
                            {
                              t = d_29;
                              {
                                ATerm v_29 = t;
                                int y_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_5 (ATerm t)
                                    {
                                      ATerm k_129 = NULL;
                                      k_129 = t;
                                      q_128 :
                                      if(!(match_string(k_129, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm s_5 (ATerm t)
                                    {
                                      t = term_a_30;
                                      t = set_config_0(t);
                                      t = term_b_30;
                                      return(t);
                                    }
                                    ATerm t_5 (ATerm t)
                                    {
                                      t = term_c_30;
                                      return(t);
                                    }
                                    t = Option_3(t, r_5, s_5, t_5);
                                    LocalPopChoice(y_29);
                                  }
                                else
                                  {
                                    t = v_29;
                                    {
                                      ATerm u_5 (ATerm t)
                                      {
                                        ATerm m_129 = NULL;
                                        m_129 = t;
                                        r_128 :
                                        if(!(match_string(m_129, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm v_5 (ATerm t)
                                      {
                                        t = term_e_30;
                                        t = set_config_0(t);
                                        t = term_f_30;
                                        return(t);
                                      }
                                      ATerm w_5 (ATerm t)
                                      {
                                        t = term_h_30;
                                        return(t);
                                      }
                                      t = Option_3(t, u_5, v_5, w_5);
                                    }
                                  }
                              }
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
  ATerm u_129 = NULL;
  u_129 = t;
  t = SSL_table_destroy(not_null(u_129));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm y_129 = NULL;
  y_129 = t;
  t = SSL_exit(not_null(y_129));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm c_130 = NULL;
  c_130 = t;
  t = SSL_implode_string(not_null(c_130));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm y_108 (ATerm))
{
  ATerm f_130 (ATerm t)
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, f_130);
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
        {
          t = Nil_0(t);
          t = y_108(t);
        }
      }
    return(t);
  }
  t = f_130(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm k_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(o_30);
    }
  else
    {
      t = k_30;
      {
        ATerm i_130 = NULL,j_130 = NULL,k_130 = NULL;
        i_130 = t;
        h_130 :
        if(((ATgetType(i_130) == AT_LIST) && ((ATermList) i_130 != ATempty)))
          {
            j_130 = ATgetFirst((ATermList) i_130);
            k_130 = (ATerm) ATgetNext((ATermList) i_130);
            {
              t = not_null(j_130);
              {
                ATerm x_5 (ATerm t)
                {
                  t = not_null(k_130);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_5);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm q_130 = NULL;
  q_130 = t;
  t = SSL_explode_string(not_null(q_130));
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
ATerm long_description_1 (ATerm t, ATerm v_93 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_108 (ATerm))
{
  ATerm t_130 (ATerm t)
  {
    ATerm p_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(t_30);
      }
    else
      {
        t = p_30;
        t = Cons_2(t, k_108, t_130);
      }
    return(t);
  }
  t = t_130(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm a_131 = NULL,b_131 = NULL,c_131 = NULL;
  c_131 = t;
  z_130 :
  if(((ATgetType(c_131) == AT_LIST) && ((ATermList) c_131 != ATempty)))
    {
      a_131 = ATgetFirst((ATermList) c_131);
      b_131 = (ATerm) ATgetNext((ATermList) c_131);
      {
        ATerm f_131 = NULL;
        t = not_null(b_131);
        {
          ATerm w_30;
          w_30 = t;
          {
            ATerm g_131 = NULL,i_131 = NULL,k_131 = NULL;
            ATerm x_30;
            x_30 = t;
            {
              ATerm h_131 = NULL;
              t = j_0(t);
              {
                h_131 = t;
                if(((g_131 != NULL) && (g_131 != h_131)))
                  _fail(h_131);
                else
                  g_131 = h_131;
              }
            }
            t = x_30;
            {
              ATerm j_131 = NULL;
              t = not_null(a_131);
              {
                t = i_0(t);
                {
                  j_131 = t;
                  if(((i_131 != NULL) && (i_131 != j_131)))
                    _fail(j_131);
                  else
                    i_131 = j_131;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(g_131)), not_null(i_131));
                {
                  k_131 = t;
                  if(((f_131 != NULL) && (f_131 != k_131)))
                    _fail(k_131);
                  else
                    f_131 = k_131;
                }
              }
            }
          }
          t = w_30;
          {
            ATerm y_5 (ATerm t)
            {
              t = not_null(f_131);
              return(t);
            }
            t = reverse_acc_2(t, i_0, y_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) c_131 == ATempty))
        {
          {
            t = term_j_29;
            t = j_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, z_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm u_93 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm b_81 (ATerm))
{
  ATerm v_131 = NULL,w_131 = NULL;
  v_131 = t;
  u_131 :
  if(match_cons(v_131, sym_Program_1))
    {
      w_131 = ATgetArgument(v_131, 0);
      {
        ATerm z_131 = NULL,b_132 = NULL;
        ATerm a_132 = NULL;
        t = SSLgetAnnotations(not_null(v_131));
        {
          a_132 = t;
          if(((z_131 != NULL) && (z_131 != a_132)))
            _fail(a_132);
          else
            z_131 = a_132;
        }
        {
          t = not_null(w_131);
          {
            ATerm d_132 = NULL;
            t = b_81(t);
            {
              b_132 = t;
              {
                ATerm e_132 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_132)), not_null(z_131));
                {
                  e_132 = t;
                  if(((d_132 != NULL) && (d_132 != e_132)))
                    _fail(e_132);
                  else
                    d_132 = e_132;
                }
                t = not_null(d_132);
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
ATerm system_usage_0 (ATerm t)
{
  ATerm n_132 = NULL;
  ATerm a_6 (ATerm t)
  {
    ATerm b_6 (ATerm t)
    {
      ATerm o_132 = NULL;
      o_132 = t;
      if(((n_132 != NULL) && (n_132 != o_132)))
        _fail(o_132);
      else
        n_132 = o_132;
      return(t);
    }
    t = Program_1(t, b_6);
    return(t);
  }
  t = option_defined_1(t, a_6);
  {
    ATerm c_6 (ATerm t)
    {
      ATerm p_132 = NULL;
      ATerm r_132 = NULL;
      t = term_j_29;
      {
        ATerm d_6 (ATerm t)
        {
          t = not_null(n_132);
          return(t);
        }
        t = short_description_1(t, d_6);
        {
          t = concat_strings_0(t);
          {
            r_132 = t;
            if(((p_132 != NULL) && (p_132 != r_132)))
              _fail(r_132);
            else
              p_132 = r_132;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATempty, not_null(p_132)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, c_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATempty, term_y_30));
      {
        t = printnl_0(t);
        {
          t = term_b_31;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm e_6 (ATerm t)
                {
                  ATerm s_132 = NULL;
                  s_132 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_132)), term_c_31));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, e_6);
                {
                  ATerm f_6 (ATerm t)
                  {
                    ATerm u_132 = NULL;
                    ATerm v_132 = NULL;
                    t = term_j_29;
                    {
                      ATerm g_6 (ATerm t)
                      {
                        t = not_null(n_132);
                        return(t);
                      }
                      t = long_description_1(t, g_6);
                      {
                        t = concat_strings_0(t);
                        {
                          v_132 = t;
                          if(((u_132 != NULL) && (u_132 != v_132)))
                            _fail(v_132);
                          else
                            u_132 = v_132;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_132)), term_f_31));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, f_6);
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
ATerm Undefined_1 (ATerm t, ATerm c_81 (ATerm))
{
  ATerm f_133 = NULL,g_133 = NULL;
  f_133 = t;
  e_133 :
  if(match_cons(f_133, sym_Undefined_1))
    {
      g_133 = ATgetArgument(f_133, 0);
      {
        ATerm j_133 = NULL,l_133 = NULL;
        ATerm k_133 = NULL;
        t = SSLgetAnnotations(not_null(f_133));
        {
          k_133 = t;
          if(((j_133 != NULL) && (j_133 != k_133)))
            _fail(k_133);
          else
            j_133 = k_133;
        }
        {
          t = not_null(g_133);
          {
            ATerm n_133 = NULL;
            t = c_81(t);
            {
              l_133 = t;
              {
                ATerm o_133 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_133)), not_null(j_133));
                {
                  o_133 = t;
                  if(((n_133 != NULL) && (n_133 != o_133)))
                    _fail(o_133);
                  else
                    n_133 = o_133;
                }
                t = not_null(n_133);
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
ATerm fetch_1 (ATerm t, ATerm s_108 (ATerm))
{
  ATerm u_133 (ATerm t)
  {
    ATerm k_31 = t;
    int l_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, s_108, _id);
        LocalPopChoice(l_31);
      }
    else
      {
        t = k_31;
        t = Cons_2(t, _id, u_133);
      }
    return(t);
  }
  t = u_133(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm t_94 (ATerm))
{
  t = fetch_1(t, t_94);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_133 = NULL;
  z_133 = t;
  y_133 :
  if(match_cons(z_133, sym_Help_0))
    {
      ATerm b_134 = NULL,d_134 = NULL;
      ATerm m_31;
      m_31 = t;
      {
        ATerm c_134 = NULL;
        t = SSLgetAnnotations(not_null(z_133));
        {
          c_134 = t;
          if(((b_134 != NULL) && (b_134 != c_134)))
            _fail(c_134);
          else
            b_134 = c_134;
        }
      }
      t = m_31;
      {
        ATerm e_134 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_134));
        {
          e_134 = t;
          if(((d_134 != NULL) && (d_134 != e_134)))
            _fail(e_134);
          else
            d_134 = e_134;
        }
        t = not_null(d_134);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_112 (ATerm))
{
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_112(t);
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_134 = NULL,l_134 = NULL,m_134 = NULL;
  k_134 = t;
  j_134 :
  if(match_cons(k_134, sym__2))
    {
      l_134 = ATgetArgument(k_134, 0);
      m_134 = ATgetArgument(k_134, 1);
      t = SSL_table_get(not_null(l_134), not_null(m_134));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_134 = NULL,u_134 = NULL,v_134 = NULL,w_134 = NULL;
  t_134 = t;
  s_134 :
  if(match_cons(t_134, sym__3))
    {
      u_134 = ATgetArgument(t_134, 0);
      v_134 = ATgetArgument(t_134, 1);
      w_134 = ATgetArgument(t_134, 2);
      {
        ATerm p_31;
        p_31 = t;
        {
          ATerm a_135 = NULL;
          ATerm b_135 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_134), not_null(v_134));
          {
            ATerm q_31 = t;
            int r_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_31);
              }
            else
              {
                t = q_31;
                t = (ATerm) ATempty;
              }
            {
              b_135 = t;
              if(((a_135 != NULL) && (a_135 != b_135)))
                _fail(b_135);
              else
                a_135 = b_135;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_134), not_null(v_134), (ATerm) ATinsert(CheckATermList(not_null(a_135)), not_null(w_134)));
            t = table_put_0(t);
          }
        }
        t = p_31;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm z_93 (ATerm))
{
  ATerm f_135 = NULL;
  ATerm g_135 = NULL;
  t = term_j_29;
  {
    t = z_93(t);
    {
      g_135 = t;
      if(((f_135 != NULL) && (f_135 != g_135)))
        _fail(g_135);
      else
        f_135 = g_135;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_z_30, term_a_31, not_null(f_135));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm m_135 = NULL,n_135 = NULL,o_135 = NULL;
  m_135 = t;
  l_135 :
  if(match_string(m_135, "register-usage-info"))
    {
      t = register_usage_1(t, f_0);
    }
  else
    {
      if(((ATgetType(m_135) == AT_LIST) && ((ATermList) m_135 != ATempty)))
        {
          n_135 = ATgetFirst((ATermList) m_135);
          o_135 = (ATerm) ATgetNext((ATermList) m_135);
          {
            ATerm r_135 = NULL;
            ATerm s_31;
            s_31 = t;
            {
              t = not_null(n_135);
              t = a_0(t);
            }
            t = s_31;
            {
              ATerm s_135 = NULL;
              t = term_j_29;
              {
                t = b_0(t);
                {
                  s_135 = t;
                  if(((r_135 != NULL) && (r_135 != s_135)))
                    _fail(s_135);
                  else
                    r_135 = s_135;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(o_135)), not_null(r_135));
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
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    ATerm x_135 = NULL;
    x_135 = t;
    w_135 :
    if(!(match_string(x_135, "--help")))
      {
        if(!(match_string(x_135, "-h")))
          {
            if(!(match_string(x_135, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    t = term_t_31;
    return(t);
  }
  ATerm j_6 (ATerm t)
  {
    t = term_u_31;
    return(t);
  }
  t = Option_3(t, h_6, i_6, j_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm a_136 = NULL,b_136 = NULL,c_136 = NULL;
  a_136 = t;
  z_135 :
  if(((ATgetType(a_136) == AT_LIST) && ((ATermList) a_136 != ATempty)))
    {
      b_136 = ATgetFirst((ATermList) a_136);
      c_136 = (ATerm) ATgetNext((ATermList) a_136);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_136)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_136)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_91 (ATerm), ATerm w_91 (ATerm))
{
  ATerm m_136 = NULL,n_136 = NULL,o_136 = NULL;
  m_136 = t;
  l_136 :
  if(((ATgetType(m_136) == AT_LIST) && ((ATermList) m_136 != ATempty)))
    {
      n_136 = ATgetFirst((ATermList) m_136);
      o_136 = (ATerm) ATgetNext((ATermList) m_136);
      {
        ATerm s_136 = NULL,u_136 = NULL;
        ATerm t_136 = NULL;
        t = SSLgetAnnotations(not_null(m_136));
        {
          t_136 = t;
          if(((s_136 != NULL) && (s_136 != t_136)))
            _fail(t_136);
          else
            s_136 = t_136;
        }
        {
          t = not_null(n_136);
          {
            ATerm w_136 = NULL;
            t = v_91(t);
            {
              u_136 = t;
              {
                t = not_null(o_136);
                {
                  ATerm y_136 = NULL;
                  t = w_91(t);
                  {
                    w_136 = t;
                    {
                      ATerm z_136 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_136)), not_null(u_136)), not_null(s_136));
                      {
                        z_136 = t;
                        if(((y_136 != NULL) && (y_136 != z_136)))
                          _fail(z_136);
                        else
                          y_136 = z_136;
                      }
                      t = not_null(y_136);
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
ATerm Nil_0 (ATerm t)
{
  ATerm j_137 = NULL;
  j_137 = t;
  i_137 :
  if(((ATermList) j_137 == ATempty))
    {
      {
        ATerm l_137 = NULL,n_137 = NULL;
        ATerm v_31;
        v_31 = t;
        {
          ATerm m_137 = NULL;
          t = SSLgetAnnotations(not_null(j_137));
          {
            m_137 = t;
            if(((l_137 != NULL) && (l_137 != m_137)))
              _fail(m_137);
            else
              l_137 = m_137;
          }
        }
        t = v_31;
        {
          ATerm o_137 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(l_137));
          {
            o_137 = t;
            if(((n_137 != NULL) && (n_137 != o_137)))
              _fail(o_137);
            else
              n_137 = o_137;
          }
          t = not_null(n_137);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm u_137 = NULL,v_137 = NULL,w_137 = NULL;
  u_137 = t;
  t_137 :
  if(match_cons(u_137, sym__2))
    {
      v_137 = ATgetArgument(u_137, 0);
      w_137 = ATgetArgument(u_137, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_25, not_null(v_137), not_null(w_137));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_93 (ATerm))
{
  ATerm w_31;
  w_31 = t;
  {
    ATerm k_6 (ATerm t)
    {
      t = term_x_31;
      t = x_93(t);
      return(t);
    }
    t = try_1(t, k_6);
  }
  t = w_31;
  {
    ATerm l_6 (ATerm t)
    {
      ATerm e_138 = NULL;
      ATerm y_31;
      y_31 = t;
      {
        ATerm c_138 = NULL;
        ATerm d_138 = NULL;
        d_138 = t;
        if(((c_138 != NULL) && (c_138 != d_138)))
          _fail(d_138);
        else
          c_138 = d_138;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_26, not_null(c_138));
          t = set_config_0(t);
        }
      }
      t = y_31;
      {
        ATerm f_138 = NULL;
        f_138 = t;
        if(((e_138 != NULL) && (e_138 != f_138)))
          _fail(f_138);
        else
          e_138 = f_138;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_138));
      }
      return(t);
    }
    ATerm m_6 (ATerm t)
    {
      ATerm z_31 = t;
      int a_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_32 = t;
          int c_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(c_32);
            }
          else
            {
              t = b_32;
              {
                t = x_93(t);
                t = Cons_2(t, _id, m_6);
              }
            }
          LocalPopChoice(a_32);
        }
      else
        {
          t = z_31;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, l_6, m_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_138 = NULL,m_138 = NULL,n_138 = NULL;
  ATerm d_32;
  d_32 = t;
  {
    ATerm o_138 = NULL,p_138 = NULL,q_138 = NULL,r_138 = NULL;
    o_138 = t;
    k_138 :
    if(match_cons(o_138, sym__3))
      {
        p_138 = ATgetArgument(o_138, 0);
        q_138 = ATgetArgument(o_138, 1);
        r_138 = ATgetArgument(o_138, 2);
        {
          if(((l_138 != NULL) && (l_138 != p_138)))
            _fail(p_138);
          else
            l_138 = p_138;
          {
            if(((m_138 != NULL) && (m_138 != q_138)))
              _fail(q_138);
            else
              m_138 = q_138;
            {
              if(((n_138 != NULL) && (n_138 != r_138)))
                _fail(r_138);
              else
                n_138 = r_138;
              t = SSL_table_put(not_null(l_138), not_null(m_138), not_null(n_138));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = d_32;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_93 (ATerm))
{
  ATerm u_138 = NULL;
  ATerm e_32;
  e_32 = t;
  {
    t = term_f_32;
    t = table_put_0(t);
  }
  t = e_32;
  {
    ATerm n_6 (ATerm t)
    {
      ATerm g_32 = t;
      int h_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_93(t);
          LocalPopChoice(h_32);
        }
      else
        {
          t = g_32;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_6);
    {
      ATerm o_6 (ATerm t)
      {
        ATerm i_32 = t;
        int j_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_i_11;
                t = exit_0(t);
              }
            }
            LocalPopChoice(j_32);
          }
        else
          {
            t = i_32;
            {
              ATerm p_6 (ATerm t)
              {
                ATerm q_6 (ATerm t)
                {
                  ATerm v_138 = NULL;
                  v_138 = t;
                  if(((u_138 != NULL) && (u_138 != v_138)))
                    _fail(v_138);
                  else
                    u_138 = v_138;
                  return(t);
                }
                t = Undefined_1(t, q_6);
                return(t);
              }
              t = option_defined_1(t, p_6);
              {
                ATerm k_32;
                k_32 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_138)), term_l_32));
                  t = printnl_0(t);
                }
                t = k_32;
                {
                  t = system_usage_0(t);
                  {
                    t = term_g_12;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, o_6);
      {
        ATerm m_32;
        m_32 = t;
        {
          t = term_z_30;
          t = table_destroy_0(t);
        }
        t = m_32;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm l_96 (ATerm))
{
  ATerm r_6 (ATerm t)
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_96(t);
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, r_6);
  {
    t = store_options_0(t);
    {
      t = l_96(t);
      {
        ATerm p_32 = t;
        int q_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, k_96);
            LocalPopChoice(q_32);
          }
        else
          {
            t = p_32;
            {
              ATerm r_32 = t;
              int s_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, i_96);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(s_32);
                }
              else
                {
                  t = r_32;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm e_96 (ATerm))
{
  ATerm s_6 (ATerm t)
  {
    ATerm t_6 (ATerm t)
    {
      ATerm t_32;
      t_32 = t;
      {
        ATerm y_138 = NULL;
        ATerm z_138 = NULL;
        t = term_l_26;
        {
          t = get_config_0(t);
          {
            z_138 = t;
            if(((y_138 != NULL) && (y_138 != z_138)))
              _fail(z_138);
            else
              y_138 = z_138;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATempty, not_null(y_138)));
          t = printnl_0(t);
        }
      }
      t = t_32;
      return(t);
    }
    t = if_verbose2_1(t, t_6);
    return(t);
  }
  t = iowrap_4(t, c_96, d_96, e_96, s_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm a_96 (ATerm), ATerm b_96 (ATerm))
{
  t = iowrap_3(t, a_96, b_96, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm x_95 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    t = _2(t, _id, x_95);
    return(t);
  }
  t = iowrap_2(t, u_6, _fail);
  return(t);
}
ATerm compile_match_comp_0 (ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    t = apply_to_bodies_1(t, match_to_dfa_0);
    return(t);
  }
  t = iowrap_1(t, v_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = compile_match_comp_0(t);
  return(t);
}
