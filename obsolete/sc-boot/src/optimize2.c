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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
ATerm term_t_31;
ATerm term_n_31;
ATerm term_y_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_x_28;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_y_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_d_26;
ATerm term_z_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_i_25;
ATerm term_o_24;
ATerm term_j_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_m_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_l_22;
ATerm term_g_22;
ATerm term_e_22;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_e_21;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_n_13;
ATerm term_k_11;
ATerm term_r_7;
ATerm term_f_7;
void init_constant_terms (void)
{
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_DontInline_0);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_m_23);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_23);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__2, term_b_27, term_c_27);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym__2, term_i_27, term_c_27);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym__2, term_x_28, term_c_27);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym__2, term_y_29, term_z_29);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym__3, term_y_29, term_z_29, (ATerm) ATempty);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Tl_0 (ATerm);
ATerm isect_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm w_89 (ATerm));
ATerm Scope_2 (ATerm, ATerm t_92 (ATerm), ATerm u_92 (ATerm));
ATerm tboundin_3 (ATerm, ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm m_118 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm q_106 (ATerm));
ATerm crush_3 (ATerm, ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm e_108 (ATerm));
ATerm free_vars_3 (ATerm, ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm l_103 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm CleanupScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm n_114 (ATerm));
ATerm simplify_clean_0 (ATerm);
ATerm simplify_0 (ATerm);
ATerm WidenScope_0 (ATerm);
ATerm InlineDont_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm n_110 (ATerm));
ATerm Inline_0 (ATerm);
ATerm BuildPrim_0 (ATerm);
ATerm BuildBuild_0 (ATerm);
ATerm BuildMatchFusion_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm MisMatch_0 (ATerm);
ATerm BMF_0 (ATerm);
ATerm BuildMatch_0 (ATerm);
ATerm NoEffect_0 (ATerm);
ATerm FuseScope_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm r_117 (ATerm), ATerm s_117 (ATerm));
ATerm alltd_1 (ATerm, ATerm r_116 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm t_117 (ATerm), ATerm u_117 (ATerm));
ATerm substitute_1 (ATerm, ATerm v_117 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm x_101 (ATerm), ATerm y_101 (ATerm));
ATerm for_3 (ATerm, ATerm a_102 (ATerm), ATerm b_102 (ATerm), ATerm c_102 (ATerm));
ATerm HdMember_1 (ATerm, ATerm r_107 (ATerm));
ATerm diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm d_116 (ATerm));
ATerm in_0 (ATerm);
ATerm Var_1 (ATerm, ATerm n_0 (ATerm));
ATerm CopyPropagation_0 (ATerm);
ATerm HoistLet_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm w_111 (ATerm));
ATerm zip_1 (ATerm, ATerm y_111 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm w_92 (ATerm), ATerm x_92 (ATerm));
ATerm Explode_2 (ATerm, ATerm b_89 (ATerm), ATerm c_89 (ATerm));
ATerm Op_2 (ATerm, ATerm w_90 (ATerm), ATerm x_90 (ATerm));
ATerm pat_td_1 (ATerm, ATerm j_119 (ATerm));
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
ATerm Optimize_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm g_101 (ATerm), ATerm h_101 (ATerm));
ATerm repeat_1 (ATerm, ATerm j_101 (ATerm));
ATerm downup_1 (ATerm, ATerm p_114 (ATerm));
ATerm simplify_widen_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm));
ATerm Strategies_1 (ATerm, ATerm g_90 (ATerm));
ATerm Specification_1 (ATerm, ATerm i_90 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm m_119 (ATerm));
ATerm _2 (ATerm, ATerm q_80 (ATerm), ATerm r_80 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm u_98 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm e_96 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm m_106 (ATerm), ATerm n_106 (ATerm));
ATerm crush_2 (ATerm, ATerm a_108 (ATerm), ATerm b_108 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm d_96 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm e_98 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm g_113 (ATerm), ATerm h_113 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm c_98 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_110 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm d_95 (ATerm));
ATerm map_1 (ATerm, ATerm v_109 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm c_95 (ATerm));
ATerm Program_1 (ATerm, ATerm e_82 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm f_82 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_110 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_96 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm y_113 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm h_95 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_92 (ATerm), ATerm z_92 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm f_95 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm e_95 (ATerm));
ATerm iowrap_4 (ATerm, ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm));
ATerm iowrap_3 (ATerm, ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm m_97 (ATerm));
ATerm iowrap_2 (ATerm, ATerm i_97 (ATerm), ATerm j_97 (ATerm));
ATerm iowrap_1 (ATerm, ATerm f_97 (ATerm));
ATerm optimize2_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Tl_0 (ATerm t)
{
  ATerm c_3 = NULL,q_3 = NULL,r_3 = NULL;
  c_3 = t;
  b_3 :
  if(((ATgetType(c_3) == AT_LIST) && ((ATermList) c_3 != ATempty)))
    {
      q_3 = ATgetFirst((ATermList) c_3);
      r_3 = (ATerm) ATgetNext((ATermList) c_3);
      t = not_null(r_3);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL;
  k_4 = t;
  j_4 :
  if(match_cons(k_4, sym__2))
    {
      l_4 = ATgetArgument(k_4, 0);
      m_4 = ATgetArgument(k_4, 1);
      {
        t = not_null(l_4);
        {
          ATerm q_4 (ATerm t)
          {
            ATerm m_5 = t;
            int n_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(n_5);
              }
            else
              {
                t = m_5;
                {
                  ATerm o_5 = t;
                  int t_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_5;
                      u_5 = t;
                      {
                        ATerm c_0 (ATerm t)
                        {
                          t = not_null(m_4);
                          return(t);
                        }
                        t = HdMember_1(t, c_0);
                      }
                      t = u_5;
                      t = Cons_2(t, _id, q_4);
                      LocalPopChoice(t_5);
                    }
                  else
                    {
                      t = o_5;
                      {
                        t = Tl_0(t);
                        t = q_4(t);
                      }
                    }
                }
              }
            return(t);
          }
          t = q_4(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm w_89 (ATerm))
{
  ATerm w_4 = NULL,x_4 = NULL;
  w_4 = t;
  v_4 :
  if(match_cons(w_4, sym_DynamicRules_1))
    {
      x_4 = ATgetArgument(w_4, 0);
      {
        ATerm a_5 = NULL,c_5 = NULL;
        ATerm b_5 = NULL;
        t = SSLgetAnnotations(not_null(w_4));
        {
          b_5 = t;
          if(((a_5 != NULL) && (a_5 != b_5)))
            _fail(b_5);
          else
            a_5 = b_5;
        }
        {
          t = not_null(x_4);
          {
            ATerm e_5 = NULL;
            t = w_89(t);
            {
              c_5 = t;
              {
                ATerm f_5 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(c_5)), not_null(a_5));
                {
                  f_5 = t;
                  if(((e_5 != NULL) && (e_5 != f_5)))
                    _fail(f_5);
                  else
                    e_5 = f_5;
                }
                t = not_null(e_5);
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
ATerm Scope_2 (ATerm t, ATerm t_92 (ATerm), ATerm u_92 (ATerm))
{
  ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL;
  q_5 = t;
  p_5 :
  if(match_cons(q_5, sym_Scope_2))
    {
      r_5 = ATgetArgument(q_5, 0);
      s_5 = ATgetArgument(q_5, 1);
      {
        ATerm w_5 = NULL,y_5 = NULL;
        ATerm x_5 = NULL;
        t = SSLgetAnnotations(not_null(q_5));
        {
          x_5 = t;
          if(((w_5 != NULL) && (w_5 != x_5)))
            _fail(x_5);
          else
            w_5 = x_5;
        }
        {
          t = not_null(r_5);
          {
            ATerm a_6 = NULL;
            t = t_92(t);
            {
              y_5 = t;
              {
                t = not_null(s_5);
                {
                  ATerm c_6 = NULL;
                  t = u_92(t);
                  {
                    a_6 = t;
                    {
                      ATerm d_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(y_5), not_null(a_6)), not_null(w_5));
                      {
                        d_6 = t;
                        if(((c_6 != NULL) && (c_6 != d_6)))
                          _fail(d_6);
                        else
                          c_6 = d_6;
                      }
                      t = not_null(c_6);
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
ATerm tboundin_3 (ATerm t, ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm m_118 (ATerm))
{
  ATerm v_5 = t;
  int z_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, m_118, k_118);
      LocalPopChoice(z_5);
    }
  else
    {
      t = v_5;
      t = DynamicRules_1(t, k_118);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm l_6 = NULL,m_6 = NULL;
  l_6 = t;
  k_6 :
  if(match_cons(l_6, sym_DynamicRules_1))
    {
      m_6 = ATgetArgument(l_6, 0);
      {
        t = not_null(m_6);
        t = tvars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL;
  w_6 = t;
  r_6 :
  if(match_cons(w_6, sym_LRule_1))
    {
      x_6 = ATgetArgument(w_6, 0);
      s_6 :
      if(match_cons(x_6, sym_Rule_3))
        {
          t_6 = ATgetArgument(x_6, 0);
          u_6 = ATgetArgument(x_6, 1);
          v_6 = ATgetArgument(x_6, 2);
          {
            t = not_null(t_6);
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
      if(match_cons(w_6, sym_Scope_2))
        {
          x_6 = ATgetArgument(w_6, 0);
          y_6 = ATgetArgument(w_6, 1);
          t = not_null(x_6);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL;
  i_7 = t;
  h_7 :
  if(match_cons(i_7, sym_Var_1))
    {
      j_7 = ATgetArgument(i_7, 0);
      t = (ATerm) ATinsert(ATempty, not_null(j_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL;
  o_7 = t;
  n_7 :
  if(match_cons(o_7, sym__2))
    {
      p_7 = ATgetArgument(o_7, 0);
      q_7 = ATgetArgument(o_7, 1);
      {
        t = not_null(p_7);
        {
          ATerm u_7 (ATerm t)
          {
            ATerm b_6 = t;
            int e_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(q_7);
                LocalPopChoice(e_6);
              }
            else
              {
                t = b_6;
                {
                  ATerm f_6 = t;
                  int g_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_0 (ATerm t)
                      {
                        t = not_null(q_7);
                        return(t);
                      }
                      t = HdMember_1(t, d_0);
                      t = u_7(t);
                      LocalPopChoice(g_6);
                    }
                  else
                    {
                      t = f_6;
                      t = Cons_2(t, _id, u_7);
                    }
                }
              }
            return(t);
          }
          t = u_7(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm q_106 (ATerm))
{
  ATerm h_6 = t;
  int i_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_106(t);
      LocalPopChoice(i_6);
    }
  else
    {
      t = h_6;
      {
        ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
        z_7 = t;
        y_7 :
        if(((ATgetType(z_7) == AT_LIST) && ((ATermList) z_7 != ATempty)))
          {
            a_8 = ATgetFirst((ATermList) z_7);
            b_8 = (ATerm) ATgetNext((ATermList) z_7);
            {
              ATerm e_8 = NULL,g_8 = NULL;
              ATerm j_6;
              j_6 = t;
              {
                ATerm f_8 = NULL;
                t = not_null(a_8);
                {
                  t = q_106(t);
                  {
                    f_8 = t;
                    if(((e_8 != NULL) && (e_8 != f_8)))
                      _fail(f_8);
                    else
                      e_8 = f_8;
                  }
                }
              }
              t = j_6;
              {
                ATerm h_8 = NULL;
                t = not_null(b_8);
                {
                  t = foldr_3(t, o_106, p_106, q_106);
                  {
                    h_8 = t;
                    if(((g_8 != NULL) && (g_8 != h_8)))
                      _fail(h_8);
                    else
                      g_8 = h_8;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_8), not_null(g_8));
                  t = p_106(t);
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
ATerm crush_3 (ATerm t, ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm e_108 (ATerm))
{
  ATerm p_8 = NULL;
  ATerm r_8 = NULL;
  p_8 = t;
  {
    ATerm s_8 = NULL;
    ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
    t = not_null(p_8);
    {
      s_8 = t;
      {
        t = SSL_explode_term(not_null(s_8));
        {
          u_8 = t;
          o_8 :
          if(match_cons(u_8, sym__2))
            {
              v_8 = ATgetArgument(u_8, 0);
              w_8 = ATgetArgument(u_8, 1);
              if(((r_8 != NULL) && (r_8 != w_8)))
                _fail(w_8);
              else
                r_8 = w_8;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_8);
      t = foldr_3(t, c_108, d_108, e_108);
    }
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm l_103 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm d_9 (ATerm t)
  {
    ATerm n_6 = t;
    int o_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_103(t);
        LocalPopChoice(o_6);
      }
    else
      {
        t = n_6;
        {
          ATerm p_6 = t;
          int q_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_9 = NULL;
              ATerm z_6;
              z_6 = t;
              {
                ATerm c_9 = NULL;
                t = k_103(t);
                {
                  c_9 = t;
                  if(((b_9 != NULL) && (b_9 != c_9)))
                    _fail(c_9);
                  else
                    b_9 = c_9;
                }
              }
              t = z_6;
              {
                ATerm e_0 (ATerm t)
                {
                  ATerm h_0 (ATerm t)
                  {
                    t = not_null(b_9);
                    return(t);
                  }
                  t = split_2(t, d_9, h_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm g_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = l_103(t, e_0, d_9, g_0);
                {
                  ATerm o_0 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, o_0, union_0, _id);
                }
              }
              LocalPopChoice(q_6);
            }
          else
            {
              t = p_6;
              {
                ATerm p_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, p_0, union_0, d_9);
              }
            }
        }
      }
    return(t);
  }
  t = d_9(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    ATerm a_7 = t;
    int b_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(b_7);
      }
    else
      {
        t = a_7;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, q_0, tboundin_3);
  return(t);
}
ATerm CleanupScope_0 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  k_9 = t;
  j_9 :
  if(match_cons(k_9, sym_Scope_2))
    {
      l_9 = ATgetArgument(k_9, 0);
      m_9 = ATgetArgument(k_9, 1);
      {
        ATerm p_9 = NULL;
        ATerm q_9 = NULL,s_9 = NULL;
        ATerm r_9 = NULL;
        t = not_null(m_9);
        {
          t = tvars_0(t);
          {
            r_9 = t;
            if(((q_9 != NULL) && (q_9 != r_9)))
              _fail(r_9);
            else
              q_9 = r_9;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_9), not_null(q_9));
          {
            t = isect_0(t);
            {
              s_9 = t;
              {
                if(((p_9 != NULL) && (p_9 != s_9)))
                  _fail(s_9);
                else
                  p_9 = s_9;
                {
                  ATerm c_7 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm t_9 = NULL;
                      t_9 = t;
                      if(((l_9 != NULL) && (l_9 != t_9)))
                        _fail(t_9);
                      else
                        l_9 = t_9;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = c_7;
                    }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_9), not_null(m_9));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm n_114 (ATerm))
{
  t = n_114(t);
  {
    ATerm r_0 (ATerm t)
    {
      t = topdown_1(t, n_114);
      return(t);
    }
    t = _all(t, r_0);
  }
  return(t);
}
ATerm simplify_clean_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm t_0 (ATerm t)
    {
      t = CleanupScope_0(t);
      t = try_1(t, FuseScope_0);
      return(t);
    }
    t = try_1(t, t_0);
    return(t);
  }
  t = topdown_1(t, s_0);
  return(t);
}
ATerm simplify_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    t = repeat_1(t, Optimize_0);
    return(t);
  }
  t = downup_1(t, u_0);
  return(t);
}
ATerm WidenScope_0 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
  ATerm r_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_10), not_null(f_10)));
    return(t);
  }
  ATerm s_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_10), not_null(k_10)));
    return(t);
  }
  g_10 = t;
  a_10 :
  if(match_cons(g_10, sym_Seq_2))
    {
      h_10 = ATgetArgument(g_10, 0);
      k_10 = ATgetArgument(g_10, 1);
      b_10 :
      if(match_cons(k_10, sym_Scope_2))
        {
          e_10 = ATgetArgument(k_10, 0);
          f_10 = ATgetArgument(k_10, 1);
          c_10 :
          if(match_cons(h_10, sym_Scope_2))
            {
              i_10 = ATgetArgument(h_10, 0);
              j_10 = ATgetArgument(h_10, 1);
              {
                ATerm d_7 = t;
                int e_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = r_10(t);
                    LocalPopChoice(e_7);
                  }
                else
                  {
                    t = d_7;
                    t = s_10(t);
                  }
              }
            }
          else
            {
              t = r_10(t);
            }
        }
      else
        {
          d_10 :
          if(match_cons(h_10, sym_Scope_2))
            {
              i_10 = ATgetArgument(h_10, 0);
              j_10 = ATgetArgument(h_10, 1);
              t = s_10(t);
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
ATerm InlineDont_0 (ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
  z_10 = t;
  u_10 :
  if(match_cons(z_10, sym_Let_2))
    {
      a_11 = ATgetArgument(z_10, 0);
      g_11 = ATgetArgument(z_10, 1);
      v_10 :
      if(((ATgetType(a_11) == AT_LIST) && ((ATermList) a_11 != ATempty)))
        {
          b_11 = ATgetFirst((ATermList) a_11);
          f_11 = (ATerm) ATgetNext((ATermList) a_11);
          w_10 :
          if(match_cons(b_11, sym_SDef_3))
            {
              c_11 = ATgetArgument(b_11, 0);
              d_11 = ATgetArgument(b_11, 1);
              e_11 = ATgetArgument(b_11, 2);
              x_10 :
              if(((ATermList) d_11 == ATempty))
                {
                  y_10 :
                  if(((ATermList) f_11 == ATempty))
                    {
                      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_4, (ATerm)ATinsert(ATempty, term_f_7), not_null(c_11), (ATerm)ATempty, not_null(e_11))), not_null(g_11));
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
ATerm at_suffix_1 (ATerm t, ATerm n_110 (ATerm))
{
  ATerm l_11 (ATerm t)
  {
    ATerm g_7 = t;
    int k_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_110(t);
        LocalPopChoice(k_7);
      }
    else
      {
        t = g_7;
        t = Cons_2(t, _id, l_11);
      }
    return(t);
  }
  t = l_11(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
  y_11 = t;
  x_11 :
  if(match_cons(y_11, sym_Let_2))
    {
      z_11 = ATgetArgument(y_11, 0);
      a_12 = ATgetArgument(y_11, 1);
      {
        ATerm d_12 = NULL,e_12 = NULL;
        ATerm t_12 = NULL;
        t = not_null(z_11);
        {
          ATerm v_0 (ATerm t)
          {
            ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
            f_12 = t;
            t_11 :
            if(((ATgetType(f_12) == AT_LIST) && ((ATermList) f_12 != ATempty)))
              {
                g_12 = ATgetFirst((ATermList) f_12);
                k_12 = (ATerm) ATgetNext((ATermList) f_12);
                u_11 :
                if(match_cons(g_12, sym_SDef_3))
                  {
                    h_12 = ATgetArgument(g_12, 0);
                    i_12 = ATgetArgument(g_12, 1);
                    j_12 = ATgetArgument(g_12, 2);
                    v_11 :
                    if(((ATermList) i_12 == ATempty))
                      {
                        {
                          ATerm s_12 = NULL;
                          t = not_null(a_12);
                          {
                            ATerm w_0 (ATerm t)
                            {
                              ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
                              o_12 = t;
                              p_11 :
                              if(match_cons(o_12, sym_Call_2))
                                {
                                  p_12 = ATgetArgument(o_12, 0);
                                  r_12 = ATgetArgument(o_12, 1);
                                  q_11 :
                                  if(match_cons(p_12, sym_SVar_1))
                                    {
                                      q_12 = ATgetArgument(p_12, 0);
                                      r_11 :
                                      if(((ATermList) r_12 == ATempty))
                                        {
                                          {
                                            if(((h_12 != NULL) && (h_12 != q_12)))
                                              _fail(q_12);
                                            else
                                              h_12 = q_12;
                                            t = not_null(j_12);
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
                            t = oncetd_1(t, w_0);
                            {
                              s_12 = t;
                              {
                                if(((d_12 != NULL) && (d_12 != s_12)))
                                  _fail(s_12);
                                else
                                  d_12 = s_12;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_12)), (ATerm) ATempty), not_null(d_12));
                                  {
                                    ATerm l_7 = t;
                                    if((PushChoice() == 0))
                                      {
                                        t = in_0(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = l_7;
                                      }
                                  }
                                }
                              }
                            }
                          }
                          t = not_null(k_12);
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
          t = at_suffix_1(t, v_0);
          {
            t_12 = t;
            if(((e_12 != NULL) && (e_12 != t_12)))
              _fail(t_12);
            else
              e_12 = t_12;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(e_12), not_null(d_12));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BuildPrim_0 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
  h_13 = t;
  b_13 :
  if(match_cons(h_13, sym__2))
    {
      i_13 = ATgetArgument(h_13, 0);
      k_13 = ATgetArgument(h_13, 1);
      c_13 :
      if(match_cons(i_13, sym_Build_1))
        {
          j_13 = ATgetArgument(i_13, 0);
          d_13 :
          if(match_cons(k_13, sym_Where_1))
            {
              l_13 = ATgetArgument(k_13, 0);
              e_13 :
              if(match_cons(l_13, sym_Prim_2))
                {
                  f_13 = ATgetArgument(l_13, 0);
                  g_13 = ATgetArgument(l_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(f_13), not_null(g_13));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(k_13, sym_Prim_2))
                {
                  l_13 = ATgetArgument(k_13, 0);
                  m_13 = ATgetArgument(k_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(l_13), not_null(m_13));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BuildBuild_0 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  c_14 = t;
  x_13 :
  if(match_cons(c_14, sym__2))
    {
      d_14 = ATgetArgument(c_14, 0);
      f_14 = ATgetArgument(c_14, 1);
      y_13 :
      if(match_cons(d_14, sym_Build_1))
        {
          e_14 = ATgetArgument(d_14, 0);
          z_13 :
          if(match_cons(f_14, sym_Where_1))
            {
              g_14 = ATgetArgument(f_14, 0);
              a_14 :
              if(match_cons(g_14, sym_Build_1))
                {
                  b_14 = ATgetArgument(g_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(b_14));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(f_14, sym_Build_1))
                {
                  g_14 = ATgetArgument(f_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(g_14));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BuildMatchFusion_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
  w_14 = t;
  r_14 :
  if(match_cons(w_14, sym__2))
    {
      x_14 = ATgetArgument(w_14, 0);
      b_15 = ATgetArgument(w_14, 1);
      s_14 :
      if(match_cons(x_14, sym_Build_1))
        {
          y_14 = ATgetArgument(x_14, 0);
          t_14 :
          if(match_cons(y_14, sym_Op_2))
            {
              z_14 = ATgetArgument(y_14, 0);
              a_15 = ATgetArgument(y_14, 1);
              u_14 :
              if(match_cons(b_15, sym_Match_1))
                {
                  c_15 = ATgetArgument(b_15, 0);
                  v_14 :
                  if(match_cons(c_15, sym_Op_2))
                    {
                      d_15 = ATgetArgument(c_15, 0);
                      e_15 = ATgetArgument(c_15, 1);
                      {
                        ATerm h_15 = NULL,i_15 = NULL;
                        if(((z_14 != NULL) && (z_14 != d_15)))
                          _fail(d_15);
                        else
                          z_14 = d_15;
                        {
                          if(((h_15 != NULL) && (h_15 != e_15)))
                            _fail(e_15);
                          else
                            h_15 = e_15;
                          {
                            ATerm o_15 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_15), not_null(h_15));
                            {
                              ATerm x_0 (ATerm t)
                              {
                                ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
                                j_15 = t;
                                p_14 :
                                if(match_cons(j_15, sym__2))
                                  {
                                    k_15 = ATgetArgument(j_15, 0);
                                    l_15 = ATgetArgument(j_15, 1);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_15)), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_15)));
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = zip_1(t, x_0);
                              {
                                o_15 = t;
                                if(((i_15 != NULL) && (i_15 != o_15)))
                                  _fail(o_15);
                                else
                                  i_15 = o_15;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(i_15)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(z_14), not_null(a_15))));
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
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
  u_15 = t;
  t_15 :
  if(match_cons(u_15, sym__2))
    {
      v_15 = ATgetArgument(u_15, 0);
      w_15 = ATgetArgument(u_15, 1);
      if(((v_15 != NULL) && (v_15 != w_15)))
        _fail(w_15);
      else
        v_15 = w_15;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MisMatch_0 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
  f_16 = t;
  a_16 :
  if(match_cons(f_16, sym__2))
    {
      g_16 = ATgetArgument(f_16, 0);
      k_16 = ATgetArgument(f_16, 1);
      b_16 :
      if(match_cons(g_16, sym_Build_1))
        {
          h_16 = ATgetArgument(g_16, 0);
          c_16 :
          if(match_cons(h_16, sym_Op_2))
            {
              i_16 = ATgetArgument(h_16, 0);
              j_16 = ATgetArgument(h_16, 1);
              d_16 :
              if(match_cons(k_16, sym_Match_1))
                {
                  l_16 = ATgetArgument(k_16, 0);
                  e_16 :
                  if(match_cons(l_16, sym_Op_2))
                    {
                      m_16 = ATgetArgument(l_16, 0);
                      n_16 = ATgetArgument(l_16, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_16), not_null(m_16));
                        {
                          ATerm m_7 = t;
                          if((PushChoice() == 0))
                            {
                              t = eq_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = m_7;
                            }
                        }
                        t = term_r_7;
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
ATerm BMF_0 (ATerm t)
{
  ATerm s_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0(t);
      LocalPopChoice(t_7);
    }
  else
    {
      t = s_7;
      {
        ATerm v_7 = t;
        int w_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0(t);
            LocalPopChoice(w_7);
          }
        else
          {
            t = v_7;
            {
              ATerm x_7 = t;
              int c_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = BuildBuild_0(t);
                  LocalPopChoice(c_8);
                }
              else
                {
                  t = x_7;
                  t = BuildPrim_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm BuildMatch_0 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  ATerm o_17 (ATerm t)
  {
    ATerm l_17 = NULL;
    ATerm m_17 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), not_null(d_17));
    {
      t = BMF_0(t);
      {
        m_17 = t;
        if(((l_17 != NULL) && (l_17 != m_17)))
          _fail(m_17);
        else
          l_17 = m_17;
      }
    }
    t = not_null(l_17);
    return(t);
  }
  b_17 = t;
  x_16 :
  if(match_cons(b_17, sym_Seq_2))
    {
      c_17 = ATgetArgument(b_17, 0);
      d_17 = ATgetArgument(b_17, 1);
      y_16 :
      if(match_cons(d_17, sym_Seq_2))
        {
          z_16 = ATgetArgument(d_17, 0);
          a_17 = ATgetArgument(d_17, 1);
          {
            ATerm d_8 = t;
            int i_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_17 = NULL;
                ATerm i_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), not_null(z_16));
                {
                  t = BMF_0(t);
                  {
                    i_17 = t;
                    if(((h_17 != NULL) && (h_17 != i_17)))
                      _fail(i_17);
                    else
                      h_17 = i_17;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_17), not_null(a_17));
                LocalPopChoice(i_8);
              }
            else
              {
                t = d_8;
                t = o_17(t);
              }
          }
        }
      else
        {
          t = o_17(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NoEffect_0 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  w_17 = t;
  s_17 :
  if(match_cons(w_17, sym_Seq_2))
    {
      x_17 = ATgetArgument(w_17, 0);
      z_17 = ATgetArgument(w_17, 1);
      t_17 :
      if(match_cons(x_17, sym_Build_1))
        {
          y_17 = ATgetArgument(x_17, 0);
          u_17 :
          if(match_cons(z_17, sym_Seq_2))
            {
              a_18 = ATgetArgument(z_17, 0);
              c_18 = ATgetArgument(z_17, 1);
              v_17 :
              if(match_cons(a_18, sym_Build_1))
                {
                  b_18 = ATgetArgument(a_18, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_18)), not_null(c_18));
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
ATerm FuseScope_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL;
  l_18 = t;
  j_18 :
  if(match_cons(l_18, sym_Scope_2))
    {
      m_18 = ATgetArgument(l_18, 0);
      n_18 = ATgetArgument(l_18, 1);
      k_18 :
      if(match_cons(n_18, sym_Scope_2))
        {
          o_18 = ATgetArgument(n_18, 0);
          p_18 = ATgetArgument(n_18, 1);
          {
            ATerm t_18 = NULL;
            ATerm u_18 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_18), not_null(o_18));
            {
              t = conc_0(t);
              {
                u_18 = t;
                if(((t_18 != NULL) && (t_18 != u_18)))
                  _fail(u_18);
                else
                  t_18 = u_18;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_18), not_null(p_18));
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
ATerm IsVar_0 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL;
  z_18 = t;
  y_18 :
  if(match_cons(z_18, sym_Var_1))
    {
      a_19 = ATgetArgument(z_18, 0);
      t = not_null(a_19);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  g_19 = t;
  e_19 :
  if(match_cons(g_19, sym__2))
    {
      h_19 = ATgetArgument(g_19, 0);
      i_19 = ATgetArgument(g_19, 1);
      f_19 :
      if(((ATgetType(i_19) == AT_LIST) && ((ATermList) i_19 != ATempty)))
        {
          j_19 = ATgetFirst((ATermList) i_19);
          k_19 = (ATerm) ATgetNext((ATermList) i_19);
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_19), not_null(k_19));
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
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL;
  s_19 = t;
  p_19 :
  if(match_cons(s_19, sym__2))
    {
      t_19 = ATgetArgument(s_19, 0);
      u_19 = ATgetArgument(s_19, 1);
      q_19 :
      if(((ATgetType(u_19) == AT_LIST) && ((ATermList) u_19 != ATempty)))
        {
          v_19 = ATgetFirst((ATermList) u_19);
          y_19 = (ATerm) ATgetNext((ATermList) u_19);
          r_19 :
          if(match_cons(v_19, sym__2))
            {
              w_19 = ATgetArgument(v_19, 0);
              x_19 = ATgetArgument(v_19, 1);
              {
                ATerm a_20 = NULL;
                if(((t_19 != NULL) && (t_19 != w_19)))
                  _fail(w_19);
                else
                  t_19 = w_19;
                {
                  if(((a_20 != NULL) && (a_20 != x_19)))
                    _fail(x_19);
                  else
                    a_20 = x_19;
                  t = not_null(a_20);
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
  ATerm j_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(k_8);
    }
  else
    {
      t = j_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm r_117 (ATerm), ATerm s_117 (ATerm))
{
  ATerm g_20 = NULL;
  ATerm i_20 = NULL,j_20 = NULL;
  g_20 = t;
  {
    ATerm k_20 = NULL;
    t = not_null(g_20);
    {
      ATerm l_20 = NULL;
      t = r_117(t);
      {
        k_20 = t;
        {
          if(((i_20 != NULL) && (i_20 != k_20)))
            _fail(k_20);
          else
            i_20 = k_20;
          {
            t = s_117(t);
            {
              l_20 = t;
              if(((j_20 != NULL) && (j_20 != l_20)))
                _fail(l_20);
              else
                j_20 = l_20;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), not_null(j_20));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm r_116 (ATerm))
{
  ATerm p_20 (ATerm t)
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_116(t);
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        t = _all(t, p_20);
      }
    return(t);
  }
  t = p_20(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL;
  u_20 = t;
  t_20 :
  if(match_cons(u_20, sym__2))
    {
      v_20 = ATgetArgument(u_20, 0);
      w_20 = ATgetArgument(u_20, 1);
      {
        ATerm z_20 = NULL;
        if(((z_20 != NULL) && (z_20 != w_20)))
          _fail(w_20);
        else
          z_20 = w_20;
      }
    }
  else
    {
      if(match_cons(u_20, sym__3))
        {
          v_20 = ATgetArgument(u_20, 0);
          w_20 = ATgetArgument(u_20, 1);
          x_20 = ATgetArgument(u_20, 2);
          {
            ATerm f_21 = NULL;
            ATerm g_21 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_20), not_null(w_20));
            {
              t = zip_1(t, _id);
              {
                g_21 = t;
                if(((f_21 != NULL) && (f_21 != g_21)))
                  _fail(g_21);
                else
                  f_21 = g_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_21), not_null(x_20));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm t_117 (ATerm), ATerm u_117 (ATerm))
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
  t = subs_args_0(t);
  {
    m_21 = t;
    l_21 :
    if(match_cons(m_21, sym__2))
      {
        n_21 = ATgetArgument(m_21, 0);
        o_21 = ATgetArgument(m_21, 1);
        {
          t = not_null(o_21);
          {
            ATerm y_0 (ATerm t)
            {
              ATerm z_0 (ATerm t)
              {
                t = not_null(n_21);
                return(t);
              }
              t = SubsVar_2(t, t_117, z_0);
              t = u_117(t);
              return(t);
            }
            t = alltd_1(t, y_0);
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
ATerm substitute_1 (ATerm t, ATerm v_117 (ATerm))
{
  t = substitute_2(t, v_117, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  v_21 = t;
  t_21 :
  if(match_cons(v_21, sym__2))
    {
      w_21 = ATgetArgument(v_21, 0);
      x_21 = ATgetArgument(v_21, 1);
      u_21 :
      if(((ATgetType(x_21) == AT_LIST) && ((ATermList) x_21 != ATempty)))
        {
          y_21 = ATgetFirst((ATermList) x_21);
          z_21 = (ATerm) ATgetNext((ATermList) x_21);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_21)), not_null(y_21)), not_null(z_21));
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
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL;
  o_22 = t;
  m_22 :
  if(((ATgetType(o_22) == AT_LIST) && ((ATermList) o_22 != ATempty)))
    {
      p_22 = ATgetFirst((ATermList) o_22);
      s_22 = (ATerm) ATgetNext((ATermList) o_22);
      n_22 :
      if(match_cons(p_22, sym__2))
        {
          q_22 = ATgetArgument(p_22, 0);
          r_22 = ATgetArgument(p_22, 1);
          {
            ATerm w_22 = NULL,x_22 = NULL,d_23 = NULL,j_23 = NULL;
            ATerm n_8;
            n_8 = t;
            {
              ATerm y_22 = NULL;
              ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL;
              t = not_null(r_22);
              {
                y_22 = t;
                {
                  t = SSL_explode_term(not_null(y_22));
                  {
                    a_23 = t;
                    h_22 :
                    if(match_cons(a_23, sym__2))
                      {
                        b_23 = ATgetArgument(a_23, 0);
                        c_23 = ATgetArgument(a_23, 1);
                        {
                          if(((w_22 != NULL) && (w_22 != b_23)))
                            _fail(b_23);
                          else
                            w_22 = b_23;
                          if(((x_22 != NULL) && (x_22 != c_23)))
                            _fail(c_23);
                          else
                            x_22 = c_23;
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
            t = n_8;
            {
              ATerm q_8;
              q_8 = t;
              {
                ATerm e_23 = NULL;
                ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL;
                t = not_null(q_22);
                {
                  e_23 = t;
                  {
                    t = SSL_explode_term(not_null(e_23));
                    {
                      g_23 = t;
                      k_22 :
                      if(match_cons(g_23, sym__2))
                        {
                          h_23 = ATgetArgument(g_23, 0);
                          i_23 = ATgetArgument(g_23, 1);
                          {
                            if(((w_22 != NULL) && (w_22 != h_23)))
                              _fail(h_23);
                            else
                              w_22 = h_23;
                            if(((d_23 != NULL) && (d_23 != i_23)))
                              _fail(i_23);
                            else
                              d_23 = i_23;
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
              t = q_8;
              {
                ATerm k_23 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_23), not_null(x_22));
                {
                  t = zip_1(t, _id);
                  {
                    k_23 = t;
                    if(((j_23 != NULL) && (j_23 != k_23)))
                      _fail(k_23);
                    else
                      j_23 = k_23;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_23), not_null(s_22));
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
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  u_23 = t;
  s_23 :
  if(((ATgetType(u_23) == AT_LIST) && ((ATermList) u_23 != ATempty)))
    {
      v_23 = ATgetFirst((ATermList) u_23);
      y_23 = (ATerm) ATgetNext((ATermList) u_23);
      t_23 :
      if(match_cons(v_23, sym__2))
        {
          w_23 = ATgetArgument(v_23, 0);
          x_23 = ATgetArgument(v_23, 1);
          {
            ATerm a_24 = NULL;
            if(((w_23 != NULL) && (w_23 != x_23)))
              _fail(x_23);
            else
              w_23 = x_23;
            {
              if(((a_24 != NULL) && (a_24 != y_23)))
                _fail(y_23);
              else
                a_24 = y_23;
              t = not_null(a_24);
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
ATerm while_not_2 (ATerm t, ATerm x_101 (ATerm), ATerm y_101 (ATerm))
{
  ATerm c_24 (ATerm t)
  {
    ATerm t_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_101(t);
        LocalPopChoice(x_8);
      }
    else
      {
        t = t_8;
        {
          t = y_101(t);
          t = c_24(t);
        }
      }
    return(t);
  }
  t = c_24(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm a_102 (ATerm), ATerm b_102 (ATerm), ATerm c_102 (ATerm))
{
  t = a_102(t);
  t = while_not_2(t, b_102, c_102);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm r_107 (ATerm))
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
  g_24 = t;
  f_24 :
  if(((ATgetType(g_24) == AT_LIST) && ((ATermList) g_24 != ATempty)))
    {
      h_24 = ATgetFirst((ATermList) g_24);
      i_24 = (ATerm) ATgetNext((ATermList) g_24);
      {
        t = r_107(t);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm l_24 = NULL;
            l_24 = t;
            if(((h_24 != NULL) && (h_24 != l_24)))
              _fail(l_24);
            else
              h_24 = l_24;
            return(t);
          }
          t = fetch_1(t, a_1);
        }
        t = not_null(i_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
      r_24 = t;
      p_24 :
      if(match_cons(r_24, sym__2))
        {
          s_24 = ATgetArgument(r_24, 0);
          t_24 = ATgetArgument(r_24, 1);
          {
            t = not_null(s_24);
            {
              ATerm z_24 (ATerm t)
              {
                ATerm a_9 = t;
                int e_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(e_9);
                  }
                else
                  {
                    t = a_9;
                    {
                      ATerm f_9 = t;
                      int g_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_1 (ATerm t)
                          {
                            t = not_null(t_24);
                            return(t);
                          }
                          t = HdMember_1(t, b_1);
                          t = z_24(t);
                          LocalPopChoice(g_9);
                        }
                      else
                        {
                          t = f_9;
                          t = Cons_2(t, _id, z_24);
                        }
                    }
                  }
                return(t);
              }
              t = z_24(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
      {
        ATerm c_1 (ATerm t)
        {
          ATerm w_24 = NULL;
          w_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(w_24));
          return(t);
        }
        ATerm d_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm e_1 (ATerm t)
        {
          ATerm h_9 = t;
          int i_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_1 (ATerm t)
              {
                ATerm n_9 = t;
                int o_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(o_9);
                  }
                else
                  {
                    t = n_9;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, f_1);
              LocalPopChoice(i_9);
            }
          else
            {
              t = h_9;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, c_1, d_1, e_1);
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm d_116 (ATerm))
{
  ATerm b_25 (ATerm t)
  {
    ATerm u_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_116(t);
        LocalPopChoice(v_9);
      }
    else
      {
        t = u_9;
        t = _one(t, b_25);
      }
    return(t);
  }
  t = b_25(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL;
  f_25 = t;
  e_25 :
  if(match_cons(f_25, sym__2))
    {
      g_25 = ATgetArgument(f_25, 0);
      h_25 = ATgetArgument(f_25, 1);
      {
        t = not_null(h_25);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm k_25 = NULL;
            k_25 = t;
            if(((g_25 != NULL) && (g_25 != k_25)))
              _fail(k_25);
            else
              g_25 = k_25;
            return(t);
          }
          t = oncetd_1(t, g_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm w_25 = NULL,x_25 = NULL;
  w_25 = t;
  v_25 :
  if(match_cons(w_25, sym_Var_1))
    {
      x_25 = ATgetArgument(w_25, 0);
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_26 = NULL,c_26 = NULL;
            ATerm b_26 = NULL;
            t = SSLgetAnnotations(not_null(w_25));
            {
              b_26 = t;
              if(((a_26 != NULL) && (a_26 != b_26)))
                _fail(b_26);
              else
                a_26 = b_26;
            }
            {
              t = not_null(x_25);
              {
                ATerm e_26 = NULL;
                t = n_0(t);
                {
                  c_26 = t;
                  {
                    ATerm f_26 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(c_26)), not_null(a_26));
                    {
                      f_26 = t;
                      if(((e_26 != NULL) && (e_26 != f_26)))
                        _fail(f_26);
                      else
                        e_26 = f_26;
                    }
                    t = not_null(e_26);
                  }
                }
              }
            }
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
            {
              ATerm i_26 = NULL,k_26 = NULL;
              ATerm j_26 = NULL;
              t = SSLgetAnnotations(not_null(w_25));
              {
                j_26 = t;
                if(((i_26 != NULL) && (i_26 != j_26)))
                  _fail(j_26);
                else
                  i_26 = j_26;
              }
              {
                t = not_null(x_25);
                {
                  ATerm m_26 = NULL;
                  t = n_0(t);
                  {
                    k_26 = t;
                    {
                      ATerm n_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(k_26)), not_null(i_26));
                      {
                        n_26 = t;
                        if(((m_26 != NULL) && (m_26 != n_26)))
                          _fail(n_26);
                        else
                          m_26 = n_26;
                      }
                      t = not_null(m_26);
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
ATerm CopyPropagation_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
  n_28 = t;
  m_27 :
  if(match_cons(n_28, sym_Seq_2))
    {
      o_28 = ATgetArgument(n_28, 0);
      q_28 = ATgetArgument(n_28, 1);
      n_27 :
      if(match_cons(o_28, sym_Assign_1))
        {
          p_28 = ATgetArgument(o_28, 0);
          o_27 :
          if(match_cons(p_28, sym_Var_1))
            {
              g_28 = ATgetArgument(p_28, 0);
              p_27 :
              if(match_cons(q_28, sym_Seq_2))
                {
                  r_28 = ATgetArgument(q_28, 0);
                  s_28 = ATgetArgument(q_28, 1);
                  q_27 :
                  if(match_cons(r_28, sym_Build_1))
                    {
                      j_28 = ATgetArgument(r_28, 0);
                      r_27 :
                      if(match_cons(j_28, sym_Var_1))
                        {
                          k_28 = ATgetArgument(j_28, 0);
                          {
                            ATerm y_28 = NULL;
                            if(((g_28 != NULL) && (g_28 != k_28)))
                              _fail(k_28);
                            else
                              g_28 = k_28;
                            {
                              if(((y_28 != NULL) && (y_28 != s_28)))
                                _fail(s_28);
                              else
                                y_28 = s_28;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_28))), not_null(y_28));
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
          if(match_cons(o_28, sym_Build_1))
            {
              p_28 = ATgetArgument(o_28, 0);
              s_27 :
              if(match_cons(q_28, sym_Scope_2))
                {
                  r_28 = ATgetArgument(q_28, 0);
                  s_28 = ATgetArgument(q_28, 1);
                  t_27 :
                  if(match_cons(s_28, sym_Seq_2))
                    {
                      t_28 = ATgetArgument(s_28, 0);
                      w_28 = ATgetArgument(s_28, 1);
                      u_27 :
                      if(match_cons(t_28, sym_Assign_1))
                        {
                          u_28 = ATgetArgument(t_28, 0);
                          v_27 :
                          if(match_cons(u_28, sym_Var_1))
                            {
                              v_28 = ATgetArgument(u_28, 0);
                              {
                                ATerm y_9 = t;
                                int z_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm b_30 = NULL,d_30 = NULL;
                                    ATerm l_10;
                                    l_10 = t;
                                    {
                                      ATerm c_30 = NULL;
                                      t = not_null(p_28);
                                      {
                                        t = Var_1(t, _id);
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), not_null(r_28));
                                          {
                                            t = in_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), (ATerm) ATinsert(ATempty, not_null(v_28)));
                                              {
                                                t = diff_0(t);
                                                {
                                                  c_30 = t;
                                                  if(((b_30 != NULL) && (b_30 != c_30)))
                                                    _fail(c_30);
                                                  else
                                                    b_30 = c_30;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = l_10;
                                    {
                                      ATerm e_30 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(v_28)), (ATerm)ATinsert(ATempty, not_null(p_28)), not_null(w_28));
                                      {
                                        t = tsubs_0(t);
                                        {
                                          e_30 = t;
                                          if(((d_30 != NULL) && (d_30 != e_30)))
                                            _fail(e_30);
                                          else
                                            d_30 = e_30;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_28)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_30), not_null(d_30)));
                                    }
                                    LocalPopChoice(z_9);
                                  }
                                else
                                  {
                                    t = y_9;
                                    {
                                      ATerm j_30 = NULL,l_30 = NULL;
                                      ATerm m_10;
                                      m_10 = t;
                                      {
                                        ATerm k_30 = NULL;
                                        t = not_null(p_28);
                                        {
                                          t = Var_1(t, _id);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), not_null(r_28));
                                            {
                                              t = in_0(t);
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), (ATerm) ATinsert(ATempty, not_null(v_28)));
                                                {
                                                  t = diff_0(t);
                                                  {
                                                    k_30 = t;
                                                    if(((j_30 != NULL) && (j_30 != k_30)))
                                                      _fail(k_30);
                                                    else
                                                      j_30 = k_30;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      t = m_10;
                                      {
                                        ATerm m_30 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(v_28)), (ATerm)ATinsert(ATempty, not_null(p_28)), not_null(w_28));
                                        {
                                          t = tsubs_0(t);
                                          {
                                            m_30 = t;
                                            if(((l_30 != NULL) && (l_30 != m_30)))
                                              _fail(m_30);
                                            else
                                              l_30 = m_30;
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_28)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_30), not_null(l_30)));
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
    }
  else
    {
      if(match_cons(n_28, sym_Scope_2))
        {
          o_28 = ATgetArgument(n_28, 0);
          q_28 = ATgetArgument(n_28, 1);
          w_27 :
          if(match_cons(q_28, sym_Seq_2))
            {
              r_28 = ATgetArgument(q_28, 0);
              s_28 = ATgetArgument(q_28, 1);
              x_27 :
              if(match_cons(r_28, sym_Assign_1))
                {
                  j_28 = ATgetArgument(r_28, 0);
                  y_27 :
                  if(match_cons(j_28, sym_Var_1))
                    {
                      k_28 = ATgetArgument(j_28, 0);
                      z_27 :
                      if(match_cons(s_28, sym_Seq_2))
                        {
                          t_28 = ATgetArgument(s_28, 0);
                          w_28 = ATgetArgument(s_28, 1);
                          a_28 :
                          if(match_cons(t_28, sym_Assign_2))
                            {
                              u_28 = ATgetArgument(t_28, 0);
                              h_28 = ATgetArgument(t_28, 1);
                              b_28 :
                              if(match_cons(u_28, sym_Var_1))
                                {
                                  v_28 = ATgetArgument(u_28, 0);
                                  c_28 :
                                  if(match_cons(h_28, sym_Var_1))
                                    {
                                      i_28 = ATgetArgument(h_28, 0);
                                      {
                                        ATerm c_29 = NULL,d_29 = NULL,f_29 = NULL;
                                        if(((k_28 != NULL) && (k_28 != i_28)))
                                          _fail(i_28);
                                        else
                                          k_28 = i_28;
                                        {
                                          if(((c_29 != NULL) && (c_29 != w_28)))
                                            _fail(w_28);
                                          else
                                            c_29 = w_28;
                                          {
                                            ATerm n_10;
                                            n_10 = t;
                                            {
                                              ATerm e_29 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(k_28), not_null(o_28));
                                              {
                                                t = in_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), not_null(o_28));
                                                  {
                                                    t = in_0(t);
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_28), (ATerm) ATinsert(ATempty, not_null(v_28)));
                                                      {
                                                        t = diff_0(t);
                                                        {
                                                          e_29 = t;
                                                          if(((d_29 != NULL) && (d_29 != e_29)))
                                                            _fail(e_29);
                                                          else
                                                            d_29 = e_29;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            t = n_10;
                                            {
                                              ATerm g_29 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(v_28)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_28))), not_null(c_29));
                                              {
                                                t = tsubs_0(t);
                                                {
                                                  g_29 = t;
                                                  if(((f_29 != NULL) && (f_29 != g_29)))
                                                    _fail(g_29);
                                                  else
                                                    f_29 = g_29;
                                                }
                                              }
                                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_28))), not_null(f_29)));
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
                              if(match_cons(t_28, sym_Assign_1))
                                {
                                  u_28 = ATgetArgument(t_28, 0);
                                  d_28 :
                                  if(match_cons(u_28, sym_Var_1))
                                    {
                                      v_28 = ATgetArgument(u_28, 0);
                                      {
                                        ATerm l_29 = NULL,n_29 = NULL;
                                        ATerm o_10;
                                        o_10 = t;
                                        {
                                          ATerm m_29 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(k_28), not_null(o_28));
                                          {
                                            t = in_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), not_null(o_28));
                                              {
                                                t = in_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_28), (ATerm) ATinsert(ATempty, not_null(v_28)));
                                                  {
                                                    t = diff_0(t);
                                                    {
                                                      m_29 = t;
                                                      if(((l_29 != NULL) && (l_29 != m_29)))
                                                        _fail(m_29);
                                                      else
                                                        l_29 = m_29;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = o_10;
                                        {
                                          ATerm o_29 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(v_28)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_28))), not_null(w_28));
                                          {
                                            t = tsubs_0(t);
                                            {
                                              o_29 = t;
                                              if(((n_29 != NULL) && (n_29 != o_29)))
                                                _fail(o_29);
                                              else
                                                n_29 = o_29;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(l_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_28))), not_null(n_29)));
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
                  if(match_cons(r_28, sym_Assign_2))
                    {
                      j_28 = ATgetArgument(r_28, 0);
                      l_28 = ATgetArgument(r_28, 1);
                      e_28 :
                      if(match_cons(j_28, sym_Var_1))
                        {
                          k_28 = ATgetArgument(j_28, 0);
                          f_28 :
                          if(match_cons(l_28, sym_Var_1))
                            {
                              m_28 = ATgetArgument(l_28, 0);
                              {
                                ATerm t_29 = NULL,v_29 = NULL;
                                ATerm p_10;
                                p_10 = t;
                                {
                                  ATerm u_29 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_28), not_null(o_28));
                                  {
                                    t = in_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_28), (ATerm) ATinsert(ATempty, not_null(k_28)));
                                      {
                                        t = diff_0(t);
                                        {
                                          u_29 = t;
                                          if(((t_29 != NULL) && (t_29 != u_29)))
                                            _fail(u_29);
                                          else
                                            t_29 = u_29;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = p_10;
                                {
                                  ATerm w_29 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(k_28)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_28))), not_null(s_28));
                                  {
                                    t = tsubs_0(t);
                                    {
                                      w_29 = t;
                                      if(((v_29 != NULL) && (v_29 != w_29)))
                                        _fail(w_29);
                                      else
                                        v_29 = w_29;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_29), not_null(v_29));
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
ATerm HoistLet_0 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL;
  g_31 = t;
  e_31 :
  if(match_cons(g_31, sym_Seq_2))
    {
      h_31 = ATgetArgument(g_31, 0);
      i_31 = ATgetArgument(g_31, 1);
      f_31 :
      if(match_cons(i_31, sym_Let_2))
        {
          j_31 = ATgetArgument(i_31, 0);
          k_31 = ATgetArgument(i_31, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(j_31), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_31), not_null(k_31)));
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
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
  g_32 = t;
  f_32 :
  if(match_cons(g_32, sym_Cong_2))
    {
      h_32 = ATgetArgument(g_32, 0);
      i_32 = ATgetArgument(g_32, 1);
      {
        ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,l_33 = NULL,n_33 = NULL,p_33 = NULL;
        ATerm q_10;
        q_10 = t;
        {
          ATerm r_32 = NULL;
          t = not_null(i_32);
          {
            ATerm u_32 = NULL;
            t = map_1(t, new_0);
            {
              r_32 = t;
              {
                if(((o_32 != NULL) && (o_32 != r_32)))
                  _fail(r_32);
                else
                  o_32 = r_32;
                {
                  t = not_null(o_32);
                  {
                    ATerm v_32 = NULL;
                    ATerm h_1 (ATerm t)
                    {
                      ATerm s_32 = NULL;
                      ATerm t_32 = NULL;
                      t_32 = t;
                      if(((s_32 != NULL) && (s_32 != t_32)))
                        _fail(t_32);
                      else
                        s_32 = t_32;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_32));
                      return(t);
                    }
                    t = map_1(t, h_1);
                    {
                      u_32 = t;
                      {
                        if(((l_32 != NULL) && (l_32 != u_32)))
                          _fail(u_32);
                        else
                          l_32 = u_32;
                        {
                          ATerm w_32 = NULL;
                          t = new_0(t);
                          {
                            v_32 = t;
                            {
                              if(((m_32 != NULL) && (m_32 != v_32)))
                                _fail(v_32);
                              else
                                m_32 = v_32;
                              {
                                t = not_null(i_32);
                                {
                                  ATerm z_32 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    w_32 = t;
                                    {
                                      if(((p_32 != NULL) && (p_32 != w_32)))
                                        _fail(w_32);
                                      else
                                        p_32 = w_32;
                                      {
                                        t = not_null(p_32);
                                        {
                                          ATerm a_33 = NULL,k_33 = NULL;
                                          ATerm i_1 (ATerm t)
                                          {
                                            ATerm x_32 = NULL;
                                            ATerm y_32 = NULL;
                                            y_32 = t;
                                            if(((x_32 != NULL) && (x_32 != y_32)))
                                              _fail(y_32);
                                            else
                                              x_32 = y_32;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_32));
                                            return(t);
                                          }
                                          t = map_1(t, i_1);
                                          {
                                            z_32 = t;
                                            {
                                              if(((n_32 != NULL) && (n_32 != z_32)))
                                                _fail(z_32);
                                              else
                                                n_32 = z_32;
                                              {
                                                ATerm b_33 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_32), not_null(p_32));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    b_33 = t;
                                                    if(((a_33 != NULL) && (a_33 != b_33)))
                                                      _fail(b_33);
                                                    else
                                                      a_33 = b_33;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_33), not_null(i_32));
                                                  {
                                                    ATerm j_1 (ATerm t)
                                                    {
                                                      ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL;
                                                      c_33 = t;
                                                      z_31 :
                                                      if(match_cons(c_33, sym__2))
                                                        {
                                                          d_33 = ATgetArgument(c_33, 0);
                                                          g_33 = ATgetArgument(c_33, 1);
                                                          a_32 :
                                                          if(match_cons(d_33, sym__2))
                                                            {
                                                              e_33 = ATgetArgument(d_33, 0);
                                                              f_33 = ATgetArgument(d_33, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_33))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_33), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_33)))));
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
                                                    t = zip_1(t, j_1);
                                                    {
                                                      k_33 = t;
                                                      if(((q_32 != NULL) && (q_32 != k_33)))
                                                        _fail(k_33);
                                                      else
                                                        q_32 = k_33;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = q_10;
        {
          ATerm t_10;
          t_10 = t;
          {
            ATerm m_33 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_32), not_null(p_32));
            {
              t = conc_0(t);
              {
                m_33 = t;
                if(((l_33 != NULL) && (l_33 != m_33)))
                  _fail(m_33);
                else
                  l_33 = m_33;
              }
            }
          }
          t = t_10;
          {
            ATerm h_11;
            h_11 = t;
            {
              ATerm o_33 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(h_32), not_null(l_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_32))));
              {
                t = Mapp2_0(t);
                {
                  o_33 = t;
                  if(((n_33 != NULL) && (n_33 != o_33)))
                    _fail(o_33);
                  else
                    n_33 = o_33;
                }
              }
            }
            t = h_11;
            {
              ATerm q_33 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(h_32), not_null(n_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_32))));
              {
                t = Bapp2_0(t);
                {
                  q_33 = t;
                  if(((p_33 != NULL) && (p_33 != q_33)))
                    _fail(q_33);
                  else
                    p_33 = q_33;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(l_33)), not_null(m_32)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_33), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(q_32)), not_null(p_33))));
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
  ATerm p_37 = NULL,q_37 = NULL;
  p_37 = t;
  o_37 :
  if(match_cons(p_37, sym_Build_1))
    {
      q_37 = ATgetArgument(p_37, 0);
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_37 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL;
            ATerm g_38 = NULL;
            ATerm n_38 = NULL;
            t = new_0(t);
            {
              g_38 = t;
              {
                if(((e_38 != NULL) && (e_38 != g_38)))
                  _fail(g_38);
                else
                  e_38 = g_38;
                {
                  t = not_null(q_37);
                  {
                    ATerm k_1 (ATerm t)
                    {
                      ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL;
                      k_38 = t;
                      e_37 :
                      if(match_cons(k_38, sym_Anno_2))
                        {
                          l_38 = ATgetArgument(k_38, 0);
                          m_38 = ATgetArgument(k_38, 1);
                          {
                            if(((s_37 != NULL) && (s_37 != l_38)))
                              _fail(l_38);
                            else
                              s_37 = l_38;
                            {
                              if(((d_38 != NULL) && (d_38 != m_38)))
                                _fail(m_38);
                              else
                                d_38 = m_38;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_38));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, k_1);
                    {
                      n_38 = t;
                      if(((f_38 != NULL) && (f_38 != n_38)))
                        _fail(n_38);
                      else
                        f_38 = n_38;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_k_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_38)), not_null(s_37))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_38))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_38))));
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
            {
              ATerm m_11 = t;
              int n_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
                  ATerm s_38 = NULL;
                  ATerm v_38 = NULL;
                  t = new_0(t);
                  {
                    s_38 = t;
                    {
                      if(((q_38 != NULL) && (q_38 != s_38)))
                        _fail(s_38);
                      else
                        q_38 = s_38;
                      {
                        t = not_null(q_37);
                        {
                          ATerm l_1 (ATerm t)
                          {
                            ATerm t_38 = NULL,u_38 = NULL;
                            t_38 = t;
                            i_37 :
                            if(match_cons(t_38, sym_RootApp_1))
                              {
                                u_38 = ATgetArgument(t_38, 0);
                                {
                                  if(((p_38 != NULL) && (p_38 != u_38)))
                                    _fail(u_38);
                                  else
                                    p_38 = u_38;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_38));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, l_1);
                          {
                            v_38 = t;
                            if(((r_38 != NULL) && (r_38 != v_38)))
                              _fail(v_38);
                            else
                              r_38 = v_38;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_38), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_38))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_38))));
                  LocalPopChoice(n_11);
                }
              else
                {
                  t = m_11;
                  {
                    ATerm x_38 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL;
                    ATerm p_40 = NULL;
                    ATerm t_40 = NULL;
                    t = new_0(t);
                    {
                      p_40 = t;
                      {
                        if(((a_40 != NULL) && (a_40 != p_40)))
                          _fail(p_40);
                        else
                          a_40 = p_40;
                        {
                          t = not_null(q_37);
                          {
                            ATerm m_1 (ATerm t)
                            {
                              ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
                              q_40 = t;
                              m_37 :
                              if(match_cons(q_40, sym_App_2))
                                {
                                  r_40 = ATgetArgument(q_40, 0);
                                  s_40 = ATgetArgument(q_40, 1);
                                  {
                                    if(((x_38 != NULL) && (x_38 != r_40)))
                                      _fail(r_40);
                                    else
                                      x_38 = r_40;
                                    {
                                      if(((z_39 != NULL) && (z_39 != s_40)))
                                        _fail(s_40);
                                      else
                                        z_39 = s_40;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_40));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, m_1);
                            {
                              t_40 = t;
                              if(((b_40 != NULL) && (b_40 != t_40)))
                                _fail(t_40);
                              else
                                b_40 = t_40;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_40)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(x_38), not_null(z_39), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_40)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_40))));
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
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL;
  j_42 = t;
  i_42 :
  if(match_cons(j_42, sym__2))
    {
      k_42 = ATgetArgument(j_42, 0);
      l_42 = ATgetArgument(j_42, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_42)), not_null(k_42));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL;
  c_43 = t;
  q_42 :
  if(match_cons(c_43, sym__2))
    {
      d_43 = ATgetArgument(c_43, 0);
      g_43 = ATgetArgument(c_43, 1);
      r_42 :
      if(((ATgetType(d_43) == AT_LIST) && ((ATermList) d_43 != ATempty)))
        {
          e_43 = ATgetFirst((ATermList) d_43);
          f_43 = (ATerm) ATgetNext((ATermList) d_43);
          s_42 :
          if(((ATgetType(g_43) == AT_LIST) && ((ATermList) g_43 != ATempty)))
            {
              h_43 = ATgetFirst((ATermList) g_43);
              i_43 = (ATerm) ATgetNext((ATermList) g_43);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(e_43), not_null(h_43)), (ATerm) ATmakeAppl(sym__2, not_null(f_43), not_null(i_43)));
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
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  s_43 :
  if(match_cons(v_43, sym__2))
    {
      w_43 = ATgetArgument(v_43, 0);
      x_43 = ATgetArgument(v_43, 1);
      t_43 :
      if(((ATermList) w_43 == ATempty))
        {
          u_43 :
          if(((ATermList) x_43 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm w_111 (ATerm))
{
  ATerm z_43 (ATerm t)
  {
    ATerm o_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_111(t);
        LocalPopChoice(s_11);
      }
    else
      {
        t = o_11;
        {
          t = u_111(t);
          {
            t = _2(t, w_111, z_43);
            t = v_111(t);
          }
        }
      }
    return(t);
  }
  t = z_43(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm y_111 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, y_111);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL;
  z_44 = t;
  s_44 :
  if(match_cons(z_44, sym_Call_2))
    {
      a_45 = ATgetArgument(z_44, 0);
      c_45 = ATgetArgument(z_44, 1);
      t_44 :
      if(match_cons(a_45, sym_SVar_1))
        {
          b_45 = ATgetArgument(a_45, 0);
          u_44 :
          if(match_string(b_45, "Anno_Cong__"))
            {
              v_44 :
              if(((ATgetType(c_45) == AT_LIST) && ((ATermList) c_45 != ATempty)))
                {
                  d_45 = ATgetFirst((ATermList) c_45);
                  g_45 = (ATerm) ATgetNext((ATermList) c_45);
                  w_44 :
                  if(match_cons(d_45, sym_Cong_2))
                    {
                      e_45 = ATgetArgument(d_45, 0);
                      f_45 = ATgetArgument(d_45, 1);
                      x_44 :
                      if(((ATgetType(g_45) == AT_LIST) && ((ATermList) g_45 != ATempty)))
                        {
                          h_45 = ATgetFirst((ATermList) g_45);
                          i_45 = (ATerm) ATgetNext((ATermList) g_45);
                          y_44 :
                          if(((ATermList) i_45 == ATempty))
                            {
                              {
                                ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,o_47 = NULL,q_47 = NULL,s_47 = NULL;
                                ATerm w_11;
                                w_11 = t;
                                {
                                  ATerm t_45 = NULL,u_45 = NULL,d_46 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(f_45)), not_null(h_45));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      t_45 = t;
                                      o_44 :
                                      if(((ATgetType(t_45) == AT_LIST) && ((ATermList) t_45 != ATempty)))
                                        {
                                          u_45 = ATgetFirst((ATermList) t_45);
                                          d_46 = (ATerm) ATgetNext((ATermList) t_45);
                                          {
                                            ATerm g_46 = NULL;
                                            if(((m_45 != NULL) && (m_45 != u_45)))
                                              _fail(u_45);
                                            else
                                              m_45 = u_45;
                                            {
                                              if(((q_45 != NULL) && (q_45 != d_46)))
                                                _fail(d_46);
                                              else
                                                q_45 = d_46;
                                              {
                                                ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL;
                                                ATerm n_1 (ATerm t)
                                                {
                                                  ATerm e_46 = NULL;
                                                  ATerm f_46 = NULL;
                                                  f_46 = t;
                                                  if(((e_46 != NULL) && (e_46 != f_46)))
                                                    _fail(f_46);
                                                  else
                                                    e_46 = f_46;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_46));
                                                  return(t);
                                                }
                                                t = map_1(t, n_1);
                                                {
                                                  g_46 = t;
                                                  {
                                                    if(((n_45 != NULL) && (n_45 != g_46)))
                                                      _fail(g_46);
                                                    else
                                                      n_45 = g_46;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(f_45)), not_null(h_45));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          j_46 = t;
                                                          n_44 :
                                                          if(((ATgetType(j_46) == AT_LIST) && ((ATermList) j_46 != ATempty)))
                                                            {
                                                              k_46 = ATgetFirst((ATermList) j_46);
                                                              l_46 = (ATerm) ATgetNext((ATermList) j_46);
                                                              {
                                                                ATerm o_46 = NULL;
                                                                if(((o_45 != NULL) && (o_45 != k_46)))
                                                                  _fail(k_46);
                                                                else
                                                                  o_45 = k_46;
                                                                {
                                                                  if(((r_45 != NULL) && (r_45 != l_46)))
                                                                    _fail(l_46);
                                                                  else
                                                                    r_45 = l_46;
                                                                  {
                                                                    ATerm p_46 = NULL,h_47 = NULL;
                                                                    ATerm o_1 (ATerm t)
                                                                    {
                                                                      ATerm m_46 = NULL;
                                                                      ATerm n_46 = NULL;
                                                                      n_46 = t;
                                                                      if(((m_46 != NULL) && (m_46 != n_46)))
                                                                        _fail(n_46);
                                                                      else
                                                                        m_46 = n_46;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_46));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, o_1);
                                                                    {
                                                                      o_46 = t;
                                                                      {
                                                                        if(((p_45 != NULL) && (p_45 != o_46)))
                                                                          _fail(o_46);
                                                                        else
                                                                          p_45 = o_46;
                                                                        {
                                                                          ATerm q_46 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_45), not_null(r_45));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              q_46 = t;
                                                                              if(((p_46 != NULL) && (p_46 != q_46)))
                                                                                _fail(q_46);
                                                                              else
                                                                                p_46 = q_46;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(p_46), (ATerm) ATinsert(CheckATermList(not_null(f_45)), not_null(h_45)));
                                                                            {
                                                                              ATerm p_1 (ATerm t)
                                                                              {
                                                                                ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL;
                                                                                t_46 = t;
                                                                                j_44 :
                                                                                if(match_cons(t_46, sym__2))
                                                                                  {
                                                                                    u_46 = ATgetArgument(t_46, 0);
                                                                                    x_46 = ATgetArgument(t_46, 1);
                                                                                    l_44 :
                                                                                    if(match_cons(u_46, sym__2))
                                                                                      {
                                                                                        v_46 = ATgetArgument(u_46, 0);
                                                                                        w_46 = ATgetArgument(u_46, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_46))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_46), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_46)))));
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
                                                                              t = zip_1(t, p_1);
                                                                              {
                                                                                h_47 = t;
                                                                                if(((s_45 != NULL) && (s_45 != h_47)))
                                                                                  _fail(h_47);
                                                                                else
                                                                                  s_45 = h_47;
                                                                              }
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
                                t = w_11;
                                {
                                  ATerm b_12;
                                  b_12 = t;
                                  {
                                    ATerm p_47 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_45), not_null(r_45));
                                    {
                                      t = conc_0(t);
                                      {
                                        p_47 = t;
                                        if(((o_47 != NULL) && (o_47 != p_47)))
                                          _fail(p_47);
                                        else
                                          o_47 = p_47;
                                      }
                                    }
                                  }
                                  t = b_12;
                                  {
                                    ATerm c_12;
                                    c_12 = t;
                                    {
                                      ATerm r_47 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(e_45), not_null(n_45)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_45))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          r_47 = t;
                                          if(((q_47 != NULL) && (q_47 != r_47)))
                                            _fail(r_47);
                                          else
                                            q_47 = r_47;
                                        }
                                      }
                                    }
                                    t = c_12;
                                    {
                                      ATerm t_47 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(e_45), not_null(p_45)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_45))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          t_47 = t;
                                          if(((s_47 != NULL) && (s_47 != t_47)))
                                            _fail(t_47);
                                          else
                                            s_47 = t_47;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(o_47)), not_null(o_45)), not_null(m_45)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(s_45)), not_null(s_47))));
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
ATerm Prim_2 (ATerm t, ATerm w_92 (ATerm), ATerm x_92 (ATerm))
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL;
  o_48 = t;
  n_48 :
  if(match_cons(o_48, sym_Prim_2))
    {
      p_48 = ATgetArgument(o_48, 0);
      q_48 = ATgetArgument(o_48, 1);
      {
        ATerm u_48 = NULL,w_48 = NULL;
        ATerm v_48 = NULL;
        t = SSLgetAnnotations(not_null(o_48));
        {
          v_48 = t;
          if(((u_48 != NULL) && (u_48 != v_48)))
            _fail(v_48);
          else
            u_48 = v_48;
        }
        {
          t = not_null(p_48);
          {
            ATerm y_48 = NULL;
            t = w_92(t);
            {
              w_48 = t;
              {
                t = not_null(q_48);
                {
                  ATerm a_49 = NULL;
                  t = x_92(t);
                  {
                    y_48 = t;
                    {
                      ATerm b_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(w_48), not_null(y_48)), not_null(u_48));
                      {
                        b_49 = t;
                        if(((a_49 != NULL) && (a_49 != b_49)))
                          _fail(b_49);
                        else
                          a_49 = b_49;
                      }
                      t = not_null(a_49);
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
ATerm Explode_2 (ATerm t, ATerm b_89 (ATerm), ATerm c_89 (ATerm))
{
  ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL;
  n_49 = t;
  m_49 :
  if(match_cons(n_49, sym_Explode_2))
    {
      o_49 = ATgetArgument(n_49, 0);
      p_49 = ATgetArgument(n_49, 1);
      {
        ATerm t_49 = NULL,v_49 = NULL;
        ATerm u_49 = NULL;
        t = SSLgetAnnotations(not_null(n_49));
        {
          u_49 = t;
          if(((t_49 != NULL) && (t_49 != u_49)))
            _fail(u_49);
          else
            t_49 = u_49;
        }
        {
          t = not_null(o_49);
          {
            ATerm x_49 = NULL;
            t = b_89(t);
            {
              v_49 = t;
              {
                t = not_null(p_49);
                {
                  ATerm b_50 = NULL;
                  t = c_89(t);
                  {
                    x_49 = t;
                    {
                      ATerm c_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(v_49), not_null(x_49)), not_null(t_49));
                      {
                        c_50 = t;
                        if(((b_50 != NULL) && (b_50 != c_50)))
                          _fail(c_50);
                        else
                          b_50 = c_50;
                      }
                      t = not_null(b_50);
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
ATerm Op_2 (ATerm t, ATerm w_90 (ATerm), ATerm x_90 (ATerm))
{
  ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL;
  t_50 = t;
  s_50 :
  if(match_cons(t_50, sym_Op_2))
    {
      u_50 = ATgetArgument(t_50, 0);
      v_50 = ATgetArgument(t_50, 1);
      {
        ATerm z_50 = NULL,b_51 = NULL;
        ATerm a_51 = NULL;
        t = SSLgetAnnotations(not_null(t_50));
        {
          a_51 = t;
          if(((z_50 != NULL) && (z_50 != a_51)))
            _fail(a_51);
          else
            z_50 = a_51;
        }
        {
          t = not_null(u_50);
          {
            ATerm d_51 = NULL;
            t = w_90(t);
            {
              b_51 = t;
              {
                t = not_null(v_50);
                {
                  ATerm f_51 = NULL;
                  t = x_90(t);
                  {
                    d_51 = t;
                    {
                      ATerm g_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(b_51), not_null(d_51)), not_null(z_50));
                      {
                        g_51 = t;
                        if(((f_51 != NULL) && (f_51 != g_51)))
                          _fail(g_51);
                        else
                          f_51 = g_51;
                      }
                      t = not_null(f_51);
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
ATerm pat_td_1 (ATerm t, ATerm j_119 (ATerm))
{
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_119(t);
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      {
        ATerm n_12 = t;
        int u_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                t = pat_td_1(t, j_119);
                return(t);
              }
              t = fetch_1(t, r_1);
              return(t);
            }
            t = Op_2(t, _id, q_1);
            LocalPopChoice(u_12);
          }
        else
          {
            t = n_12;
            {
              ATerm v_12 = t;
              int w_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_1 (ATerm t)
                  {
                    t = pat_td_1(t, j_119);
                    return(t);
                  }
                  t = Explode_2(t, _id, s_1);
                  LocalPopChoice(w_12);
                }
              else
                {
                  t = v_12;
                  {
                    ATerm x_12 = t;
                    int y_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1(t, j_119);
                          return(t);
                        }
                        t = Explode_2(t, t_1, _id);
                        LocalPopChoice(y_12);
                      }
                    else
                      {
                        t = x_12;
                        {
                          ATerm u_1 (ATerm t)
                          {
                            ATerm v_1 (ATerm t)
                            {
                              t = pat_td_1(t, j_119);
                              return(t);
                            }
                            t = fetch_1(t, v_1);
                            return(t);
                          }
                          t = Prim_2(t, _id, u_1);
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
  ATerm e_52 = NULL,f_52 = NULL;
  e_52 = t;
  d_52 :
  if(match_cons(e_52, sym_Match_1))
    {
      f_52 = ATgetArgument(e_52, 0);
      {
        ATerm z_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_52 = NULL,i_52 = NULL,l_52 = NULL,m_52 = NULL;
            ATerm n_52 = NULL;
            ATerm t_52 = NULL;
            t = new_0(t);
            {
              n_52 = t;
              {
                if(((l_52 != NULL) && (l_52 != n_52)))
                  _fail(n_52);
                else
                  l_52 = n_52;
                {
                  t = not_null(f_52);
                  {
                    ATerm w_1 (ATerm t)
                    {
                      ATerm o_52 = NULL,q_52 = NULL,r_52 = NULL;
                      o_52 = t;
                      t_51 :
                      if(match_cons(o_52, sym_Anno_2))
                        {
                          q_52 = ATgetArgument(o_52, 0);
                          r_52 = ATgetArgument(o_52, 1);
                          {
                            if(((h_52 != NULL) && (h_52 != q_52)))
                              _fail(q_52);
                            else
                              h_52 = q_52;
                            {
                              if(((i_52 != NULL) && (i_52 != r_52)))
                                _fail(r_52);
                              else
                                i_52 = r_52;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_52)), not_null(h_52));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, w_1);
                    {
                      t_52 = t;
                      if(((m_52 != NULL) && (m_52 != t_52)))
                        _fail(t_52);
                      else
                        m_52 = t_52;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_52)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_52)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_n_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_52)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_52))))));
            LocalPopChoice(a_13);
          }
        else
          {
            t = z_12;
            {
              ATerm o_13 = t;
              int p_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL;
                  ATerm y_52 = NULL;
                  ATerm b_53 = NULL;
                  t = new_0(t);
                  {
                    y_52 = t;
                    {
                      if(((w_52 != NULL) && (w_52 != y_52)))
                        _fail(y_52);
                      else
                        w_52 = y_52;
                      {
                        t = not_null(f_52);
                        {
                          ATerm x_1 (ATerm t)
                          {
                            ATerm z_52 = NULL,a_53 = NULL;
                            z_52 = t;
                            x_51 :
                            if(match_cons(z_52, sym_RootApp_1))
                              {
                                a_53 = ATgetArgument(z_52, 0);
                                {
                                  if(((v_52 != NULL) && (v_52 != a_53)))
                                    _fail(a_53);
                                  else
                                    v_52 = a_53;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_52));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, x_1);
                          {
                            b_53 = t;
                            if(((x_52 != NULL) && (x_52 != b_53)))
                              _fail(b_53);
                            else
                              x_52 = b_53;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_52)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_52)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_52))), not_null(v_52))));
                  LocalPopChoice(p_13);
                }
              else
                {
                  t = o_13;
                  {
                    ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL;
                    ATerm h_53 = NULL;
                    ATerm l_53 = NULL;
                    t = new_0(t);
                    {
                      h_53 = t;
                      {
                        if(((f_53 != NULL) && (f_53 != h_53)))
                          _fail(h_53);
                        else
                          f_53 = h_53;
                        {
                          t = not_null(f_52);
                          {
                            ATerm y_1 (ATerm t)
                            {
                              ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL;
                              i_53 = t;
                              b_52 :
                              if(match_cons(i_53, sym_App_2))
                                {
                                  j_53 = ATgetArgument(i_53, 0);
                                  k_53 = ATgetArgument(i_53, 1);
                                  {
                                    if(((e_53 != NULL) && (e_53 != j_53)))
                                      _fail(j_53);
                                    else
                                      e_53 = j_53;
                                    {
                                      if(((d_53 != NULL) && (d_53 != k_53)))
                                        _fail(k_53);
                                      else
                                        d_53 = k_53;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_53));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, y_1);
                            {
                              l_53 = t;
                              if(((g_53 != NULL) && (g_53 != l_53)))
                                _fail(l_53);
                              else
                                g_53 = l_53;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_53)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_53)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_53))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_53)), not_null(e_53)))));
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
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL;
  e_54 = t;
  d_54 :
  if(match_cons(e_54, sym_Cong_2))
    {
      f_54 = ATgetArgument(e_54, 0);
      g_54 = ATgetArgument(e_54, 1);
      {
        ATerm j_54 = NULL;
        ATerm n_54 = NULL;
        t = not_null(g_54);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm k_54 = NULL,l_54 = NULL;
            l_54 = t;
            b_54 :
            if(match_cons(l_54, sym_Match_1))
              {
                k_54 = ATgetArgument(l_54, 0);
                t = not_null(k_54);
              }
            else
              {
                if(match_cons(l_54, sym_Id_0))
                  {
                    t = term_q_13;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, z_1);
          {
            n_54 = t;
            if(((j_54 != NULL) && (j_54 != n_54)))
              _fail(n_54);
            else
              j_54 = n_54;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(f_54), not_null(j_54)));
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
  ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL;
  v_54 = t;
  t_54 :
  if(match_cons(v_54, sym_Scope_2))
    {
      w_54 = ATgetArgument(v_54, 0);
      x_54 = ATgetArgument(v_54, 1);
      u_54 :
      if(((ATermList) w_54 == ATempty))
        {
          t = not_null(x_54);
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
  ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL;
  t_55 = t;
  g_55 :
  if(match_cons(t_55, sym_Where_1))
    {
      u_55 = ATgetArgument(t_55, 0);
      h_55 :
      if(match_cons(u_55, sym_Seq_2))
        {
          s_55 = ATgetArgument(u_55, 0);
          o_55 = ATgetArgument(u_55, 1);
          i_55 :
          if(match_cons(s_55, sym_Where_1))
            {
              n_55 = ATgetArgument(s_55, 0);
              j_55 :
              if(match_cons(o_55, sym_Seq_2))
                {
                  p_55 = ATgetArgument(o_55, 0);
                  r_55 = ATgetArgument(o_55, 1);
                  k_55 :
                  if(match_cons(p_55, sym_Build_1))
                    {
                      q_55 = ATgetArgument(p_55, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_55), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_55)), not_null(r_55))));
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
          if(match_cons(u_55, sym_Where_1))
            {
              s_55 = ATgetArgument(u_55, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(s_55));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(t_55, sym_Test_1))
        {
          u_55 = ATgetArgument(t_55, 0);
          l_55 :
          if(match_cons(u_55, sym_Test_1))
            {
              s_55 = ATgetArgument(u_55, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(s_55));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(t_55, sym_Not_1))
            {
              u_55 = ATgetArgument(t_55, 0);
              m_55 :
              if(match_cons(u_55, sym_Not_1))
                {
                  s_55 = ATgetArgument(u_55, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(s_55));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(t_55, sym_LChoice_2))
                {
                  u_55 = ATgetArgument(t_55, 0);
                  v_55 = ATgetArgument(t_55, 1);
                  {
                    if(((u_55 != NULL) && (u_55 != v_55)))
                      _fail(v_55);
                    else
                      u_55 = v_55;
                    t = not_null(u_55);
                  }
                }
              else
                {
                  if(match_cons(t_55, sym_Choice_2))
                    {
                      u_55 = ATgetArgument(t_55, 0);
                      v_55 = ATgetArgument(t_55, 1);
                      {
                        if(((u_55 != NULL) && (u_55 != v_55)))
                          _fail(v_55);
                        else
                          u_55 = v_55;
                        t = not_null(u_55);
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
  ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL;
  r_56 = t;
  n_56 :
  if(match_cons(r_56, sym_LChoice_2))
    {
      s_56 = ATgetArgument(r_56, 0);
      v_56 = ATgetArgument(r_56, 1);
      o_56 :
      if(match_cons(s_56, sym_LChoice_2))
        {
          t_56 = ATgetArgument(s_56, 0);
          u_56 = ATgetArgument(s_56, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_56), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(u_56), not_null(v_56)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(r_56, sym_Seq_2))
        {
          s_56 = ATgetArgument(r_56, 0);
          v_56 = ATgetArgument(r_56, 1);
          p_56 :
          if(match_cons(s_56, sym_Seq_2))
            {
              t_56 = ATgetArgument(s_56, 0);
              u_56 = ATgetArgument(s_56, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_56), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_56), not_null(v_56)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(r_56, sym_Choice_2))
            {
              s_56 = ATgetArgument(r_56, 0);
              v_56 = ATgetArgument(r_56, 1);
              q_56 :
              if(match_cons(s_56, sym_Choice_2))
                {
                  t_56 = ATgetArgument(s_56, 0);
                  u_56 = ATgetArgument(s_56, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(t_56), (ATerm) ATmakeAppl(sym_Choice_2, not_null(u_56), not_null(v_56)));
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
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL;
  f_58 = t;
  x_57 :
  if(match_cons(f_58, sym_InfixApp_3))
    {
      g_58 = ATgetArgument(f_58, 0);
      c_58 = ATgetArgument(f_58, 1);
      b_58 = ATgetArgument(f_58, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(c_58), (ATerm) ATmakeAppl(sym_Op_2, term_r_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_58)), not_null(g_58))));
    }
  else
    {
      if(match_cons(f_58, sym_BAM_3))
        {
          g_58 = ATgetArgument(f_58, 0);
          c_58 = ATgetArgument(f_58, 1);
          b_58 = ATgetArgument(f_58, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(b_58))), not_null(g_58)), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_58))));
        }
      else
        {
          if(match_cons(f_58, sym_AM_2))
            {
              g_58 = ATgetArgument(f_58, 0);
              c_58 = ATgetArgument(f_58, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_58), (ATerm) ATmakeAppl(sym_Match_1, not_null(c_58)));
            }
          else
            {
              if(match_cons(f_58, sym_MA_2))
                {
                  g_58 = ATgetArgument(f_58, 0);
                  c_58 = ATgetArgument(f_58, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_58)), not_null(c_58));
                }
              else
                {
                  if(match_cons(f_58, sym_BA_2))
                    {
                      g_58 = ATgetArgument(f_58, 0);
                      c_58 = ATgetArgument(f_58, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_58)), not_null(g_58));
                    }
                  else
                    {
                      if(match_cons(f_58, sym_Lets_2))
                        {
                          g_58 = ATgetArgument(f_58, 0);
                          c_58 = ATgetArgument(f_58, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(g_58), not_null(c_58));
                        }
                      else
                        {
                          if(match_cons(f_58, sym_LChoices_1))
                            {
                              g_58 = ATgetArgument(f_58, 0);
                              y_57 :
                              if(((ATgetType(g_58) == AT_LIST) && ((ATermList) g_58 != ATempty)))
                                {
                                  d_58 = ATgetFirst((ATermList) g_58);
                                  e_58 = (ATerm) ATgetNext((ATermList) g_58);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(d_58), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(e_58)));
                                }
                              else
                                {
                                  if(((ATermList) g_58 == ATempty))
                                    {
                                      t = term_r_7;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(f_58, sym_Choices_1))
                                {
                                  g_58 = ATgetArgument(f_58, 0);
                                  z_57 :
                                  if(((ATgetType(g_58) == AT_LIST) && ((ATermList) g_58 != ATempty)))
                                    {
                                      d_58 = ATgetFirst((ATermList) g_58);
                                      e_58 = (ATerm) ATgetNext((ATermList) g_58);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(d_58), (ATerm) ATmakeAppl(sym_Choices_1, not_null(e_58)));
                                    }
                                  else
                                    {
                                      if(((ATermList) g_58 == ATempty))
                                        {
                                          t = term_r_7;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(f_58, sym_Seqs_1))
                                    {
                                      g_58 = ATgetArgument(f_58, 0);
                                      a_58 :
                                      if(((ATgetType(g_58) == AT_LIST) && ((ATermList) g_58 != ATempty)))
                                        {
                                          d_58 = ATgetFirst((ATermList) g_58);
                                          e_58 = (ATerm) ATgetNext((ATermList) g_58);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_58), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(e_58)));
                                        }
                                      else
                                        {
                                          if(((ATermList) g_58 == ATempty))
                                            {
                                              t = term_s_13;
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
  ATerm q_59 = NULL,r_59 = NULL;
  q_59 = t;
  o_59 :
  if(match_cons(q_59, sym_Where_1))
    {
      r_59 = ATgetArgument(q_59, 0);
      p_59 :
      if(match_cons(r_59, sym_Fail_0))
        {
          t = term_r_7;
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
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL;
  w_59 = t;
  u_59 :
  if(match_cons(w_59, sym_LChoice_2))
    {
      x_59 = ATgetArgument(w_59, 0);
      y_59 = ATgetArgument(w_59, 1);
      v_59 :
      if(match_cons(y_59, sym_Fail_0))
        {
          t = not_null(x_59);
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
  ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL;
  e_60 = t;
  c_60 :
  if(match_cons(e_60, sym_LChoice_2))
    {
      f_60 = ATgetArgument(e_60, 0);
      g_60 = ATgetArgument(e_60, 1);
      d_60 :
      if(match_cons(f_60, sym_Fail_0))
        {
          t = not_null(g_60);
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
  ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL;
  m_60 = t;
  k_60 :
  if(match_cons(m_60, sym_Choice_2))
    {
      n_60 = ATgetArgument(m_60, 0);
      o_60 = ATgetArgument(m_60, 1);
      l_60 :
      if(match_cons(o_60, sym_Fail_0))
        {
          t = not_null(n_60);
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
  ATerm u_60 = NULL,v_60 = NULL,w_60 = NULL;
  u_60 = t;
  s_60 :
  if(match_cons(u_60, sym_Choice_2))
    {
      v_60 = ATgetArgument(u_60, 0);
      w_60 = ATgetArgument(u_60, 1);
      t_60 :
      if(match_cons(v_60, sym_Fail_0))
        {
          t = not_null(w_60);
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
  ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL;
  d_61 = t;
  c_61 :
  if(match_cons(d_61, sym_Cong_2))
    {
      e_61 = ATgetArgument(d_61, 0);
      f_61 = ATgetArgument(d_61, 1);
      {
        t = not_null(f_61);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm i_61 = NULL;
            i_61 = t;
            b_61 :
            if(!(match_cons(i_61, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, a_2);
        }
        t = term_r_7;
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
  ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL;
  n_61 = t;
  l_61 :
  if(match_cons(n_61, sym_Path_2))
    {
      o_61 = ATgetArgument(n_61, 0);
      p_61 = ATgetArgument(n_61, 1);
      m_61 :
      if(match_cons(p_61, sym_Fail_0))
        {
          t = term_r_7;
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
  ATerm v_61 = NULL,w_61 = NULL;
  v_61 = t;
  t_61 :
  if(match_cons(v_61, sym_One_1))
    {
      w_61 = ATgetArgument(v_61, 0);
      u_61 :
      if(match_cons(w_61, sym_Fail_0))
        {
          t = term_r_7;
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
  ATerm b_62 = NULL,c_62 = NULL;
  b_62 = t;
  z_61 :
  if(match_cons(b_62, sym_Some_1))
    {
      c_62 = ATgetArgument(b_62, 0);
      a_62 :
      if(match_cons(c_62, sym_Fail_0))
        {
          t = term_r_7;
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
  ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL;
  h_62 = t;
  f_62 :
  if(match_cons(h_62, sym_Rec_2))
    {
      i_62 = ATgetArgument(h_62, 0);
      j_62 = ATgetArgument(h_62, 1);
      g_62 :
      if(match_cons(j_62, sym_Fail_0))
        {
          t = term_r_7;
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
  ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL;
  p_62 = t;
  n_62 :
  if(match_cons(p_62, sym_Scope_2))
    {
      q_62 = ATgetArgument(p_62, 0);
      r_62 = ATgetArgument(p_62, 1);
      o_62 :
      if(match_cons(r_62, sym_Fail_0))
        {
          t = term_r_7;
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
  ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL;
  x_62 = t;
  v_62 :
  if(match_cons(x_62, sym_Seq_2))
    {
      y_62 = ATgetArgument(x_62, 0);
      z_62 = ATgetArgument(x_62, 1);
      w_62 :
      if(match_cons(y_62, sym_Fail_0))
        {
          t = term_r_7;
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
  ATerm j_63 = NULL,k_63 = NULL;
  j_63 = t;
  h_63 :
  if(match_cons(j_63, sym_Not_1))
    {
      k_63 = ATgetArgument(j_63, 0);
      i_63 :
      if(match_cons(k_63, sym_Fail_0))
        {
          t = term_s_13;
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
  ATerm p_63 = NULL,q_63 = NULL;
  p_63 = t;
  n_63 :
  if(match_cons(p_63, sym_Test_1))
    {
      q_63 = ATgetArgument(p_63, 0);
      o_63 :
      if(match_cons(q_63, sym_Fail_0))
        {
          t = term_r_7;
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
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      {
        ATerm v_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(w_13);
          }
        else
          {
            t = v_13;
            {
              ATerm h_14 = t;
              int i_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(i_14);
                }
              else
                {
                  t = h_14;
                  {
                    ATerm j_14 = t;
                    int k_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(k_14);
                      }
                    else
                      {
                        t = j_14;
                        {
                          ATerm l_14 = t;
                          int m_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(m_14);
                            }
                          else
                            {
                              t = l_14;
                              {
                                ATerm n_14 = t;
                                int o_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(o_14);
                                  }
                                else
                                  {
                                    t = n_14;
                                    {
                                      ATerm q_14 = t;
                                      int f_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(f_15);
                                        }
                                      else
                                        {
                                          t = q_14;
                                          {
                                            ATerm g_15 = t;
                                            int m_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(m_15);
                                              }
                                            else
                                              {
                                                t = g_15;
                                                {
                                                  ATerm n_15 = t;
                                                  int p_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      LocalPopChoice(p_15);
                                                    }
                                                  else
                                                    {
                                                      t = n_15;
                                                      {
                                                        ATerm q_15 = t;
                                                        int r_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            LocalPopChoice(r_15);
                                                          }
                                                        else
                                                          {
                                                            t = q_15;
                                                            {
                                                              ATerm s_15 = t;
                                                              int x_15 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(x_15);
                                                                }
                                                              else
                                                                {
                                                                  t = s_15;
                                                                  {
                                                                    ATerm y_15 = t;
                                                                    int z_15 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(z_15);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = y_15;
                                                                        {
                                                                          ATerm o_16 = t;
                                                                          int p_16 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(p_16);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = o_16;
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
  ATerm v_63 = NULL,w_63 = NULL;
  v_63 = t;
  t_63 :
  if(match_cons(v_63, sym_Match_1))
    {
      w_63 = ATgetArgument(v_63, 0);
      u_63 :
      if(match_cons(w_63, sym_Wld_0))
        {
          t = term_s_13;
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
  ATerm f_64 = NULL,g_64 = NULL;
  f_64 = t;
  z_63 :
  if(match_cons(f_64, sym_Where_1))
    {
      g_64 = ATgetArgument(f_64, 0);
      a_64 :
      if(match_cons(g_64, sym_Id_0))
        {
          t = term_s_13;
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
  ATerm l_64 = NULL,m_64 = NULL;
  l_64 = t;
  j_64 :
  if(match_cons(l_64, sym_All_1))
    {
      m_64 = ATgetArgument(l_64, 0);
      k_64 :
      if(match_cons(m_64, sym_Id_0))
        {
          t = term_s_13;
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
  ATerm t_64 = NULL,u_64 = NULL,z_64 = NULL;
  t_64 = t;
  p_64 :
  if(match_cons(t_64, sym_Rec_2))
    {
      u_64 = ATgetArgument(t_64, 0);
      z_64 = ATgetArgument(t_64, 1);
      s_64 :
      if(match_cons(z_64, sym_Id_0))
        {
          t = term_s_13;
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
  ATerm j_65 = NULL,k_65 = NULL,l_65 = NULL;
  j_65 = t;
  h_65 :
  if(match_cons(j_65, sym_Scope_2))
    {
      k_65 = ATgetArgument(j_65, 0);
      l_65 = ATgetArgument(j_65, 1);
      i_65 :
      if(match_cons(l_65, sym_Id_0))
        {
          t = term_s_13;
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
  ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL;
  t_65 = t;
  p_65 :
  if(match_cons(t_65, sym_LChoice_2))
    {
      u_65 = ATgetArgument(t_65, 0);
      v_65 = ATgetArgument(t_65, 1);
      q_65 :
      if(match_cons(u_65, sym_Id_0))
        {
          t = term_s_13;
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
  ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL;
  b_66 = t;
  z_65 :
  if(match_cons(b_66, sym_Seq_2))
    {
      c_66 = ATgetArgument(b_66, 0);
      d_66 = ATgetArgument(b_66, 1);
      a_66 :
      if(match_cons(d_66, sym_Id_0))
        {
          t = not_null(c_66);
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
  ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL;
  q_66 = t;
  k_66 :
  if(match_cons(q_66, sym_Seq_2))
    {
      r_66 = ATgetArgument(q_66, 0);
      s_66 = ATgetArgument(q_66, 1);
      l_66 :
      if(match_cons(r_66, sym_Id_0))
        {
          t = not_null(s_66);
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
  ATerm c_67 = NULL,d_67 = NULL;
  c_67 = t;
  a_67 :
  if(match_cons(c_67, sym_Not_1))
    {
      d_67 = ATgetArgument(c_67, 0);
      b_67 :
      if(match_cons(d_67, sym_Id_0))
        {
          t = term_r_7;
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
  ATerm k_67 = NULL,l_67 = NULL;
  k_67 = t;
  i_67 :
  if(match_cons(k_67, sym_Test_1))
    {
      l_67 = ATgetArgument(k_67, 0);
      j_67 :
      if(match_cons(l_67, sym_Id_0))
        {
          t = term_s_13;
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
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(r_16);
    }
  else
    {
      t = q_16;
      {
        ATerm s_16 = t;
        int t_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(t_16);
          }
        else
          {
            t = s_16;
            {
              ATerm u_16 = t;
              int v_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(v_16);
                }
              else
                {
                  t = u_16;
                  {
                    ATerm w_16 = t;
                    int e_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        LocalPopChoice(e_17);
                      }
                    else
                      {
                        t = w_16;
                        {
                          ATerm f_17 = t;
                          int g_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(g_17);
                            }
                          else
                            {
                              t = f_17;
                              {
                                ATerm j_17 = t;
                                int k_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(k_17);
                                  }
                                else
                                  {
                                    t = j_17;
                                    {
                                      ATerm n_17 = t;
                                      int p_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(p_17);
                                        }
                                      else
                                        {
                                          t = n_17;
                                          {
                                            ATerm q_17 = t;
                                            int r_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(r_17);
                                              }
                                            else
                                              {
                                                t = q_17;
                                                {
                                                  ATerm d_18 = t;
                                                  int e_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(e_18);
                                                    }
                                                  else
                                                    {
                                                      t = d_18;
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
  ATerm f_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(g_18);
    }
  else
    {
      t = f_18;
      {
        ATerm h_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(i_18);
          }
        else
          {
            t = h_18;
            {
              ATerm q_18 = t;
              int r_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(r_18);
                }
              else
                {
                  t = q_18;
                  {
                    ATerm s_18 = t;
                    int v_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(v_18);
                      }
                    else
                      {
                        t = s_18;
                        {
                          ATerm w_18 = t;
                          int x_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(x_18);
                            }
                          else
                            {
                              t = w_18;
                              {
                                ATerm b_19 = t;
                                int c_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(c_19);
                                  }
                                else
                                  {
                                    t = b_19;
                                    {
                                      ATerm d_19 = t;
                                      int l_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(l_19);
                                        }
                                      else
                                        {
                                          t = d_19;
                                          {
                                            ATerm m_19 = t;
                                            int n_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(n_19);
                                              }
                                            else
                                              {
                                                t = m_19;
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
ATerm Optimize_0 (ATerm t)
{
  ATerm o_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0(t);
      LocalPopChoice(z_19);
    }
  else
    {
      t = o_19;
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HoistLet_0(t);
            LocalPopChoice(c_20);
          }
        else
          {
            t = b_20;
            {
              ATerm d_20 = t;
              int e_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CopyPropagation_0(t);
                  LocalPopChoice(e_20);
                }
              else
                {
                  t = d_20;
                  {
                    ATerm f_20 = t;
                    int h_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FuseScope_0(t);
                        LocalPopChoice(h_20);
                      }
                    else
                      {
                        t = f_20;
                        {
                          ATerm m_20 = t;
                          int n_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = NoEffect_0(t);
                              LocalPopChoice(n_20);
                            }
                          else
                            {
                              t = m_20;
                              {
                                ATerm o_20 = t;
                                int q_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildMatch_0(t);
                                    LocalPopChoice(q_20);
                                  }
                                else
                                  {
                                    t = o_20;
                                    {
                                      ATerm r_20 = t;
                                      int s_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Inline_0(t);
                                          LocalPopChoice(s_20);
                                        }
                                      else
                                        {
                                          t = r_20;
                                          t = InlineDont_0(t);
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_2 (ATerm t, ATerm g_101 (ATerm), ATerm h_101 (ATerm))
{
  ATerm n_67 (ATerm t)
  {
    ATerm y_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_101(t);
        t = n_67(t);
        LocalPopChoice(a_21);
      }
    else
      {
        t = y_20;
        t = h_101(t);
      }
    return(t);
  }
  t = n_67(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm j_101 (ATerm))
{
  t = repeat_2(t, j_101, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm p_114 (ATerm))
{
  ATerm o_67 (ATerm t)
  {
    t = p_114(t);
    {
      t = _all(t, o_67);
      t = p_114(t);
    }
    return(t);
  }
  t = o_67(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm c_2 (ATerm t)
    {
      ATerm b_21 = t;
      int c_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Optimize_0(t);
          LocalPopChoice(c_21);
        }
      else
        {
          t = b_21;
          t = WidenScope_0(t);
        }
      return(t);
    }
    t = repeat_1(t, c_2);
    return(t);
  }
  t = downup_1(t, b_2);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm))
{
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL;
  w_67 = t;
  v_67 :
  if(match_cons(w_67, sym_SDef_3))
    {
      x_67 = ATgetArgument(w_67, 0);
      y_67 = ATgetArgument(w_67, 1);
      z_67 = ATgetArgument(w_67, 2);
      {
        ATerm e_68 = NULL,g_68 = NULL;
        ATerm f_68 = NULL;
        t = SSLgetAnnotations(not_null(w_67));
        {
          f_68 = t;
          if(((e_68 != NULL) && (e_68 != f_68)))
            _fail(f_68);
          else
            e_68 = f_68;
        }
        {
          t = not_null(x_67);
          {
            ATerm i_68 = NULL;
            t = t_91(t);
            {
              g_68 = t;
              {
                t = not_null(y_67);
                {
                  ATerm k_68 = NULL;
                  t = u_91(t);
                  {
                    i_68 = t;
                    {
                      t = not_null(z_67);
                      {
                        ATerm m_68 = NULL;
                        t = v_91(t);
                        {
                          k_68 = t;
                          {
                            ATerm n_68 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(g_68), not_null(i_68), not_null(k_68)), not_null(e_68));
                            {
                              n_68 = t;
                              if(((m_68 != NULL) && (m_68 != n_68)))
                                _fail(n_68);
                              else
                                m_68 = n_68;
                            }
                            t = not_null(m_68);
                          }
                        }
                      }
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
ATerm Strategies_1 (ATerm t, ATerm g_90 (ATerm))
{
  ATerm z_68 = NULL,a_69 = NULL;
  z_68 = t;
  y_68 :
  if(match_cons(z_68, sym_Strategies_1))
    {
      a_69 = ATgetArgument(z_68, 0);
      {
        ATerm d_69 = NULL,f_69 = NULL;
        ATerm e_69 = NULL;
        t = SSLgetAnnotations(not_null(z_68));
        {
          e_69 = t;
          if(((d_69 != NULL) && (d_69 != e_69)))
            _fail(e_69);
          else
            d_69 = e_69;
        }
        {
          t = not_null(a_69);
          {
            ATerm h_69 = NULL;
            t = g_90(t);
            {
              f_69 = t;
              {
                ATerm i_69 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(f_69)), not_null(d_69));
                {
                  i_69 = t;
                  if(((h_69 != NULL) && (h_69 != i_69)))
                    _fail(i_69);
                  else
                    h_69 = i_69;
                }
                t = not_null(h_69);
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
ATerm Specification_1 (ATerm t, ATerm i_90 (ATerm))
{
  ATerm s_69 = NULL,t_69 = NULL;
  s_69 = t;
  r_69 :
  if(match_cons(s_69, sym_Specification_1))
    {
      t_69 = ATgetArgument(s_69, 0);
      {
        ATerm w_69 = NULL,y_69 = NULL;
        ATerm x_69 = NULL;
        t = SSLgetAnnotations(not_null(s_69));
        {
          x_69 = t;
          if(((w_69 != NULL) && (w_69 != x_69)))
            _fail(x_69);
          else
            w_69 = x_69;
        }
        {
          t = not_null(t_69);
          {
            ATerm a_70 = NULL;
            t = i_90(t);
            {
              y_69 = t;
              {
                ATerm b_70 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(y_69)), not_null(w_69));
                {
                  b_70 = t;
                  if(((a_70 != NULL) && (a_70 != b_70)))
                    _fail(b_70);
                  else
                    a_70 = b_70;
                }
                t = not_null(a_70);
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
ATerm apply_to_bodies_1 (ATerm t, ATerm m_119 (ATerm))
{
  ATerm d_2 (ATerm t)
  {
    ATerm e_2 (ATerm t)
    {
      ATerm f_2 (ATerm t)
      {
        ATerm g_2 (ATerm t)
        {
          ATerm h_2 (ATerm t)
          {
            t = SDef_3(t, _id, _id, m_119);
            return(t);
          }
          t = map_1(t, h_2);
          return(t);
        }
        t = Strategies_1(t, g_2);
        return(t);
      }
      t = Cons_2(t, f_2, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, e_2);
    return(t);
  }
  t = Specification_1(t, d_2);
  return(t);
}
ATerm _2 (ATerm t, ATerm q_80 (ATerm), ATerm r_80 (ATerm))
{
  ATerm z_70 = NULL,a_71 = NULL,b_71 = NULL;
  z_70 = t;
  x_70 :
  if(match_cons(z_70, sym__2))
    {
      a_71 = ATgetArgument(z_70, 0);
      b_71 = ATgetArgument(z_70, 1);
      {
        ATerm k_71 = NULL,m_71 = NULL;
        ATerm l_71 = NULL;
        t = SSLgetAnnotations(not_null(z_70));
        {
          l_71 = t;
          if(((k_71 != NULL) && (k_71 != l_71)))
            _fail(l_71);
          else
            k_71 = l_71;
        }
        {
          t = not_null(a_71);
          {
            ATerm o_71 = NULL;
            t = q_80(t);
            {
              m_71 = t;
              {
                t = not_null(b_71);
                {
                  ATerm q_71 = NULL;
                  t = r_80(t);
                  {
                    o_71 = t;
                    {
                      ATerm r_71 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(m_71), not_null(o_71)), not_null(k_71));
                      {
                        r_71 = t;
                        if(((q_71 != NULL) && (q_71 != r_71)))
                          _fail(r_71);
                        else
                          q_71 = r_71;
                      }
                      t = not_null(q_71);
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
  ATerm a_72 = NULL;
  ATerm d_21;
  d_21 = t;
  {
    ATerm i_2 (ATerm t)
    {
      ATerm b_72 = NULL,c_72 = NULL;
      b_72 = t;
      z_71 :
      if(match_cons(b_72, sym_Program_1))
        {
          c_72 = ATgetArgument(b_72, 0);
          if(((a_72 != NULL) && (a_72 != c_72)))
            _fail(c_72);
          else
            a_72 = c_72;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, i_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_21), not_null(a_72)), term_h_21));
      {
        t = printnl_0(t);
        {
          t = term_j_21;
          t = exit_0(t);
        }
      }
    }
  }
  t = d_21;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm a_73 = NULL,b_73 = NULL,c_73 = NULL;
  a_73 = t;
  z_72 :
  if(match_cons(a_73, sym__2))
    {
      b_73 = ATgetArgument(a_73, 0);
      c_73 = ATgetArgument(a_73, 1);
      {
        ATerm k_21;
        k_21 = t;
        t = SSL_printnl(not_null(b_73), not_null(c_73));
        t = k_21;
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
  ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL;
  i_73 = t;
  h_73 :
  if(match_cons(i_73, sym__2))
    {
      j_73 = ATgetArgument(i_73, 0);
      k_73 = ATgetArgument(i_73, 1);
      {
        t = not_null(j_73);
        {
          ATerm j_2 (ATerm t)
          {
            t = not_null(k_73);
            return(t);
          }
          t = at_end_1(t, j_2);
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
ATerm debug_1 (ATerm t, ATerm u_98 (ATerm))
{
  ATerm p_21;
  p_21 = t;
  {
    ATerm v_73 = NULL,g_74 = NULL;
    ATerm q_21;
    q_21 = t;
    {
      ATerm f_74 = NULL;
      t = u_98(t);
      {
        f_74 = t;
        if(((v_73 != NULL) && (v_73 != f_74)))
          _fail(f_74);
        else
          v_73 = f_74;
      }
    }
    t = q_21;
    {
      ATerm m_74 = NULL;
      m_74 = t;
      if(((g_74 != NULL) && (g_74 != m_74)))
        _fail(m_74);
      else
        g_74 = m_74;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_74)), not_null(v_73)));
        t = printnl_0(t);
      }
    }
  }
  t = p_21;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm z_74 = NULL;
  z_74 = t;
  t = SSL_is_string(not_null(z_74));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, k_2);
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
            {
              ATerm i_75 = NULL,j_75 = NULL,k_75 = NULL;
              i_75 = t;
              h_75 :
              if(match_cons(i_75, sym_Path_1))
                {
                  j_75 = ATgetArgument(i_75, 0);
                  t = not_null(j_75);
                }
              else
                {
                  if(match_cons(i_75, sym_Var_1))
                    {
                      j_75 = ATgetArgument(i_75, 0);
                      {
                        t = not_null(j_75);
                        {
                          ATerm c_22 = t;
                          int d_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(d_22);
                            }
                          else
                            {
                              t = c_22;
                              {
                                ATerm l_2 (ATerm t)
                                {
                                  t = term_e_22;
                                  return(t);
                                }
                                t = debug_1(t, l_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(i_75, sym_Prefix_2))
                        {
                          j_75 = ATgetArgument(i_75, 0);
                          k_75 = ATgetArgument(i_75, 1);
                          {
                            ATerm p_75 = NULL,r_75 = NULL;
                            ATerm f_22;
                            f_22 = t;
                            {
                              ATerm q_75 = NULL;
                              t = not_null(j_75);
                              {
                                t = eval_config_0(t);
                                {
                                  q_75 = t;
                                  if(((p_75 != NULL) && (p_75 != q_75)))
                                    _fail(q_75);
                                  else
                                    p_75 = q_75;
                                }
                              }
                            }
                            t = f_22;
                            {
                              ATerm s_75 = NULL;
                              t = not_null(k_75);
                              {
                                t = eval_config_0(t);
                                {
                                  s_75 = t;
                                  if(((r_75 != NULL) && (r_75 != s_75)))
                                    _fail(s_75);
                                  else
                                    r_75 = s_75;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_75), not_null(r_75));
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
  ATerm a_76 = NULL;
  a_76 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_g_22, not_null(a_76));
    {
      t = table_get_0(t);
      {
        ATerm m_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm i_22;
            i_22 = t;
            {
              ATerm c_76 = NULL;
              ATerm d_76 = NULL;
              d_76 = t;
              if(((c_76 != NULL) && (c_76 != d_76)))
                _fail(d_76);
              else
                c_76 = d_76;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_g_22, not_null(a_76), not_null(c_76));
                t = table_put_0(t);
              }
            }
            t = i_22;
          }
          return(t);
        }
        t = try_1(t, m_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm e_96 (ATerm))
{
  ATerm n_2 (ATerm t)
  {
    ATerm j_22;
    j_22 = t;
    {
      ATerm h_76 = NULL;
      ATerm i_76 = NULL;
      t = term_l_22;
      {
        t = get_config_0(t);
        {
          i_76 = t;
          if(((h_76 != NULL) && (h_76 != i_76)))
            _fail(i_76);
          else
            h_76 = i_76;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_76), term_t_22);
        t = geq_0(t);
      }
    }
    t = j_22;
    t = e_96(t);
    return(t);
  }
  t = try_1(t, n_2);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATinsert(ATempty, term_u_22));
  {
    t = printnl_0(t);
    {
      t = term_j_21;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm l_76 = NULL;
  l_76 = t;
  t = SSL_TicksToSeconds(not_null(l_76));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL;
  q_76 = t;
  p_76 :
  if(match_cons(q_76, sym__2))
    {
      r_76 = ATgetArgument(q_76, 0);
      s_76 = ATgetArgument(q_76, 1);
      {
        ATerm v_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(r_76), not_null(s_76));
            LocalPopChoice(z_22);
          }
        else
          {
            t = v_22;
            t = SSL_addr(not_null(r_76), not_null(s_76));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm m_106 (ATerm), ATerm n_106 (ATerm))
{
  ATerm f_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_106(t);
      LocalPopChoice(l_23);
    }
  else
    {
      t = f_23;
      {
        ATerm z_76 = NULL,a_77 = NULL,b_77 = NULL;
        z_76 = t;
        y_76 :
        if(((ATgetType(z_76) == AT_LIST) && ((ATermList) z_76 != ATempty)))
          {
            a_77 = ATgetFirst((ATermList) z_76);
            b_77 = (ATerm) ATgetNext((ATermList) z_76);
            {
              ATerm e_77 = NULL;
              ATerm f_77 = NULL;
              t = not_null(b_77);
              {
                t = foldr_2(t, m_106, n_106);
                {
                  f_77 = t;
                  if(((e_77 != NULL) && (e_77 != f_77)))
                    _fail(f_77);
                  else
                    e_77 = f_77;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_77), not_null(e_77));
                t = n_106(t);
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
ATerm crush_2 (ATerm t, ATerm a_108 (ATerm), ATerm b_108 (ATerm))
{
  ATerm m_77 = NULL;
  ATerm o_77 = NULL;
  m_77 = t;
  {
    ATerm p_77 = NULL;
    ATerm r_77 = NULL,s_77 = NULL,t_77 = NULL;
    t = not_null(m_77);
    {
      p_77 = t;
      {
        t = SSL_explode_term(not_null(p_77));
        {
          r_77 = t;
          l_77 :
          if(match_cons(r_77, sym__2))
            {
              s_77 = ATgetArgument(r_77, 0);
              t_77 = ATgetArgument(r_77, 1);
              if(((o_77 != NULL) && (o_77 != t_77)))
                _fail(t_77);
              else
                o_77 = t_77;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(o_77);
      t = foldr_2(t, a_108, b_108);
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
    ATerm o_2 (ATerm t)
    {
      t = term_m_23;
      return(t);
    }
    t = crush_2(t, o_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL;
  z_77 = t;
  y_77 :
  if(match_cons(z_77, sym__2))
    {
      a_78 = ATgetArgument(z_77, 0);
      b_78 = ATgetArgument(z_77, 1);
      {
        ATerm n_23;
        n_23 = t;
        {
          ATerm o_23 = t;
          int p_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(a_78), not_null(b_78));
              LocalPopChoice(p_23);
            }
          else
            {
              t = o_23;
              t = SSL_gtr(not_null(a_78), not_null(b_78));
            }
        }
        t = n_23;
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
  ATerm h_78 = NULL;
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_78 = NULL,j_78 = NULL,k_78 = NULL;
      i_78 = t;
      g_78 :
      if(match_cons(i_78, sym__2))
        {
          j_78 = ATgetArgument(i_78, 0);
          k_78 = ATgetArgument(i_78, 1);
          {
            if(((h_78 != NULL) && (h_78 != j_78)))
              _fail(j_78);
            else
              h_78 = j_78;
            if(((h_78 != NULL) && (h_78 != k_78)))
              _fail(k_78);
            else
              h_78 = k_78;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm d_96 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    ATerm z_23;
    z_23 = t;
    {
      ATerm n_78 = NULL;
      ATerm o_78 = NULL;
      t = term_l_22;
      {
        t = get_config_0(t);
        {
          o_78 = t;
          if(((n_78 != NULL) && (n_78 != o_78)))
            _fail(o_78);
          else
            n_78 = o_78;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_78), term_j_21);
        t = geq_0(t);
      }
    }
    t = z_23;
    t = d_96(t);
    return(t);
  }
  t = try_1(t, p_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm s_78 = NULL,u_78 = NULL;
    ATerm b_24;
    b_24 = t;
    {
      ATerm t_78 = NULL;
      t = run_time_0(t);
      {
        t_78 = t;
        if(((s_78 != NULL) && (s_78 != t_78)))
          _fail(t_78);
        else
          s_78 = t_78;
      }
    }
    t = b_24;
    {
      ATerm v_78 = NULL;
      t = term_d_24;
      {
        t = get_config_0(t);
        {
          v_78 = t;
          if(((u_78 != NULL) && (u_78 != v_78)))
            _fail(v_78);
          else
            u_78 = v_78;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_24), not_null(s_78)), term_e_24), not_null(u_78)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, q_2);
  {
    t = term_m_23;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL;
  a_79 = t;
  z_78 :
  if(match_cons(a_79, sym__2))
    {
      b_79 = ATgetArgument(a_79, 0);
      c_79 = ATgetArgument(a_79, 1);
      t = SSL_WriteToTextFile(not_null(b_79), not_null(c_79));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL;
  i_79 = t;
  h_79 :
  if(match_cons(i_79, sym__2))
    {
      j_79 = ATgetArgument(i_79, 0);
      k_79 = ATgetArgument(i_79, 1);
      t = SSL_WriteToBinaryFile(not_null(j_79), not_null(k_79));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm s_79 = NULL;
  ATerm k_24;
  k_24 = t;
  {
    ATerm r_2 (ATerm t)
    {
      ATerm m_24 = t;
      int n_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_2 (ATerm t)
          {
            ATerm t_79 = NULL,u_79 = NULL;
            t_79 = t;
            p_79 :
            if(match_cons(t_79, sym_Output_1))
              {
                u_79 = ATgetArgument(t_79, 0);
                if(((s_79 != NULL) && (s_79 != u_79)))
                  _fail(u_79);
                else
                  s_79 = u_79;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, s_2);
          LocalPopChoice(n_24);
        }
      else
        {
          t = m_24;
          {
            ATerm v_79 = NULL;
            t = term_o_24;
            {
              v_79 = t;
              if(((s_79 != NULL) && (s_79 != v_79)))
                _fail(v_79);
              else
                s_79 = v_79;
            }
          }
        }
      return(t);
    }
    t = _2(t, r_2, _id);
  }
  t = k_24;
  {
    ATerm t_2 (ATerm t)
    {
      ATerm u_2 (ATerm t)
      {
        t = not_null(s_79);
        return(t);
      }
      t = split_2(t, u_2, _id);
      return(t);
    }
    t = _2(t, _id, t_2);
    {
      ATerm q_24 = t;
      int u_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_2 (ATerm t)
          {
            ATerm w_2 (ATerm t)
            {
              ATerm w_79 = NULL;
              w_79 = t;
              r_79 :
              if(!(match_cons(w_79, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, w_2);
            return(t);
          }
          t = _2(t, v_2, WriteToBinaryFile_0);
          LocalPopChoice(u_24);
        }
      else
        {
          t = q_24;
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
ATerm apply_strategy_1 (ATerm t, ATerm e_98 (ATerm))
{
  ATerm c_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL;
  ATerm v_24;
  v_24 = t;
  t = dtime_0(t);
  t = v_24;
  {
    t = e_98(t);
    {
      ATerm x_24;
      x_24 = t;
      {
        ATerm d_80 = NULL;
        t = dtime_0(t);
        {
          d_80 = t;
          if(((c_80 != NULL) && (c_80 != d_80)))
            _fail(d_80);
          else
            c_80 = d_80;
        }
      }
      t = x_24;
      {
        e_80 = t;
        b_80 :
        if(match_cons(e_80, sym__2))
          {
            f_80 = ATgetArgument(e_80, 0);
            g_80 = ATgetArgument(e_80, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_80)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(c_80))), not_null(g_80));
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
  ATerm m_80 = NULL;
  m_80 = t;
  t = SSL_ReadFromFile(not_null(m_80));
  return(t);
}
ATerm split_2 (ATerm t, ATerm g_113 (ATerm), ATerm h_113 (ATerm))
{
  ATerm t_80 = NULL,v_80 = NULL;
  ATerm y_24;
  y_24 = t;
  {
    ATerm u_80 = NULL;
    t = g_113(t);
    {
      u_80 = t;
      if(((t_80 != NULL) && (t_80 != u_80)))
        _fail(u_80);
      else
        t_80 = u_80;
    }
  }
  t = y_24;
  {
    ATerm w_80 = NULL;
    t = h_113(t);
    {
      w_80 = t;
      if(((v_80 != NULL) && (v_80 != w_80)))
        _fail(w_80);
      else
        v_80 = w_80;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_80), not_null(v_80));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm c_81 = NULL;
  ATerm a_25;
  a_25 = t;
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_2 (ATerm t)
        {
          ATerm d_81 = NULL,e_81 = NULL;
          d_81 = t;
          a_81 :
          if(match_cons(d_81, sym_Input_1))
            {
              e_81 = ATgetArgument(d_81, 0);
              if(((c_81 != NULL) && (c_81 != e_81)))
                _fail(e_81);
              else
                c_81 = e_81;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, x_2);
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        {
          ATerm f_81 = NULL;
          t = term_i_25;
          {
            f_81 = t;
            if(((c_81 != NULL) && (c_81 != f_81)))
              _fail(f_81);
            else
              c_81 = f_81;
          }
        }
      }
  }
  t = a_25;
  {
    ATerm y_2 (ATerm t)
    {
      t = not_null(c_81);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm m_81 = NULL;
  m_81 = t;
  l_81 :
  if(match_cons(m_81, sym_Version_0))
    {
      ATerm o_81 = NULL,q_81 = NULL;
      ATerm j_25;
      j_25 = t;
      {
        ATerm p_81 = NULL;
        t = SSLgetAnnotations(not_null(m_81));
        {
          p_81 = t;
          if(((o_81 != NULL) && (o_81 != p_81)))
            _fail(p_81);
          else
            o_81 = p_81;
        }
      }
      t = j_25;
      {
        ATerm r_81 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(o_81));
        {
          r_81 = t;
          if(((q_81 != NULL) && (q_81 != r_81)))
            _fail(r_81);
          else
            q_81 = r_81;
        }
        t = not_null(q_81);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_98 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        {
          ATerm n_25 = t;
          int o_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(o_25);
            }
          else
            {
              t = n_25;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, z_2);
  t = c_98(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_81 = NULL;
  w_81 = t;
  t = SSL_table_create(not_null(w_81));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_82 = NULL;
  a_82 = t;
  {
    ATerm p_25;
    p_25 = t;
    {
      t = term_q_25;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_25, term_r_25, not_null(a_82));
          t = table_put_0(t);
        }
      }
    }
    t = p_25;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm g_82 = NULL;
  g_82 = t;
  t = SSL_string_to_int(not_null(g_82));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm o_82 = NULL,p_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL;
  o_82 = t;
  m_82 :
  if(match_string(o_82, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(o_82) == AT_LIST) && ((ATermList) o_82 != ATempty)))
        {
          p_82 = ATgetFirst((ATermList) o_82);
          q_82 = (ATerm) ATgetNext((ATermList) o_82);
          n_82 :
          if(((ATgetType(q_82) == AT_LIST) && ((ATermList) q_82 != ATempty)))
            {
              r_82 = ATgetFirst((ATermList) q_82);
              s_82 = (ATerm) ATgetNext((ATermList) q_82);
              {
                ATerm w_82 = NULL;
                ATerm s_25;
                s_25 = t;
                {
                  t = not_null(p_82);
                  t = k_0(t);
                }
                t = s_25;
                {
                  ATerm x_82 = NULL;
                  t = not_null(r_82);
                  {
                    t = l_0(t);
                    {
                      x_82 = t;
                      if(((w_82 != NULL) && (w_82 != x_82)))
                        _fail(x_82);
                      else
                        w_82 = x_82;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_82)), not_null(w_82));
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
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_3 (ATerm t)
      {
        ATerm o_83 = NULL;
        o_83 = t;
        b_83 :
        if(!(match_string(o_83, "-i")))
          {
            if(!(match_string(o_83, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        ATerm r_83 = NULL;
        ATerm y_25;
        y_25 = t;
        {
          ATerm p_83 = NULL;
          ATerm q_83 = NULL;
          q_83 = t;
          if(((p_83 != NULL) && (p_83 != q_83)))
            _fail(q_83);
          else
            p_83 = q_83;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_z_25, not_null(p_83));
            t = set_config_0(t);
          }
        }
        t = y_25;
        {
          ATerm s_83 = NULL;
          s_83 = t;
          if(((r_83 != NULL) && (r_83 != s_83)))
            _fail(s_83);
          else
            r_83 = s_83;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_83));
        }
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        t = term_d_26;
        return(t);
      }
      t = ArgOption_3(t, a_3, d_3, e_3);
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      {
        ATerm g_26 = t;
        int h_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_3 (ATerm t)
            {
              ATerm t_83 = NULL;
              t_83 = t;
              e_83 :
              if(!(match_string(t_83, "-o")))
                {
                  if(!(match_string(t_83, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm g_3 (ATerm t)
            {
              ATerm w_83 = NULL;
              ATerm l_26;
              l_26 = t;
              {
                ATerm u_83 = NULL;
                ATerm v_83 = NULL;
                v_83 = t;
                if(((u_83 != NULL) && (u_83 != v_83)))
                  _fail(v_83);
                else
                  u_83 = v_83;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_26, not_null(u_83));
                  t = set_config_0(t);
                }
              }
              t = l_26;
              {
                ATerm x_83 = NULL;
                x_83 = t;
                if(((w_83 != NULL) && (w_83 != x_83)))
                  _fail(x_83);
                else
                  w_83 = x_83;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_83));
              }
              return(t);
            }
            ATerm h_3 (ATerm t)
            {
              t = term_p_26;
              return(t);
            }
            t = ArgOption_3(t, f_3, g_3, h_3);
            LocalPopChoice(h_26);
          }
        else
          {
            t = g_26;
            {
              ATerm q_26 = t;
              int r_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_3 (ATerm t)
                  {
                    ATerm y_83 = NULL;
                    y_83 = t;
                    h_83 :
                    if(!(match_string(y_83, "-S")))
                      {
                        if(!(match_string(y_83, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm j_3 (ATerm t)
                  {
                    t = term_s_26;
                    t = set_config_0(t);
                    t = term_t_26;
                    return(t);
                  }
                  ATerm k_3 (ATerm t)
                  {
                    t = term_u_26;
                    return(t);
                  }
                  t = Option_3(t, i_3, j_3, k_3);
                  LocalPopChoice(r_26);
                }
              else
                {
                  t = q_26;
                  {
                    ATerm v_26 = t;
                    int w_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_3 (ATerm t)
                        {
                          ATerm z_83 = NULL;
                          z_83 = t;
                          i_83 :
                          if(!(match_string(z_83, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm m_3 (ATerm t)
                        {
                          ATerm c_84 = NULL;
                          ATerm x_26;
                          x_26 = t;
                          {
                            ATerm a_84 = NULL;
                            ATerm b_84 = NULL;
                            t = string_to_int_0(t);
                            {
                              b_84 = t;
                              if(((a_84 != NULL) && (a_84 != b_84)))
                                _fail(b_84);
                              else
                                a_84 = b_84;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_l_22, not_null(a_84));
                              t = set_config_0(t);
                            }
                          }
                          t = x_26;
                          {
                            ATerm d_84 = NULL;
                            d_84 = t;
                            if(((c_84 != NULL) && (c_84 != d_84)))
                              _fail(d_84);
                            else
                              c_84 = d_84;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_84));
                          }
                          return(t);
                        }
                        ATerm n_3 (ATerm t)
                        {
                          t = term_y_26;
                          return(t);
                        }
                        t = ArgOption_3(t, l_3, m_3, n_3);
                        LocalPopChoice(w_26);
                      }
                    else
                      {
                        t = v_26;
                        {
                          ATerm z_26 = t;
                          int a_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_3 (ATerm t)
                              {
                                ATerm e_84 = NULL;
                                e_84 = t;
                                l_83 :
                                if(!(match_string(e_84, "-v")))
                                  {
                                    if(!(match_string(e_84, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm p_3 (ATerm t)
                              {
                                t = term_d_27;
                                t = set_config_0(t);
                                t = term_e_27;
                                return(t);
                              }
                              ATerm s_3 (ATerm t)
                              {
                                t = term_f_27;
                                return(t);
                              }
                              t = Option_3(t, o_3, p_3, s_3);
                              LocalPopChoice(a_27);
                            }
                          else
                            {
                              t = z_26;
                              {
                                ATerm g_27 = t;
                                int h_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm t_3 (ATerm t)
                                    {
                                      ATerm f_84 = NULL;
                                      f_84 = t;
                                      m_83 :
                                      if(!(match_string(f_84, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm u_3 (ATerm t)
                                    {
                                      t = term_j_27;
                                      t = set_config_0(t);
                                      t = term_k_27;
                                      return(t);
                                    }
                                    ATerm v_3 (ATerm t)
                                    {
                                      t = term_l_27;
                                      return(t);
                                    }
                                    t = Option_3(t, t_3, u_3, v_3);
                                    LocalPopChoice(h_27);
                                  }
                                else
                                  {
                                    t = g_27;
                                    {
                                      ATerm w_3 (ATerm t)
                                      {
                                        ATerm g_84 = NULL;
                                        g_84 = t;
                                        n_83 :
                                        if(!(match_string(g_84, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm x_3 (ATerm t)
                                      {
                                        t = term_z_28;
                                        t = set_config_0(t);
                                        t = term_a_29;
                                        return(t);
                                      }
                                      ATerm y_3 (ATerm t)
                                      {
                                        t = term_b_29;
                                        return(t);
                                      }
                                      t = Option_3(t, w_3, x_3, y_3);
                                    }
                                  }
                              }
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
  ATerm o_84 = NULL;
  o_84 = t;
  t = SSL_table_destroy(not_null(o_84));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm s_84 = NULL;
  s_84 = t;
  t = SSL_exit(not_null(s_84));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm w_84 = NULL;
  w_84 = t;
  t = SSL_implode_string(not_null(w_84));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_110 (ATerm))
{
  ATerm z_84 (ATerm t)
  {
    ATerm h_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, z_84);
        LocalPopChoice(i_29);
      }
    else
      {
        t = h_29;
        {
          t = Nil_0(t);
          t = j_110(t);
        }
      }
    return(t);
  }
  t = z_84(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(k_29);
    }
  else
    {
      t = j_29;
      {
        ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL;
        c_85 = t;
        b_85 :
        if(((ATgetType(c_85) == AT_LIST) && ((ATermList) c_85 != ATempty)))
          {
            d_85 = ATgetFirst((ATermList) c_85);
            e_85 = (ATerm) ATgetNext((ATermList) c_85);
            {
              t = not_null(d_85);
              {
                ATerm z_3 (ATerm t)
                {
                  t = not_null(e_85);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, z_3);
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
  ATerm k_85 = NULL;
  k_85 = t;
  t = SSL_explode_string(not_null(k_85));
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
ATerm long_description_1 (ATerm t, ATerm d_95 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_109 (ATerm))
{
  ATerm n_85 (ATerm t)
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
        t = Cons_2(t, v_109, n_85);
      }
    return(t);
  }
  t = n_85(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm u_85 = NULL,v_85 = NULL,w_85 = NULL;
  w_85 = t;
  t_85 :
  if(((ATgetType(w_85) == AT_LIST) && ((ATermList) w_85 != ATempty)))
    {
      u_85 = ATgetFirst((ATermList) w_85);
      v_85 = (ATerm) ATgetNext((ATermList) w_85);
      {
        ATerm z_85 = NULL;
        t = not_null(v_85);
        {
          ATerm r_29;
          r_29 = t;
          {
            ATerm a_86 = NULL,c_86 = NULL,e_86 = NULL;
            ATerm s_29;
            s_29 = t;
            {
              ATerm b_86 = NULL;
              t = j_0(t);
              {
                b_86 = t;
                if(((a_86 != NULL) && (a_86 != b_86)))
                  _fail(b_86);
                else
                  a_86 = b_86;
              }
            }
            t = s_29;
            {
              ATerm d_86 = NULL;
              t = not_null(u_85);
              {
                t = i_0(t);
                {
                  d_86 = t;
                  if(((c_86 != NULL) && (c_86 != d_86)))
                    _fail(d_86);
                  else
                    c_86 = d_86;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_86)), not_null(c_86));
                {
                  e_86 = t;
                  if(((z_85 != NULL) && (z_85 != e_86)))
                    _fail(e_86);
                  else
                    z_85 = e_86;
                }
              }
            }
          }
          t = r_29;
          {
            ATerm a_4 (ATerm t)
            {
              t = not_null(z_85);
              return(t);
            }
            t = reverse_acc_2(t, i_0, a_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) w_85 == ATempty))
        {
          {
            t = term_c_27;
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
  ATerm b_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm c_95 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_82 (ATerm))
{
  ATerm p_86 = NULL,q_86 = NULL;
  p_86 = t;
  o_86 :
  if(match_cons(p_86, sym_Program_1))
    {
      q_86 = ATgetArgument(p_86, 0);
      {
        ATerm t_86 = NULL,v_86 = NULL;
        ATerm u_86 = NULL;
        t = SSLgetAnnotations(not_null(p_86));
        {
          u_86 = t;
          if(((t_86 != NULL) && (t_86 != u_86)))
            _fail(u_86);
          else
            t_86 = u_86;
        }
        {
          t = not_null(q_86);
          {
            ATerm x_86 = NULL;
            t = e_82(t);
            {
              v_86 = t;
              {
                ATerm y_86 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_86)), not_null(t_86));
                {
                  y_86 = t;
                  if(((x_86 != NULL) && (x_86 != y_86)))
                    _fail(y_86);
                  else
                    x_86 = y_86;
                }
                t = not_null(x_86);
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
  ATerm h_87 = NULL;
  ATerm c_4 (ATerm t)
  {
    ATerm d_4 (ATerm t)
    {
      ATerm i_87 = NULL;
      i_87 = t;
      if(((h_87 != NULL) && (h_87 != i_87)))
        _fail(i_87);
      else
        h_87 = i_87;
      return(t);
    }
    t = Program_1(t, d_4);
    return(t);
  }
  t = option_defined_1(t, c_4);
  {
    ATerm e_4 (ATerm t)
    {
      ATerm j_87 = NULL;
      ATerm k_87 = NULL;
      t = term_c_27;
      {
        ATerm f_4 (ATerm t)
        {
          t = not_null(h_87);
          return(t);
        }
        t = short_description_1(t, f_4);
        {
          t = concat_strings_0(t);
          {
            k_87 = t;
            if(((j_87 != NULL) && (j_87 != k_87)))
              _fail(k_87);
            else
              j_87 = k_87;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATinsert(ATempty, not_null(j_87)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, e_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATinsert(ATempty, term_x_29));
      {
        t = printnl_0(t);
        {
          t = term_a_30;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_4 (ATerm t)
                {
                  ATerm l_87 = NULL;
                  l_87 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_87)), term_f_30));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_4);
                {
                  ATerm h_4 (ATerm t)
                  {
                    ATerm n_87 = NULL;
                    ATerm o_87 = NULL;
                    t = term_c_27;
                    {
                      ATerm i_4 (ATerm t)
                      {
                        t = not_null(h_87);
                        return(t);
                      }
                      t = long_description_1(t, i_4);
                      {
                        t = concat_strings_0(t);
                        {
                          o_87 = t;
                          if(((n_87 != NULL) && (n_87 != o_87)))
                            _fail(o_87);
                          else
                            n_87 = o_87;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_87)), term_g_30));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_4);
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
ATerm Undefined_1 (ATerm t, ATerm f_82 (ATerm))
{
  ATerm y_87 = NULL,z_87 = NULL;
  y_87 = t;
  x_87 :
  if(match_cons(y_87, sym_Undefined_1))
    {
      z_87 = ATgetArgument(y_87, 0);
      {
        ATerm c_88 = NULL,e_88 = NULL;
        ATerm d_88 = NULL;
        t = SSLgetAnnotations(not_null(y_87));
        {
          d_88 = t;
          if(((c_88 != NULL) && (c_88 != d_88)))
            _fail(d_88);
          else
            c_88 = d_88;
        }
        {
          t = not_null(z_87);
          {
            ATerm g_88 = NULL;
            t = f_82(t);
            {
              e_88 = t;
              {
                ATerm h_88 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_88)), not_null(c_88));
                {
                  h_88 = t;
                  if(((g_88 != NULL) && (g_88 != h_88)))
                    _fail(h_88);
                  else
                    g_88 = h_88;
                }
                t = not_null(g_88);
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
ATerm fetch_1 (ATerm t, ATerm d_110 (ATerm))
{
  ATerm m_88 (ATerm t)
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_110, _id);
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
        t = Cons_2(t, _id, m_88);
      }
    return(t);
  }
  t = m_88(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_96 (ATerm))
{
  t = fetch_1(t, b_96);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_88 = NULL;
  r_88 = t;
  q_88 :
  if(match_cons(r_88, sym_Help_0))
    {
      ATerm t_88 = NULL,v_88 = NULL;
      ATerm n_30;
      n_30 = t;
      {
        ATerm u_88 = NULL;
        t = SSLgetAnnotations(not_null(r_88));
        {
          u_88 = t;
          if(((t_88 != NULL) && (t_88 != u_88)))
            _fail(u_88);
          else
            t_88 = u_88;
        }
      }
      t = n_30;
      {
        ATerm w_88 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_88));
        {
          w_88 = t;
          if(((v_88 != NULL) && (v_88 != w_88)))
            _fail(w_88);
          else
            v_88 = w_88;
        }
        t = not_null(v_88);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm y_113 (ATerm))
{
  ATerm o_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_113(t);
      LocalPopChoice(p_30);
    }
  else
    {
      t = o_30;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm e_89 = NULL,f_89 = NULL,g_89 = NULL;
  e_89 = t;
  d_89 :
  if(match_cons(e_89, sym__2))
    {
      f_89 = ATgetArgument(e_89, 0);
      g_89 = ATgetArgument(e_89, 1);
      t = SSL_table_get(not_null(f_89), not_null(g_89));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm n_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL;
  n_89 = t;
  m_89 :
  if(match_cons(n_89, sym__3))
    {
      o_89 = ATgetArgument(n_89, 0);
      p_89 = ATgetArgument(n_89, 1);
      q_89 = ATgetArgument(n_89, 2);
      {
        ATerm q_30;
        q_30 = t;
        {
          ATerm u_89 = NULL;
          ATerm v_89 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_89), not_null(p_89));
          {
            ATerm r_30 = t;
            int s_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(s_30);
              }
            else
              {
                t = r_30;
                t = (ATerm) ATempty;
              }
            {
              v_89 = t;
              if(((u_89 != NULL) && (u_89 != v_89)))
                _fail(v_89);
              else
                u_89 = v_89;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_89), not_null(p_89), (ATerm) ATinsert(CheckATermList(not_null(u_89)), not_null(q_89)));
            t = table_put_0(t);
          }
        }
        t = q_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm h_95 (ATerm))
{
  ATerm a_90 = NULL;
  ATerm b_90 = NULL;
  t = term_c_27;
  {
    t = h_95(t);
    {
      b_90 = t;
      if(((a_90 != NULL) && (a_90 != b_90)))
        _fail(b_90);
      else
        a_90 = b_90;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_29, term_z_29, not_null(a_90));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm j_90 = NULL,k_90 = NULL,l_90 = NULL;
  j_90 = t;
  h_90 :
  if(match_string(j_90, "register-usage-info"))
    {
      t = register_usage_1(t, f_0);
    }
  else
    {
      if(((ATgetType(j_90) == AT_LIST) && ((ATermList) j_90 != ATempty)))
        {
          k_90 = ATgetFirst((ATermList) j_90);
          l_90 = (ATerm) ATgetNext((ATermList) j_90);
          {
            ATerm o_90 = NULL;
            ATerm t_30;
            t_30 = t;
            {
              t = not_null(k_90);
              t = a_0(t);
            }
            t = t_30;
            {
              ATerm p_90 = NULL;
              t = term_c_27;
              {
                t = b_0(t);
                {
                  p_90 = t;
                  if(((o_90 != NULL) && (o_90 != p_90)))
                    _fail(p_90);
                  else
                    o_90 = p_90;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_90)), not_null(o_90));
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
  ATerm n_4 (ATerm t)
  {
    ATerm u_90 = NULL;
    u_90 = t;
    t_90 :
    if(!(match_string(u_90, "--help")))
      {
        if(!(match_string(u_90, "-h")))
          {
            if(!(match_string(u_90, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = term_u_30;
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = term_v_30;
    return(t);
  }
  t = Option_3(t, n_4, o_4, p_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm z_90 = NULL,a_91 = NULL,b_91 = NULL;
  z_90 = t;
  y_90 :
  if(((ATgetType(z_90) == AT_LIST) && ((ATermList) z_90 != ATempty)))
    {
      a_91 = ATgetFirst((ATermList) z_90);
      b_91 = (ATerm) ATgetNext((ATermList) z_90);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_91)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_91)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_92 (ATerm), ATerm z_92 (ATerm))
{
  ATerm l_91 = NULL,m_91 = NULL,n_91 = NULL;
  l_91 = t;
  k_91 :
  if(((ATgetType(l_91) == AT_LIST) && ((ATermList) l_91 != ATempty)))
    {
      m_91 = ATgetFirst((ATermList) l_91);
      n_91 = (ATerm) ATgetNext((ATermList) l_91);
      {
        ATerm r_91 = NULL,w_91 = NULL;
        ATerm s_91 = NULL;
        t = SSLgetAnnotations(not_null(l_91));
        {
          s_91 = t;
          if(((r_91 != NULL) && (r_91 != s_91)))
            _fail(s_91);
          else
            r_91 = s_91;
        }
        {
          t = not_null(m_91);
          {
            ATerm y_91 = NULL;
            t = y_92(t);
            {
              w_91 = t;
              {
                t = not_null(n_91);
                {
                  ATerm a_92 = NULL;
                  t = z_92(t);
                  {
                    y_91 = t;
                    {
                      ATerm b_92 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_91)), not_null(w_91)), not_null(r_91));
                      {
                        b_92 = t;
                        if(((a_92 != NULL) && (a_92 != b_92)))
                          _fail(b_92);
                        else
                          a_92 = b_92;
                      }
                      t = not_null(a_92);
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
  ATerm l_92 = NULL;
  l_92 = t;
  k_92 :
  if(((ATermList) l_92 == ATempty))
    {
      {
        ATerm n_92 = NULL,p_92 = NULL;
        ATerm w_30;
        w_30 = t;
        {
          ATerm o_92 = NULL;
          t = SSLgetAnnotations(not_null(l_92));
          {
            o_92 = t;
            if(((n_92 != NULL) && (n_92 != o_92)))
              _fail(o_92);
            else
              n_92 = o_92;
          }
        }
        t = w_30;
        {
          ATerm q_92 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(n_92));
          {
            q_92 = t;
            if(((p_92 != NULL) && (p_92 != q_92)))
              _fail(q_92);
            else
              p_92 = q_92;
          }
          t = not_null(p_92);
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
  ATerm c_93 = NULL,d_93 = NULL,e_93 = NULL;
  c_93 = t;
  b_93 :
  if(match_cons(c_93, sym__2))
    {
      d_93 = ATgetArgument(c_93, 0);
      e_93 = ATgetArgument(c_93, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_g_22, not_null(d_93), not_null(e_93));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm f_95 (ATerm))
{
  ATerm x_30;
  x_30 = t;
  {
    ATerm r_4 (ATerm t)
    {
      t = term_y_30;
      t = f_95(t);
      return(t);
    }
    t = try_1(t, r_4);
  }
  t = x_30;
  {
    ATerm s_4 (ATerm t)
    {
      ATerm m_93 = NULL;
      ATerm z_30;
      z_30 = t;
      {
        ATerm k_93 = NULL;
        ATerm l_93 = NULL;
        l_93 = t;
        if(((k_93 != NULL) && (k_93 != l_93)))
          _fail(l_93);
        else
          k_93 = l_93;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_24, not_null(k_93));
          t = set_config_0(t);
        }
      }
      t = z_30;
      {
        ATerm n_93 = NULL;
        n_93 = t;
        if(((m_93 != NULL) && (m_93 != n_93)))
          _fail(n_93);
        else
          m_93 = n_93;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_93));
      }
      return(t);
    }
    ATerm t_4 (ATerm t)
    {
      ATerm a_31 = t;
      int b_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_31 = t;
          int d_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(d_31);
            }
          else
            {
              t = c_31;
              {
                t = f_95(t);
                t = Cons_2(t, _id, t_4);
              }
            }
          LocalPopChoice(b_31);
        }
      else
        {
          t = a_31;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_4, t_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_93 = NULL,u_93 = NULL,v_93 = NULL;
  ATerm l_31;
  l_31 = t;
  {
    ATerm w_93 = NULL,x_93 = NULL,y_93 = NULL,z_93 = NULL;
    w_93 = t;
    s_93 :
    if(match_cons(w_93, sym__3))
      {
        x_93 = ATgetArgument(w_93, 0);
        y_93 = ATgetArgument(w_93, 1);
        z_93 = ATgetArgument(w_93, 2);
        {
          if(((t_93 != NULL) && (t_93 != x_93)))
            _fail(x_93);
          else
            t_93 = x_93;
          {
            if(((u_93 != NULL) && (u_93 != y_93)))
              _fail(y_93);
            else
              u_93 = y_93;
            {
              if(((v_93 != NULL) && (v_93 != z_93)))
                _fail(z_93);
              else
                v_93 = z_93;
              t = SSL_table_put(not_null(t_93), not_null(u_93), not_null(v_93));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = l_31;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm e_95 (ATerm))
{
  ATerm c_94 = NULL;
  ATerm m_31;
  m_31 = t;
  {
    t = term_n_31;
    t = table_put_0(t);
  }
  t = m_31;
  {
    ATerm u_4 (ATerm t)
    {
      ATerm o_31 = t;
      int p_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_95(t);
          LocalPopChoice(p_31);
        }
      else
        {
          t = o_31;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_4);
    {
      ATerm y_4 (ATerm t)
      {
        ATerm q_31 = t;
        int r_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_m_23;
                t = exit_0(t);
              }
            }
            LocalPopChoice(r_31);
          }
        else
          {
            t = q_31;
            {
              ATerm z_4 (ATerm t)
              {
                ATerm d_5 (ATerm t)
                {
                  ATerm d_94 = NULL;
                  d_94 = t;
                  if(((c_94 != NULL) && (c_94 != d_94)))
                    _fail(d_94);
                  else
                    c_94 = d_94;
                  return(t);
                }
                t = Undefined_1(t, d_5);
                return(t);
              }
              t = option_defined_1(t, z_4);
              {
                ATerm s_31;
                s_31 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_94)), term_t_31));
                  t = printnl_0(t);
                }
                t = s_31;
                {
                  t = system_usage_0(t);
                  {
                    t = term_j_21;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, y_4);
      {
        ATerm u_31;
        u_31 = t;
        {
          t = term_y_29;
          t = table_destroy_0(t);
        }
        t = u_31;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm))
{
  ATerm g_5 (ATerm t)
  {
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_97(t);
        LocalPopChoice(w_31);
      }
    else
      {
        t = v_31;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, g_5);
  {
    t = store_options_0(t);
    {
      t = t_97(t);
      {
        ATerm x_31 = t;
        int y_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, s_97);
            LocalPopChoice(y_31);
          }
        else
          {
            t = x_31;
            {
              ATerm b_32 = t;
              int c_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, q_97);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(c_32);
                }
              else
                {
                  t = b_32;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm m_97 (ATerm))
{
  ATerm h_5 (ATerm t)
  {
    ATerm i_5 (ATerm t)
    {
      ATerm d_32;
      d_32 = t;
      {
        ATerm g_94 = NULL;
        ATerm h_94 = NULL;
        t = term_d_24;
        {
          t = get_config_0(t);
          {
            h_94 = t;
            if(((g_94 != NULL) && (g_94 != h_94)))
              _fail(h_94);
            else
              g_94 = h_94;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATinsert(ATempty, not_null(g_94)));
          t = printnl_0(t);
        }
      }
      t = d_32;
      return(t);
    }
    t = if_verbose2_1(t, i_5);
    return(t);
  }
  t = iowrap_4(t, k_97, l_97, m_97, h_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm i_97 (ATerm), ATerm j_97 (ATerm))
{
  t = iowrap_3(t, i_97, j_97, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm f_97 (ATerm))
{
  ATerm j_5 (ATerm t)
  {
    t = _2(t, _id, f_97);
    return(t);
  }
  t = iowrap_2(t, j_5, _fail);
  return(t);
}
ATerm optimize2_comp_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm l_5 (ATerm t)
    {
      t = simplify_widen_0(t);
      {
        t = simplify_0(t);
        t = simplify_clean_0(t);
      }
      return(t);
    }
    t = apply_to_bodies_1(t, l_5);
    return(t);
  }
  t = iowrap_1(t, k_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize2_comp_0(t);
  return(t);
}
