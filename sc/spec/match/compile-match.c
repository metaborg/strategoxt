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
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue));
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
ATerm spaste_1 (ATerm, ATerm k_120 (ATerm));
ATerm Rec_2 (ATerm, ATerm x_91 (ATerm), ATerm y_91 (ATerm));
ATerm Let_2 (ATerm, ATerm z_91 (ATerm), ATerm a_92 (ATerm));
ATerm sboundin_3 (ATerm, ATerm l_120 (ATerm), ATerm m_120 (ATerm), ATerm n_120 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm w_91 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm g_120 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm e_90 (ATerm));
ATerm Scope_2 (ATerm, ATerm b_93 (ATerm), ATerm c_93 (ATerm));
ATerm tboundin_3 (ATerm, ATerm h_120 (ATerm), ATerm i_120 (ATerm), ATerm j_120 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm q_103 (ATerm), ATerm r_103 (ATerm));
ATerm for_3 (ATerm, ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm v_103 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm y_106 (ATerm), ATerm z_106 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm e_107 (ATerm), ATerm f_107 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm s_106 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm x_105 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm c_106 (ATerm));
ATerm rename_4 (ATerm, ATerm g_107 (ATerm, ATerm (ATerm)), ATerm h_107 (ATerm), ATerm i_107 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm j_107 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Seqs_1 (ATerm, ATerm j_88 (ATerm));
ATerm Call_2 (ATerm, ATerm l_92 (ATerm), ATerm m_92 (ATerm));
ATerm Str_1 (ATerm, ATerm s_0 (ATerm));
ATerm Real_1 (ATerm, ATerm r_0 (ATerm));
ATerm Int_1 (ATerm, ATerm q_0 (ATerm));
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm list_1 (ATerm, ATerm u_111 (ATerm));
ATerm Build_1 (ATerm, ATerm y_92 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm simple_strategy_0 (ATerm);
ATerm RowLet_0 (ATerm);
ATerm MatrixScope_0 (ATerm);
ATerm assert_1 (ATerm, ATerm z_99 (ATerm));
ATerm WildPat_0 (ATerm);
ATerm default_state_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm MatchCons_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm ConsTransition_1 (ATerm, ATerm o_93 (ATerm));
ATerm Transition_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm rzip_1 (ATerm, ATerm e_114 (ATerm));
ATerm transitions_0 (ATerm);
ATerm Uniq_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm w_112 (ATerm));
ATerm uniq_0 (ATerm);
ATerm offsets_0 (ATerm);
ATerm length_0 (ATerm);
ATerm ConsArgs_0 (ATerm);
ATerm filter_1 (ATerm, ATerm l_107 (ATerm));
ATerm outedges_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Mixture_0 (ATerm);
ATerm ShiftColumnRow_0 (ATerm);
ATerm ShiftColumn_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm As_2 (ATerm, ATerm n_89 (ATerm), ATerm o_89 (ATerm));
ATerm Row_3 (ATerm, ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm e_88 (ATerm));
ATerm SkipWild_0 (ATerm);
ATerm MatrixRowsEmpty_0 (ATerm);
ATerm reduce_matrix_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm w_99 (ATerm));
ATerm restore_always_2 (ATerm, ATerm i_116 (ATerm), ATerm j_116 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm v_99 (ATerm));
ATerm scope_2 (ATerm, ATerm x_99 (ATerm), ATerm y_99 (ATerm));
ATerm matrix_to_dfa_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm zip_1 (ATerm, ATerm v_113 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm e_93 (ATerm), ATerm f_93 (ATerm));
ATerm Explode_2 (ATerm, ATerm j_89 (ATerm), ATerm k_89 (ATerm));
ATerm Op_2 (ATerm, ATerm e_91 (ATerm), ATerm f_91 (ATerm));
ATerm pat_td_1 (ATerm, ATerm g_121 (ATerm));
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
ATerm foldr_3 (ATerm, ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm j_108 (ATerm));
ATerm crush_3 (ATerm, ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm y_109 (ATerm));
ATerm collect_om_1 (ATerm, ATerm n_110 (ATerm));
ATerm collect_1 (ATerm, ATerm p_110 (ATerm));
ATerm collect_offsets_0 (ATerm);
ATerm CollectSubst_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm IgnoreVar_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm l_109 (ATerm));
ATerm union_0 (ATerm);
ATerm unions_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm a_114 (ATerm));
ATerm CollectSplit_2 (ATerm, ATerm h_111 (ATerm), ATerm i_111 (ATerm));
ATerm collect_split_2 (ATerm, ATerm e_111 (ATerm), ATerm f_111 (ATerm));
ATerm collect_substitutions_0 (ATerm);
ATerm Annotate_1 (ATerm, ATerm i_121 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t_113 (ATerm));
ATerm NZip00_0 (ATerm);
ATerm nzip0_1 (ATerm, ATerm b_114 (ATerm));
ATerm Propagate_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm k_116 (ATerm));
ATerm term_to_matrix_0 (ATerm);
ATerm MatchToMatrix_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm z_102 (ATerm), ATerm a_103 (ATerm));
ATerm repeat_1 (ATerm, ATerm c_103 (ATerm));
ATerm downup_1 (ATerm, ATerm m_116 (ATerm));
ATerm match_to_matrix_0 (ATerm);
ATerm match_to_dfa_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm d_92 (ATerm));
ATerm Strategies_1 (ATerm, ATerm o_90 (ATerm));
ATerm Specification_1 (ATerm, ATerm q_90 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm j_121 (ATerm));
ATerm _2 (ATerm, ATerm y_80 (ATerm), ATerm z_80 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm d_99 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm n_96 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm f_108 (ATerm), ATerm g_108 (ATerm));
ATerm crush_2 (ATerm, ATerm u_109 (ATerm), ATerm v_109 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm m_96 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm n_98 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm d_115 (ATerm), ATerm e_115 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm l_98 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm g_112 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm m_95 (ATerm));
ATerm map_1 (ATerm, ATerm s_111 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm l_95 (ATerm));
ATerm Program_1 (ATerm, ATerm m_82 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm n_82 (ATerm));
ATerm fetch_1 (ATerm, ATerm a_112 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_96 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_115 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_95 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm h_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_93 (ATerm), ATerm h_93 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_95 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_95 (ATerm));
ATerm iowrap_4 (ATerm, ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm c_98 (ATerm));
ATerm iowrap_3 (ATerm, ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm));
ATerm iowrap_2 (ATerm, ATerm r_97 (ATerm), ATerm s_97 (ATerm));
ATerm iowrap_1 (ATerm, ATerm o_97 (ATerm));
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
ATerm spaste_1 (ATerm t, ATerm k_120 (ATerm))
{
  ATerm w_6 = t;
  int x_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = split_2(t, _id, k_120);
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
      t = Let_2(t, b_0, _id);
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
            ATerm f_0 (ATerm t)
            {
              t = split_2(t, _id, k_120);
              {
                ATerm g_0 (ATerm t)
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
                t = zip_1(t, g_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, f_0, _id);
            LocalPopChoice(z_6);
          }
        else
          {
            t = y_6;
            {
              ATerm t_0 (ATerm t)
              {
                t = k_120(t);
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
ATerm Rec_2 (ATerm t, ATerm x_91 (ATerm), ATerm y_91 (ATerm))
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
            t = x_91(t);
            {
              q_9 = t;
              {
                t = not_null(k_9);
                {
                  ATerm u_9 = NULL;
                  t = y_91(t);
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
ATerm Let_2 (ATerm t, ATerm z_91 (ATerm), ATerm a_92 (ATerm))
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
            t = z_91(t);
            {
              p_10 = t;
              {
                t = not_null(j_10);
                {
                  ATerm t_10 = NULL;
                  t = a_92(t);
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
ATerm sboundin_3 (ATerm t, ATerm l_120 (ATerm), ATerm m_120 (ATerm), ATerm n_120 (ATerm))
{
  ATerm a_7 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, l_120, l_120);
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
            t = SDef_3(t, n_120, n_120, l_120);
            LocalPopChoice(d_7);
          }
        else
          {
            t = c_7;
            t = Rec_2(t, n_120, l_120);
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
ATerm SVar_1 (ATerm t, ATerm w_91 (ATerm))
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
            t = w_91(t);
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
ATerm tpaste_1 (ATerm t, ATerm g_120 (ATerm))
{
  t = Scope_2(t, g_120, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm e_90 (ATerm))
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
            t = e_90(t);
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
ATerm Scope_2 (ATerm t, ATerm b_93 (ATerm), ATerm c_93 (ATerm))
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
            t = b_93(t);
            {
              r_14 = t;
              {
                t = not_null(l_14);
                {
                  ATerm v_14 = NULL;
                  t = c_93(t);
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
ATerm tboundin_3 (ATerm t, ATerm h_120 (ATerm), ATerm i_120 (ATerm), ATerm j_120 (ATerm))
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, j_120, h_120);
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      t = DynamicRules_1(t, h_120);
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
ATerm while_not_2 (ATerm t, ATerm q_103 (ATerm), ATerm r_103 (ATerm))
{
  ATerm y_17 (ATerm t)
  {
    ATerm n_7 = t;
    int o_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_103(t);
        LocalPopChoice(o_7);
      }
    else
      {
        t = n_7;
        {
          t = r_103(t);
          t = y_17(t);
        }
      }
    return(t);
  }
  t = y_17(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm v_103 (ATerm))
{
  t = t_103(t);
  t = while_not_2(t, u_103, v_103);
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
ATerm free_vars_3 (ATerm t, ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm p_18 (ATerm t)
  {
    ATerm b_8 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_105(t);
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
                t = d_105(t);
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
                t = e_105(t, c_1, p_18, d_1);
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
ATerm DistBinding_2 (ATerm t, ATerm y_106 (ATerm), ATerm z_106 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
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
              t = y_106(t);
            }
            return(t);
          }
          ATerm j_1 (ATerm t)
          {
            ATerm v_19 = NULL;
            v_19 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), not_null(o_19));
              t = y_106(t);
            }
            return(t);
          }
          t = z_106(t, i_1, j_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm e_107 (ATerm), ATerm f_107 (ATerm, ATerm (ATerm)))
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
            t = e_107(t);
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
            t = f_107(t, k_1);
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
ATerm RnVar_1 (ATerm t, ATerm s_106 (ATerm, ATerm (ATerm)))
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
          t = s_106(t, l_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm x_105 (ATerm))
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
              t = x_105(t);
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
ATerm env_alltd_1 (ATerm t, ATerm c_106 (ATerm))
{
  ATerm w_22 (ATerm t)
  {
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_106(t);
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
ATerm rename_4 (ATerm t, ATerm g_107 (ATerm, ATerm (ATerm)), ATerm h_107 (ATerm), ATerm i_107 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm j_107 (ATerm, ATerm (ATerm)))
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
              t = RnVar_1(t, g_107);
              LocalPopChoice(a_9);
            }
          else
            {
              t = z_8;
              {
                t = RnBinding_2(t, h_107, j_107);
                t = DistBinding_2(t, b_23, i_107);
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
ATerm Seqs_1 (ATerm t, ATerm j_88 (ATerm))
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
            t = j_88(t);
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
ATerm Call_2 (ATerm t, ATerm l_92 (ATerm), ATerm m_92 (ATerm))
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
            t = l_92(t);
            {
              l_24 = t;
              {
                t = not_null(f_24);
                {
                  ATerm p_24 = NULL;
                  t = m_92(t);
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
ATerm list_1 (ATerm t, ATerm u_111 (ATerm))
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
        t = Cons_2(t, u_111, g_30);
      }
    return(t);
  }
  t = g_30(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm y_92 (ATerm))
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
            t = y_92(t);
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
ATerm assert_1 (ATerm t, ATerm z_99 (ATerm))
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
          t = z_99(t);
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
ATerm ConsTransition_1 (ATerm t, ATerm o_93 (ATerm))
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
                    t = o_93(t);
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
ATerm rzip_1 (ATerm t, ATerm e_114 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, e_114);
  return(t);
}
ATerm transitions_0 (ATerm t)
{
  t = rzip_1(t, Transition_0);
  return(t);
}
ATerm Uniq_0 (ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL;
  h_45 = t;
  g_45 :
  if(((ATgetType(h_45) == AT_LIST) && ((ATermList) h_45 != ATempty)))
    {
      i_45 = ATgetFirst((ATermList) h_45);
      j_45 = (ATerm) ATgetNext((ATermList) h_45);
      {
        ATerm m_45 = NULL;
        ATerm o_45 = NULL;
        t = not_null(j_45);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm y_11 = t;
            if((PushChoice() == 0))
              {
                ATerm n_45 = NULL;
                n_45 = t;
                if(((i_45 != NULL) && (i_45 != n_45)))
                  _fail(n_45);
                else
                  i_45 = n_45;
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
            o_45 = t;
            if(((m_45 != NULL) && (m_45 != o_45)))
              _fail(o_45);
            else
              m_45 = o_45;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(m_45)), not_null(i_45));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm w_112 (ATerm))
{
  ATerm s_45 (ATerm t)
  {
    t = w_112(t);
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
          t = Cons_2(t, _id, s_45);
        }
    }
    return(t);
  }
  t = s_45(t);
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
    ATerm e_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL;
    e_46 = t;
    c_46 :
    if(match_cons(e_46, sym_As_2))
      {
        h_46 = ATgetArgument(e_46, 0);
        j_46 = ATgetArgument(e_46, 1);
        d_46 :
        if(match_cons(h_46, sym_Off_1))
          {
            i_46 = ATgetArgument(h_46, 0);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_46));
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
  ATerm f_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL;
  f_47 = t;
  v_46 :
  if(match_cons(f_47, sym_Row_3))
    {
      m_47 = ATgetArgument(f_47, 0);
      t_47 = ATgetArgument(f_47, 1);
      u_47 = ATgetArgument(f_47, 2);
      w_46 :
      if(((ATgetType(m_47) == AT_LIST) && ((ATermList) m_47 != ATempty)))
        {
          n_47 = ATgetFirst((ATermList) m_47);
          s_47 = (ATerm) ATgetNext((ATermList) m_47);
          x_46 :
          if(match_cons(n_47, sym_As_2))
            {
              o_47 = ATgetArgument(n_47, 0);
              p_47 = ATgetArgument(n_47, 1);
              e_47 :
              if(match_cons(p_47, sym_Str_1))
                {
                  q_47 = ATgetArgument(p_47, 0);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, not_null(q_47)), (ATerm) ATempty);
                }
              else
                {
                  if(match_cons(p_47, sym_Real_1))
                    {
                      q_47 = ATgetArgument(p_47, 0);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, not_null(q_47)), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(p_47, sym_Int_1))
                        {
                          q_47 = ATgetArgument(p_47, 0);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, not_null(q_47)), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(p_47, sym_Op_2))
                            {
                              q_47 = ATgetArgument(p_47, 0);
                              r_47 = ATgetArgument(p_47, 1);
                              {
                                ATerm b_48 = NULL,d_48 = NULL;
                                ATerm h_12;
                                h_12 = t;
                                {
                                  ATerm c_48 = NULL;
                                  t = not_null(r_47);
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
                                  t = not_null(r_47);
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
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, not_null(q_47), not_null(b_48)), not_null(d_48));
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
ATerm filter_1 (ATerm t, ATerm l_107 (ATerm))
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
              t = filter_1(t, l_107);
              return(t);
            }
            t = Cons_2(t, l_107, d_2);
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
                    t = filter_1(t, l_107);
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
            ATerm m_49 (ATerm t)
            {
              ATerm u_12 = t;
              int y_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Cons_2(t, _id, m_49);
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
            t = m_49(t);
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
        ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL;
        a_49 = t;
        u_48 :
        if(((ATgetType(a_49) == AT_LIST) && ((ATermList) a_49 != ATempty)))
          {
            b_49 = ATgetFirst((ATermList) a_49);
            k_49 = (ATerm) ATgetNext((ATermList) a_49);
            v_48 :
            if(match_cons(b_49, sym_Row_3))
              {
                c_49 = ATgetArgument(b_49, 0);
                i_49 = ATgetArgument(b_49, 1);
                j_49 = ATgetArgument(b_49, 2);
                w_48 :
                if(((ATgetType(c_49) == AT_LIST) && ((ATermList) c_49 != ATempty)))
                  {
                    d_49 = ATgetFirst((ATermList) c_49);
                    h_49 = (ATerm) ATgetNext((ATermList) c_49);
                    x_48 :
                    if(match_cons(d_49, sym_As_2))
                      {
                        e_49 = ATgetArgument(d_49, 0);
                        g_49 = ATgetArgument(d_49, 1);
                        y_48 :
                        if(match_cons(e_49, sym_Off_1))
                          {
                            f_49 = ATgetArgument(e_49, 0);
                            t = not_null(f_49);
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
  ATerm v_49 = NULL,w_49 = NULL;
  v_49 = t;
  u_49 :
  if(match_cons(v_49, sym_Matrix_1))
    {
      w_49 = ATgetArgument(v_49, 0);
      {
        ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL,i_50 = NULL,j_50 = NULL;
        ATerm k_50 = NULL;
        t = not_null(w_49);
        {
          ATerm l_50 = NULL;
          t = get_path_0(t);
          {
            k_50 = t;
            {
              if(((a_50 != NULL) && (a_50 != k_50)))
                _fail(k_50);
              else
                a_50 = k_50;
              {
                t = not_null(w_49);
                {
                  ATerm m_50 = NULL;
                  t = outedges_0(t);
                  {
                    l_50 = t;
                    {
                      if(((b_50 != NULL) && (b_50 != l_50)))
                        _fail(l_50);
                      else
                        b_50 = l_50;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(w_49), not_null(b_50));
                        {
                          ATerm n_50 = NULL;
                          t = transitions_0(t);
                          {
                            m_50 = t;
                            {
                              if(((c_50 != NULL) && (c_50 != m_50)))
                                _fail(m_50);
                              else
                                c_50 = m_50;
                              {
                                t = not_null(w_49);
                                {
                                  ATerm o_50 = NULL;
                                  t = default_state_0(t);
                                  {
                                    n_50 = t;
                                    {
                                      if(((i_50 != NULL) && (i_50 != n_50)))
                                        _fail(n_50);
                                      else
                                        i_50 = n_50;
                                      {
                                        t = new_0(t);
                                        {
                                          o_50 = t;
                                          {
                                            if(((j_50 != NULL) && (j_50 != o_50)))
                                              _fail(o_50);
                                            else
                                              j_50 = o_50;
                                            {
                                              ATerm z_12;
                                              z_12 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(w_49)), (ATerm) ATmakeAppl(sym_Defined_2, term_d_13, not_null(j_50)));
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
        t = (ATerm) ATmakeAppl(sym_Case_4, not_null(j_50), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_50)), not_null(c_50), not_null(i_50));
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
  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL;
  k_51 = t;
  g_51 :
  if(match_cons(k_51, sym_Row_3))
    {
      l_51 = ATgetArgument(k_51, 0);
      m_51 = ATgetArgument(k_51, 1);
      p_51 = ATgetArgument(k_51, 2);
      j_51 :
      if(((ATgetType(m_51) == AT_LIST) && ((ATermList) m_51 != ATempty)))
        {
          n_51 = ATgetFirst((ATermList) m_51);
          o_51 = (ATerm) ATgetNext((ATermList) m_51);
          t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(not_null(l_51)), not_null(n_51)), not_null(o_51), not_null(p_51));
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
  ATerm y_51 = NULL,z_51 = NULL;
  y_51 = t;
  x_51 :
  if(match_cons(y_51, sym_Matrix_1))
    {
      z_51 = ATgetArgument(y_51, 0);
      {
        ATerm b_52 = NULL;
        ATerm c_52 = NULL;
        t = not_null(z_51);
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
            t = not_null(z_51);
            {
              t = map_1(t, ShiftColumnRow_0);
              {
                c_52 = t;
                if(((b_52 != NULL) && (b_52 != c_52)))
                  _fail(c_52);
                else
                  b_52 = c_52;
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(b_52));
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
  ATerm l_52 = NULL;
  l_52 = t;
  k_52 :
  if(match_cons(l_52, sym_Wld_0))
    {
      ATerm o_52 = NULL,r_52 = NULL;
      ATerm j_13;
      j_13 = t;
      {
        ATerm p_52 = NULL;
        t = SSLgetAnnotations(not_null(l_52));
        {
          p_52 = t;
          if(((o_52 != NULL) && (o_52 != p_52)))
            _fail(p_52);
          else
            o_52 = p_52;
        }
      }
      t = j_13;
      {
        ATerm s_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(o_52));
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
ATerm As_2 (ATerm t, ATerm n_89 (ATerm), ATerm o_89 (ATerm))
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
            t = n_89(t);
            {
              k_53 = t;
              {
                t = not_null(e_53);
                {
                  ATerm o_53 = NULL;
                  t = o_89(t);
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
ATerm Row_3 (ATerm t, ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm e_88 (ATerm))
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
            t = c_88(t);
            {
              m_54 = t;
              {
                t = not_null(e_54);
                {
                  ATerm q_54 = NULL;
                  t = d_88(t);
                  {
                    o_54 = t;
                    {
                      t = not_null(f_54);
                      {
                        ATerm s_54 = NULL;
                        t = e_88(t);
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
        ATerm a_56 = NULL;
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
            a_56 = t;
            if(((u_55 != NULL) && (u_55 != a_56)))
              _fail(a_56);
            else
              u_55 = a_56;
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
  ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL;
  g_56 = t;
  f_56 :
  if(((ATgetType(g_56) == AT_LIST) && ((ATermList) g_56 != ATempty)))
    {
      h_56 = ATgetFirst((ATermList) g_56);
      i_56 = (ATerm) ATgetNext((ATermList) g_56);
      t = not_null(i_56);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL;
  p_56 = t;
  o_56 :
  if(match_cons(p_56, sym__2))
    {
      q_56 = ATgetArgument(p_56, 0);
      r_56 = ATgetArgument(p_56, 1);
      {
        ATerm w_13;
        w_13 = t;
        {
          ATerm u_56 = NULL;
          ATerm v_56 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_56), not_null(r_56));
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
              v_56 = t;
              if(((u_56 != NULL) && (u_56 != v_56)))
                _fail(v_56);
              else
                u_56 = v_56;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_56), not_null(r_56), not_null(u_56));
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
ATerm end_scope_1 (ATerm t, ATerm w_99 (ATerm))
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL;
  ATerm b_14;
  b_14 = t;
  {
    ATerm l_57 = NULL;
    ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL;
    t = w_99(t);
    {
      l_57 = t;
      {
        if(((g_57 != NULL) && (g_57 != l_57)))
          _fail(l_57);
        else
          g_57 = l_57;
        {
          ATerm c_14 = t;
          int d_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_57), term_s_11);
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
            e_57 :
            if(((ATgetType(m_57) == AT_LIST) && ((ATermList) m_57 != ATempty)))
              {
                n_57 = ATgetFirst((ATermList) m_57);
                o_57 = (ATerm) ATgetNext((ATermList) m_57);
                {
                  if(((h_57 != NULL) && (h_57 != n_57)))
                    _fail(n_57);
                  else
                    h_57 = n_57;
                  {
                    if(((f_57 != NULL) && (f_57 != o_57)))
                      _fail(o_57);
                    else
                      f_57 = o_57;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(g_57), term_s_11, not_null(f_57));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(h_57);
                          {
                            ATerm p_2 (ATerm t)
                            {
                              ATerm p_57 = NULL;
                              p_57 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_57), not_null(p_57));
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
ATerm restore_always_2 (ATerm t, ATerm i_116 (ATerm), ATerm j_116 (ATerm))
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_116(t);
      t = j_116(t);
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      {
        t = j_116(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm v_99 (ATerm))
{
  ATerm w_57 = NULL;
  ATerm g_14;
  g_14 = t;
  {
    ATerm x_57 = NULL;
    ATerm y_57 = NULL;
    t = v_99(t);
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
ATerm scope_2 (ATerm t, ATerm x_99 (ATerm), ATerm y_99 (ATerm))
{
  t = begin_scope_1(t, x_99);
  {
    ATerm q_2 (ATerm t)
    {
      t = end_scope_1(t, x_99);
      return(t);
    }
    t = restore_always_2(t, y_99, q_2);
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
        ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,z_59 = NULL,b_60 = NULL,d_60 = NULL;
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
            ATerm a_60 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_59), not_null(d_59));
            {
              t = conc_0(t);
              {
                a_60 = t;
                if(((z_59 != NULL) && (z_59 != a_60)))
                  _fail(a_60);
                else
                  z_59 = a_60;
              }
            }
          }
          t = y_14;
          {
            ATerm z_14;
            z_14 = t;
            {
              ATerm c_60 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(v_58), not_null(z_58)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_59))));
              {
                t = Mapp2_0(t);
                {
                  c_60 = t;
                  if(((b_60 != NULL) && (b_60 != c_60)))
                    _fail(c_60);
                  else
                    b_60 = c_60;
                }
              }
            }
            t = z_14;
            {
              ATerm e_60 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(v_58), not_null(b_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_59))));
              {
                t = Bapp2_0(t);
                {
                  e_60 = t;
                  if(((d_60 != NULL) && (d_60 != e_60)))
                    _fail(e_60);
                  else
                    d_60 = e_60;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(z_59)), not_null(a_59)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_60), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(e_59)), not_null(d_60))));
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
  ATerm n_61 = NULL,o_61 = NULL;
  n_61 = t;
  m_61 :
  if(match_cons(n_61, sym_Build_1))
    {
      o_61 = ATgetArgument(n_61, 0);
      {
        ATerm a_15 = t;
        int b_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL;
            ATerm w_61 = NULL;
            ATerm a_62 = NULL;
            t = new_0(t);
            {
              w_61 = t;
              {
                if(((u_61 != NULL) && (u_61 != w_61)))
                  _fail(w_61);
                else
                  u_61 = w_61;
                {
                  t = not_null(o_61);
                  {
                    ATerm x_2 (ATerm t)
                    {
                      ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL;
                      x_61 = t;
                      y_60 :
                      if(match_cons(x_61, sym_Anno_2))
                        {
                          y_61 = ATgetArgument(x_61, 0);
                          z_61 = ATgetArgument(x_61, 1);
                          {
                            if(((q_61 != NULL) && (q_61 != y_61)))
                              _fail(y_61);
                            else
                              q_61 = y_61;
                            {
                              if(((t_61 != NULL) && (t_61 != z_61)))
                                _fail(z_61);
                              else
                                t_61 = z_61;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_61));
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
                      a_62 = t;
                      if(((v_61 != NULL) && (v_61 != a_62)))
                        _fail(a_62);
                      else
                        v_61 = a_62;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_61)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_c_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_61)), not_null(q_61))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_61))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_61))));
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
                  ATerm c_62 = NULL,i_62 = NULL,p_62 = NULL;
                  ATerm q_62 = NULL;
                  ATerm t_62 = NULL;
                  t = new_0(t);
                  {
                    q_62 = t;
                    {
                      if(((i_62 != NULL) && (i_62 != q_62)))
                        _fail(q_62);
                      else
                        i_62 = q_62;
                      {
                        t = not_null(o_61);
                        {
                          ATerm y_2 (ATerm t)
                          {
                            ATerm r_62 = NULL,s_62 = NULL;
                            r_62 = t;
                            g_61 :
                            if(match_cons(r_62, sym_RootApp_1))
                              {
                                s_62 = ATgetArgument(r_62, 0);
                                {
                                  if(((c_62 != NULL) && (c_62 != s_62)))
                                    _fail(s_62);
                                  else
                                    c_62 = s_62;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_62));
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
                            t_62 = t;
                            if(((p_62 != NULL) && (p_62 != t_62)))
                              _fail(t_62);
                            else
                              p_62 = t_62;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_62)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_62), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_62))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_62))));
                  LocalPopChoice(h_15);
                }
              else
                {
                  t = g_15;
                  {
                    ATerm v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL;
                    ATerm z_62 = NULL;
                    ATerm d_63 = NULL;
                    t = new_0(t);
                    {
                      z_62 = t;
                      {
                        if(((x_62 != NULL) && (x_62 != z_62)))
                          _fail(z_62);
                        else
                          x_62 = z_62;
                        {
                          t = not_null(o_61);
                          {
                            ATerm z_2 (ATerm t)
                            {
                              ATerm a_63 = NULL,b_63 = NULL,c_63 = NULL;
                              a_63 = t;
                              k_61 :
                              if(match_cons(a_63, sym_App_2))
                                {
                                  b_63 = ATgetArgument(a_63, 0);
                                  c_63 = ATgetArgument(a_63, 1);
                                  {
                                    if(((v_62 != NULL) && (v_62 != b_63)))
                                      _fail(b_63);
                                    else
                                      v_62 = b_63;
                                    {
                                      if(((w_62 != NULL) && (w_62 != c_63)))
                                        _fail(c_63);
                                      else
                                        w_62 = c_63;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_62));
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
                              d_63 = t;
                              if(((y_62 != NULL) && (y_62 != d_63)))
                                _fail(d_63);
                              else
                                y_62 = d_63;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_62)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(v_62), not_null(w_62), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_62)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_62))));
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
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL;
  w_63 = t;
  v_63 :
  if(match_cons(w_63, sym__2))
    {
      x_63 = ATgetArgument(w_63, 0);
      y_63 = ATgetArgument(w_63, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_63)), not_null(x_63));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL;
  k_64 = t;
  h_64 :
  if(match_cons(k_64, sym__2))
    {
      l_64 = ATgetArgument(k_64, 0);
      o_64 = ATgetArgument(k_64, 1);
      i_64 :
      if(((ATgetType(l_64) == AT_LIST) && ((ATermList) l_64 != ATempty)))
        {
          m_64 = ATgetFirst((ATermList) l_64);
          n_64 = (ATerm) ATgetNext((ATermList) l_64);
          j_64 :
          if(((ATgetType(o_64) == AT_LIST) && ((ATermList) o_64 != ATempty)))
            {
              p_64 = ATgetFirst((ATermList) o_64);
              q_64 = (ATerm) ATgetNext((ATermList) o_64);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(m_64), not_null(p_64)), (ATerm) ATmakeAppl(sym__2, not_null(n_64), not_null(q_64)));
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
  ATerm i_65 = NULL,p_65 = NULL,u_65 = NULL;
  i_65 = t;
  d_65 :
  if(match_cons(i_65, sym__2))
    {
      p_65 = ATgetArgument(i_65, 0);
      u_65 = ATgetArgument(i_65, 1);
      g_65 :
      if(((ATermList) p_65 == ATempty))
        {
          h_65 :
          if(((ATermList) u_65 == ATempty))
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
ATerm zip_1 (ATerm t, ATerm v_113 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, v_113);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL;
  x_67 = t;
  u_66 :
  if(match_cons(x_67, sym_Call_2))
    {
      y_67 = ATgetArgument(x_67, 0);
      a_68 = ATgetArgument(x_67, 1);
      z_66 :
      if(match_cons(y_67, sym_SVar_1))
        {
          z_67 = ATgetArgument(y_67, 0);
          a_67 :
          if(match_string(z_67, "Anno_Cong__"))
            {
              b_67 :
              if(((ATgetType(a_68) == AT_LIST) && ((ATermList) a_68 != ATempty)))
                {
                  b_68 = ATgetFirst((ATermList) a_68);
                  e_68 = (ATerm) ATgetNext((ATermList) a_68);
                  o_67 :
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
                                ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,o_69 = NULL,q_69 = NULL,s_69 = NULL;
                                ATerm i_15;
                                i_15 = t;
                                {
                                  ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(d_68)), not_null(f_68));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      r_68 = t;
                                      m_66 :
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
                                                          l_66 :
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
                                                                    ATerm d_69 = NULL,n_69 = NULL;
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
                                                                                i_66 :
                                                                                if(match_cons(f_69, sym__2))
                                                                                  {
                                                                                    g_69 = ATgetArgument(f_69, 0);
                                                                                    j_69 = ATgetArgument(f_69, 1);
                                                                                    j_66 :
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
                                                                                n_69 = t;
                                                                                if(((q_68 != NULL) && (q_68 != n_69)))
                                                                                  _fail(n_69);
                                                                                else
                                                                                  q_68 = n_69;
                                                                              }
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
                                    ATerm p_69 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_68), not_null(p_68));
                                    {
                                      t = conc_0(t);
                                      {
                                        p_69 = t;
                                        if(((o_69 != NULL) && (o_69 != p_69)))
                                          _fail(p_69);
                                        else
                                          o_69 = p_69;
                                      }
                                    }
                                  }
                                  t = m_15;
                                  {
                                    ATerm n_15;
                                    n_15 = t;
                                    {
                                      ATerm r_69 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(c_68), not_null(l_68)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_68))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          r_69 = t;
                                          if(((q_69 != NULL) && (q_69 != r_69)))
                                            _fail(r_69);
                                          else
                                            q_69 = r_69;
                                        }
                                      }
                                    }
                                    t = n_15;
                                    {
                                      ATerm t_69 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(c_68), not_null(n_68)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_68))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          t_69 = t;
                                          if(((s_69 != NULL) && (s_69 != t_69)))
                                            _fail(t_69);
                                          else
                                            s_69 = t_69;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(o_69)), not_null(m_68)), not_null(k_68)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_69), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(q_68)), not_null(s_69))));
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
ATerm Prim_2 (ATerm t, ATerm e_93 (ATerm), ATerm f_93 (ATerm))
{
  ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL;
  n_70 = t;
  m_70 :
  if(match_cons(n_70, sym_Prim_2))
    {
      o_70 = ATgetArgument(n_70, 0);
      p_70 = ATgetArgument(n_70, 1);
      {
        ATerm t_70 = NULL,v_70 = NULL;
        ATerm u_70 = NULL;
        t = SSLgetAnnotations(not_null(n_70));
        {
          u_70 = t;
          if(((t_70 != NULL) && (t_70 != u_70)))
            _fail(u_70);
          else
            t_70 = u_70;
        }
        {
          t = not_null(o_70);
          {
            ATerm y_70 = NULL;
            t = e_93(t);
            {
              v_70 = t;
              {
                t = not_null(p_70);
                {
                  ATerm a_71 = NULL;
                  t = f_93(t);
                  {
                    y_70 = t;
                    {
                      ATerm b_71 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(v_70), not_null(y_70)), not_null(t_70));
                      {
                        b_71 = t;
                        if(((a_71 != NULL) && (a_71 != b_71)))
                          _fail(b_71);
                        else
                          a_71 = b_71;
                      }
                      t = not_null(a_71);
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
ATerm Explode_2 (ATerm t, ATerm j_89 (ATerm), ATerm k_89 (ATerm))
{
  ATerm o_71 = NULL,p_71 = NULL,n_72 = NULL;
  o_71 = t;
  n_71 :
  if(match_cons(o_71, sym_Explode_2))
    {
      p_71 = ATgetArgument(o_71, 0);
      n_72 = ATgetArgument(o_71, 1);
      {
        ATerm z_72 = NULL,n_73 = NULL;
        ATerm m_73 = NULL;
        t = SSLgetAnnotations(not_null(o_71));
        {
          m_73 = t;
          if(((z_72 != NULL) && (z_72 != m_73)))
            _fail(m_73);
          else
            z_72 = m_73;
        }
        {
          t = not_null(p_71);
          {
            ATerm p_73 = NULL;
            t = j_89(t);
            {
              n_73 = t;
              {
                t = not_null(n_72);
                {
                  ATerm r_73 = NULL;
                  t = k_89(t);
                  {
                    p_73 = t;
                    {
                      ATerm s_73 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(n_73), not_null(p_73)), not_null(z_72));
                      {
                        s_73 = t;
                        if(((r_73 != NULL) && (r_73 != s_73)))
                          _fail(s_73);
                        else
                          r_73 = s_73;
                      }
                      t = not_null(r_73);
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
ATerm Op_2 (ATerm t, ATerm e_91 (ATerm), ATerm f_91 (ATerm))
{
  ATerm s_74 = NULL,t_74 = NULL,z_74 = NULL;
  s_74 = t;
  i_74 :
  if(match_cons(s_74, sym_Op_2))
    {
      t_74 = ATgetArgument(s_74, 0);
      z_74 = ATgetArgument(s_74, 1);
      {
        ATerm m_75 = NULL,o_75 = NULL;
        ATerm n_75 = NULL;
        t = SSLgetAnnotations(not_null(s_74));
        {
          n_75 = t;
          if(((m_75 != NULL) && (m_75 != n_75)))
            _fail(n_75);
          else
            m_75 = n_75;
        }
        {
          t = not_null(t_74);
          {
            ATerm q_75 = NULL;
            t = e_91(t);
            {
              o_75 = t;
              {
                t = not_null(z_74);
                {
                  ATerm s_75 = NULL;
                  t = f_91(t);
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
ATerm pat_td_1 (ATerm t, ATerm g_121 (ATerm))
{
  ATerm o_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_121(t);
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
                t = pat_td_1(t, g_121);
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
                    t = pat_td_1(t, g_121);
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
                          t = pat_td_1(t, g_121);
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
                              t = pat_td_1(t, g_121);
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
  ATerm p_76 = NULL,q_76 = NULL;
  p_76 = t;
  o_76 :
  if(match_cons(p_76, sym_Match_1))
    {
      q_76 = ATgetArgument(p_76, 0);
      {
        ATerm e_16 = t;
        int f_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL;
            ATerm w_76 = NULL;
            ATerm a_77 = NULL;
            t = new_0(t);
            {
              w_76 = t;
              {
                if(((u_76 != NULL) && (u_76 != w_76)))
                  _fail(w_76);
                else
                  u_76 = w_76;
                {
                  t = not_null(q_76);
                  {
                    ATerm j_3 (ATerm t)
                    {
                      ATerm x_76 = NULL,y_76 = NULL,z_76 = NULL;
                      x_76 = t;
                      e_76 :
                      if(match_cons(x_76, sym_Anno_2))
                        {
                          y_76 = ATgetArgument(x_76, 0);
                          z_76 = ATgetArgument(x_76, 1);
                          {
                            if(((s_76 != NULL) && (s_76 != y_76)))
                              _fail(y_76);
                            else
                              s_76 = y_76;
                            {
                              if(((t_76 != NULL) && (t_76 != z_76)))
                                _fail(z_76);
                              else
                                t_76 = z_76;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_76)), not_null(s_76));
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
                      a_77 = t;
                      if(((v_76 != NULL) && (v_76 != a_77)))
                        _fail(a_77);
                      else
                        v_76 = a_77;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_76)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_76)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_h_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_76)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_76))))));
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
                  ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL;
                  ATerm f_77 = NULL;
                  ATerm i_77 = NULL;
                  t = new_0(t);
                  {
                    f_77 = t;
                    {
                      if(((d_77 != NULL) && (d_77 != f_77)))
                        _fail(f_77);
                      else
                        d_77 = f_77;
                      {
                        t = not_null(q_76);
                        {
                          ATerm k_3 (ATerm t)
                          {
                            ATerm g_77 = NULL,h_77 = NULL;
                            g_77 = t;
                            i_76 :
                            if(match_cons(g_77, sym_RootApp_1))
                              {
                                h_77 = ATgetArgument(g_77, 0);
                                {
                                  if(((c_77 != NULL) && (c_77 != h_77)))
                                    _fail(h_77);
                                  else
                                    c_77 = h_77;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_77));
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
                            i_77 = t;
                            if(((e_77 != NULL) && (e_77 != i_77)))
                              _fail(i_77);
                            else
                              e_77 = i_77;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_77)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_77)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_77))), not_null(c_77))));
                  LocalPopChoice(q_16);
                }
              else
                {
                  t = p_16;
                  {
                    ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL;
                    ATerm o_77 = NULL;
                    ATerm s_77 = NULL;
                    t = new_0(t);
                    {
                      o_77 = t;
                      {
                        if(((m_77 != NULL) && (m_77 != o_77)))
                          _fail(o_77);
                        else
                          m_77 = o_77;
                        {
                          t = not_null(q_76);
                          {
                            ATerm l_3 (ATerm t)
                            {
                              ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL;
                              p_77 = t;
                              m_76 :
                              if(match_cons(p_77, sym_App_2))
                                {
                                  q_77 = ATgetArgument(p_77, 0);
                                  r_77 = ATgetArgument(p_77, 1);
                                  {
                                    if(((l_77 != NULL) && (l_77 != q_77)))
                                      _fail(q_77);
                                    else
                                      l_77 = q_77;
                                    {
                                      if(((k_77 != NULL) && (k_77 != r_77)))
                                        _fail(r_77);
                                      else
                                        k_77 = r_77;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_77));
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
                              s_77 = t;
                              if(((n_77 != NULL) && (n_77 != s_77)))
                                _fail(s_77);
                              else
                                n_77 = s_77;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_77)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_77)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_77))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_77)), not_null(l_77)))));
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
  ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL;
  b_81 = t;
  a_81 :
  if(match_cons(b_81, sym_Cong_2))
    {
      c_81 = ATgetArgument(b_81, 0);
      d_81 = ATgetArgument(b_81, 1);
      {
        ATerm g_81 = NULL;
        ATerm k_81 = NULL;
        t = not_null(d_81);
        {
          ATerm m_3 (ATerm t)
          {
            ATerm h_81 = NULL,i_81 = NULL;
            i_81 = t;
            w_80 :
            if(match_cons(i_81, sym_Match_1))
              {
                h_81 = ATgetArgument(i_81, 0);
                t = not_null(h_81);
              }
            else
              {
                if(match_cons(i_81, sym_Id_0))
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
            k_81 = t;
            if(((g_81 != NULL) && (g_81 != k_81)))
              _fail(k_81);
            else
              g_81 = k_81;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(c_81), not_null(g_81)));
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
  ATerm s_81 = NULL,t_81 = NULL,u_81 = NULL;
  s_81 = t;
  q_81 :
  if(match_cons(s_81, sym_Scope_2))
    {
      t_81 = ATgetArgument(s_81, 0);
      u_81 = ATgetArgument(s_81, 1);
      r_81 :
      if(((ATermList) t_81 == ATempty))
        {
          t = not_null(u_81);
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
  ATerm k_82 = NULL,l_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL,t_82 = NULL,u_82 = NULL;
  s_82 = t;
  d_82 :
  if(match_cons(s_82, sym_Where_1))
    {
      t_82 = ATgetArgument(s_82, 0);
      e_82 :
      if(match_cons(t_82, sym_Seq_2))
        {
          r_82 = ATgetArgument(t_82, 0);
          l_82 = ATgetArgument(t_82, 1);
          f_82 :
          if(match_cons(r_82, sym_Where_1))
            {
              k_82 = ATgetArgument(r_82, 0);
              g_82 :
              if(match_cons(l_82, sym_Seq_2))
                {
                  o_82 = ATgetArgument(l_82, 0);
                  q_82 = ATgetArgument(l_82, 1);
                  h_82 :
                  if(match_cons(o_82, sym_Build_1))
                    {
                      p_82 = ATgetArgument(o_82, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_82), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_82)), not_null(q_82))));
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
          i_82 :
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
              j_82 :
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
  ATerm s_86 = NULL,t_86 = NULL,u_86 = NULL;
  s_86 = t;
  q_86 :
  if(match_cons(s_86, sym_LChoice_2))
    {
      t_86 = ATgetArgument(s_86, 0);
      u_86 = ATgetArgument(s_86, 1);
      r_86 :
      if(match_cons(u_86, sym_Fail_0))
        {
          t = not_null(t_86);
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
  ATerm a_87 = NULL,b_87 = NULL,c_87 = NULL;
  a_87 = t;
  y_86 :
  if(match_cons(a_87, sym_LChoice_2))
    {
      b_87 = ATgetArgument(a_87, 0);
      c_87 = ATgetArgument(a_87, 1);
      z_86 :
      if(match_cons(b_87, sym_Fail_0))
        {
          t = not_null(c_87);
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
  ATerm i_87 = NULL,j_87 = NULL,k_87 = NULL;
  i_87 = t;
  g_87 :
  if(match_cons(i_87, sym_Choice_2))
    {
      j_87 = ATgetArgument(i_87, 0);
      k_87 = ATgetArgument(i_87, 1);
      h_87 :
      if(match_cons(k_87, sym_Fail_0))
        {
          t = not_null(j_87);
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
  ATerm q_87 = NULL,r_87 = NULL,s_87 = NULL;
  q_87 = t;
  o_87 :
  if(match_cons(q_87, sym_Choice_2))
    {
      r_87 = ATgetArgument(q_87, 0);
      s_87 = ATgetArgument(q_87, 1);
      p_87 :
      if(match_cons(r_87, sym_Fail_0))
        {
          t = not_null(s_87);
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
  ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL;
  y_87 = t;
  x_87 :
  if(match_cons(y_87, sym_Cong_2))
    {
      z_87 = ATgetArgument(y_87, 0);
      a_88 = ATgetArgument(y_87, 1);
      {
        t = not_null(a_88);
        {
          ATerm n_3 (ATerm t)
          {
            ATerm g_88 = NULL;
            g_88 = t;
            w_87 :
            if(!(match_cons(g_88, sym_Fail_0)))
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
  ATerm m_88 = NULL,n_88 = NULL,o_88 = NULL;
  m_88 = t;
  k_88 :
  if(match_cons(m_88, sym_Path_2))
    {
      n_88 = ATgetArgument(m_88, 0);
      o_88 = ATgetArgument(m_88, 1);
      l_88 :
      if(match_cons(o_88, sym_Fail_0))
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
  ATerm u_88 = NULL,v_88 = NULL;
  u_88 = t;
  s_88 :
  if(match_cons(u_88, sym_One_1))
    {
      v_88 = ATgetArgument(u_88, 0);
      t_88 :
      if(match_cons(v_88, sym_Fail_0))
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
  ATerm a_89 = NULL,b_89 = NULL;
  a_89 = t;
  y_88 :
  if(match_cons(a_89, sym_Some_1))
    {
      b_89 = ATgetArgument(a_89, 0);
      z_88 :
      if(match_cons(b_89, sym_Fail_0))
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
  ATerm g_89 = NULL,h_89 = NULL,i_89 = NULL;
  g_89 = t;
  e_89 :
  if(match_cons(g_89, sym_Rec_2))
    {
      h_89 = ATgetArgument(g_89, 0);
      i_89 = ATgetArgument(g_89, 1);
      f_89 :
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
ATerm F5_0 (ATerm t)
{
  ATerm s_89 = NULL,t_89 = NULL,u_89 = NULL;
  s_89 = t;
  q_89 :
  if(match_cons(s_89, sym_Scope_2))
    {
      t_89 = ATgetArgument(s_89, 0);
      u_89 = ATgetArgument(s_89, 1);
      r_89 :
      if(match_cons(u_89, sym_Fail_0))
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
  ATerm a_90 = NULL,b_90 = NULL,c_90 = NULL;
  a_90 = t;
  y_89 :
  if(match_cons(a_90, sym_Seq_2))
    {
      b_90 = ATgetArgument(a_90, 0);
      c_90 = ATgetArgument(a_90, 1);
      z_89 :
      if(match_cons(b_90, sym_Fail_0))
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
  ATerm j_90 = NULL,k_90 = NULL;
  j_90 = t;
  h_90 :
  if(match_cons(j_90, sym_Not_1))
    {
      k_90 = ATgetArgument(j_90, 0);
      i_90 :
      if(match_cons(k_90, sym_Fail_0))
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
  ATerm r_90 = NULL,s_90 = NULL;
  r_90 = t;
  n_90 :
  if(match_cons(r_90, sym_Test_1))
    {
      s_90 = ATgetArgument(r_90, 0);
      p_90 :
      if(match_cons(s_90, sym_Fail_0))
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
  ATerm x_90 = NULL,y_90 = NULL;
  x_90 = t;
  v_90 :
  if(match_cons(x_90, sym_Match_1))
    {
      y_90 = ATgetArgument(x_90, 0);
      w_90 :
      if(match_cons(y_90, sym_Wld_0))
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
  ATerm d_91 = NULL,g_91 = NULL;
  d_91 = t;
  b_91 :
  if(match_cons(d_91, sym_Where_1))
    {
      g_91 = ATgetArgument(d_91, 0);
      c_91 :
      if(match_cons(g_91, sym_Id_0))
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
  ATerm l_91 = NULL,m_91 = NULL;
  l_91 = t;
  j_91 :
  if(match_cons(l_91, sym_All_1))
    {
      m_91 = ATgetArgument(l_91, 0);
      k_91 :
      if(match_cons(m_91, sym_Id_0))
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
  ATerm r_91 = NULL,s_91 = NULL,t_91 = NULL;
  r_91 = t;
  p_91 :
  if(match_cons(r_91, sym_Rec_2))
    {
      s_91 = ATgetArgument(r_91, 0);
      t_91 = ATgetArgument(r_91, 1);
      q_91 :
      if(match_cons(t_91, sym_Id_0))
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
  ATerm h_92 = NULL,i_92 = NULL,j_92 = NULL;
  h_92 = t;
  f_92 :
  if(match_cons(h_92, sym_Scope_2))
    {
      i_92 = ATgetArgument(h_92, 0);
      j_92 = ATgetArgument(h_92, 1);
      g_92 :
      if(match_cons(j_92, sym_Id_0))
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
  ATerm r_92 = NULL,s_92 = NULL,t_92 = NULL;
  r_92 = t;
  p_92 :
  if(match_cons(r_92, sym_LChoice_2))
    {
      s_92 = ATgetArgument(r_92, 0);
      t_92 = ATgetArgument(r_92, 1);
      q_92 :
      if(match_cons(s_92, sym_Id_0))
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
  ATerm a_93 = NULL,d_93 = NULL,i_93 = NULL;
  a_93 = t;
  x_92 :
  if(match_cons(a_93, sym_Seq_2))
    {
      d_93 = ATgetArgument(a_93, 0);
      i_93 = ATgetArgument(a_93, 1);
      z_92 :
      if(match_cons(i_93, sym_Id_0))
        {
          t = not_null(d_93);
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
  ATerm z_93 = NULL,a_94 = NULL;
  z_93 = t;
  x_93 :
  if(match_cons(z_93, sym_Not_1))
    {
      a_94 = ATgetArgument(z_93, 0);
      y_93 :
      if(match_cons(a_94, sym_Id_0))
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
  ATerm f_94 = NULL,g_94 = NULL;
  f_94 = t;
  d_94 :
  if(match_cons(f_94, sym_Test_1))
    {
      g_94 = ATgetArgument(f_94, 0);
      e_94 :
      if(match_cons(g_94, sym_Id_0))
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
  ATerm z_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL,i_96 = NULL,j_96 = NULL,l_96 = NULL,o_96 = NULL;
  d_96 = t;
  f_95 :
  if(match_cons(d_96, sym_LChoice_2))
    {
      e_96 = ATgetArgument(d_96, 0);
      o_96 = ATgetArgument(d_96, 1);
      g_95 :
      if(match_cons(e_96, sym_Matrix_2))
        {
          f_96 = ATgetArgument(e_96, 0);
          g_96 = ATgetArgument(e_96, 1);
          h_95 :
          if(match_cons(o_96, sym_Choice_2))
            {
              b_96 = ATgetArgument(o_96, 0);
              c_96 = ATgetArgument(o_96, 1);
              i_95 :
              if(match_cons(b_96, sym_Matrix_2))
                {
                  z_95 = ATgetArgument(b_96, 0);
                  a_96 = ATgetArgument(b_96, 1);
                  {
                    ATerm u_96 = NULL,w_96 = NULL;
                    ATerm c_22;
                    c_22 = t;
                    {
                      ATerm v_96 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_96), not_null(z_95));
                      {
                        t = union_0(t);
                        {
                          v_96 = t;
                          if(((u_96 != NULL) && (u_96 != v_96)))
                            _fail(v_96);
                          else
                            u_96 = v_96;
                        }
                      }
                    }
                    t = c_22;
                    {
                      ATerm x_96 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(g_96), not_null(a_96));
                      {
                        t = conc_0(t);
                        {
                          x_96 = t;
                          if(((w_96 != NULL) && (w_96 != x_96)))
                            _fail(x_96);
                          else
                            w_96 = x_96;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(u_96), not_null(w_96)), not_null(c_96));
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
              if(match_cons(o_96, sym_LChoice_2))
                {
                  b_96 = ATgetArgument(o_96, 0);
                  c_96 = ATgetArgument(o_96, 1);
                  j_95 :
                  if(match_cons(b_96, sym_Matrix_2))
                    {
                      z_95 = ATgetArgument(b_96, 0);
                      a_96 = ATgetArgument(b_96, 1);
                      {
                        ATerm d_97 = NULL,f_97 = NULL;
                        ATerm h_22;
                        h_22 = t;
                        {
                          ATerm e_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(f_96), not_null(z_95));
                          {
                            t = union_0(t);
                            {
                              e_97 = t;
                              if(((d_97 != NULL) && (d_97 != e_97)))
                                _fail(e_97);
                              else
                                d_97 = e_97;
                            }
                          }
                        }
                        t = h_22;
                        {
                          ATerm g_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_96), not_null(a_96));
                          {
                            t = conc_0(t);
                            {
                              g_97 = t;
                              if(((f_97 != NULL) && (f_97 != g_97)))
                                _fail(g_97);
                              else
                                f_97 = g_97;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(d_97), not_null(f_97)), not_null(c_96));
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
                  if(match_cons(o_96, sym_Matrix_2))
                    {
                      b_96 = ATgetArgument(o_96, 0);
                      c_96 = ATgetArgument(o_96, 1);
                      {
                        ATerm l_97 = NULL,n_97 = NULL;
                        ATerm i_22;
                        i_22 = t;
                        {
                          ATerm m_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(f_96), not_null(b_96));
                          {
                            t = union_0(t);
                            {
                              m_97 = t;
                              if(((l_97 != NULL) && (l_97 != m_97)))
                                _fail(m_97);
                              else
                                l_97 = m_97;
                            }
                          }
                        }
                        t = i_22;
                        {
                          ATerm p_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_96), not_null(c_96));
                          {
                            t = conc_0(t);
                            {
                              p_97 = t;
                              if(((n_97 != NULL) && (n_97 != p_97)))
                                _fail(p_97);
                              else
                                n_97 = p_97;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(l_97), not_null(n_97));
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
      if(match_cons(d_96, sym_Choice_2))
        {
          e_96 = ATgetArgument(d_96, 0);
          o_96 = ATgetArgument(d_96, 1);
          k_95 :
          if(match_cons(e_96, sym_Matrix_2))
            {
              f_96 = ATgetArgument(e_96, 0);
              g_96 = ATgetArgument(e_96, 1);
              r_95 :
              if(match_cons(o_96, sym_LChoice_2))
                {
                  b_96 = ATgetArgument(o_96, 0);
                  c_96 = ATgetArgument(o_96, 1);
                  s_95 :
                  if(match_cons(b_96, sym_Matrix_2))
                    {
                      z_95 = ATgetArgument(b_96, 0);
                      a_96 = ATgetArgument(b_96, 1);
                      {
                        ATerm e_98 = NULL,g_98 = NULL;
                        ATerm j_22;
                        j_22 = t;
                        {
                          ATerm f_98 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(f_96), not_null(z_95));
                          {
                            t = union_0(t);
                            {
                              f_98 = t;
                              if(((e_98 != NULL) && (e_98 != f_98)))
                                _fail(f_98);
                              else
                                e_98 = f_98;
                            }
                          }
                        }
                        t = j_22;
                        {
                          ATerm h_98 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_96), not_null(a_96));
                          {
                            t = conc_0(t);
                            {
                              h_98 = t;
                              if(((g_98 != NULL) && (g_98 != h_98)))
                                _fail(h_98);
                              else
                                g_98 = h_98;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(e_98), not_null(g_98)), not_null(c_96));
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
                  if(match_cons(o_96, sym_Choice_2))
                    {
                      b_96 = ATgetArgument(o_96, 0);
                      c_96 = ATgetArgument(o_96, 1);
                      t_95 :
                      if(match_cons(b_96, sym_Matrix_2))
                        {
                          z_95 = ATgetArgument(b_96, 0);
                          a_96 = ATgetArgument(b_96, 1);
                          {
                            ATerm p_98 = NULL,r_98 = NULL;
                            ATerm k_22;
                            k_22 = t;
                            {
                              ATerm q_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(f_96), not_null(z_95));
                              {
                                t = union_0(t);
                                {
                                  q_98 = t;
                                  if(((p_98 != NULL) && (p_98 != q_98)))
                                    _fail(q_98);
                                  else
                                    p_98 = q_98;
                                }
                              }
                            }
                            t = k_22;
                            {
                              ATerm s_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(g_96), not_null(a_96));
                              {
                                t = conc_0(t);
                                {
                                  s_98 = t;
                                  if(((r_98 != NULL) && (r_98 != s_98)))
                                    _fail(s_98);
                                  else
                                    r_98 = s_98;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(p_98), not_null(r_98)), not_null(c_96));
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
                      if(match_cons(o_96, sym_Matrix_2))
                        {
                          b_96 = ATgetArgument(o_96, 0);
                          c_96 = ATgetArgument(o_96, 1);
                          {
                            ATerm x_98 = NULL,z_98 = NULL;
                            ATerm l_22;
                            l_22 = t;
                            {
                              ATerm y_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(f_96), not_null(b_96));
                              {
                                t = union_0(t);
                                {
                                  y_98 = t;
                                  if(((x_98 != NULL) && (x_98 != y_98)))
                                    _fail(y_98);
                                  else
                                    x_98 = y_98;
                                }
                              }
                            }
                            t = l_22;
                            {
                              ATerm a_99 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(g_96), not_null(c_96));
                              {
                                t = conc_0(t);
                                {
                                  a_99 = t;
                                  if(((z_98 != NULL) && (z_98 != a_99)))
                                    _fail(a_99);
                                  else
                                    z_98 = a_99;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(x_98), not_null(z_98));
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
          if(match_cons(d_96, sym_Scope_2))
            {
              e_96 = ATgetArgument(d_96, 0);
              o_96 = ATgetArgument(d_96, 1);
              u_95 :
              if(match_cons(o_96, sym_Matrix_2))
                {
                  b_96 = ATgetArgument(o_96, 0);
                  c_96 = ATgetArgument(o_96, 1);
                  {
                    ATerm f_99 = NULL;
                    ATerm l_99 = NULL;
                    t = not_null(c_96);
                    {
                      ATerm o_3 (ATerm t)
                      {
                        ATerm g_99 = NULL,h_99 = NULL,i_99 = NULL;
                        g_99 = t;
                        d_95 :
                        if(match_cons(g_99, sym_Row_2))
                          {
                            h_99 = ATgetArgument(g_99, 0);
                            i_99 = ATgetArgument(g_99, 1);
                            t = (ATerm) ATmakeAppl(sym_Row_2, not_null(h_99), (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_96), not_null(i_99)));
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = map_1(t, o_3);
                      {
                        l_99 = t;
                        if(((f_99 != NULL) && (f_99 != l_99)))
                          _fail(l_99);
                        else
                          f_99 = l_99;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(b_96), not_null(f_99));
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(d_96, sym_Seq_2))
                {
                  e_96 = ATgetArgument(d_96, 0);
                  o_96 = ATgetArgument(d_96, 1);
                  v_95 :
                  if(match_cons(e_96, sym_Matrix_2))
                    {
                      f_96 = ATgetArgument(e_96, 0);
                      g_96 = ATgetArgument(e_96, 1);
                      w_95 :
                      if(((ATgetType(g_96) == AT_LIST) && ((ATermList) g_96 != ATempty)))
                        {
                          h_96 = ATgetFirst((ATermList) g_96);
                          l_96 = (ATerm) ATgetNext((ATermList) g_96);
                          x_95 :
                          if(match_cons(h_96, sym_Row_2))
                            {
                              i_96 = ATgetArgument(h_96, 0);
                              j_96 = ATgetArgument(h_96, 1);
                              y_95 :
                              if(((ATermList) l_96 == ATempty))
                                {
                                  t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(f_96), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(i_96), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_96), not_null(o_96)))));
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
ATerm foldr_3 (ATerm t, ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm j_108 (ATerm))
{
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_108(t);
      LocalPopChoice(r_22);
    }
  else
    {
      t = q_22;
      {
        ATerm v_100 = NULL,w_100 = NULL,x_100 = NULL;
        v_100 = t;
        u_100 :
        if(((ATgetType(v_100) == AT_LIST) && ((ATermList) v_100 != ATempty)))
          {
            w_100 = ATgetFirst((ATermList) v_100);
            x_100 = (ATerm) ATgetNext((ATermList) v_100);
            {
              ATerm a_101 = NULL,c_101 = NULL;
              ATerm t_22;
              t_22 = t;
              {
                ATerm b_101 = NULL;
                t = not_null(w_100);
                {
                  t = j_108(t);
                  {
                    b_101 = t;
                    if(((a_101 != NULL) && (a_101 != b_101)))
                      _fail(b_101);
                    else
                      a_101 = b_101;
                  }
                }
              }
              t = t_22;
              {
                ATerm d_101 = NULL;
                t = not_null(x_100);
                {
                  t = foldr_3(t, h_108, i_108, j_108);
                  {
                    d_101 = t;
                    if(((c_101 != NULL) && (c_101 != d_101)))
                      _fail(d_101);
                    else
                      c_101 = d_101;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_101), not_null(c_101));
                  t = i_108(t);
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
ATerm crush_3 (ATerm t, ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm y_109 (ATerm))
{
  ATerm l_101 = NULL;
  ATerm n_101 = NULL;
  l_101 = t;
  {
    ATerm o_101 = NULL;
    ATerm q_101 = NULL,r_101 = NULL,s_101 = NULL;
    t = not_null(l_101);
    {
      o_101 = t;
      {
        t = SSL_explode_term(not_null(o_101));
        {
          q_101 = t;
          k_101 :
          if(match_cons(q_101, sym__2))
            {
              r_101 = ATgetArgument(q_101, 0);
              s_101 = ATgetArgument(q_101, 1);
              if(((n_101 != NULL) && (n_101 != s_101)))
                _fail(s_101);
              else
                n_101 = s_101;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(n_101);
      t = foldr_3(t, w_109, x_109, y_109);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm n_110 (ATerm))
{
  ATerm z_101 (ATerm t)
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_101 = NULL;
        ATerm y_101 = NULL;
        t = n_110(t);
        {
          y_101 = t;
          if(((x_101 != NULL) && (x_101 != y_101)))
            _fail(y_101);
          else
            x_101 = y_101;
        }
        t = (ATerm) ATinsert(ATempty, not_null(x_101));
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
          t = crush_3(t, p_3, union_0, z_101);
        }
      }
    return(t);
  }
  t = z_101(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm p_110 (ATerm))
{
  t = collect_om_1(t, p_110);
  return(t);
}
ATerm collect_offsets_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm d_102 = NULL,e_102 = NULL;
    d_102 = t;
    c_102 :
    if(match_cons(d_102, sym_Off_1))
      {
        e_102 = ATgetArgument(d_102, 0);
        t = not_null(e_102);
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
  ATerm o_102 = NULL,p_102 = NULL,q_102 = NULL,r_102 = NULL,s_102 = NULL,t_102 = NULL,u_102 = NULL;
  q_102 = t;
  j_102 :
  if(match_cons(q_102, sym_As_2))
    {
      r_102 = ATgetArgument(q_102, 0);
      t_102 = ATgetArgument(q_102, 1);
      k_102 :
      if(match_cons(r_102, sym_Var_1))
        {
          s_102 = ATgetArgument(r_102, 0);
          l_102 :
          if(match_cons(t_102, sym_As_2))
            {
              u_102 = ATgetArgument(t_102, 0);
              p_102 = ATgetArgument(t_102, 1);
              m_102 :
              if(match_cons(u_102, sym_Off_1))
                {
                  o_102 = ATgetArgument(u_102, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_102)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_102))));
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
          if(match_cons(r_102, sym_Off_1))
            {
              s_102 = ATgetArgument(r_102, 0);
              n_102 :
              if(match_cons(t_102, sym_Var_1))
                {
                  u_102 = ATgetArgument(t_102, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_102)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_102))));
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
  ATerm h_103 = NULL,i_103 = NULL,j_103 = NULL;
  h_103 = t;
  g_103 :
  if(((ATermList) h_103 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(h_103) == AT_LIST) && ((ATermList) h_103 != ATempty)))
        {
          i_103 = ATgetFirst((ATermList) h_103);
          j_103 = (ATerm) ATgetNext((ATermList) h_103);
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
  ATerm x_103 = NULL,y_103 = NULL,z_103 = NULL,a_104 = NULL,b_104 = NULL,c_104 = NULL,d_104 = NULL;
  z_103 = t;
  m_103 :
  if(match_cons(z_103, sym_As_2))
    {
      a_104 = ATgetArgument(z_103, 0);
      c_104 = ATgetArgument(z_103, 1);
      n_103 :
      if(match_cons(a_104, sym_Var_1))
        {
          b_104 = ATgetArgument(a_104, 0);
          o_103 :
          if(match_cons(c_104, sym_As_2))
            {
              d_104 = ATgetArgument(c_104, 0);
              y_103 = ATgetArgument(c_104, 1);
              p_103 :
              if(match_cons(d_104, sym_Off_1))
                {
                  x_103 = ATgetArgument(d_104, 0);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(x_103)), not_null(y_103));
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
          if(match_cons(a_104, sym_Off_1))
            {
              b_104 = ATgetArgument(a_104, 0);
              w_103 :
              if(match_cons(c_104, sym_Var_1))
                {
                  d_104 = ATgetArgument(c_104, 0);
                  {
                    t = not_null(b_104);
                    t = is_list_0(t);
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(b_104)), term_w_11);
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
ATerm HdMember_1 (ATerm t, ATerm l_109 (ATerm))
{
  ATerm p_104 = NULL,q_104 = NULL,r_104 = NULL;
  p_104 = t;
  o_104 :
  if(((ATgetType(p_104) == AT_LIST) && ((ATermList) p_104 != ATempty)))
    {
      q_104 = ATgetFirst((ATermList) p_104);
      r_104 = (ATerm) ATgetNext((ATermList) p_104);
      {
        t = l_109(t);
        {
          ATerm r_3 (ATerm t)
          {
            ATerm u_104 = NULL;
            u_104 = t;
            if(((q_104 != NULL) && (q_104 != u_104)))
              _fail(u_104);
            else
              q_104 = u_104;
            return(t);
          }
          t = fetch_1(t, r_3);
        }
        t = not_null(r_104);
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
  ATerm z_104 = NULL,a_105 = NULL,b_105 = NULL;
  z_104 = t;
  y_104 :
  if(match_cons(z_104, sym__2))
    {
      a_105 = ATgetArgument(z_104, 0);
      b_105 = ATgetArgument(z_104, 1);
      {
        t = not_null(a_105);
        {
          ATerm j_105 (ATerm t)
          {
            ATerm x_22 = t;
            int z_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(b_105);
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
                        t = not_null(b_105);
                        return(t);
                      }
                      t = HdMember_1(t, s_3);
                      t = j_105(t);
                      LocalPopChoice(e_23);
                    }
                  else
                    {
                      t = a_23;
                      t = Cons_2(t, _id, j_105);
                    }
                }
              }
            return(t);
          }
          t = j_105(t);
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
  ATerm o_105 = NULL,p_105 = NULL,q_105 = NULL,r_105 = NULL,s_105 = NULL,t_105 = NULL,u_105 = NULL;
  o_105 = t;
  l_105 :
  if(match_cons(o_105, sym__2))
    {
      p_105 = ATgetArgument(o_105, 0);
      s_105 = ATgetArgument(o_105, 1);
      m_105 :
      if(match_cons(p_105, sym__2))
        {
          q_105 = ATgetArgument(p_105, 0);
          r_105 = ATgetArgument(p_105, 1);
          n_105 :
          if(match_cons(s_105, sym__2))
            {
              t_105 = ATgetArgument(s_105, 0);
              u_105 = ATgetArgument(s_105, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_105)), not_null(q_105)), (ATerm) ATinsert(CheckATermList(not_null(u_105)), not_null(r_105)));
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
  ATerm f_106 = NULL,g_106 = NULL,h_106 = NULL;
  f_106 = t;
  e_106 :
  if(((ATgetType(f_106) == AT_LIST) && ((ATermList) f_106 != ATempty)))
    {
      g_106 = ATgetFirst((ATermList) f_106);
      h_106 = (ATerm) ATgetNext((ATermList) f_106);
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_106), not_null(h_106));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm n_106 = NULL;
  n_106 = t;
  m_106 :
  if(((ATermList) n_106 == ATempty))
    {
      t = term_f_23;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm a_114 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, a_114);
  return(t);
}
ATerm CollectSplit_2 (ATerm t, ATerm h_111 (ATerm), ATerm i_111 (ATerm))
{
  ATerm d_107 = NULL;
  ATerm n_107 = NULL,o_107 = NULL,u_107 = NULL,v_107 = NULL,w_107 = NULL,x_107 = NULL,l_108 = NULL;
  d_107 = t;
  {
    ATerm g_23;
    g_23 = t;
    {
      ATerm p_107 = NULL;
      ATerm r_107 = NULL,s_107 = NULL,t_107 = NULL;
      t = not_null(d_107);
      {
        p_107 = t;
        {
          t = SSL_explode_term(not_null(p_107));
          {
            r_107 = t;
            t_106 :
            if(match_cons(r_107, sym__2))
              {
                s_107 = ATgetArgument(r_107, 0);
                t_107 = ATgetArgument(r_107, 1);
                {
                  if(((n_107 != NULL) && (n_107 != s_107)))
                    _fail(s_107);
                  else
                    n_107 = s_107;
                  if(((o_107 != NULL) && (o_107 != t_107)))
                    _fail(t_107);
                  else
                    o_107 = t_107;
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
        ATerm y_107 = NULL,z_107 = NULL,a_108 = NULL;
        t = not_null(o_107);
        {
          t = unzip_1(t, h_111);
          {
            y_107 = t;
            a_107 :
            if(match_cons(y_107, sym__2))
              {
                z_107 = ATgetArgument(y_107, 0);
                a_108 = ATgetArgument(y_107, 1);
                {
                  ATerm b_108 = NULL;
                  if(((v_107 != NULL) && (v_107 != z_107)))
                    _fail(z_107);
                  else
                    v_107 = z_107;
                  {
                    if(((u_107 != NULL) && (u_107 != a_108)))
                      _fail(a_108);
                    else
                      u_107 = a_108;
                    {
                      ATerm d_108 = NULL,e_108 = NULL,k_108 = NULL;
                      t = SSL_mkterm(not_null(n_107), not_null(v_107));
                      {
                        b_108 = t;
                        {
                          t = i_111(t);
                          {
                            d_108 = t;
                            x_106 :
                            if(match_cons(d_108, sym__2))
                              {
                                e_108 = ATgetArgument(d_108, 0);
                                k_108 = ATgetArgument(d_108, 1);
                                {
                                  if(((w_107 != NULL) && (w_107 != e_108)))
                                    _fail(e_108);
                                  else
                                    w_107 = e_108;
                                  if(((x_107 != NULL) && (x_107 != k_108)))
                                    _fail(k_108);
                                  else
                                    x_107 = k_108;
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
        ATerm m_108 = NULL,o_108 = NULL;
        ATerm n_108 = NULL;
        t = not_null(u_107);
        {
          t = unions_0(t);
          {
            n_108 = t;
            if(((m_108 != NULL) && (m_108 != n_108)))
              _fail(n_108);
            else
              m_108 = n_108;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_107), not_null(m_108));
          {
            t = union_0(t);
            {
              o_108 = t;
              if(((l_108 != NULL) && (l_108 != o_108)))
                _fail(o_108);
              else
                l_108 = o_108;
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_107), not_null(l_108));
      }
    }
  }
  return(t);
}
ATerm collect_split_2 (ATerm t, ATerm e_111 (ATerm), ATerm f_111 (ATerm))
{
  ATerm d_109 (ATerm t)
  {
    ATerm u_3 (ATerm t)
    {
      ATerm z_108 = NULL,b_109 = NULL;
      ATerm l_23;
      l_23 = t;
      {
        ATerm a_109 = NULL;
        t = try_1(t, e_111);
        {
          a_109 = t;
          if(((z_108 != NULL) && (z_108 != a_109)))
            _fail(a_109);
          else
            z_108 = a_109;
        }
      }
      t = l_23;
      {
        ATerm c_109 = NULL;
        ATerm m_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_111(t);
            LocalPopChoice(q_23);
          }
        else
          {
            t = m_23;
            t = (ATerm) ATempty;
          }
        {
          c_109 = t;
          if(((b_109 != NULL) && (b_109 != c_109)))
            _fail(c_109);
          else
            b_109 = c_109;
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_108), not_null(b_109));
      }
      return(t);
    }
    t = CollectSplit_2(t, d_109, u_3);
    return(t);
  }
  t = d_109(t);
  return(t);
}
ATerm collect_substitutions_0 (ATerm t)
{
  t = collect_split_2(t, IgnoreVar_0, CollectSubst_0);
  return(t);
}
ATerm Annotate_1 (ATerm t, ATerm i_121 (ATerm))
{
  ATerm k_109 = NULL,m_109 = NULL,n_109 = NULL;
  k_109 = t;
  j_109 :
  if(match_cons(k_109, sym__2))
    {
      m_109 = ATgetArgument(k_109, 0);
      n_109 = ATgetArgument(k_109, 1);
      {
        ATerm s_109 = NULL;
        ATerm t_109 = NULL;
        t = i_121(t);
        {
          t_109 = t;
          if(((s_109 != NULL) && (s_109 != t_109)))
            _fail(t_109);
          else
            s_109 = t_109;
        }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(not_null(s_109)), not_null(m_109))), not_null(n_109));
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
  ATerm d_110 = NULL,e_110 = NULL,f_110 = NULL;
  d_110 = t;
  c_110 :
  if(match_cons(d_110, sym__2))
    {
      e_110 = ATgetArgument(d_110, 0);
      f_110 = ATgetArgument(d_110, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_110)), not_null(e_110));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm q_110 = NULL,r_110 = NULL,s_110 = NULL,t_110 = NULL,u_110 = NULL;
  q_110 = t;
  l_110 :
  if(match_cons(q_110, sym__2))
    {
      r_110 = ATgetArgument(q_110, 0);
      s_110 = ATgetArgument(q_110, 1);
      m_110 :
      if(((ATgetType(s_110) == AT_LIST) && ((ATermList) s_110 != ATempty)))
        {
          t_110 = ATgetFirst((ATermList) s_110);
          u_110 = (ATerm) ATgetNext((ATermList) s_110);
          {
            ATerm y_110 = NULL;
            ATerm z_110 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_110), term_g_12);
            {
              t = add_0(t);
              {
                z_110 = t;
                if(((y_110 != NULL) && (y_110 != z_110)))
                  _fail(z_110);
                else
                  y_110 = z_110;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(r_110), not_null(t_110)), (ATerm) ATmakeAppl(sym__2, not_null(y_110), not_null(u_110)));
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
  ATerm k_111 = NULL,l_111 = NULL,m_111 = NULL;
  k_111 = t;
  d_111 :
  if(match_cons(k_111, sym__2))
    {
      l_111 = ATgetArgument(k_111, 0);
      m_111 = ATgetArgument(k_111, 1);
      j_111 :
      if(((ATermList) m_111 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t_113 (ATerm))
{
  ATerm p_111 (ATerm t)
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_113(t);
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        {
          t = r_113(t);
          {
            t = _2(t, t_113, p_111);
            t = s_113(t);
          }
        }
      }
    return(t);
  }
  t = p_111(t);
  return(t);
}
ATerm NZip00_0 (ATerm t)
{
  ATerm r_111 = NULL;
  r_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_11, not_null(r_111));
  return(t);
}
ATerm nzip0_1 (ATerm t, ATerm b_114 (ATerm))
{
  t = NZip00_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, b_114);
  return(t);
}
ATerm Propagate_0 (ATerm t)
{
  ATerm l_112 = NULL,m_112 = NULL,n_112 = NULL,o_112 = NULL,p_112 = NULL,q_112 = NULL,r_112 = NULL;
  ATerm g_113 (ATerm t)
  {
    ATerm u_112 = NULL;
    ATerm v_112 = NULL;
    t = not_null(p_112);
    {
      ATerm v_3 (ATerm t)
      {
        ATerm w_3 (ATerm t)
        {
          t = not_null(o_112);
          return(t);
        }
        t = Annotate_1(t, w_3);
        return(t);
      }
      t = nzip0_1(t, v_3);
      {
        v_112 = t;
        if(((u_112 != NULL) && (u_112 != v_112)))
          _fail(v_112);
        else
          u_112 = v_112;
      }
    }
    t = not_null(u_112);
    return(t);
  }
  ATerm h_113 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(o_112)), term_w_11);
    return(t);
  }
  ATerm i_113 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_112)), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(o_112)), not_null(r_112)));
    return(t);
  }
  ATerm k_113 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(o_112)), (ATerm) ATmakeAppl(sym_Op_2, not_null(q_112), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(o_112)), not_null(r_112))));
    return(t);
  }
  m_112 = t;
  f_112 :
  if(match_cons(m_112, sym_As_2))
    {
      n_112 = ATgetArgument(m_112, 0);
      p_112 = ATgetArgument(m_112, 1);
      i_112 :
      if(match_cons(n_112, sym_Off_1))
        {
          o_112 = ATgetArgument(n_112, 0);
          j_112 :
          if(match_cons(p_112, sym_BuildDefault_1))
            {
              q_112 = ATgetArgument(p_112, 0);
              {
                ATerm v_23 = t;
                int w_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = g_113(t);
                    LocalPopChoice(w_23);
                  }
                else
                  {
                    t = v_23;
                    t = h_113(t);
                  }
              }
            }
          else
            {
              if(match_cons(p_112, sym_As_2))
                {
                  q_112 = ATgetArgument(p_112, 0);
                  r_112 = ATgetArgument(p_112, 1);
                  k_112 :
                  if(match_cons(q_112, sym_Var_1))
                    {
                      l_112 = ATgetArgument(q_112, 0);
                      {
                        ATerm x_23 = t;
                        int y_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = g_113(t);
                            LocalPopChoice(y_23);
                          }
                        else
                          {
                            t = x_23;
                            t = i_113(t);
                          }
                      }
                    }
                  else
                    {
                      t = g_113(t);
                    }
                }
              else
                {
                  if(match_cons(p_112, sym_Op_2))
                    {
                      q_112 = ATgetArgument(p_112, 0);
                      r_112 = ATgetArgument(p_112, 1);
                      {
                        ATerm z_23 = t;
                        int a_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = g_113(t);
                            LocalPopChoice(a_24);
                          }
                        else
                          {
                            t = z_23;
                            t = k_113(t);
                          }
                      }
                    }
                  else
                    {
                      t = g_113(t);
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
ATerm topdown_1 (ATerm t, ATerm k_116 (ATerm))
{
  t = k_116(t);
  {
    ATerm x_3 (ATerm t)
    {
      t = topdown_1(t, k_116);
      return(t);
    }
    t = _all(t, x_3);
  }
  return(t);
}
ATerm term_to_matrix_0 (ATerm t)
{
  ATerm w_113 = NULL;
  ATerm y_113 = NULL,z_113 = NULL,c_114 = NULL;
  w_113 = t;
  {
    t = (ATerm) ATmakeAppl(sym_As_2, term_b_24, (ATerm) ATinsert(ATempty, not_null(w_113)));
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
          y_113 = t;
          p_113 :
          if(match_cons(y_113, sym__2))
            {
              z_113 = ATgetArgument(y_113, 0);
              c_114 = ATgetArgument(y_113, 1);
              {
                ATerm g_114 = NULL;
                ATerm h_114 = NULL;
                t = not_null(z_113);
                {
                  t = collect_offsets_0(t);
                  {
                    h_114 = t;
                    if(((g_114 != NULL) && (g_114 != h_114)))
                      _fail(h_114);
                    else
                      g_114 = h_114;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(g_114), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(z_113), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(c_114)))));
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
  ATerm n_114 = NULL,o_114 = NULL;
  n_114 = t;
  m_114 :
  if(match_cons(n_114, sym_Match_1))
    {
      o_114 = ATgetArgument(n_114, 0);
      {
        t = not_null(o_114);
        t = term_to_matrix_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm z_102 (ATerm), ATerm a_103 (ATerm))
{
  ATerm r_114 (ATerm t)
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_102(t);
        t = r_114(t);
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        t = a_103(t);
      }
    return(t);
  }
  t = r_114(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm c_103 (ATerm))
{
  t = repeat_2(t, c_103, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm m_116 (ATerm))
{
  ATerm s_114 (ATerm t)
  {
    t = m_116(t);
    {
      t = _all(t, s_114);
      t = m_116(t);
    }
    return(t);
  }
  t = s_114(t);
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
ATerm SDef_3 (ATerm t, ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm d_92 (ATerm))
{
  ATerm a_115 = NULL,b_115 = NULL,c_115 = NULL,f_115 = NULL;
  a_115 = t;
  z_114 :
  if(match_cons(a_115, sym_SDef_3))
    {
      b_115 = ATgetArgument(a_115, 0);
      c_115 = ATgetArgument(a_115, 1);
      f_115 = ATgetArgument(a_115, 2);
      {
        ATerm k_115 = NULL,m_115 = NULL;
        ATerm l_115 = NULL;
        t = SSLgetAnnotations(not_null(a_115));
        {
          l_115 = t;
          if(((k_115 != NULL) && (k_115 != l_115)))
            _fail(l_115);
          else
            k_115 = l_115;
        }
        {
          t = not_null(b_115);
          {
            ATerm o_115 = NULL;
            t = b_92(t);
            {
              m_115 = t;
              {
                t = not_null(c_115);
                {
                  ATerm q_115 = NULL;
                  t = c_92(t);
                  {
                    o_115 = t;
                    {
                      t = not_null(f_115);
                      {
                        ATerm s_115 = NULL;
                        t = d_92(t);
                        {
                          q_115 = t;
                          {
                            ATerm t_115 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(m_115), not_null(o_115), not_null(q_115)), not_null(k_115));
                            {
                              t_115 = t;
                              if(((s_115 != NULL) && (s_115 != t_115)))
                                _fail(t_115);
                              else
                                s_115 = t_115;
                            }
                            t = not_null(s_115);
                          }
                        }
                      }
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
ATerm Strategies_1 (ATerm t, ATerm o_90 (ATerm))
{
  ATerm g_116 = NULL,h_116 = NULL;
  g_116 = t;
  f_116 :
  if(match_cons(g_116, sym_Strategies_1))
    {
      h_116 = ATgetArgument(g_116, 0);
      {
        ATerm p_116 = NULL,r_116 = NULL;
        ATerm q_116 = NULL;
        t = SSLgetAnnotations(not_null(g_116));
        {
          q_116 = t;
          if(((p_116 != NULL) && (p_116 != q_116)))
            _fail(q_116);
          else
            p_116 = q_116;
        }
        {
          t = not_null(h_116);
          {
            ATerm t_116 = NULL;
            t = o_90(t);
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
ATerm Specification_1 (ATerm t, ATerm q_90 (ATerm))
{
  ATerm e_117 = NULL,f_117 = NULL;
  e_117 = t;
  d_117 :
  if(match_cons(e_117, sym_Specification_1))
    {
      f_117 = ATgetArgument(e_117, 0);
      {
        ATerm i_117 = NULL,k_117 = NULL;
        ATerm j_117 = NULL;
        t = SSLgetAnnotations(not_null(e_117));
        {
          j_117 = t;
          if(((i_117 != NULL) && (i_117 != j_117)))
            _fail(j_117);
          else
            i_117 = j_117;
        }
        {
          t = not_null(f_117);
          {
            ATerm m_117 = NULL;
            t = q_90(t);
            {
              k_117 = t;
              {
                ATerm n_117 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(k_117)), not_null(i_117));
                {
                  n_117 = t;
                  if(((m_117 != NULL) && (m_117 != n_117)))
                    _fail(n_117);
                  else
                    m_117 = n_117;
                }
                t = not_null(m_117);
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
ATerm apply_to_bodies_1 (ATerm t, ATerm j_121 (ATerm))
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
            t = SDef_3(t, _id, _id, j_121);
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
ATerm _2 (ATerm t, ATerm y_80 (ATerm), ATerm z_80 (ATerm))
{
  ATerm y_117 = NULL,z_117 = NULL,a_118 = NULL;
  y_117 = t;
  x_117 :
  if(match_cons(y_117, sym__2))
    {
      z_117 = ATgetArgument(y_117, 0);
      a_118 = ATgetArgument(y_117, 1);
      {
        ATerm e_118 = NULL,g_118 = NULL;
        ATerm f_118 = NULL;
        t = SSLgetAnnotations(not_null(y_117));
        {
          f_118 = t;
          if(((e_118 != NULL) && (e_118 != f_118)))
            _fail(f_118);
          else
            e_118 = f_118;
        }
        {
          t = not_null(z_117);
          {
            ATerm i_118 = NULL;
            t = y_80(t);
            {
              g_118 = t;
              {
                t = not_null(a_118);
                {
                  ATerm k_118 = NULL;
                  t = z_80(t);
                  {
                    i_118 = t;
                    {
                      ATerm l_118 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_118), not_null(i_118)), not_null(e_118));
                      {
                        l_118 = t;
                        if(((k_118 != NULL) && (k_118 != l_118)))
                          _fail(l_118);
                        else
                          k_118 = l_118;
                      }
                      t = not_null(k_118);
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
  ATerm t_118 = NULL;
  ATerm s_24;
  s_24 = t;
  {
    ATerm j_4 (ATerm t)
    {
      ATerm u_118 = NULL,v_118 = NULL;
      u_118 = t;
      s_118 :
      if(match_cons(u_118, sym_Program_1))
        {
          v_118 = ATgetArgument(u_118, 0);
          if(((t_118 != NULL) && (t_118 != v_118)))
            _fail(v_118);
          else
            t_118 = v_118;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, j_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_24), not_null(t_118)), term_u_24));
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
  ATerm z_118 = NULL,a_119 = NULL,b_119 = NULL;
  z_118 = t;
  y_118 :
  if(match_cons(z_118, sym__2))
    {
      a_119 = ATgetArgument(z_118, 0);
      b_119 = ATgetArgument(z_118, 1);
      {
        ATerm w_24;
        w_24 = t;
        t = SSL_printnl(not_null(a_119), not_null(b_119));
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
  ATerm h_119 = NULL,i_119 = NULL,j_119 = NULL;
  h_119 = t;
  g_119 :
  if(match_cons(h_119, sym__2))
    {
      i_119 = ATgetArgument(h_119, 0);
      j_119 = ATgetArgument(h_119, 1);
      {
        t = not_null(i_119);
        {
          ATerm k_4 (ATerm t)
          {
            t = not_null(j_119);
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
ATerm debug_1 (ATerm t, ATerm d_99 (ATerm))
{
  ATerm x_24;
  x_24 = t;
  {
    ATerm p_119 = NULL,r_119 = NULL;
    ATerm y_24;
    y_24 = t;
    {
      ATerm q_119 = NULL;
      t = d_99(t);
      {
        q_119 = t;
        if(((p_119 != NULL) && (p_119 != q_119)))
          _fail(q_119);
        else
          p_119 = q_119;
      }
    }
    t = y_24;
    {
      ATerm s_119 = NULL;
      s_119 = t;
      if(((r_119 != NULL) && (r_119 != s_119)))
        _fail(s_119);
      else
        r_119 = s_119;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_119)), not_null(p_119)));
        t = printnl_0(t);
      }
    }
  }
  t = x_24;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm w_119 = NULL;
  w_119 = t;
  t = SSL_is_string(not_null(w_119));
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
              ATerm f_120 = NULL,o_120 = NULL,p_120 = NULL;
              f_120 = t;
              e_120 :
              if(match_cons(f_120, sym_Path_1))
                {
                  o_120 = ATgetArgument(f_120, 0);
                  t = not_null(o_120);
                }
              else
                {
                  if(match_cons(f_120, sym_Var_1))
                    {
                      o_120 = ATgetArgument(f_120, 0);
                      {
                        t = not_null(o_120);
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
                      if(match_cons(f_120, sym_Prefix_2))
                        {
                          o_120 = ATgetArgument(f_120, 0);
                          p_120 = ATgetArgument(f_120, 1);
                          {
                            ATerm u_120 = NULL,w_120 = NULL;
                            ATerm m_25;
                            m_25 = t;
                            {
                              ATerm v_120 = NULL;
                              t = not_null(o_120);
                              {
                                t = eval_config_0(t);
                                {
                                  v_120 = t;
                                  if(((u_120 != NULL) && (u_120 != v_120)))
                                    _fail(v_120);
                                  else
                                    u_120 = v_120;
                                }
                              }
                            }
                            t = m_25;
                            {
                              ATerm x_120 = NULL;
                              t = not_null(p_120);
                              {
                                t = eval_config_0(t);
                                {
                                  x_120 = t;
                                  if(((w_120 != NULL) && (w_120 != x_120)))
                                    _fail(x_120);
                                  else
                                    w_120 = x_120;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_120), not_null(w_120));
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
  ATerm f_121 = NULL;
  f_121 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_25, not_null(f_121));
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
                t = (ATerm) ATmakeAppl(sym__3, term_p_25, not_null(f_121), not_null(k_121));
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
ATerm if_verbose2_1 (ATerm t, ATerm n_96 (ATerm))
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
    t = n_96(t);
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
ATerm foldr_2 (ATerm t, ATerm f_108 (ATerm), ATerm g_108 (ATerm))
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = f_108(t);
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
                t = foldr_2(t, f_108, g_108);
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
                t = g_108(t);
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
ATerm crush_2 (ATerm t, ATerm u_109 (ATerm), ATerm v_109 (ATerm))
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
      t = foldr_2(t, u_109, v_109);
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
ATerm if_verbose1_1 (ATerm t, ATerm m_96 (ATerm))
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
    t = m_96(t);
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
ATerm apply_strategy_1 (ATerm t, ATerm n_98 (ATerm))
{
  ATerm k_125 = NULL,m_125 = NULL,n_125 = NULL,o_125 = NULL;
  ATerm h_27;
  h_27 = t;
  t = dtime_0(t);
  t = h_27;
  {
    t = n_98(t);
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
ATerm split_2 (ATerm t, ATerm d_115 (ATerm), ATerm e_115 (ATerm))
{
  ATerm z_125 = NULL,b_126 = NULL;
  ATerm j_27;
  j_27 = t;
  {
    ATerm a_126 = NULL;
    t = d_115(t);
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
    t = e_115(t);
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
ATerm need_help_1 (ATerm t, ATerm l_98 (ATerm))
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
  t = l_98(t);
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
              ATerm a_129 = NULL;
              ATerm r_28;
              r_28 = t;
              {
                ATerm y_128 = NULL;
                ATerm z_128 = NULL;
                z_128 = t;
                if(((y_128 != NULL) && (y_128 != z_128)))
                  _fail(z_128);
                else
                  y_128 = z_128;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_28, not_null(y_128));
                  t = set_config_0(t);
                }
              }
              t = r_28;
              {
                ATerm b_129 = NULL;
                b_129 = t;
                if(((a_129 != NULL) && (a_129 != b_129)))
                  _fail(b_129);
                else
                  a_129 = b_129;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_129));
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
                    ATerm c_129 = NULL;
                    c_129 = t;
                    l_128 :
                    if(!(match_string(c_129, "-S")))
                      {
                        if(!(match_string(c_129, "--silent")))
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
                          ATerm d_129 = NULL;
                          d_129 = t;
                          m_128 :
                          if(!(match_string(d_129, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm m_5 (ATerm t)
                        {
                          ATerm g_129 = NULL;
                          ATerm b_29;
                          b_29 = t;
                          {
                            ATerm e_129 = NULL;
                            ATerm f_129 = NULL;
                            t = string_to_int_0(t);
                            {
                              f_129 = t;
                              if(((e_129 != NULL) && (e_129 != f_129)))
                                _fail(f_129);
                              else
                                e_129 = f_129;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_x_25, not_null(e_129));
                              t = set_config_0(t);
                            }
                          }
                          t = b_29;
                          {
                            ATerm h_129 = NULL;
                            h_129 = t;
                            if(((g_129 != NULL) && (g_129 != h_129)))
                              _fail(h_129);
                            else
                              g_129 = h_129;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(g_129));
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
                                ATerm i_129 = NULL;
                                i_129 = t;
                                p_128 :
                                if(!(match_string(i_129, "-v")))
                                  {
                                    if(!(match_string(i_129, "--version")))
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
                                      ATerm j_129 = NULL;
                                      j_129 = t;
                                      q_128 :
                                      if(!(match_string(j_129, "-b")))
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
                                        ATerm k_129 = NULL;
                                        k_129 = t;
                                        r_128 :
                                        if(!(match_string(k_129, "-s")))
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
  ATerm s_129 = NULL;
  s_129 = t;
  t = SSL_table_destroy(not_null(s_129));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm w_129 = NULL;
  w_129 = t;
  t = SSL_exit(not_null(w_129));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm a_130 = NULL;
  a_130 = t;
  t = SSL_implode_string(not_null(a_130));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_112 (ATerm))
{
  ATerm d_130 (ATerm t)
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_130);
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
        {
          t = Nil_0(t);
          t = g_112(t);
        }
      }
    return(t);
  }
  t = d_130(t);
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
        ATerm g_130 = NULL,h_130 = NULL,i_130 = NULL;
        g_130 = t;
        f_130 :
        if(((ATgetType(g_130) == AT_LIST) && ((ATermList) g_130 != ATempty)))
          {
            h_130 = ATgetFirst((ATermList) g_130);
            i_130 = (ATerm) ATgetNext((ATermList) g_130);
            {
              t = not_null(h_130);
              {
                ATerm x_5 (ATerm t)
                {
                  t = not_null(i_130);
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
  ATerm o_130 = NULL;
  o_130 = t;
  t = SSL_explode_string(not_null(o_130));
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
ATerm long_description_1 (ATerm t, ATerm m_95 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_111 (ATerm))
{
  ATerm r_130 (ATerm t)
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
        t = Cons_2(t, s_111, r_130);
      }
    return(t);
  }
  t = r_130(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm y_130 = NULL,z_130 = NULL,a_131 = NULL;
  a_131 = t;
  x_130 :
  if(((ATgetType(a_131) == AT_LIST) && ((ATermList) a_131 != ATempty)))
    {
      y_130 = ATgetFirst((ATermList) a_131);
      z_130 = (ATerm) ATgetNext((ATermList) a_131);
      {
        ATerm d_131 = NULL;
        t = not_null(z_130);
        {
          ATerm w_30;
          w_30 = t;
          {
            ATerm e_131 = NULL,g_131 = NULL,i_131 = NULL;
            ATerm x_30;
            x_30 = t;
            {
              ATerm f_131 = NULL;
              t = j_0(t);
              {
                f_131 = t;
                if(((e_131 != NULL) && (e_131 != f_131)))
                  _fail(f_131);
                else
                  e_131 = f_131;
              }
            }
            t = x_30;
            {
              ATerm h_131 = NULL;
              t = not_null(y_130);
              {
                t = i_0(t);
                {
                  h_131 = t;
                  if(((g_131 != NULL) && (g_131 != h_131)))
                    _fail(h_131);
                  else
                    g_131 = h_131;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_131)), not_null(g_131));
                {
                  i_131 = t;
                  if(((d_131 != NULL) && (d_131 != i_131)))
                    _fail(i_131);
                  else
                    d_131 = i_131;
                }
              }
            }
          }
          t = w_30;
          {
            ATerm y_5 (ATerm t)
            {
              t = not_null(d_131);
              return(t);
            }
            t = reverse_acc_2(t, i_0, y_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) a_131 == ATempty))
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
ATerm short_description_1 (ATerm t, ATerm l_95 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_82 (ATerm))
{
  ATerm t_131 = NULL,u_131 = NULL;
  t_131 = t;
  s_131 :
  if(match_cons(t_131, sym_Program_1))
    {
      u_131 = ATgetArgument(t_131, 0);
      {
        ATerm x_131 = NULL,z_131 = NULL;
        ATerm y_131 = NULL;
        t = SSLgetAnnotations(not_null(t_131));
        {
          y_131 = t;
          if(((x_131 != NULL) && (x_131 != y_131)))
            _fail(y_131);
          else
            x_131 = y_131;
        }
        {
          t = not_null(u_131);
          {
            ATerm b_132 = NULL;
            t = m_82(t);
            {
              z_131 = t;
              {
                ATerm c_132 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(z_131)), not_null(x_131));
                {
                  c_132 = t;
                  if(((b_132 != NULL) && (b_132 != c_132)))
                    _fail(c_132);
                  else
                    b_132 = c_132;
                }
                t = not_null(b_132);
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
  ATerm m_132 = NULL;
  ATerm a_6 (ATerm t)
  {
    ATerm b_6 (ATerm t)
    {
      ATerm n_132 = NULL;
      n_132 = t;
      if(((m_132 != NULL) && (m_132 != n_132)))
        _fail(n_132);
      else
        m_132 = n_132;
      return(t);
    }
    t = Program_1(t, b_6);
    return(t);
  }
  t = option_defined_1(t, a_6);
  {
    ATerm c_6 (ATerm t)
    {
      ATerm o_132 = NULL;
      ATerm p_132 = NULL;
      t = term_j_29;
      {
        ATerm d_6 (ATerm t)
        {
          t = not_null(m_132);
          return(t);
        }
        t = short_description_1(t, d_6);
        {
          t = concat_strings_0(t);
          {
            p_132 = t;
            if(((o_132 != NULL) && (o_132 != p_132)))
              _fail(p_132);
            else
              o_132 = p_132;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATempty, not_null(o_132)));
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
                  ATerm q_132 = NULL;
                  q_132 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_132)), term_c_31));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, e_6);
                {
                  ATerm f_6 (ATerm t)
                  {
                    ATerm s_132 = NULL;
                    ATerm u_132 = NULL;
                    t = term_j_29;
                    {
                      ATerm g_6 (ATerm t)
                      {
                        t = not_null(m_132);
                        return(t);
                      }
                      t = long_description_1(t, g_6);
                      {
                        t = concat_strings_0(t);
                        {
                          u_132 = t;
                          if(((s_132 != NULL) && (s_132 != u_132)))
                            _fail(u_132);
                          else
                            s_132 = u_132;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_132)), term_f_31));
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
ATerm Undefined_1 (ATerm t, ATerm n_82 (ATerm))
{
  ATerm e_133 = NULL,f_133 = NULL;
  e_133 = t;
  d_133 :
  if(match_cons(e_133, sym_Undefined_1))
    {
      f_133 = ATgetArgument(e_133, 0);
      {
        ATerm i_133 = NULL,k_133 = NULL;
        ATerm j_133 = NULL;
        t = SSLgetAnnotations(not_null(e_133));
        {
          j_133 = t;
          if(((i_133 != NULL) && (i_133 != j_133)))
            _fail(j_133);
          else
            i_133 = j_133;
        }
        {
          t = not_null(f_133);
          {
            ATerm m_133 = NULL;
            t = n_82(t);
            {
              k_133 = t;
              {
                ATerm n_133 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(k_133)), not_null(i_133));
                {
                  n_133 = t;
                  if(((m_133 != NULL) && (m_133 != n_133)))
                    _fail(n_133);
                  else
                    m_133 = n_133;
                }
                t = not_null(m_133);
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
ATerm fetch_1 (ATerm t, ATerm a_112 (ATerm))
{
  ATerm s_133 (ATerm t)
  {
    ATerm k_31 = t;
    int l_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_112, _id);
        LocalPopChoice(l_31);
      }
    else
      {
        t = k_31;
        t = Cons_2(t, _id, s_133);
      }
    return(t);
  }
  t = s_133(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_96 (ATerm))
{
  t = fetch_1(t, k_96);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_133 = NULL;
  x_133 = t;
  w_133 :
  if(match_cons(x_133, sym_Help_0))
    {
      ATerm z_133 = NULL,b_134 = NULL;
      ATerm m_31;
      m_31 = t;
      {
        ATerm a_134 = NULL;
        t = SSLgetAnnotations(not_null(x_133));
        {
          a_134 = t;
          if(((z_133 != NULL) && (z_133 != a_134)))
            _fail(a_134);
          else
            z_133 = a_134;
        }
      }
      t = m_31;
      {
        ATerm c_134 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(z_133));
        {
          c_134 = t;
          if(((b_134 != NULL) && (b_134 != c_134)))
            _fail(c_134);
          else
            b_134 = c_134;
        }
        t = not_null(b_134);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_115 (ATerm))
{
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_115(t);
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
  ATerm i_134 = NULL,j_134 = NULL,k_134 = NULL;
  i_134 = t;
  h_134 :
  if(match_cons(i_134, sym__2))
    {
      j_134 = ATgetArgument(i_134, 0);
      k_134 = ATgetArgument(i_134, 1);
      t = SSL_table_get(not_null(j_134), not_null(k_134));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm r_134 = NULL,s_134 = NULL,t_134 = NULL,u_134 = NULL;
  r_134 = t;
  q_134 :
  if(match_cons(r_134, sym__3))
    {
      s_134 = ATgetArgument(r_134, 0);
      t_134 = ATgetArgument(r_134, 1);
      u_134 = ATgetArgument(r_134, 2);
      {
        ATerm p_31;
        p_31 = t;
        {
          ATerm y_134 = NULL;
          ATerm z_134 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_134), not_null(t_134));
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
              z_134 = t;
              if(((y_134 != NULL) && (y_134 != z_134)))
                _fail(z_134);
              else
                y_134 = z_134;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_134), not_null(t_134), (ATerm) ATinsert(CheckATermList(not_null(y_134)), not_null(u_134)));
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
ATerm register_usage_1 (ATerm t, ATerm q_95 (ATerm))
{
  ATerm d_135 = NULL;
  ATerm e_135 = NULL;
  t = term_j_29;
  {
    t = q_95(t);
    {
      e_135 = t;
      if(((d_135 != NULL) && (d_135 != e_135)))
        _fail(e_135);
      else
        d_135 = e_135;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_z_30, term_a_31, not_null(d_135));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm k_135 = NULL,l_135 = NULL,m_135 = NULL;
  k_135 = t;
  j_135 :
  if(match_string(k_135, "register-usage-info"))
    {
      t = register_usage_1(t, h_0);
    }
  else
    {
      if(((ATgetType(k_135) == AT_LIST) && ((ATermList) k_135 != ATempty)))
        {
          l_135 = ATgetFirst((ATermList) k_135);
          m_135 = (ATerm) ATgetNext((ATermList) k_135);
          {
            ATerm p_135 = NULL;
            ATerm s_31;
            s_31 = t;
            {
              t = not_null(l_135);
              t = c_0(t);
            }
            t = s_31;
            {
              ATerm q_135 = NULL;
              t = term_j_29;
              {
                t = d_0(t);
                {
                  q_135 = t;
                  if(((p_135 != NULL) && (p_135 != q_135)))
                    _fail(q_135);
                  else
                    p_135 = q_135;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(m_135)), not_null(p_135));
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
    ATerm v_135 = NULL;
    v_135 = t;
    u_135 :
    if(!(match_string(v_135, "--help")))
      {
        if(!(match_string(v_135, "-h")))
          {
            if(!(match_string(v_135, "-?")))
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
  ATerm z_135 = NULL,a_136 = NULL,b_136 = NULL;
  z_135 = t;
  x_135 :
  if(((ATgetType(z_135) == AT_LIST) && ((ATermList) z_135 != ATempty)))
    {
      a_136 = ATgetFirst((ATermList) z_135);
      b_136 = (ATerm) ATgetNext((ATermList) z_135);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_136)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_136)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_93 (ATerm), ATerm h_93 (ATerm))
{
  ATerm l_136 = NULL,m_136 = NULL,n_136 = NULL;
  l_136 = t;
  k_136 :
  if(((ATgetType(l_136) == AT_LIST) && ((ATermList) l_136 != ATempty)))
    {
      m_136 = ATgetFirst((ATermList) l_136);
      n_136 = (ATerm) ATgetNext((ATermList) l_136);
      {
        ATerm r_136 = NULL,t_136 = NULL;
        ATerm s_136 = NULL;
        t = SSLgetAnnotations(not_null(l_136));
        {
          s_136 = t;
          if(((r_136 != NULL) && (r_136 != s_136)))
            _fail(s_136);
          else
            r_136 = s_136;
        }
        {
          t = not_null(m_136);
          {
            ATerm v_136 = NULL;
            t = g_93(t);
            {
              t_136 = t;
              {
                t = not_null(n_136);
                {
                  ATerm x_136 = NULL;
                  t = h_93(t);
                  {
                    v_136 = t;
                    {
                      ATerm z_136 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(v_136)), not_null(t_136)), not_null(r_136));
                      {
                        z_136 = t;
                        if(((x_136 != NULL) && (x_136 != z_136)))
                          _fail(z_136);
                        else
                          x_136 = z_136;
                      }
                      t = not_null(x_136);
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
ATerm parse_options_p__1 (ATerm t, ATerm o_95 (ATerm))
{
  ATerm w_31;
  w_31 = t;
  {
    ATerm k_6 (ATerm t)
    {
      t = term_x_31;
      t = o_95(t);
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
                t = o_95(t);
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
ATerm parse_options_1 (ATerm t, ATerm n_95 (ATerm))
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
          t = n_95(t);
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
ATerm iowrap_4 (ATerm t, ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm c_98 (ATerm))
{
  ATerm r_6 (ATerm t)
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_98(t);
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
      t = c_98(t);
      {
        ATerm p_32 = t;
        int q_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, b_98);
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
                    t = apply_strategy_1(t, z_97);
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
ATerm iowrap_3 (ATerm t, ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm))
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
  t = iowrap_4(t, t_97, u_97, v_97, s_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm r_97 (ATerm), ATerm s_97 (ATerm))
{
  t = iowrap_3(t, r_97, s_97, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm o_97 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    t = _2(t, _id, o_97);
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
